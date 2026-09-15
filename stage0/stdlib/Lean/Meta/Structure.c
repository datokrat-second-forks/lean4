// Lean compiler output
// Module: Lean.Meta.Structure
// Imports: public import Lean.AddDecl public import Lean.Meta.AppBuilder import Lean.Structure import Lean.Meta.Transform
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_isOutParam(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_addProjectionFnInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_updateForallBinderInfos(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVarsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_getStructureName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_getStructureName___closed__0 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__0_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__1;
static const lean_string_object l_Lean_Meta_getStructureName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is not a structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__2 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__2_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__3;
static const lean_string_object l_Lean_Meta_getStructureName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected structure"};
static const lean_object* l_Lean_Meta_getStructureName___closed__4 = (const lean_object*)&l_Lean_Meta_getStructureName___closed__4_value;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to generate projection `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "` for `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "`, not enough constructor fields"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` for the 'Prop'-valued type `"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, field must be a proof, but it has type"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`, too many structure parameter overrides"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkProjections___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "projection generation failed, `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__3;
static const lean_string_object l_Lean_Meta_mkProjections___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` is an ill-formed inductive datatype"};
static const lean_object* l_Lean_Meta_mkProjections___lam__1___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__7 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__8 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__9 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "cannot generate projections for `"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__1;
static const lean_string_object l_Lean_Meta_mkProjections___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "`, does not have exactly one constructor"};
static const lean_object* l_Lean_Meta_mkProjections___lam__2___closed__2 = (const lean_object*)&l_Lean_Meta_mkProjections___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__0;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__1;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__2;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__3;
static const lean_array_object l_Lean_Meta_mkProjections___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_mkProjections___closed__4 = (const lean_object*)&l_Lean_Meta_mkProjections___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_etaStructReduce___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_etaStructReduce___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_value;
static const lean_array_object l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_etaStructReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_etaStructReduce___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_etaStructReduce___closed__0 = (const lean_object*)&l_Lean_Meta_etaStructReduce___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 78, 141, 85, 50, 255, 216, 83)}};
static const lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.Structure"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lean.Meta.instantiateStructDefaultValueFn\?"};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_value;
static const lean_string_object l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "assertion violation: us.length == cinfo.levelParams.length\n  "};
static const lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2 = (const lean_object*)&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_value;
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v_toCold_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_3_);
v_toCold_10_ = lean_ctor_get(v___y_4_, 0);
v_mctx_11_ = lean_ctor_get(v___x_9_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_9_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v_toCold_10_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 2);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__0));
v___x_50_ = l_Lean_stringToMessageData(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__2));
v___x_53_ = l_Lean_stringToMessageData(v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__5(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(l_Lean_Meta_getStructureName___closed__4));
v___x_56_ = l_Lean_stringToMessageData(v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object* v_struct_57_, lean_object* v___y_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Expr_getAppFn(v_struct_57_);
if (lean_obj_tag(v___x_63_) == 4)
{
lean_object* v_declName_64_; lean_object* v___x_65_; lean_object* v_env_66_; uint8_t v___x_67_; 
v_declName_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc_n(v_declName_64_, 2);
lean_dec_ref_known(v___x_63_, 2);
v___x_65_ = lean_st_ref_get(v___y_61_);
v_env_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc_ref(v_env_66_);
lean_dec(v___x_65_);
v___x_67_ = l_Lean_isStructure(v_env_66_, v_declName_64_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v___x_68_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_69_ = l_Lean_MessageData_ofConstName(v_declName_64_, v___x_67_);
v___x_70_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__3, &l_Lean_Meta_getStructureName___closed__3_once, _init_l_Lean_Meta_getStructureName___closed__3);
v___x_72_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_72_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
v_a_74_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_73_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_73_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_declName_64_);
return v___x_82_;
}
}
else
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec_ref(v___x_63_);
v___x_83_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__5, &l_Lean_Meta_getStructureName___closed__5_once, _init_l_Lean_Meta_getStructureName___closed__5);
v___x_84_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_83_, v___y_58_, v___y_59_, v___y_60_, v___y_61_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object* v_struct_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_Meta_getStructureName(v_struct_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec_ref(v_struct_85_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object* v_00_u03b1_100_, lean_object* v_msg_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(v_00_u03b1_100_, v_msg_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object* v_name_108_, lean_object* v_levelParams_109_, lean_object* v_type_110_, lean_object* v_value_111_, lean_object* v_hints_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; uint8_t v___y_117_; uint8_t v___y_124_; lean_object* v_env_127_; uint8_t v___x_128_; 
v___x_115_ = lean_st_ref_get(v___y_113_);
v_env_127_ = lean_ctor_get(v___x_115_, 0);
lean_inc_ref_n(v_env_127_, 2);
lean_dec(v___x_115_);
v___x_128_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_type_110_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_value_111_);
v___y_124_ = v___x_129_;
goto v___jp_123_;
}
else
{
lean_dec_ref(v_env_127_);
v___y_124_ = v___x_128_;
goto v___jp_123_;
}
v___jp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
lean_inc(v_name_108_);
v___x_118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_118_, 0, v_name_108_);
lean_ctor_set(v___x_118_, 1, v_levelParams_109_);
lean_ctor_set(v___x_118_, 2, v_type_110_);
v___x_119_ = lean_box(0);
v___x_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_120_, 0, v_name_108_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_121_, 0, v___x_118_);
lean_ctor_set(v___x_121_, 1, v_value_111_);
lean_ctor_set(v___x_121_, 2, v_hints_112_);
lean_ctor_set(v___x_121_, 3, v___x_120_);
lean_ctor_set_uint8(v___x_121_, sizeof(void*)*4, v___y_117_);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
return v___x_122_;
}
v___jp_123_:
{
if (v___y_124_ == 0)
{
uint8_t v___x_125_; 
v___x_125_ = 1;
v___y_117_ = v___x_125_;
goto v___jp_116_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
v___y_117_ = v___x_126_;
goto v___jp_116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object* v_name_130_, lean_object* v_levelParams_131_, lean_object* v_type_132_, lean_object* v_value_133_, lean_object* v_hints_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_130_, v_levelParams_131_, v_type_132_, v_value_133_, v_hints_134_, v___y_135_);
lean_dec(v___y_135_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object* v_name_138_, lean_object* v_levelParams_139_, lean_object* v_type_140_, lean_object* v_value_141_, lean_object* v_hints_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_138_, v_levelParams_139_, v_type_140_, v_value_141_, v_hints_142_, v___y_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object* v_name_149_, lean_object* v_levelParams_150_, lean_object* v_type_151_, lean_object* v_value_152_, lean_object* v_hints_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(v_name_149_, v_levelParams_150_, v_type_151_, v_value_152_, v_hints_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object* v_k_160_, lean_object* v_b_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
lean_inc(v___y_163_);
lean_inc_ref(v___y_162_);
v___x_167_ = lean_apply_6(v_k_160_, v_b_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, lean_box(0));
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object* v_k_168_, lean_object* v_b_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(v_k_168_, v_b_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object* v_name_176_, uint8_t v_bi_177_, lean_object* v_type_178_, lean_object* v_k_179_, uint8_t v_kind_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___f_186_; lean_object* v___x_187_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_186_, 0, v_k_179_);
v___x_187_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_176_, v_bi_177_, v_type_178_, v___f_186_, v_kind_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
v_a_196_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_187_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_187_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object* v_name_204_, lean_object* v_bi_205_, lean_object* v_type_206_, lean_object* v_k_207_, lean_object* v_kind_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
uint8_t v_bi_boxed_214_; uint8_t v_kind_boxed_215_; lean_object* v_res_216_; 
v_bi_boxed_214_ = lean_unbox(v_bi_205_);
v_kind_boxed_215_ = lean_unbox(v_kind_208_);
v_res_216_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_204_, v_bi_boxed_214_, v_type_206_, v_k_207_, v_kind_boxed_215_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object* v_00_u03b1_217_, lean_object* v_name_218_, uint8_t v_bi_219_, lean_object* v_type_220_, lean_object* v_k_221_, uint8_t v_kind_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_218_, v_bi_219_, v_type_220_, v_k_221_, v_kind_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object* v_00_u03b1_229_, lean_object* v_name_230_, lean_object* v_bi_231_, lean_object* v_type_232_, lean_object* v_k_233_, lean_object* v_kind_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
uint8_t v_bi_boxed_240_; uint8_t v_kind_boxed_241_; lean_object* v_res_242_; 
v_bi_boxed_240_ = lean_unbox(v_bi_231_);
v_kind_boxed_241_ = lean_unbox(v_kind_234_);
v_res_242_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(v_00_u03b1_229_, v_name_230_, v_bi_boxed_240_, v_type_232_, v_k_233_, v_kind_boxed_241_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object* v_k_243_, lean_object* v_b_244_, lean_object* v_c_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
lean_object* v___x_251_; 
lean_inc(v___y_249_);
lean_inc_ref(v___y_248_);
lean_inc(v___y_247_);
lean_inc_ref(v___y_246_);
v___x_251_ = lean_apply_7(v_k_243_, v_b_244_, v_c_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, lean_box(0));
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object* v_k_252_, lean_object* v_b_253_, lean_object* v_c_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(v_k_252_, v_b_253_, v_c_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object* v_type_261_, lean_object* v_maxFVars_x3f_262_, lean_object* v_k_263_, uint8_t v_cleanupAnnotations_264_, uint8_t v_whnfType_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___f_271_; lean_object* v___x_272_; 
v___f_271_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_271_, 0, v_k_263_);
v___x_272_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_261_, v_maxFVars_x3f_262_, v___f_271_, v_cleanupAnnotations_264_, v_whnfType_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_272_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_272_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object* v_type_289_, lean_object* v_maxFVars_x3f_290_, lean_object* v_k_291_, lean_object* v_cleanupAnnotations_292_, lean_object* v_whnfType_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_299_; uint8_t v_whnfType_boxed_300_; lean_object* v_res_301_; 
v_cleanupAnnotations_boxed_299_ = lean_unbox(v_cleanupAnnotations_292_);
v_whnfType_boxed_300_ = lean_unbox(v_whnfType_293_);
v_res_301_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_289_, v_maxFVars_x3f_290_, v_k_291_, v_cleanupAnnotations_boxed_299_, v_whnfType_boxed_300_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object* v_00_u03b1_302_, lean_object* v_type_303_, lean_object* v_maxFVars_x3f_304_, lean_object* v_k_305_, uint8_t v_cleanupAnnotations_306_, uint8_t v_whnfType_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_303_, v_maxFVars_x3f_304_, v_k_305_, v_cleanupAnnotations_306_, v_whnfType_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object* v_00_u03b1_314_, lean_object* v_type_315_, lean_object* v_maxFVars_x3f_316_, lean_object* v_k_317_, lean_object* v_cleanupAnnotations_318_, lean_object* v_whnfType_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_325_; uint8_t v_whnfType_boxed_326_; lean_object* v_res_327_; 
v_cleanupAnnotations_boxed_325_ = lean_unbox(v_cleanupAnnotations_318_);
v_whnfType_boxed_326_ = lean_unbox(v_whnfType_319_);
v_res_327_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(v_00_u03b1_314_, v_type_315_, v_maxFVars_x3f_316_, v_k_317_, v_cleanupAnnotations_boxed_325_, v_whnfType_boxed_326_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object* v_lctx_328_, lean_object* v_localInsts_329_, lean_object* v_x_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_328_, v_localInsts_329_, v_x_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_336_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_336_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object* v_lctx_353_, lean_object* v_localInsts_354_, lean_object* v_x_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_353_, v_localInsts_354_, v_x_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object* v_00_u03b1_362_, lean_object* v_lctx_363_, lean_object* v_localInsts_364_, lean_object* v_x_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_363_, v_localInsts_364_, v_x_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object* v_00_u03b1_372_, lean_object* v_lctx_373_, lean_object* v_localInsts_374_, lean_object* v_x_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(v_00_u03b1_372_, v_lctx_373_, v_localInsts_374_, v_x_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object* v_ref_382_, lean_object* v_msg_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_toCold_389_; lean_object* v_currRecDepth_390_; lean_object* v_ref_391_; uint8_t v_diag_392_; uint8_t v_suppressElabErrors_393_; lean_object* v_ref_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_toCold_389_ = lean_ctor_get(v___y_386_, 0);
v_currRecDepth_390_ = lean_ctor_get(v___y_386_, 1);
v_ref_391_ = lean_ctor_get(v___y_386_, 2);
v_diag_392_ = lean_ctor_get_uint8(v___y_386_, sizeof(void*)*3);
v_suppressElabErrors_393_ = lean_ctor_get_uint8(v___y_386_, sizeof(void*)*3 + 1);
v_ref_394_ = l_Lean_replaceRef(v_ref_382_, v_ref_391_);
lean_inc(v_currRecDepth_390_);
lean_inc_ref(v_toCold_389_);
v___x_395_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_395_, 0, v_toCold_389_);
lean_ctor_set(v___x_395_, 1, v_currRecDepth_390_);
lean_ctor_set(v___x_395_, 2, v_ref_394_);
lean_ctor_set_uint8(v___x_395_, sizeof(void*)*3, v_diag_392_);
lean_ctor_set_uint8(v___x_395_, sizeof(void*)*3 + 1, v_suppressElabErrors_393_);
v___x_396_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_383_, v___y_384_, v___y_385_, v___x_395_, v___y_387_);
lean_dec_ref_known(v___x_395_, 3);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object* v_ref_397_, lean_object* v_msg_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_397_, v_msg_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v_ref_397_);
return v_res_404_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0));
v___x_407_ = l_Lean_stringToMessageData(v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__2));
v___x_410_ = l_Lean_stringToMessageData(v___x_409_);
return v___x_410_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__4));
v___x_413_ = l_Lean_stringToMessageData(v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t v___x_414_, lean_object* v_projName_415_, lean_object* v_n_416_, lean_object* v_ref_417_, lean_object* v___f_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
if (v___x_414_ == 0)
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_424_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
v___x_425_ = l_Lean_MessageData_ofName(v_projName_415_);
v___x_426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3);
v___x_428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_428_, 0, v___x_426_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = l_Lean_MessageData_ofConstName(v_n_416_, v___x_414_);
v___x_430_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_428_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__5);
v___x_432_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_417_, v___x_432_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_435_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_434_);
lean_dec_ref_known(v___x_433_, 1);
lean_inc(v___y_422_);
lean_inc_ref(v___y_421_);
lean_inc(v___y_420_);
lean_inc_ref(v___y_419_);
v___x_435_ = lean_apply_6(v___f_418_, v_a_434_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, lean_box(0));
return v___x_435_;
}
else
{
lean_object* v_a_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
lean_dec_ref(v___f_418_);
v_a_436_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v___x_433_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_a_436_);
lean_dec(v___x_433_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_a_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
return v___x_441_;
}
}
}
}
else
{
lean_object* v___x_444_; lean_object* v___x_445_; 
lean_dec(v_n_416_);
lean_dec(v_projName_415_);
v___x_444_ = lean_box(0);
lean_inc(v___y_422_);
lean_inc_ref(v___y_421_);
lean_inc(v___y_420_);
lean_inc_ref(v___y_419_);
v___x_445_ = lean_apply_6(v___f_418_, v___x_444_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, lean_box(0));
return v___x_445_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object* v___x_446_, lean_object* v_projName_447_, lean_object* v_n_448_, lean_object* v_ref_449_, lean_object* v___f_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
uint8_t v___x_17975__boxed_456_; lean_object* v_res_457_; 
v___x_17975__boxed_456_ = lean_unbox(v___x_446_);
v_res_457_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(v___x_17975__boxed_456_, v_projName_447_, v_n_448_, v_ref_449_, v___f_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
lean_dec(v_ref_449_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_458_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0);
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
return v___x_460_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1);
v___x_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v___x_461_);
return v___x_462_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_463_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__1);
v___x_464_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
lean_ctor_set(v___x_464_, 2, v___x_463_);
lean_ctor_set(v___x_464_, 3, v___x_463_);
lean_ctor_set(v___x_464_, 4, v___x_463_);
lean_ctor_set(v___x_464_, 5, v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object* v_declName_465_, uint8_t v_s_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v___x_470_; lean_object* v_env_471_; lean_object* v_nextMacroScope_472_; lean_object* v_ngen_473_; lean_object* v_auxDeclNGen_474_; lean_object* v_traceState_475_; lean_object* v_messages_476_; lean_object* v_infoState_477_; lean_object* v_snapshotTasks_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_507_; 
v___x_470_ = lean_st_ref_take(v___y_468_);
v_env_471_ = lean_ctor_get(v___x_470_, 0);
v_nextMacroScope_472_ = lean_ctor_get(v___x_470_, 1);
v_ngen_473_ = lean_ctor_get(v___x_470_, 2);
v_auxDeclNGen_474_ = lean_ctor_get(v___x_470_, 3);
v_traceState_475_ = lean_ctor_get(v___x_470_, 4);
v_messages_476_ = lean_ctor_get(v___x_470_, 6);
v_infoState_477_ = lean_ctor_get(v___x_470_, 7);
v_snapshotTasks_478_ = lean_ctor_get(v___x_470_, 8);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_507_ == 0)
{
lean_object* v_unused_508_; 
v_unused_508_ = lean_ctor_get(v___x_470_, 5);
lean_dec(v_unused_508_);
v___x_480_ = v___x_470_;
v_isShared_481_ = v_isSharedCheck_507_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_snapshotTasks_478_);
lean_inc(v_infoState_477_);
lean_inc(v_messages_476_);
lean_inc(v_traceState_475_);
lean_inc(v_auxDeclNGen_474_);
lean_inc(v_ngen_473_);
lean_inc(v_nextMacroScope_472_);
lean_inc(v_env_471_);
lean_dec(v___x_470_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_507_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
uint8_t v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_487_; 
v___x_482_ = 0;
v___x_483_ = lean_box(0);
v___x_484_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_471_, v_declName_465_, v_s_466_, v___x_482_, v___x_483_);
v___x_485_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 5, v___x_485_);
lean_ctor_set(v___x_480_, 0, v___x_484_);
v___x_487_ = v___x_480_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_484_);
lean_ctor_set(v_reuseFailAlloc_506_, 1, v_nextMacroScope_472_);
lean_ctor_set(v_reuseFailAlloc_506_, 2, v_ngen_473_);
lean_ctor_set(v_reuseFailAlloc_506_, 3, v_auxDeclNGen_474_);
lean_ctor_set(v_reuseFailAlloc_506_, 4, v_traceState_475_);
lean_ctor_set(v_reuseFailAlloc_506_, 5, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_506_, 6, v_messages_476_);
lean_ctor_set(v_reuseFailAlloc_506_, 7, v_infoState_477_);
lean_ctor_set(v_reuseFailAlloc_506_, 8, v_snapshotTasks_478_);
v___x_487_ = v_reuseFailAlloc_506_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v_mctx_490_; lean_object* v_zetaDeltaFVarIds_491_; lean_object* v_postponed_492_; lean_object* v_diag_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_504_; 
v___x_488_ = lean_st_ref_put(v___y_468_, v___x_487_);
v___x_489_ = lean_st_ref_take(v___y_467_);
v_mctx_490_ = lean_ctor_get(v___x_489_, 0);
v_zetaDeltaFVarIds_491_ = lean_ctor_get(v___x_489_, 2);
v_postponed_492_ = lean_ctor_get(v___x_489_, 3);
v_diag_493_ = lean_ctor_get(v___x_489_, 4);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_504_ == 0)
{
lean_object* v_unused_505_; 
v_unused_505_ = lean_ctor_get(v___x_489_, 1);
lean_dec(v_unused_505_);
v___x_495_ = v___x_489_;
v_isShared_496_ = v_isSharedCheck_504_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_diag_493_);
lean_inc(v_postponed_492_);
lean_inc(v_zetaDeltaFVarIds_491_);
lean_inc(v_mctx_490_);
lean_dec(v___x_489_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_504_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
v___x_497_ = lean_box(0);
v___x_498_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 1, v___x_498_);
v___x_500_ = v___x_495_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_mctx_490_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v___x_498_);
lean_ctor_set(v_reuseFailAlloc_503_, 2, v_zetaDeltaFVarIds_491_);
lean_ctor_set(v_reuseFailAlloc_503_, 3, v_postponed_492_);
lean_ctor_set(v_reuseFailAlloc_503_, 4, v_diag_493_);
v___x_500_ = v_reuseFailAlloc_503_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = lean_st_ref_put(v___y_467_, v___x_500_);
v___x_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_502_, 0, v___x_497_);
return v___x_502_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object* v_declName_509_, lean_object* v_s_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
uint8_t v_s_boxed_514_; lean_object* v_res_515_; 
v_s_boxed_514_ = lean_unbox(v_s_510_);
v_res_515_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_509_, v_s_boxed_514_, v___y_511_, v___y_512_);
lean_dec(v___y_512_);
lean_dec(v___y_511_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object* v_declName_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
uint8_t v___x_522_; lean_object* v___x_523_; 
v___x_522_ = 0;
v___x_523_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_516_, v___x_522_, v___y_518_, v___y_520_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object* v_declName_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_declName_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
return v_res_530_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_532_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0));
v___x_533_ = l_Lean_stringToMessageData(v___x_532_);
return v___x_533_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2));
v___x_536_ = l_Lean_stringToMessageData(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4));
v___x_539_ = l_Lean_stringToMessageData(v___x_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object* v___x_540_, lean_object* v_projName_541_, lean_object* v___x_542_, lean_object* v_a_543_, uint8_t v_instImplicit_544_, lean_object* v___x_545_, lean_object* v_params_546_, lean_object* v_self_547_, lean_object* v_b_548_, uint8_t v___x_549_, lean_object* v_a_550_, lean_object* v___x_551_, lean_object* v_paramInfoOverrides_552_, lean_object* v_n_553_, lean_object* v_ref_554_, lean_object* v___x_555_, uint8_t v_a_556_, lean_object* v_____r_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_609_; lean_object* v___y_610_; lean_object* v___y_611_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; uint8_t v___y_625_; lean_object* v___y_626_; uint8_t v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_636_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_715_ = l_List_lengthTR___redArg(v_paramInfoOverrides_552_);
v___x_716_ = lean_array_get_size(v_params_546_);
v___x_717_ = lean_nat_dec_le(v___x_715_, v___x_716_);
lean_dec(v___x_715_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_718_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
lean_inc(v_projName_541_);
v___x_719_ = l_Lean_MessageData_ofName(v_projName_541_);
v___x_720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_718_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v___x_721_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__3);
v___x_722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_720_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
lean_inc(v_n_553_);
v___x_723_ = l_Lean_MessageData_ofConstName(v_n_553_, v___x_717_);
v___x_724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_724_, 0, v___x_722_);
lean_ctor_set(v___x_724_, 1, v___x_723_);
v___x_725_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5);
v___x_726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_726_, 0, v___x_724_);
lean_ctor_set(v___x_726_, 1, v___x_725_);
v___x_727_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_554_, v___x_726_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_727_) == 0)
{
lean_dec_ref_known(v___x_727_, 1);
goto v___jp_676_;
}
else
{
lean_object* v_a_728_; lean_object* v___x_730_; uint8_t v_isShared_731_; uint8_t v_isSharedCheck_735_; 
lean_dec(v___x_555_);
lean_dec(v_n_553_);
lean_dec_ref(v_a_550_);
lean_dec_ref(v_self_547_);
lean_dec(v___x_545_);
lean_dec(v_a_543_);
lean_dec(v___x_542_);
lean_dec(v_projName_541_);
lean_dec_ref(v___x_540_);
v_a_728_ = lean_ctor_get(v___x_727_, 0);
v_isSharedCheck_735_ = !lean_is_exclusive(v___x_727_);
if (v_isSharedCheck_735_ == 0)
{
v___x_730_ = v___x_727_;
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
else
{
lean_inc(v_a_728_);
lean_dec(v___x_727_);
v___x_730_ = lean_box(0);
v_isShared_731_ = v_isSharedCheck_735_;
goto v_resetjp_729_;
}
v_resetjp_729_:
{
lean_object* v___x_733_; 
if (v_isShared_731_ == 0)
{
v___x_733_ = v___x_730_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_a_728_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
}
}
else
{
goto v___jp_676_;
}
v___jp_563_:
{
lean_object* v___x_566_; lean_object* v_env_567_; lean_object* v_nextMacroScope_568_; lean_object* v_ngen_569_; lean_object* v_auxDeclNGen_570_; lean_object* v_traceState_571_; lean_object* v_messages_572_; lean_object* v_infoState_573_; lean_object* v_snapshotTasks_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_606_; 
v___x_566_ = lean_st_ref_take(v___y_564_);
v_env_567_ = lean_ctor_get(v___x_566_, 0);
v_nextMacroScope_568_ = lean_ctor_get(v___x_566_, 1);
v_ngen_569_ = lean_ctor_get(v___x_566_, 2);
v_auxDeclNGen_570_ = lean_ctor_get(v___x_566_, 3);
v_traceState_571_ = lean_ctor_get(v___x_566_, 4);
v_messages_572_ = lean_ctor_get(v___x_566_, 6);
v_infoState_573_ = lean_ctor_get(v___x_566_, 7);
v_snapshotTasks_574_ = lean_ctor_get(v___x_566_, 8);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_606_ == 0)
{
lean_object* v_unused_607_; 
v_unused_607_ = lean_ctor_get(v___x_566_, 5);
lean_dec(v_unused_607_);
v___x_576_ = v___x_566_;
v_isShared_577_ = v_isSharedCheck_606_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_snapshotTasks_574_);
lean_inc(v_infoState_573_);
lean_inc(v_messages_572_);
lean_inc(v_traceState_571_);
lean_inc(v_auxDeclNGen_570_);
lean_inc(v_ngen_569_);
lean_inc(v_nextMacroScope_568_);
lean_inc(v_env_567_);
lean_dec(v___x_566_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_606_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v_name_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_582_; 
v_name_578_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_name_578_);
lean_dec_ref(v___x_540_);
lean_inc(v_projName_541_);
v___x_579_ = l_Lean_addProjectionFnInfo(v_env_567_, v_projName_541_, v_name_578_, v___x_542_, v_a_543_, v_instImplicit_544_);
v___x_580_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 5, v___x_580_);
lean_ctor_set(v___x_576_, 0, v___x_579_);
v___x_582_ = v___x_576_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_579_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_nextMacroScope_568_);
lean_ctor_set(v_reuseFailAlloc_605_, 2, v_ngen_569_);
lean_ctor_set(v_reuseFailAlloc_605_, 3, v_auxDeclNGen_570_);
lean_ctor_set(v_reuseFailAlloc_605_, 4, v_traceState_571_);
lean_ctor_set(v_reuseFailAlloc_605_, 5, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_605_, 6, v_messages_572_);
lean_ctor_set(v_reuseFailAlloc_605_, 7, v_infoState_573_);
lean_ctor_set(v_reuseFailAlloc_605_, 8, v_snapshotTasks_574_);
v___x_582_ = v_reuseFailAlloc_605_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v_mctx_585_; lean_object* v_zetaDeltaFVarIds_586_; lean_object* v_postponed_587_; lean_object* v_diag_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_603_; 
v___x_583_ = lean_st_ref_put(v___y_564_, v___x_582_);
v___x_584_ = lean_st_ref_take(v___y_565_);
v_mctx_585_ = lean_ctor_get(v___x_584_, 0);
v_zetaDeltaFVarIds_586_ = lean_ctor_get(v___x_584_, 2);
v_postponed_587_ = lean_ctor_get(v___x_584_, 3);
v_diag_588_ = lean_ctor_get(v___x_584_, 4);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v___x_584_, 1);
lean_dec(v_unused_604_);
v___x_590_ = v___x_584_;
v_isShared_591_ = v_isSharedCheck_603_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_diag_588_);
lean_inc(v_postponed_587_);
lean_inc(v_zetaDeltaFVarIds_586_);
lean_inc(v_mctx_585_);
lean_dec(v___x_584_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_603_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_592_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v___x_592_);
v___x_594_ = v___x_590_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_mctx_585_);
lean_ctor_set(v_reuseFailAlloc_602_, 1, v___x_592_);
lean_ctor_set(v_reuseFailAlloc_602_, 2, v_zetaDeltaFVarIds_586_);
lean_ctor_set(v_reuseFailAlloc_602_, 3, v_postponed_587_);
lean_ctor_set(v_reuseFailAlloc_602_, 4, v_diag_588_);
v___x_594_ = v_reuseFailAlloc_602_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_595_ = lean_st_ref_put(v___y_565_, v___x_594_);
v___x_596_ = l_Lean_Expr_const___override(v_projName_541_, v___x_545_);
v___x_597_ = l_Lean_mkAppN(v___x_596_, v_params_546_);
v___x_598_ = l_Lean_Expr_app___override(v___x_597_, v_self_547_);
v___x_599_ = l_Lean_Expr_bindingBody_x21(v_b_548_);
v___x_600_ = lean_expr_instantiate1(v___x_599_, v___x_598_);
lean_dec_ref(v___x_598_);
lean_dec_ref(v___x_599_);
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
return v___x_601_;
}
}
}
}
}
v___jp_608_:
{
if (lean_obj_tag(v___y_611_) == 0)
{
lean_dec_ref_known(v___y_611_, 1);
v___y_564_ = v___y_609_;
v___y_565_ = v___y_610_;
goto v___jp_563_;
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
lean_dec_ref(v_self_547_);
lean_dec(v___x_545_);
lean_dec(v_a_543_);
lean_dec(v___x_542_);
lean_dec(v_projName_541_);
lean_dec_ref(v___x_540_);
v_a_612_ = lean_ctor_get(v___y_611_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___y_611_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___y_611_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___y_611_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
v___jp_620_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_627_ = lean_box(0);
lean_inc(v_projName_541_);
v___x_628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_628_, 0, v_projName_541_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_629_, 0, v___y_623_);
lean_ctor_set(v___x_629_, 1, v___y_626_);
lean_ctor_set(v___x_629_, 2, v___x_628_);
lean_ctor_set_uint8(v___x_629_, sizeof(void*)*3, v___x_549_);
v___x_630_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
v___x_631_ = l_Lean_addDecl(v___x_630_, v___y_625_, v___y_622_, v___y_621_);
lean_dec_ref(v___y_622_);
v___y_609_ = v___y_621_;
v___y_610_ = v___y_624_;
v___y_611_ = v___x_631_;
goto v___jp_608_;
}
v___jp_632_:
{
uint8_t v___x_639_; lean_object* v___x_640_; lean_object* v_toCold_641_; lean_object* v_currRecDepth_642_; lean_object* v_ref_643_; uint8_t v_diag_644_; uint8_t v_suppressElabErrors_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v_ref_650_; lean_object* v___x_651_; 
v___x_639_ = 0;
lean_inc_ref(v_a_550_);
v___x_640_ = l_Lean_LocalContext_mkForall(v_a_550_, v___x_551_, v___y_634_, v___x_549_, v___x_639_);
lean_dec_ref(v___y_634_);
v_toCold_641_ = lean_ctor_get(v___y_637_, 0);
v_currRecDepth_642_ = lean_ctor_get(v___y_637_, 1);
v_ref_643_ = lean_ctor_get(v___y_637_, 2);
v_diag_644_ = lean_ctor_get_uint8(v___y_637_, sizeof(void*)*3);
v_suppressElabErrors_645_ = lean_ctor_get_uint8(v___y_637_, sizeof(void*)*3 + 1);
v___x_646_ = l_Lean_Expr_inferImplicit(v___x_640_, v___x_542_, v___x_549_);
v___x_647_ = l_Lean_Expr_updateForallBinderInfos(v___x_646_, v_paramInfoOverrides_552_);
lean_inc_ref(v_self_547_);
lean_inc(v_a_543_);
v___x_648_ = l_Lean_Expr_proj___override(v_n_553_, v_a_543_, v_self_547_);
v___x_649_ = l_Lean_LocalContext_mkLambda(v_a_550_, v___x_551_, v___x_648_, v___x_549_, v___x_639_);
lean_dec_ref(v___x_648_);
v_ref_650_ = l_Lean_replaceRef(v_ref_554_, v_ref_643_);
lean_inc(v_currRecDepth_642_);
lean_inc_ref(v_toCold_641_);
v___x_651_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_651_, 0, v_toCold_641_);
lean_ctor_set(v___x_651_, 1, v_currRecDepth_642_);
lean_ctor_set(v___x_651_, 2, v_ref_650_);
lean_ctor_set_uint8(v___x_651_, sizeof(void*)*3, v_diag_644_);
lean_ctor_set_uint8(v___x_651_, sizeof(void*)*3 + 1, v_suppressElabErrors_645_);
if (v___y_633_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_box(1);
lean_inc(v_projName_541_);
v___x_653_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_projName_541_, v___x_555_, v___x_647_, v___x_649_, v___x_652_, v___y_638_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_653_, 1);
v___x_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_655_, 0, v_a_654_);
v___x_656_ = l_Lean_addDecl(v___x_655_, v___x_639_, v___x_651_, v___y_638_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_dec_ref_known(v___x_656_, 1);
if (v_instImplicit_544_ == 0)
{
lean_object* v___x_657_; 
lean_inc(v_projName_541_);
v___x_657_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_projName_541_, v___y_635_, v___y_636_, v___x_651_, v___y_638_);
lean_dec_ref_known(v___x_651_, 3);
v___y_609_ = v___y_638_;
v___y_610_ = v___y_636_;
v___y_611_ = v___x_657_;
goto v___jp_608_;
}
else
{
lean_dec_ref_known(v___x_651_, 3);
v___y_564_ = v___y_638_;
v___y_565_ = v___y_636_;
goto v___jp_563_;
}
}
else
{
lean_dec_ref_known(v___x_651_, 3);
v___y_609_ = v___y_638_;
v___y_610_ = v___y_636_;
v___y_611_ = v___x_656_;
goto v___jp_608_;
}
}
else
{
lean_object* v_a_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_665_; 
lean_dec_ref_known(v___x_651_, 3);
lean_dec_ref(v_self_547_);
lean_dec(v___x_545_);
lean_dec(v_a_543_);
lean_dec(v___x_542_);
lean_dec(v_projName_541_);
lean_dec_ref(v___x_540_);
v_a_658_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_665_ == 0)
{
v___x_660_ = v___x_653_;
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_a_658_);
lean_dec(v___x_653_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_665_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_663_; 
if (v_isShared_661_ == 0)
{
v___x_663_ = v___x_660_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_a_658_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
else
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v_env_668_; uint8_t v___x_669_; 
lean_inc_ref(v___x_647_);
lean_inc(v_projName_541_);
v___x_666_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_666_, 0, v_projName_541_);
lean_ctor_set(v___x_666_, 1, v___x_555_);
lean_ctor_set(v___x_666_, 2, v___x_647_);
v___x_667_ = lean_st_ref_get(v___y_638_);
v_env_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc_ref_n(v_env_668_, 2);
lean_dec(v___x_667_);
v___x_669_ = l_Lean_Environment_hasUnsafe(v_env_668_, v___x_647_);
lean_dec_ref(v___x_647_);
if (v___x_669_ == 0)
{
uint8_t v___x_670_; 
v___x_670_ = l_Lean_Environment_hasUnsafe(v_env_668_, v___x_649_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_671_ = lean_box(0);
lean_inc(v_projName_541_);
v___x_672_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_672_, 0, v_projName_541_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_673_, 0, v___x_666_);
lean_ctor_set(v___x_673_, 1, v___x_649_);
lean_ctor_set(v___x_673_, 2, v___x_672_);
v___x_674_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
v___x_675_ = l_Lean_addDecl(v___x_674_, v___x_639_, v___x_651_, v___y_638_);
lean_dec_ref_known(v___x_651_, 3);
v___y_609_ = v___y_638_;
v___y_610_ = v___y_636_;
v___y_611_ = v___x_675_;
goto v___jp_608_;
}
else
{
v___y_621_ = v___y_638_;
v___y_622_ = v___x_651_;
v___y_623_ = v___x_666_;
v___y_624_ = v___y_636_;
v___y_625_ = v___x_639_;
v___y_626_ = v___x_649_;
goto v___jp_620_;
}
}
else
{
lean_dec_ref(v_env_668_);
v___y_621_ = v___y_638_;
v___y_622_ = v___x_651_;
v___y_623_ = v___x_666_;
v___y_624_ = v___y_636_;
v___y_625_ = v___x_639_;
v___y_626_ = v___x_649_;
goto v___jp_620_;
}
}
}
v___jp_676_:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_677_ = l_Lean_Expr_bindingDomain_x21(v_b_548_);
v___x_678_ = lean_expr_consume_type_annotations(v___x_677_);
lean_inc_ref(v___x_678_);
v___x_679_ = l_Lean_Meta_isProp(v___x_678_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_679_) == 0)
{
if (v_a_556_ == 0)
{
lean_object* v_a_680_; uint8_t v___x_681_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_a_680_);
lean_dec_ref_known(v___x_679_, 1);
v___x_681_ = lean_unbox(v_a_680_);
lean_dec(v_a_680_);
v___y_633_ = v___x_681_;
v___y_634_ = v___x_678_;
v___y_635_ = v___y_558_;
v___y_636_ = v___y_559_;
v___y_637_ = v___y_560_;
v___y_638_ = v___y_561_;
goto v___jp_632_;
}
else
{
lean_object* v_a_682_; uint8_t v___x_683_; 
v_a_682_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_679_, 1);
v___x_683_ = lean_unbox(v_a_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; uint8_t v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_684_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
lean_inc(v_projName_541_);
v___x_685_ = l_Lean_MessageData_ofName(v_projName_541_);
v___x_686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_686_, 0, v___x_684_);
lean_ctor_set(v___x_686_, 1, v___x_685_);
v___x_687_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1);
v___x_688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_686_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = lean_unbox(v_a_682_);
lean_inc(v_n_553_);
v___x_690_ = l_Lean_MessageData_ofConstName(v_n_553_, v___x_689_);
v___x_691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_688_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
v___x_692_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3);
v___x_693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
lean_inc_ref(v___x_678_);
v___x_694_ = l_Lean_indentExpr(v___x_678_);
v___x_695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_693_);
lean_ctor_set(v___x_695_, 1, v___x_694_);
v___x_696_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_554_, v___x_695_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_696_) == 0)
{
uint8_t v___x_697_; 
lean_dec_ref_known(v___x_696_, 1);
v___x_697_ = lean_unbox(v_a_682_);
lean_dec(v_a_682_);
v___y_633_ = v___x_697_;
v___y_634_ = v___x_678_;
v___y_635_ = v___y_558_;
v___y_636_ = v___y_559_;
v___y_637_ = v___y_560_;
v___y_638_ = v___y_561_;
goto v___jp_632_;
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec(v_a_682_);
lean_dec_ref(v___x_678_);
lean_dec(v___x_555_);
lean_dec(v_n_553_);
lean_dec_ref(v_a_550_);
lean_dec_ref(v_self_547_);
lean_dec(v___x_545_);
lean_dec(v_a_543_);
lean_dec(v___x_542_);
lean_dec(v_projName_541_);
lean_dec_ref(v___x_540_);
v_a_698_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_696_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_696_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
else
{
uint8_t v___x_706_; 
v___x_706_ = lean_unbox(v_a_682_);
lean_dec(v_a_682_);
v___y_633_ = v___x_706_;
v___y_634_ = v___x_678_;
v___y_635_ = v___y_558_;
v___y_636_ = v___y_559_;
v___y_637_ = v___y_560_;
v___y_638_ = v___y_561_;
goto v___jp_632_;
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
lean_dec_ref(v___x_678_);
lean_dec(v___x_555_);
lean_dec(v_n_553_);
lean_dec_ref(v_a_550_);
lean_dec_ref(v_self_547_);
lean_dec(v___x_545_);
lean_dec(v_a_543_);
lean_dec(v___x_542_);
lean_dec(v_projName_541_);
lean_dec_ref(v___x_540_);
v_a_707_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_679_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_679_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
return v___x_712_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_736_ = _args[0];
lean_object* v_projName_737_ = _args[1];
lean_object* v___x_738_ = _args[2];
lean_object* v_a_739_ = _args[3];
lean_object* v_instImplicit_740_ = _args[4];
lean_object* v___x_741_ = _args[5];
lean_object* v_params_742_ = _args[6];
lean_object* v_self_743_ = _args[7];
lean_object* v_b_744_ = _args[8];
lean_object* v___x_745_ = _args[9];
lean_object* v_a_746_ = _args[10];
lean_object* v___x_747_ = _args[11];
lean_object* v_paramInfoOverrides_748_ = _args[12];
lean_object* v_n_749_ = _args[13];
lean_object* v_ref_750_ = _args[14];
lean_object* v___x_751_ = _args[15];
lean_object* v_a_752_ = _args[16];
lean_object* v_____r_753_ = _args[17];
lean_object* v___y_754_ = _args[18];
lean_object* v___y_755_ = _args[19];
lean_object* v___y_756_ = _args[20];
lean_object* v___y_757_ = _args[21];
lean_object* v___y_758_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_759_; uint8_t v___x_18214__boxed_760_; uint8_t v_a_18220__boxed_761_; lean_object* v_res_762_; 
v_instImplicit_boxed_759_ = lean_unbox(v_instImplicit_740_);
v___x_18214__boxed_760_ = lean_unbox(v___x_745_);
v_a_18220__boxed_761_ = lean_unbox(v_a_752_);
v_res_762_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(v___x_736_, v_projName_737_, v___x_738_, v_a_739_, v_instImplicit_boxed_759_, v___x_741_, v_params_742_, v_self_743_, v_b_744_, v___x_18214__boxed_760_, v_a_746_, v___x_747_, v_paramInfoOverrides_748_, v_n_749_, v_ref_750_, v___x_751_, v_a_18220__boxed_761_, v_____r_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v_ref_750_);
lean_dec(v_paramInfoOverrides_748_);
lean_dec_ref(v___x_747_);
lean_dec_ref(v_b_744_);
lean_dec_ref(v_params_742_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object* v___y_763_, uint8_t v_isExporting_764_, lean_object* v___x_765_, lean_object* v___y_766_, lean_object* v___x_767_, lean_object* v_a_x3f_768_){
_start:
{
lean_object* v___x_770_; lean_object* v_env_771_; lean_object* v_nextMacroScope_772_; lean_object* v_ngen_773_; lean_object* v_auxDeclNGen_774_; lean_object* v_traceState_775_; lean_object* v_messages_776_; lean_object* v_infoState_777_; lean_object* v_snapshotTasks_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_803_; 
v___x_770_ = lean_st_ref_take(v___y_763_);
v_env_771_ = lean_ctor_get(v___x_770_, 0);
v_nextMacroScope_772_ = lean_ctor_get(v___x_770_, 1);
v_ngen_773_ = lean_ctor_get(v___x_770_, 2);
v_auxDeclNGen_774_ = lean_ctor_get(v___x_770_, 3);
v_traceState_775_ = lean_ctor_get(v___x_770_, 4);
v_messages_776_ = lean_ctor_get(v___x_770_, 6);
v_infoState_777_ = lean_ctor_get(v___x_770_, 7);
v_snapshotTasks_778_ = lean_ctor_get(v___x_770_, 8);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_803_ == 0)
{
lean_object* v_unused_804_; 
v_unused_804_ = lean_ctor_get(v___x_770_, 5);
lean_dec(v_unused_804_);
v___x_780_ = v___x_770_;
v_isShared_781_ = v_isSharedCheck_803_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_snapshotTasks_778_);
lean_inc(v_infoState_777_);
lean_inc(v_messages_776_);
lean_inc(v_traceState_775_);
lean_inc(v_auxDeclNGen_774_);
lean_inc(v_ngen_773_);
lean_inc(v_nextMacroScope_772_);
lean_inc(v_env_771_);
lean_dec(v___x_770_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_803_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_782_ = l_Lean_Environment_setExporting(v_env_771_, v_isExporting_764_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 5, v___x_765_);
lean_ctor_set(v___x_780_, 0, v___x_782_);
v___x_784_ = v___x_780_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_782_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_nextMacroScope_772_);
lean_ctor_set(v_reuseFailAlloc_802_, 2, v_ngen_773_);
lean_ctor_set(v_reuseFailAlloc_802_, 3, v_auxDeclNGen_774_);
lean_ctor_set(v_reuseFailAlloc_802_, 4, v_traceState_775_);
lean_ctor_set(v_reuseFailAlloc_802_, 5, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_802_, 6, v_messages_776_);
lean_ctor_set(v_reuseFailAlloc_802_, 7, v_infoState_777_);
lean_ctor_set(v_reuseFailAlloc_802_, 8, v_snapshotTasks_778_);
v___x_784_ = v_reuseFailAlloc_802_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v_mctx_787_; lean_object* v_zetaDeltaFVarIds_788_; lean_object* v_postponed_789_; lean_object* v_diag_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_800_; 
v___x_785_ = lean_st_ref_put(v___y_763_, v___x_784_);
v___x_786_ = lean_st_ref_take(v___y_766_);
v_mctx_787_ = lean_ctor_get(v___x_786_, 0);
v_zetaDeltaFVarIds_788_ = lean_ctor_get(v___x_786_, 2);
v_postponed_789_ = lean_ctor_get(v___x_786_, 3);
v_diag_790_ = lean_ctor_get(v___x_786_, 4);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_800_ == 0)
{
lean_object* v_unused_801_; 
v_unused_801_ = lean_ctor_get(v___x_786_, 1);
lean_dec(v_unused_801_);
v___x_792_ = v___x_786_;
v_isShared_793_ = v_isSharedCheck_800_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_diag_790_);
lean_inc(v_postponed_789_);
lean_inc(v_zetaDeltaFVarIds_788_);
lean_inc(v_mctx_787_);
lean_dec(v___x_786_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_800_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_794_ = lean_box(0);
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 1, v___x_767_);
v___x_796_ = v___x_792_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_mctx_787_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_799_, 2, v_zetaDeltaFVarIds_788_);
lean_ctor_set(v_reuseFailAlloc_799_, 3, v_postponed_789_);
lean_ctor_set(v_reuseFailAlloc_799_, 4, v_diag_790_);
v___x_796_ = v_reuseFailAlloc_799_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_st_ref_put(v___y_766_, v___x_796_);
v___x_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_794_);
return v___x_798_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v___y_805_, lean_object* v_isExporting_806_, lean_object* v___x_807_, lean_object* v___y_808_, lean_object* v___x_809_, lean_object* v_a_x3f_810_, lean_object* v___y_811_){
_start:
{
uint8_t v_isExporting_boxed_812_; lean_object* v_res_813_; 
v_isExporting_boxed_812_ = lean_unbox(v_isExporting_806_);
v_res_813_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_805_, v_isExporting_boxed_812_, v___x_807_, v___y_808_, v___x_809_, v_a_x3f_810_);
lean_dec(v_a_x3f_810_);
lean_dec(v___y_808_);
lean_dec(v___y_805_);
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object* v_x_814_, uint8_t v_isExporting_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v___x_821_; lean_object* v_env_822_; lean_object* v___x_823_; uint8_t v_isModule_824_; 
v___x_821_ = lean_st_ref_get(v___y_819_);
v_env_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc_ref(v_env_822_);
lean_dec(v___x_821_);
v___x_823_ = l_Lean_Environment_header(v_env_822_);
v_isModule_824_ = lean_ctor_get_uint8(v___x_823_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_823_);
if (v_isModule_824_ == 0)
{
lean_object* v___x_825_; 
lean_dec_ref(v_env_822_);
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
lean_inc(v___y_817_);
lean_inc_ref(v___y_816_);
v___x_825_ = lean_apply_5(v_x_814_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, lean_box(0));
return v___x_825_;
}
else
{
uint8_t v_isExporting_826_; 
v_isExporting_826_ = lean_ctor_get_uint8(v_env_822_, sizeof(void*)*8);
lean_dec_ref(v_env_822_);
if (v_isExporting_815_ == 0)
{
if (v_isExporting_826_ == 0)
{
lean_object* v___x_892_; 
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
lean_inc(v___y_817_);
lean_inc_ref(v___y_816_);
v___x_892_ = lean_apply_5(v_x_814_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, lean_box(0));
return v___x_892_;
}
else
{
goto v___jp_827_;
}
}
else
{
if (v_isExporting_826_ == 0)
{
goto v___jp_827_;
}
else
{
lean_object* v___x_893_; 
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
lean_inc(v___y_817_);
lean_inc_ref(v___y_816_);
v___x_893_ = lean_apply_5(v_x_814_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, lean_box(0));
return v___x_893_;
}
}
v___jp_827_:
{
lean_object* v___x_828_; lean_object* v_env_829_; lean_object* v_nextMacroScope_830_; lean_object* v_ngen_831_; lean_object* v_auxDeclNGen_832_; lean_object* v_traceState_833_; lean_object* v_messages_834_; lean_object* v_infoState_835_; lean_object* v_snapshotTasks_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_890_; 
v___x_828_ = lean_st_ref_take(v___y_819_);
v_env_829_ = lean_ctor_get(v___x_828_, 0);
v_nextMacroScope_830_ = lean_ctor_get(v___x_828_, 1);
v_ngen_831_ = lean_ctor_get(v___x_828_, 2);
v_auxDeclNGen_832_ = lean_ctor_get(v___x_828_, 3);
v_traceState_833_ = lean_ctor_get(v___x_828_, 4);
v_messages_834_ = lean_ctor_get(v___x_828_, 6);
v_infoState_835_ = lean_ctor_get(v___x_828_, 7);
v_snapshotTasks_836_ = lean_ctor_get(v___x_828_, 8);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_890_ == 0)
{
lean_object* v_unused_891_; 
v_unused_891_ = lean_ctor_get(v___x_828_, 5);
lean_dec(v_unused_891_);
v___x_838_ = v___x_828_;
v_isShared_839_ = v_isSharedCheck_890_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_snapshotTasks_836_);
lean_inc(v_infoState_835_);
lean_inc(v_messages_834_);
lean_inc(v_traceState_833_);
lean_inc(v_auxDeclNGen_832_);
lean_inc(v_ngen_831_);
lean_inc(v_nextMacroScope_830_);
lean_inc(v_env_829_);
lean_dec(v___x_828_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_890_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_840_ = l_Lean_Environment_setExporting(v_env_829_, v_isExporting_815_);
v___x_841_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__2);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 5, v___x_841_);
lean_ctor_set(v___x_838_, 0, v___x_840_);
v___x_843_ = v___x_838_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_840_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_nextMacroScope_830_);
lean_ctor_set(v_reuseFailAlloc_889_, 2, v_ngen_831_);
lean_ctor_set(v_reuseFailAlloc_889_, 3, v_auxDeclNGen_832_);
lean_ctor_set(v_reuseFailAlloc_889_, 4, v_traceState_833_);
lean_ctor_set(v_reuseFailAlloc_889_, 5, v___x_841_);
lean_ctor_set(v_reuseFailAlloc_889_, 6, v_messages_834_);
lean_ctor_set(v_reuseFailAlloc_889_, 7, v_infoState_835_);
lean_ctor_set(v_reuseFailAlloc_889_, 8, v_snapshotTasks_836_);
v___x_843_ = v_reuseFailAlloc_889_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v_mctx_846_; lean_object* v_zetaDeltaFVarIds_847_; lean_object* v_postponed_848_; lean_object* v_diag_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_887_; 
v___x_844_ = lean_st_ref_put(v___y_819_, v___x_843_);
v___x_845_ = lean_st_ref_take(v___y_817_);
v_mctx_846_ = lean_ctor_get(v___x_845_, 0);
v_zetaDeltaFVarIds_847_ = lean_ctor_get(v___x_845_, 2);
v_postponed_848_ = lean_ctor_get(v___x_845_, 3);
v_diag_849_ = lean_ctor_get(v___x_845_, 4);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_845_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; 
v_unused_888_ = lean_ctor_get(v___x_845_, 1);
lean_dec(v_unused_888_);
v___x_851_ = v___x_845_;
v_isShared_852_ = v_isSharedCheck_887_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_diag_849_);
lean_inc(v_postponed_848_);
lean_inc(v_zetaDeltaFVarIds_847_);
lean_inc(v_mctx_846_);
lean_dec(v___x_845_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_887_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_853_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__3);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v___x_853_);
v___x_855_ = v___x_851_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_mctx_846_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v_zetaDeltaFVarIds_847_);
lean_ctor_set(v_reuseFailAlloc_886_, 3, v_postponed_848_);
lean_ctor_set(v_reuseFailAlloc_886_, 4, v_diag_849_);
v___x_855_ = v_reuseFailAlloc_886_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_st_ref_put(v___y_817_, v___x_855_);
lean_inc(v___y_819_);
lean_inc_ref(v___y_818_);
lean_inc(v___y_817_);
lean_inc_ref(v___y_816_);
v___x_857_ = lean_apply_5(v_x_814_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, lean_box(0));
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_874_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_874_ == 0)
{
v___x_860_ = v___x_857_;
v_isShared_861_ = v_isSharedCheck_874_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_874_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
lean_inc(v_a_858_);
if (v_isShared_861_ == 0)
{
lean_ctor_set_tag(v___x_860_, 1);
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_873_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
v___x_864_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_819_, v_isExporting_826_, v___x_841_, v___y_817_, v___x_853_, v___x_863_);
lean_dec_ref(v___x_863_);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_871_ == 0)
{
lean_object* v_unused_872_; 
v_unused_872_ = lean_ctor_get(v___x_864_, 0);
lean_dec(v_unused_872_);
v___x_866_ = v___x_864_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_dec(v___x_864_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
lean_ctor_set(v___x_866_, 0, v_a_858_);
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_858_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_875_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_857_, 1);
v___x_876_ = lean_box(0);
v___x_877_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_819_, v_isExporting_826_, v___x_841_, v___y_817_, v___x_853_, v___x_876_);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_884_ == 0)
{
lean_object* v_unused_885_; 
v_unused_885_ = lean_ctor_get(v___x_877_, 0);
lean_dec(v_unused_885_);
v___x_879_ = v___x_877_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_dec(v___x_877_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set_tag(v___x_879_, 1);
lean_ctor_set(v___x_879_, 0, v_a_875_);
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_875_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object* v_x_894_, lean_object* v_isExporting_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
uint8_t v_isExporting_boxed_901_; lean_object* v_res_902_; 
v_isExporting_boxed_901_ = lean_unbox(v_isExporting_895_);
v_res_902_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_894_, v_isExporting_boxed_901_, v___y_896_, v___y_897_, v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec_ref(v___y_896_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object* v_x_903_, uint8_t v_when_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
if (v_when_904_ == 0)
{
lean_object* v___x_910_; 
lean_inc(v___y_908_);
lean_inc_ref(v___y_907_);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
v___x_910_ = lean_apply_5(v_x_903_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, lean_box(0));
return v___x_910_;
}
else
{
uint8_t v___x_911_; lean_object* v___x_912_; 
v___x_911_ = 0;
v___x_912_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_903_, v___x_911_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
return v___x_912_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object* v_x_913_, lean_object* v_when_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
uint8_t v_when_boxed_920_; lean_object* v_res_921_; 
v_when_boxed_920_ = lean_unbox(v_when_914_);
v_res_921_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_913_, v_when_boxed_920_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_921_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object* v_upperBound_922_, lean_object* v_projDecls_923_, lean_object* v___x_924_, lean_object* v___x_925_, uint8_t v_instImplicit_926_, lean_object* v___x_927_, lean_object* v_params_928_, lean_object* v_self_929_, lean_object* v_a_930_, lean_object* v___x_931_, lean_object* v_n_932_, lean_object* v___x_933_, uint8_t v_a_934_, lean_object* v_a_935_, lean_object* v_b_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
uint8_t v___x_942_; 
v___x_942_ = lean_nat_dec_lt(v_a_935_, v_upperBound_922_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; 
lean_dec(v_a_935_);
lean_dec(v___x_933_);
lean_dec(v_n_932_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_self_929_);
lean_dec_ref(v_params_928_);
lean_dec(v___x_927_);
lean_dec(v___x_925_);
lean_dec_ref(v___x_924_);
v___x_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_943_, 0, v_b_936_);
return v___x_943_;
}
else
{
lean_object* v___x_944_; lean_object* v_ref_945_; lean_object* v_projName_946_; lean_object* v_paramInfoOverrides_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___f_951_; uint8_t v___x_952_; lean_object* v___x_953_; lean_object* v___y_954_; uint8_t v___x_955_; lean_object* v___x_956_; 
v___x_944_ = lean_array_fget_borrowed(v_projDecls_923_, v_a_935_);
v_ref_945_ = lean_ctor_get(v___x_944_, 0);
v_projName_946_ = lean_ctor_get(v___x_944_, 1);
v_paramInfoOverrides_947_ = lean_ctor_get(v___x_944_, 2);
v___x_948_ = lean_box(v_instImplicit_926_);
v___x_949_ = lean_box(v___x_942_);
v___x_950_ = lean_box(v_a_934_);
lean_inc(v___x_933_);
lean_inc_n(v_ref_945_, 2);
lean_inc_n(v_n_932_, 2);
lean_inc(v_paramInfoOverrides_947_);
lean_inc_ref(v___x_931_);
lean_inc_ref(v_a_930_);
lean_inc_ref(v_b_936_);
lean_inc_ref(v_self_929_);
lean_inc_ref(v_params_928_);
lean_inc(v___x_927_);
lean_inc(v_a_935_);
lean_inc(v___x_925_);
lean_inc_n(v_projName_946_, 2);
lean_inc_ref(v___x_924_);
v___f_951_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed), 23, 17);
lean_closure_set(v___f_951_, 0, v___x_924_);
lean_closure_set(v___f_951_, 1, v_projName_946_);
lean_closure_set(v___f_951_, 2, v___x_925_);
lean_closure_set(v___f_951_, 3, v_a_935_);
lean_closure_set(v___f_951_, 4, v___x_948_);
lean_closure_set(v___f_951_, 5, v___x_927_);
lean_closure_set(v___f_951_, 6, v_params_928_);
lean_closure_set(v___f_951_, 7, v_self_929_);
lean_closure_set(v___f_951_, 8, v_b_936_);
lean_closure_set(v___f_951_, 9, v___x_949_);
lean_closure_set(v___f_951_, 10, v_a_930_);
lean_closure_set(v___f_951_, 11, v___x_931_);
lean_closure_set(v___f_951_, 12, v_paramInfoOverrides_947_);
lean_closure_set(v___f_951_, 13, v_n_932_);
lean_closure_set(v___f_951_, 14, v_ref_945_);
lean_closure_set(v___f_951_, 15, v___x_933_);
lean_closure_set(v___f_951_, 16, v___x_950_);
v___x_952_ = l_Lean_Expr_isForall(v_b_936_);
lean_dec_ref(v_b_936_);
v___x_953_ = lean_box(v___x_952_);
v___y_954_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed), 10, 5);
lean_closure_set(v___y_954_, 0, v___x_953_);
lean_closure_set(v___y_954_, 1, v_projName_946_);
lean_closure_set(v___y_954_, 2, v_n_932_);
lean_closure_set(v___y_954_, 3, v_ref_945_);
lean_closure_set(v___y_954_, 4, v___f_951_);
v___x_955_ = l_Lean_isPrivateName(v_projName_946_);
v___x_956_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v___y_954_, v___x_955_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
if (lean_obj_tag(v___x_956_) == 0)
{
lean_object* v_a_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
lean_inc(v_a_957_);
lean_dec_ref_known(v___x_956_, 1);
v___x_958_ = lean_unsigned_to_nat(1u);
v___x_959_ = lean_nat_add(v_a_935_, v___x_958_);
lean_dec(v_a_935_);
v_a_935_ = v___x_959_;
v_b_936_ = v_a_957_;
goto _start;
}
else
{
lean_dec(v_a_935_);
lean_dec(v___x_933_);
lean_dec(v_n_932_);
lean_dec_ref(v___x_931_);
lean_dec_ref(v_a_930_);
lean_dec_ref(v_self_929_);
lean_dec_ref(v_params_928_);
lean_dec(v___x_927_);
lean_dec(v___x_925_);
lean_dec_ref(v___x_924_);
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_961_ = _args[0];
lean_object* v_projDecls_962_ = _args[1];
lean_object* v___x_963_ = _args[2];
lean_object* v___x_964_ = _args[3];
lean_object* v_instImplicit_965_ = _args[4];
lean_object* v___x_966_ = _args[5];
lean_object* v_params_967_ = _args[6];
lean_object* v_self_968_ = _args[7];
lean_object* v_a_969_ = _args[8];
lean_object* v___x_970_ = _args[9];
lean_object* v_n_971_ = _args[10];
lean_object* v___x_972_ = _args[11];
lean_object* v_a_973_ = _args[12];
lean_object* v_a_974_ = _args[13];
lean_object* v_b_975_ = _args[14];
lean_object* v___y_976_ = _args[15];
lean_object* v___y_977_ = _args[16];
lean_object* v___y_978_ = _args[17];
lean_object* v___y_979_ = _args[18];
lean_object* v___y_980_ = _args[19];
_start:
{
uint8_t v_instImplicit_boxed_981_; uint8_t v_a_18819__boxed_982_; lean_object* v_res_983_; 
v_instImplicit_boxed_981_ = lean_unbox(v_instImplicit_965_);
v_a_18819__boxed_982_ = lean_unbox(v_a_973_);
v_res_983_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_961_, v_projDecls_962_, v___x_963_, v___x_964_, v_instImplicit_boxed_981_, v___x_966_, v_params_967_, v_self_968_, v_a_969_, v___x_970_, v_n_971_, v___x_972_, v_a_18819__boxed_982_, v_a_974_, v_b_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
lean_dec_ref(v_projDecls_962_);
lean_dec(v_upperBound_961_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t v_instImplicit_984_, lean_object* v_as_985_, size_t v_sz_986_, size_t v_i_987_, lean_object* v_b_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_a_994_; uint8_t v___x_998_; 
v___x_998_ = lean_usize_dec_lt(v_i_987_, v_sz_986_);
if (v___x_998_ == 0)
{
lean_object* v___x_999_; 
v___x_999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_999_, 0, v_b_988_);
return v___x_999_;
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_a_1000_ = lean_array_uget_borrowed(v_as_985_, v_i_987_);
v___x_1001_ = l_Lean_Expr_fvarId_x21(v_a_1000_);
lean_inc(v___x_1001_);
v___x_1002_ = l_Lean_FVarId_getDecl___redArg(v___x_1001_, v___y_989_, v___y_990_, v___y_991_);
if (lean_obj_tag(v___x_1002_) == 0)
{
lean_object* v_a_1003_; uint8_t v___y_1005_; uint8_t v___x_1008_; uint8_t v___x_1009_; 
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
lean_inc(v_a_1003_);
lean_dec_ref_known(v___x_1002_, 1);
v___x_1008_ = l_Lean_LocalDecl_binderInfo(v_a_1003_);
v___x_1009_ = l_Lean_BinderInfo_isInstImplicit(v___x_1008_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1011_; uint8_t v___x_1012_; 
v___x_1011_ = l_Lean_LocalDecl_type(v_a_1003_);
lean_dec(v_a_1003_);
v___x_1012_ = l_Lean_Expr_isOutParam(v___x_1011_);
lean_dec_ref(v___x_1011_);
if (v___x_1012_ == 0)
{
uint8_t v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = 0;
v___x_1014_ = l_Lean_LocalContext_setBinderInfo(v_b_988_, v___x_1001_, v___x_1013_);
v_a_994_ = v___x_1014_;
goto v___jp_993_;
}
else
{
goto v___jp_1010_;
}
}
else
{
lean_dec(v_a_1003_);
goto v___jp_1010_;
}
v___jp_1004_:
{
if (v___y_1005_ == 0)
{
lean_dec(v___x_1001_);
v_a_994_ = v_b_988_;
goto v___jp_993_;
}
else
{
uint8_t v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = 1;
v___x_1007_ = l_Lean_LocalContext_setBinderInfo(v_b_988_, v___x_1001_, v___x_1006_);
v_a_994_ = v___x_1007_;
goto v___jp_993_;
}
}
v___jp_1010_:
{
if (v___x_1009_ == 0)
{
v___y_1005_ = v___x_1009_;
goto v___jp_1004_;
}
else
{
v___y_1005_ = v_instImplicit_984_;
goto v___jp_1004_;
}
}
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1022_; 
lean_dec(v___x_1001_);
lean_dec_ref(v_b_988_);
v_a_1015_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1022_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1022_ == 0)
{
v___x_1017_ = v___x_1002_;
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1002_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1022_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1020_; 
if (v_isShared_1018_ == 0)
{
v___x_1020_ = v___x_1017_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v_a_1015_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
v___jp_993_:
{
size_t v___x_995_; size_t v___x_996_; 
v___x_995_ = ((size_t)1ULL);
v___x_996_ = lean_usize_add(v_i_987_, v___x_995_);
v_i_987_ = v___x_996_;
v_b_988_ = v_a_994_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object* v_instImplicit_1023_, lean_object* v_as_1024_, lean_object* v_sz_1025_, lean_object* v_i_1026_, lean_object* v_b_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
uint8_t v_instImplicit_boxed_1032_; size_t v_sz_boxed_1033_; size_t v_i_boxed_1034_; lean_object* v_res_1035_; 
v_instImplicit_boxed_1032_ = lean_unbox(v_instImplicit_1023_);
v_sz_boxed_1033_ = lean_unbox_usize(v_sz_1025_);
lean_dec(v_sz_1025_);
v_i_boxed_1034_ = lean_unbox_usize(v_i_1026_);
lean_dec(v_i_1026_);
v_res_1035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_boxed_1032_, v_as_1024_, v_sz_boxed_1033_, v_i_boxed_1034_, v_b_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec_ref(v_as_1024_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object* v_params_1036_, uint8_t v_instImplicit_1037_, lean_object* v_projDecls_1038_, lean_object* v_toConstantVal_1039_, lean_object* v_numParams_1040_, lean_object* v___x_1041_, lean_object* v_n_1042_, lean_object* v_levelParams_1043_, uint8_t v_a_1044_, lean_object* v_ctorType_1045_, lean_object* v_self_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v_lctx_1052_; lean_object* v___x_1053_; size_t v_sz_1054_; size_t v___x_1055_; lean_object* v___x_1056_; 
v_lctx_1052_ = lean_ctor_get(v___y_1047_, 2);
lean_inc_ref(v_self_1046_);
lean_inc_ref(v_params_1036_);
v___x_1053_ = lean_array_push(v_params_1036_, v_self_1046_);
v_sz_1054_ = lean_array_size(v_params_1036_);
v___x_1055_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1052_);
v___x_1056_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1037_, v_params_1036_, v_sz_1054_, v___x_1055_, v_lctx_1052_, v___y_1047_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1058_ = lean_array_get_size(v_projDecls_1038_);
v___x_1059_ = lean_unsigned_to_nat(0u);
v___x_1060_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v___x_1058_, v_projDecls_1038_, v_toConstantVal_1039_, v_numParams_1040_, v_instImplicit_1037_, v___x_1041_, v_params_1036_, v_self_1046_, v_a_1057_, v___x_1053_, v_n_1042_, v_levelParams_1043_, v_a_1044_, v___x_1059_, v_ctorType_1045_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1068_; 
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1068_ == 0)
{
lean_object* v_unused_1069_; 
v_unused_1069_ = lean_ctor_get(v___x_1060_, 0);
lean_dec(v_unused_1069_);
v___x_1062_ = v___x_1060_;
v_isShared_1063_ = v_isSharedCheck_1068_;
goto v_resetjp_1061_;
}
else
{
lean_dec(v___x_1060_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1068_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1064_ = lean_box(0);
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 0, v___x_1064_);
v___x_1066_ = v___x_1062_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
v_a_1070_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1072_ = v___x_1060_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_a_1070_);
lean_dec(v___x_1060_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1075_; 
if (v_isShared_1073_ == 0)
{
v___x_1075_ = v___x_1072_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_a_1070_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec_ref(v___x_1053_);
lean_dec_ref(v_self_1046_);
lean_dec_ref(v_ctorType_1045_);
lean_dec(v_levelParams_1043_);
lean_dec(v_n_1042_);
lean_dec(v___x_1041_);
lean_dec(v_numParams_1040_);
lean_dec_ref(v_toConstantVal_1039_);
lean_dec_ref(v_params_1036_);
v_a_1078_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1056_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1056_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object* v_params_1086_, lean_object* v_instImplicit_1087_, lean_object* v_projDecls_1088_, lean_object* v_toConstantVal_1089_, lean_object* v_numParams_1090_, lean_object* v___x_1091_, lean_object* v_n_1092_, lean_object* v_levelParams_1093_, lean_object* v_a_1094_, lean_object* v_ctorType_1095_, lean_object* v_self_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
uint8_t v_instImplicit_boxed_1102_; uint8_t v_a_18961__boxed_1103_; lean_object* v_res_1104_; 
v_instImplicit_boxed_1102_ = lean_unbox(v_instImplicit_1087_);
v_a_18961__boxed_1103_ = lean_unbox(v_a_1094_);
v_res_1104_ = l_Lean_Meta_mkProjections___lam__0(v_params_1086_, v_instImplicit_boxed_1102_, v_projDecls_1088_, v_toConstantVal_1089_, v_numParams_1090_, v___x_1091_, v_n_1092_, v_levelParams_1093_, v_a_18961__boxed_1103_, v_ctorType_1095_, v_self_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec_ref(v_projDecls_1088_);
return v_res_1104_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1109_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__2));
v___x_1110_ = l_Lean_stringToMessageData(v___x_1109_);
return v___x_1110_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__4));
v___x_1113_ = l_Lean_stringToMessageData(v___x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t v_instImplicit_1114_, lean_object* v_projDecls_1115_, lean_object* v_toConstantVal_1116_, lean_object* v_numParams_1117_, lean_object* v___x_1118_, lean_object* v_n_1119_, lean_object* v_levelParams_1120_, uint8_t v_a_1121_, lean_object* v_params_1122_, lean_object* v_ctorType_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; uint8_t v___y_1136_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___f_1142_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v___x_1140_ = lean_box(v_instImplicit_1114_);
v___x_1141_ = lean_box(v_a_1121_);
lean_inc(v_n_1119_);
lean_inc(v___x_1118_);
lean_inc(v_numParams_1117_);
lean_inc_ref(v_params_1122_);
v___f_1142_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__0___boxed), 16, 10);
lean_closure_set(v___f_1142_, 0, v_params_1122_);
lean_closure_set(v___f_1142_, 1, v___x_1140_);
lean_closure_set(v___f_1142_, 2, v_projDecls_1115_);
lean_closure_set(v___f_1142_, 3, v_toConstantVal_1116_);
lean_closure_set(v___f_1142_, 4, v_numParams_1117_);
lean_closure_set(v___f_1142_, 5, v___x_1118_);
lean_closure_set(v___f_1142_, 6, v_n_1119_);
lean_closure_set(v___f_1142_, 7, v_levelParams_1120_);
lean_closure_set(v___f_1142_, 8, v___x_1141_);
lean_closure_set(v___f_1142_, 9, v_ctorType_1123_);
v___x_1148_ = lean_array_get_size(v_params_1122_);
v___x_1149_ = lean_nat_dec_eq(v___x_1148_, v_numParams_1117_);
lean_dec(v_numParams_1117_);
if (v___x_1149_ == 0)
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
lean_dec_ref(v___f_1142_);
lean_dec_ref(v_params_1122_);
lean_dec(v___x_1118_);
v___x_1150_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__3, &l_Lean_Meta_mkProjections___lam__1___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__3);
v___x_1151_ = l_Lean_MessageData_ofConstName(v_n_1119_, v___x_1149_);
v___x_1152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1150_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__5, &l_Lean_Meta_mkProjections___lam__1___closed__5_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__5);
v___x_1154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
v___x_1155_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1154_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
return v___x_1155_;
}
else
{
goto v___jp_1143_;
}
v___jp_1129_:
{
lean_object* v___x_1137_; uint8_t v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__1___closed__1));
v___x_1138_ = 0;
v___x_1139_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v___x_1137_, v___y_1136_, v___y_1130_, v___y_1131_, v___x_1138_, v___y_1134_, v___y_1133_, v___y_1135_, v___y_1132_);
return v___x_1139_;
}
v___jp_1143_:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1144_ = l_Lean_Expr_const___override(v_n_1119_, v___x_1118_);
v___x_1145_ = l_Lean_mkAppN(v___x_1144_, v_params_1122_);
lean_dec_ref(v_params_1122_);
if (v_instImplicit_1114_ == 0)
{
uint8_t v___x_1146_; 
v___x_1146_ = 0;
v___y_1130_ = v___x_1145_;
v___y_1131_ = v___f_1142_;
v___y_1132_ = v___y_1127_;
v___y_1133_ = v___y_1125_;
v___y_1134_ = v___y_1124_;
v___y_1135_ = v___y_1126_;
v___y_1136_ = v___x_1146_;
goto v___jp_1129_;
}
else
{
uint8_t v___x_1147_; 
v___x_1147_ = 3;
v___y_1130_ = v___x_1145_;
v___y_1131_ = v___f_1142_;
v___y_1132_ = v___y_1127_;
v___y_1133_ = v___y_1125_;
v___y_1134_ = v___y_1124_;
v___y_1135_ = v___y_1126_;
v___y_1136_ = v___x_1147_;
goto v___jp_1129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object* v_instImplicit_1156_, lean_object* v_projDecls_1157_, lean_object* v_toConstantVal_1158_, lean_object* v_numParams_1159_, lean_object* v___x_1160_, lean_object* v_n_1161_, lean_object* v_levelParams_1162_, lean_object* v_a_1163_, lean_object* v_params_1164_, lean_object* v_ctorType_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
uint8_t v_instImplicit_boxed_1171_; uint8_t v_a_19065__boxed_1172_; lean_object* v_res_1173_; 
v_instImplicit_boxed_1171_ = lean_unbox(v_instImplicit_1156_);
v_a_19065__boxed_1172_ = lean_unbox(v_a_1163_);
v_res_1173_ = l_Lean_Meta_mkProjections___lam__1(v_instImplicit_boxed_1171_, v_projDecls_1157_, v_toConstantVal_1158_, v_numParams_1159_, v___x_1160_, v_n_1161_, v_levelParams_1162_, v_a_19065__boxed_1172_, v_params_1164_, v_ctorType_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object* v_a_1174_, lean_object* v_a_1175_){
_start:
{
if (lean_obj_tag(v_a_1174_) == 0)
{
lean_object* v___x_1176_; 
v___x_1176_ = l_List_reverse___redArg(v_a_1175_);
return v___x_1176_;
}
else
{
lean_object* v_head_1177_; lean_object* v_tail_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1187_; 
v_head_1177_ = lean_ctor_get(v_a_1174_, 0);
v_tail_1178_ = lean_ctor_get(v_a_1174_, 1);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_a_1174_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1180_ = v_a_1174_;
v_isShared_1181_ = v_isSharedCheck_1187_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_tail_1178_);
lean_inc(v_head_1177_);
lean_dec(v_a_1174_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1187_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1182_ = l_Lean_mkLevelParam(v_head_1177_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v_a_1175_);
lean_ctor_set(v___x_1180_, 0, v___x_1182_);
v___x_1184_ = v___x_1180_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v_a_1175_);
v___x_1184_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
v_a_1174_ = v_tail_1178_;
v_a_1175_ = v___x_1184_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object* v_msg_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v___f_1204_; lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___f_1208_; lean_object* v___f_1209_; lean_object* v___f_1210_; lean_object* v___f_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v_toApplicative_1216_; lean_object* v___x_1218_; uint8_t v_isShared_1219_; uint8_t v_isSharedCheck_1277_; 
v___f_1204_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0));
v___f_1205_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1));
v___f_1206_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2));
v___f_1207_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3));
v___f_1208_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4));
v___f_1209_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1209_, 0, v___f_1208_);
lean_closure_set(v___f_1209_, 1, v___f_1207_);
v___f_1210_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1210_, 0, v___f_1207_);
v___f_1211_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__5));
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___f_1204_);
lean_ctor_set(v___x_1212_, 1, v___f_1205_);
v___x_1213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___f_1206_);
lean_ctor_set(v___x_1213_, 2, v___f_1209_);
lean_ctor_set(v___x_1213_, 3, v___f_1210_);
lean_ctor_set(v___x_1213_, 4, v___f_1211_);
v___x_1214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
lean_ctor_set(v___x_1214_, 1, v___f_1207_);
v___x_1215_ = l_StateRefT_x27_instMonad___redArg(v___x_1214_);
v_toApplicative_1216_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; 
v_unused_1278_ = lean_ctor_get(v___x_1215_, 1);
lean_dec(v_unused_1278_);
v___x_1218_ = v___x_1215_;
v_isShared_1219_ = v_isSharedCheck_1277_;
goto v_resetjp_1217_;
}
else
{
lean_inc(v_toApplicative_1216_);
lean_dec(v___x_1215_);
v___x_1218_ = lean_box(0);
v_isShared_1219_ = v_isSharedCheck_1277_;
goto v_resetjp_1217_;
}
v_resetjp_1217_:
{
lean_object* v_toFunctor_1220_; lean_object* v_toSeq_1221_; lean_object* v_toSeqLeft_1222_; lean_object* v_toSeqRight_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1275_; 
v_toFunctor_1220_ = lean_ctor_get(v_toApplicative_1216_, 0);
v_toSeq_1221_ = lean_ctor_get(v_toApplicative_1216_, 2);
v_toSeqLeft_1222_ = lean_ctor_get(v_toApplicative_1216_, 3);
v_toSeqRight_1223_ = lean_ctor_get(v_toApplicative_1216_, 4);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_toApplicative_1216_);
if (v_isSharedCheck_1275_ == 0)
{
lean_object* v_unused_1276_; 
v_unused_1276_ = lean_ctor_get(v_toApplicative_1216_, 1);
lean_dec(v_unused_1276_);
v___x_1225_ = v_toApplicative_1216_;
v_isShared_1226_ = v_isSharedCheck_1275_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_toSeqRight_1223_);
lean_inc(v_toSeqLeft_1222_);
lean_inc(v_toSeq_1221_);
lean_inc(v_toFunctor_1220_);
lean_dec(v_toApplicative_1216_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1275_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___f_1227_; lean_object* v___f_1228_; lean_object* v___f_1229_; lean_object* v___f_1230_; lean_object* v___x_1231_; lean_object* v___f_1232_; lean_object* v___f_1233_; lean_object* v___f_1234_; lean_object* v___x_1236_; 
v___f_1227_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__6));
v___f_1228_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__7));
lean_inc_ref(v_toFunctor_1220_);
v___f_1229_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1229_, 0, v_toFunctor_1220_);
v___f_1230_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1230_, 0, v_toFunctor_1220_);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___f_1229_);
lean_ctor_set(v___x_1231_, 1, v___f_1230_);
v___f_1232_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1232_, 0, v_toSeqRight_1223_);
v___f_1233_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1233_, 0, v_toSeqLeft_1222_);
v___f_1234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1234_, 0, v_toSeq_1221_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 4, v___f_1232_);
lean_ctor_set(v___x_1225_, 3, v___f_1233_);
lean_ctor_set(v___x_1225_, 2, v___f_1234_);
lean_ctor_set(v___x_1225_, 1, v___f_1227_);
lean_ctor_set(v___x_1225_, 0, v___x_1231_);
v___x_1236_ = v___x_1225_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v___f_1227_);
lean_ctor_set(v_reuseFailAlloc_1274_, 2, v___f_1234_);
lean_ctor_set(v_reuseFailAlloc_1274_, 3, v___f_1233_);
lean_ctor_set(v_reuseFailAlloc_1274_, 4, v___f_1232_);
v___x_1236_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
lean_object* v___x_1238_; 
if (v_isShared_1219_ == 0)
{
lean_ctor_set(v___x_1218_, 1, v___f_1228_);
lean_ctor_set(v___x_1218_, 0, v___x_1236_);
v___x_1238_ = v___x_1218_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v___f_1228_);
v___x_1238_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1239_; lean_object* v_toApplicative_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1271_; 
v___x_1239_ = l_StateRefT_x27_instMonad___redArg(v___x_1238_);
v_toApplicative_1240_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1271_ == 0)
{
lean_object* v_unused_1272_; 
v_unused_1272_ = lean_ctor_get(v___x_1239_, 1);
lean_dec(v_unused_1272_);
v___x_1242_ = v___x_1239_;
v_isShared_1243_ = v_isSharedCheck_1271_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_toApplicative_1240_);
lean_dec(v___x_1239_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1271_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v_toFunctor_1244_; lean_object* v_toSeq_1245_; lean_object* v_toSeqLeft_1246_; lean_object* v_toSeqRight_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1269_; 
v_toFunctor_1244_ = lean_ctor_get(v_toApplicative_1240_, 0);
v_toSeq_1245_ = lean_ctor_get(v_toApplicative_1240_, 2);
v_toSeqLeft_1246_ = lean_ctor_get(v_toApplicative_1240_, 3);
v_toSeqRight_1247_ = lean_ctor_get(v_toApplicative_1240_, 4);
v_isSharedCheck_1269_ = !lean_is_exclusive(v_toApplicative_1240_);
if (v_isSharedCheck_1269_ == 0)
{
lean_object* v_unused_1270_; 
v_unused_1270_ = lean_ctor_get(v_toApplicative_1240_, 1);
lean_dec(v_unused_1270_);
v___x_1249_ = v_toApplicative_1240_;
v_isShared_1250_ = v_isSharedCheck_1269_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_toSeqRight_1247_);
lean_inc(v_toSeqLeft_1246_);
lean_inc(v_toSeq_1245_);
lean_inc(v_toFunctor_1244_);
lean_dec(v_toApplicative_1240_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1269_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___f_1251_; lean_object* v___f_1252_; lean_object* v___f_1253_; lean_object* v___f_1254_; lean_object* v___x_1255_; lean_object* v___f_1256_; lean_object* v___f_1257_; lean_object* v___f_1258_; lean_object* v___x_1260_; 
v___f_1251_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__8));
v___f_1252_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__9));
lean_inc_ref(v_toFunctor_1244_);
v___f_1253_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1253_, 0, v_toFunctor_1244_);
v___f_1254_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1254_, 0, v_toFunctor_1244_);
v___x_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1255_, 0, v___f_1253_);
lean_ctor_set(v___x_1255_, 1, v___f_1254_);
v___f_1256_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1256_, 0, v_toSeqRight_1247_);
v___f_1257_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1257_, 0, v_toSeqLeft_1246_);
v___f_1258_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1258_, 0, v_toSeq_1245_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 4, v___f_1256_);
lean_ctor_set(v___x_1249_, 3, v___f_1257_);
lean_ctor_set(v___x_1249_, 2, v___f_1258_);
lean_ctor_set(v___x_1249_, 1, v___f_1251_);
lean_ctor_set(v___x_1249_, 0, v___x_1255_);
v___x_1260_ = v___x_1249_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1255_);
lean_ctor_set(v_reuseFailAlloc_1268_, 1, v___f_1251_);
lean_ctor_set(v_reuseFailAlloc_1268_, 2, v___f_1258_);
lean_ctor_set(v_reuseFailAlloc_1268_, 3, v___f_1257_);
lean_ctor_set(v_reuseFailAlloc_1268_, 4, v___f_1256_);
v___x_1260_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1262_; 
if (v_isShared_1243_ == 0)
{
lean_ctor_set(v___x_1242_, 1, v___f_1252_);
lean_ctor_set(v___x_1242_, 0, v___x_1260_);
v___x_1262_ = v___x_1242_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1260_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v___f_1252_);
v___x_1262_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_13549__overap_1265_; lean_object* v___x_1266_; 
v___x_1263_ = lean_box(0);
v___x_1264_ = l_instInhabitedOfMonad___redArg(v___x_1262_, v___x_1263_);
v___x_13549__overap_1265_ = lean_panic_fn_borrowed(v___x_1264_, v_msg_1198_);
lean_dec(v___x_1264_);
lean_inc(v___y_1202_);
lean_inc_ref(v___y_1201_);
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1199_);
v___x_1266_ = lean_apply_5(v___x_13549__overap_1265_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, lean_box(0));
return v___x_1266_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object* v_msg_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v_msg_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
return v_res_1285_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0));
v___x_1288_ = l_Lean_stringToMessageData(v___x_1287_);
return v___x_1288_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1292_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4));
v___x_1293_ = lean_unsigned_to_nat(11u);
v___x_1294_ = lean_unsigned_to_nat(122u);
v___x_1295_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3));
v___x_1296_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2));
v___x_1297_ = l_mkPanicMessageWithDecl(v___x_1296_, v___x_1295_, v___x_1294_, v___x_1293_, v___x_1292_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object* v_constName_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1312_; lean_object* v_env_1313_; uint8_t v___x_1314_; lean_object* v___x_1315_; 
v___x_1312_ = lean_st_ref_get(v___y_1302_);
v_env_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc_ref(v_env_1313_);
lean_dec(v___x_1312_);
v___x_1314_ = 0;
lean_inc(v_constName_1298_);
v___x_1315_ = l_Lean_Environment_findAsync_x3f(v_env_1313_, v_constName_1298_, v___x_1314_);
if (lean_obj_tag(v___x_1315_) == 1)
{
lean_object* v_val_1316_; uint8_t v_kind_1317_; 
v_val_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_val_1316_);
lean_dec_ref_known(v___x_1315_, 1);
v_kind_1317_ = lean_ctor_get_uint8(v_val_1316_, sizeof(void*)*3);
if (v_kind_1317_ == 6)
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1316_);
if (lean_obj_tag(v___x_1318_) == 6)
{
lean_object* v_val_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec(v_constName_1298_);
v_val_1319_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1318_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_val_1319_);
lean_dec(v___x_1318_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
lean_ctor_set_tag(v___x_1321_, 0);
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_val_1319_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
else
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
lean_dec_ref(v___x_1318_);
v___x_1327_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_1328_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_1327_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1337_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1331_ = v___x_1328_;
v_isShared_1332_ = v_isSharedCheck_1337_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1328_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1337_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
if (lean_obj_tag(v_a_1329_) == 0)
{
lean_del_object(v___x_1331_);
goto v___jp_1304_;
}
else
{
lean_object* v_val_1333_; lean_object* v___x_1335_; 
lean_dec(v_constName_1298_);
v_val_1333_ = lean_ctor_get(v_a_1329_, 0);
lean_inc(v_val_1333_);
lean_dec_ref_known(v_a_1329_, 1);
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 0, v_val_1333_);
v___x_1335_ = v___x_1331_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v_val_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
else
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1345_; 
lean_dec(v_constName_1298_);
v_a_1338_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1340_ = v___x_1328_;
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v___x_1328_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1345_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
}
}
else
{
lean_dec(v_val_1316_);
goto v___jp_1304_;
}
}
else
{
lean_dec(v___x_1315_);
goto v___jp_1304_;
}
v___jp_1304_:
{
lean_object* v___x_1305_; uint8_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1305_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1306_ = 0;
v___x_1307_ = l_Lean_MessageData_ofConstName(v_constName_1298_, v___x_1306_);
v___x_1308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1308_, 0, v___x_1305_);
lean_ctor_set(v___x_1308_, 1, v___x_1307_);
v___x_1309_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1);
v___x_1310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1308_);
lean_ctor_set(v___x_1310_, 1, v___x_1309_);
v___x_1311_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1310_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
return v___x_1311_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object* v_constName_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v_constName_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
return v_res_1352_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0));
v___x_1355_ = l_Lean_stringToMessageData(v___x_1354_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object* v_constName_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v___x_1362_; lean_object* v_env_1363_; lean_object* v___x_1364_; 
v___x_1362_ = lean_st_ref_get(v___y_1360_);
v_env_1363_ = lean_ctor_get(v___x_1362_, 0);
lean_inc_ref(v_env_1363_);
lean_dec(v___x_1362_);
lean_inc(v_constName_1356_);
v___x_1364_ = l_Lean_isInductiveCore_x3f(v_env_1363_, v_constName_1356_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v___x_1365_; uint8_t v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1365_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1366_ = 0;
v___x_1367_ = l_Lean_MessageData_ofConstName(v_constName_1356_, v___x_1366_);
v___x_1368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1365_);
lean_ctor_set(v___x_1368_, 1, v___x_1367_);
v___x_1369_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1);
v___x_1370_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1368_);
lean_ctor_set(v___x_1370_, 1, v___x_1369_);
v___x_1371_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1370_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
return v___x_1371_;
}
else
{
lean_object* v_val_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_dec(v_constName_1356_);
v_val_1372_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1364_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_val_1372_);
lean_dec(v___x_1364_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
lean_ctor_set_tag(v___x_1374_, 0);
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_val_1372_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object* v_constName_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_constName_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
return v_res_1386_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__0));
v___x_1389_ = l_Lean_stringToMessageData(v___x_1388_);
return v___x_1389_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1391_ = ((lean_object*)(l_Lean_Meta_mkProjections___lam__2___closed__2));
v___x_1392_ = l_Lean_stringToMessageData(v___x_1391_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object* v_n_1393_, lean_object* v___x_1394_, uint8_t v_instImplicit_1395_, lean_object* v_projDecls_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; 
lean_inc(v_n_1393_);
v___x_1402_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_n_1393_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___x_1444_; lean_object* v___x_1445_; uint8_t v___x_1446_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref_known(v___x_1402_, 1);
v___x_1444_ = l_Lean_InductiveVal_numCtors(v_a_1403_);
v___x_1445_ = lean_unsigned_to_nat(1u);
v___x_1446_ = lean_nat_dec_eq(v___x_1444_, v___x_1445_);
lean_dec(v___x_1444_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_dec(v_a_1403_);
lean_dec_ref(v_projDecls_1396_);
v___x_1447_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__1, &l_Lean_Meta_mkProjections___lam__2___closed__1_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__1);
v___x_1448_ = l_Lean_MessageData_ofConstName(v_n_1393_, v___x_1446_);
v___x_1449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__3, &l_Lean_Meta_mkProjections___lam__2___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__3);
v___x_1451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1449_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1451_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
return v___x_1452_;
}
else
{
v___y_1405_ = v___y_1397_;
v___y_1406_ = v___y_1398_;
v___y_1407_ = v___y_1399_;
v___y_1408_ = v___y_1400_;
goto v___jp_1404_;
}
v___jp_1404_:
{
lean_object* v_toConstantVal_1409_; lean_object* v_numParams_1410_; lean_object* v_ctors_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v_toConstantVal_1409_ = lean_ctor_get(v_a_1403_, 0);
lean_inc_ref(v_toConstantVal_1409_);
v_numParams_1410_ = lean_ctor_get(v_a_1403_, 1);
lean_inc(v_numParams_1410_);
v_ctors_1411_ = lean_ctor_get(v_a_1403_, 4);
lean_inc(v_ctors_1411_);
lean_dec(v_a_1403_);
v___x_1412_ = l_List_head_x21___redArg(v___x_1394_, v_ctors_1411_);
lean_dec(v_ctors_1411_);
v___x_1413_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v___x_1412_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; lean_object* v_levelParams_1415_; lean_object* v_type_1416_; lean_object* v___x_1417_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref_known(v___x_1413_, 1);
v_levelParams_1415_ = lean_ctor_get(v_toConstantVal_1409_, 1);
lean_inc(v_levelParams_1415_);
v_type_1416_ = lean_ctor_get(v_toConstantVal_1409_, 2);
lean_inc_ref(v_type_1416_);
lean_dec_ref(v_toConstantVal_1409_);
v___x_1417_ = l_Lean_Meta_isPropFormerType(v_type_1416_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_toConstantVal_1418_; lean_object* v_a_1419_; lean_object* v_type_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___f_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; lean_object* v___x_1427_; 
v_toConstantVal_1418_ = lean_ctor_get(v_a_1414_, 0);
lean_inc_ref(v_toConstantVal_1418_);
lean_dec(v_a_1414_);
v_a_1419_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1419_);
lean_dec_ref_known(v___x_1417_, 1);
v_type_1420_ = lean_ctor_get(v_toConstantVal_1418_, 2);
lean_inc_ref(v_type_1420_);
v___x_1421_ = lean_box(0);
lean_inc(v_levelParams_1415_);
v___x_1422_ = l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(v_levelParams_1415_, v___x_1421_);
v___x_1423_ = lean_box(v_instImplicit_1395_);
lean_inc(v_numParams_1410_);
v___f_1424_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__1___boxed), 15, 8);
lean_closure_set(v___f_1424_, 0, v___x_1423_);
lean_closure_set(v___f_1424_, 1, v_projDecls_1396_);
lean_closure_set(v___f_1424_, 2, v_toConstantVal_1418_);
lean_closure_set(v___f_1424_, 3, v_numParams_1410_);
lean_closure_set(v___f_1424_, 4, v___x_1422_);
lean_closure_set(v___f_1424_, 5, v_n_1393_);
lean_closure_set(v___f_1424_, 6, v_levelParams_1415_);
lean_closure_set(v___f_1424_, 7, v_a_1419_);
v___x_1425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1425_, 0, v_numParams_1410_);
v___x_1426_ = 0;
v___x_1427_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_1420_, v___x_1425_, v___f_1424_, v___x_1426_, v___x_1426_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_);
return v___x_1427_;
}
else
{
lean_object* v_a_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1435_; 
lean_dec(v_levelParams_1415_);
lean_dec(v_a_1414_);
lean_dec(v_numParams_1410_);
lean_dec_ref(v_projDecls_1396_);
lean_dec(v_n_1393_);
v_a_1428_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1430_ = v___x_1417_;
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_a_1428_);
lean_dec(v___x_1417_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1435_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
lean_object* v___x_1433_; 
if (v_isShared_1431_ == 0)
{
v___x_1433_ = v___x_1430_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_a_1428_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
lean_dec(v_numParams_1410_);
lean_dec_ref(v_toConstantVal_1409_);
lean_dec_ref(v_projDecls_1396_);
lean_dec(v_n_1393_);
v_a_1436_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1413_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1413_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec_ref(v_projDecls_1396_);
lean_dec(v_n_1393_);
v_a_1453_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1402_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1402_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object* v_n_1461_, lean_object* v___x_1462_, lean_object* v_instImplicit_1463_, lean_object* v_projDecls_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
uint8_t v_instImplicit_boxed_1470_; lean_object* v_res_1471_; 
v_instImplicit_boxed_1470_ = lean_unbox(v_instImplicit_1463_);
v_res_1471_ = l_Lean_Meta_mkProjections___lam__2(v_n_1461_, v___x_1462_, v_instImplicit_boxed_1470_, v_projDecls_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___x_1462_);
return v_res_1471_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__0(void){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___closed__0);
v___x_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
return v___x_1473_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__1(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = lean_unsigned_to_nat(32u);
v___x_1475_ = lean_mk_empty_array_with_capacity(v___x_1474_);
v___x_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1475_);
return v___x_1476_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__2(void){
_start:
{
size_t v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1477_ = ((size_t)5ULL);
v___x_1478_ = lean_unsigned_to_nat(0u);
v___x_1479_ = lean_unsigned_to_nat(32u);
v___x_1480_ = lean_mk_empty_array_with_capacity(v___x_1479_);
v___x_1481_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__1, &l_Lean_Meta_mkProjections___closed__1_once, _init_l_Lean_Meta_mkProjections___closed__1);
v___x_1482_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1482_, 0, v___x_1481_);
lean_ctor_set(v___x_1482_, 1, v___x_1480_);
lean_ctor_set(v___x_1482_, 2, v___x_1478_);
lean_ctor_set(v___x_1482_, 3, v___x_1478_);
lean_ctor_set_usize(v___x_1482_, 4, v___x_1477_);
return v___x_1482_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__3(void){
_start:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1483_ = lean_box(1);
v___x_1484_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__2, &l_Lean_Meta_mkProjections___closed__2_once, _init_l_Lean_Meta_mkProjections___closed__2);
v___x_1485_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__0, &l_Lean_Meta_mkProjections___closed__0_once, _init_l_Lean_Meta_mkProjections___closed__0);
v___x_1486_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
lean_ctor_set(v___x_1486_, 1, v___x_1484_);
lean_ctor_set(v___x_1486_, 2, v___x_1483_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object* v_n_1489_, lean_object* v_projDecls_1490_, uint8_t v_instImplicit_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___f_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1497_ = lean_box(0);
v___x_1498_ = lean_box(v_instImplicit_1491_);
v___f_1499_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__2___boxed), 9, 4);
lean_closure_set(v___f_1499_, 0, v_n_1489_);
lean_closure_set(v___f_1499_, 1, v___x_1497_);
lean_closure_set(v___f_1499_, 2, v___x_1498_);
lean_closure_set(v___f_1499_, 3, v_projDecls_1490_);
v___x_1500_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__3, &l_Lean_Meta_mkProjections___closed__3_once, _init_l_Lean_Meta_mkProjections___closed__3);
v___x_1501_ = ((lean_object*)(l_Lean_Meta_mkProjections___closed__4));
v___x_1502_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v___x_1500_, v___x_1501_, v___f_1499_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object* v_n_1503_, lean_object* v_projDecls_1504_, lean_object* v_instImplicit_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
uint8_t v_instImplicit_boxed_1511_; lean_object* v_res_1512_; 
v_instImplicit_boxed_1511_ = lean_unbox(v_instImplicit_1505_);
v_res_1512_ = l_Lean_Meta_mkProjections(v_n_1503_, v_projDecls_1504_, v_instImplicit_boxed_1511_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t v_instImplicit_1513_, lean_object* v_as_1514_, size_t v_sz_1515_, size_t v_i_1516_, lean_object* v_b_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1513_, v_as_1514_, v_sz_1515_, v_i_1516_, v_b_1517_, v___y_1518_, v___y_1520_, v___y_1521_);
return v___x_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object* v_instImplicit_1524_, lean_object* v_as_1525_, lean_object* v_sz_1526_, lean_object* v_i_1527_, lean_object* v_b_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
uint8_t v_instImplicit_boxed_1534_; size_t v_sz_boxed_1535_; size_t v_i_boxed_1536_; lean_object* v_res_1537_; 
v_instImplicit_boxed_1534_ = lean_unbox(v_instImplicit_1524_);
v_sz_boxed_1535_ = lean_unbox_usize(v_sz_1526_);
lean_dec(v_sz_1526_);
v_i_boxed_1536_ = lean_unbox_usize(v_i_1527_);
lean_dec(v_i_1527_);
v_res_1537_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(v_instImplicit_boxed_1534_, v_as_1525_, v_sz_boxed_1535_, v_i_boxed_1536_, v_b_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec_ref(v_as_1525_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object* v_declName_1538_, uint8_t v_s_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_1538_, v_s_1539_, v___y_1541_, v___y_1543_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object* v_declName_1546_, lean_object* v_s_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
uint8_t v_s_boxed_1553_; lean_object* v_res_1554_; 
v_s_boxed_1553_ = lean_unbox(v_s_1547_);
v_res_1554_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(v_declName_1546_, v_s_boxed_1553_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object* v_00_u03b1_1555_, lean_object* v_ref_1556_, lean_object* v_msg_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_){
_start:
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_1556_, v_msg_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_);
return v___x_1563_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object* v_00_u03b1_1564_, lean_object* v_ref_1565_, lean_object* v_msg_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(v_00_u03b1_1564_, v_ref_1565_, v_msg_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v_ref_1565_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object* v_00_u03b1_1573_, lean_object* v_x_1574_, uint8_t v_isExporting_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_1574_, v_isExporting_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1582_, lean_object* v_x_1583_, lean_object* v_isExporting_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
uint8_t v_isExporting_boxed_1590_; lean_object* v_res_1591_; 
v_isExporting_boxed_1590_ = lean_unbox(v_isExporting_1584_);
v_res_1591_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(v_00_u03b1_1582_, v_x_1583_, v_isExporting_boxed_1590_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object* v_00_u03b1_1592_, lean_object* v_x_1593_, uint8_t v_when_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_1593_, v_when_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object* v_00_u03b1_1601_, lean_object* v_x_1602_, lean_object* v_when_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
uint8_t v_when_boxed_1609_; lean_object* v_res_1610_; 
v_when_boxed_1609_ = lean_unbox(v_when_1603_);
v_res_1610_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(v_00_u03b1_1601_, v_x_1602_, v_when_boxed_1609_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object* v_upperBound_1611_, lean_object* v_projDecls_1612_, lean_object* v___x_1613_, lean_object* v___x_1614_, uint8_t v_instImplicit_1615_, lean_object* v___x_1616_, lean_object* v_params_1617_, lean_object* v_self_1618_, lean_object* v_a_1619_, lean_object* v___x_1620_, lean_object* v_n_1621_, lean_object* v___x_1622_, uint8_t v_a_1623_, lean_object* v_inst_1624_, lean_object* v_R_1625_, lean_object* v_a_1626_, lean_object* v_b_1627_, lean_object* v_c_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_1611_, v_projDecls_1612_, v___x_1613_, v___x_1614_, v_instImplicit_1615_, v___x_1616_, v_params_1617_, v_self_1618_, v_a_1619_, v___x_1620_, v_n_1621_, v___x_1622_, v_a_1623_, v_a_1626_, v_b_1627_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_1635_ = _args[0];
lean_object* v_projDecls_1636_ = _args[1];
lean_object* v___x_1637_ = _args[2];
lean_object* v___x_1638_ = _args[3];
lean_object* v_instImplicit_1639_ = _args[4];
lean_object* v___x_1640_ = _args[5];
lean_object* v_params_1641_ = _args[6];
lean_object* v_self_1642_ = _args[7];
lean_object* v_a_1643_ = _args[8];
lean_object* v___x_1644_ = _args[9];
lean_object* v_n_1645_ = _args[10];
lean_object* v___x_1646_ = _args[11];
lean_object* v_a_1647_ = _args[12];
lean_object* v_inst_1648_ = _args[13];
lean_object* v_R_1649_ = _args[14];
lean_object* v_a_1650_ = _args[15];
lean_object* v_b_1651_ = _args[16];
lean_object* v_c_1652_ = _args[17];
lean_object* v___y_1653_ = _args[18];
lean_object* v___y_1654_ = _args[19];
lean_object* v___y_1655_ = _args[20];
lean_object* v___y_1656_ = _args[21];
lean_object* v___y_1657_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_1658_; uint8_t v_a_19863__boxed_1659_; lean_object* v_res_1660_; 
v_instImplicit_boxed_1658_ = lean_unbox(v_instImplicit_1639_);
v_a_19863__boxed_1659_ = lean_unbox(v_a_1647_);
v_res_1660_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(v_upperBound_1635_, v_projDecls_1636_, v___x_1637_, v___x_1638_, v_instImplicit_boxed_1658_, v___x_1640_, v_params_1641_, v_self_1642_, v_a_1643_, v___x_1644_, v_n_1645_, v___x_1646_, v_a_19863__boxed_1659_, v_inst_1648_, v_R_1649_, v_a_1650_, v_b_1651_, v_c_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec_ref(v_projDecls_1636_);
lean_dec(v_upperBound_1635_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object* v_k_1661_, uint8_t v_allowLevelAssignments_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1662_, v_k_1661_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1668_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1668_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
else
{
lean_object* v_a_1677_; lean_object* v___x_1679_; uint8_t v_isShared_1680_; uint8_t v_isSharedCheck_1684_; 
v_a_1677_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1679_ = v___x_1668_;
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
else
{
lean_inc(v_a_1677_);
lean_dec(v___x_1668_);
v___x_1679_ = lean_box(0);
v_isShared_1680_ = v_isSharedCheck_1684_;
goto v_resetjp_1678_;
}
v_resetjp_1678_:
{
lean_object* v___x_1682_; 
if (v_isShared_1680_ == 0)
{
v___x_1682_ = v___x_1679_;
goto v_reusejp_1681_;
}
else
{
lean_object* v_reuseFailAlloc_1683_; 
v_reuseFailAlloc_1683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1683_, 0, v_a_1677_);
v___x_1682_ = v_reuseFailAlloc_1683_;
goto v_reusejp_1681_;
}
v_reusejp_1681_:
{
return v___x_1682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object* v_k_1685_, lean_object* v_allowLevelAssignments_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1692_; lean_object* v_res_1693_; 
v_allowLevelAssignments_boxed_1692_ = lean_unbox(v_allowLevelAssignments_1686_);
v_res_1693_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1685_, v_allowLevelAssignments_boxed_1692_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object* v_00_u03b1_1694_, lean_object* v_k_1695_, uint8_t v_allowLevelAssignments_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1695_, v_allowLevelAssignments_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
return v___x_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object* v_00_u03b1_1703_, lean_object* v_k_1704_, lean_object* v_allowLevelAssignments_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1711_; lean_object* v_res_1712_; 
v_allowLevelAssignments_boxed_1711_ = lean_unbox(v_allowLevelAssignments_1705_);
v_res_1712_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(v_00_u03b1_1703_, v_k_1704_, v_allowLevelAssignments_boxed_1711_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object* v_as_1713_, size_t v_sz_1714_, size_t v_i_1715_, lean_object* v_b_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
uint8_t v___x_1722_; 
v___x_1722_ = lean_usize_dec_lt(v_i_1715_, v_sz_1714_);
if (v___x_1722_ == 0)
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v_b_1716_);
return v___x_1723_;
}
else
{
lean_object* v_snd_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1779_; 
v_snd_1724_ = lean_ctor_get(v_b_1716_, 1);
v_isSharedCheck_1779_ = !lean_is_exclusive(v_b_1716_);
if (v_isSharedCheck_1779_ == 0)
{
lean_object* v_unused_1780_; 
v_unused_1780_ = lean_ctor_get(v_b_1716_, 0);
lean_dec(v_unused_1780_);
v___x_1726_ = v_b_1716_;
v_isShared_1727_ = v_isSharedCheck_1779_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_snd_1724_);
lean_dec(v_b_1716_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1779_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v_array_1728_; lean_object* v_start_1729_; lean_object* v_stop_1730_; lean_object* v___x_1731_; uint8_t v___x_1732_; 
v_array_1728_ = lean_ctor_get(v_snd_1724_, 0);
v_start_1729_ = lean_ctor_get(v_snd_1724_, 1);
v_stop_1730_ = lean_ctor_get(v_snd_1724_, 2);
v___x_1731_ = lean_box(0);
v___x_1732_ = lean_nat_dec_lt(v_start_1729_, v_stop_1730_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1734_; 
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1731_);
v___x_1734_ = v___x_1726_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1731_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_snd_1724_);
v___x_1734_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
lean_object* v___x_1735_; 
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1734_);
return v___x_1735_;
}
}
else
{
lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1775_; 
lean_inc(v_stop_1730_);
lean_inc(v_start_1729_);
lean_inc_ref(v_array_1728_);
v_isSharedCheck_1775_ = !lean_is_exclusive(v_snd_1724_);
if (v_isSharedCheck_1775_ == 0)
{
lean_object* v_unused_1776_; lean_object* v_unused_1777_; lean_object* v_unused_1778_; 
v_unused_1776_ = lean_ctor_get(v_snd_1724_, 2);
lean_dec(v_unused_1776_);
v_unused_1777_ = lean_ctor_get(v_snd_1724_, 1);
lean_dec(v_unused_1777_);
v_unused_1778_ = lean_ctor_get(v_snd_1724_, 0);
lean_dec(v_unused_1778_);
v___x_1738_ = v_snd_1724_;
v_isShared_1739_ = v_isSharedCheck_1775_;
goto v_resetjp_1737_;
}
else
{
lean_dec(v_snd_1724_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1775_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v_a_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1745_; 
v_a_1740_ = lean_array_uget_borrowed(v_as_1713_, v_i_1715_);
v___x_1741_ = lean_array_fget(v_array_1728_, v_start_1729_);
v___x_1742_ = lean_unsigned_to_nat(1u);
v___x_1743_ = lean_nat_add(v_start_1729_, v___x_1742_);
lean_dec(v_start_1729_);
if (v_isShared_1739_ == 0)
{
lean_ctor_set(v___x_1738_, 1, v___x_1743_);
v___x_1745_ = v___x_1738_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_array_1728_);
lean_ctor_set(v_reuseFailAlloc_1774_, 1, v___x_1743_);
lean_ctor_set(v_reuseFailAlloc_1774_, 2, v_stop_1730_);
v___x_1745_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
lean_object* v___x_1746_; 
lean_inc(v_a_1740_);
v___x_1746_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1740_, v___x_1741_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1765_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1749_ = v___x_1746_;
v_isShared_1750_ = v_isSharedCheck_1765_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1746_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1765_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
uint8_t v___x_1751_; 
v___x_1751_ = lean_unbox(v_a_1747_);
if (v___x_1751_ == 0)
{
lean_object* v___x_1752_; lean_object* v___x_1754_; 
v___x_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1752_, 0, v_a_1747_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 1, v___x_1745_);
lean_ctor_set(v___x_1726_, 0, v___x_1752_);
v___x_1754_ = v___x_1726_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v___x_1752_);
lean_ctor_set(v_reuseFailAlloc_1758_, 1, v___x_1745_);
v___x_1754_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1756_; 
if (v_isShared_1750_ == 0)
{
lean_ctor_set(v___x_1749_, 0, v___x_1754_);
v___x_1756_ = v___x_1749_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v___x_1754_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
else
{
lean_object* v___x_1760_; 
lean_del_object(v___x_1749_);
lean_dec(v_a_1747_);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 1, v___x_1745_);
lean_ctor_set(v___x_1726_, 0, v___x_1731_);
v___x_1760_ = v___x_1726_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1731_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v___x_1745_);
v___x_1760_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
size_t v___x_1761_; size_t v___x_1762_; 
v___x_1761_ = ((size_t)1ULL);
v___x_1762_ = lean_usize_add(v_i_1715_, v___x_1761_);
v_i_1715_ = v___x_1762_;
v_b_1716_ = v___x_1760_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1773_; 
lean_dec_ref(v___x_1745_);
lean_del_object(v___x_1726_);
v_a_1766_ = lean_ctor_get(v___x_1746_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1746_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1768_ = v___x_1746_;
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_a_1766_);
lean_dec(v___x_1746_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1773_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1771_; 
if (v_isShared_1769_ == 0)
{
v___x_1771_ = v___x_1768_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v_a_1766_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object* v_as_1781_, lean_object* v_sz_1782_, lean_object* v_i_1783_, lean_object* v_b_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
size_t v_sz_boxed_1790_; size_t v_i_boxed_1791_; lean_object* v_res_1792_; 
v_sz_boxed_1790_ = lean_unbox_usize(v_sz_1782_);
lean_dec(v_sz_1782_);
v_i_boxed_1791_ = lean_unbox_usize(v_i_1783_);
lean_dec(v_i_1783_);
v_res_1792_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_as_1781_, v_sz_boxed_1790_, v_i_boxed_1791_, v_b_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
lean_dec_ref(v_as_1781_);
return v_res_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t v___x_1793_, lean_object* v_params2_1794_, lean_object* v___x_1795_, lean_object* v_params1_1796_, uint8_t v___x_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_){
_start:
{
if (v___x_1793_ == 0)
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
lean_dec(v___x_1795_);
lean_dec_ref(v_params2_1794_);
v___x_1803_ = lean_box(v___x_1793_);
v___x_1804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
return v___x_1804_;
}
else
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; size_t v_sz_1809_; size_t v___x_1810_; lean_object* v___x_1811_; 
v___x_1805_ = lean_unsigned_to_nat(0u);
v___x_1806_ = l_Array_toSubarray___redArg(v_params2_1794_, v___x_1805_, v___x_1795_);
v___x_1807_ = lean_box(0);
v___x_1808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1808_, 0, v___x_1807_);
lean_ctor_set(v___x_1808_, 1, v___x_1806_);
v_sz_1809_ = lean_array_size(v_params1_1796_);
v___x_1810_ = ((size_t)0ULL);
v___x_1811_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_params1_1796_, v_sz_1809_, v___x_1810_, v___x_1808_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1825_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1814_ = v___x_1811_;
v_isShared_1815_ = v_isSharedCheck_1825_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1811_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1825_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v_fst_1816_; 
v_fst_1816_ = lean_ctor_get(v_a_1812_, 0);
lean_inc(v_fst_1816_);
lean_dec(v_a_1812_);
if (lean_obj_tag(v_fst_1816_) == 0)
{
lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1817_ = lean_box(v___x_1797_);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v___x_1817_);
v___x_1819_ = v___x_1814_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
else
{
lean_object* v_val_1821_; lean_object* v___x_1823_; 
v_val_1821_ = lean_ctor_get(v_fst_1816_, 0);
lean_inc(v_val_1821_);
lean_dec_ref_known(v_fst_1816_, 1);
if (v_isShared_1815_ == 0)
{
lean_ctor_set(v___x_1814_, 0, v_val_1821_);
v___x_1823_ = v___x_1814_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_val_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
else
{
lean_object* v_a_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
v_a_1826_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1833_ == 0)
{
v___x_1828_ = v___x_1811_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_a_1826_);
lean_dec(v___x_1811_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v_a_1826_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object* v___x_1834_, lean_object* v_params2_1835_, lean_object* v___x_1836_, lean_object* v_params1_1837_, lean_object* v___x_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
uint8_t v___x_2362__boxed_1844_; uint8_t v___x_2364__boxed_1845_; lean_object* v_res_1846_; 
v___x_2362__boxed_1844_ = lean_unbox(v___x_1834_);
v___x_2364__boxed_1845_ = lean_unbox(v___x_1838_);
v_res_1846_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(v___x_2362__boxed_1844_, v_params2_1835_, v___x_1836_, v_params1_1837_, v___x_2364__boxed_1845_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec_ref(v_params1_1837_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object* v_params1_1847_, lean_object* v_params2_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; uint8_t v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___y_1860_; uint8_t v___x_1861_; lean_object* v___x_1862_; 
v___x_1854_ = lean_array_get_size(v_params1_1847_);
v___x_1855_ = lean_array_get_size(v_params2_1848_);
v___x_1856_ = lean_nat_dec_eq(v___x_1854_, v___x_1855_);
v___x_1857_ = 1;
v___x_1858_ = lean_box(v___x_1856_);
v___x_1859_ = lean_box(v___x_1857_);
v___y_1860_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed), 10, 5);
lean_closure_set(v___y_1860_, 0, v___x_1858_);
lean_closure_set(v___y_1860_, 1, v_params2_1848_);
lean_closure_set(v___y_1860_, 2, v___x_1855_);
lean_closure_set(v___y_1860_, 3, v_params1_1847_);
lean_closure_set(v___y_1860_, 4, v___x_1859_);
v___x_1861_ = 0;
v___x_1862_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v___y_1860_, v___x_1861_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
return v___x_1862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object* v_params1_1863_, lean_object* v_params2_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
lean_object* v_res_1870_; 
v_res_1870_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params1_1863_, v_params2_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object* v_declName_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v___x_1874_; lean_object* v_env_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1874_ = lean_st_ref_get(v___y_1872_);
v_env_1875_ = lean_ctor_get(v___x_1874_, 0);
lean_inc_ref(v_env_1875_);
lean_dec(v___x_1874_);
v___x_1876_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1875_, v_declName_1871_);
v___x_1877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object* v_declName_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1878_, v___y_1879_);
lean_dec(v___y_1879_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object* v_declName_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1882_, v___y_1886_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object* v_declName_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v_res_1895_; 
v_res_1895_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(v_declName_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
lean_dec(v___y_1893_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1891_);
lean_dec_ref(v___y_1890_);
return v_res_1895_;
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0(void){
_start:
{
lean_object* v___x_1896_; lean_object* v_dummy_1897_; 
v___x_1896_ = lean_box(0);
v_dummy_1897_ = l_Lean_Expr_sort___override(v___x_1896_);
return v_dummy_1897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object* v_ctor_1898_, lean_object* v_induct_1899_, lean_object* v_params_1900_, lean_object* v_idx_1901_, lean_object* v_e_1902_, lean_object* v_x_x3f_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_){
_start:
{
if (lean_obj_tag(v_e_1902_) == 11)
{
lean_object* v_typeName_1915_; lean_object* v_idx_1916_; lean_object* v_struct_1917_; uint8_t v___x_1964_; 
v_typeName_1915_ = lean_ctor_get(v_e_1902_, 0);
v_idx_1916_ = lean_ctor_get(v_e_1902_, 1);
v_struct_1917_ = lean_ctor_get(v_e_1902_, 2);
lean_inc_ref(v_struct_1917_);
v___x_1964_ = lean_nat_dec_eq(v_idx_1916_, v_idx_1901_);
if (v___x_1964_ == 0)
{
lean_dec_ref(v_struct_1917_);
lean_dec_ref_known(v_e_1902_, 3);
lean_dec_ref(v_params_1900_);
goto v___jp_1909_;
}
else
{
uint8_t v___x_1965_; 
v___x_1965_ = lean_name_eq(v_induct_1899_, v_typeName_1915_);
if (v___x_1965_ == 0)
{
lean_dec_ref(v_struct_1917_);
lean_dec_ref_known(v_e_1902_, 3);
lean_dec_ref(v_params_1900_);
goto v___jp_1909_;
}
else
{
if (lean_obj_tag(v_x_x3f_1903_) == 0)
{
goto v___jp_1918_;
}
else
{
lean_object* v_val_1966_; uint8_t v___x_1967_; 
v_val_1966_ = lean_ctor_get(v_x_x3f_1903_, 0);
v___x_1967_ = lean_expr_eqv(v_val_1966_, v_struct_1917_);
if (v___x_1967_ == 0)
{
lean_dec_ref(v_struct_1917_);
lean_dec_ref_known(v_e_1902_, 3);
lean_dec_ref(v_params_1900_);
goto v___jp_1909_;
}
else
{
goto v___jp_1918_;
}
}
}
}
v___jp_1918_:
{
lean_object* v___x_1919_; 
lean_inc(v___y_1907_);
lean_inc_ref(v___y_1906_);
lean_inc(v___y_1905_);
lean_inc_ref(v___y_1904_);
v___x_1919_ = lean_infer_type(v_e_1902_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1921_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
lean_inc(v___y_1907_);
lean_inc_ref(v___y_1906_);
lean_inc(v___y_1905_);
lean_inc_ref(v___y_1904_);
v___x_1921_ = lean_whnf(v_a_1920_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v_dummy_1923_; lean_object* v_nargs_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref_known(v___x_1921_, 1);
v_dummy_1923_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_1924_ = l_Lean_Expr_getAppNumArgs(v_a_1922_);
lean_inc(v_nargs_1924_);
v___x_1925_ = lean_mk_array(v_nargs_1924_, v_dummy_1923_);
v___x_1926_ = lean_unsigned_to_nat(1u);
v___x_1927_ = lean_nat_sub(v_nargs_1924_, v___x_1926_);
lean_dec(v_nargs_1924_);
v___x_1928_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1922_, v___x_1925_, v___x_1927_);
v___x_1929_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1900_, v___x_1928_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1939_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1932_ = v___x_1929_;
v_isShared_1933_ = v_isSharedCheck_1939_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1929_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1939_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
uint8_t v___x_1934_; 
v___x_1934_ = lean_unbox(v_a_1930_);
lean_dec(v_a_1930_);
if (v___x_1934_ == 0)
{
lean_del_object(v___x_1932_);
lean_dec_ref(v_struct_1917_);
goto v___jp_1909_;
}
else
{
lean_object* v___x_1935_; lean_object* v___x_1937_; 
v___x_1935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1935_, 0, v_struct_1917_);
if (v_isShared_1933_ == 0)
{
lean_ctor_set(v___x_1932_, 0, v___x_1935_);
v___x_1937_ = v___x_1932_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v___x_1935_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec_ref(v_struct_1917_);
v_a_1940_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1929_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1929_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec_ref(v_struct_1917_);
lean_dec_ref(v_params_1900_);
v_a_1948_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1921_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1921_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
lean_dec_ref(v_struct_1917_);
lean_dec_ref(v_params_1900_);
v_a_1956_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1919_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1919_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1956_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
}
}
else
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_Expr_getAppFn(v_e_1902_);
if (lean_obj_tag(v___x_1968_) == 4)
{
lean_object* v_declName_1969_; lean_object* v___x_1970_; lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_2020_; 
v_declName_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_declName_1969_);
lean_dec_ref_known(v___x_1968_, 2);
v___x_1970_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1969_, v___y_1907_);
v_a_1971_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_1973_ = v___x_1970_;
v_isShared_1974_ = v_isSharedCheck_2020_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1970_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_2020_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___y_1976_; lean_object* v___y_1977_; 
if (lean_obj_tag(v_a_1971_) == 1)
{
lean_object* v_val_2005_; lean_object* v_ctorName_2006_; lean_object* v_numParams_2007_; lean_object* v_i_2008_; uint8_t v___y_2010_; uint8_t v___x_2018_; 
v_val_2005_ = lean_ctor_get(v_a_1971_, 0);
lean_inc(v_val_2005_);
lean_dec_ref_known(v_a_1971_, 1);
v_ctorName_2006_ = lean_ctor_get(v_val_2005_, 0);
lean_inc(v_ctorName_2006_);
v_numParams_2007_ = lean_ctor_get(v_val_2005_, 1);
lean_inc(v_numParams_2007_);
v_i_2008_ = lean_ctor_get(v_val_2005_, 2);
lean_inc(v_i_2008_);
lean_dec(v_val_2005_);
v___x_2018_ = lean_name_eq(v_ctorName_2006_, v_ctor_1898_);
lean_dec(v_ctorName_2006_);
if (v___x_2018_ == 0)
{
lean_dec(v_i_2008_);
v___y_2010_ = v___x_2018_;
goto v___jp_2009_;
}
else
{
uint8_t v___x_2019_; 
v___x_2019_ = lean_nat_dec_eq(v_i_2008_, v_idx_1901_);
lean_dec(v_i_2008_);
v___y_2010_ = v___x_2019_;
goto v___jp_2009_;
}
v___jp_2009_:
{
if (v___y_2010_ == 0)
{
lean_dec(v_numParams_2007_);
lean_del_object(v___x_1973_);
lean_dec_ref(v_e_1902_);
lean_dec_ref(v_params_1900_);
goto v___jp_1912_;
}
else
{
lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; uint8_t v___x_2014_; 
v___x_2011_ = l_Lean_Expr_getAppNumArgs(v_e_1902_);
v___x_2012_ = lean_unsigned_to_nat(1u);
v___x_2013_ = lean_nat_add(v_numParams_2007_, v___x_2012_);
lean_dec(v_numParams_2007_);
v___x_2014_ = lean_nat_dec_eq(v___x_2011_, v___x_2013_);
lean_dec(v___x_2013_);
lean_dec(v___x_2011_);
if (v___x_2014_ == 0)
{
lean_del_object(v___x_1973_);
lean_dec_ref(v_e_1902_);
lean_dec_ref(v_params_1900_);
goto v___jp_1912_;
}
else
{
lean_object* v___x_2015_; 
v___x_2015_ = l_Lean_Expr_appArg_x21(v_e_1902_);
if (lean_obj_tag(v_x_x3f_1903_) == 0)
{
v___y_1976_ = v___x_2015_;
v___y_1977_ = v___x_2012_;
goto v___jp_1975_;
}
else
{
lean_object* v_val_2016_; uint8_t v___x_2017_; 
v_val_2016_ = lean_ctor_get(v_x_x3f_1903_, 0);
v___x_2017_ = lean_expr_eqv(v_val_2016_, v___x_2015_);
if (v___x_2017_ == 0)
{
lean_dec_ref(v___x_2015_);
lean_del_object(v___x_1973_);
lean_dec_ref(v_e_1902_);
lean_dec_ref(v_params_1900_);
goto v___jp_1912_;
}
else
{
v___y_1976_ = v___x_2015_;
v___y_1977_ = v___x_2012_;
goto v___jp_1975_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1973_);
lean_dec(v_a_1971_);
lean_dec_ref(v_e_1902_);
lean_dec_ref(v_params_1900_);
goto v___jp_1912_;
}
v___jp_1975_:
{
lean_object* v___x_1978_; lean_object* v_dummy_1979_; lean_object* v_nargs_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
v___x_1978_ = l_Lean_Expr_appFn_x21(v_e_1902_);
lean_dec_ref(v_e_1902_);
v_dummy_1979_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_1980_ = l_Lean_Expr_getAppNumArgs(v___x_1978_);
lean_inc(v_nargs_1980_);
v___x_1981_ = lean_mk_array(v_nargs_1980_, v_dummy_1979_);
v___x_1982_ = lean_nat_sub(v_nargs_1980_, v___y_1977_);
lean_dec(v_nargs_1980_);
v___x_1983_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1978_, v___x_1981_, v___x_1982_);
v___x_1984_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1900_, v___x_1983_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1996_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1987_ = v___x_1984_;
v_isShared_1988_ = v_isSharedCheck_1996_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1996_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
uint8_t v___x_1989_; 
v___x_1989_ = lean_unbox(v_a_1985_);
lean_dec(v_a_1985_);
if (v___x_1989_ == 0)
{
lean_del_object(v___x_1987_);
lean_dec_ref(v___y_1976_);
lean_del_object(v___x_1973_);
goto v___jp_1912_;
}
else
{
lean_object* v___x_1991_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set_tag(v___x_1973_, 1);
lean_ctor_set(v___x_1973_, 0, v___y_1976_);
v___x_1991_ = v___x_1973_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___y_1976_);
v___x_1991_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
lean_object* v___x_1993_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_1991_);
v___x_1993_ = v___x_1987_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1991_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
}
else
{
lean_object* v_a_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2004_; 
lean_dec_ref(v___y_1976_);
lean_del_object(v___x_1973_);
v_a_1997_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1999_ = v___x_1984_;
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_a_1997_);
lean_dec(v___x_1984_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2004_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2002_; 
if (v_isShared_2000_ == 0)
{
v___x_2002_ = v___x_1999_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_a_1997_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1968_);
lean_dec_ref(v_e_1902_);
lean_dec_ref(v_params_1900_);
goto v___jp_1912_;
}
}
v___jp_1909_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_box(0);
v___x_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
return v___x_1911_;
}
v___jp_1912_:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1913_ = lean_box(0);
v___x_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1913_);
return v___x_1914_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object* v_ctor_2021_, lean_object* v_induct_2022_, lean_object* v_params_2023_, lean_object* v_idx_2024_, lean_object* v_e_2025_, lean_object* v_x_x3f_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_ctor_2021_, v_induct_2022_, v_params_2023_, v_idx_2024_, v_e_2025_, v_x_x3f_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v_x_x3f_2026_);
lean_dec(v_idx_2024_);
lean_dec(v_induct_2022_);
lean_dec(v_ctor_2021_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object* v_constName_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v___x_2039_; lean_object* v_env_2043_; uint8_t v___x_2044_; lean_object* v___x_2045_; 
v___x_2039_ = lean_st_ref_get(v___y_2037_);
v_env_2043_ = lean_ctor_get(v___x_2039_, 0);
lean_inc_ref(v_env_2043_);
lean_dec(v___x_2039_);
v___x_2044_ = 0;
v___x_2045_ = l_Lean_Environment_findAsync_x3f(v_env_2043_, v_constName_2033_, v___x_2044_);
if (lean_obj_tag(v___x_2045_) == 1)
{
lean_object* v_val_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2065_; 
v_val_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2065_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_val_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2065_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
uint8_t v_kind_2050_; 
v_kind_2050_ = lean_ctor_get_uint8(v_val_2046_, sizeof(void*)*3);
if (v_kind_2050_ == 6)
{
lean_object* v___x_2051_; 
v___x_2051_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2046_);
if (lean_obj_tag(v___x_2051_) == 6)
{
lean_object* v_val_2052_; lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2062_; 
v_val_2052_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2062_ == 0)
{
v___x_2054_ = v___x_2051_;
v_isShared_2055_ = v_isSharedCheck_2062_;
goto v_resetjp_2053_;
}
else
{
lean_inc(v_val_2052_);
lean_dec(v___x_2051_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2062_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
lean_object* v___x_2057_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v_val_2052_);
v___x_2057_ = v___x_2048_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_val_2052_);
v___x_2057_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_object* v___x_2059_; 
if (v_isShared_2055_ == 0)
{
lean_ctor_set_tag(v___x_2054_, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2057_);
v___x_2059_ = v___x_2054_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2057_);
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
else
{
lean_object* v___x_2063_; lean_object* v___x_2064_; 
lean_dec_ref(v___x_2051_);
lean_del_object(v___x_2048_);
v___x_2063_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_2064_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_2063_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
return v___x_2064_;
}
}
else
{
lean_del_object(v___x_2048_);
lean_dec(v_val_2046_);
goto v___jp_2040_;
}
}
}
else
{
lean_dec(v___x_2045_);
goto v___jp_2040_;
}
v___jp_2040_:
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2041_ = lean_box(0);
v___x_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2041_);
return v___x_2042_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object* v_constName_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_constName_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object* v_upperBound_2081_, lean_object* v___x_2082_, lean_object* v___x_2083_, lean_object* v_declName_2084_, lean_object* v___x_2085_, lean_object* v___x_2086_, lean_object* v_a_2087_, lean_object* v_val_2088_, lean_object* v_a_2089_, lean_object* v_b_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_){
_start:
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_nat_dec_lt(v_a_2089_, v_upperBound_2081_);
if (v___x_2096_ == 0)
{
lean_object* v___x_2097_; 
lean_dec(v_a_2089_);
lean_dec_ref(v___x_2086_);
v___x_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2097_, 0, v_b_2090_);
return v___x_2097_;
}
else
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; 
lean_dec_ref(v_b_2090_);
v___x_2098_ = l_Lean_instInhabitedExpr;
v___x_2099_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2100_ = lean_nat_add(v___x_2082_, v_a_2089_);
v___x_2101_ = lean_array_get_borrowed(v___x_2098_, v___x_2083_, v___x_2100_);
lean_dec(v___x_2100_);
lean_inc(v___x_2101_);
lean_inc_ref(v___x_2086_);
v___x_2102_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2084_, v___x_2085_, v___x_2086_, v_a_2089_, v___x_2101_, v_a_2087_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2120_; 
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2120_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2120_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
if (lean_obj_tag(v_a_2103_) == 1)
{
lean_object* v_val_2107_; uint8_t v___x_2108_; 
v_val_2107_ = lean_ctor_get(v_a_2103_, 0);
lean_inc(v_val_2107_);
lean_dec_ref_known(v_a_2103_, 1);
v___x_2108_ = lean_expr_eqv(v_val_2107_, v_val_2088_);
lean_dec(v_val_2107_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2109_; lean_object* v___x_2111_; 
lean_dec(v_a_2089_);
lean_dec_ref(v___x_2086_);
v___x_2109_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2109_);
v___x_2111_ = v___x_2105_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v___x_2109_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
else
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
lean_del_object(v___x_2105_);
v___x_2113_ = lean_unsigned_to_nat(1u);
v___x_2114_ = lean_nat_add(v_a_2089_, v___x_2113_);
lean_dec(v_a_2089_);
v_a_2089_ = v___x_2114_;
v_b_2090_ = v___x_2099_;
goto _start;
}
}
else
{
lean_object* v___x_2116_; lean_object* v___x_2118_; 
lean_dec(v_a_2103_);
lean_dec(v_a_2089_);
lean_dec_ref(v___x_2086_);
v___x_2116_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2));
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2116_);
v___x_2118_ = v___x_2105_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v_a_2089_);
lean_dec_ref(v___x_2086_);
v_a_2121_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2123_ = v___x_2102_;
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2102_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2128_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2126_; 
if (v_isShared_2124_ == 0)
{
v___x_2126_ = v___x_2123_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_a_2121_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_2129_, lean_object* v___x_2130_, lean_object* v___x_2131_, lean_object* v_declName_2132_, lean_object* v___x_2133_, lean_object* v___x_2134_, lean_object* v_a_2135_, lean_object* v_val_2136_, lean_object* v_a_2137_, lean_object* v_b_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2129_, v___x_2130_, v___x_2131_, v_declName_2132_, v___x_2133_, v___x_2134_, v_a_2135_, v_val_2136_, v_a_2137_, v_b_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
lean_dec_ref(v_val_2136_);
lean_dec(v_a_2135_);
lean_dec(v___x_2133_);
lean_dec(v_declName_2132_);
lean_dec_ref(v___x_2131_);
lean_dec(v___x_2130_);
lean_dec(v_upperBound_2129_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object* v_e_2145_, lean_object* v_p_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l_Lean_Expr_getAppFn(v_e_2145_);
if (lean_obj_tag(v___x_2152_) == 4)
{
lean_object* v_declName_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_declName_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc_n(v_declName_2153_, 2);
lean_dec_ref_known(v___x_2152_, 2);
v___x_2154_ = l_Lean_instInhabitedExpr;
v___x_2155_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_declName_2153_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2227_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2158_ = v___x_2155_;
v_isShared_2159_ = v_isSharedCheck_2227_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2155_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2227_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
if (lean_obj_tag(v_a_2156_) == 1)
{
lean_object* v_val_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2224_; 
v_val_2165_ = lean_ctor_get(v_a_2156_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v_a_2156_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2167_ = v_a_2156_;
v_isShared_2168_ = v_isSharedCheck_2224_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_val_2165_);
lean_dec(v_a_2156_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2224_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v_induct_2169_; lean_object* v_numParams_2170_; lean_object* v_numFields_2171_; lean_object* v___x_2172_; uint8_t v___x_2173_; 
v_induct_2169_ = lean_ctor_get(v_val_2165_, 1);
lean_inc_n(v_induct_2169_, 2);
v_numParams_2170_ = lean_ctor_get(v_val_2165_, 3);
lean_inc(v_numParams_2170_);
v_numFields_2171_ = lean_ctor_get(v_val_2165_, 4);
lean_inc(v_numFields_2171_);
lean_dec(v_val_2165_);
v___x_2172_ = lean_apply_1(v_p_2146_, v_induct_2169_);
v___x_2173_ = lean_unbox(v___x_2172_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; lean_object* v___x_2176_; 
lean_dec(v_numFields_2171_);
lean_dec(v_numParams_2170_);
lean_dec(v_induct_2169_);
lean_del_object(v___x_2158_);
lean_dec(v_declName_2153_);
lean_dec_ref(v_e_2145_);
v___x_2174_ = lean_box(0);
if (v_isShared_2168_ == 0)
{
lean_ctor_set_tag(v___x_2167_, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2174_);
v___x_2176_ = v___x_2167_;
goto v_reusejp_2175_;
}
else
{
lean_object* v_reuseFailAlloc_2177_; 
v_reuseFailAlloc_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2177_, 0, v___x_2174_);
v___x_2176_ = v_reuseFailAlloc_2177_;
goto v_reusejp_2175_;
}
v_reusejp_2175_:
{
return v___x_2176_;
}
}
else
{
lean_object* v___x_2178_; uint8_t v___x_2179_; 
lean_del_object(v___x_2167_);
v___x_2178_ = lean_unsigned_to_nat(0u);
v___x_2179_ = lean_nat_dec_lt(v___x_2178_, v_numFields_2171_);
if (v___x_2179_ == 0)
{
lean_dec(v_numFields_2171_);
lean_dec(v_numParams_2170_);
lean_dec(v_induct_2169_);
lean_dec(v_declName_2153_);
lean_dec_ref(v_e_2145_);
goto v___jp_2160_;
}
else
{
lean_object* v___x_2180_; lean_object* v___x_2181_; uint8_t v___x_2182_; 
v___x_2180_ = l_Lean_Expr_getAppNumArgs(v_e_2145_);
v___x_2181_ = lean_nat_add(v_numParams_2170_, v_numFields_2171_);
v___x_2182_ = lean_nat_dec_eq(v___x_2180_, v___x_2181_);
lean_dec(v___x_2181_);
if (v___x_2182_ == 0)
{
lean_dec(v___x_2180_);
lean_dec(v_numFields_2171_);
lean_dec(v_numParams_2170_);
lean_dec(v_induct_2169_);
lean_dec(v_declName_2153_);
lean_dec_ref(v_e_2145_);
goto v___jp_2160_;
}
else
{
lean_object* v_dummy_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
lean_del_object(v___x_2158_);
v_dummy_2183_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
lean_inc(v___x_2180_);
v___x_2184_ = lean_mk_array(v___x_2180_, v_dummy_2183_);
v___x_2185_ = lean_unsigned_to_nat(1u);
v___x_2186_ = lean_nat_sub(v___x_2180_, v___x_2185_);
lean_dec(v___x_2180_);
v___x_2187_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2145_, v___x_2184_, v___x_2186_);
lean_inc(v_numParams_2170_);
v___x_2188_ = l_Array_extract___redArg(v___x_2187_, v___x_2178_, v_numParams_2170_);
v___x_2189_ = lean_array_get(v___x_2154_, v___x_2187_, v_numParams_2170_);
v___x_2190_ = lean_box(0);
lean_inc_ref(v___x_2188_);
v___x_2191_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2153_, v_induct_2169_, v___x_2188_, v___x_2178_, v___x_2189_, v___x_2190_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2223_; 
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2194_ = v___x_2191_;
v_isShared_2195_ = v_isSharedCheck_2223_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2191_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2223_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
if (lean_obj_tag(v_a_2192_) == 1)
{
lean_object* v_val_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
lean_del_object(v___x_2194_);
v_val_2196_ = lean_ctor_get(v_a_2192_, 0);
v___x_2197_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0));
v___x_2198_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_numFields_2171_, v_numParams_2170_, v___x_2187_, v_declName_2153_, v_induct_2169_, v___x_2188_, v_a_2192_, v_val_2196_, v___x_2185_, v___x_2197_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v_induct_2169_);
lean_dec(v_declName_2153_);
lean_dec_ref(v___x_2187_);
lean_dec(v_numParams_2170_);
lean_dec(v_numFields_2171_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2211_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2201_ = v___x_2198_;
v_isShared_2202_ = v_isSharedCheck_2211_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2198_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2211_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v_fst_2203_; 
v_fst_2203_ = lean_ctor_get(v_a_2199_, 0);
lean_inc(v_fst_2203_);
lean_dec(v_a_2199_);
if (lean_obj_tag(v_fst_2203_) == 0)
{
lean_object* v___x_2205_; 
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 0, v_a_2192_);
v___x_2205_ = v___x_2201_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2192_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
else
{
lean_object* v_val_2207_; lean_object* v___x_2209_; 
lean_dec_ref_known(v_a_2192_, 1);
v_val_2207_ = lean_ctor_get(v_fst_2203_, 0);
lean_inc(v_val_2207_);
lean_dec_ref_known(v_fst_2203_, 1);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 0, v_val_2207_);
v___x_2209_ = v___x_2201_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_val_2207_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
lean_dec_ref_known(v_a_2192_, 1);
v_a_2212_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2198_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2198_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
else
{
lean_object* v___x_2221_; 
lean_dec(v_a_2192_);
lean_dec_ref(v___x_2188_);
lean_dec_ref(v___x_2187_);
lean_dec(v_numFields_2171_);
lean_dec(v_numParams_2170_);
lean_dec(v_induct_2169_);
lean_dec(v_declName_2153_);
if (v_isShared_2195_ == 0)
{
lean_ctor_set(v___x_2194_, 0, v___x_2190_);
v___x_2221_ = v___x_2194_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2190_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
else
{
lean_dec_ref(v___x_2188_);
lean_dec_ref(v___x_2187_);
lean_dec(v_numFields_2171_);
lean_dec(v_numParams_2170_);
lean_dec(v_induct_2169_);
lean_dec(v_declName_2153_);
return v___x_2191_;
}
}
}
}
}
}
else
{
lean_object* v___x_2225_; lean_object* v___x_2226_; 
lean_del_object(v___x_2158_);
lean_dec(v_a_2156_);
lean_dec(v_declName_2153_);
lean_dec_ref(v_p_2146_);
lean_dec_ref(v_e_2145_);
v___x_2225_ = lean_box(0);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
v___jp_2160_:
{
lean_object* v___x_2161_; lean_object* v___x_2163_; 
v___x_2161_ = lean_box(0);
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v___x_2161_);
v___x_2163_ = v___x_2158_;
goto v_reusejp_2162_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2161_);
v___x_2163_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2162_;
}
v_reusejp_2162_:
{
return v___x_2163_;
}
}
}
}
else
{
lean_object* v_a_2228_; lean_object* v___x_2230_; uint8_t v_isShared_2231_; uint8_t v_isSharedCheck_2235_; 
lean_dec(v_declName_2153_);
lean_dec_ref(v_p_2146_);
lean_dec_ref(v_e_2145_);
v_a_2228_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2230_ = v___x_2155_;
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
else
{
lean_inc(v_a_2228_);
lean_dec(v___x_2155_);
v___x_2230_ = lean_box(0);
v_isShared_2231_ = v_isSharedCheck_2235_;
goto v_resetjp_2229_;
}
v_resetjp_2229_:
{
lean_object* v___x_2233_; 
if (v_isShared_2231_ == 0)
{
v___x_2233_ = v___x_2230_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_a_2228_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
}
}
else
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
lean_dec_ref(v___x_2152_);
lean_dec_ref(v_p_2146_);
lean_dec_ref(v_e_2145_);
v___x_2236_ = lean_box(0);
v___x_2237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2237_, 0, v___x_2236_);
return v___x_2237_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object* v_e_2238_, lean_object* v_p_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lean_Meta_etaStruct_x3f(v_e_2238_, v_p_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object* v_upperBound_2246_, lean_object* v___x_2247_, lean_object* v___x_2248_, lean_object* v_declName_2249_, lean_object* v___x_2250_, lean_object* v___x_2251_, lean_object* v_a_2252_, lean_object* v_val_2253_, lean_object* v_inst_2254_, lean_object* v_R_2255_, lean_object* v_a_2256_, lean_object* v_b_2257_, lean_object* v_c_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2246_, v___x_2247_, v___x_2248_, v_declName_2249_, v___x_2250_, v___x_2251_, v_a_2252_, v_val_2253_, v_a_2256_, v_b_2257_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_);
return v___x_2264_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2265_ = _args[0];
lean_object* v___x_2266_ = _args[1];
lean_object* v___x_2267_ = _args[2];
lean_object* v_declName_2268_ = _args[3];
lean_object* v___x_2269_ = _args[4];
lean_object* v___x_2270_ = _args[5];
lean_object* v_a_2271_ = _args[6];
lean_object* v_val_2272_ = _args[7];
lean_object* v_inst_2273_ = _args[8];
lean_object* v_R_2274_ = _args[9];
lean_object* v_a_2275_ = _args[10];
lean_object* v_b_2276_ = _args[11];
lean_object* v_c_2277_ = _args[12];
lean_object* v___y_2278_ = _args[13];
lean_object* v___y_2279_ = _args[14];
lean_object* v___y_2280_ = _args[15];
lean_object* v___y_2281_ = _args[16];
lean_object* v___y_2282_ = _args[17];
_start:
{
lean_object* v_res_2283_; 
v_res_2283_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(v_upperBound_2265_, v___x_2266_, v___x_2267_, v_declName_2268_, v___x_2269_, v___x_2270_, v_a_2271_, v_val_2272_, v_inst_2273_, v_R_2274_, v_a_2275_, v_b_2276_, v_c_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec_ref(v_val_2272_);
lean_dec(v_a_2271_);
lean_dec(v___x_2269_);
lean_dec(v_declName_2268_);
lean_dec_ref(v___x_2267_);
lean_dec(v___x_2266_);
lean_dec(v_upperBound_2265_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object* v_e_2284_, lean_object* v___y_2285_){
_start:
{
uint8_t v___x_2287_; 
v___x_2287_ = l_Lean_Expr_hasMVar(v_e_2284_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2288_, 0, v_e_2284_);
return v___x_2288_;
}
else
{
lean_object* v___x_2289_; lean_object* v_mctx_2290_; lean_object* v___x_2291_; lean_object* v_fst_2292_; lean_object* v_snd_2293_; lean_object* v___x_2294_; lean_object* v_cache_2295_; lean_object* v_zetaDeltaFVarIds_2296_; lean_object* v_postponed_2297_; lean_object* v_diag_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2307_; 
v___x_2289_ = lean_st_ref_get(v___y_2285_);
v_mctx_2290_ = lean_ctor_get(v___x_2289_, 0);
lean_inc_ref(v_mctx_2290_);
lean_dec(v___x_2289_);
v___x_2291_ = l_Lean_instantiateMVarsCore(v_mctx_2290_, v_e_2284_);
v_fst_2292_ = lean_ctor_get(v___x_2291_, 0);
lean_inc(v_fst_2292_);
v_snd_2293_ = lean_ctor_get(v___x_2291_, 1);
lean_inc(v_snd_2293_);
lean_dec_ref(v___x_2291_);
v___x_2294_ = lean_st_ref_take(v___y_2285_);
v_cache_2295_ = lean_ctor_get(v___x_2294_, 1);
v_zetaDeltaFVarIds_2296_ = lean_ctor_get(v___x_2294_, 2);
v_postponed_2297_ = lean_ctor_get(v___x_2294_, 3);
v_diag_2298_ = lean_ctor_get(v___x_2294_, 4);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2294_);
if (v_isSharedCheck_2307_ == 0)
{
lean_object* v_unused_2308_; 
v_unused_2308_ = lean_ctor_get(v___x_2294_, 0);
lean_dec(v_unused_2308_);
v___x_2300_ = v___x_2294_;
v_isShared_2301_ = v_isSharedCheck_2307_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_diag_2298_);
lean_inc(v_postponed_2297_);
lean_inc(v_zetaDeltaFVarIds_2296_);
lean_inc(v_cache_2295_);
lean_dec(v___x_2294_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2307_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v_snd_2293_);
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_snd_2293_);
lean_ctor_set(v_reuseFailAlloc_2306_, 1, v_cache_2295_);
lean_ctor_set(v_reuseFailAlloc_2306_, 2, v_zetaDeltaFVarIds_2296_);
lean_ctor_set(v_reuseFailAlloc_2306_, 3, v_postponed_2297_);
lean_ctor_set(v_reuseFailAlloc_2306_, 4, v_diag_2298_);
v___x_2303_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2304_ = lean_st_ref_put(v___y_2285_, v___x_2303_);
v___x_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_fst_2292_);
return v___x_2305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object* v_e_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v_res_2312_; 
v_res_2312_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2309_, v___y_2310_);
lean_dec(v___y_2310_);
return v_res_2312_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object* v_e_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2313_, v___y_2315_);
return v___x_2319_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object* v_e_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(v_e_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
lean_dec(v___y_2324_);
lean_dec_ref(v___y_2323_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object* v_x_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_){
_start:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v___x_2335_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object* v_x_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lean_Meta_etaStructReduce___lam__0(v_x_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec_ref(v_x_2337_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object* v_p_2344_, lean_object* v_e_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Lean_Meta_etaStruct_x3f(v_e_2345_, v_p_2344_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2371_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2371_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2371_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2371_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2371_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
if (lean_obj_tag(v_a_2352_) == 1)
{
lean_object* v_val_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2366_; 
v_val_2356_ = lean_ctor_get(v_a_2352_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v_a_2352_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2358_ = v_a_2352_;
v_isShared_2359_ = v_isSharedCheck_2366_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_val_2356_);
lean_dec(v_a_2352_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2366_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2361_; 
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
v___x_2361_ = v___x_2358_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_val_2356_);
v___x_2361_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2363_; 
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2361_);
v___x_2363_ = v___x_2354_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2361_);
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
lean_object* v___x_2367_; lean_object* v___x_2369_; 
lean_dec(v_a_2352_);
v___x_2367_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___lam__0___closed__0));
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2367_);
v___x_2369_ = v___x_2354_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2367_);
v___x_2369_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
return v___x_2369_;
}
}
}
}
else
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2379_; 
v_a_2372_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2379_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2374_ = v___x_2351_;
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2351_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2379_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
lean_object* v___x_2377_; 
if (v_isShared_2375_ == 0)
{
v___x_2377_ = v___x_2374_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_a_2372_);
v___x_2377_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
return v___x_2377_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object* v_p_2380_, lean_object* v_e_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_Lean_Meta_etaStructReduce___lam__1(v_p_2380_, v_e_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
return v_res_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object* v_00_u03b1_2388_, lean_object* v_x_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = lean_apply_1(v_x_2389_, lean_box(0));
v___x_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2395_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2397_, lean_object* v_x_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(v_00_u03b1_2397_, v_x_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object* v_a_2405_, lean_object* v_b_2406_, lean_object* v_x_2407_){
_start:
{
if (lean_obj_tag(v_x_2407_) == 0)
{
lean_dec(v_b_2406_);
lean_dec_ref(v_a_2405_);
return v_x_2407_;
}
else
{
lean_object* v_key_2408_; lean_object* v_value_2409_; lean_object* v_tail_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2422_; 
v_key_2408_ = lean_ctor_get(v_x_2407_, 0);
v_value_2409_ = lean_ctor_get(v_x_2407_, 1);
v_tail_2410_ = lean_ctor_get(v_x_2407_, 2);
v_isSharedCheck_2422_ = !lean_is_exclusive(v_x_2407_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2412_ = v_x_2407_;
v_isShared_2413_ = v_isSharedCheck_2422_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_tail_2410_);
lean_inc(v_value_2409_);
lean_inc(v_key_2408_);
lean_dec(v_x_2407_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2422_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
uint8_t v___x_2414_; 
v___x_2414_ = l_Lean_ExprStructEq_beq(v_key_2408_, v_a_2405_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2417_; 
v___x_2415_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2405_, v_b_2406_, v_tail_2410_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 2, v___x_2415_);
v___x_2417_ = v___x_2412_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_key_2408_);
lean_ctor_set(v_reuseFailAlloc_2418_, 1, v_value_2409_);
lean_ctor_set(v_reuseFailAlloc_2418_, 2, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
else
{
lean_object* v___x_2420_; 
lean_dec(v_value_2409_);
lean_dec(v_key_2408_);
if (v_isShared_2413_ == 0)
{
lean_ctor_set(v___x_2412_, 1, v_b_2406_);
lean_ctor_set(v___x_2412_, 0, v_a_2405_);
v___x_2420_ = v___x_2412_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2405_);
lean_ctor_set(v_reuseFailAlloc_2421_, 1, v_b_2406_);
lean_ctor_set(v_reuseFailAlloc_2421_, 2, v_tail_2410_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object* v_x_2423_, lean_object* v_x_2424_){
_start:
{
if (lean_obj_tag(v_x_2424_) == 0)
{
return v_x_2423_;
}
else
{
lean_object* v_key_2425_; lean_object* v_value_2426_; lean_object* v_tail_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2450_; 
v_key_2425_ = lean_ctor_get(v_x_2424_, 0);
v_value_2426_ = lean_ctor_get(v_x_2424_, 1);
v_tail_2427_ = lean_ctor_get(v_x_2424_, 2);
v_isSharedCheck_2450_ = !lean_is_exclusive(v_x_2424_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2429_ = v_x_2424_;
v_isShared_2430_ = v_isSharedCheck_2450_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_tail_2427_);
lean_inc(v_value_2426_);
lean_inc(v_key_2425_);
lean_dec(v_x_2424_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2450_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
lean_object* v___x_2431_; uint64_t v___x_2432_; uint64_t v___x_2433_; uint64_t v___x_2434_; uint64_t v_fold_2435_; uint64_t v___x_2436_; uint64_t v___x_2437_; uint64_t v___x_2438_; size_t v___x_2439_; size_t v___x_2440_; size_t v___x_2441_; size_t v___x_2442_; size_t v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2446_; 
v___x_2431_ = lean_array_get_size(v_x_2423_);
v___x_2432_ = l_Lean_ExprStructEq_hash(v_key_2425_);
v___x_2433_ = 32ULL;
v___x_2434_ = lean_uint64_shift_right(v___x_2432_, v___x_2433_);
v_fold_2435_ = lean_uint64_xor(v___x_2432_, v___x_2434_);
v___x_2436_ = 16ULL;
v___x_2437_ = lean_uint64_shift_right(v_fold_2435_, v___x_2436_);
v___x_2438_ = lean_uint64_xor(v_fold_2435_, v___x_2437_);
v___x_2439_ = lean_uint64_to_usize(v___x_2438_);
v___x_2440_ = lean_usize_of_nat(v___x_2431_);
v___x_2441_ = ((size_t)1ULL);
v___x_2442_ = lean_usize_sub(v___x_2440_, v___x_2441_);
v___x_2443_ = lean_usize_land(v___x_2439_, v___x_2442_);
v___x_2444_ = lean_array_uget_borrowed(v_x_2423_, v___x_2443_);
lean_inc(v___x_2444_);
if (v_isShared_2430_ == 0)
{
lean_ctor_set(v___x_2429_, 2, v___x_2444_);
v___x_2446_ = v___x_2429_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_key_2425_);
lean_ctor_set(v_reuseFailAlloc_2449_, 1, v_value_2426_);
lean_ctor_set(v_reuseFailAlloc_2449_, 2, v___x_2444_);
v___x_2446_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
lean_object* v___x_2447_; 
v___x_2447_ = lean_array_uset(v_x_2423_, v___x_2443_, v___x_2446_);
v_x_2423_ = v___x_2447_;
v_x_2424_ = v_tail_2427_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object* v_i_2451_, lean_object* v_source_2452_, lean_object* v_target_2453_){
_start:
{
lean_object* v___x_2454_; uint8_t v___x_2455_; 
v___x_2454_ = lean_array_get_size(v_source_2452_);
v___x_2455_ = lean_nat_dec_lt(v_i_2451_, v___x_2454_);
if (v___x_2455_ == 0)
{
lean_dec_ref(v_source_2452_);
lean_dec(v_i_2451_);
return v_target_2453_;
}
else
{
lean_object* v_es_2456_; lean_object* v___x_2457_; lean_object* v_source_2458_; lean_object* v_target_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v_es_2456_ = lean_array_fget(v_source_2452_, v_i_2451_);
v___x_2457_ = lean_box(0);
v_source_2458_ = lean_array_fset(v_source_2452_, v_i_2451_, v___x_2457_);
v_target_2459_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_target_2453_, v_es_2456_);
v___x_2460_ = lean_unsigned_to_nat(1u);
v___x_2461_ = lean_nat_add(v_i_2451_, v___x_2460_);
lean_dec(v_i_2451_);
v_i_2451_ = v___x_2461_;
v_source_2452_ = v_source_2458_;
v_target_2453_ = v_target_2459_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object* v_data_2463_){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v_nbuckets_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2464_ = lean_array_get_size(v_data_2463_);
v___x_2465_ = lean_unsigned_to_nat(2u);
v_nbuckets_2466_ = lean_nat_mul(v___x_2464_, v___x_2465_);
v___x_2467_ = lean_unsigned_to_nat(0u);
v___x_2468_ = lean_box(0);
v___x_2469_ = lean_mk_array(v_nbuckets_2466_, v___x_2468_);
v___x_2470_ = lean_array_propagate_mark(v_data_2463_, v___x_2469_);
v___x_2471_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v___x_2467_, v_data_2463_, v___x_2470_);
return v___x_2471_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object* v_a_2472_, lean_object* v_x_2473_){
_start:
{
if (lean_obj_tag(v_x_2473_) == 0)
{
uint8_t v___x_2474_; 
v___x_2474_ = 0;
return v___x_2474_;
}
else
{
lean_object* v_key_2475_; lean_object* v_tail_2476_; uint8_t v___x_2477_; 
v_key_2475_ = lean_ctor_get(v_x_2473_, 0);
v_tail_2476_ = lean_ctor_get(v_x_2473_, 2);
v___x_2477_ = l_Lean_ExprStructEq_beq(v_key_2475_, v_a_2472_);
if (v___x_2477_ == 0)
{
v_x_2473_ = v_tail_2476_;
goto _start;
}
else
{
return v___x_2477_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object* v_a_2479_, lean_object* v_x_2480_){
_start:
{
uint8_t v_res_2481_; lean_object* v_r_2482_; 
v_res_2481_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2479_, v_x_2480_);
lean_dec(v_x_2480_);
lean_dec_ref(v_a_2479_);
v_r_2482_ = lean_box(v_res_2481_);
return v_r_2482_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object* v_m_2483_, lean_object* v_a_2484_, lean_object* v_b_2485_){
_start:
{
lean_object* v_size_2486_; lean_object* v_buckets_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2530_; 
v_size_2486_ = lean_ctor_get(v_m_2483_, 0);
v_buckets_2487_ = lean_ctor_get(v_m_2483_, 1);
v_isSharedCheck_2530_ = !lean_is_exclusive(v_m_2483_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2489_ = v_m_2483_;
v_isShared_2490_ = v_isSharedCheck_2530_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_buckets_2487_);
lean_inc(v_size_2486_);
lean_dec(v_m_2483_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2530_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2491_; uint64_t v___x_2492_; uint64_t v___x_2493_; uint64_t v___x_2494_; uint64_t v_fold_2495_; uint64_t v___x_2496_; uint64_t v___x_2497_; uint64_t v___x_2498_; size_t v___x_2499_; size_t v___x_2500_; size_t v___x_2501_; size_t v___x_2502_; size_t v___x_2503_; lean_object* v_bkt_2504_; uint8_t v___x_2505_; 
v___x_2491_ = lean_array_get_size(v_buckets_2487_);
v___x_2492_ = l_Lean_ExprStructEq_hash(v_a_2484_);
v___x_2493_ = 32ULL;
v___x_2494_ = lean_uint64_shift_right(v___x_2492_, v___x_2493_);
v_fold_2495_ = lean_uint64_xor(v___x_2492_, v___x_2494_);
v___x_2496_ = 16ULL;
v___x_2497_ = lean_uint64_shift_right(v_fold_2495_, v___x_2496_);
v___x_2498_ = lean_uint64_xor(v_fold_2495_, v___x_2497_);
v___x_2499_ = lean_uint64_to_usize(v___x_2498_);
v___x_2500_ = lean_usize_of_nat(v___x_2491_);
v___x_2501_ = ((size_t)1ULL);
v___x_2502_ = lean_usize_sub(v___x_2500_, v___x_2501_);
v___x_2503_ = lean_usize_land(v___x_2499_, v___x_2502_);
v_bkt_2504_ = lean_array_uget_borrowed(v_buckets_2487_, v___x_2503_);
v___x_2505_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2484_, v_bkt_2504_);
if (v___x_2505_ == 0)
{
lean_object* v___x_2506_; lean_object* v_size_x27_2507_; lean_object* v___x_2508_; lean_object* v_buckets_x27_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; uint8_t v___x_2515_; 
v___x_2506_ = lean_unsigned_to_nat(1u);
v_size_x27_2507_ = lean_nat_add(v_size_2486_, v___x_2506_);
lean_dec(v_size_2486_);
lean_inc(v_bkt_2504_);
v___x_2508_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2508_, 0, v_a_2484_);
lean_ctor_set(v___x_2508_, 1, v_b_2485_);
lean_ctor_set(v___x_2508_, 2, v_bkt_2504_);
v_buckets_x27_2509_ = lean_array_uset(v_buckets_2487_, v___x_2503_, v___x_2508_);
v___x_2510_ = lean_unsigned_to_nat(4u);
v___x_2511_ = lean_nat_mul(v_size_x27_2507_, v___x_2510_);
v___x_2512_ = lean_unsigned_to_nat(3u);
v___x_2513_ = lean_nat_div(v___x_2511_, v___x_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_array_get_size(v_buckets_x27_2509_);
v___x_2515_ = lean_nat_dec_le(v___x_2513_, v___x_2514_);
lean_dec(v___x_2513_);
if (v___x_2515_ == 0)
{
lean_object* v_val_2516_; lean_object* v___x_2518_; 
v_val_2516_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_buckets_x27_2509_);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 1, v_val_2516_);
lean_ctor_set(v___x_2489_, 0, v_size_x27_2507_);
v___x_2518_ = v___x_2489_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_size_x27_2507_);
lean_ctor_set(v_reuseFailAlloc_2519_, 1, v_val_2516_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
else
{
lean_object* v___x_2521_; 
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 1, v_buckets_x27_2509_);
lean_ctor_set(v___x_2489_, 0, v_size_x27_2507_);
v___x_2521_ = v___x_2489_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_size_x27_2507_);
lean_ctor_set(v_reuseFailAlloc_2522_, 1, v_buckets_x27_2509_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
else
{
lean_object* v___x_2523_; lean_object* v_buckets_x27_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2528_; 
lean_inc(v_bkt_2504_);
v___x_2523_ = lean_box(0);
v_buckets_x27_2524_ = lean_array_uset(v_buckets_2487_, v___x_2503_, v___x_2523_);
v___x_2525_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2484_, v_b_2485_, v_bkt_2504_);
v___x_2526_ = lean_array_uset(v_buckets_x27_2524_, v___x_2503_, v___x_2525_);
if (v_isShared_2490_ == 0)
{
lean_ctor_set(v___x_2489_, 1, v___x_2526_);
v___x_2528_ = v___x_2489_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_size_2486_);
lean_ctor_set(v_reuseFailAlloc_2529_, 1, v___x_2526_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object* v___y_2531_, lean_object* v_e_2532_, lean_object* v_a_2533_){
_start:
{
lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2535_ = lean_st_ref_take(v___y_2531_);
v___x_2536_ = lean_box(0);
v___x_2537_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v___x_2535_, v_e_2532_, v_a_2533_);
v___x_2538_ = lean_st_ref_put(v___y_2531_, v___x_2537_);
return v___x_2536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object* v___y_2539_, lean_object* v_e_2540_, lean_object* v_a_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(v___y_2539_, v_e_2540_, v_a_2541_);
lean_dec(v___y_2539_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_2544_, lean_object* v_x_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2551_ = lean_apply_1(v_x_2545_, lean_box(0));
v___x_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2552_, 0, v___x_2551_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2553_, lean_object* v_x_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(v_00_u03b1_2553_, v_x_2554_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec(v___y_2556_);
lean_dec_ref(v___y_2555_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_a_2561_, lean_object* v_x_2562_){
_start:
{
if (lean_obj_tag(v_x_2562_) == 0)
{
lean_object* v___x_2563_; 
v___x_2563_ = lean_box(0);
return v___x_2563_;
}
else
{
lean_object* v_key_2564_; lean_object* v_value_2565_; lean_object* v_tail_2566_; uint8_t v___x_2567_; 
v_key_2564_ = lean_ctor_get(v_x_2562_, 0);
v_value_2565_ = lean_ctor_get(v_x_2562_, 1);
v_tail_2566_ = lean_ctor_get(v_x_2562_, 2);
v___x_2567_ = l_Lean_ExprStructEq_beq(v_key_2564_, v_a_2561_);
if (v___x_2567_ == 0)
{
v_x_2562_ = v_tail_2566_;
goto _start;
}
else
{
lean_object* v___x_2569_; 
lean_inc(v_value_2565_);
v___x_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2569_, 0, v_value_2565_);
return v___x_2569_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_a_2570_, lean_object* v_x_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2570_, v_x_2571_);
lean_dec(v_x_2571_);
lean_dec_ref(v_a_2570_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object* v_m_2573_, lean_object* v_a_2574_){
_start:
{
lean_object* v_buckets_2575_; lean_object* v___x_2576_; uint64_t v___x_2577_; uint64_t v___x_2578_; uint64_t v___x_2579_; uint64_t v_fold_2580_; uint64_t v___x_2581_; uint64_t v___x_2582_; uint64_t v___x_2583_; size_t v___x_2584_; size_t v___x_2585_; size_t v___x_2586_; size_t v___x_2587_; size_t v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v_buckets_2575_ = lean_ctor_get(v_m_2573_, 1);
v___x_2576_ = lean_array_get_size(v_buckets_2575_);
v___x_2577_ = l_Lean_ExprStructEq_hash(v_a_2574_);
v___x_2578_ = 32ULL;
v___x_2579_ = lean_uint64_shift_right(v___x_2577_, v___x_2578_);
v_fold_2580_ = lean_uint64_xor(v___x_2577_, v___x_2579_);
v___x_2581_ = 16ULL;
v___x_2582_ = lean_uint64_shift_right(v_fold_2580_, v___x_2581_);
v___x_2583_ = lean_uint64_xor(v_fold_2580_, v___x_2582_);
v___x_2584_ = lean_uint64_to_usize(v___x_2583_);
v___x_2585_ = lean_usize_of_nat(v___x_2576_);
v___x_2586_ = ((size_t)1ULL);
v___x_2587_ = lean_usize_sub(v___x_2585_, v___x_2586_);
v___x_2588_ = lean_usize_land(v___x_2584_, v___x_2587_);
v___x_2589_ = lean_array_uget_borrowed(v_buckets_2575_, v___x_2588_);
v___x_2590_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2574_, v___x_2589_);
return v___x_2590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_m_2591_, lean_object* v_a_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_2591_, v_a_2592_);
lean_dec_ref(v_a_2592_);
lean_dec_ref(v_m_2591_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object* v_k_2594_, lean_object* v___y_2595_, lean_object* v_b_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v___x_2602_; 
lean_inc(v___y_2600_);
lean_inc_ref(v___y_2599_);
lean_inc(v___y_2598_);
lean_inc_ref(v___y_2597_);
lean_inc(v___y_2595_);
v___x_2602_ = lean_apply_7(v_k_2594_, v_b_2596_, v___y_2595_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, lean_box(0));
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_2603_, lean_object* v___y_2604_, lean_object* v_b_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(v_k_2603_, v___y_2604_, v_b_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v___y_2604_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object* v_name_2612_, uint8_t v_bi_2613_, lean_object* v_type_2614_, lean_object* v_k_2615_, uint8_t v_kind_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v___f_2623_; lean_object* v___x_2624_; 
lean_inc(v___y_2617_);
v___f_2623_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2623_, 0, v_k_2615_);
lean_closure_set(v___f_2623_, 1, v___y_2617_);
v___x_2624_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2612_, v_bi_2613_, v_type_2614_, v___f_2623_, v_kind_2616_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2624_) == 0)
{
return v___x_2624_;
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2624_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2624_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object* v_name_2633_, lean_object* v_bi_2634_, lean_object* v_type_2635_, lean_object* v_k_2636_, lean_object* v_kind_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_){
_start:
{
uint8_t v_bi_boxed_2644_; uint8_t v_kind_boxed_2645_; lean_object* v_res_2646_; 
v_bi_boxed_2644_ = lean_unbox(v_bi_2634_);
v_kind_boxed_2645_ = lean_unbox(v_kind_2637_);
v_res_2646_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_2633_, v_bi_boxed_2644_, v_type_2635_, v_k_2636_, v_kind_boxed_2645_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
return v_res_2646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object* v_name_2647_, lean_object* v_type_2648_, lean_object* v_val_2649_, lean_object* v_k_2650_, uint8_t v_nondep_2651_, uint8_t v_kind_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_){
_start:
{
lean_object* v___f_2659_; lean_object* v___x_2660_; 
lean_inc(v___y_2653_);
v___f_2659_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2659_, 0, v_k_2650_);
lean_closure_set(v___f_2659_, 1, v___y_2653_);
v___x_2660_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2647_, v_type_2648_, v_val_2649_, v___f_2659_, v_nondep_2651_, v_kind_2652_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2660_) == 0)
{
return v___x_2660_;
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2660_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2660_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object* v_name_2669_, lean_object* v_type_2670_, lean_object* v_val_2671_, lean_object* v_k_2672_, lean_object* v_nondep_2673_, lean_object* v_kind_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_){
_start:
{
uint8_t v_nondep_boxed_2681_; uint8_t v_kind_boxed_2682_; lean_object* v_res_2683_; 
v_nondep_boxed_2681_ = lean_unbox(v_nondep_2673_);
v_kind_boxed_2682_ = lean_unbox(v_kind_2674_);
v_res_2683_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_2669_, v_type_2670_, v_val_2671_, v_k_2672_, v_nondep_boxed_2681_, v_kind_boxed_2682_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v___y_2675_);
return v_res_2683_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3(void){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; 
v___x_2689_ = l_Lean_maxRecDepthErrorMessage;
v___x_2690_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
return v___x_2690_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4(void){
_start:
{
lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2691_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3);
v___x_2692_ = l_Lean_MessageData_ofFormat(v___x_2691_);
return v___x_2692_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5(void){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v___x_2693_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4);
v___x_2694_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2));
v___x_2695_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2694_);
lean_ctor_set(v___x_2695_, 1, v___x_2693_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object* v_ref_2696_){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; 
v___x_2698_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5);
v___x_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2699_, 0, v_ref_2696_);
lean_ctor_set(v___x_2699_, 1, v___x_2698_);
v___x_2700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2700_, 0, v___x_2699_);
return v___x_2700_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object* v_ref_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2701_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object* v_x_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v___y_2712_; lean_object* v_toCold_2721_; lean_object* v_currRecDepth_2722_; lean_object* v_ref_2723_; uint8_t v_diag_2724_; uint8_t v_suppressElabErrors_2725_; lean_object* v_maxRecDepth_2731_; lean_object* v___x_2732_; uint8_t v___x_2733_; 
v_toCold_2721_ = lean_ctor_get(v___y_2708_, 0);
v_currRecDepth_2722_ = lean_ctor_get(v___y_2708_, 1);
v_ref_2723_ = lean_ctor_get(v___y_2708_, 2);
v_diag_2724_ = lean_ctor_get_uint8(v___y_2708_, sizeof(void*)*3);
v_suppressElabErrors_2725_ = lean_ctor_get_uint8(v___y_2708_, sizeof(void*)*3 + 1);
v_maxRecDepth_2731_ = lean_ctor_get(v_toCold_2721_, 3);
v___x_2732_ = lean_unsigned_to_nat(0u);
v___x_2733_ = lean_nat_dec_eq(v_maxRecDepth_2731_, v___x_2732_);
if (v___x_2733_ == 0)
{
uint8_t v___x_2734_; 
v___x_2734_ = lean_nat_dec_eq(v_currRecDepth_2722_, v_maxRecDepth_2731_);
if (v___x_2734_ == 0)
{
goto v___jp_2726_;
}
else
{
lean_object* v___x_2735_; 
lean_dec_ref(v_x_2704_);
lean_inc(v_ref_2723_);
v___x_2735_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2723_);
v___y_2712_ = v___x_2735_;
goto v___jp_2711_;
}
}
else
{
goto v___jp_2726_;
}
v___jp_2711_:
{
if (lean_obj_tag(v___y_2712_) == 0)
{
return v___y_2712_;
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
v_a_2713_ = lean_ctor_get(v___y_2712_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___y_2712_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___y_2712_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___y_2712_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v___x_2718_; 
if (v_isShared_2716_ == 0)
{
v___x_2718_ = v___x_2715_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_a_2713_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
v___jp_2726_:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2727_ = lean_unsigned_to_nat(1u);
v___x_2728_ = lean_nat_add(v_currRecDepth_2722_, v___x_2727_);
lean_inc(v_ref_2723_);
lean_inc_ref(v_toCold_2721_);
v___x_2729_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2729_, 0, v_toCold_2721_);
lean_ctor_set(v___x_2729_, 1, v___x_2728_);
lean_ctor_set(v___x_2729_, 2, v_ref_2723_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*3, v_diag_2724_);
lean_ctor_set_uint8(v___x_2729_, sizeof(void*)*3 + 1, v_suppressElabErrors_2725_);
lean_inc(v___y_2709_);
lean_inc(v___y_2707_);
lean_inc_ref(v___y_2706_);
lean_inc(v___y_2705_);
v___x_2730_ = lean_apply_6(v_x_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___x_2729_, v___y_2709_, lean_box(0));
v___y_2712_ = v___x_2730_;
goto v___jp_2711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object* v_x_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v___y_2737_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_2744_, lean_object* v_pre_2745_, lean_object* v_post_2746_, lean_object* v_usedLetOnly_2747_, lean_object* v_skipConstInApp_2748_, lean_object* v_skipInstances_2749_, lean_object* v_body_2750_, lean_object* v_x_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
uint8_t v_usedLetOnly_boxed_2758_; uint8_t v_skipConstInApp_boxed_2759_; uint8_t v_skipInstances_boxed_2760_; lean_object* v_res_2761_; 
v_usedLetOnly_boxed_2758_ = lean_unbox(v_usedLetOnly_2747_);
v_skipConstInApp_boxed_2759_ = lean_unbox(v_skipConstInApp_2748_);
v_skipInstances_boxed_2760_ = lean_unbox(v_skipInstances_2749_);
v_res_2761_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_2744_, v_pre_2745_, v_post_2746_, v_usedLetOnly_boxed_2758_, v_skipConstInApp_boxed_2759_, v_skipInstances_boxed_2760_, v_body_2750_, v_x_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_2765_, lean_object* v_pre_2766_, lean_object* v_post_2767_, uint8_t v_usedLetOnly_2768_, uint8_t v_skipConstInApp_2769_, uint8_t v_skipInstances_2770_, lean_object* v_body_2771_, lean_object* v_x_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2779_ = lean_array_push(v_fvars_2765_, v_x_2772_);
v___x_2780_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_2766_, v_post_2767_, v_usedLetOnly_2768_, v_skipConstInApp_2769_, v_skipInstances_2770_, v___x_2779_, v_body_2771_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_2781_, lean_object* v_pre_2782_, lean_object* v_post_2783_, lean_object* v_usedLetOnly_2784_, lean_object* v_skipConstInApp_2785_, lean_object* v_skipInstances_2786_, lean_object* v_body_2787_, lean_object* v_x_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
uint8_t v_usedLetOnly_boxed_2795_; uint8_t v_skipConstInApp_boxed_2796_; uint8_t v_skipInstances_boxed_2797_; lean_object* v_res_2798_; 
v_usedLetOnly_boxed_2795_ = lean_unbox(v_usedLetOnly_2784_);
v_skipConstInApp_boxed_2796_ = lean_unbox(v_skipConstInApp_2785_);
v_skipInstances_boxed_2797_ = lean_unbox(v_skipInstances_2786_);
v_res_2798_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_2781_, v_pre_2782_, v_post_2783_, v_usedLetOnly_boxed_2795_, v_skipConstInApp_boxed_2796_, v_skipInstances_boxed_2797_, v_body_2787_, v_x_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_, v___y_2793_);
lean_dec(v___y_2793_);
lean_dec_ref(v___y_2792_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object* v_pre_2799_, lean_object* v_post_2800_, uint8_t v_usedLetOnly_2801_, uint8_t v_skipConstInApp_2802_, uint8_t v_skipInstances_2803_, lean_object* v_e_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
lean_object* v___x_2811_; 
lean_inc_ref(v_post_2800_);
lean_inc(v___y_2809_);
lean_inc_ref(v___y_2808_);
lean_inc(v___y_2807_);
lean_inc_ref(v___y_2806_);
lean_inc_ref(v_e_2804_);
v___x_2811_ = lean_apply_6(v_post_2800_, v_e_2804_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, lean_box(0));
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2830_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2814_ = v___x_2811_;
v_isShared_2815_ = v_isSharedCheck_2830_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2811_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2830_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
switch(lean_obj_tag(v_a_2812_))
{
case 0:
{
lean_object* v_e_2816_; lean_object* v___x_2818_; 
lean_dec_ref(v_e_2804_);
lean_dec_ref(v_post_2800_);
lean_dec_ref(v_pre_2799_);
v_e_2816_ = lean_ctor_get(v_a_2812_, 0);
lean_inc_ref(v_e_2816_);
lean_dec_ref_known(v_a_2812_, 1);
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v_e_2816_);
v___x_2818_ = v___x_2814_;
goto v_reusejp_2817_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_e_2816_);
v___x_2818_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2817_;
}
v_reusejp_2817_:
{
return v___x_2818_;
}
}
case 1:
{
lean_object* v_e_2820_; lean_object* v___x_2821_; 
lean_del_object(v___x_2814_);
lean_dec_ref(v_e_2804_);
v_e_2820_ = lean_ctor_get(v_a_2812_, 0);
lean_inc_ref(v_e_2820_);
lean_dec_ref_known(v_a_2812_, 1);
v___x_2821_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2799_, v_post_2800_, v_usedLetOnly_2801_, v_skipConstInApp_2802_, v_skipInstances_2803_, v_e_2820_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
return v___x_2821_;
}
default: 
{
lean_object* v_e_x3f_2822_; 
lean_dec_ref(v_post_2800_);
lean_dec_ref(v_pre_2799_);
v_e_x3f_2822_ = lean_ctor_get(v_a_2812_, 0);
lean_inc(v_e_x3f_2822_);
lean_dec_ref_known(v_a_2812_, 1);
if (lean_obj_tag(v_e_x3f_2822_) == 0)
{
lean_object* v___x_2824_; 
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v_e_2804_);
v___x_2824_ = v___x_2814_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_e_2804_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
else
{
lean_object* v_val_2826_; lean_object* v___x_2828_; 
lean_dec_ref(v_e_2804_);
v_val_2826_ = lean_ctor_get(v_e_x3f_2822_, 0);
lean_inc(v_val_2826_);
lean_dec_ref_known(v_e_x3f_2822_, 1);
if (v_isShared_2815_ == 0)
{
lean_ctor_set(v___x_2814_, 0, v_val_2826_);
v___x_2828_ = v___x_2814_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_val_2826_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
}
}
else
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
lean_dec_ref(v_e_2804_);
lean_dec_ref(v_post_2800_);
lean_dec_ref(v_pre_2799_);
v_a_2831_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___x_2811_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2811_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object* v_pre_2839_, lean_object* v_post_2840_, uint8_t v_usedLetOnly_2841_, uint8_t v_skipConstInApp_2842_, uint8_t v_skipInstances_2843_, lean_object* v_fvars_2844_, lean_object* v_e_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_){
_start:
{
if (lean_obj_tag(v_e_2845_) == 6)
{
lean_object* v_binderName_2852_; lean_object* v_binderType_2853_; lean_object* v_body_2854_; uint8_t v_binderInfo_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___f_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v_binderName_2852_ = lean_ctor_get(v_e_2845_, 0);
lean_inc(v_binderName_2852_);
v_binderType_2853_ = lean_ctor_get(v_e_2845_, 1);
lean_inc_ref(v_binderType_2853_);
v_body_2854_ = lean_ctor_get(v_e_2845_, 2);
lean_inc_ref(v_body_2854_);
v_binderInfo_2855_ = lean_ctor_get_uint8(v_e_2845_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_2845_, 3);
v___x_2856_ = lean_box(v_usedLetOnly_2841_);
v___x_2857_ = lean_box(v_skipConstInApp_2842_);
v___x_2858_ = lean_box(v_skipInstances_2843_);
lean_inc_ref(v_post_2840_);
lean_inc_ref(v_pre_2839_);
lean_inc_ref(v_fvars_2844_);
v___f_2859_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2859_, 0, v_fvars_2844_);
lean_closure_set(v___f_2859_, 1, v_pre_2839_);
lean_closure_set(v___f_2859_, 2, v_post_2840_);
lean_closure_set(v___f_2859_, 3, v___x_2856_);
lean_closure_set(v___f_2859_, 4, v___x_2857_);
lean_closure_set(v___f_2859_, 5, v___x_2858_);
lean_closure_set(v___f_2859_, 6, v_body_2854_);
v___x_2860_ = lean_expr_instantiate_rev(v_binderType_2853_, v_fvars_2844_);
lean_dec_ref(v_fvars_2844_);
lean_dec_ref(v_binderType_2853_);
v___x_2861_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2839_, v_post_2840_, v_usedLetOnly_2841_, v_skipConstInApp_2842_, v_skipInstances_2843_, v___x_2860_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v_a_2862_; uint8_t v___x_2863_; lean_object* v___x_2864_; 
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
lean_inc(v_a_2862_);
lean_dec_ref_known(v___x_2861_, 1);
v___x_2863_ = 0;
v___x_2864_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_2852_, v_binderInfo_2855_, v_a_2862_, v___f_2859_, v___x_2863_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
return v___x_2864_;
}
else
{
lean_dec_ref(v___f_2859_);
lean_dec(v_binderName_2852_);
return v___x_2861_;
}
}
else
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_expr_instantiate_rev(v_e_2845_, v_fvars_2844_);
lean_dec_ref(v_e_2845_);
lean_inc_ref(v_post_2840_);
lean_inc_ref(v_pre_2839_);
v___x_2866_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2839_, v_post_2840_, v_usedLetOnly_2841_, v_skipConstInApp_2842_, v_skipInstances_2843_, v___x_2865_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_object* v_a_2867_; uint8_t v___x_2868_; uint8_t v___x_2869_; uint8_t v___x_2870_; lean_object* v___x_2871_; 
v_a_2867_ = lean_ctor_get(v___x_2866_, 0);
lean_inc(v_a_2867_);
lean_dec_ref_known(v___x_2866_, 1);
v___x_2868_ = 0;
v___x_2869_ = 1;
v___x_2870_ = 1;
v___x_2871_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2844_, v_a_2867_, v___x_2868_, v_usedLetOnly_2841_, v___x_2868_, v___x_2869_, v___x_2870_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
lean_dec_ref(v_fvars_2844_);
if (lean_obj_tag(v___x_2871_) == 0)
{
lean_object* v_a_2872_; lean_object* v___x_2873_; 
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
lean_inc(v_a_2872_);
lean_dec_ref_known(v___x_2871_, 1);
v___x_2873_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2839_, v_post_2840_, v_usedLetOnly_2841_, v_skipConstInApp_2842_, v_skipInstances_2843_, v_a_2872_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_);
return v___x_2873_;
}
else
{
lean_dec_ref(v_post_2840_);
lean_dec_ref(v_pre_2839_);
return v___x_2871_;
}
}
else
{
lean_dec_ref(v_fvars_2844_);
lean_dec_ref(v_post_2840_);
lean_dec_ref(v_pre_2839_);
return v___x_2866_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object* v_fvars_2874_, lean_object* v_pre_2875_, lean_object* v_post_2876_, uint8_t v_usedLetOnly_2877_, uint8_t v_skipConstInApp_2878_, uint8_t v_skipInstances_2879_, lean_object* v_body_2880_, lean_object* v_x_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_){
_start:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; 
v___x_2888_ = lean_array_push(v_fvars_2874_, v_x_2881_);
v___x_2889_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_2875_, v_post_2876_, v_usedLetOnly_2877_, v_skipConstInApp_2878_, v_skipInstances_2879_, v___x_2888_, v_body_2880_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object* v_fvars_2890_, lean_object* v_pre_2891_, lean_object* v_post_2892_, lean_object* v_usedLetOnly_2893_, lean_object* v_skipConstInApp_2894_, lean_object* v_skipInstances_2895_, lean_object* v_body_2896_, lean_object* v_x_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
uint8_t v_usedLetOnly_boxed_2904_; uint8_t v_skipConstInApp_boxed_2905_; uint8_t v_skipInstances_boxed_2906_; lean_object* v_res_2907_; 
v_usedLetOnly_boxed_2904_ = lean_unbox(v_usedLetOnly_2893_);
v_skipConstInApp_boxed_2905_ = lean_unbox(v_skipConstInApp_2894_);
v_skipInstances_boxed_2906_ = lean_unbox(v_skipInstances_2895_);
v_res_2907_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(v_fvars_2890_, v_pre_2891_, v_post_2892_, v_usedLetOnly_boxed_2904_, v_skipConstInApp_boxed_2905_, v_skipInstances_boxed_2906_, v_body_2896_, v_x_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
lean_dec(v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object* v_pre_2908_, lean_object* v_post_2909_, uint8_t v_usedLetOnly_2910_, uint8_t v_skipConstInApp_2911_, uint8_t v_skipInstances_2912_, lean_object* v_fvars_2913_, lean_object* v_e_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
if (lean_obj_tag(v_e_2914_) == 8)
{
lean_object* v_declName_2921_; lean_object* v_type_2922_; lean_object* v_value_2923_; lean_object* v_body_2924_; uint8_t v_nondep_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___f_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v_declName_2921_ = lean_ctor_get(v_e_2914_, 0);
lean_inc(v_declName_2921_);
v_type_2922_ = lean_ctor_get(v_e_2914_, 1);
lean_inc_ref(v_type_2922_);
v_value_2923_ = lean_ctor_get(v_e_2914_, 2);
lean_inc_ref(v_value_2923_);
v_body_2924_ = lean_ctor_get(v_e_2914_, 3);
lean_inc_ref(v_body_2924_);
v_nondep_2925_ = lean_ctor_get_uint8(v_e_2914_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_2914_, 4);
v___x_2926_ = lean_box(v_usedLetOnly_2910_);
v___x_2927_ = lean_box(v_skipConstInApp_2911_);
v___x_2928_ = lean_box(v_skipInstances_2912_);
lean_inc_ref_n(v_post_2909_, 2);
lean_inc_ref_n(v_pre_2908_, 2);
lean_inc_ref(v_fvars_2913_);
v___f_2929_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2929_, 0, v_fvars_2913_);
lean_closure_set(v___f_2929_, 1, v_pre_2908_);
lean_closure_set(v___f_2929_, 2, v_post_2909_);
lean_closure_set(v___f_2929_, 3, v___x_2926_);
lean_closure_set(v___f_2929_, 4, v___x_2927_);
lean_closure_set(v___f_2929_, 5, v___x_2928_);
lean_closure_set(v___f_2929_, 6, v_body_2924_);
v___x_2930_ = lean_expr_instantiate_rev(v_type_2922_, v_fvars_2913_);
lean_dec_ref(v_type_2922_);
v___x_2931_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2908_, v_post_2909_, v_usedLetOnly_2910_, v_skipConstInApp_2911_, v_skipInstances_2912_, v___x_2930_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v___x_2931_, 1);
v___x_2933_ = lean_expr_instantiate_rev(v_value_2923_, v_fvars_2913_);
lean_dec_ref(v_fvars_2913_);
lean_dec_ref(v_value_2923_);
v___x_2934_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2908_, v_post_2909_, v_usedLetOnly_2910_, v_skipConstInApp_2911_, v_skipInstances_2912_, v___x_2933_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
if (lean_obj_tag(v___x_2934_) == 0)
{
lean_object* v_a_2935_; uint8_t v___x_2936_; lean_object* v___x_2937_; 
v_a_2935_ = lean_ctor_get(v___x_2934_, 0);
lean_inc(v_a_2935_);
lean_dec_ref_known(v___x_2934_, 1);
v___x_2936_ = 0;
v___x_2937_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_declName_2921_, v_a_2932_, v_a_2935_, v___f_2929_, v_nondep_2925_, v___x_2936_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
return v___x_2937_;
}
else
{
lean_dec(v_a_2932_);
lean_dec_ref(v___f_2929_);
lean_dec(v_declName_2921_);
return v___x_2934_;
}
}
else
{
lean_dec_ref(v___f_2929_);
lean_dec_ref(v_value_2923_);
lean_dec(v_declName_2921_);
lean_dec_ref(v_fvars_2913_);
lean_dec_ref(v_post_2909_);
lean_dec_ref(v_pre_2908_);
return v___x_2931_;
}
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_expr_instantiate_rev(v_e_2914_, v_fvars_2913_);
lean_dec_ref(v_e_2914_);
lean_inc_ref(v_post_2909_);
lean_inc_ref(v_pre_2908_);
v___x_2939_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2908_, v_post_2909_, v_usedLetOnly_2910_, v_skipConstInApp_2911_, v_skipInstances_2912_, v___x_2938_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; uint8_t v___x_2941_; uint8_t v___x_2942_; lean_object* v___x_2943_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_a_2940_);
lean_dec_ref_known(v___x_2939_, 1);
v___x_2941_ = 0;
v___x_2942_ = 1;
v___x_2943_ = l_Lean_Meta_mkLetFVars(v_fvars_2913_, v_a_2940_, v_usedLetOnly_2910_, v___x_2941_, v___x_2942_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
lean_dec_ref(v_fvars_2913_);
if (lean_obj_tag(v___x_2943_) == 0)
{
lean_object* v_a_2944_; lean_object* v___x_2945_; 
v_a_2944_ = lean_ctor_get(v___x_2943_, 0);
lean_inc(v_a_2944_);
lean_dec_ref_known(v___x_2943_, 1);
v___x_2945_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2908_, v_post_2909_, v_usedLetOnly_2910_, v_skipConstInApp_2911_, v_skipInstances_2912_, v_a_2944_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
return v___x_2945_;
}
else
{
lean_dec_ref(v_post_2909_);
lean_dec_ref(v_pre_2908_);
return v___x_2943_;
}
}
else
{
lean_dec_ref(v_fvars_2913_);
lean_dec_ref(v_post_2909_);
lean_dec_ref(v_pre_2908_);
return v___x_2939_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object* v_pre_2946_, lean_object* v_post_2947_, uint8_t v_usedLetOnly_2948_, uint8_t v_skipConstInApp_2949_, uint8_t v_skipInstances_2950_, size_t v_sz_2951_, size_t v_i_2952_, lean_object* v_bs_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
uint8_t v___x_2960_; 
v___x_2960_ = lean_usize_dec_lt(v_i_2952_, v_sz_2951_);
if (v___x_2960_ == 0)
{
lean_object* v___x_2961_; 
lean_dec_ref(v_post_2947_);
lean_dec_ref(v_pre_2946_);
v___x_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2961_, 0, v_bs_2953_);
return v___x_2961_;
}
else
{
lean_object* v_v_2962_; lean_object* v___x_2963_; lean_object* v_bs_x27_2964_; lean_object* v___x_2965_; 
v_v_2962_ = lean_array_uget(v_bs_2953_, v_i_2952_);
v___x_2963_ = lean_unsigned_to_nat(0u);
v_bs_x27_2964_ = lean_array_uset(v_bs_2953_, v_i_2952_, v___x_2963_);
lean_inc_ref(v_post_2947_);
lean_inc_ref(v_pre_2946_);
v___x_2965_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2946_, v_post_2947_, v_usedLetOnly_2948_, v_skipConstInApp_2949_, v_skipInstances_2950_, v_v_2962_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_object* v_a_2966_; size_t v___x_2967_; size_t v___x_2968_; lean_object* v___x_2969_; 
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc(v_a_2966_);
lean_dec_ref_known(v___x_2965_, 1);
v___x_2967_ = ((size_t)1ULL);
v___x_2968_ = lean_usize_add(v_i_2952_, v___x_2967_);
v___x_2969_ = lean_array_uset(v_bs_x27_2964_, v_i_2952_, v_a_2966_);
v_i_2952_ = v___x_2968_;
v_bs_2953_ = v___x_2969_;
goto _start;
}
else
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2978_; 
lean_dec_ref(v_bs_x27_2964_);
lean_dec_ref(v_post_2947_);
lean_dec_ref(v_pre_2946_);
v_a_2971_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2978_ == 0)
{
v___x_2973_ = v___x_2965_;
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2965_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2976_; 
if (v_isShared_2974_ == 0)
{
v___x_2976_ = v___x_2973_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v_a_2971_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_2979_, lean_object* v___x_2980_, lean_object* v_pre_2981_, lean_object* v_post_2982_, uint8_t v_usedLetOnly_2983_, uint8_t v_skipConstInApp_2984_, uint8_t v_skipInstances_2985_, lean_object* v_a_2986_, lean_object* v_b_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_){
_start:
{
lean_object* v_a_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; uint8_t v___x_3003_; 
v___x_3003_ = lean_nat_dec_lt(v_a_2986_, v_upperBound_2979_);
if (v___x_3003_ == 0)
{
lean_object* v___x_3004_; 
lean_dec(v_a_2986_);
lean_dec_ref(v_post_2982_);
lean_dec_ref(v_pre_2981_);
v___x_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3004_, 0, v_b_2987_);
return v___x_3004_;
}
else
{
lean_object* v___x_3005_; lean_object* v___x_3006_; uint8_t v___x_3007_; 
v___x_3005_ = lean_array_fget_borrowed(v_b_2987_, v_a_2986_);
v___x_3006_ = lean_array_get_size(v___x_2980_);
v___x_3007_ = lean_nat_dec_lt(v_a_2986_, v___x_3006_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3008_; 
lean_inc(v___x_3005_);
lean_inc_ref(v_post_2982_);
lean_inc_ref(v_pre_2981_);
v___x_3008_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2981_, v_post_2982_, v_usedLetOnly_2983_, v_skipConstInApp_2984_, v_skipInstances_2985_, v___x_3005_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_a_3009_);
lean_dec_ref_known(v___x_3008_, 1);
v___x_3010_ = lean_array_fset(v_b_2987_, v_a_2986_, v_a_3009_);
v___x_3011_ = lean_unsigned_to_nat(1u);
v___x_3012_ = lean_nat_add(v_a_2986_, v___x_3011_);
lean_dec(v_a_2986_);
v_a_2986_ = v___x_3012_;
v_b_2987_ = v___x_3010_;
goto _start;
}
else
{
lean_object* v_a_3014_; lean_object* v___x_3016_; uint8_t v_isShared_3017_; uint8_t v_isSharedCheck_3021_; 
lean_dec_ref(v_b_2987_);
lean_dec(v_a_2986_);
lean_dec_ref(v_post_2982_);
lean_dec_ref(v_pre_2981_);
v_a_3014_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3021_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3021_ == 0)
{
v___x_3016_ = v___x_3008_;
v_isShared_3017_ = v_isSharedCheck_3021_;
goto v_resetjp_3015_;
}
else
{
lean_inc(v_a_3014_);
lean_dec(v___x_3008_);
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
lean_object* v___x_3022_; uint8_t v_isInstance_3023_; 
v___x_3022_ = lean_array_fget_borrowed(v___x_2980_, v_a_2986_);
v_isInstance_3023_ = lean_ctor_get_uint8(v___x_3022_, sizeof(void*)*1 + 4);
if (v_isInstance_3023_ == 0)
{
lean_object* v___x_3024_; 
lean_inc(v___x_3005_);
lean_inc_ref(v_post_2982_);
lean_inc_ref(v_pre_2981_);
v___x_3024_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2981_, v_post_2982_, v_usedLetOnly_2983_, v_skipConstInApp_2984_, v_skipInstances_2985_, v___x_3005_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3026_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3024_, 1);
v___x_3026_ = lean_array_fset(v_b_2987_, v_a_2986_, v_a_3025_);
v_a_2995_ = v___x_3026_;
v___y_2996_ = v___y_2989_;
v___y_2997_ = v___y_2990_;
v___y_2998_ = v___y_2991_;
v___y_2999_ = v___y_2992_;
goto v___jp_2994_;
}
else
{
lean_object* v_a_3027_; lean_object* v___x_3029_; uint8_t v_isShared_3030_; uint8_t v_isSharedCheck_3034_; 
lean_dec_ref(v_b_2987_);
lean_dec(v_a_2986_);
lean_dec_ref(v_post_2982_);
lean_dec_ref(v_pre_2981_);
v_a_3027_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3034_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3034_ == 0)
{
v___x_3029_ = v___x_3024_;
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
else
{
lean_inc(v_a_3027_);
lean_dec(v___x_3024_);
v___x_3029_ = lean_box(0);
v_isShared_3030_ = v_isSharedCheck_3034_;
goto v_resetjp_3028_;
}
v_resetjp_3028_:
{
lean_object* v___x_3032_; 
if (v_isShared_3030_ == 0)
{
v___x_3032_ = v___x_3029_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v_a_3027_);
v___x_3032_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
return v___x_3032_;
}
}
}
}
else
{
v_a_2995_ = v_b_2987_;
v___y_2996_ = v___y_2989_;
v___y_2997_ = v___y_2990_;
v___y_2998_ = v___y_2991_;
v___y_2999_ = v___y_2992_;
goto v___jp_2994_;
}
}
}
v___jp_2994_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = lean_unsigned_to_nat(1u);
v___x_3001_ = lean_nat_add(v_a_2986_, v___x_3000_);
lean_dec(v_a_2986_);
v_a_2986_ = v___x_3001_;
v_b_2987_ = v_a_2995_;
v___y_2989_ = v___y_2996_;
v___y_2990_ = v___y_2997_;
v___y_2991_ = v___y_2998_;
v___y_2992_ = v___y_2999_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t v_skipInstances_3035_, lean_object* v_pre_3036_, lean_object* v_post_3037_, uint8_t v_usedLetOnly_3038_, uint8_t v_skipConstInApp_3039_, lean_object* v_x_3040_, lean_object* v_x_3041_, lean_object* v_x_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v_f_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; 
if (lean_obj_tag(v_x_3040_) == 5)
{
lean_object* v_fn_3098_; lean_object* v_arg_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v_fn_3098_ = lean_ctor_get(v_x_3040_, 0);
lean_inc_ref(v_fn_3098_);
v_arg_3099_ = lean_ctor_get(v_x_3040_, 1);
lean_inc_ref(v_arg_3099_);
lean_dec_ref_known(v_x_3040_, 2);
v___x_3100_ = lean_array_set(v_x_3041_, v_x_3042_, v_arg_3099_);
v___x_3101_ = lean_unsigned_to_nat(1u);
v___x_3102_ = lean_nat_sub(v_x_3042_, v___x_3101_);
lean_dec(v_x_3042_);
v_x_3040_ = v_fn_3098_;
v_x_3041_ = v___x_3100_;
v_x_3042_ = v___x_3102_;
goto _start;
}
else
{
lean_dec(v_x_3042_);
if (v_skipConstInApp_3039_ == 0)
{
goto v___jp_3095_;
}
else
{
uint8_t v___x_3104_; 
v___x_3104_ = l_Lean_Expr_isConst(v_x_3040_);
if (v___x_3104_ == 0)
{
goto v___jp_3095_;
}
else
{
v_f_3050_ = v_x_3040_;
v___y_3051_ = v___y_3043_;
v___y_3052_ = v___y_3044_;
v___y_3053_ = v___y_3045_;
v___y_3054_ = v___y_3046_;
v___y_3055_ = v___y_3047_;
goto v___jp_3049_;
}
}
}
v___jp_3049_:
{
if (v_skipInstances_3035_ == 0)
{
size_t v_sz_3056_; size_t v___x_3057_; lean_object* v___x_3058_; 
v_sz_3056_ = lean_array_size(v_x_3041_);
v___x_3057_ = ((size_t)0ULL);
lean_inc_ref(v_post_3037_);
lean_inc_ref(v_pre_3036_);
v___x_3058_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3036_, v_post_3037_, v_usedLetOnly_3038_, v_skipConstInApp_3039_, v_skipInstances_3035_, v_sz_3056_, v___x_3057_, v_x_3041_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref_known(v___x_3058_, 1);
v___x_3060_ = l_Lean_mkAppN(v_f_3050_, v_a_3059_);
lean_dec(v_a_3059_);
v___x_3061_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3036_, v_post_3037_, v_usedLetOnly_3038_, v_skipConstInApp_3039_, v_skipInstances_3035_, v___x_3060_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
return v___x_3061_;
}
else
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3069_; 
lean_dec_ref(v_f_3050_);
lean_dec_ref(v_post_3037_);
lean_dec_ref(v_pre_3036_);
v_a_3062_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3064_ = v___x_3058_;
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v___x_3058_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3067_; 
if (v_isShared_3065_ == 0)
{
v___x_3067_ = v___x_3064_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_a_3062_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
else
{
lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3070_ = lean_array_get_size(v_x_3041_);
lean_inc_ref(v_f_3050_);
v___x_3071_ = l_Lean_Meta_getFunInfoNArgs(v_f_3050_, v___x_3070_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v_paramInfo_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3071_, 1);
v_paramInfo_3073_ = lean_ctor_get(v_a_3072_, 0);
lean_inc_ref(v_paramInfo_3073_);
lean_dec(v_a_3072_);
v___x_3074_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3037_);
lean_inc_ref(v_pre_3036_);
v___x_3075_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v___x_3070_, v_paramInfo_3073_, v_pre_3036_, v_post_3037_, v_usedLetOnly_3038_, v_skipConstInApp_3039_, v_skipInstances_3035_, v___x_3074_, v_x_3041_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
lean_dec_ref(v_paramInfo_3073_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3075_, 1);
v___x_3077_ = l_Lean_mkAppN(v_f_3050_, v_a_3076_);
lean_dec(v_a_3076_);
v___x_3078_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3036_, v_post_3037_, v_usedLetOnly_3038_, v_skipConstInApp_3039_, v_skipInstances_3035_, v___x_3077_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_);
return v___x_3078_;
}
else
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
lean_dec_ref(v_f_3050_);
lean_dec_ref(v_post_3037_);
lean_dec_ref(v_pre_3036_);
v_a_3079_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_3075_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3075_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
lean_dec_ref(v_f_3050_);
lean_dec_ref(v_x_3041_);
lean_dec_ref(v_post_3037_);
lean_dec_ref(v_pre_3036_);
v_a_3087_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3071_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3071_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
}
}
v___jp_3095_:
{
lean_object* v___x_3096_; 
lean_inc_ref(v_post_3037_);
lean_inc_ref(v_pre_3036_);
v___x_3096_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3036_, v_post_3037_, v_usedLetOnly_3038_, v_skipConstInApp_3039_, v_skipInstances_3035_, v_x_3040_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v_a_3097_; 
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc(v_a_3097_);
lean_dec_ref_known(v___x_3096_, 1);
v_f_3050_ = v_a_3097_;
v___y_3051_ = v___y_3043_;
v___y_3052_ = v___y_3044_;
v___y_3053_ = v___y_3045_;
v___y_3054_ = v___y_3046_;
v___y_3055_ = v___y_3047_;
goto v___jp_3049_;
}
else
{
lean_dec_ref(v_x_3041_);
lean_dec_ref(v_post_3037_);
lean_dec_ref(v_pre_3036_);
return v___x_3096_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object* v___x_3105_, lean_object* v_pre_3106_, lean_object* v_e_3107_, lean_object* v_post_3108_, uint8_t v_usedLetOnly_3109_, uint8_t v_skipConstInApp_3110_, uint8_t v_skipInstances_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v___x_3118_; 
v___x_3118_ = l_Lean_Core_checkSystem(v___x_3105_, v___y_3115_, v___y_3116_);
if (lean_obj_tag(v___x_3118_) == 0)
{
lean_object* v___x_3119_; 
lean_dec_ref_known(v___x_3118_, 1);
lean_inc_ref(v_pre_3106_);
lean_inc(v___y_3116_);
lean_inc_ref(v___y_3115_);
lean_inc(v___y_3114_);
lean_inc_ref(v___y_3113_);
lean_inc_ref(v_e_3107_);
v___x_3119_ = lean_apply_6(v_pre_3106_, v_e_3107_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, lean_box(0));
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v_a_3120_; lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3168_; 
v_a_3120_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3122_ = v___x_3119_;
v_isShared_3123_ = v_isSharedCheck_3168_;
goto v_resetjp_3121_;
}
else
{
lean_inc(v_a_3120_);
lean_dec(v___x_3119_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3168_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___y_3125_; 
switch(lean_obj_tag(v_a_3120_))
{
case 0:
{
lean_object* v_e_3160_; lean_object* v___x_3162_; 
lean_dec_ref(v_post_3108_);
lean_dec_ref(v_e_3107_);
lean_dec_ref(v_pre_3106_);
v_e_3160_ = lean_ctor_get(v_a_3120_, 0);
lean_inc_ref(v_e_3160_);
lean_dec_ref_known(v_a_3120_, 1);
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 0, v_e_3160_);
v___x_3162_ = v___x_3122_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_e_3160_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
case 1:
{
lean_object* v_e_3164_; lean_object* v___x_3165_; 
lean_del_object(v___x_3122_);
lean_dec_ref(v_e_3107_);
v_e_3164_ = lean_ctor_get(v_a_3120_, 0);
lean_inc_ref(v_e_3164_);
lean_dec_ref_known(v_a_3120_, 1);
v___x_3165_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v_e_3164_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3165_;
}
default: 
{
lean_object* v_e_x3f_3166_; 
lean_del_object(v___x_3122_);
v_e_x3f_3166_ = lean_ctor_get(v_a_3120_, 0);
lean_inc(v_e_x3f_3166_);
lean_dec_ref_known(v_a_3120_, 1);
if (lean_obj_tag(v_e_x3f_3166_) == 0)
{
v___y_3125_ = v_e_3107_;
goto v___jp_3124_;
}
else
{
lean_object* v_val_3167_; 
lean_dec_ref(v_e_3107_);
v_val_3167_ = lean_ctor_get(v_e_x3f_3166_, 0);
lean_inc(v_val_3167_);
lean_dec_ref_known(v_e_x3f_3166_, 1);
v___y_3125_ = v_val_3167_;
goto v___jp_3124_;
}
}
}
v___jp_3124_:
{
switch(lean_obj_tag(v___y_3125_))
{
case 7:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3127_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___x_3126_, v___y_3125_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3127_;
}
case 6:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3128_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3129_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___x_3128_, v___y_3125_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3129_;
}
case 8:
{
lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3130_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0));
v___x_3131_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___x_3130_, v___y_3125_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3131_;
}
case 5:
{
lean_object* v_dummy_3132_; lean_object* v_nargs_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v_dummy_3132_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_3133_ = l_Lean_Expr_getAppNumArgs(v___y_3125_);
lean_inc(v_nargs_3133_);
v___x_3134_ = lean_mk_array(v_nargs_3133_, v_dummy_3132_);
v___x_3135_ = lean_unsigned_to_nat(1u);
v___x_3136_ = lean_nat_sub(v_nargs_3133_, v___x_3135_);
lean_dec(v_nargs_3133_);
v___x_3137_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_3111_, v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v___y_3125_, v___x_3134_, v___x_3136_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3137_;
}
case 10:
{
lean_object* v_data_3138_; lean_object* v_expr_3139_; lean_object* v___x_3140_; 
v_data_3138_ = lean_ctor_get(v___y_3125_, 0);
v_expr_3139_ = lean_ctor_get(v___y_3125_, 1);
lean_inc_ref(v_expr_3139_);
lean_inc_ref(v_post_3108_);
lean_inc_ref(v_pre_3106_);
v___x_3140_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v_expr_3139_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; size_t v___x_3142_; size_t v___x_3143_; uint8_t v___x_3144_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3141_);
lean_dec_ref_known(v___x_3140_, 1);
v___x_3142_ = lean_ptr_addr(v_expr_3139_);
v___x_3143_ = lean_ptr_addr(v_a_3141_);
v___x_3144_ = lean_usize_dec_eq(v___x_3142_, v___x_3143_);
if (v___x_3144_ == 0)
{
lean_object* v___x_3145_; lean_object* v___x_3146_; 
lean_inc(v_data_3138_);
lean_dec_ref_known(v___y_3125_, 2);
v___x_3145_ = l_Lean_Expr_mdata___override(v_data_3138_, v_a_3141_);
v___x_3146_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___x_3145_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3146_;
}
else
{
lean_object* v___x_3147_; 
lean_dec(v_a_3141_);
v___x_3147_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___y_3125_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3147_;
}
}
else
{
lean_dec_ref_known(v___y_3125_, 2);
lean_dec_ref(v_post_3108_);
lean_dec_ref(v_pre_3106_);
return v___x_3140_;
}
}
case 11:
{
lean_object* v_typeName_3148_; lean_object* v_idx_3149_; lean_object* v_struct_3150_; lean_object* v___x_3151_; 
v_typeName_3148_ = lean_ctor_get(v___y_3125_, 0);
v_idx_3149_ = lean_ctor_get(v___y_3125_, 1);
v_struct_3150_ = lean_ctor_get(v___y_3125_, 2);
lean_inc_ref(v_struct_3150_);
lean_inc_ref(v_post_3108_);
lean_inc_ref(v_pre_3106_);
v___x_3151_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v_struct_3150_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
if (lean_obj_tag(v___x_3151_) == 0)
{
lean_object* v_a_3152_; size_t v___x_3153_; size_t v___x_3154_; uint8_t v___x_3155_; 
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
lean_inc(v_a_3152_);
lean_dec_ref_known(v___x_3151_, 1);
v___x_3153_ = lean_ptr_addr(v_struct_3150_);
v___x_3154_ = lean_ptr_addr(v_a_3152_);
v___x_3155_ = lean_usize_dec_eq(v___x_3153_, v___x_3154_);
if (v___x_3155_ == 0)
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
lean_inc(v_idx_3149_);
lean_inc(v_typeName_3148_);
lean_dec_ref_known(v___y_3125_, 3);
v___x_3156_ = l_Lean_Expr_proj___override(v_typeName_3148_, v_idx_3149_, v_a_3152_);
v___x_3157_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___x_3156_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3157_;
}
else
{
lean_object* v___x_3158_; 
lean_dec(v_a_3152_);
v___x_3158_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___y_3125_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3158_;
}
}
else
{
lean_dec_ref_known(v___y_3125_, 3);
lean_dec_ref(v_post_3108_);
lean_dec_ref(v_pre_3106_);
return v___x_3151_;
}
}
default: 
{
lean_object* v___x_3159_; 
v___x_3159_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3106_, v_post_3108_, v_usedLetOnly_3109_, v_skipConstInApp_3110_, v_skipInstances_3111_, v___y_3125_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
return v___x_3159_;
}
}
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec_ref(v_post_3108_);
lean_dec_ref(v_e_3107_);
lean_dec_ref(v_pre_3106_);
v_a_3169_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3119_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3119_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
else
{
lean_object* v_a_3177_; lean_object* v___x_3179_; uint8_t v_isShared_3180_; uint8_t v_isSharedCheck_3184_; 
lean_dec_ref(v_post_3108_);
lean_dec_ref(v_e_3107_);
lean_dec_ref(v_pre_3106_);
v_a_3177_ = lean_ctor_get(v___x_3118_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3118_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v___x_3118_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3118_);
v___x_3179_ = lean_box(0);
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
v_resetjp_3178_:
{
lean_object* v___x_3182_; 
if (v_isShared_3180_ == 0)
{
v___x_3182_ = v___x_3179_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v_a_3177_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_3185_, lean_object* v_pre_3186_, lean_object* v_e_3187_, lean_object* v_post_3188_, lean_object* v_usedLetOnly_3189_, lean_object* v_skipConstInApp_3190_, lean_object* v_skipInstances_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_){
_start:
{
uint8_t v_usedLetOnly_boxed_3198_; uint8_t v_skipConstInApp_boxed_3199_; uint8_t v_skipInstances_boxed_3200_; lean_object* v_res_3201_; 
v_usedLetOnly_boxed_3198_ = lean_unbox(v_usedLetOnly_3189_);
v_skipConstInApp_boxed_3199_ = lean_unbox(v_skipConstInApp_3190_);
v_skipInstances_boxed_3200_ = lean_unbox(v_skipInstances_3191_);
v_res_3201_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(v___x_3185_, v_pre_3186_, v_e_3187_, v_post_3188_, v_usedLetOnly_boxed_3198_, v_skipConstInApp_boxed_3199_, v_skipInstances_boxed_3200_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_);
lean_dec(v___y_3196_);
lean_dec_ref(v___y_3195_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec(v___y_3192_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object* v_pre_3202_, lean_object* v_post_3203_, uint8_t v_usedLetOnly_3204_, uint8_t v_skipConstInApp_3205_, uint8_t v_skipInstances_3206_, lean_object* v_e_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
lean_inc(v___y_3208_);
v___x_3214_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3214_, 0, lean_box(0));
lean_closure_set(v___x_3214_, 1, lean_box(0));
lean_closure_set(v___x_3214_, 2, v___y_3208_);
v___x_3215_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_3214_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3250_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3218_ = v___x_3215_;
v_isShared_3219_ = v_isSharedCheck_3250_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3215_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3250_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3220_; 
v___x_3220_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_a_3216_, v_e_3207_);
lean_dec(v_a_3216_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___f_3225_; lean_object* v___x_3226_; 
lean_del_object(v___x_3218_);
v___x_3221_ = ((lean_object*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0));
v___x_3222_ = lean_box(v_usedLetOnly_3204_);
v___x_3223_ = lean_box(v_skipConstInApp_3205_);
v___x_3224_ = lean_box(v_skipInstances_3206_);
lean_inc_ref(v_e_3207_);
v___f_3225_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_3225_, 0, v___x_3221_);
lean_closure_set(v___f_3225_, 1, v_pre_3202_);
lean_closure_set(v___f_3225_, 2, v_e_3207_);
lean_closure_set(v___f_3225_, 3, v_post_3203_);
lean_closure_set(v___f_3225_, 4, v___x_3222_);
lean_closure_set(v___f_3225_, 5, v___x_3223_);
lean_closure_set(v___f_3225_, 6, v___x_3224_);
v___x_3226_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v___f_3225_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v_a_3227_; lean_object* v___f_3228_; lean_object* v___x_3229_; 
v_a_3227_ = lean_ctor_get(v___x_3226_, 0);
lean_inc_n(v_a_3227_, 2);
lean_dec_ref_known(v___x_3226_, 1);
lean_inc(v___y_3208_);
v___f_3228_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3228_, 0, v___y_3208_);
lean_closure_set(v___f_3228_, 1, v_e_3207_);
lean_closure_set(v___f_3228_, 2, v_a_3227_);
v___x_3229_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_3228_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3229_) == 0)
{
lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3236_; 
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3236_ == 0)
{
lean_object* v_unused_3237_; 
v_unused_3237_ = lean_ctor_get(v___x_3229_, 0);
lean_dec(v_unused_3237_);
v___x_3231_ = v___x_3229_;
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
else
{
lean_dec(v___x_3229_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3234_; 
if (v_isShared_3232_ == 0)
{
lean_ctor_set(v___x_3231_, 0, v_a_3227_);
v___x_3234_ = v___x_3231_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v_a_3227_);
v___x_3234_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
return v___x_3234_;
}
}
}
else
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec(v_a_3227_);
v_a_3238_ = lean_ctor_get(v___x_3229_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3229_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3229_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3229_);
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
lean_dec_ref(v_e_3207_);
return v___x_3226_;
}
}
else
{
lean_object* v_val_3246_; lean_object* v___x_3248_; 
lean_dec_ref(v_e_3207_);
lean_dec_ref(v_post_3203_);
lean_dec_ref(v_pre_3202_);
v_val_3246_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_val_3246_);
lean_dec_ref_known(v___x_3220_, 1);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 0, v_val_3246_);
v___x_3248_ = v___x_3218_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_val_3246_);
v___x_3248_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
return v___x_3248_;
}
}
}
}
else
{
lean_object* v_a_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3258_; 
lean_dec_ref(v_e_3207_);
lean_dec_ref(v_post_3203_);
lean_dec_ref(v_pre_3202_);
v_a_3251_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3253_ = v___x_3215_;
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_a_3251_);
lean_dec(v___x_3215_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3258_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3256_; 
if (v_isShared_3254_ == 0)
{
v___x_3256_ = v___x_3253_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v_a_3251_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3259_, lean_object* v_post_3260_, uint8_t v_usedLetOnly_3261_, uint8_t v_skipConstInApp_3262_, uint8_t v_skipInstances_3263_, lean_object* v_fvars_3264_, lean_object* v_e_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
if (lean_obj_tag(v_e_3265_) == 7)
{
lean_object* v_binderName_3272_; lean_object* v_binderType_3273_; lean_object* v_body_3274_; uint8_t v_binderInfo_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___f_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
v_binderName_3272_ = lean_ctor_get(v_e_3265_, 0);
lean_inc(v_binderName_3272_);
v_binderType_3273_ = lean_ctor_get(v_e_3265_, 1);
lean_inc_ref(v_binderType_3273_);
v_body_3274_ = lean_ctor_get(v_e_3265_, 2);
lean_inc_ref(v_body_3274_);
v_binderInfo_3275_ = lean_ctor_get_uint8(v_e_3265_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3265_, 3);
v___x_3276_ = lean_box(v_usedLetOnly_3261_);
v___x_3277_ = lean_box(v_skipConstInApp_3262_);
v___x_3278_ = lean_box(v_skipInstances_3263_);
lean_inc_ref(v_post_3260_);
lean_inc_ref(v_pre_3259_);
lean_inc_ref(v_fvars_3264_);
v___f_3279_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3279_, 0, v_fvars_3264_);
lean_closure_set(v___f_3279_, 1, v_pre_3259_);
lean_closure_set(v___f_3279_, 2, v_post_3260_);
lean_closure_set(v___f_3279_, 3, v___x_3276_);
lean_closure_set(v___f_3279_, 4, v___x_3277_);
lean_closure_set(v___f_3279_, 5, v___x_3278_);
lean_closure_set(v___f_3279_, 6, v_body_3274_);
v___x_3280_ = lean_expr_instantiate_rev(v_binderType_3273_, v_fvars_3264_);
lean_dec_ref(v_fvars_3264_);
lean_dec_ref(v_binderType_3273_);
v___x_3281_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3259_, v_post_3260_, v_usedLetOnly_3261_, v_skipConstInApp_3262_, v_skipInstances_3263_, v___x_3280_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v_a_3282_; uint8_t v___x_3283_; lean_object* v___x_3284_; 
v_a_3282_ = lean_ctor_get(v___x_3281_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3281_, 1);
v___x_3283_ = 0;
v___x_3284_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_3272_, v_binderInfo_3275_, v_a_3282_, v___f_3279_, v___x_3283_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
return v___x_3284_;
}
else
{
lean_dec_ref(v___f_3279_);
lean_dec(v_binderName_3272_);
return v___x_3281_;
}
}
else
{
lean_object* v___x_3285_; lean_object* v___x_3286_; 
v___x_3285_ = lean_expr_instantiate_rev(v_e_3265_, v_fvars_3264_);
lean_dec_ref(v_e_3265_);
lean_inc_ref(v_post_3260_);
lean_inc_ref(v_pre_3259_);
v___x_3286_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3259_, v_post_3260_, v_usedLetOnly_3261_, v_skipConstInApp_3262_, v_skipInstances_3263_, v___x_3285_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
if (lean_obj_tag(v___x_3286_) == 0)
{
lean_object* v_a_3287_; uint8_t v___x_3288_; uint8_t v___x_3289_; uint8_t v___x_3290_; lean_object* v___x_3291_; 
v_a_3287_ = lean_ctor_get(v___x_3286_, 0);
lean_inc(v_a_3287_);
lean_dec_ref_known(v___x_3286_, 1);
v___x_3288_ = 0;
v___x_3289_ = 1;
v___x_3290_ = 1;
v___x_3291_ = l_Lean_Meta_mkForallFVars(v_fvars_3264_, v_a_3287_, v___x_3288_, v_usedLetOnly_3261_, v___x_3289_, v___x_3290_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
lean_dec_ref(v_fvars_3264_);
if (lean_obj_tag(v___x_3291_) == 0)
{
lean_object* v_a_3292_; lean_object* v___x_3293_; 
v_a_3292_ = lean_ctor_get(v___x_3291_, 0);
lean_inc(v_a_3292_);
lean_dec_ref_known(v___x_3291_, 1);
v___x_3293_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3259_, v_post_3260_, v_usedLetOnly_3261_, v_skipConstInApp_3262_, v_skipInstances_3263_, v_a_3292_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_);
return v___x_3293_;
}
else
{
lean_dec_ref(v_post_3260_);
lean_dec_ref(v_pre_3259_);
return v___x_3291_;
}
}
else
{
lean_dec_ref(v_fvars_3264_);
lean_dec_ref(v_post_3260_);
lean_dec_ref(v_pre_3259_);
return v___x_3286_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3294_, lean_object* v_pre_3295_, lean_object* v_post_3296_, uint8_t v_usedLetOnly_3297_, uint8_t v_skipConstInApp_3298_, uint8_t v_skipInstances_3299_, lean_object* v_body_3300_, lean_object* v_x_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3308_ = lean_array_push(v_fvars_3294_, v_x_3301_);
v___x_3309_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3295_, v_post_3296_, v_usedLetOnly_3297_, v_skipConstInApp_3298_, v_skipInstances_3299_, v___x_3308_, v_body_3300_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_);
return v___x_3309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_3310_, lean_object* v_post_3311_, lean_object* v_usedLetOnly_3312_, lean_object* v_skipConstInApp_3313_, lean_object* v_skipInstances_3314_, lean_object* v_e_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_){
_start:
{
uint8_t v_usedLetOnly_boxed_3322_; uint8_t v_skipConstInApp_boxed_3323_; uint8_t v_skipInstances_boxed_3324_; lean_object* v_res_3325_; 
v_usedLetOnly_boxed_3322_ = lean_unbox(v_usedLetOnly_3312_);
v_skipConstInApp_boxed_3323_ = lean_unbox(v_skipConstInApp_3313_);
v_skipInstances_boxed_3324_ = lean_unbox(v_skipInstances_3314_);
v_res_3325_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3310_, v_post_3311_, v_usedLetOnly_boxed_3322_, v_skipConstInApp_boxed_3323_, v_skipInstances_boxed_3324_, v_e_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
lean_dec(v___y_3320_);
lean_dec_ref(v___y_3319_);
lean_dec(v___y_3318_);
lean_dec_ref(v___y_3317_);
lean_dec(v___y_3316_);
return v_res_3325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_3326_, lean_object* v_post_3327_, lean_object* v_usedLetOnly_3328_, lean_object* v_skipConstInApp_3329_, lean_object* v_skipInstances_3330_, lean_object* v_sz_3331_, lean_object* v_i_3332_, lean_object* v_bs_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_){
_start:
{
uint8_t v_usedLetOnly_boxed_3340_; uint8_t v_skipConstInApp_boxed_3341_; uint8_t v_skipInstances_boxed_3342_; size_t v_sz_boxed_3343_; size_t v_i_boxed_3344_; lean_object* v_res_3345_; 
v_usedLetOnly_boxed_3340_ = lean_unbox(v_usedLetOnly_3328_);
v_skipConstInApp_boxed_3341_ = lean_unbox(v_skipConstInApp_3329_);
v_skipInstances_boxed_3342_ = lean_unbox(v_skipInstances_3330_);
v_sz_boxed_3343_ = lean_unbox_usize(v_sz_3331_);
lean_dec(v_sz_3331_);
v_i_boxed_3344_ = lean_unbox_usize(v_i_3332_);
lean_dec(v_i_3332_);
v_res_3345_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3326_, v_post_3327_, v_usedLetOnly_boxed_3340_, v_skipConstInApp_boxed_3341_, v_skipInstances_boxed_3342_, v_sz_boxed_3343_, v_i_boxed_3344_, v_bs_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_);
lean_dec(v___y_3338_);
lean_dec_ref(v___y_3337_);
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
lean_dec(v___y_3334_);
return v_res_3345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object* v_pre_3346_, lean_object* v_post_3347_, lean_object* v_usedLetOnly_3348_, lean_object* v_skipConstInApp_3349_, lean_object* v_skipInstances_3350_, lean_object* v_e_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
uint8_t v_usedLetOnly_boxed_3358_; uint8_t v_skipConstInApp_boxed_3359_; uint8_t v_skipInstances_boxed_3360_; lean_object* v_res_3361_; 
v_usedLetOnly_boxed_3358_ = lean_unbox(v_usedLetOnly_3348_);
v_skipConstInApp_boxed_3359_ = lean_unbox(v_skipConstInApp_3349_);
v_skipInstances_boxed_3360_ = lean_unbox(v_skipInstances_3350_);
v_res_3361_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3346_, v_post_3347_, v_usedLetOnly_boxed_3358_, v_skipConstInApp_boxed_3359_, v_skipInstances_boxed_3360_, v_e_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
lean_dec(v___y_3356_);
lean_dec_ref(v___y_3355_);
lean_dec(v___y_3354_);
lean_dec_ref(v___y_3353_);
lean_dec(v___y_3352_);
return v_res_3361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_3362_, lean_object* v_post_3363_, lean_object* v_usedLetOnly_3364_, lean_object* v_skipConstInApp_3365_, lean_object* v_skipInstances_3366_, lean_object* v_fvars_3367_, lean_object* v_e_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_){
_start:
{
uint8_t v_usedLetOnly_boxed_3375_; uint8_t v_skipConstInApp_boxed_3376_; uint8_t v_skipInstances_boxed_3377_; lean_object* v_res_3378_; 
v_usedLetOnly_boxed_3375_ = lean_unbox(v_usedLetOnly_3364_);
v_skipConstInApp_boxed_3376_ = lean_unbox(v_skipConstInApp_3365_);
v_skipInstances_boxed_3377_ = lean_unbox(v_skipInstances_3366_);
v_res_3378_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3362_, v_post_3363_, v_usedLetOnly_boxed_3375_, v_skipConstInApp_boxed_3376_, v_skipInstances_boxed_3377_, v_fvars_3367_, v_e_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_);
lean_dec(v___y_3373_);
lean_dec_ref(v___y_3372_);
lean_dec(v___y_3371_);
lean_dec_ref(v___y_3370_);
lean_dec(v___y_3369_);
return v_res_3378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_3379_, lean_object* v_post_3380_, lean_object* v_usedLetOnly_3381_, lean_object* v_skipConstInApp_3382_, lean_object* v_skipInstances_3383_, lean_object* v_fvars_3384_, lean_object* v_e_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_){
_start:
{
uint8_t v_usedLetOnly_boxed_3392_; uint8_t v_skipConstInApp_boxed_3393_; uint8_t v_skipInstances_boxed_3394_; lean_object* v_res_3395_; 
v_usedLetOnly_boxed_3392_ = lean_unbox(v_usedLetOnly_3381_);
v_skipConstInApp_boxed_3393_ = lean_unbox(v_skipConstInApp_3382_);
v_skipInstances_boxed_3394_ = lean_unbox(v_skipInstances_3383_);
v_res_3395_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3379_, v_post_3380_, v_usedLetOnly_boxed_3392_, v_skipConstInApp_boxed_3393_, v_skipInstances_boxed_3394_, v_fvars_3384_, v_e_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
lean_dec(v___y_3386_);
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_pre_3396_, lean_object* v_post_3397_, lean_object* v_usedLetOnly_3398_, lean_object* v_skipConstInApp_3399_, lean_object* v_skipInstances_3400_, lean_object* v_fvars_3401_, lean_object* v_e_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
uint8_t v_usedLetOnly_boxed_3409_; uint8_t v_skipConstInApp_boxed_3410_; uint8_t v_skipInstances_boxed_3411_; lean_object* v_res_3412_; 
v_usedLetOnly_boxed_3409_ = lean_unbox(v_usedLetOnly_3398_);
v_skipConstInApp_boxed_3410_ = lean_unbox(v_skipConstInApp_3399_);
v_skipInstances_boxed_3411_ = lean_unbox(v_skipInstances_3400_);
v_res_3412_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3396_, v_post_3397_, v_usedLetOnly_boxed_3409_, v_skipConstInApp_boxed_3410_, v_skipInstances_boxed_3411_, v_fvars_3401_, v_e_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_);
lean_dec(v___y_3407_);
lean_dec_ref(v___y_3406_);
lean_dec(v___y_3405_);
lean_dec_ref(v___y_3404_);
lean_dec(v___y_3403_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_3413_, lean_object* v___x_3414_, lean_object* v_pre_3415_, lean_object* v_post_3416_, lean_object* v_usedLetOnly_3417_, lean_object* v_skipConstInApp_3418_, lean_object* v_skipInstances_3419_, lean_object* v_a_3420_, lean_object* v_b_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
uint8_t v_usedLetOnly_boxed_3428_; uint8_t v_skipConstInApp_boxed_3429_; uint8_t v_skipInstances_boxed_3430_; lean_object* v_res_3431_; 
v_usedLetOnly_boxed_3428_ = lean_unbox(v_usedLetOnly_3417_);
v_skipConstInApp_boxed_3429_ = lean_unbox(v_skipConstInApp_3418_);
v_skipInstances_boxed_3430_ = lean_unbox(v_skipInstances_3419_);
v_res_3431_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3413_, v___x_3414_, v_pre_3415_, v_post_3416_, v_usedLetOnly_boxed_3428_, v_skipConstInApp_boxed_3429_, v_skipInstances_boxed_3430_, v_a_3420_, v_b_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
lean_dec(v___y_3424_);
lean_dec_ref(v___y_3423_);
lean_dec(v___y_3422_);
lean_dec_ref(v___x_3414_);
lean_dec(v_upperBound_3413_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_skipInstances_3432_, lean_object* v_pre_3433_, lean_object* v_post_3434_, lean_object* v_usedLetOnly_3435_, lean_object* v_skipConstInApp_3436_, lean_object* v_x_3437_, lean_object* v_x_3438_, lean_object* v_x_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
uint8_t v_skipInstances_boxed_3446_; uint8_t v_usedLetOnly_boxed_3447_; uint8_t v_skipConstInApp_boxed_3448_; lean_object* v_res_3449_; 
v_skipInstances_boxed_3446_ = lean_unbox(v_skipInstances_3432_);
v_usedLetOnly_boxed_3447_ = lean_unbox(v_usedLetOnly_3435_);
v_skipConstInApp_boxed_3448_ = lean_unbox(v_skipConstInApp_3436_);
v_res_3449_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_boxed_3446_, v_pre_3433_, v_post_3434_, v_usedLetOnly_boxed_3447_, v_skipConstInApp_boxed_3448_, v_x_3437_, v_x_3438_, v_x_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
return v_res_3449_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3450_ = lean_box(0);
v___x_3451_ = lean_unsigned_to_nat(16u);
v___x_3452_ = lean_mk_array(v___x_3451_, v___x_3450_);
return v___x_3452_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3453_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0);
v___x_3454_ = lean_unsigned_to_nat(0u);
v___x_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
lean_ctor_set(v___x_3455_, 1, v___x_3453_);
return v___x_3455_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3456_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1);
v___x_3457_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3457_, 0, lean_box(0));
lean_closure_set(v___x_3457_, 1, lean_box(0));
lean_closure_set(v___x_3457_, 2, v___x_3456_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object* v_input_3458_, lean_object* v_pre_3459_, lean_object* v_post_3460_, uint8_t v_usedLetOnly_3461_, uint8_t v_skipConstInApp_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
uint8_t v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v_a_3471_; lean_object* v___x_3472_; 
v___x_3468_ = 0;
v___x_3469_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2);
v___x_3470_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3469_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_);
v_a_3471_ = lean_ctor_get(v___x_3470_, 0);
lean_inc(v_a_3471_);
lean_dec_ref(v___x_3470_);
v___x_3472_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3459_, v_post_3460_, v_usedLetOnly_3461_, v_skipConstInApp_3462_, v___x_3468_, v_input_3458_, v_a_3471_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3477_; uint8_t v_isShared_3478_; uint8_t v_isSharedCheck_3482_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_a_3473_);
lean_dec_ref_known(v___x_3472_, 1);
v___x_3474_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3474_, 0, lean_box(0));
lean_closure_set(v___x_3474_, 1, lean_box(0));
lean_closure_set(v___x_3474_, 2, v_a_3471_);
v___x_3475_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3474_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3475_);
if (v_isSharedCheck_3482_ == 0)
{
lean_object* v_unused_3483_; 
v_unused_3483_ = lean_ctor_get(v___x_3475_, 0);
lean_dec(v_unused_3483_);
v___x_3477_ = v___x_3475_;
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
else
{
lean_dec(v___x_3475_);
v___x_3477_ = lean_box(0);
v_isShared_3478_ = v_isSharedCheck_3482_;
goto v_resetjp_3476_;
}
v_resetjp_3476_:
{
lean_object* v___x_3480_; 
if (v_isShared_3478_ == 0)
{
lean_ctor_set(v___x_3477_, 0, v_a_3473_);
v___x_3480_ = v___x_3477_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v_a_3473_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
else
{
lean_dec(v_a_3471_);
return v___x_3472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object* v_input_3484_, lean_object* v_pre_3485_, lean_object* v_post_3486_, lean_object* v_usedLetOnly_3487_, lean_object* v_skipConstInApp_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
uint8_t v_usedLetOnly_boxed_3494_; uint8_t v_skipConstInApp_boxed_3495_; lean_object* v_res_3496_; 
v_usedLetOnly_boxed_3494_ = lean_unbox(v_usedLetOnly_3487_);
v_skipConstInApp_boxed_3495_ = lean_unbox(v_skipConstInApp_3488_);
v_res_3496_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_input_3484_, v_pre_3485_, v_post_3486_, v_usedLetOnly_boxed_3494_, v_skipConstInApp_boxed_3495_, v___y_3489_, v___y_3490_, v___y_3491_, v___y_3492_);
lean_dec(v___y_3492_);
lean_dec_ref(v___y_3491_);
lean_dec(v___y_3490_);
lean_dec_ref(v___y_3489_);
return v_res_3496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object* v_e_3498_, lean_object* v_p_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_){
_start:
{
lean_object* v___f_3505_; lean_object* v___f_3506_; lean_object* v___x_3507_; lean_object* v_a_3508_; uint8_t v___x_3509_; lean_object* v___x_3510_; 
v___f_3505_ = ((lean_object*)(l_Lean_Meta_etaStructReduce___closed__0));
v___f_3506_ = lean_alloc_closure((void*)(l_Lean_Meta_etaStructReduce___lam__1___boxed), 7, 1);
lean_closure_set(v___f_3506_, 0, v_p_3499_);
v___x_3507_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_3498_, v___y_3501_);
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc(v_a_3508_);
lean_dec_ref(v___x_3507_);
v___x_3509_ = 0;
v___x_3510_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_a_3508_, v___f_3505_, v___f_3506_, v___x_3509_, v___x_3509_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object* v_e_3511_, lean_object* v_p_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lean_Meta_etaStructReduce(v_e_3511_, v_p_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_3519_, lean_object* v___x_3520_, lean_object* v_pre_3521_, lean_object* v_post_3522_, uint8_t v_usedLetOnly_3523_, uint8_t v_skipConstInApp_3524_, uint8_t v_skipInstances_3525_, lean_object* v___x_3526_, lean_object* v_inst_3527_, lean_object* v_R_3528_, lean_object* v_a_3529_, lean_object* v_b_3530_, lean_object* v_c_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
lean_object* v___x_3538_; 
v___x_3538_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3519_, v___x_3520_, v_pre_3521_, v_post_3522_, v_usedLetOnly_3523_, v_skipConstInApp_3524_, v_skipInstances_3525_, v_a_3529_, v_b_3530_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_3539_ = _args[0];
lean_object* v___x_3540_ = _args[1];
lean_object* v_pre_3541_ = _args[2];
lean_object* v_post_3542_ = _args[3];
lean_object* v_usedLetOnly_3543_ = _args[4];
lean_object* v_skipConstInApp_3544_ = _args[5];
lean_object* v_skipInstances_3545_ = _args[6];
lean_object* v___x_3546_ = _args[7];
lean_object* v_inst_3547_ = _args[8];
lean_object* v_R_3548_ = _args[9];
lean_object* v_a_3549_ = _args[10];
lean_object* v_b_3550_ = _args[11];
lean_object* v_c_3551_ = _args[12];
lean_object* v___y_3552_ = _args[13];
lean_object* v___y_3553_ = _args[14];
lean_object* v___y_3554_ = _args[15];
lean_object* v___y_3555_ = _args[16];
lean_object* v___y_3556_ = _args[17];
lean_object* v___y_3557_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3558_; uint8_t v_skipConstInApp_boxed_3559_; uint8_t v_skipInstances_boxed_3560_; lean_object* v_res_3561_; 
v_usedLetOnly_boxed_3558_ = lean_unbox(v_usedLetOnly_3543_);
v_skipConstInApp_boxed_3559_ = lean_unbox(v_skipConstInApp_3544_);
v_skipInstances_boxed_3560_ = lean_unbox(v_skipInstances_3545_);
v_res_3561_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(v_upperBound_3539_, v___x_3540_, v_pre_3541_, v_post_3542_, v_usedLetOnly_boxed_3558_, v_skipConstInApp_boxed_3559_, v_skipInstances_boxed_3560_, v___x_3546_, v_inst_3547_, v_R_3548_, v_a_3549_, v_b_3550_, v_c_3551_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_, v___y_3556_);
lean_dec(v___y_3556_);
lean_dec_ref(v___y_3555_);
lean_dec(v___y_3554_);
lean_dec_ref(v___y_3553_);
lean_dec(v___y_3552_);
lean_dec(v___x_3546_);
lean_dec_ref(v___x_3540_);
lean_dec(v_upperBound_3539_);
return v_res_3561_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3562_, lean_object* v_m_3563_, lean_object* v_a_3564_){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_3563_, v_a_3564_);
return v___x_3565_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3566_, lean_object* v_m_3567_, lean_object* v_a_3568_){
_start:
{
lean_object* v_res_3569_; 
v_res_3569_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(v_00_u03b2_3566_, v_m_3567_, v_a_3568_);
lean_dec_ref(v_a_3568_);
lean_dec_ref(v_m_3567_);
return v_res_3569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object* v_00_u03b1_3570_, lean_object* v_name_3571_, uint8_t v_bi_3572_, lean_object* v_type_3573_, lean_object* v_k_3574_, uint8_t v_kind_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
lean_object* v___x_3582_; 
v___x_3582_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_3571_, v_bi_3572_, v_type_3573_, v_k_3574_, v_kind_3575_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3583_, lean_object* v_name_3584_, lean_object* v_bi_3585_, lean_object* v_type_3586_, lean_object* v_k_3587_, lean_object* v_kind_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
uint8_t v_bi_boxed_3595_; uint8_t v_kind_boxed_3596_; lean_object* v_res_3597_; 
v_bi_boxed_3595_ = lean_unbox(v_bi_3585_);
v_kind_boxed_3596_ = lean_unbox(v_kind_3588_);
v_res_3597_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(v_00_u03b1_3583_, v_name_3584_, v_bi_boxed_3595_, v_type_3586_, v_k_3587_, v_kind_boxed_3596_, v___y_3589_, v___y_3590_, v___y_3591_, v___y_3592_, v___y_3593_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec(v___y_3589_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object* v_00_u03b1_3598_, lean_object* v_name_3599_, lean_object* v_type_3600_, lean_object* v_val_3601_, lean_object* v_k_3602_, uint8_t v_nondep_3603_, uint8_t v_kind_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_){
_start:
{
lean_object* v___x_3611_; 
v___x_3611_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_3599_, v_type_3600_, v_val_3601_, v_k_3602_, v_nondep_3603_, v_kind_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object* v_00_u03b1_3612_, lean_object* v_name_3613_, lean_object* v_type_3614_, lean_object* v_val_3615_, lean_object* v_k_3616_, lean_object* v_nondep_3617_, lean_object* v_kind_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
uint8_t v_nondep_boxed_3625_; uint8_t v_kind_boxed_3626_; lean_object* v_res_3627_; 
v_nondep_boxed_3625_ = lean_unbox(v_nondep_3617_);
v_kind_boxed_3626_ = lean_unbox(v_kind_3618_);
v_res_3627_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(v_00_u03b1_3612_, v_name_3613_, v_type_3614_, v_val_3615_, v_k_3616_, v_nondep_boxed_3625_, v_kind_boxed_3626_, v___y_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
lean_dec(v___y_3623_);
lean_dec_ref(v___y_3622_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
lean_dec(v___y_3619_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object* v_00_u03b1_3628_, lean_object* v_ref_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v___x_3635_; 
v___x_3635_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_3629_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object* v_00_u03b1_3636_, lean_object* v_ref_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_){
_start:
{
lean_object* v_res_3643_; 
v_res_3643_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(v_00_u03b1_3636_, v_ref_3637_, v___y_3638_, v___y_3639_, v___y_3640_, v___y_3641_);
lean_dec(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec(v___y_3639_);
lean_dec_ref(v___y_3638_);
return v_res_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object* v_00_u03b1_3644_, lean_object* v_x_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_){
_start:
{
lean_object* v___x_3652_; 
v___x_3652_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object* v_00_u03b1_3653_, lean_object* v_x_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_){
_start:
{
lean_object* v_res_3661_; 
v_res_3661_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(v_00_u03b1_3653_, v_x_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_);
lean_dec(v___y_3659_);
lean_dec_ref(v___y_3658_);
lean_dec(v___y_3657_);
lean_dec_ref(v___y_3656_);
lean_dec(v___y_3655_);
return v_res_3661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object* v_00_u03b2_3662_, lean_object* v_m_3663_, lean_object* v_a_3664_, lean_object* v_b_3665_){
_start:
{
lean_object* v___x_3666_; 
v___x_3666_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v_m_3663_, v_a_3664_, v_b_3665_);
return v___x_3666_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b2_3667_, lean_object* v_a_3668_, lean_object* v_x_3669_){
_start:
{
lean_object* v___x_3670_; 
v___x_3670_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_3668_, v_x_3669_);
return v___x_3670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b2_3671_, lean_object* v_a_3672_, lean_object* v_x_3673_){
_start:
{
lean_object* v_res_3674_; 
v_res_3674_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b2_3671_, v_a_3672_, v_x_3673_);
lean_dec(v_x_3673_);
lean_dec_ref(v_a_3672_);
return v_res_3674_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object* v_00_u03b2_3675_, lean_object* v_a_3676_, lean_object* v_x_3677_){
_start:
{
uint8_t v___x_3678_; 
v___x_3678_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_3676_, v_x_3677_);
return v___x_3678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object* v_00_u03b2_3679_, lean_object* v_a_3680_, lean_object* v_x_3681_){
_start:
{
uint8_t v_res_3682_; lean_object* v_r_3683_; 
v_res_3682_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(v_00_u03b2_3679_, v_a_3680_, v_x_3681_);
lean_dec(v_x_3681_);
lean_dec_ref(v_a_3680_);
v_r_3683_ = lean_box(v_res_3682_);
return v_r_3683_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object* v_00_u03b2_3684_, lean_object* v_data_3685_){
_start:
{
lean_object* v___x_3686_; 
v___x_3686_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_data_3685_);
return v___x_3686_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object* v_00_u03b2_3687_, lean_object* v_a_3688_, lean_object* v_b_3689_, lean_object* v_x_3690_){
_start:
{
lean_object* v___x_3691_; 
v___x_3691_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_3688_, v_b_3689_, v_x_3690_);
return v___x_3691_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object* v_00_u03b2_3692_, lean_object* v_i_3693_, lean_object* v_source_3694_, lean_object* v_target_3695_){
_start:
{
lean_object* v___x_3696_; 
v___x_3696_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v_i_3693_, v_source_3694_, v_target_3695_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_3697_, lean_object* v_x_3698_, lean_object* v_x_3699_){
_start:
{
lean_object* v___x_3700_; 
v___x_3700_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_x_3698_, v_x_3699_);
return v___x_3700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object* v_binderType_3701_, lean_object* v_inst_3702_, lean_object* v_toBind_3703_, lean_object* v___f_3704_, lean_object* v_____do__lift_3705_){
_start:
{
lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3706_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3706_, 0, v_____do__lift_3705_);
lean_closure_set(v___x_3706_, 1, v_binderType_3701_);
v___x_3707_ = lean_apply_2(v_inst_3702_, lean_box(0), v___x_3706_);
v___x_3708_ = lean_apply_4(v_toBind_3703_, lean_box(0), lean_box(0), v___x_3707_, v___f_3704_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object* v_toPure_3709_, lean_object* v_usedFields_3710_, lean_object* v_binderName_3711_, lean_object* v_body_3712_, lean_object* v_val_3713_, lean_object* v_inst_3714_, lean_object* v_inst_3715_, lean_object* v_fieldVal_x3f_3716_, lean_object* v_____do__lift_3717_){
_start:
{
uint8_t v_____do__lift_291__boxed_3718_; lean_object* v_res_3719_; 
v_____do__lift_291__boxed_3718_ = lean_unbox(v_____do__lift_3717_);
v_res_3719_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(v_toPure_3709_, v_usedFields_3710_, v_binderName_3711_, v_body_3712_, v_val_3713_, v_inst_3714_, v_inst_3715_, v_fieldVal_x3f_3716_, v_____do__lift_291__boxed_3718_);
lean_dec_ref(v_val_3713_);
lean_dec_ref(v_body_3712_);
return v_res_3719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object* v_toPure_3720_, lean_object* v_usedFields_3721_, lean_object* v_binderName_3722_, lean_object* v_body_3723_, lean_object* v_inst_3724_, lean_object* v_inst_3725_, lean_object* v_fieldVal_x3f_3726_, lean_object* v_binderType_3727_, lean_object* v_toBind_3728_, lean_object* v_____x_3729_){
_start:
{
if (lean_obj_tag(v_____x_3729_) == 1)
{
lean_object* v_val_3730_; lean_object* v___f_3731_; lean_object* v___f_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; 
v_val_3730_ = lean_ctor_get(v_____x_3729_, 0);
lean_inc_n(v_val_3730_, 2);
lean_dec_ref_known(v_____x_3729_, 1);
lean_inc_n(v_inst_3725_, 2);
v___f_3731_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3731_, 0, v_toPure_3720_);
lean_closure_set(v___f_3731_, 1, v_usedFields_3721_);
lean_closure_set(v___f_3731_, 2, v_binderName_3722_);
lean_closure_set(v___f_3731_, 3, v_body_3723_);
lean_closure_set(v___f_3731_, 4, v_val_3730_);
lean_closure_set(v___f_3731_, 5, v_inst_3724_);
lean_closure_set(v___f_3731_, 6, v_inst_3725_);
lean_closure_set(v___f_3731_, 7, v_fieldVal_x3f_3726_);
lean_inc(v_toBind_3728_);
v___f_3732_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3732_, 0, v_binderType_3727_);
lean_closure_set(v___f_3732_, 1, v_inst_3725_);
lean_closure_set(v___f_3732_, 2, v_toBind_3728_);
lean_closure_set(v___f_3732_, 3, v___f_3731_);
v___x_3733_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3733_, 0, v_val_3730_);
v___x_3734_ = lean_apply_2(v_inst_3725_, lean_box(0), v___x_3733_);
v___x_3735_ = lean_apply_4(v_toBind_3728_, lean_box(0), lean_box(0), v___x_3734_, v___f_3732_);
return v___x_3735_;
}
else
{
lean_object* v___x_3736_; lean_object* v___x_3737_; 
lean_dec(v_____x_3729_);
lean_dec(v_toBind_3728_);
lean_dec_ref(v_binderType_3727_);
lean_dec(v_fieldVal_x3f_3726_);
lean_dec(v_inst_3725_);
lean_dec_ref(v_inst_3724_);
lean_dec_ref(v_body_3723_);
lean_dec(v_binderName_3722_);
lean_dec(v_usedFields_3721_);
v___x_3736_ = lean_box(0);
v___x_3737_ = lean_apply_2(v_toPure_3720_, lean_box(0), v___x_3736_);
return v___x_3737_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object* v_inst_3741_, lean_object* v_inst_3742_, lean_object* v_fieldVal_x3f_3743_, lean_object* v_usedFields_3744_, lean_object* v_e_3745_){
_start:
{
lean_object* v_toApplicative_3746_; lean_object* v_toBind_3747_; lean_object* v_toPure_3748_; 
v_toApplicative_3746_ = lean_ctor_get(v_inst_3741_, 0);
v_toBind_3747_ = lean_ctor_get(v_inst_3741_, 1);
v_toPure_3748_ = lean_ctor_get(v_toApplicative_3746_, 1);
lean_inc(v_toPure_3748_);
if (lean_obj_tag(v_e_3745_) == 6)
{
lean_object* v_binderName_3753_; lean_object* v_binderType_3754_; lean_object* v_body_3755_; lean_object* v___f_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; 
lean_inc_n(v_toBind_3747_, 2);
v_binderName_3753_ = lean_ctor_get(v_e_3745_, 0);
lean_inc_n(v_binderName_3753_, 2);
v_binderType_3754_ = lean_ctor_get(v_e_3745_, 1);
lean_inc_ref(v_binderType_3754_);
v_body_3755_ = lean_ctor_get(v_e_3745_, 2);
lean_inc_ref(v_body_3755_);
lean_dec_ref_known(v_e_3745_, 3);
lean_inc(v_fieldVal_x3f_3743_);
v___f_3756_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3756_, 0, v_toPure_3748_);
lean_closure_set(v___f_3756_, 1, v_usedFields_3744_);
lean_closure_set(v___f_3756_, 2, v_binderName_3753_);
lean_closure_set(v___f_3756_, 3, v_body_3755_);
lean_closure_set(v___f_3756_, 4, v_inst_3741_);
lean_closure_set(v___f_3756_, 5, v_inst_3742_);
lean_closure_set(v___f_3756_, 6, v_fieldVal_x3f_3743_);
lean_closure_set(v___f_3756_, 7, v_binderType_3754_);
lean_closure_set(v___f_3756_, 8, v_toBind_3747_);
v___x_3757_ = lean_apply_1(v_fieldVal_x3f_3743_, v_binderName_3753_);
v___x_3758_ = lean_apply_4(v_toBind_3747_, lean_box(0), lean_box(0), v___x_3757_, v___f_3756_);
return v___x_3758_;
}
else
{
lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3775_; 
lean_dec(v_fieldVal_x3f_3743_);
lean_dec(v_inst_3742_);
v_isSharedCheck_3775_ = !lean_is_exclusive(v_inst_3741_);
if (v_isSharedCheck_3775_ == 0)
{
lean_object* v_unused_3776_; lean_object* v_unused_3777_; 
v_unused_3776_ = lean_ctor_get(v_inst_3741_, 1);
lean_dec(v_unused_3776_);
v_unused_3777_ = lean_ctor_get(v_inst_3741_, 0);
lean_dec(v_unused_3777_);
v___x_3760_ = v_inst_3741_;
v_isShared_3761_ = v_isSharedCheck_3775_;
goto v_resetjp_3759_;
}
else
{
lean_dec(v_inst_3741_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3775_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; uint8_t v___x_3763_; 
lean_inc_ref(v_e_3745_);
v___x_3762_ = l_Lean_Expr_cleanupAnnotations(v_e_3745_);
v___x_3763_ = l_Lean_Expr_isApp(v___x_3762_);
if (v___x_3763_ == 0)
{
lean_dec_ref(v___x_3762_);
lean_del_object(v___x_3760_);
goto v___jp_3749_;
}
else
{
lean_object* v_arg_3764_; lean_object* v___x_3765_; uint8_t v___x_3766_; 
v_arg_3764_ = lean_ctor_get(v___x_3762_, 1);
lean_inc_ref(v_arg_3764_);
v___x_3765_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3762_);
v___x_3766_ = l_Lean_Expr_isApp(v___x_3765_);
if (v___x_3766_ == 0)
{
lean_dec_ref(v___x_3765_);
lean_dec_ref(v_arg_3764_);
lean_del_object(v___x_3760_);
goto v___jp_3749_;
}
else
{
lean_object* v___x_3767_; lean_object* v___x_3768_; uint8_t v___x_3769_; 
v___x_3767_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3765_);
v___x_3768_ = ((lean_object*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1));
v___x_3769_ = l_Lean_Expr_isConstOf(v___x_3767_, v___x_3768_);
lean_dec_ref(v___x_3767_);
if (v___x_3769_ == 0)
{
lean_dec_ref(v_arg_3764_);
lean_del_object(v___x_3760_);
goto v___jp_3749_;
}
else
{
lean_object* v___x_3771_; 
lean_dec_ref(v_e_3745_);
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 1, v_arg_3764_);
lean_ctor_set(v___x_3760_, 0, v_usedFields_3744_);
v___x_3771_ = v___x_3760_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3774_; 
v_reuseFailAlloc_3774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3774_, 0, v_usedFields_3744_);
lean_ctor_set(v_reuseFailAlloc_3774_, 1, v_arg_3764_);
v___x_3771_ = v_reuseFailAlloc_3774_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3771_);
v___x_3773_ = lean_apply_2(v_toPure_3748_, lean_box(0), v___x_3772_);
return v___x_3773_;
}
}
}
}
}
}
v___jp_3749_:
{
lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3750_, 0, v_usedFields_3744_);
lean_ctor_set(v___x_3750_, 1, v_e_3745_);
v___x_3751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
v___x_3752_ = lean_apply_2(v_toPure_3748_, lean_box(0), v___x_3751_);
return v___x_3752_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object* v_toPure_3778_, lean_object* v_usedFields_3779_, lean_object* v_binderName_3780_, lean_object* v_body_3781_, lean_object* v_val_3782_, lean_object* v_inst_3783_, lean_object* v_inst_3784_, lean_object* v_fieldVal_x3f_3785_, uint8_t v_____do__lift_3786_){
_start:
{
if (v_____do__lift_3786_ == 0)
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
lean_dec(v_fieldVal_x3f_3785_);
lean_dec(v_inst_3784_);
lean_dec_ref(v_inst_3783_);
lean_dec(v_binderName_3780_);
lean_dec(v_usedFields_3779_);
v___x_3787_ = lean_box(0);
v___x_3788_ = lean_apply_2(v_toPure_3778_, lean_box(0), v___x_3787_);
return v___x_3788_;
}
else
{
lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; 
lean_dec(v_toPure_3778_);
v___x_3789_ = l_Lean_NameSet_insert(v_usedFields_3779_, v_binderName_3780_);
v___x_3790_ = lean_expr_instantiate1(v_body_3781_, v_val_3782_);
v___x_3791_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3783_, v_inst_3784_, v_fieldVal_x3f_3785_, v___x_3789_, v___x_3790_);
return v___x_3791_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object* v_m_3792_, lean_object* v_inst_3793_, lean_object* v_inst_3794_, lean_object* v_fieldVal_x3f_3795_, lean_object* v_usedFields_3796_, lean_object* v_e_3797_){
_start:
{
lean_object* v___x_3798_; 
v___x_3798_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3793_, v_inst_3794_, v_fieldVal_x3f_3795_, v_usedFields_3796_, v_e_3797_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object* v_inst_3799_, lean_object* v_inst_3800_, lean_object* v_fieldVal_x3f_3801_, lean_object* v_toPure_3802_, lean_object* v_____s_3803_){
_start:
{
lean_object* v_fst_3804_; 
v_fst_3804_ = lean_ctor_get(v_____s_3803_, 0);
if (lean_obj_tag(v_fst_3804_) == 0)
{
lean_object* v_snd_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
lean_dec(v_toPure_3802_);
v_snd_3805_ = lean_ctor_get(v_____s_3803_, 1);
lean_inc(v_snd_3805_);
lean_dec_ref(v_____s_3803_);
v___x_3806_ = l_Lean_NameSet_empty;
v___x_3807_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3799_, v_inst_3800_, v_fieldVal_x3f_3801_, v___x_3806_, v_snd_3805_);
return v___x_3807_;
}
else
{
lean_object* v_val_3808_; lean_object* v___x_3809_; 
lean_inc_ref(v_fst_3804_);
lean_dec_ref(v_____s_3803_);
lean_dec(v_fieldVal_x3f_3801_);
lean_dec(v_inst_3800_);
lean_dec_ref(v_inst_3799_);
v_val_3808_ = lean_ctor_get(v_fst_3804_, 0);
lean_inc(v_val_3808_);
lean_dec_ref_known(v_fst_3804_, 1);
v___x_3809_ = lean_apply_2(v_toPure_3802_, lean_box(0), v_val_3808_);
return v___x_3809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object* v_body_3810_, lean_object* v_a_3811_, lean_object* v___x_3812_, lean_object* v_toPure_3813_, lean_object* v_____r_3814_){
_start:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3815_ = lean_expr_instantiate1(v_body_3810_, v_a_3811_);
v___x_3816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3816_, 0, v___x_3812_);
lean_ctor_set(v___x_3816_, 1, v___x_3815_);
v___x_3817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3817_, 0, v___x_3816_);
v___x_3818_ = lean_apply_2(v_toPure_3813_, lean_box(0), v___x_3817_);
return v___x_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object* v_body_3819_, lean_object* v_a_3820_, lean_object* v___x_3821_, lean_object* v_toPure_3822_, lean_object* v_____r_3823_){
_start:
{
lean_object* v_res_3824_; 
v_res_3824_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3819_, v_a_3820_, v___x_3821_, v_toPure_3822_, v_____r_3823_);
lean_dec_ref(v_a_3820_);
lean_dec_ref(v_body_3819_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object* v_snd_3827_, lean_object* v_toPure_3828_, lean_object* v___f_3829_, uint8_t v_____do__lift_3830_){
_start:
{
if (v_____do__lift_3830_ == 0)
{
lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
lean_dec(v___f_3829_);
v___x_3831_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
v___x_3832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3831_);
lean_ctor_set(v___x_3832_, 1, v_snd_3827_);
v___x_3833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3832_);
v___x_3834_ = lean_apply_2(v_toPure_3828_, lean_box(0), v___x_3833_);
return v___x_3834_;
}
else
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
lean_dec(v_toPure_3828_);
lean_dec(v_snd_3827_);
v___x_3835_ = lean_box(0);
v___x_3836_ = lean_apply_1(v___f_3829_, v___x_3835_);
return v___x_3836_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object* v_snd_3837_, lean_object* v_toPure_3838_, lean_object* v___f_3839_, lean_object* v_____do__lift_3840_){
_start:
{
uint8_t v_____do__lift_566__boxed_3841_; lean_object* v_res_3842_; 
v_____do__lift_566__boxed_3841_ = lean_unbox(v_____do__lift_3840_);
v_res_3842_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(v_snd_3837_, v_toPure_3838_, v___f_3839_, v_____do__lift_566__boxed_3841_);
return v_res_3842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object* v_binderType_3843_, lean_object* v_inst_3844_, lean_object* v_toBind_3845_, lean_object* v___f_3846_, lean_object* v_____do__lift_3847_){
_start:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; 
v___x_3848_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3848_, 0, v_____do__lift_3847_);
lean_closure_set(v___x_3848_, 1, v_binderType_3843_);
v___x_3849_ = lean_apply_2(v_inst_3844_, lean_box(0), v___x_3848_);
v___x_3850_ = lean_apply_4(v_toBind_3845_, lean_box(0), lean_box(0), v___x_3849_, v___f_3846_);
return v___x_3850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object* v___x_3851_, lean_object* v_toPure_3852_, lean_object* v_levels_x3f_3853_, lean_object* v_inst_3854_, lean_object* v_toBind_3855_, lean_object* v_a_3856_, lean_object* v_x_3857_, lean_object* v___y_3858_){
_start:
{
lean_object* v_snd_3859_; lean_object* v___x_3861_; uint8_t v_isShared_3862_; uint8_t v_isSharedCheck_3879_; 
v_snd_3859_ = lean_ctor_get(v___y_3858_, 1);
v_isSharedCheck_3879_ = !lean_is_exclusive(v___y_3858_);
if (v_isSharedCheck_3879_ == 0)
{
lean_object* v_unused_3880_; 
v_unused_3880_ = lean_ctor_get(v___y_3858_, 0);
lean_dec(v_unused_3880_);
v___x_3861_ = v___y_3858_;
v_isShared_3862_ = v_isSharedCheck_3879_;
goto v_resetjp_3860_;
}
else
{
lean_inc(v_snd_3859_);
lean_dec(v___y_3858_);
v___x_3861_ = lean_box(0);
v_isShared_3862_ = v_isSharedCheck_3879_;
goto v_resetjp_3860_;
}
v_resetjp_3860_:
{
if (lean_obj_tag(v_snd_3859_) == 6)
{
lean_object* v_binderType_3863_; lean_object* v_body_3864_; lean_object* v___f_3865_; 
lean_del_object(v___x_3861_);
v_binderType_3863_ = lean_ctor_get(v_snd_3859_, 1);
lean_inc_ref(v_binderType_3863_);
v_body_3864_ = lean_ctor_get(v_snd_3859_, 2);
lean_inc(v_toPure_3852_);
lean_inc(v___x_3851_);
lean_inc_ref(v_a_3856_);
lean_inc_ref(v_body_3864_);
v___f_3865_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3865_, 0, v_body_3864_);
lean_closure_set(v___f_3865_, 1, v_a_3856_);
lean_closure_set(v___f_3865_, 2, v___x_3851_);
lean_closure_set(v___f_3865_, 3, v_toPure_3852_);
if (lean_obj_tag(v_levels_x3f_3853_) == 0)
{
lean_object* v___f_3866_; lean_object* v___f_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
lean_dec(v___x_3851_);
v___f_3866_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3866_, 0, v_snd_3859_);
lean_closure_set(v___f_3866_, 1, v_toPure_3852_);
lean_closure_set(v___f_3866_, 2, v___f_3865_);
lean_inc(v_toBind_3855_);
lean_inc(v_inst_3854_);
v___f_3867_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3867_, 0, v_binderType_3863_);
lean_closure_set(v___f_3867_, 1, v_inst_3854_);
lean_closure_set(v___f_3867_, 2, v_toBind_3855_);
lean_closure_set(v___f_3867_, 3, v___f_3866_);
v___x_3868_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3868_, 0, v_a_3856_);
v___x_3869_ = lean_apply_2(v_inst_3854_, lean_box(0), v___x_3868_);
v___x_3870_ = lean_apply_4(v_toBind_3855_, lean_box(0), lean_box(0), v___x_3869_, v___f_3867_);
return v___x_3870_;
}
else
{
lean_object* v___x_3871_; lean_object* v___x_3872_; 
lean_inc_ref(v_body_3864_);
lean_dec_ref(v___f_3865_);
lean_dec_ref_known(v_snd_3859_, 3);
lean_dec_ref(v_binderType_3863_);
lean_dec(v_toBind_3855_);
lean_dec(v_inst_3854_);
v___x_3871_ = lean_box(0);
v___x_3872_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3864_, v_a_3856_, v___x_3851_, v_toPure_3852_, v___x_3871_);
lean_dec_ref(v_a_3856_);
lean_dec_ref(v_body_3864_);
return v___x_3872_;
}
}
else
{
lean_object* v___x_3873_; lean_object* v___x_3875_; 
lean_dec_ref(v_a_3856_);
lean_dec(v_toBind_3855_);
lean_dec(v_inst_3854_);
lean_dec(v___x_3851_);
v___x_3873_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0));
if (v_isShared_3862_ == 0)
{
lean_ctor_set(v___x_3861_, 0, v___x_3873_);
v___x_3875_ = v___x_3861_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v___x_3873_);
lean_ctor_set(v_reuseFailAlloc_3878_, 1, v_snd_3859_);
v___x_3875_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
lean_object* v___x_3876_; lean_object* v___x_3877_; 
v___x_3876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3875_);
v___x_3877_ = lean_apply_2(v_toPure_3852_, lean_box(0), v___x_3876_);
return v___x_3877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object* v___x_3881_, lean_object* v_toPure_3882_, lean_object* v_levels_x3f_3883_, lean_object* v_inst_3884_, lean_object* v_toBind_3885_, lean_object* v_a_3886_, lean_object* v_x_3887_, lean_object* v___y_3888_){
_start:
{
lean_object* v_res_3889_; 
v_res_3889_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(v___x_3881_, v_toPure_3882_, v_levels_x3f_3883_, v_inst_3884_, v_toBind_3885_, v_a_3886_, v_x_3887_, v___y_3888_);
lean_dec(v_levels_x3f_3883_);
return v_res_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object* v_toPure_3890_, lean_object* v_levels_x3f_3891_, lean_object* v_inst_3892_, lean_object* v_toBind_3893_, lean_object* v_params_3894_, lean_object* v_inst_3895_, lean_object* v___f_3896_, lean_object* v_val_3897_){
_start:
{
lean_object* v___x_3898_; lean_object* v___f_3899_; lean_object* v___x_3900_; size_t v_sz_3901_; size_t v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3898_ = lean_box(0);
lean_inc(v_toBind_3893_);
v___f_3899_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed), 8, 5);
lean_closure_set(v___f_3899_, 0, v___x_3898_);
lean_closure_set(v___f_3899_, 1, v_toPure_3890_);
lean_closure_set(v___f_3899_, 2, v_levels_x3f_3891_);
lean_closure_set(v___f_3899_, 3, v_inst_3892_);
lean_closure_set(v___f_3899_, 4, v_toBind_3893_);
v___x_3900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3898_);
lean_ctor_set(v___x_3900_, 1, v_val_3897_);
v_sz_3901_ = lean_array_size(v_params_3894_);
v___x_3902_ = ((size_t)0ULL);
v___x_3903_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3895_, v_params_3894_, v___f_3899_, v_sz_3901_, v___x_3902_, v___x_3900_);
v___x_3904_ = lean_apply_4(v_toBind_3893_, lean_box(0), lean_box(0), v___x_3903_, v___f_3896_);
return v___x_3904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object* v_cinfo_3905_, lean_object* v_us_3906_, uint8_t v___x_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_){
_start:
{
lean_object* v___x_3913_; 
v___x_3913_ = l_Lean_Core_instantiateValueLevelParams(v_cinfo_3905_, v_us_3906_, v___x_3907_, v___y_3910_, v___y_3911_);
return v___x_3913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object* v_cinfo_3914_, lean_object* v_us_3915_, lean_object* v___x_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
uint8_t v___x_677__boxed_3922_; lean_object* v_res_3923_; 
v___x_677__boxed_3922_ = lean_unbox(v___x_3916_);
v_res_3923_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(v_cinfo_3914_, v_us_3915_, v___x_677__boxed_3922_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_);
lean_dec(v___y_3920_);
lean_dec_ref(v___y_3919_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec_ref(v_cinfo_3914_);
return v_res_3923_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3(void){
_start:
{
lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v___x_3927_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2));
v___x_3928_ = lean_unsigned_to_nat(2u);
v___x_3929_ = lean_unsigned_to_nat(202u);
v___x_3930_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1));
v___x_3931_ = ((lean_object*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0));
v___x_3932_ = l_mkPanicMessageWithDecl(v___x_3931_, v___x_3930_, v___x_3929_, v___x_3928_, v___x_3927_);
return v___x_3932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object* v_cinfo_3933_, lean_object* v___x_3934_, lean_object* v_inst_3935_, lean_object* v_toBind_3936_, lean_object* v___f_3937_, lean_object* v_us_3938_){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; uint8_t v___x_3942_; 
v___x_3939_ = l_List_lengthTR___redArg(v_us_3938_);
v___x_3940_ = l_Lean_ConstantInfo_levelParams(v_cinfo_3933_);
v___x_3941_ = l_List_lengthTR___redArg(v___x_3940_);
lean_dec(v___x_3940_);
v___x_3942_ = lean_nat_dec_eq(v___x_3939_, v___x_3941_);
lean_dec(v___x_3941_);
lean_dec(v___x_3939_);
if (v___x_3942_ == 0)
{
lean_object* v___x_3943_; lean_object* v___x_3944_; 
lean_dec(v_us_3938_);
lean_dec(v___f_3937_);
lean_dec(v_toBind_3936_);
lean_dec(v_inst_3935_);
lean_dec_ref(v_cinfo_3933_);
v___x_3943_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3);
v___x_3944_ = l_panic___redArg(v___x_3934_, v___x_3943_);
return v___x_3944_;
}
else
{
uint8_t v___x_3945_; lean_object* v___x_3946_; lean_object* v___f_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; 
v___x_3945_ = 0;
v___x_3946_ = lean_box(v___x_3945_);
v___f_3947_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed), 8, 3);
lean_closure_set(v___f_3947_, 0, v_cinfo_3933_);
lean_closure_set(v___f_3947_, 1, v_us_3938_);
lean_closure_set(v___f_3947_, 2, v___x_3946_);
v___x_3948_ = lean_apply_2(v_inst_3935_, lean_box(0), v___f_3947_);
v___x_3949_ = lean_apply_4(v_toBind_3936_, lean_box(0), lean_box(0), v___x_3948_, v___f_3937_);
return v___x_3949_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed(lean_object* v_cinfo_3950_, lean_object* v___x_3951_, lean_object* v_inst_3952_, lean_object* v_toBind_3953_, lean_object* v___f_3954_, lean_object* v_us_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(v_cinfo_3950_, v___x_3951_, v_inst_3952_, v_toBind_3953_, v___f_3954_, v_us_3955_);
lean_dec(v___x_3951_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object* v___x_3957_, lean_object* v_inst_3958_, lean_object* v_toBind_3959_, lean_object* v___f_3960_, lean_object* v_levels_x3f_3961_, lean_object* v_toPure_3962_, lean_object* v_cinfo_3963_){
_start:
{
lean_object* v___f_3964_; 
lean_inc(v_toBind_3959_);
lean_inc(v_inst_3958_);
lean_inc_ref(v_cinfo_3963_);
v___f_3964_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___boxed), 6, 5);
lean_closure_set(v___f_3964_, 0, v_cinfo_3963_);
lean_closure_set(v___f_3964_, 1, v___x_3957_);
lean_closure_set(v___f_3964_, 2, v_inst_3958_);
lean_closure_set(v___f_3964_, 3, v_toBind_3959_);
lean_closure_set(v___f_3964_, 4, v___f_3960_);
if (lean_obj_tag(v_levels_x3f_3961_) == 0)
{
lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
lean_dec(v_toPure_3962_);
v___x_3965_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVarsFor___boxed), 6, 1);
lean_closure_set(v___x_3965_, 0, v_cinfo_3963_);
v___x_3966_ = lean_apply_2(v_inst_3958_, lean_box(0), v___x_3965_);
v___x_3967_ = lean_apply_4(v_toBind_3959_, lean_box(0), lean_box(0), v___x_3966_, v___f_3964_);
return v___x_3967_;
}
else
{
lean_object* v_val_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; 
lean_dec_ref(v_cinfo_3963_);
lean_dec(v_inst_3958_);
v_val_3968_ = lean_ctor_get(v_levels_x3f_3961_, 0);
lean_inc(v_val_3968_);
lean_dec_ref_known(v_levels_x3f_3961_, 1);
v___x_3969_ = lean_apply_2(v_toPure_3962_, lean_box(0), v_val_3968_);
v___x_3970_ = lean_apply_4(v_toBind_3959_, lean_box(0), lean_box(0), v___x_3969_, v___f_3964_);
return v___x_3970_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object* v_inst_3971_, lean_object* v_inst_3972_, lean_object* v_inst_3973_, lean_object* v_inst_3974_, lean_object* v_defaultFn_3975_, lean_object* v_levels_x3f_3976_, lean_object* v_params_3977_, lean_object* v_fieldVal_x3f_3978_){
_start:
{
lean_object* v_toApplicative_3979_; lean_object* v_toBind_3980_; lean_object* v_toPure_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___f_3984_; lean_object* v___f_3985_; lean_object* v___x_3986_; lean_object* v___f_3987_; lean_object* v___x_3988_; 
v_toApplicative_3979_ = lean_ctor_get(v_inst_3971_, 0);
v_toBind_3980_ = lean_ctor_get(v_inst_3971_, 1);
lean_inc_n(v_toBind_3980_, 3);
v_toPure_3981_ = lean_ctor_get(v_toApplicative_3979_, 1);
lean_inc_n(v_toPure_3981_, 3);
v___x_3982_ = lean_box(0);
lean_inc_ref_n(v_inst_3971_, 3);
v___x_3983_ = l_Lean_getConstInfo___redArg(v_inst_3971_, v_inst_3972_, v_inst_3973_, v_defaultFn_3975_);
lean_inc_n(v_inst_3974_, 2);
v___f_3984_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_3984_, 0, v_inst_3971_);
lean_closure_set(v___f_3984_, 1, v_inst_3974_);
lean_closure_set(v___f_3984_, 2, v_fieldVal_x3f_3978_);
lean_closure_set(v___f_3984_, 3, v_toPure_3981_);
lean_inc(v_levels_x3f_3976_);
v___f_3985_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5), 8, 7);
lean_closure_set(v___f_3985_, 0, v_toPure_3981_);
lean_closure_set(v___f_3985_, 1, v_levels_x3f_3976_);
lean_closure_set(v___f_3985_, 2, v_inst_3974_);
lean_closure_set(v___f_3985_, 3, v_toBind_3980_);
lean_closure_set(v___f_3985_, 4, v_params_3977_);
lean_closure_set(v___f_3985_, 5, v_inst_3971_);
lean_closure_set(v___f_3985_, 6, v___f_3984_);
v___x_3986_ = l_instInhabitedOfMonad___redArg(v_inst_3971_, v___x_3982_);
v___f_3987_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8), 7, 6);
lean_closure_set(v___f_3987_, 0, v___x_3986_);
lean_closure_set(v___f_3987_, 1, v_inst_3974_);
lean_closure_set(v___f_3987_, 2, v_toBind_3980_);
lean_closure_set(v___f_3987_, 3, v___f_3985_);
lean_closure_set(v___f_3987_, 4, v_levels_x3f_3976_);
lean_closure_set(v___f_3987_, 5, v_toPure_3981_);
v___x_3988_ = lean_apply_4(v_toBind_3980_, lean_box(0), lean_box(0), v___x_3983_, v___f_3987_);
return v___x_3988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object* v_m_3989_, lean_object* v_inst_3990_, lean_object* v_inst_3991_, lean_object* v_inst_3992_, lean_object* v_inst_3993_, lean_object* v_inst_3994_, lean_object* v_defaultFn_3995_, lean_object* v_levels_x3f_3996_, lean_object* v_params_3997_, lean_object* v_fieldVal_x3f_3998_){
_start:
{
lean_object* v___x_3999_; 
v___x_3999_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(v_inst_3990_, v_inst_3991_, v_inst_3992_, v_inst_3993_, v_defaultFn_3995_, v_levels_x3f_3996_, v_params_3997_, v_fieldVal_x3f_3998_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object* v_m_4000_, lean_object* v_inst_4001_, lean_object* v_inst_4002_, lean_object* v_inst_4003_, lean_object* v_inst_4004_, lean_object* v_inst_4005_, lean_object* v_defaultFn_4006_, lean_object* v_levels_x3f_4007_, lean_object* v_params_4008_, lean_object* v_fieldVal_x3f_4009_){
_start:
{
lean_object* v_res_4010_; 
v_res_4010_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f(v_m_4000_, v_inst_4001_, v_inst_4002_, v_inst_4003_, v_inst_4004_, v_inst_4005_, v_defaultFn_4006_, v_levels_x3f_4007_, v_params_4008_, v_fieldVal_x3f_4009_);
lean_dec_ref(v_inst_4005_);
return v_res_4010_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Structure(builtin);
}
#ifdef __cplusplus
}
#endif
