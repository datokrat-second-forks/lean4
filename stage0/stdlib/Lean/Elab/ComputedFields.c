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
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg();
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addZetaDeltaFVarId___redArg(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_occurs(lean_object*, lean_object*);
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
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
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
lean_object* l_Lean_registerTagAttribute(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
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
static const lean_string_object l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 538, .m_capacity = 538, .m_length = 529, .m_data = "Marks a function as a computed field of an inductive.\n\nComputed fields are specified in the with-block of an inductive type declaration. They can be used\nto allow certain values to be computed only once at the time of construction and then later be\naccessed immediately.\n\nExample:\n```\ninductive NatList where\n  | nil\n  | cons : Nat → NatList → NatList\nwith\n  @[computed_field] sum : NatList → Nat\n  | .nil => 0\n  | .cons x l => x + l.sum\n  @[computed_field] length : NatList → Nat\n  | .nil => 0\n  | .cons _ l => l.length + 1\n```\n"};
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
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__7 = (const lean_object*)&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__7_value;
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
static lean_once_cell_t l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_5_);
lean_ctor_set(v___x_6_, 2, v___x_5_);
lean_ctor_set(v___x_6_, 3, v___x_5_);
lean_ctor_set(v___x_6_, 4, v___x_4_);
lean_ctor_set(v___x_6_, 5, v___x_4_);
lean_ctor_set(v___x_6_, 6, v___x_4_);
lean_ctor_set(v___x_6_, 7, v___x_4_);
lean_ctor_set(v___x_6_, 8, v___x_4_);
lean_ctor_set(v___x_6_, 9, v___x_4_);
lean_ctor_set(v___x_6_, 10, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_unsigned_to_nat(32u);
v___x_8_ = lean_mk_empty_array_with_capacity(v___x_7_);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_10_ = ((size_t)5ULL);
v___x_11_ = lean_unsigned_to_nat(0u);
v___x_12_ = lean_unsigned_to_nat(32u);
v___x_13_ = lean_mk_empty_array_with_capacity(v___x_12_);
v___x_14_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_15_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set(v___x_15_, 2, v___x_11_);
lean_ctor_set(v___x_15_, 3, v___x_11_);
lean_ctor_set_usize(v___x_15_, 4, v___x_10_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_16_ = lean_box(1);
v___x_17_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_18_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_19_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
lean_ctor_set(v___x_19_, 1, v___x_17_);
lean_ctor_set(v___x_19_, 2, v___x_16_);
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v___x_24_; lean_object* v_toCold_25_; lean_object* v_env_26_; lean_object* v_options_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_24_ = lean_st_ref_get(v___y_22_);
v_toCold_25_ = lean_ctor_get(v___y_21_, 0);
v_env_26_ = lean_ctor_get(v___x_24_, 0);
lean_inc_ref(v_env_26_);
lean_dec(v___x_24_);
v_options_27_ = lean_ctor_get(v_toCold_25_, 2);
v___x_28_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_29_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_27_);
v___x_30_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_30_, 0, v_env_26_);
lean_ctor_set(v___x_30_, 1, v___x_28_);
lean_ctor_set(v___x_30_, 2, v___x_29_);
lean_ctor_set(v___x_30_, 3, v_options_27_);
v___x_31_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
lean_ctor_set(v___x_31_, 1, v_msgData_20_);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(v_msgData_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v_ref_42_; lean_object* v___x_43_; lean_object* v_a_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_52_; 
v_ref_42_ = lean_ctor_get(v___y_39_, 2);
v___x_43_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0(v_msg_38_, v___y_39_, v___y_40_);
v_a_44_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_52_ == 0)
{
v___x_46_ = v___x_43_;
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
else
{
lean_inc(v_a_44_);
lean_dec(v___x_43_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_52_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
lean_object* v___x_48_; lean_object* v___x_50_; 
lean_inc(v_ref_42_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v_ref_42_);
lean_ctor_set(v___x_48_, 1, v_a_44_);
if (v_isShared_47_ == 0)
{
lean_ctor_set_tag(v___x_46_, 1);
lean_ctor_set(v___x_46_, 0, v___x_48_);
v___x_50_ = v___x_46_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_48_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v_msg_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
return v_res_57_;
}
}
static lean_object* _init_l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_60_ = l_Lean_stringToMessageData(v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(lean_object* v_x_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v_toCold_71_; lean_object* v_options_72_; lean_object* v_map_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_toCold_71_ = lean_ctor_get(v___y_65_, 0);
v_options_72_ = lean_ctor_get(v_toCold_71_, 2);
v_map_73_ = lean_ctor_get(v_options_72_, 0);
v___x_74_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_75_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_73_, v___x_74_);
if (lean_obj_tag(v___x_75_) == 0)
{
goto v___jp_68_;
}
else
{
lean_object* v_val_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_85_; 
v_val_76_ = lean_ctor_get(v___x_75_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_85_ == 0)
{
v___x_78_ = v___x_75_;
v_isShared_79_ = v_isSharedCheck_85_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_val_76_);
lean_dec(v___x_75_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_85_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
if (lean_obj_tag(v_val_76_) == 1)
{
uint8_t v_v_80_; 
v_v_80_ = lean_ctor_get_uint8(v_val_76_, 0);
lean_dec_ref_known(v_val_76_, 0);
if (v_v_80_ == 0)
{
lean_del_object(v___x_78_);
goto v___jp_68_;
}
else
{
lean_object* v___x_81_; lean_object* v___x_83_; 
v___x_81_ = lean_box(0);
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 0);
lean_ctor_set(v___x_78_, 0, v___x_81_);
v___x_83_ = v___x_78_;
goto v_reusejp_82_;
}
else
{
lean_object* v_reuseFailAlloc_84_; 
v_reuseFailAlloc_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_84_, 0, v___x_81_);
v___x_83_ = v_reuseFailAlloc_84_;
goto v_reusejp_82_;
}
v_reusejp_82_:
{
return v___x_83_;
}
}
}
else
{
lean_del_object(v___x_78_);
lean_dec(v_val_76_);
goto v___jp_68_;
}
}
}
v___jp_68_:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_obj_once(&l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_, &l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0___closed__1_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_);
v___x_70_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v___x_69_, v___y_65_, v___y_66_);
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object* v_x_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___lam__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(v_x_86_, v___y_87_, v___y_88_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v_x_86_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___f_106_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__0_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_107_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__2_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_108_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__3_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_109_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_110_ = 0;
v___x_111_ = lean_box(2);
v___x_112_ = l_Lean_registerTagAttribute(v___x_107_, v___x_108_, v___f_106_, v___x_109_, v___x_110_, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object* v___y_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_();
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_115_, lean_object* v_msg_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v_msg_116_, v___y_117_, v___y_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_121_, lean_object* v_msg_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0(v_00_u03b1_121_, v_msg_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1(){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_130_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___closed__0));
v___x_131_ = l_Lean_addBuiltinDocString(v___x_129_, v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___boxed(lean_object* v___y_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1();
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3(){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__8_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_161_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___closed__6));
v___x_162_ = l_Lean_addBuiltinDeclarationRanges(v___x_160_, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___boxed(lean_object* v___y_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3();
return v_res_164_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_box(0);
v___x_169_ = lean_unsigned_to_nat(3u);
v___x_170_ = lean_mk_empty_array_with_capacity(v___x_169_);
v___x_171_ = lean_array_push(v___x_170_, v___x_168_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo(lean_object* v_expectedType_172_, lean_object* v_e_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_179_ = ((lean_object*)(l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__1));
v___x_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_180_, 0, v_expectedType_172_);
v___x_181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_181_, 0, v_e_173_);
v___x_182_ = lean_obj_once(&l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2, &l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2_once, _init_l_Lean_Elab_ComputedFields_mkUnsafeCastTo___closed__2);
v___x_183_ = lean_array_push(v___x_182_, v___x_180_);
v___x_184_ = lean_array_push(v___x_183_, v___x_181_);
v___x_185_ = l_Lean_Meta_mkAppOptM(v___x_179_, v___x_184_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___boxed(lean_object* v_expectedType_186_, lean_object* v_e_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_expectedType_186_, v_e_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(lean_object* v_msg_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v___f_206_; lean_object* v___f_207_; lean_object* v___f_208_; lean_object* v___f_209_; lean_object* v___f_210_; lean_object* v___f_211_; lean_object* v___f_212_; lean_object* v___f_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v_toApplicative_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_249_; 
v___f_206_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0));
v___f_207_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_208_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
v___f_209_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__3));
v___f_210_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__4));
v___f_211_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_211_, 0, v___f_210_);
lean_closure_set(v___f_211_, 1, v___f_209_);
v___f_212_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_212_, 0, v___f_209_);
v___f_213_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__5));
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___f_206_);
lean_ctor_set(v___x_214_, 1, v___f_207_);
v___x_215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___f_208_);
lean_ctor_set(v___x_215_, 2, v___f_211_);
lean_ctor_set(v___x_215_, 3, v___f_212_);
lean_ctor_set(v___x_215_, 4, v___f_213_);
v___x_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
lean_ctor_set(v___x_216_, 1, v___f_209_);
v___x_217_ = l_StateRefT_x27_instMonad___redArg(v___x_216_);
v_toApplicative_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_249_ == 0)
{
lean_object* v_unused_250_; 
v_unused_250_ = lean_ctor_get(v___x_217_, 1);
lean_dec(v_unused_250_);
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_249_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_toApplicative_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_249_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v_toFunctor_222_; lean_object* v_toSeq_223_; lean_object* v_toSeqLeft_224_; lean_object* v_toSeqRight_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_247_; 
v_toFunctor_222_ = lean_ctor_get(v_toApplicative_218_, 0);
v_toSeq_223_ = lean_ctor_get(v_toApplicative_218_, 2);
v_toSeqLeft_224_ = lean_ctor_get(v_toApplicative_218_, 3);
v_toSeqRight_225_ = lean_ctor_get(v_toApplicative_218_, 4);
v_isSharedCheck_247_ = !lean_is_exclusive(v_toApplicative_218_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; 
v_unused_248_ = lean_ctor_get(v_toApplicative_218_, 1);
lean_dec(v_unused_248_);
v___x_227_ = v_toApplicative_218_;
v_isShared_228_ = v_isSharedCheck_247_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_toSeqRight_225_);
lean_inc(v_toSeqLeft_224_);
lean_inc(v_toSeq_223_);
lean_inc(v_toFunctor_222_);
lean_dec(v_toApplicative_218_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_247_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___f_229_; lean_object* v___f_230_; lean_object* v___f_231_; lean_object* v___f_232_; lean_object* v___x_233_; lean_object* v___f_234_; lean_object* v___f_235_; lean_object* v___f_236_; lean_object* v___x_238_; 
v___f_229_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__6));
v___f_230_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__7));
lean_inc_ref(v_toFunctor_222_);
v___f_231_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_231_, 0, v_toFunctor_222_);
v___f_232_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_232_, 0, v_toFunctor_222_);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___f_231_);
lean_ctor_set(v___x_233_, 1, v___f_232_);
v___f_234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_234_, 0, v_toSeqRight_225_);
v___f_235_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_235_, 0, v_toSeqLeft_224_);
v___f_236_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_236_, 0, v_toSeq_223_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 4, v___f_234_);
lean_ctor_set(v___x_227_, 3, v___f_235_);
lean_ctor_set(v___x_227_, 2, v___f_236_);
lean_ctor_set(v___x_227_, 1, v___f_229_);
lean_ctor_set(v___x_227_, 0, v___x_233_);
v___x_238_ = v___x_227_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_233_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___f_229_);
lean_ctor_set(v_reuseFailAlloc_246_, 2, v___f_236_);
lean_ctor_set(v_reuseFailAlloc_246_, 3, v___f_235_);
lean_ctor_set(v_reuseFailAlloc_246_, 4, v___f_234_);
v___x_238_ = v_reuseFailAlloc_246_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 1, v___f_230_);
lean_ctor_set(v___x_220_, 0, v___x_238_);
v___x_240_ = v___x_220_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___f_230_);
v___x_240_ = v_reuseFailAlloc_245_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_834__overap_243_; lean_object* v___x_244_; 
v___x_241_ = lean_box(0);
v___x_242_ = l_instInhabitedOfMonad___redArg(v___x_240_, v___x_241_);
v___x_834__overap_243_ = lean_panic_fn_borrowed(v___x_242_, v_msg_202_);
lean_dec(v___x_242_);
lean_inc(v___y_204_);
lean_inc_ref(v___y_203_);
v___x_244_ = lean_apply_3(v___x_834__overap_243_, v___y_203_, v___y_204_, lean_box(0));
return v___x_244_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___boxed(lean_object* v_msg_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v_msg_251_, v___y_252_, v___y_253_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
return v_res_255_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0));
v___x_258_ = l_Lean_stringToMessageData(v___x_257_);
return v___x_258_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3(void){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_260_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2));
v___x_261_ = l_Lean_stringToMessageData(v___x_260_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_265_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_266_ = lean_unsigned_to_nat(11u);
v___x_267_ = lean_unsigned_to_nat(122u);
v___x_268_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5));
v___x_269_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_270_ = l_mkPanicMessageWithDecl(v___x_269_, v___x_268_, v___x_267_, v___x_266_, v___x_265_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(lean_object* v_constName_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v___x_283_; lean_object* v_env_284_; uint8_t v___x_285_; lean_object* v___x_286_; 
v___x_283_ = lean_st_ref_get(v___y_273_);
v_env_284_ = lean_ctor_get(v___x_283_, 0);
lean_inc_ref(v_env_284_);
lean_dec(v___x_283_);
v___x_285_ = 0;
lean_inc(v_constName_271_);
v___x_286_ = l_Lean_Environment_findAsync_x3f(v_env_284_, v_constName_271_, v___x_285_);
if (lean_obj_tag(v___x_286_) == 1)
{
lean_object* v_val_287_; uint8_t v_kind_288_; 
v_val_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_val_287_);
lean_dec_ref_known(v___x_286_, 1);
v_kind_288_ = lean_ctor_get_uint8(v_val_287_, sizeof(void*)*3);
if (v_kind_288_ == 6)
{
lean_object* v___x_289_; 
v___x_289_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_287_);
if (lean_obj_tag(v___x_289_) == 6)
{
lean_object* v_val_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
lean_dec(v_constName_271_);
v_val_290_ = lean_ctor_get(v___x_289_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_289_);
if (v_isSharedCheck_297_ == 0)
{
v___x_292_ = v___x_289_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_val_290_);
lean_dec(v___x_289_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
lean_ctor_set_tag(v___x_292_, 0);
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_val_290_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
else
{
lean_object* v___x_298_; lean_object* v___x_299_; 
lean_dec_ref(v___x_289_);
v___x_298_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_299_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v___x_298_, v___y_272_, v___y_273_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_308_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_308_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_308_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_308_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
if (lean_obj_tag(v_a_300_) == 0)
{
lean_del_object(v___x_302_);
goto v___jp_275_;
}
else
{
lean_object* v_val_304_; lean_object* v___x_306_; 
lean_dec(v_constName_271_);
v_val_304_ = lean_ctor_get(v_a_300_, 0);
lean_inc(v_val_304_);
lean_dec_ref_known(v_a_300_, 1);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v_val_304_);
v___x_306_ = v___x_302_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_val_304_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_constName_271_);
v_a_309_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_299_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_299_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
else
{
lean_dec(v_val_287_);
goto v___jp_275_;
}
}
else
{
lean_dec(v___x_286_);
goto v___jp_275_;
}
v___jp_275_:
{
lean_object* v___x_276_; uint8_t v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_276_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_277_ = 0;
v___x_278_ = l_Lean_MessageData_ofConstName(v_constName_271_, v___x_277_);
v___x_279_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_276_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_281_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_281_, 0, v___x_279_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v___x_281_, v___y_272_, v___y_273_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___boxed(lean_object* v_constName_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_){
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_constName_317_, v___y_318_, v___y_319_);
lean_dec(v___y_319_);
lean_dec_ref(v___y_318_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField(lean_object* v_ctor_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_ctor_322_, v___y_323_, v___y_324_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_338_; 
v_a_327_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_338_ == 0)
{
v___x_329_ = v___x_326_;
v_isShared_330_ = v_isSharedCheck_338_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_326_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_338_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_numFields_331_; lean_object* v___x_332_; uint8_t v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v_numFields_331_ = lean_ctor_get(v_a_327_, 4);
lean_inc(v_numFields_331_);
lean_dec(v_a_327_);
v___x_332_ = lean_unsigned_to_nat(0u);
v___x_333_ = lean_nat_dec_eq(v_numFields_331_, v___x_332_);
lean_dec(v_numFields_331_);
v___x_334_ = lean_box(v___x_333_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 0, v___x_334_);
v___x_336_ = v___x_329_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
v_a_339_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_326_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_326_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField___boxed(lean_object* v_ctor_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Elab_ComputedFields_isScalarField(v_ctor_347_, v___y_348_, v___y_349_);
lean_dec(v___y_349_);
lean_dec_ref(v___y_348_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(lean_object* v_msgData_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
lean_object* v___x_358_; lean_object* v_env_359_; lean_object* v___x_360_; lean_object* v_toCold_361_; lean_object* v_mctx_362_; lean_object* v_lctx_363_; lean_object* v_options_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_358_ = lean_st_ref_get(v___y_356_);
v_env_359_ = lean_ctor_get(v___x_358_, 0);
lean_inc_ref(v_env_359_);
lean_dec(v___x_358_);
v___x_360_ = lean_st_ref_get(v___y_354_);
v_toCold_361_ = lean_ctor_get(v___y_355_, 0);
v_mctx_362_ = lean_ctor_get(v___x_360_, 0);
lean_inc_ref(v_mctx_362_);
lean_dec(v___x_360_);
v_lctx_363_ = lean_ctor_get(v___y_353_, 2);
v_options_364_ = lean_ctor_get(v_toCold_361_, 2);
lean_inc_ref(v_options_364_);
lean_inc_ref(v_lctx_363_);
v___x_365_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_365_, 0, v_env_359_);
lean_ctor_set(v___x_365_, 1, v_mctx_362_);
lean_ctor_set(v___x_365_, 2, v_lctx_363_);
lean_ctor_set(v___x_365_, 3, v_options_364_);
v___x_366_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
lean_ctor_set(v___x_366_, 1, v_msgData_352_);
v___x_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_367_, 0, v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2___boxed(lean_object* v_msgData_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msgData_368_, v___y_369_, v___y_370_, v___y_371_, v___y_372_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_370_);
lean_dec_ref(v___y_369_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(lean_object* v_msg_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_ref_381_; lean_object* v___x_382_; lean_object* v_a_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_391_; 
v_ref_381_ = lean_ctor_get(v___y_378_, 2);
v___x_382_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
v_a_383_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_391_ == 0)
{
v___x_385_ = v___x_382_;
v_isShared_386_ = v_isSharedCheck_391_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_a_383_);
lean_dec(v___x_382_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_391_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_387_; lean_object* v___x_389_; 
lean_inc(v_ref_381_);
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v_ref_381_);
lean_ctor_set(v___x_387_, 1, v_a_383_);
if (v_isShared_386_ == 0)
{
lean_ctor_set_tag(v___x_385_, 1);
lean_ctor_set(v___x_385_, 0, v___x_387_);
v___x_389_ = v___x_385_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_387_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg___boxed(lean_object* v_msg_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
return v_res_398_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Meta_instInhabitedMetaM___redArg();
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(lean_object* v_msg_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___x_406_; lean_object* v___x_4033__overap_407_; lean_object* v___x_408_; 
v___x_406_ = lean_obj_once(&l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0);
v___x_4033__overap_407_ = lean_panic_fn_borrowed(v___x_406_, v_msg_400_);
lean_inc(v___y_404_);
lean_inc_ref(v___y_403_);
lean_inc(v___y_402_);
lean_inc_ref(v___y_401_);
v___x_408_ = lean_apply_5(v___x_4033__overap_407_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, lean_box(0));
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v_msg_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(lean_object* v_mvarId_416_, lean_object* v___y_417_){
_start:
{
lean_object* v___x_419_; lean_object* v_mctx_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_419_ = lean_st_ref_get(v___y_417_);
v_mctx_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc_ref(v_mctx_420_);
lean_dec(v___x_419_);
v___x_421_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_420_, v_mvarId_416_);
lean_dec_ref(v_mctx_420_);
v___x_422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_mvarId_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec(v_mvarId_423_);
return v_res_426_;
}
}
static lean_object* _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_430_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2));
v___x_431_ = lean_unsigned_to_nat(22u);
v___x_432_ = lean_unsigned_to_nat(398u);
v___x_433_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1));
v___x_434_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0));
v___x_435_ = l_mkPanicMessageWithDecl(v___x_434_, v___x_433_, v___x_432_, v___x_431_, v___x_430_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(lean_object* v_ctorTerm_436_, lean_object* v_e_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
switch(lean_obj_tag(v_e_437_))
{
case 0:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec_ref_known(v_e_437_, 1);
lean_dec_ref(v_ctorTerm_436_);
v___x_443_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_444_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_443_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_444_;
}
case 1:
{
lean_object* v_fvarId_445_; lean_object* v___x_446_; 
v_fvarId_445_ = lean_ctor_get(v_e_437_, 0);
lean_inc(v_fvarId_445_);
v___x_446_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_445_, v___y_438_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_491_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_491_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_491_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_491_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
if (lean_obj_tag(v_a_447_) == 1)
{
lean_object* v_value_451_; uint8_t v_nondep_452_; lean_object* v___y_454_; uint8_t v_trackZetaDelta_455_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; 
v_value_451_ = lean_ctor_get(v_a_447_, 4);
lean_inc_ref(v_value_451_);
v_nondep_452_ = lean_ctor_get_uint8(v_a_447_, sizeof(void*)*5);
if (v_nondep_452_ == 0)
{
uint8_t v___x_476_; 
v___x_476_ = l_Lean_LocalDecl_isImplementationDetail(v_a_447_);
lean_dec_ref_known(v_a_447_, 5);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; uint8_t v_zetaDelta_478_; 
v___x_477_ = l_Lean_Meta_Context_config(v___y_438_);
v_zetaDelta_478_ = lean_ctor_get_uint8(v___x_477_, 16);
lean_dec_ref(v___x_477_);
if (v_zetaDelta_478_ == 0)
{
uint8_t v_trackZetaDelta_479_; lean_object* v_zetaDeltaSet_480_; uint8_t v___x_481_; 
v_trackZetaDelta_479_ = lean_ctor_get_uint8(v___y_438_, sizeof(void*)*7);
v_zetaDeltaSet_480_ = lean_ctor_get(v___y_438_, 1);
v___x_481_ = l_Lean_FVarIdSet_contains(v_zetaDeltaSet_480_, v_fvarId_445_);
if (v___x_481_ == 0)
{
lean_object* v___x_483_; 
lean_dec_ref(v_value_451_);
lean_dec_ref(v_ctorTerm_436_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v_e_437_);
v___x_483_ = v___x_449_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_e_437_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
else
{
lean_inc(v_fvarId_445_);
lean_del_object(v___x_449_);
lean_dec_ref_known(v_e_437_, 1);
v___y_454_ = v___y_438_;
v_trackZetaDelta_455_ = v_trackZetaDelta_479_;
v___y_456_ = v___y_439_;
v___y_457_ = v___y_440_;
v___y_458_ = v___y_441_;
goto v___jp_453_;
}
}
else
{
lean_inc(v_fvarId_445_);
lean_del_object(v___x_449_);
lean_dec_ref_known(v_e_437_, 1);
v___y_471_ = v___y_438_;
v___y_472_ = v___y_439_;
v___y_473_ = v___y_440_;
v___y_474_ = v___y_441_;
goto v___jp_470_;
}
}
else
{
lean_inc(v_fvarId_445_);
lean_del_object(v___x_449_);
lean_dec_ref_known(v_e_437_, 1);
v___y_471_ = v___y_438_;
v___y_472_ = v___y_439_;
v___y_473_ = v___y_440_;
v___y_474_ = v___y_441_;
goto v___jp_470_;
}
}
else
{
lean_object* v___x_486_; 
lean_dec_ref(v_value_451_);
lean_dec_ref_known(v_a_447_, 5);
lean_dec_ref(v_ctorTerm_436_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v_e_437_);
v___x_486_ = v___x_449_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_e_437_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
v___jp_453_:
{
if (v_trackZetaDelta_455_ == 0)
{
lean_dec(v_fvarId_445_);
v_e_437_ = v_value_451_;
v___y_438_ = v___y_454_;
v___y_439_ = v___y_456_;
v___y_440_ = v___y_457_;
v___y_441_ = v___y_458_;
goto _start;
}
else
{
lean_object* v___x_460_; 
v___x_460_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_445_, v___y_456_);
if (lean_obj_tag(v___x_460_) == 0)
{
lean_dec_ref_known(v___x_460_, 1);
v_e_437_ = v_value_451_;
v___y_438_ = v___y_454_;
v___y_439_ = v___y_456_;
v___y_440_ = v___y_457_;
v___y_441_ = v___y_458_;
goto _start;
}
else
{
lean_object* v_a_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_469_; 
lean_dec_ref(v_value_451_);
lean_dec_ref(v_ctorTerm_436_);
v_a_462_ = lean_ctor_get(v___x_460_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___x_460_);
if (v_isSharedCheck_469_ == 0)
{
v___x_464_ = v___x_460_;
v_isShared_465_ = v_isSharedCheck_469_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_a_462_);
lean_dec(v___x_460_);
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
v___jp_470_:
{
uint8_t v_trackZetaDelta_475_; 
v_trackZetaDelta_475_ = lean_ctor_get_uint8(v___y_471_, sizeof(void*)*7);
v___y_454_ = v___y_471_;
v_trackZetaDelta_455_ = v_trackZetaDelta_475_;
v___y_456_ = v___y_472_;
v___y_457_ = v___y_473_;
v___y_458_ = v___y_474_;
goto v___jp_453_;
}
}
else
{
lean_object* v___x_489_; 
lean_dec(v_a_447_);
lean_dec_ref(v_ctorTerm_436_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v_e_437_);
v___x_489_ = v___x_449_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_e_437_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
lean_dec_ref_known(v_e_437_, 1);
lean_dec_ref(v_ctorTerm_436_);
v_a_492_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_446_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_446_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_500_; lean_object* v___x_501_; 
v_mvarId_500_ = lean_ctor_get(v_e_437_, 0);
v___x_501_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_500_, v___y_439_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_511_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_511_ == 0)
{
v___x_504_ = v___x_501_;
v_isShared_505_ = v_isSharedCheck_511_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_501_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_511_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
if (lean_obj_tag(v_a_502_) == 0)
{
lean_object* v___x_507_; 
lean_dec_ref(v_ctorTerm_436_);
if (v_isShared_505_ == 0)
{
lean_ctor_set(v___x_504_, 0, v_e_437_);
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_e_437_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
else
{
lean_object* v_val_509_; 
lean_del_object(v___x_504_);
lean_dec_ref_known(v_e_437_, 1);
v_val_509_ = lean_ctor_get(v_a_502_, 0);
lean_inc(v_val_509_);
lean_dec_ref_known(v_a_502_, 1);
v_e_437_ = v_val_509_;
goto _start;
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
lean_dec_ref_known(v_e_437_, 1);
lean_dec_ref(v_ctorTerm_436_);
v_a_512_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_501_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_501_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
case 3:
{
lean_object* v___x_520_; 
lean_dec_ref(v_ctorTerm_436_);
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v_e_437_);
return v___x_520_;
}
case 6:
{
lean_object* v___x_521_; 
lean_dec_ref(v_ctorTerm_436_);
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v_e_437_);
return v___x_521_;
}
case 7:
{
lean_object* v___x_522_; 
lean_dec_ref(v_ctorTerm_436_);
v___x_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_522_, 0, v_e_437_);
return v___x_522_;
}
case 9:
{
lean_object* v___x_523_; 
lean_dec_ref(v_ctorTerm_436_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v_e_437_);
return v___x_523_;
}
case 10:
{
lean_object* v_expr_524_; 
v_expr_524_ = lean_ctor_get(v_e_437_, 1);
lean_inc_ref(v_expr_524_);
lean_dec_ref_known(v_e_437_, 2);
v_e_437_ = v_expr_524_;
goto _start;
}
default: 
{
lean_object* v___x_526_; 
v___x_526_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; uint8_t v___x_528_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
lean_inc(v_a_527_);
lean_inc_ref(v_ctorTerm_436_);
v___x_528_ = l_Lean_Expr_occurs(v_ctorTerm_436_, v_a_527_);
if (v___x_528_ == 0)
{
lean_dec(v_a_527_);
lean_dec_ref(v_ctorTerm_436_);
return v___x_526_;
}
else
{
uint8_t v___x_529_; lean_object* v___x_530_; 
lean_dec_ref_known(v___x_526_, 1);
v___x_529_ = 0;
lean_inc(v_a_527_);
v___x_530_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_527_, v___x_529_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_540_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_540_ == 0)
{
v___x_533_ = v___x_530_;
v_isShared_534_ = v_isSharedCheck_540_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_530_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_540_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
if (lean_obj_tag(v_a_531_) == 0)
{
lean_object* v___x_536_; 
lean_dec_ref(v_ctorTerm_436_);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 0, v_a_527_);
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_527_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
else
{
lean_object* v_val_538_; lean_object* v___x_539_; 
lean_del_object(v___x_533_);
lean_dec(v_a_527_);
v_val_538_ = lean_ctor_get(v_a_531_, 0);
lean_inc(v_val_538_);
lean_dec_ref_known(v_a_531_, 1);
v___x_539_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_436_, v_val_538_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_539_;
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_a_527_);
lean_dec_ref(v_ctorTerm_436_);
v_a_541_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_530_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_530_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorTerm_436_);
return v___x_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(lean_object* v_ctorTerm_549_, lean_object* v_e_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
switch(lean_obj_tag(v_e_550_))
{
case 0:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec_ref_known(v_e_550_, 1);
lean_dec_ref(v_ctorTerm_549_);
v___x_556_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_557_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_556_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
return v___x_557_;
}
case 1:
{
lean_object* v_fvarId_558_; lean_object* v___x_559_; 
v_fvarId_558_ = lean_ctor_get(v_e_550_, 0);
lean_inc(v_fvarId_558_);
v___x_559_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_558_, v___y_551_, v___y_553_, v___y_554_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_604_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_604_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_604_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_604_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
if (lean_obj_tag(v_a_560_) == 1)
{
lean_object* v_value_564_; uint8_t v_nondep_565_; lean_object* v___y_567_; uint8_t v_trackZetaDelta_568_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_584_; lean_object* v___y_585_; lean_object* v___y_586_; lean_object* v___y_587_; 
v_value_564_ = lean_ctor_get(v_a_560_, 4);
lean_inc_ref(v_value_564_);
v_nondep_565_ = lean_ctor_get_uint8(v_a_560_, sizeof(void*)*5);
if (v_nondep_565_ == 0)
{
uint8_t v___x_589_; 
v___x_589_ = l_Lean_LocalDecl_isImplementationDetail(v_a_560_);
lean_dec_ref_known(v_a_560_, 5);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; uint8_t v_zetaDelta_591_; 
v___x_590_ = l_Lean_Meta_Context_config(v___y_551_);
v_zetaDelta_591_ = lean_ctor_get_uint8(v___x_590_, 16);
lean_dec_ref(v___x_590_);
if (v_zetaDelta_591_ == 0)
{
uint8_t v_trackZetaDelta_592_; lean_object* v_zetaDeltaSet_593_; uint8_t v___x_594_; 
v_trackZetaDelta_592_ = lean_ctor_get_uint8(v___y_551_, sizeof(void*)*7);
v_zetaDeltaSet_593_ = lean_ctor_get(v___y_551_, 1);
v___x_594_ = l_Lean_FVarIdSet_contains(v_zetaDeltaSet_593_, v_fvarId_558_);
if (v___x_594_ == 0)
{
lean_object* v___x_596_; 
lean_dec_ref(v_value_564_);
lean_dec_ref(v_ctorTerm_549_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v_e_550_);
v___x_596_ = v___x_562_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_e_550_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
else
{
lean_inc(v_fvarId_558_);
lean_del_object(v___x_562_);
lean_dec_ref_known(v_e_550_, 1);
v___y_567_ = v___y_551_;
v_trackZetaDelta_568_ = v_trackZetaDelta_592_;
v___y_569_ = v___y_552_;
v___y_570_ = v___y_553_;
v___y_571_ = v___y_554_;
goto v___jp_566_;
}
}
else
{
lean_inc(v_fvarId_558_);
lean_del_object(v___x_562_);
lean_dec_ref_known(v_e_550_, 1);
v___y_584_ = v___y_551_;
v___y_585_ = v___y_552_;
v___y_586_ = v___y_553_;
v___y_587_ = v___y_554_;
goto v___jp_583_;
}
}
else
{
lean_inc(v_fvarId_558_);
lean_del_object(v___x_562_);
lean_dec_ref_known(v_e_550_, 1);
v___y_584_ = v___y_551_;
v___y_585_ = v___y_552_;
v___y_586_ = v___y_553_;
v___y_587_ = v___y_554_;
goto v___jp_583_;
}
}
else
{
lean_object* v___x_599_; 
lean_dec_ref(v_value_564_);
lean_dec_ref_known(v_a_560_, 5);
lean_dec_ref(v_ctorTerm_549_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v_e_550_);
v___x_599_ = v___x_562_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_e_550_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
v___jp_566_:
{
if (v_trackZetaDelta_568_ == 0)
{
lean_object* v___x_572_; 
lean_dec(v_fvarId_558_);
v___x_572_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_549_, v_value_564_, v___y_567_, v___y_569_, v___y_570_, v___y_571_);
return v___x_572_;
}
else
{
lean_object* v___x_573_; 
v___x_573_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_558_, v___y_569_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_object* v___x_574_; 
lean_dec_ref_known(v___x_573_, 1);
v___x_574_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_549_, v_value_564_, v___y_567_, v___y_569_, v___y_570_, v___y_571_);
return v___x_574_;
}
else
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
lean_dec_ref(v_value_564_);
lean_dec_ref(v_ctorTerm_549_);
v_a_575_ = lean_ctor_get(v___x_573_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_573_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_573_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_573_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
}
v___jp_583_:
{
uint8_t v_trackZetaDelta_588_; 
v_trackZetaDelta_588_ = lean_ctor_get_uint8(v___y_584_, sizeof(void*)*7);
v___y_567_ = v___y_584_;
v_trackZetaDelta_568_ = v_trackZetaDelta_588_;
v___y_569_ = v___y_585_;
v___y_570_ = v___y_586_;
v___y_571_ = v___y_587_;
goto v___jp_566_;
}
}
else
{
lean_object* v___x_602_; 
lean_dec(v_a_560_);
lean_dec_ref(v_ctorTerm_549_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v_e_550_);
v___x_602_ = v___x_562_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_e_550_);
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
lean_dec_ref_known(v_e_550_, 1);
lean_dec_ref(v_ctorTerm_549_);
v_a_605_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_559_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_559_);
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
case 2:
{
lean_object* v_mvarId_613_; lean_object* v___x_614_; 
v_mvarId_613_ = lean_ctor_get(v_e_550_, 0);
v___x_614_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_613_, v___y_552_);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_624_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_624_ == 0)
{
v___x_617_ = v___x_614_;
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_614_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_624_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
if (lean_obj_tag(v_a_615_) == 0)
{
lean_object* v___x_620_; 
lean_dec_ref(v_ctorTerm_549_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v_e_550_);
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_e_550_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
else
{
lean_object* v_val_622_; lean_object* v___x_623_; 
lean_del_object(v___x_617_);
lean_dec_ref_known(v_e_550_, 1);
v_val_622_ = lean_ctor_get(v_a_615_, 0);
lean_inc(v_val_622_);
lean_dec_ref_known(v_a_615_, 1);
v___x_623_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_549_, v_val_622_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
return v___x_623_;
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec_ref_known(v_e_550_, 1);
lean_dec_ref(v_ctorTerm_549_);
v_a_625_ = lean_ctor_get(v___x_614_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_614_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_614_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_614_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
case 3:
{
lean_object* v___x_633_; 
lean_dec_ref(v_ctorTerm_549_);
v___x_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_633_, 0, v_e_550_);
return v___x_633_;
}
case 6:
{
lean_object* v___x_634_; 
lean_dec_ref(v_ctorTerm_549_);
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v_e_550_);
return v___x_634_;
}
case 7:
{
lean_object* v___x_635_; 
lean_dec_ref(v_ctorTerm_549_);
v___x_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_635_, 0, v_e_550_);
return v___x_635_;
}
case 9:
{
lean_object* v___x_636_; 
lean_dec_ref(v_ctorTerm_549_);
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v_e_550_);
return v___x_636_;
}
case 10:
{
lean_object* v_expr_637_; lean_object* v___x_638_; 
v_expr_637_ = lean_ctor_get(v_e_550_, 1);
lean_inc_ref(v_expr_637_);
lean_dec_ref_known(v_e_550_, 2);
v___x_638_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_549_, v_expr_637_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
return v___x_638_;
}
default: 
{
lean_object* v___x_639_; 
v___x_639_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; uint8_t v___x_641_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_640_);
lean_inc_ref(v_ctorTerm_549_);
v___x_641_ = l_Lean_Expr_occurs(v_ctorTerm_549_, v_a_640_);
if (v___x_641_ == 0)
{
lean_dec(v_a_640_);
lean_dec_ref(v_ctorTerm_549_);
return v___x_639_;
}
else
{
uint8_t v___x_642_; lean_object* v___x_643_; 
lean_dec_ref_known(v___x_639_, 1);
v___x_642_ = 0;
lean_inc(v_a_640_);
v___x_643_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_640_, v___x_642_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_653_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_653_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_653_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_653_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
if (lean_obj_tag(v_a_644_) == 0)
{
lean_object* v___x_649_; 
lean_dec_ref(v_ctorTerm_549_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v_a_640_);
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_a_640_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
else
{
lean_object* v_val_651_; lean_object* v___x_652_; 
lean_del_object(v___x_646_);
lean_dec(v_a_640_);
v_val_651_ = lean_ctor_get(v_a_644_, 0);
lean_inc(v_val_651_);
lean_dec_ref_known(v_a_644_, 1);
v___x_652_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_549_, v_val_651_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
return v___x_652_;
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec(v_a_640_);
lean_dec_ref(v_ctorTerm_549_);
v_a_654_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_643_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_643_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorTerm_549_);
return v___x_639_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(lean_object* v_ctorTerm_662_, lean_object* v_e_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_662_, v_e_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0___boxed(lean_object* v_ctorTerm_670_, lean_object* v_e_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_670_, v_e_671_, v___y_672_, v___y_673_, v___y_674_, v___y_675_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___boxed(lean_object* v_ctorTerm_678_, lean_object* v_e_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_678_, v_e_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_);
lean_dec(v___y_683_);
lean_dec_ref(v___y_682_);
lean_dec(v___y_681_);
lean_dec_ref(v___y_680_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0___boxed(lean_object* v_ctorTerm_686_, lean_object* v_e_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_686_, v_e_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
return v_res_693_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1(void){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; 
v___x_695_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0));
v___x_696_ = l_Lean_stringToMessageData(v___x_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(lean_object* v_constName_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_703_; lean_object* v_env_704_; lean_object* v___x_705_; 
v___x_703_ = lean_st_ref_get(v___y_701_);
v_env_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc_ref(v_env_704_);
lean_dec(v___x_703_);
lean_inc(v_constName_697_);
v___x_705_ = l_Lean_isInductiveCore_x3f(v_env_704_, v_constName_697_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v___x_706_; uint8_t v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_706_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_707_ = 0;
v___x_708_ = l_Lean_MessageData_ofConstName(v_constName_697_, v___x_707_);
v___x_709_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_709_, 0, v___x_706_);
lean_ctor_set(v___x_709_, 1, v___x_708_);
v___x_710_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1);
v___x_711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_709_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
v___x_712_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_711_, v___y_698_, v___y_699_, v___y_700_, v___y_701_);
return v___x_712_;
}
else
{
lean_object* v_val_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_dec(v_constName_697_);
v_val_713_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_705_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_val_713_);
lean_dec(v___x_705_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
lean_ctor_set_tag(v___x_715_, 0);
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_val_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___boxed(lean_object* v_constName_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_constName_721_, v___y_722_, v___y_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(lean_object* v_msg_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
lean_object* v___f_736_; lean_object* v___f_737_; lean_object* v___f_738_; lean_object* v___f_739_; lean_object* v___f_740_; lean_object* v___f_741_; lean_object* v___f_742_; lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v_toApplicative_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_809_; 
v___f_736_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0));
v___f_737_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_738_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
v___f_739_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__3));
v___f_740_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__4));
v___f_741_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_741_, 0, v___f_740_);
lean_closure_set(v___f_741_, 1, v___f_739_);
v___f_742_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_742_, 0, v___f_739_);
v___f_743_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__5));
v___x_744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_744_, 0, v___f_736_);
lean_ctor_set(v___x_744_, 1, v___f_737_);
v___x_745_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_745_, 0, v___x_744_);
lean_ctor_set(v___x_745_, 1, v___f_738_);
lean_ctor_set(v___x_745_, 2, v___f_741_);
lean_ctor_set(v___x_745_, 3, v___f_742_);
lean_ctor_set(v___x_745_, 4, v___f_743_);
v___x_746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
lean_ctor_set(v___x_746_, 1, v___f_739_);
v___x_747_ = l_StateRefT_x27_instMonad___redArg(v___x_746_);
v_toApplicative_748_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v___x_747_, 1);
lean_dec(v_unused_810_);
v___x_750_ = v___x_747_;
v_isShared_751_ = v_isSharedCheck_809_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_toApplicative_748_);
lean_dec(v___x_747_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_809_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_toFunctor_752_; lean_object* v_toSeq_753_; lean_object* v_toSeqLeft_754_; lean_object* v_toSeqRight_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_807_; 
v_toFunctor_752_ = lean_ctor_get(v_toApplicative_748_, 0);
v_toSeq_753_ = lean_ctor_get(v_toApplicative_748_, 2);
v_toSeqLeft_754_ = lean_ctor_get(v_toApplicative_748_, 3);
v_toSeqRight_755_ = lean_ctor_get(v_toApplicative_748_, 4);
v_isSharedCheck_807_ = !lean_is_exclusive(v_toApplicative_748_);
if (v_isSharedCheck_807_ == 0)
{
lean_object* v_unused_808_; 
v_unused_808_ = lean_ctor_get(v_toApplicative_748_, 1);
lean_dec(v_unused_808_);
v___x_757_ = v_toApplicative_748_;
v_isShared_758_ = v_isSharedCheck_807_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_toSeqRight_755_);
lean_inc(v_toSeqLeft_754_);
lean_inc(v_toSeq_753_);
lean_inc(v_toFunctor_752_);
lean_dec(v_toApplicative_748_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_807_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___f_759_; lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___f_762_; lean_object* v___x_763_; lean_object* v___f_764_; lean_object* v___f_765_; lean_object* v___f_766_; lean_object* v___x_768_; 
v___f_759_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__6));
v___f_760_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__7));
lean_inc_ref(v_toFunctor_752_);
v___f_761_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_761_, 0, v_toFunctor_752_);
v___f_762_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_762_, 0, v_toFunctor_752_);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v___f_761_);
lean_ctor_set(v___x_763_, 1, v___f_762_);
v___f_764_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_764_, 0, v_toSeqRight_755_);
v___f_765_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_765_, 0, v_toSeqLeft_754_);
v___f_766_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_766_, 0, v_toSeq_753_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 4, v___f_764_);
lean_ctor_set(v___x_757_, 3, v___f_765_);
lean_ctor_set(v___x_757_, 2, v___f_766_);
lean_ctor_set(v___x_757_, 1, v___f_759_);
lean_ctor_set(v___x_757_, 0, v___x_763_);
v___x_768_ = v___x_757_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v___x_763_);
lean_ctor_set(v_reuseFailAlloc_806_, 1, v___f_759_);
lean_ctor_set(v_reuseFailAlloc_806_, 2, v___f_766_);
lean_ctor_set(v_reuseFailAlloc_806_, 3, v___f_765_);
lean_ctor_set(v_reuseFailAlloc_806_, 4, v___f_764_);
v___x_768_ = v_reuseFailAlloc_806_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_770_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 1, v___f_760_);
lean_ctor_set(v___x_750_, 0, v___x_768_);
v___x_770_ = v___x_750_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v___x_768_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v___f_760_);
v___x_770_ = v_reuseFailAlloc_805_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; lean_object* v_toApplicative_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_803_; 
v___x_771_ = l_StateRefT_x27_instMonad___redArg(v___x_770_);
v_toApplicative_772_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_803_ == 0)
{
lean_object* v_unused_804_; 
v_unused_804_ = lean_ctor_get(v___x_771_, 1);
lean_dec(v_unused_804_);
v___x_774_ = v___x_771_;
v_isShared_775_ = v_isSharedCheck_803_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_toApplicative_772_);
lean_dec(v___x_771_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_803_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v_toFunctor_776_; lean_object* v_toSeq_777_; lean_object* v_toSeqLeft_778_; lean_object* v_toSeqRight_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_801_; 
v_toFunctor_776_ = lean_ctor_get(v_toApplicative_772_, 0);
v_toSeq_777_ = lean_ctor_get(v_toApplicative_772_, 2);
v_toSeqLeft_778_ = lean_ctor_get(v_toApplicative_772_, 3);
v_toSeqRight_779_ = lean_ctor_get(v_toApplicative_772_, 4);
v_isSharedCheck_801_ = !lean_is_exclusive(v_toApplicative_772_);
if (v_isSharedCheck_801_ == 0)
{
lean_object* v_unused_802_; 
v_unused_802_ = lean_ctor_get(v_toApplicative_772_, 1);
lean_dec(v_unused_802_);
v___x_781_ = v_toApplicative_772_;
v_isShared_782_ = v_isSharedCheck_801_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_toSeqRight_779_);
lean_inc(v_toSeqLeft_778_);
lean_inc(v_toSeq_777_);
lean_inc(v_toFunctor_776_);
lean_dec(v_toApplicative_772_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_801_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___f_783_; lean_object* v___f_784_; lean_object* v___f_785_; lean_object* v___f_786_; lean_object* v___x_787_; lean_object* v___f_788_; lean_object* v___f_789_; lean_object* v___f_790_; lean_object* v___x_792_; 
v___f_783_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_784_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_776_);
v___f_785_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_785_, 0, v_toFunctor_776_);
v___f_786_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_786_, 0, v_toFunctor_776_);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___f_785_);
lean_ctor_set(v___x_787_, 1, v___f_786_);
v___f_788_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_788_, 0, v_toSeqRight_779_);
v___f_789_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_789_, 0, v_toSeqLeft_778_);
v___f_790_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_790_, 0, v_toSeq_777_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 4, v___f_788_);
lean_ctor_set(v___x_781_, 3, v___f_789_);
lean_ctor_set(v___x_781_, 2, v___f_790_);
lean_ctor_set(v___x_781_, 1, v___f_783_);
lean_ctor_set(v___x_781_, 0, v___x_787_);
v___x_792_ = v___x_781_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_800_; 
v_reuseFailAlloc_800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_800_, 0, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_800_, 1, v___f_783_);
lean_ctor_set(v_reuseFailAlloc_800_, 2, v___f_790_);
lean_ctor_set(v_reuseFailAlloc_800_, 3, v___f_789_);
lean_ctor_set(v_reuseFailAlloc_800_, 4, v___f_788_);
v___x_792_ = v_reuseFailAlloc_800_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
lean_object* v___x_794_; 
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 1, v___f_784_);
lean_ctor_set(v___x_774_, 0, v___x_792_);
v___x_794_ = v___x_774_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_792_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v___f_784_);
v___x_794_ = v_reuseFailAlloc_799_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_4023__overap_797_; lean_object* v___x_798_; 
v___x_795_ = lean_box(0);
v___x_796_ = l_instInhabitedOfMonad___redArg(v___x_794_, v___x_795_);
v___x_4023__overap_797_ = lean_panic_fn_borrowed(v___x_796_, v_msg_730_);
lean_dec(v___x_796_);
lean_inc(v___y_734_);
lean_inc_ref(v___y_733_);
lean_inc(v___y_732_);
lean_inc_ref(v___y_731_);
v___x_798_ = lean_apply_5(v___x_4023__overap_797_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, lean_box(0));
return v___x_798_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___boxed(lean_object* v_msg_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v_msg_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(lean_object* v_constName_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v___x_832_; lean_object* v_env_833_; uint8_t v___x_834_; lean_object* v___x_835_; 
v___x_832_ = lean_st_ref_get(v___y_822_);
v_env_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc_ref(v_env_833_);
lean_dec(v___x_832_);
v___x_834_ = 0;
lean_inc(v_constName_818_);
v___x_835_ = l_Lean_Environment_findAsync_x3f(v_env_833_, v_constName_818_, v___x_834_);
if (lean_obj_tag(v___x_835_) == 1)
{
lean_object* v_val_836_; uint8_t v_kind_837_; 
v_val_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_val_836_);
lean_dec_ref_known(v___x_835_, 1);
v_kind_837_ = lean_ctor_get_uint8(v_val_836_, sizeof(void*)*3);
if (v_kind_837_ == 6)
{
lean_object* v___x_838_; 
v___x_838_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_836_);
if (lean_obj_tag(v___x_838_) == 6)
{
lean_object* v_val_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec(v_constName_818_);
v_val_839_ = lean_ctor_get(v___x_838_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_838_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_838_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_val_839_);
lean_dec(v___x_838_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
lean_ctor_set_tag(v___x_841_, 0);
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_val_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; 
lean_dec_ref(v___x_838_);
v___x_847_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_848_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v___x_847_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_857_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_857_ == 0)
{
v___x_851_ = v___x_848_;
v_isShared_852_ = v_isSharedCheck_857_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_848_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_857_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
if (lean_obj_tag(v_a_849_) == 0)
{
lean_del_object(v___x_851_);
goto v___jp_824_;
}
else
{
lean_object* v_val_853_; lean_object* v___x_855_; 
lean_dec(v_constName_818_);
v_val_853_ = lean_ctor_get(v_a_849_, 0);
lean_inc(v_val_853_);
lean_dec_ref_known(v_a_849_, 1);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v_val_853_);
v___x_855_ = v___x_851_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_val_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_dec(v_constName_818_);
v_a_858_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_848_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_848_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
else
{
lean_dec(v_val_836_);
goto v___jp_824_;
}
}
else
{
lean_dec(v___x_835_);
goto v___jp_824_;
}
v___jp_824_:
{
lean_object* v___x_825_; uint8_t v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_825_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_826_ = 0;
v___x_827_ = l_Lean_MessageData_ofConstName(v_constName_818_, v___x_826_);
v___x_828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_828_, 0, v___x_825_);
lean_ctor_set(v___x_828_, 1, v___x_827_);
v___x_829_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_830_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_830_, 0, v___x_828_);
lean_ctor_set(v___x_830_, 1, v___x_829_);
v___x_831_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_830_, v___y_819_, v___y_820_, v___y_821_, v___y_822_);
return v___x_831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2___boxed(lean_object* v_constName_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_constName_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
return v_res_872_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0));
v___x_875_ = l_Lean_stringToMessageData(v___x_874_);
return v___x_875_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2));
v___x_878_ = l_Lean_stringToMessageData(v___x_877_);
return v___x_878_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4(void){
_start:
{
lean_object* v___x_879_; lean_object* v_dummy_880_; 
v___x_879_ = lean_box(0);
v_dummy_880_ = l_Lean_Expr_sort___override(v___x_879_);
return v_dummy_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue(lean_object* v_computedField_881_, lean_object* v_ctorTerm_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v_ctorName_890_; lean_object* v_val_892_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___x_908_; 
v___x_888_ = l_Lean_Elab_WF_instInhabitedEqnInfo_default;
v___x_889_ = l_Lean_Expr_getAppFn(v_ctorTerm_882_);
v_ctorName_890_ = l_Lean_Expr_constName_x21(v___x_889_);
lean_dec_ref(v___x_889_);
lean_inc(v_ctorName_890_);
v___x_908_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_ctorName_890_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v_induct_910_; lean_object* v___x_911_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_a_909_);
lean_dec_ref_known(v___x_908_, 1);
v_induct_910_ = lean_ctor_get(v_a_909_, 1);
lean_inc(v_induct_910_);
lean_dec(v_a_909_);
v___x_911_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_induct_910_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v_numParams_913_; lean_object* v_numIndices_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v_numParams_913_ = lean_ctor_get(v_a_912_, 1);
lean_inc(v_numParams_913_);
v_numIndices_914_ = lean_ctor_get(v_a_912_, 2);
lean_inc(v_numIndices_914_);
lean_dec(v_a_912_);
v___x_915_ = lean_nat_add(v_numParams_913_, v_numIndices_914_);
lean_dec(v_numIndices_914_);
lean_dec(v_numParams_913_);
v___x_916_ = lean_box(0);
v___x_917_ = lean_mk_array(v___x_915_, v___x_916_);
lean_inc_ref(v_ctorTerm_882_);
v___x_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_918_, 0, v_ctorTerm_882_);
v___x_919_ = lean_unsigned_to_nat(1u);
v___x_920_ = lean_mk_empty_array_with_capacity(v___x_919_);
v___x_921_ = lean_array_push(v___x_920_, v___x_918_);
v___x_922_ = l_Array_append___redArg(v___x_917_, v___x_921_);
lean_dec_ref(v___x_921_);
lean_inc(v_computedField_881_);
v___x_923_ = l_Lean_Meta_mkAppOptM(v_computedField_881_, v___x_922_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v_a_924_; lean_object* v___x_925_; lean_object* v_env_926_; lean_object* v___x_927_; lean_object* v_toEnvExtension_928_; lean_object* v_asyncMode_929_; uint8_t v___x_930_; lean_object* v___x_931_; 
v_a_924_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_924_);
lean_dec_ref_known(v___x_923_, 1);
v___x_925_ = lean_st_ref_get(v___y_886_);
v_env_926_ = lean_ctor_get(v___x_925_, 0);
lean_inc_ref(v_env_926_);
lean_dec(v___x_925_);
v___x_927_ = l_Lean_Elab_WF_eqnInfoExt;
v_toEnvExtension_928_ = lean_ctor_get(v___x_927_, 0);
v_asyncMode_929_ = lean_ctor_get(v_toEnvExtension_928_, 2);
v___x_930_ = 0;
lean_inc(v_computedField_881_);
v___x_931_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_888_, v___x_927_, v_env_926_, v_computedField_881_, v_asyncMode_929_, v___x_930_);
if (lean_obj_tag(v___x_931_) == 1)
{
lean_object* v_val_932_; lean_object* v_levelParams_933_; lean_object* v_value_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v_dummy_938_; lean_object* v_nargs_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_val_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_val_932_);
lean_dec_ref_known(v___x_931_, 1);
v_levelParams_933_ = lean_ctor_get(v_val_932_, 1);
lean_inc(v_levelParams_933_);
v_value_934_ = lean_ctor_get(v_val_932_, 3);
lean_inc_ref(v_value_934_);
lean_dec(v_val_932_);
v___x_935_ = l_Lean_Expr_getAppFn(v_a_924_);
v___x_936_ = l_Lean_Expr_constLevels_x21(v___x_935_);
lean_dec_ref(v___x_935_);
v___x_937_ = l_Lean_Expr_instantiateLevelParams(v_value_934_, v_levelParams_933_, v___x_936_);
lean_dec_ref(v_value_934_);
v_dummy_938_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4);
v_nargs_939_ = l_Lean_Expr_getAppNumArgs(v_a_924_);
lean_inc(v_nargs_939_);
v___x_940_ = lean_mk_array(v_nargs_939_, v_dummy_938_);
v___x_941_ = lean_nat_sub(v_nargs_939_, v___x_919_);
lean_dec(v_nargs_939_);
v___x_942_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_924_, v___x_940_, v___x_941_);
v___x_943_ = l_Lean_mkAppN(v___x_937_, v___x_942_);
lean_dec_ref(v___x_942_);
v_val_892_ = v___x_943_;
v___y_893_ = v___y_883_;
v___y_894_ = v___y_884_;
v___y_895_ = v___y_885_;
v___y_896_ = v___y_886_;
goto v___jp_891_;
}
else
{
lean_object* v___x_944_; 
lean_dec(v___x_931_);
v___x_944_ = l_Lean_Meta_unfoldDefinition(v_a_924_, v___y_883_, v___y_884_, v___y_885_, v___y_886_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v_val_892_ = v_a_945_;
v___y_893_ = v___y_883_;
v___y_894_ = v___y_884_;
v___y_895_ = v___y_885_;
v___y_896_ = v___y_886_;
goto v___jp_891_;
}
else
{
lean_dec(v_ctorName_890_);
lean_dec_ref(v_ctorTerm_882_);
lean_dec(v_computedField_881_);
return v___x_944_;
}
}
}
else
{
lean_dec(v_ctorName_890_);
lean_dec_ref(v_ctorTerm_882_);
lean_dec(v_computedField_881_);
return v___x_923_;
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v_ctorName_890_);
lean_dec_ref(v_ctorTerm_882_);
lean_dec(v_computedField_881_);
v_a_946_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_911_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_911_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_ctorName_890_);
lean_dec_ref(v_ctorTerm_882_);
lean_dec(v_computedField_881_);
v_a_954_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_908_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_908_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
v___jp_891_:
{
lean_object* v___x_897_; 
lean_inc_ref(v_ctorTerm_882_);
v___x_897_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_882_, v_val_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
if (lean_obj_tag(v___x_897_) == 0)
{
lean_object* v_a_898_; uint8_t v___x_899_; 
v_a_898_ = lean_ctor_get(v___x_897_, 0);
lean_inc(v_a_898_);
v___x_899_ = l_Lean_Expr_occurs(v_ctorTerm_882_, v_a_898_);
lean_dec(v_a_898_);
if (v___x_899_ == 0)
{
lean_dec(v_ctorName_890_);
lean_dec(v_computedField_881_);
return v___x_897_;
}
else
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
lean_dec_ref_known(v___x_897_, 1);
v___x_900_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
v___x_901_ = l_Lean_MessageData_ofName(v_computedField_881_);
v___x_902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3);
v___x_904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_902_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = l_Lean_MessageData_ofName(v_ctorName_890_);
v___x_906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_904_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_906_, v___y_893_, v___y_894_, v___y_895_, v___y_896_);
return v___x_907_;
}
}
else
{
lean_dec(v_ctorName_890_);
lean_dec_ref(v_ctorTerm_882_);
lean_dec(v_computedField_881_);
return v___x_897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___boxed(lean_object* v_computedField_962_, lean_object* v_ctorTerm_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_computedField_962_, v_ctorTerm_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(lean_object* v_00_u03b1_970_, lean_object* v_msg_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___boxed(lean_object* v_00_u03b1_978_, lean_object* v_msg_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(v_00_u03b1_978_, v_msg_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_);
lean_dec(v___y_983_);
lean_dec_ref(v___y_982_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(lean_object* v_mvarId_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_986_, v___y_988_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___boxed(lean_object* v_mvarId_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
lean_object* v_res_999_; 
v_res_999_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(v_mvarId_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
lean_dec(v_mvarId_993_);
return v_res_999_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(lean_object* v_a_1000_, lean_object* v_as_1001_, size_t v_i_1002_, size_t v_stop_1003_){
_start:
{
uint8_t v___x_1004_; 
v___x_1004_ = lean_usize_dec_eq(v_i_1002_, v_stop_1003_);
if (v___x_1004_ == 0)
{
lean_object* v___x_1005_; lean_object* v___x_1006_; uint8_t v___x_1007_; 
v___x_1005_ = lean_array_uget_borrowed(v_as_1001_, v_i_1002_);
v___x_1006_ = l_Lean_Expr_fvarId_x21(v___x_1005_);
v___x_1007_ = l_Lean_Expr_containsFVar(v_a_1000_, v___x_1006_);
lean_dec(v___x_1006_);
if (v___x_1007_ == 0)
{
size_t v___x_1008_; size_t v___x_1009_; 
v___x_1008_ = ((size_t)1ULL);
v___x_1009_ = lean_usize_add(v_i_1002_, v___x_1008_);
v_i_1002_ = v___x_1009_;
goto _start;
}
else
{
return v___x_1007_;
}
}
else
{
uint8_t v___x_1011_; 
v___x_1011_ = 0;
return v___x_1011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0___boxed(lean_object* v_a_1012_, lean_object* v_as_1013_, lean_object* v_i_1014_, lean_object* v_stop_1015_){
_start:
{
size_t v_i_boxed_1016_; size_t v_stop_boxed_1017_; uint8_t v_res_1018_; lean_object* v_r_1019_; 
v_i_boxed_1016_ = lean_unbox_usize(v_i_1014_);
lean_dec(v_i_1014_);
v_stop_boxed_1017_ = lean_unbox_usize(v_stop_1015_);
lean_dec(v_stop_1015_);
v_res_1018_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_1012_, v_as_1013_, v_i_boxed_1016_, v_stop_boxed_1017_);
lean_dec_ref(v_as_1013_);
lean_dec_ref(v_a_1012_);
v_r_1019_ = lean_box(v_res_1018_);
return v_r_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(lean_object* v_msg_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_ref_1026_; lean_object* v___x_1027_; lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1036_; 
v_ref_1026_ = lean_ctor_get(v___y_1023_, 2);
v___x_1027_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
v_a_1028_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1036_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1030_ = v___x_1027_;
v_isShared_1031_ = v_isSharedCheck_1036_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1036_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1032_; lean_object* v___x_1034_; 
lean_inc(v_ref_1026_);
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v_ref_1026_);
lean_ctor_set(v___x_1032_, 1, v_a_1028_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set_tag(v___x_1030_, 1);
lean_ctor_set(v___x_1030_, 0, v___x_1032_);
v___x_1034_ = v___x_1030_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
return v___x_1034_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg___boxed(lean_object* v_msg_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
return v_res_1043_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0));
v___x_1046_ = l_Lean_stringToMessageData(v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2));
v___x_1049_ = l_Lean_stringToMessageData(v___x_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(lean_object* v_indices_1050_, lean_object* v_val_1051_, lean_object* v_as_1052_, size_t v_sz_1053_, size_t v_i_1054_, lean_object* v_b_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v_a_1063_; uint8_t v___x_1067_; 
v___x_1067_ = lean_usize_dec_lt(v_i_1054_, v_sz_1053_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_b_1055_);
return v___x_1068_;
}
else
{
lean_object* v___x_1069_; lean_object* v_a_1070_; lean_object* v___x_1071_; 
v___x_1069_ = lean_box(0);
v_a_1070_ = lean_array_uget_borrowed(v_as_1052_, v_i_1054_);
lean_inc(v___y_1060_);
lean_inc_ref(v___y_1059_);
lean_inc(v___y_1058_);
lean_inc_ref(v___y_1057_);
lean_inc(v_a_1070_);
v___x_1071_ = lean_infer_type(v_a_1070_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1078_; lean_object* v___x_1093_; uint8_t v___x_1094_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1093_ = l_Lean_Expr_fvarId_x21(v_val_1051_);
v___x_1094_ = l_Lean_Expr_containsFVar(v_a_1072_, v___x_1093_);
lean_dec(v___x_1093_);
if (v___x_1094_ == 0)
{
v___y_1074_ = v___y_1056_;
v___y_1075_ = v___y_1057_;
v___y_1076_ = v___y_1058_;
v___y_1077_ = v___y_1059_;
v___y_1078_ = v___y_1060_;
goto v___jp_1073_;
}
else
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1095_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1070_);
v___x_1096_ = l_Lean_MessageData_ofExpr(v_a_1070_);
v___x_1097_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3);
v___x_1099_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
lean_inc(v_a_1072_);
v___x_1100_ = l_Lean_indentExpr(v_a_1072_);
v___x_1101_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1099_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1101_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_dec_ref_known(v___x_1102_, 1);
v___y_1074_ = v___y_1056_;
v___y_1075_ = v___y_1057_;
v___y_1076_ = v___y_1058_;
v___y_1077_ = v___y_1059_;
v___y_1078_ = v___y_1060_;
goto v___jp_1073_;
}
else
{
lean_dec(v_a_1072_);
return v___x_1102_;
}
}
v___jp_1073_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; uint8_t v___x_1081_; 
v___x_1079_ = lean_unsigned_to_nat(0u);
v___x_1080_ = lean_array_get_size(v_indices_1050_);
v___x_1081_ = lean_nat_dec_lt(v___x_1079_, v___x_1080_);
if (v___x_1081_ == 0)
{
lean_dec(v_a_1072_);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
if (v___x_1081_ == 0)
{
lean_dec(v_a_1072_);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
size_t v___x_1082_; size_t v___x_1083_; uint8_t v___x_1084_; 
v___x_1082_ = ((size_t)0ULL);
v___x_1083_ = lean_usize_of_nat(v___x_1080_);
v___x_1084_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_1072_, v_indices_1050_, v___x_1082_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_dec(v_a_1072_);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1085_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1070_);
v___x_1086_ = l_Lean_MessageData_ofExpr(v_a_1070_);
v___x_1087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1);
v___x_1089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1087_);
lean_ctor_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = l_Lean_indentExpr(v_a_1072_);
v___x_1091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1091_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_dec_ref_known(v___x_1092_, 1);
v_a_1063_ = v___x_1069_;
goto v___jp_1062_;
}
else
{
return v___x_1092_;
}
}
}
}
}
}
else
{
lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1110_; 
v_a_1103_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1110_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1110_ == 0)
{
v___x_1105_ = v___x_1071_;
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1071_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1110_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1108_; 
if (v_isShared_1106_ == 0)
{
v___x_1108_ = v___x_1105_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_a_1103_);
v___x_1108_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
return v___x_1108_;
}
}
}
}
v___jp_1062_:
{
size_t v___x_1064_; size_t v___x_1065_; 
v___x_1064_ = ((size_t)1ULL);
v___x_1065_ = lean_usize_add(v_i_1054_, v___x_1064_);
v_i_1054_ = v___x_1065_;
v_b_1055_ = v_a_1063_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___boxed(lean_object* v_indices_1111_, lean_object* v_val_1112_, lean_object* v_as_1113_, lean_object* v_sz_1114_, lean_object* v_i_1115_, lean_object* v_b_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
size_t v_sz_boxed_1123_; size_t v_i_boxed_1124_; lean_object* v_res_1125_; 
v_sz_boxed_1123_ = lean_unbox_usize(v_sz_1114_);
lean_dec(v_sz_1114_);
v_i_boxed_1124_ = lean_unbox_usize(v_i_1115_);
lean_dec(v_i_1115_);
v_res_1125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1111_, v_val_1112_, v_as_1113_, v_sz_boxed_1123_, v_i_boxed_1124_, v_b_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec_ref(v_as_1113_);
lean_dec_ref(v_val_1112_);
lean_dec_ref(v_indices_1111_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields(lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_compFieldVars_1132_; lean_object* v_indices_1133_; lean_object* v_val_1134_; lean_object* v___x_1135_; size_t v_sz_1136_; size_t v___x_1137_; lean_object* v___x_1138_; 
v_compFieldVars_1132_ = lean_ctor_get(v___y_1126_, 4);
v_indices_1133_ = lean_ctor_get(v___y_1126_, 5);
v_val_1134_ = lean_ctor_get(v___y_1126_, 6);
v___x_1135_ = lean_box(0);
v_sz_1136_ = lean_array_size(v_compFieldVars_1132_);
v___x_1137_ = ((size_t)0ULL);
v___x_1138_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1133_, v_val_1134_, v_compFieldVars_1132_, v_sz_1136_, v___x_1137_, v___x_1135_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1145_; 
v_isSharedCheck_1145_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1145_ == 0)
{
lean_object* v_unused_1146_; 
v_unused_1146_ = lean_ctor_get(v___x_1138_, 0);
lean_dec(v_unused_1146_);
v___x_1140_ = v___x_1138_;
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
else
{
lean_dec(v___x_1138_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1145_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v___x_1143_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v___x_1135_);
v___x_1143_ = v___x_1140_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v___x_1135_);
v___x_1143_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
return v___x_1143_;
}
}
}
else
{
return v___x_1138_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields___boxed(lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lean_Elab_ComputedFields_validateComputedFields(v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
lean_dec_ref(v___y_1147_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(lean_object* v_00_u03b1_1154_, lean_object* v_msg_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1155_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___boxed(lean_object* v_00_u03b1_1163_, lean_object* v_msg_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(v_00_u03b1_1163_, v_msg_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec_ref(v___y_1165_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(lean_object* v_k_1172_, lean_object* v___y_1173_, lean_object* v_b_1174_, lean_object* v_c_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; 
lean_inc(v___y_1179_);
lean_inc_ref(v___y_1178_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
lean_inc_ref(v___y_1173_);
v___x_1181_ = lean_apply_8(v_k_1172_, v_b_1174_, v_c_1175_, v___y_1173_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, lean_box(0));
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed(lean_object* v_k_1182_, lean_object* v___y_1183_, lean_object* v_b_1184_, lean_object* v_c_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(v_k_1182_, v___y_1183_, v_b_1184_, v_c_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec_ref(v___y_1183_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(lean_object* v_type_1192_, lean_object* v_k_1193_, uint8_t v_cleanupAnnotations_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___f_1201_; uint8_t v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; 
lean_inc_ref(v___y_1195_);
v___f_1201_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1201_, 0, v_k_1193_);
lean_closure_set(v___f_1201_, 1, v___y_1195_);
v___x_1202_ = 0;
v___x_1203_ = lean_box(0);
v___x_1204_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1202_, v___x_1203_, v_type_1192_, v___f_1201_, v_cleanupAnnotations_1194_, v___x_1202_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
if (lean_obj_tag(v___x_1204_) == 0)
{
return v___x_1204_;
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___boxed(lean_object* v_type_1213_, lean_object* v_k_1214_, lean_object* v_cleanupAnnotations_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1222_; lean_object* v_res_1223_; 
v_cleanupAnnotations_boxed_1222_ = lean_unbox(v_cleanupAnnotations_1215_);
v_res_1223_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1213_, v_k_1214_, v_cleanupAnnotations_boxed_1222_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec_ref(v___y_1216_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(lean_object* v_00_u03b1_1224_, lean_object* v_type_1225_, lean_object* v_k_1226_, uint8_t v_cleanupAnnotations_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
lean_object* v___x_1234_; 
v___x_1234_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1225_, v_k_1226_, v_cleanupAnnotations_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
return v___x_1234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___boxed(lean_object* v_00_u03b1_1235_, lean_object* v_type_1236_, lean_object* v_k_1237_, lean_object* v_cleanupAnnotations_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1245_; lean_object* v_res_1246_; 
v_cleanupAnnotations_boxed_1245_ = lean_unbox(v_cleanupAnnotations_1238_);
v_res_1246_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(v_00_u03b1_1235_, v_type_1236_, v_k_1237_, v_cleanupAnnotations_boxed_1245_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec_ref(v___y_1239_);
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(lean_object* v___x_1249_, lean_object* v_lparams_1250_, lean_object* v_head_1251_, lean_object* v_params_1252_, lean_object* v___x_1253_, lean_object* v_compFieldVars_1254_, lean_object* v_fields_1255_, lean_object* v_retTy_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; lean_object* v_dummy_1264_; lean_object* v_nargs_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1263_ = l_Lean_mkConst(v___x_1249_, v_lparams_1250_);
v_dummy_1264_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4);
v_nargs_1265_ = l_Lean_Expr_getAppNumArgs(v_retTy_1256_);
lean_inc(v_nargs_1265_);
v___x_1266_ = lean_mk_array(v_nargs_1265_, v_dummy_1264_);
v___x_1267_ = lean_unsigned_to_nat(1u);
v___x_1268_ = lean_nat_sub(v_nargs_1265_, v___x_1267_);
lean_dec(v_nargs_1265_);
v___x_1269_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_retTy_1256_, v___x_1266_, v___x_1268_);
v___x_1270_ = l_Lean_mkAppN(v___x_1263_, v___x_1269_);
lean_dec_ref(v___x_1269_);
lean_inc(v_head_1251_);
v___x_1271_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_1251_, v___y_1260_, v___y_1261_);
if (lean_obj_tag(v___x_1271_) == 0)
{
lean_object* v_a_1272_; uint8_t v___x_1273_; lean_object* v___y_1275_; uint8_t v___x_1299_; 
v_a_1272_ = lean_ctor_get(v___x_1271_, 0);
lean_inc(v_a_1272_);
lean_dec_ref_known(v___x_1271_, 1);
v___x_1273_ = 1;
v___x_1299_ = lean_unbox(v_a_1272_);
lean_dec(v_a_1272_);
if (v___x_1299_ == 0)
{
v___y_1275_ = v_compFieldVars_1254_;
goto v___jp_1274_;
}
else
{
lean_object* v___x_1300_; 
v___x_1300_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1275_ = v___x_1300_;
goto v___jp_1274_;
}
v___jp_1274_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; uint8_t v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; 
v___x_1276_ = l_Array_append___redArg(v_params_1252_, v___y_1275_);
v___x_1277_ = l_Array_append___redArg(v___x_1276_, v_fields_1255_);
v___x_1278_ = 0;
v___x_1279_ = 1;
v___x_1280_ = l_Lean_Meta_mkForallFVars(v___x_1277_, v___x_1270_, v___x_1278_, v___x_1273_, v___x_1273_, v___x_1279_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_);
lean_dec_ref(v___x_1277_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1290_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1283_ = v___x_1280_;
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1280_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1290_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1288_; 
v___x_1285_ = l_Lean_Name_append(v_head_1251_, v___x_1253_);
v___x_1286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
lean_ctor_set(v___x_1286_, 1, v_a_1281_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 0, v___x_1286_);
v___x_1288_ = v___x_1283_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_dec(v___x_1253_);
lean_dec(v_head_1251_);
v_a_1291_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1280_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1280_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
else
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1308_; 
lean_dec_ref(v___x_1270_);
lean_dec(v___x_1253_);
lean_dec_ref(v_params_1252_);
lean_dec(v_head_1251_);
v_a_1301_ = lean_ctor_get(v___x_1271_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1271_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1303_ = v___x_1271_;
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1271_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1308_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v___x_1306_; 
if (v_isShared_1304_ == 0)
{
v___x_1306_ = v___x_1303_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1301_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed(lean_object* v___x_1309_, lean_object* v_lparams_1310_, lean_object* v_head_1311_, lean_object* v_params_1312_, lean_object* v___x_1313_, lean_object* v_compFieldVars_1314_, lean_object* v_fields_1315_, lean_object* v_retTy_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(v___x_1309_, v_lparams_1310_, v_head_1311_, v_params_1312_, v___x_1313_, v_compFieldVars_1314_, v_fields_1315_, v_retTy_1316_, v___y_1317_, v___y_1318_, v___y_1319_, v___y_1320_, v___y_1321_);
lean_dec(v___y_1321_);
lean_dec_ref(v___y_1320_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec_ref(v_fields_1315_);
lean_dec_ref(v_compFieldVars_1314_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(lean_object* v___x_1327_, lean_object* v_lparams_1328_, lean_object* v_params_1329_, lean_object* v_compFieldVars_1330_, lean_object* v_x_1331_, lean_object* v_x_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
if (lean_obj_tag(v_x_1331_) == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
lean_dec_ref(v_compFieldVars_1330_);
lean_dec_ref(v_params_1329_);
lean_dec(v_lparams_1328_);
lean_dec(v___x_1327_);
v___x_1339_ = l_List_reverse___redArg(v_x_1332_);
v___x_1340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
return v___x_1340_;
}
else
{
lean_object* v_head_1341_; lean_object* v_tail_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1375_; 
v_head_1341_ = lean_ctor_get(v_x_1331_, 0);
v_tail_1342_ = lean_ctor_get(v_x_1331_, 1);
v_isSharedCheck_1375_ = !lean_is_exclusive(v_x_1331_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1344_ = v_x_1331_;
v_isShared_1345_ = v_isSharedCheck_1375_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_tail_1342_);
lean_inc(v_head_1341_);
lean_dec(v_x_1331_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1375_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1346_; lean_object* v___f_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1346_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc_ref(v_compFieldVars_1330_);
lean_inc_ref(v_params_1329_);
lean_inc(v_head_1341_);
lean_inc_n(v_lparams_1328_, 2);
lean_inc(v___x_1327_);
v___f_1347_ = lean_alloc_closure((void*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed), 14, 6);
lean_closure_set(v___f_1347_, 0, v___x_1327_);
lean_closure_set(v___f_1347_, 1, v_lparams_1328_);
lean_closure_set(v___f_1347_, 2, v_head_1341_);
lean_closure_set(v___f_1347_, 3, v_params_1329_);
lean_closure_set(v___f_1347_, 4, v___x_1346_);
lean_closure_set(v___f_1347_, 5, v_compFieldVars_1330_);
v___x_1348_ = l_Lean_mkConst(v_head_1341_, v_lparams_1328_);
v___x_1349_ = l_Lean_mkAppN(v___x_1348_, v_params_1329_);
lean_inc(v___y_1337_);
lean_inc_ref(v___y_1336_);
lean_inc(v___y_1335_);
lean_inc_ref(v___y_1334_);
v___x_1350_ = lean_infer_type(v___x_1349_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; uint8_t v___x_1352_; lean_object* v___x_1353_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1352_ = 0;
v___x_1353_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1351_, v___f_1347_, v___x_1352_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1356_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
if (v_isShared_1345_ == 0)
{
lean_ctor_set(v___x_1344_, 1, v_x_1332_);
lean_ctor_set(v___x_1344_, 0, v_a_1354_);
v___x_1356_ = v___x_1344_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1354_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_x_1332_);
v___x_1356_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
v_x_1331_ = v_tail_1342_;
v_x_1332_ = v___x_1356_;
goto _start;
}
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
lean_del_object(v___x_1344_);
lean_dec(v_tail_1342_);
lean_dec(v_x_1332_);
lean_dec_ref(v_compFieldVars_1330_);
lean_dec_ref(v_params_1329_);
lean_dec(v_lparams_1328_);
lean_dec(v___x_1327_);
v_a_1359_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1353_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1353_);
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
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec_ref(v___f_1347_);
lean_del_object(v___x_1344_);
lean_dec(v_tail_1342_);
lean_dec(v_x_1332_);
lean_dec_ref(v_compFieldVars_1330_);
lean_dec_ref(v_params_1329_);
lean_dec(v_lparams_1328_);
lean_dec(v___x_1327_);
v_a_1367_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1350_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1350_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___boxed(lean_object* v___x_1376_, lean_object* v_lparams_1377_, lean_object* v_params_1378_, lean_object* v_compFieldVars_1379_, lean_object* v_x_1380_, lean_object* v_x_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v_res_1388_; 
v_res_1388_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1376_, v_lparams_1377_, v_params_1378_, v_compFieldVars_1379_, v_x_1380_, v_x_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec_ref(v___y_1382_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType(lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v_toInductiveVal_1395_; lean_object* v_toConstantVal_1396_; lean_object* v_lparams_1397_; lean_object* v_params_1398_; lean_object* v_compFieldVars_1399_; lean_object* v_numParams_1400_; lean_object* v_ctors_1401_; uint8_t v_isUnsafe_1402_; lean_object* v_name_1403_; lean_object* v_levelParams_1404_; lean_object* v_type_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v_toInductiveVal_1395_ = lean_ctor_get(v___y_1389_, 0);
v_toConstantVal_1396_ = lean_ctor_get(v_toInductiveVal_1395_, 0);
v_lparams_1397_ = lean_ctor_get(v___y_1389_, 1);
v_params_1398_ = lean_ctor_get(v___y_1389_, 2);
v_compFieldVars_1399_ = lean_ctor_get(v___y_1389_, 4);
v_numParams_1400_ = lean_ctor_get(v_toInductiveVal_1395_, 1);
v_ctors_1401_ = lean_ctor_get(v_toInductiveVal_1395_, 4);
v_isUnsafe_1402_ = lean_ctor_get_uint8(v_toInductiveVal_1395_, sizeof(void*)*6 + 1);
v_name_1403_ = lean_ctor_get(v_toConstantVal_1396_, 0);
v_levelParams_1404_ = lean_ctor_get(v_toConstantVal_1396_, 1);
v_type_1405_ = lean_ctor_get(v_toConstantVal_1396_, 2);
v___x_1406_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_1403_);
v___x_1407_ = l_Lean_Name_append(v_name_1403_, v___x_1406_);
v___x_1408_ = lean_box(0);
lean_inc(v_ctors_1401_);
lean_inc_ref(v_compFieldVars_1399_);
lean_inc_ref(v_params_1398_);
lean_inc(v_lparams_1397_);
lean_inc(v___x_1407_);
v___x_1409_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1407_, v_lparams_1397_, v_params_1398_, v_compFieldVars_1399_, v_ctors_1401_, v___x_1408_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; uint8_t v___x_1414_; lean_object* v___x_1415_; 
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc(v_a_1410_);
lean_dec_ref_known(v___x_1409_, 1);
lean_inc_ref(v_type_1405_);
lean_inc(v___x_1407_);
v___x_1411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1407_);
lean_ctor_set(v___x_1411_, 1, v_type_1405_);
lean_ctor_set(v___x_1411_, 2, v_a_1410_);
v___x_1412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1411_);
lean_ctor_set(v___x_1412_, 1, v___x_1408_);
lean_inc(v_numParams_1400_);
lean_inc(v_levelParams_1404_);
v___x_1413_ = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(v___x_1413_, 0, v_levelParams_1404_);
lean_ctor_set(v___x_1413_, 1, v_numParams_1400_);
lean_ctor_set(v___x_1413_, 2, v___x_1412_);
lean_ctor_set_uint8(v___x_1413_, sizeof(void*)*3, v_isUnsafe_1402_);
v___x_1414_ = 0;
v___x_1415_ = l_Lean_addDecl(v___x_1413_, v___x_1414_, v___y_1392_, v___y_1393_);
if (lean_obj_tag(v___x_1415_) == 0)
{
lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1422_ == 0)
{
lean_object* v_unused_1423_; 
v_unused_1423_ = lean_ctor_get(v___x_1415_, 0);
lean_dec(v_unused_1423_);
v___x_1417_ = v___x_1415_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_dec(v___x_1415_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set(v___x_1417_, 0, v___x_1407_);
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1407_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
else
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
lean_dec(v___x_1407_);
v_a_1424_ = lean_ctor_get(v___x_1415_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1415_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1426_ = v___x_1415_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1415_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1424_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
lean_dec(v___x_1407_);
v_a_1432_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1409_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1409_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType___boxed(lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l_Lean_Elab_ComputedFields_mkImplType(v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec_ref(v___y_1440_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(lean_object* v_k_1447_, lean_object* v___y_1448_, lean_object* v_b_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_){
_start:
{
lean_object* v___x_1455_; 
lean_inc(v___y_1453_);
lean_inc_ref(v___y_1452_);
lean_inc(v___y_1451_);
lean_inc_ref(v___y_1450_);
lean_inc_ref(v___y_1448_);
v___x_1455_ = lean_apply_7(v_k_1447_, v_b_1449_, v___y_1448_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, lean_box(0));
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed(lean_object* v_k_1456_, lean_object* v___y_1457_, lean_object* v_b_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(v_k_1456_, v___y_1457_, v_b_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec_ref(v___y_1457_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(lean_object* v_name_1465_, lean_object* v_type_1466_, lean_object* v_val_1467_, lean_object* v_k_1468_, uint8_t v_nondep_1469_, uint8_t v_kind_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v___f_1477_; lean_object* v___x_1478_; 
lean_inc_ref(v___y_1471_);
v___f_1477_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1477_, 0, v_k_1468_);
lean_closure_set(v___f_1477_, 1, v___y_1471_);
v___x_1478_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1465_, v_type_1466_, v_val_1467_, v___f_1477_, v_nondep_1469_, v_kind_1470_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
if (lean_obj_tag(v___x_1478_) == 0)
{
return v___x_1478_;
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1478_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1478_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___boxed(lean_object* v_name_1487_, lean_object* v_type_1488_, lean_object* v_val_1489_, lean_object* v_k_1490_, lean_object* v_nondep_1491_, lean_object* v_kind_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
uint8_t v_nondep_boxed_1499_; uint8_t v_kind_boxed_1500_; lean_object* v_res_1501_; 
v_nondep_boxed_1499_ = lean_unbox(v_nondep_1491_);
v_kind_boxed_1500_ = lean_unbox(v_kind_1492_);
v_res_1501_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1487_, v_type_1488_, v_val_1489_, v_k_1490_, v_nondep_boxed_1499_, v_kind_boxed_1500_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec_ref(v___y_1493_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(lean_object* v_00_u03b1_1502_, lean_object* v_name_1503_, lean_object* v_type_1504_, lean_object* v_val_1505_, lean_object* v_k_1506_, uint8_t v_nondep_1507_, uint8_t v_kind_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1503_, v_type_1504_, v_val_1505_, v_k_1506_, v_nondep_1507_, v_kind_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___boxed(lean_object* v_00_u03b1_1516_, lean_object* v_name_1517_, lean_object* v_type_1518_, lean_object* v_val_1519_, lean_object* v_k_1520_, lean_object* v_nondep_1521_, lean_object* v_kind_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
uint8_t v_nondep_boxed_1529_; uint8_t v_kind_boxed_1530_; lean_object* v_res_1531_; 
v_nondep_boxed_1529_ = lean_unbox(v_nondep_1521_);
v_kind_boxed_1530_ = lean_unbox(v_kind_1522_);
v_res_1531_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(v_00_u03b1_1516_, v_name_1517_, v_type_1518_, v_val_1519_, v_k_1520_, v_nondep_boxed_1529_, v_kind_boxed_1530_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec_ref(v___y_1523_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(lean_object* v___x_1532_, lean_object* v___x_1533_, lean_object* v_majorImpl_1534_, lean_object* v_m_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; uint8_t v___x_1548_; uint8_t v___x_1549_; lean_object* v___x_1550_; 
v___x_1542_ = lean_mk_empty_array_with_capacity(v___x_1532_);
lean_inc_ref(v_m_1535_);
lean_inc_ref(v___x_1542_);
v___x_1543_ = lean_array_push(v___x_1542_, v_m_1535_);
v___x_1544_ = l_Array_append___redArg(v___x_1543_, v___x_1533_);
v___x_1545_ = lean_array_push(v___x_1542_, v_majorImpl_1534_);
v___x_1546_ = l_Array_append___redArg(v___x_1544_, v___x_1545_);
lean_dec_ref(v___x_1545_);
v___x_1547_ = 0;
v___x_1548_ = 1;
v___x_1549_ = 1;
v___x_1550_ = l_Lean_Meta_mkLambdaFVars(v___x_1546_, v_m_1535_, v___x_1547_, v___x_1548_, v___x_1547_, v___x_1548_, v___x_1549_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
lean_dec_ref(v___x_1546_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed(lean_object* v___x_1551_, lean_object* v___x_1552_, lean_object* v_majorImpl_1553_, lean_object* v_m_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_, lean_object* v___y_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(v___x_1551_, v___x_1552_, v_majorImpl_1553_, v_m_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_);
lean_dec(v___y_1559_);
lean_dec_ref(v___y_1558_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec_ref(v___x_1552_);
lean_dec(v___x_1551_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(lean_object* v___x_1565_, lean_object* v___x_1566_, lean_object* v_constMotive_1567_, lean_object* v_majorImpl_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v___f_1575_; lean_object* v___x_1576_; 
v___f_1575_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1575_, 0, v___x_1565_);
lean_closure_set(v___f_1575_, 1, v___x_1566_);
lean_closure_set(v___f_1575_, 2, v_majorImpl_1568_);
lean_inc(v___y_1573_);
lean_inc_ref(v___y_1572_);
lean_inc(v___y_1571_);
lean_inc_ref(v___y_1570_);
lean_inc_ref(v_constMotive_1567_);
v___x_1576_ = lean_infer_type(v_constMotive_1567_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; uint8_t v___x_1580_; lean_object* v___x_1581_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
lean_inc(v_a_1577_);
lean_dec_ref_known(v___x_1576_, 1);
v___x_1578_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1));
v___x_1579_ = 0;
v___x_1580_ = 0;
v___x_1581_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v___x_1578_, v_a_1577_, v_constMotive_1567_, v___f_1575_, v___x_1579_, v___x_1580_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_);
return v___x_1581_;
}
else
{
lean_dec_ref(v___f_1575_);
lean_dec_ref(v_constMotive_1567_);
return v___x_1576_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed(lean_object* v___x_1582_, lean_object* v___x_1583_, lean_object* v_constMotive_1584_, lean_object* v_majorImpl_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(v___x_1582_, v___x_1583_, v_constMotive_1584_, v_majorImpl_1585_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec_ref(v___y_1586_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(lean_object* v_name_1593_, uint8_t v_bi_1594_, lean_object* v_type_1595_, lean_object* v_k_1596_, uint8_t v_kind_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v___f_1604_; lean_object* v___x_1605_; 
lean_inc_ref(v___y_1598_);
v___f_1604_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1604_, 0, v_k_1596_);
lean_closure_set(v___f_1604_, 1, v___y_1598_);
v___x_1605_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1593_, v_bi_1594_, v_type_1595_, v___f_1604_, v_kind_1597_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_);
if (lean_obj_tag(v___x_1605_) == 0)
{
return v___x_1605_;
}
else
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1613_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1608_ = v___x_1605_;
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1605_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1613_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1606_);
v___x_1611_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
return v___x_1611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg___boxed(lean_object* v_name_1614_, lean_object* v_bi_1615_, lean_object* v_type_1616_, lean_object* v_k_1617_, lean_object* v_kind_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_){
_start:
{
uint8_t v_bi_boxed_1625_; uint8_t v_kind_boxed_1626_; lean_object* v_res_1627_; 
v_bi_boxed_1625_ = lean_unbox(v_bi_1615_);
v_kind_boxed_1626_ = lean_unbox(v_kind_1618_);
v_res_1627_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1614_, v_bi_boxed_1625_, v_type_1616_, v_k_1617_, v_kind_boxed_1626_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_);
lean_dec(v___y_1623_);
lean_dec_ref(v___y_1622_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
lean_dec_ref(v___y_1619_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(lean_object* v_name_1628_, lean_object* v_type_1629_, lean_object* v_k_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
uint8_t v___x_1637_; uint8_t v___x_1638_; lean_object* v___x_1639_; 
v___x_1637_ = 0;
v___x_1638_ = 0;
v___x_1639_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1628_, v___x_1637_, v_type_1629_, v_k_1630_, v___x_1638_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg___boxed(lean_object* v_name_1640_, lean_object* v_type_1641_, lean_object* v_k_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
lean_object* v_res_1649_; 
v_res_1649_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_1640_, v_type_1641_, v_k_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec_ref(v___y_1643_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(lean_object* v_a_1650_, lean_object* v_a_1651_){
_start:
{
if (lean_obj_tag(v_a_1650_) == 0)
{
lean_object* v___x_1652_; 
v___x_1652_ = l_List_reverse___redArg(v_a_1651_);
return v___x_1652_;
}
else
{
lean_object* v_head_1653_; lean_object* v_tail_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1663_; 
v_head_1653_ = lean_ctor_get(v_a_1650_, 0);
v_tail_1654_ = lean_ctor_get(v_a_1650_, 1);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_a_1650_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1656_ = v_a_1650_;
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_tail_1654_);
lean_inc(v_head_1653_);
lean_dec(v_a_1650_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1663_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = l_Lean_mkLevelParam(v_head_1653_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 1, v_a_1651_);
lean_ctor_set(v___x_1656_, 0, v___x_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1658_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_a_1651_);
v___x_1660_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
v_a_1650_ = v_tail_1654_;
v_a_1651_ = v___x_1660_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(lean_object* v_a_1664_, lean_object* v_b_1665_){
_start:
{
lean_object* v_array_1666_; lean_object* v_start_1667_; lean_object* v_stop_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1681_; 
v_array_1666_ = lean_ctor_get(v_a_1664_, 0);
v_start_1667_ = lean_ctor_get(v_a_1664_, 1);
v_stop_1668_ = lean_ctor_get(v_a_1664_, 2);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_a_1664_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1670_ = v_a_1664_;
v_isShared_1671_ = v_isSharedCheck_1681_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_stop_1668_);
lean_inc(v_start_1667_);
lean_inc(v_array_1666_);
lean_dec(v_a_1664_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1681_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
uint8_t v___x_1672_; 
v___x_1672_ = lean_nat_dec_lt(v_start_1667_, v_stop_1668_);
if (v___x_1672_ == 0)
{
lean_del_object(v___x_1670_);
lean_dec(v_stop_1668_);
lean_dec(v_start_1667_);
lean_dec_ref(v_array_1666_);
return v_b_1665_;
}
else
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1676_; 
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_nat_add(v_start_1667_, v___x_1673_);
lean_inc_ref(v_array_1666_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 1, v___x_1674_);
v___x_1676_ = v___x_1670_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_array_1666_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v___x_1674_);
lean_ctor_set(v_reuseFailAlloc_1680_, 2, v_stop_1668_);
v___x_1676_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = lean_array_fget(v_array_1666_, v_start_1667_);
lean_dec(v_start_1667_);
lean_dec_ref(v_array_1666_);
v___x_1678_ = lean_array_push(v_b_1665_, v___x_1677_);
v_a_1664_ = v___x_1676_;
v_b_1665_ = v___x_1678_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(lean_object* v_b_1682_, lean_object* v_a_1683_, lean_object* v_constMotive_1684_, uint8_t v___x_1685_, lean_object* v_compFieldVars_1686_, lean_object* v_args_1687_, lean_object* v_x_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_Elab_ComputedFields_isScalarField(v_b_1682_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref_known(v___x_1695_, 1);
v___x_1697_ = l_Lean_mkAppN(v_a_1683_, v_args_1687_);
v___x_1698_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_constMotive_1684_, v___x_1697_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; lean_object* v___y_1701_; uint8_t v___x_1706_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_a_1699_);
lean_dec_ref_known(v___x_1698_, 1);
v___x_1706_ = lean_unbox(v_a_1696_);
lean_dec(v_a_1696_);
if (v___x_1706_ == 0)
{
v___y_1701_ = v_compFieldVars_1686_;
goto v___jp_1700_;
}
else
{
lean_object* v___x_1707_; 
lean_dec_ref(v_compFieldVars_1686_);
v___x_1707_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1701_ = v___x_1707_;
goto v___jp_1700_;
}
v___jp_1700_:
{
lean_object* v___x_1702_; uint8_t v___x_1703_; uint8_t v___x_1704_; lean_object* v___x_1705_; 
v___x_1702_ = l_Array_append___redArg(v___y_1701_, v_args_1687_);
v___x_1703_ = 0;
v___x_1704_ = 1;
v___x_1705_ = l_Lean_Meta_mkLambdaFVars(v___x_1702_, v_a_1699_, v___x_1703_, v___x_1685_, v___x_1703_, v___x_1685_, v___x_1704_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
lean_dec_ref(v___x_1702_);
return v___x_1705_;
}
}
else
{
lean_dec(v_a_1696_);
lean_dec_ref(v_compFieldVars_1686_);
return v___x_1698_;
}
}
else
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1715_; 
lean_dec_ref(v_compFieldVars_1686_);
lean_dec_ref(v_constMotive_1684_);
lean_dec_ref(v_a_1683_);
v_a_1708_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1715_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1715_ == 0)
{
v___x_1710_ = v___x_1695_;
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1695_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1715_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1713_; 
if (v_isShared_1711_ == 0)
{
v___x_1713_ = v___x_1710_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v_a_1708_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed(lean_object* v_b_1716_, lean_object* v_a_1717_, lean_object* v_constMotive_1718_, lean_object* v___x_1719_, lean_object* v_compFieldVars_1720_, lean_object* v_args_1721_, lean_object* v_x_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
uint8_t v___x_12654__boxed_1729_; lean_object* v_res_1730_; 
v___x_12654__boxed_1729_ = lean_unbox(v___x_1719_);
v_res_1730_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(v_b_1716_, v_a_1717_, v_constMotive_1718_, v___x_12654__boxed_1729_, v_compFieldVars_1720_, v_args_1721_, v_x_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
lean_dec(v___y_1727_);
lean_dec_ref(v___y_1726_);
lean_dec(v___y_1725_);
lean_dec_ref(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec_ref(v_x_1722_);
lean_dec_ref(v_args_1721_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(lean_object* v_constMotive_1731_, lean_object* v_compFieldVars_1732_, lean_object* v_as_1733_, lean_object* v_bs_1734_, lean_object* v_i_1735_, lean_object* v_cs_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v___y_1744_; lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1758_ = lean_array_get_size(v_as_1733_);
v___x_1759_ = lean_nat_dec_lt(v_i_1735_, v___x_1758_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; 
lean_dec(v_i_1735_);
lean_dec_ref(v_compFieldVars_1732_);
lean_dec_ref(v_constMotive_1731_);
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v_cs_1736_);
return v___x_1760_;
}
else
{
lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = lean_array_get_size(v_bs_1734_);
v___x_1762_ = lean_nat_dec_lt(v_i_1735_, v___x_1761_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; 
lean_dec(v_i_1735_);
lean_dec_ref(v_compFieldVars_1732_);
lean_dec_ref(v_constMotive_1731_);
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_cs_1736_);
return v___x_1763_;
}
else
{
lean_object* v_a_1764_; lean_object* v_b_1765_; lean_object* v___x_1766_; lean_object* v___f_1767_; lean_object* v___x_1768_; 
v_a_1764_ = lean_array_fget_borrowed(v_as_1733_, v_i_1735_);
v_b_1765_ = lean_array_fget_borrowed(v_bs_1734_, v_i_1735_);
v___x_1766_ = lean_box(v___x_1762_);
lean_inc_ref(v_compFieldVars_1732_);
lean_inc_ref(v_constMotive_1731_);
lean_inc_n(v_a_1764_, 2);
lean_inc(v_b_1765_);
v___f_1767_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1767_, 0, v_b_1765_);
lean_closure_set(v___f_1767_, 1, v_a_1764_);
lean_closure_set(v___f_1767_, 2, v_constMotive_1731_);
lean_closure_set(v___f_1767_, 3, v___x_1766_);
lean_closure_set(v___f_1767_, 4, v_compFieldVars_1732_);
lean_inc(v___y_1741_);
lean_inc_ref(v___y_1740_);
lean_inc(v___y_1739_);
lean_inc_ref(v___y_1738_);
v___x_1768_ = lean_infer_type(v_a_1764_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
if (lean_obj_tag(v___x_1768_) == 0)
{
lean_object* v_a_1769_; uint8_t v___x_1770_; lean_object* v___x_1771_; 
v_a_1769_ = lean_ctor_get(v___x_1768_, 0);
lean_inc(v_a_1769_);
lean_dec_ref_known(v___x_1768_, 1);
v___x_1770_ = 0;
v___x_1771_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1769_, v___f_1767_, v___x_1770_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_);
v___y_1744_ = v___x_1771_;
goto v___jp_1743_;
}
else
{
lean_dec_ref(v___f_1767_);
v___y_1744_ = v___x_1768_;
goto v___jp_1743_;
}
}
}
v___jp_1743_:
{
if (lean_obj_tag(v___y_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_a_1745_ = lean_ctor_get(v___y_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___y_1744_, 1);
v___x_1746_ = lean_unsigned_to_nat(1u);
v___x_1747_ = lean_nat_add(v_i_1735_, v___x_1746_);
lean_dec(v_i_1735_);
v___x_1748_ = lean_array_push(v_cs_1736_, v_a_1745_);
v_i_1735_ = v___x_1747_;
v_cs_1736_ = v___x_1748_;
goto _start;
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v_cs_1736_);
lean_dec(v_i_1735_);
lean_dec_ref(v_compFieldVars_1732_);
lean_dec_ref(v_constMotive_1731_);
v_a_1750_ = lean_ctor_get(v___y_1744_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___y_1744_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___y_1744_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___y_1744_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___boxed(lean_object* v_constMotive_1772_, lean_object* v_compFieldVars_1773_, lean_object* v_as_1774_, lean_object* v_bs_1775_, lean_object* v_i_1776_, lean_object* v_cs_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1772_, v_compFieldVars_1773_, v_as_1774_, v_bs_1775_, v_i_1776_, v_cs_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_);
lean_dec(v___y_1782_);
lean_dec_ref(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec_ref(v_bs_1775_);
lean_dec_ref(v_as_1774_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(lean_object* v_numIndices_1788_, lean_object* v___x_1789_, lean_object* v___x_1790_, lean_object* v_lparams_1791_, lean_object* v_params_1792_, lean_object* v_ctors_1793_, lean_object* v_compFieldVars_1794_, lean_object* v_levelParams_1795_, lean_object* v_xs_1796_, lean_object* v_constMotive_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___f_1810_; lean_object* v___x_1811_; lean_object* v_lower_1813_; lean_object* v_upper_1814_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1804_ = lean_unsigned_to_nat(1u);
v___x_1805_ = lean_nat_add(v_numIndices_1788_, v___x_1804_);
lean_inc(v___x_1805_);
lean_inc_ref(v_xs_1796_);
v___x_1806_ = l_Array_toSubarray___redArg(v_xs_1796_, v___x_1804_, v___x_1805_);
v___x_1807_ = lean_unsigned_to_nat(0u);
v___x_1808_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_1809_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1806_, v___x_1808_);
lean_inc_ref(v_constMotive_1797_);
lean_inc_ref(v___x_1809_);
v___f_1810_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1810_, 0, v___x_1804_);
lean_closure_set(v___f_1810_, 1, v___x_1809_);
lean_closure_set(v___f_1810_, 2, v_constMotive_1797_);
v___x_1811_ = lean_array_get_borrowed(v___x_1789_, v_xs_1796_, v___x_1805_);
lean_dec(v___x_1805_);
v___x_1853_ = lean_unsigned_to_nat(2u);
v___x_1854_ = lean_nat_add(v_numIndices_1788_, v___x_1853_);
v___x_1855_ = lean_array_get_size(v_xs_1796_);
v___x_1856_ = lean_nat_dec_le(v___x_1854_, v___x_1807_);
if (v___x_1856_ == 0)
{
v_lower_1813_ = v___x_1854_;
v_upper_1814_ = v___x_1855_;
goto v___jp_1812_;
}
else
{
lean_dec(v___x_1854_);
v_lower_1813_ = v___x_1807_;
v_upper_1814_ = v___x_1855_;
goto v___jp_1812_;
}
v___jp_1812_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
lean_inc_ref(v_xs_1796_);
v___x_1815_ = l_Array_toSubarray___redArg(v_xs_1796_, v_lower_1813_, v_upper_1814_);
v___x_1816_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1815_, v___x_1808_);
lean_inc(v___x_1790_);
v___x_1817_ = l_Lean_mkConst(v___x_1790_, v_lparams_1791_);
lean_inc_ref(v_params_1792_);
v___x_1818_ = l_Array_append___redArg(v_params_1792_, v___x_1809_);
v___x_1819_ = l_Lean_mkAppN(v___x_1817_, v___x_1818_);
lean_dec_ref(v___x_1818_);
v___x_1820_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1));
lean_inc_ref(v___x_1819_);
v___x_1821_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_1820_, v___x_1819_, v___f_1810_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1821_) == 0)
{
lean_object* v_a_1822_; lean_object* v___x_1823_; 
v_a_1822_ = lean_ctor_get(v___x_1821_, 0);
lean_inc(v_a_1822_);
lean_dec_ref_known(v___x_1821_, 1);
lean_inc(v___x_1811_);
v___x_1823_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v___x_1819_, v___x_1811_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
v___x_1825_ = lean_array_mk(v_ctors_1793_);
v___x_1826_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1797_, v_compFieldVars_1794_, v___x_1816_, v___x_1825_, v___x_1807_, v___x_1808_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec_ref(v___x_1825_);
lean_dec_ref(v___x_1816_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v_a_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; uint8_t v___x_1842_; uint8_t v___x_1843_; lean_object* v___x_1844_; 
v_a_1827_ = lean_ctor_get(v___x_1826_, 0);
lean_inc(v_a_1827_);
lean_dec_ref_known(v___x_1826_, 1);
lean_inc_ref(v_params_1792_);
v___x_1828_ = l_Array_append___redArg(v_params_1792_, v_xs_1796_);
lean_dec_ref(v_xs_1796_);
v___x_1829_ = l_Lean_mkCasesOnName(v___x_1790_);
v___x_1830_ = lean_box(0);
v___x_1831_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_1795_, v___x_1830_);
v___x_1832_ = l_Lean_mkConst(v___x_1829_, v___x_1831_);
v___x_1833_ = lean_mk_empty_array_with_capacity(v___x_1804_);
lean_inc_ref(v___x_1833_);
v___x_1834_ = lean_array_push(v___x_1833_, v_a_1822_);
v___x_1835_ = l_Array_append___redArg(v_params_1792_, v___x_1834_);
lean_dec_ref(v___x_1834_);
v___x_1836_ = l_Array_append___redArg(v___x_1835_, v___x_1809_);
lean_dec_ref(v___x_1809_);
v___x_1837_ = lean_array_push(v___x_1833_, v_a_1824_);
v___x_1838_ = l_Array_append___redArg(v___x_1836_, v___x_1837_);
lean_dec_ref(v___x_1837_);
v___x_1839_ = l_Array_append___redArg(v___x_1838_, v_a_1827_);
lean_dec(v_a_1827_);
v___x_1840_ = l_Lean_mkAppN(v___x_1832_, v___x_1839_);
lean_dec_ref(v___x_1839_);
v___x_1841_ = 0;
v___x_1842_ = 1;
v___x_1843_ = 1;
v___x_1844_ = l_Lean_Meta_mkLambdaFVars(v___x_1828_, v___x_1840_, v___x_1841_, v___x_1842_, v___x_1841_, v___x_1842_, v___x_1843_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec_ref(v___x_1828_);
return v___x_1844_;
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec(v_a_1824_);
lean_dec(v_a_1822_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v_xs_1796_);
lean_dec(v_levelParams_1795_);
lean_dec_ref(v_params_1792_);
lean_dec(v___x_1790_);
v_a_1845_ = lean_ctor_get(v___x_1826_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1826_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1826_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
else
{
lean_dec(v_a_1822_);
lean_dec_ref(v___x_1816_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v_constMotive_1797_);
lean_dec_ref(v_xs_1796_);
lean_dec(v_levelParams_1795_);
lean_dec_ref(v_compFieldVars_1794_);
lean_dec(v_ctors_1793_);
lean_dec_ref(v_params_1792_);
lean_dec(v___x_1790_);
return v___x_1823_;
}
}
else
{
lean_dec_ref(v___x_1819_);
lean_dec_ref(v___x_1816_);
lean_dec_ref(v___x_1809_);
lean_dec_ref(v_constMotive_1797_);
lean_dec_ref(v_xs_1796_);
lean_dec(v_levelParams_1795_);
lean_dec_ref(v_compFieldVars_1794_);
lean_dec(v_ctors_1793_);
lean_dec_ref(v_params_1792_);
lean_dec(v___x_1790_);
return v___x_1821_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed(lean_object* v_numIndices_1857_, lean_object* v___x_1858_, lean_object* v___x_1859_, lean_object* v_lparams_1860_, lean_object* v_params_1861_, lean_object* v_ctors_1862_, lean_object* v_compFieldVars_1863_, lean_object* v_levelParams_1864_, lean_object* v_xs_1865_, lean_object* v_constMotive_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(v_numIndices_1857_, v___x_1858_, v___x_1859_, v_lparams_1860_, v_params_1861_, v_ctors_1862_, v_compFieldVars_1863_, v_levelParams_1864_, v_xs_1865_, v_constMotive_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec_ref(v___x_1858_);
lean_dec(v_numIndices_1857_);
return v_res_1873_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; 
v___x_1874_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1875_, 0, v___x_1874_);
return v___x_1875_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1876_);
lean_ctor_set(v___x_1877_, 1, v___x_1876_);
return v___x_1877_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1878_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1879_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1879_, 0, v___x_1878_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
lean_ctor_set(v___x_1879_, 2, v___x_1878_);
lean_ctor_set(v___x_1879_, 3, v___x_1878_);
lean_ctor_set(v___x_1879_, 4, v___x_1878_);
lean_ctor_set(v___x_1879_, 5, v___x_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(lean_object* v_env_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v___x_1884_; lean_object* v_nextMacroScope_1885_; lean_object* v_ngen_1886_; lean_object* v_auxDeclNGen_1887_; lean_object* v_traceState_1888_; lean_object* v_messages_1889_; lean_object* v_infoState_1890_; lean_object* v_snapshotTasks_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1917_; 
v___x_1884_ = lean_st_ref_take(v___y_1882_);
v_nextMacroScope_1885_ = lean_ctor_get(v___x_1884_, 1);
v_ngen_1886_ = lean_ctor_get(v___x_1884_, 2);
v_auxDeclNGen_1887_ = lean_ctor_get(v___x_1884_, 3);
v_traceState_1888_ = lean_ctor_get(v___x_1884_, 4);
v_messages_1889_ = lean_ctor_get(v___x_1884_, 6);
v_infoState_1890_ = lean_ctor_get(v___x_1884_, 7);
v_snapshotTasks_1891_ = lean_ctor_get(v___x_1884_, 8);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1917_ == 0)
{
lean_object* v_unused_1918_; lean_object* v_unused_1919_; 
v_unused_1918_ = lean_ctor_get(v___x_1884_, 5);
lean_dec(v_unused_1918_);
v_unused_1919_ = lean_ctor_get(v___x_1884_, 0);
lean_dec(v_unused_1919_);
v___x_1893_ = v___x_1884_;
v_isShared_1894_ = v_isSharedCheck_1917_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_snapshotTasks_1891_);
lean_inc(v_infoState_1890_);
lean_inc(v_messages_1889_);
lean_inc(v_traceState_1888_);
lean_inc(v_auxDeclNGen_1887_);
lean_inc(v_ngen_1886_);
lean_inc(v_nextMacroScope_1885_);
lean_dec(v___x_1884_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1917_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1895_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 5, v___x_1895_);
lean_ctor_set(v___x_1893_, 0, v_env_1880_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_env_1880_);
lean_ctor_set(v_reuseFailAlloc_1916_, 1, v_nextMacroScope_1885_);
lean_ctor_set(v_reuseFailAlloc_1916_, 2, v_ngen_1886_);
lean_ctor_set(v_reuseFailAlloc_1916_, 3, v_auxDeclNGen_1887_);
lean_ctor_set(v_reuseFailAlloc_1916_, 4, v_traceState_1888_);
lean_ctor_set(v_reuseFailAlloc_1916_, 5, v___x_1895_);
lean_ctor_set(v_reuseFailAlloc_1916_, 6, v_messages_1889_);
lean_ctor_set(v_reuseFailAlloc_1916_, 7, v_infoState_1890_);
lean_ctor_set(v_reuseFailAlloc_1916_, 8, v_snapshotTasks_1891_);
v___x_1897_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v_mctx_1900_; lean_object* v_zetaDeltaFVarIds_1901_; lean_object* v_postponed_1902_; lean_object* v_diag_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1914_; 
v___x_1898_ = lean_st_ref_put(v___y_1882_, v___x_1897_);
v___x_1899_ = lean_st_ref_take(v___y_1881_);
v_mctx_1900_ = lean_ctor_get(v___x_1899_, 0);
v_zetaDeltaFVarIds_1901_ = lean_ctor_get(v___x_1899_, 2);
v_postponed_1902_ = lean_ctor_get(v___x_1899_, 3);
v_diag_1903_ = lean_ctor_get(v___x_1899_, 4);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1914_ == 0)
{
lean_object* v_unused_1915_; 
v_unused_1915_ = lean_ctor_get(v___x_1899_, 1);
lean_dec(v_unused_1915_);
v___x_1905_ = v___x_1899_;
v_isShared_1906_ = v_isSharedCheck_1914_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_diag_1903_);
lean_inc(v_postponed_1902_);
lean_inc(v_zetaDeltaFVarIds_1901_);
lean_inc(v_mctx_1900_);
lean_dec(v___x_1899_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1914_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1910_; 
v___x_1907_ = lean_box(0);
v___x_1908_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_1906_ == 0)
{
lean_ctor_set(v___x_1905_, 1, v___x_1908_);
v___x_1910_ = v___x_1905_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_mctx_1900_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v___x_1908_);
lean_ctor_set(v_reuseFailAlloc_1913_, 2, v_zetaDeltaFVarIds_1901_);
lean_ctor_set(v_reuseFailAlloc_1913_, 3, v_postponed_1902_);
lean_ctor_set(v_reuseFailAlloc_1913_, 4, v_diag_1903_);
v___x_1910_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_st_ref_put(v___y_1881_, v___x_1910_);
v___x_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1912_, 0, v___x_1907_);
return v___x_1912_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___boxed(lean_object* v_env_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec(v___y_1921_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(lean_object* v_declName_1925_, lean_object* v_impName_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v___x_1933_; lean_object* v_env_1934_; lean_object* v___x_1935_; 
v___x_1933_ = lean_st_ref_get(v___y_1931_);
v_env_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc_ref(v_env_1934_);
lean_dec(v___x_1933_);
v___x_1935_ = l_Lean_Compiler_setImplementedBy(v_env_1934_, v_declName_1925_, v_impName_1926_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1945_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
lean_ctor_set_tag(v___x_1938_, 3);
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1942_ = l_Lean_MessageData_ofFormat(v___x_1941_);
v___x_1943_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1942_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
return v___x_1943_;
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1947_; 
v_a_1946_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1946_);
lean_dec_ref_known(v___x_1935_, 1);
v___x_1947_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_a_1946_, v___y_1929_, v___y_1931_);
return v___x_1947_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6___boxed(lean_object* v_declName_1948_, lean_object* v_impName_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_declName_1948_, v_impName_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec_ref(v___y_1950_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(lean_object* v_msg_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v___f_1964_; lean_object* v___f_1965_; lean_object* v___f_1966_; lean_object* v___f_1967_; lean_object* v___f_1968_; lean_object* v___f_1969_; lean_object* v___f_1970_; lean_object* v___f_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v_toApplicative_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_2038_; 
v___f_1964_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0));
v___f_1965_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_1966_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
v___f_1967_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__3));
v___f_1968_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__4));
v___f_1969_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1969_, 0, v___f_1968_);
lean_closure_set(v___f_1969_, 1, v___f_1967_);
v___f_1970_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1970_, 0, v___f_1967_);
v___f_1971_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__5));
v___x_1972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1972_, 0, v___f_1964_);
lean_ctor_set(v___x_1972_, 1, v___f_1965_);
v___x_1973_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1972_);
lean_ctor_set(v___x_1973_, 1, v___f_1966_);
lean_ctor_set(v___x_1973_, 2, v___f_1969_);
lean_ctor_set(v___x_1973_, 3, v___f_1970_);
lean_ctor_set(v___x_1973_, 4, v___f_1971_);
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v___x_1973_);
lean_ctor_set(v___x_1974_, 1, v___f_1967_);
v___x_1975_ = l_StateRefT_x27_instMonad___redArg(v___x_1974_);
v_toApplicative_1976_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_2038_ == 0)
{
lean_object* v_unused_2039_; 
v_unused_2039_ = lean_ctor_get(v___x_1975_, 1);
lean_dec(v_unused_2039_);
v___x_1978_ = v___x_1975_;
v_isShared_1979_ = v_isSharedCheck_2038_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_toApplicative_1976_);
lean_dec(v___x_1975_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_2038_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v_toFunctor_1980_; lean_object* v_toSeq_1981_; lean_object* v_toSeqLeft_1982_; lean_object* v_toSeqRight_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_2036_; 
v_toFunctor_1980_ = lean_ctor_get(v_toApplicative_1976_, 0);
v_toSeq_1981_ = lean_ctor_get(v_toApplicative_1976_, 2);
v_toSeqLeft_1982_ = lean_ctor_get(v_toApplicative_1976_, 3);
v_toSeqRight_1983_ = lean_ctor_get(v_toApplicative_1976_, 4);
v_isSharedCheck_2036_ = !lean_is_exclusive(v_toApplicative_1976_);
if (v_isSharedCheck_2036_ == 0)
{
lean_object* v_unused_2037_; 
v_unused_2037_ = lean_ctor_get(v_toApplicative_1976_, 1);
lean_dec(v_unused_2037_);
v___x_1985_ = v_toApplicative_1976_;
v_isShared_1986_ = v_isSharedCheck_2036_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_toSeqRight_1983_);
lean_inc(v_toSeqLeft_1982_);
lean_inc(v_toSeq_1981_);
lean_inc(v_toFunctor_1980_);
lean_dec(v_toApplicative_1976_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_2036_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___f_1987_; lean_object* v___f_1988_; lean_object* v___f_1989_; lean_object* v___f_1990_; lean_object* v___x_1991_; lean_object* v___f_1992_; lean_object* v___f_1993_; lean_object* v___f_1994_; lean_object* v___x_1996_; 
v___f_1987_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__6));
v___f_1988_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1980_);
v___f_1989_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1989_, 0, v_toFunctor_1980_);
v___f_1990_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1990_, 0, v_toFunctor_1980_);
v___x_1991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1991_, 0, v___f_1989_);
lean_ctor_set(v___x_1991_, 1, v___f_1990_);
v___f_1992_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1992_, 0, v_toSeqRight_1983_);
v___f_1993_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1993_, 0, v_toSeqLeft_1982_);
v___f_1994_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1994_, 0, v_toSeq_1981_);
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 4, v___f_1992_);
lean_ctor_set(v___x_1985_, 3, v___f_1993_);
lean_ctor_set(v___x_1985_, 2, v___f_1994_);
lean_ctor_set(v___x_1985_, 1, v___f_1987_);
lean_ctor_set(v___x_1985_, 0, v___x_1991_);
v___x_1996_ = v___x_1985_;
goto v_reusejp_1995_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_2035_, 1, v___f_1987_);
lean_ctor_set(v_reuseFailAlloc_2035_, 2, v___f_1994_);
lean_ctor_set(v_reuseFailAlloc_2035_, 3, v___f_1993_);
lean_ctor_set(v_reuseFailAlloc_2035_, 4, v___f_1992_);
v___x_1996_ = v_reuseFailAlloc_2035_;
goto v_reusejp_1995_;
}
v_reusejp_1995_:
{
lean_object* v___x_1998_; 
if (v_isShared_1979_ == 0)
{
lean_ctor_set(v___x_1978_, 1, v___f_1988_);
lean_ctor_set(v___x_1978_, 0, v___x_1996_);
v___x_1998_ = v___x_1978_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v___x_1996_);
lean_ctor_set(v_reuseFailAlloc_2034_, 1, v___f_1988_);
v___x_1998_ = v_reuseFailAlloc_2034_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_1999_; lean_object* v_toApplicative_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2032_; 
v___x_1999_ = l_StateRefT_x27_instMonad___redArg(v___x_1998_);
v_toApplicative_2000_ = lean_ctor_get(v___x_1999_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_1999_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; 
v_unused_2033_ = lean_ctor_get(v___x_1999_, 1);
lean_dec(v_unused_2033_);
v___x_2002_ = v___x_1999_;
v_isShared_2003_ = v_isSharedCheck_2032_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_toApplicative_2000_);
lean_dec(v___x_1999_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2032_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v_toFunctor_2004_; lean_object* v_toSeq_2005_; lean_object* v_toSeqLeft_2006_; lean_object* v_toSeqRight_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2030_; 
v_toFunctor_2004_ = lean_ctor_get(v_toApplicative_2000_, 0);
v_toSeq_2005_ = lean_ctor_get(v_toApplicative_2000_, 2);
v_toSeqLeft_2006_ = lean_ctor_get(v_toApplicative_2000_, 3);
v_toSeqRight_2007_ = lean_ctor_get(v_toApplicative_2000_, 4);
v_isSharedCheck_2030_ = !lean_is_exclusive(v_toApplicative_2000_);
if (v_isSharedCheck_2030_ == 0)
{
lean_object* v_unused_2031_; 
v_unused_2031_ = lean_ctor_get(v_toApplicative_2000_, 1);
lean_dec(v_unused_2031_);
v___x_2009_ = v_toApplicative_2000_;
v_isShared_2010_ = v_isSharedCheck_2030_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_toSeqRight_2007_);
lean_inc(v_toSeqLeft_2006_);
lean_inc(v_toSeq_2005_);
lean_inc(v_toFunctor_2004_);
lean_dec(v_toApplicative_2000_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2030_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___f_2011_; lean_object* v___f_2012_; lean_object* v___f_2013_; lean_object* v___f_2014_; lean_object* v___x_2015_; lean_object* v___f_2016_; lean_object* v___f_2017_; lean_object* v___f_2018_; lean_object* v___x_2020_; 
v___f_2011_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_2012_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_2004_);
v___f_2013_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2013_, 0, v_toFunctor_2004_);
v___f_2014_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2014_, 0, v_toFunctor_2004_);
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___f_2013_);
lean_ctor_set(v___x_2015_, 1, v___f_2014_);
v___f_2016_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2016_, 0, v_toSeqRight_2007_);
v___f_2017_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2017_, 0, v_toSeqLeft_2006_);
v___f_2018_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2018_, 0, v_toSeq_2005_);
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 4, v___f_2016_);
lean_ctor_set(v___x_2009_, 3, v___f_2017_);
lean_ctor_set(v___x_2009_, 2, v___f_2018_);
lean_ctor_set(v___x_2009_, 1, v___f_2011_);
lean_ctor_set(v___x_2009_, 0, v___x_2015_);
v___x_2020_ = v___x_2009_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2015_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v___f_2011_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v___f_2018_);
lean_ctor_set(v_reuseFailAlloc_2029_, 3, v___f_2017_);
lean_ctor_set(v_reuseFailAlloc_2029_, 4, v___f_2016_);
v___x_2020_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
lean_object* v___x_2022_; 
if (v_isShared_2003_ == 0)
{
lean_ctor_set(v___x_2002_, 1, v___f_2012_);
lean_ctor_set(v___x_2002_, 0, v___x_2020_);
v___x_2022_ = v___x_2002_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2020_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v___f_2012_);
v___x_2022_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_11087__overap_2026_; lean_object* v___x_2027_; 
v___x_2023_ = l_ReaderT_instMonad___redArg(v___x_2022_);
v___x_2024_ = lean_box(0);
v___x_2025_ = l_instInhabitedOfMonad___redArg(v___x_2023_, v___x_2024_);
v___x_11087__overap_2026_ = lean_panic_fn_borrowed(v___x_2025_, v_msg_1957_);
lean_dec(v___x_2025_);
lean_inc(v___y_1962_);
lean_inc_ref(v___y_1961_);
lean_inc(v___y_1960_);
lean_inc_ref(v___y_1959_);
lean_inc_ref(v___y_1958_);
v___x_2027_ = lean_apply_6(v___x_11087__overap_2026_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, lean_box(0));
return v___x_2027_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0___boxed(lean_object* v_msg_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v_res_2047_; 
v_res_2047_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v_msg_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
lean_dec(v___y_2043_);
lean_dec_ref(v___y_2042_);
lean_dec_ref(v___y_2041_);
return v_res_2047_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0));
v___x_2050_ = l_Lean_stringToMessageData(v___x_2049_);
return v___x_2050_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2052_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_2053_ = lean_unsigned_to_nat(11u);
v___x_2054_ = lean_unsigned_to_nat(115u);
v___x_2055_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2));
v___x_2056_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_2057_ = l_mkPanicMessageWithDecl(v___x_2056_, v___x_2055_, v___x_2054_, v___x_2053_, v___x_2052_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(lean_object* v_constName_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
lean_object* v___x_2073_; lean_object* v_env_2074_; uint8_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2073_ = lean_st_ref_get(v___y_2063_);
v_env_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc_ref(v_env_2074_);
lean_dec(v___x_2073_);
v___x_2075_ = 0;
lean_inc(v_constName_2058_);
v___x_2076_ = l_Lean_Environment_findAsync_x3f(v_env_2074_, v_constName_2058_, v___x_2075_);
if (lean_obj_tag(v___x_2076_) == 1)
{
lean_object* v_val_2077_; uint8_t v_kind_2078_; 
v_val_2077_ = lean_ctor_get(v___x_2076_, 0);
lean_inc(v_val_2077_);
lean_dec_ref_known(v___x_2076_, 1);
v_kind_2078_ = lean_ctor_get_uint8(v_val_2077_, sizeof(void*)*3);
if (v_kind_2078_ == 0)
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2077_);
if (lean_obj_tag(v___x_2079_) == 1)
{
lean_object* v_val_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
lean_dec(v_constName_2058_);
v_val_2080_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2087_ == 0)
{
v___x_2082_ = v___x_2079_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_val_2080_);
lean_dec(v___x_2079_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set_tag(v___x_2082_, 0);
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v_val_2080_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
else
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
lean_dec_ref(v___x_2079_);
v___x_2088_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3);
v___x_2089_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v___x_2088_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2098_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2092_ = v___x_2089_;
v_isShared_2093_ = v_isSharedCheck_2098_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_a_2090_);
lean_dec(v___x_2089_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2098_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
if (lean_obj_tag(v_a_2090_) == 0)
{
lean_del_object(v___x_2092_);
goto v___jp_2065_;
}
else
{
lean_object* v_val_2094_; lean_object* v___x_2096_; 
lean_dec(v_constName_2058_);
v_val_2094_ = lean_ctor_get(v_a_2090_, 0);
lean_inc(v_val_2094_);
lean_dec_ref_known(v_a_2090_, 1);
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 0, v_val_2094_);
v___x_2096_ = v___x_2092_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_val_2094_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
else
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
lean_dec(v_constName_2058_);
v_a_2099_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2089_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2089_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2104_; 
if (v_isShared_2102_ == 0)
{
v___x_2104_ = v___x_2101_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2099_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
return v___x_2104_;
}
}
}
}
}
else
{
lean_dec(v_val_2077_);
goto v___jp_2065_;
}
}
else
{
lean_dec(v___x_2076_);
goto v___jp_2065_;
}
v___jp_2065_:
{
lean_object* v___x_2066_; uint8_t v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2066_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_2067_ = 0;
v___x_2068_ = l_Lean_MessageData_ofConstName(v_constName_2058_, v___x_2067_);
v___x_2069_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2066_);
lean_ctor_set(v___x_2069_, 1, v___x_2068_);
v___x_2070_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1);
v___x_2071_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2071_, 0, v___x_2069_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
v___x_2072_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_2071_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_);
return v___x_2072_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___boxed(lean_object* v_constName_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v_constName_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_);
lean_dec(v___y_2112_);
lean_dec_ref(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v___y_2109_);
lean_dec_ref(v___y_2108_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn(lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v_toInductiveVal_2124_; lean_object* v_toConstantVal_2125_; lean_object* v_lparams_2126_; lean_object* v_params_2127_; lean_object* v_compFieldVars_2128_; lean_object* v_numIndices_2129_; lean_object* v_ctors_2130_; lean_object* v_name_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_toInductiveVal_2124_ = lean_ctor_get(v___y_2118_, 0);
v_toConstantVal_2125_ = lean_ctor_get(v_toInductiveVal_2124_, 0);
v_lparams_2126_ = lean_ctor_get(v___y_2118_, 1);
v_params_2127_ = lean_ctor_get(v___y_2118_, 2);
v_compFieldVars_2128_ = lean_ctor_get(v___y_2118_, 4);
v_numIndices_2129_ = lean_ctor_get(v_toInductiveVal_2124_, 2);
v_ctors_2130_ = lean_ctor_get(v_toInductiveVal_2124_, 4);
v_name_2131_ = lean_ctor_get(v_toConstantVal_2125_, 0);
v___x_2132_ = l_Lean_instInhabitedExpr;
lean_inc(v_name_2131_);
v___x_2133_ = l_Lean_mkCasesOnName(v_name_2131_);
lean_inc(v___x_2133_);
v___x_2134_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v___x_2133_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref_known(v___x_2134_, 1);
v___x_2136_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_2131_);
v___x_2137_ = l_Lean_Name_append(v_name_2131_, v___x_2136_);
lean_inc(v___x_2137_);
v___x_2138_ = l_Lean_mkCasesOn(v___x_2137_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2198_; 
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2198_ == 0)
{
lean_object* v_unused_2199_; 
v_unused_2199_ = lean_ctor_get(v___x_2138_, 0);
lean_dec(v_unused_2199_);
v___x_2140_ = v___x_2138_;
v_isShared_2141_ = v_isSharedCheck_2198_;
goto v_resetjp_2139_;
}
else
{
lean_dec(v___x_2138_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2198_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v_toConstantVal_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2194_; 
v_toConstantVal_2142_ = lean_ctor_get(v_a_2135_, 0);
v_isSharedCheck_2194_ = !lean_is_exclusive(v_a_2135_);
if (v_isSharedCheck_2194_ == 0)
{
lean_object* v_unused_2195_; lean_object* v_unused_2196_; lean_object* v_unused_2197_; 
v_unused_2195_ = lean_ctor_get(v_a_2135_, 3);
lean_dec(v_unused_2195_);
v_unused_2196_ = lean_ctor_get(v_a_2135_, 2);
lean_dec(v_unused_2196_);
v_unused_2197_ = lean_ctor_get(v_a_2135_, 1);
lean_dec(v_unused_2197_);
v___x_2144_ = v_a_2135_;
v_isShared_2145_ = v_isSharedCheck_2194_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_toConstantVal_2142_);
lean_dec(v_a_2135_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2194_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v_levelParams_2146_; lean_object* v_type_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2192_; 
v_levelParams_2146_ = lean_ctor_get(v_toConstantVal_2142_, 1);
v_type_2147_ = lean_ctor_get(v_toConstantVal_2142_, 2);
v_isSharedCheck_2192_ = !lean_is_exclusive(v_toConstantVal_2142_);
if (v_isSharedCheck_2192_ == 0)
{
lean_object* v_unused_2193_; 
v_unused_2193_ = lean_ctor_get(v_toConstantVal_2142_, 0);
lean_dec(v_unused_2193_);
v___x_2149_ = v_toConstantVal_2142_;
v_isShared_2150_ = v_isSharedCheck_2192_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_type_2147_);
lean_inc(v_levelParams_2146_);
lean_dec(v_toConstantVal_2142_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2192_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___f_2151_; lean_object* v___x_2152_; 
lean_inc(v_levelParams_2146_);
lean_inc_ref(v_compFieldVars_2128_);
lean_inc(v_ctors_2130_);
lean_inc_ref(v_params_2127_);
lean_inc(v_lparams_2126_);
lean_inc(v_numIndices_2129_);
v___f_2151_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed), 16, 8);
lean_closure_set(v___f_2151_, 0, v_numIndices_2129_);
lean_closure_set(v___f_2151_, 1, v___x_2132_);
lean_closure_set(v___f_2151_, 2, v___x_2137_);
lean_closure_set(v___f_2151_, 3, v_lparams_2126_);
lean_closure_set(v___f_2151_, 4, v_params_2127_);
lean_closure_set(v___f_2151_, 5, v_ctors_2130_);
lean_closure_set(v___f_2151_, 6, v_compFieldVars_2128_);
lean_closure_set(v___f_2151_, 7, v_levelParams_2146_);
lean_inc_ref(v_type_2147_);
v___x_2152_ = l_Lean_Meta_instantiateForall(v_type_2147_, v_params_2127_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_object* v_a_2153_; uint8_t v___x_2154_; lean_object* v___x_2155_; 
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc(v_a_2153_);
lean_dec_ref_known(v___x_2152_, 1);
v___x_2154_ = 0;
v___x_2155_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2153_, v___f_2151_, v___x_2154_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2160_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_a_2156_);
lean_dec_ref_known(v___x_2155_, 1);
v___x_2157_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v___x_2133_);
v___x_2158_ = l_Lean_Name_append(v___x_2133_, v___x_2157_);
lean_inc(v___x_2158_);
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 0, v___x_2158_);
v___x_2160_ = v___x_2149_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2175_, 1, v_levelParams_2146_);
lean_ctor_set(v_reuseFailAlloc_2175_, 2, v_type_2147_);
v___x_2160_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
lean_object* v___x_2161_; uint8_t v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; 
v___x_2161_ = lean_box(0);
v___x_2162_ = 0;
v___x_2163_ = lean_box(0);
lean_inc(v___x_2158_);
v___x_2164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2158_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 3, v___x_2164_);
lean_ctor_set(v___x_2144_, 2, v___x_2161_);
lean_ctor_set(v___x_2144_, 1, v_a_2156_);
lean_ctor_set(v___x_2144_, 0, v___x_2160_);
v___x_2166_ = v___x_2144_;
goto v_reusejp_2165_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2160_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_a_2156_);
lean_ctor_set(v_reuseFailAlloc_2174_, 2, v___x_2161_);
lean_ctor_set(v_reuseFailAlloc_2174_, 3, v___x_2164_);
v___x_2166_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2165_;
}
v_reusejp_2165_:
{
lean_object* v___x_2168_; 
lean_ctor_set_uint8(v___x_2166_, sizeof(void*)*4, v___x_2162_);
if (v_isShared_2141_ == 0)
{
lean_ctor_set_tag(v___x_2140_, 1);
lean_ctor_set(v___x_2140_, 0, v___x_2166_);
v___x_2168_ = v___x_2140_;
goto v_reusejp_2167_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2166_);
v___x_2168_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2167_;
}
v_reusejp_2167_:
{
lean_object* v___x_2169_; 
v___x_2169_ = l_Lean_addDecl(v___x_2168_, v___x_2154_, v___y_2121_, v___y_2122_);
if (lean_obj_tag(v___x_2169_) == 0)
{
uint8_t v___x_2170_; lean_object* v___x_2171_; 
lean_dec_ref_known(v___x_2169_, 1);
v___x_2170_ = 0;
lean_inc(v___x_2158_);
v___x_2171_ = l_Lean_Meta_setInlineAttribute(v___x_2158_, v___x_2170_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v___x_2172_; 
lean_dec_ref_known(v___x_2171_, 1);
v___x_2172_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v___x_2133_, v___x_2158_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_);
return v___x_2172_;
}
else
{
lean_dec(v___x_2158_);
lean_dec(v___x_2133_);
return v___x_2171_;
}
}
else
{
lean_dec(v___x_2158_);
lean_dec(v___x_2133_);
return v___x_2169_;
}
}
}
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_del_object(v___x_2149_);
lean_dec_ref(v_type_2147_);
lean_dec(v_levelParams_2146_);
lean_del_object(v___x_2144_);
lean_del_object(v___x_2140_);
lean_dec(v___x_2133_);
v_a_2176_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2155_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2155_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
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
lean_dec_ref(v___f_2151_);
lean_del_object(v___x_2149_);
lean_dec_ref(v_type_2147_);
lean_dec(v_levelParams_2146_);
lean_del_object(v___x_2144_);
lean_del_object(v___x_2140_);
lean_dec(v___x_2133_);
v_a_2184_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2152_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2152_);
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
}
}
else
{
lean_dec(v___x_2137_);
lean_dec(v_a_2135_);
lean_dec(v___x_2133_);
return v___x_2138_;
}
}
else
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
lean_dec(v___x_2133_);
v_a_2200_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2202_ = v___x_2134_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2134_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2200_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___boxed(lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec_ref(v___y_2208_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1(lean_object* v_inst_2215_, lean_object* v_R_2216_, lean_object* v_a_2217_, lean_object* v_b_2218_){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v_a_2217_, v_b_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(lean_object* v_00_u03b1_2220_, lean_object* v_name_2221_, uint8_t v_bi_2222_, lean_object* v_type_2223_, lean_object* v_k_2224_, uint8_t v_kind_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v___x_2232_; 
v___x_2232_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_2221_, v_bi_2222_, v_type_2223_, v_k_2224_, v_kind_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2233_, lean_object* v_name_2234_, lean_object* v_bi_2235_, lean_object* v_type_2236_, lean_object* v_k_2237_, lean_object* v_kind_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
uint8_t v_bi_boxed_2245_; uint8_t v_kind_boxed_2246_; lean_object* v_res_2247_; 
v_bi_boxed_2245_ = lean_unbox(v_bi_2235_);
v_kind_boxed_2246_ = lean_unbox(v_kind_2238_);
v_res_2247_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(v_00_u03b1_2233_, v_name_2234_, v_bi_boxed_2245_, v_type_2236_, v_k_2237_, v_kind_boxed_2246_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
lean_dec_ref(v___y_2239_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(lean_object* v_00_u03b1_2248_, lean_object* v_name_2249_, lean_object* v_type_2250_, lean_object* v_k_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_2249_, v_type_2250_, v_k_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___boxed(lean_object* v_00_u03b1_2259_, lean_object* v_name_2260_, lean_object* v_type_2261_, lean_object* v_k_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_res_2269_; 
v_res_2269_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(v_00_u03b1_2259_, v_name_2260_, v_type_2261_, v_k_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec_ref(v___y_2263_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(lean_object* v_env_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v___x_2277_; 
v___x_2277_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_2270_, v___y_2273_, v___y_2275_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___boxed(lean_object* v_env_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(v_env_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec_ref(v___y_2279_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(lean_object* v___x_2286_, size_t v_sz_2287_, size_t v_i_2288_, lean_object* v_bs_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
uint8_t v___x_2295_; 
v___x_2295_ = lean_usize_dec_lt(v_i_2288_, v_sz_2287_);
if (v___x_2295_ == 0)
{
lean_object* v___x_2296_; 
lean_dec_ref(v___x_2286_);
v___x_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2296_, 0, v_bs_2289_);
return v___x_2296_;
}
else
{
lean_object* v_v_2297_; lean_object* v___x_2298_; lean_object* v_bs_x27_2299_; lean_object* v___x_2300_; 
v_v_2297_ = lean_array_uget(v_bs_2289_, v_i_2288_);
v___x_2298_ = lean_unsigned_to_nat(0u);
v_bs_x27_2299_ = lean_array_uset(v_bs_2289_, v_i_2288_, v___x_2298_);
lean_inc_ref(v___x_2286_);
v___x_2300_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_v_2297_, v___x_2286_, v___y_2290_, v___y_2291_, v___y_2292_, v___y_2293_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; size_t v___x_2302_; size_t v___x_2303_; lean_object* v___x_2304_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref_known(v___x_2300_, 1);
v___x_2302_ = ((size_t)1ULL);
v___x_2303_ = lean_usize_add(v_i_2288_, v___x_2302_);
v___x_2304_ = lean_array_uset(v_bs_x27_2299_, v_i_2288_, v_a_2301_);
v_i_2288_ = v___x_2303_;
v_bs_2289_ = v___x_2304_;
goto _start;
}
else
{
lean_object* v_a_2306_; lean_object* v___x_2308_; uint8_t v_isShared_2309_; uint8_t v_isSharedCheck_2313_; 
lean_dec_ref(v_bs_x27_2299_);
lean_dec_ref(v___x_2286_);
v_a_2306_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2308_ = v___x_2300_;
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
else
{
lean_inc(v_a_2306_);
lean_dec(v___x_2300_);
v___x_2308_ = lean_box(0);
v_isShared_2309_ = v_isSharedCheck_2313_;
goto v_resetjp_2307_;
}
v_resetjp_2307_:
{
lean_object* v___x_2311_; 
if (v_isShared_2309_ == 0)
{
v___x_2311_ = v___x_2308_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_a_2306_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg___boxed(lean_object* v___x_2314_, lean_object* v_sz_2315_, lean_object* v_i_2316_, lean_object* v_bs_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
size_t v_sz_boxed_2323_; size_t v_i_boxed_2324_; lean_object* v_res_2325_; 
v_sz_boxed_2323_ = lean_unbox_usize(v_sz_2315_);
lean_dec(v_sz_2315_);
v_i_boxed_2324_ = lean_unbox_usize(v_i_2316_);
lean_dec(v_i_2316_);
v_res_2325_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2314_, v_sz_boxed_2323_, v_i_boxed_2324_, v_bs_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(lean_object* v_head_2326_, lean_object* v_compFields_2327_, lean_object* v___x_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_){
_start:
{
lean_object* v___x_2335_; 
v___x_2335_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2326_, v___y_2332_, v___y_2333_);
if (lean_obj_tag(v___x_2335_) == 0)
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2348_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2348_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2348_ == 0)
{
v___x_2338_ = v___x_2335_;
v_isShared_2339_ = v_isSharedCheck_2348_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2335_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2348_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
uint8_t v___x_2340_; 
v___x_2340_ = lean_unbox(v_a_2336_);
lean_dec(v_a_2336_);
if (v___x_2340_ == 0)
{
size_t v_sz_2341_; size_t v___x_2342_; lean_object* v___x_2343_; 
lean_del_object(v___x_2338_);
v_sz_2341_ = lean_array_size(v_compFields_2327_);
v___x_2342_ = ((size_t)0ULL);
v___x_2343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2328_, v_sz_2341_, v___x_2342_, v_compFields_2327_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_);
return v___x_2343_;
}
else
{
lean_object* v___x_2344_; lean_object* v___x_2346_; 
lean_dec_ref(v___x_2328_);
lean_dec_ref(v_compFields_2327_);
v___x_2344_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
if (v_isShared_2339_ == 0)
{
lean_ctor_set(v___x_2338_, 0, v___x_2344_);
v___x_2346_ = v___x_2338_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
else
{
lean_object* v_a_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2356_; 
lean_dec_ref(v___x_2328_);
lean_dec_ref(v_compFields_2327_);
v_a_2349_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2356_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2356_ == 0)
{
v___x_2351_ = v___x_2335_;
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_a_2349_);
lean_dec(v___x_2335_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2356_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2354_; 
if (v_isShared_2352_ == 0)
{
v___x_2354_ = v___x_2351_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_a_2349_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed(lean_object* v_head_2357_, lean_object* v_compFields_2358_, lean_object* v___x_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(v_head_2357_, v_compFields_2358_, v___x_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
lean_dec(v___y_2362_);
lean_dec_ref(v___y_2361_);
lean_dec_ref(v___y_2360_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(lean_object* v___y_2367_, uint8_t v_isExporting_2368_, lean_object* v___x_2369_, lean_object* v___y_2370_, lean_object* v___x_2371_, lean_object* v_a_x3f_2372_){
_start:
{
lean_object* v___x_2374_; lean_object* v_env_2375_; lean_object* v_nextMacroScope_2376_; lean_object* v_ngen_2377_; lean_object* v_auxDeclNGen_2378_; lean_object* v_traceState_2379_; lean_object* v_messages_2380_; lean_object* v_infoState_2381_; lean_object* v_snapshotTasks_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2407_; 
v___x_2374_ = lean_st_ref_take(v___y_2367_);
v_env_2375_ = lean_ctor_get(v___x_2374_, 0);
v_nextMacroScope_2376_ = lean_ctor_get(v___x_2374_, 1);
v_ngen_2377_ = lean_ctor_get(v___x_2374_, 2);
v_auxDeclNGen_2378_ = lean_ctor_get(v___x_2374_, 3);
v_traceState_2379_ = lean_ctor_get(v___x_2374_, 4);
v_messages_2380_ = lean_ctor_get(v___x_2374_, 6);
v_infoState_2381_ = lean_ctor_get(v___x_2374_, 7);
v_snapshotTasks_2382_ = lean_ctor_get(v___x_2374_, 8);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2374_);
if (v_isSharedCheck_2407_ == 0)
{
lean_object* v_unused_2408_; 
v_unused_2408_ = lean_ctor_get(v___x_2374_, 5);
lean_dec(v_unused_2408_);
v___x_2384_ = v___x_2374_;
v_isShared_2385_ = v_isSharedCheck_2407_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_snapshotTasks_2382_);
lean_inc(v_infoState_2381_);
lean_inc(v_messages_2380_);
lean_inc(v_traceState_2379_);
lean_inc(v_auxDeclNGen_2378_);
lean_inc(v_ngen_2377_);
lean_inc(v_nextMacroScope_2376_);
lean_inc(v_env_2375_);
lean_dec(v___x_2374_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2407_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2386_; lean_object* v___x_2388_; 
v___x_2386_ = l_Lean_Environment_setExporting(v_env_2375_, v_isExporting_2368_);
if (v_isShared_2385_ == 0)
{
lean_ctor_set(v___x_2384_, 5, v___x_2369_);
lean_ctor_set(v___x_2384_, 0, v___x_2386_);
v___x_2388_ = v___x_2384_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2386_);
lean_ctor_set(v_reuseFailAlloc_2406_, 1, v_nextMacroScope_2376_);
lean_ctor_set(v_reuseFailAlloc_2406_, 2, v_ngen_2377_);
lean_ctor_set(v_reuseFailAlloc_2406_, 3, v_auxDeclNGen_2378_);
lean_ctor_set(v_reuseFailAlloc_2406_, 4, v_traceState_2379_);
lean_ctor_set(v_reuseFailAlloc_2406_, 5, v___x_2369_);
lean_ctor_set(v_reuseFailAlloc_2406_, 6, v_messages_2380_);
lean_ctor_set(v_reuseFailAlloc_2406_, 7, v_infoState_2381_);
lean_ctor_set(v_reuseFailAlloc_2406_, 8, v_snapshotTasks_2382_);
v___x_2388_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v_mctx_2391_; lean_object* v_zetaDeltaFVarIds_2392_; lean_object* v_postponed_2393_; lean_object* v_diag_2394_; lean_object* v___x_2396_; uint8_t v_isShared_2397_; uint8_t v_isSharedCheck_2404_; 
v___x_2389_ = lean_st_ref_put(v___y_2367_, v___x_2388_);
v___x_2390_ = lean_st_ref_take(v___y_2370_);
v_mctx_2391_ = lean_ctor_get(v___x_2390_, 0);
v_zetaDeltaFVarIds_2392_ = lean_ctor_get(v___x_2390_, 2);
v_postponed_2393_ = lean_ctor_get(v___x_2390_, 3);
v_diag_2394_ = lean_ctor_get(v___x_2390_, 4);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2404_ == 0)
{
lean_object* v_unused_2405_; 
v_unused_2405_ = lean_ctor_get(v___x_2390_, 1);
lean_dec(v_unused_2405_);
v___x_2396_ = v___x_2390_;
v_isShared_2397_ = v_isSharedCheck_2404_;
goto v_resetjp_2395_;
}
else
{
lean_inc(v_diag_2394_);
lean_inc(v_postponed_2393_);
lean_inc(v_zetaDeltaFVarIds_2392_);
lean_inc(v_mctx_2391_);
lean_dec(v___x_2390_);
v___x_2396_ = lean_box(0);
v_isShared_2397_ = v_isSharedCheck_2404_;
goto v_resetjp_2395_;
}
v_resetjp_2395_:
{
lean_object* v___x_2398_; lean_object* v___x_2400_; 
v___x_2398_ = lean_box(0);
if (v_isShared_2397_ == 0)
{
lean_ctor_set(v___x_2396_, 1, v___x_2371_);
v___x_2400_ = v___x_2396_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_mctx_2391_);
lean_ctor_set(v_reuseFailAlloc_2403_, 1, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2403_, 2, v_zetaDeltaFVarIds_2392_);
lean_ctor_set(v_reuseFailAlloc_2403_, 3, v_postponed_2393_);
lean_ctor_set(v_reuseFailAlloc_2403_, 4, v_diag_2394_);
v___x_2400_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = lean_st_ref_put(v___y_2370_, v___x_2400_);
v___x_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2398_);
return v___x_2402_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_2409_, lean_object* v_isExporting_2410_, lean_object* v___x_2411_, lean_object* v___y_2412_, lean_object* v___x_2413_, lean_object* v_a_x3f_2414_, lean_object* v___y_2415_){
_start:
{
uint8_t v_isExporting_boxed_2416_; lean_object* v_res_2417_; 
v_isExporting_boxed_2416_ = lean_unbox(v_isExporting_2410_);
v_res_2417_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2409_, v_isExporting_boxed_2416_, v___x_2411_, v___y_2412_, v___x_2413_, v_a_x3f_2414_);
lean_dec(v_a_x3f_2414_);
lean_dec(v___y_2412_);
lean_dec(v___y_2409_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(lean_object* v_x_2418_, uint8_t v_isExporting_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v___x_2426_; lean_object* v_env_2427_; lean_object* v___x_2428_; uint8_t v_isModule_2429_; 
v___x_2426_ = lean_st_ref_get(v___y_2424_);
v_env_2427_ = lean_ctor_get(v___x_2426_, 0);
lean_inc_ref(v_env_2427_);
lean_dec(v___x_2426_);
v___x_2428_ = l_Lean_Environment_header(v_env_2427_);
v_isModule_2429_ = lean_ctor_get_uint8(v___x_2428_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2428_);
if (v_isModule_2429_ == 0)
{
lean_object* v___x_2430_; 
lean_dec_ref(v_env_2427_);
lean_inc(v___y_2424_);
lean_inc_ref(v___y_2423_);
lean_inc(v___y_2422_);
lean_inc_ref(v___y_2421_);
lean_inc_ref(v___y_2420_);
v___x_2430_ = lean_apply_6(v_x_2418_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, lean_box(0));
return v___x_2430_;
}
else
{
uint8_t v_isExporting_2431_; 
v_isExporting_2431_ = lean_ctor_get_uint8(v_env_2427_, sizeof(void*)*8);
lean_dec_ref(v_env_2427_);
if (v_isExporting_2419_ == 0)
{
if (v_isExporting_2431_ == 0)
{
lean_object* v___x_2497_; 
lean_inc(v___y_2424_);
lean_inc_ref(v___y_2423_);
lean_inc(v___y_2422_);
lean_inc_ref(v___y_2421_);
lean_inc_ref(v___y_2420_);
v___x_2497_ = lean_apply_6(v_x_2418_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, lean_box(0));
return v___x_2497_;
}
else
{
goto v___jp_2432_;
}
}
else
{
if (v_isExporting_2431_ == 0)
{
goto v___jp_2432_;
}
else
{
lean_object* v___x_2498_; 
lean_inc(v___y_2424_);
lean_inc_ref(v___y_2423_);
lean_inc(v___y_2422_);
lean_inc_ref(v___y_2421_);
lean_inc_ref(v___y_2420_);
v___x_2498_ = lean_apply_6(v_x_2418_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, lean_box(0));
return v___x_2498_;
}
}
v___jp_2432_:
{
lean_object* v___x_2433_; lean_object* v_env_2434_; lean_object* v_nextMacroScope_2435_; lean_object* v_ngen_2436_; lean_object* v_auxDeclNGen_2437_; lean_object* v_traceState_2438_; lean_object* v_messages_2439_; lean_object* v_infoState_2440_; lean_object* v_snapshotTasks_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2495_; 
v___x_2433_ = lean_st_ref_take(v___y_2424_);
v_env_2434_ = lean_ctor_get(v___x_2433_, 0);
v_nextMacroScope_2435_ = lean_ctor_get(v___x_2433_, 1);
v_ngen_2436_ = lean_ctor_get(v___x_2433_, 2);
v_auxDeclNGen_2437_ = lean_ctor_get(v___x_2433_, 3);
v_traceState_2438_ = lean_ctor_get(v___x_2433_, 4);
v_messages_2439_ = lean_ctor_get(v___x_2433_, 6);
v_infoState_2440_ = lean_ctor_get(v___x_2433_, 7);
v_snapshotTasks_2441_ = lean_ctor_get(v___x_2433_, 8);
v_isSharedCheck_2495_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2495_ == 0)
{
lean_object* v_unused_2496_; 
v_unused_2496_ = lean_ctor_get(v___x_2433_, 5);
lean_dec(v_unused_2496_);
v___x_2443_ = v___x_2433_;
v_isShared_2444_ = v_isSharedCheck_2495_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_snapshotTasks_2441_);
lean_inc(v_infoState_2440_);
lean_inc(v_messages_2439_);
lean_inc(v_traceState_2438_);
lean_inc(v_auxDeclNGen_2437_);
lean_inc(v_ngen_2436_);
lean_inc(v_nextMacroScope_2435_);
lean_inc(v_env_2434_);
lean_dec(v___x_2433_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2495_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2448_; 
v___x_2445_ = l_Lean_Environment_setExporting(v_env_2434_, v_isExporting_2419_);
v___x_2446_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 5, v___x_2446_);
lean_ctor_set(v___x_2443_, 0, v___x_2445_);
v___x_2448_ = v___x_2443_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2494_; 
v_reuseFailAlloc_2494_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2494_, 0, v___x_2445_);
lean_ctor_set(v_reuseFailAlloc_2494_, 1, v_nextMacroScope_2435_);
lean_ctor_set(v_reuseFailAlloc_2494_, 2, v_ngen_2436_);
lean_ctor_set(v_reuseFailAlloc_2494_, 3, v_auxDeclNGen_2437_);
lean_ctor_set(v_reuseFailAlloc_2494_, 4, v_traceState_2438_);
lean_ctor_set(v_reuseFailAlloc_2494_, 5, v___x_2446_);
lean_ctor_set(v_reuseFailAlloc_2494_, 6, v_messages_2439_);
lean_ctor_set(v_reuseFailAlloc_2494_, 7, v_infoState_2440_);
lean_ctor_set(v_reuseFailAlloc_2494_, 8, v_snapshotTasks_2441_);
v___x_2448_ = v_reuseFailAlloc_2494_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v_mctx_2451_; lean_object* v_zetaDeltaFVarIds_2452_; lean_object* v_postponed_2453_; lean_object* v_diag_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2492_; 
v___x_2449_ = lean_st_ref_put(v___y_2424_, v___x_2448_);
v___x_2450_ = lean_st_ref_take(v___y_2422_);
v_mctx_2451_ = lean_ctor_get(v___x_2450_, 0);
v_zetaDeltaFVarIds_2452_ = lean_ctor_get(v___x_2450_, 2);
v_postponed_2453_ = lean_ctor_get(v___x_2450_, 3);
v_diag_2454_ = lean_ctor_get(v___x_2450_, 4);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2492_ == 0)
{
lean_object* v_unused_2493_; 
v_unused_2493_ = lean_ctor_get(v___x_2450_, 1);
lean_dec(v_unused_2493_);
v___x_2456_ = v___x_2450_;
v_isShared_2457_ = v_isSharedCheck_2492_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_diag_2454_);
lean_inc(v_postponed_2453_);
lean_inc(v_zetaDeltaFVarIds_2452_);
lean_inc(v_mctx_2451_);
lean_dec(v___x_2450_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2492_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2458_; lean_object* v___x_2460_; 
v___x_2458_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_2457_ == 0)
{
lean_ctor_set(v___x_2456_, 1, v___x_2458_);
v___x_2460_ = v___x_2456_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_mctx_2451_);
lean_ctor_set(v_reuseFailAlloc_2491_, 1, v___x_2458_);
lean_ctor_set(v_reuseFailAlloc_2491_, 2, v_zetaDeltaFVarIds_2452_);
lean_ctor_set(v_reuseFailAlloc_2491_, 3, v_postponed_2453_);
lean_ctor_set(v_reuseFailAlloc_2491_, 4, v_diag_2454_);
v___x_2460_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = lean_st_ref_put(v___y_2422_, v___x_2460_);
lean_inc(v___y_2424_);
lean_inc_ref(v___y_2423_);
lean_inc(v___y_2422_);
lean_inc_ref(v___y_2421_);
lean_inc_ref(v___y_2420_);
v___x_2462_ = lean_apply_6(v_x_2418_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_, lean_box(0));
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2479_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2465_ = v___x_2462_;
v_isShared_2466_ = v_isSharedCheck_2479_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_a_2463_);
lean_dec(v___x_2462_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2479_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
lean_object* v___x_2468_; 
lean_inc(v_a_2463_);
if (v_isShared_2466_ == 0)
{
lean_ctor_set_tag(v___x_2465_, 1);
v___x_2468_ = v___x_2465_;
goto v_reusejp_2467_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2463_);
v___x_2468_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2467_;
}
v_reusejp_2467_:
{
lean_object* v___x_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
v___x_2469_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2424_, v_isExporting_2431_, v___x_2446_, v___y_2422_, v___x_2458_, v___x_2468_);
lean_dec_ref(v___x_2468_);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2476_ == 0)
{
lean_object* v_unused_2477_; 
v_unused_2477_ = lean_ctor_get(v___x_2469_, 0);
lean_dec(v_unused_2477_);
v___x_2471_ = v___x_2469_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_dec(v___x_2469_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 0, v_a_2463_);
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2463_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
v_a_2480_ = lean_ctor_get(v___x_2462_, 0);
lean_inc(v_a_2480_);
lean_dec_ref_known(v___x_2462_, 1);
v___x_2481_ = lean_box(0);
v___x_2482_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2424_, v_isExporting_2431_, v___x_2446_, v___y_2422_, v___x_2458_, v___x_2481_);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2489_ == 0)
{
lean_object* v_unused_2490_; 
v_unused_2490_ = lean_ctor_get(v___x_2482_, 0);
lean_dec(v_unused_2490_);
v___x_2484_ = v___x_2482_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_dec(v___x_2482_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
lean_ctor_set_tag(v___x_2484_, 1);
lean_ctor_set(v___x_2484_, 0, v_a_2480_);
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2480_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___boxed(lean_object* v_x_2499_, lean_object* v_isExporting_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
uint8_t v_isExporting_boxed_2507_; lean_object* v_res_2508_; 
v_isExporting_boxed_2507_ = lean_unbox(v_isExporting_2500_);
v_res_2508_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2499_, v_isExporting_boxed_2507_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec_ref(v___y_2501_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(lean_object* v_x_2509_, uint8_t v_when_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
if (v_when_2510_ == 0)
{
lean_object* v___x_2517_; 
lean_inc(v___y_2515_);
lean_inc_ref(v___y_2514_);
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc_ref(v___y_2511_);
v___x_2517_ = lean_apply_6(v_x_2509_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, lean_box(0));
return v___x_2517_;
}
else
{
uint8_t v___x_2518_; lean_object* v___x_2519_; 
v___x_2518_ = 0;
v___x_2519_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2509_, v___x_2518_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_);
return v___x_2519_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg___boxed(lean_object* v_x_2520_, lean_object* v_when_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
uint8_t v_when_boxed_2528_; lean_object* v_res_2529_; 
v_when_boxed_2528_ = lean_unbox(v_when_2521_);
v_res_2529_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2520_, v_when_boxed_2528_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec_ref(v___y_2522_);
return v_res_2529_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(lean_object* v_params_2530_, lean_object* v___x_2531_, lean_object* v_head_2532_, lean_object* v_compFields_2533_, lean_object* v_lparams_2534_, lean_object* v_levelParams_2535_, lean_object* v___x_2536_, lean_object* v_fields_2537_, lean_object* v_retTy_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___f_2547_; uint8_t v___x_2548_; lean_object* v___x_2549_; 
lean_inc_ref(v_params_2530_);
v___x_2545_ = l_Array_append___redArg(v_params_2530_, v_fields_2537_);
lean_inc_ref(v___x_2531_);
v___x_2546_ = l_Lean_mkAppN(v___x_2531_, v___x_2545_);
lean_inc(v_head_2532_);
v___f_2547_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2547_, 0, v_head_2532_);
lean_closure_set(v___f_2547_, 1, v_compFields_2533_);
lean_closure_set(v___f_2547_, 2, v___x_2546_);
v___x_2548_ = 1;
v___x_2549_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___f_2547_, v___x_2548_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2551_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
lean_inc(v_a_2550_);
lean_dec_ref_known(v___x_2549_, 1);
lean_inc(v___y_2543_);
lean_inc_ref(v___y_2542_);
lean_inc(v___y_2541_);
lean_inc_ref(v___y_2540_);
v___x_2551_ = lean_infer_type(v___x_2531_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2551_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v_a_2552_ = lean_ctor_get(v___x_2551_, 0);
lean_inc(v_a_2552_);
lean_dec_ref_known(v___x_2551_, 1);
v___x_2553_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_head_2532_);
v___x_2554_ = l_Lean_Name_append(v_head_2532_, v___x_2553_);
v___x_2555_ = l_Lean_mkConst(v___x_2554_, v_lparams_2534_);
v___x_2556_ = l_Array_append___redArg(v_params_2530_, v_a_2550_);
lean_dec(v_a_2550_);
v___x_2557_ = l_Array_append___redArg(v___x_2556_, v_fields_2537_);
v___x_2558_ = l_Lean_mkAppN(v___x_2555_, v___x_2557_);
lean_dec_ref(v___x_2557_);
v___x_2559_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_retTy_2538_, v___x_2558_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; uint8_t v___x_2561_; uint8_t v___x_2562_; lean_object* v___x_2563_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref_known(v___x_2559_, 1);
v___x_2561_ = 0;
v___x_2562_ = 1;
v___x_2563_ = l_Lean_Meta_mkLambdaFVars(v___x_2545_, v_a_2560_, v___x_2561_, v___x_2548_, v___x_2561_, v___x_2548_, v___x_2562_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
lean_dec_ref(v___x_2545_);
if (lean_obj_tag(v___x_2563_) == 0)
{
lean_object* v_a_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; uint8_t v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v_a_2564_ = lean_ctor_get(v___x_2563_, 0);
lean_inc(v_a_2564_);
lean_dec_ref_known(v___x_2563_, 1);
v___x_2565_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_2532_);
v___x_2566_ = l_Lean_Name_append(v_head_2532_, v___x_2565_);
lean_inc_n(v___x_2566_, 2);
v___x_2567_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2566_);
lean_ctor_set(v___x_2567_, 1, v_levelParams_2535_);
lean_ctor_set(v___x_2567_, 2, v_a_2552_);
v___x_2568_ = lean_box(0);
v___x_2569_ = 0;
v___x_2570_ = lean_box(0);
v___x_2571_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2566_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2572_, 0, v___x_2567_);
lean_ctor_set(v___x_2572_, 1, v_a_2564_);
lean_ctor_set(v___x_2572_, 2, v___x_2568_);
lean_ctor_set(v___x_2572_, 3, v___x_2571_);
lean_ctor_set_uint8(v___x_2572_, sizeof(void*)*4, v___x_2569_);
v___x_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2572_);
v___x_2574_ = l_Lean_addDecl(v___x_2573_, v___x_2561_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v___x_2575_; 
lean_dec_ref_known(v___x_2574_, 1);
lean_inc(v___x_2566_);
lean_inc(v_head_2532_);
v___x_2575_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_head_2532_, v___x_2566_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v___x_2576_; 
lean_dec_ref_known(v___x_2575_, 1);
v___x_2576_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2532_, v___y_2542_, v___y_2543_);
if (lean_obj_tag(v___x_2576_) == 0)
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2587_; 
v_a_2577_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2579_ = v___x_2576_;
v_isShared_2580_ = v_isSharedCheck_2587_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2576_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2587_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
uint8_t v___x_2581_; 
v___x_2581_ = lean_unbox(v_a_2577_);
lean_dec(v_a_2577_);
if (v___x_2581_ == 0)
{
lean_object* v___x_2583_; 
lean_dec(v___x_2566_);
if (v_isShared_2580_ == 0)
{
lean_ctor_set(v___x_2579_, 0, v___x_2536_);
v___x_2583_ = v___x_2579_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2536_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
else
{
uint8_t v___x_2585_; lean_object* v___x_2586_; 
lean_del_object(v___x_2579_);
v___x_2585_ = 0;
v___x_2586_ = l_Lean_Meta_setInlineAttribute(v___x_2566_, v___x_2585_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
return v___x_2586_;
}
}
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2595_; 
lean_dec(v___x_2566_);
v_a_2588_ = lean_ctor_get(v___x_2576_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2576_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2590_ = v___x_2576_;
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2576_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2595_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2593_; 
if (v_isShared_2591_ == 0)
{
v___x_2593_ = v___x_2590_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v_a_2588_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
else
{
lean_dec(v___x_2566_);
lean_dec(v_head_2532_);
return v___x_2575_;
}
}
else
{
lean_dec(v___x_2566_);
lean_dec(v_head_2532_);
return v___x_2574_;
}
}
else
{
lean_object* v_a_2596_; lean_object* v___x_2598_; uint8_t v_isShared_2599_; uint8_t v_isSharedCheck_2603_; 
lean_dec(v_a_2552_);
lean_dec(v_levelParams_2535_);
lean_dec(v_head_2532_);
v_a_2596_ = lean_ctor_get(v___x_2563_, 0);
v_isSharedCheck_2603_ = !lean_is_exclusive(v___x_2563_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2598_ = v___x_2563_;
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
else
{
lean_inc(v_a_2596_);
lean_dec(v___x_2563_);
v___x_2598_ = lean_box(0);
v_isShared_2599_ = v_isSharedCheck_2603_;
goto v_resetjp_2597_;
}
v_resetjp_2597_:
{
lean_object* v___x_2601_; 
if (v_isShared_2599_ == 0)
{
v___x_2601_ = v___x_2598_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_a_2596_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
}
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
lean_dec(v_a_2552_);
lean_dec_ref(v___x_2545_);
lean_dec(v_levelParams_2535_);
lean_dec(v_head_2532_);
v_a_2604_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2559_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2559_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2604_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
lean_dec(v_a_2550_);
lean_dec_ref(v___x_2545_);
lean_dec_ref(v_retTy_2538_);
lean_dec(v_levelParams_2535_);
lean_dec(v_lparams_2534_);
lean_dec(v_head_2532_);
lean_dec_ref(v_params_2530_);
v_a_2612_ = lean_ctor_get(v___x_2551_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2551_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2614_ = v___x_2551_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2551_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2612_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
lean_dec_ref(v___x_2545_);
lean_dec_ref(v_retTy_2538_);
lean_dec(v_levelParams_2535_);
lean_dec(v_lparams_2534_);
lean_dec(v_head_2532_);
lean_dec_ref(v___x_2531_);
lean_dec_ref(v_params_2530_);
v_a_2620_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2549_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2549_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed(lean_object* v_params_2628_, lean_object* v___x_2629_, lean_object* v_head_2630_, lean_object* v_compFields_2631_, lean_object* v_lparams_2632_, lean_object* v_levelParams_2633_, lean_object* v___x_2634_, lean_object* v_fields_2635_, lean_object* v_retTy_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(v_params_2628_, v___x_2629_, v_head_2630_, v_compFields_2631_, v_lparams_2632_, v_levelParams_2633_, v___x_2634_, v_fields_2635_, v_retTy_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec(v___y_2639_);
lean_dec_ref(v___y_2638_);
lean_dec_ref(v___y_2637_);
lean_dec_ref(v_fields_2635_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(lean_object* v_lparams_2644_, lean_object* v_params_2645_, lean_object* v_compFields_2646_, lean_object* v_levelParams_2647_, lean_object* v_as_x27_2648_, lean_object* v_b_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
if (lean_obj_tag(v_as_x27_2648_) == 0)
{
lean_object* v___x_2656_; 
lean_dec(v_levelParams_2647_);
lean_dec_ref(v_compFields_2646_);
lean_dec_ref(v_params_2645_);
lean_dec(v_lparams_2644_);
v___x_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2656_, 0, v_b_2649_);
return v___x_2656_;
}
else
{
lean_object* v_head_2657_; lean_object* v_tail_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___f_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v_head_2657_ = lean_ctor_get(v_as_x27_2648_, 0);
v_tail_2658_ = lean_ctor_get(v_as_x27_2648_, 1);
v___x_2659_ = lean_box(0);
lean_inc_n(v_lparams_2644_, 2);
lean_inc_n(v_head_2657_, 2);
v___x_2660_ = l_Lean_mkConst(v_head_2657_, v_lparams_2644_);
lean_inc(v_levelParams_2647_);
lean_inc_ref(v_compFields_2646_);
lean_inc_ref(v___x_2660_);
lean_inc_ref(v_params_2645_);
v___f_2661_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed), 15, 7);
lean_closure_set(v___f_2661_, 0, v_params_2645_);
lean_closure_set(v___f_2661_, 1, v___x_2660_);
lean_closure_set(v___f_2661_, 2, v_head_2657_);
lean_closure_set(v___f_2661_, 3, v_compFields_2646_);
lean_closure_set(v___f_2661_, 4, v_lparams_2644_);
lean_closure_set(v___f_2661_, 5, v_levelParams_2647_);
lean_closure_set(v___f_2661_, 6, v___x_2659_);
v___x_2662_ = l_Lean_mkAppN(v___x_2660_, v_params_2645_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc(v___y_2652_);
lean_inc_ref(v___y_2651_);
v___x_2663_ = lean_infer_type(v___x_2662_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; uint8_t v___x_2665_; lean_object* v___x_2666_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v___x_2665_ = 0;
v___x_2666_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2664_, v___f_2661_, v___x_2665_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_dec_ref_known(v___x_2666_, 1);
v_as_x27_2648_ = v_tail_2658_;
v_b_2649_ = v___x_2659_;
goto _start;
}
else
{
lean_dec(v_levelParams_2647_);
lean_dec_ref(v_compFields_2646_);
lean_dec_ref(v_params_2645_);
lean_dec(v_lparams_2644_);
return v___x_2666_;
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_dec_ref(v___f_2661_);
lean_dec(v_levelParams_2647_);
lean_dec_ref(v_compFields_2646_);
lean_dec_ref(v_params_2645_);
lean_dec(v_lparams_2644_);
v_a_2668_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2663_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2663_);
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
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___boxed(lean_object* v_lparams_2676_, lean_object* v_params_2677_, lean_object* v_compFields_2678_, lean_object* v_levelParams_2679_, lean_object* v_as_x27_2680_, lean_object* v_b_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2676_, v_params_2677_, v_compFields_2678_, v_levelParams_2679_, v_as_x27_2680_, v_b_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v_as_x27_2680_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors(lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_toInductiveVal_2695_; lean_object* v_toConstantVal_2696_; lean_object* v_lparams_2697_; lean_object* v_params_2698_; lean_object* v_compFields_2699_; lean_object* v_ctors_2700_; lean_object* v_levelParams_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v_toInductiveVal_2695_ = lean_ctor_get(v___y_2689_, 0);
v_toConstantVal_2696_ = lean_ctor_get(v_toInductiveVal_2695_, 0);
v_lparams_2697_ = lean_ctor_get(v___y_2689_, 1);
v_params_2698_ = lean_ctor_get(v___y_2689_, 2);
v_compFields_2699_ = lean_ctor_get(v___y_2689_, 3);
v_ctors_2700_ = lean_ctor_get(v_toInductiveVal_2695_, 4);
v_levelParams_2701_ = lean_ctor_get(v_toConstantVal_2696_, 1);
v___x_2702_ = lean_box(0);
lean_inc(v_levelParams_2701_);
lean_inc_ref(v_compFields_2699_);
lean_inc_ref(v_params_2698_);
lean_inc(v_lparams_2697_);
v___x_2703_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2697_, v_params_2698_, v_compFields_2699_, v_levelParams_2701_, v_ctors_2700_, v___x_2702_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2710_ == 0)
{
lean_object* v_unused_2711_; 
v_unused_2711_ = lean_ctor_get(v___x_2703_, 0);
lean_dec(v_unused_2711_);
v___x_2705_ = v___x_2703_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_dec(v___x_2703_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 0, v___x_2702_);
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2702_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
else
{
return v___x_2703_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors___boxed(lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_){
_start:
{
lean_object* v_res_2718_; 
v_res_2718_ = l_Lean_Elab_ComputedFields_overrideConstructors(v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec_ref(v___y_2712_);
return v_res_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(lean_object* v___x_2719_, size_t v_sz_2720_, size_t v_i_2721_, lean_object* v_bs_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v___x_2729_; 
v___x_2729_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2719_, v_sz_2720_, v_i_2721_, v_bs_2722_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___boxed(lean_object* v___x_2730_, lean_object* v_sz_2731_, lean_object* v_i_2732_, lean_object* v_bs_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
size_t v_sz_boxed_2740_; size_t v_i_boxed_2741_; lean_object* v_res_2742_; 
v_sz_boxed_2740_ = lean_unbox_usize(v_sz_2731_);
lean_dec(v_sz_2731_);
v_i_boxed_2741_ = lean_unbox_usize(v_i_2732_);
lean_dec(v_i_2732_);
v_res_2742_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(v___x_2730_, v_sz_boxed_2740_, v_i_boxed_2741_, v_bs_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v___y_2736_);
lean_dec_ref(v___y_2735_);
lean_dec_ref(v___y_2734_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(lean_object* v_00_u03b1_2743_, lean_object* v_x_2744_, uint8_t v_isExporting_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2744_, v_isExporting_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2753_, lean_object* v_x_2754_, lean_object* v_isExporting_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
uint8_t v_isExporting_boxed_2762_; lean_object* v_res_2763_; 
v_isExporting_boxed_2762_ = lean_unbox(v_isExporting_2755_);
v_res_2763_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(v_00_u03b1_2753_, v_x_2754_, v_isExporting_boxed_2762_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec_ref(v___y_2756_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(lean_object* v_00_u03b1_2764_, lean_object* v_x_2765_, uint8_t v_when_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2765_, v_when_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___boxed(lean_object* v_00_u03b1_2774_, lean_object* v_x_2775_, lean_object* v_when_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_){
_start:
{
uint8_t v_when_boxed_2783_; lean_object* v_res_2784_; 
v_when_boxed_2783_ = lean_unbox(v_when_2776_);
v_res_2784_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(v_00_u03b1_2774_, v_x_2775_, v_when_boxed_2783_, v___y_2777_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_);
lean_dec(v___y_2781_);
lean_dec_ref(v___y_2780_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec_ref(v___y_2777_);
return v_res_2784_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(lean_object* v_lparams_2785_, lean_object* v_params_2786_, lean_object* v_compFields_2787_, lean_object* v_levelParams_2788_, lean_object* v_as_2789_, lean_object* v_as_x27_2790_, lean_object* v_b_2791_, lean_object* v_a_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v___x_2799_; 
v___x_2799_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2785_, v_params_2786_, v_compFields_2787_, v_levelParams_2788_, v_as_x27_2790_, v_b_2791_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___boxed(lean_object* v_lparams_2800_, lean_object* v_params_2801_, lean_object* v_compFields_2802_, lean_object* v_levelParams_2803_, lean_object* v_as_2804_, lean_object* v_as_x27_2805_, lean_object* v_b_2806_, lean_object* v_a_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
lean_object* v_res_2814_; 
v_res_2814_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(v_lparams_2800_, v_params_2801_, v_compFields_2802_, v_levelParams_2803_, v_as_2804_, v_as_x27_2805_, v_b_2806_, v_a_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v_as_x27_2805_);
lean_dec(v_as_2804_);
return v_res_2814_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(lean_object* v_v_2815_, lean_object* v_compFieldVars_2816_, lean_object* v___x_2817_, uint8_t v___x_2818_, lean_object* v_params_2819_, lean_object* v___x_2820_, lean_object* v_a_2821_, uint8_t v___x_2822_, lean_object* v_fields_2823_, lean_object* v_x_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_){
_start:
{
lean_object* v___x_2831_; 
v___x_2831_ = l_Lean_Elab_ComputedFields_isScalarField(v_v_2815_, v___y_2828_, v___y_2829_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; uint8_t v___x_2833_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref_known(v___x_2831_, 1);
v___x_2833_ = lean_unbox(v_a_2832_);
if (v___x_2833_ == 0)
{
lean_object* v___x_2834_; uint8_t v___x_2835_; uint8_t v___x_2836_; uint8_t v___x_2837_; lean_object* v___x_2838_; 
lean_dec(v_a_2821_);
lean_dec_ref(v___x_2820_);
lean_dec_ref(v_params_2819_);
v___x_2834_ = l_Array_append___redArg(v_compFieldVars_2816_, v_fields_2823_);
v___x_2835_ = 1;
v___x_2836_ = lean_unbox(v_a_2832_);
v___x_2837_ = lean_unbox(v_a_2832_);
lean_dec(v_a_2832_);
v___x_2838_ = l_Lean_Meta_mkLambdaFVars(v___x_2834_, v___x_2817_, v___x_2836_, v___x_2818_, v___x_2837_, v___x_2818_, v___x_2835_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_);
lean_dec_ref(v___x_2834_);
return v___x_2838_;
}
else
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
lean_dec(v_a_2832_);
lean_dec_ref(v___x_2817_);
lean_dec_ref(v_compFieldVars_2816_);
v___x_2839_ = l_Array_append___redArg(v_params_2819_, v_fields_2823_);
v___x_2840_ = l_Lean_mkAppN(v___x_2820_, v___x_2839_);
lean_dec_ref(v___x_2839_);
v___x_2841_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_a_2821_, v___x_2840_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; uint8_t v___x_2843_; lean_object* v___x_2844_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref_known(v___x_2841_, 1);
v___x_2843_ = 1;
v___x_2844_ = l_Lean_Meta_mkLambdaFVars(v_fields_2823_, v_a_2842_, v___x_2822_, v___x_2818_, v___x_2822_, v___x_2818_, v___x_2843_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_);
return v___x_2844_;
}
else
{
return v___x_2841_;
}
}
}
else
{
lean_object* v_a_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2852_; 
lean_dec(v_a_2821_);
lean_dec_ref(v___x_2820_);
lean_dec_ref(v_params_2819_);
lean_dec_ref(v___x_2817_);
lean_dec_ref(v_compFieldVars_2816_);
v_a_2845_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2847_ = v___x_2831_;
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_a_2845_);
lean_dec(v___x_2831_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2852_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v___x_2850_; 
if (v_isShared_2848_ == 0)
{
v___x_2850_ = v___x_2847_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_a_2845_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed(lean_object* v_v_2853_, lean_object* v_compFieldVars_2854_, lean_object* v___x_2855_, lean_object* v___x_2856_, lean_object* v_params_2857_, lean_object* v___x_2858_, lean_object* v_a_2859_, lean_object* v___x_2860_, lean_object* v_fields_2861_, lean_object* v_x_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
uint8_t v___x_12710__boxed_2869_; uint8_t v___x_12713__boxed_2870_; lean_object* v_res_2871_; 
v___x_12710__boxed_2869_ = lean_unbox(v___x_2856_);
v___x_12713__boxed_2870_ = lean_unbox(v___x_2860_);
v_res_2871_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(v_v_2853_, v_compFieldVars_2854_, v___x_2855_, v___x_12710__boxed_2869_, v_params_2857_, v___x_2858_, v_a_2859_, v___x_12713__boxed_2870_, v_fields_2861_, v_x_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec_ref(v___y_2863_);
lean_dec_ref(v_x_2862_);
lean_dec_ref(v_fields_2861_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(lean_object* v_lparams_2872_, lean_object* v_compFieldVars_2873_, lean_object* v___x_2874_, lean_object* v___x_2875_, lean_object* v___x_2876_, lean_object* v_params_2877_, lean_object* v_a_2878_, uint8_t v___x_2879_, size_t v_sz_2880_, size_t v_i_2881_, lean_object* v_bs_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
uint8_t v___x_2889_; 
v___x_2889_ = lean_usize_dec_lt(v_i_2881_, v_sz_2880_);
if (v___x_2889_ == 0)
{
lean_object* v___x_2890_; 
lean_dec(v_a_2878_);
lean_dec_ref(v_params_2877_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v_compFieldVars_2873_);
lean_dec(v_lparams_2872_);
v___x_2890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2890_, 0, v_bs_2882_);
return v___x_2890_;
}
else
{
uint8_t v___x_2891_; lean_object* v_v_2892_; lean_object* v___x_2893_; lean_object* v_bs_x27_2894_; lean_object* v___y_2896_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___f_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2891_ = lean_nat_dec_lt(v___x_2875_, v___x_2876_);
v_v_2892_ = lean_array_uget(v_bs_2882_, v_i_2881_);
v___x_2893_ = lean_unsigned_to_nat(0u);
v_bs_x27_2894_ = lean_array_uset(v_bs_2882_, v_i_2881_, v___x_2893_);
lean_inc(v_lparams_2872_);
lean_inc(v_v_2892_);
v___x_2910_ = l_Lean_mkConst(v_v_2892_, v_lparams_2872_);
v___x_2911_ = lean_box(v___x_2891_);
v___x_2912_ = lean_box(v___x_2879_);
lean_inc(v_a_2878_);
lean_inc_ref(v___x_2910_);
lean_inc_ref(v_params_2877_);
lean_inc_ref(v___x_2874_);
lean_inc_ref(v_compFieldVars_2873_);
v___f_2913_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed), 16, 8);
lean_closure_set(v___f_2913_, 0, v_v_2892_);
lean_closure_set(v___f_2913_, 1, v_compFieldVars_2873_);
lean_closure_set(v___f_2913_, 2, v___x_2874_);
lean_closure_set(v___f_2913_, 3, v___x_2911_);
lean_closure_set(v___f_2913_, 4, v_params_2877_);
lean_closure_set(v___f_2913_, 5, v___x_2910_);
lean_closure_set(v___f_2913_, 6, v_a_2878_);
lean_closure_set(v___f_2913_, 7, v___x_2912_);
v___x_2914_ = l_Lean_mkAppN(v___x_2910_, v_params_2877_);
lean_inc(v___y_2887_);
lean_inc_ref(v___y_2886_);
lean_inc(v___y_2885_);
lean_inc_ref(v___y_2884_);
v___x_2915_ = lean_infer_type(v___x_2914_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_a_2916_; lean_object* v___x_2917_; 
v_a_2916_ = lean_ctor_get(v___x_2915_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v___x_2915_, 1);
v___x_2917_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2916_, v___f_2913_, v___x_2879_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
v___y_2896_ = v___x_2917_;
goto v___jp_2895_;
}
else
{
lean_dec_ref(v___f_2913_);
v___y_2896_ = v___x_2915_;
goto v___jp_2895_;
}
v___jp_2895_:
{
if (lean_obj_tag(v___y_2896_) == 0)
{
lean_object* v_a_2897_; size_t v___x_2898_; size_t v___x_2899_; lean_object* v___x_2900_; 
v_a_2897_ = lean_ctor_get(v___y_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref_known(v___y_2896_, 1);
v___x_2898_ = ((size_t)1ULL);
v___x_2899_ = lean_usize_add(v_i_2881_, v___x_2898_);
v___x_2900_ = lean_array_uset(v_bs_x27_2894_, v_i_2881_, v_a_2897_);
v_i_2881_ = v___x_2899_;
v_bs_2882_ = v___x_2900_;
goto _start;
}
else
{
lean_object* v_a_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2909_; 
lean_dec_ref(v_bs_x27_2894_);
lean_dec(v_a_2878_);
lean_dec_ref(v_params_2877_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v_compFieldVars_2873_);
lean_dec(v_lparams_2872_);
v_a_2902_ = lean_ctor_get(v___y_2896_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___y_2896_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2904_ = v___y_2896_;
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_a_2902_);
lean_dec(v___y_2896_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_a_2902_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed(lean_object** _args){
lean_object* v_lparams_2918_ = _args[0];
lean_object* v_compFieldVars_2919_ = _args[1];
lean_object* v___x_2920_ = _args[2];
lean_object* v___x_2921_ = _args[3];
lean_object* v___x_2922_ = _args[4];
lean_object* v_params_2923_ = _args[5];
lean_object* v_a_2924_ = _args[6];
lean_object* v___x_2925_ = _args[7];
lean_object* v_sz_2926_ = _args[8];
lean_object* v_i_2927_ = _args[9];
lean_object* v_bs_2928_ = _args[10];
lean_object* v___y_2929_ = _args[11];
lean_object* v___y_2930_ = _args[12];
lean_object* v___y_2931_ = _args[13];
lean_object* v___y_2932_ = _args[14];
lean_object* v___y_2933_ = _args[15];
lean_object* v___y_2934_ = _args[16];
_start:
{
uint8_t v___x_12798__boxed_2935_; size_t v_sz_boxed_2936_; size_t v_i_boxed_2937_; lean_object* v_res_2938_; 
v___x_12798__boxed_2935_ = lean_unbox(v___x_2925_);
v_sz_boxed_2936_ = lean_unbox_usize(v_sz_2926_);
lean_dec(v_sz_2926_);
v_i_boxed_2937_ = lean_unbox_usize(v_i_2927_);
lean_dec(v_i_2927_);
v_res_2938_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(v_lparams_2918_, v_compFieldVars_2919_, v___x_2920_, v___x_2921_, v___x_2922_, v_params_2923_, v_a_2924_, v___x_12798__boxed_2935_, v_sz_boxed_2936_, v_i_boxed_2937_, v_bs_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
lean_dec(v___y_2931_);
lean_dec_ref(v___y_2930_);
lean_dec_ref(v___y_2929_);
lean_dec(v___x_2922_);
lean_dec(v___x_2921_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(size_t v_sz_2939_, size_t v_i_2940_, lean_object* v_bs_2941_){
_start:
{
uint8_t v___x_2942_; 
v___x_2942_ = lean_usize_dec_lt(v_i_2940_, v_sz_2939_);
if (v___x_2942_ == 0)
{
return v_bs_2941_;
}
else
{
lean_object* v_v_2943_; lean_object* v___x_2944_; lean_object* v_bs_x27_2945_; lean_object* v___x_2946_; size_t v___x_2947_; size_t v___x_2948_; lean_object* v___x_2949_; 
v_v_2943_ = lean_array_uget(v_bs_2941_, v_i_2940_);
v___x_2944_ = lean_unsigned_to_nat(0u);
v_bs_x27_2945_ = lean_array_uset(v_bs_2941_, v_i_2940_, v___x_2944_);
v___x_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2946_, 0, v_v_2943_);
v___x_2947_ = ((size_t)1ULL);
v___x_2948_ = lean_usize_add(v_i_2940_, v___x_2947_);
v___x_2949_ = lean_array_uset(v_bs_x27_2945_, v_i_2940_, v___x_2946_);
v_i_2940_ = v___x_2948_;
v_bs_2941_ = v___x_2949_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1___boxed(lean_object* v_sz_2951_, lean_object* v_i_2952_, lean_object* v_bs_2953_){
_start:
{
size_t v_sz_boxed_2954_; size_t v_i_boxed_2955_; lean_object* v_res_2956_; 
v_sz_boxed_2954_ = lean_unbox_usize(v_sz_2951_);
lean_dec(v_sz_2951_);
v_i_boxed_2955_ = lean_unbox_usize(v_i_2952_);
lean_dec(v_i_2952_);
v_res_2956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_boxed_2954_, v_i_boxed_2955_, v_bs_2953_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(lean_object* v_ctors_2959_, lean_object* v_lparams_2960_, lean_object* v_compFieldVars_2961_, lean_object* v_params_2962_, lean_object* v_val_2963_, lean_object* v___x_2964_, lean_object* v_indices_2965_, lean_object* v_xImpl_2966_, lean_object* v___x_2967_, lean_object* v_levelParams_2968_, lean_object* v_as_2969_, size_t v_sz_2970_, size_t v_i_2971_, lean_object* v_b_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v_a_2980_; uint8_t v___x_2984_; 
v___x_2984_ = lean_usize_dec_lt(v_i_2971_, v_sz_2970_);
if (v___x_2984_ == 0)
{
lean_object* v___x_2985_; 
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v___x_2985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2985_, 0, v_b_2972_);
return v___x_2985_;
}
else
{
lean_object* v_array_2986_; lean_object* v_start_2987_; lean_object* v_stop_2988_; uint8_t v___x_2989_; 
v_array_2986_ = lean_ctor_get(v_b_2972_, 0);
v_start_2987_ = lean_ctor_get(v_b_2972_, 1);
v_stop_2988_ = lean_ctor_get(v_b_2972_, 2);
v___x_2989_ = lean_nat_dec_lt(v_start_2987_, v_stop_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; 
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v_b_2972_);
return v___x_2990_;
}
else
{
lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3173_; 
lean_inc(v_stop_2988_);
lean_inc(v_start_2987_);
lean_inc_ref(v_array_2986_);
v_isSharedCheck_3173_ = !lean_is_exclusive(v_b_2972_);
if (v_isSharedCheck_3173_ == 0)
{
lean_object* v_unused_3174_; lean_object* v_unused_3175_; lean_object* v_unused_3176_; 
v_unused_3174_ = lean_ctor_get(v_b_2972_, 2);
lean_dec(v_unused_3174_);
v_unused_3175_ = lean_ctor_get(v_b_2972_, 1);
lean_dec(v_unused_3175_);
v_unused_3176_ = lean_ctor_get(v_b_2972_, 0);
lean_dec(v_unused_3176_);
v___x_2992_ = v_b_2972_;
v_isShared_2993_ = v_isSharedCheck_3173_;
goto v_resetjp_2991_;
}
else
{
lean_dec(v_b_2972_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3173_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v_a_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2999_; 
v_a_2994_ = lean_array_uget_borrowed(v_as_2969_, v_i_2971_);
v___x_2995_ = lean_array_fget(v_array_2986_, v_start_2987_);
v___x_2996_ = lean_unsigned_to_nat(1u);
v___x_2997_ = lean_nat_add(v_start_2987_, v___x_2996_);
lean_inc(v_stop_2988_);
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 1, v___x_2997_);
v___x_2999_ = v___x_2992_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_array_2986_);
lean_ctor_set(v_reuseFailAlloc_3172_, 1, v___x_2997_);
lean_ctor_set(v_reuseFailAlloc_3172_, 2, v_stop_2988_);
v___x_2999_ = v_reuseFailAlloc_3172_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
lean_object* v___x_3000_; lean_object* v_env_3001_; uint8_t v___x_3002_; 
v___x_3000_ = lean_st_ref_get(v___y_2977_);
v_env_3001_ = lean_ctor_get(v___x_3000_, 0);
lean_inc_ref(v_env_3001_);
lean_dec(v___x_3000_);
lean_inc(v_a_2994_);
v___x_3002_ = l_Lean_isExtern(v_env_3001_, v_a_2994_);
if (v___x_3002_ == 0)
{
lean_object* v___x_3003_; size_t v_sz_3004_; size_t v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; 
lean_inc(v_ctors_2959_);
v___x_3003_ = lean_array_mk(v_ctors_2959_);
v_sz_3004_ = lean_array_size(v___x_3003_);
v___x_3005_ = ((size_t)0ULL);
v___x_3006_ = lean_box(v___x_3002_);
v___x_3007_ = lean_box_usize(v_sz_3004_);
v___x_3008_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1));
lean_inc(v_a_2994_);
lean_inc_ref(v_params_2962_);
lean_inc(v___x_2995_);
lean_inc_ref(v_compFieldVars_2961_);
lean_inc(v_lparams_2960_);
v___x_3009_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_3009_, 0, v_lparams_2960_);
lean_closure_set(v___x_3009_, 1, v_compFieldVars_2961_);
lean_closure_set(v___x_3009_, 2, v___x_2995_);
lean_closure_set(v___x_3009_, 3, v_start_2987_);
lean_closure_set(v___x_3009_, 4, v_stop_2988_);
lean_closure_set(v___x_3009_, 5, v_params_2962_);
lean_closure_set(v___x_3009_, 6, v_a_2994_);
lean_closure_set(v___x_3009_, 7, v___x_3006_);
lean_closure_set(v___x_3009_, 8, v___x_3007_);
lean_closure_set(v___x_3009_, 9, v___x_3008_);
lean_closure_set(v___x_3009_, 10, v___x_3003_);
v___x_3010_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_3009_, v___x_2989_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3010_) == 0)
{
lean_object* v_a_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3019_; lean_object* v___x_3029_; 
v_a_3011_ = lean_ctor_get(v___x_3010_, 0);
lean_inc(v_a_3011_);
lean_dec_ref_known(v___x_3010_, 1);
v___x_3012_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_2994_);
v___x_3013_ = l_Lean_Name_append(v_a_2994_, v___x_3012_);
lean_inc(v___y_2977_);
lean_inc_ref(v___y_2976_);
lean_inc(v___y_2975_);
lean_inc_ref(v___y_2974_);
lean_inc(v___x_2995_);
v___x_3029_ = lean_infer_type(v___x_2995_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; uint8_t v___x_3034_; lean_object* v___x_3035_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
lean_inc(v_a_3030_);
lean_dec_ref_known(v___x_3029_, 1);
v___x_3031_ = lean_mk_empty_array_with_capacity(v___x_2996_);
lean_inc_ref(v_val_2963_);
lean_inc_ref(v___x_3031_);
v___x_3032_ = lean_array_push(v___x_3031_, v_val_2963_);
lean_inc_ref(v___x_2964_);
v___x_3033_ = l_Array_append___redArg(v___x_2964_, v___x_3032_);
lean_dec_ref(v___x_3032_);
v___x_3034_ = 1;
v___x_3035_ = l_Lean_Meta_mkForallFVars(v___x_3033_, v_a_3030_, v___x_3002_, v___x_2989_, v___x_2989_, v___x_3034_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3035_) == 0)
{
lean_object* v_a_3036_; lean_object* v___x_3037_; 
v_a_3036_ = lean_ctor_get(v___x_3035_, 0);
lean_inc(v_a_3036_);
lean_dec_ref_known(v___x_3035_, 1);
lean_inc(v___y_2977_);
lean_inc_ref(v___y_2976_);
lean_inc(v___y_2975_);
lean_inc_ref(v___y_2974_);
v___x_3037_ = lean_infer_type(v___x_2995_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_object* v_a_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; 
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
lean_inc(v_a_3038_);
lean_dec_ref_known(v___x_3037_, 1);
lean_inc_ref(v_xImpl_2966_);
lean_inc_ref(v_indices_2965_);
v___x_3039_ = lean_array_push(v_indices_2965_, v_xImpl_2966_);
v___x_3040_ = l_Lean_Meta_mkLambdaFVars(v___x_3039_, v_a_3038_, v___x_3002_, v___x_2989_, v___x_3002_, v___x_2989_, v___x_3034_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
lean_dec_ref(v___x_3039_);
if (lean_obj_tag(v___x_3040_) == 0)
{
lean_object* v_a_3041_; lean_object* v___x_3042_; 
v_a_3041_ = lean_ctor_get(v___x_3040_, 0);
lean_inc(v_a_3041_);
lean_dec_ref_known(v___x_3040_, 1);
lean_inc(v___y_2977_);
lean_inc_ref(v___y_2976_);
lean_inc(v___y_2975_);
lean_inc_ref(v___y_2974_);
lean_inc_ref(v_xImpl_2966_);
v___x_3042_ = lean_infer_type(v_xImpl_2966_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3042_) == 0)
{
lean_object* v_a_3043_; lean_object* v___x_3044_; 
v_a_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc(v_a_3043_);
lean_dec_ref_known(v___x_3042_, 1);
lean_inc_ref(v_val_2963_);
v___x_3044_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3043_, v_val_2963_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3044_) == 0)
{
lean_object* v_a_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; size_t v_sz_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; 
v_a_3045_ = lean_ctor_get(v___x_3044_, 0);
lean_inc(v_a_3045_);
lean_dec_ref_known(v___x_3044_, 1);
lean_inc(v___x_2967_);
v___x_3046_ = l_Lean_mkCasesOnName(v___x_2967_);
lean_inc_ref(v___x_3031_);
v___x_3047_ = lean_array_push(v___x_3031_, v_a_3041_);
lean_inc_ref(v_params_2962_);
v___x_3048_ = l_Array_append___redArg(v_params_2962_, v___x_3047_);
lean_dec_ref(v___x_3047_);
v___x_3049_ = l_Array_append___redArg(v___x_3048_, v_indices_2965_);
v___x_3050_ = lean_array_push(v___x_3031_, v_a_3045_);
v___x_3051_ = l_Array_append___redArg(v___x_3049_, v___x_3050_);
lean_dec_ref(v___x_3050_);
v___x_3052_ = l_Array_append___redArg(v___x_3051_, v_a_3011_);
lean_dec(v_a_3011_);
v_sz_3053_ = lean_array_size(v___x_3052_);
v___x_3054_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3053_, v___x_3005_, v___x_3052_);
v___x_3055_ = l_Lean_Meta_mkAppOptM(v___x_3046_, v___x_3054_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_object* v_a_3056_; lean_object* v___x_3057_; 
v_a_3056_ = lean_ctor_get(v___x_3055_, 0);
lean_inc(v_a_3056_);
lean_dec_ref_known(v___x_3055_, 1);
v___x_3057_ = l_Lean_Meta_mkLambdaFVars(v___x_3033_, v_a_3056_, v___x_3002_, v___x_2989_, v___x_3002_, v___x_2989_, v___x_3034_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
lean_dec_ref(v___x_3033_);
if (lean_obj_tag(v___x_3057_) == 0)
{
lean_object* v_a_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; uint8_t v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v_a_3058_ = lean_ctor_get(v___x_3057_, 0);
lean_inc(v_a_3058_);
lean_dec_ref_known(v___x_3057_, 1);
lean_inc(v_levelParams_2968_);
lean_inc_n(v___x_3013_, 2);
v___x_3059_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3013_);
lean_ctor_set(v___x_3059_, 1, v_levelParams_2968_);
lean_ctor_set(v___x_3059_, 2, v_a_3036_);
v___x_3060_ = lean_box(0);
v___x_3061_ = 0;
v___x_3062_ = lean_box(0);
v___x_3063_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3013_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
v___x_3064_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3064_, 0, v___x_3059_);
lean_ctor_set(v___x_3064_, 1, v_a_3058_);
lean_ctor_set(v___x_3064_, 2, v___x_3060_);
lean_ctor_set(v___x_3064_, 3, v___x_3063_);
lean_ctor_set_uint8(v___x_3064_, sizeof(void*)*4, v___x_3061_);
v___x_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3065_, 0, v___x_3064_);
v___x_3066_ = l_Lean_addDecl(v___x_3065_, v___x_3002_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v___x_3067_; lean_object* v_env_3068_; lean_object* v___x_3069_; 
lean_dec_ref_known(v___x_3066_, 1);
v___x_3067_ = lean_st_ref_get(v___y_2977_);
v_env_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc_ref(v_env_3068_);
lean_dec(v___x_3067_);
lean_inc(v_a_2994_);
v___x_3069_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3068_, v_a_2994_);
if (lean_obj_tag(v___x_3069_) == 1)
{
lean_object* v_val_3070_; uint8_t v___x_3071_; lean_object* v___x_3072_; 
v_val_3070_ = lean_ctor_get(v___x_3069_, 0);
lean_inc(v_val_3070_);
lean_dec_ref_known(v___x_3069_, 1);
v___x_3071_ = lean_unbox(v_val_3070_);
lean_dec(v_val_3070_);
lean_inc(v___x_3013_);
v___x_3072_ = l_Lean_Meta_setInlineAttribute(v___x_3013_, v___x_3071_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_dec_ref_known(v___x_3072_, 1);
v___y_3015_ = v___y_2973_;
v___y_3016_ = v___y_2974_;
v___y_3017_ = v___y_2975_;
v___y_3018_ = v___y_2976_;
v___y_3019_ = v___y_2977_;
goto v___jp_3014_;
}
else
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
lean_dec(v___x_3013_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v___x_3072_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v___x_3072_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
}
else
{
lean_dec(v___x_3069_);
v___y_3015_ = v___y_2973_;
v___y_3016_ = v___y_2974_;
v___y_3017_ = v___y_2975_;
v___y_3018_ = v___y_2976_;
v___y_3019_ = v___y_2977_;
goto v___jp_3014_;
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
lean_dec(v___x_3013_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3081_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_3066_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_3066_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3096_; 
lean_dec(v_a_3036_);
lean_dec(v___x_3013_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3089_ = lean_ctor_get(v___x_3057_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3057_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_3057_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3057_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_a_3089_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
else
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3104_; 
lean_dec(v_a_3036_);
lean_dec_ref(v___x_3033_);
lean_dec(v___x_3013_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3097_ = lean_ctor_get(v___x_3055_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3055_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3099_ = v___x_3055_;
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3055_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
return v___x_3102_;
}
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
lean_dec(v_a_3041_);
lean_dec(v_a_3036_);
lean_dec_ref(v___x_3033_);
lean_dec_ref(v___x_3031_);
lean_dec(v___x_3013_);
lean_dec(v_a_3011_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3105_ = lean_ctor_get(v___x_3044_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3044_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3044_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3044_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
return v___x_3110_;
}
}
}
}
else
{
lean_object* v_a_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3120_; 
lean_dec(v_a_3041_);
lean_dec(v_a_3036_);
lean_dec_ref(v___x_3033_);
lean_dec_ref(v___x_3031_);
lean_dec(v___x_3013_);
lean_dec(v_a_3011_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3113_ = lean_ctor_get(v___x_3042_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3042_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3115_ = v___x_3042_;
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_a_3113_);
lean_dec(v___x_3042_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3120_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v___x_3118_; 
if (v_isShared_3116_ == 0)
{
v___x_3118_ = v___x_3115_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v_a_3113_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec(v_a_3036_);
lean_dec_ref(v___x_3033_);
lean_dec_ref(v___x_3031_);
lean_dec(v___x_3013_);
lean_dec(v_a_3011_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3121_ = lean_ctor_get(v___x_3040_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3040_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3040_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3040_);
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
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec(v_a_3036_);
lean_dec_ref(v___x_3033_);
lean_dec_ref(v___x_3031_);
lean_dec(v___x_3013_);
lean_dec(v_a_3011_);
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3129_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3037_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3037_);
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
lean_dec_ref(v___x_3033_);
lean_dec_ref(v___x_3031_);
lean_dec(v___x_3013_);
lean_dec(v_a_3011_);
lean_dec_ref(v___x_2999_);
lean_dec(v___x_2995_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3137_ = lean_ctor_get(v___x_3035_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3035_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3139_ = v___x_3035_;
v_isShared_3140_ = v_isSharedCheck_3144_;
goto v_resetjp_3138_;
}
else
{
lean_inc(v_a_3137_);
lean_dec(v___x_3035_);
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
lean_dec(v___x_3013_);
lean_dec(v_a_3011_);
lean_dec_ref(v___x_2999_);
lean_dec(v___x_2995_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3145_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3029_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3029_);
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
v___jp_3014_:
{
lean_object* v___x_3020_; 
lean_inc(v_a_2994_);
v___x_3020_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_2994_, v___x_3013_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_dec_ref_known(v___x_3020_, 1);
v_a_2980_ = v___x_2999_;
goto v___jp_2979_;
}
else
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3028_; 
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3028_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3028_ == 0)
{
v___x_3023_ = v___x_3020_;
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v___x_3020_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3028_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v_a_3021_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
lean_dec_ref(v___x_2999_);
lean_dec(v___x_2995_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3153_ = lean_ctor_get(v___x_3010_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3010_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3010_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3010_);
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
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
lean_dec(v___x_2995_);
lean_dec(v_stop_2988_);
lean_dec(v_start_2987_);
v___x_3161_ = lean_mk_empty_array_with_capacity(v___x_2996_);
lean_inc(v_a_2994_);
v___x_3162_ = lean_array_push(v___x_3161_, v_a_2994_);
v___x_3163_ = l_Lean_compileDecls(v___x_3162_, v___x_2989_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_dec_ref_known(v___x_3163_, 1);
v_a_2980_ = v___x_2999_;
goto v___jp_2979_;
}
else
{
lean_object* v_a_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3171_; 
lean_dec_ref(v___x_2999_);
lean_dec(v_levelParams_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v_xImpl_2966_);
lean_dec_ref(v_indices_2965_);
lean_dec_ref(v___x_2964_);
lean_dec_ref(v_val_2963_);
lean_dec_ref(v_params_2962_);
lean_dec_ref(v_compFieldVars_2961_);
lean_dec(v_lparams_2960_);
lean_dec(v_ctors_2959_);
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3171_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3171_ == 0)
{
v___x_3166_ = v___x_3163_;
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_a_3164_);
lean_dec(v___x_3163_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3171_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
lean_object* v___x_3169_; 
if (v_isShared_3167_ == 0)
{
v___x_3169_ = v___x_3166_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v_a_3164_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
return v___x_3169_;
}
}
}
}
}
}
}
}
v___jp_2979_:
{
size_t v___x_2981_; size_t v___x_2982_; 
v___x_2981_ = ((size_t)1ULL);
v___x_2982_ = lean_usize_add(v_i_2971_, v___x_2981_);
v_i_2971_ = v___x_2982_;
v_b_2972_ = v_a_2980_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed(lean_object** _args){
lean_object* v_ctors_3177_ = _args[0];
lean_object* v_lparams_3178_ = _args[1];
lean_object* v_compFieldVars_3179_ = _args[2];
lean_object* v_params_3180_ = _args[3];
lean_object* v_val_3181_ = _args[4];
lean_object* v___x_3182_ = _args[5];
lean_object* v_indices_3183_ = _args[6];
lean_object* v_xImpl_3184_ = _args[7];
lean_object* v___x_3185_ = _args[8];
lean_object* v_levelParams_3186_ = _args[9];
lean_object* v_as_3187_ = _args[10];
lean_object* v_sz_3188_ = _args[11];
lean_object* v_i_3189_ = _args[12];
lean_object* v_b_3190_ = _args[13];
lean_object* v___y_3191_ = _args[14];
lean_object* v___y_3192_ = _args[15];
lean_object* v___y_3193_ = _args[16];
lean_object* v___y_3194_ = _args[17];
lean_object* v___y_3195_ = _args[18];
lean_object* v___y_3196_ = _args[19];
_start:
{
size_t v_sz_boxed_3197_; size_t v_i_boxed_3198_; lean_object* v_res_3199_; 
v_sz_boxed_3197_ = lean_unbox_usize(v_sz_3188_);
lean_dec(v_sz_3188_);
v_i_boxed_3198_ = lean_unbox_usize(v_i_3189_);
lean_dec(v_i_3189_);
v_res_3199_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3177_, v_lparams_3178_, v_compFieldVars_3179_, v_params_3180_, v_val_3181_, v___x_3182_, v_indices_3183_, v_xImpl_3184_, v___x_3185_, v_levelParams_3186_, v_as_3187_, v_sz_boxed_3197_, v_i_boxed_3198_, v_b_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec_ref(v_as_3187_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(lean_object* v_lparams_3200_, lean_object* v_compFieldVars_3201_, lean_object* v_params_3202_, lean_object* v_ctors_3203_, lean_object* v_val_3204_, lean_object* v___x_3205_, lean_object* v_indices_3206_, lean_object* v_xImpl_3207_, lean_object* v___x_3208_, lean_object* v_levelParams_3209_, lean_object* v_as_3210_, size_t v_sz_3211_, size_t v_i_3212_, lean_object* v_b_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_a_3221_; uint8_t v___x_3225_; 
v___x_3225_ = lean_usize_dec_lt(v_i_3212_, v_sz_3211_);
if (v___x_3225_ == 0)
{
lean_object* v___x_3226_; 
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v___x_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3226_, 0, v_b_3213_);
return v___x_3226_;
}
else
{
lean_object* v_array_3227_; lean_object* v_start_3228_; lean_object* v_stop_3229_; uint8_t v___x_3230_; 
v_array_3227_ = lean_ctor_get(v_b_3213_, 0);
v_start_3228_ = lean_ctor_get(v_b_3213_, 1);
v_stop_3229_ = lean_ctor_get(v_b_3213_, 2);
v___x_3230_ = lean_nat_dec_lt(v_start_3228_, v_stop_3229_);
if (v___x_3230_ == 0)
{
lean_object* v___x_3231_; 
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v___x_3231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3231_, 0, v_b_3213_);
return v___x_3231_;
}
else
{
lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3414_; 
lean_inc(v_stop_3229_);
lean_inc(v_start_3228_);
lean_inc_ref(v_array_3227_);
v_isSharedCheck_3414_ = !lean_is_exclusive(v_b_3213_);
if (v_isSharedCheck_3414_ == 0)
{
lean_object* v_unused_3415_; lean_object* v_unused_3416_; lean_object* v_unused_3417_; 
v_unused_3415_ = lean_ctor_get(v_b_3213_, 2);
lean_dec(v_unused_3415_);
v_unused_3416_ = lean_ctor_get(v_b_3213_, 1);
lean_dec(v_unused_3416_);
v_unused_3417_ = lean_ctor_get(v_b_3213_, 0);
lean_dec(v_unused_3417_);
v___x_3233_ = v_b_3213_;
v_isShared_3234_ = v_isSharedCheck_3414_;
goto v_resetjp_3232_;
}
else
{
lean_dec(v_b_3213_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3414_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v_a_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3240_; 
v_a_3235_ = lean_array_uget_borrowed(v_as_3210_, v_i_3212_);
v___x_3236_ = lean_array_fget(v_array_3227_, v_start_3228_);
v___x_3237_ = lean_unsigned_to_nat(1u);
v___x_3238_ = lean_nat_add(v_start_3228_, v___x_3237_);
lean_inc(v_stop_3229_);
if (v_isShared_3234_ == 0)
{
lean_ctor_set(v___x_3233_, 1, v___x_3238_);
v___x_3240_ = v___x_3233_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v_array_3227_);
lean_ctor_set(v_reuseFailAlloc_3413_, 1, v___x_3238_);
lean_ctor_set(v_reuseFailAlloc_3413_, 2, v_stop_3229_);
v___x_3240_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
lean_object* v___x_3241_; lean_object* v_env_3242_; uint8_t v___x_3243_; 
v___x_3241_ = lean_st_ref_get(v___y_3218_);
v_env_3242_ = lean_ctor_get(v___x_3241_, 0);
lean_inc_ref(v_env_3242_);
lean_dec(v___x_3241_);
lean_inc(v_a_3235_);
v___x_3243_ = l_Lean_isExtern(v_env_3242_, v_a_3235_);
if (v___x_3243_ == 0)
{
lean_object* v___x_3244_; size_t v_sz_3245_; size_t v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
lean_inc(v_ctors_3203_);
v___x_3244_ = lean_array_mk(v_ctors_3203_);
v_sz_3245_ = lean_array_size(v___x_3244_);
v___x_3246_ = ((size_t)0ULL);
v___x_3247_ = lean_box(v___x_3243_);
v___x_3248_ = lean_box_usize(v_sz_3245_);
v___x_3249_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1));
lean_inc(v_a_3235_);
lean_inc_ref(v_params_3202_);
lean_inc(v___x_3236_);
lean_inc_ref(v_compFieldVars_3201_);
lean_inc(v_lparams_3200_);
v___x_3250_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_3250_, 0, v_lparams_3200_);
lean_closure_set(v___x_3250_, 1, v_compFieldVars_3201_);
lean_closure_set(v___x_3250_, 2, v___x_3236_);
lean_closure_set(v___x_3250_, 3, v_start_3228_);
lean_closure_set(v___x_3250_, 4, v_stop_3229_);
lean_closure_set(v___x_3250_, 5, v_params_3202_);
lean_closure_set(v___x_3250_, 6, v_a_3235_);
lean_closure_set(v___x_3250_, 7, v___x_3247_);
lean_closure_set(v___x_3250_, 8, v___x_3248_);
lean_closure_set(v___x_3250_, 9, v___x_3249_);
lean_closure_set(v___x_3250_, 10, v___x_3244_);
v___x_3251_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_3250_, v___x_3230_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3251_) == 0)
{
lean_object* v_a_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___y_3256_; lean_object* v___y_3257_; lean_object* v___y_3258_; lean_object* v___y_3259_; lean_object* v___y_3260_; lean_object* v___x_3270_; 
v_a_3252_ = lean_ctor_get(v___x_3251_, 0);
lean_inc(v_a_3252_);
lean_dec_ref_known(v___x_3251_, 1);
v___x_3253_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_3235_);
v___x_3254_ = l_Lean_Name_append(v_a_3235_, v___x_3253_);
lean_inc(v___y_3218_);
lean_inc_ref(v___y_3217_);
lean_inc(v___y_3216_);
lean_inc_ref(v___y_3215_);
lean_inc(v___x_3236_);
v___x_3270_ = lean_infer_type(v___x_3236_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; uint8_t v___x_3275_; lean_object* v___x_3276_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v___x_3272_ = lean_mk_empty_array_with_capacity(v___x_3237_);
lean_inc_ref(v_val_3204_);
lean_inc_ref(v___x_3272_);
v___x_3273_ = lean_array_push(v___x_3272_, v_val_3204_);
lean_inc_ref(v___x_3205_);
v___x_3274_ = l_Array_append___redArg(v___x_3205_, v___x_3273_);
lean_dec_ref(v___x_3273_);
v___x_3275_ = 1;
v___x_3276_ = l_Lean_Meta_mkForallFVars(v___x_3274_, v_a_3271_, v___x_3243_, v___x_3230_, v___x_3230_, v___x_3275_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; lean_object* v___x_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
lean_inc(v___y_3218_);
lean_inc_ref(v___y_3217_);
lean_inc(v___y_3216_);
lean_inc_ref(v___y_3215_);
v___x_3278_ = lean_infer_type(v___x_3236_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
lean_dec_ref_known(v___x_3278_, 1);
lean_inc_ref(v_xImpl_3207_);
lean_inc_ref(v_indices_3206_);
v___x_3280_ = lean_array_push(v_indices_3206_, v_xImpl_3207_);
v___x_3281_ = l_Lean_Meta_mkLambdaFVars(v___x_3280_, v_a_3279_, v___x_3243_, v___x_3230_, v___x_3243_, v___x_3230_, v___x_3275_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
lean_dec_ref(v___x_3280_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v_a_3282_; lean_object* v___x_3283_; 
v_a_3282_ = lean_ctor_get(v___x_3281_, 0);
lean_inc(v_a_3282_);
lean_dec_ref_known(v___x_3281_, 1);
lean_inc(v___y_3218_);
lean_inc_ref(v___y_3217_);
lean_inc(v___y_3216_);
lean_inc_ref(v___y_3215_);
lean_inc_ref(v_xImpl_3207_);
v___x_3283_ = lean_infer_type(v_xImpl_3207_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v___x_3285_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3284_);
lean_dec_ref_known(v___x_3283_, 1);
lean_inc_ref(v_val_3204_);
v___x_3285_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3284_, v_val_3204_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; size_t v_sz_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3286_);
lean_dec_ref_known(v___x_3285_, 1);
lean_inc(v___x_3208_);
v___x_3287_ = l_Lean_mkCasesOnName(v___x_3208_);
lean_inc_ref(v___x_3272_);
v___x_3288_ = lean_array_push(v___x_3272_, v_a_3282_);
lean_inc_ref(v_params_3202_);
v___x_3289_ = l_Array_append___redArg(v_params_3202_, v___x_3288_);
lean_dec_ref(v___x_3288_);
v___x_3290_ = l_Array_append___redArg(v___x_3289_, v_indices_3206_);
v___x_3291_ = lean_array_push(v___x_3272_, v_a_3286_);
v___x_3292_ = l_Array_append___redArg(v___x_3290_, v___x_3291_);
lean_dec_ref(v___x_3291_);
v___x_3293_ = l_Array_append___redArg(v___x_3292_, v_a_3252_);
lean_dec(v_a_3252_);
v_sz_3294_ = lean_array_size(v___x_3293_);
v___x_3295_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3294_, v___x_3246_, v___x_3293_);
v___x_3296_ = l_Lean_Meta_mkAppOptM(v___x_3287_, v___x_3295_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v_a_3297_; lean_object* v___x_3298_; 
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_a_3297_);
lean_dec_ref_known(v___x_3296_, 1);
v___x_3298_ = l_Lean_Meta_mkLambdaFVars(v___x_3274_, v_a_3297_, v___x_3243_, v___x_3230_, v___x_3243_, v___x_3230_, v___x_3275_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
lean_dec_ref(v___x_3274_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; uint8_t v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
lean_inc(v_levelParams_3209_);
lean_inc_n(v___x_3254_, 2);
v___x_3300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3254_);
lean_ctor_set(v___x_3300_, 1, v_levelParams_3209_);
lean_ctor_set(v___x_3300_, 2, v_a_3277_);
v___x_3301_ = lean_box(0);
v___x_3302_ = 0;
v___x_3303_ = lean_box(0);
v___x_3304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3254_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3305_, 0, v___x_3300_);
lean_ctor_set(v___x_3305_, 1, v_a_3299_);
lean_ctor_set(v___x_3305_, 2, v___x_3301_);
lean_ctor_set(v___x_3305_, 3, v___x_3304_);
lean_ctor_set_uint8(v___x_3305_, sizeof(void*)*4, v___x_3302_);
v___x_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3306_, 0, v___x_3305_);
v___x_3307_ = l_Lean_addDecl(v___x_3306_, v___x_3243_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v___x_3308_; lean_object* v_env_3309_; lean_object* v___x_3310_; 
lean_dec_ref_known(v___x_3307_, 1);
v___x_3308_ = lean_st_ref_get(v___y_3218_);
v_env_3309_ = lean_ctor_get(v___x_3308_, 0);
lean_inc_ref(v_env_3309_);
lean_dec(v___x_3308_);
lean_inc(v_a_3235_);
v___x_3310_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3309_, v_a_3235_);
if (lean_obj_tag(v___x_3310_) == 1)
{
lean_object* v_val_3311_; uint8_t v___x_3312_; lean_object* v___x_3313_; 
v_val_3311_ = lean_ctor_get(v___x_3310_, 0);
lean_inc(v_val_3311_);
lean_dec_ref_known(v___x_3310_, 1);
v___x_3312_ = lean_unbox(v_val_3311_);
lean_dec(v_val_3311_);
lean_inc(v___x_3254_);
v___x_3313_ = l_Lean_Meta_setInlineAttribute(v___x_3254_, v___x_3312_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3313_) == 0)
{
lean_dec_ref_known(v___x_3313_, 1);
v___y_3256_ = v___y_3214_;
v___y_3257_ = v___y_3215_;
v___y_3258_ = v___y_3216_;
v___y_3259_ = v___y_3217_;
v___y_3260_ = v___y_3218_;
goto v___jp_3255_;
}
else
{
lean_object* v_a_3314_; lean_object* v___x_3316_; uint8_t v_isShared_3317_; uint8_t v_isSharedCheck_3321_; 
lean_dec(v___x_3254_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3314_ = lean_ctor_get(v___x_3313_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3313_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3316_ = v___x_3313_;
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
else
{
lean_inc(v_a_3314_);
lean_dec(v___x_3313_);
v___x_3316_ = lean_box(0);
v_isShared_3317_ = v_isSharedCheck_3321_;
goto v_resetjp_3315_;
}
v_resetjp_3315_:
{
lean_object* v___x_3319_; 
if (v_isShared_3317_ == 0)
{
v___x_3319_ = v___x_3316_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3314_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
}
else
{
lean_dec(v___x_3310_);
v___y_3256_ = v___y_3214_;
v___y_3257_ = v___y_3215_;
v___y_3258_ = v___y_3216_;
v___y_3259_ = v___y_3217_;
v___y_3260_ = v___y_3218_;
goto v___jp_3255_;
}
}
else
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
lean_dec(v___x_3254_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3322_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3307_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3307_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
}
else
{
lean_object* v_a_3330_; lean_object* v___x_3332_; uint8_t v_isShared_3333_; uint8_t v_isSharedCheck_3337_; 
lean_dec(v_a_3277_);
lean_dec(v___x_3254_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3330_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3337_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3337_ == 0)
{
v___x_3332_ = v___x_3298_;
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
else
{
lean_inc(v_a_3330_);
lean_dec(v___x_3298_);
v___x_3332_ = lean_box(0);
v_isShared_3333_ = v_isSharedCheck_3337_;
goto v_resetjp_3331_;
}
v_resetjp_3331_:
{
lean_object* v___x_3335_; 
if (v_isShared_3333_ == 0)
{
v___x_3335_ = v___x_3332_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v_a_3330_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
}
}
else
{
lean_object* v_a_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3345_; 
lean_dec(v_a_3277_);
lean_dec_ref(v___x_3274_);
lean_dec(v___x_3254_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3338_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3340_ = v___x_3296_;
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_a_3338_);
lean_dec(v___x_3296_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3345_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3343_; 
if (v_isShared_3341_ == 0)
{
v___x_3343_ = v___x_3340_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v_a_3338_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
lean_dec(v_a_3282_);
lean_dec(v_a_3277_);
lean_dec_ref(v___x_3274_);
lean_dec_ref(v___x_3272_);
lean_dec(v___x_3254_);
lean_dec(v_a_3252_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3346_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3285_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3285_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
else
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3361_; 
lean_dec(v_a_3282_);
lean_dec(v_a_3277_);
lean_dec_ref(v___x_3274_);
lean_dec_ref(v___x_3272_);
lean_dec(v___x_3254_);
lean_dec(v_a_3252_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3354_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3283_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3283_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3359_; 
if (v_isShared_3357_ == 0)
{
v___x_3359_ = v___x_3356_;
goto v_reusejp_3358_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v_a_3354_);
v___x_3359_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3358_;
}
v_reusejp_3358_:
{
return v___x_3359_;
}
}
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec(v_a_3277_);
lean_dec_ref(v___x_3274_);
lean_dec_ref(v___x_3272_);
lean_dec(v___x_3254_);
lean_dec(v_a_3252_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3362_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3281_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3281_);
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
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
lean_dec(v_a_3277_);
lean_dec_ref(v___x_3274_);
lean_dec_ref(v___x_3272_);
lean_dec(v___x_3254_);
lean_dec(v_a_3252_);
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3370_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3278_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3278_);
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
lean_dec_ref(v___x_3274_);
lean_dec_ref(v___x_3272_);
lean_dec(v___x_3254_);
lean_dec(v_a_3252_);
lean_dec_ref(v___x_3240_);
lean_dec(v___x_3236_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3378_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3380_ = v___x_3276_;
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v___x_3276_);
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
lean_dec(v___x_3254_);
lean_dec(v_a_3252_);
lean_dec_ref(v___x_3240_);
lean_dec(v___x_3236_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3386_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3393_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3393_ == 0)
{
v___x_3388_ = v___x_3270_;
v_isShared_3389_ = v_isSharedCheck_3393_;
goto v_resetjp_3387_;
}
else
{
lean_inc(v_a_3386_);
lean_dec(v___x_3270_);
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
v___jp_3255_:
{
lean_object* v___x_3261_; 
lean_inc(v_a_3235_);
v___x_3261_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_3235_, v___x_3254_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_dec_ref_known(v___x_3261_, 1);
v_a_3221_ = v___x_3240_;
goto v___jp_3220_;
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3261_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3261_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
}
else
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3401_; 
lean_dec_ref(v___x_3240_);
lean_dec(v___x_3236_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3394_ = lean_ctor_get(v___x_3251_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3396_ = v___x_3251_;
v_isShared_3397_ = v_isSharedCheck_3401_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v___x_3251_);
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
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
lean_dec(v___x_3236_);
lean_dec(v_stop_3229_);
lean_dec(v_start_3228_);
v___x_3402_ = lean_mk_empty_array_with_capacity(v___x_3237_);
lean_inc(v_a_3235_);
v___x_3403_ = lean_array_push(v___x_3402_, v_a_3235_);
v___x_3404_ = l_Lean_compileDecls(v___x_3403_, v___x_3230_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3404_) == 0)
{
lean_dec_ref_known(v___x_3404_, 1);
v_a_3221_ = v___x_3240_;
goto v___jp_3220_;
}
else
{
lean_object* v_a_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3412_; 
lean_dec_ref(v___x_3240_);
lean_dec(v_levelParams_3209_);
lean_dec(v___x_3208_);
lean_dec_ref(v_xImpl_3207_);
lean_dec_ref(v_indices_3206_);
lean_dec_ref(v___x_3205_);
lean_dec_ref(v_val_3204_);
lean_dec(v_ctors_3203_);
lean_dec_ref(v_params_3202_);
lean_dec_ref(v_compFieldVars_3201_);
lean_dec(v_lparams_3200_);
v_a_3405_ = lean_ctor_get(v___x_3404_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3404_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3407_ = v___x_3404_;
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_a_3405_);
lean_dec(v___x_3404_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3412_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v___x_3410_; 
if (v_isShared_3408_ == 0)
{
v___x_3410_ = v___x_3407_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3411_; 
v_reuseFailAlloc_3411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3411_, 0, v_a_3405_);
v___x_3410_ = v_reuseFailAlloc_3411_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
return v___x_3410_;
}
}
}
}
}
}
}
}
v___jp_3220_:
{
size_t v___x_3222_; size_t v___x_3223_; lean_object* v___x_3224_; 
v___x_3222_ = ((size_t)1ULL);
v___x_3223_ = lean_usize_add(v_i_3212_, v___x_3222_);
v___x_3224_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3203_, v_lparams_3200_, v_compFieldVars_3201_, v_params_3202_, v_val_3204_, v___x_3205_, v_indices_3206_, v_xImpl_3207_, v___x_3208_, v_levelParams_3209_, v_as_3210_, v_sz_3211_, v___x_3223_, v_a_3221_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2___boxed(lean_object** _args){
lean_object* v_lparams_3418_ = _args[0];
lean_object* v_compFieldVars_3419_ = _args[1];
lean_object* v_params_3420_ = _args[2];
lean_object* v_ctors_3421_ = _args[3];
lean_object* v_val_3422_ = _args[4];
lean_object* v___x_3423_ = _args[5];
lean_object* v_indices_3424_ = _args[6];
lean_object* v_xImpl_3425_ = _args[7];
lean_object* v___x_3426_ = _args[8];
lean_object* v_levelParams_3427_ = _args[9];
lean_object* v_as_3428_ = _args[10];
lean_object* v_sz_3429_ = _args[11];
lean_object* v_i_3430_ = _args[12];
lean_object* v_b_3431_ = _args[13];
lean_object* v___y_3432_ = _args[14];
lean_object* v___y_3433_ = _args[15];
lean_object* v___y_3434_ = _args[16];
lean_object* v___y_3435_ = _args[17];
lean_object* v___y_3436_ = _args[18];
lean_object* v___y_3437_ = _args[19];
_start:
{
size_t v_sz_boxed_3438_; size_t v_i_boxed_3439_; lean_object* v_res_3440_; 
v_sz_boxed_3438_ = lean_unbox_usize(v_sz_3429_);
lean_dec(v_sz_3429_);
v_i_boxed_3439_ = lean_unbox_usize(v_i_3430_);
lean_dec(v_i_3430_);
v_res_3440_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3418_, v_compFieldVars_3419_, v_params_3420_, v_ctors_3421_, v_val_3422_, v___x_3423_, v_indices_3424_, v_xImpl_3425_, v___x_3426_, v_levelParams_3427_, v_as_3428_, v_sz_boxed_3438_, v_i_boxed_3439_, v_b_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec_ref(v___y_3432_);
lean_dec_ref(v_as_3428_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(lean_object* v_compFieldVars_3441_, lean_object* v_compFields_3442_, lean_object* v_lparams_3443_, lean_object* v_params_3444_, lean_object* v_ctors_3445_, lean_object* v_val_3446_, lean_object* v___x_3447_, lean_object* v_indices_3448_, lean_object* v___x_3449_, lean_object* v_levelParams_3450_, lean_object* v_xImpl_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_){
_start:
{
lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; size_t v_sz_3461_; size_t v___x_3462_; lean_object* v___x_3463_; 
v___x_3458_ = lean_unsigned_to_nat(0u);
v___x_3459_ = lean_array_get_size(v_compFieldVars_3441_);
lean_inc_ref(v_compFieldVars_3441_);
v___x_3460_ = l_Array_toSubarray___redArg(v_compFieldVars_3441_, v___x_3458_, v___x_3459_);
v_sz_3461_ = lean_array_size(v_compFields_3442_);
v___x_3462_ = ((size_t)0ULL);
v___x_3463_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3443_, v_compFieldVars_3441_, v_params_3444_, v_ctors_3445_, v_val_3446_, v___x_3447_, v_indices_3448_, v_xImpl_3451_, v___x_3449_, v_levelParams_3450_, v_compFields_3442_, v_sz_3461_, v___x_3462_, v___x_3460_, v___y_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3471_; 
v_isSharedCheck_3471_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3471_ == 0)
{
lean_object* v_unused_3472_; 
v_unused_3472_ = lean_ctor_get(v___x_3463_, 0);
lean_dec(v_unused_3472_);
v___x_3465_ = v___x_3463_;
v_isShared_3466_ = v_isSharedCheck_3471_;
goto v_resetjp_3464_;
}
else
{
lean_dec(v___x_3463_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3471_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3467_; lean_object* v___x_3469_; 
v___x_3467_ = lean_box(0);
if (v_isShared_3466_ == 0)
{
lean_ctor_set(v___x_3465_, 0, v___x_3467_);
v___x_3469_ = v___x_3465_;
goto v_reusejp_3468_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v___x_3467_);
v___x_3469_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3468_;
}
v_reusejp_3468_:
{
return v___x_3469_;
}
}
}
else
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3480_; 
v_a_3473_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3475_ = v___x_3463_;
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3463_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3478_; 
if (v_isShared_3476_ == 0)
{
v___x_3478_ = v___x_3475_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v_a_3473_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed(lean_object** _args){
lean_object* v_compFieldVars_3481_ = _args[0];
lean_object* v_compFields_3482_ = _args[1];
lean_object* v_lparams_3483_ = _args[2];
lean_object* v_params_3484_ = _args[3];
lean_object* v_ctors_3485_ = _args[4];
lean_object* v_val_3486_ = _args[5];
lean_object* v___x_3487_ = _args[6];
lean_object* v_indices_3488_ = _args[7];
lean_object* v___x_3489_ = _args[8];
lean_object* v_levelParams_3490_ = _args[9];
lean_object* v_xImpl_3491_ = _args[10];
lean_object* v___y_3492_ = _args[11];
lean_object* v___y_3493_ = _args[12];
lean_object* v___y_3494_ = _args[13];
lean_object* v___y_3495_ = _args[14];
lean_object* v___y_3496_ = _args[15];
lean_object* v___y_3497_ = _args[16];
_start:
{
lean_object* v_res_3498_; 
v_res_3498_ = l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(v_compFieldVars_3481_, v_compFields_3482_, v_lparams_3483_, v_params_3484_, v_ctors_3485_, v_val_3486_, v___x_3487_, v_indices_3488_, v___x_3489_, v_levelParams_3490_, v_xImpl_3491_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_);
lean_dec(v___y_3496_);
lean_dec_ref(v___y_3495_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec_ref(v_compFields_3482_);
return v_res_3498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields(lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v_toInductiveVal_3508_; lean_object* v_toConstantVal_3509_; lean_object* v_lparams_3510_; lean_object* v_params_3511_; lean_object* v_compFields_3512_; lean_object* v_compFieldVars_3513_; lean_object* v_indices_3514_; lean_object* v_val_3515_; lean_object* v_ctors_3516_; lean_object* v_name_3517_; lean_object* v_levelParams_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___f_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v_toInductiveVal_3508_ = lean_ctor_get(v___y_3502_, 0);
v_toConstantVal_3509_ = lean_ctor_get(v_toInductiveVal_3508_, 0);
v_lparams_3510_ = lean_ctor_get(v___y_3502_, 1);
v_params_3511_ = lean_ctor_get(v___y_3502_, 2);
v_compFields_3512_ = lean_ctor_get(v___y_3502_, 3);
v_compFieldVars_3513_ = lean_ctor_get(v___y_3502_, 4);
v_indices_3514_ = lean_ctor_get(v___y_3502_, 5);
v_val_3515_ = lean_ctor_get(v___y_3502_, 6);
v_ctors_3516_ = lean_ctor_get(v_toInductiveVal_3508_, 4);
v_name_3517_ = lean_ctor_get(v_toConstantVal_3509_, 0);
v_levelParams_3518_ = lean_ctor_get(v_toConstantVal_3509_, 1);
v___x_3519_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_3520_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_3517_);
v___x_3521_ = l_Lean_Name_append(v_name_3517_, v___x_3520_);
lean_inc_n(v_lparams_3510_, 2);
lean_inc(v___x_3521_);
v___x_3522_ = l_Lean_mkConst(v___x_3521_, v_lparams_3510_);
lean_inc_ref_n(v_params_3511_, 2);
v___x_3523_ = l_Array_append___redArg(v_params_3511_, v_indices_3514_);
lean_inc(v_levelParams_3518_);
lean_inc_ref(v_indices_3514_);
lean_inc_ref(v___x_3523_);
lean_inc_ref(v_val_3515_);
lean_inc(v_ctors_3516_);
lean_inc_ref(v_compFields_3512_);
lean_inc_ref(v_compFieldVars_3513_);
v___f_3524_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed), 17, 10);
lean_closure_set(v___f_3524_, 0, v_compFieldVars_3513_);
lean_closure_set(v___f_3524_, 1, v_compFields_3512_);
lean_closure_set(v___f_3524_, 2, v_lparams_3510_);
lean_closure_set(v___f_3524_, 3, v_params_3511_);
lean_closure_set(v___f_3524_, 4, v_ctors_3516_);
lean_closure_set(v___f_3524_, 5, v_val_3515_);
lean_closure_set(v___f_3524_, 6, v___x_3523_);
lean_closure_set(v___f_3524_, 7, v_indices_3514_);
lean_closure_set(v___f_3524_, 8, v___x_3521_);
lean_closure_set(v___f_3524_, 9, v_levelParams_3518_);
v___x_3525_ = l_Lean_mkAppN(v___x_3522_, v___x_3523_);
lean_dec_ref(v___x_3523_);
v___x_3526_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_3519_, v___x_3525_, v___f_3524_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_);
return v___x_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___boxed(lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_){
_start:
{
lean_object* v_res_3533_; 
v_res_3533_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
lean_dec(v___y_3531_);
lean_dec_ref(v___y_3530_);
lean_dec(v___y_3529_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3527_);
return v_res_3533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(lean_object* v_k_3534_, lean_object* v_b_3535_, lean_object* v_c_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_){
_start:
{
lean_object* v___x_3542_; 
lean_inc(v___y_3540_);
lean_inc_ref(v___y_3539_);
lean_inc(v___y_3538_);
lean_inc_ref(v___y_3537_);
v___x_3542_ = lean_apply_7(v_k_3534_, v_b_3535_, v_c_3536_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, lean_box(0));
return v___x_3542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed(lean_object* v_k_3543_, lean_object* v_b_3544_, lean_object* v_c_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(v_k_3543_, v_b_3544_, v_c_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_);
lean_dec(v___y_3549_);
lean_dec_ref(v___y_3548_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(lean_object* v_type_3552_, lean_object* v_k_3553_, uint8_t v_cleanupAnnotations_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_){
_start:
{
lean_object* v___f_3560_; uint8_t v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; 
v___f_3560_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3560_, 0, v_k_3553_);
v___x_3561_ = 0;
v___x_3562_ = lean_box(0);
v___x_3563_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3561_, v___x_3562_, v_type_3552_, v___f_3560_, v_cleanupAnnotations_3554_, v___x_3561_, v___y_3555_, v___y_3556_, v___y_3557_, v___y_3558_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3571_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3566_ = v___x_3563_;
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_a_3564_);
lean_dec(v___x_3563_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3571_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v___x_3569_; 
if (v_isShared_3567_ == 0)
{
v___x_3569_ = v___x_3566_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3564_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
else
{
lean_object* v_a_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3579_; 
v_a_3572_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3574_ = v___x_3563_;
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_a_3572_);
lean_dec(v___x_3563_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3579_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v___x_3577_; 
if (v_isShared_3575_ == 0)
{
v___x_3577_ = v___x_3574_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v_a_3572_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___boxed(lean_object* v_type_3580_, lean_object* v_k_3581_, lean_object* v_cleanupAnnotations_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3588_; lean_object* v_res_3589_; 
v_cleanupAnnotations_boxed_3588_ = lean_unbox(v_cleanupAnnotations_3582_);
v_res_3589_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3580_, v_k_3581_, v_cleanupAnnotations_boxed_3588_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
lean_dec(v___y_3586_);
lean_dec_ref(v___y_3585_);
lean_dec(v___y_3584_);
lean_dec_ref(v___y_3583_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(lean_object* v_00_u03b1_3590_, lean_object* v_type_3591_, lean_object* v_k_3592_, uint8_t v_cleanupAnnotations_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_){
_start:
{
lean_object* v___x_3599_; 
v___x_3599_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3591_, v_k_3592_, v_cleanupAnnotations_3593_, v___y_3594_, v___y_3595_, v___y_3596_, v___y_3597_);
return v___x_3599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___boxed(lean_object* v_00_u03b1_3600_, lean_object* v_type_3601_, lean_object* v_k_3602_, lean_object* v_cleanupAnnotations_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3609_; lean_object* v_res_3610_; 
v_cleanupAnnotations_boxed_3609_ = lean_unbox(v_cleanupAnnotations_3603_);
v_res_3610_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(v_00_u03b1_3600_, v_type_3601_, v_k_3602_, v_cleanupAnnotations_boxed_3609_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec(v___y_3605_);
lean_dec_ref(v___y_3604_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(lean_object* v_a_3611_, lean_object* v___x_3612_, lean_object* v___x_3613_, lean_object* v_compFields_3614_, lean_object* v___x_3615_, lean_object* v_val_3616_, lean_object* v_compFieldVars_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3623_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3623_, 0, v_a_3611_);
lean_ctor_set(v___x_3623_, 1, v___x_3612_);
lean_ctor_set(v___x_3623_, 2, v___x_3613_);
lean_ctor_set(v___x_3623_, 3, v_compFields_3614_);
lean_ctor_set(v___x_3623_, 4, v_compFieldVars_3617_);
lean_ctor_set(v___x_3623_, 5, v___x_3615_);
lean_ctor_set(v___x_3623_, 6, v_val_3616_);
v___x_3624_ = l_Lean_Elab_ComputedFields_validateComputedFields(v___x_3623_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v___x_3625_; 
lean_dec_ref_known(v___x_3624_, 1);
v___x_3625_ = l_Lean_Elab_ComputedFields_mkImplType(v___x_3623_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3625_) == 0)
{
lean_object* v_a_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; uint8_t v___x_3630_; lean_object* v___x_3631_; 
v_a_3626_ = lean_ctor_get(v___x_3625_, 0);
lean_inc(v_a_3626_);
lean_dec_ref_known(v___x_3625_, 1);
v___x_3627_ = lean_unsigned_to_nat(1u);
v___x_3628_ = lean_mk_empty_array_with_capacity(v___x_3627_);
v___x_3629_ = lean_array_push(v___x_3628_, v_a_3626_);
v___x_3630_ = 1;
v___x_3631_ = l_Lean_compileDecls(v___x_3629_, v___x_3630_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v___x_3632_; 
lean_dec_ref_known(v___x_3631_, 1);
v___x_3632_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v___x_3623_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v___x_3633_; 
lean_dec_ref_known(v___x_3632_, 1);
v___x_3633_ = l_Lean_Elab_ComputedFields_overrideConstructors(v___x_3623_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
if (lean_obj_tag(v___x_3633_) == 0)
{
lean_object* v___x_3634_; 
lean_dec_ref_known(v___x_3633_, 1);
v___x_3634_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v___x_3623_, v___y_3618_, v___y_3619_, v___y_3620_, v___y_3621_);
lean_dec_ref_known(v___x_3623_, 7);
return v___x_3634_;
}
else
{
lean_dec_ref_known(v___x_3623_, 7);
return v___x_3633_;
}
}
else
{
lean_dec_ref_known(v___x_3623_, 7);
return v___x_3632_;
}
}
else
{
lean_dec_ref_known(v___x_3623_, 7);
return v___x_3631_;
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
lean_dec_ref_known(v___x_3623_, 7);
v_a_3635_ = lean_ctor_get(v___x_3625_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3625_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3625_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3625_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_3623_, 7);
return v___x_3624_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed(lean_object* v_a_3643_, lean_object* v___x_3644_, lean_object* v___x_3645_, lean_object* v_compFields_3646_, lean_object* v___x_3647_, lean_object* v_val_3648_, lean_object* v_compFieldVars_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(v_a_3643_, v___x_3644_, v___x_3645_, v_compFields_3646_, v___x_3647_, v_val_3648_, v_compFieldVars_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_);
lean_dec(v___y_3653_);
lean_dec_ref(v___y_3652_);
lean_dec(v___y_3651_);
lean_dec_ref(v___y_3650_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(lean_object* v___x_3656_, lean_object* v___x_3657_, lean_object* v_val_3658_, lean_object* v_v_3659_, lean_object* v_x_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
v___x_3666_ = l_Array_append___redArg(v___x_3656_, v___x_3657_);
v___x_3667_ = lean_unsigned_to_nat(1u);
v___x_3668_ = lean_mk_empty_array_with_capacity(v___x_3667_);
v___x_3669_ = lean_array_push(v___x_3668_, v_val_3658_);
v___x_3670_ = l_Array_append___redArg(v___x_3666_, v___x_3669_);
lean_dec_ref(v___x_3669_);
v___x_3671_ = l_Lean_Meta_mkAppM(v_v_3659_, v___x_3670_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3673_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
lean_inc(v_a_3672_);
lean_dec_ref_known(v___x_3671_, 1);
lean_inc(v___y_3664_);
lean_inc_ref(v___y_3663_);
lean_inc(v___y_3662_);
lean_inc_ref(v___y_3661_);
v___x_3673_ = lean_infer_type(v_a_3672_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_);
return v___x_3673_;
}
else
{
return v___x_3671_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed(lean_object* v___x_3674_, lean_object* v___x_3675_, lean_object* v_val_3676_, lean_object* v_v_3677_, lean_object* v_x_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_){
_start:
{
lean_object* v_res_3684_; 
v_res_3684_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(v___x_3674_, v___x_3675_, v_val_3676_, v_v_3677_, v_x_3678_, v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_);
lean_dec(v___y_3682_);
lean_dec_ref(v___y_3681_);
lean_dec(v___y_3680_);
lean_dec_ref(v___y_3679_);
lean_dec_ref(v_x_3678_);
lean_dec_ref(v___x_3675_);
return v_res_3684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(lean_object* v___x_3685_, lean_object* v___x_3686_, lean_object* v_val_3687_, size_t v_sz_3688_, size_t v_i_3689_, lean_object* v_bs_3690_){
_start:
{
uint8_t v___x_3691_; 
v___x_3691_ = lean_usize_dec_lt(v_i_3689_, v_sz_3688_);
if (v___x_3691_ == 0)
{
lean_dec_ref(v_val_3687_);
lean_dec_ref(v___x_3686_);
lean_dec_ref(v___x_3685_);
return v_bs_3690_;
}
else
{
lean_object* v_v_3692_; lean_object* v___f_3693_; lean_object* v___x_3694_; lean_object* v_bs_x27_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; size_t v___x_3699_; size_t v___x_3700_; lean_object* v___x_3701_; 
v_v_3692_ = lean_array_uget(v_bs_3690_, v_i_3689_);
lean_inc(v_v_3692_);
lean_inc_ref(v_val_3687_);
lean_inc_ref(v___x_3686_);
lean_inc_ref(v___x_3685_);
v___f_3693_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3693_, 0, v___x_3685_);
lean_closure_set(v___f_3693_, 1, v___x_3686_);
lean_closure_set(v___f_3693_, 2, v_val_3687_);
lean_closure_set(v___f_3693_, 3, v_v_3692_);
v___x_3694_ = lean_unsigned_to_nat(0u);
v_bs_x27_3695_ = lean_array_uset(v_bs_3690_, v_i_3689_, v___x_3694_);
v___x_3696_ = lean_box(0);
v___x_3697_ = l_Lean_Name_updatePrefix(v_v_3692_, v___x_3696_);
v___x_3698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3697_);
lean_ctor_set(v___x_3698_, 1, v___f_3693_);
v___x_3699_ = ((size_t)1ULL);
v___x_3700_ = lean_usize_add(v_i_3689_, v___x_3699_);
v___x_3701_ = lean_array_uset(v_bs_x27_3695_, v_i_3689_, v___x_3698_);
v_i_3689_ = v___x_3700_;
v_bs_3690_ = v___x_3701_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___boxed(lean_object* v___x_3703_, lean_object* v___x_3704_, lean_object* v_val_3705_, lean_object* v_sz_3706_, lean_object* v_i_3707_, lean_object* v_bs_3708_){
_start:
{
size_t v_sz_boxed_3709_; size_t v_i_boxed_3710_; lean_object* v_res_3711_; 
v_sz_boxed_3709_ = lean_unbox_usize(v_sz_3706_);
lean_dec(v_sz_3706_);
v_i_boxed_3710_ = lean_unbox_usize(v_i_3707_);
lean_dec(v_i_3707_);
v_res_3711_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_3703_, v___x_3704_, v_val_3705_, v_sz_boxed_3709_, v_i_boxed_3710_, v_bs_3708_);
return v_res_3711_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(size_t v_sz_3712_, size_t v_i_3713_, lean_object* v_bs_3714_){
_start:
{
uint8_t v___x_3715_; 
v___x_3715_ = lean_usize_dec_lt(v_i_3713_, v_sz_3712_);
if (v___x_3715_ == 0)
{
return v_bs_3714_;
}
else
{
lean_object* v_v_3716_; lean_object* v_fst_3717_; lean_object* v_snd_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3734_; 
v_v_3716_ = lean_array_uget(v_bs_3714_, v_i_3713_);
v_fst_3717_ = lean_ctor_get(v_v_3716_, 0);
v_snd_3718_ = lean_ctor_get(v_v_3716_, 1);
v_isSharedCheck_3734_ = !lean_is_exclusive(v_v_3716_);
if (v_isSharedCheck_3734_ == 0)
{
v___x_3720_ = v_v_3716_;
v_isShared_3721_ = v_isSharedCheck_3734_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_snd_3718_);
lean_inc(v_fst_3717_);
lean_dec(v_v_3716_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3734_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3722_; lean_object* v_bs_x27_3723_; uint8_t v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3727_; 
v___x_3722_ = lean_unsigned_to_nat(0u);
v_bs_x27_3723_ = lean_array_uset(v_bs_3714_, v_i_3713_, v___x_3722_);
v___x_3724_ = 0;
v___x_3725_ = lean_box(v___x_3724_);
if (v_isShared_3721_ == 0)
{
lean_ctor_set(v___x_3720_, 0, v___x_3725_);
v___x_3727_ = v___x_3720_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3733_; 
v_reuseFailAlloc_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3733_, 0, v___x_3725_);
lean_ctor_set(v_reuseFailAlloc_3733_, 1, v_snd_3718_);
v___x_3727_ = v_reuseFailAlloc_3733_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
lean_object* v___x_3728_; size_t v___x_3729_; size_t v___x_3730_; lean_object* v___x_3731_; 
v___x_3728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3728_, 0, v_fst_3717_);
lean_ctor_set(v___x_3728_, 1, v___x_3727_);
v___x_3729_ = ((size_t)1ULL);
v___x_3730_ = lean_usize_add(v_i_3713_, v___x_3729_);
v___x_3731_ = lean_array_uset(v_bs_x27_3723_, v_i_3713_, v___x_3728_);
v_i_3713_ = v___x_3730_;
v_bs_3714_ = v___x_3731_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1___boxed(lean_object* v_sz_3735_, lean_object* v_i_3736_, lean_object* v_bs_3737_){
_start:
{
size_t v_sz_boxed_3738_; size_t v_i_boxed_3739_; lean_object* v_res_3740_; 
v_sz_boxed_3738_ = lean_unbox_usize(v_sz_3735_);
lean_dec(v_sz_3735_);
v_i_boxed_3739_ = lean_unbox_usize(v_i_3736_);
lean_dec(v_i_3736_);
v_res_3740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_boxed_3738_, v_i_boxed_3739_, v_bs_3737_);
return v_res_3740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(lean_object* v___x_3741_, lean_object* v___x_3742_, lean_object* v_a_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_){
_start:
{
lean_object* v___x_3754__overap_3749_; lean_object* v___x_3750_; 
v___x_3754__overap_3749_ = l_instInhabitedOfMonad___redArg(v___x_3741_, v___x_3742_);
lean_inc(v___y_3747_);
lean_inc_ref(v___y_3746_);
lean_inc(v___y_3745_);
lean_inc_ref(v___y_3744_);
v___x_3750_ = lean_apply_5(v___x_3754__overap_3749_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_, lean_box(0));
return v___x_3750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed(lean_object* v___x_3751_, lean_object* v___x_3752_, lean_object* v_a_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_){
_start:
{
lean_object* v_res_3759_; 
v_res_3759_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(v___x_3751_, v___x_3752_, v_a_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_);
lean_dec(v___y_3757_);
lean_dec_ref(v___y_3756_);
lean_dec(v___y_3755_);
lean_dec_ref(v___y_3754_);
lean_dec_ref(v_a_3753_);
return v_res_3759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed(lean_object* v_acc_3760_, lean_object* v_declInfos_3761_, lean_object* v_k_3762_, lean_object* v_kind_3763_, lean_object* v_b_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_){
_start:
{
uint8_t v_kind_boxed_3770_; lean_object* v_res_3771_; 
v_kind_boxed_3770_ = lean_unbox(v_kind_3763_);
v_res_3771_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(v_acc_3760_, v_declInfos_3761_, v_k_3762_, v_kind_boxed_3770_, v_b_3764_, v___y_3765_, v___y_3766_, v___y_3767_, v___y_3768_);
lean_dec(v___y_3768_);
lean_dec_ref(v___y_3767_);
lean_dec(v___y_3766_);
lean_dec_ref(v___y_3765_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(lean_object* v_acc_3772_, lean_object* v_declInfos_3773_, lean_object* v_k_3774_, uint8_t v_kind_3775_, lean_object* v_name_3776_, uint8_t v_bi_3777_, lean_object* v_type_3778_, uint8_t v_kind_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v___x_3785_; lean_object* v___f_3786_; lean_object* v___x_3787_; 
v___x_3785_ = lean_box(v_kind_3775_);
v___f_3786_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3786_, 0, v_acc_3772_);
lean_closure_set(v___f_3786_, 1, v_declInfos_3773_);
lean_closure_set(v___f_3786_, 2, v_k_3774_);
lean_closure_set(v___f_3786_, 3, v___x_3785_);
v___x_3787_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3776_, v_bi_3777_, v_type_3778_, v___f_3786_, v_kind_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_);
if (lean_obj_tag(v___x_3787_) == 0)
{
lean_object* v_a_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3795_; 
v_a_3788_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3790_ = v___x_3787_;
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_a_3788_);
lean_dec(v___x_3787_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3795_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3793_; 
if (v_isShared_3791_ == 0)
{
v___x_3793_ = v___x_3790_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v_a_3788_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
else
{
lean_object* v_a_3796_; lean_object* v___x_3798_; uint8_t v_isShared_3799_; uint8_t v_isSharedCheck_3803_; 
v_a_3796_ = lean_ctor_get(v___x_3787_, 0);
v_isSharedCheck_3803_ = !lean_is_exclusive(v___x_3787_);
if (v_isSharedCheck_3803_ == 0)
{
v___x_3798_ = v___x_3787_;
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
else
{
lean_inc(v_a_3796_);
lean_dec(v___x_3787_);
v___x_3798_ = lean_box(0);
v_isShared_3799_ = v_isSharedCheck_3803_;
goto v_resetjp_3797_;
}
v_resetjp_3797_:
{
lean_object* v___x_3801_; 
if (v_isShared_3799_ == 0)
{
v___x_3801_ = v___x_3798_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v_a_3796_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(lean_object* v_declInfos_3804_, lean_object* v_k_3805_, uint8_t v_kind_3806_, lean_object* v_acc_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_){
_start:
{
lean_object* v___f_3813_; lean_object* v___f_3814_; lean_object* v___f_3815_; lean_object* v___f_3816_; lean_object* v___f_3817_; lean_object* v___f_3818_; lean_object* v___f_3819_; lean_object* v___f_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v_toApplicative_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3911_; 
v___f_3813_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0));
v___f_3814_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_3815_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
v___f_3816_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__3));
v___f_3817_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__4));
v___f_3818_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_3818_, 0, v___f_3817_);
lean_closure_set(v___f_3818_, 1, v___f_3816_);
v___f_3819_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_3819_, 0, v___f_3816_);
v___f_3820_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__5));
v___x_3821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3821_, 0, v___f_3813_);
lean_ctor_set(v___x_3821_, 1, v___f_3814_);
v___x_3822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3822_, 0, v___x_3821_);
lean_ctor_set(v___x_3822_, 1, v___f_3815_);
lean_ctor_set(v___x_3822_, 2, v___f_3818_);
lean_ctor_set(v___x_3822_, 3, v___f_3819_);
lean_ctor_set(v___x_3822_, 4, v___f_3820_);
v___x_3823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3822_);
lean_ctor_set(v___x_3823_, 1, v___f_3816_);
v___x_3824_ = l_StateRefT_x27_instMonad___redArg(v___x_3823_);
v_toApplicative_3825_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3911_ == 0)
{
lean_object* v_unused_3912_; 
v_unused_3912_ = lean_ctor_get(v___x_3824_, 1);
lean_dec(v_unused_3912_);
v___x_3827_ = v___x_3824_;
v_isShared_3828_ = v_isSharedCheck_3911_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_toApplicative_3825_);
lean_dec(v___x_3824_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3911_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v_toFunctor_3829_; lean_object* v_toSeq_3830_; lean_object* v_toSeqLeft_3831_; lean_object* v_toSeqRight_3832_; lean_object* v___x_3834_; uint8_t v_isShared_3835_; uint8_t v_isSharedCheck_3909_; 
v_toFunctor_3829_ = lean_ctor_get(v_toApplicative_3825_, 0);
v_toSeq_3830_ = lean_ctor_get(v_toApplicative_3825_, 2);
v_toSeqLeft_3831_ = lean_ctor_get(v_toApplicative_3825_, 3);
v_toSeqRight_3832_ = lean_ctor_get(v_toApplicative_3825_, 4);
v_isSharedCheck_3909_ = !lean_is_exclusive(v_toApplicative_3825_);
if (v_isSharedCheck_3909_ == 0)
{
lean_object* v_unused_3910_; 
v_unused_3910_ = lean_ctor_get(v_toApplicative_3825_, 1);
lean_dec(v_unused_3910_);
v___x_3834_ = v_toApplicative_3825_;
v_isShared_3835_ = v_isSharedCheck_3909_;
goto v_resetjp_3833_;
}
else
{
lean_inc(v_toSeqRight_3832_);
lean_inc(v_toSeqLeft_3831_);
lean_inc(v_toSeq_3830_);
lean_inc(v_toFunctor_3829_);
lean_dec(v_toApplicative_3825_);
v___x_3834_ = lean_box(0);
v_isShared_3835_ = v_isSharedCheck_3909_;
goto v_resetjp_3833_;
}
v_resetjp_3833_:
{
lean_object* v___f_3836_; lean_object* v___f_3837_; lean_object* v___f_3838_; lean_object* v___f_3839_; lean_object* v___x_3840_; lean_object* v___f_3841_; lean_object* v___f_3842_; lean_object* v___f_3843_; lean_object* v___x_3845_; 
v___f_3836_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__6));
v___f_3837_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__7));
lean_inc_ref(v_toFunctor_3829_);
v___f_3838_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3838_, 0, v_toFunctor_3829_);
v___f_3839_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3839_, 0, v_toFunctor_3829_);
v___x_3840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3840_, 0, v___f_3838_);
lean_ctor_set(v___x_3840_, 1, v___f_3839_);
v___f_3841_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3841_, 0, v_toSeqRight_3832_);
v___f_3842_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3842_, 0, v_toSeqLeft_3831_);
v___f_3843_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3843_, 0, v_toSeq_3830_);
if (v_isShared_3835_ == 0)
{
lean_ctor_set(v___x_3834_, 4, v___f_3841_);
lean_ctor_set(v___x_3834_, 3, v___f_3842_);
lean_ctor_set(v___x_3834_, 2, v___f_3843_);
lean_ctor_set(v___x_3834_, 1, v___f_3836_);
lean_ctor_set(v___x_3834_, 0, v___x_3840_);
v___x_3845_ = v___x_3834_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3908_; 
v_reuseFailAlloc_3908_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3908_, 0, v___x_3840_);
lean_ctor_set(v_reuseFailAlloc_3908_, 1, v___f_3836_);
lean_ctor_set(v_reuseFailAlloc_3908_, 2, v___f_3843_);
lean_ctor_set(v_reuseFailAlloc_3908_, 3, v___f_3842_);
lean_ctor_set(v_reuseFailAlloc_3908_, 4, v___f_3841_);
v___x_3845_ = v_reuseFailAlloc_3908_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
lean_object* v___x_3847_; 
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 1, v___f_3837_);
lean_ctor_set(v___x_3827_, 0, v___x_3845_);
v___x_3847_ = v___x_3827_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v___x_3845_);
lean_ctor_set(v_reuseFailAlloc_3907_, 1, v___f_3837_);
v___x_3847_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
lean_object* v___x_3848_; lean_object* v_toApplicative_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3905_; 
v___x_3848_ = l_StateRefT_x27_instMonad___redArg(v___x_3847_);
v_toApplicative_3849_ = lean_ctor_get(v___x_3848_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3848_);
if (v_isSharedCheck_3905_ == 0)
{
lean_object* v_unused_3906_; 
v_unused_3906_ = lean_ctor_get(v___x_3848_, 1);
lean_dec(v_unused_3906_);
v___x_3851_ = v___x_3848_;
v_isShared_3852_ = v_isSharedCheck_3905_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_toApplicative_3849_);
lean_dec(v___x_3848_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3905_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v_toFunctor_3853_; lean_object* v_toSeq_3854_; lean_object* v_toSeqLeft_3855_; lean_object* v_toSeqRight_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3903_; 
v_toFunctor_3853_ = lean_ctor_get(v_toApplicative_3849_, 0);
v_toSeq_3854_ = lean_ctor_get(v_toApplicative_3849_, 2);
v_toSeqLeft_3855_ = lean_ctor_get(v_toApplicative_3849_, 3);
v_toSeqRight_3856_ = lean_ctor_get(v_toApplicative_3849_, 4);
v_isSharedCheck_3903_ = !lean_is_exclusive(v_toApplicative_3849_);
if (v_isSharedCheck_3903_ == 0)
{
lean_object* v_unused_3904_; 
v_unused_3904_ = lean_ctor_get(v_toApplicative_3849_, 1);
lean_dec(v_unused_3904_);
v___x_3858_ = v_toApplicative_3849_;
v_isShared_3859_ = v_isSharedCheck_3903_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_toSeqRight_3856_);
lean_inc(v_toSeqLeft_3855_);
lean_inc(v_toSeq_3854_);
lean_inc(v_toFunctor_3853_);
lean_dec(v_toApplicative_3849_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3903_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___f_3860_; lean_object* v___f_3861_; lean_object* v___f_3862_; lean_object* v___f_3863_; lean_object* v___x_3864_; lean_object* v___f_3865_; lean_object* v___f_3866_; lean_object* v___f_3867_; lean_object* v___x_3869_; 
v___f_3860_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_3861_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_3853_);
v___f_3862_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3862_, 0, v_toFunctor_3853_);
v___f_3863_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3863_, 0, v_toFunctor_3853_);
v___x_3864_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3864_, 0, v___f_3862_);
lean_ctor_set(v___x_3864_, 1, v___f_3863_);
v___f_3865_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3865_, 0, v_toSeqRight_3856_);
v___f_3866_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3866_, 0, v_toSeqLeft_3855_);
v___f_3867_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3867_, 0, v_toSeq_3854_);
if (v_isShared_3859_ == 0)
{
lean_ctor_set(v___x_3858_, 4, v___f_3865_);
lean_ctor_set(v___x_3858_, 3, v___f_3866_);
lean_ctor_set(v___x_3858_, 2, v___f_3867_);
lean_ctor_set(v___x_3858_, 1, v___f_3860_);
lean_ctor_set(v___x_3858_, 0, v___x_3864_);
v___x_3869_ = v___x_3858_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v___x_3864_);
lean_ctor_set(v_reuseFailAlloc_3902_, 1, v___f_3860_);
lean_ctor_set(v_reuseFailAlloc_3902_, 2, v___f_3867_);
lean_ctor_set(v_reuseFailAlloc_3902_, 3, v___f_3866_);
lean_ctor_set(v_reuseFailAlloc_3902_, 4, v___f_3865_);
v___x_3869_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3871_; 
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 1, v___f_3861_);
lean_ctor_set(v___x_3851_, 0, v___x_3869_);
v___x_3871_ = v___x_3851_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3901_, 1, v___f_3861_);
v___x_3871_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; uint8_t v___x_3874_; 
v___x_3872_ = lean_array_get_size(v_acc_3807_);
v___x_3873_ = lean_array_get_size(v_declInfos_3804_);
v___x_3874_ = lean_nat_dec_lt(v___x_3872_, v___x_3873_);
if (v___x_3874_ == 0)
{
lean_object* v___x_3875_; 
lean_dec_ref(v___x_3871_);
lean_dec_ref(v_declInfos_3804_);
lean_inc(v___y_3811_);
lean_inc_ref(v___y_3810_);
lean_inc(v___y_3809_);
lean_inc_ref(v___y_3808_);
v___x_3875_ = lean_apply_6(v_k_3805_, v_acc_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, lean_box(0));
return v___x_3875_;
}
else
{
lean_object* v___x_3876_; uint8_t v___x_3877_; lean_object* v___x_3878_; lean_object* v___f_3879_; lean_object* v___f_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v_snd_3885_; lean_object* v_fst_3886_; lean_object* v_fst_3887_; lean_object* v_snd_3888_; lean_object* v___x_3889_; 
v___x_3876_ = lean_box(0);
v___x_3877_ = 0;
v___x_3878_ = l_Lean_instInhabitedExpr;
v___f_3879_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3879_, 0, v___x_3871_);
lean_closure_set(v___f_3879_, 1, v___x_3878_);
v___f_3880_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3880_, 0, v___f_3879_);
v___x_3881_ = lean_box(v___x_3877_);
v___x_3882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
lean_ctor_set(v___x_3882_, 1, v___f_3880_);
v___x_3883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3876_);
lean_ctor_set(v___x_3883_, 1, v___x_3882_);
v___x_3884_ = lean_array_get(v___x_3883_, v_declInfos_3804_, v___x_3872_);
lean_dec_ref_known(v___x_3883_, 2);
v_snd_3885_ = lean_ctor_get(v___x_3884_, 1);
lean_inc(v_snd_3885_);
v_fst_3886_ = lean_ctor_get(v___x_3884_, 0);
lean_inc(v_fst_3886_);
lean_dec(v___x_3884_);
v_fst_3887_ = lean_ctor_get(v_snd_3885_, 0);
lean_inc(v_fst_3887_);
v_snd_3888_ = lean_ctor_get(v_snd_3885_, 1);
lean_inc(v_snd_3888_);
lean_dec(v_snd_3885_);
lean_inc(v___y_3811_);
lean_inc_ref(v___y_3810_);
lean_inc(v___y_3809_);
lean_inc_ref(v___y_3808_);
lean_inc_ref(v_acc_3807_);
v___x_3889_ = lean_apply_6(v_snd_3888_, v_acc_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, lean_box(0));
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; uint8_t v___x_3891_; lean_object* v___x_3892_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v___x_3889_, 1);
v___x_3891_ = lean_unbox(v_fst_3887_);
lean_dec(v_fst_3887_);
v___x_3892_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3807_, v_declInfos_3804_, v_k_3805_, v_kind_3806_, v_fst_3886_, v___x_3891_, v_a_3890_, v_kind_3806_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_);
return v___x_3892_;
}
else
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3900_; 
lean_dec(v_fst_3887_);
lean_dec(v_fst_3886_);
lean_dec_ref(v_acc_3807_);
lean_dec_ref(v_k_3805_);
lean_dec_ref(v_declInfos_3804_);
v_a_3893_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3895_ = v___x_3889_;
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v___x_3889_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3898_; 
if (v_isShared_3896_ == 0)
{
v___x_3898_ = v___x_3895_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_a_3893_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(lean_object* v_acc_3913_, lean_object* v_declInfos_3914_, lean_object* v_k_3915_, uint8_t v_kind_3916_, lean_object* v_b_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_){
_start:
{
lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3923_ = lean_array_push(v_acc_3913_, v_b_3917_);
v___x_3924_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3914_, v_k_3915_, v_kind_3916_, v___x_3923_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_);
return v___x_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___boxed(lean_object* v_acc_3925_, lean_object* v_declInfos_3926_, lean_object* v_k_3927_, lean_object* v_kind_3928_, lean_object* v_name_3929_, lean_object* v_bi_3930_, lean_object* v_type_3931_, lean_object* v_kind_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_){
_start:
{
uint8_t v_kind_boxed_3938_; uint8_t v_bi_boxed_3939_; uint8_t v_kind_boxed_3940_; lean_object* v_res_3941_; 
v_kind_boxed_3938_ = lean_unbox(v_kind_3928_);
v_bi_boxed_3939_ = lean_unbox(v_bi_3930_);
v_kind_boxed_3940_ = lean_unbox(v_kind_3932_);
v_res_3941_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3925_, v_declInfos_3926_, v_k_3927_, v_kind_boxed_3938_, v_name_3929_, v_bi_boxed_3939_, v_type_3931_, v_kind_boxed_3940_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
lean_dec(v___y_3936_);
lean_dec_ref(v___y_3935_);
lean_dec(v___y_3934_);
lean_dec_ref(v___y_3933_);
return v_res_3941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___boxed(lean_object* v_declInfos_3942_, lean_object* v_k_3943_, lean_object* v_kind_3944_, lean_object* v_acc_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
uint8_t v_kind_boxed_3951_; lean_object* v_res_3952_; 
v_kind_boxed_3951_ = lean_unbox(v_kind_3944_);
v_res_3952_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3942_, v_k_3943_, v_kind_boxed_3951_, v_acc_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_);
lean_dec(v___y_3949_);
lean_dec_ref(v___y_3948_);
lean_dec(v___y_3947_);
lean_dec_ref(v___y_3946_);
return v_res_3952_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(lean_object* v_declInfos_3953_, lean_object* v_k_3954_, uint8_t v_kind_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; 
v___x_3961_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_3962_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3953_, v_k_3954_, v_kind_3955_, v___x_3961_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_);
return v___x_3962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2___boxed(lean_object* v_declInfos_3963_, lean_object* v_k_3964_, lean_object* v_kind_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_){
_start:
{
uint8_t v_kind_boxed_3971_; lean_object* v_res_3972_; 
v_kind_boxed_3971_ = lean_unbox(v_kind_3965_);
v_res_3972_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v_declInfos_3963_, v_k_3964_, v_kind_boxed_3971_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
lean_dec(v___y_3967_);
lean_dec_ref(v___y_3966_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(lean_object* v_declInfos_3973_, lean_object* v_k_3974_, uint8_t v_kind_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_){
_start:
{
size_t v_sz_3981_; size_t v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
v_sz_3981_ = lean_array_size(v_declInfos_3973_);
v___x_3982_ = ((size_t)0ULL);
v___x_3983_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_3981_, v___x_3982_, v_declInfos_3973_);
v___x_3984_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v___x_3983_, v_k_3974_, v_kind_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
return v___x_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1___boxed(lean_object* v_declInfos_3985_, lean_object* v_k_3986_, lean_object* v_kind_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_){
_start:
{
uint8_t v_kind_boxed_3993_; lean_object* v_res_3994_; 
v_kind_boxed_3993_ = lean_unbox(v_kind_3987_);
v_res_3994_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v_declInfos_3985_, v_k_3986_, v_kind_boxed_3993_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
lean_dec(v___y_3991_);
lean_dec_ref(v___y_3990_);
lean_dec(v___y_3989_);
lean_dec_ref(v___y_3988_);
return v_res_3994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(lean_object* v_paramsIndices_3995_, lean_object* v_numParams_3996_, lean_object* v_a_3997_, lean_object* v___x_3998_, lean_object* v_compFields_3999_, lean_object* v_val_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_){
_start:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v_lower_4011_; lean_object* v_upper_4012_; lean_object* v___x_4021_; uint8_t v___x_4022_; 
v___x_4006_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_3996_);
lean_inc_ref(v_paramsIndices_3995_);
v___x_4007_ = l_Array_toSubarray___redArg(v_paramsIndices_3995_, v___x_4006_, v_numParams_3996_);
v___x_4008_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_4009_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_4007_, v___x_4008_);
v___x_4021_ = lean_array_get_size(v_paramsIndices_3995_);
v___x_4022_ = lean_nat_dec_le(v_numParams_3996_, v___x_4006_);
if (v___x_4022_ == 0)
{
v_lower_4011_ = v_numParams_3996_;
v_upper_4012_ = v___x_4021_;
goto v___jp_4010_;
}
else
{
lean_dec(v_numParams_3996_);
v_lower_4011_ = v___x_4006_;
v_upper_4012_ = v___x_4021_;
goto v___jp_4010_;
}
v___jp_4010_:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___f_4015_; size_t v_sz_4016_; size_t v___x_4017_; lean_object* v___x_4018_; uint8_t v___x_4019_; lean_object* v___x_4020_; 
v___x_4013_ = l_Array_toSubarray___redArg(v_paramsIndices_3995_, v_lower_4011_, v_upper_4012_);
v___x_4014_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_4013_, v___x_4008_);
lean_inc_ref(v_val_4000_);
lean_inc_ref(v___x_4014_);
lean_inc_ref(v_compFields_3999_);
lean_inc_ref(v___x_4009_);
v___f_4015_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed), 12, 6);
lean_closure_set(v___f_4015_, 0, v_a_3997_);
lean_closure_set(v___f_4015_, 1, v___x_3998_);
lean_closure_set(v___f_4015_, 2, v___x_4009_);
lean_closure_set(v___f_4015_, 3, v_compFields_3999_);
lean_closure_set(v___f_4015_, 4, v___x_4014_);
lean_closure_set(v___f_4015_, 5, v_val_4000_);
v_sz_4016_ = lean_array_size(v_compFields_3999_);
v___x_4017_ = ((size_t)0ULL);
v___x_4018_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_4009_, v___x_4014_, v_val_4000_, v_sz_4016_, v___x_4017_, v_compFields_3999_);
v___x_4019_ = 0;
v___x_4020_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v___x_4018_, v___f_4015_, v___x_4019_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
return v___x_4020_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed(lean_object* v_paramsIndices_4023_, lean_object* v_numParams_4024_, lean_object* v_a_4025_, lean_object* v___x_4026_, lean_object* v_compFields_4027_, lean_object* v_val_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(v_paramsIndices_4023_, v_numParams_4024_, v_a_4025_, v___x_4026_, v_compFields_4027_, v_val_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_);
lean_dec(v___y_4032_);
lean_dec_ref(v___y_4031_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(lean_object* v_k_4035_, lean_object* v_b_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
lean_object* v___x_4042_; 
lean_inc(v___y_4040_);
lean_inc_ref(v___y_4039_);
lean_inc(v___y_4038_);
lean_inc_ref(v___y_4037_);
v___x_4042_ = lean_apply_6(v_k_4035_, v_b_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, lean_box(0));
return v___x_4042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed(lean_object* v_k_4043_, lean_object* v_b_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_){
_start:
{
lean_object* v_res_4050_; 
v_res_4050_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(v_k_4043_, v_b_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_);
lean_dec(v___y_4048_);
lean_dec_ref(v___y_4047_);
lean_dec(v___y_4046_);
lean_dec_ref(v___y_4045_);
return v_res_4050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(lean_object* v_name_4051_, uint8_t v_bi_4052_, lean_object* v_type_4053_, lean_object* v_k_4054_, uint8_t v_kind_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_){
_start:
{
lean_object* v___f_4061_; lean_object* v___x_4062_; 
v___f_4061_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4061_, 0, v_k_4054_);
v___x_4062_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_4051_, v_bi_4052_, v_type_4053_, v___f_4061_, v_kind_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4070_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4065_ = v___x_4062_;
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v___x_4062_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_a_4063_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
else
{
lean_object* v_a_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4078_; 
v_a_4071_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4078_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4078_ == 0)
{
v___x_4073_ = v___x_4062_;
v_isShared_4074_ = v_isSharedCheck_4078_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_a_4071_);
lean_dec(v___x_4062_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4078_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v___x_4076_; 
if (v_isShared_4074_ == 0)
{
v___x_4076_ = v___x_4073_;
goto v_reusejp_4075_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_a_4071_);
v___x_4076_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4075_;
}
v_reusejp_4075_:
{
return v___x_4076_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___boxed(lean_object* v_name_4079_, lean_object* v_bi_4080_, lean_object* v_type_4081_, lean_object* v_k_4082_, lean_object* v_kind_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
uint8_t v_bi_boxed_4089_; uint8_t v_kind_boxed_4090_; lean_object* v_res_4091_; 
v_bi_boxed_4089_ = lean_unbox(v_bi_4080_);
v_kind_boxed_4090_ = lean_unbox(v_kind_4083_);
v_res_4091_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4079_, v_bi_boxed_4089_, v_type_4081_, v_k_4082_, v_kind_boxed_4090_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_);
lean_dec(v___y_4087_);
lean_dec_ref(v___y_4086_);
lean_dec(v___y_4085_);
lean_dec_ref(v___y_4084_);
return v_res_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(lean_object* v_name_4092_, lean_object* v_type_4093_, lean_object* v_k_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_){
_start:
{
uint8_t v___x_4100_; uint8_t v___x_4101_; lean_object* v___x_4102_; 
v___x_4100_ = 0;
v___x_4101_ = 0;
v___x_4102_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4092_, v___x_4100_, v_type_4093_, v_k_4094_, v___x_4101_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_);
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg___boxed(lean_object* v_name_4103_, lean_object* v_type_4104_, lean_object* v_k_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_){
_start:
{
lean_object* v_res_4111_; 
v_res_4111_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4103_, v_type_4104_, v_k_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
lean_dec(v___y_4109_);
lean_dec_ref(v___y_4108_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
return v_res_4111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(lean_object* v_numParams_4112_, lean_object* v_a_4113_, lean_object* v___x_4114_, lean_object* v_compFields_4115_, lean_object* v_name_4116_, lean_object* v_paramsIndices_4117_, lean_object* v_x_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_){
_start:
{
lean_object* v___f_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
lean_inc(v___x_4114_);
lean_inc_ref(v_paramsIndices_4117_);
v___f_4124_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed), 11, 5);
lean_closure_set(v___f_4124_, 0, v_paramsIndices_4117_);
lean_closure_set(v___f_4124_, 1, v_numParams_4112_);
lean_closure_set(v___f_4124_, 2, v_a_4113_);
lean_closure_set(v___f_4124_, 3, v___x_4114_);
lean_closure_set(v___f_4124_, 4, v_compFields_4115_);
v___x_4125_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_4126_ = l_Lean_mkConst(v_name_4116_, v___x_4114_);
v___x_4127_ = l_Lean_mkAppN(v___x_4126_, v_paramsIndices_4117_);
lean_dec_ref(v_paramsIndices_4117_);
v___x_4128_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v___x_4125_, v___x_4127_, v___f_4124_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed(lean_object* v_numParams_4129_, lean_object* v_a_4130_, lean_object* v___x_4131_, lean_object* v_compFields_4132_, lean_object* v_name_4133_, lean_object* v_paramsIndices_4134_, lean_object* v_x_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_){
_start:
{
lean_object* v_res_4141_; 
v_res_4141_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(v_numParams_4129_, v_a_4130_, v___x_4131_, v_compFields_4132_, v_name_4133_, v_paramsIndices_4134_, v_x_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec(v___y_4137_);
lean_dec_ref(v___y_4136_);
lean_dec_ref(v_x_4135_);
return v_res_4141_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1(void){
_start:
{
lean_object* v___x_4143_; lean_object* v___x_4144_; 
v___x_4143_ = ((lean_object*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0));
v___x_4144_ = l_Lean_stringToMessageData(v___x_4143_);
return v___x_4144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(lean_object* v_declName_4145_, lean_object* v_compFields_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v___x_4152_; 
v___x_4152_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_declName_4145_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_);
if (lean_obj_tag(v___x_4152_) == 0)
{
lean_object* v_a_4153_; lean_object* v_toConstantVal_4154_; lean_object* v_numParams_4155_; lean_object* v_ctors_4156_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___y_4161_; lean_object* v___x_4170_; lean_object* v___x_4171_; uint8_t v___x_4172_; 
v_a_4153_ = lean_ctor_get(v___x_4152_, 0);
lean_inc(v_a_4153_);
lean_dec_ref_known(v___x_4152_, 1);
v_toConstantVal_4154_ = lean_ctor_get(v_a_4153_, 0);
v_numParams_4155_ = lean_ctor_get(v_a_4153_, 1);
lean_inc(v_numParams_4155_);
v_ctors_4156_ = lean_ctor_get(v_a_4153_, 4);
v___x_4170_ = l_List_lengthTR___redArg(v_ctors_4156_);
v___x_4171_ = lean_unsigned_to_nat(2u);
v___x_4172_ = lean_nat_dec_lt(v___x_4170_, v___x_4171_);
lean_dec(v___x_4170_);
if (v___x_4172_ == 0)
{
v___y_4158_ = v___y_4147_;
v___y_4159_ = v___y_4148_;
v___y_4160_ = v___y_4149_;
v___y_4161_ = v___y_4150_;
goto v___jp_4157_;
}
else
{
lean_object* v___x_4173_; lean_object* v___x_4174_; 
lean_dec(v_numParams_4155_);
lean_dec(v_a_4153_);
lean_dec_ref(v_compFields_4146_);
v___x_4173_ = lean_obj_once(&l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1, &l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1_once, _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1);
v___x_4174_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_4173_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_);
return v___x_4174_;
}
v___jp_4157_:
{
lean_object* v_name_4162_; lean_object* v_levelParams_4163_; lean_object* v_type_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___f_4167_; uint8_t v___x_4168_; lean_object* v___x_4169_; 
v_name_4162_ = lean_ctor_get(v_toConstantVal_4154_, 0);
lean_inc(v_name_4162_);
v_levelParams_4163_ = lean_ctor_get(v_toConstantVal_4154_, 1);
v_type_4164_ = lean_ctor_get(v_toConstantVal_4154_, 2);
lean_inc_ref(v_type_4164_);
v___x_4165_ = lean_box(0);
lean_inc(v_levelParams_4163_);
v___x_4166_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_4163_, v___x_4165_);
v___f_4167_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed), 12, 5);
lean_closure_set(v___f_4167_, 0, v_numParams_4155_);
lean_closure_set(v___f_4167_, 1, v_a_4153_);
lean_closure_set(v___f_4167_, 2, v___x_4166_);
lean_closure_set(v___f_4167_, 3, v_compFields_4146_);
lean_closure_set(v___f_4167_, 4, v_name_4162_);
v___x_4168_ = 0;
v___x_4169_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_4164_, v___f_4167_, v___x_4168_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_);
return v___x_4169_;
}
}
else
{
lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4182_; 
lean_dec_ref(v_compFields_4146_);
v_a_4175_ = lean_ctor_get(v___x_4152_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___x_4152_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4177_ = v___x_4152_;
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v___x_4152_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4180_; 
if (v_isShared_4178_ == 0)
{
v___x_4180_ = v___x_4177_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4175_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___boxed(lean_object* v_declName_4183_, lean_object* v_compFields_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v_res_4190_; 
v_res_4190_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_declName_4183_, v_compFields_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_);
lean_dec(v___y_4188_);
lean_dec_ref(v___y_4187_);
lean_dec(v___y_4186_);
lean_dec_ref(v___y_4185_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(lean_object* v_00_u03b1_4191_, lean_object* v_name_4192_, uint8_t v_bi_4193_, lean_object* v_type_4194_, lean_object* v_k_4195_, uint8_t v_kind_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_){
_start:
{
lean_object* v___x_4202_; 
v___x_4202_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4192_, v_bi_4193_, v_type_4194_, v_k_4195_, v_kind_4196_, v___y_4197_, v___y_4198_, v___y_4199_, v___y_4200_);
return v___x_4202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___boxed(lean_object* v_00_u03b1_4203_, lean_object* v_name_4204_, lean_object* v_bi_4205_, lean_object* v_type_4206_, lean_object* v_k_4207_, lean_object* v_kind_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_){
_start:
{
uint8_t v_bi_boxed_4214_; uint8_t v_kind_boxed_4215_; lean_object* v_res_4216_; 
v_bi_boxed_4214_ = lean_unbox(v_bi_4205_);
v_kind_boxed_4215_ = lean_unbox(v_kind_4208_);
v_res_4216_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(v_00_u03b1_4203_, v_name_4204_, v_bi_boxed_4214_, v_type_4206_, v_k_4207_, v_kind_boxed_4215_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
lean_dec(v___y_4212_);
lean_dec_ref(v___y_4211_);
lean_dec(v___y_4210_);
lean_dec_ref(v___y_4209_);
return v_res_4216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(lean_object* v_00_u03b1_4217_, lean_object* v_name_4218_, lean_object* v_type_4219_, lean_object* v_k_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_){
_start:
{
lean_object* v___x_4226_; 
v___x_4226_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4218_, v_type_4219_, v_k_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_);
return v___x_4226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___boxed(lean_object* v_00_u03b1_4227_, lean_object* v_name_4228_, lean_object* v_type_4229_, lean_object* v_k_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(v_00_u03b1_4227_, v_name_4228_, v_type_4229_, v_k_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4233_);
lean_dec(v___y_4232_);
lean_dec_ref(v___y_4231_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(lean_object* v_as_4237_, size_t v_sz_4238_, size_t v_i_4239_, lean_object* v_b_4240_, lean_object* v___y_4241_){
_start:
{
lean_object* v_a_4244_; uint8_t v___x_4248_; 
v___x_4248_ = lean_usize_dec_lt(v_i_4239_, v_sz_4238_);
if (v___x_4248_ == 0)
{
lean_object* v___x_4249_; 
v___x_4249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4249_, 0, v_b_4240_);
return v___x_4249_;
}
else
{
lean_object* v_a_4250_; lean_object* v___x_4251_; lean_object* v_env_4252_; uint8_t v___x_4253_; 
v_a_4250_ = lean_array_uget_borrowed(v_as_4237_, v_i_4239_);
v___x_4251_ = lean_st_ref_get(v___y_4241_);
v_env_4252_ = lean_ctor_get(v___x_4251_, 0);
lean_inc_ref(v_env_4252_);
lean_dec(v___x_4251_);
lean_inc(v_a_4250_);
v___x_4253_ = l_Lean_isExtern(v_env_4252_, v_a_4250_);
if (v___x_4253_ == 0)
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v___x_4254_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_4250_);
v___x_4255_ = l_Lean_Name_append(v_a_4250_, v___x_4254_);
v___x_4256_ = lean_array_push(v_b_4240_, v___x_4255_);
v_a_4244_ = v___x_4256_;
goto v___jp_4243_;
}
else
{
v_a_4244_ = v_b_4240_;
goto v___jp_4243_;
}
}
v___jp_4243_:
{
size_t v___x_4245_; size_t v___x_4246_; 
v___x_4245_ = ((size_t)1ULL);
v___x_4246_ = lean_usize_add(v_i_4239_, v___x_4245_);
v_i_4239_ = v___x_4246_;
v_b_4240_ = v_a_4244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg___boxed(lean_object* v_as_4257_, lean_object* v_sz_4258_, lean_object* v_i_4259_, lean_object* v_b_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_){
_start:
{
size_t v_sz_boxed_4263_; size_t v_i_boxed_4264_; lean_object* v_res_4265_; 
v_sz_boxed_4263_ = lean_unbox_usize(v_sz_4258_);
lean_dec(v_sz_4258_);
v_i_boxed_4264_ = lean_unbox_usize(v_i_4259_);
lean_dec(v_i_4259_);
v_res_4265_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4257_, v_sz_boxed_4263_, v_i_boxed_4264_, v_b_4260_, v___y_4261_);
lean_dec(v___y_4261_);
lean_dec_ref(v_as_4257_);
return v_res_4265_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(lean_object* v_as_x27_4266_, lean_object* v_b_4267_){
_start:
{
if (lean_obj_tag(v_as_x27_4266_) == 0)
{
lean_object* v___x_4269_; 
v___x_4269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4269_, 0, v_b_4267_);
return v___x_4269_;
}
else
{
lean_object* v_head_4270_; lean_object* v_tail_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v_head_4270_ = lean_ctor_get(v_as_x27_4266_, 0);
v_tail_4271_ = lean_ctor_get(v_as_x27_4266_, 1);
v___x_4272_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_4270_);
v___x_4273_ = l_Lean_Name_append(v_head_4270_, v___x_4272_);
v___x_4274_ = lean_array_push(v_b_4267_, v___x_4273_);
v_as_x27_4266_ = v_tail_4271_;
v_b_4267_ = v___x_4274_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg___boxed(lean_object* v_as_x27_4276_, lean_object* v_b_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v_res_4279_; 
v_res_4279_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4276_, v_b_4277_);
lean_dec(v_as_x27_4276_);
return v_res_4279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(lean_object* v_as_4280_, size_t v_sz_4281_, size_t v_i_4282_, lean_object* v_b_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_){
_start:
{
uint8_t v___x_4289_; 
v___x_4289_ = lean_usize_dec_lt(v_i_4282_, v_sz_4281_);
if (v___x_4289_ == 0)
{
lean_object* v___x_4290_; 
v___x_4290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4290_, 0, v_b_4283_);
return v___x_4290_;
}
else
{
lean_object* v_a_4291_; lean_object* v_fst_4292_; lean_object* v_snd_4293_; lean_object* v___x_4294_; 
v_a_4291_ = lean_array_uget_borrowed(v_as_4280_, v_i_4282_);
v_fst_4292_ = lean_ctor_get(v_a_4291_, 0);
v_snd_4293_ = lean_ctor_get(v_a_4291_, 1);
lean_inc(v_fst_4292_);
v___x_4294_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_fst_4292_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_);
if (lean_obj_tag(v___x_4294_) == 0)
{
lean_object* v_a_4295_; lean_object* v_ctors_4296_; lean_object* v___x_4297_; 
v_a_4295_ = lean_ctor_get(v___x_4294_, 0);
lean_inc(v_a_4295_);
lean_dec_ref_known(v___x_4294_, 1);
v_ctors_4296_ = lean_ctor_get(v_a_4295_, 4);
lean_inc(v_ctors_4296_);
lean_dec(v_a_4295_);
v___x_4297_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_ctors_4296_, v_b_4283_);
lean_dec(v_ctors_4296_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; size_t v_sz_4299_; size_t v___x_4300_; lean_object* v___x_4301_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4297_, 1);
v_sz_4299_ = lean_array_size(v_snd_4293_);
v___x_4300_ = ((size_t)0ULL);
v___x_4301_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_snd_4293_, v_sz_4299_, v___x_4300_, v_a_4298_, v___y_4287_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; size_t v___x_4303_; size_t v___x_4304_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
lean_inc(v_a_4302_);
lean_dec_ref_known(v___x_4301_, 1);
v___x_4303_ = ((size_t)1ULL);
v___x_4304_ = lean_usize_add(v_i_4282_, v___x_4303_);
v_i_4282_ = v___x_4304_;
v_b_4283_ = v_a_4302_;
goto _start;
}
else
{
return v___x_4301_;
}
}
else
{
return v___x_4297_;
}
}
else
{
lean_object* v_a_4306_; lean_object* v___x_4308_; uint8_t v_isShared_4309_; uint8_t v_isSharedCheck_4313_; 
lean_dec_ref(v_b_4283_);
v_a_4306_ = lean_ctor_get(v___x_4294_, 0);
v_isSharedCheck_4313_ = !lean_is_exclusive(v___x_4294_);
if (v_isSharedCheck_4313_ == 0)
{
v___x_4308_ = v___x_4294_;
v_isShared_4309_ = v_isSharedCheck_4313_;
goto v_resetjp_4307_;
}
else
{
lean_inc(v_a_4306_);
lean_dec(v___x_4294_);
v___x_4308_ = lean_box(0);
v_isShared_4309_ = v_isSharedCheck_4313_;
goto v_resetjp_4307_;
}
v_resetjp_4307_:
{
lean_object* v___x_4311_; 
if (v_isShared_4309_ == 0)
{
v___x_4311_ = v___x_4308_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4312_; 
v_reuseFailAlloc_4312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4312_, 0, v_a_4306_);
v___x_4311_ = v_reuseFailAlloc_4312_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
return v___x_4311_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6___boxed(lean_object* v_as_4314_, lean_object* v_sz_4315_, lean_object* v_i_4316_, lean_object* v_b_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_){
_start:
{
size_t v_sz_boxed_4323_; size_t v_i_boxed_4324_; lean_object* v_res_4325_; 
v_sz_boxed_4323_ = lean_unbox_usize(v_sz_4315_);
lean_dec(v_sz_4315_);
v_i_boxed_4324_ = lean_unbox_usize(v_i_4316_);
lean_dec(v_i_4316_);
v_res_4325_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_as_4314_, v_sz_boxed_4323_, v_i_boxed_4324_, v_b_4317_, v___y_4318_, v___y_4319_, v___y_4320_, v___y_4321_);
lean_dec(v___y_4321_);
lean_dec_ref(v___y_4320_);
lean_dec(v___y_4319_);
lean_dec_ref(v___y_4318_);
lean_dec_ref(v_as_4314_);
return v_res_4325_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(uint8_t v_suppressElabErrors_4333_, uint8_t v___y_4334_, lean_object* v_x_4335_){
_start:
{
if (lean_obj_tag(v_x_4335_) == 1)
{
lean_object* v_pre_4336_; 
v_pre_4336_ = lean_ctor_get(v_x_4335_, 0);
switch(lean_obj_tag(v_pre_4336_))
{
case 1:
{
lean_object* v_pre_4337_; 
v_pre_4337_ = lean_ctor_get(v_pre_4336_, 0);
switch(lean_obj_tag(v_pre_4337_))
{
case 0:
{
lean_object* v_str_4338_; lean_object* v_str_4339_; lean_object* v___x_4340_; uint8_t v___x_4341_; 
v_str_4338_ = lean_ctor_get(v_x_4335_, 1);
v_str_4339_ = lean_ctor_get(v_pre_4336_, 1);
v___x_4340_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_4341_ = lean_string_dec_eq(v_str_4339_, v___x_4340_);
if (v___x_4341_ == 0)
{
lean_object* v___x_4342_; uint8_t v___x_4343_; 
v___x_4342_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0));
v___x_4343_ = lean_string_dec_eq(v_str_4339_, v___x_4342_);
if (v___x_4343_ == 0)
{
return v___x_4343_;
}
else
{
lean_object* v___x_4344_; uint8_t v___x_4345_; 
v___x_4344_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1));
v___x_4345_ = lean_string_dec_eq(v_str_4338_, v___x_4344_);
if (v___x_4345_ == 0)
{
return v___x_4345_;
}
else
{
return v_suppressElabErrors_4333_;
}
}
}
else
{
lean_object* v___x_4346_; uint8_t v___x_4347_; 
v___x_4346_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2));
v___x_4347_ = lean_string_dec_eq(v_str_4338_, v___x_4346_);
if (v___x_4347_ == 0)
{
return v___x_4347_;
}
else
{
return v_suppressElabErrors_4333_;
}
}
}
case 1:
{
lean_object* v_pre_4348_; 
v_pre_4348_ = lean_ctor_get(v_pre_4337_, 0);
if (lean_obj_tag(v_pre_4348_) == 0)
{
lean_object* v_str_4349_; lean_object* v_str_4350_; lean_object* v_str_4351_; lean_object* v___x_4352_; uint8_t v___x_4353_; 
v_str_4349_ = lean_ctor_get(v_x_4335_, 1);
v_str_4350_ = lean_ctor_get(v_pre_4336_, 1);
v_str_4351_ = lean_ctor_get(v_pre_4337_, 1);
v___x_4352_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3));
v___x_4353_ = lean_string_dec_eq(v_str_4351_, v___x_4352_);
if (v___x_4353_ == 0)
{
return v___x_4353_;
}
else
{
lean_object* v___x_4354_; uint8_t v___x_4355_; 
v___x_4354_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4));
v___x_4355_ = lean_string_dec_eq(v_str_4350_, v___x_4354_);
if (v___x_4355_ == 0)
{
return v___x_4355_;
}
else
{
lean_object* v___x_4356_; uint8_t v___x_4357_; 
v___x_4356_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5));
v___x_4357_ = lean_string_dec_eq(v_str_4349_, v___x_4356_);
if (v___x_4357_ == 0)
{
return v___x_4357_;
}
else
{
return v_suppressElabErrors_4333_;
}
}
}
}
else
{
return v___y_4334_;
}
}
default: 
{
return v___y_4334_;
}
}
}
case 0:
{
lean_object* v_str_4358_; lean_object* v___x_4359_; uint8_t v___x_4360_; 
v_str_4358_ = lean_ctor_get(v_x_4335_, 1);
v___x_4359_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6));
v___x_4360_ = lean_string_dec_eq(v_str_4358_, v___x_4359_);
if (v___x_4360_ == 0)
{
return v___x_4360_;
}
else
{
return v_suppressElabErrors_4333_;
}
}
default: 
{
return v___y_4334_;
}
}
}
else
{
return v___y_4334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed(lean_object* v_suppressElabErrors_4361_, lean_object* v___y_4362_, lean_object* v_x_4363_){
_start:
{
uint8_t v_suppressElabErrors_boxed_4364_; uint8_t v___y_7933__boxed_4365_; uint8_t v_res_4366_; lean_object* v_r_4367_; 
v_suppressElabErrors_boxed_4364_ = lean_unbox(v_suppressElabErrors_4361_);
v___y_7933__boxed_4365_ = lean_unbox(v___y_4362_);
v_res_4366_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(v_suppressElabErrors_boxed_4364_, v___y_7933__boxed_4365_, v_x_4363_);
lean_dec(v_x_4363_);
v_r_4367_ = lean_box(v_res_4366_);
return v_r_4367_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(lean_object* v_opts_4368_, lean_object* v_opt_4369_){
_start:
{
lean_object* v_name_4370_; lean_object* v_defValue_4371_; lean_object* v_map_4372_; lean_object* v___x_4373_; 
v_name_4370_ = lean_ctor_get(v_opt_4369_, 0);
v_defValue_4371_ = lean_ctor_get(v_opt_4369_, 1);
v_map_4372_ = lean_ctor_get(v_opts_4368_, 0);
v___x_4373_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4372_, v_name_4370_);
if (lean_obj_tag(v___x_4373_) == 0)
{
uint8_t v___x_4374_; 
v___x_4374_ = lean_unbox(v_defValue_4371_);
return v___x_4374_;
}
else
{
lean_object* v_val_4375_; 
v_val_4375_ = lean_ctor_get(v___x_4373_, 0);
lean_inc(v_val_4375_);
lean_dec_ref_known(v___x_4373_, 1);
if (lean_obj_tag(v_val_4375_) == 1)
{
uint8_t v_v_4376_; 
v_v_4376_ = lean_ctor_get_uint8(v_val_4375_, 0);
lean_dec_ref_known(v_val_4375_, 0);
return v_v_4376_;
}
else
{
uint8_t v___x_4377_; 
lean_dec(v_val_4375_);
v___x_4377_ = lean_unbox(v_defValue_4371_);
return v___x_4377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8___boxed(lean_object* v_opts_4378_, lean_object* v_opt_4379_){
_start:
{
uint8_t v_res_4380_; lean_object* v_r_4381_; 
v_res_4380_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v_opts_4378_, v_opt_4379_);
lean_dec_ref(v_opt_4379_);
lean_dec_ref(v_opts_4378_);
v_r_4381_ = lean_box(v_res_4380_);
return v_r_4381_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(lean_object* v_ref_4383_, lean_object* v_msgData_4384_, uint8_t v_severity_4385_, uint8_t v_isSilent_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_){
_start:
{
lean_object* v___y_4393_; lean_object* v___y_4394_; lean_object* v___y_4395_; lean_object* v___y_4396_; lean_object* v___y_4397_; uint8_t v___y_4398_; uint8_t v___y_4399_; lean_object* v_currNamespace_4400_; lean_object* v_openDecls_4401_; lean_object* v___y_4402_; lean_object* v___y_4428_; lean_object* v___y_4429_; lean_object* v___y_4430_; uint8_t v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4433_; lean_object* v___y_4434_; uint8_t v___y_4435_; uint8_t v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4455_; lean_object* v___y_4456_; lean_object* v___y_4457_; uint8_t v___y_4458_; lean_object* v___y_4459_; lean_object* v___y_4460_; uint8_t v___y_4461_; lean_object* v___y_4462_; uint8_t v___y_4463_; lean_object* v___y_4464_; lean_object* v___y_4468_; lean_object* v___y_4469_; lean_object* v___y_4470_; uint8_t v___y_4471_; lean_object* v___y_4472_; lean_object* v___y_4473_; uint8_t v___y_4474_; lean_object* v___y_4475_; uint8_t v___y_4476_; uint8_t v___x_4481_; lean_object* v___y_4483_; lean_object* v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4486_; lean_object* v___y_4487_; uint8_t v___y_4488_; lean_object* v___y_4489_; uint8_t v___y_4490_; uint8_t v___y_4491_; uint8_t v___y_4493_; uint8_t v___x_4511_; 
v___x_4481_ = 2;
v___x_4511_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4385_, v___x_4481_);
if (v___x_4511_ == 0)
{
v___y_4493_ = v___x_4511_;
goto v___jp_4492_;
}
else
{
uint8_t v___x_4512_; 
lean_inc_ref(v_msgData_4384_);
v___x_4512_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4384_);
v___y_4493_ = v___x_4512_;
goto v___jp_4492_;
}
v___jp_4392_:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___x_4406_; lean_object* v_env_4407_; lean_object* v_nextMacroScope_4408_; lean_object* v_ngen_4409_; lean_object* v_auxDeclNGen_4410_; lean_object* v_traceState_4411_; lean_object* v_cache_4412_; lean_object* v_messages_4413_; lean_object* v_infoState_4414_; lean_object* v_snapshotTasks_4415_; lean_object* v___x_4417_; uint8_t v_isShared_4418_; uint8_t v_isSharedCheck_4426_; 
lean_inc(v_openDecls_4401_);
lean_inc(v_currNamespace_4400_);
v___x_4403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4403_, 0, v_currNamespace_4400_);
lean_ctor_set(v___x_4403_, 1, v_openDecls_4401_);
v___x_4404_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4403_);
lean_ctor_set(v___x_4404_, 1, v___y_4395_);
lean_inc_ref(v___y_4394_);
lean_inc_ref(v___y_4397_);
v___x_4405_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4405_, 0, v___y_4397_);
lean_ctor_set(v___x_4405_, 1, v___y_4393_);
lean_ctor_set(v___x_4405_, 2, v___y_4396_);
lean_ctor_set(v___x_4405_, 3, v___y_4394_);
lean_ctor_set(v___x_4405_, 4, v___x_4404_);
lean_ctor_set_uint8(v___x_4405_, sizeof(void*)*5, v___y_4398_);
lean_ctor_set_uint8(v___x_4405_, sizeof(void*)*5 + 1, v___y_4399_);
lean_ctor_set_uint8(v___x_4405_, sizeof(void*)*5 + 2, v_isSilent_4386_);
v___x_4406_ = lean_st_ref_take(v___y_4402_);
v_env_4407_ = lean_ctor_get(v___x_4406_, 0);
v_nextMacroScope_4408_ = lean_ctor_get(v___x_4406_, 1);
v_ngen_4409_ = lean_ctor_get(v___x_4406_, 2);
v_auxDeclNGen_4410_ = lean_ctor_get(v___x_4406_, 3);
v_traceState_4411_ = lean_ctor_get(v___x_4406_, 4);
v_cache_4412_ = lean_ctor_get(v___x_4406_, 5);
v_messages_4413_ = lean_ctor_get(v___x_4406_, 6);
v_infoState_4414_ = lean_ctor_get(v___x_4406_, 7);
v_snapshotTasks_4415_ = lean_ctor_get(v___x_4406_, 8);
v_isSharedCheck_4426_ = !lean_is_exclusive(v___x_4406_);
if (v_isSharedCheck_4426_ == 0)
{
v___x_4417_ = v___x_4406_;
v_isShared_4418_ = v_isSharedCheck_4426_;
goto v_resetjp_4416_;
}
else
{
lean_inc(v_snapshotTasks_4415_);
lean_inc(v_infoState_4414_);
lean_inc(v_messages_4413_);
lean_inc(v_cache_4412_);
lean_inc(v_traceState_4411_);
lean_inc(v_auxDeclNGen_4410_);
lean_inc(v_ngen_4409_);
lean_inc(v_nextMacroScope_4408_);
lean_inc(v_env_4407_);
lean_dec(v___x_4406_);
v___x_4417_ = lean_box(0);
v_isShared_4418_ = v_isSharedCheck_4426_;
goto v_resetjp_4416_;
}
v_resetjp_4416_:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4422_; 
v___x_4419_ = lean_box(0);
v___x_4420_ = l_Lean_MessageLog_add(v___x_4405_, v_messages_4413_);
if (v_isShared_4418_ == 0)
{
lean_ctor_set(v___x_4417_, 6, v___x_4420_);
v___x_4422_ = v___x_4417_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v_env_4407_);
lean_ctor_set(v_reuseFailAlloc_4425_, 1, v_nextMacroScope_4408_);
lean_ctor_set(v_reuseFailAlloc_4425_, 2, v_ngen_4409_);
lean_ctor_set(v_reuseFailAlloc_4425_, 3, v_auxDeclNGen_4410_);
lean_ctor_set(v_reuseFailAlloc_4425_, 4, v_traceState_4411_);
lean_ctor_set(v_reuseFailAlloc_4425_, 5, v_cache_4412_);
lean_ctor_set(v_reuseFailAlloc_4425_, 6, v___x_4420_);
lean_ctor_set(v_reuseFailAlloc_4425_, 7, v_infoState_4414_);
lean_ctor_set(v_reuseFailAlloc_4425_, 8, v_snapshotTasks_4415_);
v___x_4422_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4423_ = lean_st_ref_put(v___y_4402_, v___x_4422_);
v___x_4424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4424_, 0, v___x_4419_);
return v___x_4424_;
}
}
}
v___jp_4427_:
{
lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v_a_4440_; lean_object* v___x_4442_; uint8_t v_isShared_4443_; uint8_t v_isSharedCheck_4453_; 
v___x_4438_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4384_);
v___x_4439_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v___x_4438_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_);
v_a_4440_ = lean_ctor_get(v___x_4439_, 0);
v_isSharedCheck_4453_ = !lean_is_exclusive(v___x_4439_);
if (v_isSharedCheck_4453_ == 0)
{
v___x_4442_ = v___x_4439_;
v_isShared_4443_ = v_isSharedCheck_4453_;
goto v_resetjp_4441_;
}
else
{
lean_inc(v_a_4440_);
lean_dec(v___x_4439_);
v___x_4442_ = lean_box(0);
v_isShared_4443_ = v_isSharedCheck_4453_;
goto v_resetjp_4441_;
}
v_resetjp_4441_:
{
lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
lean_inc_ref_n(v___y_4433_, 2);
v___x_4444_ = l_Lean_FileMap_toPosition(v___y_4433_, v___y_4432_);
lean_dec(v___y_4432_);
v___x_4445_ = l_Lean_FileMap_toPosition(v___y_4433_, v___y_4437_);
lean_dec(v___y_4437_);
v___x_4446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4445_);
v___x_4447_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0));
if (v___y_4431_ == 0)
{
lean_del_object(v___x_4442_);
lean_dec_ref(v___y_4429_);
v___y_4393_ = v___x_4444_;
v___y_4394_ = v___x_4447_;
v___y_4395_ = v_a_4440_;
v___y_4396_ = v___x_4446_;
v___y_4397_ = v___y_4434_;
v___y_4398_ = v___y_4435_;
v___y_4399_ = v___y_4436_;
v_currNamespace_4400_ = v___y_4430_;
v_openDecls_4401_ = v___y_4428_;
v___y_4402_ = v___y_4390_;
goto v___jp_4392_;
}
else
{
uint8_t v___x_4448_; 
lean_inc(v_a_4440_);
v___x_4448_ = l_Lean_MessageData_hasTag(v___y_4429_, v_a_4440_);
if (v___x_4448_ == 0)
{
lean_object* v___x_4449_; lean_object* v___x_4451_; 
lean_dec_ref_known(v___x_4446_, 1);
lean_dec_ref(v___x_4444_);
lean_dec(v_a_4440_);
v___x_4449_ = lean_box(0);
if (v_isShared_4443_ == 0)
{
lean_ctor_set(v___x_4442_, 0, v___x_4449_);
v___x_4451_ = v___x_4442_;
goto v_reusejp_4450_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v___x_4449_);
v___x_4451_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4450_;
}
v_reusejp_4450_:
{
return v___x_4451_;
}
}
else
{
lean_del_object(v___x_4442_);
v___y_4393_ = v___x_4444_;
v___y_4394_ = v___x_4447_;
v___y_4395_ = v_a_4440_;
v___y_4396_ = v___x_4446_;
v___y_4397_ = v___y_4434_;
v___y_4398_ = v___y_4435_;
v___y_4399_ = v___y_4436_;
v_currNamespace_4400_ = v___y_4430_;
v_openDecls_4401_ = v___y_4428_;
v___y_4402_ = v___y_4390_;
goto v___jp_4392_;
}
}
}
}
v___jp_4454_:
{
lean_object* v___x_4465_; 
v___x_4465_ = l_Lean_Syntax_getTailPos_x3f(v___y_4462_, v___y_4461_);
lean_dec(v___y_4462_);
if (lean_obj_tag(v___x_4465_) == 0)
{
lean_inc(v___y_4464_);
v___y_4428_ = v___y_4455_;
v___y_4429_ = v___y_4457_;
v___y_4430_ = v___y_4456_;
v___y_4431_ = v___y_4458_;
v___y_4432_ = v___y_4464_;
v___y_4433_ = v___y_4459_;
v___y_4434_ = v___y_4460_;
v___y_4435_ = v___y_4461_;
v___y_4436_ = v___y_4463_;
v___y_4437_ = v___y_4464_;
goto v___jp_4427_;
}
else
{
lean_object* v_val_4466_; 
v_val_4466_ = lean_ctor_get(v___x_4465_, 0);
lean_inc(v_val_4466_);
lean_dec_ref_known(v___x_4465_, 1);
v___y_4428_ = v___y_4455_;
v___y_4429_ = v___y_4457_;
v___y_4430_ = v___y_4456_;
v___y_4431_ = v___y_4458_;
v___y_4432_ = v___y_4464_;
v___y_4433_ = v___y_4459_;
v___y_4434_ = v___y_4460_;
v___y_4435_ = v___y_4461_;
v___y_4436_ = v___y_4463_;
v___y_4437_ = v_val_4466_;
goto v___jp_4427_;
}
}
v___jp_4467_:
{
lean_object* v_ref_4477_; lean_object* v___x_4478_; 
v_ref_4477_ = l_Lean_replaceRef(v_ref_4383_, v___y_4475_);
v___x_4478_ = l_Lean_Syntax_getPos_x3f(v_ref_4477_, v___y_4474_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_object* v___x_4479_; 
v___x_4479_ = lean_unsigned_to_nat(0u);
v___y_4455_ = v___y_4468_;
v___y_4456_ = v___y_4470_;
v___y_4457_ = v___y_4469_;
v___y_4458_ = v___y_4471_;
v___y_4459_ = v___y_4472_;
v___y_4460_ = v___y_4473_;
v___y_4461_ = v___y_4474_;
v___y_4462_ = v_ref_4477_;
v___y_4463_ = v___y_4476_;
v___y_4464_ = v___x_4479_;
goto v___jp_4454_;
}
else
{
lean_object* v_val_4480_; 
v_val_4480_ = lean_ctor_get(v___x_4478_, 0);
lean_inc(v_val_4480_);
lean_dec_ref_known(v___x_4478_, 1);
v___y_4455_ = v___y_4468_;
v___y_4456_ = v___y_4470_;
v___y_4457_ = v___y_4469_;
v___y_4458_ = v___y_4471_;
v___y_4459_ = v___y_4472_;
v___y_4460_ = v___y_4473_;
v___y_4461_ = v___y_4474_;
v___y_4462_ = v_ref_4477_;
v___y_4463_ = v___y_4476_;
v___y_4464_ = v_val_4480_;
goto v___jp_4454_;
}
}
v___jp_4482_:
{
if (v___y_4491_ == 0)
{
v___y_4468_ = v___y_4485_;
v___y_4469_ = v___y_4487_;
v___y_4470_ = v___y_4486_;
v___y_4471_ = v___y_4488_;
v___y_4472_ = v___y_4483_;
v___y_4473_ = v___y_4484_;
v___y_4474_ = v___y_4490_;
v___y_4475_ = v___y_4489_;
v___y_4476_ = v_severity_4385_;
goto v___jp_4467_;
}
else
{
v___y_4468_ = v___y_4485_;
v___y_4469_ = v___y_4487_;
v___y_4470_ = v___y_4486_;
v___y_4471_ = v___y_4488_;
v___y_4472_ = v___y_4483_;
v___y_4473_ = v___y_4484_;
v___y_4474_ = v___y_4490_;
v___y_4475_ = v___y_4489_;
v___y_4476_ = v___x_4481_;
goto v___jp_4467_;
}
}
v___jp_4492_:
{
if (v___y_4493_ == 0)
{
lean_object* v_toCold_4494_; lean_object* v_ref_4495_; uint8_t v_suppressElabErrors_4496_; lean_object* v_fileName_4497_; lean_object* v_fileMap_4498_; lean_object* v_options_4499_; lean_object* v_currNamespace_4500_; lean_object* v_openDecls_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___f_4504_; uint8_t v___x_4505_; uint8_t v___x_4506_; 
v_toCold_4494_ = lean_ctor_get(v___y_4389_, 0);
v_ref_4495_ = lean_ctor_get(v___y_4389_, 2);
v_suppressElabErrors_4496_ = lean_ctor_get_uint8(v___y_4389_, sizeof(void*)*3 + 1);
v_fileName_4497_ = lean_ctor_get(v_toCold_4494_, 0);
v_fileMap_4498_ = lean_ctor_get(v_toCold_4494_, 1);
v_options_4499_ = lean_ctor_get(v_toCold_4494_, 2);
v_currNamespace_4500_ = lean_ctor_get(v_toCold_4494_, 4);
v_openDecls_4501_ = lean_ctor_get(v_toCold_4494_, 5);
v___x_4502_ = lean_box(v_suppressElabErrors_4496_);
v___x_4503_ = lean_box(v___y_4493_);
v___f_4504_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4504_, 0, v___x_4502_);
lean_closure_set(v___f_4504_, 1, v___x_4503_);
v___x_4505_ = 1;
v___x_4506_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4385_, v___x_4505_);
if (v___x_4506_ == 0)
{
v___y_4483_ = v_fileMap_4498_;
v___y_4484_ = v_fileName_4497_;
v___y_4485_ = v_openDecls_4501_;
v___y_4486_ = v_currNamespace_4500_;
v___y_4487_ = v___f_4504_;
v___y_4488_ = v_suppressElabErrors_4496_;
v___y_4489_ = v_ref_4495_;
v___y_4490_ = v___y_4493_;
v___y_4491_ = v___x_4506_;
goto v___jp_4482_;
}
else
{
lean_object* v___x_4507_; uint8_t v___x_4508_; 
v___x_4507_ = l_Lean_warningAsError;
v___x_4508_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v_options_4499_, v___x_4507_);
v___y_4483_ = v_fileMap_4498_;
v___y_4484_ = v_fileName_4497_;
v___y_4485_ = v_openDecls_4501_;
v___y_4486_ = v_currNamespace_4500_;
v___y_4487_ = v___f_4504_;
v___y_4488_ = v_suppressElabErrors_4496_;
v___y_4489_ = v_ref_4495_;
v___y_4490_ = v___y_4493_;
v___y_4491_ = v___x_4508_;
goto v___jp_4482_;
}
}
else
{
lean_object* v___x_4509_; lean_object* v___x_4510_; 
lean_dec_ref(v_msgData_4384_);
v___x_4509_ = lean_box(0);
v___x_4510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4510_, 0, v___x_4509_);
return v___x_4510_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___boxed(lean_object* v_ref_4513_, lean_object* v_msgData_4514_, lean_object* v_severity_4515_, lean_object* v_isSilent_4516_, lean_object* v___y_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_){
_start:
{
uint8_t v_severity_boxed_4522_; uint8_t v_isSilent_boxed_4523_; lean_object* v_res_4524_; 
v_severity_boxed_4522_ = lean_unbox(v_severity_4515_);
v_isSilent_boxed_4523_ = lean_unbox(v_isSilent_4516_);
v_res_4524_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4513_, v_msgData_4514_, v_severity_boxed_4522_, v_isSilent_boxed_4523_, v___y_4517_, v___y_4518_, v___y_4519_, v___y_4520_);
lean_dec(v___y_4520_);
lean_dec_ref(v___y_4519_);
lean_dec(v___y_4518_);
lean_dec_ref(v___y_4517_);
lean_dec(v_ref_4513_);
return v_res_4524_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(lean_object* v_msgData_4525_, uint8_t v_severity_4526_, uint8_t v_isSilent_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_){
_start:
{
lean_object* v_ref_4533_; lean_object* v___x_4534_; 
v_ref_4533_ = lean_ctor_get(v___y_4530_, 2);
v___x_4534_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4533_, v_msgData_4525_, v_severity_4526_, v_isSilent_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_);
return v___x_4534_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2___boxed(lean_object* v_msgData_4535_, lean_object* v_severity_4536_, lean_object* v_isSilent_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_){
_start:
{
uint8_t v_severity_boxed_4543_; uint8_t v_isSilent_boxed_4544_; lean_object* v_res_4545_; 
v_severity_boxed_4543_ = lean_unbox(v_severity_4536_);
v_isSilent_boxed_4544_ = lean_unbox(v_isSilent_4537_);
v_res_4545_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4535_, v_severity_boxed_4543_, v_isSilent_boxed_4544_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_);
lean_dec(v___y_4541_);
lean_dec_ref(v___y_4540_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
return v_res_4545_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(lean_object* v_msgData_4546_, lean_object* v___y_4547_, lean_object* v___y_4548_, lean_object* v___y_4549_, lean_object* v___y_4550_){
_start:
{
uint8_t v___x_4552_; uint8_t v___x_4553_; lean_object* v___x_4554_; 
v___x_4552_ = 2;
v___x_4553_ = 0;
v___x_4554_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4546_, v___x_4552_, v___x_4553_, v___y_4547_, v___y_4548_, v___y_4549_, v___y_4550_);
return v___x_4554_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2___boxed(lean_object* v_msgData_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_){
_start:
{
lean_object* v_res_4561_; 
v_res_4561_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v_msgData_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_);
lean_dec(v___y_4559_);
lean_dec_ref(v___y_4558_);
lean_dec(v___y_4557_);
lean_dec_ref(v___y_4556_);
return v_res_4561_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1(void){
_start:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4563_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0));
v___x_4564_ = l_Lean_stringToMessageData(v___x_4563_);
return v___x_4564_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4566_; lean_object* v___x_4567_; 
v___x_4566_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2));
v___x_4567_ = l_Lean_stringToMessageData(v___x_4566_);
return v___x_4567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(lean_object* v_as_4568_, size_t v_sz_4569_, size_t v_i_4570_, lean_object* v_b_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_){
_start:
{
lean_object* v_a_4578_; uint8_t v___x_4582_; 
v___x_4582_ = lean_usize_dec_lt(v_i_4570_, v_sz_4569_);
if (v___x_4582_ == 0)
{
lean_object* v___x_4583_; 
v___x_4583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4583_, 0, v_b_4571_);
return v___x_4583_;
}
else
{
lean_object* v___x_4584_; lean_object* v_a_4585_; lean_object* v___x_4586_; lean_object* v_env_4587_; lean_object* v___x_4588_; uint8_t v___x_4589_; 
v___x_4584_ = lean_box(0);
v_a_4585_ = lean_array_uget_borrowed(v_as_4568_, v_i_4570_);
v___x_4586_ = lean_st_ref_get(v___y_4575_);
v_env_4587_ = lean_ctor_get(v___x_4586_, 0);
lean_inc_ref(v_env_4587_);
lean_dec(v___x_4586_);
v___x_4588_ = l_Lean_Elab_ComputedFields_computedFieldAttr;
lean_inc(v_a_4585_);
v___x_4589_ = l_Lean_TagAttribute_hasTag(v___x_4588_, v_env_4587_, v_a_4585_);
if (v___x_4589_ == 0)
{
lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; lean_object* v___x_4595_; 
v___x_4590_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1);
lean_inc(v_a_4585_);
v___x_4591_ = l_Lean_MessageData_ofName(v_a_4585_);
v___x_4592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4590_);
lean_ctor_set(v___x_4592_, 1, v___x_4591_);
v___x_4593_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3);
v___x_4594_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4594_, 0, v___x_4592_);
lean_ctor_set(v___x_4594_, 1, v___x_4593_);
v___x_4595_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v___x_4594_, v___y_4572_, v___y_4573_, v___y_4574_, v___y_4575_);
if (lean_obj_tag(v___x_4595_) == 0)
{
lean_dec_ref_known(v___x_4595_, 1);
v_a_4578_ = v___x_4584_;
goto v___jp_4577_;
}
else
{
return v___x_4595_;
}
}
else
{
v_a_4578_ = v___x_4584_;
goto v___jp_4577_;
}
}
v___jp_4577_:
{
size_t v___x_4579_; size_t v___x_4580_; 
v___x_4579_ = ((size_t)1ULL);
v___x_4580_ = lean_usize_add(v_i_4570_, v___x_4579_);
v_i_4570_ = v___x_4580_;
v_b_4571_ = v_a_4578_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___boxed(lean_object* v_as_4596_, lean_object* v_sz_4597_, lean_object* v_i_4598_, lean_object* v_b_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_){
_start:
{
size_t v_sz_boxed_4605_; size_t v_i_boxed_4606_; lean_object* v_res_4607_; 
v_sz_boxed_4605_ = lean_unbox_usize(v_sz_4597_);
lean_dec(v_sz_4597_);
v_i_boxed_4606_ = lean_unbox_usize(v_i_4598_);
lean_dec(v_i_4598_);
v_res_4607_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_as_4596_, v_sz_boxed_4605_, v_i_boxed_4606_, v_b_4599_, v___y_4600_, v___y_4601_, v___y_4602_, v___y_4603_);
lean_dec(v___y_4603_);
lean_dec_ref(v___y_4602_);
lean_dec(v___y_4601_);
lean_dec_ref(v___y_4600_);
lean_dec_ref(v_as_4596_);
return v_res_4607_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(lean_object* v_as_4608_, size_t v_sz_4609_, size_t v_i_4610_, lean_object* v_b_4611_, lean_object* v___y_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_){
_start:
{
uint8_t v___x_4617_; 
v___x_4617_ = lean_usize_dec_lt(v_i_4610_, v_sz_4609_);
if (v___x_4617_ == 0)
{
lean_object* v___x_4618_; 
v___x_4618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4618_, 0, v_b_4611_);
return v___x_4618_;
}
else
{
lean_object* v_a_4619_; lean_object* v_fst_4620_; lean_object* v_snd_4621_; lean_object* v___x_4622_; size_t v_sz_4623_; size_t v___x_4624_; lean_object* v___x_4625_; 
v_a_4619_ = lean_array_uget_borrowed(v_as_4608_, v_i_4610_);
v_fst_4620_ = lean_ctor_get(v_a_4619_, 0);
v_snd_4621_ = lean_ctor_get(v_a_4619_, 1);
v___x_4622_ = lean_box(0);
v_sz_4623_ = lean_array_size(v_snd_4621_);
v___x_4624_ = ((size_t)0ULL);
v___x_4625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_snd_4621_, v_sz_4623_, v___x_4624_, v___x_4622_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_);
if (lean_obj_tag(v___x_4625_) == 0)
{
lean_object* v___x_4626_; 
lean_dec_ref_known(v___x_4625_, 1);
lean_inc(v_snd_4621_);
lean_inc(v_fst_4620_);
v___x_4626_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_fst_4620_, v_snd_4621_, v___y_4612_, v___y_4613_, v___y_4614_, v___y_4615_);
if (lean_obj_tag(v___x_4626_) == 0)
{
size_t v___x_4627_; size_t v___x_4628_; 
lean_dec_ref_known(v___x_4626_, 1);
v___x_4627_ = ((size_t)1ULL);
v___x_4628_ = lean_usize_add(v_i_4610_, v___x_4627_);
v_i_4610_ = v___x_4628_;
v_b_4611_ = v___x_4622_;
goto _start;
}
else
{
return v___x_4626_;
}
}
else
{
return v___x_4625_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4___boxed(lean_object* v_as_4630_, lean_object* v_sz_4631_, lean_object* v_i_4632_, lean_object* v_b_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_){
_start:
{
size_t v_sz_boxed_4639_; size_t v_i_boxed_4640_; lean_object* v_res_4641_; 
v_sz_boxed_4639_ = lean_unbox_usize(v_sz_4631_);
lean_dec(v_sz_4631_);
v_i_boxed_4640_ = lean_unbox_usize(v_i_4632_);
lean_dec(v_i_4632_);
v_res_4641_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_as_4630_, v_sz_boxed_4639_, v_i_boxed_4640_, v_b_4633_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_);
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4636_);
lean_dec(v___y_4635_);
lean_dec_ref(v___y_4634_);
lean_dec_ref(v_as_4630_);
return v_res_4641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(size_t v_sz_4642_, size_t v_i_4643_, lean_object* v_bs_4644_){
_start:
{
uint8_t v___x_4645_; 
v___x_4645_ = lean_usize_dec_lt(v_i_4643_, v_sz_4642_);
if (v___x_4645_ == 0)
{
return v_bs_4644_;
}
else
{
lean_object* v_v_4646_; lean_object* v_fst_4647_; lean_object* v___x_4648_; lean_object* v_bs_x27_4649_; lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; size_t v___x_4653_; size_t v___x_4654_; lean_object* v___x_4655_; 
v_v_4646_ = lean_array_uget_borrowed(v_bs_4644_, v_i_4643_);
v_fst_4647_ = lean_ctor_get(v_v_4646_, 0);
lean_inc(v_fst_4647_);
v___x_4648_ = lean_unsigned_to_nat(0u);
v_bs_x27_4649_ = lean_array_uset(v_bs_4644_, v_i_4643_, v___x_4648_);
v___x_4650_ = l_Lean_mkCasesOnName(v_fst_4647_);
v___x_4651_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
v___x_4652_ = l_Lean_Name_append(v___x_4650_, v___x_4651_);
v___x_4653_ = ((size_t)1ULL);
v___x_4654_ = lean_usize_add(v_i_4643_, v___x_4653_);
v___x_4655_ = lean_array_uset(v_bs_x27_4649_, v_i_4643_, v___x_4652_);
v_i_4643_ = v___x_4654_;
v_bs_4644_ = v___x_4655_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5___boxed(lean_object* v_sz_4657_, lean_object* v_i_4658_, lean_object* v_bs_4659_){
_start:
{
size_t v_sz_boxed_4660_; size_t v_i_boxed_4661_; lean_object* v_res_4662_; 
v_sz_boxed_4660_ = lean_unbox_usize(v_sz_4657_);
lean_dec(v_sz_4657_);
v_i_boxed_4661_ = lean_unbox_usize(v_i_4658_);
lean_dec(v_i_4658_);
v_res_4662_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_boxed_4660_, v_i_boxed_4661_, v_bs_4659_);
return v_res_4662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields(lean_object* v_computedFields_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_){
_start:
{
lean_object* v___x_4671_; size_t v_sz_4672_; size_t v___x_4673_; lean_object* v___x_4674_; 
v___x_4671_ = lean_box(0);
v_sz_4672_ = lean_array_size(v_computedFields_4665_);
v___x_4673_ = ((size_t)0ULL);
v___x_4674_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_computedFields_4665_, v_sz_4672_, v___x_4673_, v___x_4671_, v___y_4666_, v___y_4667_, v___y_4668_, v___y_4669_);
if (lean_obj_tag(v___x_4674_) == 0)
{
lean_object* v___x_4675_; uint8_t v___x_4676_; lean_object* v___x_4677_; 
lean_dec_ref_known(v___x_4674_, 1);
lean_inc_ref(v_computedFields_4665_);
v___x_4675_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_4672_, v___x_4673_, v_computedFields_4665_);
v___x_4676_ = 1;
v___x_4677_ = l_Lean_compileDecls(v___x_4675_, v___x_4676_, v___y_4668_, v___y_4669_);
if (lean_obj_tag(v___x_4677_) == 0)
{
lean_object* v___x_4678_; lean_object* v___x_4679_; 
lean_dec_ref_known(v___x_4677_, 1);
v___x_4678_ = ((lean_object*)(l_Lean_Elab_ComputedFields_setComputedFields___closed__0));
v___x_4679_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_computedFields_4665_, v_sz_4672_, v___x_4673_, v___x_4678_, v___y_4666_, v___y_4667_, v___y_4668_, v___y_4669_);
lean_dec_ref(v_computedFields_4665_);
if (lean_obj_tag(v___x_4679_) == 0)
{
lean_object* v_a_4680_; lean_object* v___x_4681_; 
v_a_4680_ = lean_ctor_get(v___x_4679_, 0);
lean_inc(v_a_4680_);
lean_dec_ref_known(v___x_4679_, 1);
v___x_4681_ = l_Lean_compileDecls(v_a_4680_, v___x_4676_, v___y_4668_, v___y_4669_);
return v___x_4681_;
}
else
{
lean_object* v_a_4682_; lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4689_; 
v_a_4682_ = lean_ctor_get(v___x_4679_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4679_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4684_ = v___x_4679_;
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
else
{
lean_inc(v_a_4682_);
lean_dec(v___x_4679_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4687_; 
if (v_isShared_4685_ == 0)
{
v___x_4687_ = v___x_4684_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v_a_4682_);
v___x_4687_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
return v___x_4687_;
}
}
}
}
else
{
lean_dec_ref(v_computedFields_4665_);
return v___x_4677_;
}
}
else
{
lean_dec_ref(v_computedFields_4665_);
return v___x_4674_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields___boxed(lean_object* v_computedFields_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_){
_start:
{
lean_object* v_res_4696_; 
v_res_4696_ = l_Lean_Elab_ComputedFields_setComputedFields(v_computedFields_4690_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_);
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4693_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
return v_res_4696_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(lean_object* v_as_4697_, lean_object* v_as_x27_4698_, lean_object* v_b_4699_, lean_object* v_a_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_){
_start:
{
lean_object* v___x_4706_; 
v___x_4706_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4698_, v_b_4699_);
return v___x_4706_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___boxed(lean_object* v_as_4707_, lean_object* v_as_x27_4708_, lean_object* v_b_4709_, lean_object* v_a_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_){
_start:
{
lean_object* v_res_4716_; 
v_res_4716_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(v_as_4707_, v_as_x27_4708_, v_b_4709_, v_a_4710_, v___y_4711_, v___y_4712_, v___y_4713_, v___y_4714_);
lean_dec(v___y_4714_);
lean_dec_ref(v___y_4713_);
lean_dec(v___y_4712_);
lean_dec_ref(v___y_4711_);
lean_dec(v_as_x27_4708_);
lean_dec(v_as_4707_);
return v_res_4716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(lean_object* v_as_4717_, size_t v_sz_4718_, size_t v_i_4719_, lean_object* v_b_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v___x_4726_; 
v___x_4726_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4717_, v_sz_4718_, v_i_4719_, v_b_4720_, v___y_4724_);
return v___x_4726_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___boxed(lean_object* v_as_4727_, lean_object* v_sz_4728_, lean_object* v_i_4729_, lean_object* v_b_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_){
_start:
{
size_t v_sz_boxed_4736_; size_t v_i_boxed_4737_; lean_object* v_res_4738_; 
v_sz_boxed_4736_ = lean_unbox_usize(v_sz_4728_);
lean_dec(v_sz_4728_);
v_i_boxed_4737_ = lean_unbox_usize(v_i_4729_);
lean_dec(v_i_4729_);
v_res_4738_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(v_as_4727_, v_sz_boxed_4736_, v_i_boxed_4737_, v_b_4730_, v___y_4731_, v___y_4732_, v___y_4733_, v___y_4734_);
lean_dec(v___y_4734_);
lean_dec_ref(v___y_4733_);
lean_dec(v___y_4732_);
lean_dec_ref(v___y_4731_);
lean_dec_ref(v_as_4727_);
return v_res_4738_;
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
