// Lean compiler output
// Module: Lean.Elab.ComputedFields
// Imports: public import Lean.Meta.Constructions.CasesOn public import Lean.Compiler.ImplementedByAttr public import Lean.Elab.PreDefinition.WF.Eqns import Lean.Compiler.ExternAttr
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_isExtern(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedSynthNormMemoSlot_default;
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_WF_instInhabitedEqnInfo_default;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addZetaDeltaFVarId___redArg(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceSmartCast_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_WF_eqnInfoExt;
lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_unfoldDefinition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_setImplementedBy(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_getInlineAttribute_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecls(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_updatePrefix(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_mkCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t);
uint8_t l_Lean_TagAttribute_hasTag(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 83, .m_data = "The `[computed_field]` attribute can only be used in the with-block of an inductive"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "elaboratingComputedFields"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(43, 7, 196, 5, 246, 241, 200, 84)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "computed_field"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 37, 61, 12, 59, 99, 42, 244)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Marks a function as a computed field of an inductive"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "ComputedFields"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "computedFieldAttr"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__4_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__6_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(61, 233, 103, 138, 4, 51, 157, 24)}};
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__7_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 92, 222, 191, 91, 60, 99, 108)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_computedFieldAttr;
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 537, .m_capacity = 537, .m_length = 528, .m_data = "Marks a function as a computed field of an inductive.\n\nComputed fields are specified in the with-block of an inductive type declaration. They can be used\nto allow certain values to be computed only once at the time of construction and then later be\naccessed immediately.\n\nExample:\n```\ninductive NatList where\n  | nil\n  | cons : Nat → NatList → NatList\nwith\n  @[computed_field] sum : NatList → Nat\n  | .nil => 0\n  | .cons x l => x + l.sum\n  @[computed_field] length : NatList → Nat\n  | .nil => 0\n  | .cons _ l => l.length + 1\n```"};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(41) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(66) << 1) | 1)),((lean_object*)(((size_t)(102) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__1_value),((lean_object*)(((size_t)(102) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(63) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(63) << 1) | 1)),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__3_value),((lean_object*)(((size_t)(19) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__4_value),((lean_object*)(((size_t)(36) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "unsafeCast"};
static const lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 168, 242, 108, 36, 6, 114, 127)}};
static const lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` is not a constructor"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isCtor\?"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "loose bvar in expression"};
static const lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2 = (const lean_object*)&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2_value;
static const lean_string_object l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Meta.whnfEasyCases"};
static const lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1_value;
static const lean_string_object l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Meta.WHNF"};
static const lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0_value;
static lean_once_cell_t l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not an inductive type"};
static const lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0 = (const lean_object*)&l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "computed field "};
static const lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1;
static const lean_string_object l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " does not reduce for constructor "};
static const lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2 = (const lean_object*)&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3;
static lean_once_cell_t l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "'s type must not depend on indices"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "'s type must not depend on value"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_impl"};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0_value;
static const lean_ctor_object l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 78, 106, 49, 240, 167, 66, 80)}};
static const lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1 = (const lean_object*)&l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 239, 73, 172, 230, 126, 139, 134)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a definition"};
static const lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isDefn\?"};
static const lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "_override"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 29, 17, 63, 243, 44, 199, 82)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ComputedFields_overrideComputedFields___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1 = (const lean_object*)&l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "computed fields require at least two constructors"};
static const lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "' must be tagged with @[computed_field]"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_ComputedFields_setComputedFields___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_ComputedFields_setComputedFields___closed__0 = (const lean_object*)&l_Lean_Elab_ComputedFields_setComputedFields___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = l_Lean_instInhabitedSynthNormMemoSlot_default;
v___x_5_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_6_ = lean_unsigned_to_nat(0u);
v___x_7_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_6_);
lean_ctor_set(v___x_7_, 2, v___x_6_);
lean_ctor_set(v___x_7_, 3, v___x_6_);
lean_ctor_set(v___x_7_, 4, v___x_5_);
lean_ctor_set(v___x_7_, 5, v___x_5_);
lean_ctor_set(v___x_7_, 6, v___x_5_);
lean_ctor_set(v___x_7_, 7, v___x_5_);
lean_ctor_set(v___x_7_, 8, v___x_5_);
lean_ctor_set(v___x_7_, 9, v___x_5_);
lean_ctor_set(v___x_7_, 10, v___x_5_);
lean_ctor_set(v___x_7_, 11, v___x_4_);
return v___x_7_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_8_ = lean_unsigned_to_nat(32u);
v___x_9_ = lean_mk_empty_array_with_capacity(v___x_8_);
v___x_10_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_11_ = ((size_t)5ULL);
v___x_12_ = lean_unsigned_to_nat(0u);
v___x_13_ = lean_unsigned_to_nat(32u);
v___x_14_ = lean_mk_empty_array_with_capacity(v___x_13_);
v___x_15_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_16_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
lean_ctor_set(v___x_16_, 2, v___x_12_);
lean_ctor_set(v___x_16_, 3, v___x_12_);
lean_ctor_set_usize(v___x_16_, 4, v___x_11_);
return v___x_16_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_17_ = lean_box(1);
v___x_18_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_19_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_20_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set(v___x_20_, 2, v___x_17_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_21_, lean_object* v___y_22_, lean_object* v___y_23_){
_start:
{
lean_object* v___x_25_; lean_object* v_toCold_26_; lean_object* v_env_27_; lean_object* v_options_28_; uint8_t v___x_29_; lean_object* v_env_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_25_ = lean_st_ref_get(v___y_23_);
v_toCold_26_ = lean_ctor_get(v___y_22_, 0);
v_env_27_ = lean_ctor_get(v___x_25_, 0);
lean_inc_ref(v_env_27_);
lean_dec(v___x_25_);
v_options_28_ = lean_ctor_get(v_toCold_26_, 2);
v___x_29_ = 0;
v_env_30_ = l_Lean_Environment_setRecordingDeps(v_env_27_, v___x_29_);
v___x_31_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_32_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_28_);
v___x_33_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_33_, 0, v_env_30_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
lean_ctor_set(v___x_33_, 2, v___x_32_);
lean_ctor_set(v___x_33_, 3, v_options_28_);
v___x_34_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_33_);
lean_ctor_set(v___x_34_, 1, v_msgData_21_);
v___x_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(v_msgData_36_, v___y_37_, v___y_38_);
lean_dec(v___y_38_);
lean_dec_ref(v___y_37_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v_ref_45_; lean_object* v___x_46_; lean_object* v_a_47_; lean_object* v___x_49_; uint8_t v_isShared_50_; uint8_t v_isSharedCheck_55_; 
v_ref_45_ = lean_ctor_get(v___y_42_, 2);
v___x_46_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(v_msg_41_, v___y_42_, v___y_43_);
v_a_47_ = lean_ctor_get(v___x_46_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_46_);
if (v_isSharedCheck_55_ == 0)
{
v___x_49_ = v___x_46_;
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
else
{
lean_inc(v_a_47_);
lean_dec(v___x_46_);
v___x_49_ = lean_box(0);
v_isShared_50_ = v_isSharedCheck_55_;
goto v_resetjp_48_;
}
v_resetjp_48_:
{
lean_object* v___x_51_; lean_object* v___x_53_; 
lean_inc(v_ref_45_);
v___x_51_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_51_, 0, v_ref_45_);
lean_ctor_set(v___x_51_, 1, v_a_47_);
if (v_isShared_50_ == 0)
{
lean_ctor_set_tag(v___x_49_, 1);
lean_ctor_set(v___x_49_, 0, v___x_51_);
v___x_53_ = v___x_49_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v___x_51_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v_msg_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
return v_res_60_;
}
}
static lean_object* _init_l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_63_ = l_Lean_stringToMessageData(v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(lean_object* v_x_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_74_; lean_object* v_map_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_74_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_68_);
v_map_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_map_75_);
lean_dec_ref(v___x_74_);
v___x_76_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_77_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_75_, v___x_76_);
lean_dec(v_map_75_);
if (lean_obj_tag(v___x_77_) == 0)
{
goto v___jp_71_;
}
else
{
lean_object* v_val_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_87_; 
v_val_78_ = lean_ctor_get(v___x_77_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_77_);
if (v_isSharedCheck_87_ == 0)
{
v___x_80_ = v___x_77_;
v_isShared_81_ = v_isSharedCheck_87_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_val_78_);
lean_dec(v___x_77_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_87_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
if (lean_obj_tag(v_val_78_) == 1)
{
uint8_t v_v_82_; 
v_v_82_ = lean_ctor_get_uint8(v_val_78_, 0);
lean_dec_ref_known(v_val_78_, 0);
if (v_v_82_ == 0)
{
lean_del_object(v___x_80_);
goto v___jp_71_;
}
else
{
lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_83_ = lean_box(0);
if (v_isShared_81_ == 0)
{
lean_ctor_set_tag(v___x_80_, 0);
lean_ctor_set(v___x_80_, 0, v___x_83_);
v___x_85_ = v___x_80_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
else
{
lean_del_object(v___x_80_);
lean_dec(v_val_78_);
goto v___jp_71_;
}
}
}
v___jp_71_:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_obj_once(&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_, &l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_);
v___x_73_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v___x_72_, v___y_68_, v___y_69_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object* v_x_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(v_x_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v_x_88_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; 
v___f_108_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_109_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_110_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_111_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_112_ = 0;
v___x_113_ = lean_box(2);
v___x_114_ = 0;
v___x_115_ = l_Lean_registerTagAttribute(v___x_109_, v___x_110_, v___f_108_, v___x_111_, v___x_112_, v___x_113_, v___x_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object* v_a_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_();
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_118_, lean_object* v_msg_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v_msg_119_, v___y_120_, v___y_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_124_, lean_object* v_msg_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(v_00_u03b1_124_, v_msg_125_, v___y_126_, v___y_127_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1(){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_133_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0));
v___x_134_ = l_Lean_addBuiltinDocString(v___x_132_, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___boxed(lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1();
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3(){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_163_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_164_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6));
v___x_165_ = l_Lean_addBuiltinDeclarationRanges(v___x_163_, v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___boxed(lean_object* v_a_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3();
return v_res_167_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_171_ = lean_box(0);
v___x_172_ = lean_unsigned_to_nat(3u);
v___x_173_ = lean_mk_empty_array_with_capacity(v___x_172_);
v___x_174_ = lean_array_push(v___x_173_, v___x_171_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo(lean_object* v_expectedType_175_, lean_object* v_e_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_182_ = ((lean_object*)(l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1));
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v_expectedType_175_);
v___x_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_184_, 0, v_e_176_);
v___x_185_ = lean_obj_once(&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2, &l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2_once, _init_l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2);
v___x_186_ = lean_array_push(v___x_185_, v___x_183_);
v___x_187_ = lean_array_push(v___x_186_, v___x_184_);
v___x_188_ = l_Lean_Meta_mkAppOptM(v___x_182_, v___x_187_, v_a_177_, v_a_178_, v_a_179_, v_a_180_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___boxed(lean_object* v_expectedType_189_, lean_object* v_e_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_expectedType_189_, v_e_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_);
lean_dec(v_a_194_);
lean_dec_ref(v_a_193_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
return v_res_196_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_197_; 
v___x_197_ = l_instMonadEIO___redArg();
return v___x_197_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(lean_object* v_msg_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v_toApplicative_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_237_; 
v___x_204_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_205_ = l_StateRefT_x27_instMonad___redArg(v___x_204_);
v_toApplicative_206_ = lean_ctor_get(v___x_205_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_205_);
if (v_isSharedCheck_237_ == 0)
{
lean_object* v_unused_238_; 
v_unused_238_ = lean_ctor_get(v___x_205_, 1);
lean_dec(v_unused_238_);
v___x_208_ = v___x_205_;
v_isShared_209_ = v_isSharedCheck_237_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_toApplicative_206_);
lean_dec(v___x_205_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_237_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v_toFunctor_210_; lean_object* v_toSeq_211_; lean_object* v_toSeqLeft_212_; lean_object* v_toSeqRight_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_235_; 
v_toFunctor_210_ = lean_ctor_get(v_toApplicative_206_, 0);
v_toSeq_211_ = lean_ctor_get(v_toApplicative_206_, 2);
v_toSeqLeft_212_ = lean_ctor_get(v_toApplicative_206_, 3);
v_toSeqRight_213_ = lean_ctor_get(v_toApplicative_206_, 4);
v_isSharedCheck_235_ = !lean_is_exclusive(v_toApplicative_206_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; 
v_unused_236_ = lean_ctor_get(v_toApplicative_206_, 1);
lean_dec(v_unused_236_);
v___x_215_ = v_toApplicative_206_;
v_isShared_216_ = v_isSharedCheck_235_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_toSeqRight_213_);
lean_inc(v_toSeqLeft_212_);
lean_inc(v_toSeq_211_);
lean_inc(v_toFunctor_210_);
lean_dec(v_toApplicative_206_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_235_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___f_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___x_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___x_226_; 
v___f_217_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_218_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_210_);
v___f_219_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_219_, 0, v_toFunctor_210_);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_220_, 0, v_toFunctor_210_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___f_219_);
lean_ctor_set(v___x_221_, 1, v___f_220_);
v___f_222_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_222_, 0, v_toSeqRight_213_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_223_, 0, v_toSeqLeft_212_);
v___f_224_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_224_, 0, v_toSeq_211_);
if (v_isShared_216_ == 0)
{
lean_ctor_set(v___x_215_, 4, v___f_222_);
lean_ctor_set(v___x_215_, 3, v___f_223_);
lean_ctor_set(v___x_215_, 2, v___f_224_);
lean_ctor_set(v___x_215_, 1, v___f_217_);
lean_ctor_set(v___x_215_, 0, v___x_221_);
v___x_226_ = v___x_215_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_221_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___f_217_);
lean_ctor_set(v_reuseFailAlloc_234_, 2, v___f_224_);
lean_ctor_set(v_reuseFailAlloc_234_, 3, v___f_223_);
lean_ctor_set(v_reuseFailAlloc_234_, 4, v___f_222_);
v___x_226_ = v_reuseFailAlloc_234_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_228_; 
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 1, v___f_218_);
lean_ctor_set(v___x_208_, 0, v___x_226_);
v___x_228_ = v___x_208_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v___x_226_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v___f_218_);
v___x_228_ = v_reuseFailAlloc_233_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_666__overap_231_; lean_object* v___x_232_; 
v___x_229_ = lean_box(0);
v___x_230_ = l_instInhabitedOfMonad___redArg(v___x_228_, v___x_229_);
v___x_666__overap_231_ = lean_panic_fn_borrowed(v___x_230_, v_msg_200_);
lean_dec(v___x_230_);
lean_inc(v___y_202_);
lean_inc_ref(v___y_201_);
v___x_232_ = lean_apply_3(v___x_666__overap_231_, v___y_201_, v___y_202_, lean_box(0));
return v___x_232_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___boxed(lean_object* v_msg_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v_msg_239_, v___y_240_, v___y_241_);
lean_dec(v___y_241_);
lean_dec_ref(v___y_240_);
return v_res_243_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0));
v___x_246_ = l_Lean_stringToMessageData(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3(void){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_248_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2));
v___x_249_ = l_Lean_stringToMessageData(v___x_248_);
return v___x_249_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_253_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_254_ = lean_unsigned_to_nat(11u);
v___x_255_ = lean_unsigned_to_nat(122u);
v___x_256_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5));
v___x_257_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_258_ = l_mkPanicMessageWithDecl(v___x_257_, v___x_256_, v___x_255_, v___x_254_, v___x_253_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(lean_object* v_constName_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
lean_object* v___x_271_; lean_object* v_env_272_; uint8_t v___x_273_; lean_object* v___x_274_; 
v___x_271_ = lean_st_ref_get(v___y_261_);
v_env_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc_ref(v_env_272_);
lean_dec(v___x_271_);
v___x_273_ = 0;
lean_inc(v_constName_259_);
v___x_274_ = l_Lean_Environment_findAsync_x3f(v_env_272_, v_constName_259_, v___x_273_);
if (lean_obj_tag(v___x_274_) == 1)
{
lean_object* v_val_275_; uint8_t v_kind_276_; 
v_val_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_val_275_);
lean_dec_ref_known(v___x_274_, 1);
v_kind_276_ = lean_ctor_get_uint8(v_val_275_, sizeof(void*)*3);
if (v_kind_276_ == 6)
{
lean_object* v___x_277_; 
v___x_277_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_275_);
if (lean_obj_tag(v___x_277_) == 6)
{
lean_object* v_val_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec(v_constName_259_);
v_val_278_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_277_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_val_278_);
lean_dec(v___x_277_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
lean_ctor_set_tag(v___x_280_, 0);
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_val_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
else
{
lean_object* v___x_286_; lean_object* v___x_287_; 
lean_dec_ref(v___x_277_);
v___x_286_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_287_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v___x_286_, v___y_260_, v___y_261_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_296_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_296_ == 0)
{
v___x_290_ = v___x_287_;
v_isShared_291_ = v_isSharedCheck_296_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___x_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_296_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
if (lean_obj_tag(v_a_288_) == 0)
{
lean_del_object(v___x_290_);
goto v___jp_263_;
}
else
{
lean_object* v_val_292_; lean_object* v___x_294_; 
lean_dec(v_constName_259_);
v_val_292_ = lean_ctor_get(v_a_288_, 0);
lean_inc(v_val_292_);
lean_dec_ref_known(v_a_288_, 1);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v_val_292_);
v___x_294_ = v___x_290_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_val_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
else
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec(v_constName_259_);
v_a_297_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_287_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_287_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
}
else
{
lean_dec(v_val_275_);
goto v___jp_263_;
}
}
else
{
lean_dec(v___x_274_);
goto v___jp_263_;
}
v___jp_263_:
{
lean_object* v___x_264_; uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_264_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_265_ = 0;
v___x_266_ = l_Lean_MessageData_ofConstName(v_constName_259_, v___x_265_);
v___x_267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_264_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_269_, 0, v___x_267_);
lean_ctor_set(v___x_269_, 1, v___x_268_);
v___x_270_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v___x_269_, v___y_260_, v___y_261_);
return v___x_270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___boxed(lean_object* v_constName_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_constName_305_, v___y_306_, v___y_307_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField(lean_object* v_ctor_310_, lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_ctor_310_, v_a_311_, v_a_312_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_326_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_326_ == 0)
{
v___x_317_ = v___x_314_;
v_isShared_318_ = v_isSharedCheck_326_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_326_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v_numFields_319_; lean_object* v___x_320_; uint8_t v___x_321_; lean_object* v___x_322_; lean_object* v___x_324_; 
v_numFields_319_ = lean_ctor_get(v_a_315_, 4);
lean_inc(v_numFields_319_);
lean_dec(v_a_315_);
v___x_320_ = lean_unsigned_to_nat(0u);
v___x_321_ = lean_nat_dec_eq(v_numFields_319_, v___x_320_);
lean_dec(v_numFields_319_);
v___x_322_ = lean_box(v___x_321_);
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 0, v___x_322_);
v___x_324_ = v___x_317_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_322_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
v_a_327_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_314_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_314_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField___boxed(lean_object* v_ctor_335_, lean_object* v_a_336_, lean_object* v_a_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lean_Elab_ComputedFields_isScalarField(v_ctor_335_, v_a_336_, v_a_337_);
lean_dec(v_a_337_);
lean_dec_ref(v_a_336_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(lean_object* v_msgData_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v___x_346_; lean_object* v_env_347_; uint8_t v___x_348_; lean_object* v_env_349_; lean_object* v___x_350_; lean_object* v_toCold_351_; lean_object* v_mctx_352_; lean_object* v_lctx_353_; lean_object* v_options_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_346_ = lean_st_ref_get(v___y_344_);
v_env_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc_ref(v_env_347_);
lean_dec(v___x_346_);
v___x_348_ = 0;
v_env_349_ = l_Lean_Environment_setRecordingDeps(v_env_347_, v___x_348_);
v___x_350_ = lean_st_ref_get(v___y_342_);
v_toCold_351_ = lean_ctor_get(v___y_343_, 0);
v_mctx_352_ = lean_ctor_get(v___x_350_, 0);
lean_inc_ref(v_mctx_352_);
lean_dec(v___x_350_);
v_lctx_353_ = lean_ctor_get(v___y_341_, 2);
v_options_354_ = lean_ctor_get(v_toCold_351_, 2);
lean_inc_ref(v_options_354_);
lean_inc_ref(v_lctx_353_);
v___x_355_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_355_, 0, v_env_349_);
lean_ctor_set(v___x_355_, 1, v_mctx_352_);
lean_ctor_set(v___x_355_, 2, v_lctx_353_);
lean_ctor_set(v___x_355_, 3, v_options_354_);
v___x_356_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_355_);
lean_ctor_set(v___x_356_, 1, v_msgData_340_);
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2___boxed(lean_object* v_msgData_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msgData_358_, v___y_359_, v___y_360_, v___y_361_, v___y_362_);
lean_dec(v___y_362_);
lean_dec_ref(v___y_361_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(lean_object* v_msg_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v_ref_371_; lean_object* v___x_372_; lean_object* v_a_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_381_; 
v_ref_371_ = lean_ctor_get(v___y_368_, 2);
v___x_372_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
v_a_373_ = lean_ctor_get(v___x_372_, 0);
v_isSharedCheck_381_ = !lean_is_exclusive(v___x_372_);
if (v_isSharedCheck_381_ == 0)
{
v___x_375_ = v___x_372_;
v_isShared_376_ = v_isSharedCheck_381_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_a_373_);
lean_dec(v___x_372_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_381_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_377_; lean_object* v___x_379_; 
lean_inc(v_ref_371_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v_ref_371_);
lean_ctor_set(v___x_377_, 1, v_a_373_);
if (v_isShared_376_ == 0)
{
lean_ctor_set_tag(v___x_375_, 1);
lean_ctor_set(v___x_375_, 0, v___x_377_);
v___x_379_ = v___x_375_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_380_; 
v_reuseFailAlloc_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_380_, 0, v___x_377_);
v___x_379_ = v_reuseFailAlloc_380_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
return v___x_379_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg___boxed(lean_object* v_msg_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
return v_res_388_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(lean_object* v_k_389_, lean_object* v_t_390_){
_start:
{
if (lean_obj_tag(v_t_390_) == 0)
{
lean_object* v_k_391_; lean_object* v_l_392_; lean_object* v_r_393_; uint8_t v___x_394_; 
v_k_391_ = lean_ctor_get(v_t_390_, 1);
v_l_392_ = lean_ctor_get(v_t_390_, 3);
v_r_393_ = lean_ctor_get(v_t_390_, 4);
v___x_394_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_389_, v_k_391_);
switch(v___x_394_)
{
case 0:
{
v_t_390_ = v_l_392_;
goto _start;
}
case 1:
{
uint8_t v___x_396_; 
v___x_396_ = 1;
return v___x_396_;
}
default: 
{
v_t_390_ = v_r_393_;
goto _start;
}
}
}
else
{
uint8_t v___x_398_; 
v___x_398_ = 0;
return v___x_398_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_k_399_, lean_object* v_t_400_){
_start:
{
uint8_t v_res_401_; lean_object* v_r_402_; 
v_res_401_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_k_399_, v_t_400_);
lean_dec(v_t_400_);
lean_dec(v_k_399_);
v_r_402_ = lean_box(v_res_401_);
return v_r_402_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(lean_object* v_msg_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v___f_410_; lean_object* v___x_4639__overap_411_; lean_object* v___x_412_; 
v___f_410_ = ((lean_object*)(l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0));
v___x_4639__overap_411_ = lean_panic_fn_borrowed(v___f_410_, v_msg_404_);
lean_inc(v___y_408_);
lean_inc_ref(v___y_407_);
lean_inc(v___y_406_);
lean_inc_ref(v___y_405_);
v___x_412_ = lean_apply_5(v___x_4639__overap_411_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, lean_box(0));
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v_msg_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(lean_object* v_mvarId_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; lean_object* v_mctx_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_423_ = lean_st_ref_get(v___y_421_);
v_mctx_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc_ref(v_mctx_424_);
lean_dec(v___x_423_);
v___x_425_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_424_, v_mvarId_420_);
lean_dec_ref(v_mctx_424_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_mvarId_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_427_, v___y_428_);
lean_dec(v___y_428_);
lean_dec(v_mvarId_427_);
return v_res_430_;
}
}
static lean_object* _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_434_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2));
v___x_435_ = lean_unsigned_to_nat(22u);
v___x_436_ = lean_unsigned_to_nat(391u);
v___x_437_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1));
v___x_438_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0));
v___x_439_ = l_mkPanicMessageWithDecl(v___x_438_, v___x_437_, v___x_436_, v___x_435_, v___x_434_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(lean_object* v_ctorTerm_440_, lean_object* v_e_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
switch(lean_obj_tag(v_e_441_))
{
case 0:
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref_known(v_e_441_, 1);
lean_dec_ref(v_ctorTerm_440_);
v___x_447_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_448_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_447_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
return v___x_448_;
}
case 1:
{
lean_object* v_fvarId_449_; lean_object* v___x_450_; 
v_fvarId_449_ = lean_ctor_get(v_e_441_, 0);
lean_inc(v_fvarId_449_);
v___x_450_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_449_, v_a_442_, v_a_444_, v_a_445_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_495_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_495_ == 0)
{
v___x_453_ = v___x_450_;
v_isShared_454_ = v_isSharedCheck_495_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_450_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_495_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
if (lean_obj_tag(v_a_451_) == 1)
{
lean_object* v_value_455_; uint8_t v_nondep_456_; lean_object* v___y_458_; uint8_t v_trackZetaDelta_459_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; 
v_value_455_ = lean_ctor_get(v_a_451_, 4);
lean_inc_ref(v_value_455_);
v_nondep_456_ = lean_ctor_get_uint8(v_a_451_, sizeof(void*)*5);
if (v_nondep_456_ == 0)
{
uint8_t v___x_480_; 
v___x_480_ = l_Lean_LocalDecl_isImplementationDetail(v_a_451_);
lean_dec_ref_known(v_a_451_, 5);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; uint8_t v_zetaDelta_482_; 
v___x_481_ = l_Lean_Meta_Context_config(v_a_442_);
v_zetaDelta_482_ = lean_ctor_get_uint8(v___x_481_, 16);
lean_dec_ref(v___x_481_);
if (v_zetaDelta_482_ == 0)
{
uint8_t v_trackZetaDelta_483_; lean_object* v_zetaDeltaSet_484_; uint8_t v___x_485_; 
v_trackZetaDelta_483_ = lean_ctor_get_uint8(v_a_442_, sizeof(void*)*7);
v_zetaDeltaSet_484_ = lean_ctor_get(v_a_442_, 1);
v___x_485_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_fvarId_449_, v_zetaDeltaSet_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_487_; 
lean_dec_ref(v_value_455_);
lean_dec_ref(v_ctorTerm_440_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v_e_441_);
v___x_487_ = v___x_453_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_e_441_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
else
{
lean_inc(v_fvarId_449_);
lean_del_object(v___x_453_);
lean_dec_ref_known(v_e_441_, 1);
v___y_458_ = v_a_442_;
v_trackZetaDelta_459_ = v_trackZetaDelta_483_;
v___y_460_ = v_a_443_;
v___y_461_ = v_a_444_;
v___y_462_ = v_a_445_;
goto v___jp_457_;
}
}
else
{
lean_inc(v_fvarId_449_);
lean_del_object(v___x_453_);
lean_dec_ref_known(v_e_441_, 1);
v___y_475_ = v_a_442_;
v___y_476_ = v_a_443_;
v___y_477_ = v_a_444_;
v___y_478_ = v_a_445_;
goto v___jp_474_;
}
}
else
{
lean_inc(v_fvarId_449_);
lean_del_object(v___x_453_);
lean_dec_ref_known(v_e_441_, 1);
v___y_475_ = v_a_442_;
v___y_476_ = v_a_443_;
v___y_477_ = v_a_444_;
v___y_478_ = v_a_445_;
goto v___jp_474_;
}
}
else
{
lean_object* v___x_490_; 
lean_dec_ref(v_value_455_);
lean_dec_ref_known(v_a_451_, 5);
lean_dec_ref(v_ctorTerm_440_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v_e_441_);
v___x_490_ = v___x_453_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_e_441_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
v___jp_457_:
{
if (v_trackZetaDelta_459_ == 0)
{
lean_dec(v_fvarId_449_);
v_e_441_ = v_value_455_;
v_a_442_ = v___y_458_;
v_a_443_ = v___y_460_;
v_a_444_ = v___y_461_;
v_a_445_ = v___y_462_;
goto _start;
}
else
{
lean_object* v___x_464_; 
v___x_464_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_449_, v___y_460_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_dec_ref_known(v___x_464_, 1);
v_e_441_ = v_value_455_;
v_a_442_ = v___y_458_;
v_a_443_ = v___y_460_;
v_a_444_ = v___y_461_;
v_a_445_ = v___y_462_;
goto _start;
}
else
{
lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
lean_dec_ref(v_value_455_);
lean_dec_ref(v_ctorTerm_440_);
v_a_466_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_464_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_464_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
lean_object* v___x_471_; 
if (v_isShared_469_ == 0)
{
v___x_471_ = v___x_468_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_a_466_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
v___jp_474_:
{
uint8_t v_trackZetaDelta_479_; 
v_trackZetaDelta_479_ = lean_ctor_get_uint8(v___y_475_, sizeof(void*)*7);
v___y_458_ = v___y_475_;
v_trackZetaDelta_459_ = v_trackZetaDelta_479_;
v___y_460_ = v___y_476_;
v___y_461_ = v___y_477_;
v___y_462_ = v___y_478_;
goto v___jp_457_;
}
}
else
{
lean_object* v___x_493_; 
lean_dec(v_a_451_);
lean_dec_ref(v_ctorTerm_440_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v_e_441_);
v___x_493_ = v___x_453_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_e_441_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
lean_dec_ref_known(v_e_441_, 1);
lean_dec_ref(v_ctorTerm_440_);
v_a_496_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_450_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_450_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_504_; lean_object* v___x_505_; 
v_mvarId_504_ = lean_ctor_get(v_e_441_, 0);
v___x_505_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_504_, v_a_443_);
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_515_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_515_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_515_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_515_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
if (lean_obj_tag(v_a_506_) == 0)
{
lean_object* v___x_511_; 
lean_dec_ref(v_ctorTerm_440_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 0, v_e_441_);
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_e_441_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
else
{
lean_object* v_val_513_; 
lean_del_object(v___x_508_);
lean_dec_ref_known(v_e_441_, 1);
v_val_513_ = lean_ctor_get(v_a_506_, 0);
lean_inc(v_val_513_);
lean_dec_ref_known(v_a_506_, 1);
v_e_441_ = v_val_513_;
goto _start;
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref_known(v_e_441_, 1);
lean_dec_ref(v_ctorTerm_440_);
v_a_516_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_505_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_505_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
case 3:
{
lean_object* v___x_524_; 
lean_dec_ref(v_ctorTerm_440_);
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v_e_441_);
return v___x_524_;
}
case 6:
{
lean_object* v___x_525_; 
lean_dec_ref(v_ctorTerm_440_);
v___x_525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_525_, 0, v_e_441_);
return v___x_525_;
}
case 7:
{
lean_object* v___x_526_; 
lean_dec_ref(v_ctorTerm_440_);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v_e_441_);
return v___x_526_;
}
case 9:
{
lean_object* v___x_527_; 
lean_dec_ref(v_ctorTerm_440_);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v_e_441_);
return v___x_527_;
}
case 10:
{
lean_object* v_expr_528_; 
v_expr_528_ = lean_ctor_get(v_e_441_, 1);
lean_inc_ref(v_expr_528_);
lean_dec_ref_known(v_e_441_, 2);
v_e_441_ = v_expr_528_;
goto _start;
}
default: 
{
lean_object* v___x_530_; 
v___x_530_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; uint8_t v___x_532_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc_ref(v_ctorTerm_440_);
v___x_532_ = l_Lean_Expr_occurs(v_ctorTerm_440_, v_a_531_);
if (v___x_532_ == 0)
{
lean_dec_ref(v_ctorTerm_440_);
return v___x_530_;
}
else
{
lean_object* v___x_533_; 
lean_inc_n(v_a_531_, 2);
lean_dec_ref_known(v___x_530_, 1);
v___x_533_ = l_Lean_Meta_reduceSmartCast_x3f(v_a_531_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
if (lean_obj_tag(v_a_534_) == 1)
{
lean_object* v_val_535_; lean_object* v___x_536_; 
lean_dec(v_a_531_);
v_val_535_ = lean_ctor_get(v_a_534_, 0);
lean_inc(v_val_535_);
lean_dec_ref_known(v_a_534_, 1);
v___x_536_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_440_, v_val_535_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
return v___x_536_;
}
else
{
uint8_t v___x_537_; lean_object* v___x_538_; 
lean_dec(v_a_534_);
v___x_537_ = 0;
lean_inc(v_a_531_);
v___x_538_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_531_, v___x_537_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
if (lean_obj_tag(v___x_538_) == 0)
{
lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_548_; 
v_a_539_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_548_ == 0)
{
v___x_541_ = v___x_538_;
v_isShared_542_ = v_isSharedCheck_548_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_dec(v___x_538_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_548_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
if (lean_obj_tag(v_a_539_) == 0)
{
lean_object* v___x_544_; 
lean_dec_ref(v_ctorTerm_440_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v_a_531_);
v___x_544_ = v___x_541_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_a_531_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
else
{
lean_object* v_val_546_; lean_object* v___x_547_; 
lean_del_object(v___x_541_);
lean_dec(v_a_531_);
v_val_546_ = lean_ctor_get(v_a_539_, 0);
lean_inc(v_val_546_);
lean_dec_ref_known(v_a_539_, 1);
v___x_547_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_440_, v_val_546_, v_a_442_, v_a_443_, v_a_444_, v_a_445_);
return v___x_547_;
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec(v_a_531_);
lean_dec_ref(v_ctorTerm_440_);
v_a_549_ = lean_ctor_get(v___x_538_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_538_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_538_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_538_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec(v_a_531_);
lean_dec_ref(v_ctorTerm_440_);
v_a_557_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_533_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_533_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorTerm_440_);
return v___x_530_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(lean_object* v_ctorTerm_565_, lean_object* v_e_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
switch(lean_obj_tag(v_e_566_))
{
case 0:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
lean_dec_ref_known(v_e_566_, 1);
lean_dec_ref(v_ctorTerm_565_);
v___x_572_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_573_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_572_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
return v___x_573_;
}
case 1:
{
lean_object* v_fvarId_574_; lean_object* v___x_575_; 
v_fvarId_574_ = lean_ctor_get(v_e_566_, 0);
lean_inc(v_fvarId_574_);
v___x_575_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_574_, v_a_567_, v_a_569_, v_a_570_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_620_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_620_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_620_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_620_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
if (lean_obj_tag(v_a_576_) == 1)
{
lean_object* v_value_580_; uint8_t v_nondep_581_; lean_object* v___y_583_; uint8_t v_trackZetaDelta_584_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_587_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; 
v_value_580_ = lean_ctor_get(v_a_576_, 4);
lean_inc_ref(v_value_580_);
v_nondep_581_ = lean_ctor_get_uint8(v_a_576_, sizeof(void*)*5);
if (v_nondep_581_ == 0)
{
uint8_t v___x_605_; 
v___x_605_ = l_Lean_LocalDecl_isImplementationDetail(v_a_576_);
lean_dec_ref_known(v_a_576_, 5);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; uint8_t v_zetaDelta_607_; 
v___x_606_ = l_Lean_Meta_Context_config(v_a_567_);
v_zetaDelta_607_ = lean_ctor_get_uint8(v___x_606_, 16);
lean_dec_ref(v___x_606_);
if (v_zetaDelta_607_ == 0)
{
uint8_t v_trackZetaDelta_608_; lean_object* v_zetaDeltaSet_609_; uint8_t v___x_610_; 
v_trackZetaDelta_608_ = lean_ctor_get_uint8(v_a_567_, sizeof(void*)*7);
v_zetaDeltaSet_609_ = lean_ctor_get(v_a_567_, 1);
v___x_610_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_fvarId_574_, v_zetaDeltaSet_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_612_; 
lean_dec_ref(v_value_580_);
lean_dec_ref(v_ctorTerm_565_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_e_566_);
v___x_612_ = v___x_578_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_e_566_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
else
{
lean_inc(v_fvarId_574_);
lean_del_object(v___x_578_);
lean_dec_ref_known(v_e_566_, 1);
v___y_583_ = v_a_567_;
v_trackZetaDelta_584_ = v_trackZetaDelta_608_;
v___y_585_ = v_a_568_;
v___y_586_ = v_a_569_;
v___y_587_ = v_a_570_;
goto v___jp_582_;
}
}
else
{
lean_inc(v_fvarId_574_);
lean_del_object(v___x_578_);
lean_dec_ref_known(v_e_566_, 1);
v___y_600_ = v_a_567_;
v___y_601_ = v_a_568_;
v___y_602_ = v_a_569_;
v___y_603_ = v_a_570_;
goto v___jp_599_;
}
}
else
{
lean_inc(v_fvarId_574_);
lean_del_object(v___x_578_);
lean_dec_ref_known(v_e_566_, 1);
v___y_600_ = v_a_567_;
v___y_601_ = v_a_568_;
v___y_602_ = v_a_569_;
v___y_603_ = v_a_570_;
goto v___jp_599_;
}
}
else
{
lean_object* v___x_615_; 
lean_dec_ref_known(v_a_576_, 5);
lean_dec_ref(v_value_580_);
lean_dec_ref(v_ctorTerm_565_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_e_566_);
v___x_615_ = v___x_578_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_e_566_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
v___jp_582_:
{
if (v_trackZetaDelta_584_ == 0)
{
lean_object* v___x_588_; 
lean_dec(v_fvarId_574_);
v___x_588_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_565_, v_value_580_, v___y_583_, v___y_585_, v___y_586_, v___y_587_);
return v___x_588_;
}
else
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_574_, v___y_585_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v___x_590_; 
lean_dec_ref_known(v___x_589_, 1);
v___x_590_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_565_, v_value_580_, v___y_583_, v___y_585_, v___y_586_, v___y_587_);
return v___x_590_;
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec_ref(v_value_580_);
lean_dec_ref(v_ctorTerm_565_);
v_a_591_ = lean_ctor_get(v___x_589_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_589_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_589_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
}
v___jp_599_:
{
uint8_t v_trackZetaDelta_604_; 
v_trackZetaDelta_604_ = lean_ctor_get_uint8(v___y_600_, sizeof(void*)*7);
v___y_583_ = v___y_600_;
v_trackZetaDelta_584_ = v_trackZetaDelta_604_;
v___y_585_ = v___y_601_;
v___y_586_ = v___y_602_;
v___y_587_ = v___y_603_;
goto v___jp_582_;
}
}
else
{
lean_object* v___x_618_; 
lean_dec(v_a_576_);
lean_dec_ref(v_ctorTerm_565_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_e_566_);
v___x_618_ = v___x_578_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_e_566_);
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
lean_dec_ref_known(v_e_566_, 1);
lean_dec_ref(v_ctorTerm_565_);
v_a_621_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_575_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_575_);
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
case 2:
{
lean_object* v_mvarId_629_; lean_object* v___x_630_; 
v_mvarId_629_ = lean_ctor_get(v_e_566_, 0);
v___x_630_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_629_, v_a_568_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_640_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_640_ == 0)
{
v___x_633_ = v___x_630_;
v_isShared_634_ = v_isSharedCheck_640_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_640_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
if (lean_obj_tag(v_a_631_) == 0)
{
lean_object* v___x_636_; 
lean_dec_ref(v_ctorTerm_565_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v_e_566_);
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_e_566_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
else
{
lean_object* v_val_638_; lean_object* v___x_639_; 
lean_del_object(v___x_633_);
lean_dec_ref_known(v_e_566_, 1);
v_val_638_ = lean_ctor_get(v_a_631_, 0);
lean_inc(v_val_638_);
lean_dec_ref_known(v_a_631_, 1);
v___x_639_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_565_, v_val_638_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
return v___x_639_;
}
}
}
else
{
lean_object* v_a_641_; lean_object* v___x_643_; uint8_t v_isShared_644_; uint8_t v_isSharedCheck_648_; 
lean_dec_ref_known(v_e_566_, 1);
lean_dec_ref(v_ctorTerm_565_);
v_a_641_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_648_ == 0)
{
v___x_643_ = v___x_630_;
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
else
{
lean_inc(v_a_641_);
lean_dec(v___x_630_);
v___x_643_ = lean_box(0);
v_isShared_644_ = v_isSharedCheck_648_;
goto v_resetjp_642_;
}
v_resetjp_642_:
{
lean_object* v___x_646_; 
if (v_isShared_644_ == 0)
{
v___x_646_ = v___x_643_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_a_641_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
case 3:
{
lean_object* v___x_649_; 
lean_dec_ref(v_ctorTerm_565_);
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v_e_566_);
return v___x_649_;
}
case 6:
{
lean_object* v___x_650_; 
lean_dec_ref(v_ctorTerm_565_);
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v_e_566_);
return v___x_650_;
}
case 7:
{
lean_object* v___x_651_; 
lean_dec_ref(v_ctorTerm_565_);
v___x_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_651_, 0, v_e_566_);
return v___x_651_;
}
case 9:
{
lean_object* v___x_652_; 
lean_dec_ref(v_ctorTerm_565_);
v___x_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_652_, 0, v_e_566_);
return v___x_652_;
}
case 10:
{
lean_object* v_expr_653_; lean_object* v___x_654_; 
v_expr_653_ = lean_ctor_get(v_e_566_, 1);
lean_inc_ref(v_expr_653_);
lean_dec_ref_known(v_e_566_, 2);
v___x_654_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_565_, v_expr_653_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
return v___x_654_;
}
default: 
{
lean_object* v___x_655_; 
v___x_655_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v_a_656_; uint8_t v___x_657_; 
v_a_656_ = lean_ctor_get(v___x_655_, 0);
lean_inc_ref(v_ctorTerm_565_);
v___x_657_ = l_Lean_Expr_occurs(v_ctorTerm_565_, v_a_656_);
if (v___x_657_ == 0)
{
lean_dec_ref(v_ctorTerm_565_);
return v___x_655_;
}
else
{
lean_object* v___x_658_; 
lean_inc_n(v_a_656_, 2);
lean_dec_ref_known(v___x_655_, 1);
v___x_658_ = l_Lean_Meta_reduceSmartCast_x3f(v_a_656_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v___x_658_, 1);
if (lean_obj_tag(v_a_659_) == 1)
{
lean_object* v_val_660_; lean_object* v___x_661_; 
lean_dec(v_a_656_);
v_val_660_ = lean_ctor_get(v_a_659_, 0);
lean_inc(v_val_660_);
lean_dec_ref_known(v_a_659_, 1);
v___x_661_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_565_, v_val_660_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
return v___x_661_;
}
else
{
uint8_t v___x_662_; lean_object* v___x_663_; 
lean_dec(v_a_659_);
v___x_662_ = 0;
lean_inc(v_a_656_);
v___x_663_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_656_, v___x_662_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_673_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_673_ == 0)
{
v___x_666_ = v___x_663_;
v_isShared_667_ = v_isSharedCheck_673_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_663_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_673_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
if (lean_obj_tag(v_a_664_) == 0)
{
lean_object* v___x_669_; 
lean_dec_ref(v_ctorTerm_565_);
if (v_isShared_667_ == 0)
{
lean_ctor_set(v___x_666_, 0, v_a_656_);
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_656_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
else
{
lean_object* v_val_671_; lean_object* v___x_672_; 
lean_del_object(v___x_666_);
lean_dec(v_a_656_);
v_val_671_ = lean_ctor_get(v_a_664_, 0);
lean_inc(v_val_671_);
lean_dec_ref_known(v_a_664_, 1);
v___x_672_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_565_, v_val_671_, v_a_567_, v_a_568_, v_a_569_, v_a_570_);
return v___x_672_;
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec(v_a_656_);
lean_dec_ref(v_ctorTerm_565_);
v_a_674_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_663_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_663_);
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
}
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
lean_dec(v_a_656_);
lean_dec_ref(v_ctorTerm_565_);
v_a_682_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_658_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_658_);
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
}
else
{
lean_dec_ref(v_ctorTerm_565_);
return v___x_655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(lean_object* v_ctorTerm_690_, lean_object* v_e_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_690_, v_e_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0___boxed(lean_object* v_ctorTerm_698_, lean_object* v_e_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_698_, v_e_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_);
lean_dec(v_a_703_);
lean_dec_ref(v_a_702_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___boxed(lean_object* v_ctorTerm_706_, lean_object* v_e_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_706_, v_e_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0___boxed(lean_object* v_ctorTerm_714_, lean_object* v_e_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v_res_721_; 
v_res_721_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_714_, v_e_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
lean_dec(v_a_719_);
lean_dec_ref(v_a_718_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
return v_res_721_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1(void){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_723_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0));
v___x_724_ = l_Lean_stringToMessageData(v___x_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(lean_object* v_constName_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; lean_object* v_env_732_; lean_object* v___x_733_; 
v___x_731_ = lean_st_ref_get(v___y_729_);
v_env_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_env_732_);
lean_dec(v___x_731_);
lean_inc(v_constName_725_);
v___x_733_ = l_Lean_isInductiveCore_x3f(v_env_732_, v_constName_725_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v___x_734_; uint8_t v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_734_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_735_ = 0;
v___x_736_ = l_Lean_MessageData_ofConstName(v_constName_725_, v___x_735_);
v___x_737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_737_, 0, v___x_734_);
lean_ctor_set(v___x_737_, 1, v___x_736_);
v___x_738_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1);
v___x_739_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_737_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
v___x_740_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_739_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
return v___x_740_;
}
else
{
lean_object* v_val_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
lean_dec(v_constName_725_);
v_val_741_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_733_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_val_741_);
lean_dec(v___x_733_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
lean_ctor_set_tag(v___x_743_, 0);
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_val_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___boxed(lean_object* v_constName_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_constName_749_, v___y_750_, v___y_751_, v___y_752_, v___y_753_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec(v___y_751_);
lean_dec_ref(v___y_750_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(lean_object* v_msg_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v_toApplicative_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_827_; 
v___x_764_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_765_ = l_StateRefT_x27_instMonad___redArg(v___x_764_);
v_toApplicative_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_827_ == 0)
{
lean_object* v_unused_828_; 
v_unused_828_ = lean_ctor_get(v___x_765_, 1);
lean_dec(v_unused_828_);
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_827_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_toApplicative_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_827_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v_toFunctor_770_; lean_object* v_toSeq_771_; lean_object* v_toSeqLeft_772_; lean_object* v_toSeqRight_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_825_; 
v_toFunctor_770_ = lean_ctor_get(v_toApplicative_766_, 0);
v_toSeq_771_ = lean_ctor_get(v_toApplicative_766_, 2);
v_toSeqLeft_772_ = lean_ctor_get(v_toApplicative_766_, 3);
v_toSeqRight_773_ = lean_ctor_get(v_toApplicative_766_, 4);
v_isSharedCheck_825_ = !lean_is_exclusive(v_toApplicative_766_);
if (v_isSharedCheck_825_ == 0)
{
lean_object* v_unused_826_; 
v_unused_826_ = lean_ctor_get(v_toApplicative_766_, 1);
lean_dec(v_unused_826_);
v___x_775_ = v_toApplicative_766_;
v_isShared_776_ = v_isSharedCheck_825_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_toSeqRight_773_);
lean_inc(v_toSeqLeft_772_);
lean_inc(v_toSeq_771_);
lean_inc(v_toFunctor_770_);
lean_dec(v_toApplicative_766_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_825_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___f_777_; lean_object* v___f_778_; lean_object* v___f_779_; lean_object* v___f_780_; lean_object* v___x_781_; lean_object* v___f_782_; lean_object* v___f_783_; lean_object* v___f_784_; lean_object* v___x_786_; 
v___f_777_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_778_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_770_);
v___f_779_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_779_, 0, v_toFunctor_770_);
v___f_780_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_780_, 0, v_toFunctor_770_);
v___x_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_781_, 0, v___f_779_);
lean_ctor_set(v___x_781_, 1, v___f_780_);
v___f_782_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_782_, 0, v_toSeqRight_773_);
v___f_783_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_783_, 0, v_toSeqLeft_772_);
v___f_784_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_784_, 0, v_toSeq_771_);
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 4, v___f_782_);
lean_ctor_set(v___x_775_, 3, v___f_783_);
lean_ctor_set(v___x_775_, 2, v___f_784_);
lean_ctor_set(v___x_775_, 1, v___f_777_);
lean_ctor_set(v___x_775_, 0, v___x_781_);
v___x_786_ = v___x_775_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___x_781_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v___f_777_);
lean_ctor_set(v_reuseFailAlloc_824_, 2, v___f_784_);
lean_ctor_set(v_reuseFailAlloc_824_, 3, v___f_783_);
lean_ctor_set(v_reuseFailAlloc_824_, 4, v___f_782_);
v___x_786_ = v_reuseFailAlloc_824_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_788_; 
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 1, v___f_778_);
lean_ctor_set(v___x_768_, 0, v___x_786_);
v___x_788_ = v___x_768_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_786_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v___f_778_);
v___x_788_ = v_reuseFailAlloc_823_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
lean_object* v___x_789_; lean_object* v_toApplicative_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_821_; 
v___x_789_ = l_StateRefT_x27_instMonad___redArg(v___x_788_);
v_toApplicative_790_ = lean_ctor_get(v___x_789_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v___x_789_, 1);
lean_dec(v_unused_822_);
v___x_792_ = v___x_789_;
v_isShared_793_ = v_isSharedCheck_821_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_toApplicative_790_);
lean_dec(v___x_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_821_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v_toFunctor_794_; lean_object* v_toSeq_795_; lean_object* v_toSeqLeft_796_; lean_object* v_toSeqRight_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_819_; 
v_toFunctor_794_ = lean_ctor_get(v_toApplicative_790_, 0);
v_toSeq_795_ = lean_ctor_get(v_toApplicative_790_, 2);
v_toSeqLeft_796_ = lean_ctor_get(v_toApplicative_790_, 3);
v_toSeqRight_797_ = lean_ctor_get(v_toApplicative_790_, 4);
v_isSharedCheck_819_ = !lean_is_exclusive(v_toApplicative_790_);
if (v_isSharedCheck_819_ == 0)
{
lean_object* v_unused_820_; 
v_unused_820_ = lean_ctor_get(v_toApplicative_790_, 1);
lean_dec(v_unused_820_);
v___x_799_ = v_toApplicative_790_;
v_isShared_800_ = v_isSharedCheck_819_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_toSeqRight_797_);
lean_inc(v_toSeqLeft_796_);
lean_inc(v_toSeq_795_);
lean_inc(v_toFunctor_794_);
lean_dec(v_toApplicative_790_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_819_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___f_801_; lean_object* v___f_802_; lean_object* v___f_803_; lean_object* v___f_804_; lean_object* v___x_805_; lean_object* v___f_806_; lean_object* v___f_807_; lean_object* v___f_808_; lean_object* v___x_810_; 
v___f_801_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_802_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_794_);
v___f_803_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_803_, 0, v_toFunctor_794_);
v___f_804_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_804_, 0, v_toFunctor_794_);
v___x_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_805_, 0, v___f_803_);
lean_ctor_set(v___x_805_, 1, v___f_804_);
v___f_806_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_806_, 0, v_toSeqRight_797_);
v___f_807_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_807_, 0, v_toSeqLeft_796_);
v___f_808_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_808_, 0, v_toSeq_795_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 4, v___f_806_);
lean_ctor_set(v___x_799_, 3, v___f_807_);
lean_ctor_set(v___x_799_, 2, v___f_808_);
lean_ctor_set(v___x_799_, 1, v___f_801_);
lean_ctor_set(v___x_799_, 0, v___x_805_);
v___x_810_ = v___x_799_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_818_, 1, v___f_801_);
lean_ctor_set(v_reuseFailAlloc_818_, 2, v___f_808_);
lean_ctor_set(v_reuseFailAlloc_818_, 3, v___f_807_);
lean_ctor_set(v_reuseFailAlloc_818_, 4, v___f_806_);
v___x_810_ = v_reuseFailAlloc_818_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_812_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set(v___x_792_, 1, v___f_802_);
lean_ctor_set(v___x_792_, 0, v___x_810_);
v___x_812_ = v___x_792_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_810_);
lean_ctor_set(v_reuseFailAlloc_817_, 1, v___f_802_);
v___x_812_ = v_reuseFailAlloc_817_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_4629__overap_815_; lean_object* v___x_816_; 
v___x_813_ = lean_box(0);
v___x_814_ = l_instInhabitedOfMonad___redArg(v___x_812_, v___x_813_);
v___x_4629__overap_815_ = lean_panic_fn_borrowed(v___x_814_, v_msg_758_);
lean_dec(v___x_814_);
lean_inc(v___y_762_);
lean_inc_ref(v___y_761_);
lean_inc(v___y_760_);
lean_inc_ref(v___y_759_);
v___x_816_ = lean_apply_5(v___x_4629__overap_815_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, lean_box(0));
return v___x_816_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___boxed(lean_object* v_msg_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v_msg_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v___y_831_);
lean_dec_ref(v___y_830_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(lean_object* v_constName_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v___x_850_; lean_object* v_env_851_; uint8_t v___x_852_; lean_object* v___x_853_; 
v___x_850_ = lean_st_ref_get(v___y_840_);
v_env_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc_ref(v_env_851_);
lean_dec(v___x_850_);
v___x_852_ = 0;
lean_inc(v_constName_836_);
v___x_853_ = l_Lean_Environment_findAsync_x3f(v_env_851_, v_constName_836_, v___x_852_);
if (lean_obj_tag(v___x_853_) == 1)
{
lean_object* v_val_854_; uint8_t v_kind_855_; 
v_val_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_val_854_);
lean_dec_ref_known(v___x_853_, 1);
v_kind_855_ = lean_ctor_get_uint8(v_val_854_, sizeof(void*)*3);
if (v_kind_855_ == 6)
{
lean_object* v___x_856_; 
v___x_856_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_854_);
if (lean_obj_tag(v___x_856_) == 6)
{
lean_object* v_val_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec(v_constName_836_);
v_val_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_val_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
lean_ctor_set_tag(v___x_859_, 0);
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_val_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
else
{
lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec_ref(v___x_856_);
v___x_865_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_866_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v___x_865_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_875_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_875_ == 0)
{
v___x_869_ = v___x_866_;
v_isShared_870_ = v_isSharedCheck_875_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_866_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_875_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
if (lean_obj_tag(v_a_867_) == 0)
{
lean_del_object(v___x_869_);
goto v___jp_842_;
}
else
{
lean_object* v_val_871_; lean_object* v___x_873_; 
lean_dec(v_constName_836_);
v_val_871_ = lean_ctor_get(v_a_867_, 0);
lean_inc(v_val_871_);
lean_dec_ref_known(v_a_867_, 1);
if (v_isShared_870_ == 0)
{
lean_ctor_set(v___x_869_, 0, v_val_871_);
v___x_873_ = v___x_869_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_val_871_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec(v_constName_836_);
v_a_876_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_866_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_866_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
}
else
{
lean_dec(v_val_854_);
goto v___jp_842_;
}
}
else
{
lean_dec(v___x_853_);
goto v___jp_842_;
}
v___jp_842_:
{
lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_843_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_844_ = 0;
v___x_845_ = l_Lean_MessageData_ofConstName(v_constName_836_, v___x_844_);
v___x_846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_846_, 0, v___x_843_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
v___x_847_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_846_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
v___x_849_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_848_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2___boxed(lean_object* v_constName_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_constName_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
return v_res_890_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; 
v___x_892_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0));
v___x_893_ = l_Lean_stringToMessageData(v___x_892_);
return v___x_893_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2));
v___x_896_ = l_Lean_stringToMessageData(v___x_895_);
return v___x_896_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4(void){
_start:
{
lean_object* v___x_897_; lean_object* v_dummy_898_; 
v___x_897_ = lean_box(0);
v_dummy_898_ = l_Lean_Expr_sort___override(v___x_897_);
return v_dummy_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue(lean_object* v_computedField_899_, lean_object* v_ctorTerm_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v_ctorName_908_; lean_object* v_val_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_927_; lean_object* v___x_937_; 
v___x_906_ = l_Lean_Elab_WF_instInhabitedEqnInfo_default;
v___x_907_ = l_Lean_Expr_getAppFn(v_ctorTerm_900_);
v_ctorName_908_ = l_Lean_Expr_constName_x21(v___x_907_);
lean_dec_ref(v___x_907_);
lean_inc(v_ctorName_908_);
v___x_937_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_ctorName_908_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v_induct_939_; lean_object* v___x_940_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v_induct_939_ = lean_ctor_get(v_a_938_, 1);
lean_inc(v_induct_939_);
lean_dec(v_a_938_);
v___x_940_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_induct_939_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v_numParams_942_; lean_object* v_numIndices_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v_numParams_942_ = lean_ctor_get(v_a_941_, 1);
lean_inc(v_numParams_942_);
v_numIndices_943_ = lean_ctor_get(v_a_941_, 2);
lean_inc(v_numIndices_943_);
lean_dec(v_a_941_);
v___x_944_ = lean_nat_add(v_numParams_942_, v_numIndices_943_);
lean_dec(v_numIndices_943_);
lean_dec(v_numParams_942_);
v___x_945_ = lean_box(0);
v___x_946_ = lean_mk_array(v___x_944_, v___x_945_);
lean_inc_ref(v_ctorTerm_900_);
v___x_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_947_, 0, v_ctorTerm_900_);
v___x_948_ = lean_unsigned_to_nat(1u);
v___x_949_ = lean_mk_empty_array_with_capacity(v___x_948_);
v___x_950_ = lean_array_push(v___x_949_, v___x_947_);
v___x_951_ = l_Array_append___redArg(v___x_946_, v___x_950_);
lean_dec_ref(v___x_950_);
lean_inc(v_computedField_899_);
v___x_952_ = l_Lean_Meta_mkAppOptM(v_computedField_899_, v___x_951_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_object* v_a_953_; lean_object* v___x_954_; lean_object* v_env_955_; lean_object* v___x_956_; lean_object* v_toEnvExtension_957_; lean_object* v_asyncMode_958_; uint8_t v___x_959_; lean_object* v___x_960_; 
v_a_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_a_953_);
lean_dec_ref_known(v___x_952_, 1);
v___x_954_ = lean_st_ref_get(v_a_904_);
v_env_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc_ref(v_env_955_);
lean_dec(v___x_954_);
v___x_956_ = l_Lean_Elab_WF_eqnInfoExt;
v_toEnvExtension_957_ = lean_ctor_get(v___x_956_, 0);
v_asyncMode_958_ = lean_ctor_get(v_toEnvExtension_957_, 2);
v___x_959_ = 0;
lean_inc(v_computedField_899_);
v___x_960_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_906_, v___x_956_, v_env_955_, v_computedField_899_, v_asyncMode_958_, v___x_959_);
if (lean_obj_tag(v___x_960_) == 1)
{
lean_object* v_val_961_; lean_object* v_levelParams_962_; lean_object* v_value_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v_dummy_967_; lean_object* v_nargs_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v_val_961_ = lean_ctor_get(v___x_960_, 0);
lean_inc(v_val_961_);
lean_dec_ref_known(v___x_960_, 1);
v_levelParams_962_ = lean_ctor_get(v_val_961_, 1);
lean_inc(v_levelParams_962_);
v_value_963_ = lean_ctor_get(v_val_961_, 3);
lean_inc_ref(v_value_963_);
lean_dec(v_val_961_);
v___x_964_ = l_Lean_Expr_getAppFn(v_a_953_);
v___x_965_ = l_Lean_Expr_constLevels_x21(v___x_964_);
lean_dec_ref(v___x_964_);
v___x_966_ = l_Lean_Expr_instantiateLevelParams(v_value_963_, v_levelParams_962_, v___x_965_);
lean_dec_ref(v_value_963_);
v_dummy_967_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4);
v_nargs_968_ = l_Lean_Expr_getAppNumArgs(v_a_953_);
lean_inc(v_nargs_968_);
v___x_969_ = lean_mk_array(v_nargs_968_, v_dummy_967_);
v___x_970_ = lean_nat_sub(v_nargs_968_, v___x_948_);
lean_dec(v_nargs_968_);
v___x_971_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_953_, v___x_969_, v___x_970_);
v___x_972_ = l_Lean_mkAppN(v___x_966_, v___x_971_);
lean_dec_ref(v___x_971_);
v_val_910_ = v___x_972_;
v___y_911_ = v_a_901_;
v___y_912_ = v_a_902_;
v___y_913_ = v_a_903_;
v___y_914_ = v_a_904_;
goto v___jp_909_;
}
else
{
lean_object* v___x_973_; uint8_t v_transparency_974_; uint8_t v___x_975_; uint8_t v___x_976_; 
lean_dec(v___x_960_);
v___x_973_ = l_Lean_Meta_Context_config(v_a_901_);
v_transparency_974_ = lean_ctor_get_uint8(v___x_973_, 9);
lean_dec_ref(v___x_973_);
v___x_975_ = 1;
v___x_976_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_974_, v___x_975_);
if (v___x_976_ == 0)
{
lean_object* v_keyedConfig_977_; uint8_t v_trackZetaDelta_978_; lean_object* v_zetaDeltaSet_979_; lean_object* v_lctx_980_; lean_object* v_localInstances_981_; lean_object* v_defEqCtx_x3f_982_; lean_object* v_synthPendingDepth_983_; lean_object* v_customCanUnfoldPredicate_x3f_984_; uint8_t v_univApprox_985_; uint8_t v_inTypeClassResolution_986_; uint8_t v_cacheInferType_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_keyedConfig_977_ = lean_ctor_get(v_a_901_, 0);
v_trackZetaDelta_978_ = lean_ctor_get_uint8(v_a_901_, sizeof(void*)*7);
v_zetaDeltaSet_979_ = lean_ctor_get(v_a_901_, 1);
v_lctx_980_ = lean_ctor_get(v_a_901_, 2);
v_localInstances_981_ = lean_ctor_get(v_a_901_, 3);
v_defEqCtx_x3f_982_ = lean_ctor_get(v_a_901_, 4);
v_synthPendingDepth_983_ = lean_ctor_get(v_a_901_, 5);
v_customCanUnfoldPredicate_x3f_984_ = lean_ctor_get(v_a_901_, 6);
v_univApprox_985_ = lean_ctor_get_uint8(v_a_901_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_986_ = lean_ctor_get_uint8(v_a_901_, sizeof(void*)*7 + 2);
v_cacheInferType_987_ = lean_ctor_get_uint8(v_a_901_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_977_);
v___x_988_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_975_, v_keyedConfig_977_);
lean_inc(v_customCanUnfoldPredicate_x3f_984_);
lean_inc(v_synthPendingDepth_983_);
lean_inc(v_defEqCtx_x3f_982_);
lean_inc_ref(v_localInstances_981_);
lean_inc_ref(v_lctx_980_);
lean_inc(v_zetaDeltaSet_979_);
v___x_989_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_989_, 0, v___x_988_);
lean_ctor_set(v___x_989_, 1, v_zetaDeltaSet_979_);
lean_ctor_set(v___x_989_, 2, v_lctx_980_);
lean_ctor_set(v___x_989_, 3, v_localInstances_981_);
lean_ctor_set(v___x_989_, 4, v_defEqCtx_x3f_982_);
lean_ctor_set(v___x_989_, 5, v_synthPendingDepth_983_);
lean_ctor_set(v___x_989_, 6, v_customCanUnfoldPredicate_x3f_984_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*7, v_trackZetaDelta_978_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*7 + 1, v_univApprox_985_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*7 + 2, v_inTypeClassResolution_986_);
lean_ctor_set_uint8(v___x_989_, sizeof(void*)*7 + 3, v_cacheInferType_987_);
v___x_990_ = l_Lean_Meta_unfoldDefinition(v_a_953_, v___x_989_, v_a_902_, v_a_903_, v_a_904_);
lean_dec_ref_known(v___x_989_, 7);
v___y_927_ = v___x_990_;
goto v___jp_926_;
}
else
{
lean_object* v___x_991_; 
v___x_991_ = l_Lean_Meta_unfoldDefinition(v_a_953_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
v___y_927_ = v___x_991_;
goto v___jp_926_;
}
}
}
else
{
lean_dec(v_ctorName_908_);
lean_dec_ref(v_ctorTerm_900_);
lean_dec(v_computedField_899_);
return v___x_952_;
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec(v_ctorName_908_);
lean_dec_ref(v_ctorTerm_900_);
lean_dec(v_computedField_899_);
v_a_992_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_940_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_940_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_ctorName_908_);
lean_dec_ref(v_ctorTerm_900_);
lean_dec(v_computedField_899_);
v_a_1000_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_937_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_937_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
v___jp_909_:
{
lean_object* v___x_915_; 
lean_inc_ref(v_ctorTerm_900_);
v___x_915_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_900_, v_val_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; uint8_t v___x_917_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
v___x_917_ = l_Lean_Expr_occurs(v_ctorTerm_900_, v_a_916_);
if (v___x_917_ == 0)
{
lean_dec(v_ctorName_908_);
lean_dec(v_computedField_899_);
return v___x_915_;
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
lean_dec_ref_known(v___x_915_, 1);
v___x_918_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
v___x_919_ = l_Lean_MessageData_ofName(v_computedField_899_);
v___x_920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set(v___x_920_, 1, v___x_919_);
v___x_921_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3);
v___x_922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_922_, 0, v___x_920_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
v___x_923_ = l_Lean_MessageData_ofName(v_ctorName_908_);
v___x_924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_922_);
lean_ctor_set(v___x_924_, 1, v___x_923_);
v___x_925_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_924_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
return v___x_925_;
}
}
else
{
lean_dec(v_ctorName_908_);
lean_dec_ref(v_ctorTerm_900_);
lean_dec(v_computedField_899_);
return v___x_915_;
}
}
v___jp_926_:
{
if (lean_obj_tag(v___y_927_) == 0)
{
lean_object* v_a_928_; 
v_a_928_ = lean_ctor_get(v___y_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref_known(v___y_927_, 1);
v_val_910_ = v_a_928_;
v___y_911_ = v_a_901_;
v___y_912_ = v_a_902_;
v___y_913_ = v_a_903_;
v___y_914_ = v_a_904_;
goto v___jp_909_;
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec(v_ctorName_908_);
lean_dec_ref(v_ctorTerm_900_);
lean_dec(v_computedField_899_);
v_a_929_ = lean_ctor_get(v___y_927_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___y_927_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___y_927_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___y_927_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_934_; 
if (v_isShared_932_ == 0)
{
v___x_934_ = v___x_931_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_929_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___boxed(lean_object* v_computedField_1008_, lean_object* v_ctorTerm_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_computedField_1008_, v_ctorTerm_1009_, v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_);
lean_dec(v_a_1013_);
lean_dec_ref(v_a_1012_);
lean_dec(v_a_1011_);
lean_dec_ref(v_a_1010_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(lean_object* v_00_u03b1_1016_, lean_object* v_msg_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___boxed(lean_object* v_00_u03b1_1024_, lean_object* v_msg_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(v_00_u03b1_1024_, v_msg_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4(lean_object* v_mvarId_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___redArg(v_mvarId_1032_, v___y_1034_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4___boxed(lean_object* v_mvarId_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__4(v_mvarId_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v_mvarId_1039_);
return v_res_1045_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1046_, lean_object* v_k_1047_, lean_object* v_t_1048_){
_start:
{
uint8_t v___x_1049_; 
v___x_1049_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_k_1047_, v_t_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1050_, lean_object* v_k_1051_, lean_object* v_t_1052_){
_start:
{
uint8_t v_res_1053_; lean_object* v_r_1054_; 
v_res_1053_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(v_00_u03b2_1050_, v_k_1051_, v_t_1052_);
lean_dec(v_t_1052_);
lean_dec(v_k_1051_);
v_r_1054_ = lean_box(v_res_1053_);
return v_r_1054_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(lean_object* v_a_1055_, lean_object* v_as_1056_, size_t v_i_1057_, size_t v_stop_1058_){
_start:
{
uint8_t v___x_1059_; 
v___x_1059_ = lean_usize_dec_eq(v_i_1057_, v_stop_1058_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1060_ = lean_array_uget_borrowed(v_as_1056_, v_i_1057_);
v___x_1061_ = l_Lean_Expr_fvarId_x21(v___x_1060_);
v___x_1062_ = l_Lean_Expr_containsFVar(v_a_1055_, v___x_1061_);
lean_dec(v___x_1061_);
if (v___x_1062_ == 0)
{
size_t v___x_1063_; size_t v___x_1064_; 
v___x_1063_ = ((size_t)1ULL);
v___x_1064_ = lean_usize_add(v_i_1057_, v___x_1063_);
v_i_1057_ = v___x_1064_;
goto _start;
}
else
{
return v___x_1062_;
}
}
else
{
uint8_t v___x_1066_; 
v___x_1066_ = 0;
return v___x_1066_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0___boxed(lean_object* v_a_1067_, lean_object* v_as_1068_, lean_object* v_i_1069_, lean_object* v_stop_1070_){
_start:
{
size_t v_i_boxed_1071_; size_t v_stop_boxed_1072_; uint8_t v_res_1073_; lean_object* v_r_1074_; 
v_i_boxed_1071_ = lean_unbox_usize(v_i_1069_);
lean_dec(v_i_1069_);
v_stop_boxed_1072_ = lean_unbox_usize(v_stop_1070_);
lean_dec(v_stop_1070_);
v_res_1073_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_1067_, v_as_1068_, v_i_boxed_1071_, v_stop_boxed_1072_);
lean_dec_ref(v_as_1068_);
lean_dec_ref(v_a_1067_);
v_r_1074_ = lean_box(v_res_1073_);
return v_r_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(lean_object* v_msg_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_){
_start:
{
lean_object* v_ref_1081_; lean_object* v___x_1082_; lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1091_; 
v_ref_1081_ = lean_ctor_get(v___y_1078_, 2);
v___x_1082_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
v_a_1083_ = lean_ctor_get(v___x_1082_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1082_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1085_ = v___x_1082_;
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_dec(v___x_1082_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1091_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1087_; lean_object* v___x_1089_; 
lean_inc(v_ref_1081_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v_ref_1081_);
lean_ctor_set(v___x_1087_, 1, v_a_1083_);
if (v_isShared_1086_ == 0)
{
lean_ctor_set_tag(v___x_1085_, 1);
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
return v___x_1089_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg___boxed(lean_object* v_msg_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
return v_res_1098_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0));
v___x_1101_ = l_Lean_stringToMessageData(v___x_1100_);
return v___x_1101_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2));
v___x_1104_ = l_Lean_stringToMessageData(v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(lean_object* v_indices_1105_, lean_object* v_val_1106_, lean_object* v_as_1107_, size_t v_sz_1108_, size_t v_i_1109_, lean_object* v_b_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_){
_start:
{
lean_object* v_a_1118_; uint8_t v___x_1122_; 
v___x_1122_ = lean_usize_dec_lt(v_i_1109_, v_sz_1108_);
if (v___x_1122_ == 0)
{
lean_object* v___x_1123_; 
v___x_1123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1123_, 0, v_b_1110_);
return v___x_1123_;
}
else
{
lean_object* v___x_1124_; lean_object* v_a_1125_; lean_object* v___x_1126_; 
v___x_1124_ = lean_box(0);
v_a_1125_ = lean_array_uget_borrowed(v_as_1107_, v_i_1109_);
lean_inc(v___y_1115_);
lean_inc_ref(v___y_1114_);
lean_inc(v___y_1113_);
lean_inc_ref(v___y_1112_);
lean_inc(v_a_1125_);
v___x_1126_ = lean_infer_type(v_a_1125_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
if (lean_obj_tag(v___x_1126_) == 0)
{
lean_object* v_a_1127_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___x_1148_; uint8_t v___x_1149_; 
v_a_1127_ = lean_ctor_get(v___x_1126_, 0);
lean_inc(v_a_1127_);
lean_dec_ref_known(v___x_1126_, 1);
v___x_1148_ = l_Lean_Expr_fvarId_x21(v_val_1106_);
v___x_1149_ = l_Lean_Expr_containsFVar(v_a_1127_, v___x_1148_);
lean_dec(v___x_1148_);
if (v___x_1149_ == 0)
{
v___y_1129_ = v___y_1111_;
v___y_1130_ = v___y_1112_;
v___y_1131_ = v___y_1113_;
v___y_1132_ = v___y_1114_;
v___y_1133_ = v___y_1115_;
goto v___jp_1128_;
}
else
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1150_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1125_);
v___x_1151_ = l_Lean_MessageData_ofExpr(v_a_1125_);
v___x_1152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1152_, 0, v___x_1150_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3);
v___x_1154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1152_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
lean_inc(v_a_1127_);
v___x_1155_ = l_Lean_indentExpr(v_a_1127_);
v___x_1156_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1154_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
v___x_1157_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1156_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_dec_ref_known(v___x_1157_, 1);
v___y_1129_ = v___y_1111_;
v___y_1130_ = v___y_1112_;
v___y_1131_ = v___y_1113_;
v___y_1132_ = v___y_1114_;
v___y_1133_ = v___y_1115_;
goto v___jp_1128_;
}
else
{
lean_dec(v_a_1127_);
return v___x_1157_;
}
}
v___jp_1128_:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; uint8_t v___x_1136_; 
v___x_1134_ = lean_unsigned_to_nat(0u);
v___x_1135_ = lean_array_get_size(v_indices_1105_);
v___x_1136_ = lean_nat_dec_lt(v___x_1134_, v___x_1135_);
if (v___x_1136_ == 0)
{
lean_dec(v_a_1127_);
v_a_1118_ = v___x_1124_;
goto v___jp_1117_;
}
else
{
if (v___x_1136_ == 0)
{
lean_dec(v_a_1127_);
v_a_1118_ = v___x_1124_;
goto v___jp_1117_;
}
else
{
size_t v___x_1137_; size_t v___x_1138_; uint8_t v___x_1139_; 
v___x_1137_ = ((size_t)0ULL);
v___x_1138_ = lean_usize_of_nat(v___x_1135_);
v___x_1139_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_1127_, v_indices_1105_, v___x_1137_, v___x_1138_);
if (v___x_1139_ == 0)
{
lean_dec(v_a_1127_);
v_a_1118_ = v___x_1124_;
goto v___jp_1117_;
}
else
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1140_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1125_);
v___x_1141_ = l_Lean_MessageData_ofExpr(v_a_1125_);
v___x_1142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1140_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1);
v___x_1144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___x_1145_ = l_Lean_indentExpr(v_a_1127_);
v___x_1146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___x_1147_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1146_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_dec_ref_known(v___x_1147_, 1);
v_a_1118_ = v___x_1124_;
goto v___jp_1117_;
}
else
{
return v___x_1147_;
}
}
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
v_a_1158_ = lean_ctor_get(v___x_1126_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1126_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1126_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1126_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
v___jp_1117_:
{
size_t v___x_1119_; size_t v___x_1120_; 
v___x_1119_ = ((size_t)1ULL);
v___x_1120_ = lean_usize_add(v_i_1109_, v___x_1119_);
v_i_1109_ = v___x_1120_;
v_b_1110_ = v_a_1118_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___boxed(lean_object* v_indices_1166_, lean_object* v_val_1167_, lean_object* v_as_1168_, lean_object* v_sz_1169_, lean_object* v_i_1170_, lean_object* v_b_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
size_t v_sz_boxed_1178_; size_t v_i_boxed_1179_; lean_object* v_res_1180_; 
v_sz_boxed_1178_ = lean_unbox_usize(v_sz_1169_);
lean_dec(v_sz_1169_);
v_i_boxed_1179_ = lean_unbox_usize(v_i_1170_);
lean_dec(v_i_1170_);
v_res_1180_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1166_, v_val_1167_, v_as_1168_, v_sz_boxed_1178_, v_i_boxed_1179_, v_b_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec_ref(v___y_1172_);
lean_dec_ref(v_as_1168_);
lean_dec_ref(v_val_1167_);
lean_dec_ref(v_indices_1166_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields(lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_){
_start:
{
lean_object* v_compFieldVars_1187_; lean_object* v_indices_1188_; lean_object* v_val_1189_; lean_object* v___x_1190_; size_t v_sz_1191_; size_t v___x_1192_; lean_object* v___x_1193_; 
v_compFieldVars_1187_ = lean_ctor_get(v_a_1181_, 4);
v_indices_1188_ = lean_ctor_get(v_a_1181_, 5);
v_val_1189_ = lean_ctor_get(v_a_1181_, 6);
v___x_1190_ = lean_box(0);
v_sz_1191_ = lean_array_size(v_compFieldVars_1187_);
v___x_1192_ = ((size_t)0ULL);
v___x_1193_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1188_, v_val_1189_, v_compFieldVars_1187_, v_sz_1191_, v___x_1192_, v___x_1190_, v_a_1181_, v_a_1182_, v_a_1183_, v_a_1184_, v_a_1185_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1200_ == 0)
{
lean_object* v_unused_1201_; 
v_unused_1201_ = lean_ctor_get(v___x_1193_, 0);
lean_dec(v_unused_1201_);
v___x_1195_ = v___x_1193_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_dec(v___x_1193_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
lean_ctor_set(v___x_1195_, 0, v___x_1190_);
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1190_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
else
{
return v___x_1193_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields___boxed(lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lean_Elab_ComputedFields_validateComputedFields(v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_);
lean_dec(v_a_1206_);
lean_dec_ref(v_a_1205_);
lean_dec(v_a_1204_);
lean_dec_ref(v_a_1203_);
lean_dec_ref(v_a_1202_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(lean_object* v_00_u03b1_1209_, lean_object* v_msg_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1210_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___boxed(lean_object* v_00_u03b1_1218_, lean_object* v_msg_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(v_00_u03b1_1218_, v_msg_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec_ref(v___y_1220_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(lean_object* v_k_1227_, lean_object* v___y_1228_, lean_object* v_b_1229_, lean_object* v_c_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v___x_1236_; 
lean_inc(v___y_1234_);
lean_inc_ref(v___y_1233_);
lean_inc(v___y_1232_);
lean_inc_ref(v___y_1231_);
lean_inc_ref(v___y_1228_);
v___x_1236_ = lean_apply_8(v_k_1227_, v_b_1229_, v_c_1230_, v___y_1228_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, lean_box(0));
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed(lean_object* v_k_1237_, lean_object* v___y_1238_, lean_object* v_b_1239_, lean_object* v_c_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(v_k_1237_, v___y_1238_, v_b_1239_, v_c_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec_ref(v___y_1238_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(lean_object* v_type_1247_, lean_object* v_k_1248_, uint8_t v_cleanupAnnotations_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___f_1256_; uint8_t v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; 
lean_inc_ref(v___y_1250_);
v___f_1256_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1256_, 0, v_k_1248_);
lean_closure_set(v___f_1256_, 1, v___y_1250_);
v___x_1257_ = 0;
v___x_1258_ = lean_box(0);
v___x_1259_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1257_, v___x_1258_, v_type_1247_, v___f_1256_, v_cleanupAnnotations_1249_, v___x_1257_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
if (lean_obj_tag(v___x_1259_) == 0)
{
return v___x_1259_;
}
else
{
lean_object* v_a_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1267_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1262_ = v___x_1259_;
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_a_1260_);
lean_dec(v___x_1259_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1267_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1265_; 
if (v_isShared_1263_ == 0)
{
v___x_1265_ = v___x_1262_;
goto v_reusejp_1264_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v_a_1260_);
v___x_1265_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1264_;
}
v_reusejp_1264_:
{
return v___x_1265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___boxed(lean_object* v_type_1268_, lean_object* v_k_1269_, lean_object* v_cleanupAnnotations_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1277_; lean_object* v_res_1278_; 
v_cleanupAnnotations_boxed_1277_ = lean_unbox(v_cleanupAnnotations_1270_);
v_res_1278_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1268_, v_k_1269_, v_cleanupAnnotations_boxed_1277_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec_ref(v___y_1271_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(lean_object* v_00_u03b1_1279_, lean_object* v_type_1280_, lean_object* v_k_1281_, uint8_t v_cleanupAnnotations_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1280_, v_k_1281_, v_cleanupAnnotations_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___boxed(lean_object* v_00_u03b1_1290_, lean_object* v_type_1291_, lean_object* v_k_1292_, lean_object* v_cleanupAnnotations_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1300_; lean_object* v_res_1301_; 
v_cleanupAnnotations_boxed_1300_ = lean_unbox(v_cleanupAnnotations_1293_);
v_res_1301_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(v_00_u03b1_1290_, v_type_1291_, v_k_1292_, v_cleanupAnnotations_boxed_1300_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
lean_dec_ref(v___y_1294_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(lean_object* v___x_1304_, lean_object* v_lparams_1305_, lean_object* v_head_1306_, lean_object* v_params_1307_, lean_object* v___x_1308_, lean_object* v_compFieldVars_1309_, lean_object* v_fields_1310_, lean_object* v_retTy_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v___x_1318_; lean_object* v_dummy_1319_; lean_object* v_nargs_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1318_ = l_Lean_mkConst(v___x_1304_, v_lparams_1305_);
v_dummy_1319_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4);
v_nargs_1320_ = l_Lean_Expr_getAppNumArgs(v_retTy_1311_);
lean_inc(v_nargs_1320_);
v___x_1321_ = lean_mk_array(v_nargs_1320_, v_dummy_1319_);
v___x_1322_ = lean_unsigned_to_nat(1u);
v___x_1323_ = lean_nat_sub(v_nargs_1320_, v___x_1322_);
lean_dec(v_nargs_1320_);
v___x_1324_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_retTy_1311_, v___x_1321_, v___x_1323_);
v___x_1325_ = l_Lean_mkAppN(v___x_1318_, v___x_1324_);
lean_dec_ref(v___x_1324_);
lean_inc(v_head_1306_);
v___x_1326_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_1306_, v___y_1315_, v___y_1316_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; uint8_t v___x_1328_; lean_object* v___y_1330_; uint8_t v___x_1354_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1328_ = 1;
v___x_1354_ = lean_unbox(v_a_1327_);
lean_dec(v_a_1327_);
if (v___x_1354_ == 0)
{
v___y_1330_ = v_compFieldVars_1309_;
goto v___jp_1329_;
}
else
{
lean_object* v___x_1355_; 
v___x_1355_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1330_ = v___x_1355_;
goto v___jp_1329_;
}
v___jp_1329_:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; uint8_t v___x_1333_; uint8_t v___x_1334_; lean_object* v___x_1335_; 
v___x_1331_ = l_Array_append___redArg(v_params_1307_, v___y_1330_);
v___x_1332_ = l_Array_append___redArg(v___x_1331_, v_fields_1310_);
v___x_1333_ = 0;
v___x_1334_ = 1;
v___x_1335_ = l_Lean_Meta_mkForallFVars(v___x_1332_, v___x_1325_, v___x_1333_, v___x_1328_, v___x_1328_, v___x_1334_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec_ref(v___x_1332_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1345_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1345_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1345_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1345_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1345_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1340_ = l_Lean_Name_append(v_head_1306_, v___x_1308_);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
lean_ctor_set(v___x_1341_, 1, v_a_1336_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v___x_1341_);
v___x_1343_ = v___x_1338_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1341_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
else
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1353_; 
lean_dec(v___x_1308_);
lean_dec(v_head_1306_);
v_a_1346_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1353_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1348_ = v___x_1335_;
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1335_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1353_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
lean_object* v___x_1351_; 
if (v_isShared_1349_ == 0)
{
v___x_1351_ = v___x_1348_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_a_1346_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v___x_1325_);
lean_dec(v___x_1308_);
lean_dec_ref(v_params_1307_);
lean_dec(v_head_1306_);
v_a_1356_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1326_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1326_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed(lean_object* v___x_1364_, lean_object* v_lparams_1365_, lean_object* v_head_1366_, lean_object* v_params_1367_, lean_object* v___x_1368_, lean_object* v_compFieldVars_1369_, lean_object* v_fields_1370_, lean_object* v_retTy_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(v___x_1364_, v_lparams_1365_, v_head_1366_, v_params_1367_, v___x_1368_, v_compFieldVars_1369_, v_fields_1370_, v_retTy_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec_ref(v_fields_1370_);
lean_dec_ref(v_compFieldVars_1369_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(lean_object* v___x_1382_, lean_object* v_lparams_1383_, lean_object* v_params_1384_, lean_object* v_compFieldVars_1385_, lean_object* v_x_1386_, lean_object* v_x_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
if (lean_obj_tag(v_x_1386_) == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
lean_dec_ref(v_compFieldVars_1385_);
lean_dec_ref(v_params_1384_);
lean_dec(v_lparams_1383_);
lean_dec(v___x_1382_);
v___x_1394_ = l_List_reverse___redArg(v_x_1387_);
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
return v___x_1395_;
}
else
{
lean_object* v_head_1396_; lean_object* v_tail_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1430_; 
v_head_1396_ = lean_ctor_get(v_x_1386_, 0);
v_tail_1397_ = lean_ctor_get(v_x_1386_, 1);
v_isSharedCheck_1430_ = !lean_is_exclusive(v_x_1386_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1399_ = v_x_1386_;
v_isShared_1400_ = v_isSharedCheck_1430_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_tail_1397_);
lean_inc(v_head_1396_);
lean_dec(v_x_1386_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1430_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; lean_object* v___f_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1401_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc_ref(v_compFieldVars_1385_);
lean_inc_ref(v_params_1384_);
lean_inc(v_head_1396_);
lean_inc_n(v_lparams_1383_, 2);
lean_inc(v___x_1382_);
v___f_1402_ = lean_alloc_closure((void*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed), 14, 6);
lean_closure_set(v___f_1402_, 0, v___x_1382_);
lean_closure_set(v___f_1402_, 1, v_lparams_1383_);
lean_closure_set(v___f_1402_, 2, v_head_1396_);
lean_closure_set(v___f_1402_, 3, v_params_1384_);
lean_closure_set(v___f_1402_, 4, v___x_1401_);
lean_closure_set(v___f_1402_, 5, v_compFieldVars_1385_);
v___x_1403_ = l_Lean_mkConst(v_head_1396_, v_lparams_1383_);
v___x_1404_ = l_Lean_mkAppN(v___x_1403_, v_params_1384_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
v___x_1405_ = lean_infer_type(v___x_1404_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1405_) == 0)
{
lean_object* v_a_1406_; uint8_t v___x_1407_; lean_object* v___x_1408_; 
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
lean_inc(v_a_1406_);
lean_dec_ref_known(v___x_1405_, 1);
v___x_1407_ = 0;
v___x_1408_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1406_, v___f_1402_, v___x_1407_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v_a_1409_; lean_object* v___x_1411_; 
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc(v_a_1409_);
lean_dec_ref_known(v___x_1408_, 1);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 1, v_x_1387_);
lean_ctor_set(v___x_1399_, 0, v_a_1409_);
v___x_1411_ = v___x_1399_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1409_);
lean_ctor_set(v_reuseFailAlloc_1413_, 1, v_x_1387_);
v___x_1411_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
v_x_1386_ = v_tail_1397_;
v_x_1387_ = v___x_1411_;
goto _start;
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_del_object(v___x_1399_);
lean_dec(v_tail_1397_);
lean_dec(v_x_1387_);
lean_dec_ref(v_compFieldVars_1385_);
lean_dec_ref(v_params_1384_);
lean_dec(v_lparams_1383_);
lean_dec(v___x_1382_);
v_a_1414_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1408_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1408_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec_ref(v___f_1402_);
lean_del_object(v___x_1399_);
lean_dec(v_tail_1397_);
lean_dec(v_x_1387_);
lean_dec_ref(v_compFieldVars_1385_);
lean_dec_ref(v_params_1384_);
lean_dec(v_lparams_1383_);
lean_dec(v___x_1382_);
v_a_1422_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1405_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1405_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___boxed(lean_object* v___x_1431_, lean_object* v_lparams_1432_, lean_object* v_params_1433_, lean_object* v_compFieldVars_1434_, lean_object* v_x_1435_, lean_object* v_x_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1431_, v_lparams_1432_, v_params_1433_, v_compFieldVars_1434_, v_x_1435_, v_x_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
lean_dec_ref(v___y_1437_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType(lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_){
_start:
{
lean_object* v_toInductiveVal_1450_; lean_object* v_toConstantVal_1451_; lean_object* v_lparams_1452_; lean_object* v_params_1453_; lean_object* v_compFieldVars_1454_; lean_object* v_numParams_1455_; lean_object* v_ctors_1456_; uint8_t v_isUnsafe_1457_; lean_object* v_name_1458_; lean_object* v_levelParams_1459_; lean_object* v_type_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v_toInductiveVal_1450_ = lean_ctor_get(v_a_1444_, 0);
v_toConstantVal_1451_ = lean_ctor_get(v_toInductiveVal_1450_, 0);
v_lparams_1452_ = lean_ctor_get(v_a_1444_, 1);
v_params_1453_ = lean_ctor_get(v_a_1444_, 2);
v_compFieldVars_1454_ = lean_ctor_get(v_a_1444_, 4);
v_numParams_1455_ = lean_ctor_get(v_toInductiveVal_1450_, 1);
v_ctors_1456_ = lean_ctor_get(v_toInductiveVal_1450_, 4);
v_isUnsafe_1457_ = lean_ctor_get_uint8(v_toInductiveVal_1450_, sizeof(void*)*6 + 1);
v_name_1458_ = lean_ctor_get(v_toConstantVal_1451_, 0);
v_levelParams_1459_ = lean_ctor_get(v_toConstantVal_1451_, 1);
v_type_1460_ = lean_ctor_get(v_toConstantVal_1451_, 2);
v___x_1461_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_1458_);
v___x_1462_ = l_Lean_Name_append(v_name_1458_, v___x_1461_);
v___x_1463_ = lean_box(0);
lean_inc(v_ctors_1456_);
lean_inc_ref(v_compFieldVars_1454_);
lean_inc_ref(v_params_1453_);
lean_inc(v_lparams_1452_);
lean_inc(v___x_1462_);
v___x_1464_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1462_, v_lparams_1452_, v_params_1453_, v_compFieldVars_1454_, v_ctors_1456_, v___x_1463_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_, v_a_1448_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; lean_object* v___x_1470_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
lean_inc_ref(v_type_1460_);
lean_inc(v___x_1462_);
v___x_1466_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1462_);
lean_ctor_set(v___x_1466_, 1, v_type_1460_);
lean_ctor_set(v___x_1466_, 2, v_a_1465_);
v___x_1467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1467_, 0, v___x_1466_);
lean_ctor_set(v___x_1467_, 1, v___x_1463_);
lean_inc(v_numParams_1455_);
lean_inc(v_levelParams_1459_);
v___x_1468_ = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(v___x_1468_, 0, v_levelParams_1459_);
lean_ctor_set(v___x_1468_, 1, v_numParams_1455_);
lean_ctor_set(v___x_1468_, 2, v___x_1467_);
lean_ctor_set_uint8(v___x_1468_, sizeof(void*)*3, v_isUnsafe_1457_);
v___x_1469_ = 0;
v___x_1470_ = l_Lean_addDecl(v___x_1468_, v___x_1469_, v_a_1447_, v_a_1448_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1477_ == 0)
{
lean_object* v_unused_1478_; 
v_unused_1478_ = lean_ctor_get(v___x_1470_, 0);
lean_dec(v_unused_1478_);
v___x_1472_ = v___x_1470_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_dec(v___x_1470_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
lean_ctor_set(v___x_1472_, 0, v___x_1462_);
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v___x_1462_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec(v___x_1462_);
v_a_1479_ = lean_ctor_get(v___x_1470_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1470_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1470_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1470_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec(v___x_1462_);
v_a_1487_ = lean_ctor_get(v___x_1464_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1464_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1464_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1464_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType___boxed(lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_Elab_ComputedFields_mkImplType(v_a_1495_, v_a_1496_, v_a_1497_, v_a_1498_, v_a_1499_);
lean_dec(v_a_1499_);
lean_dec_ref(v_a_1498_);
lean_dec(v_a_1497_);
lean_dec_ref(v_a_1496_);
lean_dec_ref(v_a_1495_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(lean_object* v_k_1502_, lean_object* v___y_1503_, lean_object* v_b_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_){
_start:
{
lean_object* v___x_1510_; 
lean_inc(v___y_1508_);
lean_inc_ref(v___y_1507_);
lean_inc(v___y_1506_);
lean_inc_ref(v___y_1505_);
lean_inc_ref(v___y_1503_);
v___x_1510_ = lean_apply_7(v_k_1502_, v_b_1504_, v___y_1503_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, lean_box(0));
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed(lean_object* v_k_1511_, lean_object* v___y_1512_, lean_object* v_b_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(v_k_1511_, v___y_1512_, v_b_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
lean_dec(v___y_1515_);
lean_dec_ref(v___y_1514_);
lean_dec_ref(v___y_1512_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(lean_object* v_name_1520_, lean_object* v_type_1521_, lean_object* v_val_1522_, lean_object* v_k_1523_, uint8_t v_nondep_1524_, uint8_t v_kind_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___f_1532_; lean_object* v___x_1533_; 
lean_inc_ref(v___y_1526_);
v___f_1532_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1532_, 0, v_k_1523_);
lean_closure_set(v___f_1532_, 1, v___y_1526_);
v___x_1533_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1520_, v_type_1521_, v_val_1522_, v___f_1532_, v_nondep_1524_, v_kind_1525_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
if (lean_obj_tag(v___x_1533_) == 0)
{
return v___x_1533_;
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1533_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1533_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___boxed(lean_object* v_name_1542_, lean_object* v_type_1543_, lean_object* v_val_1544_, lean_object* v_k_1545_, lean_object* v_nondep_1546_, lean_object* v_kind_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
uint8_t v_nondep_boxed_1554_; uint8_t v_kind_boxed_1555_; lean_object* v_res_1556_; 
v_nondep_boxed_1554_ = lean_unbox(v_nondep_1546_);
v_kind_boxed_1555_ = lean_unbox(v_kind_1547_);
v_res_1556_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1542_, v_type_1543_, v_val_1544_, v_k_1545_, v_nondep_boxed_1554_, v_kind_boxed_1555_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec_ref(v___y_1548_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(lean_object* v_00_u03b1_1557_, lean_object* v_name_1558_, lean_object* v_type_1559_, lean_object* v_val_1560_, lean_object* v_k_1561_, uint8_t v_nondep_1562_, uint8_t v_kind_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1558_, v_type_1559_, v_val_1560_, v_k_1561_, v_nondep_1562_, v_kind_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___boxed(lean_object* v_00_u03b1_1571_, lean_object* v_name_1572_, lean_object* v_type_1573_, lean_object* v_val_1574_, lean_object* v_k_1575_, lean_object* v_nondep_1576_, lean_object* v_kind_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
uint8_t v_nondep_boxed_1584_; uint8_t v_kind_boxed_1585_; lean_object* v_res_1586_; 
v_nondep_boxed_1584_ = lean_unbox(v_nondep_1576_);
v_kind_boxed_1585_ = lean_unbox(v_kind_1577_);
v_res_1586_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(v_00_u03b1_1571_, v_name_1572_, v_type_1573_, v_val_1574_, v_k_1575_, v_nondep_boxed_1584_, v_kind_boxed_1585_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec_ref(v___y_1578_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(lean_object* v___x_1587_, lean_object* v___x_1588_, lean_object* v_majorImpl_1589_, lean_object* v_m_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; uint8_t v___x_1602_; uint8_t v___x_1603_; uint8_t v___x_1604_; lean_object* v___x_1605_; 
v___x_1597_ = lean_mk_empty_array_with_capacity(v___x_1587_);
lean_inc_ref(v_m_1590_);
lean_inc_ref(v___x_1597_);
v___x_1598_ = lean_array_push(v___x_1597_, v_m_1590_);
v___x_1599_ = l_Array_append___redArg(v___x_1598_, v___x_1588_);
v___x_1600_ = lean_array_push(v___x_1597_, v_majorImpl_1589_);
v___x_1601_ = l_Array_append___redArg(v___x_1599_, v___x_1600_);
lean_dec_ref(v___x_1600_);
v___x_1602_ = 0;
v___x_1603_ = 1;
v___x_1604_ = 1;
v___x_1605_ = l_Lean_Meta_mkLambdaFVars(v___x_1601_, v_m_1590_, v___x_1602_, v___x_1603_, v___x_1602_, v___x_1603_, v___x_1604_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec_ref(v___x_1601_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed(lean_object* v___x_1606_, lean_object* v___x_1607_, lean_object* v_majorImpl_1608_, lean_object* v_m_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(v___x_1606_, v___x_1607_, v_majorImpl_1608_, v_m_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec_ref(v___y_1610_);
lean_dec_ref(v___x_1607_);
lean_dec(v___x_1606_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(lean_object* v___x_1620_, lean_object* v___x_1621_, lean_object* v_constMotive_1622_, lean_object* v_majorImpl_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v___f_1630_; lean_object* v___x_1631_; 
v___f_1630_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1630_, 0, v___x_1620_);
lean_closure_set(v___f_1630_, 1, v___x_1621_);
lean_closure_set(v___f_1630_, 2, v_majorImpl_1623_);
lean_inc(v___y_1628_);
lean_inc_ref(v___y_1627_);
lean_inc(v___y_1626_);
lean_inc_ref(v___y_1625_);
lean_inc_ref(v_constMotive_1622_);
v___x_1631_ = lean_infer_type(v_constMotive_1622_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1633_; uint8_t v___x_1634_; uint8_t v___x_1635_; lean_object* v___x_1636_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1631_, 1);
v___x_1633_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1));
v___x_1634_ = 0;
v___x_1635_ = 0;
v___x_1636_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v___x_1633_, v_a_1632_, v_constMotive_1622_, v___f_1630_, v___x_1634_, v___x_1635_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_);
return v___x_1636_;
}
else
{
lean_dec_ref(v___f_1630_);
lean_dec_ref(v_constMotive_1622_);
return v___x_1631_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed(lean_object* v___x_1637_, lean_object* v___x_1638_, lean_object* v_constMotive_1639_, lean_object* v_majorImpl_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_){
_start:
{
lean_object* v_res_1647_; 
v_res_1647_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(v___x_1637_, v___x_1638_, v_constMotive_1639_, v_majorImpl_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
lean_dec_ref(v___y_1642_);
lean_dec_ref(v___y_1641_);
return v_res_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(lean_object* v_name_1648_, uint8_t v_bi_1649_, lean_object* v_type_1650_, lean_object* v_k_1651_, uint8_t v_kind_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v___f_1659_; lean_object* v___x_1660_; 
lean_inc_ref(v___y_1653_);
v___f_1659_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1659_, 0, v_k_1651_);
lean_closure_set(v___f_1659_, 1, v___y_1653_);
v___x_1660_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1648_, v_bi_1649_, v_type_1650_, v___f_1659_, v_kind_1652_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_);
if (lean_obj_tag(v___x_1660_) == 0)
{
return v___x_1660_;
}
else
{
lean_object* v_a_1661_; lean_object* v___x_1663_; uint8_t v_isShared_1664_; uint8_t v_isSharedCheck_1668_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1663_ = v___x_1660_;
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
else
{
lean_inc(v_a_1661_);
lean_dec(v___x_1660_);
v___x_1663_ = lean_box(0);
v_isShared_1664_ = v_isSharedCheck_1668_;
goto v_resetjp_1662_;
}
v_resetjp_1662_:
{
lean_object* v___x_1666_; 
if (v_isShared_1664_ == 0)
{
v___x_1666_ = v___x_1663_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_a_1661_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg___boxed(lean_object* v_name_1669_, lean_object* v_bi_1670_, lean_object* v_type_1671_, lean_object* v_k_1672_, lean_object* v_kind_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
uint8_t v_bi_boxed_1680_; uint8_t v_kind_boxed_1681_; lean_object* v_res_1682_; 
v_bi_boxed_1680_ = lean_unbox(v_bi_1670_);
v_kind_boxed_1681_ = lean_unbox(v_kind_1673_);
v_res_1682_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1669_, v_bi_boxed_1680_, v_type_1671_, v_k_1672_, v_kind_boxed_1681_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec_ref(v___y_1674_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(lean_object* v_name_1683_, lean_object* v_type_1684_, lean_object* v_k_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_){
_start:
{
uint8_t v___x_1692_; uint8_t v___x_1693_; lean_object* v___x_1694_; 
v___x_1692_ = 0;
v___x_1693_ = 0;
v___x_1694_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1683_, v___x_1692_, v_type_1684_, v_k_1685_, v___x_1693_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_);
return v___x_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg___boxed(lean_object* v_name_1695_, lean_object* v_type_1696_, lean_object* v_k_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_1695_, v_type_1696_, v_k_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v___y_1698_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
if (lean_obj_tag(v_a_1705_) == 0)
{
lean_object* v___x_1707_; 
v___x_1707_ = l_List_reverse___redArg(v_a_1706_);
return v___x_1707_;
}
else
{
lean_object* v_head_1708_; lean_object* v_tail_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1718_; 
v_head_1708_ = lean_ctor_get(v_a_1705_, 0);
v_tail_1709_ = lean_ctor_get(v_a_1705_, 1);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_a_1705_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1711_ = v_a_1705_;
v_isShared_1712_ = v_isSharedCheck_1718_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_tail_1709_);
lean_inc(v_head_1708_);
lean_dec(v_a_1705_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1718_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1715_; 
v___x_1713_ = l_Lean_mkLevelParam(v_head_1708_);
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 1, v_a_1706_);
lean_ctor_set(v___x_1711_, 0, v___x_1713_);
v___x_1715_ = v___x_1711_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v___x_1713_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v_a_1706_);
v___x_1715_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
v_a_1705_ = v_tail_1709_;
v_a_1706_ = v___x_1715_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(lean_object* v_a_1719_, lean_object* v_b_1720_){
_start:
{
lean_object* v_array_1721_; lean_object* v_start_1722_; lean_object* v_stop_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1736_; 
v_array_1721_ = lean_ctor_get(v_a_1719_, 0);
v_start_1722_ = lean_ctor_get(v_a_1719_, 1);
v_stop_1723_ = lean_ctor_get(v_a_1719_, 2);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_a_1719_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1725_ = v_a_1719_;
v_isShared_1726_ = v_isSharedCheck_1736_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_stop_1723_);
lean_inc(v_start_1722_);
lean_inc(v_array_1721_);
lean_dec(v_a_1719_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1736_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
uint8_t v___x_1727_; 
v___x_1727_ = lean_nat_dec_lt(v_start_1722_, v_stop_1723_);
if (v___x_1727_ == 0)
{
lean_del_object(v___x_1725_);
lean_dec(v_stop_1723_);
lean_dec(v_start_1722_);
lean_dec_ref(v_array_1721_);
return v_b_1720_;
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1731_; 
v___x_1728_ = lean_unsigned_to_nat(1u);
v___x_1729_ = lean_nat_add(v_start_1722_, v___x_1728_);
lean_inc_ref(v_array_1721_);
if (v_isShared_1726_ == 0)
{
lean_ctor_set(v___x_1725_, 1, v___x_1729_);
v___x_1731_ = v___x_1725_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_array_1721_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v___x_1729_);
lean_ctor_set(v_reuseFailAlloc_1735_, 2, v_stop_1723_);
v___x_1731_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = lean_array_fget(v_array_1721_, v_start_1722_);
lean_dec(v_start_1722_);
lean_dec_ref(v_array_1721_);
v___x_1733_ = lean_array_push(v_b_1720_, v___x_1732_);
v_a_1719_ = v___x_1731_;
v_b_1720_ = v___x_1733_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(lean_object* v_b_1737_, lean_object* v_a_1738_, lean_object* v_constMotive_1739_, uint8_t v___x_1740_, lean_object* v_compFieldVars_1741_, lean_object* v_args_1742_, lean_object* v_x_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Lean_Elab_ComputedFields_isScalarField(v_b_1737_, v___y_1747_, v___y_1748_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1750_, 1);
v___x_1752_ = l_Lean_mkAppN(v_a_1738_, v_args_1742_);
v___x_1753_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_constMotive_1739_, v___x_1752_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___y_1756_; uint8_t v___x_1761_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_a_1754_);
lean_dec_ref_known(v___x_1753_, 1);
v___x_1761_ = lean_unbox(v_a_1751_);
lean_dec(v_a_1751_);
if (v___x_1761_ == 0)
{
v___y_1756_ = v_compFieldVars_1741_;
goto v___jp_1755_;
}
else
{
lean_object* v___x_1762_; 
lean_dec_ref(v_compFieldVars_1741_);
v___x_1762_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1756_ = v___x_1762_;
goto v___jp_1755_;
}
v___jp_1755_:
{
lean_object* v___x_1757_; uint8_t v___x_1758_; uint8_t v___x_1759_; lean_object* v___x_1760_; 
v___x_1757_ = l_Array_append___redArg(v___y_1756_, v_args_1742_);
v___x_1758_ = 0;
v___x_1759_ = 1;
v___x_1760_ = l_Lean_Meta_mkLambdaFVars(v___x_1757_, v_a_1754_, v___x_1758_, v___x_1740_, v___x_1758_, v___x_1740_, v___x_1759_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_);
lean_dec_ref(v___x_1757_);
return v___x_1760_;
}
}
else
{
lean_dec(v_a_1751_);
lean_dec_ref(v_compFieldVars_1741_);
return v___x_1753_;
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec_ref(v_compFieldVars_1741_);
lean_dec_ref(v_constMotive_1739_);
lean_dec_ref(v_a_1738_);
v_a_1763_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1750_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1750_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed(lean_object* v_b_1771_, lean_object* v_a_1772_, lean_object* v_constMotive_1773_, lean_object* v___x_1774_, lean_object* v_compFieldVars_1775_, lean_object* v_args_1776_, lean_object* v_x_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
uint8_t v___x_12526__boxed_1784_; lean_object* v_res_1785_; 
v___x_12526__boxed_1784_ = lean_unbox(v___x_1774_);
v_res_1785_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(v_b_1771_, v_a_1772_, v_constMotive_1773_, v___x_12526__boxed_1784_, v_compFieldVars_1775_, v_args_1776_, v_x_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v_x_1777_);
lean_dec_ref(v_args_1776_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(lean_object* v_constMotive_1786_, lean_object* v_compFieldVars_1787_, lean_object* v_as_1788_, lean_object* v_bs_1789_, lean_object* v_i_1790_, lean_object* v_cs_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v___y_1799_; lean_object* v___x_1813_; uint8_t v___x_1814_; 
v___x_1813_ = lean_array_get_size(v_as_1788_);
v___x_1814_ = lean_nat_dec_lt(v_i_1790_, v___x_1813_);
if (v___x_1814_ == 0)
{
lean_object* v___x_1815_; 
lean_dec(v_i_1790_);
lean_dec_ref(v_compFieldVars_1787_);
lean_dec_ref(v_constMotive_1786_);
v___x_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1815_, 0, v_cs_1791_);
return v___x_1815_;
}
else
{
lean_object* v___x_1816_; uint8_t v___x_1817_; 
v___x_1816_ = lean_array_get_size(v_bs_1789_);
v___x_1817_ = lean_nat_dec_lt(v_i_1790_, v___x_1816_);
if (v___x_1817_ == 0)
{
lean_object* v___x_1818_; 
lean_dec(v_i_1790_);
lean_dec_ref(v_compFieldVars_1787_);
lean_dec_ref(v_constMotive_1786_);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v_cs_1791_);
return v___x_1818_;
}
else
{
lean_object* v_a_1819_; lean_object* v_b_1820_; lean_object* v___x_1821_; lean_object* v___f_1822_; lean_object* v___x_1823_; 
v_a_1819_ = lean_array_fget_borrowed(v_as_1788_, v_i_1790_);
v_b_1820_ = lean_array_fget_borrowed(v_bs_1789_, v_i_1790_);
v___x_1821_ = lean_box(v___x_1817_);
lean_inc_ref(v_compFieldVars_1787_);
lean_inc_ref(v_constMotive_1786_);
lean_inc_n(v_a_1819_, 2);
lean_inc(v_b_1820_);
v___f_1822_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1822_, 0, v_b_1820_);
lean_closure_set(v___f_1822_, 1, v_a_1819_);
lean_closure_set(v___f_1822_, 2, v_constMotive_1786_);
lean_closure_set(v___f_1822_, 3, v___x_1821_);
lean_closure_set(v___f_1822_, 4, v_compFieldVars_1787_);
lean_inc(v___y_1796_);
lean_inc_ref(v___y_1795_);
lean_inc(v___y_1794_);
lean_inc_ref(v___y_1793_);
v___x_1823_ = lean_infer_type(v_a_1819_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; uint8_t v___x_1825_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = 0;
v___x_1826_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1824_, v___f_1822_, v___x_1825_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
v___y_1799_ = v___x_1826_;
goto v___jp_1798_;
}
else
{
lean_dec_ref(v___f_1822_);
v___y_1799_ = v___x_1823_;
goto v___jp_1798_;
}
}
}
v___jp_1798_:
{
if (lean_obj_tag(v___y_1799_) == 0)
{
lean_object* v_a_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v_a_1800_ = lean_ctor_get(v___y_1799_, 0);
lean_inc(v_a_1800_);
lean_dec_ref_known(v___y_1799_, 1);
v___x_1801_ = lean_unsigned_to_nat(1u);
v___x_1802_ = lean_nat_add(v_i_1790_, v___x_1801_);
lean_dec(v_i_1790_);
v___x_1803_ = lean_array_push(v_cs_1791_, v_a_1800_);
v_i_1790_ = v___x_1802_;
v_cs_1791_ = v___x_1803_;
goto _start;
}
else
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1812_; 
lean_dec_ref(v_cs_1791_);
lean_dec(v_i_1790_);
lean_dec_ref(v_compFieldVars_1787_);
lean_dec_ref(v_constMotive_1786_);
v_a_1805_ = lean_ctor_get(v___y_1799_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___y_1799_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1807_ = v___y_1799_;
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___y_1799_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1812_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
lean_object* v___x_1810_; 
if (v_isShared_1808_ == 0)
{
v___x_1810_ = v___x_1807_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v_a_1805_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___boxed(lean_object* v_constMotive_1827_, lean_object* v_compFieldVars_1828_, lean_object* v_as_1829_, lean_object* v_bs_1830_, lean_object* v_i_1831_, lean_object* v_cs_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1827_, v_compFieldVars_1828_, v_as_1829_, v_bs_1830_, v_i_1831_, v_cs_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec_ref(v_bs_1830_);
lean_dec_ref(v_as_1829_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(lean_object* v_numIndices_1843_, lean_object* v___x_1844_, lean_object* v___x_1845_, lean_object* v_lparams_1846_, lean_object* v_params_1847_, lean_object* v_ctors_1848_, lean_object* v_compFieldVars_1849_, lean_object* v_levelParams_1850_, lean_object* v_xs_1851_, lean_object* v_constMotive_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___f_1865_; lean_object* v___x_1866_; lean_object* v_lower_1868_; lean_object* v_upper_1869_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; 
v___x_1859_ = lean_unsigned_to_nat(1u);
v___x_1860_ = lean_nat_add(v_numIndices_1843_, v___x_1859_);
lean_inc(v___x_1860_);
lean_inc_ref(v_xs_1851_);
v___x_1861_ = l_Array_toSubarray___redArg(v_xs_1851_, v___x_1859_, v___x_1860_);
v___x_1862_ = lean_unsigned_to_nat(0u);
v___x_1863_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_1864_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1861_, v___x_1863_);
lean_inc_ref(v_constMotive_1852_);
lean_inc_ref(v___x_1864_);
v___f_1865_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1865_, 0, v___x_1859_);
lean_closure_set(v___f_1865_, 1, v___x_1864_);
lean_closure_set(v___f_1865_, 2, v_constMotive_1852_);
v___x_1866_ = lean_array_get_borrowed(v___x_1844_, v_xs_1851_, v___x_1860_);
lean_dec(v___x_1860_);
v___x_1908_ = lean_unsigned_to_nat(2u);
v___x_1909_ = lean_nat_add(v_numIndices_1843_, v___x_1908_);
v___x_1910_ = lean_array_get_size(v_xs_1851_);
v___x_1911_ = lean_nat_dec_le(v___x_1909_, v___x_1862_);
if (v___x_1911_ == 0)
{
v_lower_1868_ = v___x_1909_;
v_upper_1869_ = v___x_1910_;
goto v___jp_1867_;
}
else
{
lean_dec(v___x_1909_);
v_lower_1868_ = v___x_1862_;
v_upper_1869_ = v___x_1910_;
goto v___jp_1867_;
}
v___jp_1867_:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
lean_inc_ref(v_xs_1851_);
v___x_1870_ = l_Array_toSubarray___redArg(v_xs_1851_, v_lower_1868_, v_upper_1869_);
v___x_1871_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1870_, v___x_1863_);
lean_inc(v___x_1845_);
v___x_1872_ = l_Lean_mkConst(v___x_1845_, v_lparams_1846_);
lean_inc_ref(v_params_1847_);
v___x_1873_ = l_Array_append___redArg(v_params_1847_, v___x_1864_);
v___x_1874_ = l_Lean_mkAppN(v___x_1872_, v___x_1873_);
lean_dec_ref(v___x_1873_);
v___x_1875_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1));
lean_inc_ref(v___x_1874_);
v___x_1876_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_1875_, v___x_1874_, v___f_1865_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
if (lean_obj_tag(v___x_1876_) == 0)
{
lean_object* v_a_1877_; lean_object* v___x_1878_; 
v_a_1877_ = lean_ctor_get(v___x_1876_, 0);
lean_inc(v_a_1877_);
lean_dec_ref_known(v___x_1876_, 1);
lean_inc(v___x_1866_);
v___x_1878_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v___x_1874_, v___x_1866_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_object* v_a_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v_a_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_a_1879_);
lean_dec_ref_known(v___x_1878_, 1);
v___x_1880_ = lean_array_mk(v_ctors_1848_);
v___x_1881_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1852_, v_compFieldVars_1849_, v___x_1871_, v___x_1880_, v___x_1862_, v___x_1863_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
lean_dec_ref(v___x_1880_);
lean_dec_ref(v___x_1871_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; uint8_t v___x_1897_; uint8_t v___x_1898_; lean_object* v___x_1899_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1881_, 1);
lean_inc_ref(v_params_1847_);
v___x_1883_ = l_Array_append___redArg(v_params_1847_, v_xs_1851_);
lean_dec_ref(v_xs_1851_);
v___x_1884_ = l_Lean_mkCasesOnName(v___x_1845_);
v___x_1885_ = lean_box(0);
v___x_1886_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_1850_, v___x_1885_);
v___x_1887_ = l_Lean_mkConst(v___x_1884_, v___x_1886_);
v___x_1888_ = lean_mk_empty_array_with_capacity(v___x_1859_);
lean_inc_ref(v___x_1888_);
v___x_1889_ = lean_array_push(v___x_1888_, v_a_1877_);
v___x_1890_ = l_Array_append___redArg(v_params_1847_, v___x_1889_);
lean_dec_ref(v___x_1889_);
v___x_1891_ = l_Array_append___redArg(v___x_1890_, v___x_1864_);
lean_dec_ref(v___x_1864_);
v___x_1892_ = lean_array_push(v___x_1888_, v_a_1879_);
v___x_1893_ = l_Array_append___redArg(v___x_1891_, v___x_1892_);
lean_dec_ref(v___x_1892_);
v___x_1894_ = l_Array_append___redArg(v___x_1893_, v_a_1882_);
lean_dec(v_a_1882_);
v___x_1895_ = l_Lean_mkAppN(v___x_1887_, v___x_1894_);
lean_dec_ref(v___x_1894_);
v___x_1896_ = 0;
v___x_1897_ = 1;
v___x_1898_ = 1;
v___x_1899_ = l_Lean_Meta_mkLambdaFVars(v___x_1883_, v___x_1895_, v___x_1896_, v___x_1897_, v___x_1896_, v___x_1897_, v___x_1898_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
lean_dec_ref(v___x_1883_);
return v___x_1899_;
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
lean_dec(v_a_1879_);
lean_dec(v_a_1877_);
lean_dec_ref(v___x_1864_);
lean_dec_ref(v_xs_1851_);
lean_dec(v_levelParams_1850_);
lean_dec_ref(v_params_1847_);
lean_dec(v___x_1845_);
v_a_1900_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1902_ = v___x_1881_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1881_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_a_1900_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
}
else
{
lean_dec(v_a_1877_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___x_1864_);
lean_dec_ref(v_constMotive_1852_);
lean_dec_ref(v_xs_1851_);
lean_dec(v_levelParams_1850_);
lean_dec_ref(v_compFieldVars_1849_);
lean_dec(v_ctors_1848_);
lean_dec_ref(v_params_1847_);
lean_dec(v___x_1845_);
return v___x_1878_;
}
}
else
{
lean_dec_ref(v___x_1874_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___x_1864_);
lean_dec_ref(v_constMotive_1852_);
lean_dec_ref(v_xs_1851_);
lean_dec(v_levelParams_1850_);
lean_dec_ref(v_compFieldVars_1849_);
lean_dec(v_ctors_1848_);
lean_dec_ref(v_params_1847_);
lean_dec(v___x_1845_);
return v___x_1876_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed(lean_object* v_numIndices_1912_, lean_object* v___x_1913_, lean_object* v___x_1914_, lean_object* v_lparams_1915_, lean_object* v_params_1916_, lean_object* v_ctors_1917_, lean_object* v_compFieldVars_1918_, lean_object* v_levelParams_1919_, lean_object* v_xs_1920_, lean_object* v_constMotive_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(v_numIndices_1912_, v___x_1913_, v___x_1914_, v_lparams_1915_, v_params_1916_, v_ctors_1917_, v_compFieldVars_1918_, v_levelParams_1919_, v_xs_1920_, v_constMotive_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec_ref(v___x_1913_);
lean_dec(v_numIndices_1912_);
return v_res_1928_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1931_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
return v___x_1932_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1933_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1934_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1934_, 0, v___x_1933_);
lean_ctor_set(v___x_1934_, 1, v___x_1933_);
lean_ctor_set(v___x_1934_, 2, v___x_1933_);
lean_ctor_set(v___x_1934_, 3, v___x_1933_);
lean_ctor_set(v___x_1934_, 4, v___x_1933_);
lean_ctor_set(v___x_1934_, 5, v___x_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(lean_object* v_env_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v___x_1939_; lean_object* v_nextMacroScope_1940_; lean_object* v_ngen_1941_; lean_object* v_auxDeclNGen_1942_; lean_object* v_traceState_1943_; lean_object* v_recordedDeps_1944_; lean_object* v_messages_1945_; lean_object* v_infoState_1946_; lean_object* v_snapshotTasks_1947_; lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1973_; 
v___x_1939_ = lean_st_ref_take(v___y_1937_);
v_nextMacroScope_1940_ = lean_ctor_get(v___x_1939_, 1);
v_ngen_1941_ = lean_ctor_get(v___x_1939_, 2);
v_auxDeclNGen_1942_ = lean_ctor_get(v___x_1939_, 3);
v_traceState_1943_ = lean_ctor_get(v___x_1939_, 4);
v_recordedDeps_1944_ = lean_ctor_get(v___x_1939_, 6);
v_messages_1945_ = lean_ctor_get(v___x_1939_, 7);
v_infoState_1946_ = lean_ctor_get(v___x_1939_, 8);
v_snapshotTasks_1947_ = lean_ctor_get(v___x_1939_, 9);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1939_);
if (v_isSharedCheck_1973_ == 0)
{
lean_object* v_unused_1974_; lean_object* v_unused_1975_; 
v_unused_1974_ = lean_ctor_get(v___x_1939_, 5);
lean_dec(v_unused_1974_);
v_unused_1975_ = lean_ctor_get(v___x_1939_, 0);
lean_dec(v_unused_1975_);
v___x_1949_ = v___x_1939_;
v_isShared_1950_ = v_isSharedCheck_1973_;
goto v_resetjp_1948_;
}
else
{
lean_inc(v_snapshotTasks_1947_);
lean_inc(v_infoState_1946_);
lean_inc(v_messages_1945_);
lean_inc(v_recordedDeps_1944_);
lean_inc(v_traceState_1943_);
lean_inc(v_auxDeclNGen_1942_);
lean_inc(v_ngen_1941_);
lean_inc(v_nextMacroScope_1940_);
lean_dec(v___x_1939_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1973_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1951_; lean_object* v___x_1953_; 
v___x_1951_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 5, v___x_1951_);
lean_ctor_set(v___x_1949_, 0, v_env_1935_);
v___x_1953_ = v___x_1949_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_env_1935_);
lean_ctor_set(v_reuseFailAlloc_1972_, 1, v_nextMacroScope_1940_);
lean_ctor_set(v_reuseFailAlloc_1972_, 2, v_ngen_1941_);
lean_ctor_set(v_reuseFailAlloc_1972_, 3, v_auxDeclNGen_1942_);
lean_ctor_set(v_reuseFailAlloc_1972_, 4, v_traceState_1943_);
lean_ctor_set(v_reuseFailAlloc_1972_, 5, v___x_1951_);
lean_ctor_set(v_reuseFailAlloc_1972_, 6, v_recordedDeps_1944_);
lean_ctor_set(v_reuseFailAlloc_1972_, 7, v_messages_1945_);
lean_ctor_set(v_reuseFailAlloc_1972_, 8, v_infoState_1946_);
lean_ctor_set(v_reuseFailAlloc_1972_, 9, v_snapshotTasks_1947_);
v___x_1953_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v_mctx_1956_; lean_object* v_zetaDeltaFVarIds_1957_; lean_object* v_postponed_1958_; lean_object* v_diag_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1970_; 
v___x_1954_ = lean_st_ref_put(v___y_1937_, v___x_1953_);
v___x_1955_ = lean_st_ref_take(v___y_1936_);
v_mctx_1956_ = lean_ctor_get(v___x_1955_, 0);
v_zetaDeltaFVarIds_1957_ = lean_ctor_get(v___x_1955_, 2);
v_postponed_1958_ = lean_ctor_get(v___x_1955_, 3);
v_diag_1959_ = lean_ctor_get(v___x_1955_, 4);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1970_ == 0)
{
lean_object* v_unused_1971_; 
v_unused_1971_ = lean_ctor_get(v___x_1955_, 1);
lean_dec(v_unused_1971_);
v___x_1961_ = v___x_1955_;
v_isShared_1962_ = v_isSharedCheck_1970_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_diag_1959_);
lean_inc(v_postponed_1958_);
lean_inc(v_zetaDeltaFVarIds_1957_);
lean_inc(v_mctx_1956_);
lean_dec(v___x_1955_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1970_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1963_ = lean_box(0);
v___x_1964_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 1, v___x_1964_);
v___x_1966_ = v___x_1961_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_mctx_1956_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1969_, 2, v_zetaDeltaFVarIds_1957_);
lean_ctor_set(v_reuseFailAlloc_1969_, 3, v_postponed_1958_);
lean_ctor_set(v_reuseFailAlloc_1969_, 4, v_diag_1959_);
v___x_1966_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = lean_st_ref_put(v___y_1936_, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1963_);
return v___x_1968_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___boxed(lean_object* v_env_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec(v___y_1977_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(lean_object* v_declName_1981_, lean_object* v_impName_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v___x_1989_; lean_object* v_env_1990_; lean_object* v___x_1991_; 
v___x_1989_ = lean_st_ref_get(v___y_1987_);
v_env_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc_ref(v_env_1990_);
lean_dec(v___x_1989_);
v___x_1991_ = l_Lean_Compiler_setImplementedBy(v_env_1990_, v_declName_1981_, v_impName_1982_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2001_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1994_ = v___x_1991_;
v_isShared_1995_ = v_isSharedCheck_2001_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2001_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set_tag(v___x_1994_, 3);
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = l_Lean_MessageData_ofFormat(v___x_1997_);
v___x_1999_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1998_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_);
return v___x_1999_;
}
}
}
else
{
lean_object* v_a_2002_; lean_object* v___x_2003_; 
v_a_2002_ = lean_ctor_get(v___x_1991_, 0);
lean_inc(v_a_2002_);
lean_dec_ref_known(v___x_1991_, 1);
v___x_2003_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_a_2002_, v___y_1985_, v___y_1987_);
return v___x_2003_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6___boxed(lean_object* v_declName_2004_, lean_object* v_impName_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_declName_2004_, v_impName_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec_ref(v___y_2006_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(lean_object* v_msg_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v_toApplicative_2022_; lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2084_; 
v___x_2020_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_2021_ = l_StateRefT_x27_instMonad___redArg(v___x_2020_);
v_toApplicative_2022_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; 
v_unused_2085_ = lean_ctor_get(v___x_2021_, 1);
lean_dec(v_unused_2085_);
v___x_2024_ = v___x_2021_;
v_isShared_2025_ = v_isSharedCheck_2084_;
goto v_resetjp_2023_;
}
else
{
lean_inc(v_toApplicative_2022_);
lean_dec(v___x_2021_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2084_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v_toFunctor_2026_; lean_object* v_toSeq_2027_; lean_object* v_toSeqLeft_2028_; lean_object* v_toSeqRight_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2082_; 
v_toFunctor_2026_ = lean_ctor_get(v_toApplicative_2022_, 0);
v_toSeq_2027_ = lean_ctor_get(v_toApplicative_2022_, 2);
v_toSeqLeft_2028_ = lean_ctor_get(v_toApplicative_2022_, 3);
v_toSeqRight_2029_ = lean_ctor_get(v_toApplicative_2022_, 4);
v_isSharedCheck_2082_ = !lean_is_exclusive(v_toApplicative_2022_);
if (v_isSharedCheck_2082_ == 0)
{
lean_object* v_unused_2083_; 
v_unused_2083_ = lean_ctor_get(v_toApplicative_2022_, 1);
lean_dec(v_unused_2083_);
v___x_2031_ = v_toApplicative_2022_;
v_isShared_2032_ = v_isSharedCheck_2082_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_toSeqRight_2029_);
lean_inc(v_toSeqLeft_2028_);
lean_inc(v_toSeq_2027_);
lean_inc(v_toFunctor_2026_);
lean_dec(v_toApplicative_2022_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2082_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___f_2033_; lean_object* v___f_2034_; lean_object* v___f_2035_; lean_object* v___f_2036_; lean_object* v___x_2037_; lean_object* v___f_2038_; lean_object* v___f_2039_; lean_object* v___f_2040_; lean_object* v___x_2042_; 
v___f_2033_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_2034_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_2026_);
v___f_2035_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2035_, 0, v_toFunctor_2026_);
v___f_2036_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2036_, 0, v_toFunctor_2026_);
v___x_2037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___f_2035_);
lean_ctor_set(v___x_2037_, 1, v___f_2036_);
v___f_2038_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2038_, 0, v_toSeqRight_2029_);
v___f_2039_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2039_, 0, v_toSeqLeft_2028_);
v___f_2040_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2040_, 0, v_toSeq_2027_);
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 4, v___f_2038_);
lean_ctor_set(v___x_2031_, 3, v___f_2039_);
lean_ctor_set(v___x_2031_, 2, v___f_2040_);
lean_ctor_set(v___x_2031_, 1, v___f_2033_);
lean_ctor_set(v___x_2031_, 0, v___x_2037_);
v___x_2042_ = v___x_2031_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2037_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v___f_2033_);
lean_ctor_set(v_reuseFailAlloc_2081_, 2, v___f_2040_);
lean_ctor_set(v_reuseFailAlloc_2081_, 3, v___f_2039_);
lean_ctor_set(v_reuseFailAlloc_2081_, 4, v___f_2038_);
v___x_2042_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2044_; 
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 1, v___f_2034_);
lean_ctor_set(v___x_2024_, 0, v___x_2042_);
v___x_2044_ = v___x_2024_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v___f_2034_);
v___x_2044_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2045_; lean_object* v_toApplicative_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2078_; 
v___x_2045_ = l_StateRefT_x27_instMonad___redArg(v___x_2044_);
v_toApplicative_2046_ = lean_ctor_get(v___x_2045_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2078_ == 0)
{
lean_object* v_unused_2079_; 
v_unused_2079_ = lean_ctor_get(v___x_2045_, 1);
lean_dec(v_unused_2079_);
v___x_2048_ = v___x_2045_;
v_isShared_2049_ = v_isSharedCheck_2078_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_toApplicative_2046_);
lean_dec(v___x_2045_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2078_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v_toFunctor_2050_; lean_object* v_toSeq_2051_; lean_object* v_toSeqLeft_2052_; lean_object* v_toSeqRight_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2076_; 
v_toFunctor_2050_ = lean_ctor_get(v_toApplicative_2046_, 0);
v_toSeq_2051_ = lean_ctor_get(v_toApplicative_2046_, 2);
v_toSeqLeft_2052_ = lean_ctor_get(v_toApplicative_2046_, 3);
v_toSeqRight_2053_ = lean_ctor_get(v_toApplicative_2046_, 4);
v_isSharedCheck_2076_ = !lean_is_exclusive(v_toApplicative_2046_);
if (v_isSharedCheck_2076_ == 0)
{
lean_object* v_unused_2077_; 
v_unused_2077_ = lean_ctor_get(v_toApplicative_2046_, 1);
lean_dec(v_unused_2077_);
v___x_2055_ = v_toApplicative_2046_;
v_isShared_2056_ = v_isSharedCheck_2076_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_toSeqRight_2053_);
lean_inc(v_toSeqLeft_2052_);
lean_inc(v_toSeq_2051_);
lean_inc(v_toFunctor_2050_);
lean_dec(v_toApplicative_2046_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2076_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___f_2057_; lean_object* v___f_2058_; lean_object* v___f_2059_; lean_object* v___f_2060_; lean_object* v___x_2061_; lean_object* v___f_2062_; lean_object* v___f_2063_; lean_object* v___f_2064_; lean_object* v___x_2066_; 
v___f_2057_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_2058_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_2050_);
v___f_2059_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2059_, 0, v_toFunctor_2050_);
v___f_2060_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2060_, 0, v_toFunctor_2050_);
v___x_2061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2061_, 0, v___f_2059_);
lean_ctor_set(v___x_2061_, 1, v___f_2060_);
v___f_2062_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2062_, 0, v_toSeqRight_2053_);
v___f_2063_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2063_, 0, v_toSeqLeft_2052_);
v___f_2064_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2064_, 0, v_toSeq_2051_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 4, v___f_2062_);
lean_ctor_set(v___x_2055_, 3, v___f_2063_);
lean_ctor_set(v___x_2055_, 2, v___f_2064_);
lean_ctor_set(v___x_2055_, 1, v___f_2057_);
lean_ctor_set(v___x_2055_, 0, v___x_2061_);
v___x_2066_ = v___x_2055_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v___x_2061_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v___f_2057_);
lean_ctor_set(v_reuseFailAlloc_2075_, 2, v___f_2064_);
lean_ctor_set(v_reuseFailAlloc_2075_, 3, v___f_2063_);
lean_ctor_set(v_reuseFailAlloc_2075_, 4, v___f_2062_);
v___x_2066_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2068_; 
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 1, v___f_2058_);
lean_ctor_set(v___x_2048_, 0, v___x_2066_);
v___x_2068_ = v___x_2048_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2066_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v___f_2058_);
v___x_2068_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_11017__overap_2072_; lean_object* v___x_2073_; 
v___x_2069_ = l_ReaderT_instMonad___redArg(v___x_2068_);
v___x_2070_ = lean_box(0);
v___x_2071_ = l_instInhabitedOfMonad___redArg(v___x_2069_, v___x_2070_);
v___x_11017__overap_2072_ = lean_panic_fn_borrowed(v___x_2071_, v_msg_2013_);
lean_dec(v___x_2071_);
lean_inc(v___y_2018_);
lean_inc_ref(v___y_2017_);
lean_inc(v___y_2016_);
lean_inc_ref(v___y_2015_);
lean_inc_ref(v___y_2014_);
v___x_2073_ = lean_apply_6(v___x_11017__overap_2072_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_, lean_box(0));
return v___x_2073_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0___boxed(lean_object* v_msg_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_){
_start:
{
lean_object* v_res_2093_; 
v_res_2093_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v_msg_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
lean_dec(v___y_2091_);
lean_dec_ref(v___y_2090_);
lean_dec(v___y_2089_);
lean_dec_ref(v___y_2088_);
lean_dec_ref(v___y_2087_);
return v_res_2093_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0));
v___x_2096_ = l_Lean_stringToMessageData(v___x_2095_);
return v___x_2096_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2098_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_2099_ = lean_unsigned_to_nat(11u);
v___x_2100_ = lean_unsigned_to_nat(115u);
v___x_2101_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2));
v___x_2102_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_2103_ = l_mkPanicMessageWithDecl(v___x_2102_, v___x_2101_, v___x_2100_, v___x_2099_, v___x_2098_);
return v___x_2103_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(lean_object* v_constName_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
lean_object* v___x_2119_; lean_object* v_env_2120_; uint8_t v___x_2121_; lean_object* v___x_2122_; 
v___x_2119_ = lean_st_ref_get(v___y_2109_);
v_env_2120_ = lean_ctor_get(v___x_2119_, 0);
lean_inc_ref(v_env_2120_);
lean_dec(v___x_2119_);
v___x_2121_ = 0;
lean_inc(v_constName_2104_);
v___x_2122_ = l_Lean_Environment_findAsync_x3f(v_env_2120_, v_constName_2104_, v___x_2121_);
if (lean_obj_tag(v___x_2122_) == 1)
{
lean_object* v_val_2123_; uint8_t v_kind_2124_; 
v_val_2123_ = lean_ctor_get(v___x_2122_, 0);
lean_inc(v_val_2123_);
lean_dec_ref_known(v___x_2122_, 1);
v_kind_2124_ = lean_ctor_get_uint8(v_val_2123_, sizeof(void*)*3);
if (v_kind_2124_ == 0)
{
lean_object* v___x_2125_; 
v___x_2125_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2123_);
if (lean_obj_tag(v___x_2125_) == 1)
{
lean_object* v_val_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
lean_dec(v_constName_2104_);
v_val_2126_ = lean_ctor_get(v___x_2125_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2125_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2125_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_val_2126_);
lean_dec(v___x_2125_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set_tag(v___x_2128_, 0);
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_val_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
else
{
lean_object* v___x_2134_; lean_object* v___x_2135_; 
lean_dec_ref(v___x_2125_);
v___x_2134_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3);
v___x_2135_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v___x_2134_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2144_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2138_ = v___x_2135_;
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2135_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2144_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
if (lean_obj_tag(v_a_2136_) == 0)
{
lean_del_object(v___x_2138_);
goto v___jp_2111_;
}
else
{
lean_object* v_val_2140_; lean_object* v___x_2142_; 
lean_dec(v_constName_2104_);
v_val_2140_ = lean_ctor_get(v_a_2136_, 0);
lean_inc(v_val_2140_);
lean_dec_ref_known(v_a_2136_, 1);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 0, v_val_2140_);
v___x_2142_ = v___x_2138_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_val_2140_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
lean_dec(v_constName_2104_);
v_a_2145_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2135_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2135_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
else
{
lean_dec(v_val_2123_);
goto v___jp_2111_;
}
}
else
{
lean_dec(v___x_2122_);
goto v___jp_2111_;
}
v___jp_2111_:
{
lean_object* v___x_2112_; uint8_t v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2112_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_2113_ = 0;
v___x_2114_ = l_Lean_MessageData_ofConstName(v_constName_2104_, v___x_2113_);
v___x_2115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2112_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1);
v___x_2117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___x_2118_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_2117_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_);
return v___x_2118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___boxed(lean_object* v_constName_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v_constName_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_);
lean_dec(v___y_2158_);
lean_dec_ref(v___y_2157_);
lean_dec(v___y_2156_);
lean_dec_ref(v___y_2155_);
lean_dec_ref(v___y_2154_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn(lean_object* v_a_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_, lean_object* v_a_2167_, lean_object* v_a_2168_){
_start:
{
lean_object* v_toInductiveVal_2170_; lean_object* v_toConstantVal_2171_; lean_object* v_lparams_2172_; lean_object* v_params_2173_; lean_object* v_compFieldVars_2174_; lean_object* v_numIndices_2175_; lean_object* v_ctors_2176_; lean_object* v_name_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v_toInductiveVal_2170_ = lean_ctor_get(v_a_2164_, 0);
v_toConstantVal_2171_ = lean_ctor_get(v_toInductiveVal_2170_, 0);
v_lparams_2172_ = lean_ctor_get(v_a_2164_, 1);
v_params_2173_ = lean_ctor_get(v_a_2164_, 2);
v_compFieldVars_2174_ = lean_ctor_get(v_a_2164_, 4);
v_numIndices_2175_ = lean_ctor_get(v_toInductiveVal_2170_, 2);
v_ctors_2176_ = lean_ctor_get(v_toInductiveVal_2170_, 4);
v_name_2177_ = lean_ctor_get(v_toConstantVal_2171_, 0);
v___x_2178_ = l_Lean_instInhabitedExpr;
lean_inc(v_name_2177_);
v___x_2179_ = l_Lean_mkCasesOnName(v_name_2177_);
lean_inc(v___x_2179_);
v___x_2180_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v___x_2179_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v_a_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2181_);
lean_dec_ref_known(v___x_2180_, 1);
v___x_2182_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_2177_);
v___x_2183_ = l_Lean_Name_append(v_name_2177_, v___x_2182_);
lean_inc(v___x_2183_);
v___x_2184_ = l_Lean_mkCasesOn(v___x_2183_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2244_; 
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2244_ == 0)
{
lean_object* v_unused_2245_; 
v_unused_2245_ = lean_ctor_get(v___x_2184_, 0);
lean_dec(v_unused_2245_);
v___x_2186_ = v___x_2184_;
v_isShared_2187_ = v_isSharedCheck_2244_;
goto v_resetjp_2185_;
}
else
{
lean_dec(v___x_2184_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2244_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v_toConstantVal_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2240_; 
v_toConstantVal_2188_ = lean_ctor_get(v_a_2181_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_a_2181_);
if (v_isSharedCheck_2240_ == 0)
{
lean_object* v_unused_2241_; lean_object* v_unused_2242_; lean_object* v_unused_2243_; 
v_unused_2241_ = lean_ctor_get(v_a_2181_, 3);
lean_dec(v_unused_2241_);
v_unused_2242_ = lean_ctor_get(v_a_2181_, 2);
lean_dec(v_unused_2242_);
v_unused_2243_ = lean_ctor_get(v_a_2181_, 1);
lean_dec(v_unused_2243_);
v___x_2190_ = v_a_2181_;
v_isShared_2191_ = v_isSharedCheck_2240_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_toConstantVal_2188_);
lean_dec(v_a_2181_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2240_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v_levelParams_2192_; lean_object* v_type_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2238_; 
v_levelParams_2192_ = lean_ctor_get(v_toConstantVal_2188_, 1);
v_type_2193_ = lean_ctor_get(v_toConstantVal_2188_, 2);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_toConstantVal_2188_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v_toConstantVal_2188_, 0);
lean_dec(v_unused_2239_);
v___x_2195_ = v_toConstantVal_2188_;
v_isShared_2196_ = v_isSharedCheck_2238_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_type_2193_);
lean_inc(v_levelParams_2192_);
lean_dec(v_toConstantVal_2188_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2238_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___f_2197_; lean_object* v___x_2198_; 
lean_inc(v_levelParams_2192_);
lean_inc_ref(v_compFieldVars_2174_);
lean_inc(v_ctors_2176_);
lean_inc_ref(v_params_2173_);
lean_inc(v_lparams_2172_);
lean_inc(v_numIndices_2175_);
v___f_2197_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed), 16, 8);
lean_closure_set(v___f_2197_, 0, v_numIndices_2175_);
lean_closure_set(v___f_2197_, 1, v___x_2178_);
lean_closure_set(v___f_2197_, 2, v___x_2183_);
lean_closure_set(v___f_2197_, 3, v_lparams_2172_);
lean_closure_set(v___f_2197_, 4, v_params_2173_);
lean_closure_set(v___f_2197_, 5, v_ctors_2176_);
lean_closure_set(v___f_2197_, 6, v_compFieldVars_2174_);
lean_closure_set(v___f_2197_, 7, v_levelParams_2192_);
lean_inc_ref(v_type_2193_);
v___x_2198_ = l_Lean_Meta_instantiateForall(v_type_2193_, v_params_2173_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2198_) == 0)
{
lean_object* v_a_2199_; uint8_t v___x_2200_; lean_object* v___x_2201_; 
v_a_2199_ = lean_ctor_get(v___x_2198_, 0);
lean_inc(v_a_2199_);
lean_dec_ref_known(v___x_2198_, 1);
v___x_2200_ = 0;
v___x_2201_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2199_, v___f_2197_, v___x_2200_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2206_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
lean_inc(v_a_2202_);
lean_dec_ref_known(v___x_2201_, 1);
v___x_2203_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v___x_2179_);
v___x_2204_ = l_Lean_Name_append(v___x_2179_, v___x_2203_);
lean_inc(v___x_2204_);
if (v_isShared_2196_ == 0)
{
lean_ctor_set(v___x_2195_, 0, v___x_2204_);
v___x_2206_ = v___x_2195_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2204_);
lean_ctor_set(v_reuseFailAlloc_2221_, 1, v_levelParams_2192_);
lean_ctor_set(v_reuseFailAlloc_2221_, 2, v_type_2193_);
v___x_2206_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
lean_object* v___x_2207_; uint8_t v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2212_; 
v___x_2207_ = lean_box(0);
v___x_2208_ = 0;
v___x_2209_ = lean_box(0);
lean_inc(v___x_2204_);
v___x_2210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2204_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 3, v___x_2210_);
lean_ctor_set(v___x_2190_, 2, v___x_2207_);
lean_ctor_set(v___x_2190_, 1, v_a_2202_);
lean_ctor_set(v___x_2190_, 0, v___x_2206_);
v___x_2212_ = v___x_2190_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v___x_2206_);
lean_ctor_set(v_reuseFailAlloc_2220_, 1, v_a_2202_);
lean_ctor_set(v_reuseFailAlloc_2220_, 2, v___x_2207_);
lean_ctor_set(v_reuseFailAlloc_2220_, 3, v___x_2210_);
v___x_2212_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
lean_object* v___x_2214_; 
lean_ctor_set_uint8(v___x_2212_, sizeof(void*)*4, v___x_2208_);
if (v_isShared_2187_ == 0)
{
lean_ctor_set_tag(v___x_2186_, 1);
lean_ctor_set(v___x_2186_, 0, v___x_2212_);
v___x_2214_ = v___x_2186_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2212_);
v___x_2214_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
lean_object* v___x_2215_; 
v___x_2215_ = l_Lean_addDecl(v___x_2214_, v___x_2200_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2215_) == 0)
{
uint8_t v___x_2216_; lean_object* v___x_2217_; 
lean_dec_ref_known(v___x_2215_, 1);
v___x_2216_ = 0;
lean_inc(v___x_2204_);
v___x_2217_ = l_Lean_Meta_setInlineAttribute(v___x_2204_, v___x_2216_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v___x_2218_; 
lean_dec_ref_known(v___x_2217_, 1);
v___x_2218_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v___x_2179_, v___x_2204_, v_a_2164_, v_a_2165_, v_a_2166_, v_a_2167_, v_a_2168_);
return v___x_2218_;
}
else
{
lean_dec(v___x_2204_);
lean_dec(v___x_2179_);
return v___x_2217_;
}
}
else
{
lean_dec(v___x_2204_);
lean_dec(v___x_2179_);
return v___x_2215_;
}
}
}
}
}
else
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2229_; 
lean_del_object(v___x_2195_);
lean_dec_ref(v_type_2193_);
lean_dec(v_levelParams_2192_);
lean_del_object(v___x_2190_);
lean_del_object(v___x_2186_);
lean_dec(v___x_2179_);
v_a_2222_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2224_ = v___x_2201_;
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2201_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2229_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2227_; 
if (v_isShared_2225_ == 0)
{
v___x_2227_ = v___x_2224_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_a_2222_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
lean_dec_ref(v___f_2197_);
lean_del_object(v___x_2195_);
lean_dec_ref(v_type_2193_);
lean_dec(v_levelParams_2192_);
lean_del_object(v___x_2190_);
lean_del_object(v___x_2186_);
lean_dec(v___x_2179_);
v_a_2230_ = lean_ctor_get(v___x_2198_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2198_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2198_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2198_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_2183_);
lean_dec(v_a_2181_);
lean_dec(v___x_2179_);
return v___x_2184_;
}
}
else
{
lean_object* v_a_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2253_; 
lean_dec(v___x_2179_);
v_a_2246_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2248_ = v___x_2180_;
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_a_2246_);
lean_dec(v___x_2180_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2253_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v_a_2246_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___boxed(lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_);
lean_dec(v_a_2258_);
lean_dec_ref(v_a_2257_);
lean_dec(v_a_2256_);
lean_dec_ref(v_a_2255_);
lean_dec_ref(v_a_2254_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1(lean_object* v_inst_2261_, lean_object* v_R_2262_, lean_object* v_a_2263_, lean_object* v_b_2264_){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v_a_2263_, v_b_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(lean_object* v_00_u03b1_2266_, lean_object* v_name_2267_, uint8_t v_bi_2268_, lean_object* v_type_2269_, lean_object* v_k_2270_, uint8_t v_kind_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v___x_2278_; 
v___x_2278_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_2267_, v_bi_2268_, v_type_2269_, v_k_2270_, v_kind_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2279_, lean_object* v_name_2280_, lean_object* v_bi_2281_, lean_object* v_type_2282_, lean_object* v_k_2283_, lean_object* v_kind_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
uint8_t v_bi_boxed_2291_; uint8_t v_kind_boxed_2292_; lean_object* v_res_2293_; 
v_bi_boxed_2291_ = lean_unbox(v_bi_2281_);
v_kind_boxed_2292_ = lean_unbox(v_kind_2284_);
v_res_2293_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(v_00_u03b1_2279_, v_name_2280_, v_bi_boxed_2291_, v_type_2282_, v_k_2283_, v_kind_boxed_2292_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec_ref(v___y_2285_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(lean_object* v_00_u03b1_2294_, lean_object* v_name_2295_, lean_object* v_type_2296_, lean_object* v_k_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
lean_object* v___x_2304_; 
v___x_2304_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_2295_, v_type_2296_, v_k_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___boxed(lean_object* v_00_u03b1_2305_, lean_object* v_name_2306_, lean_object* v_type_2307_, lean_object* v_k_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v_res_2315_; 
v_res_2315_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(v_00_u03b1_2305_, v_name_2306_, v_type_2307_, v_k_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v___y_2310_);
lean_dec_ref(v___y_2309_);
return v_res_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(lean_object* v_env_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v___x_2323_; 
v___x_2323_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_2316_, v___y_2319_, v___y_2321_);
return v___x_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___boxed(lean_object* v_env_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(v_env_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec_ref(v___y_2325_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(lean_object* v___x_2332_, size_t v_sz_2333_, size_t v_i_2334_, lean_object* v_bs_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_){
_start:
{
uint8_t v___x_2341_; 
v___x_2341_ = lean_usize_dec_lt(v_i_2334_, v_sz_2333_);
if (v___x_2341_ == 0)
{
lean_object* v___x_2342_; 
lean_dec_ref(v___x_2332_);
v___x_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2342_, 0, v_bs_2335_);
return v___x_2342_;
}
else
{
lean_object* v_v_2343_; lean_object* v___x_2344_; lean_object* v_bs_x27_2345_; lean_object* v___x_2346_; 
v_v_2343_ = lean_array_uget(v_bs_2335_, v_i_2334_);
v___x_2344_ = lean_unsigned_to_nat(0u);
v_bs_x27_2345_ = lean_array_uset(v_bs_2335_, v_i_2334_, v___x_2344_);
lean_inc_ref(v___x_2332_);
v___x_2346_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_v_2343_, v___x_2332_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v_a_2347_; size_t v___x_2348_; size_t v___x_2349_; lean_object* v___x_2350_; 
v_a_2347_ = lean_ctor_get(v___x_2346_, 0);
lean_inc(v_a_2347_);
lean_dec_ref_known(v___x_2346_, 1);
v___x_2348_ = ((size_t)1ULL);
v___x_2349_ = lean_usize_add(v_i_2334_, v___x_2348_);
v___x_2350_ = lean_array_uset(v_bs_x27_2345_, v_i_2334_, v_a_2347_);
v_i_2334_ = v___x_2349_;
v_bs_2335_ = v___x_2350_;
goto _start;
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2359_; 
lean_dec_ref(v_bs_x27_2345_);
lean_dec_ref(v___x_2332_);
v_a_2352_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2354_ = v___x_2346_;
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2346_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2359_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2357_; 
if (v_isShared_2355_ == 0)
{
v___x_2357_ = v___x_2354_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2352_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
return v___x_2357_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg___boxed(lean_object* v___x_2360_, lean_object* v_sz_2361_, lean_object* v_i_2362_, lean_object* v_bs_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
size_t v_sz_boxed_2369_; size_t v_i_boxed_2370_; lean_object* v_res_2371_; 
v_sz_boxed_2369_ = lean_unbox_usize(v_sz_2361_);
lean_dec(v_sz_2361_);
v_i_boxed_2370_ = lean_unbox_usize(v_i_2362_);
lean_dec(v_i_2362_);
v_res_2371_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2360_, v_sz_boxed_2369_, v_i_boxed_2370_, v_bs_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(lean_object* v_head_2372_, lean_object* v_compFields_2373_, lean_object* v___x_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2372_, v___y_2378_, v___y_2379_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2394_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2384_ = v___x_2381_;
v_isShared_2385_ = v_isSharedCheck_2394_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2381_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2394_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
uint8_t v___x_2386_; 
v___x_2386_ = lean_unbox(v_a_2382_);
lean_dec(v_a_2382_);
if (v___x_2386_ == 0)
{
size_t v_sz_2387_; size_t v___x_2388_; lean_object* v___x_2389_; 
lean_del_object(v___x_2384_);
v_sz_2387_ = lean_array_size(v_compFields_2373_);
v___x_2388_ = ((size_t)0ULL);
v___x_2389_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2374_, v_sz_2387_, v___x_2388_, v_compFields_2373_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
return v___x_2389_;
}
else
{
lean_object* v___x_2390_; lean_object* v___x_2392_; 
lean_dec_ref(v___x_2374_);
lean_dec_ref(v_compFields_2373_);
v___x_2390_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 0, v___x_2390_);
v___x_2392_ = v___x_2384_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2393_; 
v_reuseFailAlloc_2393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2393_, 0, v___x_2390_);
v___x_2392_ = v_reuseFailAlloc_2393_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
return v___x_2392_;
}
}
}
}
else
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2402_; 
lean_dec_ref(v___x_2374_);
lean_dec_ref(v_compFields_2373_);
v_a_2395_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2397_ = v___x_2381_;
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2381_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2402_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v___x_2400_; 
if (v_isShared_2398_ == 0)
{
v___x_2400_ = v___x_2397_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2395_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed(lean_object* v_head_2403_, lean_object* v_compFields_2404_, lean_object* v___x_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v_res_2412_; 
v_res_2412_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(v_head_2403_, v_compFields_2404_, v___x_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_);
lean_dec(v___y_2410_);
lean_dec_ref(v___y_2409_);
lean_dec(v___y_2408_);
lean_dec_ref(v___y_2407_);
lean_dec_ref(v___y_2406_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(lean_object* v___y_2413_, uint8_t v_isExporting_2414_, lean_object* v___x_2415_, lean_object* v___y_2416_, lean_object* v___x_2417_, lean_object* v_a_x3f_2418_){
_start:
{
lean_object* v___x_2420_; lean_object* v_env_2421_; lean_object* v_nextMacroScope_2422_; lean_object* v_ngen_2423_; lean_object* v_auxDeclNGen_2424_; lean_object* v_traceState_2425_; lean_object* v_recordedDeps_2426_; lean_object* v_messages_2427_; lean_object* v_infoState_2428_; lean_object* v_snapshotTasks_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2454_; 
v___x_2420_ = lean_st_ref_take(v___y_2413_);
v_env_2421_ = lean_ctor_get(v___x_2420_, 0);
v_nextMacroScope_2422_ = lean_ctor_get(v___x_2420_, 1);
v_ngen_2423_ = lean_ctor_get(v___x_2420_, 2);
v_auxDeclNGen_2424_ = lean_ctor_get(v___x_2420_, 3);
v_traceState_2425_ = lean_ctor_get(v___x_2420_, 4);
v_recordedDeps_2426_ = lean_ctor_get(v___x_2420_, 6);
v_messages_2427_ = lean_ctor_get(v___x_2420_, 7);
v_infoState_2428_ = lean_ctor_get(v___x_2420_, 8);
v_snapshotTasks_2429_ = lean_ctor_get(v___x_2420_, 9);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2420_);
if (v_isSharedCheck_2454_ == 0)
{
lean_object* v_unused_2455_; 
v_unused_2455_ = lean_ctor_get(v___x_2420_, 5);
lean_dec(v_unused_2455_);
v___x_2431_ = v___x_2420_;
v_isShared_2432_ = v_isSharedCheck_2454_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_snapshotTasks_2429_);
lean_inc(v_infoState_2428_);
lean_inc(v_messages_2427_);
lean_inc(v_recordedDeps_2426_);
lean_inc(v_traceState_2425_);
lean_inc(v_auxDeclNGen_2424_);
lean_inc(v_ngen_2423_);
lean_inc(v_nextMacroScope_2422_);
lean_inc(v_env_2421_);
lean_dec(v___x_2420_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2454_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2433_ = l_Lean_Environment_setExporting(v_env_2421_, v_isExporting_2414_);
if (v_isShared_2432_ == 0)
{
lean_ctor_set(v___x_2431_, 5, v___x_2415_);
lean_ctor_set(v___x_2431_, 0, v___x_2433_);
v___x_2435_ = v___x_2431_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v___x_2433_);
lean_ctor_set(v_reuseFailAlloc_2453_, 1, v_nextMacroScope_2422_);
lean_ctor_set(v_reuseFailAlloc_2453_, 2, v_ngen_2423_);
lean_ctor_set(v_reuseFailAlloc_2453_, 3, v_auxDeclNGen_2424_);
lean_ctor_set(v_reuseFailAlloc_2453_, 4, v_traceState_2425_);
lean_ctor_set(v_reuseFailAlloc_2453_, 5, v___x_2415_);
lean_ctor_set(v_reuseFailAlloc_2453_, 6, v_recordedDeps_2426_);
lean_ctor_set(v_reuseFailAlloc_2453_, 7, v_messages_2427_);
lean_ctor_set(v_reuseFailAlloc_2453_, 8, v_infoState_2428_);
lean_ctor_set(v_reuseFailAlloc_2453_, 9, v_snapshotTasks_2429_);
v___x_2435_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v_mctx_2438_; lean_object* v_zetaDeltaFVarIds_2439_; lean_object* v_postponed_2440_; lean_object* v_diag_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2451_; 
v___x_2436_ = lean_st_ref_put(v___y_2413_, v___x_2435_);
v___x_2437_ = lean_st_ref_take(v___y_2416_);
v_mctx_2438_ = lean_ctor_get(v___x_2437_, 0);
v_zetaDeltaFVarIds_2439_ = lean_ctor_get(v___x_2437_, 2);
v_postponed_2440_ = lean_ctor_get(v___x_2437_, 3);
v_diag_2441_ = lean_ctor_get(v___x_2437_, 4);
v_isSharedCheck_2451_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_2451_ == 0)
{
lean_object* v_unused_2452_; 
v_unused_2452_ = lean_ctor_get(v___x_2437_, 1);
lean_dec(v_unused_2452_);
v___x_2443_ = v___x_2437_;
v_isShared_2444_ = v_isSharedCheck_2451_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_diag_2441_);
lean_inc(v_postponed_2440_);
lean_inc(v_zetaDeltaFVarIds_2439_);
lean_inc(v_mctx_2438_);
lean_dec(v___x_2437_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2451_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; lean_object* v___x_2447_; 
v___x_2445_ = lean_box(0);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 1, v___x_2417_);
v___x_2447_ = v___x_2443_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2450_; 
v_reuseFailAlloc_2450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2450_, 0, v_mctx_2438_);
lean_ctor_set(v_reuseFailAlloc_2450_, 1, v___x_2417_);
lean_ctor_set(v_reuseFailAlloc_2450_, 2, v_zetaDeltaFVarIds_2439_);
lean_ctor_set(v_reuseFailAlloc_2450_, 3, v_postponed_2440_);
lean_ctor_set(v_reuseFailAlloc_2450_, 4, v_diag_2441_);
v___x_2447_ = v_reuseFailAlloc_2450_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2448_ = lean_st_ref_put(v___y_2416_, v___x_2447_);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2445_);
return v___x_2449_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_2456_, lean_object* v_isExporting_2457_, lean_object* v___x_2458_, lean_object* v___y_2459_, lean_object* v___x_2460_, lean_object* v_a_x3f_2461_, lean_object* v___y_2462_){
_start:
{
uint8_t v_isExporting_boxed_2463_; lean_object* v_res_2464_; 
v_isExporting_boxed_2463_ = lean_unbox(v_isExporting_2457_);
v_res_2464_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2456_, v_isExporting_boxed_2463_, v___x_2458_, v___y_2459_, v___x_2460_, v_a_x3f_2461_);
lean_dec(v_a_x3f_2461_);
lean_dec(v___y_2459_);
lean_dec(v___y_2456_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(lean_object* v_x_2465_, uint8_t v_isExporting_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v___x_2473_; lean_object* v_env_2474_; lean_object* v___x_2475_; uint8_t v_isModule_2476_; 
v___x_2473_ = lean_st_ref_get(v___y_2471_);
v_env_2474_ = lean_ctor_get(v___x_2473_, 0);
lean_inc_ref(v_env_2474_);
lean_dec(v___x_2473_);
v___x_2475_ = l_Lean_Environment_header(v_env_2474_);
v_isModule_2476_ = lean_ctor_get_uint8(v___x_2475_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2475_);
if (v_isModule_2476_ == 0)
{
lean_object* v___x_2477_; 
lean_dec_ref(v_env_2474_);
lean_inc(v___y_2471_);
lean_inc_ref(v___y_2470_);
lean_inc(v___y_2469_);
lean_inc_ref(v___y_2468_);
lean_inc_ref(v___y_2467_);
v___x_2477_ = lean_apply_6(v_x_2465_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, lean_box(0));
return v___x_2477_;
}
else
{
uint8_t v_isExporting_2478_; 
v_isExporting_2478_ = lean_ctor_get_uint8(v_env_2474_, sizeof(void*)*13);
lean_dec_ref(v_env_2474_);
if (v_isExporting_2466_ == 0)
{
if (v_isExporting_2478_ == 0)
{
lean_object* v___x_2545_; 
lean_inc(v___y_2471_);
lean_inc_ref(v___y_2470_);
lean_inc(v___y_2469_);
lean_inc_ref(v___y_2468_);
lean_inc_ref(v___y_2467_);
v___x_2545_ = lean_apply_6(v_x_2465_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, lean_box(0));
return v___x_2545_;
}
else
{
goto v___jp_2479_;
}
}
else
{
if (v_isExporting_2478_ == 0)
{
goto v___jp_2479_;
}
else
{
lean_object* v___x_2546_; 
lean_inc(v___y_2471_);
lean_inc_ref(v___y_2470_);
lean_inc(v___y_2469_);
lean_inc_ref(v___y_2468_);
lean_inc_ref(v___y_2467_);
v___x_2546_ = lean_apply_6(v_x_2465_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, lean_box(0));
return v___x_2546_;
}
}
v___jp_2479_:
{
lean_object* v___x_2480_; lean_object* v_env_2481_; lean_object* v_nextMacroScope_2482_; lean_object* v_ngen_2483_; lean_object* v_auxDeclNGen_2484_; lean_object* v_traceState_2485_; lean_object* v_recordedDeps_2486_; lean_object* v_messages_2487_; lean_object* v_infoState_2488_; lean_object* v_snapshotTasks_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2543_; 
v___x_2480_ = lean_st_ref_take(v___y_2471_);
v_env_2481_ = lean_ctor_get(v___x_2480_, 0);
v_nextMacroScope_2482_ = lean_ctor_get(v___x_2480_, 1);
v_ngen_2483_ = lean_ctor_get(v___x_2480_, 2);
v_auxDeclNGen_2484_ = lean_ctor_get(v___x_2480_, 3);
v_traceState_2485_ = lean_ctor_get(v___x_2480_, 4);
v_recordedDeps_2486_ = lean_ctor_get(v___x_2480_, 6);
v_messages_2487_ = lean_ctor_get(v___x_2480_, 7);
v_infoState_2488_ = lean_ctor_get(v___x_2480_, 8);
v_snapshotTasks_2489_ = lean_ctor_get(v___x_2480_, 9);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2543_ == 0)
{
lean_object* v_unused_2544_; 
v_unused_2544_ = lean_ctor_get(v___x_2480_, 5);
lean_dec(v_unused_2544_);
v___x_2491_ = v___x_2480_;
v_isShared_2492_ = v_isSharedCheck_2543_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_snapshotTasks_2489_);
lean_inc(v_infoState_2488_);
lean_inc(v_messages_2487_);
lean_inc(v_recordedDeps_2486_);
lean_inc(v_traceState_2485_);
lean_inc(v_auxDeclNGen_2484_);
lean_inc(v_ngen_2483_);
lean_inc(v_nextMacroScope_2482_);
lean_inc(v_env_2481_);
lean_dec(v___x_2480_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2543_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2496_; 
v___x_2493_ = l_Lean_Environment_setExporting(v_env_2481_, v_isExporting_2466_);
v___x_2494_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_2492_ == 0)
{
lean_ctor_set(v___x_2491_, 5, v___x_2494_);
lean_ctor_set(v___x_2491_, 0, v___x_2493_);
v___x_2496_ = v___x_2491_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v___x_2493_);
lean_ctor_set(v_reuseFailAlloc_2542_, 1, v_nextMacroScope_2482_);
lean_ctor_set(v_reuseFailAlloc_2542_, 2, v_ngen_2483_);
lean_ctor_set(v_reuseFailAlloc_2542_, 3, v_auxDeclNGen_2484_);
lean_ctor_set(v_reuseFailAlloc_2542_, 4, v_traceState_2485_);
lean_ctor_set(v_reuseFailAlloc_2542_, 5, v___x_2494_);
lean_ctor_set(v_reuseFailAlloc_2542_, 6, v_recordedDeps_2486_);
lean_ctor_set(v_reuseFailAlloc_2542_, 7, v_messages_2487_);
lean_ctor_set(v_reuseFailAlloc_2542_, 8, v_infoState_2488_);
lean_ctor_set(v_reuseFailAlloc_2542_, 9, v_snapshotTasks_2489_);
v___x_2496_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v_mctx_2499_; lean_object* v_zetaDeltaFVarIds_2500_; lean_object* v_postponed_2501_; lean_object* v_diag_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2540_; 
v___x_2497_ = lean_st_ref_put(v___y_2471_, v___x_2496_);
v___x_2498_ = lean_st_ref_take(v___y_2469_);
v_mctx_2499_ = lean_ctor_get(v___x_2498_, 0);
v_zetaDeltaFVarIds_2500_ = lean_ctor_get(v___x_2498_, 2);
v_postponed_2501_ = lean_ctor_get(v___x_2498_, 3);
v_diag_2502_ = lean_ctor_get(v___x_2498_, 4);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2498_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v___x_2498_, 1);
lean_dec(v_unused_2541_);
v___x_2504_ = v___x_2498_;
v_isShared_2505_ = v_isSharedCheck_2540_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_diag_2502_);
lean_inc(v_postponed_2501_);
lean_inc(v_zetaDeltaFVarIds_2500_);
lean_inc(v_mctx_2499_);
lean_dec(v___x_2498_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2540_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2506_; lean_object* v___x_2508_; 
v___x_2506_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 1, v___x_2506_);
v___x_2508_ = v___x_2504_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_mctx_2499_);
lean_ctor_set(v_reuseFailAlloc_2539_, 1, v___x_2506_);
lean_ctor_set(v_reuseFailAlloc_2539_, 2, v_zetaDeltaFVarIds_2500_);
lean_ctor_set(v_reuseFailAlloc_2539_, 3, v_postponed_2501_);
lean_ctor_set(v_reuseFailAlloc_2539_, 4, v_diag_2502_);
v___x_2508_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
lean_object* v___x_2509_; lean_object* v_r_2510_; 
v___x_2509_ = lean_st_ref_put(v___y_2469_, v___x_2508_);
lean_inc(v___y_2471_);
lean_inc_ref(v___y_2470_);
lean_inc(v___y_2469_);
lean_inc_ref(v___y_2468_);
lean_inc_ref(v___y_2467_);
v_r_2510_ = lean_apply_6(v_x_2465_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, lean_box(0));
if (lean_obj_tag(v_r_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2513_; uint8_t v_isShared_2514_; uint8_t v_isSharedCheck_2527_; 
v_a_2511_ = lean_ctor_get(v_r_2510_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v_r_2510_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2513_ = v_r_2510_;
v_isShared_2514_ = v_isSharedCheck_2527_;
goto v_resetjp_2512_;
}
else
{
lean_inc(v_a_2511_);
lean_dec(v_r_2510_);
v___x_2513_ = lean_box(0);
v_isShared_2514_ = v_isSharedCheck_2527_;
goto v_resetjp_2512_;
}
v_resetjp_2512_:
{
lean_object* v___x_2516_; 
lean_inc(v_a_2511_);
if (v_isShared_2514_ == 0)
{
lean_ctor_set_tag(v___x_2513_, 1);
v___x_2516_ = v___x_2513_;
goto v_reusejp_2515_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2511_);
v___x_2516_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2515_;
}
v_reusejp_2515_:
{
lean_object* v___x_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2524_; 
v___x_2517_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2471_, v_isExporting_2478_, v___x_2494_, v___y_2469_, v___x_2506_, v___x_2516_);
lean_dec_ref(v___x_2516_);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2517_);
if (v_isSharedCheck_2524_ == 0)
{
lean_object* v_unused_2525_; 
v_unused_2525_ = lean_ctor_get(v___x_2517_, 0);
lean_dec(v_unused_2525_);
v___x_2519_ = v___x_2517_;
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
else
{
lean_dec(v___x_2517_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v___x_2522_; 
if (v_isShared_2520_ == 0)
{
lean_ctor_set(v___x_2519_, 0, v_a_2511_);
v___x_2522_ = v___x_2519_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_a_2511_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2532_; uint8_t v_isShared_2533_; uint8_t v_isSharedCheck_2537_; 
v_a_2528_ = lean_ctor_get(v_r_2510_, 0);
lean_inc(v_a_2528_);
lean_dec_ref_known(v_r_2510_, 1);
v___x_2529_ = lean_box(0);
v___x_2530_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2471_, v_isExporting_2478_, v___x_2494_, v___y_2469_, v___x_2506_, v___x_2529_);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2537_ == 0)
{
lean_object* v_unused_2538_; 
v_unused_2538_ = lean_ctor_get(v___x_2530_, 0);
lean_dec(v_unused_2538_);
v___x_2532_ = v___x_2530_;
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
else
{
lean_dec(v___x_2530_);
v___x_2532_ = lean_box(0);
v_isShared_2533_ = v_isSharedCheck_2537_;
goto v_resetjp_2531_;
}
v_resetjp_2531_:
{
lean_object* v___x_2535_; 
if (v_isShared_2533_ == 0)
{
lean_ctor_set_tag(v___x_2532_, 1);
lean_ctor_set(v___x_2532_, 0, v_a_2528_);
v___x_2535_ = v___x_2532_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_a_2528_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___boxed(lean_object* v_x_2547_, lean_object* v_isExporting_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
uint8_t v_isExporting_boxed_2555_; lean_object* v_res_2556_; 
v_isExporting_boxed_2555_ = lean_unbox(v_isExporting_2548_);
v_res_2556_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2547_, v_isExporting_boxed_2555_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2549_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(lean_object* v_x_2557_, uint8_t v_when_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
if (v_when_2558_ == 0)
{
lean_object* v___x_2565_; 
lean_inc(v___y_2563_);
lean_inc_ref(v___y_2562_);
lean_inc(v___y_2561_);
lean_inc_ref(v___y_2560_);
lean_inc_ref(v___y_2559_);
v___x_2565_ = lean_apply_6(v_x_2557_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, lean_box(0));
return v___x_2565_;
}
else
{
uint8_t v___x_2566_; lean_object* v___x_2567_; 
v___x_2566_ = 0;
v___x_2567_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2557_, v___x_2566_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg___boxed(lean_object* v_x_2568_, lean_object* v_when_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
uint8_t v_when_boxed_2576_; lean_object* v_res_2577_; 
v_when_boxed_2576_ = lean_unbox(v_when_2569_);
v_res_2577_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2568_, v_when_boxed_2576_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
lean_dec(v___y_2574_);
lean_dec_ref(v___y_2573_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec_ref(v___y_2570_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(lean_object* v_params_2578_, lean_object* v___x_2579_, lean_object* v_head_2580_, lean_object* v_compFields_2581_, lean_object* v_lparams_2582_, lean_object* v_levelParams_2583_, lean_object* v___x_2584_, lean_object* v_fields_2585_, lean_object* v_retTy_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___f_2595_; uint8_t v___x_2596_; lean_object* v___x_2597_; 
lean_inc_ref(v_params_2578_);
v___x_2593_ = l_Array_append___redArg(v_params_2578_, v_fields_2585_);
lean_inc_ref(v___x_2579_);
v___x_2594_ = l_Lean_mkAppN(v___x_2579_, v___x_2593_);
lean_inc(v_head_2580_);
v___f_2595_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2595_, 0, v_head_2580_);
lean_closure_set(v___f_2595_, 1, v_compFields_2581_);
lean_closure_set(v___f_2595_, 2, v___x_2594_);
v___x_2596_ = 1;
v___x_2597_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___f_2595_, v___x_2596_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
if (lean_obj_tag(v___x_2597_) == 0)
{
lean_object* v_a_2598_; lean_object* v___x_2599_; 
v_a_2598_ = lean_ctor_get(v___x_2597_, 0);
lean_inc(v_a_2598_);
lean_dec_ref_known(v___x_2597_, 1);
lean_inc(v___y_2591_);
lean_inc_ref(v___y_2590_);
lean_inc(v___y_2589_);
lean_inc_ref(v___y_2588_);
v___x_2599_ = lean_infer_type(v___x_2579_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
if (lean_obj_tag(v___x_2599_) == 0)
{
lean_object* v_a_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; 
v_a_2600_ = lean_ctor_get(v___x_2599_, 0);
lean_inc(v_a_2600_);
lean_dec_ref_known(v___x_2599_, 1);
v___x_2601_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_head_2580_);
v___x_2602_ = l_Lean_Name_append(v_head_2580_, v___x_2601_);
v___x_2603_ = l_Lean_mkConst(v___x_2602_, v_lparams_2582_);
v___x_2604_ = l_Array_append___redArg(v_params_2578_, v_a_2598_);
lean_dec(v_a_2598_);
v___x_2605_ = l_Array_append___redArg(v___x_2604_, v_fields_2585_);
v___x_2606_ = l_Lean_mkAppN(v___x_2603_, v___x_2605_);
lean_dec_ref(v___x_2605_);
v___x_2607_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_retTy_2586_, v___x_2606_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
if (lean_obj_tag(v___x_2607_) == 0)
{
lean_object* v_a_2608_; uint8_t v___x_2609_; uint8_t v___x_2610_; lean_object* v___x_2611_; 
v_a_2608_ = lean_ctor_get(v___x_2607_, 0);
lean_inc(v_a_2608_);
lean_dec_ref_known(v___x_2607_, 1);
v___x_2609_ = 0;
v___x_2610_ = 1;
v___x_2611_ = l_Lean_Meta_mkLambdaFVars(v___x_2593_, v_a_2608_, v___x_2609_, v___x_2596_, v___x_2609_, v___x_2596_, v___x_2610_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec_ref(v___x_2593_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_a_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
lean_inc(v_a_2612_);
lean_dec_ref_known(v___x_2611_, 1);
v___x_2613_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_2580_);
v___x_2614_ = l_Lean_Name_append(v_head_2580_, v___x_2613_);
lean_inc_n(v___x_2614_, 2);
v___x_2615_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2614_);
lean_ctor_set(v___x_2615_, 1, v_levelParams_2583_);
lean_ctor_set(v___x_2615_, 2, v_a_2600_);
v___x_2616_ = lean_box(0);
v___x_2617_ = 0;
v___x_2618_ = lean_box(0);
v___x_2619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2614_);
lean_ctor_set(v___x_2619_, 1, v___x_2618_);
v___x_2620_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2620_, 0, v___x_2615_);
lean_ctor_set(v___x_2620_, 1, v_a_2612_);
lean_ctor_set(v___x_2620_, 2, v___x_2616_);
lean_ctor_set(v___x_2620_, 3, v___x_2619_);
lean_ctor_set_uint8(v___x_2620_, sizeof(void*)*4, v___x_2617_);
v___x_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2620_);
v___x_2622_ = l_Lean_addDecl(v___x_2621_, v___x_2609_, v___y_2590_, v___y_2591_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v___x_2623_; 
lean_dec_ref_known(v___x_2622_, 1);
lean_inc(v___x_2614_);
lean_inc(v_head_2580_);
v___x_2623_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_head_2580_, v___x_2614_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v___x_2624_; 
lean_dec_ref_known(v___x_2623_, 1);
v___x_2624_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2580_, v___y_2590_, v___y_2591_);
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2635_; 
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2627_ = v___x_2624_;
v_isShared_2628_ = v_isSharedCheck_2635_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2624_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2635_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
uint8_t v___x_2629_; 
v___x_2629_ = lean_unbox(v_a_2625_);
lean_dec(v_a_2625_);
if (v___x_2629_ == 0)
{
lean_object* v___x_2631_; 
lean_dec(v___x_2614_);
if (v_isShared_2628_ == 0)
{
lean_ctor_set(v___x_2627_, 0, v___x_2584_);
v___x_2631_ = v___x_2627_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v___x_2584_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
else
{
uint8_t v___x_2633_; lean_object* v___x_2634_; 
lean_del_object(v___x_2627_);
v___x_2633_ = 0;
v___x_2634_ = l_Lean_Meta_setInlineAttribute(v___x_2614_, v___x_2633_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
return v___x_2634_;
}
}
}
else
{
lean_object* v_a_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2643_; 
lean_dec(v___x_2614_);
v_a_2636_ = lean_ctor_get(v___x_2624_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2624_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2638_ = v___x_2624_;
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_a_2636_);
lean_dec(v___x_2624_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2641_; 
if (v_isShared_2639_ == 0)
{
v___x_2641_ = v___x_2638_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_a_2636_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
else
{
lean_dec(v___x_2614_);
lean_dec(v_head_2580_);
return v___x_2623_;
}
}
else
{
lean_dec(v___x_2614_);
lean_dec(v_head_2580_);
return v___x_2622_;
}
}
else
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2651_; 
lean_dec(v_a_2600_);
lean_dec(v_levelParams_2583_);
lean_dec(v_head_2580_);
v_a_2644_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2651_ == 0)
{
v___x_2646_ = v___x_2611_;
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v___x_2611_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2651_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
lean_object* v___x_2649_; 
if (v_isShared_2647_ == 0)
{
v___x_2649_ = v___x_2646_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_a_2644_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
lean_dec(v_a_2600_);
lean_dec_ref(v___x_2593_);
lean_dec(v_levelParams_2583_);
lean_dec(v_head_2580_);
v_a_2652_ = lean_ctor_get(v___x_2607_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___x_2607_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2607_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_dec(v_a_2598_);
lean_dec_ref(v___x_2593_);
lean_dec_ref(v_retTy_2586_);
lean_dec(v_levelParams_2583_);
lean_dec(v_lparams_2582_);
lean_dec(v_head_2580_);
lean_dec_ref(v_params_2578_);
v_a_2660_ = lean_ctor_get(v___x_2599_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2599_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2599_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2599_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref(v___x_2593_);
lean_dec_ref(v_retTy_2586_);
lean_dec(v_levelParams_2583_);
lean_dec(v_lparams_2582_);
lean_dec(v_head_2580_);
lean_dec_ref(v___x_2579_);
lean_dec_ref(v_params_2578_);
v_a_2668_ = lean_ctor_get(v___x_2597_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2597_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2597_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed(lean_object* v_params_2676_, lean_object* v___x_2677_, lean_object* v_head_2678_, lean_object* v_compFields_2679_, lean_object* v_lparams_2680_, lean_object* v_levelParams_2681_, lean_object* v___x_2682_, lean_object* v_fields_2683_, lean_object* v_retTy_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(v_params_2676_, v___x_2677_, v_head_2678_, v_compFields_2679_, v_lparams_2680_, v_levelParams_2681_, v___x_2682_, v_fields_2683_, v_retTy_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec_ref(v_fields_2683_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(lean_object* v_lparams_2692_, lean_object* v_params_2693_, lean_object* v_compFields_2694_, lean_object* v_levelParams_2695_, lean_object* v_as_x27_2696_, lean_object* v_b_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
if (lean_obj_tag(v_as_x27_2696_) == 0)
{
lean_object* v___x_2704_; 
lean_dec(v_levelParams_2695_);
lean_dec_ref(v_compFields_2694_);
lean_dec_ref(v_params_2693_);
lean_dec(v_lparams_2692_);
v___x_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2704_, 0, v_b_2697_);
return v___x_2704_;
}
else
{
lean_object* v_head_2705_; lean_object* v_tail_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___f_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_head_2705_ = lean_ctor_get(v_as_x27_2696_, 0);
v_tail_2706_ = lean_ctor_get(v_as_x27_2696_, 1);
v___x_2707_ = lean_box(0);
lean_inc_n(v_lparams_2692_, 2);
lean_inc_n(v_head_2705_, 2);
v___x_2708_ = l_Lean_mkConst(v_head_2705_, v_lparams_2692_);
lean_inc(v_levelParams_2695_);
lean_inc_ref(v_compFields_2694_);
lean_inc_ref(v___x_2708_);
lean_inc_ref(v_params_2693_);
v___f_2709_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed), 15, 7);
lean_closure_set(v___f_2709_, 0, v_params_2693_);
lean_closure_set(v___f_2709_, 1, v___x_2708_);
lean_closure_set(v___f_2709_, 2, v_head_2705_);
lean_closure_set(v___f_2709_, 3, v_compFields_2694_);
lean_closure_set(v___f_2709_, 4, v_lparams_2692_);
lean_closure_set(v___f_2709_, 5, v_levelParams_2695_);
lean_closure_set(v___f_2709_, 6, v___x_2707_);
v___x_2710_ = l_Lean_mkAppN(v___x_2708_, v_params_2693_);
lean_inc(v___y_2702_);
lean_inc_ref(v___y_2701_);
lean_inc(v___y_2700_);
lean_inc_ref(v___y_2699_);
v___x_2711_ = lean_infer_type(v___x_2710_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; uint8_t v___x_2713_; lean_object* v___x_2714_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2712_);
lean_dec_ref_known(v___x_2711_, 1);
v___x_2713_ = 0;
v___x_2714_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2712_, v___f_2709_, v___x_2713_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
if (lean_obj_tag(v___x_2714_) == 0)
{
lean_dec_ref_known(v___x_2714_, 1);
v_as_x27_2696_ = v_tail_2706_;
v_b_2697_ = v___x_2707_;
goto _start;
}
else
{
lean_dec(v_levelParams_2695_);
lean_dec_ref(v_compFields_2694_);
lean_dec_ref(v_params_2693_);
lean_dec(v_lparams_2692_);
return v___x_2714_;
}
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec_ref(v___f_2709_);
lean_dec(v_levelParams_2695_);
lean_dec_ref(v_compFields_2694_);
lean_dec_ref(v_params_2693_);
lean_dec(v_lparams_2692_);
v_a_2716_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2711_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2711_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___boxed(lean_object* v_lparams_2724_, lean_object* v_params_2725_, lean_object* v_compFields_2726_, lean_object* v_levelParams_2727_, lean_object* v_as_x27_2728_, lean_object* v_b_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
lean_object* v_res_2736_; 
v_res_2736_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2724_, v_params_2725_, v_compFields_2726_, v_levelParams_2727_, v_as_x27_2728_, v_b_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
lean_dec(v___y_2734_);
lean_dec_ref(v___y_2733_);
lean_dec(v___y_2732_);
lean_dec_ref(v___y_2731_);
lean_dec_ref(v___y_2730_);
lean_dec(v_as_x27_2728_);
return v_res_2736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors(lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_, lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
lean_object* v_toInductiveVal_2743_; lean_object* v_toConstantVal_2744_; lean_object* v_lparams_2745_; lean_object* v_params_2746_; lean_object* v_compFields_2747_; lean_object* v_ctors_2748_; lean_object* v_levelParams_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; 
v_toInductiveVal_2743_ = lean_ctor_get(v_a_2737_, 0);
v_toConstantVal_2744_ = lean_ctor_get(v_toInductiveVal_2743_, 0);
v_lparams_2745_ = lean_ctor_get(v_a_2737_, 1);
v_params_2746_ = lean_ctor_get(v_a_2737_, 2);
v_compFields_2747_ = lean_ctor_get(v_a_2737_, 3);
v_ctors_2748_ = lean_ctor_get(v_toInductiveVal_2743_, 4);
v_levelParams_2749_ = lean_ctor_get(v_toConstantVal_2744_, 1);
v___x_2750_ = lean_box(0);
lean_inc(v_levelParams_2749_);
lean_inc_ref(v_compFields_2747_);
lean_inc_ref(v_params_2746_);
lean_inc(v_lparams_2745_);
v___x_2751_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2745_, v_params_2746_, v_compFields_2747_, v_levelParams_2749_, v_ctors_2748_, v___x_2750_, v_a_2737_, v_a_2738_, v_a_2739_, v_a_2740_, v_a_2741_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2758_; 
v_isSharedCheck_2758_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2758_ == 0)
{
lean_object* v_unused_2759_; 
v_unused_2759_ = lean_ctor_get(v___x_2751_, 0);
lean_dec(v_unused_2759_);
v___x_2753_ = v___x_2751_;
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
else
{
lean_dec(v___x_2751_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2758_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
if (v_isShared_2754_ == 0)
{
lean_ctor_set(v___x_2753_, 0, v___x_2750_);
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2757_; 
v_reuseFailAlloc_2757_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2757_, 0, v___x_2750_);
v___x_2756_ = v_reuseFailAlloc_2757_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
return v___x_2756_;
}
}
}
else
{
return v___x_2751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors___boxed(lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lean_Elab_ComputedFields_overrideConstructors(v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_, v_a_2764_);
lean_dec(v_a_2764_);
lean_dec_ref(v_a_2763_);
lean_dec(v_a_2762_);
lean_dec_ref(v_a_2761_);
lean_dec_ref(v_a_2760_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(lean_object* v___x_2767_, size_t v_sz_2768_, size_t v_i_2769_, lean_object* v_bs_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v___x_2777_; 
v___x_2777_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2767_, v_sz_2768_, v_i_2769_, v_bs_2770_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___boxed(lean_object* v___x_2778_, lean_object* v_sz_2779_, lean_object* v_i_2780_, lean_object* v_bs_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
size_t v_sz_boxed_2788_; size_t v_i_boxed_2789_; lean_object* v_res_2790_; 
v_sz_boxed_2788_ = lean_unbox_usize(v_sz_2779_);
lean_dec(v_sz_2779_);
v_i_boxed_2789_ = lean_unbox_usize(v_i_2780_);
lean_dec(v_i_2780_);
v_res_2790_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(v___x_2778_, v_sz_boxed_2788_, v_i_boxed_2789_, v_bs_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec_ref(v___y_2782_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(lean_object* v_00_u03b1_2791_, lean_object* v_x_2792_, uint8_t v_isExporting_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v___x_2800_; 
v___x_2800_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2792_, v_isExporting_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2801_, lean_object* v_x_2802_, lean_object* v_isExporting_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
uint8_t v_isExporting_boxed_2810_; lean_object* v_res_2811_; 
v_isExporting_boxed_2810_ = lean_unbox(v_isExporting_2803_);
v_res_2811_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(v_00_u03b1_2801_, v_x_2802_, v_isExporting_boxed_2810_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
lean_dec_ref(v___y_2804_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(lean_object* v_00_u03b1_2812_, lean_object* v_x_2813_, uint8_t v_when_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_){
_start:
{
lean_object* v___x_2821_; 
v___x_2821_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2813_, v_when_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___boxed(lean_object* v_00_u03b1_2822_, lean_object* v_x_2823_, lean_object* v_when_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
uint8_t v_when_boxed_2831_; lean_object* v_res_2832_; 
v_when_boxed_2831_ = lean_unbox(v_when_2824_);
v_res_2832_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(v_00_u03b1_2822_, v_x_2823_, v_when_boxed_2831_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v___y_2825_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(lean_object* v_lparams_2833_, lean_object* v_params_2834_, lean_object* v_compFields_2835_, lean_object* v_levelParams_2836_, lean_object* v_as_2837_, lean_object* v_as_x27_2838_, lean_object* v_b_2839_, lean_object* v_a_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_){
_start:
{
lean_object* v___x_2847_; 
v___x_2847_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2833_, v_params_2834_, v_compFields_2835_, v_levelParams_2836_, v_as_x27_2838_, v_b_2839_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
return v___x_2847_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___boxed(lean_object* v_lparams_2848_, lean_object* v_params_2849_, lean_object* v_compFields_2850_, lean_object* v_levelParams_2851_, lean_object* v_as_2852_, lean_object* v_as_x27_2853_, lean_object* v_b_2854_, lean_object* v_a_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(v_lparams_2848_, v_params_2849_, v_compFields_2850_, v_levelParams_2851_, v_as_2852_, v_as_x27_2853_, v_b_2854_, v_a_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec_ref(v___y_2856_);
lean_dec(v_as_x27_2853_);
lean_dec(v_as_2852_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(lean_object* v_v_2863_, lean_object* v_compFieldVars_2864_, lean_object* v___x_2865_, uint8_t v___x_2866_, lean_object* v_params_2867_, lean_object* v___x_2868_, lean_object* v_a_2869_, uint8_t v___x_2870_, lean_object* v_fields_2871_, lean_object* v_x_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = l_Lean_Elab_ComputedFields_isScalarField(v_v_2863_, v___y_2876_, v___y_2877_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v_a_2880_; uint8_t v___x_2881_; 
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
lean_inc(v_a_2880_);
lean_dec_ref_known(v___x_2879_, 1);
v___x_2881_ = lean_unbox(v_a_2880_);
if (v___x_2881_ == 0)
{
lean_object* v___x_2882_; uint8_t v___x_2883_; uint8_t v___x_2884_; uint8_t v___x_2885_; lean_object* v___x_2886_; 
lean_dec(v_a_2869_);
lean_dec_ref(v___x_2868_);
lean_dec_ref(v_params_2867_);
v___x_2882_ = l_Array_append___redArg(v_compFieldVars_2864_, v_fields_2871_);
v___x_2883_ = 1;
v___x_2884_ = lean_unbox(v_a_2880_);
v___x_2885_ = lean_unbox(v_a_2880_);
lean_dec(v_a_2880_);
v___x_2886_ = l_Lean_Meta_mkLambdaFVars(v___x_2882_, v___x_2865_, v___x_2884_, v___x_2866_, v___x_2885_, v___x_2866_, v___x_2883_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
lean_dec_ref(v___x_2882_);
return v___x_2886_;
}
else
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; 
lean_dec(v_a_2880_);
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_compFieldVars_2864_);
v___x_2887_ = l_Array_append___redArg(v_params_2867_, v_fields_2871_);
v___x_2888_ = l_Lean_mkAppN(v___x_2868_, v___x_2887_);
lean_dec_ref(v___x_2887_);
v___x_2889_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_a_2869_, v___x_2888_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
if (lean_obj_tag(v___x_2889_) == 0)
{
lean_object* v_a_2890_; uint8_t v___x_2891_; lean_object* v___x_2892_; 
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_a_2890_);
lean_dec_ref_known(v___x_2889_, 1);
v___x_2891_ = 1;
v___x_2892_ = l_Lean_Meta_mkLambdaFVars(v_fields_2871_, v_a_2890_, v___x_2870_, v___x_2866_, v___x_2870_, v___x_2866_, v___x_2891_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_);
return v___x_2892_;
}
else
{
return v___x_2889_;
}
}
}
else
{
lean_object* v_a_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2900_; 
lean_dec(v_a_2869_);
lean_dec_ref(v___x_2868_);
lean_dec_ref(v_params_2867_);
lean_dec_ref(v___x_2865_);
lean_dec_ref(v_compFieldVars_2864_);
v_a_2893_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2900_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2895_ = v___x_2879_;
v_isShared_2896_ = v_isSharedCheck_2900_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_a_2893_);
lean_dec(v___x_2879_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed(lean_object* v_v_2901_, lean_object* v_compFieldVars_2902_, lean_object* v___x_2903_, lean_object* v___x_2904_, lean_object* v_params_2905_, lean_object* v___x_2906_, lean_object* v_a_2907_, lean_object* v___x_2908_, lean_object* v_fields_2909_, lean_object* v_x_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
uint8_t v___x_12679__boxed_2917_; uint8_t v___x_12682__boxed_2918_; lean_object* v_res_2919_; 
v___x_12679__boxed_2917_ = lean_unbox(v___x_2904_);
v___x_12682__boxed_2918_ = lean_unbox(v___x_2908_);
v_res_2919_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(v_v_2901_, v_compFieldVars_2902_, v___x_2903_, v___x_12679__boxed_2917_, v_params_2905_, v___x_2906_, v_a_2907_, v___x_12682__boxed_2918_, v_fields_2909_, v_x_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_);
lean_dec(v___y_2915_);
lean_dec_ref(v___y_2914_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec_ref(v___y_2911_);
lean_dec_ref(v_x_2910_);
lean_dec_ref(v_fields_2909_);
return v_res_2919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(lean_object* v_lparams_2920_, lean_object* v_compFieldVars_2921_, lean_object* v___x_2922_, lean_object* v___x_2923_, lean_object* v___x_2924_, lean_object* v_params_2925_, lean_object* v_a_2926_, uint8_t v___x_2927_, size_t v_sz_2928_, size_t v_i_2929_, lean_object* v_bs_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
uint8_t v___x_2937_; 
v___x_2937_ = lean_usize_dec_lt(v_i_2929_, v_sz_2928_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; 
lean_dec(v_a_2926_);
lean_dec_ref(v_params_2925_);
lean_dec_ref(v___x_2922_);
lean_dec_ref(v_compFieldVars_2921_);
lean_dec(v_lparams_2920_);
v___x_2938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2938_, 0, v_bs_2930_);
return v___x_2938_;
}
else
{
uint8_t v___x_2939_; lean_object* v_v_2940_; lean_object* v___x_2941_; lean_object* v_bs_x27_2942_; lean_object* v___y_2944_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___f_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
v___x_2939_ = lean_nat_dec_lt(v___x_2923_, v___x_2924_);
v_v_2940_ = lean_array_uget(v_bs_2930_, v_i_2929_);
v___x_2941_ = lean_unsigned_to_nat(0u);
v_bs_x27_2942_ = lean_array_uset(v_bs_2930_, v_i_2929_, v___x_2941_);
lean_inc(v_lparams_2920_);
lean_inc(v_v_2940_);
v___x_2958_ = l_Lean_mkConst(v_v_2940_, v_lparams_2920_);
v___x_2959_ = lean_box(v___x_2939_);
v___x_2960_ = lean_box(v___x_2927_);
lean_inc(v_a_2926_);
lean_inc_ref(v___x_2958_);
lean_inc_ref(v_params_2925_);
lean_inc_ref(v___x_2922_);
lean_inc_ref(v_compFieldVars_2921_);
v___f_2961_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed), 16, 8);
lean_closure_set(v___f_2961_, 0, v_v_2940_);
lean_closure_set(v___f_2961_, 1, v_compFieldVars_2921_);
lean_closure_set(v___f_2961_, 2, v___x_2922_);
lean_closure_set(v___f_2961_, 3, v___x_2959_);
lean_closure_set(v___f_2961_, 4, v_params_2925_);
lean_closure_set(v___f_2961_, 5, v___x_2958_);
lean_closure_set(v___f_2961_, 6, v_a_2926_);
lean_closure_set(v___f_2961_, 7, v___x_2960_);
v___x_2962_ = l_Lean_mkAppN(v___x_2958_, v_params_2925_);
lean_inc(v___y_2935_);
lean_inc_ref(v___y_2934_);
lean_inc(v___y_2933_);
lean_inc_ref(v___y_2932_);
v___x_2963_ = lean_infer_type(v___x_2962_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_object* v_a_2964_; lean_object* v___x_2965_; 
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
lean_inc(v_a_2964_);
lean_dec_ref_known(v___x_2963_, 1);
v___x_2965_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2964_, v___f_2961_, v___x_2927_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_);
v___y_2944_ = v___x_2965_;
goto v___jp_2943_;
}
else
{
lean_dec_ref(v___f_2961_);
v___y_2944_ = v___x_2963_;
goto v___jp_2943_;
}
v___jp_2943_:
{
if (lean_obj_tag(v___y_2944_) == 0)
{
lean_object* v_a_2945_; size_t v___x_2946_; size_t v___x_2947_; lean_object* v___x_2948_; 
v_a_2945_ = lean_ctor_get(v___y_2944_, 0);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___y_2944_, 1);
v___x_2946_ = ((size_t)1ULL);
v___x_2947_ = lean_usize_add(v_i_2929_, v___x_2946_);
v___x_2948_ = lean_array_uset(v_bs_x27_2942_, v_i_2929_, v_a_2945_);
v_i_2929_ = v___x_2947_;
v_bs_2930_ = v___x_2948_;
goto _start;
}
else
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2957_; 
lean_dec_ref(v_bs_x27_2942_);
lean_dec(v_a_2926_);
lean_dec_ref(v_params_2925_);
lean_dec_ref(v___x_2922_);
lean_dec_ref(v_compFieldVars_2921_);
lean_dec(v_lparams_2920_);
v_a_2950_ = lean_ctor_get(v___y_2944_, 0);
v_isSharedCheck_2957_ = !lean_is_exclusive(v___y_2944_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2952_ = v___y_2944_;
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___y_2944_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2955_; 
if (v_isShared_2953_ == 0)
{
v___x_2955_ = v___x_2952_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_a_2950_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed(lean_object** _args){
lean_object* v_lparams_2966_ = _args[0];
lean_object* v_compFieldVars_2967_ = _args[1];
lean_object* v___x_2968_ = _args[2];
lean_object* v___x_2969_ = _args[3];
lean_object* v___x_2970_ = _args[4];
lean_object* v_params_2971_ = _args[5];
lean_object* v_a_2972_ = _args[6];
lean_object* v___x_2973_ = _args[7];
lean_object* v_sz_2974_ = _args[8];
lean_object* v_i_2975_ = _args[9];
lean_object* v_bs_2976_ = _args[10];
lean_object* v___y_2977_ = _args[11];
lean_object* v___y_2978_ = _args[12];
lean_object* v___y_2979_ = _args[13];
lean_object* v___y_2980_ = _args[14];
lean_object* v___y_2981_ = _args[15];
lean_object* v___y_2982_ = _args[16];
_start:
{
uint8_t v___x_12767__boxed_2983_; size_t v_sz_boxed_2984_; size_t v_i_boxed_2985_; lean_object* v_res_2986_; 
v___x_12767__boxed_2983_ = lean_unbox(v___x_2973_);
v_sz_boxed_2984_ = lean_unbox_usize(v_sz_2974_);
lean_dec(v_sz_2974_);
v_i_boxed_2985_ = lean_unbox_usize(v_i_2975_);
lean_dec(v_i_2975_);
v_res_2986_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(v_lparams_2966_, v_compFieldVars_2967_, v___x_2968_, v___x_2969_, v___x_2970_, v_params_2971_, v_a_2972_, v___x_12767__boxed_2983_, v_sz_boxed_2984_, v_i_boxed_2985_, v_bs_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec_ref(v___y_2977_);
lean_dec(v___x_2970_);
lean_dec(v___x_2969_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(size_t v_sz_2987_, size_t v_i_2988_, lean_object* v_bs_2989_){
_start:
{
uint8_t v___x_2990_; 
v___x_2990_ = lean_usize_dec_lt(v_i_2988_, v_sz_2987_);
if (v___x_2990_ == 0)
{
return v_bs_2989_;
}
else
{
lean_object* v_v_2991_; lean_object* v___x_2992_; lean_object* v_bs_x27_2993_; lean_object* v___x_2994_; size_t v___x_2995_; size_t v___x_2996_; lean_object* v___x_2997_; 
v_v_2991_ = lean_array_uget(v_bs_2989_, v_i_2988_);
v___x_2992_ = lean_unsigned_to_nat(0u);
v_bs_x27_2993_ = lean_array_uset(v_bs_2989_, v_i_2988_, v___x_2992_);
v___x_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2994_, 0, v_v_2991_);
v___x_2995_ = ((size_t)1ULL);
v___x_2996_ = lean_usize_add(v_i_2988_, v___x_2995_);
v___x_2997_ = lean_array_uset(v_bs_x27_2993_, v_i_2988_, v___x_2994_);
v_i_2988_ = v___x_2996_;
v_bs_2989_ = v___x_2997_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1___boxed(lean_object* v_sz_2999_, lean_object* v_i_3000_, lean_object* v_bs_3001_){
_start:
{
size_t v_sz_boxed_3002_; size_t v_i_boxed_3003_; lean_object* v_res_3004_; 
v_sz_boxed_3002_ = lean_unbox_usize(v_sz_2999_);
lean_dec(v_sz_2999_);
v_i_boxed_3003_ = lean_unbox_usize(v_i_3000_);
lean_dec(v_i_3000_);
v_res_3004_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_boxed_3002_, v_i_boxed_3003_, v_bs_3001_);
return v_res_3004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(lean_object* v_ctors_3007_, lean_object* v_lparams_3008_, lean_object* v_compFieldVars_3009_, lean_object* v_params_3010_, lean_object* v_val_3011_, lean_object* v___x_3012_, lean_object* v_indices_3013_, lean_object* v_xImpl_3014_, lean_object* v___x_3015_, lean_object* v_levelParams_3016_, lean_object* v_as_3017_, size_t v_sz_3018_, size_t v_i_3019_, lean_object* v_b_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_){
_start:
{
lean_object* v_a_3028_; uint8_t v___x_3032_; 
v___x_3032_ = lean_usize_dec_lt(v_i_3019_, v_sz_3018_);
if (v___x_3032_ == 0)
{
lean_object* v___x_3033_; 
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v___x_3033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3033_, 0, v_b_3020_);
return v___x_3033_;
}
else
{
lean_object* v_array_3034_; lean_object* v_start_3035_; lean_object* v_stop_3036_; uint8_t v___x_3037_; 
v_array_3034_ = lean_ctor_get(v_b_3020_, 0);
v_start_3035_ = lean_ctor_get(v_b_3020_, 1);
v_stop_3036_ = lean_ctor_get(v_b_3020_, 2);
v___x_3037_ = lean_nat_dec_lt(v_start_3035_, v_stop_3036_);
if (v___x_3037_ == 0)
{
lean_object* v___x_3038_; 
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v___x_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3038_, 0, v_b_3020_);
return v___x_3038_;
}
else
{
lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3221_; 
lean_inc(v_stop_3036_);
lean_inc(v_start_3035_);
lean_inc_ref(v_array_3034_);
v_isSharedCheck_3221_ = !lean_is_exclusive(v_b_3020_);
if (v_isSharedCheck_3221_ == 0)
{
lean_object* v_unused_3222_; lean_object* v_unused_3223_; lean_object* v_unused_3224_; 
v_unused_3222_ = lean_ctor_get(v_b_3020_, 2);
lean_dec(v_unused_3222_);
v_unused_3223_ = lean_ctor_get(v_b_3020_, 1);
lean_dec(v_unused_3223_);
v_unused_3224_ = lean_ctor_get(v_b_3020_, 0);
lean_dec(v_unused_3224_);
v___x_3040_ = v_b_3020_;
v_isShared_3041_ = v_isSharedCheck_3221_;
goto v_resetjp_3039_;
}
else
{
lean_dec(v_b_3020_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3221_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v_a_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3047_; 
v_a_3042_ = lean_array_uget_borrowed(v_as_3017_, v_i_3019_);
v___x_3043_ = lean_array_fget(v_array_3034_, v_start_3035_);
v___x_3044_ = lean_unsigned_to_nat(1u);
v___x_3045_ = lean_nat_add(v_start_3035_, v___x_3044_);
lean_inc(v_stop_3036_);
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 1, v___x_3045_);
v___x_3047_ = v___x_3040_;
goto v_reusejp_3046_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_array_3034_);
lean_ctor_set(v_reuseFailAlloc_3220_, 1, v___x_3045_);
lean_ctor_set(v_reuseFailAlloc_3220_, 2, v_stop_3036_);
v___x_3047_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3046_;
}
v_reusejp_3046_:
{
lean_object* v___x_3048_; lean_object* v_env_3049_; uint8_t v___x_3050_; 
v___x_3048_ = lean_st_ref_get(v___y_3025_);
v_env_3049_ = lean_ctor_get(v___x_3048_, 0);
lean_inc_ref(v_env_3049_);
lean_dec(v___x_3048_);
lean_inc(v_a_3042_);
v___x_3050_ = l_Lean_isExtern(v_env_3049_, v_a_3042_);
if (v___x_3050_ == 0)
{
lean_object* v___x_3051_; size_t v_sz_3052_; size_t v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
lean_inc(v_ctors_3007_);
v___x_3051_ = lean_array_mk(v_ctors_3007_);
v_sz_3052_ = lean_array_size(v___x_3051_);
v___x_3053_ = ((size_t)0ULL);
v___x_3054_ = lean_box(v___x_3050_);
v___x_3055_ = lean_box_usize(v_sz_3052_);
v___x_3056_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1));
lean_inc(v_a_3042_);
lean_inc_ref(v_params_3010_);
lean_inc(v___x_3043_);
lean_inc_ref(v_compFieldVars_3009_);
lean_inc(v_lparams_3008_);
v___x_3057_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_3057_, 0, v_lparams_3008_);
lean_closure_set(v___x_3057_, 1, v_compFieldVars_3009_);
lean_closure_set(v___x_3057_, 2, v___x_3043_);
lean_closure_set(v___x_3057_, 3, v_start_3035_);
lean_closure_set(v___x_3057_, 4, v_stop_3036_);
lean_closure_set(v___x_3057_, 5, v_params_3010_);
lean_closure_set(v___x_3057_, 6, v_a_3042_);
lean_closure_set(v___x_3057_, 7, v___x_3054_);
lean_closure_set(v___x_3057_, 8, v___x_3055_);
lean_closure_set(v___x_3057_, 9, v___x_3056_);
lean_closure_set(v___x_3057_, 10, v___x_3051_);
v___x_3058_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_3057_, v___x_3037_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v___x_3077_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref_known(v___x_3058_, 1);
v___x_3060_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_3042_);
v___x_3061_ = l_Lean_Name_append(v_a_3042_, v___x_3060_);
lean_inc(v___y_3025_);
lean_inc_ref(v___y_3024_);
lean_inc(v___y_3023_);
lean_inc_ref(v___y_3022_);
lean_inc(v___x_3043_);
v___x_3077_ = lean_infer_type(v___x_3043_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_object* v_a_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; uint8_t v___x_3082_; lean_object* v___x_3083_; 
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
lean_inc(v_a_3078_);
lean_dec_ref_known(v___x_3077_, 1);
v___x_3079_ = lean_mk_empty_array_with_capacity(v___x_3044_);
lean_inc_ref(v_val_3011_);
lean_inc_ref(v___x_3079_);
v___x_3080_ = lean_array_push(v___x_3079_, v_val_3011_);
lean_inc_ref(v___x_3012_);
v___x_3081_ = l_Array_append___redArg(v___x_3012_, v___x_3080_);
lean_dec_ref(v___x_3080_);
v___x_3082_ = 1;
v___x_3083_ = l_Lean_Meta_mkForallFVars(v___x_3081_, v_a_3078_, v___x_3050_, v___x_3037_, v___x_3037_, v___x_3082_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v___x_3085_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3083_, 1);
lean_inc(v___y_3025_);
lean_inc_ref(v___y_3024_);
lean_inc(v___y_3023_);
lean_inc_ref(v___y_3022_);
v___x_3085_ = lean_infer_type(v___x_3043_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_object* v_a_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_a_3086_);
lean_dec_ref_known(v___x_3085_, 1);
lean_inc_ref(v_xImpl_3014_);
lean_inc_ref(v_indices_3013_);
v___x_3087_ = lean_array_push(v_indices_3013_, v_xImpl_3014_);
v___x_3088_ = l_Lean_Meta_mkLambdaFVars(v___x_3087_, v_a_3086_, v___x_3050_, v___x_3037_, v___x_3050_, v___x_3037_, v___x_3082_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
lean_dec_ref(v___x_3087_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v___x_3090_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
lean_inc(v_a_3089_);
lean_dec_ref_known(v___x_3088_, 1);
lean_inc(v___y_3025_);
lean_inc_ref(v___y_3024_);
lean_inc(v___y_3023_);
lean_inc_ref(v___y_3022_);
lean_inc_ref(v_xImpl_3014_);
v___x_3090_ = lean_infer_type(v_xImpl_3014_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v_a_3091_; lean_object* v___x_3092_; 
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3091_);
lean_dec_ref_known(v___x_3090_, 1);
lean_inc_ref(v_val_3011_);
v___x_3092_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3091_, v_val_3011_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; size_t v_sz_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; 
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
lean_inc(v_a_3093_);
lean_dec_ref_known(v___x_3092_, 1);
lean_inc(v___x_3015_);
v___x_3094_ = l_Lean_mkCasesOnName(v___x_3015_);
lean_inc_ref(v___x_3079_);
v___x_3095_ = lean_array_push(v___x_3079_, v_a_3089_);
lean_inc_ref(v_params_3010_);
v___x_3096_ = l_Array_append___redArg(v_params_3010_, v___x_3095_);
lean_dec_ref(v___x_3095_);
v___x_3097_ = l_Array_append___redArg(v___x_3096_, v_indices_3013_);
v___x_3098_ = lean_array_push(v___x_3079_, v_a_3093_);
v___x_3099_ = l_Array_append___redArg(v___x_3097_, v___x_3098_);
lean_dec_ref(v___x_3098_);
v___x_3100_ = l_Array_append___redArg(v___x_3099_, v_a_3059_);
lean_dec(v_a_3059_);
v_sz_3101_ = lean_array_size(v___x_3100_);
v___x_3102_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3101_, v___x_3053_, v___x_3100_);
v___x_3103_ = l_Lean_Meta_mkAppOptM(v___x_3094_, v___x_3102_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v___x_3105_; 
v_a_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_a_3104_);
lean_dec_ref_known(v___x_3103_, 1);
v___x_3105_ = l_Lean_Meta_mkLambdaFVars(v___x_3081_, v_a_3104_, v___x_3050_, v___x_3037_, v___x_3050_, v___x_3037_, v___x_3082_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
lean_dec_ref(v___x_3081_);
if (lean_obj_tag(v___x_3105_) == 0)
{
lean_object* v_a_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; uint8_t v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v_a_3106_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_a_3106_);
lean_dec_ref_known(v___x_3105_, 1);
lean_inc(v_levelParams_3016_);
lean_inc_n(v___x_3061_, 2);
v___x_3107_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3061_);
lean_ctor_set(v___x_3107_, 1, v_levelParams_3016_);
lean_ctor_set(v___x_3107_, 2, v_a_3084_);
v___x_3108_ = lean_box(0);
v___x_3109_ = 0;
v___x_3110_ = lean_box(0);
v___x_3111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3061_);
lean_ctor_set(v___x_3111_, 1, v___x_3110_);
v___x_3112_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3112_, 0, v___x_3107_);
lean_ctor_set(v___x_3112_, 1, v_a_3106_);
lean_ctor_set(v___x_3112_, 2, v___x_3108_);
lean_ctor_set(v___x_3112_, 3, v___x_3111_);
lean_ctor_set_uint8(v___x_3112_, sizeof(void*)*4, v___x_3109_);
v___x_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3112_);
v___x_3114_ = l_Lean_addDecl(v___x_3113_, v___x_3050_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v___x_3115_; lean_object* v_env_3116_; lean_object* v___x_3117_; 
lean_dec_ref_known(v___x_3114_, 1);
v___x_3115_ = lean_st_ref_get(v___y_3025_);
v_env_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc_ref(v_env_3116_);
lean_dec(v___x_3115_);
lean_inc(v_a_3042_);
v___x_3117_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3116_, v_a_3042_);
if (lean_obj_tag(v___x_3117_) == 1)
{
lean_object* v_val_3118_; uint8_t v___x_3119_; lean_object* v___x_3120_; 
v_val_3118_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_val_3118_);
lean_dec_ref_known(v___x_3117_, 1);
v___x_3119_ = lean_unbox(v_val_3118_);
lean_dec(v_val_3118_);
lean_inc(v___x_3061_);
v___x_3120_ = l_Lean_Meta_setInlineAttribute(v___x_3061_, v___x_3119_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_dec_ref_known(v___x_3120_, 1);
v___y_3063_ = v___y_3021_;
v___y_3064_ = v___y_3022_;
v___y_3065_ = v___y_3023_;
v___y_3066_ = v___y_3024_;
v___y_3067_ = v___y_3025_;
goto v___jp_3062_;
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec(v___x_3061_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3120_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3120_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
else
{
lean_dec(v___x_3117_);
v___y_3063_ = v___y_3021_;
v___y_3064_ = v___y_3022_;
v___y_3065_ = v___y_3023_;
v___y_3066_ = v___y_3024_;
v___y_3067_ = v___y_3025_;
goto v___jp_3062_;
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec(v___x_3061_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3129_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3114_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3114_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
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
lean_object* v_a_3137_; lean_object* v___x_3139_; uint8_t v_isShared_3140_; uint8_t v_isSharedCheck_3144_; 
lean_dec(v_a_3084_);
lean_dec(v___x_3061_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3137_ = lean_ctor_get(v___x_3105_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3105_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3105_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3105_);
v___x_3139_ = lean_box(0);
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
v_resetjp_3138_:
{
lean_object* v___x_3142_; 
if (v_isShared_3140_ == 0)
{
v___x_3142_ = v___x_3139_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_a_3137_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v_a_3084_);
lean_dec_ref(v___x_3081_);
lean_dec(v___x_3061_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3145_ = lean_ctor_get(v___x_3103_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3103_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3103_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
lean_dec(v_a_3089_);
lean_dec(v_a_3084_);
lean_dec_ref(v___x_3081_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3061_);
lean_dec(v_a_3059_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3153_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3092_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3092_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3153_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
lean_dec(v_a_3089_);
lean_dec(v_a_3084_);
lean_dec_ref(v___x_3081_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3061_);
lean_dec(v_a_3059_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3161_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3090_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3090_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec(v_a_3084_);
lean_dec_ref(v___x_3081_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3061_);
lean_dec(v_a_3059_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3169_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3088_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3088_);
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
lean_dec(v_a_3084_);
lean_dec_ref(v___x_3081_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3061_);
lean_dec(v_a_3059_);
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3177_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3184_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3184_ == 0)
{
v___x_3179_ = v___x_3085_;
v_isShared_3180_ = v_isSharedCheck_3184_;
goto v_resetjp_3178_;
}
else
{
lean_inc(v_a_3177_);
lean_dec(v___x_3085_);
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
else
{
lean_object* v_a_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3192_; 
lean_dec_ref(v___x_3081_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3061_);
lean_dec(v_a_3059_);
lean_dec_ref(v___x_3047_);
lean_dec(v___x_3043_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3185_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3187_ = v___x_3083_;
v_isShared_3188_ = v_isSharedCheck_3192_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_a_3185_);
lean_dec(v___x_3083_);
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
else
{
lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3200_; 
lean_dec(v___x_3061_);
lean_dec(v_a_3059_);
lean_dec_ref(v___x_3047_);
lean_dec(v___x_3043_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3193_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3195_ = v___x_3077_;
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___x_3077_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3193_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
v___jp_3062_:
{
lean_object* v___x_3068_; 
lean_inc(v_a_3042_);
v___x_3068_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_3042_, v___x_3061_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_dec_ref_known(v___x_3068_, 1);
v_a_3028_ = v___x_3047_;
goto v___jp_3027_;
}
else
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3076_; 
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3069_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3071_ = v___x_3068_;
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_3068_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3069_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
else
{
lean_object* v_a_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3208_; 
lean_dec_ref(v___x_3047_);
lean_dec(v___x_3043_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3201_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3208_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3208_ == 0)
{
v___x_3203_ = v___x_3058_;
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_a_3201_);
lean_dec(v___x_3058_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3208_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___x_3206_; 
if (v_isShared_3204_ == 0)
{
v___x_3206_ = v___x_3203_;
goto v_reusejp_3205_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v_a_3201_);
v___x_3206_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3205_;
}
v_reusejp_3205_:
{
return v___x_3206_;
}
}
}
}
else
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_dec(v___x_3043_);
lean_dec(v_stop_3036_);
lean_dec(v_start_3035_);
v___x_3209_ = lean_mk_empty_array_with_capacity(v___x_3044_);
lean_inc(v_a_3042_);
v___x_3210_ = lean_array_push(v___x_3209_, v_a_3042_);
v___x_3211_ = l_Lean_compileDecls(v___x_3210_, v___x_3037_, v___y_3024_, v___y_3025_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_dec_ref_known(v___x_3211_, 1);
v_a_3028_ = v___x_3047_;
goto v___jp_3027_;
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
lean_dec_ref(v___x_3047_);
lean_dec(v_levelParams_3016_);
lean_dec(v___x_3015_);
lean_dec_ref(v_xImpl_3014_);
lean_dec_ref(v_indices_3013_);
lean_dec_ref(v___x_3012_);
lean_dec_ref(v_val_3011_);
lean_dec_ref(v_params_3010_);
lean_dec_ref(v_compFieldVars_3009_);
lean_dec(v_lparams_3008_);
lean_dec(v_ctors_3007_);
v_a_3212_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3211_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3211_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
}
}
}
}
v___jp_3027_:
{
size_t v___x_3029_; size_t v___x_3030_; 
v___x_3029_ = ((size_t)1ULL);
v___x_3030_ = lean_usize_add(v_i_3019_, v___x_3029_);
v_i_3019_ = v___x_3030_;
v_b_3020_ = v_a_3028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed(lean_object** _args){
lean_object* v_ctors_3225_ = _args[0];
lean_object* v_lparams_3226_ = _args[1];
lean_object* v_compFieldVars_3227_ = _args[2];
lean_object* v_params_3228_ = _args[3];
lean_object* v_val_3229_ = _args[4];
lean_object* v___x_3230_ = _args[5];
lean_object* v_indices_3231_ = _args[6];
lean_object* v_xImpl_3232_ = _args[7];
lean_object* v___x_3233_ = _args[8];
lean_object* v_levelParams_3234_ = _args[9];
lean_object* v_as_3235_ = _args[10];
lean_object* v_sz_3236_ = _args[11];
lean_object* v_i_3237_ = _args[12];
lean_object* v_b_3238_ = _args[13];
lean_object* v___y_3239_ = _args[14];
lean_object* v___y_3240_ = _args[15];
lean_object* v___y_3241_ = _args[16];
lean_object* v___y_3242_ = _args[17];
lean_object* v___y_3243_ = _args[18];
lean_object* v___y_3244_ = _args[19];
_start:
{
size_t v_sz_boxed_3245_; size_t v_i_boxed_3246_; lean_object* v_res_3247_; 
v_sz_boxed_3245_ = lean_unbox_usize(v_sz_3236_);
lean_dec(v_sz_3236_);
v_i_boxed_3246_ = lean_unbox_usize(v_i_3237_);
lean_dec(v_i_3237_);
v_res_3247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3225_, v_lparams_3226_, v_compFieldVars_3227_, v_params_3228_, v_val_3229_, v___x_3230_, v_indices_3231_, v_xImpl_3232_, v___x_3233_, v_levelParams_3234_, v_as_3235_, v_sz_boxed_3245_, v_i_boxed_3246_, v_b_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
lean_dec(v___y_3243_);
lean_dec_ref(v___y_3242_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec_ref(v___y_3239_);
lean_dec_ref(v_as_3235_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(lean_object* v_lparams_3248_, lean_object* v_compFieldVars_3249_, lean_object* v_params_3250_, lean_object* v_ctors_3251_, lean_object* v_val_3252_, lean_object* v___x_3253_, lean_object* v_indices_3254_, lean_object* v_xImpl_3255_, lean_object* v___x_3256_, lean_object* v_levelParams_3257_, lean_object* v_as_3258_, size_t v_sz_3259_, size_t v_i_3260_, lean_object* v_b_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_){
_start:
{
lean_object* v_a_3269_; uint8_t v___x_3273_; 
v___x_3273_ = lean_usize_dec_lt(v_i_3260_, v_sz_3259_);
if (v___x_3273_ == 0)
{
lean_object* v___x_3274_; 
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v___x_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3274_, 0, v_b_3261_);
return v___x_3274_;
}
else
{
lean_object* v_array_3275_; lean_object* v_start_3276_; lean_object* v_stop_3277_; uint8_t v___x_3278_; 
v_array_3275_ = lean_ctor_get(v_b_3261_, 0);
v_start_3276_ = lean_ctor_get(v_b_3261_, 1);
v_stop_3277_ = lean_ctor_get(v_b_3261_, 2);
v___x_3278_ = lean_nat_dec_lt(v_start_3276_, v_stop_3277_);
if (v___x_3278_ == 0)
{
lean_object* v___x_3279_; 
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v___x_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3279_, 0, v_b_3261_);
return v___x_3279_;
}
else
{
lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3462_; 
lean_inc(v_stop_3277_);
lean_inc(v_start_3276_);
lean_inc_ref(v_array_3275_);
v_isSharedCheck_3462_ = !lean_is_exclusive(v_b_3261_);
if (v_isSharedCheck_3462_ == 0)
{
lean_object* v_unused_3463_; lean_object* v_unused_3464_; lean_object* v_unused_3465_; 
v_unused_3463_ = lean_ctor_get(v_b_3261_, 2);
lean_dec(v_unused_3463_);
v_unused_3464_ = lean_ctor_get(v_b_3261_, 1);
lean_dec(v_unused_3464_);
v_unused_3465_ = lean_ctor_get(v_b_3261_, 0);
lean_dec(v_unused_3465_);
v___x_3281_ = v_b_3261_;
v_isShared_3282_ = v_isSharedCheck_3462_;
goto v_resetjp_3280_;
}
else
{
lean_dec(v_b_3261_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3462_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v_a_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3288_; 
v_a_3283_ = lean_array_uget_borrowed(v_as_3258_, v_i_3260_);
v___x_3284_ = lean_array_fget(v_array_3275_, v_start_3276_);
v___x_3285_ = lean_unsigned_to_nat(1u);
v___x_3286_ = lean_nat_add(v_start_3276_, v___x_3285_);
lean_inc(v_stop_3277_);
if (v_isShared_3282_ == 0)
{
lean_ctor_set(v___x_3281_, 1, v___x_3286_);
v___x_3288_ = v___x_3281_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_array_3275_);
lean_ctor_set(v_reuseFailAlloc_3461_, 1, v___x_3286_);
lean_ctor_set(v_reuseFailAlloc_3461_, 2, v_stop_3277_);
v___x_3288_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
lean_object* v___x_3289_; lean_object* v_env_3290_; uint8_t v___x_3291_; 
v___x_3289_ = lean_st_ref_get(v___y_3266_);
v_env_3290_ = lean_ctor_get(v___x_3289_, 0);
lean_inc_ref(v_env_3290_);
lean_dec(v___x_3289_);
lean_inc(v_a_3283_);
v___x_3291_ = l_Lean_isExtern(v_env_3290_, v_a_3283_);
if (v___x_3291_ == 0)
{
lean_object* v___x_3292_; size_t v_sz_3293_; size_t v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
lean_inc(v_ctors_3251_);
v___x_3292_ = lean_array_mk(v_ctors_3251_);
v_sz_3293_ = lean_array_size(v___x_3292_);
v___x_3294_ = ((size_t)0ULL);
v___x_3295_ = lean_box(v___x_3291_);
v___x_3296_ = lean_box_usize(v_sz_3293_);
v___x_3297_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1));
lean_inc(v_a_3283_);
lean_inc_ref(v_params_3250_);
lean_inc(v___x_3284_);
lean_inc_ref(v_compFieldVars_3249_);
lean_inc(v_lparams_3248_);
v___x_3298_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_3298_, 0, v_lparams_3248_);
lean_closure_set(v___x_3298_, 1, v_compFieldVars_3249_);
lean_closure_set(v___x_3298_, 2, v___x_3284_);
lean_closure_set(v___x_3298_, 3, v_start_3276_);
lean_closure_set(v___x_3298_, 4, v_stop_3277_);
lean_closure_set(v___x_3298_, 5, v_params_3250_);
lean_closure_set(v___x_3298_, 6, v_a_3283_);
lean_closure_set(v___x_3298_, 7, v___x_3295_);
lean_closure_set(v___x_3298_, 8, v___x_3296_);
lean_closure_set(v___x_3298_, 9, v___x_3297_);
lean_closure_set(v___x_3298_, 10, v___x_3292_);
v___x_3299_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_3298_, v___x_3278_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___x_3318_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_a_3300_);
lean_dec_ref_known(v___x_3299_, 1);
v___x_3301_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_3283_);
v___x_3302_ = l_Lean_Name_append(v_a_3283_, v___x_3301_);
lean_inc(v___y_3266_);
lean_inc_ref(v___y_3265_);
lean_inc(v___y_3264_);
lean_inc_ref(v___y_3263_);
lean_inc(v___x_3284_);
v___x_3318_ = lean_infer_type(v___x_3284_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_object* v_a_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; uint8_t v___x_3323_; lean_object* v___x_3324_; 
v_a_3319_ = lean_ctor_get(v___x_3318_, 0);
lean_inc(v_a_3319_);
lean_dec_ref_known(v___x_3318_, 1);
v___x_3320_ = lean_mk_empty_array_with_capacity(v___x_3285_);
lean_inc_ref(v_val_3252_);
lean_inc_ref(v___x_3320_);
v___x_3321_ = lean_array_push(v___x_3320_, v_val_3252_);
lean_inc_ref(v___x_3253_);
v___x_3322_ = l_Array_append___redArg(v___x_3253_, v___x_3321_);
lean_dec_ref(v___x_3321_);
v___x_3323_ = 1;
v___x_3324_ = l_Lean_Meta_mkForallFVars(v___x_3322_, v_a_3319_, v___x_3291_, v___x_3278_, v___x_3278_, v___x_3323_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3326_; 
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
lean_inc(v_a_3325_);
lean_dec_ref_known(v___x_3324_, 1);
lean_inc(v___y_3266_);
lean_inc_ref(v___y_3265_);
lean_inc(v___y_3264_);
lean_inc_ref(v___y_3263_);
v___x_3326_ = lean_infer_type(v___x_3284_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v_a_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_a_3327_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3327_);
lean_dec_ref_known(v___x_3326_, 1);
lean_inc_ref(v_xImpl_3255_);
lean_inc_ref(v_indices_3254_);
v___x_3328_ = lean_array_push(v_indices_3254_, v_xImpl_3255_);
v___x_3329_ = l_Lean_Meta_mkLambdaFVars(v___x_3328_, v_a_3327_, v___x_3291_, v___x_3278_, v___x_3291_, v___x_3278_, v___x_3323_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
lean_dec_ref(v___x_3328_);
if (lean_obj_tag(v___x_3329_) == 0)
{
lean_object* v_a_3330_; lean_object* v___x_3331_; 
v_a_3330_ = lean_ctor_get(v___x_3329_, 0);
lean_inc(v_a_3330_);
lean_dec_ref_known(v___x_3329_, 1);
lean_inc(v___y_3266_);
lean_inc_ref(v___y_3265_);
lean_inc(v___y_3264_);
lean_inc_ref(v___y_3263_);
lean_inc_ref(v_xImpl_3255_);
v___x_3331_ = lean_infer_type(v_xImpl_3255_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3331_) == 0)
{
lean_object* v_a_3332_; lean_object* v___x_3333_; 
v_a_3332_ = lean_ctor_get(v___x_3331_, 0);
lean_inc(v_a_3332_);
lean_dec_ref_known(v___x_3331_, 1);
lean_inc_ref(v_val_3252_);
v___x_3333_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3332_, v_val_3252_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3333_) == 0)
{
lean_object* v_a_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; size_t v_sz_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v_a_3334_ = lean_ctor_get(v___x_3333_, 0);
lean_inc(v_a_3334_);
lean_dec_ref_known(v___x_3333_, 1);
lean_inc(v___x_3256_);
v___x_3335_ = l_Lean_mkCasesOnName(v___x_3256_);
lean_inc_ref(v___x_3320_);
v___x_3336_ = lean_array_push(v___x_3320_, v_a_3330_);
lean_inc_ref(v_params_3250_);
v___x_3337_ = l_Array_append___redArg(v_params_3250_, v___x_3336_);
lean_dec_ref(v___x_3336_);
v___x_3338_ = l_Array_append___redArg(v___x_3337_, v_indices_3254_);
v___x_3339_ = lean_array_push(v___x_3320_, v_a_3334_);
v___x_3340_ = l_Array_append___redArg(v___x_3338_, v___x_3339_);
lean_dec_ref(v___x_3339_);
v___x_3341_ = l_Array_append___redArg(v___x_3340_, v_a_3300_);
lean_dec(v_a_3300_);
v_sz_3342_ = lean_array_size(v___x_3341_);
v___x_3343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3342_, v___x_3294_, v___x_3341_);
v___x_3344_ = l_Lean_Meta_mkAppOptM(v___x_3335_, v___x_3343_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3346_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
lean_inc(v_a_3345_);
lean_dec_ref_known(v___x_3344_, 1);
v___x_3346_ = l_Lean_Meta_mkLambdaFVars(v___x_3322_, v_a_3345_, v___x_3291_, v___x_3278_, v___x_3291_, v___x_3278_, v___x_3323_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
lean_dec_ref(v___x_3322_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_a_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; uint8_t v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v_a_3347_ = lean_ctor_get(v___x_3346_, 0);
lean_inc(v_a_3347_);
lean_dec_ref_known(v___x_3346_, 1);
lean_inc(v_levelParams_3257_);
lean_inc_n(v___x_3302_, 2);
v___x_3348_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3348_, 0, v___x_3302_);
lean_ctor_set(v___x_3348_, 1, v_levelParams_3257_);
lean_ctor_set(v___x_3348_, 2, v_a_3325_);
v___x_3349_ = lean_box(0);
v___x_3350_ = 0;
v___x_3351_ = lean_box(0);
v___x_3352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3302_);
lean_ctor_set(v___x_3352_, 1, v___x_3351_);
v___x_3353_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3353_, 0, v___x_3348_);
lean_ctor_set(v___x_3353_, 1, v_a_3347_);
lean_ctor_set(v___x_3353_, 2, v___x_3349_);
lean_ctor_set(v___x_3353_, 3, v___x_3352_);
lean_ctor_set_uint8(v___x_3353_, sizeof(void*)*4, v___x_3350_);
v___x_3354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3354_, 0, v___x_3353_);
v___x_3355_ = l_Lean_addDecl(v___x_3354_, v___x_3291_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v___x_3356_; lean_object* v_env_3357_; lean_object* v___x_3358_; 
lean_dec_ref_known(v___x_3355_, 1);
v___x_3356_ = lean_st_ref_get(v___y_3266_);
v_env_3357_ = lean_ctor_get(v___x_3356_, 0);
lean_inc_ref(v_env_3357_);
lean_dec(v___x_3356_);
lean_inc(v_a_3283_);
v___x_3358_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3357_, v_a_3283_);
if (lean_obj_tag(v___x_3358_) == 1)
{
lean_object* v_val_3359_; uint8_t v___x_3360_; lean_object* v___x_3361_; 
v_val_3359_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_val_3359_);
lean_dec_ref_known(v___x_3358_, 1);
v___x_3360_ = lean_unbox(v_val_3359_);
lean_dec(v_val_3359_);
lean_inc(v___x_3302_);
v___x_3361_ = l_Lean_Meta_setInlineAttribute(v___x_3302_, v___x_3360_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3361_) == 0)
{
lean_dec_ref_known(v___x_3361_, 1);
v___y_3304_ = v___y_3262_;
v___y_3305_ = v___y_3263_;
v___y_3306_ = v___y_3264_;
v___y_3307_ = v___y_3265_;
v___y_3308_ = v___y_3266_;
goto v___jp_3303_;
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec(v___x_3302_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3362_ = lean_ctor_get(v___x_3361_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3361_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3361_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3361_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
else
{
lean_dec(v___x_3358_);
v___y_3304_ = v___y_3262_;
v___y_3305_ = v___y_3263_;
v___y_3306_ = v___y_3264_;
v___y_3307_ = v___y_3265_;
v___y_3308_ = v___y_3266_;
goto v___jp_3303_;
}
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
lean_dec(v___x_3302_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3370_ = lean_ctor_get(v___x_3355_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3355_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3355_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3355_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3375_; 
if (v_isShared_3373_ == 0)
{
v___x_3375_ = v___x_3372_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v_a_3370_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
}
}
}
}
else
{
lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3385_; 
lean_dec(v_a_3325_);
lean_dec(v___x_3302_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3378_ = lean_ctor_get(v___x_3346_, 0);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3346_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3380_ = v___x_3346_;
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v___x_3346_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v___x_3383_; 
if (v_isShared_3381_ == 0)
{
v___x_3383_ = v___x_3380_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v_a_3378_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
return v___x_3383_;
}
}
}
}
else
{
lean_object* v_a_3386_; lean_object* v___x_3388_; uint8_t v_isShared_3389_; uint8_t v_isSharedCheck_3393_; 
lean_dec(v_a_3325_);
lean_dec_ref(v___x_3322_);
lean_dec(v___x_3302_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3386_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3388_ = v___x_3344_;
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3344_);
v___x_3388_ = lean_box(0);
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
v_resetjp_3387_:
{
lean_object* v___x_3391_; 
if (v_isShared_3389_ == 0)
{
v___x_3391_ = v___x_3388_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v_a_3386_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec(v_a_3330_);
lean_dec(v_a_3325_);
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec(v___x_3302_);
lean_dec(v_a_3300_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3394_ = lean_ctor_get(v___x_3333_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3333_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3333_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
return v___x_3399_;
}
}
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec(v_a_3330_);
lean_dec(v_a_3325_);
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec(v___x_3302_);
lean_dec(v_a_3300_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3402_ = lean_ctor_get(v___x_3331_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3331_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3331_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3331_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
lean_dec(v_a_3325_);
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec(v___x_3302_);
lean_dec(v_a_3300_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3410_ = lean_ctor_get(v___x_3329_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3329_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3329_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3329_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3425_; 
lean_dec(v_a_3325_);
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec(v___x_3302_);
lean_dec(v_a_3300_);
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3418_ = lean_ctor_get(v___x_3326_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v___x_3326_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3420_ = v___x_3326_;
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3326_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3423_; 
if (v_isShared_3421_ == 0)
{
v___x_3423_ = v___x_3420_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_a_3418_);
v___x_3423_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
return v___x_3423_;
}
}
}
}
else
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3433_; 
lean_dec_ref(v___x_3322_);
lean_dec_ref(v___x_3320_);
lean_dec(v___x_3302_);
lean_dec(v_a_3300_);
lean_dec_ref(v___x_3288_);
lean_dec(v___x_3284_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3426_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3428_ = v___x_3324_;
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3324_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
return v___x_3431_;
}
}
}
}
else
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3441_; 
lean_dec(v___x_3302_);
lean_dec(v_a_3300_);
lean_dec_ref(v___x_3288_);
lean_dec(v___x_3284_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3434_ = lean_ctor_get(v___x_3318_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3436_ = v___x_3318_;
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3318_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3441_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3439_; 
if (v_isShared_3437_ == 0)
{
v___x_3439_ = v___x_3436_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v_a_3434_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
return v___x_3439_;
}
}
}
v___jp_3303_:
{
lean_object* v___x_3309_; 
lean_inc(v_a_3283_);
v___x_3309_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_3283_, v___x_3302_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_dec_ref_known(v___x_3309_, 1);
v_a_3269_ = v___x_3288_;
goto v___jp_3268_;
}
else
{
lean_object* v_a_3310_; lean_object* v___x_3312_; uint8_t v_isShared_3313_; uint8_t v_isSharedCheck_3317_; 
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3310_ = lean_ctor_get(v___x_3309_, 0);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3309_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3312_ = v___x_3309_;
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
else
{
lean_inc(v_a_3310_);
lean_dec(v___x_3309_);
v___x_3312_ = lean_box(0);
v_isShared_3313_ = v_isSharedCheck_3317_;
goto v_resetjp_3311_;
}
v_resetjp_3311_:
{
lean_object* v___x_3315_; 
if (v_isShared_3313_ == 0)
{
v___x_3315_ = v___x_3312_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3310_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
}
else
{
lean_object* v_a_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3449_; 
lean_dec_ref(v___x_3288_);
lean_dec(v___x_3284_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3442_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3449_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3449_ == 0)
{
v___x_3444_ = v___x_3299_;
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_a_3442_);
lean_dec(v___x_3299_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3449_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v___x_3447_; 
if (v_isShared_3445_ == 0)
{
v___x_3447_ = v___x_3444_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3448_; 
v_reuseFailAlloc_3448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3448_, 0, v_a_3442_);
v___x_3447_ = v_reuseFailAlloc_3448_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
return v___x_3447_;
}
}
}
}
else
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
lean_dec(v___x_3284_);
lean_dec(v_stop_3277_);
lean_dec(v_start_3276_);
v___x_3450_ = lean_mk_empty_array_with_capacity(v___x_3285_);
lean_inc(v_a_3283_);
v___x_3451_ = lean_array_push(v___x_3450_, v_a_3283_);
v___x_3452_ = l_Lean_compileDecls(v___x_3451_, v___x_3278_, v___y_3265_, v___y_3266_);
if (lean_obj_tag(v___x_3452_) == 0)
{
lean_dec_ref_known(v___x_3452_, 1);
v_a_3269_ = v___x_3288_;
goto v___jp_3268_;
}
else
{
lean_object* v_a_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
lean_dec_ref(v___x_3288_);
lean_dec(v_levelParams_3257_);
lean_dec(v___x_3256_);
lean_dec_ref(v_xImpl_3255_);
lean_dec_ref(v_indices_3254_);
lean_dec_ref(v___x_3253_);
lean_dec_ref(v_val_3252_);
lean_dec(v_ctors_3251_);
lean_dec_ref(v_params_3250_);
lean_dec_ref(v_compFieldVars_3249_);
lean_dec(v_lparams_3248_);
v_a_3453_ = lean_ctor_get(v___x_3452_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3452_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3455_ = v___x_3452_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_a_3453_);
lean_dec(v___x_3452_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3453_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
}
}
}
}
}
v___jp_3268_:
{
size_t v___x_3270_; size_t v___x_3271_; lean_object* v___x_3272_; 
v___x_3270_ = ((size_t)1ULL);
v___x_3271_ = lean_usize_add(v_i_3260_, v___x_3270_);
v___x_3272_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3251_, v_lparams_3248_, v_compFieldVars_3249_, v_params_3250_, v_val_3252_, v___x_3253_, v_indices_3254_, v_xImpl_3255_, v___x_3256_, v_levelParams_3257_, v_as_3258_, v_sz_3259_, v___x_3271_, v_a_3269_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
return v___x_3272_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2___boxed(lean_object** _args){
lean_object* v_lparams_3466_ = _args[0];
lean_object* v_compFieldVars_3467_ = _args[1];
lean_object* v_params_3468_ = _args[2];
lean_object* v_ctors_3469_ = _args[3];
lean_object* v_val_3470_ = _args[4];
lean_object* v___x_3471_ = _args[5];
lean_object* v_indices_3472_ = _args[6];
lean_object* v_xImpl_3473_ = _args[7];
lean_object* v___x_3474_ = _args[8];
lean_object* v_levelParams_3475_ = _args[9];
lean_object* v_as_3476_ = _args[10];
lean_object* v_sz_3477_ = _args[11];
lean_object* v_i_3478_ = _args[12];
lean_object* v_b_3479_ = _args[13];
lean_object* v___y_3480_ = _args[14];
lean_object* v___y_3481_ = _args[15];
lean_object* v___y_3482_ = _args[16];
lean_object* v___y_3483_ = _args[17];
lean_object* v___y_3484_ = _args[18];
lean_object* v___y_3485_ = _args[19];
_start:
{
size_t v_sz_boxed_3486_; size_t v_i_boxed_3487_; lean_object* v_res_3488_; 
v_sz_boxed_3486_ = lean_unbox_usize(v_sz_3477_);
lean_dec(v_sz_3477_);
v_i_boxed_3487_ = lean_unbox_usize(v_i_3478_);
lean_dec(v_i_3478_);
v_res_3488_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3466_, v_compFieldVars_3467_, v_params_3468_, v_ctors_3469_, v_val_3470_, v___x_3471_, v_indices_3472_, v_xImpl_3473_, v___x_3474_, v_levelParams_3475_, v_as_3476_, v_sz_boxed_3486_, v_i_boxed_3487_, v_b_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_);
lean_dec(v___y_3484_);
lean_dec_ref(v___y_3483_);
lean_dec(v___y_3482_);
lean_dec_ref(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec_ref(v_as_3476_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(lean_object* v_compFieldVars_3489_, lean_object* v_compFields_3490_, lean_object* v_lparams_3491_, lean_object* v_params_3492_, lean_object* v_ctors_3493_, lean_object* v_val_3494_, lean_object* v___x_3495_, lean_object* v_indices_3496_, lean_object* v___x_3497_, lean_object* v_levelParams_3498_, lean_object* v_xImpl_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; size_t v_sz_3509_; size_t v___x_3510_; lean_object* v___x_3511_; 
v___x_3506_ = lean_unsigned_to_nat(0u);
v___x_3507_ = lean_array_get_size(v_compFieldVars_3489_);
lean_inc_ref(v_compFieldVars_3489_);
v___x_3508_ = l_Array_toSubarray___redArg(v_compFieldVars_3489_, v___x_3506_, v___x_3507_);
v_sz_3509_ = lean_array_size(v_compFields_3490_);
v___x_3510_ = ((size_t)0ULL);
v___x_3511_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3491_, v_compFieldVars_3489_, v_params_3492_, v_ctors_3493_, v_val_3494_, v___x_3495_, v_indices_3496_, v_xImpl_3499_, v___x_3497_, v_levelParams_3498_, v_compFields_3490_, v_sz_3509_, v___x_3510_, v___x_3508_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_);
if (lean_obj_tag(v___x_3511_) == 0)
{
lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3519_; 
v_isSharedCheck_3519_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3519_ == 0)
{
lean_object* v_unused_3520_; 
v_unused_3520_ = lean_ctor_get(v___x_3511_, 0);
lean_dec(v_unused_3520_);
v___x_3513_ = v___x_3511_;
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
else
{
lean_dec(v___x_3511_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3519_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3515_; lean_object* v___x_3517_; 
v___x_3515_ = lean_box(0);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 0, v___x_3515_);
v___x_3517_ = v___x_3513_;
goto v_reusejp_3516_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v___x_3515_);
v___x_3517_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3516_;
}
v_reusejp_3516_:
{
return v___x_3517_;
}
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
v_a_3521_ = lean_ctor_get(v___x_3511_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3511_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3511_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3511_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3526_; 
if (v_isShared_3524_ == 0)
{
v___x_3526_ = v___x_3523_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_a_3521_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed(lean_object** _args){
lean_object* v_compFieldVars_3529_ = _args[0];
lean_object* v_compFields_3530_ = _args[1];
lean_object* v_lparams_3531_ = _args[2];
lean_object* v_params_3532_ = _args[3];
lean_object* v_ctors_3533_ = _args[4];
lean_object* v_val_3534_ = _args[5];
lean_object* v___x_3535_ = _args[6];
lean_object* v_indices_3536_ = _args[7];
lean_object* v___x_3537_ = _args[8];
lean_object* v_levelParams_3538_ = _args[9];
lean_object* v_xImpl_3539_ = _args[10];
lean_object* v___y_3540_ = _args[11];
lean_object* v___y_3541_ = _args[12];
lean_object* v___y_3542_ = _args[13];
lean_object* v___y_3543_ = _args[14];
lean_object* v___y_3544_ = _args[15];
lean_object* v___y_3545_ = _args[16];
_start:
{
lean_object* v_res_3546_; 
v_res_3546_ = l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(v_compFieldVars_3529_, v_compFields_3530_, v_lparams_3531_, v_params_3532_, v_ctors_3533_, v_val_3534_, v___x_3535_, v_indices_3536_, v___x_3537_, v_levelParams_3538_, v_xImpl_3539_, v___y_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_);
lean_dec(v___y_3544_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3542_);
lean_dec_ref(v___y_3541_);
lean_dec_ref(v___y_3540_);
lean_dec_ref(v_compFields_3530_);
return v_res_3546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields(lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_){
_start:
{
lean_object* v_toInductiveVal_3556_; lean_object* v_toConstantVal_3557_; lean_object* v_lparams_3558_; lean_object* v_params_3559_; lean_object* v_compFields_3560_; lean_object* v_compFieldVars_3561_; lean_object* v_indices_3562_; lean_object* v_val_3563_; lean_object* v_ctors_3564_; lean_object* v_name_3565_; lean_object* v_levelParams_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___f_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v_toInductiveVal_3556_ = lean_ctor_get(v_a_3550_, 0);
v_toConstantVal_3557_ = lean_ctor_get(v_toInductiveVal_3556_, 0);
v_lparams_3558_ = lean_ctor_get(v_a_3550_, 1);
v_params_3559_ = lean_ctor_get(v_a_3550_, 2);
v_compFields_3560_ = lean_ctor_get(v_a_3550_, 3);
v_compFieldVars_3561_ = lean_ctor_get(v_a_3550_, 4);
v_indices_3562_ = lean_ctor_get(v_a_3550_, 5);
v_val_3563_ = lean_ctor_get(v_a_3550_, 6);
v_ctors_3564_ = lean_ctor_get(v_toInductiveVal_3556_, 4);
v_name_3565_ = lean_ctor_get(v_toConstantVal_3557_, 0);
v_levelParams_3566_ = lean_ctor_get(v_toConstantVal_3557_, 1);
v___x_3567_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_3568_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_3565_);
v___x_3569_ = l_Lean_Name_append(v_name_3565_, v___x_3568_);
lean_inc_n(v_lparams_3558_, 2);
lean_inc(v___x_3569_);
v___x_3570_ = l_Lean_mkConst(v___x_3569_, v_lparams_3558_);
lean_inc_ref_n(v_params_3559_, 2);
v___x_3571_ = l_Array_append___redArg(v_params_3559_, v_indices_3562_);
lean_inc(v_levelParams_3566_);
lean_inc_ref(v_indices_3562_);
lean_inc_ref(v___x_3571_);
lean_inc_ref(v_val_3563_);
lean_inc(v_ctors_3564_);
lean_inc_ref(v_compFields_3560_);
lean_inc_ref(v_compFieldVars_3561_);
v___f_3572_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed), 17, 10);
lean_closure_set(v___f_3572_, 0, v_compFieldVars_3561_);
lean_closure_set(v___f_3572_, 1, v_compFields_3560_);
lean_closure_set(v___f_3572_, 2, v_lparams_3558_);
lean_closure_set(v___f_3572_, 3, v_params_3559_);
lean_closure_set(v___f_3572_, 4, v_ctors_3564_);
lean_closure_set(v___f_3572_, 5, v_val_3563_);
lean_closure_set(v___f_3572_, 6, v___x_3571_);
lean_closure_set(v___f_3572_, 7, v_indices_3562_);
lean_closure_set(v___f_3572_, 8, v___x_3569_);
lean_closure_set(v___f_3572_, 9, v_levelParams_3566_);
v___x_3573_ = l_Lean_mkAppN(v___x_3570_, v___x_3571_);
lean_dec_ref(v___x_3571_);
v___x_3574_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_3567_, v___x_3573_, v___f_3572_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_);
return v___x_3574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___boxed(lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_){
_start:
{
lean_object* v_res_3581_; 
v_res_3581_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
lean_dec(v_a_3579_);
lean_dec_ref(v_a_3578_);
lean_dec(v_a_3577_);
lean_dec_ref(v_a_3576_);
lean_dec_ref(v_a_3575_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(lean_object* v_k_3582_, lean_object* v_b_3583_, lean_object* v_c_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_){
_start:
{
lean_object* v___x_3590_; 
lean_inc(v___y_3588_);
lean_inc_ref(v___y_3587_);
lean_inc(v___y_3586_);
lean_inc_ref(v___y_3585_);
v___x_3590_ = lean_apply_7(v_k_3582_, v_b_3583_, v_c_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, lean_box(0));
return v___x_3590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed(lean_object* v_k_3591_, lean_object* v_b_3592_, lean_object* v_c_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v_res_3599_; 
v_res_3599_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(v_k_3591_, v_b_3592_, v_c_3593_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_);
lean_dec(v___y_3597_);
lean_dec_ref(v___y_3596_);
lean_dec(v___y_3595_);
lean_dec_ref(v___y_3594_);
return v_res_3599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(lean_object* v_type_3600_, lean_object* v_k_3601_, uint8_t v_cleanupAnnotations_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v___f_3608_; uint8_t v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; 
v___f_3608_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3608_, 0, v_k_3601_);
v___x_3609_ = 0;
v___x_3610_ = lean_box(0);
v___x_3611_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3609_, v___x_3610_, v_type_3600_, v___f_3608_, v_cleanupAnnotations_3602_, v___x_3609_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_);
if (lean_obj_tag(v___x_3611_) == 0)
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
v_a_3612_ = lean_ctor_get(v___x_3611_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3611_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3611_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
else
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3627_; 
v_a_3620_ = lean_ctor_get(v___x_3611_, 0);
v_isSharedCheck_3627_ = !lean_is_exclusive(v___x_3611_);
if (v_isSharedCheck_3627_ == 0)
{
v___x_3622_ = v___x_3611_;
v_isShared_3623_ = v_isSharedCheck_3627_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v___x_3611_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3627_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v___x_3625_; 
if (v_isShared_3623_ == 0)
{
v___x_3625_ = v___x_3622_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3626_; 
v_reuseFailAlloc_3626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3626_, 0, v_a_3620_);
v___x_3625_ = v_reuseFailAlloc_3626_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
return v___x_3625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___boxed(lean_object* v_type_3628_, lean_object* v_k_3629_, lean_object* v_cleanupAnnotations_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3636_; lean_object* v_res_3637_; 
v_cleanupAnnotations_boxed_3636_ = lean_unbox(v_cleanupAnnotations_3630_);
v_res_3637_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3628_, v_k_3629_, v_cleanupAnnotations_boxed_3636_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_);
lean_dec(v___y_3634_);
lean_dec_ref(v___y_3633_);
lean_dec(v___y_3632_);
lean_dec_ref(v___y_3631_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(lean_object* v_00_u03b1_3638_, lean_object* v_type_3639_, lean_object* v_k_3640_, uint8_t v_cleanupAnnotations_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3639_, v_k_3640_, v_cleanupAnnotations_3641_, v___y_3642_, v___y_3643_, v___y_3644_, v___y_3645_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___boxed(lean_object* v_00_u03b1_3648_, lean_object* v_type_3649_, lean_object* v_k_3650_, lean_object* v_cleanupAnnotations_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3657_; lean_object* v_res_3658_; 
v_cleanupAnnotations_boxed_3657_ = lean_unbox(v_cleanupAnnotations_3651_);
v_res_3658_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(v_00_u03b1_3648_, v_type_3649_, v_k_3650_, v_cleanupAnnotations_boxed_3657_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_);
lean_dec(v___y_3655_);
lean_dec_ref(v___y_3654_);
lean_dec(v___y_3653_);
lean_dec_ref(v___y_3652_);
return v_res_3658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(lean_object* v_a_3659_, lean_object* v___x_3660_, lean_object* v___x_3661_, lean_object* v_compFields_3662_, lean_object* v___x_3663_, lean_object* v_val_3664_, lean_object* v_compFieldVars_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_){
_start:
{
lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3671_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3671_, 0, v_a_3659_);
lean_ctor_set(v___x_3671_, 1, v___x_3660_);
lean_ctor_set(v___x_3671_, 2, v___x_3661_);
lean_ctor_set(v___x_3671_, 3, v_compFields_3662_);
lean_ctor_set(v___x_3671_, 4, v_compFieldVars_3665_);
lean_ctor_set(v___x_3671_, 5, v___x_3663_);
lean_ctor_set(v___x_3671_, 6, v_val_3664_);
v___x_3672_ = l_Lean_Elab_ComputedFields_validateComputedFields(v___x_3671_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v___x_3673_; 
lean_dec_ref_known(v___x_3672_, 1);
v___x_3673_ = l_Lean_Elab_ComputedFields_mkImplType(v___x_3671_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; uint8_t v___x_3678_; lean_object* v___x_3679_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref_known(v___x_3673_, 1);
v___x_3675_ = lean_unsigned_to_nat(1u);
v___x_3676_ = lean_mk_empty_array_with_capacity(v___x_3675_);
v___x_3677_ = lean_array_push(v___x_3676_, v_a_3674_);
v___x_3678_ = 1;
v___x_3679_ = l_Lean_compileDecls(v___x_3677_, v___x_3678_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v___x_3680_; 
lean_dec_ref_known(v___x_3679_, 1);
v___x_3680_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v___x_3671_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3680_) == 0)
{
lean_object* v___x_3681_; 
lean_dec_ref_known(v___x_3680_, 1);
v___x_3681_ = l_Lean_Elab_ComputedFields_overrideConstructors(v___x_3671_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
if (lean_obj_tag(v___x_3681_) == 0)
{
lean_object* v___x_3682_; 
lean_dec_ref_known(v___x_3681_, 1);
v___x_3682_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v___x_3671_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_);
lean_dec_ref_known(v___x_3671_, 7);
return v___x_3682_;
}
else
{
lean_dec_ref_known(v___x_3671_, 7);
return v___x_3681_;
}
}
else
{
lean_dec_ref_known(v___x_3671_, 7);
return v___x_3680_;
}
}
else
{
lean_dec_ref_known(v___x_3671_, 7);
return v___x_3679_;
}
}
else
{
lean_object* v_a_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3690_; 
lean_dec_ref_known(v___x_3671_, 7);
v_a_3683_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3690_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3690_ == 0)
{
v___x_3685_ = v___x_3673_;
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_a_3683_);
lean_dec(v___x_3673_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3690_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3688_; 
if (v_isShared_3686_ == 0)
{
v___x_3688_ = v___x_3685_;
goto v_reusejp_3687_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_a_3683_);
v___x_3688_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3687_;
}
v_reusejp_3687_:
{
return v___x_3688_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_3671_, 7);
return v___x_3672_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed(lean_object* v_a_3691_, lean_object* v___x_3692_, lean_object* v___x_3693_, lean_object* v_compFields_3694_, lean_object* v___x_3695_, lean_object* v_val_3696_, lean_object* v_compFieldVars_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(v_a_3691_, v___x_3692_, v___x_3693_, v_compFields_3694_, v___x_3695_, v_val_3696_, v_compFieldVars_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v___y_3699_);
lean_dec_ref(v___y_3698_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(lean_object* v___x_3704_, lean_object* v___x_3705_, lean_object* v_val_3706_, lean_object* v_v_3707_, lean_object* v_x_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3714_ = l_Array_append___redArg(v___x_3704_, v___x_3705_);
v___x_3715_ = lean_unsigned_to_nat(1u);
v___x_3716_ = lean_mk_empty_array_with_capacity(v___x_3715_);
v___x_3717_ = lean_array_push(v___x_3716_, v_val_3706_);
v___x_3718_ = l_Array_append___redArg(v___x_3714_, v___x_3717_);
lean_dec_ref(v___x_3717_);
v___x_3719_ = l_Lean_Meta_mkAppM(v_v_3707_, v___x_3718_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v___x_3721_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref_known(v___x_3719_, 1);
lean_inc(v___y_3712_);
lean_inc_ref(v___y_3711_);
lean_inc(v___y_3710_);
lean_inc_ref(v___y_3709_);
v___x_3721_ = lean_infer_type(v_a_3720_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
return v___x_3721_;
}
else
{
return v___x_3719_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed(lean_object* v___x_3722_, lean_object* v___x_3723_, lean_object* v_val_3724_, lean_object* v_v_3725_, lean_object* v_x_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(v___x_3722_, v___x_3723_, v_val_3724_, v_v_3725_, v_x_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec(v___y_3728_);
lean_dec_ref(v___y_3727_);
lean_dec_ref(v_x_3726_);
lean_dec_ref(v___x_3723_);
return v_res_3732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(lean_object* v___x_3733_, lean_object* v___x_3734_, lean_object* v_val_3735_, size_t v_sz_3736_, size_t v_i_3737_, lean_object* v_bs_3738_){
_start:
{
uint8_t v___x_3739_; 
v___x_3739_ = lean_usize_dec_lt(v_i_3737_, v_sz_3736_);
if (v___x_3739_ == 0)
{
lean_dec_ref(v_val_3735_);
lean_dec_ref(v___x_3734_);
lean_dec_ref(v___x_3733_);
return v_bs_3738_;
}
else
{
lean_object* v_v_3740_; lean_object* v___f_3741_; lean_object* v___x_3742_; lean_object* v_bs_x27_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; size_t v___x_3747_; size_t v___x_3748_; lean_object* v___x_3749_; 
v_v_3740_ = lean_array_uget(v_bs_3738_, v_i_3737_);
lean_inc(v_v_3740_);
lean_inc_ref(v_val_3735_);
lean_inc_ref(v___x_3734_);
lean_inc_ref(v___x_3733_);
v___f_3741_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3741_, 0, v___x_3733_);
lean_closure_set(v___f_3741_, 1, v___x_3734_);
lean_closure_set(v___f_3741_, 2, v_val_3735_);
lean_closure_set(v___f_3741_, 3, v_v_3740_);
v___x_3742_ = lean_unsigned_to_nat(0u);
v_bs_x27_3743_ = lean_array_uset(v_bs_3738_, v_i_3737_, v___x_3742_);
v___x_3744_ = lean_box(0);
v___x_3745_ = l_Lean_Name_updatePrefix(v_v_3740_, v___x_3744_);
v___x_3746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3746_, 0, v___x_3745_);
lean_ctor_set(v___x_3746_, 1, v___f_3741_);
v___x_3747_ = ((size_t)1ULL);
v___x_3748_ = lean_usize_add(v_i_3737_, v___x_3747_);
v___x_3749_ = lean_array_uset(v_bs_x27_3743_, v_i_3737_, v___x_3746_);
v_i_3737_ = v___x_3748_;
v_bs_3738_ = v___x_3749_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___boxed(lean_object* v___x_3751_, lean_object* v___x_3752_, lean_object* v_val_3753_, lean_object* v_sz_3754_, lean_object* v_i_3755_, lean_object* v_bs_3756_){
_start:
{
size_t v_sz_boxed_3757_; size_t v_i_boxed_3758_; lean_object* v_res_3759_; 
v_sz_boxed_3757_ = lean_unbox_usize(v_sz_3754_);
lean_dec(v_sz_3754_);
v_i_boxed_3758_ = lean_unbox_usize(v_i_3755_);
lean_dec(v_i_3755_);
v_res_3759_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_3751_, v___x_3752_, v_val_3753_, v_sz_boxed_3757_, v_i_boxed_3758_, v_bs_3756_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(size_t v_sz_3760_, size_t v_i_3761_, lean_object* v_bs_3762_){
_start:
{
uint8_t v___x_3763_; 
v___x_3763_ = lean_usize_dec_lt(v_i_3761_, v_sz_3760_);
if (v___x_3763_ == 0)
{
return v_bs_3762_;
}
else
{
lean_object* v_v_3764_; lean_object* v_fst_3765_; lean_object* v_snd_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3782_; 
v_v_3764_ = lean_array_uget(v_bs_3762_, v_i_3761_);
v_fst_3765_ = lean_ctor_get(v_v_3764_, 0);
v_snd_3766_ = lean_ctor_get(v_v_3764_, 1);
v_isSharedCheck_3782_ = !lean_is_exclusive(v_v_3764_);
if (v_isSharedCheck_3782_ == 0)
{
v___x_3768_ = v_v_3764_;
v_isShared_3769_ = v_isSharedCheck_3782_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_snd_3766_);
lean_inc(v_fst_3765_);
lean_dec(v_v_3764_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3782_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3770_; lean_object* v_bs_x27_3771_; uint8_t v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3775_; 
v___x_3770_ = lean_unsigned_to_nat(0u);
v_bs_x27_3771_ = lean_array_uset(v_bs_3762_, v_i_3761_, v___x_3770_);
v___x_3772_ = 0;
v___x_3773_ = lean_box(v___x_3772_);
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 0, v___x_3773_);
v___x_3775_ = v___x_3768_;
goto v_reusejp_3774_;
}
else
{
lean_object* v_reuseFailAlloc_3781_; 
v_reuseFailAlloc_3781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3781_, 0, v___x_3773_);
lean_ctor_set(v_reuseFailAlloc_3781_, 1, v_snd_3766_);
v___x_3775_ = v_reuseFailAlloc_3781_;
goto v_reusejp_3774_;
}
v_reusejp_3774_:
{
lean_object* v___x_3776_; size_t v___x_3777_; size_t v___x_3778_; lean_object* v___x_3779_; 
v___x_3776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3776_, 0, v_fst_3765_);
lean_ctor_set(v___x_3776_, 1, v___x_3775_);
v___x_3777_ = ((size_t)1ULL);
v___x_3778_ = lean_usize_add(v_i_3761_, v___x_3777_);
v___x_3779_ = lean_array_uset(v_bs_x27_3771_, v_i_3761_, v___x_3776_);
v_i_3761_ = v___x_3778_;
v_bs_3762_ = v___x_3779_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1___boxed(lean_object* v_sz_3783_, lean_object* v_i_3784_, lean_object* v_bs_3785_){
_start:
{
size_t v_sz_boxed_3786_; size_t v_i_boxed_3787_; lean_object* v_res_3788_; 
v_sz_boxed_3786_ = lean_unbox_usize(v_sz_3783_);
lean_dec(v_sz_3783_);
v_i_boxed_3787_ = lean_unbox_usize(v_i_3784_);
lean_dec(v_i_3784_);
v_res_3788_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_boxed_3786_, v_i_boxed_3787_, v_bs_3785_);
return v_res_3788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(lean_object* v___x_3789_, lean_object* v___x_3790_, lean_object* v_a_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v___x_3368__overap_3797_; lean_object* v___x_3798_; 
v___x_3368__overap_3797_ = l_instInhabitedOfMonad___redArg(v___x_3789_, v___x_3790_);
lean_inc(v___y_3795_);
lean_inc_ref(v___y_3794_);
lean_inc(v___y_3793_);
lean_inc_ref(v___y_3792_);
v___x_3798_ = lean_apply_5(v___x_3368__overap_3797_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_, lean_box(0));
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed(lean_object* v___x_3799_, lean_object* v___x_3800_, lean_object* v_a_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v_res_3807_; 
v_res_3807_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(v___x_3799_, v___x_3800_, v_a_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec_ref(v_a_3801_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed(lean_object* v_acc_3808_, lean_object* v_declInfos_3809_, lean_object* v_k_3810_, lean_object* v_kind_3811_, lean_object* v_b_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_){
_start:
{
uint8_t v_kind_boxed_3818_; lean_object* v_res_3819_; 
v_kind_boxed_3818_ = lean_unbox(v_kind_3811_);
v_res_3819_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(v_acc_3808_, v_declInfos_3809_, v_k_3810_, v_kind_boxed_3818_, v_b_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_);
lean_dec(v___y_3816_);
lean_dec_ref(v___y_3815_);
lean_dec(v___y_3814_);
lean_dec_ref(v___y_3813_);
return v_res_3819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(lean_object* v_acc_3820_, lean_object* v_declInfos_3821_, lean_object* v_k_3822_, uint8_t v_kind_3823_, lean_object* v_name_3824_, uint8_t v_bi_3825_, lean_object* v_type_3826_, uint8_t v_kind_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
lean_object* v___x_3833_; lean_object* v___f_3834_; lean_object* v___x_3835_; 
v___x_3833_ = lean_box(v_kind_3823_);
v___f_3834_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3834_, 0, v_acc_3820_);
lean_closure_set(v___f_3834_, 1, v_declInfos_3821_);
lean_closure_set(v___f_3834_, 2, v_k_3822_);
lean_closure_set(v___f_3834_, 3, v___x_3833_);
v___x_3835_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3824_, v_bi_3825_, v_type_3826_, v___f_3834_, v_kind_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3838_; uint8_t v_isShared_3839_; uint8_t v_isSharedCheck_3843_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3843_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3843_ == 0)
{
v___x_3838_ = v___x_3835_;
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
else
{
lean_inc(v_a_3836_);
lean_dec(v___x_3835_);
v___x_3838_ = lean_box(0);
v_isShared_3839_ = v_isSharedCheck_3843_;
goto v_resetjp_3837_;
}
v_resetjp_3837_:
{
lean_object* v___x_3841_; 
if (v_isShared_3839_ == 0)
{
v___x_3841_ = v___x_3838_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v_a_3836_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
else
{
lean_object* v_a_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3851_; 
v_a_3844_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3851_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3851_ == 0)
{
v___x_3846_ = v___x_3835_;
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_a_3844_);
lean_dec(v___x_3835_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3851_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v___x_3849_; 
if (v_isShared_3847_ == 0)
{
v___x_3849_ = v___x_3846_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v_a_3844_);
v___x_3849_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
return v___x_3849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(lean_object* v_declInfos_3852_, lean_object* v_k_3853_, uint8_t v_kind_3854_, lean_object* v_acc_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_){
_start:
{
lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v_toApplicative_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3949_; 
v___x_3861_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_3862_ = l_StateRefT_x27_instMonad___redArg(v___x_3861_);
v_toApplicative_3863_ = lean_ctor_get(v___x_3862_, 0);
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3862_);
if (v_isSharedCheck_3949_ == 0)
{
lean_object* v_unused_3950_; 
v_unused_3950_ = lean_ctor_get(v___x_3862_, 1);
lean_dec(v_unused_3950_);
v___x_3865_ = v___x_3862_;
v_isShared_3866_ = v_isSharedCheck_3949_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_toApplicative_3863_);
lean_dec(v___x_3862_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3949_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v_toFunctor_3867_; lean_object* v_toSeq_3868_; lean_object* v_toSeqLeft_3869_; lean_object* v_toSeqRight_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3947_; 
v_toFunctor_3867_ = lean_ctor_get(v_toApplicative_3863_, 0);
v_toSeq_3868_ = lean_ctor_get(v_toApplicative_3863_, 2);
v_toSeqLeft_3869_ = lean_ctor_get(v_toApplicative_3863_, 3);
v_toSeqRight_3870_ = lean_ctor_get(v_toApplicative_3863_, 4);
v_isSharedCheck_3947_ = !lean_is_exclusive(v_toApplicative_3863_);
if (v_isSharedCheck_3947_ == 0)
{
lean_object* v_unused_3948_; 
v_unused_3948_ = lean_ctor_get(v_toApplicative_3863_, 1);
lean_dec(v_unused_3948_);
v___x_3872_ = v_toApplicative_3863_;
v_isShared_3873_ = v_isSharedCheck_3947_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_toSeqRight_3870_);
lean_inc(v_toSeqLeft_3869_);
lean_inc(v_toSeq_3868_);
lean_inc(v_toFunctor_3867_);
lean_dec(v_toApplicative_3863_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3947_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___f_3874_; lean_object* v___f_3875_; lean_object* v___f_3876_; lean_object* v___f_3877_; lean_object* v___x_3878_; lean_object* v___f_3879_; lean_object* v___f_3880_; lean_object* v___f_3881_; lean_object* v___x_3883_; 
v___f_3874_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_3875_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_3867_);
v___f_3876_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3876_, 0, v_toFunctor_3867_);
v___f_3877_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3877_, 0, v_toFunctor_3867_);
v___x_3878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3878_, 0, v___f_3876_);
lean_ctor_set(v___x_3878_, 1, v___f_3877_);
v___f_3879_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3879_, 0, v_toSeqRight_3870_);
v___f_3880_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3880_, 0, v_toSeqLeft_3869_);
v___f_3881_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3881_, 0, v_toSeq_3868_);
if (v_isShared_3873_ == 0)
{
lean_ctor_set(v___x_3872_, 4, v___f_3879_);
lean_ctor_set(v___x_3872_, 3, v___f_3880_);
lean_ctor_set(v___x_3872_, 2, v___f_3881_);
lean_ctor_set(v___x_3872_, 1, v___f_3874_);
lean_ctor_set(v___x_3872_, 0, v___x_3878_);
v___x_3883_ = v___x_3872_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v___x_3878_);
lean_ctor_set(v_reuseFailAlloc_3946_, 1, v___f_3874_);
lean_ctor_set(v_reuseFailAlloc_3946_, 2, v___f_3881_);
lean_ctor_set(v_reuseFailAlloc_3946_, 3, v___f_3880_);
lean_ctor_set(v_reuseFailAlloc_3946_, 4, v___f_3879_);
v___x_3883_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
lean_object* v___x_3885_; 
if (v_isShared_3866_ == 0)
{
lean_ctor_set(v___x_3865_, 1, v___f_3875_);
lean_ctor_set(v___x_3865_, 0, v___x_3883_);
v___x_3885_ = v___x_3865_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v___x_3883_);
lean_ctor_set(v_reuseFailAlloc_3945_, 1, v___f_3875_);
v___x_3885_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
lean_object* v___x_3886_; lean_object* v_toApplicative_3887_; lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3943_; 
v___x_3886_ = l_StateRefT_x27_instMonad___redArg(v___x_3885_);
v_toApplicative_3887_ = lean_ctor_get(v___x_3886_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3886_);
if (v_isSharedCheck_3943_ == 0)
{
lean_object* v_unused_3944_; 
v_unused_3944_ = lean_ctor_get(v___x_3886_, 1);
lean_dec(v_unused_3944_);
v___x_3889_ = v___x_3886_;
v_isShared_3890_ = v_isSharedCheck_3943_;
goto v_resetjp_3888_;
}
else
{
lean_inc(v_toApplicative_3887_);
lean_dec(v___x_3886_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3943_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v_toFunctor_3891_; lean_object* v_toSeq_3892_; lean_object* v_toSeqLeft_3893_; lean_object* v_toSeqRight_3894_; lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3941_; 
v_toFunctor_3891_ = lean_ctor_get(v_toApplicative_3887_, 0);
v_toSeq_3892_ = lean_ctor_get(v_toApplicative_3887_, 2);
v_toSeqLeft_3893_ = lean_ctor_get(v_toApplicative_3887_, 3);
v_toSeqRight_3894_ = lean_ctor_get(v_toApplicative_3887_, 4);
v_isSharedCheck_3941_ = !lean_is_exclusive(v_toApplicative_3887_);
if (v_isSharedCheck_3941_ == 0)
{
lean_object* v_unused_3942_; 
v_unused_3942_ = lean_ctor_get(v_toApplicative_3887_, 1);
lean_dec(v_unused_3942_);
v___x_3896_ = v_toApplicative_3887_;
v_isShared_3897_ = v_isSharedCheck_3941_;
goto v_resetjp_3895_;
}
else
{
lean_inc(v_toSeqRight_3894_);
lean_inc(v_toSeqLeft_3893_);
lean_inc(v_toSeq_3892_);
lean_inc(v_toFunctor_3891_);
lean_dec(v_toApplicative_3887_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3941_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___f_3898_; lean_object* v___f_3899_; lean_object* v___f_3900_; lean_object* v___f_3901_; lean_object* v___x_3902_; lean_object* v___f_3903_; lean_object* v___f_3904_; lean_object* v___f_3905_; lean_object* v___x_3907_; 
v___f_3898_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_3899_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_3891_);
v___f_3900_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3900_, 0, v_toFunctor_3891_);
v___f_3901_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3901_, 0, v_toFunctor_3891_);
v___x_3902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3902_, 0, v___f_3900_);
lean_ctor_set(v___x_3902_, 1, v___f_3901_);
v___f_3903_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3903_, 0, v_toSeqRight_3894_);
v___f_3904_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3904_, 0, v_toSeqLeft_3893_);
v___f_3905_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3905_, 0, v_toSeq_3892_);
if (v_isShared_3897_ == 0)
{
lean_ctor_set(v___x_3896_, 4, v___f_3903_);
lean_ctor_set(v___x_3896_, 3, v___f_3904_);
lean_ctor_set(v___x_3896_, 2, v___f_3905_);
lean_ctor_set(v___x_3896_, 1, v___f_3898_);
lean_ctor_set(v___x_3896_, 0, v___x_3902_);
v___x_3907_ = v___x_3896_;
goto v_reusejp_3906_;
}
else
{
lean_object* v_reuseFailAlloc_3940_; 
v_reuseFailAlloc_3940_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3940_, 0, v___x_3902_);
lean_ctor_set(v_reuseFailAlloc_3940_, 1, v___f_3898_);
lean_ctor_set(v_reuseFailAlloc_3940_, 2, v___f_3905_);
lean_ctor_set(v_reuseFailAlloc_3940_, 3, v___f_3904_);
lean_ctor_set(v_reuseFailAlloc_3940_, 4, v___f_3903_);
v___x_3907_ = v_reuseFailAlloc_3940_;
goto v_reusejp_3906_;
}
v_reusejp_3906_:
{
lean_object* v___x_3909_; 
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 1, v___f_3899_);
lean_ctor_set(v___x_3889_, 0, v___x_3907_);
v___x_3909_ = v___x_3889_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3939_; 
v_reuseFailAlloc_3939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3939_, 0, v___x_3907_);
lean_ctor_set(v_reuseFailAlloc_3939_, 1, v___f_3899_);
v___x_3909_ = v_reuseFailAlloc_3939_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
lean_object* v___x_3910_; lean_object* v___x_3911_; uint8_t v___x_3912_; 
v___x_3910_ = lean_array_get_size(v_acc_3855_);
v___x_3911_ = lean_array_get_size(v_declInfos_3852_);
v___x_3912_ = lean_nat_dec_lt(v___x_3910_, v___x_3911_);
if (v___x_3912_ == 0)
{
lean_object* v___x_3913_; 
lean_dec_ref(v___x_3909_);
lean_dec_ref(v_declInfos_3852_);
lean_inc(v___y_3859_);
lean_inc_ref(v___y_3858_);
lean_inc(v___y_3857_);
lean_inc_ref(v___y_3856_);
v___x_3913_ = lean_apply_6(v_k_3853_, v_acc_3855_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_, lean_box(0));
return v___x_3913_;
}
else
{
lean_object* v___x_3914_; uint8_t v___x_3915_; lean_object* v___x_3916_; lean_object* v___f_3917_; lean_object* v___f_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v_snd_3923_; lean_object* v_fst_3924_; lean_object* v_fst_3925_; lean_object* v_snd_3926_; lean_object* v___x_3927_; 
v___x_3914_ = lean_box(0);
v___x_3915_ = 0;
v___x_3916_ = l_Lean_instInhabitedExpr;
v___f_3917_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3917_, 0, v___x_3909_);
lean_closure_set(v___f_3917_, 1, v___x_3916_);
v___f_3918_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3918_, 0, v___f_3917_);
v___x_3919_ = lean_box(v___x_3915_);
v___x_3920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
lean_ctor_set(v___x_3920_, 1, v___f_3918_);
v___x_3921_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3914_);
lean_ctor_set(v___x_3921_, 1, v___x_3920_);
v___x_3922_ = lean_array_get(v___x_3921_, v_declInfos_3852_, v___x_3910_);
lean_dec_ref_known(v___x_3921_, 2);
v_snd_3923_ = lean_ctor_get(v___x_3922_, 1);
lean_inc(v_snd_3923_);
v_fst_3924_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_fst_3924_);
lean_dec(v___x_3922_);
v_fst_3925_ = lean_ctor_get(v_snd_3923_, 0);
lean_inc(v_fst_3925_);
v_snd_3926_ = lean_ctor_get(v_snd_3923_, 1);
lean_inc(v_snd_3926_);
lean_dec(v_snd_3923_);
lean_inc(v___y_3859_);
lean_inc_ref(v___y_3858_);
lean_inc(v___y_3857_);
lean_inc_ref(v___y_3856_);
lean_inc_ref(v_acc_3855_);
v___x_3927_ = lean_apply_6(v_snd_3926_, v_acc_3855_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_, lean_box(0));
if (lean_obj_tag(v___x_3927_) == 0)
{
lean_object* v_a_3928_; uint8_t v___x_3929_; lean_object* v___x_3930_; 
v_a_3928_ = lean_ctor_get(v___x_3927_, 0);
lean_inc(v_a_3928_);
lean_dec_ref_known(v___x_3927_, 1);
v___x_3929_ = lean_unbox(v_fst_3925_);
lean_dec(v_fst_3925_);
v___x_3930_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3855_, v_declInfos_3852_, v_k_3853_, v_kind_3854_, v_fst_3924_, v___x_3929_, v_a_3928_, v_kind_3854_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_);
return v___x_3930_;
}
else
{
lean_object* v_a_3931_; lean_object* v___x_3933_; uint8_t v_isShared_3934_; uint8_t v_isSharedCheck_3938_; 
lean_dec(v_fst_3925_);
lean_dec(v_fst_3924_);
lean_dec_ref(v_acc_3855_);
lean_dec_ref(v_k_3853_);
lean_dec_ref(v_declInfos_3852_);
v_a_3931_ = lean_ctor_get(v___x_3927_, 0);
v_isSharedCheck_3938_ = !lean_is_exclusive(v___x_3927_);
if (v_isSharedCheck_3938_ == 0)
{
v___x_3933_ = v___x_3927_;
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
else
{
lean_inc(v_a_3931_);
lean_dec(v___x_3927_);
v___x_3933_ = lean_box(0);
v_isShared_3934_ = v_isSharedCheck_3938_;
goto v_resetjp_3932_;
}
v_resetjp_3932_:
{
lean_object* v___x_3936_; 
if (v_isShared_3934_ == 0)
{
v___x_3936_ = v___x_3933_;
goto v_reusejp_3935_;
}
else
{
lean_object* v_reuseFailAlloc_3937_; 
v_reuseFailAlloc_3937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3937_, 0, v_a_3931_);
v___x_3936_ = v_reuseFailAlloc_3937_;
goto v_reusejp_3935_;
}
v_reusejp_3935_:
{
return v___x_3936_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(lean_object* v_acc_3951_, lean_object* v_declInfos_3952_, lean_object* v_k_3953_, uint8_t v_kind_3954_, lean_object* v_b_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = lean_array_push(v_acc_3951_, v_b_3955_);
v___x_3962_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3952_, v_k_3953_, v_kind_3954_, v___x_3961_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___boxed(lean_object* v_acc_3963_, lean_object* v_declInfos_3964_, lean_object* v_k_3965_, lean_object* v_kind_3966_, lean_object* v_name_3967_, lean_object* v_bi_3968_, lean_object* v_type_3969_, lean_object* v_kind_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_){
_start:
{
uint8_t v_kind_boxed_3976_; uint8_t v_bi_boxed_3977_; uint8_t v_kind_boxed_3978_; lean_object* v_res_3979_; 
v_kind_boxed_3976_ = lean_unbox(v_kind_3966_);
v_bi_boxed_3977_ = lean_unbox(v_bi_3968_);
v_kind_boxed_3978_ = lean_unbox(v_kind_3970_);
v_res_3979_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3963_, v_declInfos_3964_, v_k_3965_, v_kind_boxed_3976_, v_name_3967_, v_bi_boxed_3977_, v_type_3969_, v_kind_boxed_3978_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_);
lean_dec(v___y_3974_);
lean_dec_ref(v___y_3973_);
lean_dec(v___y_3972_);
lean_dec_ref(v___y_3971_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___boxed(lean_object* v_declInfos_3980_, lean_object* v_k_3981_, lean_object* v_kind_3982_, lean_object* v_acc_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
uint8_t v_kind_boxed_3989_; lean_object* v_res_3990_; 
v_kind_boxed_3989_ = lean_unbox(v_kind_3982_);
v_res_3990_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3980_, v_k_3981_, v_kind_boxed_3989_, v_acc_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
lean_dec(v___y_3987_);
lean_dec_ref(v___y_3986_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(lean_object* v_declInfos_3991_, lean_object* v_k_3992_, uint8_t v_kind_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v___x_3999_; lean_object* v___x_4000_; 
v___x_3999_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_4000_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3991_, v_k_3992_, v_kind_3993_, v___x_3999_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
return v___x_4000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2___boxed(lean_object* v_declInfos_4001_, lean_object* v_k_4002_, lean_object* v_kind_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_){
_start:
{
uint8_t v_kind_boxed_4009_; lean_object* v_res_4010_; 
v_kind_boxed_4009_ = lean_unbox(v_kind_4003_);
v_res_4010_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v_declInfos_4001_, v_k_4002_, v_kind_boxed_4009_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
lean_dec(v___y_4005_);
lean_dec_ref(v___y_4004_);
return v_res_4010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(lean_object* v_declInfos_4011_, lean_object* v_k_4012_, uint8_t v_kind_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_){
_start:
{
size_t v_sz_4019_; size_t v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; 
v_sz_4019_ = lean_array_size(v_declInfos_4011_);
v___x_4020_ = ((size_t)0ULL);
v___x_4021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_4019_, v___x_4020_, v_declInfos_4011_);
v___x_4022_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v___x_4021_, v_k_4012_, v_kind_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_);
return v___x_4022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1___boxed(lean_object* v_declInfos_4023_, lean_object* v_k_4024_, lean_object* v_kind_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
uint8_t v_kind_boxed_4031_; lean_object* v_res_4032_; 
v_kind_boxed_4031_ = lean_unbox(v_kind_4025_);
v_res_4032_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v_declInfos_4023_, v_k_4024_, v_kind_boxed_4031_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec(v___y_4029_);
lean_dec_ref(v___y_4028_);
lean_dec(v___y_4027_);
lean_dec_ref(v___y_4026_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(lean_object* v_paramsIndices_4033_, lean_object* v_numParams_4034_, lean_object* v_a_4035_, lean_object* v___x_4036_, lean_object* v_compFields_4037_, lean_object* v_val_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v_lower_4049_; lean_object* v_upper_4050_; lean_object* v___x_4059_; uint8_t v___x_4060_; 
v___x_4044_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_4034_);
lean_inc_ref(v_paramsIndices_4033_);
v___x_4045_ = l_Array_toSubarray___redArg(v_paramsIndices_4033_, v___x_4044_, v_numParams_4034_);
v___x_4046_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_4047_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_4045_, v___x_4046_);
v___x_4059_ = lean_array_get_size(v_paramsIndices_4033_);
v___x_4060_ = lean_nat_dec_le(v_numParams_4034_, v___x_4044_);
if (v___x_4060_ == 0)
{
v_lower_4049_ = v_numParams_4034_;
v_upper_4050_ = v___x_4059_;
goto v___jp_4048_;
}
else
{
lean_dec(v_numParams_4034_);
v_lower_4049_ = v___x_4044_;
v_upper_4050_ = v___x_4059_;
goto v___jp_4048_;
}
v___jp_4048_:
{
lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___f_4053_; size_t v_sz_4054_; size_t v___x_4055_; lean_object* v___x_4056_; uint8_t v___x_4057_; lean_object* v___x_4058_; 
v___x_4051_ = l_Array_toSubarray___redArg(v_paramsIndices_4033_, v_lower_4049_, v_upper_4050_);
v___x_4052_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_4051_, v___x_4046_);
lean_inc_ref(v_val_4038_);
lean_inc_ref(v___x_4052_);
lean_inc_ref(v_compFields_4037_);
lean_inc_ref(v___x_4047_);
v___f_4053_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed), 12, 6);
lean_closure_set(v___f_4053_, 0, v_a_4035_);
lean_closure_set(v___f_4053_, 1, v___x_4036_);
lean_closure_set(v___f_4053_, 2, v___x_4047_);
lean_closure_set(v___f_4053_, 3, v_compFields_4037_);
lean_closure_set(v___f_4053_, 4, v___x_4052_);
lean_closure_set(v___f_4053_, 5, v_val_4038_);
v_sz_4054_ = lean_array_size(v_compFields_4037_);
v___x_4055_ = ((size_t)0ULL);
v___x_4056_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_4047_, v___x_4052_, v_val_4038_, v_sz_4054_, v___x_4055_, v_compFields_4037_);
v___x_4057_ = 0;
v___x_4058_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v___x_4056_, v___f_4053_, v___x_4057_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
return v___x_4058_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed(lean_object* v_paramsIndices_4061_, lean_object* v_numParams_4062_, lean_object* v_a_4063_, lean_object* v___x_4064_, lean_object* v_compFields_4065_, lean_object* v_val_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_){
_start:
{
lean_object* v_res_4072_; 
v_res_4072_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(v_paramsIndices_4061_, v_numParams_4062_, v_a_4063_, v___x_4064_, v_compFields_4065_, v_val_4066_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_);
lean_dec(v___y_4070_);
lean_dec_ref(v___y_4069_);
lean_dec(v___y_4068_);
lean_dec_ref(v___y_4067_);
return v_res_4072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(lean_object* v_k_4073_, lean_object* v_b_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_){
_start:
{
lean_object* v___x_4080_; 
lean_inc(v___y_4078_);
lean_inc_ref(v___y_4077_);
lean_inc(v___y_4076_);
lean_inc_ref(v___y_4075_);
v___x_4080_ = lean_apply_6(v_k_4073_, v_b_4074_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_, lean_box(0));
return v___x_4080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed(lean_object* v_k_4081_, lean_object* v_b_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v_res_4088_; 
v_res_4088_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(v_k_4081_, v_b_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_);
lean_dec(v___y_4086_);
lean_dec_ref(v___y_4085_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
return v_res_4088_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(lean_object* v_name_4089_, uint8_t v_bi_4090_, lean_object* v_type_4091_, lean_object* v_k_4092_, uint8_t v_kind_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_){
_start:
{
lean_object* v___f_4099_; lean_object* v___x_4100_; 
v___f_4099_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4099_, 0, v_k_4092_);
v___x_4100_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_4089_, v_bi_4090_, v_type_4091_, v___f_4099_, v_kind_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_);
if (lean_obj_tag(v___x_4100_) == 0)
{
lean_object* v_a_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4108_; 
v_a_4101_ = lean_ctor_get(v___x_4100_, 0);
v_isSharedCheck_4108_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4108_ == 0)
{
v___x_4103_ = v___x_4100_;
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_a_4101_);
lean_dec(v___x_4100_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
lean_object* v___x_4106_; 
if (v_isShared_4104_ == 0)
{
v___x_4106_ = v___x_4103_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v_a_4101_);
v___x_4106_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
return v___x_4106_;
}
}
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4116_; 
v_a_4109_ = lean_ctor_get(v___x_4100_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4100_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4111_ = v___x_4100_;
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4100_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___boxed(lean_object* v_name_4117_, lean_object* v_bi_4118_, lean_object* v_type_4119_, lean_object* v_k_4120_, lean_object* v_kind_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
uint8_t v_bi_boxed_4127_; uint8_t v_kind_boxed_4128_; lean_object* v_res_4129_; 
v_bi_boxed_4127_ = lean_unbox(v_bi_4118_);
v_kind_boxed_4128_ = lean_unbox(v_kind_4121_);
v_res_4129_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4117_, v_bi_boxed_4127_, v_type_4119_, v_k_4120_, v_kind_boxed_4128_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_);
lean_dec(v___y_4125_);
lean_dec_ref(v___y_4124_);
lean_dec(v___y_4123_);
lean_dec_ref(v___y_4122_);
return v_res_4129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(lean_object* v_name_4130_, lean_object* v_type_4131_, lean_object* v_k_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_){
_start:
{
uint8_t v___x_4138_; uint8_t v___x_4139_; lean_object* v___x_4140_; 
v___x_4138_ = 0;
v___x_4139_ = 0;
v___x_4140_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4130_, v___x_4138_, v_type_4131_, v_k_4132_, v___x_4139_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
return v___x_4140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg___boxed(lean_object* v_name_4141_, lean_object* v_type_4142_, lean_object* v_k_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_){
_start:
{
lean_object* v_res_4149_; 
v_res_4149_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4141_, v_type_4142_, v_k_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
lean_dec(v___y_4145_);
lean_dec_ref(v___y_4144_);
return v_res_4149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(lean_object* v_numParams_4150_, lean_object* v_a_4151_, lean_object* v___x_4152_, lean_object* v_compFields_4153_, lean_object* v_name_4154_, lean_object* v_paramsIndices_4155_, lean_object* v_x_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v___f_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; 
lean_inc(v___x_4152_);
lean_inc_ref(v_paramsIndices_4155_);
v___f_4162_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed), 11, 5);
lean_closure_set(v___f_4162_, 0, v_paramsIndices_4155_);
lean_closure_set(v___f_4162_, 1, v_numParams_4150_);
lean_closure_set(v___f_4162_, 2, v_a_4151_);
lean_closure_set(v___f_4162_, 3, v___x_4152_);
lean_closure_set(v___f_4162_, 4, v_compFields_4153_);
v___x_4163_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_4164_ = l_Lean_mkConst(v_name_4154_, v___x_4152_);
v___x_4165_ = l_Lean_mkAppN(v___x_4164_, v_paramsIndices_4155_);
lean_dec_ref(v_paramsIndices_4155_);
v___x_4166_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v___x_4163_, v___x_4165_, v___f_4162_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
return v___x_4166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed(lean_object* v_numParams_4167_, lean_object* v_a_4168_, lean_object* v___x_4169_, lean_object* v_compFields_4170_, lean_object* v_name_4171_, lean_object* v_paramsIndices_4172_, lean_object* v_x_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(v_numParams_4167_, v_a_4168_, v___x_4169_, v_compFields_4170_, v_name_4171_, v_paramsIndices_4172_, v_x_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec_ref(v_x_4173_);
return v_res_4179_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1(void){
_start:
{
lean_object* v___x_4181_; lean_object* v___x_4182_; 
v___x_4181_ = ((lean_object*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0));
v___x_4182_ = l_Lean_stringToMessageData(v___x_4181_);
return v___x_4182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(lean_object* v_declName_4183_, lean_object* v_compFields_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_){
_start:
{
lean_object* v___x_4190_; 
v___x_4190_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_declName_4183_, v_a_4185_, v_a_4186_, v_a_4187_, v_a_4188_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_object* v_a_4191_; lean_object* v_toConstantVal_4192_; lean_object* v_numParams_4193_; lean_object* v_ctors_4194_; lean_object* v___y_4196_; lean_object* v___y_4197_; lean_object* v___y_4198_; lean_object* v___y_4199_; lean_object* v___x_4208_; lean_object* v___x_4209_; uint8_t v___x_4210_; 
v_a_4191_ = lean_ctor_get(v___x_4190_, 0);
lean_inc(v_a_4191_);
lean_dec_ref_known(v___x_4190_, 1);
v_toConstantVal_4192_ = lean_ctor_get(v_a_4191_, 0);
v_numParams_4193_ = lean_ctor_get(v_a_4191_, 1);
lean_inc(v_numParams_4193_);
v_ctors_4194_ = lean_ctor_get(v_a_4191_, 4);
v___x_4208_ = l_List_lengthTR___redArg(v_ctors_4194_);
v___x_4209_ = lean_unsigned_to_nat(2u);
v___x_4210_ = lean_nat_dec_lt(v___x_4208_, v___x_4209_);
lean_dec(v___x_4208_);
if (v___x_4210_ == 0)
{
v___y_4196_ = v_a_4185_;
v___y_4197_ = v_a_4186_;
v___y_4198_ = v_a_4187_;
v___y_4199_ = v_a_4188_;
goto v___jp_4195_;
}
else
{
lean_object* v___x_4211_; lean_object* v___x_4212_; 
lean_dec(v_numParams_4193_);
lean_dec(v_a_4191_);
lean_dec_ref(v_compFields_4184_);
v___x_4211_ = lean_obj_once(&l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1, &l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1_once, _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1);
v___x_4212_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_4211_, v_a_4185_, v_a_4186_, v_a_4187_, v_a_4188_);
return v___x_4212_;
}
v___jp_4195_:
{
lean_object* v_name_4200_; lean_object* v_levelParams_4201_; lean_object* v_type_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___f_4205_; uint8_t v___x_4206_; lean_object* v___x_4207_; 
v_name_4200_ = lean_ctor_get(v_toConstantVal_4192_, 0);
lean_inc(v_name_4200_);
v_levelParams_4201_ = lean_ctor_get(v_toConstantVal_4192_, 1);
v_type_4202_ = lean_ctor_get(v_toConstantVal_4192_, 2);
lean_inc_ref(v_type_4202_);
v___x_4203_ = lean_box(0);
lean_inc(v_levelParams_4201_);
v___x_4204_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_4201_, v___x_4203_);
v___f_4205_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed), 12, 5);
lean_closure_set(v___f_4205_, 0, v_numParams_4193_);
lean_closure_set(v___f_4205_, 1, v_a_4191_);
lean_closure_set(v___f_4205_, 2, v___x_4204_);
lean_closure_set(v___f_4205_, 3, v_compFields_4184_);
lean_closure_set(v___f_4205_, 4, v_name_4200_);
v___x_4206_ = 0;
v___x_4207_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_4202_, v___f_4205_, v___x_4206_, v___y_4196_, v___y_4197_, v___y_4198_, v___y_4199_);
return v___x_4207_;
}
}
else
{
lean_object* v_a_4213_; lean_object* v___x_4215_; uint8_t v_isShared_4216_; uint8_t v_isSharedCheck_4220_; 
lean_dec_ref(v_compFields_4184_);
v_a_4213_ = lean_ctor_get(v___x_4190_, 0);
v_isSharedCheck_4220_ = !lean_is_exclusive(v___x_4190_);
if (v_isSharedCheck_4220_ == 0)
{
v___x_4215_ = v___x_4190_;
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
else
{
lean_inc(v_a_4213_);
lean_dec(v___x_4190_);
v___x_4215_ = lean_box(0);
v_isShared_4216_ = v_isSharedCheck_4220_;
goto v_resetjp_4214_;
}
v_resetjp_4214_:
{
lean_object* v___x_4218_; 
if (v_isShared_4216_ == 0)
{
v___x_4218_ = v___x_4215_;
goto v_reusejp_4217_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v_a_4213_);
v___x_4218_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4217_;
}
v_reusejp_4217_:
{
return v___x_4218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___boxed(lean_object* v_declName_4221_, lean_object* v_compFields_4222_, lean_object* v_a_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_){
_start:
{
lean_object* v_res_4228_; 
v_res_4228_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_declName_4221_, v_compFields_4222_, v_a_4223_, v_a_4224_, v_a_4225_, v_a_4226_);
lean_dec(v_a_4226_);
lean_dec_ref(v_a_4225_);
lean_dec(v_a_4224_);
lean_dec_ref(v_a_4223_);
return v_res_4228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(lean_object* v_00_u03b1_4229_, lean_object* v_name_4230_, uint8_t v_bi_4231_, lean_object* v_type_4232_, lean_object* v_k_4233_, uint8_t v_kind_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_){
_start:
{
lean_object* v___x_4240_; 
v___x_4240_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4230_, v_bi_4231_, v_type_4232_, v_k_4233_, v_kind_4234_, v___y_4235_, v___y_4236_, v___y_4237_, v___y_4238_);
return v___x_4240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___boxed(lean_object* v_00_u03b1_4241_, lean_object* v_name_4242_, lean_object* v_bi_4243_, lean_object* v_type_4244_, lean_object* v_k_4245_, lean_object* v_kind_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_){
_start:
{
uint8_t v_bi_boxed_4252_; uint8_t v_kind_boxed_4253_; lean_object* v_res_4254_; 
v_bi_boxed_4252_ = lean_unbox(v_bi_4243_);
v_kind_boxed_4253_ = lean_unbox(v_kind_4246_);
v_res_4254_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(v_00_u03b1_4241_, v_name_4242_, v_bi_boxed_4252_, v_type_4244_, v_k_4245_, v_kind_boxed_4253_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
lean_dec(v___y_4248_);
lean_dec_ref(v___y_4247_);
return v_res_4254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(lean_object* v_00_u03b1_4255_, lean_object* v_name_4256_, lean_object* v_type_4257_, lean_object* v_k_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v___x_4264_; 
v___x_4264_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4256_, v_type_4257_, v_k_4258_, v___y_4259_, v___y_4260_, v___y_4261_, v___y_4262_);
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___boxed(lean_object* v_00_u03b1_4265_, lean_object* v_name_4266_, lean_object* v_type_4267_, lean_object* v_k_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_){
_start:
{
lean_object* v_res_4274_; 
v_res_4274_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(v_00_u03b1_4265_, v_name_4266_, v_type_4267_, v_k_4268_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_);
lean_dec(v___y_4272_);
lean_dec_ref(v___y_4271_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(lean_object* v_as_4275_, size_t v_sz_4276_, size_t v_i_4277_, lean_object* v_b_4278_, lean_object* v___y_4279_){
_start:
{
lean_object* v_a_4282_; uint8_t v___x_4286_; 
v___x_4286_ = lean_usize_dec_lt(v_i_4277_, v_sz_4276_);
if (v___x_4286_ == 0)
{
lean_object* v___x_4287_; 
v___x_4287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4287_, 0, v_b_4278_);
return v___x_4287_;
}
else
{
lean_object* v_a_4288_; lean_object* v___x_4289_; lean_object* v_env_4290_; uint8_t v___x_4291_; 
v_a_4288_ = lean_array_uget_borrowed(v_as_4275_, v_i_4277_);
v___x_4289_ = lean_st_ref_get(v___y_4279_);
v_env_4290_ = lean_ctor_get(v___x_4289_, 0);
lean_inc_ref(v_env_4290_);
lean_dec(v___x_4289_);
lean_inc(v_a_4288_);
v___x_4291_ = l_Lean_isExtern(v_env_4290_, v_a_4288_);
if (v___x_4291_ == 0)
{
lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
v___x_4292_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_4288_);
v___x_4293_ = l_Lean_Name_append(v_a_4288_, v___x_4292_);
v___x_4294_ = lean_array_push(v_b_4278_, v___x_4293_);
v_a_4282_ = v___x_4294_;
goto v___jp_4281_;
}
else
{
v_a_4282_ = v_b_4278_;
goto v___jp_4281_;
}
}
v___jp_4281_:
{
size_t v___x_4283_; size_t v___x_4284_; 
v___x_4283_ = ((size_t)1ULL);
v___x_4284_ = lean_usize_add(v_i_4277_, v___x_4283_);
v_i_4277_ = v___x_4284_;
v_b_4278_ = v_a_4282_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg___boxed(lean_object* v_as_4295_, lean_object* v_sz_4296_, lean_object* v_i_4297_, lean_object* v_b_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_){
_start:
{
size_t v_sz_boxed_4301_; size_t v_i_boxed_4302_; lean_object* v_res_4303_; 
v_sz_boxed_4301_ = lean_unbox_usize(v_sz_4296_);
lean_dec(v_sz_4296_);
v_i_boxed_4302_ = lean_unbox_usize(v_i_4297_);
lean_dec(v_i_4297_);
v_res_4303_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4295_, v_sz_boxed_4301_, v_i_boxed_4302_, v_b_4298_, v___y_4299_);
lean_dec(v___y_4299_);
lean_dec_ref(v_as_4295_);
return v_res_4303_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(lean_object* v_as_x27_4304_, lean_object* v_b_4305_){
_start:
{
if (lean_obj_tag(v_as_x27_4304_) == 0)
{
lean_object* v___x_4307_; 
v___x_4307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4307_, 0, v_b_4305_);
return v___x_4307_;
}
else
{
lean_object* v_head_4308_; lean_object* v_tail_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; 
v_head_4308_ = lean_ctor_get(v_as_x27_4304_, 0);
v_tail_4309_ = lean_ctor_get(v_as_x27_4304_, 1);
v___x_4310_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_4308_);
v___x_4311_ = l_Lean_Name_append(v_head_4308_, v___x_4310_);
v___x_4312_ = lean_array_push(v_b_4305_, v___x_4311_);
v_as_x27_4304_ = v_tail_4309_;
v_b_4305_ = v___x_4312_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg___boxed(lean_object* v_as_x27_4314_, lean_object* v_b_4315_, lean_object* v___y_4316_){
_start:
{
lean_object* v_res_4317_; 
v_res_4317_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4314_, v_b_4315_);
lean_dec(v_as_x27_4314_);
return v_res_4317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(lean_object* v_as_4318_, size_t v_sz_4319_, size_t v_i_4320_, lean_object* v_b_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_){
_start:
{
uint8_t v___x_4327_; 
v___x_4327_ = lean_usize_dec_lt(v_i_4320_, v_sz_4319_);
if (v___x_4327_ == 0)
{
lean_object* v___x_4328_; 
v___x_4328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4328_, 0, v_b_4321_);
return v___x_4328_;
}
else
{
lean_object* v_a_4329_; lean_object* v_fst_4330_; lean_object* v_snd_4331_; lean_object* v___x_4332_; 
v_a_4329_ = lean_array_uget_borrowed(v_as_4318_, v_i_4320_);
v_fst_4330_ = lean_ctor_get(v_a_4329_, 0);
v_snd_4331_ = lean_ctor_get(v_a_4329_, 1);
lean_inc(v_fst_4330_);
v___x_4332_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_fst_4330_, v___y_4322_, v___y_4323_, v___y_4324_, v___y_4325_);
if (lean_obj_tag(v___x_4332_) == 0)
{
lean_object* v_a_4333_; lean_object* v_ctors_4334_; lean_object* v___x_4335_; 
v_a_4333_ = lean_ctor_get(v___x_4332_, 0);
lean_inc(v_a_4333_);
lean_dec_ref_known(v___x_4332_, 1);
v_ctors_4334_ = lean_ctor_get(v_a_4333_, 4);
lean_inc(v_ctors_4334_);
lean_dec(v_a_4333_);
v___x_4335_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_ctors_4334_, v_b_4321_);
lean_dec(v_ctors_4334_);
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v_a_4336_; size_t v_sz_4337_; size_t v___x_4338_; lean_object* v___x_4339_; 
v_a_4336_ = lean_ctor_get(v___x_4335_, 0);
lean_inc(v_a_4336_);
lean_dec_ref_known(v___x_4335_, 1);
v_sz_4337_ = lean_array_size(v_snd_4331_);
v___x_4338_ = ((size_t)0ULL);
v___x_4339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_snd_4331_, v_sz_4337_, v___x_4338_, v_a_4336_, v___y_4325_);
if (lean_obj_tag(v___x_4339_) == 0)
{
lean_object* v_a_4340_; size_t v___x_4341_; size_t v___x_4342_; 
v_a_4340_ = lean_ctor_get(v___x_4339_, 0);
lean_inc(v_a_4340_);
lean_dec_ref_known(v___x_4339_, 1);
v___x_4341_ = ((size_t)1ULL);
v___x_4342_ = lean_usize_add(v_i_4320_, v___x_4341_);
v_i_4320_ = v___x_4342_;
v_b_4321_ = v_a_4340_;
goto _start;
}
else
{
return v___x_4339_;
}
}
else
{
return v___x_4335_;
}
}
else
{
lean_object* v_a_4344_; lean_object* v___x_4346_; uint8_t v_isShared_4347_; uint8_t v_isSharedCheck_4351_; 
lean_dec_ref(v_b_4321_);
v_a_4344_ = lean_ctor_get(v___x_4332_, 0);
v_isSharedCheck_4351_ = !lean_is_exclusive(v___x_4332_);
if (v_isSharedCheck_4351_ == 0)
{
v___x_4346_ = v___x_4332_;
v_isShared_4347_ = v_isSharedCheck_4351_;
goto v_resetjp_4345_;
}
else
{
lean_inc(v_a_4344_);
lean_dec(v___x_4332_);
v___x_4346_ = lean_box(0);
v_isShared_4347_ = v_isSharedCheck_4351_;
goto v_resetjp_4345_;
}
v_resetjp_4345_:
{
lean_object* v___x_4349_; 
if (v_isShared_4347_ == 0)
{
v___x_4349_ = v___x_4346_;
goto v_reusejp_4348_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v_a_4344_);
v___x_4349_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4348_;
}
v_reusejp_4348_:
{
return v___x_4349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6___boxed(lean_object* v_as_4352_, lean_object* v_sz_4353_, lean_object* v_i_4354_, lean_object* v_b_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_){
_start:
{
size_t v_sz_boxed_4361_; size_t v_i_boxed_4362_; lean_object* v_res_4363_; 
v_sz_boxed_4361_ = lean_unbox_usize(v_sz_4353_);
lean_dec(v_sz_4353_);
v_i_boxed_4362_ = lean_unbox_usize(v_i_4354_);
lean_dec(v_i_4354_);
v_res_4363_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_as_4352_, v_sz_boxed_4361_, v_i_boxed_4362_, v_b_4355_, v___y_4356_, v___y_4357_, v___y_4358_, v___y_4359_);
lean_dec(v___y_4359_);
lean_dec_ref(v___y_4358_);
lean_dec(v___y_4357_);
lean_dec_ref(v___y_4356_);
lean_dec_ref(v_as_4352_);
return v_res_4363_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(uint8_t v_suppressElabErrors_4371_, uint8_t v___y_4372_, lean_object* v_x_4373_){
_start:
{
if (lean_obj_tag(v_x_4373_) == 1)
{
lean_object* v_pre_4374_; 
v_pre_4374_ = lean_ctor_get(v_x_4373_, 0);
switch(lean_obj_tag(v_pre_4374_))
{
case 1:
{
lean_object* v_pre_4375_; 
v_pre_4375_ = lean_ctor_get(v_pre_4374_, 0);
switch(lean_obj_tag(v_pre_4375_))
{
case 0:
{
lean_object* v_str_4376_; lean_object* v_str_4377_; lean_object* v___x_4378_; uint8_t v___x_4379_; 
v_str_4376_ = lean_ctor_get(v_x_4373_, 1);
v_str_4377_ = lean_ctor_get(v_pre_4374_, 1);
v___x_4378_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_4379_ = lean_string_dec_eq(v_str_4377_, v___x_4378_);
if (v___x_4379_ == 0)
{
lean_object* v___x_4380_; uint8_t v___x_4381_; 
v___x_4380_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0));
v___x_4381_ = lean_string_dec_eq(v_str_4377_, v___x_4380_);
if (v___x_4381_ == 0)
{
return v___x_4381_;
}
else
{
lean_object* v___x_4382_; uint8_t v___x_4383_; 
v___x_4382_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1));
v___x_4383_ = lean_string_dec_eq(v_str_4376_, v___x_4382_);
if (v___x_4383_ == 0)
{
return v___x_4383_;
}
else
{
return v_suppressElabErrors_4371_;
}
}
}
else
{
lean_object* v___x_4384_; uint8_t v___x_4385_; 
v___x_4384_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2));
v___x_4385_ = lean_string_dec_eq(v_str_4376_, v___x_4384_);
if (v___x_4385_ == 0)
{
return v___x_4385_;
}
else
{
return v_suppressElabErrors_4371_;
}
}
}
case 1:
{
lean_object* v_pre_4386_; 
v_pre_4386_ = lean_ctor_get(v_pre_4375_, 0);
if (lean_obj_tag(v_pre_4386_) == 0)
{
lean_object* v_str_4387_; lean_object* v_str_4388_; lean_object* v_str_4389_; lean_object* v___x_4390_; uint8_t v___x_4391_; 
v_str_4387_ = lean_ctor_get(v_x_4373_, 1);
v_str_4388_ = lean_ctor_get(v_pre_4374_, 1);
v_str_4389_ = lean_ctor_get(v_pre_4375_, 1);
v___x_4390_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3));
v___x_4391_ = lean_string_dec_eq(v_str_4389_, v___x_4390_);
if (v___x_4391_ == 0)
{
return v___x_4391_;
}
else
{
lean_object* v___x_4392_; uint8_t v___x_4393_; 
v___x_4392_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4));
v___x_4393_ = lean_string_dec_eq(v_str_4388_, v___x_4392_);
if (v___x_4393_ == 0)
{
return v___x_4393_;
}
else
{
lean_object* v___x_4394_; uint8_t v___x_4395_; 
v___x_4394_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5));
v___x_4395_ = lean_string_dec_eq(v_str_4387_, v___x_4394_);
if (v___x_4395_ == 0)
{
return v___x_4395_;
}
else
{
return v_suppressElabErrors_4371_;
}
}
}
}
else
{
return v___y_4372_;
}
}
default: 
{
return v___y_4372_;
}
}
}
case 0:
{
lean_object* v_str_4396_; lean_object* v___x_4397_; uint8_t v___x_4398_; 
v_str_4396_ = lean_ctor_get(v_x_4373_, 1);
v___x_4397_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6));
v___x_4398_ = lean_string_dec_eq(v_str_4396_, v___x_4397_);
if (v___x_4398_ == 0)
{
return v___x_4398_;
}
else
{
return v_suppressElabErrors_4371_;
}
}
default: 
{
return v___y_4372_;
}
}
}
else
{
return v___y_4372_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed(lean_object* v_suppressElabErrors_4399_, lean_object* v___y_4400_, lean_object* v_x_4401_){
_start:
{
uint8_t v_suppressElabErrors_boxed_4402_; uint8_t v___y_7471__boxed_4403_; uint8_t v_res_4404_; lean_object* v_r_4405_; 
v_suppressElabErrors_boxed_4402_ = lean_unbox(v_suppressElabErrors_4399_);
v___y_7471__boxed_4403_ = lean_unbox(v___y_4400_);
v_res_4404_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(v_suppressElabErrors_boxed_4402_, v___y_7471__boxed_4403_, v_x_4401_);
lean_dec(v_x_4401_);
v_r_4405_ = lean_box(v_res_4404_);
return v_r_4405_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(lean_object* v_opts_4406_, lean_object* v_opt_4407_){
_start:
{
lean_object* v_name_4408_; lean_object* v_defValue_4409_; lean_object* v_map_4410_; lean_object* v___x_4411_; 
v_name_4408_ = lean_ctor_get(v_opt_4407_, 0);
v_defValue_4409_ = lean_ctor_get(v_opt_4407_, 1);
v_map_4410_ = lean_ctor_get(v_opts_4406_, 0);
v___x_4411_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4410_, v_name_4408_);
if (lean_obj_tag(v___x_4411_) == 0)
{
uint8_t v___x_4412_; 
v___x_4412_ = lean_unbox(v_defValue_4409_);
return v___x_4412_;
}
else
{
lean_object* v_val_4413_; 
v_val_4413_ = lean_ctor_get(v___x_4411_, 0);
lean_inc(v_val_4413_);
lean_dec_ref_known(v___x_4411_, 1);
if (lean_obj_tag(v_val_4413_) == 1)
{
uint8_t v_v_4414_; 
v_v_4414_ = lean_ctor_get_uint8(v_val_4413_, 0);
lean_dec_ref_known(v_val_4413_, 0);
return v_v_4414_;
}
else
{
uint8_t v___x_4415_; 
lean_dec(v_val_4413_);
v___x_4415_ = lean_unbox(v_defValue_4409_);
return v___x_4415_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8___boxed(lean_object* v_opts_4416_, lean_object* v_opt_4417_){
_start:
{
uint8_t v_res_4418_; lean_object* v_r_4419_; 
v_res_4418_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v_opts_4416_, v_opt_4417_);
lean_dec_ref(v_opt_4417_);
lean_dec_ref(v_opts_4416_);
v_r_4419_ = lean_box(v_res_4418_);
return v_r_4419_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(lean_object* v_ref_4421_, lean_object* v_msgData_4422_, uint8_t v_severity_4423_, uint8_t v_isSilent_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_){
_start:
{
uint8_t v___y_4431_; lean_object* v___y_4432_; uint8_t v___y_4433_; lean_object* v___y_4434_; lean_object* v___y_4435_; lean_object* v___y_4436_; lean_object* v___y_4437_; lean_object* v_toCold_4438_; lean_object* v___y_4439_; lean_object* v___y_4468_; lean_object* v___y_4469_; uint8_t v___y_4470_; uint8_t v___y_4471_; uint8_t v___y_4472_; lean_object* v___y_4473_; lean_object* v___y_4474_; lean_object* v___y_4475_; uint8_t v___y_4495_; lean_object* v___y_4496_; lean_object* v___y_4497_; uint8_t v___y_4498_; uint8_t v___y_4499_; lean_object* v___y_4500_; lean_object* v___y_4501_; uint8_t v___y_4505_; uint8_t v___y_4506_; uint8_t v___y_4507_; uint8_t v___x_4518_; uint8_t v___y_4520_; uint8_t v___y_4521_; uint8_t v___y_4522_; uint8_t v___y_4524_; uint8_t v___x_4532_; 
v___x_4518_ = 2;
v___x_4532_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4423_, v___x_4518_);
if (v___x_4532_ == 0)
{
v___y_4524_ = v___x_4532_;
goto v___jp_4523_;
}
else
{
uint8_t v___x_4533_; 
lean_inc_ref(v_msgData_4422_);
v___x_4533_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4422_);
v___y_4524_ = v___x_4533_;
goto v___jp_4523_;
}
v___jp_4430_:
{
lean_object* v_currNamespace_4440_; lean_object* v_openDecls_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v_env_4446_; lean_object* v_nextMacroScope_4447_; lean_object* v_ngen_4448_; lean_object* v_auxDeclNGen_4449_; lean_object* v_traceState_4450_; lean_object* v_cache_4451_; lean_object* v_recordedDeps_4452_; lean_object* v_messages_4453_; lean_object* v_infoState_4454_; lean_object* v_snapshotTasks_4455_; lean_object* v___x_4457_; uint8_t v_isShared_4458_; uint8_t v_isSharedCheck_4466_; 
v_currNamespace_4440_ = lean_ctor_get(v_toCold_4438_, 4);
v_openDecls_4441_ = lean_ctor_get(v_toCold_4438_, 5);
lean_inc(v_openDecls_4441_);
lean_inc(v_currNamespace_4440_);
v___x_4442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4442_, 0, v_currNamespace_4440_);
lean_ctor_set(v___x_4442_, 1, v_openDecls_4441_);
v___x_4443_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4443_, 0, v___x_4442_);
lean_ctor_set(v___x_4443_, 1, v___y_4435_);
lean_inc_ref(v___y_4434_);
lean_inc_ref(v___y_4436_);
v___x_4444_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4444_, 0, v___y_4436_);
lean_ctor_set(v___x_4444_, 1, v___y_4432_);
lean_ctor_set(v___x_4444_, 2, v___y_4437_);
lean_ctor_set(v___x_4444_, 3, v___y_4434_);
lean_ctor_set(v___x_4444_, 4, v___x_4443_);
lean_ctor_set_uint8(v___x_4444_, sizeof(void*)*5, v___y_4431_);
lean_ctor_set_uint8(v___x_4444_, sizeof(void*)*5 + 1, v___y_4433_);
lean_ctor_set_uint8(v___x_4444_, sizeof(void*)*5 + 2, v_isSilent_4424_);
v___x_4445_ = lean_st_ref_take(v___y_4439_);
v_env_4446_ = lean_ctor_get(v___x_4445_, 0);
v_nextMacroScope_4447_ = lean_ctor_get(v___x_4445_, 1);
v_ngen_4448_ = lean_ctor_get(v___x_4445_, 2);
v_auxDeclNGen_4449_ = lean_ctor_get(v___x_4445_, 3);
v_traceState_4450_ = lean_ctor_get(v___x_4445_, 4);
v_cache_4451_ = lean_ctor_get(v___x_4445_, 5);
v_recordedDeps_4452_ = lean_ctor_get(v___x_4445_, 6);
v_messages_4453_ = lean_ctor_get(v___x_4445_, 7);
v_infoState_4454_ = lean_ctor_get(v___x_4445_, 8);
v_snapshotTasks_4455_ = lean_ctor_get(v___x_4445_, 9);
v_isSharedCheck_4466_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4466_ == 0)
{
v___x_4457_ = v___x_4445_;
v_isShared_4458_ = v_isSharedCheck_4466_;
goto v_resetjp_4456_;
}
else
{
lean_inc(v_snapshotTasks_4455_);
lean_inc(v_infoState_4454_);
lean_inc(v_messages_4453_);
lean_inc(v_recordedDeps_4452_);
lean_inc(v_cache_4451_);
lean_inc(v_traceState_4450_);
lean_inc(v_auxDeclNGen_4449_);
lean_inc(v_ngen_4448_);
lean_inc(v_nextMacroScope_4447_);
lean_inc(v_env_4446_);
lean_dec(v___x_4445_);
v___x_4457_ = lean_box(0);
v_isShared_4458_ = v_isSharedCheck_4466_;
goto v_resetjp_4456_;
}
v_resetjp_4456_:
{
lean_object* v___x_4459_; lean_object* v___x_4460_; lean_object* v___x_4462_; 
v___x_4459_ = lean_box(0);
v___x_4460_ = l_Lean_MessageLog_add(v___x_4444_, v_messages_4453_);
if (v_isShared_4458_ == 0)
{
lean_ctor_set(v___x_4457_, 7, v___x_4460_);
v___x_4462_ = v___x_4457_;
goto v_reusejp_4461_;
}
else
{
lean_object* v_reuseFailAlloc_4465_; 
v_reuseFailAlloc_4465_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4465_, 0, v_env_4446_);
lean_ctor_set(v_reuseFailAlloc_4465_, 1, v_nextMacroScope_4447_);
lean_ctor_set(v_reuseFailAlloc_4465_, 2, v_ngen_4448_);
lean_ctor_set(v_reuseFailAlloc_4465_, 3, v_auxDeclNGen_4449_);
lean_ctor_set(v_reuseFailAlloc_4465_, 4, v_traceState_4450_);
lean_ctor_set(v_reuseFailAlloc_4465_, 5, v_cache_4451_);
lean_ctor_set(v_reuseFailAlloc_4465_, 6, v_recordedDeps_4452_);
lean_ctor_set(v_reuseFailAlloc_4465_, 7, v___x_4460_);
lean_ctor_set(v_reuseFailAlloc_4465_, 8, v_infoState_4454_);
lean_ctor_set(v_reuseFailAlloc_4465_, 9, v_snapshotTasks_4455_);
v___x_4462_ = v_reuseFailAlloc_4465_;
goto v_reusejp_4461_;
}
v_reusejp_4461_:
{
lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4463_ = lean_st_ref_put(v___y_4439_, v___x_4462_);
v___x_4464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4464_, 0, v___x_4459_);
return v___x_4464_;
}
}
}
v___jp_4467_:
{
lean_object* v_fileName_4476_; lean_object* v_fileMap_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4493_; 
v_fileName_4476_ = lean_ctor_get(v___y_4473_, 0);
v_fileMap_4477_ = lean_ctor_get(v___y_4473_, 1);
v___x_4478_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4422_);
v___x_4479_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v___x_4478_, v___y_4425_, v___y_4426_, v___y_4427_, v___y_4428_);
v_a_4480_ = lean_ctor_get(v___x_4479_, 0);
v_isSharedCheck_4493_ = !lean_is_exclusive(v___x_4479_);
if (v_isSharedCheck_4493_ == 0)
{
v___x_4482_ = v___x_4479_;
v_isShared_4483_ = v_isSharedCheck_4493_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4479_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4493_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; 
lean_inc_ref_n(v_fileMap_4477_, 2);
v___x_4484_ = l_Lean_FileMap_toPosition(v_fileMap_4477_, v___y_4474_);
lean_dec(v___y_4474_);
v___x_4485_ = l_Lean_FileMap_toPosition(v_fileMap_4477_, v___y_4475_);
lean_dec(v___y_4475_);
v___x_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4486_, 0, v___x_4485_);
v___x_4487_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0));
if (v___y_4471_ == 0)
{
lean_del_object(v___x_4482_);
lean_dec_ref(v___y_4468_);
v___y_4431_ = v___y_4470_;
v___y_4432_ = v___x_4484_;
v___y_4433_ = v___y_4472_;
v___y_4434_ = v___x_4487_;
v___y_4435_ = v_a_4480_;
v___y_4436_ = v_fileName_4476_;
v___y_4437_ = v___x_4486_;
v_toCold_4438_ = v___y_4469_;
v___y_4439_ = v___y_4428_;
goto v___jp_4430_;
}
else
{
uint8_t v___x_4488_; 
lean_inc(v_a_4480_);
v___x_4488_ = l_Lean_MessageData_hasTag(v___y_4468_, v_a_4480_);
if (v___x_4488_ == 0)
{
lean_object* v___x_4489_; lean_object* v___x_4491_; 
lean_dec_ref_known(v___x_4486_, 1);
lean_dec_ref(v___x_4484_);
lean_dec(v_a_4480_);
v___x_4489_ = lean_box(0);
if (v_isShared_4483_ == 0)
{
lean_ctor_set(v___x_4482_, 0, v___x_4489_);
v___x_4491_ = v___x_4482_;
goto v_reusejp_4490_;
}
else
{
lean_object* v_reuseFailAlloc_4492_; 
v_reuseFailAlloc_4492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4492_, 0, v___x_4489_);
v___x_4491_ = v_reuseFailAlloc_4492_;
goto v_reusejp_4490_;
}
v_reusejp_4490_:
{
return v___x_4491_;
}
}
else
{
lean_del_object(v___x_4482_);
v___y_4431_ = v___y_4470_;
v___y_4432_ = v___x_4484_;
v___y_4433_ = v___y_4472_;
v___y_4434_ = v___x_4487_;
v___y_4435_ = v_a_4480_;
v___y_4436_ = v_fileName_4476_;
v___y_4437_ = v___x_4486_;
v_toCold_4438_ = v___y_4469_;
v___y_4439_ = v___y_4428_;
goto v___jp_4430_;
}
}
}
}
v___jp_4494_:
{
lean_object* v___x_4502_; 
v___x_4502_ = l_Lean_Syntax_getTailPos_x3f(v___y_4500_, v___y_4498_);
lean_dec(v___y_4500_);
if (lean_obj_tag(v___x_4502_) == 0)
{
lean_inc(v___y_4501_);
v___y_4468_ = v___y_4496_;
v___y_4469_ = v___y_4497_;
v___y_4470_ = v___y_4498_;
v___y_4471_ = v___y_4495_;
v___y_4472_ = v___y_4499_;
v___y_4473_ = v___y_4497_;
v___y_4474_ = v___y_4501_;
v___y_4475_ = v___y_4501_;
goto v___jp_4467_;
}
else
{
lean_object* v_val_4503_; 
v_val_4503_ = lean_ctor_get(v___x_4502_, 0);
lean_inc(v_val_4503_);
lean_dec_ref_known(v___x_4502_, 1);
v___y_4468_ = v___y_4496_;
v___y_4469_ = v___y_4497_;
v___y_4470_ = v___y_4498_;
v___y_4471_ = v___y_4495_;
v___y_4472_ = v___y_4499_;
v___y_4473_ = v___y_4497_;
v___y_4474_ = v___y_4501_;
v___y_4475_ = v_val_4503_;
goto v___jp_4467_;
}
}
v___jp_4504_:
{
lean_object* v_toCold_4508_; lean_object* v_ref_4509_; uint8_t v_suppressElabErrors_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___f_4513_; lean_object* v_ref_4514_; lean_object* v___x_4515_; 
v_toCold_4508_ = lean_ctor_get(v___y_4427_, 0);
v_ref_4509_ = lean_ctor_get(v___y_4427_, 2);
v_suppressElabErrors_4510_ = lean_ctor_get_uint8(v___y_4427_, sizeof(void*)*3 + 2);
v___x_4511_ = lean_box(v_suppressElabErrors_4510_);
v___x_4512_ = lean_box(v___y_4505_);
v___f_4513_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4513_, 0, v___x_4511_);
lean_closure_set(v___f_4513_, 1, v___x_4512_);
v_ref_4514_ = l_Lean_replaceRef(v_ref_4421_, v_ref_4509_);
v___x_4515_ = l_Lean_Syntax_getPos_x3f(v_ref_4514_, v___y_4506_);
if (lean_obj_tag(v___x_4515_) == 0)
{
lean_object* v___x_4516_; 
v___x_4516_ = lean_unsigned_to_nat(0u);
v___y_4495_ = v_suppressElabErrors_4510_;
v___y_4496_ = v___f_4513_;
v___y_4497_ = v_toCold_4508_;
v___y_4498_ = v___y_4506_;
v___y_4499_ = v___y_4507_;
v___y_4500_ = v_ref_4514_;
v___y_4501_ = v___x_4516_;
goto v___jp_4494_;
}
else
{
lean_object* v_val_4517_; 
v_val_4517_ = lean_ctor_get(v___x_4515_, 0);
lean_inc(v_val_4517_);
lean_dec_ref_known(v___x_4515_, 1);
v___y_4495_ = v_suppressElabErrors_4510_;
v___y_4496_ = v___f_4513_;
v___y_4497_ = v_toCold_4508_;
v___y_4498_ = v___y_4506_;
v___y_4499_ = v___y_4507_;
v___y_4500_ = v_ref_4514_;
v___y_4501_ = v_val_4517_;
goto v___jp_4494_;
}
}
v___jp_4519_:
{
if (v___y_4522_ == 0)
{
v___y_4505_ = v___y_4520_;
v___y_4506_ = v___y_4521_;
v___y_4507_ = v_severity_4423_;
goto v___jp_4504_;
}
else
{
v___y_4505_ = v___y_4520_;
v___y_4506_ = v___y_4521_;
v___y_4507_ = v___x_4518_;
goto v___jp_4504_;
}
}
v___jp_4523_:
{
if (v___y_4524_ == 0)
{
uint8_t v___x_4525_; uint8_t v___x_4526_; 
v___x_4525_ = 1;
v___x_4526_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4423_, v___x_4525_);
if (v___x_4526_ == 0)
{
v___y_4520_ = v___y_4524_;
v___y_4521_ = v___y_4524_;
v___y_4522_ = v___x_4526_;
goto v___jp_4519_;
}
else
{
lean_object* v___x_4527_; lean_object* v___x_4528_; uint8_t v___x_4529_; 
v___x_4527_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4427_);
v___x_4528_ = l_Lean_warningAsError;
v___x_4529_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v___x_4527_, v___x_4528_);
lean_dec_ref(v___x_4527_);
v___y_4520_ = v___y_4524_;
v___y_4521_ = v___y_4524_;
v___y_4522_ = v___x_4529_;
goto v___jp_4519_;
}
}
else
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
lean_dec_ref(v_msgData_4422_);
v___x_4530_ = lean_box(0);
v___x_4531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4531_, 0, v___x_4530_);
return v___x_4531_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___boxed(lean_object* v_ref_4534_, lean_object* v_msgData_4535_, lean_object* v_severity_4536_, lean_object* v_isSilent_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_){
_start:
{
uint8_t v_severity_boxed_4543_; uint8_t v_isSilent_boxed_4544_; lean_object* v_res_4545_; 
v_severity_boxed_4543_ = lean_unbox(v_severity_4536_);
v_isSilent_boxed_4544_ = lean_unbox(v_isSilent_4537_);
v_res_4545_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4534_, v_msgData_4535_, v_severity_boxed_4543_, v_isSilent_boxed_4544_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_);
lean_dec(v___y_4541_);
lean_dec_ref(v___y_4540_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
lean_dec(v_ref_4534_);
return v_res_4545_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(lean_object* v_msgData_4546_, uint8_t v_severity_4547_, uint8_t v_isSilent_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_){
_start:
{
lean_object* v_ref_4554_; lean_object* v___x_4555_; 
v_ref_4554_ = lean_ctor_get(v___y_4551_, 2);
v___x_4555_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4554_, v_msgData_4546_, v_severity_4547_, v_isSilent_4548_, v___y_4549_, v___y_4550_, v___y_4551_, v___y_4552_);
return v___x_4555_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2___boxed(lean_object* v_msgData_4556_, lean_object* v_severity_4557_, lean_object* v_isSilent_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_){
_start:
{
uint8_t v_severity_boxed_4564_; uint8_t v_isSilent_boxed_4565_; lean_object* v_res_4566_; 
v_severity_boxed_4564_ = lean_unbox(v_severity_4557_);
v_isSilent_boxed_4565_ = lean_unbox(v_isSilent_4558_);
v_res_4566_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4556_, v_severity_boxed_4564_, v_isSilent_boxed_4565_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_);
lean_dec(v___y_4562_);
lean_dec_ref(v___y_4561_);
lean_dec(v___y_4560_);
lean_dec_ref(v___y_4559_);
return v_res_4566_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(lean_object* v_msgData_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_){
_start:
{
uint8_t v___x_4573_; uint8_t v___x_4574_; lean_object* v___x_4575_; 
v___x_4573_ = 2;
v___x_4574_ = 0;
v___x_4575_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4567_, v___x_4573_, v___x_4574_, v___y_4568_, v___y_4569_, v___y_4570_, v___y_4571_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2___boxed(lean_object* v_msgData_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_){
_start:
{
lean_object* v_res_4582_; 
v_res_4582_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v_msgData_4576_, v___y_4577_, v___y_4578_, v___y_4579_, v___y_4580_);
lean_dec(v___y_4580_);
lean_dec_ref(v___y_4579_);
lean_dec(v___y_4578_);
lean_dec_ref(v___y_4577_);
return v_res_4582_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1(void){
_start:
{
lean_object* v___x_4584_; lean_object* v___x_4585_; 
v___x_4584_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0));
v___x_4585_ = l_Lean_stringToMessageData(v___x_4584_);
return v___x_4585_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4587_; lean_object* v___x_4588_; 
v___x_4587_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2));
v___x_4588_ = l_Lean_stringToMessageData(v___x_4587_);
return v___x_4588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(lean_object* v_as_4589_, size_t v_sz_4590_, size_t v_i_4591_, lean_object* v_b_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
lean_object* v_a_4599_; uint8_t v___x_4603_; 
v___x_4603_ = lean_usize_dec_lt(v_i_4591_, v_sz_4590_);
if (v___x_4603_ == 0)
{
lean_object* v___x_4604_; 
v___x_4604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4604_, 0, v_b_4592_);
return v___x_4604_;
}
else
{
lean_object* v___x_4605_; lean_object* v_a_4606_; lean_object* v___x_4607_; lean_object* v_env_4608_; lean_object* v___x_4609_; uint8_t v___x_4610_; 
v___x_4605_ = lean_box(0);
v_a_4606_ = lean_array_uget_borrowed(v_as_4589_, v_i_4591_);
v___x_4607_ = lean_st_ref_get(v___y_4596_);
v_env_4608_ = lean_ctor_get(v___x_4607_, 0);
lean_inc_ref(v_env_4608_);
lean_dec(v___x_4607_);
v___x_4609_ = l_Lean_Elab_ComputedFields_computedFieldAttr;
lean_inc(v_a_4606_);
v___x_4610_ = l_Lean_TagAttribute_hasTag(v___x_4609_, v_env_4608_, v_a_4606_);
if (v___x_4610_ == 0)
{
lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; 
v___x_4611_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1);
lean_inc(v_a_4606_);
v___x_4612_ = l_Lean_MessageData_ofName(v_a_4606_);
v___x_4613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4611_);
lean_ctor_set(v___x_4613_, 1, v___x_4612_);
v___x_4614_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3);
v___x_4615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4615_, 0, v___x_4613_);
lean_ctor_set(v___x_4615_, 1, v___x_4614_);
v___x_4616_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v___x_4615_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_);
if (lean_obj_tag(v___x_4616_) == 0)
{
lean_dec_ref_known(v___x_4616_, 1);
v_a_4599_ = v___x_4605_;
goto v___jp_4598_;
}
else
{
return v___x_4616_;
}
}
else
{
v_a_4599_ = v___x_4605_;
goto v___jp_4598_;
}
}
v___jp_4598_:
{
size_t v___x_4600_; size_t v___x_4601_; 
v___x_4600_ = ((size_t)1ULL);
v___x_4601_ = lean_usize_add(v_i_4591_, v___x_4600_);
v_i_4591_ = v___x_4601_;
v_b_4592_ = v_a_4599_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___boxed(lean_object* v_as_4617_, lean_object* v_sz_4618_, lean_object* v_i_4619_, lean_object* v_b_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_){
_start:
{
size_t v_sz_boxed_4626_; size_t v_i_boxed_4627_; lean_object* v_res_4628_; 
v_sz_boxed_4626_ = lean_unbox_usize(v_sz_4618_);
lean_dec(v_sz_4618_);
v_i_boxed_4627_ = lean_unbox_usize(v_i_4619_);
lean_dec(v_i_4619_);
v_res_4628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_as_4617_, v_sz_boxed_4626_, v_i_boxed_4627_, v_b_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_);
lean_dec(v___y_4624_);
lean_dec_ref(v___y_4623_);
lean_dec(v___y_4622_);
lean_dec_ref(v___y_4621_);
lean_dec_ref(v_as_4617_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(lean_object* v_as_4629_, size_t v_sz_4630_, size_t v_i_4631_, lean_object* v_b_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_){
_start:
{
uint8_t v___x_4638_; 
v___x_4638_ = lean_usize_dec_lt(v_i_4631_, v_sz_4630_);
if (v___x_4638_ == 0)
{
lean_object* v___x_4639_; 
v___x_4639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4639_, 0, v_b_4632_);
return v___x_4639_;
}
else
{
lean_object* v_a_4640_; lean_object* v_fst_4641_; lean_object* v_snd_4642_; lean_object* v___x_4643_; size_t v_sz_4644_; size_t v___x_4645_; lean_object* v___x_4646_; 
v_a_4640_ = lean_array_uget_borrowed(v_as_4629_, v_i_4631_);
v_fst_4641_ = lean_ctor_get(v_a_4640_, 0);
v_snd_4642_ = lean_ctor_get(v_a_4640_, 1);
v___x_4643_ = lean_box(0);
v_sz_4644_ = lean_array_size(v_snd_4642_);
v___x_4645_ = ((size_t)0ULL);
v___x_4646_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_snd_4642_, v_sz_4644_, v___x_4645_, v___x_4643_, v___y_4633_, v___y_4634_, v___y_4635_, v___y_4636_);
if (lean_obj_tag(v___x_4646_) == 0)
{
lean_object* v___x_4647_; 
lean_dec_ref_known(v___x_4646_, 1);
lean_inc(v_snd_4642_);
lean_inc(v_fst_4641_);
v___x_4647_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_fst_4641_, v_snd_4642_, v___y_4633_, v___y_4634_, v___y_4635_, v___y_4636_);
if (lean_obj_tag(v___x_4647_) == 0)
{
size_t v___x_4648_; size_t v___x_4649_; 
lean_dec_ref_known(v___x_4647_, 1);
v___x_4648_ = ((size_t)1ULL);
v___x_4649_ = lean_usize_add(v_i_4631_, v___x_4648_);
v_i_4631_ = v___x_4649_;
v_b_4632_ = v___x_4643_;
goto _start;
}
else
{
return v___x_4647_;
}
}
else
{
return v___x_4646_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4___boxed(lean_object* v_as_4651_, lean_object* v_sz_4652_, lean_object* v_i_4653_, lean_object* v_b_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_){
_start:
{
size_t v_sz_boxed_4660_; size_t v_i_boxed_4661_; lean_object* v_res_4662_; 
v_sz_boxed_4660_ = lean_unbox_usize(v_sz_4652_);
lean_dec(v_sz_4652_);
v_i_boxed_4661_ = lean_unbox_usize(v_i_4653_);
lean_dec(v_i_4653_);
v_res_4662_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_as_4651_, v_sz_boxed_4660_, v_i_boxed_4661_, v_b_4654_, v___y_4655_, v___y_4656_, v___y_4657_, v___y_4658_);
lean_dec(v___y_4658_);
lean_dec_ref(v___y_4657_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec_ref(v_as_4651_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(size_t v_sz_4663_, size_t v_i_4664_, lean_object* v_bs_4665_){
_start:
{
uint8_t v___x_4666_; 
v___x_4666_ = lean_usize_dec_lt(v_i_4664_, v_sz_4663_);
if (v___x_4666_ == 0)
{
return v_bs_4665_;
}
else
{
lean_object* v_v_4667_; lean_object* v_fst_4668_; lean_object* v___x_4669_; lean_object* v_bs_x27_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; size_t v___x_4674_; size_t v___x_4675_; lean_object* v___x_4676_; 
v_v_4667_ = lean_array_uget_borrowed(v_bs_4665_, v_i_4664_);
v_fst_4668_ = lean_ctor_get(v_v_4667_, 0);
lean_inc(v_fst_4668_);
v___x_4669_ = lean_unsigned_to_nat(0u);
v_bs_x27_4670_ = lean_array_uset(v_bs_4665_, v_i_4664_, v___x_4669_);
v___x_4671_ = l_Lean_mkCasesOnName(v_fst_4668_);
v___x_4672_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
v___x_4673_ = l_Lean_Name_append(v___x_4671_, v___x_4672_);
v___x_4674_ = ((size_t)1ULL);
v___x_4675_ = lean_usize_add(v_i_4664_, v___x_4674_);
v___x_4676_ = lean_array_uset(v_bs_x27_4670_, v_i_4664_, v___x_4673_);
v_i_4664_ = v___x_4675_;
v_bs_4665_ = v___x_4676_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5___boxed(lean_object* v_sz_4678_, lean_object* v_i_4679_, lean_object* v_bs_4680_){
_start:
{
size_t v_sz_boxed_4681_; size_t v_i_boxed_4682_; lean_object* v_res_4683_; 
v_sz_boxed_4681_ = lean_unbox_usize(v_sz_4678_);
lean_dec(v_sz_4678_);
v_i_boxed_4682_ = lean_unbox_usize(v_i_4679_);
lean_dec(v_i_4679_);
v_res_4683_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_boxed_4681_, v_i_boxed_4682_, v_bs_4680_);
return v_res_4683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields(lean_object* v_computedFields_4686_, lean_object* v_a_4687_, lean_object* v_a_4688_, lean_object* v_a_4689_, lean_object* v_a_4690_){
_start:
{
lean_object* v___x_4692_; size_t v_sz_4693_; size_t v___x_4694_; lean_object* v___x_4695_; 
v___x_4692_ = lean_box(0);
v_sz_4693_ = lean_array_size(v_computedFields_4686_);
v___x_4694_ = ((size_t)0ULL);
v___x_4695_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_computedFields_4686_, v_sz_4693_, v___x_4694_, v___x_4692_, v_a_4687_, v_a_4688_, v_a_4689_, v_a_4690_);
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v___x_4696_; uint8_t v___x_4697_; lean_object* v___x_4698_; 
lean_dec_ref_known(v___x_4695_, 1);
lean_inc_ref(v_computedFields_4686_);
v___x_4696_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_4693_, v___x_4694_, v_computedFields_4686_);
v___x_4697_ = 1;
v___x_4698_ = l_Lean_compileDecls(v___x_4696_, v___x_4697_, v_a_4689_, v_a_4690_);
if (lean_obj_tag(v___x_4698_) == 0)
{
lean_object* v___x_4699_; lean_object* v___x_4700_; 
lean_dec_ref_known(v___x_4698_, 1);
v___x_4699_ = ((lean_object*)(l_Lean_Elab_ComputedFields_setComputedFields___closed__0));
v___x_4700_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_computedFields_4686_, v_sz_4693_, v___x_4694_, v___x_4699_, v_a_4687_, v_a_4688_, v_a_4689_, v_a_4690_);
lean_dec_ref(v_computedFields_4686_);
if (lean_obj_tag(v___x_4700_) == 0)
{
lean_object* v_a_4701_; lean_object* v___x_4702_; 
v_a_4701_ = lean_ctor_get(v___x_4700_, 0);
lean_inc(v_a_4701_);
lean_dec_ref_known(v___x_4700_, 1);
v___x_4702_ = l_Lean_compileDecls(v_a_4701_, v___x_4697_, v_a_4689_, v_a_4690_);
return v___x_4702_;
}
else
{
lean_object* v_a_4703_; lean_object* v___x_4705_; uint8_t v_isShared_4706_; uint8_t v_isSharedCheck_4710_; 
v_a_4703_ = lean_ctor_get(v___x_4700_, 0);
v_isSharedCheck_4710_ = !lean_is_exclusive(v___x_4700_);
if (v_isSharedCheck_4710_ == 0)
{
v___x_4705_ = v___x_4700_;
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
else
{
lean_inc(v_a_4703_);
lean_dec(v___x_4700_);
v___x_4705_ = lean_box(0);
v_isShared_4706_ = v_isSharedCheck_4710_;
goto v_resetjp_4704_;
}
v_resetjp_4704_:
{
lean_object* v___x_4708_; 
if (v_isShared_4706_ == 0)
{
v___x_4708_ = v___x_4705_;
goto v_reusejp_4707_;
}
else
{
lean_object* v_reuseFailAlloc_4709_; 
v_reuseFailAlloc_4709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4709_, 0, v_a_4703_);
v___x_4708_ = v_reuseFailAlloc_4709_;
goto v_reusejp_4707_;
}
v_reusejp_4707_:
{
return v___x_4708_;
}
}
}
}
else
{
lean_dec_ref(v_computedFields_4686_);
return v___x_4698_;
}
}
else
{
lean_dec_ref(v_computedFields_4686_);
return v___x_4695_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields___boxed(lean_object* v_computedFields_4711_, lean_object* v_a_4712_, lean_object* v_a_4713_, lean_object* v_a_4714_, lean_object* v_a_4715_, lean_object* v_a_4716_){
_start:
{
lean_object* v_res_4717_; 
v_res_4717_ = l_Lean_Elab_ComputedFields_setComputedFields(v_computedFields_4711_, v_a_4712_, v_a_4713_, v_a_4714_, v_a_4715_);
lean_dec(v_a_4715_);
lean_dec_ref(v_a_4714_);
lean_dec(v_a_4713_);
lean_dec_ref(v_a_4712_);
return v_res_4717_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(lean_object* v_as_4718_, lean_object* v_as_x27_4719_, lean_object* v_b_4720_, lean_object* v_a_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_){
_start:
{
lean_object* v___x_4727_; 
v___x_4727_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4719_, v_b_4720_);
return v___x_4727_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___boxed(lean_object* v_as_4728_, lean_object* v_as_x27_4729_, lean_object* v_b_4730_, lean_object* v_a_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_){
_start:
{
lean_object* v_res_4737_; 
v_res_4737_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(v_as_4728_, v_as_x27_4729_, v_b_4730_, v_a_4731_, v___y_4732_, v___y_4733_, v___y_4734_, v___y_4735_);
lean_dec(v___y_4735_);
lean_dec_ref(v___y_4734_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
lean_dec(v_as_x27_4729_);
lean_dec(v_as_4728_);
return v_res_4737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(lean_object* v_as_4738_, size_t v_sz_4739_, size_t v_i_4740_, lean_object* v_b_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_){
_start:
{
lean_object* v___x_4747_; 
v___x_4747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4738_, v_sz_4739_, v_i_4740_, v_b_4741_, v___y_4745_);
return v___x_4747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___boxed(lean_object* v_as_4748_, lean_object* v_sz_4749_, lean_object* v_i_4750_, lean_object* v_b_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_){
_start:
{
size_t v_sz_boxed_4757_; size_t v_i_boxed_4758_; lean_object* v_res_4759_; 
v_sz_boxed_4757_ = lean_unbox_usize(v_sz_4749_);
lean_dec(v_sz_4749_);
v_i_boxed_4758_ = lean_unbox_usize(v_i_4750_);
lean_dec(v_i_4750_);
v_res_4759_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(v_as_4748_, v_sz_boxed_4757_, v_i_boxed_4758_, v_b_4751_, v___y_4752_, v___y_4753_, v___y_4754_, v___y_4755_);
lean_dec(v___y_4755_);
lean_dec_ref(v___y_4754_);
lean_dec(v___y_4753_);
lean_dec_ref(v___y_4752_);
lean_dec_ref(v_as_4748_);
return v_res_4759_;
}
}
lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ComputedFields(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Constructions_CasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_ComputedFields_computedFieldAttr = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_ComputedFields_computedFieldAttr);
lean_dec_ref(res);
res = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ComputedFields(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Constructions_CasesOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Compiler_ExternAttr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ComputedFields(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Constructions_CasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_ExternAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ComputedFields(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ComputedFields(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ComputedFields(builtin);
}
#ifdef __cplusplus
}
#endif
