// Lean compiler output
// Module: Lean.Meta.Constructions.CasesOnSameCtor
// Imports: public import Lean.Meta.Basic import Lean.Meta.CompletionName import Lean.Meta.Constructions.CtorIdx import Lean.Meta.Constructions.CtorElim import Lean.Elab.App import Lean.Meta.SameCtorUtils
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
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_array_mk(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withSharedCtorIndices___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_elabAsElim;
lean_object* l_Lean_Meta_Match_Extension_addMatcherInfo(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_mkConstructorElimName(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Meta_markMatcherLike(lean_object*, lean_object*);
lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Meta_addToCompletionBlackList(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object**);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__7 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__7_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__6 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_value),((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_value),((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__8 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__8_value),((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_value),((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_value),((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__6_value),((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__9 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__9_value),((lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_value)}};
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__10 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__12 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__12_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__13 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__13_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__14 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__14_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__15 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0 = (const lean_object*)&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object**);
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "motive"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 10, 150, 230, 97, 79, 179, 234)}};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object**);
static const lean_ctor_object l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` to declaration `"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` because it is in an imported module"};
static const lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "` because it is not from the present async context"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Meta.Constructions.CasesOnSameCtor"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__0_value;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.mkCasesOnSameCtorHet"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__1_value;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "unexpected universe levels on `casesOn`"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__2 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__2_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__3;
static const lean_string_object l_Lean_mkCasesOnSameCtorHet___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_mkCasesOnSameCtorHet___closed__4 = (const lean_object*)&l_Lean_mkCasesOnSameCtorHet___closed__4_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__5;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "could not apply "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " to close\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "unifyEqns\? unexpectedly closed goal"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___lam__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object**);
static const lean_string_object l_Lean_mkCasesOnSameCtor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "het"};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__0 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__0_value;
static const lean_ctor_object l_Lean_mkCasesOnSameCtor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkCasesOnSameCtor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 194, 63, 63, 137, 239, 65, 92)}};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__1 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__1_value;
static const lean_string_object l_Lean_mkCasesOnSameCtor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.mkCasesOnSameCtor"};
static const lean_object* l_Lean_mkCasesOnSameCtor___closed__2 = (const lean_object*)&l_Lean_mkCasesOnSameCtor___closed__2_value;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__3;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__4;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; uint8_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = 0;
v___x_29_ = lean_box(0);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_28_, v___x_29_, v_type_19_, v___f_27_, v_cleanupAnnotations_21_, v___x_28_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_cleanupAnnotations_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_49_);
v_res_56_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_47_, v_k_48_, v_cleanupAnnotations_boxed_55_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object* v_00_u03b1_57_, lean_object* v_type_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object* v_00_u03b1_67_, lean_object* v_type_68_, lean_object* v_k_69_, lean_object* v_cleanupAnnotations_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_76_; lean_object* v_res_77_; 
v_cleanupAnnotations_boxed_76_ = lean_unbox(v_cleanupAnnotations_70_);
v_res_77_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(v_00_u03b1_67_, v_type_68_, v_k_69_, v_cleanupAnnotations_boxed_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object* v_k_78_, lean_object* v_b_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
lean_inc(v___y_83_);
lean_inc_ref(v___y_82_);
lean_inc(v___y_81_);
lean_inc_ref(v___y_80_);
v___x_85_ = lean_apply_6(v_k_78_, v_b_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, lean_box(0));
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object* v_k_86_, lean_object* v_b_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(v_k_86_, v_b_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object* v_name_94_, uint8_t v_bi_95_, lean_object* v_type_96_, lean_object* v_k_97_, uint8_t v_kind_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___f_104_; lean_object* v___x_105_; 
v___f_104_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_104_, 0, v_k_97_);
v___x_105_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_94_, v_bi_95_, v_type_96_, v___f_104_, v_kind_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_105_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_105_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
v_a_114_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_105_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_105_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object* v_name_122_, lean_object* v_bi_123_, lean_object* v_type_124_, lean_object* v_k_125_, lean_object* v_kind_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
uint8_t v_bi_boxed_132_; uint8_t v_kind_boxed_133_; lean_object* v_res_134_; 
v_bi_boxed_132_ = lean_unbox(v_bi_123_);
v_kind_boxed_133_ = lean_unbox(v_kind_126_);
v_res_134_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_122_, v_bi_boxed_132_, v_type_124_, v_k_125_, v_kind_boxed_133_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object* v_00_u03b1_135_, lean_object* v_name_136_, uint8_t v_bi_137_, lean_object* v_type_138_, lean_object* v_k_139_, uint8_t v_kind_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_136_, v_bi_137_, v_type_138_, v_k_139_, v_kind_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object* v_00_u03b1_147_, lean_object* v_name_148_, lean_object* v_bi_149_, lean_object* v_type_150_, lean_object* v_k_151_, lean_object* v_kind_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
uint8_t v_bi_boxed_158_; uint8_t v_kind_boxed_159_; lean_object* v_res_160_; 
v_bi_boxed_158_ = lean_unbox(v_bi_149_);
v_kind_boxed_159_ = lean_unbox(v_kind_152_);
v_res_160_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(v_00_u03b1_147_, v_name_148_, v_bi_boxed_158_, v_type_150_, v_k_151_, v_kind_boxed_159_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object* v_type_161_, lean_object* v_maxFVars_x3f_162_, lean_object* v_k_163_, uint8_t v_cleanupAnnotations_164_, uint8_t v_whnfType_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___f_171_; lean_object* v___x_172_; 
v___f_171_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_171_, 0, v_k_163_);
v___x_172_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_161_, v_maxFVars_x3f_162_, v___f_171_, v_cleanupAnnotations_164_, v_whnfType_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
v_a_181_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_172_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_172_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object* v_type_189_, lean_object* v_maxFVars_x3f_190_, lean_object* v_k_191_, lean_object* v_cleanupAnnotations_192_, lean_object* v_whnfType_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_199_; uint8_t v_whnfType_boxed_200_; lean_object* v_res_201_; 
v_cleanupAnnotations_boxed_199_ = lean_unbox(v_cleanupAnnotations_192_);
v_whnfType_boxed_200_ = lean_unbox(v_whnfType_193_);
v_res_201_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_189_, v_maxFVars_x3f_190_, v_k_191_, v_cleanupAnnotations_boxed_199_, v_whnfType_boxed_200_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object* v_00_u03b1_202_, lean_object* v_type_203_, lean_object* v_maxFVars_x3f_204_, lean_object* v_k_205_, uint8_t v_cleanupAnnotations_206_, uint8_t v_whnfType_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_203_, v_maxFVars_x3f_204_, v_k_205_, v_cleanupAnnotations_206_, v_whnfType_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object* v_00_u03b1_214_, lean_object* v_type_215_, lean_object* v_maxFVars_x3f_216_, lean_object* v_k_217_, lean_object* v_cleanupAnnotations_218_, lean_object* v_whnfType_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_225_; uint8_t v_whnfType_boxed_226_; lean_object* v_res_227_; 
v_cleanupAnnotations_boxed_225_ = lean_unbox(v_cleanupAnnotations_218_);
v_whnfType_boxed_226_ = lean_unbox(v_whnfType_219_);
v_res_227_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(v_00_u03b1_214_, v_type_215_, v_maxFVars_x3f_216_, v_k_217_, v_cleanupAnnotations_boxed_225_, v_whnfType_boxed_226_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object* v_name_228_, lean_object* v_levelParams_229_, lean_object* v_type_230_, lean_object* v_value_231_, lean_object* v_hints_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; uint8_t v___y_237_; uint8_t v___y_244_; lean_object* v_env_247_; uint8_t v___x_248_; 
v___x_235_ = lean_st_ref_get(v___y_233_);
v_env_247_ = lean_ctor_get(v___x_235_, 0);
lean_inc_ref_n(v_env_247_, 2);
lean_dec(v___x_235_);
v___x_248_ = l_Lean_Environment_hasUnsafe(v_env_247_, v_type_230_);
if (v___x_248_ == 0)
{
uint8_t v___x_249_; 
v___x_249_ = l_Lean_Environment_hasUnsafe(v_env_247_, v_value_231_);
v___y_244_ = v___x_249_;
goto v___jp_243_;
}
else
{
lean_dec_ref(v_env_247_);
v___y_244_ = v___x_248_;
goto v___jp_243_;
}
v___jp_236_:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_inc(v_name_228_);
v___x_238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_238_, 0, v_name_228_);
lean_ctor_set(v___x_238_, 1, v_levelParams_229_);
lean_ctor_set(v___x_238_, 2, v_type_230_);
v___x_239_ = lean_box(0);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v_name_228_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_241_, 0, v___x_238_);
lean_ctor_set(v___x_241_, 1, v_value_231_);
lean_ctor_set(v___x_241_, 2, v_hints_232_);
lean_ctor_set(v___x_241_, 3, v___x_240_);
lean_ctor_set_uint8(v___x_241_, sizeof(void*)*4, v___y_237_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
v___jp_243_:
{
if (v___y_244_ == 0)
{
uint8_t v___x_245_; 
v___x_245_ = 1;
v___y_237_ = v___x_245_;
goto v___jp_236_;
}
else
{
uint8_t v___x_246_; 
v___x_246_ = 0;
v___y_237_ = v___x_246_;
goto v___jp_236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object* v_name_250_, lean_object* v_levelParams_251_, lean_object* v_type_252_, lean_object* v_value_253_, lean_object* v_hints_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_250_, v_levelParams_251_, v_type_252_, v_value_253_, v_hints_254_, v___y_255_);
lean_dec(v___y_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object* v_name_258_, lean_object* v_levelParams_259_, lean_object* v_type_260_, lean_object* v_value_261_, lean_object* v_hints_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_258_, v_levelParams_259_, v_type_260_, v_value_261_, v_hints_262_, v___y_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object* v_name_269_, lean_object* v_levelParams_270_, lean_object* v_type_271_, lean_object* v_value_272_, lean_object* v_hints_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(v_name_269_, v_levelParams_270_, v_type_271_, v_value_272_, v_hints_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object* v___y_280_, uint8_t v_isExporting_281_, lean_object* v___x_282_, lean_object* v___y_283_, lean_object* v___x_284_, lean_object* v_a_x3f_285_){
_start:
{
lean_object* v___x_287_; lean_object* v_env_288_; lean_object* v_nextMacroScope_289_; lean_object* v_ngen_290_; lean_object* v_auxDeclNGen_291_; lean_object* v_traceState_292_; lean_object* v_messages_293_; lean_object* v_infoState_294_; lean_object* v_snapshotTasks_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_320_; 
v___x_287_ = lean_st_ref_take(v___y_280_);
v_env_288_ = lean_ctor_get(v___x_287_, 0);
v_nextMacroScope_289_ = lean_ctor_get(v___x_287_, 1);
v_ngen_290_ = lean_ctor_get(v___x_287_, 2);
v_auxDeclNGen_291_ = lean_ctor_get(v___x_287_, 3);
v_traceState_292_ = lean_ctor_get(v___x_287_, 4);
v_messages_293_ = lean_ctor_get(v___x_287_, 6);
v_infoState_294_ = lean_ctor_get(v___x_287_, 7);
v_snapshotTasks_295_ = lean_ctor_get(v___x_287_, 8);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_320_ == 0)
{
lean_object* v_unused_321_; 
v_unused_321_ = lean_ctor_get(v___x_287_, 5);
lean_dec(v_unused_321_);
v___x_297_ = v___x_287_;
v_isShared_298_ = v_isSharedCheck_320_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_snapshotTasks_295_);
lean_inc(v_infoState_294_);
lean_inc(v_messages_293_);
lean_inc(v_traceState_292_);
lean_inc(v_auxDeclNGen_291_);
lean_inc(v_ngen_290_);
lean_inc(v_nextMacroScope_289_);
lean_inc(v_env_288_);
lean_dec(v___x_287_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_320_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = l_Lean_Environment_setExporting(v_env_288_, v_isExporting_281_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 5, v___x_282_);
lean_ctor_set(v___x_297_, 0, v___x_299_);
v___x_301_ = v___x_297_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_nextMacroScope_289_);
lean_ctor_set(v_reuseFailAlloc_319_, 2, v_ngen_290_);
lean_ctor_set(v_reuseFailAlloc_319_, 3, v_auxDeclNGen_291_);
lean_ctor_set(v_reuseFailAlloc_319_, 4, v_traceState_292_);
lean_ctor_set(v_reuseFailAlloc_319_, 5, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_319_, 6, v_messages_293_);
lean_ctor_set(v_reuseFailAlloc_319_, 7, v_infoState_294_);
lean_ctor_set(v_reuseFailAlloc_319_, 8, v_snapshotTasks_295_);
v___x_301_ = v_reuseFailAlloc_319_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v_mctx_304_; lean_object* v_zetaDeltaFVarIds_305_; lean_object* v_postponed_306_; lean_object* v_diag_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_317_; 
v___x_302_ = lean_st_ref_put(v___y_280_, v___x_301_);
v___x_303_ = lean_st_ref_take(v___y_283_);
v_mctx_304_ = lean_ctor_get(v___x_303_, 0);
v_zetaDeltaFVarIds_305_ = lean_ctor_get(v___x_303_, 2);
v_postponed_306_ = lean_ctor_get(v___x_303_, 3);
v_diag_307_ = lean_ctor_get(v___x_303_, 4);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_317_ == 0)
{
lean_object* v_unused_318_; 
v_unused_318_ = lean_ctor_get(v___x_303_, 1);
lean_dec(v_unused_318_);
v___x_309_ = v___x_303_;
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_diag_307_);
lean_inc(v_postponed_306_);
lean_inc(v_zetaDeltaFVarIds_305_);
lean_inc(v_mctx_304_);
lean_dec(v___x_303_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_311_ = lean_box(0);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v___x_284_);
v___x_313_ = v___x_309_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_mctx_304_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_316_, 2, v_zetaDeltaFVarIds_305_);
lean_ctor_set(v_reuseFailAlloc_316_, 3, v_postponed_306_);
lean_ctor_set(v_reuseFailAlloc_316_, 4, v_diag_307_);
v___x_313_ = v_reuseFailAlloc_316_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_st_ref_put(v___y_283_, v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_311_);
return v___x_315_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object* v___y_322_, lean_object* v_isExporting_323_, lean_object* v___x_324_, lean_object* v___y_325_, lean_object* v___x_326_, lean_object* v_a_x3f_327_, lean_object* v___y_328_){
_start:
{
uint8_t v_isExporting_boxed_329_; lean_object* v_res_330_; 
v_isExporting_boxed_329_ = lean_unbox(v_isExporting_323_);
v_res_330_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_322_, v_isExporting_boxed_329_, v___x_324_, v___y_325_, v___x_326_, v_a_x3f_327_);
lean_dec(v_a_x3f_327_);
lean_dec(v___y_325_);
lean_dec(v___y_322_);
return v_res_330_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_331_; 
v___x_331_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_331_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0);
v___x_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
return v___x_333_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_334_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
return v___x_335_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_337_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
lean_ctor_set(v___x_337_, 2, v___x_336_);
lean_ctor_set(v___x_337_, 3, v___x_336_);
lean_ctor_set(v___x_337_, 4, v___x_336_);
lean_ctor_set(v___x_337_, 5, v___x_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object* v_x_338_, uint8_t v_isExporting_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___x_345_; lean_object* v_env_346_; lean_object* v___x_347_; uint8_t v_isModule_348_; 
v___x_345_ = lean_st_ref_get(v___y_343_);
v_env_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc_ref(v_env_346_);
lean_dec(v___x_345_);
v___x_347_ = l_Lean_Environment_header(v_env_346_);
v_isModule_348_ = lean_ctor_get_uint8(v___x_347_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_347_);
if (v_isModule_348_ == 0)
{
lean_object* v___x_349_; 
lean_dec_ref(v_env_346_);
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v___x_349_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
return v___x_349_;
}
else
{
uint8_t v_isExporting_350_; 
v_isExporting_350_ = lean_ctor_get_uint8(v_env_346_, sizeof(void*)*8);
lean_dec_ref(v_env_346_);
if (v_isExporting_339_ == 0)
{
if (v_isExporting_350_ == 0)
{
lean_object* v___x_416_; 
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v___x_416_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
return v___x_416_;
}
else
{
goto v___jp_351_;
}
}
else
{
if (v_isExporting_350_ == 0)
{
goto v___jp_351_;
}
else
{
lean_object* v___x_417_; 
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v___x_417_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
return v___x_417_;
}
}
v___jp_351_:
{
lean_object* v___x_352_; lean_object* v_env_353_; lean_object* v_nextMacroScope_354_; lean_object* v_ngen_355_; lean_object* v_auxDeclNGen_356_; lean_object* v_traceState_357_; lean_object* v_messages_358_; lean_object* v_infoState_359_; lean_object* v_snapshotTasks_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_414_; 
v___x_352_ = lean_st_ref_take(v___y_343_);
v_env_353_ = lean_ctor_get(v___x_352_, 0);
v_nextMacroScope_354_ = lean_ctor_get(v___x_352_, 1);
v_ngen_355_ = lean_ctor_get(v___x_352_, 2);
v_auxDeclNGen_356_ = lean_ctor_get(v___x_352_, 3);
v_traceState_357_ = lean_ctor_get(v___x_352_, 4);
v_messages_358_ = lean_ctor_get(v___x_352_, 6);
v_infoState_359_ = lean_ctor_get(v___x_352_, 7);
v_snapshotTasks_360_ = lean_ctor_get(v___x_352_, 8);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_352_, 5);
lean_dec(v_unused_415_);
v___x_362_ = v___x_352_;
v_isShared_363_ = v_isSharedCheck_414_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_snapshotTasks_360_);
lean_inc(v_infoState_359_);
lean_inc(v_messages_358_);
lean_inc(v_traceState_357_);
lean_inc(v_auxDeclNGen_356_);
lean_inc(v_ngen_355_);
lean_inc(v_nextMacroScope_354_);
lean_inc(v_env_353_);
lean_dec(v___x_352_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_414_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_367_; 
v___x_364_ = l_Lean_Environment_setExporting(v_env_353_, v_isExporting_339_);
v___x_365_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 5, v___x_365_);
lean_ctor_set(v___x_362_, 0, v___x_364_);
v___x_367_ = v___x_362_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_364_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_nextMacroScope_354_);
lean_ctor_set(v_reuseFailAlloc_413_, 2, v_ngen_355_);
lean_ctor_set(v_reuseFailAlloc_413_, 3, v_auxDeclNGen_356_);
lean_ctor_set(v_reuseFailAlloc_413_, 4, v_traceState_357_);
lean_ctor_set(v_reuseFailAlloc_413_, 5, v___x_365_);
lean_ctor_set(v_reuseFailAlloc_413_, 6, v_messages_358_);
lean_ctor_set(v_reuseFailAlloc_413_, 7, v_infoState_359_);
lean_ctor_set(v_reuseFailAlloc_413_, 8, v_snapshotTasks_360_);
v___x_367_ = v_reuseFailAlloc_413_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_mctx_370_; lean_object* v_zetaDeltaFVarIds_371_; lean_object* v_postponed_372_; lean_object* v_diag_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_411_; 
v___x_368_ = lean_st_ref_put(v___y_343_, v___x_367_);
v___x_369_ = lean_st_ref_take(v___y_341_);
v_mctx_370_ = lean_ctor_get(v___x_369_, 0);
v_zetaDeltaFVarIds_371_ = lean_ctor_get(v___x_369_, 2);
v_postponed_372_ = lean_ctor_get(v___x_369_, 3);
v_diag_373_ = lean_ctor_get(v___x_369_, 4);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v___x_369_, 1);
lean_dec(v_unused_412_);
v___x_375_ = v___x_369_;
v_isShared_376_ = v_isSharedCheck_411_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_diag_373_);
lean_inc(v_postponed_372_);
lean_inc(v_zetaDeltaFVarIds_371_);
lean_inc(v_mctx_370_);
lean_dec(v___x_369_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_411_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_377_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 1, v___x_377_);
v___x_379_ = v___x_375_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_mctx_370_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_410_, 2, v_zetaDeltaFVarIds_371_);
lean_ctor_set(v_reuseFailAlloc_410_, 3, v_postponed_372_);
lean_ctor_set(v_reuseFailAlloc_410_, 4, v_diag_373_);
v___x_379_ = v_reuseFailAlloc_410_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_st_ref_put(v___y_341_, v___x_379_);
lean_inc(v___y_343_);
lean_inc_ref(v___y_342_);
lean_inc(v___y_341_);
lean_inc_ref(v___y_340_);
v___x_381_ = lean_apply_5(v_x_338_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, lean_box(0));
if (lean_obj_tag(v___x_381_) == 0)
{
lean_object* v_a_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_398_; 
v_a_382_ = lean_ctor_get(v___x_381_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_398_ == 0)
{
v___x_384_ = v___x_381_;
v_isShared_385_ = v_isSharedCheck_398_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_a_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_398_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___x_387_; 
lean_inc(v_a_382_);
if (v_isShared_385_ == 0)
{
lean_ctor_set_tag(v___x_384_, 1);
v___x_387_ = v___x_384_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_382_);
v___x_387_ = v_reuseFailAlloc_397_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
lean_object* v___x_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v___x_388_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_343_, v_isExporting_350_, v___x_365_, v___y_341_, v___x_377_, v___x_387_);
lean_dec_ref(v___x_387_);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_395_ == 0)
{
lean_object* v_unused_396_; 
v_unused_396_ = lean_ctor_get(v___x_388_, 0);
lean_dec(v_unused_396_);
v___x_390_ = v___x_388_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_dec(v___x_388_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v_a_382_);
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_382_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
else
{
lean_object* v_a_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
v_a_399_ = lean_ctor_get(v___x_381_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v___x_381_, 1);
v___x_400_ = lean_box(0);
v___x_401_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_343_, v_isExporting_350_, v___x_365_, v___y_341_, v___x_377_, v___x_400_);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v___x_401_, 0);
lean_dec(v_unused_409_);
v___x_403_ = v___x_401_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_dec(v___x_401_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set_tag(v___x_403_, 1);
lean_ctor_set(v___x_403_, 0, v_a_399_);
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_399_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object* v_x_418_, lean_object* v_isExporting_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
uint8_t v_isExporting_boxed_425_; lean_object* v_res_426_; 
v_isExporting_boxed_425_ = lean_unbox(v_isExporting_419_);
v_res_426_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_418_, v_isExporting_boxed_425_, v___y_420_, v___y_421_, v___y_422_, v___y_423_);
lean_dec(v___y_423_);
lean_dec_ref(v___y_422_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object* v_00_u03b1_427_, lean_object* v_x_428_, uint8_t v_isExporting_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_428_, v_isExporting_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object* v_00_u03b1_436_, lean_object* v_x_437_, lean_object* v_isExporting_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
uint8_t v_isExporting_boxed_444_; lean_object* v_res_445_; 
v_isExporting_boxed_444_ = lean_unbox(v_isExporting_438_);
v_res_445_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(v_00_u03b1_436_, v_x_437_, v_isExporting_boxed_444_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_445_;
}
}
static lean_object* _init_l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0(void){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Meta_instInhabitedMetaM___redArg();
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object* v_msg_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v___x_453_; lean_object* v___x_16959__overap_454_; lean_object* v___x_455_; 
v___x_453_ = lean_obj_once(&l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0, &l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_once, _init_l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0);
v___x_16959__overap_454_ = lean_panic_fn_borrowed(v___x_453_, v_msg_447_);
lean_inc(v___y_451_);
lean_inc_ref(v___y_450_);
lean_inc(v___y_449_);
lean_inc_ref(v___y_448_);
v___x_455_ = lean_apply_5(v___x_16959__overap_454_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, lean_box(0));
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object* v_msg_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v_msg_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object* v_name_463_, lean_object* v_type_464_, lean_object* v_k_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
uint8_t v___x_471_; uint8_t v___x_472_; lean_object* v___x_473_; 
v___x_471_ = 0;
v___x_472_ = 0;
v___x_473_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_463_, v___x_471_, v_type_464_, v_k_465_, v___x_472_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object* v_name_474_, lean_object* v_type_475_, lean_object* v_k_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_474_, v_type_475_, v_k_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object* v___x_483_, lean_object* v_ism2_484_, lean_object* v_motive_485_, uint8_t v___x_486_, uint8_t v___x_487_, uint8_t v___x_488_, lean_object* v_a_489_, lean_object* v___f_490_, lean_object* v_zs1_491_, lean_object* v_val_492_, lean_object* v___x_493_, lean_object* v_indName_494_, lean_object* v_v_495_, lean_object* v___x_496_, lean_object* v_params_497_, lean_object* v___x_498_, lean_object* v_h_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_505_ = l_Array_append___redArg(v___x_483_, v_ism2_484_);
v___x_506_ = l_Lean_mkAppN(v_motive_485_, v___x_505_);
lean_dec_ref(v___x_505_);
v___x_507_ = l_Lean_Meta_mkLambdaFVars(v_ism2_484_, v___x_506_, v___x_486_, v___x_487_, v___x_486_, v___x_487_, v___x_488_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
if (lean_obj_tag(v___x_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_509_; 
v_a_508_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_a_508_);
lean_dec_ref_known(v___x_507_, 1);
v___x_509_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_489_, v___f_490_, v___x_486_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_object* v_a_510_; lean_object* v___y_512_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_a_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_a_510_);
lean_dec_ref_known(v___x_509_, 1);
v___x_515_ = l_Lean_InductiveVal_numCtors(v_val_492_);
v___x_516_ = lean_nat_dec_eq(v___x_515_, v___x_493_);
lean_dec(v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
lean_dec(v___x_498_);
v___x_517_ = l_Lean_mkConstructorElimName(v_indName_494_, v_v_495_);
v___x_518_ = l_Lean_mkConst(v___x_517_, v___x_496_);
v___x_519_ = lean_mk_empty_array_with_capacity(v___x_493_);
v___x_520_ = lean_array_push(v___x_519_, v_a_508_);
v___x_521_ = l_Array_append___redArg(v_params_497_, v___x_520_);
lean_dec_ref(v___x_520_);
v___x_522_ = l_Array_append___redArg(v___x_521_, v_ism2_484_);
v___x_523_ = lean_unsigned_to_nat(2u);
v___x_524_ = lean_mk_empty_array_with_capacity(v___x_523_);
lean_inc_ref(v_h_499_);
v___x_525_ = lean_array_push(v___x_524_, v_h_499_);
v___x_526_ = lean_array_push(v___x_525_, v_a_510_);
v___x_527_ = l_Array_append___redArg(v___x_522_, v___x_526_);
lean_dec_ref(v___x_526_);
v___x_528_ = l_Lean_mkAppN(v___x_518_, v___x_527_);
lean_dec_ref(v___x_527_);
v___y_512_ = v___x_528_;
goto v___jp_511_;
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v_v_495_);
v___x_529_ = l_Lean_mkConst(v___x_498_, v___x_496_);
v___x_530_ = lean_mk_empty_array_with_capacity(v___x_493_);
lean_inc_ref(v___x_530_);
v___x_531_ = lean_array_push(v___x_530_, v_a_508_);
v___x_532_ = l_Array_append___redArg(v_params_497_, v___x_531_);
lean_dec_ref(v___x_531_);
v___x_533_ = l_Array_append___redArg(v___x_532_, v_ism2_484_);
v___x_534_ = lean_array_push(v___x_530_, v_a_510_);
v___x_535_ = l_Array_append___redArg(v___x_533_, v___x_534_);
lean_dec_ref(v___x_534_);
v___x_536_ = l_Lean_mkAppN(v___x_529_, v___x_535_);
lean_dec_ref(v___x_535_);
v___y_512_ = v___x_536_;
goto v___jp_511_;
}
v___jp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_array_push(v_zs1_491_, v_h_499_);
v___x_514_ = l_Lean_Meta_mkLambdaFVars(v___x_513_, v___y_512_, v___x_486_, v___x_487_, v___x_486_, v___x_487_, v___x_488_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec_ref(v___x_513_);
return v___x_514_;
}
}
else
{
lean_dec(v_a_508_);
lean_dec_ref(v_h_499_);
lean_dec(v___x_498_);
lean_dec_ref(v_params_497_);
lean_dec(v___x_496_);
lean_dec(v_v_495_);
lean_dec_ref(v_zs1_491_);
return v___x_509_;
}
}
else
{
lean_dec_ref(v_h_499_);
lean_dec(v___x_498_);
lean_dec_ref(v_params_497_);
lean_dec(v___x_496_);
lean_dec(v_v_495_);
lean_dec_ref(v_zs1_491_);
lean_dec_ref(v___f_490_);
lean_dec_ref(v_a_489_);
return v___x_507_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_537_ = _args[0];
lean_object* v_ism2_538_ = _args[1];
lean_object* v_motive_539_ = _args[2];
lean_object* v___x_540_ = _args[3];
lean_object* v___x_541_ = _args[4];
lean_object* v___x_542_ = _args[5];
lean_object* v_a_543_ = _args[6];
lean_object* v___f_544_ = _args[7];
lean_object* v_zs1_545_ = _args[8];
lean_object* v_val_546_ = _args[9];
lean_object* v___x_547_ = _args[10];
lean_object* v_indName_548_ = _args[11];
lean_object* v_v_549_ = _args[12];
lean_object* v___x_550_ = _args[13];
lean_object* v_params_551_ = _args[14];
lean_object* v___x_552_ = _args[15];
lean_object* v_h_553_ = _args[16];
lean_object* v___y_554_ = _args[17];
lean_object* v___y_555_ = _args[18];
lean_object* v___y_556_ = _args[19];
lean_object* v___y_557_ = _args[20];
lean_object* v___y_558_ = _args[21];
_start:
{
uint8_t v___x_21984__boxed_559_; uint8_t v___x_21985__boxed_560_; uint8_t v___x_21986__boxed_561_; lean_object* v_res_562_; 
v___x_21984__boxed_559_ = lean_unbox(v___x_540_);
v___x_21985__boxed_560_ = lean_unbox(v___x_541_);
v___x_21986__boxed_561_ = lean_unbox(v___x_542_);
v_res_562_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(v___x_537_, v_ism2_538_, v_motive_539_, v___x_21984__boxed_559_, v___x_21985__boxed_560_, v___x_21986__boxed_561_, v_a_543_, v___f_544_, v_zs1_545_, v_val_546_, v___x_547_, v_indName_548_, v_v_549_, v___x_550_, v_params_551_, v___x_552_, v_h_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v_indName_548_);
lean_dec(v___x_547_);
lean_dec_ref(v_val_546_);
lean_dec_ref(v_ism2_538_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object* v___x_563_, lean_object* v_alts_564_, lean_object* v___x_565_, lean_object* v_zs1_566_, uint8_t v___x_567_, uint8_t v___x_568_, uint8_t v___x_569_, lean_object* v_zs2_570_, lean_object* v_x_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_577_ = lean_array_get_borrowed(v___x_563_, v_alts_564_, v___x_565_);
v___x_578_ = l_Array_append___redArg(v_zs1_566_, v_zs2_570_);
lean_inc(v___x_577_);
v___x_579_ = l_Lean_mkAppN(v___x_577_, v___x_578_);
lean_dec_ref(v___x_578_);
v___x_580_ = l_Lean_Meta_mkLambdaFVars(v_zs2_570_, v___x_579_, v___x_567_, v___x_568_, v___x_567_, v___x_568_, v___x_569_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
return v___x_580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object* v___x_581_, lean_object* v_alts_582_, lean_object* v___x_583_, lean_object* v_zs1_584_, lean_object* v___x_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v_zs2_588_, lean_object* v_x_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
uint8_t v___x_22096__boxed_595_; uint8_t v___x_22097__boxed_596_; uint8_t v___x_22098__boxed_597_; lean_object* v_res_598_; 
v___x_22096__boxed_595_ = lean_unbox(v___x_585_);
v___x_22097__boxed_596_ = lean_unbox(v___x_586_);
v___x_22098__boxed_597_ = lean_unbox(v___x_587_);
v_res_598_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(v___x_581_, v_alts_582_, v___x_583_, v_zs1_584_, v___x_22096__boxed_595_, v___x_22097__boxed_596_, v___x_22098__boxed_597_, v_zs2_588_, v_x_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec_ref(v_x_589_);
lean_dec_ref(v_zs2_588_);
lean_dec(v___x_583_);
lean_dec_ref(v_alts_582_);
lean_dec_ref(v___x_581_);
return v_res_598_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_599_; lean_object* v_dummy_600_; 
v___x_599_ = lean_box(0);
v_dummy_600_ = l_Lean_Expr_sort___override(v___x_599_);
return v_dummy_600_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_607_ = lean_box(0);
v___x_608_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4));
v___x_609_ = l_Lean_mkConst(v___x_608_, v___x_607_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object* v___x_610_, lean_object* v_alts_611_, lean_object* v___x_612_, uint8_t v___x_613_, uint8_t v___x_614_, uint8_t v___x_615_, lean_object* v___x_616_, lean_object* v___x_617_, lean_object* v___x_618_, lean_object* v_ism2_619_, lean_object* v_motive_620_, lean_object* v_a_621_, lean_object* v_val_622_, lean_object* v_indName_623_, lean_object* v_v_624_, lean_object* v___x_625_, lean_object* v_params_626_, lean_object* v___x_627_, lean_object* v___x_628_, lean_object* v___x_629_, lean_object* v_zs1_630_, lean_object* v_ctorRet1_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___f_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_637_ = lean_box(v___x_613_);
v___x_638_ = lean_box(v___x_614_);
v___x_639_ = lean_box(v___x_615_);
lean_inc_ref(v_zs1_630_);
lean_inc(v___x_612_);
v___f_640_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_640_, 0, v___x_610_);
lean_closure_set(v___f_640_, 1, v_alts_611_);
lean_closure_set(v___f_640_, 2, v___x_612_);
lean_closure_set(v___f_640_, 3, v_zs1_630_);
lean_closure_set(v___f_640_, 4, v___x_637_);
lean_closure_set(v___f_640_, 5, v___x_638_);
lean_closure_set(v___f_640_, 6, v___x_639_);
v___x_641_ = l_Lean_mkAppN(v___x_616_, v_zs1_630_);
lean_inc(v___y_635_);
lean_inc_ref(v___y_634_);
lean_inc(v___y_633_);
lean_inc_ref(v___y_632_);
v___x_642_ = lean_whnf(v_ctorRet1_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v_dummy_644_; lean_object* v_nargs_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___f_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc(v_a_643_);
lean_dec_ref_known(v___x_642_, 1);
v_dummy_644_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0);
v_nargs_645_ = l_Lean_Expr_getAppNumArgs(v_a_643_);
lean_inc(v_nargs_645_);
v___x_646_ = lean_mk_array(v_nargs_645_, v_dummy_644_);
v___x_647_ = lean_nat_sub(v_nargs_645_, v___x_617_);
lean_dec(v_nargs_645_);
v___x_648_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_643_, v___x_646_, v___x_647_);
v___x_649_ = lean_array_get_size(v___x_648_);
v___x_650_ = l_Array_toSubarray___redArg(v___x_648_, v___x_618_, v___x_649_);
v___x_651_ = l_Subarray_copy___redArg(v___x_650_);
v___x_652_ = lean_array_push(v___x_651_, v___x_641_);
v___x_653_ = lean_box(v___x_613_);
v___x_654_ = lean_box(v___x_614_);
v___x_655_ = lean_box(v___x_615_);
lean_inc(v___x_617_);
v___f_656_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed), 22, 16);
lean_closure_set(v___f_656_, 0, v___x_652_);
lean_closure_set(v___f_656_, 1, v_ism2_619_);
lean_closure_set(v___f_656_, 2, v_motive_620_);
lean_closure_set(v___f_656_, 3, v___x_653_);
lean_closure_set(v___f_656_, 4, v___x_654_);
lean_closure_set(v___f_656_, 5, v___x_655_);
lean_closure_set(v___f_656_, 6, v_a_621_);
lean_closure_set(v___f_656_, 7, v___f_640_);
lean_closure_set(v___f_656_, 8, v_zs1_630_);
lean_closure_set(v___f_656_, 9, v_val_622_);
lean_closure_set(v___f_656_, 10, v___x_617_);
lean_closure_set(v___f_656_, 11, v_indName_623_);
lean_closure_set(v___f_656_, 12, v_v_624_);
lean_closure_set(v___f_656_, 13, v___x_625_);
lean_closure_set(v___f_656_, 14, v_params_626_);
lean_closure_set(v___f_656_, 15, v___x_627_);
v___x_657_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2));
v___x_658_ = l_Lean_Level_ofNat(v___x_617_);
lean_dec(v___x_617_);
v___x_659_ = lean_box(0);
v___x_660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = l_Lean_mkConst(v___x_657_, v___x_660_);
v___x_662_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5);
v___x_663_ = l_Lean_mkRawNatLit(v___x_612_);
v___x_664_ = l_Lean_mkApp3(v___x_661_, v___x_662_, v___x_628_, v___x_663_);
v___x_665_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_629_, v___x_664_, v___f_656_, v___y_632_, v___y_633_, v___y_634_, v___y_635_);
return v___x_665_;
}
else
{
lean_dec_ref(v___x_641_);
lean_dec_ref(v___f_640_);
lean_dec_ref(v_zs1_630_);
lean_dec(v___x_629_);
lean_dec_ref(v___x_628_);
lean_dec(v___x_627_);
lean_dec_ref(v_params_626_);
lean_dec(v___x_625_);
lean_dec(v_v_624_);
lean_dec(v_indName_623_);
lean_dec_ref(v_val_622_);
lean_dec_ref(v_a_621_);
lean_dec_ref(v_motive_620_);
lean_dec_ref(v_ism2_619_);
lean_dec(v___x_618_);
lean_dec(v___x_617_);
lean_dec(v___x_612_);
return v___x_642_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_666_ = _args[0];
lean_object* v_alts_667_ = _args[1];
lean_object* v___x_668_ = _args[2];
lean_object* v___x_669_ = _args[3];
lean_object* v___x_670_ = _args[4];
lean_object* v___x_671_ = _args[5];
lean_object* v___x_672_ = _args[6];
lean_object* v___x_673_ = _args[7];
lean_object* v___x_674_ = _args[8];
lean_object* v_ism2_675_ = _args[9];
lean_object* v_motive_676_ = _args[10];
lean_object* v_a_677_ = _args[11];
lean_object* v_val_678_ = _args[12];
lean_object* v_indName_679_ = _args[13];
lean_object* v_v_680_ = _args[14];
lean_object* v___x_681_ = _args[15];
lean_object* v_params_682_ = _args[16];
lean_object* v___x_683_ = _args[17];
lean_object* v___x_684_ = _args[18];
lean_object* v___x_685_ = _args[19];
lean_object* v_zs1_686_ = _args[20];
lean_object* v_ctorRet1_687_ = _args[21];
lean_object* v___y_688_ = _args[22];
lean_object* v___y_689_ = _args[23];
lean_object* v___y_690_ = _args[24];
lean_object* v___y_691_ = _args[25];
lean_object* v___y_692_ = _args[26];
_start:
{
uint8_t v___x_22157__boxed_693_; uint8_t v___x_22158__boxed_694_; uint8_t v___x_22159__boxed_695_; lean_object* v_res_696_; 
v___x_22157__boxed_693_ = lean_unbox(v___x_669_);
v___x_22158__boxed_694_ = lean_unbox(v___x_670_);
v___x_22159__boxed_695_ = lean_unbox(v___x_671_);
v_res_696_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(v___x_666_, v_alts_667_, v___x_668_, v___x_22157__boxed_693_, v___x_22158__boxed_694_, v___x_22159__boxed_695_, v___x_672_, v___x_673_, v___x_674_, v_ism2_675_, v_motive_676_, v_a_677_, v_val_678_, v_indName_679_, v_v_680_, v___x_681_, v_params_682_, v___x_683_, v___x_684_, v___x_685_, v_zs1_686_, v_ctorRet1_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object* v_tail_700_, lean_object* v_params_701_, lean_object* v_alts_702_, lean_object* v___x_703_, lean_object* v_ism2_704_, lean_object* v_motive_705_, lean_object* v_val_706_, lean_object* v_indName_707_, lean_object* v___x_708_, lean_object* v___x_709_, lean_object* v___x_710_, size_t v_sz_711_, size_t v_i_712_, lean_object* v_bs_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_){
_start:
{
uint8_t v___x_719_; 
v___x_719_ = lean_usize_dec_lt(v_i_712_, v_sz_711_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; 
lean_dec_ref(v___x_710_);
lean_dec(v___x_709_);
lean_dec(v___x_708_);
lean_dec(v_indName_707_);
lean_dec_ref(v_val_706_);
lean_dec_ref(v_motive_705_);
lean_dec_ref(v_ism2_704_);
lean_dec(v___x_703_);
lean_dec_ref(v_alts_702_);
lean_dec_ref(v_params_701_);
lean_dec(v_tail_700_);
v___x_720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_720_, 0, v_bs_713_);
return v___x_720_;
}
else
{
lean_object* v___x_721_; uint8_t v___x_722_; uint8_t v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v_v_726_; lean_object* v___x_727_; lean_object* v_bs_x27_728_; lean_object* v___y_730_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_721_ = l_Lean_instInhabitedExpr;
v___x_722_ = 0;
v___x_723_ = 1;
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v_v_726_ = lean_array_uget(v_bs_713_, v_i_712_);
v___x_727_ = lean_unsigned_to_nat(0u);
v_bs_x27_728_ = lean_array_uset(v_bs_713_, v_i_712_, v___x_727_);
v___x_744_ = lean_usize_to_nat(v_i_712_);
lean_inc(v_tail_700_);
lean_inc(v_v_726_);
v___x_745_ = l_Lean_mkConst(v_v_726_, v_tail_700_);
v___x_746_ = l_Lean_mkAppN(v___x_745_, v_params_701_);
lean_inc(v___y_717_);
lean_inc_ref(v___y_716_);
lean_inc(v___y_715_);
lean_inc_ref(v___y_714_);
lean_inc_ref(v___x_746_);
v___x_747_ = lean_infer_type(v___x_746_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___f_752_; lean_object* v___x_753_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc_n(v_a_748_, 2);
lean_dec_ref_known(v___x_747_, 1);
v___x_749_ = lean_box(v___x_722_);
v___x_750_ = lean_box(v___x_719_);
v___x_751_ = lean_box(v___x_723_);
lean_inc_ref(v___x_710_);
lean_inc(v___x_709_);
lean_inc_ref(v_params_701_);
lean_inc(v___x_708_);
lean_inc(v_indName_707_);
lean_inc_ref(v_val_706_);
lean_inc_ref(v_motive_705_);
lean_inc_ref(v_ism2_704_);
lean_inc(v___x_703_);
lean_inc_ref(v_alts_702_);
v___f_752_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed), 27, 20);
lean_closure_set(v___f_752_, 0, v___x_721_);
lean_closure_set(v___f_752_, 1, v_alts_702_);
lean_closure_set(v___f_752_, 2, v___x_744_);
lean_closure_set(v___f_752_, 3, v___x_749_);
lean_closure_set(v___f_752_, 4, v___x_750_);
lean_closure_set(v___f_752_, 5, v___x_751_);
lean_closure_set(v___f_752_, 6, v___x_746_);
lean_closure_set(v___f_752_, 7, v___x_724_);
lean_closure_set(v___f_752_, 8, v___x_703_);
lean_closure_set(v___f_752_, 9, v_ism2_704_);
lean_closure_set(v___f_752_, 10, v_motive_705_);
lean_closure_set(v___f_752_, 11, v_a_748_);
lean_closure_set(v___f_752_, 12, v_val_706_);
lean_closure_set(v___f_752_, 13, v_indName_707_);
lean_closure_set(v___f_752_, 14, v_v_726_);
lean_closure_set(v___f_752_, 15, v___x_708_);
lean_closure_set(v___f_752_, 16, v_params_701_);
lean_closure_set(v___f_752_, 17, v___x_709_);
lean_closure_set(v___f_752_, 18, v___x_710_);
lean_closure_set(v___f_752_, 19, v___x_725_);
v___x_753_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_748_, v___f_752_, v___x_722_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
v___y_730_ = v___x_753_;
goto v___jp_729_;
}
else
{
lean_dec_ref(v___x_746_);
lean_dec(v___x_744_);
lean_dec(v_v_726_);
v___y_730_ = v___x_747_;
goto v___jp_729_;
}
v___jp_729_:
{
if (lean_obj_tag(v___y_730_) == 0)
{
lean_object* v_a_731_; size_t v___x_732_; size_t v___x_733_; lean_object* v___x_734_; 
v_a_731_ = lean_ctor_get(v___y_730_, 0);
lean_inc(v_a_731_);
lean_dec_ref_known(v___y_730_, 1);
v___x_732_ = ((size_t)1ULL);
v___x_733_ = lean_usize_add(v_i_712_, v___x_732_);
v___x_734_ = lean_array_uset(v_bs_x27_728_, v_i_712_, v_a_731_);
v_i_712_ = v___x_733_;
v_bs_713_ = v___x_734_;
goto _start;
}
else
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_743_; 
lean_dec_ref(v_bs_x27_728_);
lean_dec_ref(v___x_710_);
lean_dec(v___x_709_);
lean_dec(v___x_708_);
lean_dec(v_indName_707_);
lean_dec_ref(v_val_706_);
lean_dec_ref(v_motive_705_);
lean_dec_ref(v_ism2_704_);
lean_dec(v___x_703_);
lean_dec_ref(v_alts_702_);
lean_dec_ref(v_params_701_);
lean_dec(v_tail_700_);
v_a_736_ = lean_ctor_get(v___y_730_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___y_730_);
if (v_isSharedCheck_743_ == 0)
{
v___x_738_ = v___y_730_;
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v___y_730_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_743_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object** _args){
lean_object* v_tail_754_ = _args[0];
lean_object* v_params_755_ = _args[1];
lean_object* v_alts_756_ = _args[2];
lean_object* v___x_757_ = _args[3];
lean_object* v_ism2_758_ = _args[4];
lean_object* v_motive_759_ = _args[5];
lean_object* v_val_760_ = _args[6];
lean_object* v_indName_761_ = _args[7];
lean_object* v___x_762_ = _args[8];
lean_object* v___x_763_ = _args[9];
lean_object* v___x_764_ = _args[10];
lean_object* v_sz_765_ = _args[11];
lean_object* v_i_766_ = _args[12];
lean_object* v_bs_767_ = _args[13];
lean_object* v___y_768_ = _args[14];
lean_object* v___y_769_ = _args[15];
lean_object* v___y_770_ = _args[16];
lean_object* v___y_771_ = _args[17];
lean_object* v___y_772_ = _args[18];
_start:
{
size_t v_sz_boxed_773_; size_t v_i_boxed_774_; lean_object* v_res_775_; 
v_sz_boxed_773_ = lean_unbox_usize(v_sz_765_);
lean_dec(v_sz_765_);
v_i_boxed_774_ = lean_unbox_usize(v_i_766_);
lean_dec(v_i_766_);
v_res_775_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_754_, v_params_755_, v_alts_756_, v___x_757_, v_ism2_758_, v_motive_759_, v_val_760_, v_indName_761_, v___x_762_, v___x_763_, v___x_764_, v_sz_boxed_773_, v_i_boxed_774_, v_bs_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object* v_motive_776_, lean_object* v___x_777_, lean_object* v_a_778_, lean_object* v_ism1_779_, uint8_t v___x_780_, uint8_t v___x_781_, uint8_t v___x_782_, lean_object* v_name_783_, lean_object* v___x_784_, lean_object* v_params_785_, lean_object* v___x_786_, lean_object* v_tail_787_, lean_object* v_alts_788_, lean_object* v_numParams_789_, lean_object* v_ism2_790_, lean_object* v_val_791_, lean_object* v_indName_792_, lean_object* v___x_793_, lean_object* v___x_794_, lean_object* v___x_795_, lean_object* v_heq_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
lean_inc_ref(v_motive_776_);
v___x_802_ = l_Lean_mkAppN(v_motive_776_, v___x_777_);
v___x_803_ = l_Lean_mkArrow(v_a_778_, v___x_802_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_803_) == 0)
{
lean_object* v_a_804_; lean_object* v___x_805_; 
v_a_804_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_a_804_);
lean_dec_ref_known(v___x_803_, 1);
v___x_805_ = l_Lean_Meta_mkLambdaFVars(v_ism1_779_, v_a_804_, v___x_780_, v___x_781_, v___x_780_, v___x_781_, v___x_782_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; size_t v_sz_811_; size_t v___x_812_; lean_object* v___x_813_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v___x_805_, 1);
lean_inc(v___x_784_);
v___x_807_ = l_Lean_mkConst(v_name_783_, v___x_784_);
v___x_808_ = l_Lean_mkAppN(v___x_807_, v_params_785_);
v___x_809_ = l_Lean_Expr_app___override(v___x_808_, v_a_806_);
v___x_810_ = l_Lean_mkAppN(v___x_809_, v_ism1_779_);
v_sz_811_ = lean_array_size(v___x_786_);
v___x_812_ = ((size_t)0ULL);
lean_inc_ref(v_motive_776_);
lean_inc_ref(v_ism2_790_);
lean_inc_ref(v_alts_788_);
lean_inc_ref(v_params_785_);
v___x_813_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_787_, v_params_785_, v_alts_788_, v_numParams_789_, v_ism2_790_, v_motive_776_, v_val_791_, v_indName_792_, v___x_784_, v___x_793_, v___x_794_, v_sz_811_, v___x_812_, v___x_786_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_815_; lean_object* v___x_816_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v___x_815_ = l_Lean_mkAppN(v___x_810_, v_a_814_);
lean_dec(v_a_814_);
lean_inc_ref(v_heq_796_);
v___x_816_ = l_Lean_Meta_mkEqSymm(v_heq_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
if (lean_obj_tag(v___x_816_) == 0)
{
lean_object* v_a_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_a_817_ = lean_ctor_get(v___x_816_, 0);
lean_inc(v_a_817_);
lean_dec_ref_known(v___x_816_, 1);
v___x_818_ = l_Lean_Expr_app___override(v___x_815_, v_a_817_);
v___x_819_ = lean_mk_empty_array_with_capacity(v___x_795_);
lean_inc_ref(v___x_819_);
v___x_820_ = lean_array_push(v___x_819_, v_motive_776_);
v___x_821_ = l_Array_append___redArg(v_params_785_, v___x_820_);
lean_dec_ref(v___x_820_);
v___x_822_ = l_Array_append___redArg(v___x_821_, v_ism1_779_);
v___x_823_ = l_Array_append___redArg(v___x_822_, v_ism2_790_);
lean_dec_ref(v_ism2_790_);
v___x_824_ = lean_array_push(v___x_819_, v_heq_796_);
v___x_825_ = l_Array_append___redArg(v___x_823_, v___x_824_);
lean_dec_ref(v___x_824_);
v___x_826_ = l_Array_append___redArg(v___x_825_, v_alts_788_);
lean_dec_ref(v_alts_788_);
v___x_827_ = l_Lean_Meta_mkLambdaFVars(v___x_826_, v___x_818_, v___x_780_, v___x_781_, v___x_780_, v___x_781_, v___x_782_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec_ref(v___x_826_);
return v___x_827_;
}
else
{
lean_dec_ref(v___x_815_);
lean_dec_ref(v_heq_796_);
lean_dec_ref(v_ism2_790_);
lean_dec_ref(v_alts_788_);
lean_dec_ref(v_params_785_);
lean_dec_ref(v_motive_776_);
return v___x_816_;
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
lean_dec_ref(v___x_810_);
lean_dec_ref(v_heq_796_);
lean_dec_ref(v_ism2_790_);
lean_dec_ref(v_alts_788_);
lean_dec_ref(v_params_785_);
lean_dec_ref(v_motive_776_);
v_a_828_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_813_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_813_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
}
else
{
lean_dec_ref(v_heq_796_);
lean_dec_ref(v___x_794_);
lean_dec(v___x_793_);
lean_dec(v_indName_792_);
lean_dec_ref(v_val_791_);
lean_dec_ref(v_ism2_790_);
lean_dec(v_numParams_789_);
lean_dec_ref(v_alts_788_);
lean_dec(v_tail_787_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v_params_785_);
lean_dec(v___x_784_);
lean_dec(v_name_783_);
lean_dec_ref(v_motive_776_);
return v___x_805_;
}
}
else
{
lean_dec_ref(v_heq_796_);
lean_dec_ref(v___x_794_);
lean_dec(v___x_793_);
lean_dec(v_indName_792_);
lean_dec_ref(v_val_791_);
lean_dec_ref(v_ism2_790_);
lean_dec(v_numParams_789_);
lean_dec_ref(v_alts_788_);
lean_dec(v_tail_787_);
lean_dec_ref(v___x_786_);
lean_dec_ref(v_params_785_);
lean_dec(v___x_784_);
lean_dec(v_name_783_);
lean_dec_ref(v_motive_776_);
return v___x_803_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object** _args){
lean_object* v_motive_836_ = _args[0];
lean_object* v___x_837_ = _args[1];
lean_object* v_a_838_ = _args[2];
lean_object* v_ism1_839_ = _args[3];
lean_object* v___x_840_ = _args[4];
lean_object* v___x_841_ = _args[5];
lean_object* v___x_842_ = _args[6];
lean_object* v_name_843_ = _args[7];
lean_object* v___x_844_ = _args[8];
lean_object* v_params_845_ = _args[9];
lean_object* v___x_846_ = _args[10];
lean_object* v_tail_847_ = _args[11];
lean_object* v_alts_848_ = _args[12];
lean_object* v_numParams_849_ = _args[13];
lean_object* v_ism2_850_ = _args[14];
lean_object* v_val_851_ = _args[15];
lean_object* v_indName_852_ = _args[16];
lean_object* v___x_853_ = _args[17];
lean_object* v___x_854_ = _args[18];
lean_object* v___x_855_ = _args[19];
lean_object* v_heq_856_ = _args[20];
lean_object* v___y_857_ = _args[21];
lean_object* v___y_858_ = _args[22];
lean_object* v___y_859_ = _args[23];
lean_object* v___y_860_ = _args[24];
lean_object* v___y_861_ = _args[25];
_start:
{
uint8_t v___x_22388__boxed_862_; uint8_t v___x_22389__boxed_863_; uint8_t v___x_22390__boxed_864_; lean_object* v_res_865_; 
v___x_22388__boxed_862_ = lean_unbox(v___x_840_);
v___x_22389__boxed_863_ = lean_unbox(v___x_841_);
v___x_22390__boxed_864_ = lean_unbox(v___x_842_);
v_res_865_ = l_Lean_mkCasesOnSameCtorHet___lam__0(v_motive_836_, v___x_837_, v_a_838_, v_ism1_839_, v___x_22388__boxed_862_, v___x_22389__boxed_863_, v___x_22390__boxed_864_, v_name_843_, v___x_844_, v_params_845_, v___x_846_, v_tail_847_, v_alts_848_, v_numParams_849_, v_ism2_850_, v_val_851_, v_indName_852_, v___x_853_, v___x_854_, v___x_855_, v_heq_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___x_855_);
lean_dec_ref(v_ism1_839_);
lean_dec_ref(v___x_837_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object* v_indName_866_, lean_object* v_tail_867_, lean_object* v_params_868_, lean_object* v_ism1_869_, lean_object* v_ism2_870_, lean_object* v_motive_871_, lean_object* v___x_872_, uint8_t v___x_873_, uint8_t v___x_874_, uint8_t v___x_875_, lean_object* v_name_876_, lean_object* v___x_877_, lean_object* v___x_878_, lean_object* v_numParams_879_, lean_object* v_val_880_, lean_object* v___x_881_, lean_object* v___x_882_, lean_object* v_alts_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
lean_inc(v_indName_866_);
v___x_889_ = l_Lean_mkCtorIdxName(v_indName_866_);
lean_inc(v_tail_867_);
v___x_890_ = l_Lean_mkConst(v___x_889_, v_tail_867_);
lean_inc_ref_n(v_params_868_, 2);
v___x_891_ = l_Array_append___redArg(v_params_868_, v_ism1_869_);
lean_inc_ref(v___x_890_);
v___x_892_ = l_Lean_mkAppN(v___x_890_, v___x_891_);
lean_dec_ref(v___x_891_);
v___x_893_ = l_Array_append___redArg(v_params_868_, v_ism2_870_);
v___x_894_ = l_Lean_mkAppN(v___x_890_, v___x_893_);
lean_dec_ref(v___x_893_);
lean_inc_ref(v___x_894_);
lean_inc_ref(v___x_892_);
v___x_895_ = l_Lean_Meta_mkEq(v___x_892_, v___x_894_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v___x_897_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
lean_inc_ref(v___x_894_);
v___x_897_ = l_Lean_Meta_mkEq(v___x_894_, v___x_892_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___f_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
lean_dec_ref_known(v___x_897_, 1);
v___x_899_ = lean_box(v___x_873_);
v___x_900_ = lean_box(v___x_874_);
v___x_901_ = lean_box(v___x_875_);
v___f_902_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed), 26, 20);
lean_closure_set(v___f_902_, 0, v_motive_871_);
lean_closure_set(v___f_902_, 1, v___x_872_);
lean_closure_set(v___f_902_, 2, v_a_898_);
lean_closure_set(v___f_902_, 3, v_ism1_869_);
lean_closure_set(v___f_902_, 4, v___x_899_);
lean_closure_set(v___f_902_, 5, v___x_900_);
lean_closure_set(v___f_902_, 6, v___x_901_);
lean_closure_set(v___f_902_, 7, v_name_876_);
lean_closure_set(v___f_902_, 8, v___x_877_);
lean_closure_set(v___f_902_, 9, v_params_868_);
lean_closure_set(v___f_902_, 10, v___x_878_);
lean_closure_set(v___f_902_, 11, v_tail_867_);
lean_closure_set(v___f_902_, 12, v_alts_883_);
lean_closure_set(v___f_902_, 13, v_numParams_879_);
lean_closure_set(v___f_902_, 14, v_ism2_870_);
lean_closure_set(v___f_902_, 15, v_val_880_);
lean_closure_set(v___f_902_, 16, v_indName_866_);
lean_closure_set(v___f_902_, 17, v___x_881_);
lean_closure_set(v___f_902_, 18, v___x_894_);
lean_closure_set(v___f_902_, 19, v___x_882_);
v___x_903_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v___x_904_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_903_, v_a_896_, v___f_902_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
return v___x_904_;
}
else
{
lean_dec(v_a_896_);
lean_dec_ref(v___x_894_);
lean_dec_ref(v_alts_883_);
lean_dec(v___x_882_);
lean_dec(v___x_881_);
lean_dec_ref(v_val_880_);
lean_dec(v_numParams_879_);
lean_dec_ref(v___x_878_);
lean_dec(v___x_877_);
lean_dec(v_name_876_);
lean_dec_ref(v___x_872_);
lean_dec_ref(v_motive_871_);
lean_dec_ref(v_ism2_870_);
lean_dec_ref(v_ism1_869_);
lean_dec_ref(v_params_868_);
lean_dec(v_tail_867_);
lean_dec(v_indName_866_);
return v___x_897_;
}
}
else
{
lean_dec_ref(v___x_894_);
lean_dec_ref(v___x_892_);
lean_dec_ref(v_alts_883_);
lean_dec(v___x_882_);
lean_dec(v___x_881_);
lean_dec_ref(v_val_880_);
lean_dec(v_numParams_879_);
lean_dec_ref(v___x_878_);
lean_dec(v___x_877_);
lean_dec(v_name_876_);
lean_dec_ref(v___x_872_);
lean_dec_ref(v_motive_871_);
lean_dec_ref(v_ism2_870_);
lean_dec_ref(v_ism1_869_);
lean_dec_ref(v_params_868_);
lean_dec(v_tail_867_);
lean_dec(v_indName_866_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object** _args){
lean_object* v_indName_905_ = _args[0];
lean_object* v_tail_906_ = _args[1];
lean_object* v_params_907_ = _args[2];
lean_object* v_ism1_908_ = _args[3];
lean_object* v_ism2_909_ = _args[4];
lean_object* v_motive_910_ = _args[5];
lean_object* v___x_911_ = _args[6];
lean_object* v___x_912_ = _args[7];
lean_object* v___x_913_ = _args[8];
lean_object* v___x_914_ = _args[9];
lean_object* v_name_915_ = _args[10];
lean_object* v___x_916_ = _args[11];
lean_object* v___x_917_ = _args[12];
lean_object* v_numParams_918_ = _args[13];
lean_object* v_val_919_ = _args[14];
lean_object* v___x_920_ = _args[15];
lean_object* v___x_921_ = _args[16];
lean_object* v_alts_922_ = _args[17];
lean_object* v___y_923_ = _args[18];
lean_object* v___y_924_ = _args[19];
lean_object* v___y_925_ = _args[20];
lean_object* v___y_926_ = _args[21];
lean_object* v___y_927_ = _args[22];
_start:
{
uint8_t v___x_22511__boxed_928_; uint8_t v___x_22512__boxed_929_; uint8_t v___x_22513__boxed_930_; lean_object* v_res_931_; 
v___x_22511__boxed_928_ = lean_unbox(v___x_912_);
v___x_22512__boxed_929_ = lean_unbox(v___x_913_);
v___x_22513__boxed_930_ = lean_unbox(v___x_914_);
v_res_931_ = l_Lean_mkCasesOnSameCtorHet___lam__1(v_indName_905_, v_tail_906_, v_params_907_, v_ism1_908_, v_ism2_909_, v_motive_910_, v___x_911_, v___x_22511__boxed_928_, v___x_22512__boxed_929_, v___x_22513__boxed_930_, v_name_915_, v___x_916_, v___x_917_, v_numParams_918_, v_val_919_, v___x_920_, v___x_921_, v_alts_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object* v_snd_932_, lean_object* v_x_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_939_, 0, v_snd_932_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object* v_snd_940_, lean_object* v_x_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(v_snd_940_, v_x_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec_ref(v_x_941_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t v_sz_948_, size_t v_i_949_, lean_object* v_bs_950_){
_start:
{
uint8_t v___x_951_; 
v___x_951_ = lean_usize_dec_lt(v_i_949_, v_sz_948_);
if (v___x_951_ == 0)
{
return v_bs_950_;
}
else
{
lean_object* v_v_952_; lean_object* v_fst_953_; lean_object* v_snd_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_968_; 
v_v_952_ = lean_array_uget(v_bs_950_, v_i_949_);
v_fst_953_ = lean_ctor_get(v_v_952_, 0);
v_snd_954_ = lean_ctor_get(v_v_952_, 1);
v_isSharedCheck_968_ = !lean_is_exclusive(v_v_952_);
if (v_isSharedCheck_968_ == 0)
{
v___x_956_ = v_v_952_;
v_isShared_957_ = v_isSharedCheck_968_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_snd_954_);
lean_inc(v_fst_953_);
lean_dec(v_v_952_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_968_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v_bs_x27_959_; lean_object* v___f_960_; lean_object* v___x_962_; 
v___x_958_ = lean_unsigned_to_nat(0u);
v_bs_x27_959_ = lean_array_uset(v_bs_950_, v_i_949_, v___x_958_);
v___f_960_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed), 7, 1);
lean_closure_set(v___f_960_, 0, v_snd_954_);
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v___f_960_);
v___x_962_ = v___x_956_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_fst_953_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v___f_960_);
v___x_962_ = v_reuseFailAlloc_967_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
size_t v___x_963_; size_t v___x_964_; lean_object* v___x_965_; 
v___x_963_ = ((size_t)1ULL);
v___x_964_ = lean_usize_add(v_i_949_, v___x_963_);
v___x_965_ = lean_array_uset(v_bs_x27_959_, v_i_949_, v___x_962_);
v_i_949_ = v___x_964_;
v_bs_950_ = v___x_965_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object* v_sz_969_, lean_object* v_i_970_, lean_object* v_bs_971_){
_start:
{
size_t v_sz_boxed_972_; size_t v_i_boxed_973_; lean_object* v_res_974_; 
v_sz_boxed_972_ = lean_unbox_usize(v_sz_969_);
lean_dec(v_sz_969_);
v_i_boxed_973_ = lean_unbox_usize(v_i_970_);
lean_dec(v_i_970_);
v_res_974_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_boxed_972_, v_i_boxed_973_, v_bs_971_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object* v___x_975_, lean_object* v___x_976_, lean_object* v_a_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v___x_21393__overap_983_; lean_object* v___x_984_; 
v___x_21393__overap_983_ = l_instInhabitedOfMonad___redArg(v___x_975_, v___x_976_);
lean_inc(v___y_981_);
lean_inc_ref(v___y_980_);
lean_inc(v___y_979_);
lean_inc_ref(v___y_978_);
v___x_984_ = lean_apply_5(v___x_21393__overap_983_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, lean_box(0));
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object* v___x_985_, lean_object* v___x_986_, lean_object* v_a_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(v___x_985_, v___x_986_, v_a_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec_ref(v_a_987_);
return v_res_993_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__10));
v___x_1018_ = l_StateRefT_x27_instMonad___redArg(v___x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object* v_acc_1023_, lean_object* v_declInfos_1024_, lean_object* v_k_1025_, lean_object* v_kind_1026_, lean_object* v_x_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
uint8_t v_kind_boxed_1033_; lean_object* v_res_1034_; 
v_kind_boxed_1033_ = lean_unbox(v_kind_1026_);
v_res_1034_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(v_acc_1023_, v_declInfos_1024_, v_k_1025_, v_kind_boxed_1033_, v_x_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object* v_declInfos_1035_, lean_object* v_k_1036_, uint8_t v_kind_1037_, lean_object* v_acc_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v___x_1044_; lean_object* v_toApplicative_1045_; lean_object* v_toFunctor_1046_; lean_object* v_toSeq_1047_; lean_object* v_toSeqLeft_1048_; lean_object* v_toSeqRight_1049_; lean_object* v___f_1050_; lean_object* v___f_1051_; lean_object* v___f_1052_; lean_object* v___f_1053_; lean_object* v___x_1054_; lean_object* v___f_1055_; lean_object* v___f_1056_; lean_object* v___f_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v_toApplicative_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1111_; 
v___x_1044_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11);
v_toApplicative_1045_ = lean_ctor_get(v___x_1044_, 0);
v_toFunctor_1046_ = lean_ctor_get(v_toApplicative_1045_, 0);
v_toSeq_1047_ = lean_ctor_get(v_toApplicative_1045_, 2);
v_toSeqLeft_1048_ = lean_ctor_get(v_toApplicative_1045_, 3);
v_toSeqRight_1049_ = lean_ctor_get(v_toApplicative_1045_, 4);
v___f_1050_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__12));
v___f_1051_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__13));
lean_inc_ref_n(v_toFunctor_1046_, 2);
v___f_1052_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1052_, 0, v_toFunctor_1046_);
v___f_1053_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1053_, 0, v_toFunctor_1046_);
v___x_1054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___f_1052_);
lean_ctor_set(v___x_1054_, 1, v___f_1053_);
lean_inc(v_toSeqRight_1049_);
v___f_1055_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1055_, 0, v_toSeqRight_1049_);
lean_inc(v_toSeqLeft_1048_);
v___f_1056_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1056_, 0, v_toSeqLeft_1048_);
lean_inc(v_toSeq_1047_);
v___f_1057_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1057_, 0, v_toSeq_1047_);
v___x_1058_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1054_);
lean_ctor_set(v___x_1058_, 1, v___f_1050_);
lean_ctor_set(v___x_1058_, 2, v___f_1057_);
lean_ctor_set(v___x_1058_, 3, v___f_1056_);
lean_ctor_set(v___x_1058_, 4, v___f_1055_);
v___x_1059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
lean_ctor_set(v___x_1059_, 1, v___f_1051_);
v___x_1060_ = l_StateRefT_x27_instMonad___redArg(v___x_1059_);
v_toApplicative_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v___x_1060_, 1);
lean_dec(v_unused_1112_);
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1111_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_toApplicative_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1111_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v_toFunctor_1065_; lean_object* v_toSeq_1066_; lean_object* v_toSeqLeft_1067_; lean_object* v_toSeqRight_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1109_; 
v_toFunctor_1065_ = lean_ctor_get(v_toApplicative_1061_, 0);
v_toSeq_1066_ = lean_ctor_get(v_toApplicative_1061_, 2);
v_toSeqLeft_1067_ = lean_ctor_get(v_toApplicative_1061_, 3);
v_toSeqRight_1068_ = lean_ctor_get(v_toApplicative_1061_, 4);
v_isSharedCheck_1109_ = !lean_is_exclusive(v_toApplicative_1061_);
if (v_isSharedCheck_1109_ == 0)
{
lean_object* v_unused_1110_; 
v_unused_1110_ = lean_ctor_get(v_toApplicative_1061_, 1);
lean_dec(v_unused_1110_);
v___x_1070_ = v_toApplicative_1061_;
v_isShared_1071_ = v_isSharedCheck_1109_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_toSeqRight_1068_);
lean_inc(v_toSeqLeft_1067_);
lean_inc(v_toSeq_1066_);
lean_inc(v_toFunctor_1065_);
lean_dec(v_toApplicative_1061_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1109_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___f_1072_; lean_object* v___f_1073_; lean_object* v___f_1074_; lean_object* v___f_1075_; lean_object* v___x_1076_; lean_object* v___f_1077_; lean_object* v___f_1078_; lean_object* v___f_1079_; lean_object* v___x_1081_; 
v___f_1072_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__14));
v___f_1073_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__15));
lean_inc_ref(v_toFunctor_1065_);
v___f_1074_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1074_, 0, v_toFunctor_1065_);
v___f_1075_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1075_, 0, v_toFunctor_1065_);
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___f_1074_);
lean_ctor_set(v___x_1076_, 1, v___f_1075_);
v___f_1077_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1077_, 0, v_toSeqRight_1068_);
v___f_1078_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1078_, 0, v_toSeqLeft_1067_);
v___f_1079_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1079_, 0, v_toSeq_1066_);
if (v_isShared_1071_ == 0)
{
lean_ctor_set(v___x_1070_, 4, v___f_1077_);
lean_ctor_set(v___x_1070_, 3, v___f_1078_);
lean_ctor_set(v___x_1070_, 2, v___f_1079_);
lean_ctor_set(v___x_1070_, 1, v___f_1072_);
lean_ctor_set(v___x_1070_, 0, v___x_1076_);
v___x_1081_ = v___x_1070_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v___f_1072_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v___f_1079_);
lean_ctor_set(v_reuseFailAlloc_1108_, 3, v___f_1078_);
lean_ctor_set(v_reuseFailAlloc_1108_, 4, v___f_1077_);
v___x_1081_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
lean_object* v___x_1083_; 
if (v_isShared_1064_ == 0)
{
lean_ctor_set(v___x_1063_, 1, v___f_1073_);
lean_ctor_set(v___x_1063_, 0, v___x_1081_);
v___x_1083_ = v___x_1063_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v___f_1073_);
v___x_1083_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; uint8_t v___x_1086_; 
v___x_1084_ = lean_array_get_size(v_acc_1038_);
v___x_1085_ = lean_array_get_size(v_declInfos_1035_);
v___x_1086_ = lean_nat_dec_lt(v___x_1084_, v___x_1085_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; 
lean_dec_ref(v___x_1083_);
lean_dec_ref(v_declInfos_1035_);
lean_inc(v___y_1042_);
lean_inc_ref(v___y_1041_);
lean_inc(v___y_1040_);
lean_inc_ref(v___y_1039_);
v___x_1087_ = lean_apply_6(v_k_1036_, v_acc_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, lean_box(0));
return v___x_1087_;
}
else
{
lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___f_1091_; lean_object* v___f_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v_snd_1097_; lean_object* v_fst_1098_; lean_object* v_fst_1099_; lean_object* v_snd_1100_; lean_object* v___x_1101_; lean_object* v___f_1102_; lean_object* v___x_1103_; 
v___x_1088_ = lean_box(0);
v___x_1089_ = 0;
v___x_1090_ = l_Lean_instInhabitedExpr;
v___f_1091_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1091_, 0, v___x_1083_);
lean_closure_set(v___f_1091_, 1, v___x_1090_);
v___f_1092_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1092_, 0, v___f_1091_);
v___x_1093_ = lean_box(v___x_1089_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1093_);
lean_ctor_set(v___x_1094_, 1, v___f_1092_);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1088_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = lean_array_get(v___x_1095_, v_declInfos_1035_, v___x_1084_);
lean_dec_ref_known(v___x_1095_, 2);
v_snd_1097_ = lean_ctor_get(v___x_1096_, 1);
lean_inc(v_snd_1097_);
v_fst_1098_ = lean_ctor_get(v___x_1096_, 0);
lean_inc(v_fst_1098_);
lean_dec(v___x_1096_);
v_fst_1099_ = lean_ctor_get(v_snd_1097_, 0);
lean_inc(v_fst_1099_);
v_snd_1100_ = lean_ctor_get(v_snd_1097_, 1);
lean_inc(v_snd_1100_);
lean_dec(v_snd_1097_);
v___x_1101_ = lean_box(v_kind_1037_);
lean_inc_ref(v_acc_1038_);
v___f_1102_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed), 10, 4);
lean_closure_set(v___f_1102_, 0, v_acc_1038_);
lean_closure_set(v___f_1102_, 1, v_declInfos_1035_);
lean_closure_set(v___f_1102_, 2, v_k_1036_);
lean_closure_set(v___f_1102_, 3, v___x_1101_);
lean_inc(v___y_1042_);
lean_inc_ref(v___y_1041_);
lean_inc(v___y_1040_);
lean_inc_ref(v___y_1039_);
v___x_1103_ = lean_apply_6(v_snd_1100_, v_acc_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, lean_box(0));
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; uint8_t v___x_1105_; lean_object* v___x_1106_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref_known(v___x_1103_, 1);
v___x_1105_ = lean_unbox(v_fst_1099_);
lean_dec(v_fst_1099_);
v___x_1106_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_1098_, v___x_1105_, v_a_1104_, v___f_1102_, v_kind_1037_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
return v___x_1106_;
}
else
{
lean_dec_ref(v___f_1102_);
lean_dec(v_fst_1099_);
lean_dec(v_fst_1098_);
return v___x_1103_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object* v_acc_1113_, lean_object* v_declInfos_1114_, lean_object* v_k_1115_, uint8_t v_kind_1116_, lean_object* v_x_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1123_ = lean_array_push(v_acc_1113_, v_x_1117_);
v___x_1124_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1114_, v_k_1115_, v_kind_1116_, v___x_1123_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
return v___x_1124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object* v_declInfos_1125_, lean_object* v_k_1126_, lean_object* v_kind_1127_, lean_object* v_acc_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
uint8_t v_kind_boxed_1134_; lean_object* v_res_1135_; 
v_kind_boxed_1134_ = lean_unbox(v_kind_1127_);
v_res_1135_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1125_, v_k_1126_, v_kind_boxed_1134_, v_acc_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_);
lean_dec(v___y_1132_);
lean_dec_ref(v___y_1131_);
lean_dec(v___y_1130_);
lean_dec_ref(v___y_1129_);
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object* v_declInfos_1138_, lean_object* v_k_1139_, uint8_t v_kind_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1146_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0));
v___x_1147_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1138_, v_k_1139_, v_kind_1140_, v___x_1146_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object* v_declInfos_1148_, lean_object* v_k_1149_, lean_object* v_kind_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
uint8_t v_kind_boxed_1156_; lean_object* v_res_1157_; 
v_kind_boxed_1156_ = lean_unbox(v_kind_1150_);
v_res_1157_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v_declInfos_1148_, v_k_1149_, v_kind_boxed_1156_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_);
lean_dec(v___y_1154_);
lean_dec_ref(v___y_1153_);
lean_dec(v___y_1152_);
lean_dec_ref(v___y_1151_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t v_sz_1158_, size_t v_i_1159_, lean_object* v_bs_1160_){
_start:
{
uint8_t v___x_1161_; 
v___x_1161_ = lean_usize_dec_lt(v_i_1159_, v_sz_1158_);
if (v___x_1161_ == 0)
{
return v_bs_1160_;
}
else
{
lean_object* v_v_1162_; lean_object* v_fst_1163_; lean_object* v_snd_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1180_; 
v_v_1162_ = lean_array_uget(v_bs_1160_, v_i_1159_);
v_fst_1163_ = lean_ctor_get(v_v_1162_, 0);
v_snd_1164_ = lean_ctor_get(v_v_1162_, 1);
v_isSharedCheck_1180_ = !lean_is_exclusive(v_v_1162_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1166_ = v_v_1162_;
v_isShared_1167_ = v_isSharedCheck_1180_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_snd_1164_);
lean_inc(v_fst_1163_);
lean_dec(v_v_1162_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1180_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1168_; lean_object* v_bs_x27_1169_; uint8_t v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1173_; 
v___x_1168_ = lean_unsigned_to_nat(0u);
v_bs_x27_1169_ = lean_array_uset(v_bs_1160_, v_i_1159_, v___x_1168_);
v___x_1170_ = 0;
v___x_1171_ = lean_box(v___x_1170_);
if (v_isShared_1167_ == 0)
{
lean_ctor_set(v___x_1166_, 0, v___x_1171_);
v___x_1173_ = v___x_1166_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_snd_1164_);
v___x_1173_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
lean_object* v___x_1174_; size_t v___x_1175_; size_t v___x_1176_; lean_object* v___x_1177_; 
v___x_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1174_, 0, v_fst_1163_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = ((size_t)1ULL);
v___x_1176_ = lean_usize_add(v_i_1159_, v___x_1175_);
v___x_1177_ = lean_array_uset(v_bs_x27_1169_, v_i_1159_, v___x_1174_);
v_i_1159_ = v___x_1176_;
v_bs_1160_ = v___x_1177_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object* v_sz_1181_, lean_object* v_i_1182_, lean_object* v_bs_1183_){
_start:
{
size_t v_sz_boxed_1184_; size_t v_i_boxed_1185_; lean_object* v_res_1186_; 
v_sz_boxed_1184_ = lean_unbox_usize(v_sz_1181_);
lean_dec(v_sz_1181_);
v_i_boxed_1185_ = lean_unbox_usize(v_i_1182_);
lean_dec(v_i_1182_);
v_res_1186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_boxed_1184_, v_i_boxed_1185_, v_bs_1183_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object* v_declInfos_1187_, lean_object* v_k_1188_, uint8_t v_kind_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
size_t v_sz_1195_; size_t v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_sz_1195_ = lean_array_size(v_declInfos_1187_);
v___x_1196_ = ((size_t)0ULL);
v___x_1197_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_1195_, v___x_1196_, v_declInfos_1187_);
v___x_1198_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v___x_1197_, v_k_1188_, v_kind_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object* v_declInfos_1199_, lean_object* v_k_1200_, lean_object* v_kind_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
uint8_t v_kind_boxed_1207_; lean_object* v_res_1208_; 
v_kind_boxed_1207_ = lean_unbox(v_kind_1201_);
v_res_1208_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v_declInfos_1199_, v_k_1200_, v_kind_boxed_1207_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object* v_declInfos_1209_, lean_object* v_k_1210_, uint8_t v_kind_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
size_t v_sz_1217_; size_t v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v_sz_1217_ = lean_array_size(v_declInfos_1209_);
v___x_1218_ = ((size_t)0ULL);
v___x_1219_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_1217_, v___x_1218_, v_declInfos_1209_);
v___x_1220_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v___x_1219_, v_k_1210_, v_kind_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object* v_declInfos_1221_, lean_object* v_k_1222_, lean_object* v_kind_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
uint8_t v_kind_boxed_1229_; lean_object* v_res_1230_; 
v_kind_boxed_1229_ = lean_unbox(v_kind_1223_);
v_res_1230_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_declInfos_1221_, v_k_1222_, v_kind_boxed_1229_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object* v___x_1232_, lean_object* v_dummy_1233_, lean_object* v___x_1234_, lean_object* v___x_1235_, lean_object* v___x_1236_, lean_object* v_motive_1237_, lean_object* v_zs1_1238_, uint8_t v___x_1239_, uint8_t v___x_1240_, uint8_t v___x_1241_, lean_object* v_v_1242_, lean_object* v___x_1243_, lean_object* v_zs2_1244_, lean_object* v_ctorRet2_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1251_ = l_Lean_mkAppN(v___x_1232_, v_zs2_1244_);
lean_inc(v___y_1249_);
lean_inc_ref(v___y_1248_);
lean_inc(v___y_1247_);
lean_inc_ref(v___y_1246_);
v___x_1252_ = lean_whnf(v_ctorRet2_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; lean_object* v_nargs_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_a_1253_);
lean_dec_ref_known(v___x_1252_, 1);
v_nargs_1254_ = l_Lean_Expr_getAppNumArgs(v_a_1253_);
lean_inc(v_nargs_1254_);
v___x_1255_ = lean_mk_array(v_nargs_1254_, v_dummy_1233_);
v___x_1256_ = lean_nat_sub(v_nargs_1254_, v___x_1234_);
lean_dec(v_nargs_1254_);
v___x_1257_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1253_, v___x_1255_, v___x_1256_);
v___x_1258_ = lean_array_get_size(v___x_1257_);
v___x_1259_ = l_Array_toSubarray___redArg(v___x_1257_, v___x_1235_, v___x_1258_);
v___x_1260_ = l_Subarray_copy___redArg(v___x_1259_);
v___x_1261_ = lean_array_push(v___x_1260_, v___x_1251_);
v___x_1262_ = l_Array_append___redArg(v___x_1236_, v___x_1261_);
lean_dec_ref(v___x_1261_);
v___x_1263_ = l_Lean_mkAppN(v_motive_1237_, v___x_1262_);
lean_dec_ref(v___x_1262_);
v___x_1264_ = l_Array_append___redArg(v_zs1_1238_, v_zs2_1244_);
v___x_1265_ = l_Lean_Meta_mkForallFVars(v___x_1264_, v___x_1263_, v___x_1239_, v___x_1240_, v___x_1240_, v___x_1241_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec_ref(v___x_1264_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1285_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1285_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1285_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___y_1271_; 
if (lean_obj_tag(v_v_1242_) == 1)
{
lean_object* v_str_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v_str_1276_ = lean_ctor_get(v_v_1242_, 1);
lean_inc_ref(v_str_1276_);
lean_dec_ref_known(v_v_1242_, 2);
v___x_1277_ = lean_box(0);
v___x_1278_ = l_Lean_Name_str___override(v___x_1277_, v_str_1276_);
v___y_1271_ = v___x_1278_;
goto v___jp_1270_;
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; 
lean_dec(v_v_1242_);
v___x_1279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0));
v___x_1280_ = lean_nat_add(v___x_1243_, v___x_1234_);
v___x_1281_ = l_Nat_reprFast(v___x_1280_);
v___x_1282_ = lean_string_append(v___x_1279_, v___x_1281_);
lean_dec_ref(v___x_1281_);
v___x_1283_ = lean_box(0);
v___x_1284_ = l_Lean_Name_str___override(v___x_1283_, v___x_1282_);
v___y_1271_ = v___x_1284_;
goto v___jp_1270_;
}
v___jp_1270_:
{
lean_object* v___x_1272_; lean_object* v___x_1274_; 
v___x_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___y_1271_);
lean_ctor_set(v___x_1272_, 1, v_a_1266_);
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1272_);
v___x_1274_ = v___x_1268_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1272_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec(v_v_1242_);
v_a_1286_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1265_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1265_);
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
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v___x_1251_);
lean_dec(v_v_1242_);
lean_dec_ref(v_zs1_1238_);
lean_dec_ref(v_motive_1237_);
lean_dec_ref(v___x_1236_);
lean_dec(v___x_1235_);
lean_dec_ref(v_dummy_1233_);
v_a_1294_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1252_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1252_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_1302_ = _args[0];
lean_object* v_dummy_1303_ = _args[1];
lean_object* v___x_1304_ = _args[2];
lean_object* v___x_1305_ = _args[3];
lean_object* v___x_1306_ = _args[4];
lean_object* v_motive_1307_ = _args[5];
lean_object* v_zs1_1308_ = _args[6];
lean_object* v___x_1309_ = _args[7];
lean_object* v___x_1310_ = _args[8];
lean_object* v___x_1311_ = _args[9];
lean_object* v_v_1312_ = _args[10];
lean_object* v___x_1313_ = _args[11];
lean_object* v_zs2_1314_ = _args[12];
lean_object* v_ctorRet2_1315_ = _args[13];
lean_object* v___y_1316_ = _args[14];
lean_object* v___y_1317_ = _args[15];
lean_object* v___y_1318_ = _args[16];
lean_object* v___y_1319_ = _args[17];
lean_object* v___y_1320_ = _args[18];
_start:
{
uint8_t v___x_23016__boxed_1321_; uint8_t v___x_23017__boxed_1322_; uint8_t v___x_23018__boxed_1323_; lean_object* v_res_1324_; 
v___x_23016__boxed_1321_ = lean_unbox(v___x_1309_);
v___x_23017__boxed_1322_ = lean_unbox(v___x_1310_);
v___x_23018__boxed_1323_ = lean_unbox(v___x_1311_);
v_res_1324_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(v___x_1302_, v_dummy_1303_, v___x_1304_, v___x_1305_, v___x_1306_, v_motive_1307_, v_zs1_1308_, v___x_23016__boxed_1321_, v___x_23017__boxed_1322_, v___x_23018__boxed_1323_, v_v_1312_, v___x_1313_, v_zs2_1314_, v_ctorRet2_1315_, v___y_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec_ref(v_zs2_1314_);
lean_dec(v___x_1313_);
lean_dec(v___x_1304_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object* v___x_1325_, lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v_motive_1328_, uint8_t v___x_1329_, uint8_t v___x_1330_, uint8_t v___x_1331_, lean_object* v_v_1332_, lean_object* v___x_1333_, lean_object* v_a_1334_, lean_object* v_zs1_1335_, lean_object* v_ctorRet1_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
lean_inc_ref(v___x_1325_);
v___x_1342_ = l_Lean_mkAppN(v___x_1325_, v_zs1_1335_);
lean_inc(v___y_1340_);
lean_inc_ref(v___y_1339_);
lean_inc(v___y_1338_);
lean_inc_ref(v___y_1337_);
v___x_1343_ = lean_whnf(v_ctorRet1_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; lean_object* v_dummy_1345_; lean_object* v_nargs_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___f_1357_; lean_object* v___x_1358_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
lean_dec_ref_known(v___x_1343_, 1);
v_dummy_1345_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0);
v_nargs_1346_ = l_Lean_Expr_getAppNumArgs(v_a_1344_);
lean_inc(v_nargs_1346_);
v___x_1347_ = lean_mk_array(v_nargs_1346_, v_dummy_1345_);
v___x_1348_ = lean_nat_sub(v_nargs_1346_, v___x_1326_);
lean_dec(v_nargs_1346_);
v___x_1349_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1344_, v___x_1347_, v___x_1348_);
v___x_1350_ = lean_array_get_size(v___x_1349_);
lean_inc(v___x_1327_);
v___x_1351_ = l_Array_toSubarray___redArg(v___x_1349_, v___x_1327_, v___x_1350_);
v___x_1352_ = l_Subarray_copy___redArg(v___x_1351_);
v___x_1353_ = lean_array_push(v___x_1352_, v___x_1342_);
v___x_1354_ = lean_box(v___x_1329_);
v___x_1355_ = lean_box(v___x_1330_);
v___x_1356_ = lean_box(v___x_1331_);
v___f_1357_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed), 19, 12);
lean_closure_set(v___f_1357_, 0, v___x_1325_);
lean_closure_set(v___f_1357_, 1, v_dummy_1345_);
lean_closure_set(v___f_1357_, 2, v___x_1326_);
lean_closure_set(v___f_1357_, 3, v___x_1327_);
lean_closure_set(v___f_1357_, 4, v___x_1353_);
lean_closure_set(v___f_1357_, 5, v_motive_1328_);
lean_closure_set(v___f_1357_, 6, v_zs1_1335_);
lean_closure_set(v___f_1357_, 7, v___x_1354_);
lean_closure_set(v___f_1357_, 8, v___x_1355_);
lean_closure_set(v___f_1357_, 9, v___x_1356_);
lean_closure_set(v___f_1357_, 10, v_v_1332_);
lean_closure_set(v___f_1357_, 11, v___x_1333_);
v___x_1358_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1334_, v___f_1357_, v___x_1329_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_);
return v___x_1358_;
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_dec_ref(v___x_1342_);
lean_dec_ref(v_zs1_1335_);
lean_dec_ref(v_a_1334_);
lean_dec(v___x_1333_);
lean_dec(v_v_1332_);
lean_dec_ref(v_motive_1328_);
lean_dec(v___x_1327_);
lean_dec(v___x_1326_);
lean_dec_ref(v___x_1325_);
v_a_1359_ = lean_ctor_get(v___x_1343_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1343_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1343_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_1367_ = _args[0];
lean_object* v___x_1368_ = _args[1];
lean_object* v___x_1369_ = _args[2];
lean_object* v_motive_1370_ = _args[3];
lean_object* v___x_1371_ = _args[4];
lean_object* v___x_1372_ = _args[5];
lean_object* v___x_1373_ = _args[6];
lean_object* v_v_1374_ = _args[7];
lean_object* v___x_1375_ = _args[8];
lean_object* v_a_1376_ = _args[9];
lean_object* v_zs1_1377_ = _args[10];
lean_object* v_ctorRet1_1378_ = _args[11];
lean_object* v___y_1379_ = _args[12];
lean_object* v___y_1380_ = _args[13];
lean_object* v___y_1381_ = _args[14];
lean_object* v___y_1382_ = _args[15];
lean_object* v___y_1383_ = _args[16];
_start:
{
uint8_t v___x_23157__boxed_1384_; uint8_t v___x_23158__boxed_1385_; uint8_t v___x_23159__boxed_1386_; lean_object* v_res_1387_; 
v___x_23157__boxed_1384_ = lean_unbox(v___x_1371_);
v___x_23158__boxed_1385_ = lean_unbox(v___x_1372_);
v___x_23159__boxed_1386_ = lean_unbox(v___x_1373_);
v_res_1387_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(v___x_1367_, v___x_1368_, v___x_1369_, v_motive_1370_, v___x_23157__boxed_1384_, v___x_23158__boxed_1385_, v___x_23159__boxed_1386_, v_v_1374_, v___x_1375_, v_a_1376_, v_zs1_1377_, v_ctorRet1_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object* v_tail_1388_, lean_object* v_params_1389_, lean_object* v___x_1390_, lean_object* v_motive_1391_, size_t v_sz_1392_, size_t v_i_1393_, lean_object* v_bs_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
uint8_t v___x_1400_; 
v___x_1400_ = lean_usize_dec_lt(v_i_1393_, v_sz_1392_);
if (v___x_1400_ == 0)
{
lean_object* v___x_1401_; 
lean_dec_ref(v_motive_1391_);
lean_dec(v___x_1390_);
lean_dec(v_tail_1388_);
v___x_1401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1401_, 0, v_bs_1394_);
return v___x_1401_;
}
else
{
uint8_t v___x_1402_; uint8_t v___x_1403_; lean_object* v___x_1404_; lean_object* v_v_1405_; lean_object* v___x_1406_; lean_object* v_bs_x27_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1402_ = 0;
v___x_1403_ = 1;
v___x_1404_ = lean_unsigned_to_nat(1u);
v_v_1405_ = lean_array_uget(v_bs_1394_, v_i_1393_);
v___x_1406_ = lean_unsigned_to_nat(0u);
v_bs_x27_1407_ = lean_array_uset(v_bs_1394_, v_i_1393_, v___x_1406_);
v___x_1408_ = lean_usize_to_nat(v_i_1393_);
lean_inc(v_tail_1388_);
lean_inc(v_v_1405_);
v___x_1409_ = l_Lean_mkConst(v_v_1405_, v_tail_1388_);
v___x_1410_ = l_Lean_mkAppN(v___x_1409_, v_params_1389_);
lean_inc(v___y_1398_);
lean_inc_ref(v___y_1397_);
lean_inc(v___y_1396_);
lean_inc_ref(v___y_1395_);
lean_inc_ref(v___x_1410_);
v___x_1411_ = lean_infer_type(v___x_1410_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___f_1416_; lean_object* v___x_1417_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc_n(v_a_1412_, 2);
lean_dec_ref_known(v___x_1411_, 1);
v___x_1413_ = lean_box(v___x_1402_);
v___x_1414_ = lean_box(v___x_1400_);
v___x_1415_ = lean_box(v___x_1403_);
lean_inc_ref(v_motive_1391_);
lean_inc(v___x_1390_);
v___f_1416_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed), 17, 10);
lean_closure_set(v___f_1416_, 0, v___x_1410_);
lean_closure_set(v___f_1416_, 1, v___x_1404_);
lean_closure_set(v___f_1416_, 2, v___x_1390_);
lean_closure_set(v___f_1416_, 3, v_motive_1391_);
lean_closure_set(v___f_1416_, 4, v___x_1413_);
lean_closure_set(v___f_1416_, 5, v___x_1414_);
lean_closure_set(v___f_1416_, 6, v___x_1415_);
lean_closure_set(v___f_1416_, 7, v_v_1405_);
lean_closure_set(v___f_1416_, 8, v___x_1408_);
lean_closure_set(v___f_1416_, 9, v_a_1412_);
v___x_1417_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1412_, v___f_1416_, v___x_1402_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; size_t v___x_1419_; size_t v___x_1420_; lean_object* v___x_1421_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v___x_1417_, 1);
v___x_1419_ = ((size_t)1ULL);
v___x_1420_ = lean_usize_add(v_i_1393_, v___x_1419_);
v___x_1421_ = lean_array_uset(v_bs_x27_1407_, v_i_1393_, v_a_1418_);
v_i_1393_ = v___x_1420_;
v_bs_1394_ = v___x_1421_;
goto _start;
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref(v_bs_x27_1407_);
lean_dec_ref(v_motive_1391_);
lean_dec(v___x_1390_);
lean_dec(v_tail_1388_);
v_a_1423_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1417_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1417_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
else
{
lean_object* v_a_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1438_; 
lean_dec_ref(v___x_1410_);
lean_dec(v___x_1408_);
lean_dec_ref(v_bs_x27_1407_);
lean_dec(v_v_1405_);
lean_dec_ref(v_motive_1391_);
lean_dec(v___x_1390_);
lean_dec(v_tail_1388_);
v_a_1431_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1433_ = v___x_1411_;
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_a_1431_);
lean_dec(v___x_1411_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1438_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v___x_1436_; 
if (v_isShared_1434_ == 0)
{
v___x_1436_ = v___x_1433_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_a_1431_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object* v_tail_1439_, lean_object* v_params_1440_, lean_object* v___x_1441_, lean_object* v_motive_1442_, lean_object* v_sz_1443_, lean_object* v_i_1444_, lean_object* v_bs_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
size_t v_sz_boxed_1451_; size_t v_i_boxed_1452_; lean_object* v_res_1453_; 
v_sz_boxed_1451_ = lean_unbox_usize(v_sz_1443_);
lean_dec(v_sz_1443_);
v_i_boxed_1452_ = lean_unbox_usize(v_i_1444_);
lean_dec(v_i_1444_);
v_res_1453_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1439_, v_params_1440_, v___x_1441_, v_motive_1442_, v_sz_boxed_1451_, v_i_boxed_1452_, v_bs_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec_ref(v_params_1440_);
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object* v_ctors_1454_, lean_object* v_indName_1455_, lean_object* v_tail_1456_, lean_object* v_params_1457_, lean_object* v_ism1_1458_, lean_object* v_ism2_1459_, lean_object* v___x_1460_, uint8_t v___x_1461_, uint8_t v___x_1462_, uint8_t v___x_1463_, lean_object* v_name_1464_, lean_object* v___x_1465_, lean_object* v_numParams_1466_, lean_object* v_val_1467_, lean_object* v___x_1468_, lean_object* v___x_1469_, lean_object* v_motive_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___f_1480_; size_t v_sz_1481_; size_t v___x_1482_; lean_object* v___x_1483_; 
v___x_1476_ = lean_array_mk(v_ctors_1454_);
v___x_1477_ = lean_box(v___x_1461_);
v___x_1478_ = lean_box(v___x_1462_);
v___x_1479_ = lean_box(v___x_1463_);
lean_inc(v_numParams_1466_);
lean_inc_ref(v___x_1476_);
lean_inc_ref(v_motive_1470_);
lean_inc_ref(v_params_1457_);
lean_inc(v_tail_1456_);
v___f_1480_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__1___boxed), 23, 17);
lean_closure_set(v___f_1480_, 0, v_indName_1455_);
lean_closure_set(v___f_1480_, 1, v_tail_1456_);
lean_closure_set(v___f_1480_, 2, v_params_1457_);
lean_closure_set(v___f_1480_, 3, v_ism1_1458_);
lean_closure_set(v___f_1480_, 4, v_ism2_1459_);
lean_closure_set(v___f_1480_, 5, v_motive_1470_);
lean_closure_set(v___f_1480_, 6, v___x_1460_);
lean_closure_set(v___f_1480_, 7, v___x_1477_);
lean_closure_set(v___f_1480_, 8, v___x_1478_);
lean_closure_set(v___f_1480_, 9, v___x_1479_);
lean_closure_set(v___f_1480_, 10, v_name_1464_);
lean_closure_set(v___f_1480_, 11, v___x_1465_);
lean_closure_set(v___f_1480_, 12, v___x_1476_);
lean_closure_set(v___f_1480_, 13, v_numParams_1466_);
lean_closure_set(v___f_1480_, 14, v_val_1467_);
lean_closure_set(v___f_1480_, 15, v___x_1468_);
lean_closure_set(v___f_1480_, 16, v___x_1469_);
v_sz_1481_ = lean_array_size(v___x_1476_);
v___x_1482_ = ((size_t)0ULL);
v___x_1483_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1456_, v_params_1457_, v_numParams_1466_, v_motive_1470_, v_sz_1481_, v___x_1482_, v___x_1476_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
lean_dec_ref(v_params_1457_);
if (lean_obj_tag(v___x_1483_) == 0)
{
lean_object* v_a_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; 
v_a_1484_ = lean_ctor_get(v___x_1483_, 0);
lean_inc(v_a_1484_);
lean_dec_ref_known(v___x_1483_, 1);
v___x_1485_ = 0;
v___x_1486_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_a_1484_, v___f_1480_, v___x_1485_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
return v___x_1486_;
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec_ref(v___f_1480_);
v_a_1487_ = lean_ctor_get(v___x_1483_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1483_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1483_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1483_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object** _args){
lean_object* v_ctors_1495_ = _args[0];
lean_object* v_indName_1496_ = _args[1];
lean_object* v_tail_1497_ = _args[2];
lean_object* v_params_1498_ = _args[3];
lean_object* v_ism1_1499_ = _args[4];
lean_object* v_ism2_1500_ = _args[5];
lean_object* v___x_1501_ = _args[6];
lean_object* v___x_1502_ = _args[7];
lean_object* v___x_1503_ = _args[8];
lean_object* v___x_1504_ = _args[9];
lean_object* v_name_1505_ = _args[10];
lean_object* v___x_1506_ = _args[11];
lean_object* v_numParams_1507_ = _args[12];
lean_object* v_val_1508_ = _args[13];
lean_object* v___x_1509_ = _args[14];
lean_object* v___x_1510_ = _args[15];
lean_object* v_motive_1511_ = _args[16];
lean_object* v___y_1512_ = _args[17];
lean_object* v___y_1513_ = _args[18];
lean_object* v___y_1514_ = _args[19];
lean_object* v___y_1515_ = _args[20];
lean_object* v___y_1516_ = _args[21];
_start:
{
uint8_t v___x_23337__boxed_1517_; uint8_t v___x_23338__boxed_1518_; uint8_t v___x_23339__boxed_1519_; lean_object* v_res_1520_; 
v___x_23337__boxed_1517_ = lean_unbox(v___x_1502_);
v___x_23338__boxed_1518_ = lean_unbox(v___x_1503_);
v___x_23339__boxed_1519_ = lean_unbox(v___x_1504_);
v_res_1520_ = l_Lean_mkCasesOnSameCtorHet___lam__2(v_ctors_1495_, v_indName_1496_, v_tail_1497_, v_params_1498_, v_ism1_1499_, v_ism2_1500_, v___x_1501_, v___x_23337__boxed_1517_, v___x_23338__boxed_1518_, v___x_23339__boxed_1519_, v_name_1505_, v___x_1506_, v_numParams_1507_, v_val_1508_, v___x_1509_, v___x_1510_, v_motive_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object* v_ism1_1524_, lean_object* v_head_1525_, lean_object* v_ctors_1526_, lean_object* v_indName_1527_, lean_object* v_tail_1528_, lean_object* v_params_1529_, lean_object* v_name_1530_, lean_object* v___x_1531_, lean_object* v_numParams_1532_, lean_object* v_val_1533_, lean_object* v___x_1534_, lean_object* v___x_1535_, lean_object* v_ism2_1536_, lean_object* v_x_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; uint8_t v___x_1545_; uint8_t v___x_1546_; uint8_t v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___f_1551_; lean_object* v___x_1552_; 
lean_inc_ref(v_ism1_1524_);
v___x_1543_ = l_Array_append___redArg(v_ism1_1524_, v_ism2_1536_);
v___x_1544_ = l_Lean_mkSort(v_head_1525_);
v___x_1545_ = 0;
v___x_1546_ = 1;
v___x_1547_ = 1;
v___x_1548_ = lean_box(v___x_1545_);
v___x_1549_ = lean_box(v___x_1546_);
v___x_1550_ = lean_box(v___x_1547_);
lean_inc_ref(v___x_1543_);
v___f_1551_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__2___boxed), 22, 16);
lean_closure_set(v___f_1551_, 0, v_ctors_1526_);
lean_closure_set(v___f_1551_, 1, v_indName_1527_);
lean_closure_set(v___f_1551_, 2, v_tail_1528_);
lean_closure_set(v___f_1551_, 3, v_params_1529_);
lean_closure_set(v___f_1551_, 4, v_ism1_1524_);
lean_closure_set(v___f_1551_, 5, v_ism2_1536_);
lean_closure_set(v___f_1551_, 6, v___x_1543_);
lean_closure_set(v___f_1551_, 7, v___x_1548_);
lean_closure_set(v___f_1551_, 8, v___x_1549_);
lean_closure_set(v___f_1551_, 9, v___x_1550_);
lean_closure_set(v___f_1551_, 10, v_name_1530_);
lean_closure_set(v___f_1551_, 11, v___x_1531_);
lean_closure_set(v___f_1551_, 12, v_numParams_1532_);
lean_closure_set(v___f_1551_, 13, v_val_1533_);
lean_closure_set(v___f_1551_, 14, v___x_1534_);
lean_closure_set(v___f_1551_, 15, v___x_1535_);
v___x_1552_ = l_Lean_Meta_mkForallFVars(v___x_1543_, v___x_1544_, v___x_1545_, v___x_1546_, v___x_1546_, v___x_1547_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
lean_dec_ref(v___x_1543_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
v___x_1554_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1));
v___x_1555_ = 0;
v___x_1556_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_1554_, v___x_1547_, v_a_1553_, v___f_1551_, v___x_1555_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
return v___x_1556_;
}
else
{
lean_dec_ref(v___f_1551_);
return v___x_1552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object** _args){
lean_object* v_ism1_1557_ = _args[0];
lean_object* v_head_1558_ = _args[1];
lean_object* v_ctors_1559_ = _args[2];
lean_object* v_indName_1560_ = _args[3];
lean_object* v_tail_1561_ = _args[4];
lean_object* v_params_1562_ = _args[5];
lean_object* v_name_1563_ = _args[6];
lean_object* v___x_1564_ = _args[7];
lean_object* v_numParams_1565_ = _args[8];
lean_object* v_val_1566_ = _args[9];
lean_object* v___x_1567_ = _args[10];
lean_object* v___x_1568_ = _args[11];
lean_object* v_ism2_1569_ = _args[12];
lean_object* v_x_1570_ = _args[13];
lean_object* v___y_1571_ = _args[14];
lean_object* v___y_1572_ = _args[15];
lean_object* v___y_1573_ = _args[16];
lean_object* v___y_1574_ = _args[17];
lean_object* v___y_1575_ = _args[18];
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lean_mkCasesOnSameCtorHet___lam__3(v_ism1_1557_, v_head_1558_, v_ctors_1559_, v_indName_1560_, v_tail_1561_, v_params_1562_, v_name_1563_, v___x_1564_, v_numParams_1565_, v_val_1566_, v___x_1567_, v___x_1568_, v_ism2_1569_, v_x_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec_ref(v_x_1570_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object* v_head_1577_, lean_object* v_ctors_1578_, lean_object* v_indName_1579_, lean_object* v_tail_1580_, lean_object* v_params_1581_, lean_object* v_name_1582_, lean_object* v___x_1583_, lean_object* v_numParams_1584_, lean_object* v_val_1585_, lean_object* v___x_1586_, lean_object* v___x_1587_, lean_object* v_t_1588_, lean_object* v___x_1589_, lean_object* v_ism1_1590_, lean_object* v_x_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___f_1597_; uint8_t v___x_1598_; lean_object* v___x_1599_; 
v___f_1597_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__3___boxed), 19, 12);
lean_closure_set(v___f_1597_, 0, v_ism1_1590_);
lean_closure_set(v___f_1597_, 1, v_head_1577_);
lean_closure_set(v___f_1597_, 2, v_ctors_1578_);
lean_closure_set(v___f_1597_, 3, v_indName_1579_);
lean_closure_set(v___f_1597_, 4, v_tail_1580_);
lean_closure_set(v___f_1597_, 5, v_params_1581_);
lean_closure_set(v___f_1597_, 6, v_name_1582_);
lean_closure_set(v___f_1597_, 7, v___x_1583_);
lean_closure_set(v___f_1597_, 8, v_numParams_1584_);
lean_closure_set(v___f_1597_, 9, v_val_1585_);
lean_closure_set(v___f_1597_, 10, v___x_1586_);
lean_closure_set(v___f_1597_, 11, v___x_1587_);
v___x_1598_ = 0;
v___x_1599_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1588_, v___x_1589_, v___f_1597_, v___x_1598_, v___x_1598_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object** _args){
lean_object* v_head_1600_ = _args[0];
lean_object* v_ctors_1601_ = _args[1];
lean_object* v_indName_1602_ = _args[2];
lean_object* v_tail_1603_ = _args[3];
lean_object* v_params_1604_ = _args[4];
lean_object* v_name_1605_ = _args[5];
lean_object* v___x_1606_ = _args[6];
lean_object* v_numParams_1607_ = _args[7];
lean_object* v_val_1608_ = _args[8];
lean_object* v___x_1609_ = _args[9];
lean_object* v___x_1610_ = _args[10];
lean_object* v_t_1611_ = _args[11];
lean_object* v___x_1612_ = _args[12];
lean_object* v_ism1_1613_ = _args[13];
lean_object* v_x_1614_ = _args[14];
lean_object* v___y_1615_ = _args[15];
lean_object* v___y_1616_ = _args[16];
lean_object* v___y_1617_ = _args[17];
lean_object* v___y_1618_ = _args[18];
lean_object* v___y_1619_ = _args[19];
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lean_mkCasesOnSameCtorHet___lam__4(v_head_1600_, v_ctors_1601_, v_indName_1602_, v_tail_1603_, v_params_1604_, v_name_1605_, v___x_1606_, v_numParams_1607_, v_val_1608_, v___x_1609_, v___x_1610_, v_t_1611_, v___x_1612_, v_ism1_1613_, v_x_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec_ref(v_x_1614_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object* v_numIndices_1621_, lean_object* v___x_1622_, lean_object* v_head_1623_, lean_object* v_ctors_1624_, lean_object* v_indName_1625_, lean_object* v_tail_1626_, lean_object* v_params_1627_, lean_object* v_name_1628_, lean_object* v___x_1629_, lean_object* v_numParams_1630_, lean_object* v_val_1631_, lean_object* v___x_1632_, lean_object* v_x_1633_, lean_object* v_t_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___f_1642_; uint8_t v___x_1643_; lean_object* v___x_1644_; 
v___x_1640_ = lean_nat_add(v_numIndices_1621_, v___x_1622_);
v___x_1641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
lean_inc_ref(v___x_1641_);
lean_inc_ref(v_t_1634_);
v___f_1642_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__4___boxed), 20, 13);
lean_closure_set(v___f_1642_, 0, v_head_1623_);
lean_closure_set(v___f_1642_, 1, v_ctors_1624_);
lean_closure_set(v___f_1642_, 2, v_indName_1625_);
lean_closure_set(v___f_1642_, 3, v_tail_1626_);
lean_closure_set(v___f_1642_, 4, v_params_1627_);
lean_closure_set(v___f_1642_, 5, v_name_1628_);
lean_closure_set(v___f_1642_, 6, v___x_1629_);
lean_closure_set(v___f_1642_, 7, v_numParams_1630_);
lean_closure_set(v___f_1642_, 8, v_val_1631_);
lean_closure_set(v___f_1642_, 9, v___x_1632_);
lean_closure_set(v___f_1642_, 10, v___x_1622_);
lean_closure_set(v___f_1642_, 11, v_t_1634_);
lean_closure_set(v___f_1642_, 12, v___x_1641_);
v___x_1643_ = 0;
v___x_1644_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1634_, v___x_1641_, v___f_1642_, v___x_1643_, v___x_1643_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v___x_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_1645_ = _args[0];
lean_object* v___x_1646_ = _args[1];
lean_object* v_head_1647_ = _args[2];
lean_object* v_ctors_1648_ = _args[3];
lean_object* v_indName_1649_ = _args[4];
lean_object* v_tail_1650_ = _args[5];
lean_object* v_params_1651_ = _args[6];
lean_object* v_name_1652_ = _args[7];
lean_object* v___x_1653_ = _args[8];
lean_object* v_numParams_1654_ = _args[9];
lean_object* v_val_1655_ = _args[10];
lean_object* v___x_1656_ = _args[11];
lean_object* v_x_1657_ = _args[12];
lean_object* v_t_1658_ = _args[13];
lean_object* v___y_1659_ = _args[14];
lean_object* v___y_1660_ = _args[15];
lean_object* v___y_1661_ = _args[16];
lean_object* v___y_1662_ = _args[17];
lean_object* v___y_1663_ = _args[18];
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_mkCasesOnSameCtorHet___lam__5(v_numIndices_1645_, v___x_1646_, v_head_1647_, v_ctors_1648_, v_indName_1649_, v_tail_1650_, v_params_1651_, v_name_1652_, v___x_1653_, v_numParams_1654_, v_val_1655_, v___x_1656_, v_x_1657_, v_t_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec_ref(v_x_1657_);
lean_dec(v_numIndices_1645_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object* v_numIndices_1667_, lean_object* v_head_1668_, lean_object* v_ctors_1669_, lean_object* v_indName_1670_, lean_object* v_tail_1671_, lean_object* v_name_1672_, lean_object* v___x_1673_, lean_object* v_numParams_1674_, lean_object* v_val_1675_, lean_object* v___x_1676_, lean_object* v_params_1677_, lean_object* v_t_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_){
_start:
{
lean_object* v___x_1684_; lean_object* v___f_1685_; lean_object* v___x_1686_; uint8_t v___x_1687_; lean_object* v___x_1688_; 
v___x_1684_ = lean_unsigned_to_nat(1u);
v___f_1685_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__5___boxed), 19, 12);
lean_closure_set(v___f_1685_, 0, v_numIndices_1667_);
lean_closure_set(v___f_1685_, 1, v___x_1684_);
lean_closure_set(v___f_1685_, 2, v_head_1668_);
lean_closure_set(v___f_1685_, 3, v_ctors_1669_);
lean_closure_set(v___f_1685_, 4, v_indName_1670_);
lean_closure_set(v___f_1685_, 5, v_tail_1671_);
lean_closure_set(v___f_1685_, 6, v_params_1677_);
lean_closure_set(v___f_1685_, 7, v_name_1672_);
lean_closure_set(v___f_1685_, 8, v___x_1673_);
lean_closure_set(v___f_1685_, 9, v_numParams_1674_);
lean_closure_set(v___f_1685_, 10, v_val_1675_);
lean_closure_set(v___f_1685_, 11, v___x_1676_);
v___x_1686_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0));
v___x_1687_ = 0;
v___x_1688_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1678_, v___x_1686_, v___f_1685_, v___x_1687_, v___x_1687_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object** _args){
lean_object* v_numIndices_1689_ = _args[0];
lean_object* v_head_1690_ = _args[1];
lean_object* v_ctors_1691_ = _args[2];
lean_object* v_indName_1692_ = _args[3];
lean_object* v_tail_1693_ = _args[4];
lean_object* v_name_1694_ = _args[5];
lean_object* v___x_1695_ = _args[6];
lean_object* v_numParams_1696_ = _args[7];
lean_object* v_val_1697_ = _args[8];
lean_object* v___x_1698_ = _args[9];
lean_object* v_params_1699_ = _args[10];
lean_object* v_t_1700_ = _args[11];
lean_object* v___y_1701_ = _args[12];
lean_object* v___y_1702_ = _args[13];
lean_object* v___y_1703_ = _args[14];
lean_object* v___y_1704_ = _args[15];
lean_object* v___y_1705_ = _args[16];
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lean_mkCasesOnSameCtorHet___lam__6(v_numIndices_1689_, v_head_1690_, v_ctors_1691_, v_indName_1692_, v_tail_1693_, v_name_1694_, v___x_1695_, v_numParams_1696_, v_val_1697_, v___x_1698_, v_params_1699_, v_t_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object* v_a_1707_, lean_object* v_declName_1708_, lean_object* v_levelParams_1709_, uint8_t v___x_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v___x_1716_; 
lean_inc(v___y_1714_);
lean_inc_ref(v___y_1713_);
lean_inc_ref(v_a_1707_);
v___x_1716_ = lean_infer_type(v_a_1707_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v_a_1720_; lean_object* v___x_1722_; uint8_t v_isShared_1723_; uint8_t v_isSharedCheck_1728_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
lean_inc(v_a_1717_);
lean_dec_ref_known(v___x_1716_, 1);
v___x_1718_ = lean_box(1);
v___x_1719_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_1708_, v_levelParams_1709_, v_a_1717_, v_a_1707_, v___x_1718_, v___y_1714_);
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1728_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1728_ == 0)
{
v___x_1722_ = v___x_1719_;
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
else
{
lean_inc(v_a_1720_);
lean_dec(v___x_1719_);
v___x_1722_ = lean_box(0);
v_isShared_1723_ = v_isSharedCheck_1728_;
goto v_resetjp_1721_;
}
v_resetjp_1721_:
{
lean_object* v___x_1725_; 
if (v_isShared_1723_ == 0)
{
lean_ctor_set_tag(v___x_1722_, 1);
v___x_1725_ = v___x_1722_;
goto v_reusejp_1724_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v_a_1720_);
v___x_1725_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1724_;
}
v_reusejp_1724_:
{
lean_object* v___x_1726_; 
v___x_1726_ = l_Lean_addDecl(v___x_1725_, v___x_1710_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
return v___x_1726_;
}
}
}
else
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1736_; 
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v_levelParams_1709_);
lean_dec(v_declName_1708_);
lean_dec_ref(v_a_1707_);
v_a_1729_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1736_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1731_ = v___x_1716_;
v_isShared_1732_ = v_isSharedCheck_1736_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1716_);
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
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object* v_a_1737_, lean_object* v_declName_1738_, lean_object* v_levelParams_1739_, lean_object* v___x_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
uint8_t v___x_23625__boxed_1746_; lean_object* v_res_1747_; 
v___x_23625__boxed_1746_ = lean_unbox(v___x_1740_);
v_res_1747_ = l_Lean_mkCasesOnSameCtorHet___lam__7(v_a_1737_, v_declName_1738_, v_levelParams_1739_, v___x_23625__boxed_1746_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object* v_a_1748_, lean_object* v_a_1749_){
_start:
{
if (lean_obj_tag(v_a_1748_) == 0)
{
lean_object* v___x_1750_; 
v___x_1750_ = l_List_reverse___redArg(v_a_1749_);
return v___x_1750_;
}
else
{
lean_object* v_head_1751_; lean_object* v_tail_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1761_; 
v_head_1751_ = lean_ctor_get(v_a_1748_, 0);
v_tail_1752_ = lean_ctor_get(v_a_1748_, 1);
v_isSharedCheck_1761_ = !lean_is_exclusive(v_a_1748_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1754_ = v_a_1748_;
v_isShared_1755_ = v_isSharedCheck_1761_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_tail_1752_);
lean_inc(v_head_1751_);
lean_dec(v_a_1748_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1761_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1756_; lean_object* v___x_1758_; 
v___x_1756_ = l_Lean_mkLevelParam(v_head_1751_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 1, v_a_1749_);
lean_ctor_set(v___x_1754_, 0, v___x_1756_);
v___x_1758_ = v___x_1754_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1756_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_a_1749_);
v___x_1758_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
v_a_1748_ = v_tail_1752_;
v_a_1749_ = v___x_1758_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object* v_msgData_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v___x_1768_; lean_object* v_env_1769_; lean_object* v___x_1770_; lean_object* v_toCold_1771_; lean_object* v_mctx_1772_; lean_object* v_lctx_1773_; lean_object* v_options_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1768_ = lean_st_ref_get(v___y_1766_);
v_env_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc_ref(v_env_1769_);
lean_dec(v___x_1768_);
v___x_1770_ = lean_st_ref_get(v___y_1764_);
v_toCold_1771_ = lean_ctor_get(v___y_1765_, 0);
v_mctx_1772_ = lean_ctor_get(v___x_1770_, 0);
lean_inc_ref(v_mctx_1772_);
lean_dec(v___x_1770_);
v_lctx_1773_ = lean_ctor_get(v___y_1763_, 2);
v_options_1774_ = lean_ctor_get(v_toCold_1771_, 2);
lean_inc_ref(v_options_1774_);
lean_inc_ref(v_lctx_1773_);
v___x_1775_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1775_, 0, v_env_1769_);
lean_ctor_set(v___x_1775_, 1, v_mctx_1772_);
lean_ctor_set(v___x_1775_, 2, v_lctx_1773_);
lean_ctor_set(v___x_1775_, 3, v_options_1774_);
v___x_1776_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1775_);
lean_ctor_set(v___x_1776_, 1, v_msgData_1762_);
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object* v_msgData_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msgData_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object* v_msg_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_ref_1791_; lean_object* v___x_1792_; lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1801_; 
v_ref_1791_ = lean_ctor_get(v___y_1788_, 2);
v___x_1792_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msg_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1795_ = v___x_1792_;
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1797_; lean_object* v___x_1799_; 
lean_inc(v_ref_1791_);
v___x_1797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1797_, 0, v_ref_1791_);
lean_ctor_set(v___x_1797_, 1, v_a_1793_);
if (v_isShared_1796_ == 0)
{
lean_ctor_set_tag(v___x_1795_, 1);
lean_ctor_set(v___x_1795_, 0, v___x_1797_);
v___x_1799_ = v___x_1795_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object* v_msg_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object* v_ref_1809_, lean_object* v_msg_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_){
_start:
{
lean_object* v_toCold_1816_; lean_object* v_currRecDepth_1817_; lean_object* v_ref_1818_; uint8_t v_diag_1819_; uint8_t v_suppressElabErrors_1820_; lean_object* v_ref_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v_toCold_1816_ = lean_ctor_get(v___y_1813_, 0);
v_currRecDepth_1817_ = lean_ctor_get(v___y_1813_, 1);
v_ref_1818_ = lean_ctor_get(v___y_1813_, 2);
v_diag_1819_ = lean_ctor_get_uint8(v___y_1813_, sizeof(void*)*3);
v_suppressElabErrors_1820_ = lean_ctor_get_uint8(v___y_1813_, sizeof(void*)*3 + 1);
v_ref_1821_ = l_Lean_replaceRef(v_ref_1809_, v_ref_1818_);
lean_inc(v_currRecDepth_1817_);
lean_inc_ref(v_toCold_1816_);
v___x_1822_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1822_, 0, v_toCold_1816_);
lean_ctor_set(v___x_1822_, 1, v_currRecDepth_1817_);
lean_ctor_set(v___x_1822_, 2, v_ref_1821_);
lean_ctor_set_uint8(v___x_1822_, sizeof(void*)*3, v_diag_1819_);
lean_ctor_set_uint8(v___x_1822_, sizeof(void*)*3 + 1, v_suppressElabErrors_1820_);
v___x_1823_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1810_, v___y_1811_, v___y_1812_, v___x_1822_, v___y_1814_);
lean_dec_ref_known(v___x_1822_, 3);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object* v_ref_1824_, lean_object* v_msg_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_1824_, v_msg_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v_ref_1824_);
return v_res_1831_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1832_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0);
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1832_);
return v___x_1833_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1834_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0);
v___x_1835_ = lean_unsigned_to_nat(0u);
v___x_1836_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
lean_ctor_set(v___x_1836_, 1, v___x_1835_);
lean_ctor_set(v___x_1836_, 2, v___x_1835_);
lean_ctor_set(v___x_1836_, 3, v___x_1835_);
lean_ctor_set(v___x_1836_, 4, v___x_1834_);
lean_ctor_set(v___x_1836_, 5, v___x_1834_);
lean_ctor_set(v___x_1836_, 6, v___x_1834_);
lean_ctor_set(v___x_1836_, 7, v___x_1834_);
lean_ctor_set(v___x_1836_, 8, v___x_1834_);
lean_ctor_set(v___x_1836_, 9, v___x_1834_);
lean_ctor_set(v___x_1836_, 10, v___x_1834_);
return v___x_1836_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2(void){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1837_ = lean_unsigned_to_nat(32u);
v___x_1838_ = lean_mk_empty_array_with_capacity(v___x_1837_);
v___x_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
return v___x_1839_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3(void){
_start:
{
size_t v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1840_ = ((size_t)5ULL);
v___x_1841_ = lean_unsigned_to_nat(0u);
v___x_1842_ = lean_unsigned_to_nat(32u);
v___x_1843_ = lean_mk_empty_array_with_capacity(v___x_1842_);
v___x_1844_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2);
v___x_1845_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
lean_ctor_set(v___x_1845_, 1, v___x_1843_);
lean_ctor_set(v___x_1845_, 2, v___x_1841_);
lean_ctor_set(v___x_1845_, 3, v___x_1841_);
lean_ctor_set_usize(v___x_1845_, 4, v___x_1840_);
return v___x_1845_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4(void){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1846_ = lean_box(1);
v___x_1847_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3);
v___x_1848_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0);
v___x_1849_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1848_);
lean_ctor_set(v___x_1849_, 1, v___x_1847_);
lean_ctor_set(v___x_1849_, 2, v___x_1846_);
return v___x_1849_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6(void){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5));
v___x_1852_ = l_Lean_stringToMessageData(v___x_1851_);
return v___x_1852_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8(void){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1854_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7));
v___x_1855_ = l_Lean_stringToMessageData(v___x_1854_);
return v___x_1855_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10(void){
_start:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1857_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9));
v___x_1858_ = l_Lean_stringToMessageData(v___x_1857_);
return v___x_1858_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11));
v___x_1861_ = l_Lean_stringToMessageData(v___x_1860_);
return v___x_1861_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14(void){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1863_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13));
v___x_1864_ = l_Lean_stringToMessageData(v___x_1863_);
return v___x_1864_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16(void){
_start:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1866_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15));
v___x_1867_ = l_Lean_stringToMessageData(v___x_1866_);
return v___x_1867_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18(void){
_start:
{
lean_object* v___x_1869_; lean_object* v___x_1870_; 
v___x_1869_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17));
v___x_1870_ = l_Lean_stringToMessageData(v___x_1869_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object* v_msg_1871_, lean_object* v_declHint_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v_env_1877_; uint8_t v___x_1878_; 
v___x_1875_ = lean_box(0);
v___x_1876_ = lean_st_ref_get(v___y_1873_);
v_env_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc_ref(v_env_1877_);
lean_dec(v___x_1876_);
v___x_1878_ = l_Lean_Name_isAnonymous(v_declHint_1872_);
if (v___x_1878_ == 0)
{
uint8_t v_isExporting_1879_; 
v_isExporting_1879_ = lean_ctor_get_uint8(v_env_1877_, sizeof(void*)*8);
if (v_isExporting_1879_ == 0)
{
lean_object* v___x_1880_; 
lean_dec_ref(v_env_1877_);
lean_dec(v_declHint_1872_);
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v_msg_1871_);
return v___x_1880_;
}
else
{
lean_object* v___x_1881_; uint8_t v___x_1882_; 
lean_inc_ref(v_env_1877_);
v___x_1881_ = l_Lean_Environment_setExporting(v_env_1877_, v___x_1878_);
lean_inc(v_declHint_1872_);
lean_inc_ref(v___x_1881_);
v___x_1882_ = l_Lean_Environment_contains(v___x_1881_, v_declHint_1872_, v_isExporting_1879_);
if (v___x_1882_ == 0)
{
lean_object* v___x_1883_; 
lean_dec_ref(v___x_1881_);
lean_dec_ref(v_env_1877_);
lean_dec(v_declHint_1872_);
v___x_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1883_, 0, v_msg_1871_);
return v___x_1883_;
}
else
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v_c_1889_; lean_object* v___x_1890_; 
v___x_1884_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1);
v___x_1885_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4);
v___x_1886_ = l_Lean_Options_empty;
v___x_1887_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1881_);
lean_ctor_set(v___x_1887_, 1, v___x_1884_);
lean_ctor_set(v___x_1887_, 2, v___x_1885_);
lean_ctor_set(v___x_1887_, 3, v___x_1886_);
lean_inc(v_declHint_1872_);
v___x_1888_ = l_Lean_MessageData_ofConstName(v_declHint_1872_, v___x_1878_);
v_c_1889_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1889_, 0, v___x_1887_);
lean_ctor_set(v_c_1889_, 1, v___x_1888_);
v___x_1890_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1877_, v_declHint_1872_);
if (lean_obj_tag(v___x_1890_) == 0)
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
lean_dec_ref(v_env_1877_);
lean_dec(v_declHint_1872_);
v___x_1891_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6);
v___x_1892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
lean_ctor_set(v___x_1892_, 1, v_c_1889_);
v___x_1893_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8);
v___x_1894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1892_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
v___x_1895_ = l_Lean_MessageData_note(v___x_1894_);
v___x_1896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1896_, 0, v_msg_1871_);
lean_ctor_set(v___x_1896_, 1, v___x_1895_);
v___x_1897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1896_);
return v___x_1897_;
}
else
{
lean_object* v_val_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1932_; 
v_val_1898_ = lean_ctor_get(v___x_1890_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1890_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1900_ = v___x_1890_;
v_isShared_1901_ = v_isSharedCheck_1932_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_val_1898_);
lean_dec(v___x_1890_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1932_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v_mod_1904_; uint8_t v___x_1905_; 
v___x_1902_ = l_Lean_Environment_header(v_env_1877_);
lean_dec_ref(v_env_1877_);
v___x_1903_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1902_);
v_mod_1904_ = lean_array_get(v___x_1875_, v___x_1903_, v_val_1898_);
lean_dec(v_val_1898_);
lean_dec_ref(v___x_1903_);
v___x_1905_ = l_Lean_isPrivateName(v_declHint_1872_);
lean_dec(v_declHint_1872_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1917_; 
v___x_1906_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10);
v___x_1907_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
lean_ctor_set(v___x_1907_, 1, v_c_1889_);
v___x_1908_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12);
v___x_1909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1907_);
lean_ctor_set(v___x_1909_, 1, v___x_1908_);
v___x_1910_ = l_Lean_MessageData_ofName(v_mod_1904_);
v___x_1911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1909_);
lean_ctor_set(v___x_1911_, 1, v___x_1910_);
v___x_1912_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14);
v___x_1913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1911_);
lean_ctor_set(v___x_1913_, 1, v___x_1912_);
v___x_1914_ = l_Lean_MessageData_note(v___x_1913_);
v___x_1915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1915_, 0, v_msg_1871_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
if (v_isShared_1901_ == 0)
{
lean_ctor_set_tag(v___x_1900_, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1915_);
v___x_1917_ = v___x_1900_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1915_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1930_; 
v___x_1919_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6);
v___x_1920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1919_);
lean_ctor_set(v___x_1920_, 1, v_c_1889_);
v___x_1921_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16);
v___x_1922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1920_);
lean_ctor_set(v___x_1922_, 1, v___x_1921_);
v___x_1923_ = l_Lean_MessageData_ofName(v_mod_1904_);
v___x_1924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18);
v___x_1926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = l_Lean_MessageData_note(v___x_1926_);
v___x_1928_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1928_, 0, v_msg_1871_);
lean_ctor_set(v___x_1928_, 1, v___x_1927_);
if (v_isShared_1901_ == 0)
{
lean_ctor_set_tag(v___x_1900_, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1928_);
v___x_1930_ = v___x_1900_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1931_; 
v_reuseFailAlloc_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1931_, 0, v___x_1928_);
v___x_1930_ = v_reuseFailAlloc_1931_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
return v___x_1930_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1933_; 
lean_dec_ref(v_env_1877_);
lean_dec(v_declHint_1872_);
v___x_1933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1933_, 0, v_msg_1871_);
return v___x_1933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object* v_msg_1934_, lean_object* v_declHint_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_1934_, v_declHint_1935_, v___y_1936_);
lean_dec(v___y_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object* v_msg_1939_, lean_object* v_declHint_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
lean_object* v___x_1946_; lean_object* v_a_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1956_; 
v___x_1946_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_1939_, v_declHint_1940_, v___y_1944_);
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1949_ = v___x_1946_;
v_isShared_1950_ = v_isSharedCheck_1956_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_a_1947_);
lean_dec(v___x_1946_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1956_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1954_; 
v___x_1951_ = l_Lean_unknownIdentifierMessageTag;
v___x_1952_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
lean_ctor_set(v___x_1952_, 1, v_a_1947_);
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 0, v___x_1952_);
v___x_1954_ = v___x_1949_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v___x_1952_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object* v_msg_1957_, lean_object* v_declHint_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_1957_, v_declHint_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
lean_dec(v___y_1960_);
lean_dec_ref(v___y_1959_);
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object* v_ref_1965_, lean_object* v_msg_1966_, lean_object* v_declHint_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v___x_1973_; lean_object* v_a_1974_; lean_object* v___x_1975_; 
v___x_1973_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_1966_, v_declHint_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_1974_);
lean_dec_ref(v___x_1973_);
v___x_1975_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_1965_, v_a_1974_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object* v_ref_1976_, lean_object* v_msg_1977_, lean_object* v_declHint_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_1976_, v_msg_1977_, v_declHint_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
lean_dec(v_ref_1976_);
return v_res_1984_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1986_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0));
v___x_1987_ = l_Lean_stringToMessageData(v___x_1986_);
return v___x_1987_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1989_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2));
v___x_1990_ = l_Lean_stringToMessageData(v___x_1989_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object* v_ref_1991_, lean_object* v_constName_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v___x_1998_; uint8_t v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_1998_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1);
v___x_1999_ = 0;
lean_inc(v_constName_1992_);
v___x_2000_ = l_Lean_MessageData_ofConstName(v_constName_1992_, v___x_1999_);
v___x_2001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2001_, 0, v___x_1998_);
lean_ctor_set(v___x_2001_, 1, v___x_2000_);
v___x_2002_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_2003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___x_2001_);
lean_ctor_set(v___x_2003_, 1, v___x_2002_);
v___x_2004_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_1991_, v___x_2003_, v_constName_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
return v___x_2004_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object* v_ref_2005_, lean_object* v_constName_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2005_, v_constName_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v_ref_2005_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object* v_constName_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v_ref_2019_; lean_object* v___x_2020_; 
v_ref_2019_ = lean_ctor_get(v___y_2016_, 2);
v___x_2020_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2019_, v_constName_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object* v_constName_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v_res_2027_; 
v_res_2027_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v___y_2023_);
lean_dec_ref(v___y_2022_);
return v_res_2027_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object* v_constName_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v___x_2034_; lean_object* v_env_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; 
v___x_2034_ = lean_st_ref_get(v___y_2032_);
v_env_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc_ref(v_env_2035_);
lean_dec(v___x_2034_);
v___x_2036_ = 0;
lean_inc(v_constName_2028_);
v___x_2037_ = l_Lean_Environment_findConstVal_x3f(v_env_2035_, v_constName_2028_, v___x_2036_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v___x_2038_; 
v___x_2038_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
return v___x_2038_;
}
else
{
lean_object* v_val_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2046_; 
lean_dec(v_constName_2028_);
v_val_2039_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2041_ = v___x_2037_;
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
else
{
lean_inc(v_val_2039_);
lean_dec(v___x_2037_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2046_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
lean_object* v___x_2044_; 
if (v_isShared_2042_ == 0)
{
lean_ctor_set_tag(v___x_2041_, 0);
v___x_2044_ = v___x_2041_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_val_2039_);
v___x_2044_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
return v___x_2044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object* v_constName_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v_constName_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object* v_declName_2054_, uint8_t v_s_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
lean_object* v___x_2059_; lean_object* v_env_2060_; lean_object* v_nextMacroScope_2061_; lean_object* v_ngen_2062_; lean_object* v_auxDeclNGen_2063_; lean_object* v_traceState_2064_; lean_object* v_messages_2065_; lean_object* v_infoState_2066_; lean_object* v_snapshotTasks_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2096_; 
v___x_2059_ = lean_st_ref_take(v___y_2057_);
v_env_2060_ = lean_ctor_get(v___x_2059_, 0);
v_nextMacroScope_2061_ = lean_ctor_get(v___x_2059_, 1);
v_ngen_2062_ = lean_ctor_get(v___x_2059_, 2);
v_auxDeclNGen_2063_ = lean_ctor_get(v___x_2059_, 3);
v_traceState_2064_ = lean_ctor_get(v___x_2059_, 4);
v_messages_2065_ = lean_ctor_get(v___x_2059_, 6);
v_infoState_2066_ = lean_ctor_get(v___x_2059_, 7);
v_snapshotTasks_2067_ = lean_ctor_get(v___x_2059_, 8);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2096_ == 0)
{
lean_object* v_unused_2097_; 
v_unused_2097_ = lean_ctor_get(v___x_2059_, 5);
lean_dec(v_unused_2097_);
v___x_2069_ = v___x_2059_;
v_isShared_2070_ = v_isSharedCheck_2096_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_snapshotTasks_2067_);
lean_inc(v_infoState_2066_);
lean_inc(v_messages_2065_);
lean_inc(v_traceState_2064_);
lean_inc(v_auxDeclNGen_2063_);
lean_inc(v_ngen_2062_);
lean_inc(v_nextMacroScope_2061_);
lean_inc(v_env_2060_);
lean_dec(v___x_2059_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2096_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
uint8_t v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2076_; 
v___x_2071_ = 0;
v___x_2072_ = lean_box(0);
v___x_2073_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2060_, v_declName_2054_, v_s_2055_, v___x_2071_, v___x_2072_);
v___x_2074_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 5, v___x_2074_);
lean_ctor_set(v___x_2069_, 0, v___x_2073_);
v___x_2076_ = v___x_2069_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2073_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v_nextMacroScope_2061_);
lean_ctor_set(v_reuseFailAlloc_2095_, 2, v_ngen_2062_);
lean_ctor_set(v_reuseFailAlloc_2095_, 3, v_auxDeclNGen_2063_);
lean_ctor_set(v_reuseFailAlloc_2095_, 4, v_traceState_2064_);
lean_ctor_set(v_reuseFailAlloc_2095_, 5, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2095_, 6, v_messages_2065_);
lean_ctor_set(v_reuseFailAlloc_2095_, 7, v_infoState_2066_);
lean_ctor_set(v_reuseFailAlloc_2095_, 8, v_snapshotTasks_2067_);
v___x_2076_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v_mctx_2079_; lean_object* v_zetaDeltaFVarIds_2080_; lean_object* v_postponed_2081_; lean_object* v_diag_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2093_; 
v___x_2077_ = lean_st_ref_put(v___y_2057_, v___x_2076_);
v___x_2078_ = lean_st_ref_take(v___y_2056_);
v_mctx_2079_ = lean_ctor_get(v___x_2078_, 0);
v_zetaDeltaFVarIds_2080_ = lean_ctor_get(v___x_2078_, 2);
v_postponed_2081_ = lean_ctor_get(v___x_2078_, 3);
v_diag_2082_ = lean_ctor_get(v___x_2078_, 4);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2078_);
if (v_isSharedCheck_2093_ == 0)
{
lean_object* v_unused_2094_; 
v_unused_2094_ = lean_ctor_get(v___x_2078_, 1);
lean_dec(v_unused_2094_);
v___x_2084_ = v___x_2078_;
v_isShared_2085_ = v_isSharedCheck_2093_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_diag_2082_);
lean_inc(v_postponed_2081_);
lean_inc(v_zetaDeltaFVarIds_2080_);
lean_inc(v_mctx_2079_);
lean_dec(v___x_2078_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2093_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2086_ = lean_box(0);
v___x_2087_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 1, v___x_2087_);
v___x_2089_ = v___x_2084_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_mctx_2079_);
lean_ctor_set(v_reuseFailAlloc_2092_, 1, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2092_, 2, v_zetaDeltaFVarIds_2080_);
lean_ctor_set(v_reuseFailAlloc_2092_, 3, v_postponed_2081_);
lean_ctor_set(v_reuseFailAlloc_2092_, 4, v_diag_2082_);
v___x_2089_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; 
v___x_2090_ = lean_st_ref_put(v___y_2056_, v___x_2089_);
v___x_2091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2086_);
return v___x_2091_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object* v_declName_2098_, lean_object* v_s_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
uint8_t v_s_boxed_2103_; lean_object* v_res_2104_; 
v_s_boxed_2103_ = lean_unbox(v_s_2099_);
v_res_2104_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2098_, v_s_boxed_2103_, v___y_2100_, v___y_2101_);
lean_dec(v___y_2101_);
lean_dec(v___y_2100_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object* v_declName_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
uint8_t v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = 0;
v___x_2112_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2105_, v___x_2111_, v___y_2107_, v___y_2109_);
return v___x_2112_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object* v_declName_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
return v_res_2119_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2121_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0));
v___x_2122_ = l_Lean_stringToMessageData(v___x_2121_);
return v___x_2122_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3(void){
_start:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; 
v___x_2124_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__2));
v___x_2125_ = l_Lean_stringToMessageData(v___x_2124_);
return v___x_2125_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5(void){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; 
v___x_2127_ = ((lean_object*)(l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__4));
v___x_2128_ = l_Lean_stringToMessageData(v___x_2127_);
return v___x_2128_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object* v_attrName_2129_, lean_object* v_declName_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; uint8_t v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; 
v___x_2136_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1);
v___x_2137_ = l_Lean_MessageData_ofName(v_attrName_2129_);
v___x_2138_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2136_);
lean_ctor_set(v___x_2138_, 1, v___x_2137_);
v___x_2139_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3);
v___x_2140_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2138_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = 0;
v___x_2142_ = l_Lean_MessageData_ofConstName(v_declName_2130_, v___x_2141_);
v___x_2143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2140_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___x_2144_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__5);
v___x_2145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2145_, 0, v___x_2143_);
lean_ctor_set(v___x_2145_, 1, v___x_2144_);
v___x_2146_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2145_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
return v___x_2146_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object* v_attrName_2147_, lean_object* v_declName_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2147_, v_declName_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
return v_res_2154_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0));
v___x_2157_ = l_Lean_stringToMessageData(v___x_2156_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = ((lean_object*)(l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2));
v___x_2160_ = l_Lean_stringToMessageData(v___x_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object* v_attrName_2161_, lean_object* v_declName_2162_, lean_object* v_asyncPrefix_x3f_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_){
_start:
{
lean_object* v___y_2170_; 
if (lean_obj_tag(v_asyncPrefix_x3f_2163_) == 0)
{
lean_object* v___x_2183_; 
v___x_2183_ = l_Lean_MessageData_nil;
v___y_2170_ = v___x_2183_;
goto v___jp_2169_;
}
else
{
lean_object* v_val_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; 
v_val_2184_ = lean_ctor_get(v_asyncPrefix_x3f_2163_, 0);
lean_inc(v_val_2184_);
lean_dec_ref_known(v_asyncPrefix_x3f_2163_, 1);
v___x_2185_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3);
v___x_2186_ = l_Lean_MessageData_ofName(v_val_2184_);
v___x_2187_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2185_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
v___x_2188_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_2189_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2187_);
lean_ctor_set(v___x_2189_, 1, v___x_2188_);
v___y_2170_ = v___x_2189_;
goto v___jp_2169_;
}
v___jp_2169_:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; uint8_t v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2171_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1);
v___x_2172_ = l_Lean_MessageData_ofName(v_attrName_2161_);
v___x_2173_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2171_);
lean_ctor_set(v___x_2173_, 1, v___x_2172_);
v___x_2174_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__3);
v___x_2175_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2175_, 0, v___x_2173_);
lean_ctor_set(v___x_2175_, 1, v___x_2174_);
v___x_2176_ = 0;
v___x_2177_ = l_Lean_MessageData_ofConstName(v_declName_2162_, v___x_2176_);
v___x_2178_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2175_);
lean_ctor_set(v___x_2178_, 1, v___x_2177_);
v___x_2179_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1);
v___x_2180_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2180_, 0, v___x_2178_);
lean_ctor_set(v___x_2180_, 1, v___x_2179_);
v___x_2181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
lean_ctor_set(v___x_2181_, 1, v___y_2170_);
v___x_2182_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2181_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_);
return v___x_2182_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object* v_attrName_2190_, lean_object* v_declName_2191_, lean_object* v_asyncPrefix_x3f_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2190_, v_declName_2191_, v_asyncPrefix_x3f_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object* v_attr_2199_, lean_object* v_decl_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
lean_object* v___y_2207_; lean_object* v___y_2208_; lean_object* v___x_2249_; lean_object* v_env_2250_; lean_object* v___y_2252_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v___y_2255_; lean_object* v___x_2265_; 
v___x_2249_ = lean_st_ref_get(v___y_2204_);
v_env_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc_ref(v_env_2250_);
lean_dec(v___x_2249_);
v___x_2265_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2250_, v_decl_2200_);
if (lean_obj_tag(v___x_2265_) == 0)
{
v___y_2252_ = v___y_2201_;
v___y_2253_ = v___y_2202_;
v___y_2254_ = v___y_2203_;
v___y_2255_ = v___y_2204_;
goto v___jp_2251_;
}
else
{
lean_object* v_attr_2266_; lean_object* v_toAttributeImplCore_2267_; lean_object* v_name_2268_; lean_object* v___x_2269_; 
lean_dec_ref_known(v___x_2265_, 1);
lean_dec_ref(v_env_2250_);
v_attr_2266_ = lean_ctor_get(v_attr_2199_, 0);
lean_inc_ref(v_attr_2266_);
lean_dec_ref(v_attr_2199_);
v_toAttributeImplCore_2267_ = lean_ctor_get(v_attr_2266_, 0);
lean_inc_ref(v_toAttributeImplCore_2267_);
lean_dec_ref(v_attr_2266_);
v_name_2268_ = lean_ctor_get(v_toAttributeImplCore_2267_, 1);
lean_inc(v_name_2268_);
lean_dec_ref(v_toAttributeImplCore_2267_);
v___x_2269_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_name_2268_, v_decl_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
return v___x_2269_;
}
v___jp_2206_:
{
lean_object* v___x_2209_; lean_object* v_ext_2210_; lean_object* v_toEnvExtension_2211_; lean_object* v_env_2212_; lean_object* v_nextMacroScope_2213_; lean_object* v_ngen_2214_; lean_object* v_auxDeclNGen_2215_; lean_object* v_traceState_2216_; lean_object* v_messages_2217_; lean_object* v_infoState_2218_; lean_object* v_snapshotTasks_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2247_; 
v___x_2209_ = lean_st_ref_take(v___y_2208_);
v_ext_2210_ = lean_ctor_get(v_attr_2199_, 1);
lean_inc_ref(v_ext_2210_);
lean_dec_ref(v_attr_2199_);
v_toEnvExtension_2211_ = lean_ctor_get(v_ext_2210_, 0);
v_env_2212_ = lean_ctor_get(v___x_2209_, 0);
v_nextMacroScope_2213_ = lean_ctor_get(v___x_2209_, 1);
v_ngen_2214_ = lean_ctor_get(v___x_2209_, 2);
v_auxDeclNGen_2215_ = lean_ctor_get(v___x_2209_, 3);
v_traceState_2216_ = lean_ctor_get(v___x_2209_, 4);
v_messages_2217_ = lean_ctor_get(v___x_2209_, 6);
v_infoState_2218_ = lean_ctor_get(v___x_2209_, 7);
v_snapshotTasks_2219_ = lean_ctor_get(v___x_2209_, 8);
v_isSharedCheck_2247_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2247_ == 0)
{
lean_object* v_unused_2248_; 
v_unused_2248_ = lean_ctor_get(v___x_2209_, 5);
lean_dec(v_unused_2248_);
v___x_2221_ = v___x_2209_;
v_isShared_2222_ = v_isSharedCheck_2247_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_snapshotTasks_2219_);
lean_inc(v_infoState_2218_);
lean_inc(v_messages_2217_);
lean_inc(v_traceState_2216_);
lean_inc(v_auxDeclNGen_2215_);
lean_inc(v_ngen_2214_);
lean_inc(v_nextMacroScope_2213_);
lean_inc(v_env_2212_);
lean_dec(v___x_2209_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2247_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v_asyncMode_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2227_; 
v_asyncMode_2223_ = lean_ctor_get(v_toEnvExtension_2211_, 2);
lean_inc(v_asyncMode_2223_);
lean_inc(v_decl_2200_);
v___x_2224_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_2210_, v_env_2212_, v_decl_2200_, v_asyncMode_2223_, v_decl_2200_);
lean_dec(v_asyncMode_2223_);
v___x_2225_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2222_ == 0)
{
lean_ctor_set(v___x_2221_, 5, v___x_2225_);
lean_ctor_set(v___x_2221_, 0, v___x_2224_);
v___x_2227_ = v___x_2221_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2224_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_nextMacroScope_2213_);
lean_ctor_set(v_reuseFailAlloc_2246_, 2, v_ngen_2214_);
lean_ctor_set(v_reuseFailAlloc_2246_, 3, v_auxDeclNGen_2215_);
lean_ctor_set(v_reuseFailAlloc_2246_, 4, v_traceState_2216_);
lean_ctor_set(v_reuseFailAlloc_2246_, 5, v___x_2225_);
lean_ctor_set(v_reuseFailAlloc_2246_, 6, v_messages_2217_);
lean_ctor_set(v_reuseFailAlloc_2246_, 7, v_infoState_2218_);
lean_ctor_set(v_reuseFailAlloc_2246_, 8, v_snapshotTasks_2219_);
v___x_2227_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v_mctx_2230_; lean_object* v_zetaDeltaFVarIds_2231_; lean_object* v_postponed_2232_; lean_object* v_diag_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2244_; 
v___x_2228_ = lean_st_ref_put(v___y_2208_, v___x_2227_);
v___x_2229_ = lean_st_ref_take(v___y_2207_);
v_mctx_2230_ = lean_ctor_get(v___x_2229_, 0);
v_zetaDeltaFVarIds_2231_ = lean_ctor_get(v___x_2229_, 2);
v_postponed_2232_ = lean_ctor_get(v___x_2229_, 3);
v_diag_2233_ = lean_ctor_get(v___x_2229_, 4);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2244_ == 0)
{
lean_object* v_unused_2245_; 
v_unused_2245_ = lean_ctor_get(v___x_2229_, 1);
lean_dec(v_unused_2245_);
v___x_2235_ = v___x_2229_;
v_isShared_2236_ = v_isSharedCheck_2244_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_diag_2233_);
lean_inc(v_postponed_2232_);
lean_inc(v_zetaDeltaFVarIds_2231_);
lean_inc(v_mctx_2230_);
lean_dec(v___x_2229_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2244_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2240_; 
v___x_2237_ = lean_box(0);
v___x_2238_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 1, v___x_2238_);
v___x_2240_ = v___x_2235_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_mctx_2230_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v___x_2238_);
lean_ctor_set(v_reuseFailAlloc_2243_, 2, v_zetaDeltaFVarIds_2231_);
lean_ctor_set(v_reuseFailAlloc_2243_, 3, v_postponed_2232_);
lean_ctor_set(v_reuseFailAlloc_2243_, 4, v_diag_2233_);
v___x_2240_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = lean_st_ref_put(v___y_2207_, v___x_2240_);
v___x_2242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2242_, 0, v___x_2237_);
return v___x_2242_;
}
}
}
}
}
v___jp_2251_:
{
lean_object* v_ext_2256_; lean_object* v_toEnvExtension_2257_; lean_object* v_attr_2258_; lean_object* v_asyncMode_2259_; uint8_t v___x_2260_; 
v_ext_2256_ = lean_ctor_get(v_attr_2199_, 1);
v_toEnvExtension_2257_ = lean_ctor_get(v_ext_2256_, 0);
v_attr_2258_ = lean_ctor_get(v_attr_2199_, 0);
v_asyncMode_2259_ = lean_ctor_get(v_toEnvExtension_2257_, 2);
lean_inc(v_decl_2200_);
lean_inc_ref(v_env_2250_);
v___x_2260_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_2250_, v_decl_2200_, v_asyncMode_2259_);
if (v___x_2260_ == 0)
{
lean_object* v_toAttributeImplCore_2261_; lean_object* v_name_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
lean_inc_ref(v_attr_2258_);
lean_dec_ref(v_attr_2199_);
v_toAttributeImplCore_2261_ = lean_ctor_get(v_attr_2258_, 0);
lean_inc_ref(v_toAttributeImplCore_2261_);
lean_dec_ref(v_attr_2258_);
v_name_2262_ = lean_ctor_get(v_toAttributeImplCore_2261_, 1);
lean_inc(v_name_2262_);
lean_dec_ref(v_toAttributeImplCore_2261_);
v___x_2263_ = l_Lean_Environment_asyncPrefix_x3f(v_env_2250_);
v___x_2264_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_name_2262_, v_decl_2200_, v___x_2263_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
return v___x_2264_;
}
else
{
lean_dec_ref(v_env_2250_);
v___y_2207_ = v___y_2253_;
v___y_2208_ = v___y_2255_;
goto v___jp_2206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object* v_attr_2270_, lean_object* v_decl_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v_attr_2270_, v_decl_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object* v_constName_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
lean_object* v___x_2284_; lean_object* v_env_2285_; uint8_t v___x_2286_; lean_object* v___x_2287_; 
v___x_2284_ = lean_st_ref_get(v___y_2282_);
v_env_2285_ = lean_ctor_get(v___x_2284_, 0);
lean_inc_ref(v_env_2285_);
lean_dec(v___x_2284_);
v___x_2286_ = 0;
lean_inc(v_constName_2278_);
v___x_2287_ = l_Lean_Environment_find_x3f(v_env_2285_, v_constName_2278_, v___x_2286_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
return v___x_2288_;
}
else
{
lean_object* v_val_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2296_; 
lean_dec(v_constName_2278_);
v_val_2289_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2296_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2296_ == 0)
{
v___x_2291_ = v___x_2287_;
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_val_2289_);
lean_dec(v___x_2287_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2296_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
lean_object* v___x_2294_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set_tag(v___x_2291_, 0);
v___x_2294_ = v___x_2291_;
goto v_reusejp_2293_;
}
else
{
lean_object* v_reuseFailAlloc_2295_; 
v_reuseFailAlloc_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2295_, 0, v_val_2289_);
v___x_2294_ = v_reuseFailAlloc_2295_;
goto v_reusejp_2293_;
}
v_reusejp_2293_:
{
return v___x_2294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object* v_constName_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
lean_object* v_res_2303_; 
v_res_2303_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_constName_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
return v_res_2303_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__3(void){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2307_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__2));
v___x_2308_ = lean_unsigned_to_nat(58u);
v___x_2309_ = lean_unsigned_to_nat(33u);
v___x_2310_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__1));
v___x_2311_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_2312_ = l_mkPanicMessageWithDecl(v___x_2311_, v___x_2310_, v___x_2309_, v___x_2308_, v___x_2307_);
return v___x_2312_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__5(void){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2314_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__4));
v___x_2315_ = lean_unsigned_to_nat(60u);
v___x_2316_ = lean_unsigned_to_nat(30u);
v___x_2317_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__1));
v___x_2318_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_2319_ = l_mkPanicMessageWithDecl(v___x_2318_, v___x_2317_, v___x_2316_, v___x_2315_, v___x_2314_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object* v_declName_2320_, lean_object* v_indName_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_){
_start:
{
lean_object* v___x_2327_; 
lean_inc(v_indName_2321_);
v___x_2327_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc(v_a_2328_);
lean_dec_ref_known(v___x_2327_, 1);
if (lean_obj_tag(v_a_2328_) == 5)
{
lean_object* v_val_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2515_; 
v_val_2329_ = lean_ctor_get(v_a_2328_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v_a_2328_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2331_ = v_a_2328_;
v_isShared_2332_ = v_isSharedCheck_2515_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_val_2329_);
lean_dec(v_a_2328_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2515_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
lean_inc(v_indName_2321_);
v___x_2333_ = l_Lean_mkCasesOnName(v_indName_2321_);
lean_inc(v___x_2333_);
v___x_2334_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_2333_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v_name_2336_; lean_object* v_levelParams_2337_; lean_object* v_type_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_a_2335_);
lean_dec_ref_known(v___x_2334_, 1);
v_name_2336_ = lean_ctor_get(v_a_2335_, 0);
lean_inc(v_name_2336_);
v_levelParams_2337_ = lean_ctor_get(v_a_2335_, 1);
lean_inc_n(v_levelParams_2337_, 2);
v_type_2338_ = lean_ctor_get(v_a_2335_, 2);
lean_inc_ref(v_type_2338_);
lean_dec(v_a_2335_);
v___x_2339_ = lean_box(0);
v___x_2340_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_2337_, v___x_2339_);
if (lean_obj_tag(v___x_2340_) == 1)
{
lean_object* v_head_2341_; lean_object* v_tail_2342_; lean_object* v_numParams_2343_; lean_object* v_numIndices_2344_; lean_object* v_ctors_2345_; lean_object* v___f_2346_; lean_object* v___x_2348_; 
v_head_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc(v_head_2341_);
v_tail_2342_ = lean_ctor_get(v___x_2340_, 1);
lean_inc(v_tail_2342_);
v_numParams_2343_ = lean_ctor_get(v_val_2329_, 1);
lean_inc_n(v_numParams_2343_, 2);
v_numIndices_2344_ = lean_ctor_get(v_val_2329_, 2);
lean_inc(v_numIndices_2344_);
v_ctors_2345_ = lean_ctor_get(v_val_2329_, 4);
lean_inc(v_ctors_2345_);
v___f_2346_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__6___boxed), 17, 10);
lean_closure_set(v___f_2346_, 0, v_numIndices_2344_);
lean_closure_set(v___f_2346_, 1, v_head_2341_);
lean_closure_set(v___f_2346_, 2, v_ctors_2345_);
lean_closure_set(v___f_2346_, 3, v_indName_2321_);
lean_closure_set(v___f_2346_, 4, v_tail_2342_);
lean_closure_set(v___f_2346_, 5, v_name_2336_);
lean_closure_set(v___f_2346_, 6, v___x_2340_);
lean_closure_set(v___f_2346_, 7, v_numParams_2343_);
lean_closure_set(v___f_2346_, 8, v_val_2329_);
lean_closure_set(v___f_2346_, 9, v___x_2333_);
if (v_isShared_2332_ == 0)
{
lean_ctor_set_tag(v___x_2331_, 1);
lean_ctor_set(v___x_2331_, 0, v_numParams_2343_);
v___x_2348_ = v___x_2331_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_numParams_2343_);
v___x_2348_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
uint8_t v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = 0;
v___x_2350_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_2338_, v___x_2348_, v___f_2346_, v___x_2349_, v___x_2349_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2352_; lean_object* v___f_2353_; uint8_t v___y_2355_; uint8_t v___x_2494_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
lean_inc(v_a_2351_);
lean_dec_ref_known(v___x_2350_, 1);
v___x_2352_ = lean_box(v___x_2349_);
lean_inc(v_declName_2320_);
v___f_2353_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__7___boxed), 9, 4);
lean_closure_set(v___f_2353_, 0, v_a_2351_);
lean_closure_set(v___f_2353_, 1, v_declName_2320_);
lean_closure_set(v___f_2353_, 2, v_levelParams_2337_);
lean_closure_set(v___f_2353_, 3, v___x_2352_);
v___x_2494_ = l_Lean_isPrivateName(v_declName_2320_);
if (v___x_2494_ == 0)
{
uint8_t v___x_2495_; 
v___x_2495_ = 1;
v___y_2355_ = v___x_2495_;
goto v___jp_2354_;
}
else
{
v___y_2355_ = v___x_2349_;
goto v___jp_2354_;
}
v___jp_2354_:
{
lean_object* v___x_2356_; 
v___x_2356_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_2353_, v___y_2355_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v___x_2357_; lean_object* v_env_2358_; lean_object* v_nextMacroScope_2359_; lean_object* v_ngen_2360_; lean_object* v_auxDeclNGen_2361_; lean_object* v_traceState_2362_; lean_object* v_messages_2363_; lean_object* v_infoState_2364_; lean_object* v_snapshotTasks_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2492_; 
lean_dec_ref_known(v___x_2356_, 1);
v___x_2357_ = lean_st_ref_take(v___y_2325_);
v_env_2358_ = lean_ctor_get(v___x_2357_, 0);
v_nextMacroScope_2359_ = lean_ctor_get(v___x_2357_, 1);
v_ngen_2360_ = lean_ctor_get(v___x_2357_, 2);
v_auxDeclNGen_2361_ = lean_ctor_get(v___x_2357_, 3);
v_traceState_2362_ = lean_ctor_get(v___x_2357_, 4);
v_messages_2363_ = lean_ctor_get(v___x_2357_, 6);
v_infoState_2364_ = lean_ctor_get(v___x_2357_, 7);
v_snapshotTasks_2365_ = lean_ctor_get(v___x_2357_, 8);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2357_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2357_, 5);
lean_dec(v_unused_2493_);
v___x_2367_ = v___x_2357_;
v_isShared_2368_ = v_isSharedCheck_2492_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_snapshotTasks_2365_);
lean_inc(v_infoState_2364_);
lean_inc(v_messages_2363_);
lean_inc(v_traceState_2362_);
lean_inc(v_auxDeclNGen_2361_);
lean_inc(v_ngen_2360_);
lean_inc(v_nextMacroScope_2359_);
lean_inc(v_env_2358_);
lean_dec(v___x_2357_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2492_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2372_; 
lean_inc(v_declName_2320_);
v___x_2369_ = l_Lean_Meta_markMatcherLike(v_env_2358_, v_declName_2320_);
v___x_2370_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 5, v___x_2370_);
lean_ctor_set(v___x_2367_, 0, v___x_2369_);
v___x_2372_ = v___x_2367_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v_nextMacroScope_2359_);
lean_ctor_set(v_reuseFailAlloc_2491_, 2, v_ngen_2360_);
lean_ctor_set(v_reuseFailAlloc_2491_, 3, v_auxDeclNGen_2361_);
lean_ctor_set(v_reuseFailAlloc_2491_, 4, v_traceState_2362_);
lean_ctor_set(v_reuseFailAlloc_2491_, 5, v___x_2370_);
lean_ctor_set(v_reuseFailAlloc_2491_, 6, v_messages_2363_);
lean_ctor_set(v_reuseFailAlloc_2491_, 7, v_infoState_2364_);
lean_ctor_set(v_reuseFailAlloc_2491_, 8, v_snapshotTasks_2365_);
v___x_2372_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v_mctx_2375_; lean_object* v_zetaDeltaFVarIds_2376_; lean_object* v_postponed_2377_; lean_object* v_diag_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2489_; 
v___x_2373_ = lean_st_ref_put(v___y_2325_, v___x_2372_);
v___x_2374_ = lean_st_ref_take(v___y_2323_);
v_mctx_2375_ = lean_ctor_get(v___x_2374_, 0);
v_zetaDeltaFVarIds_2376_ = lean_ctor_get(v___x_2374_, 2);
v_postponed_2377_ = lean_ctor_get(v___x_2374_, 3);
v_diag_2378_ = lean_ctor_get(v___x_2374_, 4);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2489_ == 0)
{
lean_object* v_unused_2490_; 
v_unused_2490_ = lean_ctor_get(v___x_2374_, 1);
lean_dec(v_unused_2490_);
v___x_2380_ = v___x_2374_;
v_isShared_2381_ = v_isSharedCheck_2489_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_diag_2378_);
lean_inc(v_postponed_2377_);
lean_inc(v_zetaDeltaFVarIds_2376_);
lean_inc(v_mctx_2375_);
lean_dec(v___x_2374_);
v___x_2380_ = lean_box(0);
v_isShared_2381_ = v_isSharedCheck_2489_;
goto v_resetjp_2379_;
}
v_resetjp_2379_:
{
lean_object* v___x_2382_; lean_object* v___x_2384_; 
v___x_2382_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2381_ == 0)
{
lean_ctor_set(v___x_2380_, 1, v___x_2382_);
v___x_2384_ = v___x_2380_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_mctx_2375_);
lean_ctor_set(v_reuseFailAlloc_2488_, 1, v___x_2382_);
lean_ctor_set(v_reuseFailAlloc_2488_, 2, v_zetaDeltaFVarIds_2376_);
lean_ctor_set(v_reuseFailAlloc_2488_, 3, v_postponed_2377_);
lean_ctor_set(v_reuseFailAlloc_2488_, 4, v_diag_2378_);
v___x_2384_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v_env_2387_; lean_object* v_nextMacroScope_2388_; lean_object* v_ngen_2389_; lean_object* v_auxDeclNGen_2390_; lean_object* v_traceState_2391_; lean_object* v_messages_2392_; lean_object* v_infoState_2393_; lean_object* v_snapshotTasks_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2486_; 
v___x_2385_ = lean_st_ref_put(v___y_2323_, v___x_2384_);
v___x_2386_ = lean_st_ref_take(v___y_2325_);
v_env_2387_ = lean_ctor_get(v___x_2386_, 0);
v_nextMacroScope_2388_ = lean_ctor_get(v___x_2386_, 1);
v_ngen_2389_ = lean_ctor_get(v___x_2386_, 2);
v_auxDeclNGen_2390_ = lean_ctor_get(v___x_2386_, 3);
v_traceState_2391_ = lean_ctor_get(v___x_2386_, 4);
v_messages_2392_ = lean_ctor_get(v___x_2386_, 6);
v_infoState_2393_ = lean_ctor_get(v___x_2386_, 7);
v_snapshotTasks_2394_ = lean_ctor_get(v___x_2386_, 8);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2486_ == 0)
{
lean_object* v_unused_2487_; 
v_unused_2487_ = lean_ctor_get(v___x_2386_, 5);
lean_dec(v_unused_2487_);
v___x_2396_ = v___x_2386_;
v_isShared_2397_ = v_isSharedCheck_2486_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_snapshotTasks_2394_);
lean_inc(v_infoState_2393_);
lean_inc(v_messages_2392_);
lean_inc(v_traceState_2391_);
lean_inc(v_auxDeclNGen_2390_);
lean_inc(v_ngen_2389_);
lean_inc(v_nextMacroScope_2388_);
lean_inc(v_env_2387_);
lean_dec(v___x_2386_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2486_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2398_; lean_object* v___x_2400_; 
lean_inc(v_declName_2320_);
v___x_2398_ = l_Lean_markAuxRecursor(v_env_2387_, v_declName_2320_);
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 5, v___x_2370_);
lean_ctor_set(v___x_2396_, 0, v___x_2398_);
v___x_2400_ = v___x_2396_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v___x_2398_);
lean_ctor_set(v_reuseFailAlloc_2485_, 1, v_nextMacroScope_2388_);
lean_ctor_set(v_reuseFailAlloc_2485_, 2, v_ngen_2389_);
lean_ctor_set(v_reuseFailAlloc_2485_, 3, v_auxDeclNGen_2390_);
lean_ctor_set(v_reuseFailAlloc_2485_, 4, v_traceState_2391_);
lean_ctor_set(v_reuseFailAlloc_2485_, 5, v___x_2370_);
lean_ctor_set(v_reuseFailAlloc_2485_, 6, v_messages_2392_);
lean_ctor_set(v_reuseFailAlloc_2485_, 7, v_infoState_2393_);
lean_ctor_set(v_reuseFailAlloc_2485_, 8, v_snapshotTasks_2394_);
v___x_2400_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v_mctx_2403_; lean_object* v_zetaDeltaFVarIds_2404_; lean_object* v_postponed_2405_; lean_object* v_diag_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2483_; 
v___x_2401_ = lean_st_ref_put(v___y_2325_, v___x_2400_);
v___x_2402_ = lean_st_ref_take(v___y_2323_);
v_mctx_2403_ = lean_ctor_get(v___x_2402_, 0);
v_zetaDeltaFVarIds_2404_ = lean_ctor_get(v___x_2402_, 2);
v_postponed_2405_ = lean_ctor_get(v___x_2402_, 3);
v_diag_2406_ = lean_ctor_get(v___x_2402_, 4);
v_isSharedCheck_2483_ = !lean_is_exclusive(v___x_2402_);
if (v_isSharedCheck_2483_ == 0)
{
lean_object* v_unused_2484_; 
v_unused_2484_ = lean_ctor_get(v___x_2402_, 1);
lean_dec(v_unused_2484_);
v___x_2408_ = v___x_2402_;
v_isShared_2409_ = v_isSharedCheck_2483_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_diag_2406_);
lean_inc(v_postponed_2405_);
lean_inc(v_zetaDeltaFVarIds_2404_);
lean_inc(v_mctx_2403_);
lean_dec(v___x_2402_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2483_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 1, v___x_2382_);
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2482_; 
v_reuseFailAlloc_2482_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2482_, 0, v_mctx_2403_);
lean_ctor_set(v_reuseFailAlloc_2482_, 1, v___x_2382_);
lean_ctor_set(v_reuseFailAlloc_2482_, 2, v_zetaDeltaFVarIds_2404_);
lean_ctor_set(v_reuseFailAlloc_2482_, 3, v_postponed_2405_);
lean_ctor_set(v_reuseFailAlloc_2482_, 4, v_diag_2406_);
v___x_2411_ = v_reuseFailAlloc_2482_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v_env_2414_; lean_object* v_nextMacroScope_2415_; lean_object* v_ngen_2416_; lean_object* v_auxDeclNGen_2417_; lean_object* v_traceState_2418_; lean_object* v_messages_2419_; lean_object* v_infoState_2420_; lean_object* v_snapshotTasks_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2480_; 
v___x_2412_ = lean_st_ref_put(v___y_2323_, v___x_2411_);
v___x_2413_ = lean_st_ref_take(v___y_2325_);
v_env_2414_ = lean_ctor_get(v___x_2413_, 0);
v_nextMacroScope_2415_ = lean_ctor_get(v___x_2413_, 1);
v_ngen_2416_ = lean_ctor_get(v___x_2413_, 2);
v_auxDeclNGen_2417_ = lean_ctor_get(v___x_2413_, 3);
v_traceState_2418_ = lean_ctor_get(v___x_2413_, 4);
v_messages_2419_ = lean_ctor_get(v___x_2413_, 6);
v_infoState_2420_ = lean_ctor_get(v___x_2413_, 7);
v_snapshotTasks_2421_ = lean_ctor_get(v___x_2413_, 8);
v_isSharedCheck_2480_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2480_ == 0)
{
lean_object* v_unused_2481_; 
v_unused_2481_ = lean_ctor_get(v___x_2413_, 5);
lean_dec(v_unused_2481_);
v___x_2423_ = v___x_2413_;
v_isShared_2424_ = v_isSharedCheck_2480_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_snapshotTasks_2421_);
lean_inc(v_infoState_2420_);
lean_inc(v_messages_2419_);
lean_inc(v_traceState_2418_);
lean_inc(v_auxDeclNGen_2417_);
lean_inc(v_ngen_2416_);
lean_inc(v_nextMacroScope_2415_);
lean_inc(v_env_2414_);
lean_dec(v___x_2413_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2480_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2425_; lean_object* v___x_2427_; 
lean_inc(v_declName_2320_);
v___x_2425_ = l_Lean_Meta_addToCompletionBlackList(v_env_2414_, v_declName_2320_);
if (v_isShared_2424_ == 0)
{
lean_ctor_set(v___x_2423_, 5, v___x_2370_);
lean_ctor_set(v___x_2423_, 0, v___x_2425_);
v___x_2427_ = v___x_2423_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2425_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v_nextMacroScope_2415_);
lean_ctor_set(v_reuseFailAlloc_2479_, 2, v_ngen_2416_);
lean_ctor_set(v_reuseFailAlloc_2479_, 3, v_auxDeclNGen_2417_);
lean_ctor_set(v_reuseFailAlloc_2479_, 4, v_traceState_2418_);
lean_ctor_set(v_reuseFailAlloc_2479_, 5, v___x_2370_);
lean_ctor_set(v_reuseFailAlloc_2479_, 6, v_messages_2419_);
lean_ctor_set(v_reuseFailAlloc_2479_, 7, v_infoState_2420_);
lean_ctor_set(v_reuseFailAlloc_2479_, 8, v_snapshotTasks_2421_);
v___x_2427_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v_mctx_2430_; lean_object* v_zetaDeltaFVarIds_2431_; lean_object* v_postponed_2432_; lean_object* v_diag_2433_; lean_object* v___x_2435_; uint8_t v_isShared_2436_; uint8_t v_isSharedCheck_2477_; 
v___x_2428_ = lean_st_ref_put(v___y_2325_, v___x_2427_);
v___x_2429_ = lean_st_ref_take(v___y_2323_);
v_mctx_2430_ = lean_ctor_get(v___x_2429_, 0);
v_zetaDeltaFVarIds_2431_ = lean_ctor_get(v___x_2429_, 2);
v_postponed_2432_ = lean_ctor_get(v___x_2429_, 3);
v_diag_2433_ = lean_ctor_get(v___x_2429_, 4);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2429_);
if (v_isSharedCheck_2477_ == 0)
{
lean_object* v_unused_2478_; 
v_unused_2478_ = lean_ctor_get(v___x_2429_, 1);
lean_dec(v_unused_2478_);
v___x_2435_ = v___x_2429_;
v_isShared_2436_ = v_isSharedCheck_2477_;
goto v_resetjp_2434_;
}
else
{
lean_inc(v_diag_2433_);
lean_inc(v_postponed_2432_);
lean_inc(v_zetaDeltaFVarIds_2431_);
lean_inc(v_mctx_2430_);
lean_dec(v___x_2429_);
v___x_2435_ = lean_box(0);
v_isShared_2436_ = v_isSharedCheck_2477_;
goto v_resetjp_2434_;
}
v_resetjp_2434_:
{
lean_object* v___x_2438_; 
if (v_isShared_2436_ == 0)
{
lean_ctor_set(v___x_2435_, 1, v___x_2382_);
v___x_2438_ = v___x_2435_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_mctx_2430_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v___x_2382_);
lean_ctor_set(v_reuseFailAlloc_2476_, 2, v_zetaDeltaFVarIds_2431_);
lean_ctor_set(v_reuseFailAlloc_2476_, 3, v_postponed_2432_);
lean_ctor_set(v_reuseFailAlloc_2476_, 4, v_diag_2433_);
v___x_2438_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v_env_2441_; lean_object* v_nextMacroScope_2442_; lean_object* v_ngen_2443_; lean_object* v_auxDeclNGen_2444_; lean_object* v_traceState_2445_; lean_object* v_messages_2446_; lean_object* v_infoState_2447_; lean_object* v_snapshotTasks_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2474_; 
v___x_2439_ = lean_st_ref_put(v___y_2323_, v___x_2438_);
v___x_2440_ = lean_st_ref_take(v___y_2325_);
v_env_2441_ = lean_ctor_get(v___x_2440_, 0);
v_nextMacroScope_2442_ = lean_ctor_get(v___x_2440_, 1);
v_ngen_2443_ = lean_ctor_get(v___x_2440_, 2);
v_auxDeclNGen_2444_ = lean_ctor_get(v___x_2440_, 3);
v_traceState_2445_ = lean_ctor_get(v___x_2440_, 4);
v_messages_2446_ = lean_ctor_get(v___x_2440_, 6);
v_infoState_2447_ = lean_ctor_get(v___x_2440_, 7);
v_snapshotTasks_2448_ = lean_ctor_get(v___x_2440_, 8);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2474_ == 0)
{
lean_object* v_unused_2475_; 
v_unused_2475_ = lean_ctor_get(v___x_2440_, 5);
lean_dec(v_unused_2475_);
v___x_2450_ = v___x_2440_;
v_isShared_2451_ = v_isSharedCheck_2474_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_snapshotTasks_2448_);
lean_inc(v_infoState_2447_);
lean_inc(v_messages_2446_);
lean_inc(v_traceState_2445_);
lean_inc(v_auxDeclNGen_2444_);
lean_inc(v_ngen_2443_);
lean_inc(v_nextMacroScope_2442_);
lean_inc(v_env_2441_);
lean_dec(v___x_2440_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2474_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2452_; lean_object* v___x_2454_; 
lean_inc(v_declName_2320_);
v___x_2452_ = l_Lean_addProtected(v_env_2441_, v_declName_2320_);
if (v_isShared_2451_ == 0)
{
lean_ctor_set(v___x_2450_, 5, v___x_2370_);
lean_ctor_set(v___x_2450_, 0, v___x_2452_);
v___x_2454_ = v___x_2450_;
goto v_reusejp_2453_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v___x_2452_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_nextMacroScope_2442_);
lean_ctor_set(v_reuseFailAlloc_2473_, 2, v_ngen_2443_);
lean_ctor_set(v_reuseFailAlloc_2473_, 3, v_auxDeclNGen_2444_);
lean_ctor_set(v_reuseFailAlloc_2473_, 4, v_traceState_2445_);
lean_ctor_set(v_reuseFailAlloc_2473_, 5, v___x_2370_);
lean_ctor_set(v_reuseFailAlloc_2473_, 6, v_messages_2446_);
lean_ctor_set(v_reuseFailAlloc_2473_, 7, v_infoState_2447_);
lean_ctor_set(v_reuseFailAlloc_2473_, 8, v_snapshotTasks_2448_);
v___x_2454_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2453_;
}
v_reusejp_2453_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v_mctx_2457_; lean_object* v_zetaDeltaFVarIds_2458_; lean_object* v_postponed_2459_; lean_object* v_diag_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2471_; 
v___x_2455_ = lean_st_ref_put(v___y_2325_, v___x_2454_);
v___x_2456_ = lean_st_ref_take(v___y_2323_);
v_mctx_2457_ = lean_ctor_get(v___x_2456_, 0);
v_zetaDeltaFVarIds_2458_ = lean_ctor_get(v___x_2456_, 2);
v_postponed_2459_ = lean_ctor_get(v___x_2456_, 3);
v_diag_2460_ = lean_ctor_get(v___x_2456_, 4);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2471_ == 0)
{
lean_object* v_unused_2472_; 
v_unused_2472_ = lean_ctor_get(v___x_2456_, 1);
lean_dec(v_unused_2472_);
v___x_2462_ = v___x_2456_;
v_isShared_2463_ = v_isSharedCheck_2471_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_diag_2460_);
lean_inc(v_postponed_2459_);
lean_inc(v_zetaDeltaFVarIds_2458_);
lean_inc(v_mctx_2457_);
lean_dec(v___x_2456_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2471_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 1, v___x_2382_);
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_mctx_2457_);
lean_ctor_set(v_reuseFailAlloc_2470_, 1, v___x_2382_);
lean_ctor_set(v_reuseFailAlloc_2470_, 2, v_zetaDeltaFVarIds_2458_);
lean_ctor_set(v_reuseFailAlloc_2470_, 3, v_postponed_2459_);
lean_ctor_set(v_reuseFailAlloc_2470_, 4, v_diag_2460_);
v___x_2465_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2466_ = lean_st_ref_put(v___y_2323_, v___x_2465_);
v___x_2467_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_2320_);
v___x_2468_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_2467_, v_declName_2320_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v___x_2469_; 
lean_dec_ref_known(v___x_2468_, 1);
v___x_2469_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2320_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
return v___x_2469_;
}
else
{
lean_dec(v_declName_2320_);
return v___x_2468_;
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
else
{
lean_dec(v_declName_2320_);
return v___x_2356_;
}
}
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2503_; 
lean_dec(v_levelParams_2337_);
lean_dec(v_declName_2320_);
v_a_2496_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2498_ = v___x_2350_;
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2350_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
}
else
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
lean_dec(v___x_2340_);
lean_dec_ref(v_type_2338_);
lean_dec(v_levelParams_2337_);
lean_dec(v_name_2336_);
lean_dec(v___x_2333_);
lean_del_object(v___x_2331_);
lean_dec_ref(v_val_2329_);
lean_dec(v_indName_2321_);
lean_dec(v_declName_2320_);
v___x_2505_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__3, &l_Lean_mkCasesOnSameCtorHet___closed__3_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__3);
v___x_2506_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2505_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
return v___x_2506_;
}
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_dec(v___x_2333_);
lean_del_object(v___x_2331_);
lean_dec_ref(v_val_2329_);
lean_dec(v_indName_2321_);
lean_dec(v_declName_2320_);
v_a_2507_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2334_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2334_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
}
else
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
lean_dec(v_a_2328_);
lean_dec(v_indName_2321_);
lean_dec(v_declName_2320_);
v___x_2516_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__5, &l_Lean_mkCasesOnSameCtorHet___closed__5_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__5);
v___x_2517_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2516_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_);
return v___x_2517_;
}
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
lean_dec(v_indName_2321_);
lean_dec(v_declName_2320_);
v_a_2518_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2327_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2327_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object* v_declName_2526_, lean_object* v_indName_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lean_mkCasesOnSameCtorHet(v_declName_2526_, v_indName_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec(v___y_2529_);
lean_dec_ref(v___y_2528_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object* v_00_u03b1_2534_, lean_object* v_name_2535_, lean_object* v_type_2536_, lean_object* v_k_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_2535_, v_type_2536_, v_k_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
return v___x_2543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object* v_00_u03b1_2544_, lean_object* v_name_2545_, lean_object* v_type_2546_, lean_object* v_k_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(v_00_u03b1_2544_, v_name_2545_, v_type_2546_, v_k_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object* v_tail_2554_, lean_object* v_params_2555_, lean_object* v_alts_2556_, lean_object* v___x_2557_, lean_object* v_ism2_2558_, lean_object* v_motive_2559_, lean_object* v_val_2560_, lean_object* v_indName_2561_, lean_object* v___x_2562_, lean_object* v___x_2563_, lean_object* v___x_2564_, lean_object* v_as_2565_, size_t v_sz_2566_, size_t v_i_2567_, lean_object* v_bs_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_){
_start:
{
lean_object* v___x_2574_; 
v___x_2574_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_2554_, v_params_2555_, v_alts_2556_, v___x_2557_, v_ism2_2558_, v_motive_2559_, v_val_2560_, v_indName_2561_, v___x_2562_, v___x_2563_, v___x_2564_, v_sz_2566_, v_i_2567_, v_bs_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object** _args){
lean_object* v_tail_2575_ = _args[0];
lean_object* v_params_2576_ = _args[1];
lean_object* v_alts_2577_ = _args[2];
lean_object* v___x_2578_ = _args[3];
lean_object* v_ism2_2579_ = _args[4];
lean_object* v_motive_2580_ = _args[5];
lean_object* v_val_2581_ = _args[6];
lean_object* v_indName_2582_ = _args[7];
lean_object* v___x_2583_ = _args[8];
lean_object* v___x_2584_ = _args[9];
lean_object* v___x_2585_ = _args[10];
lean_object* v_as_2586_ = _args[11];
lean_object* v_sz_2587_ = _args[12];
lean_object* v_i_2588_ = _args[13];
lean_object* v_bs_2589_ = _args[14];
lean_object* v___y_2590_ = _args[15];
lean_object* v___y_2591_ = _args[16];
lean_object* v___y_2592_ = _args[17];
lean_object* v___y_2593_ = _args[18];
lean_object* v___y_2594_ = _args[19];
_start:
{
size_t v_sz_boxed_2595_; size_t v_i_boxed_2596_; lean_object* v_res_2597_; 
v_sz_boxed_2595_ = lean_unbox_usize(v_sz_2587_);
lean_dec(v_sz_2587_);
v_i_boxed_2596_ = lean_unbox_usize(v_i_2588_);
lean_dec(v_i_2588_);
v_res_2597_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(v_tail_2575_, v_params_2576_, v_alts_2577_, v___x_2578_, v_ism2_2579_, v_motive_2580_, v_val_2581_, v_indName_2582_, v___x_2583_, v___x_2584_, v___x_2585_, v_as_2586_, v_sz_boxed_2595_, v_i_boxed_2596_, v_bs_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec_ref(v_as_2586_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object* v_tail_2598_, lean_object* v_params_2599_, lean_object* v___x_2600_, lean_object* v_motive_2601_, lean_object* v_as_2602_, size_t v_sz_2603_, size_t v_i_2604_, lean_object* v_bs_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_2598_, v_params_2599_, v___x_2600_, v_motive_2601_, v_sz_2603_, v_i_2604_, v_bs_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object* v_tail_2612_, lean_object* v_params_2613_, lean_object* v___x_2614_, lean_object* v_motive_2615_, lean_object* v_as_2616_, lean_object* v_sz_2617_, lean_object* v_i_2618_, lean_object* v_bs_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_){
_start:
{
size_t v_sz_boxed_2625_; size_t v_i_boxed_2626_; lean_object* v_res_2627_; 
v_sz_boxed_2625_ = lean_unbox_usize(v_sz_2617_);
lean_dec(v_sz_2617_);
v_i_boxed_2626_ = lean_unbox_usize(v_i_2618_);
lean_dec(v_i_2618_);
v_res_2627_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(v_tail_2612_, v_params_2613_, v___x_2614_, v_motive_2615_, v_as_2616_, v_sz_boxed_2625_, v_i_boxed_2626_, v_bs_2619_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec_ref(v_as_2616_);
lean_dec_ref(v_params_2613_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object* v_declName_2628_, uint8_t v_s_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2628_, v_s_2629_, v___y_2631_, v___y_2633_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object* v_declName_2636_, lean_object* v_s_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
uint8_t v_s_boxed_2643_; lean_object* v_res_2644_; 
v_s_boxed_2643_ = lean_unbox(v_s_2637_);
v_res_2644_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(v_declName_2636_, v_s_boxed_2643_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
return v_res_2644_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object* v_00_u03b1_2645_, lean_object* v_constName_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v___x_2652_; 
v___x_2652_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_);
return v___x_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2653_, lean_object* v_constName_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(v_00_u03b1_2653_, v_constName_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object* v_00_u03b1_2661_, lean_object* v_attrName_2662_, lean_object* v_declName_2663_, lean_object* v_asyncPrefix_x3f_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2662_, v_declName_2663_, v_asyncPrefix_x3f_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2671_, lean_object* v_attrName_2672_, lean_object* v_declName_2673_, lean_object* v_asyncPrefix_x3f_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(v_00_u03b1_2671_, v_attrName_2672_, v_declName_2673_, v_asyncPrefix_x3f_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object* v_00_u03b1_2681_, lean_object* v_attrName_2682_, lean_object* v_declName_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2682_, v_declName_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object* v_00_u03b1_2690_, lean_object* v_attrName_2691_, lean_object* v_declName_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(v_00_u03b1_2690_, v_attrName_2691_, v_declName_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object* v_00_u03b1_2699_, lean_object* v_ref_2700_, lean_object* v_constName_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2700_, v_constName_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object* v_00_u03b1_2708_, lean_object* v_ref_2709_, lean_object* v_constName_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v_res_2716_; 
v_res_2716_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(v_00_u03b1_2708_, v_ref_2709_, v_constName_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
lean_dec(v_ref_2709_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object* v_00_u03b1_2717_, lean_object* v_msg_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v___x_2724_; 
v___x_2724_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object* v_00_u03b1_2725_, lean_object* v_msg_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(v_00_u03b1_2725_, v_msg_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object* v_00_u03b1_2733_, lean_object* v_ref_2734_, lean_object* v_msg_2735_, lean_object* v_declHint_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
lean_object* v___x_2742_; 
v___x_2742_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_2734_, v_msg_2735_, v_declHint_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object* v_00_u03b1_2743_, lean_object* v_ref_2744_, lean_object* v_msg_2745_, lean_object* v_declHint_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(v_00_u03b1_2743_, v_ref_2744_, v_msg_2745_, v_declHint_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v_ref_2744_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object* v_msg_2753_, lean_object* v_declHint_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_2753_, v_declHint_2754_, v___y_2758_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object* v_msg_2761_, lean_object* v_declHint_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(v_msg_2761_, v_declHint_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v___y_2763_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object* v_00_u03b1_2769_, lean_object* v_ref_2770_, lean_object* v_msg_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_2770_, v_msg_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object* v_00_u03b1_2778_, lean_object* v_ref_2779_, lean_object* v_msg_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_res_2786_; 
v_res_2786_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(v_00_u03b1_2778_, v_ref_2779_, v_msg_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec(v_ref_2779_);
return v_res_2786_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object* v_e_2787_, lean_object* v___y_2788_){
_start:
{
uint8_t v___x_2790_; 
v___x_2790_ = l_Lean_Expr_hasMVar(v_e_2787_);
if (v___x_2790_ == 0)
{
lean_object* v___x_2791_; 
v___x_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2791_, 0, v_e_2787_);
return v___x_2791_;
}
else
{
lean_object* v___x_2792_; lean_object* v_mctx_2793_; lean_object* v___x_2794_; lean_object* v_fst_2795_; lean_object* v_snd_2796_; lean_object* v___x_2797_; lean_object* v_cache_2798_; lean_object* v_zetaDeltaFVarIds_2799_; lean_object* v_postponed_2800_; lean_object* v_diag_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2810_; 
v___x_2792_ = lean_st_ref_get(v___y_2788_);
v_mctx_2793_ = lean_ctor_get(v___x_2792_, 0);
lean_inc_ref(v_mctx_2793_);
lean_dec(v___x_2792_);
v___x_2794_ = l_Lean_instantiateMVarsCore(v_mctx_2793_, v_e_2787_);
v_fst_2795_ = lean_ctor_get(v___x_2794_, 0);
lean_inc(v_fst_2795_);
v_snd_2796_ = lean_ctor_get(v___x_2794_, 1);
lean_inc(v_snd_2796_);
lean_dec_ref(v___x_2794_);
v___x_2797_ = lean_st_ref_take(v___y_2788_);
v_cache_2798_ = lean_ctor_get(v___x_2797_, 1);
v_zetaDeltaFVarIds_2799_ = lean_ctor_get(v___x_2797_, 2);
v_postponed_2800_ = lean_ctor_get(v___x_2797_, 3);
v_diag_2801_ = lean_ctor_get(v___x_2797_, 4);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2810_ == 0)
{
lean_object* v_unused_2811_; 
v_unused_2811_ = lean_ctor_get(v___x_2797_, 0);
lean_dec(v_unused_2811_);
v___x_2803_ = v___x_2797_;
v_isShared_2804_ = v_isSharedCheck_2810_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_diag_2801_);
lean_inc(v_postponed_2800_);
lean_inc(v_zetaDeltaFVarIds_2799_);
lean_inc(v_cache_2798_);
lean_dec(v___x_2797_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2810_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 0, v_snd_2796_);
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_snd_2796_);
lean_ctor_set(v_reuseFailAlloc_2809_, 1, v_cache_2798_);
lean_ctor_set(v_reuseFailAlloc_2809_, 2, v_zetaDeltaFVarIds_2799_);
lean_ctor_set(v_reuseFailAlloc_2809_, 3, v_postponed_2800_);
lean_ctor_set(v_reuseFailAlloc_2809_, 4, v_diag_2801_);
v___x_2806_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; 
v___x_2807_ = lean_st_ref_put(v___y_2788_, v___x_2806_);
v___x_2808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2808_, 0, v_fst_2795_);
return v___x_2808_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object* v_e_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
lean_object* v_res_2815_; 
v_res_2815_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2812_, v___y_2813_);
lean_dec(v___y_2813_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object* v_e_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v___x_2822_; 
v___x_2822_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2816_, v___y_2818_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object* v_e_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(v_e_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object* v_matcherName_2830_, lean_object* v_info_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
lean_object* v___x_2835_; lean_object* v_env_2836_; lean_object* v_nextMacroScope_2837_; lean_object* v_ngen_2838_; lean_object* v_auxDeclNGen_2839_; lean_object* v_traceState_2840_; lean_object* v_messages_2841_; lean_object* v_infoState_2842_; lean_object* v_snapshotTasks_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2870_; 
v___x_2835_ = lean_st_ref_take(v___y_2833_);
v_env_2836_ = lean_ctor_get(v___x_2835_, 0);
v_nextMacroScope_2837_ = lean_ctor_get(v___x_2835_, 1);
v_ngen_2838_ = lean_ctor_get(v___x_2835_, 2);
v_auxDeclNGen_2839_ = lean_ctor_get(v___x_2835_, 3);
v_traceState_2840_ = lean_ctor_get(v___x_2835_, 4);
v_messages_2841_ = lean_ctor_get(v___x_2835_, 6);
v_infoState_2842_ = lean_ctor_get(v___x_2835_, 7);
v_snapshotTasks_2843_ = lean_ctor_get(v___x_2835_, 8);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2870_ == 0)
{
lean_object* v_unused_2871_; 
v_unused_2871_ = lean_ctor_get(v___x_2835_, 5);
lean_dec(v_unused_2871_);
v___x_2845_ = v___x_2835_;
v_isShared_2846_ = v_isSharedCheck_2870_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_snapshotTasks_2843_);
lean_inc(v_infoState_2842_);
lean_inc(v_messages_2841_);
lean_inc(v_traceState_2840_);
lean_inc(v_auxDeclNGen_2839_);
lean_inc(v_ngen_2838_);
lean_inc(v_nextMacroScope_2837_);
lean_inc(v_env_2836_);
lean_dec(v___x_2835_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2870_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2847_ = l_Lean_Meta_Match_Extension_addMatcherInfo(v_env_2836_, v_matcherName_2830_, v_info_2831_);
v___x_2848_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 5, v___x_2848_);
lean_ctor_set(v___x_2845_, 0, v___x_2847_);
v___x_2850_ = v___x_2845_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v___x_2847_);
lean_ctor_set(v_reuseFailAlloc_2869_, 1, v_nextMacroScope_2837_);
lean_ctor_set(v_reuseFailAlloc_2869_, 2, v_ngen_2838_);
lean_ctor_set(v_reuseFailAlloc_2869_, 3, v_auxDeclNGen_2839_);
lean_ctor_set(v_reuseFailAlloc_2869_, 4, v_traceState_2840_);
lean_ctor_set(v_reuseFailAlloc_2869_, 5, v___x_2848_);
lean_ctor_set(v_reuseFailAlloc_2869_, 6, v_messages_2841_);
lean_ctor_set(v_reuseFailAlloc_2869_, 7, v_infoState_2842_);
lean_ctor_set(v_reuseFailAlloc_2869_, 8, v_snapshotTasks_2843_);
v___x_2850_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v_mctx_2853_; lean_object* v_zetaDeltaFVarIds_2854_; lean_object* v_postponed_2855_; lean_object* v_diag_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2867_; 
v___x_2851_ = lean_st_ref_put(v___y_2833_, v___x_2850_);
v___x_2852_ = lean_st_ref_take(v___y_2832_);
v_mctx_2853_ = lean_ctor_get(v___x_2852_, 0);
v_zetaDeltaFVarIds_2854_ = lean_ctor_get(v___x_2852_, 2);
v_postponed_2855_ = lean_ctor_get(v___x_2852_, 3);
v_diag_2856_ = lean_ctor_get(v___x_2852_, 4);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2867_ == 0)
{
lean_object* v_unused_2868_; 
v_unused_2868_ = lean_ctor_get(v___x_2852_, 1);
lean_dec(v_unused_2868_);
v___x_2858_ = v___x_2852_;
v_isShared_2859_ = v_isSharedCheck_2867_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_diag_2856_);
lean_inc(v_postponed_2855_);
lean_inc(v_zetaDeltaFVarIds_2854_);
lean_inc(v_mctx_2853_);
lean_dec(v___x_2852_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2867_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2863_; 
v___x_2860_ = lean_box(0);
v___x_2861_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2859_ == 0)
{
lean_ctor_set(v___x_2858_, 1, v___x_2861_);
v___x_2863_ = v___x_2858_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_mctx_2853_);
lean_ctor_set(v_reuseFailAlloc_2866_, 1, v___x_2861_);
lean_ctor_set(v_reuseFailAlloc_2866_, 2, v_zetaDeltaFVarIds_2854_);
lean_ctor_set(v_reuseFailAlloc_2866_, 3, v_postponed_2855_);
lean_ctor_set(v_reuseFailAlloc_2866_, 4, v_diag_2856_);
v___x_2863_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2864_ = lean_st_ref_put(v___y_2832_, v___x_2863_);
v___x_2865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2865_, 0, v___x_2860_);
return v___x_2865_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object* v_matcherName_2872_, lean_object* v_info_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2872_, v_info_2873_, v___y_2874_, v___y_2875_);
lean_dec(v___y_2875_);
lean_dec(v___y_2874_);
return v_res_2877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object* v_matcherName_2878_, lean_object* v_info_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_){
_start:
{
lean_object* v___x_2885_; 
v___x_2885_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2878_, v_info_2879_, v___y_2881_, v___y_2883_);
return v___x_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object* v_matcherName_2886_, lean_object* v_info_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(v_matcherName_2886_, v_info_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
lean_dec(v___y_2891_);
lean_dec_ref(v___y_2890_);
lean_dec(v___y_2889_);
lean_dec_ref(v___y_2888_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object* v_motive_2894_, lean_object* v___x_2895_, lean_object* v_newEqs1_2896_, uint8_t v___x_2897_, uint8_t v___x_2898_, uint8_t v___x_2899_, lean_object* v_ism1_x27_2900_, lean_object* v_ism2_x27_2901_, lean_object* v_newRefls1_2902_, lean_object* v_newEqs2_2903_, lean_object* v_newRefls2_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2910_ = l_Lean_mkAppN(v_motive_2894_, v___x_2895_);
v___x_2911_ = l_Array_append___redArg(v_newEqs1_2896_, v_newEqs2_2903_);
v___x_2912_ = l_Lean_Meta_mkForallFVars(v___x_2911_, v___x_2910_, v___x_2897_, v___x_2898_, v___x_2898_, v___x_2899_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_);
lean_dec_ref(v___x_2911_);
if (lean_obj_tag(v___x_2912_) == 0)
{
lean_object* v_a_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
lean_inc(v_a_2913_);
lean_dec_ref_known(v___x_2912_, 1);
v___x_2914_ = l_Array_append___redArg(v_ism1_x27_2900_, v_ism2_x27_2901_);
v___x_2915_ = l_Lean_Meta_mkLambdaFVars(v___x_2914_, v_a_2913_, v___x_2897_, v___x_2898_, v___x_2897_, v___x_2898_, v___x_2899_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_);
lean_dec_ref(v___x_2914_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2925_; 
v_a_2916_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2918_ = v___x_2915_;
v_isShared_2919_ = v_isSharedCheck_2925_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2915_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2925_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2923_; 
v___x_2920_ = l_Array_append___redArg(v_newRefls1_2902_, v_newRefls2_2904_);
v___x_2921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2921_, 0, v_a_2916_);
lean_ctor_set(v___x_2921_, 1, v___x_2920_);
if (v_isShared_2919_ == 0)
{
lean_ctor_set(v___x_2918_, 0, v___x_2921_);
v___x_2923_ = v___x_2918_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v___x_2921_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_dec_ref(v_newRefls1_2902_);
v_a_2926_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2915_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2915_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2926_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
lean_dec_ref(v_newRefls1_2902_);
lean_dec_ref(v_ism1_x27_2900_);
v_a_2934_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___x_2912_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___x_2912_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object* v_motive_2942_, lean_object* v___x_2943_, lean_object* v_newEqs1_2944_, lean_object* v___x_2945_, lean_object* v___x_2946_, lean_object* v___x_2947_, lean_object* v_ism1_x27_2948_, lean_object* v_ism2_x27_2949_, lean_object* v_newRefls1_2950_, lean_object* v_newEqs2_2951_, lean_object* v_newRefls2_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_){
_start:
{
uint8_t v___x_15913__boxed_2958_; uint8_t v___x_15914__boxed_2959_; uint8_t v___x_15915__boxed_2960_; lean_object* v_res_2961_; 
v___x_15913__boxed_2958_ = lean_unbox(v___x_2945_);
v___x_15914__boxed_2959_ = lean_unbox(v___x_2946_);
v___x_15915__boxed_2960_ = lean_unbox(v___x_2947_);
v_res_2961_ = l_Lean_mkCasesOnSameCtor___lam__0(v_motive_2942_, v___x_2943_, v_newEqs1_2944_, v___x_15913__boxed_2958_, v___x_15914__boxed_2959_, v___x_15915__boxed_2960_, v_ism1_x27_2948_, v_ism2_x27_2949_, v_newRefls1_2950_, v_newEqs2_2951_, v_newRefls2_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_);
lean_dec(v___y_2956_);
lean_dec_ref(v___y_2955_);
lean_dec(v___y_2954_);
lean_dec_ref(v___y_2953_);
lean_dec_ref(v_newRefls2_2952_);
lean_dec_ref(v_newEqs2_2951_);
lean_dec_ref(v_ism2_x27_2949_);
lean_dec_ref(v___x_2943_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object* v_motive_2962_, lean_object* v___x_2963_, uint8_t v___x_2964_, uint8_t v___x_2965_, uint8_t v___x_2966_, lean_object* v_ism1_x27_2967_, lean_object* v_ism2_x27_2968_, lean_object* v_is_2969_, lean_object* v___x_2970_, lean_object* v_newEqs1_2971_, lean_object* v_newRefls1_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___f_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2978_ = lean_box(v___x_2964_);
v___x_2979_ = lean_box(v___x_2965_);
v___x_2980_ = lean_box(v___x_2966_);
lean_inc_ref(v_ism2_x27_2968_);
v___f_2981_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__0___boxed), 16, 9);
lean_closure_set(v___f_2981_, 0, v_motive_2962_);
lean_closure_set(v___f_2981_, 1, v___x_2963_);
lean_closure_set(v___f_2981_, 2, v_newEqs1_2971_);
lean_closure_set(v___f_2981_, 3, v___x_2978_);
lean_closure_set(v___f_2981_, 4, v___x_2979_);
lean_closure_set(v___f_2981_, 5, v___x_2980_);
lean_closure_set(v___f_2981_, 6, v_ism1_x27_2967_);
lean_closure_set(v___f_2981_, 7, v_ism2_x27_2968_);
lean_closure_set(v___f_2981_, 8, v_newRefls1_2972_);
v___x_2982_ = lean_array_push(v_is_2969_, v___x_2970_);
v___x_2983_ = l_Lean_Meta_withNewEqs___redArg(v___x_2982_, v_ism2_x27_2968_, v___f_2981_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_);
return v___x_2983_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object* v_motive_2984_, lean_object* v___x_2985_, lean_object* v___x_2986_, lean_object* v___x_2987_, lean_object* v___x_2988_, lean_object* v_ism1_x27_2989_, lean_object* v_ism2_x27_2990_, lean_object* v_is_2991_, lean_object* v___x_2992_, lean_object* v_newEqs1_2993_, lean_object* v_newRefls1_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
uint8_t v___x_16004__boxed_3000_; uint8_t v___x_16005__boxed_3001_; uint8_t v___x_16006__boxed_3002_; lean_object* v_res_3003_; 
v___x_16004__boxed_3000_ = lean_unbox(v___x_2986_);
v___x_16005__boxed_3001_ = lean_unbox(v___x_2987_);
v___x_16006__boxed_3002_ = lean_unbox(v___x_2988_);
v_res_3003_ = l_Lean_mkCasesOnSameCtor___lam__1(v_motive_2984_, v___x_2985_, v___x_16004__boxed_3000_, v___x_16005__boxed_3001_, v___x_16006__boxed_3002_, v_ism1_x27_2989_, v_ism2_x27_2990_, v_is_2991_, v___x_2992_, v_newEqs1_2993_, v_newRefls1_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
return v_res_3003_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object* v___x_3004_, uint8_t v___x_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
lean_object* v___x_3011_; 
v___x_3011_ = l_Lean_addDecl(v___x_3004_, v___x_3005_, v___y_3008_, v___y_3009_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object* v___x_3012_, lean_object* v___x_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_){
_start:
{
uint8_t v___x_16046__boxed_3019_; lean_object* v_res_3020_; 
v___x_16046__boxed_3019_ = lean_unbox(v___x_3013_);
v_res_3020_ = l_Lean_mkCasesOnSameCtor___lam__2(v___x_3012_, v___x_16046__boxed_3019_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec_ref(v___y_3014_);
return v_res_3020_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3022_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0));
v___x_3023_ = l_Lean_stringToMessageData(v___x_3022_);
return v___x_3023_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2));
v___x_3026_ = l_Lean_stringToMessageData(v___x_3025_);
return v___x_3026_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3032_ = lean_box(0);
v___x_3033_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6));
v___x_3034_ = l_Lean_mkConst(v___x_3033_, v___x_3032_);
return v___x_3034_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; 
v___x_3036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8));
v___x_3037_ = l_Lean_stringToMessageData(v___x_3036_);
return v___x_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object* v___x_3038_, lean_object* v_a_3039_, lean_object* v___x_3040_, lean_object* v_zs1_3041_, lean_object* v_snd_3042_, uint8_t v___x_3043_, uint8_t v___x_3044_, uint8_t v___x_3045_, lean_object* v_alts_3046_, lean_object* v_zs2_3047_, lean_object* v___ctorRet2_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_){
_start:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; 
v___x_3054_ = lean_array_get_borrowed(v___x_3038_, v_a_3039_, v___x_3040_);
lean_inc_ref(v_zs1_3041_);
v___x_3055_ = l_Array_append___redArg(v_zs1_3041_, v_zs2_3047_);
lean_inc(v___x_3054_);
v___x_3056_ = l_Lean_Meta_instantiateForall(v___x_3054_, v___x_3055_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
if (lean_obj_tag(v___x_3056_) == 0)
{
lean_object* v_a_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v_a_3057_ = lean_ctor_get(v___x_3056_, 0);
lean_inc(v_a_3057_);
lean_dec_ref_known(v___x_3056_, 1);
v___x_3058_ = lean_box(0);
v___x_3059_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_3057_, v___x_3058_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v_a_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; 
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_a_3060_);
lean_dec_ref_known(v___x_3059_, 1);
v___x_3061_ = l_Lean_Expr_mvarId_x21(v_a_3060_);
v___x_3062_ = lean_array_get_size(v_snd_3042_);
v___x_3063_ = lean_box(0);
v___x_3064_ = lean_box(0);
lean_inc_ref(v___y_3051_);
v___x_3065_ = l_Lean_Meta_Cases_unifyEqs_x3f(v___x_3062_, v___x_3061_, v___x_3063_, v___x_3064_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_object* v_a_3066_; 
v_a_3066_ = lean_ctor_get(v___x_3065_, 0);
lean_inc(v_a_3066_);
lean_dec_ref_known(v___x_3065_, 1);
if (lean_obj_tag(v_a_3066_) == 1)
{
lean_object* v_val_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3114_; 
v_val_3067_ = lean_ctor_get(v_a_3066_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v_a_3066_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3069_ = v_a_3066_;
v_isShared_3070_ = v_isSharedCheck_3114_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_val_3067_);
lean_dec(v_a_3066_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3114_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v_fst_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3112_; 
v_fst_3071_ = lean_ctor_get(v_val_3067_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v_val_3067_);
if (v_isSharedCheck_3112_ == 0)
{
lean_object* v_unused_3113_; 
v_unused_3113_ = lean_ctor_get(v_val_3067_, 1);
lean_dec(v_unused_3113_);
v___x_3073_ = v_val_3067_;
v_isShared_3074_ = v_isSharedCheck_3112_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_fst_3071_);
lean_dec(v_val_3067_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3112_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___y_3076_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; uint8_t v___x_3107_; 
v___x_3104_ = lean_array_get_borrowed(v___x_3038_, v_alts_3046_, v___x_3040_);
v___x_3105_ = lean_array_get_size(v_zs1_3041_);
lean_dec_ref(v_zs1_3041_);
v___x_3106_ = lean_unsigned_to_nat(0u);
v___x_3107_ = lean_nat_dec_eq(v___x_3105_, v___x_3106_);
if (v___x_3107_ == 0)
{
lean_inc(v___x_3104_);
v___y_3076_ = v___x_3104_;
goto v___jp_3075_;
}
else
{
lean_object* v___x_3108_; uint8_t v___x_3109_; 
v___x_3108_ = lean_array_get_size(v_zs2_3047_);
v___x_3109_ = lean_nat_dec_eq(v___x_3108_, v___x_3106_);
if (v___x_3109_ == 0)
{
lean_inc(v___x_3104_);
v___y_3076_ = v___x_3104_;
goto v___jp_3075_;
}
else
{
lean_object* v___x_3110_; lean_object* v___x_3111_; 
v___x_3110_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7);
lean_inc(v___x_3104_);
v___x_3111_ = l_Lean_Expr_app___override(v___x_3104_, v___x_3110_);
v___y_3076_ = v___x_3111_;
goto v___jp_3075_;
}
}
v___jp_3075_:
{
uint8_t v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
v___x_3077_ = 0;
v___x_3078_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3078_, 0, v___x_3077_);
lean_ctor_set_uint8(v___x_3078_, 1, v___x_3043_);
lean_ctor_set_uint8(v___x_3078_, 2, v___x_3044_);
lean_ctor_set_uint8(v___x_3078_, 3, v___x_3043_);
lean_inc_ref(v___y_3076_);
lean_inc(v_fst_3071_);
v___x_3079_ = l_Lean_MVarId_apply(v_fst_3071_, v___y_3076_, v___x_3078_, v___x_3064_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
if (lean_obj_tag(v___x_3079_) == 0)
{
lean_object* v_a_3080_; 
v_a_3080_ = lean_ctor_get(v___x_3079_, 0);
lean_inc(v_a_3080_);
lean_dec_ref_known(v___x_3079_, 1);
if (lean_obj_tag(v_a_3080_) == 0)
{
lean_object* v___x_3081_; 
lean_dec_ref(v___y_3076_);
lean_del_object(v___x_3073_);
lean_dec(v_fst_3071_);
lean_del_object(v___x_3069_);
v___x_3081_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_a_3060_, v___y_3050_);
if (lean_obj_tag(v___x_3081_) == 0)
{
lean_object* v_a_3082_; lean_object* v___x_3083_; 
v_a_3082_ = lean_ctor_get(v___x_3081_, 0);
lean_inc(v_a_3082_);
lean_dec_ref_known(v___x_3081_, 1);
v___x_3083_ = l_Lean_Meta_mkLambdaFVars(v___x_3055_, v_a_3082_, v___x_3044_, v___x_3043_, v___x_3044_, v___x_3043_, v___x_3045_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
lean_dec_ref(v___x_3055_);
return v___x_3083_;
}
else
{
lean_dec_ref(v___x_3055_);
return v___x_3081_;
}
}
else
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3087_; 
lean_dec(v_a_3080_);
lean_dec(v_a_3060_);
lean_dec_ref(v___x_3055_);
v___x_3084_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1);
v___x_3085_ = l_Lean_MessageData_ofExpr(v___y_3076_);
if (v_isShared_3074_ == 0)
{
lean_ctor_set_tag(v___x_3073_, 7);
lean_ctor_set(v___x_3073_, 1, v___x_3085_);
lean_ctor_set(v___x_3073_, 0, v___x_3084_);
v___x_3087_ = v___x_3073_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3084_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v___x_3085_);
v___x_3087_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3091_; 
v___x_3088_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3);
v___x_3089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3087_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 0, v_fst_3071_);
v___x_3091_ = v___x_3069_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_fst_3071_);
v___x_3091_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3089_);
lean_ctor_set(v___x_3092_, 1, v___x_3091_);
v___x_3093_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3092_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
return v___x_3093_;
}
}
}
}
else
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3103_; 
lean_dec_ref(v___y_3076_);
lean_del_object(v___x_3073_);
lean_dec(v_fst_3071_);
lean_del_object(v___x_3069_);
lean_dec(v_a_3060_);
lean_dec_ref(v___x_3055_);
v_a_3096_ = lean_ctor_get(v___x_3079_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_3079_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3098_ = v___x_3079_;
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_3079_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3101_; 
if (v_isShared_3099_ == 0)
{
v___x_3101_ = v___x_3098_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_a_3096_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
return v___x_3101_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_dec(v_a_3066_);
lean_dec(v_a_3060_);
lean_dec_ref(v___x_3055_);
lean_dec_ref(v_zs1_3041_);
v___x_3115_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9);
v___x_3116_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3115_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
return v___x_3116_;
}
}
else
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3124_; 
lean_dec(v_a_3060_);
lean_dec_ref(v___x_3055_);
lean_dec_ref(v_zs1_3041_);
v_a_3117_ = lean_ctor_get(v___x_3065_, 0);
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3065_);
if (v_isSharedCheck_3124_ == 0)
{
v___x_3119_ = v___x_3065_;
v_isShared_3120_ = v_isSharedCheck_3124_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3065_);
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
else
{
lean_dec_ref(v___x_3055_);
lean_dec_ref(v_zs1_3041_);
return v___x_3059_;
}
}
else
{
lean_dec_ref(v___x_3055_);
lean_dec_ref(v_zs1_3041_);
return v___x_3056_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object* v___x_3125_, lean_object* v_a_3126_, lean_object* v___x_3127_, lean_object* v_zs1_3128_, lean_object* v_snd_3129_, lean_object* v___x_3130_, lean_object* v___x_3131_, lean_object* v___x_3132_, lean_object* v_alts_3133_, lean_object* v_zs2_3134_, lean_object* v___ctorRet2_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
uint8_t v___x_16106__boxed_3141_; uint8_t v___x_16107__boxed_3142_; uint8_t v___x_16108__boxed_3143_; lean_object* v_res_3144_; 
v___x_16106__boxed_3141_ = lean_unbox(v___x_3130_);
v___x_16107__boxed_3142_ = lean_unbox(v___x_3131_);
v___x_16108__boxed_3143_ = lean_unbox(v___x_3132_);
v_res_3144_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(v___x_3125_, v_a_3126_, v___x_3127_, v_zs1_3128_, v_snd_3129_, v___x_16106__boxed_3141_, v___x_16107__boxed_3142_, v___x_16108__boxed_3143_, v_alts_3133_, v_zs2_3134_, v___ctorRet2_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
lean_dec_ref(v___ctorRet2_3135_);
lean_dec_ref(v_zs2_3134_);
lean_dec_ref(v_alts_3133_);
lean_dec_ref(v_snd_3129_);
lean_dec(v___x_3127_);
lean_dec_ref(v_a_3126_);
lean_dec_ref(v___x_3125_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object* v___x_3145_, lean_object* v_a_3146_, lean_object* v___x_3147_, lean_object* v_snd_3148_, uint8_t v___x_3149_, uint8_t v___x_3150_, uint8_t v___x_3151_, lean_object* v_alts_3152_, lean_object* v_a_3153_, lean_object* v_zs1_3154_, lean_object* v___ctorRet1_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___f_3164_; lean_object* v___x_3165_; 
v___x_3161_ = lean_box(v___x_3149_);
v___x_3162_ = lean_box(v___x_3150_);
v___x_3163_ = lean_box(v___x_3151_);
v___f_3164_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3164_, 0, v___x_3145_);
lean_closure_set(v___f_3164_, 1, v_a_3146_);
lean_closure_set(v___f_3164_, 2, v___x_3147_);
lean_closure_set(v___f_3164_, 3, v_zs1_3154_);
lean_closure_set(v___f_3164_, 4, v_snd_3148_);
lean_closure_set(v___f_3164_, 5, v___x_3161_);
lean_closure_set(v___f_3164_, 6, v___x_3162_);
lean_closure_set(v___f_3164_, 7, v___x_3163_);
lean_closure_set(v___f_3164_, 8, v_alts_3152_);
v___x_3165_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3153_, v___f_3164_, v___x_3150_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
return v___x_3165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object* v___x_3166_, lean_object* v_a_3167_, lean_object* v___x_3168_, lean_object* v_snd_3169_, lean_object* v___x_3170_, lean_object* v___x_3171_, lean_object* v___x_3172_, lean_object* v_alts_3173_, lean_object* v_a_3174_, lean_object* v_zs1_3175_, lean_object* v___ctorRet1_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
uint8_t v___x_16305__boxed_3182_; uint8_t v___x_16306__boxed_3183_; uint8_t v___x_16307__boxed_3184_; lean_object* v_res_3185_; 
v___x_16305__boxed_3182_ = lean_unbox(v___x_3170_);
v___x_16306__boxed_3183_ = lean_unbox(v___x_3171_);
v___x_16307__boxed_3184_ = lean_unbox(v___x_3172_);
v_res_3185_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(v___x_3166_, v_a_3167_, v___x_3168_, v_snd_3169_, v___x_16305__boxed_3182_, v___x_16306__boxed_3183_, v___x_16307__boxed_3184_, v_alts_3173_, v_a_3174_, v_zs1_3175_, v___ctorRet1_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_);
lean_dec(v___y_3180_);
lean_dec_ref(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec_ref(v___ctorRet1_3176_);
return v_res_3185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object* v_tail_3186_, lean_object* v_params_3187_, lean_object* v_a_3188_, lean_object* v_snd_3189_, lean_object* v_alts_3190_, size_t v_sz_3191_, size_t v_i_3192_, lean_object* v_bs_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_){
_start:
{
uint8_t v___x_3199_; 
v___x_3199_ = lean_usize_dec_lt(v_i_3192_, v_sz_3191_);
if (v___x_3199_ == 0)
{
lean_object* v___x_3200_; 
lean_dec_ref(v_alts_3190_);
lean_dec_ref(v_snd_3189_);
lean_dec_ref(v_a_3188_);
lean_dec(v_tail_3186_);
v___x_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3200_, 0, v_bs_3193_);
return v___x_3200_;
}
else
{
lean_object* v___x_3201_; uint8_t v___x_3202_; uint8_t v___x_3203_; lean_object* v_v_3204_; lean_object* v___x_3205_; lean_object* v_bs_x27_3206_; lean_object* v___y_3208_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3201_ = l_Lean_instInhabitedExpr;
v___x_3202_ = 0;
v___x_3203_ = 1;
v_v_3204_ = lean_array_uget(v_bs_3193_, v_i_3192_);
v___x_3205_ = lean_unsigned_to_nat(0u);
v_bs_x27_3206_ = lean_array_uset(v_bs_3193_, v_i_3192_, v___x_3205_);
v___x_3222_ = lean_usize_to_nat(v_i_3192_);
lean_inc(v_tail_3186_);
v___x_3223_ = l_Lean_mkConst(v_v_3204_, v_tail_3186_);
v___x_3224_ = l_Lean_mkAppN(v___x_3223_, v_params_3187_);
lean_inc(v___y_3197_);
lean_inc_ref(v___y_3196_);
lean_inc(v___y_3195_);
lean_inc_ref(v___y_3194_);
v___x_3225_ = lean_infer_type(v___x_3224_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___f_3230_; lean_object* v___x_3231_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc_n(v_a_3226_, 2);
lean_dec_ref_known(v___x_3225_, 1);
v___x_3227_ = lean_box(v___x_3199_);
v___x_3228_ = lean_box(v___x_3202_);
v___x_3229_ = lean_box(v___x_3203_);
lean_inc_ref(v_alts_3190_);
lean_inc_ref(v_snd_3189_);
lean_inc_ref(v_a_3188_);
v___f_3230_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3230_, 0, v___x_3201_);
lean_closure_set(v___f_3230_, 1, v_a_3188_);
lean_closure_set(v___f_3230_, 2, v___x_3222_);
lean_closure_set(v___f_3230_, 3, v_snd_3189_);
lean_closure_set(v___f_3230_, 4, v___x_3227_);
lean_closure_set(v___f_3230_, 5, v___x_3228_);
lean_closure_set(v___f_3230_, 6, v___x_3229_);
lean_closure_set(v___f_3230_, 7, v_alts_3190_);
lean_closure_set(v___f_3230_, 8, v_a_3226_);
v___x_3231_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3226_, v___f_3230_, v___x_3202_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_);
v___y_3208_ = v___x_3231_;
goto v___jp_3207_;
}
else
{
lean_dec(v___x_3222_);
v___y_3208_ = v___x_3225_;
goto v___jp_3207_;
}
v___jp_3207_:
{
if (lean_obj_tag(v___y_3208_) == 0)
{
lean_object* v_a_3209_; size_t v___x_3210_; size_t v___x_3211_; lean_object* v___x_3212_; 
v_a_3209_ = lean_ctor_get(v___y_3208_, 0);
lean_inc(v_a_3209_);
lean_dec_ref_known(v___y_3208_, 1);
v___x_3210_ = ((size_t)1ULL);
v___x_3211_ = lean_usize_add(v_i_3192_, v___x_3210_);
v___x_3212_ = lean_array_uset(v_bs_x27_3206_, v_i_3192_, v_a_3209_);
v_i_3192_ = v___x_3211_;
v_bs_3193_ = v___x_3212_;
goto _start;
}
else
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_dec_ref(v_bs_x27_3206_);
lean_dec_ref(v_alts_3190_);
lean_dec_ref(v_snd_3189_);
lean_dec_ref(v_a_3188_);
lean_dec(v_tail_3186_);
v_a_3214_ = lean_ctor_get(v___y_3208_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___y_3208_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___y_3208_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___y_3208_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object* v_tail_3232_, lean_object* v_params_3233_, lean_object* v_a_3234_, lean_object* v_snd_3235_, lean_object* v_alts_3236_, lean_object* v_sz_3237_, lean_object* v_i_3238_, lean_object* v_bs_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_){
_start:
{
size_t v_sz_boxed_3245_; size_t v_i_boxed_3246_; lean_object* v_res_3247_; 
v_sz_boxed_3245_ = lean_unbox_usize(v_sz_3237_);
lean_dec(v_sz_3237_);
v_i_boxed_3246_ = lean_unbox_usize(v_i_3238_);
lean_dec(v_i_3238_);
v_res_3247_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3232_, v_params_3233_, v_a_3234_, v_snd_3235_, v_alts_3236_, v_sz_boxed_3245_, v_i_boxed_3246_, v_bs_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
lean_dec(v___y_3243_);
lean_dec_ref(v___y_3242_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec_ref(v_params_3233_);
return v_res_3247_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0(void){
_start:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; 
v___x_3248_ = lean_box(0);
v___x_3249_ = lean_unsigned_to_nat(16u);
v___x_3250_ = lean_mk_array(v___x_3249_, v___x_3248_);
return v___x_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object* v_motive_3251_, lean_object* v___x_3252_, uint8_t v___x_3253_, uint8_t v___x_3254_, uint8_t v___x_3255_, lean_object* v_ism1_x27_3256_, lean_object* v_is_3257_, lean_object* v___x_3258_, lean_object* v___x_3259_, lean_object* v___x_3260_, lean_object* v___x_3261_, lean_object* v_params_3262_, lean_object* v___x_3263_, lean_object* v___x_3264_, lean_object* v_heq_3265_, lean_object* v_val_3266_, lean_object* v_tail_3267_, lean_object* v_alts_3268_, size_t v_sz_3269_, size_t v___x_3270_, lean_object* v___x_3271_, lean_object* v___x_3272_, lean_object* v_declName_3273_, lean_object* v_levelParams_3274_, lean_object* v_numIndices_3275_, lean_object* v___x_3276_, lean_object* v___x_3277_, lean_object* v_numParams_3278_, lean_object* v_snd_3279_, lean_object* v_ism2_x27_3280_, lean_object* v_x_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_){
_start:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___f_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3287_ = lean_box(v___x_3253_);
v___x_3288_ = lean_box(v___x_3254_);
v___x_3289_ = lean_box(v___x_3255_);
lean_inc_ref(v___x_3258_);
lean_inc_ref_n(v_is_3257_, 2);
lean_inc_ref(v_ism1_x27_3256_);
lean_inc_ref(v_motive_3251_);
v___f_3290_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3290_, 0, v_motive_3251_);
lean_closure_set(v___f_3290_, 1, v___x_3252_);
lean_closure_set(v___f_3290_, 2, v___x_3287_);
lean_closure_set(v___f_3290_, 3, v___x_3288_);
lean_closure_set(v___f_3290_, 4, v___x_3289_);
lean_closure_set(v___f_3290_, 5, v_ism1_x27_3256_);
lean_closure_set(v___f_3290_, 6, v_ism2_x27_3280_);
lean_closure_set(v___f_3290_, 7, v_is_3257_);
lean_closure_set(v___f_3290_, 8, v___x_3258_);
lean_inc_ref(v___x_3259_);
v___x_3291_ = lean_array_push(v_is_3257_, v___x_3259_);
v___x_3292_ = l_Lean_Meta_withNewEqs___redArg(v___x_3291_, v_ism1_x27_3256_, v___f_3290_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v_a_3293_; lean_object* v_fst_3294_; lean_object* v_snd_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3396_; 
v_a_3293_ = lean_ctor_get(v___x_3292_, 0);
lean_inc(v_a_3293_);
lean_dec_ref_known(v___x_3292_, 1);
v_fst_3294_ = lean_ctor_get(v_a_3293_, 0);
v_snd_3295_ = lean_ctor_get(v_a_3293_, 1);
v_isSharedCheck_3396_ = !lean_is_exclusive(v_a_3293_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3297_ = v_a_3293_;
v_isShared_3298_ = v_isSharedCheck_3396_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_snd_3295_);
lean_inc(v_fst_3294_);
lean_dec(v_a_3293_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3396_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3299_ = l_Lean_mkConst(v___x_3260_, v___x_3261_);
v___x_3300_ = l_Lean_mkAppN(v___x_3299_, v_params_3262_);
v___x_3301_ = l_Lean_Expr_app___override(v___x_3300_, v_fst_3294_);
lean_inc_ref(v_is_3257_);
v___x_3302_ = l_Array_append___redArg(v_is_3257_, v___x_3263_);
v___x_3303_ = l_Array_append___redArg(v___x_3302_, v_is_3257_);
v___x_3304_ = l_Array_append___redArg(v___x_3303_, v___x_3264_);
v___x_3305_ = l_Lean_mkAppN(v___x_3301_, v___x_3304_);
lean_dec_ref(v___x_3304_);
lean_inc_ref(v_heq_3265_);
v___x_3306_ = l_Lean_Expr_app___override(v___x_3305_, v_heq_3265_);
v___x_3307_ = l_Lean_InductiveVal_numCtors(v_val_3266_);
lean_inc_ref(v___x_3306_);
v___x_3308_ = l_Lean_Meta_inferArgumentTypesN(v___x_3307_, v___x_3306_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; lean_object* v___x_3310_; 
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc(v_a_3309_);
lean_dec_ref_known(v___x_3308_, 1);
lean_inc_ref(v_alts_3268_);
lean_inc(v_snd_3295_);
v___x_3310_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3267_, v_params_3262_, v_a_3309_, v_snd_3295_, v_alts_3268_, v_sz_3269_, v___x_3270_, v___x_3271_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3310_) == 0)
{
lean_object* v_a_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v_a_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_a_3311_);
lean_dec_ref_known(v___x_3310_, 1);
v___x_3312_ = l_Lean_mkAppN(v___x_3306_, v_a_3311_);
lean_dec(v_a_3311_);
v___x_3313_ = l_Lean_mkAppN(v___x_3312_, v_snd_3295_);
lean_dec(v_snd_3295_);
lean_inc_ref(v___x_3272_);
v___x_3314_ = lean_array_push(v___x_3272_, v_motive_3251_);
v___x_3315_ = l_Array_append___redArg(v_params_3262_, v___x_3314_);
lean_dec_ref(v___x_3314_);
v___x_3316_ = l_Array_append___redArg(v___x_3315_, v_is_3257_);
lean_dec_ref(v_is_3257_);
v___x_3317_ = lean_unsigned_to_nat(2u);
v___x_3318_ = lean_mk_empty_array_with_capacity(v___x_3317_);
v___x_3319_ = lean_array_push(v___x_3318_, v___x_3259_);
v___x_3320_ = lean_array_push(v___x_3319_, v___x_3258_);
v___x_3321_ = l_Array_append___redArg(v___x_3316_, v___x_3320_);
lean_dec_ref(v___x_3320_);
v___x_3322_ = lean_array_push(v___x_3272_, v_heq_3265_);
v___x_3323_ = l_Array_append___redArg(v___x_3321_, v___x_3322_);
lean_dec_ref(v___x_3322_);
v___x_3324_ = l_Array_append___redArg(v___x_3323_, v_alts_3268_);
lean_dec_ref(v_alts_3268_);
v___x_3325_ = l_Lean_Meta_mkLambdaFVars(v___x_3324_, v___x_3313_, v___x_3253_, v___x_3254_, v___x_3253_, v___x_3254_, v___x_3255_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
lean_dec_ref(v___x_3324_);
if (lean_obj_tag(v___x_3325_) == 0)
{
lean_object* v_a_3326_; lean_object* v___x_3327_; 
v_a_3326_ = lean_ctor_get(v___x_3325_, 0);
lean_inc_n(v_a_3326_, 2);
lean_dec_ref_known(v___x_3325_, 1);
lean_inc(v___y_3285_);
lean_inc_ref(v___y_3284_);
lean_inc(v___y_3283_);
lean_inc_ref(v___y_3282_);
v___x_3327_ = lean_infer_type(v_a_3326_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v_a_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3363_; 
v_a_3328_ = lean_ctor_get(v___x_3327_, 0);
lean_inc(v_a_3328_);
lean_dec_ref_known(v___x_3327_, 1);
v___x_3329_ = lean_box(1);
lean_inc(v_declName_3273_);
v___x_3330_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_3273_, v_levelParams_3274_, v_a_3328_, v_a_3326_, v___x_3329_, v___y_3285_);
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3333_ = v___x_3330_;
v_isShared_3334_ = v_isSharedCheck_3363_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3330_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3363_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
lean_ctor_set_tag(v___x_3333_, 1);
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
lean_object* v___x_3337_; lean_object* v___f_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3348_; 
v___x_3337_ = lean_box(v___x_3253_);
lean_inc_ref(v___x_3336_);
v___f_3338_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3338_, 0, v___x_3336_);
lean_closure_set(v___f_3338_, 1, v___x_3337_);
v___x_3339_ = lean_nat_add(v_numIndices_3275_, v___x_3276_);
lean_inc(v___x_3277_);
v___x_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3340_, 0, v___x_3277_);
v___x_3341_ = lean_box(0);
v___x_3342_ = lean_mk_empty_array_with_capacity(v___x_3276_);
v___x_3343_ = lean_array_push(v___x_3342_, v___x_3341_);
v___x_3344_ = lean_array_push(v___x_3343_, v___x_3341_);
v___x_3345_ = lean_array_push(v___x_3344_, v___x_3341_);
v___x_3346_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___lam__3___closed__0, &l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once, _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0);
if (v_isShared_3298_ == 0)
{
lean_ctor_set(v___x_3297_, 1, v___x_3346_);
lean_ctor_set(v___x_3297_, 0, v___x_3277_);
v___x_3348_ = v___x_3297_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3361_; 
v_reuseFailAlloc_3361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3361_, 0, v___x_3277_);
lean_ctor_set(v_reuseFailAlloc_3361_, 1, v___x_3346_);
v___x_3348_ = v_reuseFailAlloc_3361_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
lean_object* v___x_3349_; uint8_t v___y_3351_; uint8_t v___x_3360_; 
v___x_3349_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3349_, 0, v_numParams_3278_);
lean_ctor_set(v___x_3349_, 1, v___x_3339_);
lean_ctor_set(v___x_3349_, 2, v_snd_3279_);
lean_ctor_set(v___x_3349_, 3, v___x_3340_);
lean_ctor_set(v___x_3349_, 4, v___x_3345_);
lean_ctor_set(v___x_3349_, 5, v___x_3348_);
v___x_3360_ = l_Lean_isPrivateName(v_declName_3273_);
if (v___x_3360_ == 0)
{
v___y_3351_ = v___x_3254_;
goto v___jp_3350_;
}
else
{
v___y_3351_ = v___x_3253_;
goto v___jp_3350_;
}
v___jp_3350_:
{
lean_object* v___x_3352_; 
v___x_3352_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_3338_, v___y_3351_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
lean_dec_ref_known(v___x_3352_, 1);
v___x_3353_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_3273_);
v___x_3354_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_3353_, v_declName_3273_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v___x_3355_; uint8_t v___x_3356_; lean_object* v___x_3357_; 
lean_dec_ref_known(v___x_3354_, 1);
lean_inc_n(v_declName_3273_, 2);
v___x_3355_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_declName_3273_, v___x_3349_, v___y_3283_, v___y_3285_);
lean_dec_ref(v___x_3355_);
v___x_3356_ = 0;
v___x_3357_ = l_Lean_Meta_setInlineAttribute(v_declName_3273_, v___x_3356_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v___x_3358_; 
lean_dec_ref_known(v___x_3357_, 1);
v___x_3358_ = l_Lean_enableRealizationsForConst(v_declName_3273_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3358_) == 0)
{
lean_object* v___x_3359_; 
lean_dec_ref_known(v___x_3358_, 1);
v___x_3359_ = l_Lean_compileDecl(v___x_3336_, v___x_3254_, v___y_3284_, v___y_3285_);
return v___x_3359_;
}
else
{
lean_dec_ref(v___x_3336_);
return v___x_3358_;
}
}
else
{
lean_dec_ref(v___x_3336_);
lean_dec(v_declName_3273_);
return v___x_3357_;
}
}
else
{
lean_dec_ref_known(v___x_3349_, 6);
lean_dec_ref(v___x_3336_);
lean_dec(v_declName_3273_);
return v___x_3354_;
}
}
else
{
lean_dec_ref_known(v___x_3349_, 6);
lean_dec_ref(v___x_3336_);
lean_dec(v_declName_3273_);
return v___x_3352_;
}
}
}
}
}
}
else
{
lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3371_; 
lean_dec(v_a_3326_);
lean_del_object(v___x_3297_);
lean_dec_ref(v_snd_3279_);
lean_dec(v_numParams_3278_);
lean_dec(v___x_3277_);
lean_dec(v_levelParams_3274_);
lean_dec(v_declName_3273_);
v_a_3364_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3366_ = v___x_3327_;
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3327_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3369_; 
if (v_isShared_3367_ == 0)
{
v___x_3369_ = v___x_3366_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3364_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3379_; 
lean_del_object(v___x_3297_);
lean_dec_ref(v_snd_3279_);
lean_dec(v_numParams_3278_);
lean_dec(v___x_3277_);
lean_dec(v_levelParams_3274_);
lean_dec(v_declName_3273_);
v_a_3372_ = lean_ctor_get(v___x_3325_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3325_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3374_ = v___x_3325_;
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3325_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3377_; 
if (v_isShared_3375_ == 0)
{
v___x_3377_ = v___x_3374_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3372_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_dec_ref(v___x_3306_);
lean_del_object(v___x_3297_);
lean_dec(v_snd_3295_);
lean_dec_ref(v_snd_3279_);
lean_dec(v_numParams_3278_);
lean_dec(v___x_3277_);
lean_dec(v_levelParams_3274_);
lean_dec(v_declName_3273_);
lean_dec_ref(v___x_3272_);
lean_dec_ref(v_alts_3268_);
lean_dec_ref(v_heq_3265_);
lean_dec_ref(v_params_3262_);
lean_dec_ref(v___x_3259_);
lean_dec_ref(v___x_3258_);
lean_dec_ref(v_is_3257_);
lean_dec_ref(v_motive_3251_);
v_a_3380_ = lean_ctor_get(v___x_3310_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3310_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3310_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3310_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
else
{
lean_object* v_a_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3395_; 
lean_dec_ref(v___x_3306_);
lean_del_object(v___x_3297_);
lean_dec(v_snd_3295_);
lean_dec_ref(v_snd_3279_);
lean_dec(v_numParams_3278_);
lean_dec(v___x_3277_);
lean_dec(v_levelParams_3274_);
lean_dec(v_declName_3273_);
lean_dec_ref(v___x_3272_);
lean_dec_ref(v___x_3271_);
lean_dec_ref(v_alts_3268_);
lean_dec(v_tail_3267_);
lean_dec_ref(v_heq_3265_);
lean_dec_ref(v_params_3262_);
lean_dec_ref(v___x_3259_);
lean_dec_ref(v___x_3258_);
lean_dec_ref(v_is_3257_);
lean_dec_ref(v_motive_3251_);
v_a_3388_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3395_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3390_ = v___x_3308_;
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_a_3388_);
lean_dec(v___x_3308_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v___x_3393_; 
if (v_isShared_3391_ == 0)
{
v___x_3393_ = v___x_3390_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_a_3388_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
}
}
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
lean_dec_ref(v_snd_3279_);
lean_dec(v_numParams_3278_);
lean_dec(v___x_3277_);
lean_dec(v_levelParams_3274_);
lean_dec(v_declName_3273_);
lean_dec_ref(v___x_3272_);
lean_dec_ref(v___x_3271_);
lean_dec_ref(v_alts_3268_);
lean_dec(v_tail_3267_);
lean_dec_ref(v_heq_3265_);
lean_dec_ref(v_params_3262_);
lean_dec(v___x_3261_);
lean_dec(v___x_3260_);
lean_dec_ref(v___x_3259_);
lean_dec_ref(v___x_3258_);
lean_dec_ref(v_is_3257_);
lean_dec_ref(v_motive_3251_);
v_a_3397_ = lean_ctor_get(v___x_3292_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3292_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3292_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3292_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object** _args){
lean_object* v_motive_3405_ = _args[0];
lean_object* v___x_3406_ = _args[1];
lean_object* v___x_3407_ = _args[2];
lean_object* v___x_3408_ = _args[3];
lean_object* v___x_3409_ = _args[4];
lean_object* v_ism1_x27_3410_ = _args[5];
lean_object* v_is_3411_ = _args[6];
lean_object* v___x_3412_ = _args[7];
lean_object* v___x_3413_ = _args[8];
lean_object* v___x_3414_ = _args[9];
lean_object* v___x_3415_ = _args[10];
lean_object* v_params_3416_ = _args[11];
lean_object* v___x_3417_ = _args[12];
lean_object* v___x_3418_ = _args[13];
lean_object* v_heq_3419_ = _args[14];
lean_object* v_val_3420_ = _args[15];
lean_object* v_tail_3421_ = _args[16];
lean_object* v_alts_3422_ = _args[17];
lean_object* v_sz_3423_ = _args[18];
lean_object* v___x_3424_ = _args[19];
lean_object* v___x_3425_ = _args[20];
lean_object* v___x_3426_ = _args[21];
lean_object* v_declName_3427_ = _args[22];
lean_object* v_levelParams_3428_ = _args[23];
lean_object* v_numIndices_3429_ = _args[24];
lean_object* v___x_3430_ = _args[25];
lean_object* v___x_3431_ = _args[26];
lean_object* v_numParams_3432_ = _args[27];
lean_object* v_snd_3433_ = _args[28];
lean_object* v_ism2_x27_3434_ = _args[29];
lean_object* v_x_3435_ = _args[30];
lean_object* v___y_3436_ = _args[31];
lean_object* v___y_3437_ = _args[32];
lean_object* v___y_3438_ = _args[33];
lean_object* v___y_3439_ = _args[34];
lean_object* v___y_3440_ = _args[35];
_start:
{
uint8_t v___x_16444__boxed_3441_; uint8_t v___x_16445__boxed_3442_; uint8_t v___x_16446__boxed_3443_; size_t v_sz_boxed_3444_; size_t v___x_16455__boxed_3445_; lean_object* v_res_3446_; 
v___x_16444__boxed_3441_ = lean_unbox(v___x_3407_);
v___x_16445__boxed_3442_ = lean_unbox(v___x_3408_);
v___x_16446__boxed_3443_ = lean_unbox(v___x_3409_);
v_sz_boxed_3444_ = lean_unbox_usize(v_sz_3423_);
lean_dec(v_sz_3423_);
v___x_16455__boxed_3445_ = lean_unbox_usize(v___x_3424_);
lean_dec(v___x_3424_);
v_res_3446_ = l_Lean_mkCasesOnSameCtor___lam__3(v_motive_3405_, v___x_3406_, v___x_16444__boxed_3441_, v___x_16445__boxed_3442_, v___x_16446__boxed_3443_, v_ism1_x27_3410_, v_is_3411_, v___x_3412_, v___x_3413_, v___x_3414_, v___x_3415_, v_params_3416_, v___x_3417_, v___x_3418_, v_heq_3419_, v_val_3420_, v_tail_3421_, v_alts_3422_, v_sz_boxed_3444_, v___x_16455__boxed_3445_, v___x_3425_, v___x_3426_, v_declName_3427_, v_levelParams_3428_, v_numIndices_3429_, v___x_3430_, v___x_3431_, v_numParams_3432_, v_snd_3433_, v_ism2_x27_3434_, v_x_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
lean_dec_ref(v_x_3435_);
lean_dec(v___x_3430_);
lean_dec(v_numIndices_3429_);
lean_dec_ref(v_val_3420_);
lean_dec_ref(v___x_3418_);
lean_dec_ref(v___x_3417_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object* v_motive_3447_, lean_object* v___x_3448_, uint8_t v___x_3449_, uint8_t v___x_3450_, uint8_t v___x_3451_, lean_object* v_is_3452_, lean_object* v___x_3453_, lean_object* v___x_3454_, lean_object* v___x_3455_, lean_object* v___x_3456_, lean_object* v_params_3457_, lean_object* v___x_3458_, lean_object* v___x_3459_, lean_object* v_heq_3460_, lean_object* v_val_3461_, lean_object* v_tail_3462_, lean_object* v_alts_3463_, size_t v_sz_3464_, size_t v___x_3465_, lean_object* v___x_3466_, lean_object* v___x_3467_, lean_object* v_declName_3468_, lean_object* v_levelParams_3469_, lean_object* v_numIndices_3470_, lean_object* v___x_3471_, lean_object* v___x_3472_, lean_object* v_numParams_3473_, lean_object* v_snd_3474_, lean_object* v___x_3475_, lean_object* v___x_3476_, lean_object* v_ism1_x27_3477_, lean_object* v_x_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_){
_start:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___f_3489_; lean_object* v___x_3490_; 
v___x_3484_ = lean_box(v___x_3449_);
v___x_3485_ = lean_box(v___x_3450_);
v___x_3486_ = lean_box(v___x_3451_);
v___x_3487_ = lean_box_usize(v_sz_3464_);
v___x_3488_ = lean_box_usize(v___x_3465_);
v___f_3489_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__3___boxed), 36, 29);
lean_closure_set(v___f_3489_, 0, v_motive_3447_);
lean_closure_set(v___f_3489_, 1, v___x_3448_);
lean_closure_set(v___f_3489_, 2, v___x_3484_);
lean_closure_set(v___f_3489_, 3, v___x_3485_);
lean_closure_set(v___f_3489_, 4, v___x_3486_);
lean_closure_set(v___f_3489_, 5, v_ism1_x27_3477_);
lean_closure_set(v___f_3489_, 6, v_is_3452_);
lean_closure_set(v___f_3489_, 7, v___x_3453_);
lean_closure_set(v___f_3489_, 8, v___x_3454_);
lean_closure_set(v___f_3489_, 9, v___x_3455_);
lean_closure_set(v___f_3489_, 10, v___x_3456_);
lean_closure_set(v___f_3489_, 11, v_params_3457_);
lean_closure_set(v___f_3489_, 12, v___x_3458_);
lean_closure_set(v___f_3489_, 13, v___x_3459_);
lean_closure_set(v___f_3489_, 14, v_heq_3460_);
lean_closure_set(v___f_3489_, 15, v_val_3461_);
lean_closure_set(v___f_3489_, 16, v_tail_3462_);
lean_closure_set(v___f_3489_, 17, v_alts_3463_);
lean_closure_set(v___f_3489_, 18, v___x_3487_);
lean_closure_set(v___f_3489_, 19, v___x_3488_);
lean_closure_set(v___f_3489_, 20, v___x_3466_);
lean_closure_set(v___f_3489_, 21, v___x_3467_);
lean_closure_set(v___f_3489_, 22, v_declName_3468_);
lean_closure_set(v___f_3489_, 23, v_levelParams_3469_);
lean_closure_set(v___f_3489_, 24, v_numIndices_3470_);
lean_closure_set(v___f_3489_, 25, v___x_3471_);
lean_closure_set(v___f_3489_, 26, v___x_3472_);
lean_closure_set(v___f_3489_, 27, v_numParams_3473_);
lean_closure_set(v___f_3489_, 28, v_snd_3474_);
v___x_3490_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3475_, v___x_3476_, v___f_3489_, v___x_3449_, v___x_3449_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object** _args){
lean_object* v_motive_3491_ = _args[0];
lean_object* v___x_3492_ = _args[1];
lean_object* v___x_3493_ = _args[2];
lean_object* v___x_3494_ = _args[3];
lean_object* v___x_3495_ = _args[4];
lean_object* v_is_3496_ = _args[5];
lean_object* v___x_3497_ = _args[6];
lean_object* v___x_3498_ = _args[7];
lean_object* v___x_3499_ = _args[8];
lean_object* v___x_3500_ = _args[9];
lean_object* v_params_3501_ = _args[10];
lean_object* v___x_3502_ = _args[11];
lean_object* v___x_3503_ = _args[12];
lean_object* v_heq_3504_ = _args[13];
lean_object* v_val_3505_ = _args[14];
lean_object* v_tail_3506_ = _args[15];
lean_object* v_alts_3507_ = _args[16];
lean_object* v_sz_3508_ = _args[17];
lean_object* v___x_3509_ = _args[18];
lean_object* v___x_3510_ = _args[19];
lean_object* v___x_3511_ = _args[20];
lean_object* v_declName_3512_ = _args[21];
lean_object* v_levelParams_3513_ = _args[22];
lean_object* v_numIndices_3514_ = _args[23];
lean_object* v___x_3515_ = _args[24];
lean_object* v___x_3516_ = _args[25];
lean_object* v_numParams_3517_ = _args[26];
lean_object* v_snd_3518_ = _args[27];
lean_object* v___x_3519_ = _args[28];
lean_object* v___x_3520_ = _args[29];
lean_object* v_ism1_x27_3521_ = _args[30];
lean_object* v_x_3522_ = _args[31];
lean_object* v___y_3523_ = _args[32];
lean_object* v___y_3524_ = _args[33];
lean_object* v___y_3525_ = _args[34];
lean_object* v___y_3526_ = _args[35];
lean_object* v___y_3527_ = _args[36];
_start:
{
uint8_t v___x_16766__boxed_3528_; uint8_t v___x_16767__boxed_3529_; uint8_t v___x_16768__boxed_3530_; size_t v_sz_boxed_3531_; size_t v___x_16777__boxed_3532_; lean_object* v_res_3533_; 
v___x_16766__boxed_3528_ = lean_unbox(v___x_3493_);
v___x_16767__boxed_3529_ = lean_unbox(v___x_3494_);
v___x_16768__boxed_3530_ = lean_unbox(v___x_3495_);
v_sz_boxed_3531_ = lean_unbox_usize(v_sz_3508_);
lean_dec(v_sz_3508_);
v___x_16777__boxed_3532_ = lean_unbox_usize(v___x_3509_);
lean_dec(v___x_3509_);
v_res_3533_ = l_Lean_mkCasesOnSameCtor___lam__4(v_motive_3491_, v___x_3492_, v___x_16766__boxed_3528_, v___x_16767__boxed_3529_, v___x_16768__boxed_3530_, v_is_3496_, v___x_3497_, v___x_3498_, v___x_3499_, v___x_3500_, v_params_3501_, v___x_3502_, v___x_3503_, v_heq_3504_, v_val_3505_, v_tail_3506_, v_alts_3507_, v_sz_boxed_3531_, v___x_16777__boxed_3532_, v___x_3510_, v___x_3511_, v_declName_3512_, v_levelParams_3513_, v_numIndices_3514_, v___x_3515_, v___x_3516_, v_numParams_3517_, v_snd_3518_, v___x_3519_, v___x_3520_, v_ism1_x27_3521_, v_x_3522_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec_ref(v_x_3522_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object* v_numIndices_3534_, lean_object* v___x_3535_, lean_object* v_motive_3536_, lean_object* v___x_3537_, uint8_t v___x_3538_, uint8_t v___x_3539_, uint8_t v___x_3540_, lean_object* v_is_3541_, lean_object* v___x_3542_, lean_object* v___x_3543_, lean_object* v___x_3544_, lean_object* v___x_3545_, lean_object* v_params_3546_, lean_object* v___x_3547_, lean_object* v___x_3548_, lean_object* v_heq_3549_, lean_object* v_val_3550_, lean_object* v_tail_3551_, size_t v_sz_3552_, size_t v___x_3553_, lean_object* v___x_3554_, lean_object* v___x_3555_, lean_object* v_declName_3556_, lean_object* v_levelParams_3557_, lean_object* v___x_3558_, lean_object* v___x_3559_, lean_object* v_numParams_3560_, lean_object* v_snd_3561_, lean_object* v___x_3562_, lean_object* v_alts_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___f_3576_; lean_object* v___x_3577_; 
v___x_3569_ = lean_nat_add(v_numIndices_3534_, v___x_3535_);
v___x_3570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
v___x_3571_ = lean_box(v___x_3538_);
v___x_3572_ = lean_box(v___x_3539_);
v___x_3573_ = lean_box(v___x_3540_);
v___x_3574_ = lean_box_usize(v_sz_3552_);
v___x_3575_ = lean_box_usize(v___x_3553_);
lean_inc_ref(v___x_3570_);
lean_inc_ref(v___x_3562_);
v___f_3576_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__4___boxed), 37, 30);
lean_closure_set(v___f_3576_, 0, v_motive_3536_);
lean_closure_set(v___f_3576_, 1, v___x_3537_);
lean_closure_set(v___f_3576_, 2, v___x_3571_);
lean_closure_set(v___f_3576_, 3, v___x_3572_);
lean_closure_set(v___f_3576_, 4, v___x_3573_);
lean_closure_set(v___f_3576_, 5, v_is_3541_);
lean_closure_set(v___f_3576_, 6, v___x_3542_);
lean_closure_set(v___f_3576_, 7, v___x_3543_);
lean_closure_set(v___f_3576_, 8, v___x_3544_);
lean_closure_set(v___f_3576_, 9, v___x_3545_);
lean_closure_set(v___f_3576_, 10, v_params_3546_);
lean_closure_set(v___f_3576_, 11, v___x_3547_);
lean_closure_set(v___f_3576_, 12, v___x_3548_);
lean_closure_set(v___f_3576_, 13, v_heq_3549_);
lean_closure_set(v___f_3576_, 14, v_val_3550_);
lean_closure_set(v___f_3576_, 15, v_tail_3551_);
lean_closure_set(v___f_3576_, 16, v_alts_3563_);
lean_closure_set(v___f_3576_, 17, v___x_3574_);
lean_closure_set(v___f_3576_, 18, v___x_3575_);
lean_closure_set(v___f_3576_, 19, v___x_3554_);
lean_closure_set(v___f_3576_, 20, v___x_3555_);
lean_closure_set(v___f_3576_, 21, v_declName_3556_);
lean_closure_set(v___f_3576_, 22, v_levelParams_3557_);
lean_closure_set(v___f_3576_, 23, v_numIndices_3534_);
lean_closure_set(v___f_3576_, 24, v___x_3558_);
lean_closure_set(v___f_3576_, 25, v___x_3559_);
lean_closure_set(v___f_3576_, 26, v_numParams_3560_);
lean_closure_set(v___f_3576_, 27, v_snd_3561_);
lean_closure_set(v___f_3576_, 28, v___x_3562_);
lean_closure_set(v___f_3576_, 29, v___x_3570_);
v___x_3577_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3562_, v___x_3570_, v___f_3576_, v___x_3538_, v___x_3538_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_);
return v___x_3577_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_3578_ = _args[0];
lean_object* v___x_3579_ = _args[1];
lean_object* v_motive_3580_ = _args[2];
lean_object* v___x_3581_ = _args[3];
lean_object* v___x_3582_ = _args[4];
lean_object* v___x_3583_ = _args[5];
lean_object* v___x_3584_ = _args[6];
lean_object* v_is_3585_ = _args[7];
lean_object* v___x_3586_ = _args[8];
lean_object* v___x_3587_ = _args[9];
lean_object* v___x_3588_ = _args[10];
lean_object* v___x_3589_ = _args[11];
lean_object* v_params_3590_ = _args[12];
lean_object* v___x_3591_ = _args[13];
lean_object* v___x_3592_ = _args[14];
lean_object* v_heq_3593_ = _args[15];
lean_object* v_val_3594_ = _args[16];
lean_object* v_tail_3595_ = _args[17];
lean_object* v_sz_3596_ = _args[18];
lean_object* v___x_3597_ = _args[19];
lean_object* v___x_3598_ = _args[20];
lean_object* v___x_3599_ = _args[21];
lean_object* v_declName_3600_ = _args[22];
lean_object* v_levelParams_3601_ = _args[23];
lean_object* v___x_3602_ = _args[24];
lean_object* v___x_3603_ = _args[25];
lean_object* v_numParams_3604_ = _args[26];
lean_object* v_snd_3605_ = _args[27];
lean_object* v___x_3606_ = _args[28];
lean_object* v_alts_3607_ = _args[29];
lean_object* v___y_3608_ = _args[30];
lean_object* v___y_3609_ = _args[31];
lean_object* v___y_3610_ = _args[32];
lean_object* v___y_3611_ = _args[33];
lean_object* v___y_3612_ = _args[34];
_start:
{
uint8_t v___x_16859__boxed_3613_; uint8_t v___x_16860__boxed_3614_; uint8_t v___x_16861__boxed_3615_; size_t v_sz_boxed_3616_; size_t v___x_16870__boxed_3617_; lean_object* v_res_3618_; 
v___x_16859__boxed_3613_ = lean_unbox(v___x_3582_);
v___x_16860__boxed_3614_ = lean_unbox(v___x_3583_);
v___x_16861__boxed_3615_ = lean_unbox(v___x_3584_);
v_sz_boxed_3616_ = lean_unbox_usize(v_sz_3596_);
lean_dec(v_sz_3596_);
v___x_16870__boxed_3617_ = lean_unbox_usize(v___x_3597_);
lean_dec(v___x_3597_);
v_res_3618_ = l_Lean_mkCasesOnSameCtor___lam__5(v_numIndices_3578_, v___x_3579_, v_motive_3580_, v___x_3581_, v___x_16859__boxed_3613_, v___x_16860__boxed_3614_, v___x_16861__boxed_3615_, v_is_3585_, v___x_3586_, v___x_3587_, v___x_3588_, v___x_3589_, v_params_3590_, v___x_3591_, v___x_3592_, v_heq_3593_, v_val_3594_, v_tail_3595_, v_sz_boxed_3616_, v___x_16870__boxed_3617_, v___x_3598_, v___x_3599_, v_declName_3600_, v_levelParams_3601_, v___x_3602_, v___x_3603_, v_numParams_3604_, v_snd_3605_, v___x_3606_, v_alts_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_);
lean_dec(v___y_3611_);
lean_dec_ref(v___y_3610_);
lean_dec(v___y_3609_);
lean_dec_ref(v___y_3608_);
lean_dec(v___x_3579_);
return v_res_3618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object* v_acc_3619_, lean_object* v_declInfos_3620_, lean_object* v_k_3621_, lean_object* v_kind_3622_, lean_object* v_x_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
uint8_t v_kind_boxed_3629_; lean_object* v_res_3630_; 
v_kind_boxed_3629_ = lean_unbox(v_kind_3622_);
v_res_3630_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(v_acc_3619_, v_declInfos_3620_, v_k_3621_, v_kind_boxed_3629_, v_x_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_);
lean_dec(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec(v___y_3625_);
lean_dec_ref(v___y_3624_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object* v_declInfos_3631_, lean_object* v_k_3632_, uint8_t v_kind_3633_, lean_object* v_acc_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_){
_start:
{
lean_object* v___x_3640_; lean_object* v_toApplicative_3641_; lean_object* v_toFunctor_3642_; lean_object* v_toSeq_3643_; lean_object* v_toSeqLeft_3644_; lean_object* v_toSeqRight_3645_; lean_object* v___f_3646_; lean_object* v___f_3647_; lean_object* v___f_3648_; lean_object* v___f_3649_; lean_object* v___x_3650_; lean_object* v___f_3651_; lean_object* v___f_3652_; lean_object* v___f_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v_toApplicative_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3715_; 
v___x_3640_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__11);
v_toApplicative_3641_ = lean_ctor_get(v___x_3640_, 0);
v_toFunctor_3642_ = lean_ctor_get(v_toApplicative_3641_, 0);
v_toSeq_3643_ = lean_ctor_get(v_toApplicative_3641_, 2);
v_toSeqLeft_3644_ = lean_ctor_get(v_toApplicative_3641_, 3);
v_toSeqRight_3645_ = lean_ctor_get(v_toApplicative_3641_, 4);
v___f_3646_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__12));
v___f_3647_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__13));
lean_inc_ref_n(v_toFunctor_3642_, 2);
v___f_3648_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3648_, 0, v_toFunctor_3642_);
v___f_3649_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3649_, 0, v_toFunctor_3642_);
v___x_3650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___f_3648_);
lean_ctor_set(v___x_3650_, 1, v___f_3649_);
lean_inc(v_toSeqRight_3645_);
v___f_3651_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3651_, 0, v_toSeqRight_3645_);
lean_inc(v_toSeqLeft_3644_);
v___f_3652_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3652_, 0, v_toSeqLeft_3644_);
lean_inc(v_toSeq_3643_);
v___f_3653_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3653_, 0, v_toSeq_3643_);
v___x_3654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3654_, 0, v___x_3650_);
lean_ctor_set(v___x_3654_, 1, v___f_3646_);
lean_ctor_set(v___x_3654_, 2, v___f_3653_);
lean_ctor_set(v___x_3654_, 3, v___f_3652_);
lean_ctor_set(v___x_3654_, 4, v___f_3651_);
v___x_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3654_);
lean_ctor_set(v___x_3655_, 1, v___f_3647_);
v___x_3656_ = l_StateRefT_x27_instMonad___redArg(v___x_3655_);
v_toApplicative_3657_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3715_ == 0)
{
lean_object* v_unused_3716_; 
v_unused_3716_ = lean_ctor_get(v___x_3656_, 1);
lean_dec(v_unused_3716_);
v___x_3659_ = v___x_3656_;
v_isShared_3660_ = v_isSharedCheck_3715_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_toApplicative_3657_);
lean_dec(v___x_3656_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3715_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v_toFunctor_3661_; lean_object* v_toSeq_3662_; lean_object* v_toSeqLeft_3663_; lean_object* v_toSeqRight_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3713_; 
v_toFunctor_3661_ = lean_ctor_get(v_toApplicative_3657_, 0);
v_toSeq_3662_ = lean_ctor_get(v_toApplicative_3657_, 2);
v_toSeqLeft_3663_ = lean_ctor_get(v_toApplicative_3657_, 3);
v_toSeqRight_3664_ = lean_ctor_get(v_toApplicative_3657_, 4);
v_isSharedCheck_3713_ = !lean_is_exclusive(v_toApplicative_3657_);
if (v_isSharedCheck_3713_ == 0)
{
lean_object* v_unused_3714_; 
v_unused_3714_ = lean_ctor_get(v_toApplicative_3657_, 1);
lean_dec(v_unused_3714_);
v___x_3666_ = v_toApplicative_3657_;
v_isShared_3667_ = v_isSharedCheck_3713_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_toSeqRight_3664_);
lean_inc(v_toSeqLeft_3663_);
lean_inc(v_toSeq_3662_);
lean_inc(v_toFunctor_3661_);
lean_dec(v_toApplicative_3657_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3713_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___f_3668_; lean_object* v___f_3669_; lean_object* v___f_3670_; lean_object* v___f_3671_; lean_object* v___x_3672_; lean_object* v___f_3673_; lean_object* v___f_3674_; lean_object* v___f_3675_; lean_object* v___x_3677_; 
v___f_3668_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__14));
v___f_3669_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__15));
lean_inc_ref(v_toFunctor_3661_);
v___f_3670_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3670_, 0, v_toFunctor_3661_);
v___f_3671_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3671_, 0, v_toFunctor_3661_);
v___x_3672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3672_, 0, v___f_3670_);
lean_ctor_set(v___x_3672_, 1, v___f_3671_);
v___f_3673_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3673_, 0, v_toSeqRight_3664_);
v___f_3674_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3674_, 0, v_toSeqLeft_3663_);
v___f_3675_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3675_, 0, v_toSeq_3662_);
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 4, v___f_3673_);
lean_ctor_set(v___x_3666_, 3, v___f_3674_);
lean_ctor_set(v___x_3666_, 2, v___f_3675_);
lean_ctor_set(v___x_3666_, 1, v___f_3668_);
lean_ctor_set(v___x_3666_, 0, v___x_3672_);
v___x_3677_ = v___x_3666_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3672_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v___f_3668_);
lean_ctor_set(v_reuseFailAlloc_3712_, 2, v___f_3675_);
lean_ctor_set(v_reuseFailAlloc_3712_, 3, v___f_3674_);
lean_ctor_set(v_reuseFailAlloc_3712_, 4, v___f_3673_);
v___x_3677_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
lean_object* v___x_3679_; 
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 1, v___f_3669_);
lean_ctor_set(v___x_3659_, 0, v___x_3677_);
v___x_3679_ = v___x_3659_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3677_);
lean_ctor_set(v_reuseFailAlloc_3711_, 1, v___f_3669_);
v___x_3679_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
lean_object* v___x_3680_; lean_object* v___x_3681_; uint8_t v___x_3682_; 
v___x_3680_ = lean_array_get_size(v_acc_3634_);
v___x_3681_ = lean_array_get_size(v_declInfos_3631_);
v___x_3682_ = lean_nat_dec_lt(v___x_3680_, v___x_3681_);
if (v___x_3682_ == 0)
{
lean_object* v___x_3683_; 
lean_dec_ref(v___x_3679_);
lean_dec_ref(v_declInfos_3631_);
lean_inc(v___y_3638_);
lean_inc_ref(v___y_3637_);
lean_inc(v___y_3636_);
lean_inc_ref(v___y_3635_);
v___x_3683_ = lean_apply_6(v_k_3632_, v_acc_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_, lean_box(0));
return v___x_3683_;
}
else
{
lean_object* v___x_3684_; uint8_t v___x_3685_; lean_object* v___x_3686_; lean_object* v___f_3687_; lean_object* v___f_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v_snd_3693_; lean_object* v_fst_3694_; lean_object* v_fst_3695_; lean_object* v_snd_3696_; lean_object* v___x_3697_; lean_object* v___f_3698_; lean_object* v___x_3699_; 
v___x_3684_ = lean_box(0);
v___x_3685_ = 0;
v___x_3686_ = l_Lean_instInhabitedExpr;
v___f_3687_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3687_, 0, v___x_3679_);
lean_closure_set(v___f_3687_, 1, v___x_3686_);
v___f_3688_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3688_, 0, v___f_3687_);
v___x_3689_ = lean_box(v___x_3685_);
v___x_3690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3689_);
lean_ctor_set(v___x_3690_, 1, v___f_3688_);
v___x_3691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3684_);
lean_ctor_set(v___x_3691_, 1, v___x_3690_);
v___x_3692_ = lean_array_get(v___x_3691_, v_declInfos_3631_, v___x_3680_);
lean_dec_ref_known(v___x_3691_, 2);
v_snd_3693_ = lean_ctor_get(v___x_3692_, 1);
lean_inc(v_snd_3693_);
v_fst_3694_ = lean_ctor_get(v___x_3692_, 0);
lean_inc(v_fst_3694_);
lean_dec(v___x_3692_);
v_fst_3695_ = lean_ctor_get(v_snd_3693_, 0);
lean_inc(v_fst_3695_);
v_snd_3696_ = lean_ctor_get(v_snd_3693_, 1);
lean_inc(v_snd_3696_);
lean_dec(v_snd_3693_);
v___x_3697_ = lean_box(v_kind_3633_);
lean_inc_ref(v_acc_3634_);
v___f_3698_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3698_, 0, v_acc_3634_);
lean_closure_set(v___f_3698_, 1, v_declInfos_3631_);
lean_closure_set(v___f_3698_, 2, v_k_3632_);
lean_closure_set(v___f_3698_, 3, v___x_3697_);
lean_inc(v___y_3638_);
lean_inc_ref(v___y_3637_);
lean_inc(v___y_3636_);
lean_inc_ref(v___y_3635_);
v___x_3699_ = lean_apply_6(v_snd_3696_, v_acc_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_, lean_box(0));
if (lean_obj_tag(v___x_3699_) == 0)
{
lean_object* v_a_3700_; uint8_t v___x_3701_; lean_object* v___x_3702_; 
v_a_3700_ = lean_ctor_get(v___x_3699_, 0);
lean_inc(v_a_3700_);
lean_dec_ref_known(v___x_3699_, 1);
v___x_3701_ = lean_unbox(v_fst_3695_);
lean_dec(v_fst_3695_);
v___x_3702_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_3694_, v___x_3701_, v_a_3700_, v___f_3698_, v_kind_3633_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
return v___x_3702_;
}
else
{
lean_object* v_a_3703_; lean_object* v___x_3705_; uint8_t v_isShared_3706_; uint8_t v_isSharedCheck_3710_; 
lean_dec_ref(v___f_3698_);
lean_dec(v_fst_3695_);
lean_dec(v_fst_3694_);
v_a_3703_ = lean_ctor_get(v___x_3699_, 0);
v_isSharedCheck_3710_ = !lean_is_exclusive(v___x_3699_);
if (v_isSharedCheck_3710_ == 0)
{
v___x_3705_ = v___x_3699_;
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
else
{
lean_inc(v_a_3703_);
lean_dec(v___x_3699_);
v___x_3705_ = lean_box(0);
v_isShared_3706_ = v_isSharedCheck_3710_;
goto v_resetjp_3704_;
}
v_resetjp_3704_:
{
lean_object* v___x_3708_; 
if (v_isShared_3706_ == 0)
{
v___x_3708_ = v___x_3705_;
goto v_reusejp_3707_;
}
else
{
lean_object* v_reuseFailAlloc_3709_; 
v_reuseFailAlloc_3709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3709_, 0, v_a_3703_);
v___x_3708_ = v_reuseFailAlloc_3709_;
goto v_reusejp_3707_;
}
v_reusejp_3707_:
{
return v___x_3708_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object* v_acc_3717_, lean_object* v_declInfos_3718_, lean_object* v_k_3719_, uint8_t v_kind_3720_, lean_object* v_x_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; 
v___x_3727_ = lean_array_push(v_acc_3717_, v_x_3721_);
v___x_3728_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3718_, v_k_3719_, v_kind_3720_, v___x_3727_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_);
return v___x_3728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object* v_declInfos_3729_, lean_object* v_k_3730_, lean_object* v_kind_3731_, lean_object* v_acc_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_){
_start:
{
uint8_t v_kind_boxed_3738_; lean_object* v_res_3739_; 
v_kind_boxed_3738_ = lean_unbox(v_kind_3731_);
v_res_3739_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3729_, v_k_3730_, v_kind_boxed_3738_, v_acc_3732_, v___y_3733_, v___y_3734_, v___y_3735_, v___y_3736_);
lean_dec(v___y_3736_);
lean_dec_ref(v___y_3735_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
return v_res_3739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object* v_declInfos_3740_, lean_object* v_k_3741_, uint8_t v_kind_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; 
v___x_3748_ = ((lean_object*)(l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0));
v___x_3749_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3740_, v_k_3741_, v_kind_3742_, v___x_3748_, v___y_3743_, v___y_3744_, v___y_3745_, v___y_3746_);
return v___x_3749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object* v_declInfos_3750_, lean_object* v_k_3751_, lean_object* v_kind_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_){
_start:
{
uint8_t v_kind_boxed_3758_; lean_object* v_res_3759_; 
v_kind_boxed_3758_ = lean_unbox(v_kind_3752_);
v_res_3759_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v_declInfos_3750_, v_k_3751_, v_kind_boxed_3758_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_);
lean_dec(v___y_3756_);
lean_dec_ref(v___y_3755_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object* v_declInfos_3760_, lean_object* v_k_3761_, uint8_t v_kind_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
size_t v_sz_3768_; size_t v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v_sz_3768_ = lean_array_size(v_declInfos_3760_);
v___x_3769_ = ((size_t)0ULL);
v___x_3770_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_3768_, v___x_3769_, v_declInfos_3760_);
v___x_3771_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v___x_3770_, v_k_3761_, v_kind_3762_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_);
return v___x_3771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object* v_declInfos_3772_, lean_object* v_k_3773_, lean_object* v_kind_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_){
_start:
{
uint8_t v_kind_boxed_3780_; lean_object* v_res_3781_; 
v_kind_boxed_3780_ = lean_unbox(v_kind_3774_);
v_res_3781_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v_declInfos_3772_, v_k_3773_, v_kind_boxed_3780_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_);
lean_dec(v___y_3778_);
lean_dec_ref(v___y_3777_);
lean_dec(v___y_3776_);
lean_dec_ref(v___y_3775_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object* v_declInfos_3782_, lean_object* v_k_3783_, uint8_t v_kind_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
size_t v_sz_3790_; size_t v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
v_sz_3790_ = lean_array_size(v_declInfos_3782_);
v___x_3791_ = ((size_t)0ULL);
v___x_3792_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_3790_, v___x_3791_, v_declInfos_3782_);
v___x_3793_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v___x_3792_, v_k_3783_, v_kind_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_);
return v___x_3793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object* v_declInfos_3794_, lean_object* v_k_3795_, lean_object* v_kind_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_){
_start:
{
uint8_t v_kind_boxed_3802_; lean_object* v_res_3803_; 
v_kind_boxed_3802_ = lean_unbox(v_kind_3796_);
v_res_3803_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_declInfos_3794_, v_k_3795_, v_kind_boxed_3802_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_);
lean_dec(v___y_3800_);
lean_dec_ref(v___y_3799_);
lean_dec(v___y_3798_);
lean_dec_ref(v___y_3797_);
return v_res_3803_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
v___x_3806_ = lean_box(0);
v___x_3807_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0));
v___x_3808_ = l_Lean_mkConst(v___x_3807_, v___x_3806_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object* v___x_3809_, lean_object* v_v_3810_, lean_object* v___x_3811_, lean_object* v___x_3812_, lean_object* v___x_3813_, lean_object* v_motive_3814_, uint8_t v___x_3815_, uint8_t v___x_3816_, uint8_t v___x_3817_, lean_object* v_zs12_3818_, lean_object* v_is_3819_, lean_object* v_fields1_3820_, lean_object* v_fields2_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_){
_start:
{
lean_object* v___y_3828_; lean_object* v___y_3829_; lean_object* v_e_3837_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; 
lean_inc_ref(v___x_3813_);
v___x_3847_ = l_Lean_mkAppN(v___x_3813_, v_fields1_3820_);
v___x_3848_ = l_Lean_mkAppN(v___x_3813_, v_fields2_3821_);
lean_inc(v___x_3811_);
v___x_3849_ = l_Lean_mkNatLit(v___x_3811_);
v___x_3850_ = l_Lean_Meta_mkEqRefl(v___x_3849_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_);
if (lean_obj_tag(v___x_3850_) == 0)
{
lean_object* v_a_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; 
v_a_3851_ = lean_ctor_get(v___x_3850_, 0);
lean_inc(v_a_3851_);
lean_dec_ref_known(v___x_3850_, 1);
v___x_3852_ = lean_unsigned_to_nat(3u);
v___x_3853_ = lean_mk_empty_array_with_capacity(v___x_3852_);
v___x_3854_ = lean_array_push(v___x_3853_, v___x_3847_);
v___x_3855_ = lean_array_push(v___x_3854_, v___x_3848_);
v___x_3856_ = lean_array_push(v___x_3855_, v_a_3851_);
v___x_3857_ = l_Array_append___redArg(v_is_3819_, v___x_3856_);
lean_dec_ref(v___x_3856_);
v___x_3858_ = l_Lean_mkAppN(v_motive_3814_, v___x_3857_);
lean_dec_ref(v___x_3857_);
v___x_3859_ = l_Lean_Meta_mkForallFVars(v_zs12_3818_, v___x_3858_, v___x_3815_, v___x_3816_, v___x_3816_, v___x_3817_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_);
if (lean_obj_tag(v___x_3859_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3861_; uint8_t v___x_3862_; 
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
lean_inc(v_a_3860_);
lean_dec_ref_known(v___x_3859_, 1);
v___x_3861_ = lean_array_get_size(v_zs12_3818_);
v___x_3862_ = lean_nat_dec_eq(v___x_3861_, v___x_3809_);
if (v___x_3862_ == 0)
{
v_e_3837_ = v_a_3860_;
goto v___jp_3836_;
}
else
{
lean_object* v___x_3863_; lean_object* v___x_3864_; 
v___x_3863_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1);
v___x_3864_ = l_Lean_mkArrow(v___x_3863_, v_a_3860_, v___y_3824_, v___y_3825_);
if (lean_obj_tag(v___x_3864_) == 0)
{
lean_object* v_a_3865_; 
v_a_3865_ = lean_ctor_get(v___x_3864_, 0);
lean_inc(v_a_3865_);
lean_dec_ref_known(v___x_3864_, 1);
v_e_3837_ = v_a_3865_;
goto v___jp_3836_;
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
lean_dec(v___x_3811_);
lean_dec(v_v_3810_);
lean_dec(v___x_3809_);
v_a_3866_ = lean_ctor_get(v___x_3864_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3864_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3864_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3864_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
lean_dec(v___x_3811_);
lean_dec(v_v_3810_);
lean_dec(v___x_3809_);
v_a_3874_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3859_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3859_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
else
{
lean_object* v_a_3882_; lean_object* v___x_3884_; uint8_t v_isShared_3885_; uint8_t v_isSharedCheck_3889_; 
lean_dec_ref(v___x_3848_);
lean_dec_ref(v___x_3847_);
lean_dec_ref(v_is_3819_);
lean_dec_ref(v_motive_3814_);
lean_dec(v___x_3811_);
lean_dec(v_v_3810_);
lean_dec(v___x_3809_);
v_a_3882_ = lean_ctor_get(v___x_3850_, 0);
v_isSharedCheck_3889_ = !lean_is_exclusive(v___x_3850_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3884_ = v___x_3850_;
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
else
{
lean_inc(v_a_3882_);
lean_dec(v___x_3850_);
v___x_3884_ = lean_box(0);
v_isShared_3885_ = v_isSharedCheck_3889_;
goto v_resetjp_3883_;
}
v_resetjp_3883_:
{
lean_object* v___x_3887_; 
if (v_isShared_3885_ == 0)
{
v___x_3887_ = v___x_3884_;
goto v_reusejp_3886_;
}
else
{
lean_object* v_reuseFailAlloc_3888_; 
v_reuseFailAlloc_3888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3888_, 0, v_a_3882_);
v___x_3887_ = v_reuseFailAlloc_3888_;
goto v_reusejp_3886_;
}
v_reusejp_3886_:
{
return v___x_3887_;
}
}
}
v___jp_3827_:
{
lean_object* v___x_3830_; uint8_t v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3830_ = lean_array_get_size(v_zs12_3818_);
v___x_3831_ = lean_nat_dec_eq(v___x_3830_, v___x_3809_);
v___x_3832_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3832_, 0, v___x_3830_);
lean_ctor_set(v___x_3832_, 1, v___x_3809_);
lean_ctor_set_uint8(v___x_3832_, sizeof(void*)*2, v___x_3831_);
v___x_3833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3833_, 0, v___y_3829_);
lean_ctor_set(v___x_3833_, 1, v___y_3828_);
v___x_3834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3834_, 0, v___x_3833_);
lean_ctor_set(v___x_3834_, 1, v___x_3832_);
v___x_3835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3834_);
return v___x_3835_;
}
v___jp_3836_:
{
if (lean_obj_tag(v_v_3810_) == 1)
{
lean_object* v_str_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; 
lean_dec(v___x_3811_);
v_str_3838_ = lean_ctor_get(v_v_3810_, 1);
lean_inc_ref(v_str_3838_);
lean_dec_ref_known(v_v_3810_, 2);
v___x_3839_ = lean_box(0);
v___x_3840_ = l_Lean_Name_str___override(v___x_3839_, v_str_3838_);
v___y_3828_ = v_e_3837_;
v___y_3829_ = v___x_3840_;
goto v___jp_3827_;
}
else
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
lean_dec(v_v_3810_);
v___x_3841_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0));
v___x_3842_ = lean_nat_add(v___x_3811_, v___x_3812_);
lean_dec(v___x_3811_);
v___x_3843_ = l_Nat_reprFast(v___x_3842_);
v___x_3844_ = lean_string_append(v___x_3841_, v___x_3843_);
lean_dec_ref(v___x_3843_);
v___x_3845_ = lean_box(0);
v___x_3846_ = l_Lean_Name_str___override(v___x_3845_, v___x_3844_);
v___y_3828_ = v_e_3837_;
v___y_3829_ = v___x_3846_;
goto v___jp_3827_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3890_ = _args[0];
lean_object* v_v_3891_ = _args[1];
lean_object* v___x_3892_ = _args[2];
lean_object* v___x_3893_ = _args[3];
lean_object* v___x_3894_ = _args[4];
lean_object* v_motive_3895_ = _args[5];
lean_object* v___x_3896_ = _args[6];
lean_object* v___x_3897_ = _args[7];
lean_object* v___x_3898_ = _args[8];
lean_object* v_zs12_3899_ = _args[9];
lean_object* v_is_3900_ = _args[10];
lean_object* v_fields1_3901_ = _args[11];
lean_object* v_fields2_3902_ = _args[12];
lean_object* v___y_3903_ = _args[13];
lean_object* v___y_3904_ = _args[14];
lean_object* v___y_3905_ = _args[15];
lean_object* v___y_3906_ = _args[16];
lean_object* v___y_3907_ = _args[17];
_start:
{
uint8_t v___x_17238__boxed_3908_; uint8_t v___x_17239__boxed_3909_; uint8_t v___x_17240__boxed_3910_; lean_object* v_res_3911_; 
v___x_17238__boxed_3908_ = lean_unbox(v___x_3896_);
v___x_17239__boxed_3909_ = lean_unbox(v___x_3897_);
v___x_17240__boxed_3910_ = lean_unbox(v___x_3898_);
v_res_3911_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(v___x_3890_, v_v_3891_, v___x_3892_, v___x_3893_, v___x_3894_, v_motive_3895_, v___x_17238__boxed_3908_, v___x_17239__boxed_3909_, v___x_17240__boxed_3910_, v_zs12_3899_, v_is_3900_, v_fields1_3901_, v_fields2_3902_, v___y_3903_, v___y_3904_, v___y_3905_, v___y_3906_);
lean_dec(v___y_3906_);
lean_dec_ref(v___y_3905_);
lean_dec(v___y_3904_);
lean_dec_ref(v___y_3903_);
lean_dec_ref(v_fields2_3902_);
lean_dec_ref(v_fields1_3901_);
lean_dec_ref(v_zs12_3899_);
lean_dec(v___x_3893_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object* v_tail_3912_, lean_object* v_params_3913_, lean_object* v_motive_3914_, size_t v_sz_3915_, size_t v_i_3916_, lean_object* v_bs_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
uint8_t v___x_3923_; 
v___x_3923_ = lean_usize_dec_lt(v_i_3916_, v_sz_3915_);
if (v___x_3923_ == 0)
{
lean_object* v___x_3924_; 
lean_dec_ref(v_motive_3914_);
lean_dec(v_tail_3912_);
v___x_3924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3924_, 0, v_bs_3917_);
return v___x_3924_;
}
else
{
lean_object* v___x_3925_; lean_object* v___x_3926_; uint8_t v___x_3927_; uint8_t v___x_3928_; lean_object* v_v_3929_; lean_object* v_bs_x27_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; lean_object* v___f_3937_; lean_object* v___x_3938_; 
v___x_3925_ = lean_unsigned_to_nat(0u);
v___x_3926_ = lean_unsigned_to_nat(1u);
v___x_3927_ = 0;
v___x_3928_ = 1;
v_v_3929_ = lean_array_uget(v_bs_3917_, v_i_3916_);
v_bs_x27_3930_ = lean_array_uset(v_bs_3917_, v_i_3916_, v___x_3925_);
v___x_3931_ = lean_usize_to_nat(v_i_3916_);
lean_inc(v_tail_3912_);
lean_inc(v_v_3929_);
v___x_3932_ = l_Lean_mkConst(v_v_3929_, v_tail_3912_);
v___x_3933_ = l_Lean_mkAppN(v___x_3932_, v_params_3913_);
v___x_3934_ = lean_box(v___x_3927_);
v___x_3935_ = lean_box(v___x_3923_);
v___x_3936_ = lean_box(v___x_3928_);
lean_inc_ref(v_motive_3914_);
lean_inc_ref(v___x_3933_);
v___f_3937_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed), 18, 9);
lean_closure_set(v___f_3937_, 0, v___x_3925_);
lean_closure_set(v___f_3937_, 1, v_v_3929_);
lean_closure_set(v___f_3937_, 2, v___x_3931_);
lean_closure_set(v___f_3937_, 3, v___x_3926_);
lean_closure_set(v___f_3937_, 4, v___x_3933_);
lean_closure_set(v___f_3937_, 5, v_motive_3914_);
lean_closure_set(v___f_3937_, 6, v___x_3934_);
lean_closure_set(v___f_3937_, 7, v___x_3935_);
lean_closure_set(v___f_3937_, 8, v___x_3936_);
v___x_3938_ = l_Lean_Meta_withSharedCtorIndices___redArg(v___x_3933_, v___f_3937_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_);
if (lean_obj_tag(v___x_3938_) == 0)
{
lean_object* v_a_3939_; size_t v___x_3940_; size_t v___x_3941_; lean_object* v___x_3942_; 
v_a_3939_ = lean_ctor_get(v___x_3938_, 0);
lean_inc(v_a_3939_);
lean_dec_ref_known(v___x_3938_, 1);
v___x_3940_ = ((size_t)1ULL);
v___x_3941_ = lean_usize_add(v_i_3916_, v___x_3940_);
v___x_3942_ = lean_array_uset(v_bs_x27_3930_, v_i_3916_, v_a_3939_);
v_i_3916_ = v___x_3941_;
v_bs_3917_ = v___x_3942_;
goto _start;
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
lean_dec_ref(v_bs_x27_3930_);
lean_dec_ref(v_motive_3914_);
lean_dec(v_tail_3912_);
v_a_3944_ = lean_ctor_get(v___x_3938_, 0);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3938_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3938_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_dec(v___x_3938_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object* v_tail_3952_, lean_object* v_params_3953_, lean_object* v_motive_3954_, lean_object* v_sz_3955_, lean_object* v_i_3956_, lean_object* v_bs_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_){
_start:
{
size_t v_sz_boxed_3963_; size_t v_i_boxed_3964_; lean_object* v_res_3965_; 
v_sz_boxed_3963_ = lean_unbox_usize(v_sz_3955_);
lean_dec(v_sz_3955_);
v_i_boxed_3964_ = lean_unbox_usize(v_i_3956_);
lean_dec(v_i_3956_);
v_res_3965_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_3952_, v_params_3953_, v_motive_3954_, v_sz_boxed_3963_, v_i_boxed_3964_, v_bs_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec_ref(v_params_3953_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object* v_ctors_3968_, lean_object* v_tail_3969_, lean_object* v_params_3970_, lean_object* v_numIndices_3971_, lean_object* v___x_3972_, lean_object* v___x_3973_, uint8_t v___x_3974_, uint8_t v___x_3975_, uint8_t v___x_3976_, lean_object* v_is_3977_, lean_object* v___x_3978_, lean_object* v___x_3979_, lean_object* v___x_3980_, lean_object* v___x_3981_, lean_object* v___x_3982_, lean_object* v___x_3983_, lean_object* v_heq_3984_, lean_object* v_val_3985_, lean_object* v___x_3986_, lean_object* v_declName_3987_, lean_object* v_levelParams_3988_, lean_object* v___x_3989_, lean_object* v___x_3990_, lean_object* v_numParams_3991_, lean_object* v___x_3992_, lean_object* v_motive_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v___x_3999_; size_t v_sz_4000_; size_t v___x_4001_; lean_object* v___x_4002_; 
v___x_3999_ = lean_array_mk(v_ctors_3968_);
v_sz_4000_ = lean_array_size(v___x_3999_);
v___x_4001_ = ((size_t)0ULL);
lean_inc_ref(v___x_3999_);
lean_inc_ref(v_motive_3993_);
lean_inc(v_tail_3969_);
v___x_4002_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_3969_, v_params_3970_, v_motive_3993_, v_sz_4000_, v___x_4001_, v___x_3999_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
if (lean_obj_tag(v___x_4002_) == 0)
{
lean_object* v_a_4003_; lean_object* v___x_4004_; lean_object* v_fst_4005_; lean_object* v_snd_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___f_4012_; uint8_t v___x_4013_; lean_object* v___x_4014_; 
v_a_4003_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_a_4003_);
lean_dec_ref_known(v___x_4002_, 1);
v___x_4004_ = l_Array_unzip___redArg(v_a_4003_);
lean_dec(v_a_4003_);
v_fst_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_fst_4005_);
v_snd_4006_ = lean_ctor_get(v___x_4004_, 1);
lean_inc(v_snd_4006_);
lean_dec_ref(v___x_4004_);
v___x_4007_ = lean_box(v___x_3974_);
v___x_4008_ = lean_box(v___x_3975_);
v___x_4009_ = lean_box(v___x_3976_);
v___x_4010_ = lean_box_usize(v_sz_4000_);
v___x_4011_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___lam__6___boxed__const__1));
v___f_4012_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__5___boxed), 35, 29);
lean_closure_set(v___f_4012_, 0, v_numIndices_3971_);
lean_closure_set(v___f_4012_, 1, v___x_3972_);
lean_closure_set(v___f_4012_, 2, v_motive_3993_);
lean_closure_set(v___f_4012_, 3, v___x_3973_);
lean_closure_set(v___f_4012_, 4, v___x_4007_);
lean_closure_set(v___f_4012_, 5, v___x_4008_);
lean_closure_set(v___f_4012_, 6, v___x_4009_);
lean_closure_set(v___f_4012_, 7, v_is_3977_);
lean_closure_set(v___f_4012_, 8, v___x_3978_);
lean_closure_set(v___f_4012_, 9, v___x_3979_);
lean_closure_set(v___f_4012_, 10, v___x_3980_);
lean_closure_set(v___f_4012_, 11, v___x_3981_);
lean_closure_set(v___f_4012_, 12, v_params_3970_);
lean_closure_set(v___f_4012_, 13, v___x_3982_);
lean_closure_set(v___f_4012_, 14, v___x_3983_);
lean_closure_set(v___f_4012_, 15, v_heq_3984_);
lean_closure_set(v___f_4012_, 16, v_val_3985_);
lean_closure_set(v___f_4012_, 17, v_tail_3969_);
lean_closure_set(v___f_4012_, 18, v___x_4010_);
lean_closure_set(v___f_4012_, 19, v___x_4011_);
lean_closure_set(v___f_4012_, 20, v___x_3999_);
lean_closure_set(v___f_4012_, 21, v___x_3986_);
lean_closure_set(v___f_4012_, 22, v_declName_3987_);
lean_closure_set(v___f_4012_, 23, v_levelParams_3988_);
lean_closure_set(v___f_4012_, 24, v___x_3989_);
lean_closure_set(v___f_4012_, 25, v___x_3990_);
lean_closure_set(v___f_4012_, 26, v_numParams_3991_);
lean_closure_set(v___f_4012_, 27, v_snd_4006_);
lean_closure_set(v___f_4012_, 28, v___x_3992_);
v___x_4013_ = 0;
v___x_4014_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_fst_4005_, v___f_4012_, v___x_4013_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
return v___x_4014_;
}
else
{
lean_object* v_a_4015_; lean_object* v___x_4017_; uint8_t v_isShared_4018_; uint8_t v_isSharedCheck_4022_; 
lean_dec_ref(v___x_3999_);
lean_dec_ref(v_motive_3993_);
lean_dec_ref(v___x_3992_);
lean_dec(v_numParams_3991_);
lean_dec(v___x_3990_);
lean_dec(v___x_3989_);
lean_dec(v_levelParams_3988_);
lean_dec(v_declName_3987_);
lean_dec_ref(v___x_3986_);
lean_dec_ref(v_val_3985_);
lean_dec_ref(v_heq_3984_);
lean_dec_ref(v___x_3983_);
lean_dec_ref(v___x_3982_);
lean_dec(v___x_3981_);
lean_dec(v___x_3980_);
lean_dec_ref(v___x_3979_);
lean_dec_ref(v___x_3978_);
lean_dec_ref(v_is_3977_);
lean_dec_ref(v___x_3973_);
lean_dec(v___x_3972_);
lean_dec(v_numIndices_3971_);
lean_dec_ref(v_params_3970_);
lean_dec(v_tail_3969_);
v_a_4015_ = lean_ctor_get(v___x_4002_, 0);
v_isSharedCheck_4022_ = !lean_is_exclusive(v___x_4002_);
if (v_isSharedCheck_4022_ == 0)
{
v___x_4017_ = v___x_4002_;
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
else
{
lean_inc(v_a_4015_);
lean_dec(v___x_4002_);
v___x_4017_ = lean_box(0);
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
v_resetjp_4016_:
{
lean_object* v___x_4020_; 
if (v_isShared_4018_ == 0)
{
v___x_4020_ = v___x_4017_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v_a_4015_);
v___x_4020_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
return v___x_4020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object** _args){
lean_object* v_ctors_4023_ = _args[0];
lean_object* v_tail_4024_ = _args[1];
lean_object* v_params_4025_ = _args[2];
lean_object* v_numIndices_4026_ = _args[3];
lean_object* v___x_4027_ = _args[4];
lean_object* v___x_4028_ = _args[5];
lean_object* v___x_4029_ = _args[6];
lean_object* v___x_4030_ = _args[7];
lean_object* v___x_4031_ = _args[8];
lean_object* v_is_4032_ = _args[9];
lean_object* v___x_4033_ = _args[10];
lean_object* v___x_4034_ = _args[11];
lean_object* v___x_4035_ = _args[12];
lean_object* v___x_4036_ = _args[13];
lean_object* v___x_4037_ = _args[14];
lean_object* v___x_4038_ = _args[15];
lean_object* v_heq_4039_ = _args[16];
lean_object* v_val_4040_ = _args[17];
lean_object* v___x_4041_ = _args[18];
lean_object* v_declName_4042_ = _args[19];
lean_object* v_levelParams_4043_ = _args[20];
lean_object* v___x_4044_ = _args[21];
lean_object* v___x_4045_ = _args[22];
lean_object* v_numParams_4046_ = _args[23];
lean_object* v___x_4047_ = _args[24];
lean_object* v_motive_4048_ = _args[25];
lean_object* v___y_4049_ = _args[26];
lean_object* v___y_4050_ = _args[27];
lean_object* v___y_4051_ = _args[28];
lean_object* v___y_4052_ = _args[29];
lean_object* v___y_4053_ = _args[30];
_start:
{
uint8_t v___x_17475__boxed_4054_; uint8_t v___x_17476__boxed_4055_; uint8_t v___x_17477__boxed_4056_; lean_object* v_res_4057_; 
v___x_17475__boxed_4054_ = lean_unbox(v___x_4029_);
v___x_17476__boxed_4055_ = lean_unbox(v___x_4030_);
v___x_17477__boxed_4056_ = lean_unbox(v___x_4031_);
v_res_4057_ = l_Lean_mkCasesOnSameCtor___lam__6(v_ctors_4023_, v_tail_4024_, v_params_4025_, v_numIndices_4026_, v___x_4027_, v___x_4028_, v___x_17475__boxed_4054_, v___x_17476__boxed_4055_, v___x_17477__boxed_4056_, v_is_4032_, v___x_4033_, v___x_4034_, v___x_4035_, v___x_4036_, v___x_4037_, v___x_4038_, v_heq_4039_, v_val_4040_, v___x_4041_, v_declName_4042_, v_levelParams_4043_, v___x_4044_, v___x_4045_, v_numParams_4046_, v___x_4047_, v_motive_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
lean_dec(v___y_4052_);
lean_dec_ref(v___y_4051_);
lean_dec(v___y_4050_);
lean_dec_ref(v___y_4049_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object* v___x_4058_, lean_object* v___x_4059_, lean_object* v_is_4060_, lean_object* v_head_4061_, lean_object* v_ctors_4062_, lean_object* v_tail_4063_, lean_object* v_params_4064_, lean_object* v_numIndices_4065_, lean_object* v___x_4066_, lean_object* v___x_4067_, lean_object* v___x_4068_, lean_object* v___x_4069_, lean_object* v___x_4070_, lean_object* v_val_4071_, lean_object* v___x_4072_, lean_object* v_declName_4073_, lean_object* v_levelParams_4074_, lean_object* v___x_4075_, lean_object* v_numParams_4076_, lean_object* v___x_4077_, lean_object* v_heq_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; uint8_t v___x_4091_; uint8_t v___x_4092_; uint8_t v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___f_4097_; lean_object* v___x_4098_; 
v___x_4084_ = lean_unsigned_to_nat(3u);
v___x_4085_ = lean_mk_empty_array_with_capacity(v___x_4084_);
lean_inc_ref(v___x_4058_);
v___x_4086_ = lean_array_push(v___x_4085_, v___x_4058_);
lean_inc_ref(v___x_4059_);
v___x_4087_ = lean_array_push(v___x_4086_, v___x_4059_);
lean_inc_ref(v_heq_4078_);
v___x_4088_ = lean_array_push(v___x_4087_, v_heq_4078_);
lean_inc_ref(v_is_4060_);
v___x_4089_ = l_Array_append___redArg(v_is_4060_, v___x_4088_);
lean_dec_ref(v___x_4088_);
v___x_4090_ = l_Lean_mkSort(v_head_4061_);
v___x_4091_ = 0;
v___x_4092_ = 1;
v___x_4093_ = 1;
v___x_4094_ = lean_box(v___x_4091_);
v___x_4095_ = lean_box(v___x_4092_);
v___x_4096_ = lean_box(v___x_4093_);
lean_inc_ref(v___x_4089_);
v___f_4097_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__6___boxed), 31, 25);
lean_closure_set(v___f_4097_, 0, v_ctors_4062_);
lean_closure_set(v___f_4097_, 1, v_tail_4063_);
lean_closure_set(v___f_4097_, 2, v_params_4064_);
lean_closure_set(v___f_4097_, 3, v_numIndices_4065_);
lean_closure_set(v___f_4097_, 4, v___x_4066_);
lean_closure_set(v___f_4097_, 5, v___x_4089_);
lean_closure_set(v___f_4097_, 6, v___x_4094_);
lean_closure_set(v___f_4097_, 7, v___x_4095_);
lean_closure_set(v___f_4097_, 8, v___x_4096_);
lean_closure_set(v___f_4097_, 9, v_is_4060_);
lean_closure_set(v___f_4097_, 10, v___x_4059_);
lean_closure_set(v___f_4097_, 11, v___x_4058_);
lean_closure_set(v___f_4097_, 12, v___x_4067_);
lean_closure_set(v___f_4097_, 13, v___x_4068_);
lean_closure_set(v___f_4097_, 14, v___x_4069_);
lean_closure_set(v___f_4097_, 15, v___x_4070_);
lean_closure_set(v___f_4097_, 16, v_heq_4078_);
lean_closure_set(v___f_4097_, 17, v_val_4071_);
lean_closure_set(v___f_4097_, 18, v___x_4072_);
lean_closure_set(v___f_4097_, 19, v_declName_4073_);
lean_closure_set(v___f_4097_, 20, v_levelParams_4074_);
lean_closure_set(v___f_4097_, 21, v___x_4084_);
lean_closure_set(v___f_4097_, 22, v___x_4075_);
lean_closure_set(v___f_4097_, 23, v_numParams_4076_);
lean_closure_set(v___f_4097_, 24, v___x_4077_);
v___x_4098_ = l_Lean_Meta_mkForallFVars(v___x_4089_, v___x_4090_, v___x_4091_, v___x_4092_, v___x_4092_, v___x_4093_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
lean_dec_ref(v___x_4089_);
if (lean_obj_tag(v___x_4098_) == 0)
{
lean_object* v_a_4099_; lean_object* v___x_4100_; uint8_t v___x_4101_; lean_object* v___x_4102_; 
v_a_4099_ = lean_ctor_get(v___x_4098_, 0);
lean_inc(v_a_4099_);
lean_dec_ref_known(v___x_4098_, 1);
v___x_4100_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1));
v___x_4101_ = 0;
v___x_4102_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_4100_, v___x_4093_, v_a_4099_, v___f_4097_, v___x_4101_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
return v___x_4102_;
}
else
{
lean_object* v_a_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4110_; 
lean_dec_ref(v___f_4097_);
v_a_4103_ = lean_ctor_get(v___x_4098_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4098_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4105_ = v___x_4098_;
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_a_4103_);
lean_dec(v___x_4098_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4108_; 
if (v_isShared_4106_ == 0)
{
v___x_4108_ = v___x_4105_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_a_4103_);
v___x_4108_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4107_;
}
v_reusejp_4107_:
{
return v___x_4108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object** _args){
lean_object* v___x_4111_ = _args[0];
lean_object* v___x_4112_ = _args[1];
lean_object* v_is_4113_ = _args[2];
lean_object* v_head_4114_ = _args[3];
lean_object* v_ctors_4115_ = _args[4];
lean_object* v_tail_4116_ = _args[5];
lean_object* v_params_4117_ = _args[6];
lean_object* v_numIndices_4118_ = _args[7];
lean_object* v___x_4119_ = _args[8];
lean_object* v___x_4120_ = _args[9];
lean_object* v___x_4121_ = _args[10];
lean_object* v___x_4122_ = _args[11];
lean_object* v___x_4123_ = _args[12];
lean_object* v_val_4124_ = _args[13];
lean_object* v___x_4125_ = _args[14];
lean_object* v_declName_4126_ = _args[15];
lean_object* v_levelParams_4127_ = _args[16];
lean_object* v___x_4128_ = _args[17];
lean_object* v_numParams_4129_ = _args[18];
lean_object* v___x_4130_ = _args[19];
lean_object* v_heq_4131_ = _args[20];
lean_object* v___y_4132_ = _args[21];
lean_object* v___y_4133_ = _args[22];
lean_object* v___y_4134_ = _args[23];
lean_object* v___y_4135_ = _args[24];
lean_object* v___y_4136_ = _args[25];
_start:
{
lean_object* v_res_4137_; 
v_res_4137_ = l_Lean_mkCasesOnSameCtor___lam__7(v___x_4111_, v___x_4112_, v_is_4113_, v_head_4114_, v_ctors_4115_, v_tail_4116_, v_params_4117_, v_numIndices_4118_, v___x_4119_, v___x_4120_, v___x_4121_, v___x_4122_, v___x_4123_, v_val_4124_, v___x_4125_, v_declName_4126_, v_levelParams_4127_, v___x_4128_, v_numParams_4129_, v___x_4130_, v_heq_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_);
lean_dec(v___y_4135_);
lean_dec_ref(v___y_4134_);
lean_dec(v___y_4133_);
lean_dec_ref(v___y_4132_);
return v_res_4137_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object* v___x_4138_, lean_object* v_x1_4139_, lean_object* v_indName_4140_, lean_object* v_tail_4141_, lean_object* v_params_4142_, lean_object* v_is_4143_, lean_object* v___x_4144_, lean_object* v_head_4145_, lean_object* v_ctors_4146_, lean_object* v_numIndices_4147_, lean_object* v___x_4148_, lean_object* v___x_4149_, lean_object* v_val_4150_, lean_object* v_declName_4151_, lean_object* v_levelParams_4152_, lean_object* v_numParams_4153_, lean_object* v___x_4154_, lean_object* v_x2_4155_, lean_object* v_x_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___f_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; 
v___x_4162_ = lean_unsigned_to_nat(0u);
v___x_4163_ = lean_array_get_borrowed(v___x_4138_, v_x1_4139_, v___x_4162_);
v___x_4164_ = lean_array_get_borrowed(v___x_4138_, v_x2_4155_, v___x_4162_);
v___x_4165_ = l_Lean_mkCtorIdxName(v_indName_4140_);
lean_inc(v_tail_4141_);
v___x_4166_ = l_Lean_mkConst(v___x_4165_, v_tail_4141_);
lean_inc_ref(v_params_4142_);
v___x_4167_ = l_Array_append___redArg(v_params_4142_, v_is_4143_);
v___x_4168_ = lean_mk_empty_array_with_capacity(v___x_4144_);
lean_inc_n(v___x_4163_, 2);
lean_inc_ref_n(v___x_4168_, 2);
v___x_4169_ = lean_array_push(v___x_4168_, v___x_4163_);
lean_inc_ref(v___x_4167_);
v___x_4170_ = l_Array_append___redArg(v___x_4167_, v___x_4169_);
lean_inc_ref(v___x_4166_);
v___x_4171_ = l_Lean_mkAppN(v___x_4166_, v___x_4170_);
lean_dec_ref(v___x_4170_);
lean_inc_n(v___x_4164_, 2);
v___x_4172_ = lean_array_push(v___x_4168_, v___x_4164_);
lean_inc_ref(v___x_4172_);
v___f_4173_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__7___boxed), 26, 20);
lean_closure_set(v___f_4173_, 0, v___x_4163_);
lean_closure_set(v___f_4173_, 1, v___x_4164_);
lean_closure_set(v___f_4173_, 2, v_is_4143_);
lean_closure_set(v___f_4173_, 3, v_head_4145_);
lean_closure_set(v___f_4173_, 4, v_ctors_4146_);
lean_closure_set(v___f_4173_, 5, v_tail_4141_);
lean_closure_set(v___f_4173_, 6, v_params_4142_);
lean_closure_set(v___f_4173_, 7, v_numIndices_4147_);
lean_closure_set(v___f_4173_, 8, v___x_4144_);
lean_closure_set(v___f_4173_, 9, v___x_4148_);
lean_closure_set(v___f_4173_, 10, v___x_4149_);
lean_closure_set(v___f_4173_, 11, v___x_4169_);
lean_closure_set(v___f_4173_, 12, v___x_4172_);
lean_closure_set(v___f_4173_, 13, v_val_4150_);
lean_closure_set(v___f_4173_, 14, v___x_4168_);
lean_closure_set(v___f_4173_, 15, v_declName_4151_);
lean_closure_set(v___f_4173_, 16, v_levelParams_4152_);
lean_closure_set(v___f_4173_, 17, v___x_4162_);
lean_closure_set(v___f_4173_, 18, v_numParams_4153_);
lean_closure_set(v___f_4173_, 19, v___x_4154_);
v___x_4174_ = l_Array_append___redArg(v___x_4167_, v___x_4172_);
lean_dec_ref(v___x_4172_);
v___x_4175_ = l_Lean_mkAppN(v___x_4166_, v___x_4174_);
lean_dec_ref(v___x_4174_);
v___x_4176_ = l_Lean_Meta_mkEq(v___x_4171_, v___x_4175_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
if (lean_obj_tag(v___x_4176_) == 0)
{
lean_object* v_a_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; 
v_a_4177_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_a_4177_);
lean_dec_ref_known(v___x_4176_, 1);
v___x_4178_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1));
v___x_4179_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_4178_, v_a_4177_, v___f_4173_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
return v___x_4179_;
}
else
{
lean_object* v_a_4180_; lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4187_; 
lean_dec_ref(v___f_4173_);
v_a_4180_ = lean_ctor_get(v___x_4176_, 0);
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4176_);
if (v_isSharedCheck_4187_ == 0)
{
v___x_4182_ = v___x_4176_;
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
else
{
lean_inc(v_a_4180_);
lean_dec(v___x_4176_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4180_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object** _args){
lean_object* v___x_4188_ = _args[0];
lean_object* v_x1_4189_ = _args[1];
lean_object* v_indName_4190_ = _args[2];
lean_object* v_tail_4191_ = _args[3];
lean_object* v_params_4192_ = _args[4];
lean_object* v_is_4193_ = _args[5];
lean_object* v___x_4194_ = _args[6];
lean_object* v_head_4195_ = _args[7];
lean_object* v_ctors_4196_ = _args[8];
lean_object* v_numIndices_4197_ = _args[9];
lean_object* v___x_4198_ = _args[10];
lean_object* v___x_4199_ = _args[11];
lean_object* v_val_4200_ = _args[12];
lean_object* v_declName_4201_ = _args[13];
lean_object* v_levelParams_4202_ = _args[14];
lean_object* v_numParams_4203_ = _args[15];
lean_object* v___x_4204_ = _args[16];
lean_object* v_x2_4205_ = _args[17];
lean_object* v_x_4206_ = _args[18];
lean_object* v___y_4207_ = _args[19];
lean_object* v___y_4208_ = _args[20];
lean_object* v___y_4209_ = _args[21];
lean_object* v___y_4210_ = _args[22];
lean_object* v___y_4211_ = _args[23];
_start:
{
lean_object* v_res_4212_; 
v_res_4212_ = l_Lean_mkCasesOnSameCtor___lam__8(v___x_4188_, v_x1_4189_, v_indName_4190_, v_tail_4191_, v_params_4192_, v_is_4193_, v___x_4194_, v_head_4195_, v_ctors_4196_, v_numIndices_4197_, v___x_4198_, v___x_4199_, v_val_4200_, v_declName_4201_, v_levelParams_4202_, v_numParams_4203_, v___x_4204_, v_x2_4205_, v_x_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_);
lean_dec(v___y_4210_);
lean_dec_ref(v___y_4209_);
lean_dec(v___y_4208_);
lean_dec_ref(v___y_4207_);
lean_dec_ref(v_x_4206_);
lean_dec_ref(v_x2_4205_);
lean_dec_ref(v_x1_4189_);
lean_dec_ref(v___x_4188_);
return v_res_4212_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object* v___x_4213_, lean_object* v_indName_4214_, lean_object* v_tail_4215_, lean_object* v_params_4216_, lean_object* v_is_4217_, lean_object* v___x_4218_, lean_object* v_head_4219_, lean_object* v_ctors_4220_, lean_object* v_numIndices_4221_, lean_object* v___x_4222_, lean_object* v___x_4223_, lean_object* v_val_4224_, lean_object* v_declName_4225_, lean_object* v_levelParams_4226_, lean_object* v_numParams_4227_, lean_object* v___x_4228_, lean_object* v_t_4229_, lean_object* v___x_4230_, lean_object* v_x1_4231_, lean_object* v_x_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_){
_start:
{
lean_object* v___f_4238_; uint8_t v___x_4239_; lean_object* v___x_4240_; 
v___f_4238_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__8___boxed), 24, 17);
lean_closure_set(v___f_4238_, 0, v___x_4213_);
lean_closure_set(v___f_4238_, 1, v_x1_4231_);
lean_closure_set(v___f_4238_, 2, v_indName_4214_);
lean_closure_set(v___f_4238_, 3, v_tail_4215_);
lean_closure_set(v___f_4238_, 4, v_params_4216_);
lean_closure_set(v___f_4238_, 5, v_is_4217_);
lean_closure_set(v___f_4238_, 6, v___x_4218_);
lean_closure_set(v___f_4238_, 7, v_head_4219_);
lean_closure_set(v___f_4238_, 8, v_ctors_4220_);
lean_closure_set(v___f_4238_, 9, v_numIndices_4221_);
lean_closure_set(v___f_4238_, 10, v___x_4222_);
lean_closure_set(v___f_4238_, 11, v___x_4223_);
lean_closure_set(v___f_4238_, 12, v_val_4224_);
lean_closure_set(v___f_4238_, 13, v_declName_4225_);
lean_closure_set(v___f_4238_, 14, v_levelParams_4226_);
lean_closure_set(v___f_4238_, 15, v_numParams_4227_);
lean_closure_set(v___f_4238_, 16, v___x_4228_);
v___x_4239_ = 0;
v___x_4240_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4229_, v___x_4230_, v___f_4238_, v___x_4239_, v___x_4239_, v___y_4233_, v___y_4234_, v___y_4235_, v___y_4236_);
return v___x_4240_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object** _args){
lean_object* v___x_4241_ = _args[0];
lean_object* v_indName_4242_ = _args[1];
lean_object* v_tail_4243_ = _args[2];
lean_object* v_params_4244_ = _args[3];
lean_object* v_is_4245_ = _args[4];
lean_object* v___x_4246_ = _args[5];
lean_object* v_head_4247_ = _args[6];
lean_object* v_ctors_4248_ = _args[7];
lean_object* v_numIndices_4249_ = _args[8];
lean_object* v___x_4250_ = _args[9];
lean_object* v___x_4251_ = _args[10];
lean_object* v_val_4252_ = _args[11];
lean_object* v_declName_4253_ = _args[12];
lean_object* v_levelParams_4254_ = _args[13];
lean_object* v_numParams_4255_ = _args[14];
lean_object* v___x_4256_ = _args[15];
lean_object* v_t_4257_ = _args[16];
lean_object* v___x_4258_ = _args[17];
lean_object* v_x1_4259_ = _args[18];
lean_object* v_x_4260_ = _args[19];
lean_object* v___y_4261_ = _args[20];
lean_object* v___y_4262_ = _args[21];
lean_object* v___y_4263_ = _args[22];
lean_object* v___y_4264_ = _args[23];
lean_object* v___y_4265_ = _args[24];
_start:
{
lean_object* v_res_4266_; 
v_res_4266_ = l_Lean_mkCasesOnSameCtor___lam__9(v___x_4241_, v_indName_4242_, v_tail_4243_, v_params_4244_, v_is_4245_, v___x_4246_, v_head_4247_, v_ctors_4248_, v_numIndices_4249_, v___x_4250_, v___x_4251_, v_val_4252_, v_declName_4253_, v_levelParams_4254_, v_numParams_4255_, v___x_4256_, v_t_4257_, v___x_4258_, v_x1_4259_, v_x_4260_, v___y_4261_, v___y_4262_, v___y_4263_, v___y_4264_);
lean_dec(v___y_4264_);
lean_dec_ref(v___y_4263_);
lean_dec(v___y_4262_);
lean_dec_ref(v___y_4261_);
lean_dec_ref(v_x_4260_);
return v_res_4266_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object* v___x_4267_, lean_object* v_indName_4268_, lean_object* v_tail_4269_, lean_object* v_params_4270_, lean_object* v_head_4271_, lean_object* v_ctors_4272_, lean_object* v_numIndices_4273_, lean_object* v___x_4274_, lean_object* v___x_4275_, lean_object* v_val_4276_, lean_object* v_declName_4277_, lean_object* v_levelParams_4278_, lean_object* v_numParams_4279_, lean_object* v___x_4280_, lean_object* v_is_4281_, lean_object* v_t_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_){
_start:
{
lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___f_4290_; uint8_t v___x_4291_; lean_object* v___x_4292_; 
v___x_4288_ = lean_unsigned_to_nat(1u);
v___x_4289_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0));
lean_inc_ref(v_t_4282_);
v___f_4290_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__9___boxed), 25, 18);
lean_closure_set(v___f_4290_, 0, v___x_4267_);
lean_closure_set(v___f_4290_, 1, v_indName_4268_);
lean_closure_set(v___f_4290_, 2, v_tail_4269_);
lean_closure_set(v___f_4290_, 3, v_params_4270_);
lean_closure_set(v___f_4290_, 4, v_is_4281_);
lean_closure_set(v___f_4290_, 5, v___x_4288_);
lean_closure_set(v___f_4290_, 6, v_head_4271_);
lean_closure_set(v___f_4290_, 7, v_ctors_4272_);
lean_closure_set(v___f_4290_, 8, v_numIndices_4273_);
lean_closure_set(v___f_4290_, 9, v___x_4274_);
lean_closure_set(v___f_4290_, 10, v___x_4275_);
lean_closure_set(v___f_4290_, 11, v_val_4276_);
lean_closure_set(v___f_4290_, 12, v_declName_4277_);
lean_closure_set(v___f_4290_, 13, v_levelParams_4278_);
lean_closure_set(v___f_4290_, 14, v_numParams_4279_);
lean_closure_set(v___f_4290_, 15, v___x_4280_);
lean_closure_set(v___f_4290_, 16, v_t_4282_);
lean_closure_set(v___f_4290_, 17, v___x_4289_);
v___x_4291_ = 0;
v___x_4292_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4282_, v___x_4289_, v___f_4290_, v___x_4291_, v___x_4291_, v___y_4283_, v___y_4284_, v___y_4285_, v___y_4286_);
return v___x_4292_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object** _args){
lean_object* v___x_4293_ = _args[0];
lean_object* v_indName_4294_ = _args[1];
lean_object* v_tail_4295_ = _args[2];
lean_object* v_params_4296_ = _args[3];
lean_object* v_head_4297_ = _args[4];
lean_object* v_ctors_4298_ = _args[5];
lean_object* v_numIndices_4299_ = _args[6];
lean_object* v___x_4300_ = _args[7];
lean_object* v___x_4301_ = _args[8];
lean_object* v_val_4302_ = _args[9];
lean_object* v_declName_4303_ = _args[10];
lean_object* v_levelParams_4304_ = _args[11];
lean_object* v_numParams_4305_ = _args[12];
lean_object* v___x_4306_ = _args[13];
lean_object* v_is_4307_ = _args[14];
lean_object* v_t_4308_ = _args[15];
lean_object* v___y_4309_ = _args[16];
lean_object* v___y_4310_ = _args[17];
lean_object* v___y_4311_ = _args[18];
lean_object* v___y_4312_ = _args[19];
lean_object* v___y_4313_ = _args[20];
_start:
{
lean_object* v_res_4314_; 
v_res_4314_ = l_Lean_mkCasesOnSameCtor___lam__10(v___x_4293_, v_indName_4294_, v_tail_4295_, v_params_4296_, v_head_4297_, v_ctors_4298_, v_numIndices_4299_, v___x_4300_, v___x_4301_, v_val_4302_, v_declName_4303_, v_levelParams_4304_, v_numParams_4305_, v___x_4306_, v_is_4307_, v_t_4308_, v___y_4309_, v___y_4310_, v___y_4311_, v___y_4312_);
lean_dec(v___y_4312_);
lean_dec_ref(v___y_4311_);
lean_dec(v___y_4310_);
lean_dec_ref(v___y_4309_);
return v_res_4314_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object* v___x_4315_, lean_object* v_indName_4316_, lean_object* v_tail_4317_, lean_object* v_head_4318_, lean_object* v_ctors_4319_, lean_object* v_numIndices_4320_, lean_object* v___x_4321_, lean_object* v___x_4322_, lean_object* v_val_4323_, lean_object* v_declName_4324_, lean_object* v_levelParams_4325_, lean_object* v_numParams_4326_, lean_object* v_params_4327_, lean_object* v_t_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_){
_start:
{
lean_object* v___x_4334_; lean_object* v___f_4335_; lean_object* v___x_4336_; uint8_t v___x_4337_; lean_object* v___x_4338_; 
v___x_4334_ = l_Lean_Expr_bindingBody_x21(v_t_4328_);
lean_inc_ref(v___x_4334_);
lean_inc(v_numIndices_4320_);
v___f_4335_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__10___boxed), 21, 14);
lean_closure_set(v___f_4335_, 0, v___x_4315_);
lean_closure_set(v___f_4335_, 1, v_indName_4316_);
lean_closure_set(v___f_4335_, 2, v_tail_4317_);
lean_closure_set(v___f_4335_, 3, v_params_4327_);
lean_closure_set(v___f_4335_, 4, v_head_4318_);
lean_closure_set(v___f_4335_, 5, v_ctors_4319_);
lean_closure_set(v___f_4335_, 6, v_numIndices_4320_);
lean_closure_set(v___f_4335_, 7, v___x_4321_);
lean_closure_set(v___f_4335_, 8, v___x_4322_);
lean_closure_set(v___f_4335_, 9, v_val_4323_);
lean_closure_set(v___f_4335_, 10, v_declName_4324_);
lean_closure_set(v___f_4335_, 11, v_levelParams_4325_);
lean_closure_set(v___f_4335_, 12, v_numParams_4326_);
lean_closure_set(v___f_4335_, 13, v___x_4334_);
v___x_4336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4336_, 0, v_numIndices_4320_);
v___x_4337_ = 0;
v___x_4338_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_4334_, v___x_4336_, v___f_4335_, v___x_4337_, v___x_4337_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_);
return v___x_4338_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object** _args){
lean_object* v___x_4339_ = _args[0];
lean_object* v_indName_4340_ = _args[1];
lean_object* v_tail_4341_ = _args[2];
lean_object* v_head_4342_ = _args[3];
lean_object* v_ctors_4343_ = _args[4];
lean_object* v_numIndices_4344_ = _args[5];
lean_object* v___x_4345_ = _args[6];
lean_object* v___x_4346_ = _args[7];
lean_object* v_val_4347_ = _args[8];
lean_object* v_declName_4348_ = _args[9];
lean_object* v_levelParams_4349_ = _args[10];
lean_object* v_numParams_4350_ = _args[11];
lean_object* v_params_4351_ = _args[12];
lean_object* v_t_4352_ = _args[13];
lean_object* v___y_4353_ = _args[14];
lean_object* v___y_4354_ = _args[15];
lean_object* v___y_4355_ = _args[16];
lean_object* v___y_4356_ = _args[17];
lean_object* v___y_4357_ = _args[18];
_start:
{
lean_object* v_res_4358_; 
v_res_4358_ = l_Lean_mkCasesOnSameCtor___lam__11(v___x_4339_, v_indName_4340_, v_tail_4341_, v_head_4342_, v_ctors_4343_, v_numIndices_4344_, v___x_4345_, v___x_4346_, v_val_4347_, v_declName_4348_, v_levelParams_4349_, v_numParams_4350_, v_params_4351_, v_t_4352_, v___y_4353_, v___y_4354_, v___y_4355_, v___y_4356_);
lean_dec(v___y_4356_);
lean_dec_ref(v___y_4355_);
lean_dec(v___y_4354_);
lean_dec_ref(v___y_4353_);
lean_dec_ref(v_t_4352_);
return v_res_4358_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__3(void){
_start:
{
lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
v___x_4363_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__2));
v___x_4364_ = lean_unsigned_to_nat(58u);
v___x_4365_ = lean_unsigned_to_nat(142u);
v___x_4366_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__2));
v___x_4367_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_4368_ = l_mkPanicMessageWithDecl(v___x_4367_, v___x_4366_, v___x_4365_, v___x_4364_, v___x_4363_);
return v___x_4368_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__4(void){
_start:
{
lean_object* v___x_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; 
v___x_4369_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__4));
v___x_4370_ = lean_unsigned_to_nat(60u);
v___x_4371_ = lean_unsigned_to_nat(136u);
v___x_4372_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__2));
v___x_4373_ = ((lean_object*)(l_Lean_mkCasesOnSameCtorHet___closed__0));
v___x_4374_ = l_mkPanicMessageWithDecl(v___x_4373_, v___x_4372_, v___x_4371_, v___x_4370_, v___x_4369_);
return v___x_4374_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object* v_declName_4375_, lean_object* v_indName_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_){
_start:
{
lean_object* v___x_4382_; lean_object* v___x_4383_; 
v___x_4382_ = l_Lean_instInhabitedExpr;
lean_inc(v_indName_4376_);
v___x_4383_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
if (lean_obj_tag(v___x_4383_) == 0)
{
lean_object* v_a_4384_; 
v_a_4384_ = lean_ctor_get(v___x_4383_, 0);
lean_inc(v_a_4384_);
lean_dec_ref_known(v___x_4383_, 1);
if (lean_obj_tag(v_a_4384_) == 5)
{
lean_object* v_val_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; 
v_val_4385_ = lean_ctor_get(v_a_4384_, 0);
lean_inc_ref(v_val_4385_);
lean_dec_ref_known(v_a_4384_, 1);
v___x_4386_ = ((lean_object*)(l_Lean_mkCasesOnSameCtor___closed__1));
lean_inc(v_declName_4375_);
v___x_4387_ = l_Lean_Name_append(v_declName_4375_, v___x_4386_);
lean_inc(v_indName_4376_);
lean_inc(v___x_4387_);
v___x_4388_ = l_Lean_mkCasesOnSameCtorHet(v___x_4387_, v_indName_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
if (lean_obj_tag(v___x_4388_) == 0)
{
lean_object* v___x_4390_; uint8_t v_isShared_4391_; uint8_t v_isSharedCheck_4420_; 
v_isSharedCheck_4420_ = !lean_is_exclusive(v___x_4388_);
if (v_isSharedCheck_4420_ == 0)
{
lean_object* v_unused_4421_; 
v_unused_4421_ = lean_ctor_get(v___x_4388_, 0);
lean_dec(v_unused_4421_);
v___x_4390_ = v___x_4388_;
v_isShared_4391_ = v_isSharedCheck_4420_;
goto v_resetjp_4389_;
}
else
{
lean_dec(v___x_4388_);
v___x_4390_ = lean_box(0);
v_isShared_4391_ = v_isSharedCheck_4420_;
goto v_resetjp_4389_;
}
v_resetjp_4389_:
{
lean_object* v___x_4392_; lean_object* v___x_4393_; 
lean_inc(v_indName_4376_);
v___x_4392_ = l_Lean_mkCasesOnName(v_indName_4376_);
v___x_4393_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_4392_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
if (lean_obj_tag(v___x_4393_) == 0)
{
lean_object* v_a_4394_; lean_object* v_levelParams_4395_; lean_object* v_type_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; 
v_a_4394_ = lean_ctor_get(v___x_4393_, 0);
lean_inc(v_a_4394_);
lean_dec_ref_known(v___x_4393_, 1);
v_levelParams_4395_ = lean_ctor_get(v_a_4394_, 1);
lean_inc_n(v_levelParams_4395_, 2);
v_type_4396_ = lean_ctor_get(v_a_4394_, 2);
lean_inc_ref(v_type_4396_);
lean_dec(v_a_4394_);
v___x_4397_ = lean_box(0);
v___x_4398_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_4395_, v___x_4397_);
if (lean_obj_tag(v___x_4398_) == 1)
{
lean_object* v_head_4399_; lean_object* v_tail_4400_; lean_object* v_numParams_4401_; lean_object* v_numIndices_4402_; lean_object* v_ctors_4403_; lean_object* v___f_4404_; lean_object* v___x_4406_; 
v_head_4399_ = lean_ctor_get(v___x_4398_, 0);
lean_inc(v_head_4399_);
v_tail_4400_ = lean_ctor_get(v___x_4398_, 1);
lean_inc(v_tail_4400_);
v_numParams_4401_ = lean_ctor_get(v_val_4385_, 1);
lean_inc_n(v_numParams_4401_, 2);
v_numIndices_4402_ = lean_ctor_get(v_val_4385_, 2);
lean_inc(v_numIndices_4402_);
v_ctors_4403_ = lean_ctor_get(v_val_4385_, 4);
lean_inc(v_ctors_4403_);
v___f_4404_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__11___boxed), 19, 12);
lean_closure_set(v___f_4404_, 0, v___x_4382_);
lean_closure_set(v___f_4404_, 1, v_indName_4376_);
lean_closure_set(v___f_4404_, 2, v_tail_4400_);
lean_closure_set(v___f_4404_, 3, v_head_4399_);
lean_closure_set(v___f_4404_, 4, v_ctors_4403_);
lean_closure_set(v___f_4404_, 5, v_numIndices_4402_);
lean_closure_set(v___f_4404_, 6, v___x_4387_);
lean_closure_set(v___f_4404_, 7, v___x_4398_);
lean_closure_set(v___f_4404_, 8, v_val_4385_);
lean_closure_set(v___f_4404_, 9, v_declName_4375_);
lean_closure_set(v___f_4404_, 10, v_levelParams_4395_);
lean_closure_set(v___f_4404_, 11, v_numParams_4401_);
if (v_isShared_4391_ == 0)
{
lean_ctor_set_tag(v___x_4390_, 1);
lean_ctor_set(v___x_4390_, 0, v_numParams_4401_);
v___x_4406_ = v___x_4390_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_numParams_4401_);
v___x_4406_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
uint8_t v___x_4407_; lean_object* v___x_4408_; 
v___x_4407_ = 0;
v___x_4408_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_4396_, v___x_4406_, v___f_4404_, v___x_4407_, v___x_4407_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
return v___x_4408_;
}
}
else
{
lean_object* v___x_4410_; lean_object* v___x_4411_; 
lean_dec(v___x_4398_);
lean_dec_ref(v_type_4396_);
lean_dec(v_levelParams_4395_);
lean_del_object(v___x_4390_);
lean_dec(v___x_4387_);
lean_dec_ref(v_val_4385_);
lean_dec(v_indName_4376_);
lean_dec(v_declName_4375_);
v___x_4410_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__3, &l_Lean_mkCasesOnSameCtor___closed__3_once, _init_l_Lean_mkCasesOnSameCtor___closed__3);
v___x_4411_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4410_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
return v___x_4411_;
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4419_; 
lean_del_object(v___x_4390_);
lean_dec(v___x_4387_);
lean_dec_ref(v_val_4385_);
lean_dec(v_indName_4376_);
lean_dec(v_declName_4375_);
v_a_4412_ = lean_ctor_get(v___x_4393_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4393_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4414_ = v___x_4393_;
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v___x_4393_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4417_; 
if (v_isShared_4415_ == 0)
{
v___x_4417_ = v___x_4414_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4412_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
}
else
{
lean_dec(v___x_4387_);
lean_dec_ref(v_val_4385_);
lean_dec(v_indName_4376_);
lean_dec(v_declName_4375_);
return v___x_4388_;
}
}
else
{
lean_object* v___x_4422_; lean_object* v___x_4423_; 
lean_dec(v_a_4384_);
lean_dec(v_indName_4376_);
lean_dec(v_declName_4375_);
v___x_4422_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__4, &l_Lean_mkCasesOnSameCtor___closed__4_once, _init_l_Lean_mkCasesOnSameCtor___closed__4);
v___x_4423_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4422_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
return v___x_4423_;
}
}
else
{
lean_object* v_a_4424_; lean_object* v___x_4426_; uint8_t v_isShared_4427_; uint8_t v_isSharedCheck_4431_; 
lean_dec(v_indName_4376_);
lean_dec(v_declName_4375_);
v_a_4424_ = lean_ctor_get(v___x_4383_, 0);
v_isSharedCheck_4431_ = !lean_is_exclusive(v___x_4383_);
if (v_isSharedCheck_4431_ == 0)
{
v___x_4426_ = v___x_4383_;
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
else
{
lean_inc(v_a_4424_);
lean_dec(v___x_4383_);
v___x_4426_ = lean_box(0);
v_isShared_4427_ = v_isSharedCheck_4431_;
goto v_resetjp_4425_;
}
v_resetjp_4425_:
{
lean_object* v___x_4429_; 
if (v_isShared_4427_ == 0)
{
v___x_4429_ = v___x_4426_;
goto v_reusejp_4428_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v_a_4424_);
v___x_4429_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4428_;
}
v_reusejp_4428_:
{
return v___x_4429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object* v_declName_4432_, lean_object* v_indName_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v_res_4439_; 
v_res_4439_ = l_Lean_mkCasesOnSameCtor(v_declName_4432_, v_indName_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
return v_res_4439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object* v_tail_4440_, lean_object* v_params_4441_, lean_object* v_motive_4442_, lean_object* v_as_4443_, size_t v_sz_4444_, size_t v_i_4445_, lean_object* v_bs_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_){
_start:
{
lean_object* v___x_4452_; 
v___x_4452_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_4440_, v_params_4441_, v_motive_4442_, v_sz_4444_, v_i_4445_, v_bs_4446_, v___y_4447_, v___y_4448_, v___y_4449_, v___y_4450_);
return v___x_4452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object* v_tail_4453_, lean_object* v_params_4454_, lean_object* v_motive_4455_, lean_object* v_as_4456_, lean_object* v_sz_4457_, lean_object* v_i_4458_, lean_object* v_bs_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_){
_start:
{
size_t v_sz_boxed_4465_; size_t v_i_boxed_4466_; lean_object* v_res_4467_; 
v_sz_boxed_4465_ = lean_unbox_usize(v_sz_4457_);
lean_dec(v_sz_4457_);
v_i_boxed_4466_ = lean_unbox_usize(v_i_4458_);
lean_dec(v_i_4458_);
v_res_4467_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__0(v_tail_4453_, v_params_4454_, v_motive_4455_, v_as_4456_, v_sz_boxed_4465_, v_i_boxed_4466_, v_bs_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_);
lean_dec(v___y_4463_);
lean_dec_ref(v___y_4462_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec_ref(v_as_4456_);
lean_dec_ref(v_params_4454_);
return v_res_4467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object* v_tail_4468_, lean_object* v_params_4469_, lean_object* v_a_4470_, lean_object* v_snd_4471_, lean_object* v_alts_4472_, lean_object* v_as_4473_, size_t v_sz_4474_, size_t v_i_4475_, lean_object* v_bs_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_, lean_object* v___y_4480_){
_start:
{
lean_object* v___x_4482_; 
v___x_4482_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_4468_, v_params_4469_, v_a_4470_, v_snd_4471_, v_alts_4472_, v_sz_4474_, v_i_4475_, v_bs_4476_, v___y_4477_, v___y_4478_, v___y_4479_, v___y_4480_);
return v___x_4482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object* v_tail_4483_, lean_object* v_params_4484_, lean_object* v_a_4485_, lean_object* v_snd_4486_, lean_object* v_alts_4487_, lean_object* v_as_4488_, lean_object* v_sz_4489_, lean_object* v_i_4490_, lean_object* v_bs_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_){
_start:
{
size_t v_sz_boxed_4497_; size_t v_i_boxed_4498_; lean_object* v_res_4499_; 
v_sz_boxed_4497_ = lean_unbox_usize(v_sz_4489_);
lean_dec(v_sz_4489_);
v_i_boxed_4498_ = lean_unbox_usize(v_i_4490_);
lean_dec(v_i_4490_);
v_res_4499_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_mkCasesOnSameCtor_spec__2(v_tail_4483_, v_params_4484_, v_a_4485_, v_snd_4486_, v_alts_4487_, v_as_4488_, v_sz_boxed_4497_, v_i_boxed_4498_, v_bs_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
lean_dec_ref(v_as_4488_);
lean_dec_ref(v_params_4484_);
return v_res_4499_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
}
#ifdef __cplusplus
}
#endif
