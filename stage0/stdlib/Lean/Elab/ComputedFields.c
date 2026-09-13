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
lean_object* l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2____boxed(lean_object* v_a_113_){
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_docString__1___boxed(lean_object* v_a_132_){
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_computedFieldAttr___regBuiltin_Lean_Elab_ComputedFields_computedFieldAttr_declRange__3___boxed(lean_object* v_a_163_){
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
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo(lean_object* v_expectedType_172_, lean_object* v_e_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_){
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
v___x_185_ = l_Lean_Meta_mkAppOptM(v___x_179_, v___x_184_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkUnsafeCastTo___boxed(lean_object* v_expectedType_186_, lean_object* v_e_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_expectedType_186_, v_e_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
return v_res_193_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_194_; 
v___x_194_ = l_instMonadEIO___redArg();
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(lean_object* v_msg_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v_toApplicative_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_234_; 
v___x_201_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_202_ = l_StateRefT_x27_instMonad___redArg(v___x_201_);
v_toApplicative_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_234_ == 0)
{
lean_object* v_unused_235_; 
v_unused_235_ = lean_ctor_get(v___x_202_, 1);
lean_dec(v_unused_235_);
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_234_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_toApplicative_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_234_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v_toFunctor_207_; lean_object* v_toSeq_208_; lean_object* v_toSeqLeft_209_; lean_object* v_toSeqRight_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_232_; 
v_toFunctor_207_ = lean_ctor_get(v_toApplicative_203_, 0);
v_toSeq_208_ = lean_ctor_get(v_toApplicative_203_, 2);
v_toSeqLeft_209_ = lean_ctor_get(v_toApplicative_203_, 3);
v_toSeqRight_210_ = lean_ctor_get(v_toApplicative_203_, 4);
v_isSharedCheck_232_ = !lean_is_exclusive(v_toApplicative_203_);
if (v_isSharedCheck_232_ == 0)
{
lean_object* v_unused_233_; 
v_unused_233_ = lean_ctor_get(v_toApplicative_203_, 1);
lean_dec(v_unused_233_);
v___x_212_ = v_toApplicative_203_;
v_isShared_213_ = v_isSharedCheck_232_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_toSeqRight_210_);
lean_inc(v_toSeqLeft_209_);
lean_inc(v_toSeq_208_);
lean_inc(v_toFunctor_207_);
lean_dec(v_toApplicative_203_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_232_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___f_214_; lean_object* v___f_215_; lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___x_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___x_223_; 
v___f_214_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_215_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_207_);
v___f_216_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_216_, 0, v_toFunctor_207_);
v___f_217_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_217_, 0, v_toFunctor_207_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___f_216_);
lean_ctor_set(v___x_218_, 1, v___f_217_);
v___f_219_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_219_, 0, v_toSeqRight_210_);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_220_, 0, v_toSeqLeft_209_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_221_, 0, v_toSeq_208_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 4, v___f_219_);
lean_ctor_set(v___x_212_, 3, v___f_220_);
lean_ctor_set(v___x_212_, 2, v___f_221_);
lean_ctor_set(v___x_212_, 1, v___f_214_);
lean_ctor_set(v___x_212_, 0, v___x_218_);
v___x_223_ = v___x_212_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_231_, 1, v___f_214_);
lean_ctor_set(v_reuseFailAlloc_231_, 2, v___f_221_);
lean_ctor_set(v_reuseFailAlloc_231_, 3, v___f_220_);
lean_ctor_set(v_reuseFailAlloc_231_, 4, v___f_219_);
v___x_223_ = v_reuseFailAlloc_231_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_225_; 
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 1, v___f_215_);
lean_ctor_set(v___x_205_, 0, v___x_223_);
v___x_225_ = v___x_205_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v___f_215_);
v___x_225_ = v_reuseFailAlloc_230_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_665__overap_228_; lean_object* v___x_229_; 
v___x_226_ = lean_box(0);
v___x_227_ = l_instInhabitedOfMonad___redArg(v___x_225_, v___x_226_);
v___x_665__overap_228_ = lean_panic_fn_borrowed(v___x_227_, v_msg_197_);
lean_dec(v___x_227_);
lean_inc(v___y_199_);
lean_inc_ref(v___y_198_);
v___x_229_ = lean_apply_3(v___x_665__overap_228_, v___y_198_, v___y_199_, lean_box(0));
return v___x_229_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___boxed(lean_object* v_msg_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v_msg_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
return v_res_240_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1(void){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__0));
v___x_243_ = l_Lean_stringToMessageData(v___x_242_);
return v___x_243_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3(void){
_start:
{
lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_245_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__2));
v___x_246_ = l_Lean_stringToMessageData(v___x_245_);
return v___x_246_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_250_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_251_ = lean_unsigned_to_nat(11u);
v___x_252_ = lean_unsigned_to_nat(122u);
v___x_253_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__5));
v___x_254_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_255_ = l_mkPanicMessageWithDecl(v___x_254_, v___x_253_, v___x_252_, v___x_251_, v___x_250_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(lean_object* v_constName_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_268_; lean_object* v_env_269_; uint8_t v___x_270_; lean_object* v___x_271_; 
v___x_268_ = lean_st_ref_get(v___y_258_);
v_env_269_ = lean_ctor_get(v___x_268_, 0);
lean_inc_ref(v_env_269_);
lean_dec(v___x_268_);
v___x_270_ = 0;
lean_inc(v_constName_256_);
v___x_271_ = l_Lean_Environment_findAsync_x3f(v_env_269_, v_constName_256_, v___x_270_);
if (lean_obj_tag(v___x_271_) == 1)
{
lean_object* v_val_272_; uint8_t v_kind_273_; 
v_val_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc(v_val_272_);
lean_dec_ref_known(v___x_271_, 1);
v_kind_273_ = lean_ctor_get_uint8(v_val_272_, sizeof(void*)*3);
if (v_kind_273_ == 6)
{
lean_object* v___x_274_; 
v___x_274_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_272_);
if (lean_obj_tag(v___x_274_) == 6)
{
lean_object* v_val_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_282_; 
lean_dec(v_constName_256_);
v_val_275_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_282_ == 0)
{
v___x_277_ = v___x_274_;
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_val_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_282_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
lean_ctor_set_tag(v___x_277_, 0);
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_val_275_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
else
{
lean_object* v___x_283_; lean_object* v___x_284_; 
lean_dec_ref(v___x_274_);
v___x_283_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_284_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0(v___x_283_, v___y_257_, v___y_258_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_293_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_293_ == 0)
{
v___x_287_ = v___x_284_;
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
else
{
lean_inc(v_a_285_);
lean_dec(v___x_284_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_293_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
if (lean_obj_tag(v_a_285_) == 0)
{
lean_del_object(v___x_287_);
goto v___jp_260_;
}
else
{
lean_object* v_val_289_; lean_object* v___x_291_; 
lean_dec(v_constName_256_);
v_val_289_ = lean_ctor_get(v_a_285_, 0);
lean_inc(v_val_289_);
lean_dec_ref_known(v_a_285_, 1);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 0, v_val_289_);
v___x_291_ = v___x_287_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_val_289_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec(v_constName_256_);
v_a_294_ = lean_ctor_get(v___x_284_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_284_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_284_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_284_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
}
else
{
lean_dec(v_val_272_);
goto v___jp_260_;
}
}
else
{
lean_dec(v___x_271_);
goto v___jp_260_;
}
v___jp_260_:
{
lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_261_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_262_ = 0;
v___x_263_ = l_Lean_MessageData_ofConstName(v_constName_256_, v___x_262_);
v___x_264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_261_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_266_, 0, v___x_264_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = l_Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0___redArg(v___x_266_, v___y_257_, v___y_258_);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___boxed(lean_object* v_constName_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_constName_302_, v___y_303_, v___y_304_);
lean_dec(v___y_304_);
lean_dec_ref(v___y_303_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField(lean_object* v_ctor_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0(v_ctor_307_, v_a_308_, v_a_309_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_323_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_323_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_323_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v_numFields_316_; lean_object* v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
v_numFields_316_ = lean_ctor_get(v_a_312_, 4);
lean_inc(v_numFields_316_);
lean_dec(v_a_312_);
v___x_317_ = lean_unsigned_to_nat(0u);
v___x_318_ = lean_nat_dec_eq(v_numFields_316_, v___x_317_);
lean_dec(v_numFields_316_);
v___x_319_ = lean_box(v___x_318_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v___x_319_);
v___x_321_ = v___x_314_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v___x_319_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
v_a_324_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_311_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_311_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_isScalarField___boxed(lean_object* v_ctor_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lean_Elab_ComputedFields_isScalarField(v_ctor_332_, v_a_333_, v_a_334_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(lean_object* v_msgData_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___x_343_; lean_object* v_env_344_; lean_object* v___x_345_; lean_object* v_toCold_346_; lean_object* v_mctx_347_; lean_object* v_lctx_348_; lean_object* v_options_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_343_ = lean_st_ref_get(v___y_341_);
v_env_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc_ref(v_env_344_);
lean_dec(v___x_343_);
v___x_345_ = lean_st_ref_get(v___y_339_);
v_toCold_346_ = lean_ctor_get(v___y_340_, 0);
v_mctx_347_ = lean_ctor_get(v___x_345_, 0);
lean_inc_ref(v_mctx_347_);
lean_dec(v___x_345_);
v_lctx_348_ = lean_ctor_get(v___y_338_, 2);
v_options_349_ = lean_ctor_get(v_toCold_346_, 2);
lean_inc_ref(v_options_349_);
lean_inc_ref(v_lctx_348_);
v___x_350_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_350_, 0, v_env_344_);
lean_ctor_set(v___x_350_, 1, v_mctx_347_);
lean_ctor_set(v___x_350_, 2, v_lctx_348_);
lean_ctor_set(v___x_350_, 3, v_options_349_);
v___x_351_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
lean_ctor_set(v___x_351_, 1, v_msgData_337_);
v___x_352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2___boxed(lean_object* v_msgData_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msgData_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
lean_dec(v___y_355_);
lean_dec_ref(v___y_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(lean_object* v_msg_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v_ref_366_; lean_object* v___x_367_; lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_376_; 
v_ref_366_ = lean_ctor_get(v___y_363_, 2);
v___x_367_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_360_, v___y_361_, v___y_362_, v___y_363_, v___y_364_);
v_a_368_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_376_ == 0)
{
v___x_370_ = v___x_367_;
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_367_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_376_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_374_; 
lean_inc(v_ref_366_);
v___x_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_372_, 0, v_ref_366_);
lean_ctor_set(v___x_372_, 1, v_a_368_);
if (v_isShared_371_ == 0)
{
lean_ctor_set_tag(v___x_370_, 1);
lean_ctor_set(v___x_370_, 0, v___x_372_);
v___x_374_ = v___x_370_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg___boxed(lean_object* v_msg_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_);
lean_dec(v___y_381_);
lean_dec_ref(v___y_380_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(lean_object* v_msg_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_){
_start:
{
lean_object* v___f_391_; lean_object* v___x_3861__overap_392_; lean_object* v___x_393_; 
v___f_391_ = ((lean_object*)(l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___closed__0));
v___x_3861__overap_392_ = lean_panic_fn_borrowed(v___f_391_, v_msg_385_);
lean_inc(v___y_389_);
lean_inc_ref(v___y_388_);
lean_inc(v___y_387_);
lean_inc_ref(v___y_386_);
v___x_393_ = lean_apply_5(v___x_3861__overap_392_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, lean_box(0));
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v_msg_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(lean_object* v_mvarId_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; lean_object* v_mctx_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_404_ = lean_st_ref_get(v___y_402_);
v_mctx_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc_ref(v_mctx_405_);
lean_dec(v___x_404_);
v___x_406_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_405_, v_mvarId_401_);
lean_dec_ref(v_mctx_405_);
v___x_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_mvarId_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_408_, v___y_409_);
lean_dec(v___y_409_);
lean_dec(v_mvarId_408_);
return v_res_411_;
}
}
static lean_object* _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_415_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__2));
v___x_416_ = lean_unsigned_to_nat(22u);
v___x_417_ = lean_unsigned_to_nat(398u);
v___x_418_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__1));
v___x_419_ = ((lean_object*)(l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__0));
v___x_420_ = l_mkPanicMessageWithDecl(v___x_419_, v___x_418_, v___x_417_, v___x_416_, v___x_415_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(lean_object* v_ctorTerm_421_, lean_object* v_e_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
switch(lean_obj_tag(v_e_422_))
{
case 0:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
lean_dec_ref_known(v_e_422_, 1);
lean_dec_ref(v_ctorTerm_421_);
v___x_428_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_429_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_428_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
return v___x_429_;
}
case 1:
{
lean_object* v_fvarId_430_; lean_object* v___x_431_; 
v_fvarId_430_ = lean_ctor_get(v_e_422_, 0);
lean_inc(v_fvarId_430_);
v___x_431_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_430_, v_a_423_, v_a_425_, v_a_426_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_476_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_476_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_476_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_476_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
if (lean_obj_tag(v_a_432_) == 1)
{
lean_object* v_value_436_; uint8_t v_nondep_437_; lean_object* v___y_439_; uint8_t v_trackZetaDelta_440_; lean_object* v___y_441_; lean_object* v___y_442_; lean_object* v___y_443_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v___y_459_; 
v_value_436_ = lean_ctor_get(v_a_432_, 4);
lean_inc_ref(v_value_436_);
v_nondep_437_ = lean_ctor_get_uint8(v_a_432_, sizeof(void*)*5);
if (v_nondep_437_ == 0)
{
uint8_t v___x_461_; 
v___x_461_ = l_Lean_LocalDecl_isImplementationDetail(v_a_432_);
lean_dec_ref_known(v_a_432_, 5);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; uint8_t v_zetaDelta_463_; 
v___x_462_ = l_Lean_Meta_Context_config(v_a_423_);
v_zetaDelta_463_ = lean_ctor_get_uint8(v___x_462_, 16);
lean_dec_ref(v___x_462_);
if (v_zetaDelta_463_ == 0)
{
uint8_t v_trackZetaDelta_464_; lean_object* v_zetaDeltaSet_465_; uint8_t v___x_466_; 
v_trackZetaDelta_464_ = lean_ctor_get_uint8(v_a_423_, sizeof(void*)*7);
v_zetaDeltaSet_465_ = lean_ctor_get(v_a_423_, 1);
v___x_466_ = l_Lean_FVarIdSet_contains(v_zetaDeltaSet_465_, v_fvarId_430_);
if (v___x_466_ == 0)
{
lean_object* v___x_468_; 
lean_dec_ref(v_value_436_);
lean_dec_ref(v_ctorTerm_421_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v_e_422_);
v___x_468_ = v___x_434_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_e_422_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
else
{
lean_inc(v_fvarId_430_);
lean_del_object(v___x_434_);
lean_dec_ref_known(v_e_422_, 1);
v___y_439_ = v_a_423_;
v_trackZetaDelta_440_ = v_trackZetaDelta_464_;
v___y_441_ = v_a_424_;
v___y_442_ = v_a_425_;
v___y_443_ = v_a_426_;
goto v___jp_438_;
}
}
else
{
lean_inc(v_fvarId_430_);
lean_del_object(v___x_434_);
lean_dec_ref_known(v_e_422_, 1);
v___y_456_ = v_a_423_;
v___y_457_ = v_a_424_;
v___y_458_ = v_a_425_;
v___y_459_ = v_a_426_;
goto v___jp_455_;
}
}
else
{
lean_inc(v_fvarId_430_);
lean_del_object(v___x_434_);
lean_dec_ref_known(v_e_422_, 1);
v___y_456_ = v_a_423_;
v___y_457_ = v_a_424_;
v___y_458_ = v_a_425_;
v___y_459_ = v_a_426_;
goto v___jp_455_;
}
}
else
{
lean_object* v___x_471_; 
lean_dec_ref_known(v_a_432_, 5);
lean_dec_ref(v_value_436_);
lean_dec_ref(v_ctorTerm_421_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v_e_422_);
v___x_471_ = v___x_434_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_e_422_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
v___jp_438_:
{
if (v_trackZetaDelta_440_ == 0)
{
lean_dec(v_fvarId_430_);
v_e_422_ = v_value_436_;
v_a_423_ = v___y_439_;
v_a_424_ = v___y_441_;
v_a_425_ = v___y_442_;
v_a_426_ = v___y_443_;
goto _start;
}
else
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_430_, v___y_441_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_dec_ref_known(v___x_445_, 1);
v_e_422_ = v_value_436_;
v_a_423_ = v___y_439_;
v_a_424_ = v___y_441_;
v_a_425_ = v___y_442_;
v_a_426_ = v___y_443_;
goto _start;
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec_ref(v_value_436_);
lean_dec_ref(v_ctorTerm_421_);
v_a_447_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_445_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_445_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
v___jp_455_:
{
uint8_t v_trackZetaDelta_460_; 
v_trackZetaDelta_460_ = lean_ctor_get_uint8(v___y_456_, sizeof(void*)*7);
v___y_439_ = v___y_456_;
v_trackZetaDelta_440_ = v_trackZetaDelta_460_;
v___y_441_ = v___y_457_;
v___y_442_ = v___y_458_;
v___y_443_ = v___y_459_;
goto v___jp_438_;
}
}
else
{
lean_object* v___x_474_; 
lean_dec(v_a_432_);
lean_dec_ref(v_ctorTerm_421_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v_e_422_);
v___x_474_ = v___x_434_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_e_422_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec_ref_known(v_e_422_, 1);
lean_dec_ref(v_ctorTerm_421_);
v_a_477_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_431_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_431_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_485_; lean_object* v___x_486_; 
v_mvarId_485_ = lean_ctor_get(v_e_422_, 0);
v___x_486_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_485_, v_a_424_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_496_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_496_ == 0)
{
v___x_489_ = v___x_486_;
v_isShared_490_ = v_isSharedCheck_496_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_486_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_496_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
if (lean_obj_tag(v_a_487_) == 0)
{
lean_object* v___x_492_; 
lean_dec_ref(v_ctorTerm_421_);
if (v_isShared_490_ == 0)
{
lean_ctor_set(v___x_489_, 0, v_e_422_);
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_e_422_);
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
lean_object* v_val_494_; 
lean_del_object(v___x_489_);
lean_dec_ref_known(v_e_422_, 1);
v_val_494_ = lean_ctor_get(v_a_487_, 0);
lean_inc(v_val_494_);
lean_dec_ref_known(v_a_487_, 1);
v_e_422_ = v_val_494_;
goto _start;
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec_ref_known(v_e_422_, 1);
lean_dec_ref(v_ctorTerm_421_);
v_a_497_ = lean_ctor_get(v___x_486_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_486_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_486_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_486_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
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
case 3:
{
lean_object* v___x_505_; 
lean_dec_ref(v_ctorTerm_421_);
v___x_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_505_, 0, v_e_422_);
return v___x_505_;
}
case 6:
{
lean_object* v___x_506_; 
lean_dec_ref(v_ctorTerm_421_);
v___x_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_506_, 0, v_e_422_);
return v___x_506_;
}
case 7:
{
lean_object* v___x_507_; 
lean_dec_ref(v_ctorTerm_421_);
v___x_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_507_, 0, v_e_422_);
return v___x_507_;
}
case 9:
{
lean_object* v___x_508_; 
lean_dec_ref(v_ctorTerm_421_);
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v_e_422_);
return v___x_508_;
}
case 10:
{
lean_object* v_expr_509_; 
v_expr_509_ = lean_ctor_get(v_e_422_, 1);
lean_inc_ref(v_expr_509_);
lean_dec_ref_known(v_e_422_, 2);
v_e_422_ = v_expr_509_;
goto _start;
}
default: 
{
lean_object* v___x_511_; 
v___x_511_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; uint8_t v___x_513_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
lean_inc(v_a_512_);
lean_inc_ref(v_ctorTerm_421_);
v___x_513_ = l_Lean_Expr_occurs(v_ctorTerm_421_, v_a_512_);
if (v___x_513_ == 0)
{
lean_dec(v_a_512_);
lean_dec_ref(v_ctorTerm_421_);
return v___x_511_;
}
else
{
uint8_t v___x_514_; lean_object* v___x_515_; 
lean_dec_ref_known(v___x_511_, 1);
v___x_514_ = 0;
lean_inc(v_a_512_);
v___x_515_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_512_, v___x_514_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_525_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_525_ == 0)
{
v___x_518_ = v___x_515_;
v_isShared_519_ = v_isSharedCheck_525_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_515_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_525_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
if (lean_obj_tag(v_a_516_) == 0)
{
lean_object* v___x_521_; 
lean_dec_ref(v_ctorTerm_421_);
if (v_isShared_519_ == 0)
{
lean_ctor_set(v___x_518_, 0, v_a_512_);
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_512_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
else
{
lean_object* v_val_523_; lean_object* v___x_524_; 
lean_del_object(v___x_518_);
lean_dec(v_a_512_);
v_val_523_ = lean_ctor_get(v_a_516_, 0);
lean_inc(v_val_523_);
lean_dec_ref_known(v_a_516_, 1);
v___x_524_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_421_, v_val_523_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
return v___x_524_;
}
}
}
else
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
lean_dec(v_a_512_);
lean_dec_ref(v_ctorTerm_421_);
v_a_526_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_533_ == 0)
{
v___x_528_ = v___x_515_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_515_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_526_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorTerm_421_);
return v___x_511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(lean_object* v_ctorTerm_534_, lean_object* v_e_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
switch(lean_obj_tag(v_e_535_))
{
case 0:
{
lean_object* v___x_541_; lean_object* v___x_542_; 
lean_dec_ref_known(v_e_535_, 1);
lean_dec_ref(v_ctorTerm_534_);
v___x_541_ = lean_obj_once(&l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3, &l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3_once, _init_l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___closed__3);
v___x_542_ = l_panic___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__1(v___x_541_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_542_;
}
case 1:
{
lean_object* v_fvarId_543_; lean_object* v___x_544_; 
v_fvarId_543_ = lean_ctor_get(v_e_535_, 0);
lean_inc(v_fvarId_543_);
v___x_544_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_543_, v_a_536_, v_a_538_, v_a_539_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_589_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_589_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_589_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_589_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
if (lean_obj_tag(v_a_545_) == 1)
{
lean_object* v_value_549_; uint8_t v_nondep_550_; lean_object* v___y_552_; uint8_t v_trackZetaDelta_553_; lean_object* v___y_554_; lean_object* v___y_555_; lean_object* v___y_556_; lean_object* v___y_569_; lean_object* v___y_570_; lean_object* v___y_571_; lean_object* v___y_572_; 
v_value_549_ = lean_ctor_get(v_a_545_, 4);
lean_inc_ref(v_value_549_);
v_nondep_550_ = lean_ctor_get_uint8(v_a_545_, sizeof(void*)*5);
if (v_nondep_550_ == 0)
{
uint8_t v___x_574_; 
v___x_574_ = l_Lean_LocalDecl_isImplementationDetail(v_a_545_);
lean_dec_ref_known(v_a_545_, 5);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; uint8_t v_zetaDelta_576_; 
v___x_575_ = l_Lean_Meta_Context_config(v_a_536_);
v_zetaDelta_576_ = lean_ctor_get_uint8(v___x_575_, 16);
lean_dec_ref(v___x_575_);
if (v_zetaDelta_576_ == 0)
{
uint8_t v_trackZetaDelta_577_; lean_object* v_zetaDeltaSet_578_; uint8_t v___x_579_; 
v_trackZetaDelta_577_ = lean_ctor_get_uint8(v_a_536_, sizeof(void*)*7);
v_zetaDeltaSet_578_ = lean_ctor_get(v_a_536_, 1);
v___x_579_ = l_Lean_FVarIdSet_contains(v_zetaDeltaSet_578_, v_fvarId_543_);
if (v___x_579_ == 0)
{
lean_object* v___x_581_; 
lean_dec_ref(v_value_549_);
lean_dec_ref(v_ctorTerm_534_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v_e_535_);
v___x_581_ = v___x_547_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_e_535_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
else
{
lean_inc(v_fvarId_543_);
lean_del_object(v___x_547_);
lean_dec_ref_known(v_e_535_, 1);
v___y_552_ = v_a_536_;
v_trackZetaDelta_553_ = v_trackZetaDelta_577_;
v___y_554_ = v_a_537_;
v___y_555_ = v_a_538_;
v___y_556_ = v_a_539_;
goto v___jp_551_;
}
}
else
{
lean_inc(v_fvarId_543_);
lean_del_object(v___x_547_);
lean_dec_ref_known(v_e_535_, 1);
v___y_569_ = v_a_536_;
v___y_570_ = v_a_537_;
v___y_571_ = v_a_538_;
v___y_572_ = v_a_539_;
goto v___jp_568_;
}
}
else
{
lean_inc(v_fvarId_543_);
lean_del_object(v___x_547_);
lean_dec_ref_known(v_e_535_, 1);
v___y_569_ = v_a_536_;
v___y_570_ = v_a_537_;
v___y_571_ = v_a_538_;
v___y_572_ = v_a_539_;
goto v___jp_568_;
}
}
else
{
lean_object* v___x_584_; 
lean_dec_ref(v_value_549_);
lean_dec_ref_known(v_a_545_, 5);
lean_dec_ref(v_ctorTerm_534_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v_e_535_);
v___x_584_ = v___x_547_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_e_535_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
v___jp_551_:
{
if (v_trackZetaDelta_553_ == 0)
{
lean_object* v___x_557_; 
lean_dec(v_fvarId_543_);
v___x_557_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_534_, v_value_549_, v___y_552_, v___y_554_, v___y_555_, v___y_556_);
return v___x_557_;
}
else
{
lean_object* v___x_558_; 
v___x_558_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_fvarId_543_, v___y_554_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v___x_559_; 
lean_dec_ref_known(v___x_558_, 1);
v___x_559_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_534_, v_value_549_, v___y_552_, v___y_554_, v___y_555_, v___y_556_);
return v___x_559_;
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec_ref(v_value_549_);
lean_dec_ref(v_ctorTerm_534_);
v_a_560_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_558_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_558_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
}
v___jp_568_:
{
uint8_t v_trackZetaDelta_573_; 
v_trackZetaDelta_573_ = lean_ctor_get_uint8(v___y_569_, sizeof(void*)*7);
v___y_552_ = v___y_569_;
v_trackZetaDelta_553_ = v_trackZetaDelta_573_;
v___y_554_ = v___y_570_;
v___y_555_ = v___y_571_;
v___y_556_ = v___y_572_;
goto v___jp_551_;
}
}
else
{
lean_object* v___x_587_; 
lean_dec(v_a_545_);
lean_dec_ref(v_ctorTerm_534_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v_e_535_);
v___x_587_ = v___x_547_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v_e_535_);
v___x_587_ = v_reuseFailAlloc_588_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
return v___x_587_;
}
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec_ref_known(v_e_535_, 1);
lean_dec_ref(v_ctorTerm_534_);
v_a_590_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_544_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_544_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
case 2:
{
lean_object* v_mvarId_598_; lean_object* v___x_599_; 
v_mvarId_598_ = lean_ctor_get(v_e_535_, 0);
v___x_599_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_598_, v_a_537_);
if (lean_obj_tag(v___x_599_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_609_; 
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_609_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_609_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_609_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
if (lean_obj_tag(v_a_600_) == 0)
{
lean_object* v___x_605_; 
lean_dec_ref(v_ctorTerm_534_);
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 0, v_e_535_);
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_e_535_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
else
{
lean_object* v_val_607_; lean_object* v___x_608_; 
lean_del_object(v___x_602_);
lean_dec_ref_known(v_e_535_, 1);
v_val_607_ = lean_ctor_get(v_a_600_, 0);
lean_inc(v_val_607_);
lean_dec_ref_known(v_a_600_, 1);
v___x_608_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_534_, v_val_607_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_608_;
}
}
}
else
{
lean_object* v_a_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_617_; 
lean_dec_ref_known(v_e_535_, 1);
lean_dec_ref(v_ctorTerm_534_);
v_a_610_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_617_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_617_ == 0)
{
v___x_612_ = v___x_599_;
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_a_610_);
lean_dec(v___x_599_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_617_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_615_; 
if (v_isShared_613_ == 0)
{
v___x_615_ = v___x_612_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_a_610_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
}
}
case 3:
{
lean_object* v___x_618_; 
lean_dec_ref(v_ctorTerm_534_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_e_535_);
return v___x_618_;
}
case 6:
{
lean_object* v___x_619_; 
lean_dec_ref(v_ctorTerm_534_);
v___x_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_619_, 0, v_e_535_);
return v___x_619_;
}
case 7:
{
lean_object* v___x_620_; 
lean_dec_ref(v_ctorTerm_534_);
v___x_620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_620_, 0, v_e_535_);
return v___x_620_;
}
case 9:
{
lean_object* v___x_621_; 
lean_dec_ref(v_ctorTerm_534_);
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v_e_535_);
return v___x_621_;
}
case 10:
{
lean_object* v_expr_622_; lean_object* v___x_623_; 
v_expr_622_ = lean_ctor_get(v_e_535_, 1);
lean_inc_ref(v_expr_622_);
lean_dec_ref_known(v_e_535_, 2);
v___x_623_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_534_, v_expr_622_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_623_;
}
default: 
{
lean_object* v___x_624_; 
v___x_624_ = l___private_Lean_Meta_WHNF_0__Lean_Meta_whnfCore_go(v_e_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; uint8_t v___x_626_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_a_625_);
lean_inc_ref(v_ctorTerm_534_);
v___x_626_ = l_Lean_Expr_occurs(v_ctorTerm_534_, v_a_625_);
if (v___x_626_ == 0)
{
lean_dec(v_a_625_);
lean_dec_ref(v_ctorTerm_534_);
return v___x_624_;
}
else
{
uint8_t v___x_627_; lean_object* v___x_628_; 
lean_dec_ref_known(v___x_624_, 1);
v___x_627_ = 0;
lean_inc(v_a_625_);
v___x_628_ = l_Lean_Meta_unfoldDefinition_x3f(v_a_625_, v___x_627_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_638_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_638_ == 0)
{
v___x_631_ = v___x_628_;
v_isShared_632_ = v_isSharedCheck_638_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_628_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_638_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
if (lean_obj_tag(v_a_629_) == 0)
{
lean_object* v___x_634_; 
lean_dec_ref(v_ctorTerm_534_);
if (v_isShared_632_ == 0)
{
lean_ctor_set(v___x_631_, 0, v_a_625_);
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_625_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
else
{
lean_object* v_val_636_; lean_object* v___x_637_; 
lean_del_object(v___x_631_);
lean_dec(v_a_625_);
v_val_636_ = lean_ctor_get(v_a_629_, 0);
lean_inc(v_val_636_);
lean_dec_ref_known(v_a_629_, 1);
v___x_637_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_534_, v_val_636_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
return v___x_637_;
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
lean_dec(v_a_625_);
lean_dec_ref(v_ctorTerm_534_);
v_a_639_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_628_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_628_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
}
}
else
{
lean_dec_ref(v_ctorTerm_534_);
return v___x_624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(lean_object* v_ctorTerm_647_, lean_object* v_e_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_, lean_object* v_a_652_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_647_, v_e_648_, v_a_649_, v_a_650_, v_a_651_, v_a_652_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0___boxed(lean_object* v_ctorTerm_655_, lean_object* v_e_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_655_, v_e_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_);
lean_dec(v_a_660_);
lean_dec_ref(v_a_659_);
lean_dec(v_a_658_);
lean_dec_ref(v_a_657_);
return v_res_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2___boxed(lean_object* v_ctorTerm_663_, lean_object* v_e_664_, lean_object* v_a_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__2(v_ctorTerm_663_, v_e_664_, v_a_665_, v_a_666_, v_a_667_, v_a_668_);
lean_dec(v_a_668_);
lean_dec_ref(v_a_667_);
lean_dec(v_a_666_);
lean_dec_ref(v_a_665_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0___boxed(lean_object* v_ctorTerm_671_, lean_object* v_e_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0(v_ctorTerm_671_, v_e_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
lean_dec_ref(v_a_673_);
return v_res_678_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_680_ = ((lean_object*)(l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__0));
v___x_681_ = l_Lean_stringToMessageData(v___x_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(lean_object* v_constName_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v___x_688_; lean_object* v_env_689_; lean_object* v___x_690_; 
v___x_688_ = lean_st_ref_get(v___y_686_);
v_env_689_ = lean_ctor_get(v___x_688_, 0);
lean_inc_ref(v_env_689_);
lean_dec(v___x_688_);
lean_inc(v_constName_682_);
v___x_690_ = l_Lean_isInductiveCore_x3f(v_env_689_, v_constName_682_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v___x_691_; uint8_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_691_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_692_ = 0;
v___x_693_ = l_Lean_MessageData_ofConstName(v_constName_682_, v___x_692_);
v___x_694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_691_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v___x_695_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___closed__1);
v___x_696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_696_, 0, v___x_694_);
lean_ctor_set(v___x_696_, 1, v___x_695_);
v___x_697_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_696_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
return v___x_697_;
}
else
{
lean_object* v_val_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec(v_constName_682_);
v_val_698_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_690_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_val_698_);
lean_dec(v___x_690_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
lean_ctor_set_tag(v___x_700_, 0);
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_val_698_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3___boxed(lean_object* v_constName_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_constName_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(lean_object* v_msg_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v_toApplicative_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_784_; 
v___x_721_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_722_ = l_StateRefT_x27_instMonad___redArg(v___x_721_);
v_toApplicative_723_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_784_ == 0)
{
lean_object* v_unused_785_; 
v_unused_785_ = lean_ctor_get(v___x_722_, 1);
lean_dec(v_unused_785_);
v___x_725_ = v___x_722_;
v_isShared_726_ = v_isSharedCheck_784_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_toApplicative_723_);
lean_dec(v___x_722_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_784_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_toFunctor_727_; lean_object* v_toSeq_728_; lean_object* v_toSeqLeft_729_; lean_object* v_toSeqRight_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_782_; 
v_toFunctor_727_ = lean_ctor_get(v_toApplicative_723_, 0);
v_toSeq_728_ = lean_ctor_get(v_toApplicative_723_, 2);
v_toSeqLeft_729_ = lean_ctor_get(v_toApplicative_723_, 3);
v_toSeqRight_730_ = lean_ctor_get(v_toApplicative_723_, 4);
v_isSharedCheck_782_ = !lean_is_exclusive(v_toApplicative_723_);
if (v_isSharedCheck_782_ == 0)
{
lean_object* v_unused_783_; 
v_unused_783_ = lean_ctor_get(v_toApplicative_723_, 1);
lean_dec(v_unused_783_);
v___x_732_ = v_toApplicative_723_;
v_isShared_733_ = v_isSharedCheck_782_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_toSeqRight_730_);
lean_inc(v_toSeqLeft_729_);
lean_inc(v_toSeq_728_);
lean_inc(v_toFunctor_727_);
lean_dec(v_toApplicative_723_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_782_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___f_734_; lean_object* v___f_735_; lean_object* v___f_736_; lean_object* v___f_737_; lean_object* v___x_738_; lean_object* v___f_739_; lean_object* v___f_740_; lean_object* v___f_741_; lean_object* v___x_743_; 
v___f_734_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_735_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_727_);
v___f_736_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_736_, 0, v_toFunctor_727_);
v___f_737_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_737_, 0, v_toFunctor_727_);
v___x_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_738_, 0, v___f_736_);
lean_ctor_set(v___x_738_, 1, v___f_737_);
v___f_739_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_739_, 0, v_toSeqRight_730_);
v___f_740_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_740_, 0, v_toSeqLeft_729_);
v___f_741_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_741_, 0, v_toSeq_728_);
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 4, v___f_739_);
lean_ctor_set(v___x_732_, 3, v___f_740_);
lean_ctor_set(v___x_732_, 2, v___f_741_);
lean_ctor_set(v___x_732_, 1, v___f_734_);
lean_ctor_set(v___x_732_, 0, v___x_738_);
v___x_743_ = v___x_732_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_738_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v___f_734_);
lean_ctor_set(v_reuseFailAlloc_781_, 2, v___f_741_);
lean_ctor_set(v_reuseFailAlloc_781_, 3, v___f_740_);
lean_ctor_set(v_reuseFailAlloc_781_, 4, v___f_739_);
v___x_743_ = v_reuseFailAlloc_781_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 1, v___f_735_);
lean_ctor_set(v___x_725_, 0, v___x_743_);
v___x_745_ = v___x_725_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_743_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v___f_735_);
v___x_745_ = v_reuseFailAlloc_780_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
lean_object* v___x_746_; lean_object* v_toApplicative_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_778_; 
v___x_746_ = l_StateRefT_x27_instMonad___redArg(v___x_745_);
v_toApplicative_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_778_ == 0)
{
lean_object* v_unused_779_; 
v_unused_779_ = lean_ctor_get(v___x_746_, 1);
lean_dec(v_unused_779_);
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_778_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_toApplicative_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_778_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v_toFunctor_751_; lean_object* v_toSeq_752_; lean_object* v_toSeqLeft_753_; lean_object* v_toSeqRight_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_776_; 
v_toFunctor_751_ = lean_ctor_get(v_toApplicative_747_, 0);
v_toSeq_752_ = lean_ctor_get(v_toApplicative_747_, 2);
v_toSeqLeft_753_ = lean_ctor_get(v_toApplicative_747_, 3);
v_toSeqRight_754_ = lean_ctor_get(v_toApplicative_747_, 4);
v_isSharedCheck_776_ = !lean_is_exclusive(v_toApplicative_747_);
if (v_isSharedCheck_776_ == 0)
{
lean_object* v_unused_777_; 
v_unused_777_ = lean_ctor_get(v_toApplicative_747_, 1);
lean_dec(v_unused_777_);
v___x_756_ = v_toApplicative_747_;
v_isShared_757_ = v_isSharedCheck_776_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_toSeqRight_754_);
lean_inc(v_toSeqLeft_753_);
lean_inc(v_toSeq_752_);
lean_inc(v_toFunctor_751_);
lean_dec(v_toApplicative_747_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_776_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___f_758_; lean_object* v___f_759_; lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___f_763_; lean_object* v___f_764_; lean_object* v___f_765_; lean_object* v___x_767_; 
v___f_758_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_759_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_751_);
v___f_760_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_760_, 0, v_toFunctor_751_);
v___f_761_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_761_, 0, v_toFunctor_751_);
v___x_762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_762_, 0, v___f_760_);
lean_ctor_set(v___x_762_, 1, v___f_761_);
v___f_763_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_763_, 0, v_toSeqRight_754_);
v___f_764_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_764_, 0, v_toSeqLeft_753_);
v___f_765_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_765_, 0, v_toSeq_752_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 4, v___f_763_);
lean_ctor_set(v___x_756_, 3, v___f_764_);
lean_ctor_set(v___x_756_, 2, v___f_765_);
lean_ctor_set(v___x_756_, 1, v___f_758_);
lean_ctor_set(v___x_756_, 0, v___x_762_);
v___x_767_ = v___x_756_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v___f_758_);
lean_ctor_set(v_reuseFailAlloc_775_, 2, v___f_765_);
lean_ctor_set(v_reuseFailAlloc_775_, 3, v___f_764_);
lean_ctor_set(v_reuseFailAlloc_775_, 4, v___f_763_);
v___x_767_ = v_reuseFailAlloc_775_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
lean_object* v___x_769_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 1, v___f_759_);
lean_ctor_set(v___x_749_, 0, v___x_767_);
v___x_769_ = v___x_749_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_767_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v___f_759_);
v___x_769_ = v_reuseFailAlloc_774_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_3851__overap_772_; lean_object* v___x_773_; 
v___x_770_ = lean_box(0);
v___x_771_ = l_instInhabitedOfMonad___redArg(v___x_769_, v___x_770_);
v___x_3851__overap_772_ = lean_panic_fn_borrowed(v___x_771_, v_msg_715_);
lean_dec(v___x_771_);
lean_inc(v___y_719_);
lean_inc_ref(v___y_718_);
lean_inc(v___y_717_);
lean_inc_ref(v___y_716_);
v___x_773_ = lean_apply_5(v___x_3851__overap_772_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, lean_box(0));
return v___x_773_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___boxed(lean_object* v_msg_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v_msg_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(lean_object* v_constName_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v___x_807_; lean_object* v_env_808_; uint8_t v___x_809_; lean_object* v___x_810_; 
v___x_807_ = lean_st_ref_get(v___y_797_);
v_env_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc_ref(v_env_808_);
lean_dec(v___x_807_);
v___x_809_ = 0;
lean_inc(v_constName_793_);
v___x_810_ = l_Lean_Environment_findAsync_x3f(v_env_808_, v_constName_793_, v___x_809_);
if (lean_obj_tag(v___x_810_) == 1)
{
lean_object* v_val_811_; uint8_t v_kind_812_; 
v_val_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_val_811_);
lean_dec_ref_known(v___x_810_, 1);
v_kind_812_ = lean_ctor_get_uint8(v_val_811_, sizeof(void*)*3);
if (v_kind_812_ == 6)
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_811_);
if (lean_obj_tag(v___x_813_) == 6)
{
lean_object* v_val_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
lean_dec(v_constName_793_);
v_val_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_val_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
lean_ctor_set_tag(v___x_816_, 0);
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_val_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
else
{
lean_object* v___x_822_; lean_object* v___x_823_; 
lean_dec_ref(v___x_813_);
v___x_822_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__7);
v___x_823_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4(v___x_822_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_832_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_832_ == 0)
{
v___x_826_ = v___x_823_;
v_isShared_827_ = v_isSharedCheck_832_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_832_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
if (lean_obj_tag(v_a_824_) == 0)
{
lean_del_object(v___x_826_);
goto v___jp_799_;
}
else
{
lean_object* v_val_828_; lean_object* v___x_830_; 
lean_dec(v_constName_793_);
v_val_828_ = lean_ctor_get(v_a_824_, 0);
lean_inc(v_val_828_);
lean_dec_ref_known(v_a_824_, 1);
if (v_isShared_827_ == 0)
{
lean_ctor_set(v___x_826_, 0, v_val_828_);
v___x_830_ = v___x_826_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_val_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
lean_dec(v_constName_793_);
v_a_833_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_823_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_823_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
}
else
{
lean_dec(v_val_811_);
goto v___jp_799_;
}
}
else
{
lean_dec(v___x_810_);
goto v___jp_799_;
}
v___jp_799_:
{
lean_object* v___x_800_; uint8_t v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_800_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_801_ = 0;
v___x_802_ = l_Lean_MessageData_ofConstName(v_constName_793_, v___x_801_);
v___x_803_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_803_, 0, v___x_800_);
lean_ctor_set(v___x_803_, 1, v___x_802_);
v___x_804_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__3);
v___x_805_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_805_, 0, v___x_803_);
lean_ctor_set(v___x_805_, 1, v___x_804_);
v___x_806_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_805_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
return v___x_806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2___boxed(lean_object* v_constName_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_constName_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec(v___y_843_);
lean_dec_ref(v___y_842_);
return v_res_847_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__0));
v___x_850_ = l_Lean_stringToMessageData(v___x_849_);
return v___x_850_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = ((lean_object*)(l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__2));
v___x_853_ = l_Lean_stringToMessageData(v___x_852_);
return v___x_853_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4(void){
_start:
{
lean_object* v___x_854_; lean_object* v_dummy_855_; 
v___x_854_ = lean_box(0);
v_dummy_855_ = l_Lean_Expr_sort___override(v___x_854_);
return v_dummy_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue(lean_object* v_computedField_856_, lean_object* v_ctorTerm_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v_ctorName_865_; lean_object* v_val_867_; lean_object* v___y_868_; lean_object* v___y_869_; lean_object* v___y_870_; lean_object* v___y_871_; lean_object* v___x_883_; 
v___x_863_ = l_Lean_Elab_WF_instInhabitedEqnInfo_default;
v___x_864_ = l_Lean_Expr_getAppFn(v_ctorTerm_857_);
v_ctorName_865_ = l_Lean_Expr_constName_x21(v___x_864_);
lean_dec_ref(v___x_864_);
lean_inc(v_ctorName_865_);
v___x_883_ = l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2(v_ctorName_865_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v_induct_885_; lean_object* v___x_886_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
lean_inc(v_a_884_);
lean_dec_ref_known(v___x_883_, 1);
v_induct_885_ = lean_ctor_get(v_a_884_, 1);
lean_inc(v_induct_885_);
lean_dec(v_a_884_);
v___x_886_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_induct_885_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v_a_887_; lean_object* v_numParams_888_; lean_object* v_numIndices_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_a_887_ = lean_ctor_get(v___x_886_, 0);
lean_inc(v_a_887_);
lean_dec_ref_known(v___x_886_, 1);
v_numParams_888_ = lean_ctor_get(v_a_887_, 1);
lean_inc(v_numParams_888_);
v_numIndices_889_ = lean_ctor_get(v_a_887_, 2);
lean_inc(v_numIndices_889_);
lean_dec(v_a_887_);
v___x_890_ = lean_nat_add(v_numParams_888_, v_numIndices_889_);
lean_dec(v_numIndices_889_);
lean_dec(v_numParams_888_);
v___x_891_ = lean_box(0);
v___x_892_ = lean_mk_array(v___x_890_, v___x_891_);
lean_inc_ref(v_ctorTerm_857_);
v___x_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_893_, 0, v_ctorTerm_857_);
v___x_894_ = lean_unsigned_to_nat(1u);
v___x_895_ = lean_mk_empty_array_with_capacity(v___x_894_);
v___x_896_ = lean_array_push(v___x_895_, v___x_893_);
v___x_897_ = l_Array_append___redArg(v___x_892_, v___x_896_);
lean_dec_ref(v___x_896_);
lean_inc(v_computedField_856_);
v___x_898_ = l_Lean_Meta_mkAppOptM(v_computedField_856_, v___x_897_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; lean_object* v_env_901_; lean_object* v___x_902_; lean_object* v_toEnvExtension_903_; lean_object* v_asyncMode_904_; uint8_t v___x_905_; lean_object* v___x_906_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref_known(v___x_898_, 1);
v___x_900_ = lean_st_ref_get(v_a_861_);
v_env_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc_ref(v_env_901_);
lean_dec(v___x_900_);
v___x_902_ = l_Lean_Elab_WF_eqnInfoExt;
v_toEnvExtension_903_ = lean_ctor_get(v___x_902_, 0);
v_asyncMode_904_ = lean_ctor_get(v_toEnvExtension_903_, 2);
v___x_905_ = 0;
lean_inc(v_computedField_856_);
v___x_906_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v___x_863_, v___x_902_, v_env_901_, v_computedField_856_, v_asyncMode_904_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 1)
{
lean_object* v_val_907_; lean_object* v_levelParams_908_; lean_object* v_value_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_dummy_913_; lean_object* v_nargs_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v_val_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_val_907_);
lean_dec_ref_known(v___x_906_, 1);
v_levelParams_908_ = lean_ctor_get(v_val_907_, 1);
lean_inc(v_levelParams_908_);
v_value_909_ = lean_ctor_get(v_val_907_, 3);
lean_inc_ref(v_value_909_);
lean_dec(v_val_907_);
v___x_910_ = l_Lean_Expr_getAppFn(v_a_899_);
v___x_911_ = l_Lean_Expr_constLevels_x21(v___x_910_);
lean_dec_ref(v___x_910_);
v___x_912_ = l_Lean_Expr_instantiateLevelParams(v_value_909_, v_levelParams_908_, v___x_911_);
lean_dec_ref(v_value_909_);
v_dummy_913_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4);
v_nargs_914_ = l_Lean_Expr_getAppNumArgs(v_a_899_);
lean_inc(v_nargs_914_);
v___x_915_ = lean_mk_array(v_nargs_914_, v_dummy_913_);
v___x_916_ = lean_nat_sub(v_nargs_914_, v___x_894_);
lean_dec(v_nargs_914_);
v___x_917_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_899_, v___x_915_, v___x_916_);
v___x_918_ = l_Lean_mkAppN(v___x_912_, v___x_917_);
lean_dec_ref(v___x_917_);
v_val_867_ = v___x_918_;
v___y_868_ = v_a_858_;
v___y_869_ = v_a_859_;
v___y_870_ = v_a_860_;
v___y_871_ = v_a_861_;
goto v___jp_866_;
}
else
{
lean_object* v___x_919_; 
lean_dec(v___x_906_);
v___x_919_ = l_Lean_Meta_unfoldDefinition(v_a_899_, v_a_858_, v_a_859_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_919_) == 0)
{
lean_object* v_a_920_; 
v_a_920_ = lean_ctor_get(v___x_919_, 0);
lean_inc(v_a_920_);
lean_dec_ref_known(v___x_919_, 1);
v_val_867_ = v_a_920_;
v___y_868_ = v_a_858_;
v___y_869_ = v_a_859_;
v___y_870_ = v_a_860_;
v___y_871_ = v_a_861_;
goto v___jp_866_;
}
else
{
lean_dec(v_ctorName_865_);
lean_dec_ref(v_ctorTerm_857_);
lean_dec(v_computedField_856_);
return v___x_919_;
}
}
}
else
{
lean_dec(v_ctorName_865_);
lean_dec_ref(v_ctorTerm_857_);
lean_dec(v_computedField_856_);
return v___x_898_;
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
lean_dec(v_ctorName_865_);
lean_dec_ref(v_ctorTerm_857_);
lean_dec(v_computedField_856_);
v_a_921_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_886_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_886_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
else
{
lean_object* v_a_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_936_; 
lean_dec(v_ctorName_865_);
lean_dec_ref(v_ctorTerm_857_);
lean_dec(v_computedField_856_);
v_a_929_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_883_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_883_);
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
v___jp_866_:
{
lean_object* v___x_872_; 
lean_inc_ref(v_ctorTerm_857_);
v___x_872_ = l_Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0(v_ctorTerm_857_, v_val_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; uint8_t v___x_874_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
v___x_874_ = l_Lean_Expr_occurs(v_ctorTerm_857_, v_a_873_);
lean_dec(v_a_873_);
if (v___x_874_ == 0)
{
lean_dec(v_ctorName_865_);
lean_dec(v_computedField_856_);
return v___x_872_;
}
else
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
lean_dec_ref_known(v___x_872_, 1);
v___x_875_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
v___x_876_ = l_Lean_MessageData_ofName(v_computedField_856_);
v___x_877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_875_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__3);
v___x_879_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_879_, 0, v___x_877_);
lean_ctor_set(v___x_879_, 1, v___x_878_);
v___x_880_ = l_Lean_MessageData_ofName(v_ctorName_865_);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_879_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_881_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
return v___x_882_;
}
}
else
{
lean_dec(v_ctorName_865_);
lean_dec_ref(v_ctorTerm_857_);
lean_dec(v_computedField_856_);
return v___x_872_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_getComputedFieldValue___boxed(lean_object* v_computedField_937_, lean_object* v_ctorTerm_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_){
_start:
{
lean_object* v_res_944_; 
v_res_944_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_computedField_937_, v_ctorTerm_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_);
lean_dec(v_a_942_);
lean_dec_ref(v_a_941_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(lean_object* v_00_u03b1_945_, lean_object* v_msg_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v_msg_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___boxed(lean_object* v_00_u03b1_953_, lean_object* v_msg_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1(v_00_u03b1_953_, v_msg_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(lean_object* v_mvarId_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___redArg(v_mvarId_961_, v___y_963_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3___boxed(lean_object* v_mvarId_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Meta_whnfEasyCases___at___00Lean_Meta_whnfHeadPred___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__0_spec__0_spec__3(v_mvarId_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v_mvarId_968_);
return v_res_974_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(lean_object* v_a_975_, lean_object* v_as_976_, size_t v_i_977_, size_t v_stop_978_){
_start:
{
uint8_t v___x_979_; 
v___x_979_ = lean_usize_dec_eq(v_i_977_, v_stop_978_);
if (v___x_979_ == 0)
{
lean_object* v___x_980_; lean_object* v___x_981_; uint8_t v___x_982_; 
v___x_980_ = lean_array_uget_borrowed(v_as_976_, v_i_977_);
v___x_981_ = l_Lean_Expr_fvarId_x21(v___x_980_);
v___x_982_ = l_Lean_Expr_containsFVar(v_a_975_, v___x_981_);
lean_dec(v___x_981_);
if (v___x_982_ == 0)
{
size_t v___x_983_; size_t v___x_984_; 
v___x_983_ = ((size_t)1ULL);
v___x_984_ = lean_usize_add(v_i_977_, v___x_983_);
v_i_977_ = v___x_984_;
goto _start;
}
else
{
return v___x_982_;
}
}
else
{
uint8_t v___x_986_; 
v___x_986_ = 0;
return v___x_986_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0___boxed(lean_object* v_a_987_, lean_object* v_as_988_, lean_object* v_i_989_, lean_object* v_stop_990_){
_start:
{
size_t v_i_boxed_991_; size_t v_stop_boxed_992_; uint8_t v_res_993_; lean_object* v_r_994_; 
v_i_boxed_991_ = lean_unbox_usize(v_i_989_);
lean_dec(v_i_989_);
v_stop_boxed_992_ = lean_unbox_usize(v_stop_990_);
lean_dec(v_stop_990_);
v_res_993_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_987_, v_as_988_, v_i_boxed_991_, v_stop_boxed_992_);
lean_dec_ref(v_as_988_);
lean_dec_ref(v_a_987_);
v_r_994_ = lean_box(v_res_993_);
return v_r_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(lean_object* v_msg_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_ref_1001_; lean_object* v___x_1002_; lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1011_; 
v_ref_1001_ = lean_ctor_get(v___y_998_, 2);
v___x_1002_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v_msg_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
lean_inc(v_ref_1001_);
v___x_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1007_, 0, v_ref_1001_);
lean_ctor_set(v___x_1007_, 1, v_a_1003_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set_tag(v___x_1005_, 1);
lean_ctor_set(v___x_1005_, 0, v___x_1007_);
v___x_1009_ = v___x_1005_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg___boxed(lean_object* v_msg_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
return v_res_1018_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
v___x_1020_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__0));
v___x_1021_ = l_Lean_stringToMessageData(v___x_1020_);
return v___x_1021_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__2));
v___x_1024_ = l_Lean_stringToMessageData(v___x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(lean_object* v_indices_1025_, lean_object* v_val_1026_, lean_object* v_as_1027_, size_t v_sz_1028_, size_t v_i_1029_, lean_object* v_b_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_a_1038_; uint8_t v___x_1042_; 
v___x_1042_ = lean_usize_dec_lt(v_i_1029_, v_sz_1028_);
if (v___x_1042_ == 0)
{
lean_object* v___x_1043_; 
v___x_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1043_, 0, v_b_1030_);
return v___x_1043_;
}
else
{
lean_object* v___x_1044_; lean_object* v_a_1045_; lean_object* v___x_1046_; 
v___x_1044_ = lean_box(0);
v_a_1045_ = lean_array_uget_borrowed(v_as_1027_, v_i_1029_);
lean_inc(v___y_1035_);
lean_inc_ref(v___y_1034_);
lean_inc(v___y_1033_);
lean_inc_ref(v___y_1032_);
lean_inc(v_a_1045_);
v___x_1046_ = lean_infer_type(v_a_1045_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___x_1068_; uint8_t v___x_1069_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
lean_inc(v_a_1047_);
lean_dec_ref_known(v___x_1046_, 1);
v___x_1068_ = l_Lean_Expr_fvarId_x21(v_val_1026_);
v___x_1069_ = l_Lean_Expr_containsFVar(v_a_1047_, v___x_1068_);
lean_dec(v___x_1068_);
if (v___x_1069_ == 0)
{
v___y_1049_ = v___y_1031_;
v___y_1050_ = v___y_1032_;
v___y_1051_ = v___y_1033_;
v___y_1052_ = v___y_1034_;
v___y_1053_ = v___y_1035_;
goto v___jp_1048_;
}
else
{
lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1070_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1045_);
v___x_1071_ = l_Lean_MessageData_ofExpr(v_a_1045_);
v___x_1072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__3);
v___x_1074_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1072_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
lean_inc(v_a_1047_);
v___x_1075_ = l_Lean_indentExpr(v_a_1047_);
v___x_1076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1074_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v___x_1077_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1076_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_dec_ref_known(v___x_1077_, 1);
v___y_1049_ = v___y_1031_;
v___y_1050_ = v___y_1032_;
v___y_1051_ = v___y_1033_;
v___y_1052_ = v___y_1034_;
v___y_1053_ = v___y_1035_;
goto v___jp_1048_;
}
else
{
lean_dec(v_a_1047_);
return v___x_1077_;
}
}
v___jp_1048_:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; uint8_t v___x_1056_; 
v___x_1054_ = lean_unsigned_to_nat(0u);
v___x_1055_ = lean_array_get_size(v_indices_1025_);
v___x_1056_ = lean_nat_dec_lt(v___x_1054_, v___x_1055_);
if (v___x_1056_ == 0)
{
lean_dec(v_a_1047_);
v_a_1038_ = v___x_1044_;
goto v___jp_1037_;
}
else
{
if (v___x_1056_ == 0)
{
lean_dec(v_a_1047_);
v_a_1038_ = v___x_1044_;
goto v___jp_1037_;
}
else
{
size_t v___x_1057_; size_t v___x_1058_; uint8_t v___x_1059_; 
v___x_1057_ = ((size_t)0ULL);
v___x_1058_ = lean_usize_of_nat(v___x_1055_);
v___x_1059_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__0(v_a_1047_, v_indices_1025_, v___x_1057_, v___x_1058_);
if (v___x_1059_ == 0)
{
lean_dec(v_a_1047_);
v_a_1038_ = v___x_1044_;
goto v___jp_1037_;
}
else
{
lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1060_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__1);
lean_inc(v_a_1045_);
v___x_1061_ = l_Lean_MessageData_ofExpr(v_a_1045_);
v___x_1062_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1060_);
lean_ctor_set(v___x_1062_, 1, v___x_1061_);
v___x_1063_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___closed__1);
v___x_1064_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
v___x_1065_ = l_Lean_indentExpr(v_a_1047_);
v___x_1066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1064_);
lean_ctor_set(v___x_1066_, 1, v___x_1065_);
v___x_1067_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1066_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_);
if (lean_obj_tag(v___x_1067_) == 0)
{
lean_dec_ref_known(v___x_1067_, 1);
v_a_1038_ = v___x_1044_;
goto v___jp_1037_;
}
else
{
return v___x_1067_;
}
}
}
}
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
v_a_1078_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1046_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1046_);
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
v___jp_1037_:
{
size_t v___x_1039_; size_t v___x_1040_; 
v___x_1039_ = ((size_t)1ULL);
v___x_1040_ = lean_usize_add(v_i_1029_, v___x_1039_);
v_i_1029_ = v___x_1040_;
v_b_1030_ = v_a_1038_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2___boxed(lean_object* v_indices_1086_, lean_object* v_val_1087_, lean_object* v_as_1088_, lean_object* v_sz_1089_, lean_object* v_i_1090_, lean_object* v_b_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
size_t v_sz_boxed_1098_; size_t v_i_boxed_1099_; lean_object* v_res_1100_; 
v_sz_boxed_1098_ = lean_unbox_usize(v_sz_1089_);
lean_dec(v_sz_1089_);
v_i_boxed_1099_ = lean_unbox_usize(v_i_1090_);
lean_dec(v_i_1090_);
v_res_1100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1086_, v_val_1087_, v_as_1088_, v_sz_boxed_1098_, v_i_boxed_1099_, v_b_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec_ref(v___y_1092_);
lean_dec_ref(v_as_1088_);
lean_dec_ref(v_val_1087_);
lean_dec_ref(v_indices_1086_);
return v_res_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields(lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_){
_start:
{
lean_object* v_compFieldVars_1107_; lean_object* v_indices_1108_; lean_object* v_val_1109_; lean_object* v___x_1110_; size_t v_sz_1111_; size_t v___x_1112_; lean_object* v___x_1113_; 
v_compFieldVars_1107_ = lean_ctor_get(v_a_1101_, 4);
v_indices_1108_ = lean_ctor_get(v_a_1101_, 5);
v_val_1109_ = lean_ctor_get(v_a_1101_, 6);
v___x_1110_ = lean_box(0);
v_sz_1111_ = lean_array_size(v_compFieldVars_1107_);
v___x_1112_ = ((size_t)0ULL);
v___x_1113_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__2(v_indices_1108_, v_val_1109_, v_compFieldVars_1107_, v_sz_1111_, v___x_1112_, v___x_1110_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; 
v_unused_1121_ = lean_ctor_get(v___x_1113_, 0);
lean_dec(v_unused_1121_);
v___x_1115_ = v___x_1113_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_dec(v___x_1113_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v___x_1110_);
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v___x_1110_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
else
{
return v___x_1113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_validateComputedFields___boxed(lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_Elab_ComputedFields_validateComputedFields(v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
lean_dec(v_a_1124_);
lean_dec_ref(v_a_1123_);
lean_dec_ref(v_a_1122_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(lean_object* v_00_u03b1_1129_, lean_object* v_msg_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v_msg_1130_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___boxed(lean_object* v_00_u03b1_1138_, lean_object* v_msg_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1(v_00_u03b1_1138_, v_msg_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_, v___y_1144_);
lean_dec(v___y_1144_);
lean_dec_ref(v___y_1143_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec_ref(v___y_1140_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(lean_object* v_k_1147_, lean_object* v___y_1148_, lean_object* v_b_1149_, lean_object* v_c_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v___x_1156_; 
lean_inc(v___y_1154_);
lean_inc_ref(v___y_1153_);
lean_inc(v___y_1152_);
lean_inc_ref(v___y_1151_);
lean_inc_ref(v___y_1148_);
v___x_1156_ = lean_apply_8(v_k_1147_, v_b_1149_, v_c_1150_, v___y_1148_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, lean_box(0));
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed(lean_object* v_k_1157_, lean_object* v___y_1158_, lean_object* v_b_1159_, lean_object* v_c_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0(v_k_1157_, v___y_1158_, v_b_1159_, v_c_1160_, v___y_1161_, v___y_1162_, v___y_1163_, v___y_1164_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec_ref(v___y_1158_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(lean_object* v_type_1167_, lean_object* v_k_1168_, uint8_t v_cleanupAnnotations_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___f_1176_; uint8_t v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
lean_inc_ref(v___y_1170_);
v___f_1176_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1176_, 0, v_k_1168_);
lean_closure_set(v___f_1176_, 1, v___y_1170_);
v___x_1177_ = 0;
v___x_1178_ = lean_box(0);
v___x_1179_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_1177_, v___x_1178_, v_type_1167_, v___f_1176_, v_cleanupAnnotations_1169_, v___x_1177_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
if (lean_obj_tag(v___x_1179_) == 0)
{
return v___x_1179_;
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1179_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1179_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg___boxed(lean_object* v_type_1188_, lean_object* v_k_1189_, lean_object* v_cleanupAnnotations_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1197_; lean_object* v_res_1198_; 
v_cleanupAnnotations_boxed_1197_ = lean_unbox(v_cleanupAnnotations_1190_);
v_res_1198_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1188_, v_k_1189_, v_cleanupAnnotations_boxed_1197_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec_ref(v___y_1191_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(lean_object* v_00_u03b1_1199_, lean_object* v_type_1200_, lean_object* v_k_1201_, uint8_t v_cleanupAnnotations_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_type_1200_, v_k_1201_, v_cleanupAnnotations_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___boxed(lean_object* v_00_u03b1_1210_, lean_object* v_type_1211_, lean_object* v_k_1212_, lean_object* v_cleanupAnnotations_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1220_; lean_object* v_res_1221_; 
v_cleanupAnnotations_boxed_1220_ = lean_unbox(v_cleanupAnnotations_1213_);
v_res_1221_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0(v_00_u03b1_1210_, v_type_1211_, v_k_1212_, v_cleanupAnnotations_boxed_1220_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec_ref(v___y_1214_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(lean_object* v___x_1224_, lean_object* v_lparams_1225_, lean_object* v_head_1226_, lean_object* v_params_1227_, lean_object* v___x_1228_, lean_object* v_compFieldVars_1229_, lean_object* v_fields_1230_, lean_object* v_retTy_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_){
_start:
{
lean_object* v___x_1238_; lean_object* v_dummy_1239_; lean_object* v_nargs_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1238_ = l_Lean_mkConst(v___x_1224_, v_lparams_1225_);
v_dummy_1239_ = lean_obj_once(&l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4, &l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4_once, _init_l_Lean_Elab_ComputedFields_getComputedFieldValue___closed__4);
v_nargs_1240_ = l_Lean_Expr_getAppNumArgs(v_retTy_1231_);
lean_inc(v_nargs_1240_);
v___x_1241_ = lean_mk_array(v_nargs_1240_, v_dummy_1239_);
v___x_1242_ = lean_unsigned_to_nat(1u);
v___x_1243_ = lean_nat_sub(v_nargs_1240_, v___x_1242_);
lean_dec(v_nargs_1240_);
v___x_1244_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_retTy_1231_, v___x_1241_, v___x_1243_);
v___x_1245_ = l_Lean_mkAppN(v___x_1238_, v___x_1244_);
lean_dec_ref(v___x_1244_);
lean_inc(v_head_1226_);
v___x_1246_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_1226_, v___y_1235_, v___y_1236_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; uint8_t v___x_1248_; lean_object* v___y_1250_; uint8_t v___x_1274_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
lean_dec_ref_known(v___x_1246_, 1);
v___x_1248_ = 1;
v___x_1274_ = lean_unbox(v_a_1247_);
lean_dec(v_a_1247_);
if (v___x_1274_ == 0)
{
v___y_1250_ = v_compFieldVars_1229_;
goto v___jp_1249_;
}
else
{
lean_object* v___x_1275_; 
v___x_1275_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1250_ = v___x_1275_;
goto v___jp_1249_;
}
v___jp_1249_:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; uint8_t v___x_1254_; lean_object* v___x_1255_; 
v___x_1251_ = l_Array_append___redArg(v_params_1227_, v___y_1250_);
v___x_1252_ = l_Array_append___redArg(v___x_1251_, v_fields_1230_);
v___x_1253_ = 0;
v___x_1254_ = 1;
v___x_1255_ = l_Lean_Meta_mkForallFVars(v___x_1252_, v___x_1245_, v___x_1253_, v___x_1248_, v___x_1248_, v___x_1254_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_);
lean_dec_ref(v___x_1252_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1265_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1265_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1265_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1260_ = l_Lean_Name_append(v_head_1226_, v___x_1228_);
v___x_1261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1261_, 0, v___x_1260_);
lean_ctor_set(v___x_1261_, 1, v_a_1256_);
if (v_isShared_1259_ == 0)
{
lean_ctor_set(v___x_1258_, 0, v___x_1261_);
v___x_1263_ = v___x_1258_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec(v___x_1228_);
lean_dec(v_head_1226_);
v_a_1266_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1255_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1255_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v___x_1245_);
lean_dec(v___x_1228_);
lean_dec_ref(v_params_1227_);
lean_dec(v_head_1226_);
v_a_1276_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1246_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1246_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed(lean_object* v___x_1284_, lean_object* v_lparams_1285_, lean_object* v_head_1286_, lean_object* v_params_1287_, lean_object* v___x_1288_, lean_object* v_compFieldVars_1289_, lean_object* v_fields_1290_, lean_object* v_retTy_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0(v___x_1284_, v_lparams_1285_, v_head_1286_, v_params_1287_, v___x_1288_, v_compFieldVars_1289_, v_fields_1290_, v_retTy_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec_ref(v___y_1292_);
lean_dec_ref(v_fields_1290_);
lean_dec_ref(v_compFieldVars_1289_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(lean_object* v___x_1302_, lean_object* v_lparams_1303_, lean_object* v_params_1304_, lean_object* v_compFieldVars_1305_, lean_object* v_x_1306_, lean_object* v_x_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
if (lean_obj_tag(v_x_1306_) == 0)
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
lean_dec_ref(v_compFieldVars_1305_);
lean_dec_ref(v_params_1304_);
lean_dec(v_lparams_1303_);
lean_dec(v___x_1302_);
v___x_1314_ = l_List_reverse___redArg(v_x_1307_);
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
return v___x_1315_;
}
else
{
lean_object* v_head_1316_; lean_object* v_tail_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1350_; 
v_head_1316_ = lean_ctor_get(v_x_1306_, 0);
v_tail_1317_ = lean_ctor_get(v_x_1306_, 1);
v_isSharedCheck_1350_ = !lean_is_exclusive(v_x_1306_);
if (v_isSharedCheck_1350_ == 0)
{
v___x_1319_ = v_x_1306_;
v_isShared_1320_ = v_isSharedCheck_1350_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_tail_1317_);
lean_inc(v_head_1316_);
lean_dec(v_x_1306_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1350_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1321_; lean_object* v___f_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1321_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc_ref(v_compFieldVars_1305_);
lean_inc_ref(v_params_1304_);
lean_inc(v_head_1316_);
lean_inc_n(v_lparams_1303_, 2);
lean_inc(v___x_1302_);
v___f_1322_ = lean_alloc_closure((void*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___boxed), 14, 6);
lean_closure_set(v___f_1322_, 0, v___x_1302_);
lean_closure_set(v___f_1322_, 1, v_lparams_1303_);
lean_closure_set(v___f_1322_, 2, v_head_1316_);
lean_closure_set(v___f_1322_, 3, v_params_1304_);
lean_closure_set(v___f_1322_, 4, v___x_1321_);
lean_closure_set(v___f_1322_, 5, v_compFieldVars_1305_);
v___x_1323_ = l_Lean_mkConst(v_head_1316_, v_lparams_1303_);
v___x_1324_ = l_Lean_mkAppN(v___x_1323_, v_params_1304_);
lean_inc(v___y_1312_);
lean_inc_ref(v___y_1311_);
lean_inc(v___y_1310_);
lean_inc_ref(v___y_1309_);
v___x_1325_ = lean_infer_type(v___x_1324_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; uint8_t v___x_1327_; lean_object* v___x_1328_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
lean_dec_ref_known(v___x_1325_, 1);
v___x_1327_ = 0;
v___x_1328_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1326_, v___f_1322_, v___x_1327_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1331_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 1, v_x_1307_);
lean_ctor_set(v___x_1319_, 0, v_a_1329_);
v___x_1331_ = v___x_1319_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1329_);
lean_ctor_set(v_reuseFailAlloc_1333_, 1, v_x_1307_);
v___x_1331_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
v_x_1306_ = v_tail_1317_;
v_x_1307_ = v___x_1331_;
goto _start;
}
}
else
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1341_; 
lean_del_object(v___x_1319_);
lean_dec(v_tail_1317_);
lean_dec(v_x_1307_);
lean_dec_ref(v_compFieldVars_1305_);
lean_dec_ref(v_params_1304_);
lean_dec(v_lparams_1303_);
lean_dec(v___x_1302_);
v_a_1334_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1341_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1341_ == 0)
{
v___x_1336_ = v___x_1328_;
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1328_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1341_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1339_; 
if (v_isShared_1337_ == 0)
{
v___x_1339_ = v___x_1336_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_a_1334_);
v___x_1339_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
return v___x_1339_;
}
}
}
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec_ref(v___f_1322_);
lean_del_object(v___x_1319_);
lean_dec(v_tail_1317_);
lean_dec(v_x_1307_);
lean_dec_ref(v_compFieldVars_1305_);
lean_dec_ref(v_params_1304_);
lean_dec(v_lparams_1303_);
lean_dec(v___x_1302_);
v_a_1342_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1325_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1325_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___boxed(lean_object* v___x_1351_, lean_object* v_lparams_1352_, lean_object* v_params_1353_, lean_object* v_compFieldVars_1354_, lean_object* v_x_1355_, lean_object* v_x_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1351_, v_lparams_1352_, v_params_1353_, v_compFieldVars_1354_, v_x_1355_, v_x_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
lean_dec_ref(v___y_1357_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType(lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_toInductiveVal_1370_; lean_object* v_toConstantVal_1371_; lean_object* v_lparams_1372_; lean_object* v_params_1373_; lean_object* v_compFieldVars_1374_; lean_object* v_numParams_1375_; lean_object* v_ctors_1376_; uint8_t v_isUnsafe_1377_; lean_object* v_name_1378_; lean_object* v_levelParams_1379_; lean_object* v_type_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v_toInductiveVal_1370_ = lean_ctor_get(v_a_1364_, 0);
v_toConstantVal_1371_ = lean_ctor_get(v_toInductiveVal_1370_, 0);
v_lparams_1372_ = lean_ctor_get(v_a_1364_, 1);
v_params_1373_ = lean_ctor_get(v_a_1364_, 2);
v_compFieldVars_1374_ = lean_ctor_get(v_a_1364_, 4);
v_numParams_1375_ = lean_ctor_get(v_toInductiveVal_1370_, 1);
v_ctors_1376_ = lean_ctor_get(v_toInductiveVal_1370_, 4);
v_isUnsafe_1377_ = lean_ctor_get_uint8(v_toInductiveVal_1370_, sizeof(void*)*6 + 1);
v_name_1378_ = lean_ctor_get(v_toConstantVal_1371_, 0);
v_levelParams_1379_ = lean_ctor_get(v_toConstantVal_1371_, 1);
v_type_1380_ = lean_ctor_get(v_toConstantVal_1371_, 2);
v___x_1381_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_1378_);
v___x_1382_ = l_Lean_Name_append(v_name_1378_, v___x_1381_);
v___x_1383_ = lean_box(0);
lean_inc(v_ctors_1376_);
lean_inc_ref(v_compFieldVars_1374_);
lean_inc_ref(v_params_1373_);
lean_inc(v_lparams_1372_);
lean_inc(v___x_1382_);
v___x_1384_ = l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1(v___x_1382_, v_lparams_1372_, v_params_1373_, v_compFieldVars_1374_, v_ctors_1376_, v___x_1383_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1384_) == 0)
{
lean_object* v_a_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; uint8_t v___x_1389_; lean_object* v___x_1390_; 
v_a_1385_ = lean_ctor_get(v___x_1384_, 0);
lean_inc(v_a_1385_);
lean_dec_ref_known(v___x_1384_, 1);
lean_inc_ref(v_type_1380_);
lean_inc(v___x_1382_);
v___x_1386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1386_, 0, v___x_1382_);
lean_ctor_set(v___x_1386_, 1, v_type_1380_);
lean_ctor_set(v___x_1386_, 2, v_a_1385_);
v___x_1387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
lean_ctor_set(v___x_1387_, 1, v___x_1383_);
lean_inc(v_numParams_1375_);
lean_inc(v_levelParams_1379_);
v___x_1388_ = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(v___x_1388_, 0, v_levelParams_1379_);
lean_ctor_set(v___x_1388_, 1, v_numParams_1375_);
lean_ctor_set(v___x_1388_, 2, v___x_1387_);
lean_ctor_set_uint8(v___x_1388_, sizeof(void*)*3, v_isUnsafe_1377_);
v___x_1389_ = 0;
v___x_1390_ = l_Lean_addDecl(v___x_1388_, v___x_1389_, v_a_1367_, v_a_1368_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v___x_1390_, 0);
lean_dec(v_unused_1398_);
v___x_1392_ = v___x_1390_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_dec(v___x_1390_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
lean_ctor_set(v___x_1392_, 0, v___x_1382_);
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1382_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_dec(v___x_1382_);
v_a_1399_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1390_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1390_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
else
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
lean_dec(v___x_1382_);
v_a_1407_ = lean_ctor_get(v___x_1384_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1384_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1384_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1384_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
v___x_1412_ = v___x_1409_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_a_1407_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkImplType___boxed(lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lean_Elab_ComputedFields_mkImplType(v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
lean_dec(v_a_1419_);
lean_dec_ref(v_a_1418_);
lean_dec(v_a_1417_);
lean_dec_ref(v_a_1416_);
lean_dec_ref(v_a_1415_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(lean_object* v_k_1422_, lean_object* v___y_1423_, lean_object* v_b_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_){
_start:
{
lean_object* v___x_1430_; 
lean_inc(v___y_1428_);
lean_inc_ref(v___y_1427_);
lean_inc(v___y_1426_);
lean_inc_ref(v___y_1425_);
lean_inc_ref(v___y_1423_);
v___x_1430_ = lean_apply_7(v_k_1422_, v_b_1424_, v___y_1423_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, lean_box(0));
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed(lean_object* v_k_1431_, lean_object* v___y_1432_, lean_object* v_b_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0(v_k_1431_, v___y_1432_, v_b_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec_ref(v___y_1432_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(lean_object* v_name_1440_, lean_object* v_type_1441_, lean_object* v_val_1442_, lean_object* v_k_1443_, uint8_t v_nondep_1444_, uint8_t v_kind_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v___f_1452_; lean_object* v___x_1453_; 
lean_inc_ref(v___y_1446_);
v___f_1452_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1452_, 0, v_k_1443_);
lean_closure_set(v___f_1452_, 1, v___y_1446_);
v___x_1453_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1440_, v_type_1441_, v_val_1442_, v___f_1452_, v_nondep_1444_, v_kind_1445_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
if (lean_obj_tag(v___x_1453_) == 0)
{
return v___x_1453_;
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
v_a_1454_ = lean_ctor_get(v___x_1453_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1453_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1453_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___boxed(lean_object* v_name_1462_, lean_object* v_type_1463_, lean_object* v_val_1464_, lean_object* v_k_1465_, lean_object* v_nondep_1466_, lean_object* v_kind_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
uint8_t v_nondep_boxed_1474_; uint8_t v_kind_boxed_1475_; lean_object* v_res_1476_; 
v_nondep_boxed_1474_ = lean_unbox(v_nondep_1466_);
v_kind_boxed_1475_ = lean_unbox(v_kind_1467_);
v_res_1476_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1462_, v_type_1463_, v_val_1464_, v_k_1465_, v_nondep_boxed_1474_, v_kind_boxed_1475_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec_ref(v___y_1468_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(lean_object* v_00_u03b1_1477_, lean_object* v_name_1478_, lean_object* v_type_1479_, lean_object* v_val_1480_, lean_object* v_k_1481_, uint8_t v_nondep_1482_, uint8_t v_kind_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v_name_1478_, v_type_1479_, v_val_1480_, v_k_1481_, v_nondep_1482_, v_kind_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___boxed(lean_object* v_00_u03b1_1491_, lean_object* v_name_1492_, lean_object* v_type_1493_, lean_object* v_val_1494_, lean_object* v_k_1495_, lean_object* v_nondep_1496_, lean_object* v_kind_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
uint8_t v_nondep_boxed_1504_; uint8_t v_kind_boxed_1505_; lean_object* v_res_1506_; 
v_nondep_boxed_1504_ = lean_unbox(v_nondep_1496_);
v_kind_boxed_1505_ = lean_unbox(v_kind_1497_);
v_res_1506_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2(v_00_u03b1_1491_, v_name_1492_, v_type_1493_, v_val_1494_, v_k_1495_, v_nondep_boxed_1504_, v_kind_boxed_1505_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec_ref(v___y_1498_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(lean_object* v___x_1507_, lean_object* v___x_1508_, lean_object* v_majorImpl_1509_, lean_object* v_m_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; uint8_t v___x_1522_; uint8_t v___x_1523_; uint8_t v___x_1524_; lean_object* v___x_1525_; 
v___x_1517_ = lean_mk_empty_array_with_capacity(v___x_1507_);
lean_inc_ref(v_m_1510_);
lean_inc_ref(v___x_1517_);
v___x_1518_ = lean_array_push(v___x_1517_, v_m_1510_);
v___x_1519_ = l_Array_append___redArg(v___x_1518_, v___x_1508_);
v___x_1520_ = lean_array_push(v___x_1517_, v_majorImpl_1509_);
v___x_1521_ = l_Array_append___redArg(v___x_1519_, v___x_1520_);
lean_dec_ref(v___x_1520_);
v___x_1522_ = 0;
v___x_1523_ = 1;
v___x_1524_ = 1;
v___x_1525_ = l_Lean_Meta_mkLambdaFVars(v___x_1521_, v_m_1510_, v___x_1522_, v___x_1523_, v___x_1522_, v___x_1523_, v___x_1524_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
lean_dec_ref(v___x_1521_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed(lean_object* v___x_1526_, lean_object* v___x_1527_, lean_object* v_majorImpl_1528_, lean_object* v_m_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0(v___x_1526_, v___x_1527_, v_majorImpl_1528_, v_m_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_);
lean_dec(v___y_1534_);
lean_dec_ref(v___y_1533_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec_ref(v___x_1527_);
lean_dec(v___x_1526_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(lean_object* v___x_1540_, lean_object* v___x_1541_, lean_object* v_constMotive_1542_, lean_object* v_majorImpl_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v___f_1550_; lean_object* v___x_1551_; 
v___f_1550_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1550_, 0, v___x_1540_);
lean_closure_set(v___f_1550_, 1, v___x_1541_);
lean_closure_set(v___f_1550_, 2, v_majorImpl_1543_);
lean_inc(v___y_1548_);
lean_inc_ref(v___y_1547_);
lean_inc(v___y_1546_);
lean_inc_ref(v___y_1545_);
lean_inc_ref(v_constMotive_1542_);
v___x_1551_ = lean_infer_type(v_constMotive_1542_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___x_1551_, 1);
v___x_1553_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___closed__1));
v___x_1554_ = 0;
v___x_1555_ = 0;
v___x_1556_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg(v___x_1553_, v_a_1552_, v_constMotive_1542_, v___f_1550_, v___x_1554_, v___x_1555_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
return v___x_1556_;
}
else
{
lean_dec_ref(v___f_1550_);
lean_dec_ref(v_constMotive_1542_);
return v___x_1551_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed(lean_object* v___x_1557_, lean_object* v___x_1558_, lean_object* v_constMotive_1559_, lean_object* v_majorImpl_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1(v___x_1557_, v___x_1558_, v_constMotive_1559_, v_majorImpl_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec_ref(v___y_1561_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(lean_object* v_name_1568_, uint8_t v_bi_1569_, lean_object* v_type_1570_, lean_object* v_k_1571_, uint8_t v_kind_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v___f_1579_; lean_object* v___x_1580_; 
lean_inc_ref(v___y_1573_);
v___f_1579_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__2___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_1579_, 0, v_k_1571_);
lean_closure_set(v___f_1579_, 1, v___y_1573_);
v___x_1580_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1568_, v_bi_1569_, v_type_1570_, v___f_1579_, v_kind_1572_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_);
if (lean_obj_tag(v___x_1580_) == 0)
{
return v___x_1580_;
}
else
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1588_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1588_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1586_; 
if (v_isShared_1584_ == 0)
{
v___x_1586_ = v___x_1583_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1581_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg___boxed(lean_object* v_name_1589_, lean_object* v_bi_1590_, lean_object* v_type_1591_, lean_object* v_k_1592_, lean_object* v_kind_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
uint8_t v_bi_boxed_1600_; uint8_t v_kind_boxed_1601_; lean_object* v_res_1602_; 
v_bi_boxed_1600_ = lean_unbox(v_bi_1590_);
v_kind_boxed_1601_ = lean_unbox(v_kind_1593_);
v_res_1602_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1589_, v_bi_boxed_1600_, v_type_1591_, v_k_1592_, v_kind_boxed_1601_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec_ref(v___y_1594_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(lean_object* v_name_1603_, lean_object* v_type_1604_, lean_object* v_k_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
uint8_t v___x_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; 
v___x_1612_ = 0;
v___x_1613_ = 0;
v___x_1614_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_1603_, v___x_1612_, v_type_1604_, v_k_1605_, v___x_1613_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg___boxed(lean_object* v_name_1615_, lean_object* v_type_1616_, lean_object* v_k_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_1615_, v_type_1616_, v_k_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec_ref(v___y_1618_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(lean_object* v_a_1625_, lean_object* v_a_1626_){
_start:
{
if (lean_obj_tag(v_a_1625_) == 0)
{
lean_object* v___x_1627_; 
v___x_1627_ = l_List_reverse___redArg(v_a_1626_);
return v___x_1627_;
}
else
{
lean_object* v_head_1628_; lean_object* v_tail_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1638_; 
v_head_1628_ = lean_ctor_get(v_a_1625_, 0);
v_tail_1629_ = lean_ctor_get(v_a_1625_, 1);
v_isSharedCheck_1638_ = !lean_is_exclusive(v_a_1625_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1631_ = v_a_1625_;
v_isShared_1632_ = v_isSharedCheck_1638_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_tail_1629_);
lean_inc(v_head_1628_);
lean_dec(v_a_1625_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1638_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1633_; lean_object* v___x_1635_; 
v___x_1633_ = l_Lean_mkLevelParam(v_head_1628_);
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 1, v_a_1626_);
lean_ctor_set(v___x_1631_, 0, v___x_1633_);
v___x_1635_ = v___x_1631_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v___x_1633_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v_a_1626_);
v___x_1635_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
v_a_1625_ = v_tail_1629_;
v_a_1626_ = v___x_1635_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(lean_object* v_a_1639_, lean_object* v_b_1640_){
_start:
{
lean_object* v_array_1641_; lean_object* v_start_1642_; lean_object* v_stop_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1656_; 
v_array_1641_ = lean_ctor_get(v_a_1639_, 0);
v_start_1642_ = lean_ctor_get(v_a_1639_, 1);
v_stop_1643_ = lean_ctor_get(v_a_1639_, 2);
v_isSharedCheck_1656_ = !lean_is_exclusive(v_a_1639_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1645_ = v_a_1639_;
v_isShared_1646_ = v_isSharedCheck_1656_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_stop_1643_);
lean_inc(v_start_1642_);
lean_inc(v_array_1641_);
lean_dec(v_a_1639_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1656_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
uint8_t v___x_1647_; 
v___x_1647_ = lean_nat_dec_lt(v_start_1642_, v_stop_1643_);
if (v___x_1647_ == 0)
{
lean_del_object(v___x_1645_);
lean_dec(v_stop_1643_);
lean_dec(v_start_1642_);
lean_dec_ref(v_array_1641_);
return v_b_1640_;
}
else
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1648_ = lean_unsigned_to_nat(1u);
v___x_1649_ = lean_nat_add(v_start_1642_, v___x_1648_);
lean_inc_ref(v_array_1641_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 1, v___x_1649_);
v___x_1651_ = v___x_1645_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_array_1641_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v___x_1649_);
lean_ctor_set(v_reuseFailAlloc_1655_, 2, v_stop_1643_);
v___x_1651_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = lean_array_fget(v_array_1641_, v_start_1642_);
lean_dec(v_start_1642_);
lean_dec_ref(v_array_1641_);
v___x_1653_ = lean_array_push(v_b_1640_, v___x_1652_);
v_a_1639_ = v___x_1651_;
v_b_1640_ = v___x_1653_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(lean_object* v_b_1657_, lean_object* v_a_1658_, lean_object* v_constMotive_1659_, uint8_t v___x_1660_, lean_object* v_compFieldVars_1661_, lean_object* v_args_1662_, lean_object* v_x_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lean_Elab_ComputedFields_isScalarField(v_b_1657_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_object* v_a_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_a_1671_ = lean_ctor_get(v___x_1670_, 0);
lean_inc(v_a_1671_);
lean_dec_ref_known(v___x_1670_, 1);
v___x_1672_ = l_Lean_mkAppN(v_a_1658_, v_args_1662_);
v___x_1673_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_constMotive_1659_, v___x_1672_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___y_1676_; uint8_t v___x_1681_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
lean_inc(v_a_1674_);
lean_dec_ref_known(v___x_1673_, 1);
v___x_1681_ = lean_unbox(v_a_1671_);
lean_dec(v_a_1671_);
if (v___x_1681_ == 0)
{
v___y_1676_ = v_compFieldVars_1661_;
goto v___jp_1675_;
}
else
{
lean_object* v___x_1682_; 
lean_dec_ref(v_compFieldVars_1661_);
v___x_1682_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___y_1676_ = v___x_1682_;
goto v___jp_1675_;
}
v___jp_1675_:
{
lean_object* v___x_1677_; uint8_t v___x_1678_; uint8_t v___x_1679_; lean_object* v___x_1680_; 
v___x_1677_ = l_Array_append___redArg(v___y_1676_, v_args_1662_);
v___x_1678_ = 0;
v___x_1679_ = 1;
v___x_1680_ = l_Lean_Meta_mkLambdaFVars(v___x_1677_, v_a_1674_, v___x_1678_, v___x_1660_, v___x_1678_, v___x_1660_, v___x_1679_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
lean_dec_ref(v___x_1677_);
return v___x_1680_;
}
}
else
{
lean_dec(v_a_1671_);
lean_dec_ref(v_compFieldVars_1661_);
return v___x_1673_;
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
lean_dec_ref(v_compFieldVars_1661_);
lean_dec_ref(v_constMotive_1659_);
lean_dec_ref(v_a_1658_);
v_a_1683_ = lean_ctor_get(v___x_1670_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1670_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1670_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1670_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed(lean_object* v_b_1691_, lean_object* v_a_1692_, lean_object* v_constMotive_1693_, lean_object* v___x_1694_, lean_object* v_compFieldVars_1695_, lean_object* v_args_1696_, lean_object* v_x_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
uint8_t v___x_12520__boxed_1704_; lean_object* v_res_1705_; 
v___x_12520__boxed_1704_ = lean_unbox(v___x_1694_);
v_res_1705_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0(v_b_1691_, v_a_1692_, v_constMotive_1693_, v___x_12520__boxed_1704_, v_compFieldVars_1695_, v_args_1696_, v_x_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec_ref(v_x_1697_);
lean_dec_ref(v_args_1696_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(lean_object* v_constMotive_1706_, lean_object* v_compFieldVars_1707_, lean_object* v_as_1708_, lean_object* v_bs_1709_, lean_object* v_i_1710_, lean_object* v_cs_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v___y_1719_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = lean_array_get_size(v_as_1708_);
v___x_1734_ = lean_nat_dec_lt(v_i_1710_, v___x_1733_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; 
lean_dec(v_i_1710_);
lean_dec_ref(v_compFieldVars_1707_);
lean_dec_ref(v_constMotive_1706_);
v___x_1735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1735_, 0, v_cs_1711_);
return v___x_1735_;
}
else
{
lean_object* v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = lean_array_get_size(v_bs_1709_);
v___x_1737_ = lean_nat_dec_lt(v_i_1710_, v___x_1736_);
if (v___x_1737_ == 0)
{
lean_object* v___x_1738_; 
lean_dec(v_i_1710_);
lean_dec_ref(v_compFieldVars_1707_);
lean_dec_ref(v_constMotive_1706_);
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v_cs_1711_);
return v___x_1738_;
}
else
{
lean_object* v_a_1739_; lean_object* v_b_1740_; lean_object* v___x_1741_; lean_object* v___f_1742_; lean_object* v___x_1743_; 
v_a_1739_ = lean_array_fget_borrowed(v_as_1708_, v_i_1710_);
v_b_1740_ = lean_array_fget_borrowed(v_bs_1709_, v_i_1710_);
v___x_1741_ = lean_box(v___x_1737_);
lean_inc_ref(v_compFieldVars_1707_);
lean_inc_ref(v_constMotive_1706_);
lean_inc_n(v_a_1739_, 2);
lean_inc(v_b_1740_);
v___f_1742_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___lam__0___boxed), 13, 5);
lean_closure_set(v___f_1742_, 0, v_b_1740_);
lean_closure_set(v___f_1742_, 1, v_a_1739_);
lean_closure_set(v___f_1742_, 2, v_constMotive_1706_);
lean_closure_set(v___f_1742_, 3, v___x_1741_);
lean_closure_set(v___f_1742_, 4, v_compFieldVars_1707_);
lean_inc(v___y_1716_);
lean_inc_ref(v___y_1715_);
lean_inc(v___y_1714_);
lean_inc_ref(v___y_1713_);
v___x_1743_ = lean_infer_type(v_a_1739_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; uint8_t v___x_1745_; lean_object* v___x_1746_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref_known(v___x_1743_, 1);
v___x_1745_ = 0;
v___x_1746_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_1744_, v___f_1742_, v___x_1745_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
v___y_1719_ = v___x_1746_;
goto v___jp_1718_;
}
else
{
lean_dec_ref(v___f_1742_);
v___y_1719_ = v___x_1743_;
goto v___jp_1718_;
}
}
}
v___jp_1718_:
{
if (lean_obj_tag(v___y_1719_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v_a_1720_ = lean_ctor_get(v___y_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref_known(v___y_1719_, 1);
v___x_1721_ = lean_unsigned_to_nat(1u);
v___x_1722_ = lean_nat_add(v_i_1710_, v___x_1721_);
lean_dec(v_i_1710_);
v___x_1723_ = lean_array_push(v_cs_1711_, v_a_1720_);
v_i_1710_ = v___x_1722_;
v_cs_1711_ = v___x_1723_;
goto _start;
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec_ref(v_cs_1711_);
lean_dec(v_i_1710_);
lean_dec_ref(v_compFieldVars_1707_);
lean_dec_ref(v_constMotive_1706_);
v_a_1725_ = lean_ctor_get(v___y_1719_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___y_1719_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___y_1719_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___y_1719_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4___boxed(lean_object* v_constMotive_1747_, lean_object* v_compFieldVars_1748_, lean_object* v_as_1749_, lean_object* v_bs_1750_, lean_object* v_i_1751_, lean_object* v_cs_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1747_, v_compFieldVars_1748_, v_as_1749_, v_bs_1750_, v_i_1751_, v_cs_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
lean_dec(v___y_1757_);
lean_dec_ref(v___y_1756_);
lean_dec(v___y_1755_);
lean_dec_ref(v___y_1754_);
lean_dec_ref(v___y_1753_);
lean_dec_ref(v_bs_1750_);
lean_dec_ref(v_as_1749_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(lean_object* v_numIndices_1763_, lean_object* v___x_1764_, lean_object* v___x_1765_, lean_object* v_lparams_1766_, lean_object* v_params_1767_, lean_object* v_ctors_1768_, lean_object* v_compFieldVars_1769_, lean_object* v_levelParams_1770_, lean_object* v_xs_1771_, lean_object* v_constMotive_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___f_1785_; lean_object* v___x_1786_; lean_object* v_lower_1788_; lean_object* v_upper_1789_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; uint8_t v___x_1831_; 
v___x_1779_ = lean_unsigned_to_nat(1u);
v___x_1780_ = lean_nat_add(v_numIndices_1763_, v___x_1779_);
lean_inc(v___x_1780_);
lean_inc_ref(v_xs_1771_);
v___x_1781_ = l_Array_toSubarray___redArg(v_xs_1771_, v___x_1779_, v___x_1780_);
v___x_1782_ = lean_unsigned_to_nat(0u);
v___x_1783_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_1784_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1781_, v___x_1783_);
lean_inc_ref(v_constMotive_1772_);
lean_inc_ref(v___x_1784_);
v___f_1785_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1785_, 0, v___x_1779_);
lean_closure_set(v___f_1785_, 1, v___x_1784_);
lean_closure_set(v___f_1785_, 2, v_constMotive_1772_);
v___x_1786_ = lean_array_get_borrowed(v___x_1764_, v_xs_1771_, v___x_1780_);
lean_dec(v___x_1780_);
v___x_1828_ = lean_unsigned_to_nat(2u);
v___x_1829_ = lean_nat_add(v_numIndices_1763_, v___x_1828_);
v___x_1830_ = lean_array_get_size(v_xs_1771_);
v___x_1831_ = lean_nat_dec_le(v___x_1829_, v___x_1782_);
if (v___x_1831_ == 0)
{
v_lower_1788_ = v___x_1829_;
v_upper_1789_ = v___x_1830_;
goto v___jp_1787_;
}
else
{
lean_dec(v___x_1829_);
v_lower_1788_ = v___x_1782_;
v_upper_1789_ = v___x_1830_;
goto v___jp_1787_;
}
v___jp_1787_:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
lean_inc_ref(v_xs_1771_);
v___x_1790_ = l_Array_toSubarray___redArg(v_xs_1771_, v_lower_1788_, v_upper_1789_);
v___x_1791_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_1790_, v___x_1783_);
lean_inc(v___x_1765_);
v___x_1792_ = l_Lean_mkConst(v___x_1765_, v_lparams_1766_);
lean_inc_ref(v_params_1767_);
v___x_1793_ = l_Array_append___redArg(v_params_1767_, v___x_1784_);
v___x_1794_ = l_Lean_mkAppN(v___x_1792_, v___x_1793_);
lean_dec_ref(v___x_1793_);
v___x_1795_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___closed__1));
lean_inc_ref(v___x_1794_);
v___x_1796_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_1795_, v___x_1794_, v___f_1785_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; lean_object* v___x_1798_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref_known(v___x_1796_, 1);
lean_inc(v___x_1786_);
v___x_1798_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v___x_1794_, v___x_1786_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
if (lean_obj_tag(v___x_1798_) == 0)
{
lean_object* v_a_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v_a_1799_ = lean_ctor_get(v___x_1798_, 0);
lean_inc(v_a_1799_);
lean_dec_ref_known(v___x_1798_, 1);
v___x_1800_ = lean_array_mk(v_ctors_1768_);
v___x_1801_ = l_Array_zipWithMAux___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__4(v_constMotive_1772_, v_compFieldVars_1769_, v___x_1791_, v___x_1800_, v___x_1782_, v___x_1783_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
lean_dec_ref(v___x_1800_);
lean_dec_ref(v___x_1791_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_a_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; uint8_t v___x_1817_; uint8_t v___x_1818_; lean_object* v___x_1819_; 
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
lean_dec_ref_known(v___x_1801_, 1);
lean_inc_ref(v_params_1767_);
v___x_1803_ = l_Array_append___redArg(v_params_1767_, v_xs_1771_);
lean_dec_ref(v_xs_1771_);
v___x_1804_ = l_Lean_mkCasesOnName(v___x_1765_);
v___x_1805_ = lean_box(0);
v___x_1806_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_1770_, v___x_1805_);
v___x_1807_ = l_Lean_mkConst(v___x_1804_, v___x_1806_);
v___x_1808_ = lean_mk_empty_array_with_capacity(v___x_1779_);
lean_inc_ref(v___x_1808_);
v___x_1809_ = lean_array_push(v___x_1808_, v_a_1797_);
v___x_1810_ = l_Array_append___redArg(v_params_1767_, v___x_1809_);
lean_dec_ref(v___x_1809_);
v___x_1811_ = l_Array_append___redArg(v___x_1810_, v___x_1784_);
lean_dec_ref(v___x_1784_);
v___x_1812_ = lean_array_push(v___x_1808_, v_a_1799_);
v___x_1813_ = l_Array_append___redArg(v___x_1811_, v___x_1812_);
lean_dec_ref(v___x_1812_);
v___x_1814_ = l_Array_append___redArg(v___x_1813_, v_a_1802_);
lean_dec(v_a_1802_);
v___x_1815_ = l_Lean_mkAppN(v___x_1807_, v___x_1814_);
lean_dec_ref(v___x_1814_);
v___x_1816_ = 0;
v___x_1817_ = 1;
v___x_1818_ = 1;
v___x_1819_ = l_Lean_Meta_mkLambdaFVars(v___x_1803_, v___x_1815_, v___x_1816_, v___x_1817_, v___x_1816_, v___x_1817_, v___x_1818_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_);
lean_dec_ref(v___x_1803_);
return v___x_1819_;
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
lean_dec(v_a_1799_);
lean_dec(v_a_1797_);
lean_dec_ref(v___x_1784_);
lean_dec_ref(v_xs_1771_);
lean_dec(v_levelParams_1770_);
lean_dec_ref(v_params_1767_);
lean_dec(v___x_1765_);
v_a_1820_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1801_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1801_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
else
{
lean_dec(v_a_1797_);
lean_dec_ref(v___x_1791_);
lean_dec_ref(v___x_1784_);
lean_dec_ref(v_constMotive_1772_);
lean_dec_ref(v_xs_1771_);
lean_dec(v_levelParams_1770_);
lean_dec_ref(v_compFieldVars_1769_);
lean_dec(v_ctors_1768_);
lean_dec_ref(v_params_1767_);
lean_dec(v___x_1765_);
return v___x_1798_;
}
}
else
{
lean_dec_ref(v___x_1794_);
lean_dec_ref(v___x_1791_);
lean_dec_ref(v___x_1784_);
lean_dec_ref(v_constMotive_1772_);
lean_dec_ref(v_xs_1771_);
lean_dec(v_levelParams_1770_);
lean_dec_ref(v_compFieldVars_1769_);
lean_dec(v_ctors_1768_);
lean_dec_ref(v_params_1767_);
lean_dec(v___x_1765_);
return v___x_1796_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed(lean_object* v_numIndices_1832_, lean_object* v___x_1833_, lean_object* v___x_1834_, lean_object* v_lparams_1835_, lean_object* v_params_1836_, lean_object* v_ctors_1837_, lean_object* v_compFieldVars_1838_, lean_object* v_levelParams_1839_, lean_object* v_xs_1840_, lean_object* v_constMotive_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2(v_numIndices_1832_, v___x_1833_, v___x_1834_, v_lparams_1835_, v_params_1836_, v_ctors_1837_, v_compFieldVars_1838_, v_levelParams_1839_, v_xs_1840_, v_constMotive_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec_ref(v___y_1842_);
lean_dec_ref(v___x_1833_);
lean_dec(v_numIndices_1832_);
return v_res_1848_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1849_; lean_object* v___x_1850_; 
v___x_1849_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
return v___x_1850_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
return v___x_1852_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1853_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__0);
v___x_1854_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
lean_ctor_set(v___x_1854_, 1, v___x_1853_);
lean_ctor_set(v___x_1854_, 2, v___x_1853_);
lean_ctor_set(v___x_1854_, 3, v___x_1853_);
lean_ctor_set(v___x_1854_, 4, v___x_1853_);
lean_ctor_set(v___x_1854_, 5, v___x_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(lean_object* v_env_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_){
_start:
{
lean_object* v___x_1859_; lean_object* v_nextMacroScope_1860_; lean_object* v_ngen_1861_; lean_object* v_auxDeclNGen_1862_; lean_object* v_traceState_1863_; lean_object* v_messages_1864_; lean_object* v_infoState_1865_; lean_object* v_snapshotTasks_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1892_; 
v___x_1859_ = lean_st_ref_take(v___y_1857_);
v_nextMacroScope_1860_ = lean_ctor_get(v___x_1859_, 1);
v_ngen_1861_ = lean_ctor_get(v___x_1859_, 2);
v_auxDeclNGen_1862_ = lean_ctor_get(v___x_1859_, 3);
v_traceState_1863_ = lean_ctor_get(v___x_1859_, 4);
v_messages_1864_ = lean_ctor_get(v___x_1859_, 6);
v_infoState_1865_ = lean_ctor_get(v___x_1859_, 7);
v_snapshotTasks_1866_ = lean_ctor_get(v___x_1859_, 8);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1892_ == 0)
{
lean_object* v_unused_1893_; lean_object* v_unused_1894_; 
v_unused_1893_ = lean_ctor_get(v___x_1859_, 5);
lean_dec(v_unused_1893_);
v_unused_1894_ = lean_ctor_get(v___x_1859_, 0);
lean_dec(v_unused_1894_);
v___x_1868_ = v___x_1859_;
v_isShared_1869_ = v_isSharedCheck_1892_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_snapshotTasks_1866_);
lean_inc(v_infoState_1865_);
lean_inc(v_messages_1864_);
lean_inc(v_traceState_1863_);
lean_inc(v_auxDeclNGen_1862_);
lean_inc(v_ngen_1861_);
lean_inc(v_nextMacroScope_1860_);
lean_dec(v___x_1859_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1892_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___x_1870_; lean_object* v___x_1872_; 
v___x_1870_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 5, v___x_1870_);
lean_ctor_set(v___x_1868_, 0, v_env_1855_);
v___x_1872_ = v___x_1868_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_env_1855_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v_nextMacroScope_1860_);
lean_ctor_set(v_reuseFailAlloc_1891_, 2, v_ngen_1861_);
lean_ctor_set(v_reuseFailAlloc_1891_, 3, v_auxDeclNGen_1862_);
lean_ctor_set(v_reuseFailAlloc_1891_, 4, v_traceState_1863_);
lean_ctor_set(v_reuseFailAlloc_1891_, 5, v___x_1870_);
lean_ctor_set(v_reuseFailAlloc_1891_, 6, v_messages_1864_);
lean_ctor_set(v_reuseFailAlloc_1891_, 7, v_infoState_1865_);
lean_ctor_set(v_reuseFailAlloc_1891_, 8, v_snapshotTasks_1866_);
v___x_1872_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v_mctx_1875_; lean_object* v_zetaDeltaFVarIds_1876_; lean_object* v_postponed_1877_; lean_object* v_diag_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1889_; 
v___x_1873_ = lean_st_ref_put(v___y_1857_, v___x_1872_);
v___x_1874_ = lean_st_ref_take(v___y_1856_);
v_mctx_1875_ = lean_ctor_get(v___x_1874_, 0);
v_zetaDeltaFVarIds_1876_ = lean_ctor_get(v___x_1874_, 2);
v_postponed_1877_ = lean_ctor_get(v___x_1874_, 3);
v_diag_1878_ = lean_ctor_get(v___x_1874_, 4);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1874_);
if (v_isSharedCheck_1889_ == 0)
{
lean_object* v_unused_1890_; 
v_unused_1890_ = lean_ctor_get(v___x_1874_, 1);
lean_dec(v_unused_1890_);
v___x_1880_ = v___x_1874_;
v_isShared_1881_ = v_isSharedCheck_1889_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_diag_1878_);
lean_inc(v_postponed_1877_);
lean_inc(v_zetaDeltaFVarIds_1876_);
lean_inc(v_mctx_1875_);
lean_dec(v___x_1874_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1889_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1885_; 
v___x_1882_ = lean_box(0);
v___x_1883_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 1, v___x_1883_);
v___x_1885_ = v___x_1880_;
goto v_reusejp_1884_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_mctx_1875_);
lean_ctor_set(v_reuseFailAlloc_1888_, 1, v___x_1883_);
lean_ctor_set(v_reuseFailAlloc_1888_, 2, v_zetaDeltaFVarIds_1876_);
lean_ctor_set(v_reuseFailAlloc_1888_, 3, v_postponed_1877_);
lean_ctor_set(v_reuseFailAlloc_1888_, 4, v_diag_1878_);
v___x_1885_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1884_;
}
v_reusejp_1884_:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = lean_st_ref_put(v___y_1856_, v___x_1885_);
v___x_1887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1887_, 0, v___x_1882_);
return v___x_1887_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___boxed(lean_object* v_env_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_){
_start:
{
lean_object* v_res_1899_; 
v_res_1899_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_1895_, v___y_1896_, v___y_1897_);
lean_dec(v___y_1897_);
lean_dec(v___y_1896_);
return v_res_1899_;
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(lean_object* v_declName_1900_, lean_object* v_impName_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
lean_object* v___x_1908_; lean_object* v_env_1909_; lean_object* v___x_1910_; 
v___x_1908_ = lean_st_ref_get(v___y_1906_);
v_env_1909_ = lean_ctor_get(v___x_1908_, 0);
lean_inc_ref(v_env_1909_);
lean_dec(v___x_1908_);
v___x_1910_ = l_Lean_Compiler_setImplementedBy(v_env_1909_, v_declName_1900_, v_impName_1901_);
if (lean_obj_tag(v___x_1910_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1920_; 
v_a_1911_ = lean_ctor_get(v___x_1910_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1910_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1913_ = v___x_1910_;
v_isShared_1914_ = v_isSharedCheck_1920_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1910_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1920_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
lean_ctor_set_tag(v___x_1913_, 3);
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1917_ = l_Lean_MessageData_ofFormat(v___x_1916_);
v___x_1918_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_1917_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_);
return v___x_1918_;
}
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1922_; 
v_a_1921_ = lean_ctor_get(v___x_1910_, 0);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1910_, 1);
v___x_1922_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_a_1921_, v___y_1904_, v___y_1906_);
return v___x_1922_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6___boxed(lean_object* v_declName_1923_, lean_object* v_impName_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_declName_1923_, v_impName_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
lean_dec(v___y_1927_);
lean_dec_ref(v___y_1926_);
lean_dec_ref(v___y_1925_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(lean_object* v_msg_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_){
_start:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v_toApplicative_1941_; lean_object* v___x_1943_; uint8_t v_isShared_1944_; uint8_t v_isSharedCheck_2003_; 
v___x_1939_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_1940_ = l_StateRefT_x27_instMonad___redArg(v___x_1939_);
v_toApplicative_1941_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_2003_ == 0)
{
lean_object* v_unused_2004_; 
v_unused_2004_ = lean_ctor_get(v___x_1940_, 1);
lean_dec(v_unused_2004_);
v___x_1943_ = v___x_1940_;
v_isShared_1944_ = v_isSharedCheck_2003_;
goto v_resetjp_1942_;
}
else
{
lean_inc(v_toApplicative_1941_);
lean_dec(v___x_1940_);
v___x_1943_ = lean_box(0);
v_isShared_1944_ = v_isSharedCheck_2003_;
goto v_resetjp_1942_;
}
v_resetjp_1942_:
{
lean_object* v_toFunctor_1945_; lean_object* v_toSeq_1946_; lean_object* v_toSeqLeft_1947_; lean_object* v_toSeqRight_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_2001_; 
v_toFunctor_1945_ = lean_ctor_get(v_toApplicative_1941_, 0);
v_toSeq_1946_ = lean_ctor_get(v_toApplicative_1941_, 2);
v_toSeqLeft_1947_ = lean_ctor_get(v_toApplicative_1941_, 3);
v_toSeqRight_1948_ = lean_ctor_get(v_toApplicative_1941_, 4);
v_isSharedCheck_2001_ = !lean_is_exclusive(v_toApplicative_1941_);
if (v_isSharedCheck_2001_ == 0)
{
lean_object* v_unused_2002_; 
v_unused_2002_ = lean_ctor_get(v_toApplicative_1941_, 1);
lean_dec(v_unused_2002_);
v___x_1950_ = v_toApplicative_1941_;
v_isShared_1951_ = v_isSharedCheck_2001_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_toSeqRight_1948_);
lean_inc(v_toSeqLeft_1947_);
lean_inc(v_toSeq_1946_);
lean_inc(v_toFunctor_1945_);
lean_dec(v_toApplicative_1941_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_2001_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___f_1952_; lean_object* v___f_1953_; lean_object* v___f_1954_; lean_object* v___f_1955_; lean_object* v___x_1956_; lean_object* v___f_1957_; lean_object* v___f_1958_; lean_object* v___f_1959_; lean_object* v___x_1961_; 
v___f_1952_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_1953_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1945_);
v___f_1954_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1954_, 0, v_toFunctor_1945_);
v___f_1955_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1955_, 0, v_toFunctor_1945_);
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___f_1954_);
lean_ctor_set(v___x_1956_, 1, v___f_1955_);
v___f_1957_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1957_, 0, v_toSeqRight_1948_);
v___f_1958_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1958_, 0, v_toSeqLeft_1947_);
v___f_1959_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1959_, 0, v_toSeq_1946_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 4, v___f_1957_);
lean_ctor_set(v___x_1950_, 3, v___f_1958_);
lean_ctor_set(v___x_1950_, 2, v___f_1959_);
lean_ctor_set(v___x_1950_, 1, v___f_1952_);
lean_ctor_set(v___x_1950_, 0, v___x_1956_);
v___x_1961_ = v___x_1950_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1956_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v___f_1952_);
lean_ctor_set(v_reuseFailAlloc_2000_, 2, v___f_1959_);
lean_ctor_set(v_reuseFailAlloc_2000_, 3, v___f_1958_);
lean_ctor_set(v_reuseFailAlloc_2000_, 4, v___f_1957_);
v___x_1961_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
lean_object* v___x_1963_; 
if (v_isShared_1944_ == 0)
{
lean_ctor_set(v___x_1943_, 1, v___f_1953_);
lean_ctor_set(v___x_1943_, 0, v___x_1961_);
v___x_1963_ = v___x_1943_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v___x_1961_);
lean_ctor_set(v_reuseFailAlloc_1999_, 1, v___f_1953_);
v___x_1963_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1964_; lean_object* v_toApplicative_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1997_; 
v___x_1964_ = l_StateRefT_x27_instMonad___redArg(v___x_1963_);
v_toApplicative_1965_ = lean_ctor_get(v___x_1964_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1964_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; 
v_unused_1998_ = lean_ctor_get(v___x_1964_, 1);
lean_dec(v_unused_1998_);
v___x_1967_ = v___x_1964_;
v_isShared_1968_ = v_isSharedCheck_1997_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_toApplicative_1965_);
lean_dec(v___x_1964_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1997_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v_toFunctor_1969_; lean_object* v_toSeq_1970_; lean_object* v_toSeqLeft_1971_; lean_object* v_toSeqRight_1972_; lean_object* v___x_1974_; uint8_t v_isShared_1975_; uint8_t v_isSharedCheck_1995_; 
v_toFunctor_1969_ = lean_ctor_get(v_toApplicative_1965_, 0);
v_toSeq_1970_ = lean_ctor_get(v_toApplicative_1965_, 2);
v_toSeqLeft_1971_ = lean_ctor_get(v_toApplicative_1965_, 3);
v_toSeqRight_1972_ = lean_ctor_get(v_toApplicative_1965_, 4);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_toApplicative_1965_);
if (v_isSharedCheck_1995_ == 0)
{
lean_object* v_unused_1996_; 
v_unused_1996_ = lean_ctor_get(v_toApplicative_1965_, 1);
lean_dec(v_unused_1996_);
v___x_1974_ = v_toApplicative_1965_;
v_isShared_1975_ = v_isSharedCheck_1995_;
goto v_resetjp_1973_;
}
else
{
lean_inc(v_toSeqRight_1972_);
lean_inc(v_toSeqLeft_1971_);
lean_inc(v_toSeq_1970_);
lean_inc(v_toFunctor_1969_);
lean_dec(v_toApplicative_1965_);
v___x_1974_ = lean_box(0);
v_isShared_1975_ = v_isSharedCheck_1995_;
goto v_resetjp_1973_;
}
v_resetjp_1973_:
{
lean_object* v___f_1976_; lean_object* v___f_1977_; lean_object* v___f_1978_; lean_object* v___f_1979_; lean_object* v___x_1980_; lean_object* v___f_1981_; lean_object* v___f_1982_; lean_object* v___f_1983_; lean_object* v___x_1985_; 
v___f_1976_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_1977_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_1969_);
v___f_1978_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1978_, 0, v_toFunctor_1969_);
v___f_1979_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1979_, 0, v_toFunctor_1969_);
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___f_1978_);
lean_ctor_set(v___x_1980_, 1, v___f_1979_);
v___f_1981_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1981_, 0, v_toSeqRight_1972_);
v___f_1982_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1982_, 0, v_toSeqLeft_1971_);
v___f_1983_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1983_, 0, v_toSeq_1970_);
if (v_isShared_1975_ == 0)
{
lean_ctor_set(v___x_1974_, 4, v___f_1981_);
lean_ctor_set(v___x_1974_, 3, v___f_1982_);
lean_ctor_set(v___x_1974_, 2, v___f_1983_);
lean_ctor_set(v___x_1974_, 1, v___f_1976_);
lean_ctor_set(v___x_1974_, 0, v___x_1980_);
v___x_1985_ = v___x_1974_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1980_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v___f_1976_);
lean_ctor_set(v_reuseFailAlloc_1994_, 2, v___f_1983_);
lean_ctor_set(v_reuseFailAlloc_1994_, 3, v___f_1982_);
lean_ctor_set(v_reuseFailAlloc_1994_, 4, v___f_1981_);
v___x_1985_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
lean_object* v___x_1987_; 
if (v_isShared_1968_ == 0)
{
lean_ctor_set(v___x_1967_, 1, v___f_1977_);
lean_ctor_set(v___x_1967_, 0, v___x_1985_);
v___x_1987_ = v___x_1967_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v___x_1985_);
lean_ctor_set(v_reuseFailAlloc_1993_, 1, v___f_1977_);
v___x_1987_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_11015__overap_1991_; lean_object* v___x_1992_; 
v___x_1988_ = l_ReaderT_instMonad___redArg(v___x_1987_);
v___x_1989_ = lean_box(0);
v___x_1990_ = l_instInhabitedOfMonad___redArg(v___x_1988_, v___x_1989_);
v___x_11015__overap_1991_ = lean_panic_fn_borrowed(v___x_1990_, v_msg_1932_);
lean_dec(v___x_1990_);
lean_inc(v___y_1937_);
lean_inc_ref(v___y_1936_);
lean_inc(v___y_1935_);
lean_inc_ref(v___y_1934_);
lean_inc_ref(v___y_1933_);
v___x_1992_ = lean_apply_6(v___x_11015__overap_1991_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, lean_box(0));
return v___x_1992_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0___boxed(lean_object* v_msg_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v_msg_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec_ref(v___y_2006_);
return v_res_2012_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__0));
v___x_2015_ = l_Lean_stringToMessageData(v___x_2014_);
return v___x_2015_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2017_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__6));
v___x_2018_ = lean_unsigned_to_nat(11u);
v___x_2019_ = lean_unsigned_to_nat(115u);
v___x_2020_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__2));
v___x_2021_ = ((lean_object*)(l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__4));
v___x_2022_ = l_mkPanicMessageWithDecl(v___x_2021_, v___x_2020_, v___x_2019_, v___x_2018_, v___x_2017_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(lean_object* v_constName_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v___x_2038_; lean_object* v_env_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; 
v___x_2038_ = lean_st_ref_get(v___y_2028_);
v_env_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc_ref(v_env_2039_);
lean_dec(v___x_2038_);
v___x_2040_ = 0;
lean_inc(v_constName_2023_);
v___x_2041_ = l_Lean_Environment_findAsync_x3f(v_env_2039_, v_constName_2023_, v___x_2040_);
if (lean_obj_tag(v___x_2041_) == 1)
{
lean_object* v_val_2042_; uint8_t v_kind_2043_; 
v_val_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_val_2042_);
lean_dec_ref_known(v___x_2041_, 1);
v_kind_2043_ = lean_ctor_get_uint8(v_val_2042_, sizeof(void*)*3);
if (v_kind_2043_ == 0)
{
lean_object* v___x_2044_; 
v___x_2044_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2042_);
if (lean_obj_tag(v___x_2044_) == 1)
{
lean_object* v_val_2045_; lean_object* v___x_2047_; uint8_t v_isShared_2048_; uint8_t v_isSharedCheck_2052_; 
lean_dec(v_constName_2023_);
v_val_2045_ = lean_ctor_get(v___x_2044_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2047_ = v___x_2044_;
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
else
{
lean_inc(v_val_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_box(0);
v_isShared_2048_ = v_isSharedCheck_2052_;
goto v_resetjp_2046_;
}
v_resetjp_2046_:
{
lean_object* v___x_2050_; 
if (v_isShared_2048_ == 0)
{
lean_ctor_set_tag(v___x_2047_, 0);
v___x_2050_ = v___x_2047_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v_val_2045_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
else
{
lean_object* v___x_2053_; lean_object* v___x_2054_; 
lean_dec_ref(v___x_2044_);
v___x_2053_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__3);
v___x_2054_ = l_panic___at___00Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0_spec__0(v___x_2053_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2063_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2057_ = v___x_2054_;
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2054_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2063_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
if (lean_obj_tag(v_a_2055_) == 0)
{
lean_del_object(v___x_2057_);
goto v___jp_2030_;
}
else
{
lean_object* v_val_2059_; lean_object* v___x_2061_; 
lean_dec(v_constName_2023_);
v_val_2059_ = lean_ctor_get(v_a_2055_, 0);
lean_inc(v_val_2059_);
lean_dec_ref_known(v_a_2055_, 1);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 0, v_val_2059_);
v___x_2061_ = v___x_2057_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_val_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
else
{
lean_object* v_a_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2071_; 
lean_dec(v_constName_2023_);
v_a_2064_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2071_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2071_ == 0)
{
v___x_2066_ = v___x_2054_;
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_a_2064_);
lean_dec(v___x_2054_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2071_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2069_; 
if (v_isShared_2067_ == 0)
{
v___x_2069_ = v___x_2066_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v_a_2064_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
}
else
{
lean_dec(v_val_2042_);
goto v___jp_2030_;
}
}
else
{
lean_dec(v___x_2041_);
goto v___jp_2030_;
}
v___jp_2030_:
{
lean_object* v___x_2031_; uint8_t v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2031_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0___closed__1);
v___x_2032_ = 0;
v___x_2033_ = l_Lean_MessageData_ofConstName(v_constName_2023_, v___x_2032_);
v___x_2034_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2031_);
lean_ctor_set(v___x_2034_, 1, v___x_2033_);
v___x_2035_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___closed__1);
v___x_2036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2034_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_validateComputedFields_spec__1___redArg(v___x_2036_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
return v___x_2037_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0___boxed(lean_object* v_constName_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v_res_2079_; 
v_res_2079_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v_constName_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_, v___y_2077_);
lean_dec(v___y_2077_);
lean_dec_ref(v___y_2076_);
lean_dec(v___y_2075_);
lean_dec_ref(v___y_2074_);
lean_dec_ref(v___y_2073_);
return v_res_2079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn(lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_){
_start:
{
lean_object* v_toInductiveVal_2089_; lean_object* v_toConstantVal_2090_; lean_object* v_lparams_2091_; lean_object* v_params_2092_; lean_object* v_compFieldVars_2093_; lean_object* v_numIndices_2094_; lean_object* v_ctors_2095_; lean_object* v_name_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v_toInductiveVal_2089_ = lean_ctor_get(v_a_2083_, 0);
v_toConstantVal_2090_ = lean_ctor_get(v_toInductiveVal_2089_, 0);
v_lparams_2091_ = lean_ctor_get(v_a_2083_, 1);
v_params_2092_ = lean_ctor_get(v_a_2083_, 2);
v_compFieldVars_2093_ = lean_ctor_get(v_a_2083_, 4);
v_numIndices_2094_ = lean_ctor_get(v_toInductiveVal_2089_, 2);
v_ctors_2095_ = lean_ctor_get(v_toInductiveVal_2089_, 4);
v_name_2096_ = lean_ctor_get(v_toConstantVal_2090_, 0);
v___x_2097_ = l_Lean_instInhabitedExpr;
lean_inc(v_name_2096_);
v___x_2098_ = l_Lean_mkCasesOnName(v_name_2096_);
lean_inc(v___x_2098_);
v___x_2099_ = l_Lean_getConstInfoDefn___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__0(v___x_2098_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
lean_inc(v_a_2100_);
lean_dec_ref_known(v___x_2099_, 1);
v___x_2101_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_2096_);
v___x_2102_ = l_Lean_Name_append(v_name_2096_, v___x_2101_);
lean_inc(v___x_2102_);
v___x_2103_ = l_Lean_mkCasesOn(v___x_2102_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2163_; 
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2163_ == 0)
{
lean_object* v_unused_2164_; 
v_unused_2164_ = lean_ctor_get(v___x_2103_, 0);
lean_dec(v_unused_2164_);
v___x_2105_ = v___x_2103_;
v_isShared_2106_ = v_isSharedCheck_2163_;
goto v_resetjp_2104_;
}
else
{
lean_dec(v___x_2103_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2163_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v_toConstantVal_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2159_; 
v_toConstantVal_2107_ = lean_ctor_get(v_a_2100_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_a_2100_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; lean_object* v_unused_2161_; lean_object* v_unused_2162_; 
v_unused_2160_ = lean_ctor_get(v_a_2100_, 3);
lean_dec(v_unused_2160_);
v_unused_2161_ = lean_ctor_get(v_a_2100_, 2);
lean_dec(v_unused_2161_);
v_unused_2162_ = lean_ctor_get(v_a_2100_, 1);
lean_dec(v_unused_2162_);
v___x_2109_ = v_a_2100_;
v_isShared_2110_ = v_isSharedCheck_2159_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_toConstantVal_2107_);
lean_dec(v_a_2100_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2159_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v_levelParams_2111_; lean_object* v_type_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2157_; 
v_levelParams_2111_ = lean_ctor_get(v_toConstantVal_2107_, 1);
v_type_2112_ = lean_ctor_get(v_toConstantVal_2107_, 2);
v_isSharedCheck_2157_ = !lean_is_exclusive(v_toConstantVal_2107_);
if (v_isSharedCheck_2157_ == 0)
{
lean_object* v_unused_2158_; 
v_unused_2158_ = lean_ctor_get(v_toConstantVal_2107_, 0);
lean_dec(v_unused_2158_);
v___x_2114_ = v_toConstantVal_2107_;
v_isShared_2115_ = v_isSharedCheck_2157_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_type_2112_);
lean_inc(v_levelParams_2111_);
lean_dec(v_toConstantVal_2107_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2157_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___f_2116_; lean_object* v___x_2117_; 
lean_inc(v_levelParams_2111_);
lean_inc_ref(v_compFieldVars_2093_);
lean_inc(v_ctors_2095_);
lean_inc_ref(v_params_2092_);
lean_inc(v_lparams_2091_);
lean_inc(v_numIndices_2094_);
v___f_2116_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideCasesOn___lam__2___boxed), 16, 8);
lean_closure_set(v___f_2116_, 0, v_numIndices_2094_);
lean_closure_set(v___f_2116_, 1, v___x_2097_);
lean_closure_set(v___f_2116_, 2, v___x_2102_);
lean_closure_set(v___f_2116_, 3, v_lparams_2091_);
lean_closure_set(v___f_2116_, 4, v_params_2092_);
lean_closure_set(v___f_2116_, 5, v_ctors_2095_);
lean_closure_set(v___f_2116_, 6, v_compFieldVars_2093_);
lean_closure_set(v___f_2116_, 7, v_levelParams_2111_);
lean_inc_ref(v_type_2112_);
v___x_2117_ = l_Lean_Meta_instantiateForall(v_type_2112_, v_params_2092_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; uint8_t v___x_2119_; lean_object* v___x_2120_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
lean_inc(v_a_2118_);
lean_dec_ref_known(v___x_2117_, 1);
v___x_2119_ = 0;
v___x_2120_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2118_, v___f_2116_, v___x_2119_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_object* v_a_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
v_a_2121_ = lean_ctor_get(v___x_2120_, 0);
lean_inc(v_a_2121_);
lean_dec_ref_known(v___x_2120_, 1);
v___x_2122_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v___x_2098_);
v___x_2123_ = l_Lean_Name_append(v___x_2098_, v___x_2122_);
lean_inc(v___x_2123_);
if (v_isShared_2115_ == 0)
{
lean_ctor_set(v___x_2114_, 0, v___x_2123_);
v___x_2125_ = v___x_2114_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_2123_);
lean_ctor_set(v_reuseFailAlloc_2140_, 1, v_levelParams_2111_);
lean_ctor_set(v_reuseFailAlloc_2140_, 2, v_type_2112_);
v___x_2125_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
lean_object* v___x_2126_; uint8_t v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2131_; 
v___x_2126_ = lean_box(0);
v___x_2127_ = 0;
v___x_2128_ = lean_box(0);
lean_inc(v___x_2123_);
v___x_2129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2123_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 3, v___x_2129_);
lean_ctor_set(v___x_2109_, 2, v___x_2126_);
lean_ctor_set(v___x_2109_, 1, v_a_2121_);
lean_ctor_set(v___x_2109_, 0, v___x_2125_);
v___x_2131_ = v___x_2109_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v___x_2125_);
lean_ctor_set(v_reuseFailAlloc_2139_, 1, v_a_2121_);
lean_ctor_set(v_reuseFailAlloc_2139_, 2, v___x_2126_);
lean_ctor_set(v_reuseFailAlloc_2139_, 3, v___x_2129_);
v___x_2131_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
lean_object* v___x_2133_; 
lean_ctor_set_uint8(v___x_2131_, sizeof(void*)*4, v___x_2127_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 1);
lean_ctor_set(v___x_2105_, 0, v___x_2131_);
v___x_2133_ = v___x_2105_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
lean_object* v___x_2134_; 
v___x_2134_ = l_Lean_addDecl(v___x_2133_, v___x_2119_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_2134_) == 0)
{
uint8_t v___x_2135_; lean_object* v___x_2136_; 
lean_dec_ref_known(v___x_2134_, 1);
v___x_2135_ = 0;
lean_inc(v___x_2123_);
v___x_2136_ = l_Lean_Meta_setInlineAttribute(v___x_2123_, v___x_2135_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v___x_2137_; 
lean_dec_ref_known(v___x_2136_, 1);
v___x_2137_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v___x_2098_, v___x_2123_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
return v___x_2137_;
}
else
{
lean_dec(v___x_2123_);
lean_dec(v___x_2098_);
return v___x_2136_;
}
}
else
{
lean_dec(v___x_2123_);
lean_dec(v___x_2098_);
return v___x_2134_;
}
}
}
}
}
else
{
lean_object* v_a_2141_; lean_object* v___x_2143_; uint8_t v_isShared_2144_; uint8_t v_isSharedCheck_2148_; 
lean_del_object(v___x_2114_);
lean_dec_ref(v_type_2112_);
lean_dec(v_levelParams_2111_);
lean_del_object(v___x_2109_);
lean_del_object(v___x_2105_);
lean_dec(v___x_2098_);
v_a_2141_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2143_ = v___x_2120_;
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
else
{
lean_inc(v_a_2141_);
lean_dec(v___x_2120_);
v___x_2143_ = lean_box(0);
v_isShared_2144_ = v_isSharedCheck_2148_;
goto v_resetjp_2142_;
}
v_resetjp_2142_:
{
lean_object* v___x_2146_; 
if (v_isShared_2144_ == 0)
{
v___x_2146_ = v___x_2143_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v_a_2141_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
}
}
else
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
lean_dec_ref(v___f_2116_);
lean_del_object(v___x_2114_);
lean_dec_ref(v_type_2112_);
lean_dec(v_levelParams_2111_);
lean_del_object(v___x_2109_);
lean_del_object(v___x_2105_);
lean_dec(v___x_2098_);
v_a_2149_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2117_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2117_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_2102_);
lean_dec(v_a_2100_);
lean_dec(v___x_2098_);
return v___x_2103_;
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec(v___x_2098_);
v_a_2165_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2099_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2099_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideCasesOn___boxed(lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_, v_a_2177_);
lean_dec(v_a_2177_);
lean_dec_ref(v_a_2176_);
lean_dec(v_a_2175_);
lean_dec_ref(v_a_2174_);
lean_dec_ref(v_a_2173_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1(lean_object* v_inst_2180_, lean_object* v_R_2181_, lean_object* v_a_2182_, lean_object* v_b_2183_){
_start:
{
lean_object* v___x_2184_; 
v___x_2184_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v_a_2182_, v_b_2183_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(lean_object* v_00_u03b1_2185_, lean_object* v_name_2186_, uint8_t v_bi_2187_, lean_object* v_type_2188_, lean_object* v_k_2189_, uint8_t v_kind_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_){
_start:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___redArg(v_name_2186_, v_bi_2187_, v_type_2188_, v_k_2189_, v_kind_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2198_, lean_object* v_name_2199_, lean_object* v_bi_2200_, lean_object* v_type_2201_, lean_object* v_k_2202_, lean_object* v_kind_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
uint8_t v_bi_boxed_2210_; uint8_t v_kind_boxed_2211_; lean_object* v_res_2212_; 
v_bi_boxed_2210_ = lean_unbox(v_bi_2200_);
v_kind_boxed_2211_ = lean_unbox(v_kind_2203_);
v_res_2212_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3_spec__4(v_00_u03b1_2198_, v_name_2199_, v_bi_boxed_2210_, v_type_2201_, v_k_2202_, v_kind_boxed_2211_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec_ref(v___y_2204_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(lean_object* v_00_u03b1_2213_, lean_object* v_name_2214_, lean_object* v_type_2215_, lean_object* v_k_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v___x_2223_; 
v___x_2223_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v_name_2214_, v_type_2215_, v_k_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
return v___x_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___boxed(lean_object* v_00_u03b1_2224_, lean_object* v_name_2225_, lean_object* v_type_2226_, lean_object* v_k_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3(v_00_u03b1_2224_, v_name_2225_, v_type_2226_, v_k_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec_ref(v___y_2228_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(lean_object* v_env_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg(v_env_2235_, v___y_2238_, v___y_2240_);
return v___x_2242_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___boxed(lean_object* v_env_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8(v_env_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec_ref(v___y_2244_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(lean_object* v___x_2251_, size_t v_sz_2252_, size_t v_i_2253_, lean_object* v_bs_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
uint8_t v___x_2260_; 
v___x_2260_ = lean_usize_dec_lt(v_i_2253_, v_sz_2252_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2261_; 
lean_dec_ref(v___x_2251_);
v___x_2261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2261_, 0, v_bs_2254_);
return v___x_2261_;
}
else
{
lean_object* v_v_2262_; lean_object* v___x_2263_; lean_object* v_bs_x27_2264_; lean_object* v___x_2265_; 
v_v_2262_ = lean_array_uget(v_bs_2254_, v_i_2253_);
v___x_2263_ = lean_unsigned_to_nat(0u);
v_bs_x27_2264_ = lean_array_uset(v_bs_2254_, v_i_2253_, v___x_2263_);
lean_inc_ref(v___x_2251_);
v___x_2265_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_v_2262_, v___x_2251_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
if (lean_obj_tag(v___x_2265_) == 0)
{
lean_object* v_a_2266_; size_t v___x_2267_; size_t v___x_2268_; lean_object* v___x_2269_; 
v_a_2266_ = lean_ctor_get(v___x_2265_, 0);
lean_inc(v_a_2266_);
lean_dec_ref_known(v___x_2265_, 1);
v___x_2267_ = ((size_t)1ULL);
v___x_2268_ = lean_usize_add(v_i_2253_, v___x_2267_);
v___x_2269_ = lean_array_uset(v_bs_x27_2264_, v_i_2253_, v_a_2266_);
v_i_2253_ = v___x_2268_;
v_bs_2254_ = v___x_2269_;
goto _start;
}
else
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
lean_dec_ref(v_bs_x27_2264_);
lean_dec_ref(v___x_2251_);
v_a_2271_ = lean_ctor_get(v___x_2265_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2265_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2265_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2265_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
return v___x_2276_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg___boxed(lean_object* v___x_2279_, lean_object* v_sz_2280_, lean_object* v_i_2281_, lean_object* v_bs_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_){
_start:
{
size_t v_sz_boxed_2288_; size_t v_i_boxed_2289_; lean_object* v_res_2290_; 
v_sz_boxed_2288_ = lean_unbox_usize(v_sz_2280_);
lean_dec(v_sz_2280_);
v_i_boxed_2289_ = lean_unbox_usize(v_i_2281_);
lean_dec(v_i_2281_);
v_res_2290_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2279_, v_sz_boxed_2288_, v_i_boxed_2289_, v_bs_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_);
lean_dec(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(lean_object* v_head_2291_, lean_object* v_compFields_2292_, lean_object* v___x_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2291_, v___y_2297_, v___y_2298_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2313_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2313_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2303_ = v___x_2300_;
v_isShared_2304_ = v_isSharedCheck_2313_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2300_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2313_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
uint8_t v___x_2305_; 
v___x_2305_ = lean_unbox(v_a_2301_);
lean_dec(v_a_2301_);
if (v___x_2305_ == 0)
{
size_t v_sz_2306_; size_t v___x_2307_; lean_object* v___x_2308_; 
lean_del_object(v___x_2303_);
v_sz_2306_ = lean_array_size(v_compFields_2292_);
v___x_2307_ = ((size_t)0ULL);
v___x_2308_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2293_, v_sz_2306_, v___x_2307_, v_compFields_2292_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
return v___x_2308_;
}
else
{
lean_object* v___x_2309_; lean_object* v___x_2311_; 
lean_dec_ref(v___x_2293_);
lean_dec_ref(v_compFields_2292_);
v___x_2309_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 0, v___x_2309_);
v___x_2311_ = v___x_2303_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
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
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_dec_ref(v___x_2293_);
lean_dec_ref(v_compFields_2292_);
v_a_2314_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2300_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2300_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
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
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed(lean_object* v_head_2322_, lean_object* v_compFields_2323_, lean_object* v___x_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_){
_start:
{
lean_object* v_res_2331_; 
v_res_2331_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0(v_head_2322_, v_compFields_2323_, v___x_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
lean_dec(v___y_2329_);
lean_dec_ref(v___y_2328_);
lean_dec(v___y_2327_);
lean_dec_ref(v___y_2326_);
lean_dec_ref(v___y_2325_);
return v_res_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(lean_object* v___y_2332_, uint8_t v_isExporting_2333_, lean_object* v___x_2334_, lean_object* v___y_2335_, lean_object* v___x_2336_, lean_object* v_a_x3f_2337_){
_start:
{
lean_object* v___x_2339_; lean_object* v_env_2340_; lean_object* v_nextMacroScope_2341_; lean_object* v_ngen_2342_; lean_object* v_auxDeclNGen_2343_; lean_object* v_traceState_2344_; lean_object* v_messages_2345_; lean_object* v_infoState_2346_; lean_object* v_snapshotTasks_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2372_; 
v___x_2339_ = lean_st_ref_take(v___y_2332_);
v_env_2340_ = lean_ctor_get(v___x_2339_, 0);
v_nextMacroScope_2341_ = lean_ctor_get(v___x_2339_, 1);
v_ngen_2342_ = lean_ctor_get(v___x_2339_, 2);
v_auxDeclNGen_2343_ = lean_ctor_get(v___x_2339_, 3);
v_traceState_2344_ = lean_ctor_get(v___x_2339_, 4);
v_messages_2345_ = lean_ctor_get(v___x_2339_, 6);
v_infoState_2346_ = lean_ctor_get(v___x_2339_, 7);
v_snapshotTasks_2347_ = lean_ctor_get(v___x_2339_, 8);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2339_);
if (v_isSharedCheck_2372_ == 0)
{
lean_object* v_unused_2373_; 
v_unused_2373_ = lean_ctor_get(v___x_2339_, 5);
lean_dec(v_unused_2373_);
v___x_2349_ = v___x_2339_;
v_isShared_2350_ = v_isSharedCheck_2372_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_snapshotTasks_2347_);
lean_inc(v_infoState_2346_);
lean_inc(v_messages_2345_);
lean_inc(v_traceState_2344_);
lean_inc(v_auxDeclNGen_2343_);
lean_inc(v_ngen_2342_);
lean_inc(v_nextMacroScope_2341_);
lean_inc(v_env_2340_);
lean_dec(v___x_2339_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2372_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2351_; lean_object* v___x_2353_; 
v___x_2351_ = l_Lean_Environment_setExporting(v_env_2340_, v_isExporting_2333_);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 5, v___x_2334_);
lean_ctor_set(v___x_2349_, 0, v___x_2351_);
v___x_2353_ = v___x_2349_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v___x_2351_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v_nextMacroScope_2341_);
lean_ctor_set(v_reuseFailAlloc_2371_, 2, v_ngen_2342_);
lean_ctor_set(v_reuseFailAlloc_2371_, 3, v_auxDeclNGen_2343_);
lean_ctor_set(v_reuseFailAlloc_2371_, 4, v_traceState_2344_);
lean_ctor_set(v_reuseFailAlloc_2371_, 5, v___x_2334_);
lean_ctor_set(v_reuseFailAlloc_2371_, 6, v_messages_2345_);
lean_ctor_set(v_reuseFailAlloc_2371_, 7, v_infoState_2346_);
lean_ctor_set(v_reuseFailAlloc_2371_, 8, v_snapshotTasks_2347_);
v___x_2353_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v_mctx_2356_; lean_object* v_zetaDeltaFVarIds_2357_; lean_object* v_postponed_2358_; lean_object* v_diag_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2369_; 
v___x_2354_ = lean_st_ref_put(v___y_2332_, v___x_2353_);
v___x_2355_ = lean_st_ref_take(v___y_2335_);
v_mctx_2356_ = lean_ctor_get(v___x_2355_, 0);
v_zetaDeltaFVarIds_2357_ = lean_ctor_get(v___x_2355_, 2);
v_postponed_2358_ = lean_ctor_get(v___x_2355_, 3);
v_diag_2359_ = lean_ctor_get(v___x_2355_, 4);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2355_);
if (v_isSharedCheck_2369_ == 0)
{
lean_object* v_unused_2370_; 
v_unused_2370_ = lean_ctor_get(v___x_2355_, 1);
lean_dec(v_unused_2370_);
v___x_2361_ = v___x_2355_;
v_isShared_2362_ = v_isSharedCheck_2369_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_diag_2359_);
lean_inc(v_postponed_2358_);
lean_inc(v_zetaDeltaFVarIds_2357_);
lean_inc(v_mctx_2356_);
lean_dec(v___x_2355_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2369_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2365_; 
v___x_2363_ = lean_box(0);
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 1, v___x_2336_);
v___x_2365_ = v___x_2361_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_mctx_2356_);
lean_ctor_set(v_reuseFailAlloc_2368_, 1, v___x_2336_);
lean_ctor_set(v_reuseFailAlloc_2368_, 2, v_zetaDeltaFVarIds_2357_);
lean_ctor_set(v_reuseFailAlloc_2368_, 3, v_postponed_2358_);
lean_ctor_set(v_reuseFailAlloc_2368_, 4, v_diag_2359_);
v___x_2365_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = lean_st_ref_put(v___y_2335_, v___x_2365_);
v___x_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2363_);
return v___x_2367_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_2374_, lean_object* v_isExporting_2375_, lean_object* v___x_2376_, lean_object* v___y_2377_, lean_object* v___x_2378_, lean_object* v_a_x3f_2379_, lean_object* v___y_2380_){
_start:
{
uint8_t v_isExporting_boxed_2381_; lean_object* v_res_2382_; 
v_isExporting_boxed_2381_ = lean_unbox(v_isExporting_2375_);
v_res_2382_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2374_, v_isExporting_boxed_2381_, v___x_2376_, v___y_2377_, v___x_2378_, v_a_x3f_2379_);
lean_dec(v_a_x3f_2379_);
lean_dec(v___y_2377_);
lean_dec(v___y_2374_);
return v_res_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(lean_object* v_x_2383_, uint8_t v_isExporting_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v___x_2391_; lean_object* v_env_2392_; lean_object* v___x_2393_; uint8_t v_isModule_2394_; 
v___x_2391_ = lean_st_ref_get(v___y_2389_);
v_env_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc_ref(v_env_2392_);
lean_dec(v___x_2391_);
v___x_2393_ = l_Lean_Environment_header(v_env_2392_);
v_isModule_2394_ = lean_ctor_get_uint8(v___x_2393_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2393_);
if (v_isModule_2394_ == 0)
{
lean_object* v___x_2395_; 
lean_dec_ref(v_env_2392_);
lean_inc(v___y_2389_);
lean_inc_ref(v___y_2388_);
lean_inc(v___y_2387_);
lean_inc_ref(v___y_2386_);
lean_inc_ref(v___y_2385_);
v___x_2395_ = lean_apply_6(v_x_2383_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, lean_box(0));
return v___x_2395_;
}
else
{
uint8_t v_isExporting_2396_; 
v_isExporting_2396_ = lean_ctor_get_uint8(v_env_2392_, sizeof(void*)*8);
lean_dec_ref(v_env_2392_);
if (v_isExporting_2384_ == 0)
{
if (v_isExporting_2396_ == 0)
{
lean_object* v___x_2462_; 
lean_inc(v___y_2389_);
lean_inc_ref(v___y_2388_);
lean_inc(v___y_2387_);
lean_inc_ref(v___y_2386_);
lean_inc_ref(v___y_2385_);
v___x_2462_ = lean_apply_6(v_x_2383_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, lean_box(0));
return v___x_2462_;
}
else
{
goto v___jp_2397_;
}
}
else
{
if (v_isExporting_2396_ == 0)
{
goto v___jp_2397_;
}
else
{
lean_object* v___x_2463_; 
lean_inc(v___y_2389_);
lean_inc_ref(v___y_2388_);
lean_inc(v___y_2387_);
lean_inc_ref(v___y_2386_);
lean_inc_ref(v___y_2385_);
v___x_2463_ = lean_apply_6(v_x_2383_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, lean_box(0));
return v___x_2463_;
}
}
v___jp_2397_:
{
lean_object* v___x_2398_; lean_object* v_env_2399_; lean_object* v_nextMacroScope_2400_; lean_object* v_ngen_2401_; lean_object* v_auxDeclNGen_2402_; lean_object* v_traceState_2403_; lean_object* v_messages_2404_; lean_object* v_infoState_2405_; lean_object* v_snapshotTasks_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2460_; 
v___x_2398_ = lean_st_ref_take(v___y_2389_);
v_env_2399_ = lean_ctor_get(v___x_2398_, 0);
v_nextMacroScope_2400_ = lean_ctor_get(v___x_2398_, 1);
v_ngen_2401_ = lean_ctor_get(v___x_2398_, 2);
v_auxDeclNGen_2402_ = lean_ctor_get(v___x_2398_, 3);
v_traceState_2403_ = lean_ctor_get(v___x_2398_, 4);
v_messages_2404_ = lean_ctor_get(v___x_2398_, 6);
v_infoState_2405_ = lean_ctor_get(v___x_2398_, 7);
v_snapshotTasks_2406_ = lean_ctor_get(v___x_2398_, 8);
v_isSharedCheck_2460_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2460_ == 0)
{
lean_object* v_unused_2461_; 
v_unused_2461_ = lean_ctor_get(v___x_2398_, 5);
lean_dec(v_unused_2461_);
v___x_2408_ = v___x_2398_;
v_isShared_2409_ = v_isSharedCheck_2460_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_snapshotTasks_2406_);
lean_inc(v_infoState_2405_);
lean_inc(v_messages_2404_);
lean_inc(v_traceState_2403_);
lean_inc(v_auxDeclNGen_2402_);
lean_inc(v_ngen_2401_);
lean_inc(v_nextMacroScope_2400_);
lean_inc(v_env_2399_);
lean_dec(v___x_2398_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2460_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2413_; 
v___x_2410_ = l_Lean_Environment_setExporting(v_env_2399_, v_isExporting_2384_);
v___x_2411_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__1);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 5, v___x_2411_);
lean_ctor_set(v___x_2408_, 0, v___x_2410_);
v___x_2413_ = v___x_2408_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v___x_2410_);
lean_ctor_set(v_reuseFailAlloc_2459_, 1, v_nextMacroScope_2400_);
lean_ctor_set(v_reuseFailAlloc_2459_, 2, v_ngen_2401_);
lean_ctor_set(v_reuseFailAlloc_2459_, 3, v_auxDeclNGen_2402_);
lean_ctor_set(v_reuseFailAlloc_2459_, 4, v_traceState_2403_);
lean_ctor_set(v_reuseFailAlloc_2459_, 5, v___x_2411_);
lean_ctor_set(v_reuseFailAlloc_2459_, 6, v_messages_2404_);
lean_ctor_set(v_reuseFailAlloc_2459_, 7, v_infoState_2405_);
lean_ctor_set(v_reuseFailAlloc_2459_, 8, v_snapshotTasks_2406_);
v___x_2413_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v_mctx_2416_; lean_object* v_zetaDeltaFVarIds_2417_; lean_object* v_postponed_2418_; lean_object* v_diag_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2457_; 
v___x_2414_ = lean_st_ref_put(v___y_2389_, v___x_2413_);
v___x_2415_ = lean_st_ref_take(v___y_2387_);
v_mctx_2416_ = lean_ctor_get(v___x_2415_, 0);
v_zetaDeltaFVarIds_2417_ = lean_ctor_get(v___x_2415_, 2);
v_postponed_2418_ = lean_ctor_get(v___x_2415_, 3);
v_diag_2419_ = lean_ctor_get(v___x_2415_, 4);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2415_);
if (v_isSharedCheck_2457_ == 0)
{
lean_object* v_unused_2458_; 
v_unused_2458_ = lean_ctor_get(v___x_2415_, 1);
lean_dec(v_unused_2458_);
v___x_2421_ = v___x_2415_;
v_isShared_2422_ = v_isSharedCheck_2457_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_diag_2419_);
lean_inc(v_postponed_2418_);
lean_inc(v_zetaDeltaFVarIds_2417_);
lean_inc(v_mctx_2416_);
lean_dec(v___x_2415_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2457_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2423_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2, &l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6_spec__8___redArg___closed__2);
if (v_isShared_2422_ == 0)
{
lean_ctor_set(v___x_2421_, 1, v___x_2423_);
v___x_2425_ = v___x_2421_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_mctx_2416_);
lean_ctor_set(v_reuseFailAlloc_2456_, 1, v___x_2423_);
lean_ctor_set(v_reuseFailAlloc_2456_, 2, v_zetaDeltaFVarIds_2417_);
lean_ctor_set(v_reuseFailAlloc_2456_, 3, v_postponed_2418_);
lean_ctor_set(v_reuseFailAlloc_2456_, 4, v_diag_2419_);
v___x_2425_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
lean_object* v___x_2426_; lean_object* v_r_2427_; 
v___x_2426_ = lean_st_ref_put(v___y_2387_, v___x_2425_);
lean_inc(v___y_2389_);
lean_inc_ref(v___y_2388_);
lean_inc(v___y_2387_);
lean_inc_ref(v___y_2386_);
lean_inc_ref(v___y_2385_);
v_r_2427_ = lean_apply_6(v_x_2383_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, lean_box(0));
if (lean_obj_tag(v_r_2427_) == 0)
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2444_; 
v_a_2428_ = lean_ctor_get(v_r_2427_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_r_2427_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2430_ = v_r_2427_;
v_isShared_2431_ = v_isSharedCheck_2444_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v_r_2427_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2444_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
lean_inc(v_a_2428_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set_tag(v___x_2430_, 1);
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
lean_object* v___x_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
v___x_2434_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2389_, v_isExporting_2396_, v___x_2411_, v___y_2387_, v___x_2423_, v___x_2433_);
lean_dec_ref(v___x_2433_);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2441_ == 0)
{
lean_object* v_unused_2442_; 
v_unused_2442_ = lean_ctor_get(v___x_2434_, 0);
lean_dec(v_unused_2442_);
v___x_2436_ = v___x_2434_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_dec(v___x_2434_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
lean_ctor_set(v___x_2436_, 0, v_a_2428_);
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2428_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
}
else
{
lean_object* v_a_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
v_a_2445_ = lean_ctor_get(v_r_2427_, 0);
lean_inc(v_a_2445_);
lean_dec_ref_known(v_r_2427_, 1);
v___x_2446_ = lean_box(0);
v___x_2447_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___lam__0(v___y_2389_, v_isExporting_2396_, v___x_2411_, v___y_2387_, v___x_2423_, v___x_2446_);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2454_ == 0)
{
lean_object* v_unused_2455_; 
v_unused_2455_ = lean_ctor_get(v___x_2447_, 0);
lean_dec(v_unused_2455_);
v___x_2449_ = v___x_2447_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_dec(v___x_2447_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
lean_ctor_set_tag(v___x_2449_, 1);
lean_ctor_set(v___x_2449_, 0, v_a_2445_);
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2445_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg___boxed(lean_object* v_x_2464_, lean_object* v_isExporting_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
uint8_t v_isExporting_boxed_2472_; lean_object* v_res_2473_; 
v_isExporting_boxed_2472_ = lean_unbox(v_isExporting_2465_);
v_res_2473_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2464_, v_isExporting_boxed_2472_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
lean_dec(v___y_2470_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec_ref(v___y_2466_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(lean_object* v_x_2474_, uint8_t v_when_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
if (v_when_2475_ == 0)
{
lean_object* v___x_2482_; 
lean_inc(v___y_2480_);
lean_inc_ref(v___y_2479_);
lean_inc(v___y_2478_);
lean_inc_ref(v___y_2477_);
lean_inc_ref(v___y_2476_);
v___x_2482_ = lean_apply_6(v_x_2474_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, lean_box(0));
return v___x_2482_;
}
else
{
uint8_t v___x_2483_; lean_object* v___x_2484_; 
v___x_2483_ = 0;
v___x_2484_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2474_, v___x_2483_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_);
return v___x_2484_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg___boxed(lean_object* v_x_2485_, lean_object* v_when_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_){
_start:
{
uint8_t v_when_boxed_2493_; lean_object* v_res_2494_; 
v_when_boxed_2493_ = lean_unbox(v_when_2486_);
v_res_2494_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2485_, v_when_boxed_2493_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
lean_dec_ref(v___y_2487_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(lean_object* v_params_2495_, lean_object* v___x_2496_, lean_object* v_head_2497_, lean_object* v_compFields_2498_, lean_object* v_lparams_2499_, lean_object* v_levelParams_2500_, lean_object* v___x_2501_, lean_object* v_fields_2502_, lean_object* v_retTy_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_){
_start:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___f_2512_; uint8_t v___x_2513_; lean_object* v___x_2514_; 
lean_inc_ref(v_params_2495_);
v___x_2510_ = l_Array_append___redArg(v_params_2495_, v_fields_2502_);
lean_inc_ref(v___x_2496_);
v___x_2511_ = l_Lean_mkAppN(v___x_2496_, v___x_2510_);
lean_inc(v_head_2497_);
v___f_2512_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2512_, 0, v_head_2497_);
lean_closure_set(v___f_2512_, 1, v_compFields_2498_);
lean_closure_set(v___f_2512_, 2, v___x_2511_);
v___x_2513_ = 1;
v___x_2514_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___f_2512_, v___x_2513_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2514_) == 0)
{
lean_object* v_a_2515_; lean_object* v___x_2516_; 
v_a_2515_ = lean_ctor_get(v___x_2514_, 0);
lean_inc(v_a_2515_);
lean_dec_ref_known(v___x_2514_, 1);
lean_inc(v___y_2508_);
lean_inc_ref(v___y_2507_);
lean_inc(v___y_2506_);
lean_inc_ref(v___y_2505_);
v___x_2516_ = lean_infer_type(v___x_2496_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2516_) == 0)
{
lean_object* v_a_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v___x_2516_, 1);
v___x_2518_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_head_2497_);
v___x_2519_ = l_Lean_Name_append(v_head_2497_, v___x_2518_);
v___x_2520_ = l_Lean_mkConst(v___x_2519_, v_lparams_2499_);
v___x_2521_ = l_Array_append___redArg(v_params_2495_, v_a_2515_);
lean_dec(v_a_2515_);
v___x_2522_ = l_Array_append___redArg(v___x_2521_, v_fields_2502_);
v___x_2523_ = l_Lean_mkAppN(v___x_2520_, v___x_2522_);
lean_dec_ref(v___x_2522_);
v___x_2524_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_retTy_2503_, v___x_2523_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; uint8_t v___x_2526_; uint8_t v___x_2527_; lean_object* v___x_2528_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_a_2525_);
lean_dec_ref_known(v___x_2524_, 1);
v___x_2526_ = 0;
v___x_2527_ = 1;
v___x_2528_ = l_Lean_Meta_mkLambdaFVars(v___x_2510_, v_a_2525_, v___x_2526_, v___x_2513_, v___x_2526_, v___x_2513_, v___x_2527_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
lean_dec_ref(v___x_2510_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; uint8_t v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc(v_a_2529_);
lean_dec_ref_known(v___x_2528_, 1);
v___x_2530_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_2497_);
v___x_2531_ = l_Lean_Name_append(v_head_2497_, v___x_2530_);
lean_inc_n(v___x_2531_, 2);
v___x_2532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2531_);
lean_ctor_set(v___x_2532_, 1, v_levelParams_2500_);
lean_ctor_set(v___x_2532_, 2, v_a_2517_);
v___x_2533_ = lean_box(0);
v___x_2534_ = 0;
v___x_2535_ = lean_box(0);
v___x_2536_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2531_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
v___x_2537_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_2537_, 0, v___x_2532_);
lean_ctor_set(v___x_2537_, 1, v_a_2529_);
lean_ctor_set(v___x_2537_, 2, v___x_2533_);
lean_ctor_set(v___x_2537_, 3, v___x_2536_);
lean_ctor_set_uint8(v___x_2537_, sizeof(void*)*4, v___x_2534_);
v___x_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
v___x_2539_ = l_Lean_addDecl(v___x_2538_, v___x_2526_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v___x_2540_; 
lean_dec_ref_known(v___x_2539_, 1);
lean_inc(v___x_2531_);
lean_inc(v_head_2497_);
v___x_2540_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_head_2497_, v___x_2531_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2540_) == 0)
{
lean_object* v___x_2541_; 
lean_dec_ref_known(v___x_2540_, 1);
v___x_2541_ = l_Lean_Elab_ComputedFields_isScalarField(v_head_2497_, v___y_2507_, v___y_2508_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2552_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2552_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2552_ == 0)
{
v___x_2544_ = v___x_2541_;
v_isShared_2545_ = v_isSharedCheck_2552_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2541_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2552_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
uint8_t v___x_2546_; 
v___x_2546_ = lean_unbox(v_a_2542_);
lean_dec(v_a_2542_);
if (v___x_2546_ == 0)
{
lean_object* v___x_2548_; 
lean_dec(v___x_2531_);
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 0, v___x_2501_);
v___x_2548_ = v___x_2544_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v___x_2501_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
else
{
uint8_t v___x_2550_; lean_object* v___x_2551_; 
lean_del_object(v___x_2544_);
v___x_2550_ = 0;
v___x_2551_ = l_Lean_Meta_setInlineAttribute(v___x_2531_, v___x_2550_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_);
return v___x_2551_;
}
}
}
else
{
lean_object* v_a_2553_; lean_object* v___x_2555_; uint8_t v_isShared_2556_; uint8_t v_isSharedCheck_2560_; 
lean_dec(v___x_2531_);
v_a_2553_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2555_ = v___x_2541_;
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
else
{
lean_inc(v_a_2553_);
lean_dec(v___x_2541_);
v___x_2555_ = lean_box(0);
v_isShared_2556_ = v_isSharedCheck_2560_;
goto v_resetjp_2554_;
}
v_resetjp_2554_:
{
lean_object* v___x_2558_; 
if (v_isShared_2556_ == 0)
{
v___x_2558_ = v___x_2555_;
goto v_reusejp_2557_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2553_);
v___x_2558_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2557_;
}
v_reusejp_2557_:
{
return v___x_2558_;
}
}
}
}
else
{
lean_dec(v___x_2531_);
lean_dec(v_head_2497_);
return v___x_2540_;
}
}
else
{
lean_dec(v___x_2531_);
lean_dec(v_head_2497_);
return v___x_2539_;
}
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2568_; 
lean_dec(v_a_2517_);
lean_dec(v_levelParams_2500_);
lean_dec(v_head_2497_);
v_a_2561_ = lean_ctor_get(v___x_2528_, 0);
v_isSharedCheck_2568_ = !lean_is_exclusive(v___x_2528_);
if (v_isSharedCheck_2568_ == 0)
{
v___x_2563_ = v___x_2528_;
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v___x_2528_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2568_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2566_; 
if (v_isShared_2564_ == 0)
{
v___x_2566_ = v___x_2563_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_a_2561_);
v___x_2566_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
return v___x_2566_;
}
}
}
}
else
{
lean_object* v_a_2569_; lean_object* v___x_2571_; uint8_t v_isShared_2572_; uint8_t v_isSharedCheck_2576_; 
lean_dec(v_a_2517_);
lean_dec_ref(v___x_2510_);
lean_dec(v_levelParams_2500_);
lean_dec(v_head_2497_);
v_a_2569_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2576_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2576_ == 0)
{
v___x_2571_ = v___x_2524_;
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
else
{
lean_inc(v_a_2569_);
lean_dec(v___x_2524_);
v___x_2571_ = lean_box(0);
v_isShared_2572_ = v_isSharedCheck_2576_;
goto v_resetjp_2570_;
}
v_resetjp_2570_:
{
lean_object* v___x_2574_; 
if (v_isShared_2572_ == 0)
{
v___x_2574_ = v___x_2571_;
goto v_reusejp_2573_;
}
else
{
lean_object* v_reuseFailAlloc_2575_; 
v_reuseFailAlloc_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2575_, 0, v_a_2569_);
v___x_2574_ = v_reuseFailAlloc_2575_;
goto v_reusejp_2573_;
}
v_reusejp_2573_:
{
return v___x_2574_;
}
}
}
}
else
{
lean_object* v_a_2577_; lean_object* v___x_2579_; uint8_t v_isShared_2580_; uint8_t v_isSharedCheck_2584_; 
lean_dec(v_a_2515_);
lean_dec_ref(v___x_2510_);
lean_dec_ref(v_retTy_2503_);
lean_dec(v_levelParams_2500_);
lean_dec(v_lparams_2499_);
lean_dec(v_head_2497_);
lean_dec_ref(v_params_2495_);
v_a_2577_ = lean_ctor_get(v___x_2516_, 0);
v_isSharedCheck_2584_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2579_ = v___x_2516_;
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
else
{
lean_inc(v_a_2577_);
lean_dec(v___x_2516_);
v___x_2579_ = lean_box(0);
v_isShared_2580_ = v_isSharedCheck_2584_;
goto v_resetjp_2578_;
}
v_resetjp_2578_:
{
lean_object* v___x_2582_; 
if (v_isShared_2580_ == 0)
{
v___x_2582_ = v___x_2579_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v_a_2577_);
v___x_2582_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
return v___x_2582_;
}
}
}
}
else
{
lean_object* v_a_2585_; lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
lean_dec_ref(v___x_2510_);
lean_dec_ref(v_retTy_2503_);
lean_dec(v_levelParams_2500_);
lean_dec(v_lparams_2499_);
lean_dec(v_head_2497_);
lean_dec_ref(v___x_2496_);
lean_dec_ref(v_params_2495_);
v_a_2585_ = lean_ctor_get(v___x_2514_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2587_ = v___x_2514_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_inc(v_a_2585_);
lean_dec(v___x_2514_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2585_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed(lean_object* v_params_2593_, lean_object* v___x_2594_, lean_object* v_head_2595_, lean_object* v_compFields_2596_, lean_object* v_lparams_2597_, lean_object* v_levelParams_2598_, lean_object* v___x_2599_, lean_object* v_fields_2600_, lean_object* v_retTy_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1(v_params_2593_, v___x_2594_, v_head_2595_, v_compFields_2596_, v_lparams_2597_, v_levelParams_2598_, v___x_2599_, v_fields_2600_, v_retTy_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec_ref(v___y_2602_);
lean_dec_ref(v_fields_2600_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(lean_object* v_lparams_2609_, lean_object* v_params_2610_, lean_object* v_compFields_2611_, lean_object* v_levelParams_2612_, lean_object* v_as_x27_2613_, lean_object* v_b_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_){
_start:
{
if (lean_obj_tag(v_as_x27_2613_) == 0)
{
lean_object* v___x_2621_; 
lean_dec(v_levelParams_2612_);
lean_dec_ref(v_compFields_2611_);
lean_dec_ref(v_params_2610_);
lean_dec(v_lparams_2609_);
v___x_2621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2621_, 0, v_b_2614_);
return v___x_2621_;
}
else
{
lean_object* v_head_2622_; lean_object* v_tail_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___f_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v_head_2622_ = lean_ctor_get(v_as_x27_2613_, 0);
v_tail_2623_ = lean_ctor_get(v_as_x27_2613_, 1);
v___x_2624_ = lean_box(0);
lean_inc_n(v_lparams_2609_, 2);
lean_inc_n(v_head_2622_, 2);
v___x_2625_ = l_Lean_mkConst(v_head_2622_, v_lparams_2609_);
lean_inc(v_levelParams_2612_);
lean_inc_ref(v_compFields_2611_);
lean_inc_ref(v___x_2625_);
lean_inc_ref(v_params_2610_);
v___f_2626_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___lam__1___boxed), 15, 7);
lean_closure_set(v___f_2626_, 0, v_params_2610_);
lean_closure_set(v___f_2626_, 1, v___x_2625_);
lean_closure_set(v___f_2626_, 2, v_head_2622_);
lean_closure_set(v___f_2626_, 3, v_compFields_2611_);
lean_closure_set(v___f_2626_, 4, v_lparams_2609_);
lean_closure_set(v___f_2626_, 5, v_levelParams_2612_);
lean_closure_set(v___f_2626_, 6, v___x_2624_);
v___x_2627_ = l_Lean_mkAppN(v___x_2625_, v_params_2610_);
lean_inc(v___y_2619_);
lean_inc_ref(v___y_2618_);
lean_inc(v___y_2617_);
lean_inc_ref(v___y_2616_);
v___x_2628_ = lean_infer_type(v___x_2627_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; uint8_t v___x_2630_; lean_object* v___x_2631_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref_known(v___x_2628_, 1);
v___x_2630_ = 0;
v___x_2631_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2629_, v___f_2626_, v___x_2630_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_dec_ref_known(v___x_2631_, 1);
v_as_x27_2613_ = v_tail_2623_;
v_b_2614_ = v___x_2624_;
goto _start;
}
else
{
lean_dec(v_levelParams_2612_);
lean_dec_ref(v_compFields_2611_);
lean_dec_ref(v_params_2610_);
lean_dec(v_lparams_2609_);
return v___x_2631_;
}
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec_ref(v___f_2626_);
lean_dec(v_levelParams_2612_);
lean_dec_ref(v_compFields_2611_);
lean_dec_ref(v_params_2610_);
lean_dec(v_lparams_2609_);
v_a_2633_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2628_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2628_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg___boxed(lean_object* v_lparams_2641_, lean_object* v_params_2642_, lean_object* v_compFields_2643_, lean_object* v_levelParams_2644_, lean_object* v_as_x27_2645_, lean_object* v_b_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v_res_2653_; 
v_res_2653_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2641_, v_params_2642_, v_compFields_2643_, v_levelParams_2644_, v_as_x27_2645_, v_b_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec(v_as_x27_2645_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors(lean_object* v_a_2654_, lean_object* v_a_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_){
_start:
{
lean_object* v_toInductiveVal_2660_; lean_object* v_toConstantVal_2661_; lean_object* v_lparams_2662_; lean_object* v_params_2663_; lean_object* v_compFields_2664_; lean_object* v_ctors_2665_; lean_object* v_levelParams_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v_toInductiveVal_2660_ = lean_ctor_get(v_a_2654_, 0);
v_toConstantVal_2661_ = lean_ctor_get(v_toInductiveVal_2660_, 0);
v_lparams_2662_ = lean_ctor_get(v_a_2654_, 1);
v_params_2663_ = lean_ctor_get(v_a_2654_, 2);
v_compFields_2664_ = lean_ctor_get(v_a_2654_, 3);
v_ctors_2665_ = lean_ctor_get(v_toInductiveVal_2660_, 4);
v_levelParams_2666_ = lean_ctor_get(v_toConstantVal_2661_, 1);
v___x_2667_ = lean_box(0);
lean_inc(v_levelParams_2666_);
lean_inc_ref(v_compFields_2664_);
lean_inc_ref(v_params_2663_);
lean_inc(v_lparams_2662_);
v___x_2668_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2662_, v_params_2663_, v_compFields_2664_, v_levelParams_2666_, v_ctors_2665_, v___x_2667_, v_a_2654_, v_a_2655_, v_a_2656_, v_a_2657_, v_a_2658_);
if (lean_obj_tag(v___x_2668_) == 0)
{
lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2675_ == 0)
{
lean_object* v_unused_2676_; 
v_unused_2676_ = lean_ctor_get(v___x_2668_, 0);
lean_dec(v_unused_2676_);
v___x_2670_ = v___x_2668_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_dec(v___x_2668_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
lean_ctor_set(v___x_2670_, 0, v___x_2667_);
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v___x_2667_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
else
{
return v___x_2668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideConstructors___boxed(lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l_Lean_Elab_ComputedFields_overrideConstructors(v_a_2677_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_);
lean_dec(v_a_2681_);
lean_dec_ref(v_a_2680_);
lean_dec(v_a_2679_);
lean_dec_ref(v_a_2678_);
lean_dec_ref(v_a_2677_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(lean_object* v___x_2684_, size_t v_sz_2685_, size_t v_i_2686_, lean_object* v_bs_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___redArg(v___x_2684_, v_sz_2685_, v_i_2686_, v_bs_2687_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0___boxed(lean_object* v___x_2695_, lean_object* v_sz_2696_, lean_object* v_i_2697_, lean_object* v_bs_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_){
_start:
{
size_t v_sz_boxed_2705_; size_t v_i_boxed_2706_; lean_object* v_res_2707_; 
v_sz_boxed_2705_ = lean_unbox_usize(v_sz_2696_);
lean_dec(v_sz_2696_);
v_i_boxed_2706_ = lean_unbox_usize(v_i_2697_);
lean_dec(v_i_2697_);
v_res_2707_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__0(v___x_2695_, v_sz_boxed_2705_, v_i_boxed_2706_, v_bs_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec_ref(v___y_2699_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(lean_object* v_00_u03b1_2708_, lean_object* v_x_2709_, uint8_t v_isExporting_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v___x_2717_; 
v___x_2717_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___redArg(v_x_2709_, v_isExporting_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_);
return v___x_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1___boxed(lean_object* v_00_u03b1_2718_, lean_object* v_x_2719_, lean_object* v_isExporting_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
uint8_t v_isExporting_boxed_2727_; lean_object* v_res_2728_; 
v_isExporting_boxed_2727_ = lean_unbox(v_isExporting_2720_);
v_res_2728_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1_spec__1(v_00_u03b1_2718_, v_x_2719_, v_isExporting_boxed_2727_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec_ref(v___y_2721_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(lean_object* v_00_u03b1_2729_, lean_object* v_x_2730_, uint8_t v_when_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v___x_2738_; 
v___x_2738_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v_x_2730_, v_when_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___boxed(lean_object* v_00_u03b1_2739_, lean_object* v_x_2740_, lean_object* v_when_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
uint8_t v_when_boxed_2748_; lean_object* v_res_2749_; 
v_when_boxed_2748_ = lean_unbox(v_when_2741_);
v_res_2749_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1(v_00_u03b1_2739_, v_x_2740_, v_when_boxed_2748_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec_ref(v___y_2743_);
lean_dec_ref(v___y_2742_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(lean_object* v_lparams_2750_, lean_object* v_params_2751_, lean_object* v_compFields_2752_, lean_object* v_levelParams_2753_, lean_object* v_as_2754_, lean_object* v_as_x27_2755_, lean_object* v_b_2756_, lean_object* v_a_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___redArg(v_lparams_2750_, v_params_2751_, v_compFields_2752_, v_levelParams_2753_, v_as_x27_2755_, v_b_2756_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2___boxed(lean_object* v_lparams_2765_, lean_object* v_params_2766_, lean_object* v_compFields_2767_, lean_object* v_levelParams_2768_, lean_object* v_as_2769_, lean_object* v_as_x27_2770_, lean_object* v_b_2771_, lean_object* v_a_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v_res_2779_; 
v_res_2779_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__2(v_lparams_2765_, v_params_2766_, v_compFields_2767_, v_levelParams_2768_, v_as_2769_, v_as_x27_2770_, v_b_2771_, v_a_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v_as_x27_2770_);
lean_dec(v_as_2769_);
return v_res_2779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(lean_object* v_v_2780_, lean_object* v_compFieldVars_2781_, lean_object* v___x_2782_, uint8_t v___x_2783_, lean_object* v_params_2784_, lean_object* v___x_2785_, lean_object* v_a_2786_, uint8_t v___x_2787_, lean_object* v_fields_2788_, lean_object* v_x_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v___x_2796_; 
v___x_2796_ = l_Lean_Elab_ComputedFields_isScalarField(v_v_2780_, v___y_2793_, v___y_2794_);
if (lean_obj_tag(v___x_2796_) == 0)
{
lean_object* v_a_2797_; uint8_t v___x_2798_; 
v_a_2797_ = lean_ctor_get(v___x_2796_, 0);
lean_inc(v_a_2797_);
lean_dec_ref_known(v___x_2796_, 1);
v___x_2798_ = lean_unbox(v_a_2797_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; uint8_t v___x_2800_; uint8_t v___x_2801_; uint8_t v___x_2802_; lean_object* v___x_2803_; 
lean_dec(v_a_2786_);
lean_dec_ref(v___x_2785_);
lean_dec_ref(v_params_2784_);
v___x_2799_ = l_Array_append___redArg(v_compFieldVars_2781_, v_fields_2788_);
v___x_2800_ = 1;
v___x_2801_ = lean_unbox(v_a_2797_);
v___x_2802_ = lean_unbox(v_a_2797_);
lean_dec(v_a_2797_);
v___x_2803_ = l_Lean_Meta_mkLambdaFVars(v___x_2799_, v___x_2782_, v___x_2801_, v___x_2783_, v___x_2802_, v___x_2783_, v___x_2800_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
lean_dec_ref(v___x_2799_);
return v___x_2803_;
}
else
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_dec(v_a_2797_);
lean_dec_ref(v___x_2782_);
lean_dec_ref(v_compFieldVars_2781_);
v___x_2804_ = l_Array_append___redArg(v_params_2784_, v_fields_2788_);
v___x_2805_ = l_Lean_mkAppN(v___x_2785_, v___x_2804_);
lean_dec_ref(v___x_2804_);
v___x_2806_ = l_Lean_Elab_ComputedFields_getComputedFieldValue(v_a_2786_, v___x_2805_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2807_);
lean_dec_ref_known(v___x_2806_, 1);
v___x_2808_ = 1;
v___x_2809_ = l_Lean_Meta_mkLambdaFVars(v_fields_2788_, v_a_2807_, v___x_2787_, v___x_2783_, v___x_2787_, v___x_2783_, v___x_2808_, v___y_2791_, v___y_2792_, v___y_2793_, v___y_2794_);
return v___x_2809_;
}
else
{
return v___x_2806_;
}
}
}
else
{
lean_object* v_a_2810_; lean_object* v___x_2812_; uint8_t v_isShared_2813_; uint8_t v_isSharedCheck_2817_; 
lean_dec(v_a_2786_);
lean_dec_ref(v___x_2785_);
lean_dec_ref(v_params_2784_);
lean_dec_ref(v___x_2782_);
lean_dec_ref(v_compFieldVars_2781_);
v_a_2810_ = lean_ctor_get(v___x_2796_, 0);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2796_);
if (v_isSharedCheck_2817_ == 0)
{
v___x_2812_ = v___x_2796_;
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
else
{
lean_inc(v_a_2810_);
lean_dec(v___x_2796_);
v___x_2812_ = lean_box(0);
v_isShared_2813_ = v_isSharedCheck_2817_;
goto v_resetjp_2811_;
}
v_resetjp_2811_:
{
lean_object* v___x_2815_; 
if (v_isShared_2813_ == 0)
{
v___x_2815_ = v___x_2812_;
goto v_reusejp_2814_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_a_2810_);
v___x_2815_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2814_;
}
v_reusejp_2814_:
{
return v___x_2815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed(lean_object* v_v_2818_, lean_object* v_compFieldVars_2819_, lean_object* v___x_2820_, lean_object* v___x_2821_, lean_object* v_params_2822_, lean_object* v___x_2823_, lean_object* v_a_2824_, lean_object* v___x_2825_, lean_object* v_fields_2826_, lean_object* v_x_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
uint8_t v___x_12678__boxed_2834_; uint8_t v___x_12681__boxed_2835_; lean_object* v_res_2836_; 
v___x_12678__boxed_2834_ = lean_unbox(v___x_2821_);
v___x_12681__boxed_2835_ = lean_unbox(v___x_2825_);
v_res_2836_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0(v_v_2818_, v_compFieldVars_2819_, v___x_2820_, v___x_12678__boxed_2834_, v_params_2822_, v___x_2823_, v_a_2824_, v___x_12681__boxed_2835_, v_fields_2826_, v_x_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec_ref(v_x_2827_);
lean_dec_ref(v_fields_2826_);
return v_res_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(lean_object* v_lparams_2837_, lean_object* v_compFieldVars_2838_, lean_object* v___x_2839_, lean_object* v___x_2840_, lean_object* v___x_2841_, lean_object* v_params_2842_, lean_object* v_a_2843_, uint8_t v___x_2844_, size_t v_sz_2845_, size_t v_i_2846_, lean_object* v_bs_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
uint8_t v___x_2854_; 
v___x_2854_ = lean_usize_dec_lt(v_i_2846_, v_sz_2845_);
if (v___x_2854_ == 0)
{
lean_object* v___x_2855_; 
lean_dec(v_a_2843_);
lean_dec_ref(v_params_2842_);
lean_dec_ref(v___x_2839_);
lean_dec_ref(v_compFieldVars_2838_);
lean_dec(v_lparams_2837_);
v___x_2855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2855_, 0, v_bs_2847_);
return v___x_2855_;
}
else
{
uint8_t v___x_2856_; lean_object* v_v_2857_; lean_object* v___x_2858_; lean_object* v_bs_x27_2859_; lean_object* v___y_2861_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___f_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2856_ = lean_nat_dec_lt(v___x_2840_, v___x_2841_);
v_v_2857_ = lean_array_uget(v_bs_2847_, v_i_2846_);
v___x_2858_ = lean_unsigned_to_nat(0u);
v_bs_x27_2859_ = lean_array_uset(v_bs_2847_, v_i_2846_, v___x_2858_);
lean_inc(v_lparams_2837_);
lean_inc(v_v_2857_);
v___x_2875_ = l_Lean_mkConst(v_v_2857_, v_lparams_2837_);
v___x_2876_ = lean_box(v___x_2856_);
v___x_2877_ = lean_box(v___x_2844_);
lean_inc(v_a_2843_);
lean_inc_ref(v___x_2875_);
lean_inc_ref(v_params_2842_);
lean_inc_ref(v___x_2839_);
lean_inc_ref(v_compFieldVars_2838_);
v___f_2878_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___lam__0___boxed), 16, 8);
lean_closure_set(v___f_2878_, 0, v_v_2857_);
lean_closure_set(v___f_2878_, 1, v_compFieldVars_2838_);
lean_closure_set(v___f_2878_, 2, v___x_2839_);
lean_closure_set(v___f_2878_, 3, v___x_2876_);
lean_closure_set(v___f_2878_, 4, v_params_2842_);
lean_closure_set(v___f_2878_, 5, v___x_2875_);
lean_closure_set(v___f_2878_, 6, v_a_2843_);
lean_closure_set(v___f_2878_, 7, v___x_2877_);
v___x_2879_ = l_Lean_mkAppN(v___x_2875_, v_params_2842_);
lean_inc(v___y_2852_);
lean_inc_ref(v___y_2851_);
lean_inc(v___y_2850_);
lean_inc_ref(v___y_2849_);
v___x_2880_ = lean_infer_type(v___x_2879_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; lean_object* v___x_2882_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
lean_inc(v_a_2881_);
lean_dec_ref_known(v___x_2880_, 1);
v___x_2882_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkImplType_spec__0___redArg(v_a_2881_, v___f_2878_, v___x_2844_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_);
v___y_2861_ = v___x_2882_;
goto v___jp_2860_;
}
else
{
lean_dec_ref(v___f_2878_);
v___y_2861_ = v___x_2880_;
goto v___jp_2860_;
}
v___jp_2860_:
{
if (lean_obj_tag(v___y_2861_) == 0)
{
lean_object* v_a_2862_; size_t v___x_2863_; size_t v___x_2864_; lean_object* v___x_2865_; 
v_a_2862_ = lean_ctor_get(v___y_2861_, 0);
lean_inc(v_a_2862_);
lean_dec_ref_known(v___y_2861_, 1);
v___x_2863_ = ((size_t)1ULL);
v___x_2864_ = lean_usize_add(v_i_2846_, v___x_2863_);
v___x_2865_ = lean_array_uset(v_bs_x27_2859_, v_i_2846_, v_a_2862_);
v_i_2846_ = v___x_2864_;
v_bs_2847_ = v___x_2865_;
goto _start;
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
lean_dec_ref(v_bs_x27_2859_);
lean_dec(v_a_2843_);
lean_dec_ref(v_params_2842_);
lean_dec_ref(v___x_2839_);
lean_dec_ref(v_compFieldVars_2838_);
lean_dec(v_lparams_2837_);
v_a_2867_ = lean_ctor_get(v___y_2861_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___y_2861_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___y_2861_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___y_2861_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed(lean_object** _args){
lean_object* v_lparams_2883_ = _args[0];
lean_object* v_compFieldVars_2884_ = _args[1];
lean_object* v___x_2885_ = _args[2];
lean_object* v___x_2886_ = _args[3];
lean_object* v___x_2887_ = _args[4];
lean_object* v_params_2888_ = _args[5];
lean_object* v_a_2889_ = _args[6];
lean_object* v___x_2890_ = _args[7];
lean_object* v_sz_2891_ = _args[8];
lean_object* v_i_2892_ = _args[9];
lean_object* v_bs_2893_ = _args[10];
lean_object* v___y_2894_ = _args[11];
lean_object* v___y_2895_ = _args[12];
lean_object* v___y_2896_ = _args[13];
lean_object* v___y_2897_ = _args[14];
lean_object* v___y_2898_ = _args[15];
lean_object* v___y_2899_ = _args[16];
_start:
{
uint8_t v___x_12766__boxed_2900_; size_t v_sz_boxed_2901_; size_t v_i_boxed_2902_; lean_object* v_res_2903_; 
v___x_12766__boxed_2900_ = lean_unbox(v___x_2890_);
v_sz_boxed_2901_ = lean_unbox_usize(v_sz_2891_);
lean_dec(v_sz_2891_);
v_i_boxed_2902_ = lean_unbox_usize(v_i_2892_);
lean_dec(v_i_2892_);
v_res_2903_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0(v_lparams_2883_, v_compFieldVars_2884_, v___x_2885_, v___x_2886_, v___x_2887_, v_params_2888_, v_a_2889_, v___x_12766__boxed_2900_, v_sz_boxed_2901_, v_i_boxed_2902_, v_bs_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_);
lean_dec(v___y_2898_);
lean_dec_ref(v___y_2897_);
lean_dec(v___y_2896_);
lean_dec_ref(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___x_2887_);
lean_dec(v___x_2886_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(size_t v_sz_2904_, size_t v_i_2905_, lean_object* v_bs_2906_){
_start:
{
uint8_t v___x_2907_; 
v___x_2907_ = lean_usize_dec_lt(v_i_2905_, v_sz_2904_);
if (v___x_2907_ == 0)
{
return v_bs_2906_;
}
else
{
lean_object* v_v_2908_; lean_object* v___x_2909_; lean_object* v_bs_x27_2910_; lean_object* v___x_2911_; size_t v___x_2912_; size_t v___x_2913_; lean_object* v___x_2914_; 
v_v_2908_ = lean_array_uget(v_bs_2906_, v_i_2905_);
v___x_2909_ = lean_unsigned_to_nat(0u);
v_bs_x27_2910_ = lean_array_uset(v_bs_2906_, v_i_2905_, v___x_2909_);
v___x_2911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_v_2908_);
v___x_2912_ = ((size_t)1ULL);
v___x_2913_ = lean_usize_add(v_i_2905_, v___x_2912_);
v___x_2914_ = lean_array_uset(v_bs_x27_2910_, v_i_2905_, v___x_2911_);
v_i_2905_ = v___x_2913_;
v_bs_2906_ = v___x_2914_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1___boxed(lean_object* v_sz_2916_, lean_object* v_i_2917_, lean_object* v_bs_2918_){
_start:
{
size_t v_sz_boxed_2919_; size_t v_i_boxed_2920_; lean_object* v_res_2921_; 
v_sz_boxed_2919_ = lean_unbox_usize(v_sz_2916_);
lean_dec(v_sz_2916_);
v_i_boxed_2920_ = lean_unbox_usize(v_i_2917_);
lean_dec(v_i_2917_);
v_res_2921_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_boxed_2919_, v_i_boxed_2920_, v_bs_2918_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(lean_object* v_ctors_2924_, lean_object* v_lparams_2925_, lean_object* v_compFieldVars_2926_, lean_object* v_params_2927_, lean_object* v_val_2928_, lean_object* v___x_2929_, lean_object* v_indices_2930_, lean_object* v_xImpl_2931_, lean_object* v___x_2932_, lean_object* v_levelParams_2933_, lean_object* v_as_2934_, size_t v_sz_2935_, size_t v_i_2936_, lean_object* v_b_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v_a_2945_; uint8_t v___x_2949_; 
v___x_2949_ = lean_usize_dec_lt(v_i_2936_, v_sz_2935_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; 
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v___x_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2950_, 0, v_b_2937_);
return v___x_2950_;
}
else
{
lean_object* v_array_2951_; lean_object* v_start_2952_; lean_object* v_stop_2953_; uint8_t v___x_2954_; 
v_array_2951_ = lean_ctor_get(v_b_2937_, 0);
v_start_2952_ = lean_ctor_get(v_b_2937_, 1);
v_stop_2953_ = lean_ctor_get(v_b_2937_, 2);
v___x_2954_ = lean_nat_dec_lt(v_start_2952_, v_stop_2953_);
if (v___x_2954_ == 0)
{
lean_object* v___x_2955_; 
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v___x_2955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2955_, 0, v_b_2937_);
return v___x_2955_;
}
else
{
lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_3138_; 
lean_inc(v_stop_2953_);
lean_inc(v_start_2952_);
lean_inc_ref(v_array_2951_);
v_isSharedCheck_3138_ = !lean_is_exclusive(v_b_2937_);
if (v_isSharedCheck_3138_ == 0)
{
lean_object* v_unused_3139_; lean_object* v_unused_3140_; lean_object* v_unused_3141_; 
v_unused_3139_ = lean_ctor_get(v_b_2937_, 2);
lean_dec(v_unused_3139_);
v_unused_3140_ = lean_ctor_get(v_b_2937_, 1);
lean_dec(v_unused_3140_);
v_unused_3141_ = lean_ctor_get(v_b_2937_, 0);
lean_dec(v_unused_3141_);
v___x_2957_ = v_b_2937_;
v_isShared_2958_ = v_isSharedCheck_3138_;
goto v_resetjp_2956_;
}
else
{
lean_dec(v_b_2937_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_3138_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v_a_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2964_; 
v_a_2959_ = lean_array_uget_borrowed(v_as_2934_, v_i_2936_);
v___x_2960_ = lean_array_fget(v_array_2951_, v_start_2952_);
v___x_2961_ = lean_unsigned_to_nat(1u);
v___x_2962_ = lean_nat_add(v_start_2952_, v___x_2961_);
lean_inc(v_stop_2953_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 1, v___x_2962_);
v___x_2964_ = v___x_2957_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_array_2951_);
lean_ctor_set(v_reuseFailAlloc_3137_, 1, v___x_2962_);
lean_ctor_set(v_reuseFailAlloc_3137_, 2, v_stop_2953_);
v___x_2964_ = v_reuseFailAlloc_3137_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; lean_object* v_env_2966_; uint8_t v___x_2967_; 
v___x_2965_ = lean_st_ref_get(v___y_2942_);
v_env_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc_ref(v_env_2966_);
lean_dec(v___x_2965_);
lean_inc(v_a_2959_);
v___x_2967_ = l_Lean_isExtern(v_env_2966_, v_a_2959_);
if (v___x_2967_ == 0)
{
lean_object* v___x_2968_; size_t v_sz_2969_; size_t v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
lean_inc(v_ctors_2924_);
v___x_2968_ = lean_array_mk(v_ctors_2924_);
v_sz_2969_ = lean_array_size(v___x_2968_);
v___x_2970_ = ((size_t)0ULL);
v___x_2971_ = lean_box(v___x_2967_);
v___x_2972_ = lean_box_usize(v_sz_2969_);
v___x_2973_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1));
lean_inc(v_a_2959_);
lean_inc_ref(v_params_2927_);
lean_inc(v___x_2960_);
lean_inc_ref(v_compFieldVars_2926_);
lean_inc(v_lparams_2925_);
v___x_2974_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_2974_, 0, v_lparams_2925_);
lean_closure_set(v___x_2974_, 1, v_compFieldVars_2926_);
lean_closure_set(v___x_2974_, 2, v___x_2960_);
lean_closure_set(v___x_2974_, 3, v_start_2952_);
lean_closure_set(v___x_2974_, 4, v_stop_2953_);
lean_closure_set(v___x_2974_, 5, v_params_2927_);
lean_closure_set(v___x_2974_, 6, v_a_2959_);
lean_closure_set(v___x_2974_, 7, v___x_2971_);
lean_closure_set(v___x_2974_, 8, v___x_2972_);
lean_closure_set(v___x_2974_, 9, v___x_2973_);
lean_closure_set(v___x_2974_, 10, v___x_2968_);
v___x_2975_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_2974_, v___x_2954_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_2975_) == 0)
{
lean_object* v_a_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___x_2994_; 
v_a_2976_ = lean_ctor_get(v___x_2975_, 0);
lean_inc(v_a_2976_);
lean_dec_ref_known(v___x_2975_, 1);
v___x_2977_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_2959_);
v___x_2978_ = l_Lean_Name_append(v_a_2959_, v___x_2977_);
lean_inc(v___y_2942_);
lean_inc_ref(v___y_2941_);
lean_inc(v___y_2940_);
lean_inc_ref(v___y_2939_);
lean_inc(v___x_2960_);
v___x_2994_ = lean_infer_type(v___x_2960_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; uint8_t v___x_2999_; lean_object* v___x_3000_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
lean_inc(v_a_2995_);
lean_dec_ref_known(v___x_2994_, 1);
v___x_2996_ = lean_mk_empty_array_with_capacity(v___x_2961_);
lean_inc_ref(v_val_2928_);
lean_inc_ref(v___x_2996_);
v___x_2997_ = lean_array_push(v___x_2996_, v_val_2928_);
lean_inc_ref(v___x_2929_);
v___x_2998_ = l_Array_append___redArg(v___x_2929_, v___x_2997_);
lean_dec_ref(v___x_2997_);
v___x_2999_ = 1;
v___x_3000_ = l_Lean_Meta_mkForallFVars(v___x_2998_, v_a_2995_, v___x_2967_, v___x_2954_, v___x_2954_, v___x_2999_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3002_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
lean_inc(v_a_3001_);
lean_dec_ref_known(v___x_3000_, 1);
lean_inc(v___y_2942_);
lean_inc_ref(v___y_2941_);
lean_inc(v___y_2940_);
lean_inc_ref(v___y_2939_);
v___x_3002_ = lean_infer_type(v___x_2960_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_3002_, 1);
lean_inc_ref(v_xImpl_2931_);
lean_inc_ref(v_indices_2930_);
v___x_3004_ = lean_array_push(v_indices_2930_, v_xImpl_2931_);
v___x_3005_ = l_Lean_Meta_mkLambdaFVars(v___x_3004_, v_a_3003_, v___x_2967_, v___x_2954_, v___x_2967_, v___x_2954_, v___x_2999_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
lean_dec_ref(v___x_3004_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3007_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc(v_a_3006_);
lean_dec_ref_known(v___x_3005_, 1);
lean_inc(v___y_2942_);
lean_inc_ref(v___y_2941_);
lean_inc(v___y_2940_);
lean_inc_ref(v___y_2939_);
lean_inc_ref(v_xImpl_2931_);
v___x_3007_ = lean_infer_type(v_xImpl_2931_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3009_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v___x_3007_, 1);
lean_inc_ref(v_val_2928_);
v___x_3009_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3008_, v_val_2928_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v_a_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; size_t v_sz_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v_a_3010_ = lean_ctor_get(v___x_3009_, 0);
lean_inc(v_a_3010_);
lean_dec_ref_known(v___x_3009_, 1);
lean_inc(v___x_2932_);
v___x_3011_ = l_Lean_mkCasesOnName(v___x_2932_);
lean_inc_ref(v___x_2996_);
v___x_3012_ = lean_array_push(v___x_2996_, v_a_3006_);
lean_inc_ref(v_params_2927_);
v___x_3013_ = l_Array_append___redArg(v_params_2927_, v___x_3012_);
lean_dec_ref(v___x_3012_);
v___x_3014_ = l_Array_append___redArg(v___x_3013_, v_indices_2930_);
v___x_3015_ = lean_array_push(v___x_2996_, v_a_3010_);
v___x_3016_ = l_Array_append___redArg(v___x_3014_, v___x_3015_);
lean_dec_ref(v___x_3015_);
v___x_3017_ = l_Array_append___redArg(v___x_3016_, v_a_2976_);
lean_dec(v_a_2976_);
v_sz_3018_ = lean_array_size(v___x_3017_);
v___x_3019_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3018_, v___x_2970_, v___x_3017_);
v___x_3020_ = l_Lean_Meta_mkAppOptM(v___x_3011_, v___x_3019_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3022_; 
v_a_3021_ = lean_ctor_get(v___x_3020_, 0);
lean_inc(v_a_3021_);
lean_dec_ref_known(v___x_3020_, 1);
v___x_3022_ = l_Lean_Meta_mkLambdaFVars(v___x_2998_, v_a_3021_, v___x_2967_, v___x_2954_, v___x_2967_, v___x_2954_, v___x_2999_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
lean_dec_ref(v___x_2998_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; uint8_t v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
lean_inc(v_levelParams_2933_);
lean_inc_n(v___x_2978_, 2);
v___x_3024_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3024_, 0, v___x_2978_);
lean_ctor_set(v___x_3024_, 1, v_levelParams_2933_);
lean_ctor_set(v___x_3024_, 2, v_a_3001_);
v___x_3025_ = lean_box(0);
v___x_3026_ = 0;
v___x_3027_ = lean_box(0);
v___x_3028_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___x_2978_);
lean_ctor_set(v___x_3028_, 1, v___x_3027_);
v___x_3029_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3029_, 0, v___x_3024_);
lean_ctor_set(v___x_3029_, 1, v_a_3023_);
lean_ctor_set(v___x_3029_, 2, v___x_3025_);
lean_ctor_set(v___x_3029_, 3, v___x_3028_);
lean_ctor_set_uint8(v___x_3029_, sizeof(void*)*4, v___x_3026_);
v___x_3030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3030_, 0, v___x_3029_);
v___x_3031_ = l_Lean_addDecl(v___x_3030_, v___x_2967_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3031_) == 0)
{
lean_object* v___x_3032_; lean_object* v_env_3033_; lean_object* v___x_3034_; 
lean_dec_ref_known(v___x_3031_, 1);
v___x_3032_ = lean_st_ref_get(v___y_2942_);
v_env_3033_ = lean_ctor_get(v___x_3032_, 0);
lean_inc_ref(v_env_3033_);
lean_dec(v___x_3032_);
lean_inc(v_a_2959_);
v___x_3034_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3033_, v_a_2959_);
if (lean_obj_tag(v___x_3034_) == 1)
{
lean_object* v_val_3035_; uint8_t v___x_3036_; lean_object* v___x_3037_; 
v_val_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_val_3035_);
lean_dec_ref_known(v___x_3034_, 1);
v___x_3036_ = lean_unbox(v_val_3035_);
lean_dec(v_val_3035_);
lean_inc(v___x_2978_);
v___x_3037_ = l_Lean_Meta_setInlineAttribute(v___x_2978_, v___x_3036_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3037_) == 0)
{
lean_dec_ref_known(v___x_3037_, 1);
v___y_2980_ = v___y_2938_;
v___y_2981_ = v___y_2939_;
v___y_2982_ = v___y_2940_;
v___y_2983_ = v___y_2941_;
v___y_2984_ = v___y_2942_;
goto v___jp_2979_;
}
else
{
lean_object* v_a_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3045_; 
lean_dec(v___x_2978_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3038_ = lean_ctor_get(v___x_3037_, 0);
v_isSharedCheck_3045_ = !lean_is_exclusive(v___x_3037_);
if (v_isSharedCheck_3045_ == 0)
{
v___x_3040_ = v___x_3037_;
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_a_3038_);
lean_dec(v___x_3037_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3045_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___x_3043_; 
if (v_isShared_3041_ == 0)
{
v___x_3043_ = v___x_3040_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3044_; 
v_reuseFailAlloc_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3044_, 0, v_a_3038_);
v___x_3043_ = v_reuseFailAlloc_3044_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
return v___x_3043_;
}
}
}
}
else
{
lean_dec(v___x_3034_);
v___y_2980_ = v___y_2938_;
v___y_2981_ = v___y_2939_;
v___y_2982_ = v___y_2940_;
v___y_2983_ = v___y_2941_;
v___y_2984_ = v___y_2942_;
goto v___jp_2979_;
}
}
else
{
lean_object* v_a_3046_; lean_object* v___x_3048_; uint8_t v_isShared_3049_; uint8_t v_isSharedCheck_3053_; 
lean_dec(v___x_2978_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3046_ = lean_ctor_get(v___x_3031_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3031_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3048_ = v___x_3031_;
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
else
{
lean_inc(v_a_3046_);
lean_dec(v___x_3031_);
v___x_3048_ = lean_box(0);
v_isShared_3049_ = v_isSharedCheck_3053_;
goto v_resetjp_3047_;
}
v_resetjp_3047_:
{
lean_object* v___x_3051_; 
if (v_isShared_3049_ == 0)
{
v___x_3051_ = v___x_3048_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_a_3046_);
v___x_3051_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
return v___x_3051_;
}
}
}
}
else
{
lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3061_; 
lean_dec(v_a_3001_);
lean_dec(v___x_2978_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3054_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3056_ = v___x_3022_;
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_3022_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3059_; 
if (v_isShared_3057_ == 0)
{
v___x_3059_ = v___x_3056_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3054_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
}
else
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3069_; 
lean_dec(v_a_3001_);
lean_dec_ref(v___x_2998_);
lean_dec(v___x_2978_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3062_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3064_ = v___x_3020_;
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v___x_3020_);
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
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
lean_dec(v_a_3006_);
lean_dec(v_a_3001_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v___x_2996_);
lean_dec(v___x_2978_);
lean_dec(v_a_2976_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3070_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___x_3009_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3009_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
else
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3085_; 
lean_dec(v_a_3006_);
lean_dec(v_a_3001_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v___x_2996_);
lean_dec(v___x_2978_);
lean_dec(v_a_2976_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3078_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3080_ = v___x_3007_;
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_3007_);
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
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec(v_a_3001_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v___x_2996_);
lean_dec(v___x_2978_);
lean_dec(v_a_2976_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3086_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3005_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3005_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
lean_dec(v_a_3001_);
lean_dec_ref(v___x_2998_);
lean_dec_ref(v___x_2996_);
lean_dec(v___x_2978_);
lean_dec(v_a_2976_);
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3094_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3002_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3002_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3109_; 
lean_dec_ref(v___x_2998_);
lean_dec_ref(v___x_2996_);
lean_dec(v___x_2978_);
lean_dec(v_a_2976_);
lean_dec_ref(v___x_2964_);
lean_dec(v___x_2960_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3102_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3109_ == 0)
{
v___x_3104_ = v___x_3000_;
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3000_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3109_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3107_; 
if (v_isShared_3105_ == 0)
{
v___x_3107_ = v___x_3104_;
goto v_reusejp_3106_;
}
else
{
lean_object* v_reuseFailAlloc_3108_; 
v_reuseFailAlloc_3108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3108_, 0, v_a_3102_);
v___x_3107_ = v_reuseFailAlloc_3108_;
goto v_reusejp_3106_;
}
v_reusejp_3106_:
{
return v___x_3107_;
}
}
}
}
else
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3117_; 
lean_dec(v___x_2978_);
lean_dec(v_a_2976_);
lean_dec_ref(v___x_2964_);
lean_dec(v___x_2960_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3110_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3112_ = v___x_2994_;
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_2994_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3115_; 
if (v_isShared_3113_ == 0)
{
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_a_3110_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
v___jp_2979_:
{
lean_object* v___x_2985_; 
lean_inc(v_a_2959_);
v___x_2985_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_2959_, v___x_2978_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_dec_ref_known(v___x_2985_, 1);
v_a_2945_ = v___x_2964_;
goto v___jp_2944_;
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2985_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2985_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
else
{
lean_object* v_a_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3125_; 
lean_dec_ref(v___x_2964_);
lean_dec(v___x_2960_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3118_ = lean_ctor_get(v___x_2975_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3120_ = v___x_2975_;
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_a_3118_);
lean_dec(v___x_2975_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3125_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3123_; 
if (v_isShared_3121_ == 0)
{
v___x_3123_ = v___x_3120_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v_a_3118_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
}
else
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; 
lean_dec(v___x_2960_);
lean_dec(v_stop_2953_);
lean_dec(v_start_2952_);
v___x_3126_ = lean_mk_empty_array_with_capacity(v___x_2961_);
lean_inc(v_a_2959_);
v___x_3127_ = lean_array_push(v___x_3126_, v_a_2959_);
v___x_3128_ = l_Lean_compileDecls(v___x_3127_, v___x_2954_, v___y_2941_, v___y_2942_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_dec_ref_known(v___x_3128_, 1);
v_a_2945_ = v___x_2964_;
goto v___jp_2944_;
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec_ref(v___x_2964_);
lean_dec(v_levelParams_2933_);
lean_dec(v___x_2932_);
lean_dec_ref(v_xImpl_2931_);
lean_dec_ref(v_indices_2930_);
lean_dec_ref(v___x_2929_);
lean_dec_ref(v_val_2928_);
lean_dec_ref(v_params_2927_);
lean_dec_ref(v_compFieldVars_2926_);
lean_dec(v_lparams_2925_);
lean_dec(v_ctors_2924_);
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3128_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3128_);
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
}
}
}
}
v___jp_2944_:
{
size_t v___x_2946_; size_t v___x_2947_; 
v___x_2946_ = ((size_t)1ULL);
v___x_2947_ = lean_usize_add(v_i_2936_, v___x_2946_);
v_i_2936_ = v___x_2947_;
v_b_2937_ = v_a_2945_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed(lean_object** _args){
lean_object* v_ctors_3142_ = _args[0];
lean_object* v_lparams_3143_ = _args[1];
lean_object* v_compFieldVars_3144_ = _args[2];
lean_object* v_params_3145_ = _args[3];
lean_object* v_val_3146_ = _args[4];
lean_object* v___x_3147_ = _args[5];
lean_object* v_indices_3148_ = _args[6];
lean_object* v_xImpl_3149_ = _args[7];
lean_object* v___x_3150_ = _args[8];
lean_object* v_levelParams_3151_ = _args[9];
lean_object* v_as_3152_ = _args[10];
lean_object* v_sz_3153_ = _args[11];
lean_object* v_i_3154_ = _args[12];
lean_object* v_b_3155_ = _args[13];
lean_object* v___y_3156_ = _args[14];
lean_object* v___y_3157_ = _args[15];
lean_object* v___y_3158_ = _args[16];
lean_object* v___y_3159_ = _args[17];
lean_object* v___y_3160_ = _args[18];
lean_object* v___y_3161_ = _args[19];
_start:
{
size_t v_sz_boxed_3162_; size_t v_i_boxed_3163_; lean_object* v_res_3164_; 
v_sz_boxed_3162_ = lean_unbox_usize(v_sz_3153_);
lean_dec(v_sz_3153_);
v_i_boxed_3163_ = lean_unbox_usize(v_i_3154_);
lean_dec(v_i_3154_);
v_res_3164_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3142_, v_lparams_3143_, v_compFieldVars_3144_, v_params_3145_, v_val_3146_, v___x_3147_, v_indices_3148_, v_xImpl_3149_, v___x_3150_, v_levelParams_3151_, v_as_3152_, v_sz_boxed_3162_, v_i_boxed_3163_, v_b_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v_as_3152_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(lean_object* v_lparams_3165_, lean_object* v_compFieldVars_3166_, lean_object* v_params_3167_, lean_object* v_ctors_3168_, lean_object* v_val_3169_, lean_object* v___x_3170_, lean_object* v_indices_3171_, lean_object* v_xImpl_3172_, lean_object* v___x_3173_, lean_object* v_levelParams_3174_, lean_object* v_as_3175_, size_t v_sz_3176_, size_t v_i_3177_, lean_object* v_b_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_){
_start:
{
lean_object* v_a_3186_; uint8_t v___x_3190_; 
v___x_3190_ = lean_usize_dec_lt(v_i_3177_, v_sz_3176_);
if (v___x_3190_ == 0)
{
lean_object* v___x_3191_; 
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v___x_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3191_, 0, v_b_3178_);
return v___x_3191_;
}
else
{
lean_object* v_array_3192_; lean_object* v_start_3193_; lean_object* v_stop_3194_; uint8_t v___x_3195_; 
v_array_3192_ = lean_ctor_get(v_b_3178_, 0);
v_start_3193_ = lean_ctor_get(v_b_3178_, 1);
v_stop_3194_ = lean_ctor_get(v_b_3178_, 2);
v___x_3195_ = lean_nat_dec_lt(v_start_3193_, v_stop_3194_);
if (v___x_3195_ == 0)
{
lean_object* v___x_3196_; 
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v___x_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3196_, 0, v_b_3178_);
return v___x_3196_;
}
else
{
lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3379_; 
lean_inc(v_stop_3194_);
lean_inc(v_start_3193_);
lean_inc_ref(v_array_3192_);
v_isSharedCheck_3379_ = !lean_is_exclusive(v_b_3178_);
if (v_isSharedCheck_3379_ == 0)
{
lean_object* v_unused_3380_; lean_object* v_unused_3381_; lean_object* v_unused_3382_; 
v_unused_3380_ = lean_ctor_get(v_b_3178_, 2);
lean_dec(v_unused_3380_);
v_unused_3381_ = lean_ctor_get(v_b_3178_, 1);
lean_dec(v_unused_3381_);
v_unused_3382_ = lean_ctor_get(v_b_3178_, 0);
lean_dec(v_unused_3382_);
v___x_3198_ = v_b_3178_;
v_isShared_3199_ = v_isSharedCheck_3379_;
goto v_resetjp_3197_;
}
else
{
lean_dec(v_b_3178_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3379_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v_a_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3205_; 
v_a_3200_ = lean_array_uget_borrowed(v_as_3175_, v_i_3177_);
v___x_3201_ = lean_array_fget(v_array_3192_, v_start_3193_);
v___x_3202_ = lean_unsigned_to_nat(1u);
v___x_3203_ = lean_nat_add(v_start_3193_, v___x_3202_);
lean_inc(v_stop_3194_);
if (v_isShared_3199_ == 0)
{
lean_ctor_set(v___x_3198_, 1, v___x_3203_);
v___x_3205_ = v___x_3198_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_array_3192_);
lean_ctor_set(v_reuseFailAlloc_3378_, 1, v___x_3203_);
lean_ctor_set(v_reuseFailAlloc_3378_, 2, v_stop_3194_);
v___x_3205_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
lean_object* v___x_3206_; lean_object* v_env_3207_; uint8_t v___x_3208_; 
v___x_3206_ = lean_st_ref_get(v___y_3183_);
v_env_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc_ref(v_env_3207_);
lean_dec(v___x_3206_);
lean_inc(v_a_3200_);
v___x_3208_ = l_Lean_isExtern(v_env_3207_, v_a_3200_);
if (v___x_3208_ == 0)
{
lean_object* v___x_3209_; size_t v_sz_3210_; size_t v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
lean_inc(v_ctors_3168_);
v___x_3209_ = lean_array_mk(v_ctors_3168_);
v_sz_3210_ = lean_array_size(v___x_3209_);
v___x_3211_ = ((size_t)0ULL);
v___x_3212_ = lean_box(v___x_3208_);
v___x_3213_ = lean_box_usize(v_sz_3210_);
v___x_3214_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2___boxed__const__1));
lean_inc(v_a_3200_);
lean_inc_ref(v_params_3167_);
lean_inc(v___x_3201_);
lean_inc_ref(v_compFieldVars_3166_);
lean_inc(v_lparams_3165_);
v___x_3215_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__0___boxed), 17, 11);
lean_closure_set(v___x_3215_, 0, v_lparams_3165_);
lean_closure_set(v___x_3215_, 1, v_compFieldVars_3166_);
lean_closure_set(v___x_3215_, 2, v___x_3201_);
lean_closure_set(v___x_3215_, 3, v_start_3193_);
lean_closure_set(v___x_3215_, 4, v_stop_3194_);
lean_closure_set(v___x_3215_, 5, v_params_3167_);
lean_closure_set(v___x_3215_, 6, v_a_3200_);
lean_closure_set(v___x_3215_, 7, v___x_3212_);
lean_closure_set(v___x_3215_, 8, v___x_3213_);
lean_closure_set(v___x_3215_, 9, v___x_3214_);
lean_closure_set(v___x_3215_, 10, v___x_3209_);
v___x_3216_ = l_Lean_withoutExporting___at___00Lean_Elab_ComputedFields_overrideConstructors_spec__1___redArg(v___x_3215_, v___x_3195_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3216_) == 0)
{
lean_object* v_a_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___x_3235_; 
v_a_3217_ = lean_ctor_get(v___x_3216_, 0);
lean_inc(v_a_3217_);
lean_dec_ref_known(v___x_3216_, 1);
v___x_3218_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_3200_);
v___x_3219_ = l_Lean_Name_append(v_a_3200_, v___x_3218_);
lean_inc(v___y_3183_);
lean_inc_ref(v___y_3182_);
lean_inc(v___y_3181_);
lean_inc_ref(v___y_3180_);
lean_inc(v___x_3201_);
v___x_3235_ = lean_infer_type(v___x_3201_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; uint8_t v___x_3240_; lean_object* v___x_3241_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
lean_dec_ref_known(v___x_3235_, 1);
v___x_3237_ = lean_mk_empty_array_with_capacity(v___x_3202_);
lean_inc_ref(v_val_3169_);
lean_inc_ref(v___x_3237_);
v___x_3238_ = lean_array_push(v___x_3237_, v_val_3169_);
lean_inc_ref(v___x_3170_);
v___x_3239_ = l_Array_append___redArg(v___x_3170_, v___x_3238_);
lean_dec_ref(v___x_3238_);
v___x_3240_ = 1;
v___x_3241_ = l_Lean_Meta_mkForallFVars(v___x_3239_, v_a_3236_, v___x_3208_, v___x_3195_, v___x_3195_, v___x_3240_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3241_) == 0)
{
lean_object* v_a_3242_; lean_object* v___x_3243_; 
v_a_3242_ = lean_ctor_get(v___x_3241_, 0);
lean_inc(v_a_3242_);
lean_dec_ref_known(v___x_3241_, 1);
lean_inc(v___y_3183_);
lean_inc_ref(v___y_3182_);
lean_inc(v___y_3181_);
lean_inc_ref(v___y_3180_);
v___x_3243_ = lean_infer_type(v___x_3201_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v_a_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; 
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3243_, 1);
lean_inc_ref(v_xImpl_3172_);
lean_inc_ref(v_indices_3171_);
v___x_3245_ = lean_array_push(v_indices_3171_, v_xImpl_3172_);
v___x_3246_ = l_Lean_Meta_mkLambdaFVars(v___x_3245_, v_a_3244_, v___x_3208_, v___x_3195_, v___x_3208_, v___x_3195_, v___x_3240_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
lean_dec_ref(v___x_3245_);
if (lean_obj_tag(v___x_3246_) == 0)
{
lean_object* v_a_3247_; lean_object* v___x_3248_; 
v_a_3247_ = lean_ctor_get(v___x_3246_, 0);
lean_inc(v_a_3247_);
lean_dec_ref_known(v___x_3246_, 1);
lean_inc(v___y_3183_);
lean_inc_ref(v___y_3182_);
lean_inc(v___y_3181_);
lean_inc_ref(v___y_3180_);
lean_inc_ref(v_xImpl_3172_);
v___x_3248_ = lean_infer_type(v_xImpl_3172_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3250_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
lean_inc_ref(v_val_3169_);
v___x_3250_ = l_Lean_Elab_ComputedFields_mkUnsafeCastTo(v_a_3249_, v_val_3169_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3250_) == 0)
{
lean_object* v_a_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; size_t v_sz_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; 
v_a_3251_ = lean_ctor_get(v___x_3250_, 0);
lean_inc(v_a_3251_);
lean_dec_ref_known(v___x_3250_, 1);
lean_inc(v___x_3173_);
v___x_3252_ = l_Lean_mkCasesOnName(v___x_3173_);
lean_inc_ref(v___x_3237_);
v___x_3253_ = lean_array_push(v___x_3237_, v_a_3247_);
lean_inc_ref(v_params_3167_);
v___x_3254_ = l_Array_append___redArg(v_params_3167_, v___x_3253_);
lean_dec_ref(v___x_3253_);
v___x_3255_ = l_Array_append___redArg(v___x_3254_, v_indices_3171_);
v___x_3256_ = lean_array_push(v___x_3237_, v_a_3251_);
v___x_3257_ = l_Array_append___redArg(v___x_3255_, v___x_3256_);
lean_dec_ref(v___x_3256_);
v___x_3258_ = l_Array_append___redArg(v___x_3257_, v_a_3217_);
lean_dec(v_a_3217_);
v_sz_3259_ = lean_array_size(v___x_3258_);
v___x_3260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__1(v_sz_3259_, v___x_3211_, v___x_3258_);
v___x_3261_ = l_Lean_Meta_mkAppOptM(v___x_3252_, v___x_3260_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3263_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3261_, 1);
v___x_3263_ = l_Lean_Meta_mkLambdaFVars(v___x_3239_, v_a_3262_, v___x_3208_, v___x_3195_, v___x_3208_, v___x_3195_, v___x_3240_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
lean_dec_ref(v___x_3239_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_a_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; uint8_t v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_a_3264_);
lean_dec_ref_known(v___x_3263_, 1);
lean_inc(v_levelParams_3174_);
lean_inc_n(v___x_3219_, 2);
v___x_3265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3219_);
lean_ctor_set(v___x_3265_, 1, v_levelParams_3174_);
lean_ctor_set(v___x_3265_, 2, v_a_3242_);
v___x_3266_ = lean_box(0);
v___x_3267_ = 0;
v___x_3268_ = lean_box(0);
v___x_3269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3219_);
lean_ctor_set(v___x_3269_, 1, v___x_3268_);
v___x_3270_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3270_, 0, v___x_3265_);
lean_ctor_set(v___x_3270_, 1, v_a_3264_);
lean_ctor_set(v___x_3270_, 2, v___x_3266_);
lean_ctor_set(v___x_3270_, 3, v___x_3269_);
lean_ctor_set_uint8(v___x_3270_, sizeof(void*)*4, v___x_3267_);
v___x_3271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3270_);
v___x_3272_ = l_Lean_addDecl(v___x_3271_, v___x_3208_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v___x_3273_; lean_object* v_env_3274_; lean_object* v___x_3275_; 
lean_dec_ref_known(v___x_3272_, 1);
v___x_3273_ = lean_st_ref_get(v___y_3183_);
v_env_3274_ = lean_ctor_get(v___x_3273_, 0);
lean_inc_ref(v_env_3274_);
lean_dec(v___x_3273_);
lean_inc(v_a_3200_);
v___x_3275_ = l_Lean_Compiler_getInlineAttribute_x3f(v_env_3274_, v_a_3200_);
if (lean_obj_tag(v___x_3275_) == 1)
{
lean_object* v_val_3276_; uint8_t v___x_3277_; lean_object* v___x_3278_; 
v_val_3276_ = lean_ctor_get(v___x_3275_, 0);
lean_inc(v_val_3276_);
lean_dec_ref_known(v___x_3275_, 1);
v___x_3277_ = lean_unbox(v_val_3276_);
lean_dec(v_val_3276_);
lean_inc(v___x_3219_);
v___x_3278_ = l_Lean_Meta_setInlineAttribute(v___x_3219_, v___x_3277_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_dec_ref_known(v___x_3278_, 1);
v___y_3221_ = v___y_3179_;
v___y_3222_ = v___y_3180_;
v___y_3223_ = v___y_3181_;
v___y_3224_ = v___y_3182_;
v___y_3225_ = v___y_3183_;
goto v___jp_3220_;
}
else
{
lean_object* v_a_3279_; lean_object* v___x_3281_; uint8_t v_isShared_3282_; uint8_t v_isSharedCheck_3286_; 
lean_dec(v___x_3219_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3278_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3281_ = v___x_3278_;
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
else
{
lean_inc(v_a_3279_);
lean_dec(v___x_3278_);
v___x_3281_ = lean_box(0);
v_isShared_3282_ = v_isSharedCheck_3286_;
goto v_resetjp_3280_;
}
v_resetjp_3280_:
{
lean_object* v___x_3284_; 
if (v_isShared_3282_ == 0)
{
v___x_3284_ = v___x_3281_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_a_3279_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
}
else
{
lean_dec(v___x_3275_);
v___y_3221_ = v___y_3179_;
v___y_3222_ = v___y_3180_;
v___y_3223_ = v___y_3181_;
v___y_3224_ = v___y_3182_;
v___y_3225_ = v___y_3183_;
goto v___jp_3220_;
}
}
else
{
lean_object* v_a_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3294_; 
lean_dec(v___x_3219_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3287_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3294_ == 0)
{
v___x_3289_ = v___x_3272_;
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_a_3287_);
lean_dec(v___x_3272_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3294_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___x_3292_; 
if (v_isShared_3290_ == 0)
{
v___x_3292_ = v___x_3289_;
goto v_reusejp_3291_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_a_3287_);
v___x_3292_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3291_;
}
v_reusejp_3291_:
{
return v___x_3292_;
}
}
}
}
else
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3302_; 
lean_dec(v_a_3242_);
lean_dec(v___x_3219_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3295_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3302_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3302_ == 0)
{
v___x_3297_ = v___x_3263_;
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___x_3263_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3302_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v___x_3300_; 
if (v_isShared_3298_ == 0)
{
v___x_3300_ = v___x_3297_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v_a_3295_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
return v___x_3300_;
}
}
}
}
else
{
lean_object* v_a_3303_; lean_object* v___x_3305_; uint8_t v_isShared_3306_; uint8_t v_isSharedCheck_3310_; 
lean_dec(v_a_3242_);
lean_dec_ref(v___x_3239_);
lean_dec(v___x_3219_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3303_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3310_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3305_ = v___x_3261_;
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
else
{
lean_inc(v_a_3303_);
lean_dec(v___x_3261_);
v___x_3305_ = lean_box(0);
v_isShared_3306_ = v_isSharedCheck_3310_;
goto v_resetjp_3304_;
}
v_resetjp_3304_:
{
lean_object* v___x_3308_; 
if (v_isShared_3306_ == 0)
{
v___x_3308_ = v___x_3305_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_a_3303_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
else
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3318_; 
lean_dec(v_a_3247_);
lean_dec(v_a_3242_);
lean_dec_ref(v___x_3239_);
lean_dec_ref(v___x_3237_);
lean_dec(v___x_3219_);
lean_dec(v_a_3217_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3311_ = lean_ctor_get(v___x_3250_, 0);
v_isSharedCheck_3318_ = !lean_is_exclusive(v___x_3250_);
if (v_isSharedCheck_3318_ == 0)
{
v___x_3313_ = v___x_3250_;
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v___x_3250_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3318_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3326_; 
lean_dec(v_a_3247_);
lean_dec(v_a_3242_);
lean_dec_ref(v___x_3239_);
lean_dec_ref(v___x_3237_);
lean_dec(v___x_3219_);
lean_dec(v_a_3217_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3319_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3326_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3326_ == 0)
{
v___x_3321_ = v___x_3248_;
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3248_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3326_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
if (v_isShared_3322_ == 0)
{
v___x_3324_ = v___x_3321_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3325_; 
v_reuseFailAlloc_3325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3325_, 0, v_a_3319_);
v___x_3324_ = v_reuseFailAlloc_3325_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
return v___x_3324_;
}
}
}
}
else
{
lean_object* v_a_3327_; lean_object* v___x_3329_; uint8_t v_isShared_3330_; uint8_t v_isSharedCheck_3334_; 
lean_dec(v_a_3242_);
lean_dec_ref(v___x_3239_);
lean_dec_ref(v___x_3237_);
lean_dec(v___x_3219_);
lean_dec(v_a_3217_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3327_ = lean_ctor_get(v___x_3246_, 0);
v_isSharedCheck_3334_ = !lean_is_exclusive(v___x_3246_);
if (v_isSharedCheck_3334_ == 0)
{
v___x_3329_ = v___x_3246_;
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
else
{
lean_inc(v_a_3327_);
lean_dec(v___x_3246_);
v___x_3329_ = lean_box(0);
v_isShared_3330_ = v_isSharedCheck_3334_;
goto v_resetjp_3328_;
}
v_resetjp_3328_:
{
lean_object* v___x_3332_; 
if (v_isShared_3330_ == 0)
{
v___x_3332_ = v___x_3329_;
goto v_reusejp_3331_;
}
else
{
lean_object* v_reuseFailAlloc_3333_; 
v_reuseFailAlloc_3333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3333_, 0, v_a_3327_);
v___x_3332_ = v_reuseFailAlloc_3333_;
goto v_reusejp_3331_;
}
v_reusejp_3331_:
{
return v___x_3332_;
}
}
}
}
else
{
lean_object* v_a_3335_; lean_object* v___x_3337_; uint8_t v_isShared_3338_; uint8_t v_isSharedCheck_3342_; 
lean_dec(v_a_3242_);
lean_dec_ref(v___x_3239_);
lean_dec_ref(v___x_3237_);
lean_dec(v___x_3219_);
lean_dec(v_a_3217_);
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3335_ = lean_ctor_get(v___x_3243_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3243_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3337_ = v___x_3243_;
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
else
{
lean_inc(v_a_3335_);
lean_dec(v___x_3243_);
v___x_3337_ = lean_box(0);
v_isShared_3338_ = v_isSharedCheck_3342_;
goto v_resetjp_3336_;
}
v_resetjp_3336_:
{
lean_object* v___x_3340_; 
if (v_isShared_3338_ == 0)
{
v___x_3340_ = v___x_3337_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_a_3335_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
}
else
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
lean_dec_ref(v___x_3239_);
lean_dec_ref(v___x_3237_);
lean_dec(v___x_3219_);
lean_dec(v_a_3217_);
lean_dec_ref(v___x_3205_);
lean_dec(v___x_3201_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3343_ = lean_ctor_get(v___x_3241_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3241_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___x_3241_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3241_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
}
else
{
lean_object* v_a_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3358_; 
lean_dec(v___x_3219_);
lean_dec(v_a_3217_);
lean_dec_ref(v___x_3205_);
lean_dec(v___x_3201_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3351_ = lean_ctor_get(v___x_3235_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3353_ = v___x_3235_;
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_a_3351_);
lean_dec(v___x_3235_);
v___x_3353_ = lean_box(0);
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
v_resetjp_3352_:
{
lean_object* v___x_3356_; 
if (v_isShared_3354_ == 0)
{
v___x_3356_ = v___x_3353_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3357_; 
v_reuseFailAlloc_3357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3357_, 0, v_a_3351_);
v___x_3356_ = v_reuseFailAlloc_3357_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
return v___x_3356_;
}
}
}
v___jp_3220_:
{
lean_object* v___x_3226_; 
lean_inc(v_a_3200_);
v___x_3226_ = l_Lean_setImplementedBy___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__6(v_a_3200_, v___x_3219_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___y_3225_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_dec_ref_known(v___x_3226_, 1);
v_a_3186_ = v___x_3205_;
goto v___jp_3185_;
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3227_ = lean_ctor_get(v___x_3226_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3226_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3226_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3226_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec_ref(v___x_3205_);
lean_dec(v___x_3201_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3359_ = lean_ctor_get(v___x_3216_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3216_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3216_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3216_);
v___x_3361_ = lean_box(0);
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
v_resetjp_3360_:
{
lean_object* v___x_3364_; 
if (v_isShared_3362_ == 0)
{
v___x_3364_ = v___x_3361_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v_a_3359_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
}
}
else
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
lean_dec(v___x_3201_);
lean_dec(v_stop_3194_);
lean_dec(v_start_3193_);
v___x_3367_ = lean_mk_empty_array_with_capacity(v___x_3202_);
lean_inc(v_a_3200_);
v___x_3368_ = lean_array_push(v___x_3367_, v_a_3200_);
v___x_3369_ = l_Lean_compileDecls(v___x_3368_, v___x_3195_, v___y_3182_, v___y_3183_);
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_dec_ref_known(v___x_3369_, 1);
v_a_3186_ = v___x_3205_;
goto v___jp_3185_;
}
else
{
lean_object* v_a_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3377_; 
lean_dec_ref(v___x_3205_);
lean_dec(v_levelParams_3174_);
lean_dec(v___x_3173_);
lean_dec_ref(v_xImpl_3172_);
lean_dec_ref(v_indices_3171_);
lean_dec_ref(v___x_3170_);
lean_dec_ref(v_val_3169_);
lean_dec(v_ctors_3168_);
lean_dec_ref(v_params_3167_);
lean_dec_ref(v_compFieldVars_3166_);
lean_dec(v_lparams_3165_);
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
v_isSharedCheck_3377_ = !lean_is_exclusive(v___x_3369_);
if (v_isSharedCheck_3377_ == 0)
{
v___x_3372_ = v___x_3369_;
v_isShared_3373_ = v_isSharedCheck_3377_;
goto v_resetjp_3371_;
}
else
{
lean_inc(v_a_3370_);
lean_dec(v___x_3369_);
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
}
}
}
}
v___jp_3185_:
{
size_t v___x_3187_; size_t v___x_3188_; lean_object* v___x_3189_; 
v___x_3187_ = ((size_t)1ULL);
v___x_3188_ = lean_usize_add(v_i_3177_, v___x_3187_);
v___x_3189_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2_spec__2(v_ctors_3168_, v_lparams_3165_, v_compFieldVars_3166_, v_params_3167_, v_val_3169_, v___x_3170_, v_indices_3171_, v_xImpl_3172_, v___x_3173_, v_levelParams_3174_, v_as_3175_, v_sz_3176_, v___x_3188_, v_a_3186_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
return v___x_3189_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2___boxed(lean_object** _args){
lean_object* v_lparams_3383_ = _args[0];
lean_object* v_compFieldVars_3384_ = _args[1];
lean_object* v_params_3385_ = _args[2];
lean_object* v_ctors_3386_ = _args[3];
lean_object* v_val_3387_ = _args[4];
lean_object* v___x_3388_ = _args[5];
lean_object* v_indices_3389_ = _args[6];
lean_object* v_xImpl_3390_ = _args[7];
lean_object* v___x_3391_ = _args[8];
lean_object* v_levelParams_3392_ = _args[9];
lean_object* v_as_3393_ = _args[10];
lean_object* v_sz_3394_ = _args[11];
lean_object* v_i_3395_ = _args[12];
lean_object* v_b_3396_ = _args[13];
lean_object* v___y_3397_ = _args[14];
lean_object* v___y_3398_ = _args[15];
lean_object* v___y_3399_ = _args[16];
lean_object* v___y_3400_ = _args[17];
lean_object* v___y_3401_ = _args[18];
lean_object* v___y_3402_ = _args[19];
_start:
{
size_t v_sz_boxed_3403_; size_t v_i_boxed_3404_; lean_object* v_res_3405_; 
v_sz_boxed_3403_ = lean_unbox_usize(v_sz_3394_);
lean_dec(v_sz_3394_);
v_i_boxed_3404_ = lean_unbox_usize(v_i_3395_);
lean_dec(v_i_3395_);
v_res_3405_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3383_, v_compFieldVars_3384_, v_params_3385_, v_ctors_3386_, v_val_3387_, v___x_3388_, v_indices_3389_, v_xImpl_3390_, v___x_3391_, v_levelParams_3392_, v_as_3393_, v_sz_boxed_3403_, v_i_boxed_3404_, v_b_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec_ref(v_as_3393_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(lean_object* v_compFieldVars_3406_, lean_object* v_compFields_3407_, lean_object* v_lparams_3408_, lean_object* v_params_3409_, lean_object* v_ctors_3410_, lean_object* v_val_3411_, lean_object* v___x_3412_, lean_object* v_indices_3413_, lean_object* v___x_3414_, lean_object* v_levelParams_3415_, lean_object* v_xImpl_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_){
_start:
{
lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; size_t v_sz_3426_; size_t v___x_3427_; lean_object* v___x_3428_; 
v___x_3423_ = lean_unsigned_to_nat(0u);
v___x_3424_ = lean_array_get_size(v_compFieldVars_3406_);
lean_inc_ref(v_compFieldVars_3406_);
v___x_3425_ = l_Array_toSubarray___redArg(v_compFieldVars_3406_, v___x_3423_, v___x_3424_);
v_sz_3426_ = lean_array_size(v_compFields_3407_);
v___x_3427_ = ((size_t)0ULL);
v___x_3428_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_overrideComputedFields_spec__2(v_lparams_3408_, v_compFieldVars_3406_, v_params_3409_, v_ctors_3410_, v_val_3411_, v___x_3412_, v_indices_3413_, v_xImpl_3416_, v___x_3414_, v_levelParams_3415_, v_compFields_3407_, v_sz_3426_, v___x_3427_, v___x_3425_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_);
if (lean_obj_tag(v___x_3428_) == 0)
{
lean_object* v___x_3430_; uint8_t v_isShared_3431_; uint8_t v_isSharedCheck_3436_; 
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3436_ == 0)
{
lean_object* v_unused_3437_; 
v_unused_3437_ = lean_ctor_get(v___x_3428_, 0);
lean_dec(v_unused_3437_);
v___x_3430_ = v___x_3428_;
v_isShared_3431_ = v_isSharedCheck_3436_;
goto v_resetjp_3429_;
}
else
{
lean_dec(v___x_3428_);
v___x_3430_ = lean_box(0);
v_isShared_3431_ = v_isSharedCheck_3436_;
goto v_resetjp_3429_;
}
v_resetjp_3429_:
{
lean_object* v___x_3432_; lean_object* v___x_3434_; 
v___x_3432_ = lean_box(0);
if (v_isShared_3431_ == 0)
{
lean_ctor_set(v___x_3430_, 0, v___x_3432_);
v___x_3434_ = v___x_3430_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v___x_3432_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
else
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
v_a_3438_ = lean_ctor_get(v___x_3428_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3428_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v___x_3428_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3428_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_a_3438_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed(lean_object** _args){
lean_object* v_compFieldVars_3446_ = _args[0];
lean_object* v_compFields_3447_ = _args[1];
lean_object* v_lparams_3448_ = _args[2];
lean_object* v_params_3449_ = _args[3];
lean_object* v_ctors_3450_ = _args[4];
lean_object* v_val_3451_ = _args[5];
lean_object* v___x_3452_ = _args[6];
lean_object* v_indices_3453_ = _args[7];
lean_object* v___x_3454_ = _args[8];
lean_object* v_levelParams_3455_ = _args[9];
lean_object* v_xImpl_3456_ = _args[10];
lean_object* v___y_3457_ = _args[11];
lean_object* v___y_3458_ = _args[12];
lean_object* v___y_3459_ = _args[13];
lean_object* v___y_3460_ = _args[14];
lean_object* v___y_3461_ = _args[15];
lean_object* v___y_3462_ = _args[16];
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0(v_compFieldVars_3446_, v_compFields_3447_, v_lparams_3448_, v_params_3449_, v_ctors_3450_, v_val_3451_, v___x_3452_, v_indices_3453_, v___x_3454_, v_levelParams_3455_, v_xImpl_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec_ref(v___y_3457_);
lean_dec_ref(v_compFields_3447_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields(lean_object* v_a_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v_toInductiveVal_3473_; lean_object* v_toConstantVal_3474_; lean_object* v_lparams_3475_; lean_object* v_params_3476_; lean_object* v_compFields_3477_; lean_object* v_compFieldVars_3478_; lean_object* v_indices_3479_; lean_object* v_val_3480_; lean_object* v_ctors_3481_; lean_object* v_name_3482_; lean_object* v_levelParams_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___f_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v_toInductiveVal_3473_ = lean_ctor_get(v_a_3467_, 0);
v_toConstantVal_3474_ = lean_ctor_get(v_toInductiveVal_3473_, 0);
v_lparams_3475_ = lean_ctor_get(v_a_3467_, 1);
v_params_3476_ = lean_ctor_get(v_a_3467_, 2);
v_compFields_3477_ = lean_ctor_get(v_a_3467_, 3);
v_compFieldVars_3478_ = lean_ctor_get(v_a_3467_, 4);
v_indices_3479_ = lean_ctor_get(v_a_3467_, 5);
v_val_3480_ = lean_ctor_get(v_a_3467_, 6);
v_ctors_3481_ = lean_ctor_get(v_toInductiveVal_3473_, 4);
v_name_3482_ = lean_ctor_get(v_toConstantVal_3474_, 0);
v_levelParams_3483_ = lean_ctor_get(v_toConstantVal_3474_, 1);
v___x_3484_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_3485_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___closed__1));
lean_inc(v_name_3482_);
v___x_3486_ = l_Lean_Name_append(v_name_3482_, v___x_3485_);
lean_inc_n(v_lparams_3475_, 2);
lean_inc(v___x_3486_);
v___x_3487_ = l_Lean_mkConst(v___x_3486_, v_lparams_3475_);
lean_inc_ref_n(v_params_3476_, 2);
v___x_3488_ = l_Array_append___redArg(v_params_3476_, v_indices_3479_);
lean_inc(v_levelParams_3483_);
lean_inc_ref(v_indices_3479_);
lean_inc_ref(v___x_3488_);
lean_inc_ref(v_val_3480_);
lean_inc(v_ctors_3481_);
lean_inc_ref(v_compFields_3477_);
lean_inc_ref(v_compFieldVars_3478_);
v___f_3489_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_overrideComputedFields___lam__0___boxed), 17, 10);
lean_closure_set(v___f_3489_, 0, v_compFieldVars_3478_);
lean_closure_set(v___f_3489_, 1, v_compFields_3477_);
lean_closure_set(v___f_3489_, 2, v_lparams_3475_);
lean_closure_set(v___f_3489_, 3, v_params_3476_);
lean_closure_set(v___f_3489_, 4, v_ctors_3481_);
lean_closure_set(v___f_3489_, 5, v_val_3480_);
lean_closure_set(v___f_3489_, 6, v___x_3488_);
lean_closure_set(v___f_3489_, 7, v_indices_3479_);
lean_closure_set(v___f_3489_, 8, v___x_3486_);
lean_closure_set(v___f_3489_, 9, v_levelParams_3483_);
v___x_3490_ = l_Lean_mkAppN(v___x_3487_, v___x_3488_);
lean_dec_ref(v___x_3488_);
v___x_3491_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__3___redArg(v___x_3484_, v___x_3490_, v___f_3489_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_overrideComputedFields___boxed(lean_object* v_a_3492_, lean_object* v_a_3493_, lean_object* v_a_3494_, lean_object* v_a_3495_, lean_object* v_a_3496_, lean_object* v_a_3497_){
_start:
{
lean_object* v_res_3498_; 
v_res_3498_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v_a_3492_, v_a_3493_, v_a_3494_, v_a_3495_, v_a_3496_);
lean_dec(v_a_3496_);
lean_dec_ref(v_a_3495_);
lean_dec(v_a_3494_);
lean_dec_ref(v_a_3493_);
lean_dec_ref(v_a_3492_);
return v_res_3498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(lean_object* v_k_3499_, lean_object* v_b_3500_, lean_object* v_c_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_){
_start:
{
lean_object* v___x_3507_; 
lean_inc(v___y_3505_);
lean_inc_ref(v___y_3504_);
lean_inc(v___y_3503_);
lean_inc_ref(v___y_3502_);
v___x_3507_ = lean_apply_7(v_k_3499_, v_b_3500_, v_c_3501_, v___y_3502_, v___y_3503_, v___y_3504_, v___y_3505_, lean_box(0));
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed(lean_object* v_k_3508_, lean_object* v_b_3509_, lean_object* v_c_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_){
_start:
{
lean_object* v_res_3516_; 
v_res_3516_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0(v_k_3508_, v_b_3509_, v_c_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec_ref(v___y_3511_);
return v_res_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(lean_object* v_type_3517_, lean_object* v_k_3518_, uint8_t v_cleanupAnnotations_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_){
_start:
{
lean_object* v___f_3525_; uint8_t v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___f_3525_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3525_, 0, v_k_3518_);
v___x_3526_ = 0;
v___x_3527_ = lean_box(0);
v___x_3528_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_3526_, v___x_3527_, v_type_3517_, v___f_3525_, v_cleanupAnnotations_3519_, v___x_3526_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3528_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3528_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
else
{
lean_object* v_a_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3544_; 
v_a_3537_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3539_ = v___x_3528_;
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_a_3537_);
lean_dec(v___x_3528_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3544_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3542_; 
if (v_isShared_3540_ == 0)
{
v___x_3542_ = v___x_3539_;
goto v_reusejp_3541_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3537_);
v___x_3542_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3541_;
}
v_reusejp_3541_:
{
return v___x_3542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg___boxed(lean_object* v_type_3545_, lean_object* v_k_3546_, lean_object* v_cleanupAnnotations_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3553_; lean_object* v_res_3554_; 
v_cleanupAnnotations_boxed_3553_ = lean_unbox(v_cleanupAnnotations_3547_);
v_res_3554_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3545_, v_k_3546_, v_cleanupAnnotations_boxed_3553_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_);
lean_dec(v___y_3551_);
lean_dec_ref(v___y_3550_);
lean_dec(v___y_3549_);
lean_dec_ref(v___y_3548_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(lean_object* v_00_u03b1_3555_, lean_object* v_type_3556_, lean_object* v_k_3557_, uint8_t v_cleanupAnnotations_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_){
_start:
{
lean_object* v___x_3564_; 
v___x_3564_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_3556_, v_k_3557_, v_cleanupAnnotations_3558_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___boxed(lean_object* v_00_u03b1_3565_, lean_object* v_type_3566_, lean_object* v_k_3567_, lean_object* v_cleanupAnnotations_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3574_; lean_object* v_res_3575_; 
v_cleanupAnnotations_boxed_3574_ = lean_unbox(v_cleanupAnnotations_3568_);
v_res_3575_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3(v_00_u03b1_3565_, v_type_3566_, v_k_3567_, v_cleanupAnnotations_boxed_3574_, v___y_3569_, v___y_3570_, v___y_3571_, v___y_3572_);
lean_dec(v___y_3572_);
lean_dec_ref(v___y_3571_);
lean_dec(v___y_3570_);
lean_dec_ref(v___y_3569_);
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(lean_object* v_a_3576_, lean_object* v___x_3577_, lean_object* v___x_3578_, lean_object* v_compFields_3579_, lean_object* v___x_3580_, lean_object* v_val_3581_, lean_object* v_compFieldVars_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_){
_start:
{
lean_object* v___x_3588_; lean_object* v___x_3589_; 
v___x_3588_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3588_, 0, v_a_3576_);
lean_ctor_set(v___x_3588_, 1, v___x_3577_);
lean_ctor_set(v___x_3588_, 2, v___x_3578_);
lean_ctor_set(v___x_3588_, 3, v_compFields_3579_);
lean_ctor_set(v___x_3588_, 4, v_compFieldVars_3582_);
lean_ctor_set(v___x_3588_, 5, v___x_3580_);
lean_ctor_set(v___x_3588_, 6, v_val_3581_);
v___x_3589_ = l_Lean_Elab_ComputedFields_validateComputedFields(v___x_3588_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v___x_3590_; 
lean_dec_ref_known(v___x_3589_, 1);
v___x_3590_ = l_Lean_Elab_ComputedFields_mkImplType(v___x_3588_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
if (lean_obj_tag(v___x_3590_) == 0)
{
lean_object* v_a_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; uint8_t v___x_3595_; lean_object* v___x_3596_; 
v_a_3591_ = lean_ctor_get(v___x_3590_, 0);
lean_inc(v_a_3591_);
lean_dec_ref_known(v___x_3590_, 1);
v___x_3592_ = lean_unsigned_to_nat(1u);
v___x_3593_ = lean_mk_empty_array_with_capacity(v___x_3592_);
v___x_3594_ = lean_array_push(v___x_3593_, v_a_3591_);
v___x_3595_ = 1;
v___x_3596_ = l_Lean_compileDecls(v___x_3594_, v___x_3595_, v___y_3585_, v___y_3586_);
if (lean_obj_tag(v___x_3596_) == 0)
{
lean_object* v___x_3597_; 
lean_dec_ref_known(v___x_3596_, 1);
v___x_3597_ = l_Lean_Elab_ComputedFields_overrideCasesOn(v___x_3588_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
if (lean_obj_tag(v___x_3597_) == 0)
{
lean_object* v___x_3598_; 
lean_dec_ref_known(v___x_3597_, 1);
v___x_3598_ = l_Lean_Elab_ComputedFields_overrideConstructors(v___x_3588_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_object* v___x_3599_; 
lean_dec_ref_known(v___x_3598_, 1);
v___x_3599_ = l_Lean_Elab_ComputedFields_overrideComputedFields(v___x_3588_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
lean_dec_ref_known(v___x_3588_, 7);
return v___x_3599_;
}
else
{
lean_dec_ref_known(v___x_3588_, 7);
return v___x_3598_;
}
}
else
{
lean_dec_ref_known(v___x_3588_, 7);
return v___x_3597_;
}
}
else
{
lean_dec_ref_known(v___x_3588_, 7);
return v___x_3596_;
}
}
else
{
lean_object* v_a_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3607_; 
lean_dec_ref_known(v___x_3588_, 7);
v_a_3600_ = lean_ctor_get(v___x_3590_, 0);
v_isSharedCheck_3607_ = !lean_is_exclusive(v___x_3590_);
if (v_isSharedCheck_3607_ == 0)
{
v___x_3602_ = v___x_3590_;
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_a_3600_);
lean_dec(v___x_3590_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3607_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3605_; 
if (v_isShared_3603_ == 0)
{
v___x_3605_ = v___x_3602_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v_a_3600_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_3588_, 7);
return v___x_3589_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed(lean_object* v_a_3608_, lean_object* v___x_3609_, lean_object* v___x_3610_, lean_object* v_compFields_3611_, lean_object* v___x_3612_, lean_object* v_val_3613_, lean_object* v_compFieldVars_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0(v_a_3608_, v___x_3609_, v___x_3610_, v_compFields_3611_, v___x_3612_, v_val_3613_, v_compFieldVars_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(lean_object* v___x_3621_, lean_object* v___x_3622_, lean_object* v_val_3623_, lean_object* v_v_3624_, lean_object* v_x_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3631_ = l_Array_append___redArg(v___x_3621_, v___x_3622_);
v___x_3632_ = lean_unsigned_to_nat(1u);
v___x_3633_ = lean_mk_empty_array_with_capacity(v___x_3632_);
v___x_3634_ = lean_array_push(v___x_3633_, v_val_3623_);
v___x_3635_ = l_Array_append___redArg(v___x_3631_, v___x_3634_);
lean_dec_ref(v___x_3634_);
v___x_3636_ = l_Lean_Meta_mkAppM(v_v_3624_, v___x_3635_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
lean_inc(v___y_3629_);
lean_inc_ref(v___y_3628_);
lean_inc(v___y_3627_);
lean_inc_ref(v___y_3626_);
v___x_3638_ = lean_infer_type(v_a_3637_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
return v___x_3638_;
}
else
{
return v___x_3636_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed(lean_object* v___x_3639_, lean_object* v___x_3640_, lean_object* v_val_3641_, lean_object* v_v_3642_, lean_object* v_x_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
lean_object* v_res_3649_; 
v_res_3649_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0(v___x_3639_, v___x_3640_, v_val_3641_, v_v_3642_, v_x_3643_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec_ref(v_x_3643_);
lean_dec_ref(v___x_3640_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(lean_object* v___x_3650_, lean_object* v___x_3651_, lean_object* v_val_3652_, size_t v_sz_3653_, size_t v_i_3654_, lean_object* v_bs_3655_){
_start:
{
uint8_t v___x_3656_; 
v___x_3656_ = lean_usize_dec_lt(v_i_3654_, v_sz_3653_);
if (v___x_3656_ == 0)
{
lean_dec_ref(v_val_3652_);
lean_dec_ref(v___x_3651_);
lean_dec_ref(v___x_3650_);
return v_bs_3655_;
}
else
{
lean_object* v_v_3657_; lean_object* v___f_3658_; lean_object* v___x_3659_; lean_object* v_bs_x27_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; size_t v___x_3664_; size_t v___x_3665_; lean_object* v___x_3666_; 
v_v_3657_ = lean_array_uget(v_bs_3655_, v_i_3654_);
lean_inc(v_v_3657_);
lean_inc_ref(v_val_3652_);
lean_inc_ref(v___x_3651_);
lean_inc_ref(v___x_3650_);
v___f_3658_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3658_, 0, v___x_3650_);
lean_closure_set(v___f_3658_, 1, v___x_3651_);
lean_closure_set(v___f_3658_, 2, v_val_3652_);
lean_closure_set(v___f_3658_, 3, v_v_3657_);
v___x_3659_ = lean_unsigned_to_nat(0u);
v_bs_x27_3660_ = lean_array_uset(v_bs_3655_, v_i_3654_, v___x_3659_);
v___x_3661_ = lean_box(0);
v___x_3662_ = l_Lean_Name_updatePrefix(v_v_3657_, v___x_3661_);
v___x_3663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3662_);
lean_ctor_set(v___x_3663_, 1, v___f_3658_);
v___x_3664_ = ((size_t)1ULL);
v___x_3665_ = lean_usize_add(v_i_3654_, v___x_3664_);
v___x_3666_ = lean_array_uset(v_bs_x27_3660_, v_i_3654_, v___x_3663_);
v_i_3654_ = v___x_3665_;
v_bs_3655_ = v___x_3666_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0___boxed(lean_object* v___x_3668_, lean_object* v___x_3669_, lean_object* v_val_3670_, lean_object* v_sz_3671_, lean_object* v_i_3672_, lean_object* v_bs_3673_){
_start:
{
size_t v_sz_boxed_3674_; size_t v_i_boxed_3675_; lean_object* v_res_3676_; 
v_sz_boxed_3674_ = lean_unbox_usize(v_sz_3671_);
lean_dec(v_sz_3671_);
v_i_boxed_3675_ = lean_unbox_usize(v_i_3672_);
lean_dec(v_i_3672_);
v_res_3676_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_3668_, v___x_3669_, v_val_3670_, v_sz_boxed_3674_, v_i_boxed_3675_, v_bs_3673_);
return v_res_3676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(size_t v_sz_3677_, size_t v_i_3678_, lean_object* v_bs_3679_){
_start:
{
uint8_t v___x_3680_; 
v___x_3680_ = lean_usize_dec_lt(v_i_3678_, v_sz_3677_);
if (v___x_3680_ == 0)
{
return v_bs_3679_;
}
else
{
lean_object* v_v_3681_; lean_object* v_fst_3682_; lean_object* v_snd_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3699_; 
v_v_3681_ = lean_array_uget(v_bs_3679_, v_i_3678_);
v_fst_3682_ = lean_ctor_get(v_v_3681_, 0);
v_snd_3683_ = lean_ctor_get(v_v_3681_, 1);
v_isSharedCheck_3699_ = !lean_is_exclusive(v_v_3681_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3685_ = v_v_3681_;
v_isShared_3686_ = v_isSharedCheck_3699_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_snd_3683_);
lean_inc(v_fst_3682_);
lean_dec(v_v_3681_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3699_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3687_; lean_object* v_bs_x27_3688_; uint8_t v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3692_; 
v___x_3687_ = lean_unsigned_to_nat(0u);
v_bs_x27_3688_ = lean_array_uset(v_bs_3679_, v_i_3678_, v___x_3687_);
v___x_3689_ = 0;
v___x_3690_ = lean_box(v___x_3689_);
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 0, v___x_3690_);
v___x_3692_ = v___x_3685_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v___x_3690_);
lean_ctor_set(v_reuseFailAlloc_3698_, 1, v_snd_3683_);
v___x_3692_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
lean_object* v___x_3693_; size_t v___x_3694_; size_t v___x_3695_; lean_object* v___x_3696_; 
v___x_3693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3693_, 0, v_fst_3682_);
lean_ctor_set(v___x_3693_, 1, v___x_3692_);
v___x_3694_ = ((size_t)1ULL);
v___x_3695_ = lean_usize_add(v_i_3678_, v___x_3694_);
v___x_3696_ = lean_array_uset(v_bs_x27_3688_, v_i_3678_, v___x_3693_);
v_i_3678_ = v___x_3695_;
v_bs_3679_ = v___x_3696_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1___boxed(lean_object* v_sz_3700_, lean_object* v_i_3701_, lean_object* v_bs_3702_){
_start:
{
size_t v_sz_boxed_3703_; size_t v_i_boxed_3704_; lean_object* v_res_3705_; 
v_sz_boxed_3703_ = lean_unbox_usize(v_sz_3700_);
lean_dec(v_sz_3700_);
v_i_boxed_3704_ = lean_unbox_usize(v_i_3701_);
lean_dec(v_i_3701_);
v_res_3705_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_boxed_3703_, v_i_boxed_3704_, v_bs_3702_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(lean_object* v___x_3706_, lean_object* v___x_3707_, lean_object* v_a_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
lean_object* v___x_3368__overap_3714_; lean_object* v___x_3715_; 
v___x_3368__overap_3714_ = l_instInhabitedOfMonad___redArg(v___x_3706_, v___x_3707_);
lean_inc(v___y_3712_);
lean_inc_ref(v___y_3711_);
lean_inc(v___y_3710_);
lean_inc_ref(v___y_3709_);
v___x_3715_ = lean_apply_5(v___x_3368__overap_3714_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_, lean_box(0));
return v___x_3715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed(lean_object* v___x_3716_, lean_object* v___x_3717_, lean_object* v_a_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_){
_start:
{
lean_object* v_res_3724_; 
v_res_3724_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0(v___x_3716_, v___x_3717_, v_a_3718_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_);
lean_dec(v___y_3722_);
lean_dec_ref(v___y_3721_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v_a_3718_);
return v_res_3724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed(lean_object* v_acc_3725_, lean_object* v_declInfos_3726_, lean_object* v_k_3727_, lean_object* v_kind_3728_, lean_object* v_b_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_){
_start:
{
uint8_t v_kind_boxed_3735_; lean_object* v_res_3736_; 
v_kind_boxed_3735_ = lean_unbox(v_kind_3728_);
v_res_3736_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(v_acc_3725_, v_declInfos_3726_, v_k_3727_, v_kind_boxed_3735_, v_b_3729_, v___y_3730_, v___y_3731_, v___y_3732_, v___y_3733_);
lean_dec(v___y_3733_);
lean_dec_ref(v___y_3732_);
lean_dec(v___y_3731_);
lean_dec_ref(v___y_3730_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(lean_object* v_acc_3737_, lean_object* v_declInfos_3738_, lean_object* v_k_3739_, uint8_t v_kind_3740_, lean_object* v_name_3741_, uint8_t v_bi_3742_, lean_object* v_type_3743_, uint8_t v_kind_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
lean_object* v___x_3750_; lean_object* v___f_3751_; lean_object* v___x_3752_; 
v___x_3750_ = lean_box(v_kind_3740_);
v___f_3751_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3751_, 0, v_acc_3737_);
lean_closure_set(v___f_3751_, 1, v_declInfos_3738_);
lean_closure_set(v___f_3751_, 2, v_k_3739_);
lean_closure_set(v___f_3751_, 3, v___x_3750_);
v___x_3752_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3741_, v_bi_3742_, v_type_3743_, v___f_3751_, v_kind_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; lean_object* v___x_3755_; uint8_t v_isShared_3756_; uint8_t v_isSharedCheck_3760_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3760_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3760_ == 0)
{
v___x_3755_ = v___x_3752_;
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
else
{
lean_inc(v_a_3753_);
lean_dec(v___x_3752_);
v___x_3755_ = lean_box(0);
v_isShared_3756_ = v_isSharedCheck_3760_;
goto v_resetjp_3754_;
}
v_resetjp_3754_:
{
lean_object* v___x_3758_; 
if (v_isShared_3756_ == 0)
{
v___x_3758_ = v___x_3755_;
goto v_reusejp_3757_;
}
else
{
lean_object* v_reuseFailAlloc_3759_; 
v_reuseFailAlloc_3759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3759_, 0, v_a_3753_);
v___x_3758_ = v_reuseFailAlloc_3759_;
goto v_reusejp_3757_;
}
v_reusejp_3757_:
{
return v___x_3758_;
}
}
}
else
{
lean_object* v_a_3761_; lean_object* v___x_3763_; uint8_t v_isShared_3764_; uint8_t v_isSharedCheck_3768_; 
v_a_3761_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3768_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3768_ == 0)
{
v___x_3763_ = v___x_3752_;
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
else
{
lean_inc(v_a_3761_);
lean_dec(v___x_3752_);
v___x_3763_ = lean_box(0);
v_isShared_3764_ = v_isSharedCheck_3768_;
goto v_resetjp_3762_;
}
v_resetjp_3762_:
{
lean_object* v___x_3766_; 
if (v_isShared_3764_ == 0)
{
v___x_3766_ = v___x_3763_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3767_; 
v_reuseFailAlloc_3767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3767_, 0, v_a_3761_);
v___x_3766_ = v_reuseFailAlloc_3767_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
return v___x_3766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(lean_object* v_declInfos_3769_, lean_object* v_k_3770_, uint8_t v_kind_3771_, lean_object* v_acc_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_){
_start:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v_toApplicative_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3866_; 
v___x_3778_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__0);
v___x_3779_ = l_StateRefT_x27_instMonad___redArg(v___x_3778_);
v_toApplicative_3780_ = lean_ctor_get(v___x_3779_, 0);
v_isSharedCheck_3866_ = !lean_is_exclusive(v___x_3779_);
if (v_isSharedCheck_3866_ == 0)
{
lean_object* v_unused_3867_; 
v_unused_3867_ = lean_ctor_get(v___x_3779_, 1);
lean_dec(v_unused_3867_);
v___x_3782_ = v___x_3779_;
v_isShared_3783_ = v_isSharedCheck_3866_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_toApplicative_3780_);
lean_dec(v___x_3779_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3866_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v_toFunctor_3784_; lean_object* v_toSeq_3785_; lean_object* v_toSeqLeft_3786_; lean_object* v_toSeqRight_3787_; lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3864_; 
v_toFunctor_3784_ = lean_ctor_get(v_toApplicative_3780_, 0);
v_toSeq_3785_ = lean_ctor_get(v_toApplicative_3780_, 2);
v_toSeqLeft_3786_ = lean_ctor_get(v_toApplicative_3780_, 3);
v_toSeqRight_3787_ = lean_ctor_get(v_toApplicative_3780_, 4);
v_isSharedCheck_3864_ = !lean_is_exclusive(v_toApplicative_3780_);
if (v_isSharedCheck_3864_ == 0)
{
lean_object* v_unused_3865_; 
v_unused_3865_ = lean_ctor_get(v_toApplicative_3780_, 1);
lean_dec(v_unused_3865_);
v___x_3789_ = v_toApplicative_3780_;
v_isShared_3790_ = v_isSharedCheck_3864_;
goto v_resetjp_3788_;
}
else
{
lean_inc(v_toSeqRight_3787_);
lean_inc(v_toSeqLeft_3786_);
lean_inc(v_toSeq_3785_);
lean_inc(v_toFunctor_3784_);
lean_dec(v_toApplicative_3780_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3864_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___f_3791_; lean_object* v___f_3792_; lean_object* v___f_3793_; lean_object* v___f_3794_; lean_object* v___x_3795_; lean_object* v___f_3796_; lean_object* v___f_3797_; lean_object* v___f_3798_; lean_object* v___x_3800_; 
v___f_3791_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__1));
v___f_3792_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_isScalarField_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_3784_);
v___f_3793_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3793_, 0, v_toFunctor_3784_);
v___f_3794_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3794_, 0, v_toFunctor_3784_);
v___x_3795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___f_3793_);
lean_ctor_set(v___x_3795_, 1, v___f_3794_);
v___f_3796_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3796_, 0, v_toSeqRight_3787_);
v___f_3797_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3797_, 0, v_toSeqLeft_3786_);
v___f_3798_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3798_, 0, v_toSeq_3785_);
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 4, v___f_3796_);
lean_ctor_set(v___x_3789_, 3, v___f_3797_);
lean_ctor_set(v___x_3789_, 2, v___f_3798_);
lean_ctor_set(v___x_3789_, 1, v___f_3791_);
lean_ctor_set(v___x_3789_, 0, v___x_3795_);
v___x_3800_ = v___x_3789_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3795_);
lean_ctor_set(v_reuseFailAlloc_3863_, 1, v___f_3791_);
lean_ctor_set(v_reuseFailAlloc_3863_, 2, v___f_3798_);
lean_ctor_set(v_reuseFailAlloc_3863_, 3, v___f_3797_);
lean_ctor_set(v_reuseFailAlloc_3863_, 4, v___f_3796_);
v___x_3800_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
lean_object* v___x_3802_; 
if (v_isShared_3783_ == 0)
{
lean_ctor_set(v___x_3782_, 1, v___f_3792_);
lean_ctor_set(v___x_3782_, 0, v___x_3800_);
v___x_3802_ = v___x_3782_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v___x_3800_);
lean_ctor_set(v_reuseFailAlloc_3862_, 1, v___f_3792_);
v___x_3802_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
lean_object* v___x_3803_; lean_object* v_toApplicative_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3860_; 
v___x_3803_ = l_StateRefT_x27_instMonad___redArg(v___x_3802_);
v_toApplicative_3804_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3860_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3860_ == 0)
{
lean_object* v_unused_3861_; 
v_unused_3861_ = lean_ctor_get(v___x_3803_, 1);
lean_dec(v_unused_3861_);
v___x_3806_ = v___x_3803_;
v_isShared_3807_ = v_isSharedCheck_3860_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_toApplicative_3804_);
lean_dec(v___x_3803_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3860_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v_toFunctor_3808_; lean_object* v_toSeq_3809_; lean_object* v_toSeqLeft_3810_; lean_object* v_toSeqRight_3811_; lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3858_; 
v_toFunctor_3808_ = lean_ctor_get(v_toApplicative_3804_, 0);
v_toSeq_3809_ = lean_ctor_get(v_toApplicative_3804_, 2);
v_toSeqLeft_3810_ = lean_ctor_get(v_toApplicative_3804_, 3);
v_toSeqRight_3811_ = lean_ctor_get(v_toApplicative_3804_, 4);
v_isSharedCheck_3858_ = !lean_is_exclusive(v_toApplicative_3804_);
if (v_isSharedCheck_3858_ == 0)
{
lean_object* v_unused_3859_; 
v_unused_3859_ = lean_ctor_get(v_toApplicative_3804_, 1);
lean_dec(v_unused_3859_);
v___x_3813_ = v_toApplicative_3804_;
v_isShared_3814_ = v_isSharedCheck_3858_;
goto v_resetjp_3812_;
}
else
{
lean_inc(v_toSeqRight_3811_);
lean_inc(v_toSeqLeft_3810_);
lean_inc(v_toSeq_3809_);
lean_inc(v_toFunctor_3808_);
lean_dec(v_toApplicative_3804_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3858_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___f_3815_; lean_object* v___f_3816_; lean_object* v___f_3817_; lean_object* v___f_3818_; lean_object* v___x_3819_; lean_object* v___f_3820_; lean_object* v___f_3821_; lean_object* v___f_3822_; lean_object* v___x_3824_; 
v___f_3815_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__0));
v___f_3816_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__2_spec__4___closed__1));
lean_inc_ref(v_toFunctor_3808_);
v___f_3817_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3817_, 0, v_toFunctor_3808_);
v___f_3818_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3818_, 0, v_toFunctor_3808_);
v___x_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3819_, 0, v___f_3817_);
lean_ctor_set(v___x_3819_, 1, v___f_3818_);
v___f_3820_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3820_, 0, v_toSeqRight_3811_);
v___f_3821_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3821_, 0, v_toSeqLeft_3810_);
v___f_3822_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3822_, 0, v_toSeq_3809_);
if (v_isShared_3814_ == 0)
{
lean_ctor_set(v___x_3813_, 4, v___f_3820_);
lean_ctor_set(v___x_3813_, 3, v___f_3821_);
lean_ctor_set(v___x_3813_, 2, v___f_3822_);
lean_ctor_set(v___x_3813_, 1, v___f_3815_);
lean_ctor_set(v___x_3813_, 0, v___x_3819_);
v___x_3824_ = v___x_3813_;
goto v_reusejp_3823_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3819_);
lean_ctor_set(v_reuseFailAlloc_3857_, 1, v___f_3815_);
lean_ctor_set(v_reuseFailAlloc_3857_, 2, v___f_3822_);
lean_ctor_set(v_reuseFailAlloc_3857_, 3, v___f_3821_);
lean_ctor_set(v_reuseFailAlloc_3857_, 4, v___f_3820_);
v___x_3824_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3823_;
}
v_reusejp_3823_:
{
lean_object* v___x_3826_; 
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 1, v___f_3816_);
lean_ctor_set(v___x_3806_, 0, v___x_3824_);
v___x_3826_ = v___x_3806_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3824_);
lean_ctor_set(v_reuseFailAlloc_3856_, 1, v___f_3816_);
v___x_3826_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; uint8_t v___x_3829_; 
v___x_3827_ = lean_array_get_size(v_acc_3772_);
v___x_3828_ = lean_array_get_size(v_declInfos_3769_);
v___x_3829_ = lean_nat_dec_lt(v___x_3827_, v___x_3828_);
if (v___x_3829_ == 0)
{
lean_object* v___x_3830_; 
lean_dec_ref(v___x_3826_);
lean_dec_ref(v_declInfos_3769_);
lean_inc(v___y_3776_);
lean_inc_ref(v___y_3775_);
lean_inc(v___y_3774_);
lean_inc_ref(v___y_3773_);
v___x_3830_ = lean_apply_6(v_k_3770_, v_acc_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_, lean_box(0));
return v___x_3830_;
}
else
{
lean_object* v___x_3831_; uint8_t v___x_3832_; lean_object* v___x_3833_; lean_object* v___f_3834_; lean_object* v___f_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v_snd_3840_; lean_object* v_fst_3841_; lean_object* v_fst_3842_; lean_object* v_snd_3843_; lean_object* v___x_3844_; 
v___x_3831_ = lean_box(0);
v___x_3832_ = 0;
v___x_3833_ = l_Lean_instInhabitedExpr;
v___f_3834_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3834_, 0, v___x_3826_);
lean_closure_set(v___f_3834_, 1, v___x_3833_);
v___f_3835_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3835_, 0, v___f_3834_);
v___x_3836_ = lean_box(v___x_3832_);
v___x_3837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3837_, 0, v___x_3836_);
lean_ctor_set(v___x_3837_, 1, v___f_3835_);
v___x_3838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3831_);
lean_ctor_set(v___x_3838_, 1, v___x_3837_);
v___x_3839_ = lean_array_get(v___x_3838_, v_declInfos_3769_, v___x_3827_);
lean_dec_ref_known(v___x_3838_, 2);
v_snd_3840_ = lean_ctor_get(v___x_3839_, 1);
lean_inc(v_snd_3840_);
v_fst_3841_ = lean_ctor_get(v___x_3839_, 0);
lean_inc(v_fst_3841_);
lean_dec(v___x_3839_);
v_fst_3842_ = lean_ctor_get(v_snd_3840_, 0);
lean_inc(v_fst_3842_);
v_snd_3843_ = lean_ctor_get(v_snd_3840_, 1);
lean_inc(v_snd_3843_);
lean_dec(v_snd_3840_);
lean_inc(v___y_3776_);
lean_inc_ref(v___y_3775_);
lean_inc(v___y_3774_);
lean_inc_ref(v___y_3773_);
lean_inc_ref(v_acc_3772_);
v___x_3844_ = lean_apply_6(v_snd_3843_, v_acc_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_, lean_box(0));
if (lean_obj_tag(v___x_3844_) == 0)
{
lean_object* v_a_3845_; uint8_t v___x_3846_; lean_object* v___x_3847_; 
v_a_3845_ = lean_ctor_get(v___x_3844_, 0);
lean_inc(v_a_3845_);
lean_dec_ref_known(v___x_3844_, 1);
v___x_3846_ = lean_unbox(v_fst_3842_);
lean_dec(v_fst_3842_);
v___x_3847_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3772_, v_declInfos_3769_, v_k_3770_, v_kind_3771_, v_fst_3841_, v___x_3846_, v_a_3845_, v_kind_3771_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_);
return v___x_3847_;
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec(v_fst_3842_);
lean_dec(v_fst_3841_);
lean_dec_ref(v_acc_3772_);
lean_dec_ref(v_k_3770_);
lean_dec_ref(v_declInfos_3769_);
v_a_3848_ = lean_ctor_get(v___x_3844_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3844_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3844_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3844_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___lam__0(lean_object* v_acc_3868_, lean_object* v_declInfos_3869_, lean_object* v_k_3870_, uint8_t v_kind_3871_, lean_object* v_b_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_){
_start:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3878_ = lean_array_push(v_acc_3868_, v_b_3872_);
v___x_3879_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3869_, v_k_3870_, v_kind_3871_, v___x_3878_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
return v___x_3879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8___boxed(lean_object* v_acc_3880_, lean_object* v_declInfos_3881_, lean_object* v_k_3882_, lean_object* v_kind_3883_, lean_object* v_name_3884_, lean_object* v_bi_3885_, lean_object* v_type_3886_, lean_object* v_kind_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_){
_start:
{
uint8_t v_kind_boxed_3893_; uint8_t v_bi_boxed_3894_; uint8_t v_kind_boxed_3895_; lean_object* v_res_3896_; 
v_kind_boxed_3893_ = lean_unbox(v_kind_3883_);
v_bi_boxed_3894_ = lean_unbox(v_bi_3885_);
v_kind_boxed_3895_ = lean_unbox(v_kind_3887_);
v_res_3896_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4_spec__8(v_acc_3880_, v_declInfos_3881_, v_k_3882_, v_kind_boxed_3893_, v_name_3884_, v_bi_boxed_3894_, v_type_3886_, v_kind_boxed_3895_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4___boxed(lean_object* v_declInfos_3897_, lean_object* v_k_3898_, lean_object* v_kind_3899_, lean_object* v_acc_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
uint8_t v_kind_boxed_3906_; lean_object* v_res_3907_; 
v_kind_boxed_3906_ = lean_unbox(v_kind_3899_);
v_res_3907_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3897_, v_k_3898_, v_kind_boxed_3906_, v_acc_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_);
lean_dec(v___y_3904_);
lean_dec_ref(v___y_3903_);
lean_dec(v___y_3902_);
lean_dec_ref(v___y_3901_);
return v_res_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(lean_object* v_declInfos_3908_, lean_object* v_k_3909_, uint8_t v_kind_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3916_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_3917_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2_spec__4(v_declInfos_3908_, v_k_3909_, v_kind_3910_, v___x_3916_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
return v___x_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2___boxed(lean_object* v_declInfos_3918_, lean_object* v_k_3919_, lean_object* v_kind_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_){
_start:
{
uint8_t v_kind_boxed_3926_; lean_object* v_res_3927_; 
v_kind_boxed_3926_ = lean_unbox(v_kind_3920_);
v_res_3927_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v_declInfos_3918_, v_k_3919_, v_kind_boxed_3926_, v___y_3921_, v___y_3922_, v___y_3923_, v___y_3924_);
lean_dec(v___y_3924_);
lean_dec_ref(v___y_3923_);
lean_dec(v___y_3922_);
lean_dec_ref(v___y_3921_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(lean_object* v_declInfos_3928_, lean_object* v_k_3929_, uint8_t v_kind_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_){
_start:
{
size_t v_sz_3936_; size_t v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
v_sz_3936_ = lean_array_size(v_declInfos_3928_);
v___x_3937_ = ((size_t)0ULL);
v___x_3938_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__1(v_sz_3936_, v___x_3937_, v_declInfos_3928_);
v___x_3939_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1_spec__2(v___x_3938_, v_k_3929_, v_kind_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1___boxed(lean_object* v_declInfos_3940_, lean_object* v_k_3941_, lean_object* v_kind_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
uint8_t v_kind_boxed_3948_; lean_object* v_res_3949_; 
v_kind_boxed_3948_ = lean_unbox(v_kind_3942_);
v_res_3949_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v_declInfos_3940_, v_k_3941_, v_kind_boxed_3948_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_);
lean_dec(v___y_3946_);
lean_dec_ref(v___y_3945_);
lean_dec(v___y_3944_);
lean_dec_ref(v___y_3943_);
return v_res_3949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(lean_object* v_paramsIndices_3950_, lean_object* v_numParams_3951_, lean_object* v_a_3952_, lean_object* v___x_3953_, lean_object* v_compFields_3954_, lean_object* v_val_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_){
_start:
{
lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v_lower_3966_; lean_object* v_upper_3967_; lean_object* v___x_3976_; uint8_t v___x_3977_; 
v___x_3961_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_3951_);
lean_inc_ref(v_paramsIndices_3950_);
v___x_3962_ = l_Array_toSubarray___redArg(v_paramsIndices_3950_, v___x_3961_, v_numParams_3951_);
v___x_3963_ = ((lean_object*)(l_List_mapM_loop___at___00Lean_Elab_ComputedFields_mkImplType_spec__1___lam__0___closed__0));
v___x_3964_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_3962_, v___x_3963_);
v___x_3976_ = lean_array_get_size(v_paramsIndices_3950_);
v___x_3977_ = lean_nat_dec_le(v_numParams_3951_, v___x_3961_);
if (v___x_3977_ == 0)
{
v_lower_3966_ = v_numParams_3951_;
v_upper_3967_ = v___x_3976_;
goto v___jp_3965_;
}
else
{
lean_dec(v_numParams_3951_);
v_lower_3966_ = v___x_3961_;
v_upper_3967_ = v___x_3976_;
goto v___jp_3965_;
}
v___jp_3965_:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; lean_object* v___f_3970_; size_t v_sz_3971_; size_t v___x_3972_; lean_object* v___x_3973_; uint8_t v___x_3974_; lean_object* v___x_3975_; 
v___x_3968_ = l_Array_toSubarray___redArg(v_paramsIndices_3950_, v_lower_3966_, v_upper_3967_);
v___x_3969_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__1___redArg(v___x_3968_, v___x_3963_);
lean_inc_ref(v_val_3955_);
lean_inc_ref(v___x_3969_);
lean_inc_ref(v_compFields_3954_);
lean_inc_ref(v___x_3964_);
v___f_3970_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__0___boxed), 12, 6);
lean_closure_set(v___f_3970_, 0, v_a_3952_);
lean_closure_set(v___f_3970_, 1, v___x_3953_);
lean_closure_set(v___f_3970_, 2, v___x_3964_);
lean_closure_set(v___f_3970_, 3, v_compFields_3954_);
lean_closure_set(v___f_3970_, 4, v___x_3969_);
lean_closure_set(v___f_3970_, 5, v_val_3955_);
v_sz_3971_ = lean_array_size(v_compFields_3954_);
v___x_3972_ = ((size_t)0ULL);
v___x_3973_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__0(v___x_3964_, v___x_3969_, v_val_3955_, v_sz_3971_, v___x_3972_, v_compFields_3954_);
v___x_3974_ = 0;
v___x_3975_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__1(v___x_3973_, v___f_3970_, v___x_3974_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_);
return v___x_3975_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed(lean_object* v_paramsIndices_3978_, lean_object* v_numParams_3979_, lean_object* v_a_3980_, lean_object* v___x_3981_, lean_object* v_compFields_3982_, lean_object* v_val_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1(v_paramsIndices_3978_, v_numParams_3979_, v_a_3980_, v___x_3981_, v_compFields_3982_, v_val_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
lean_dec(v___y_3987_);
lean_dec_ref(v___y_3986_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(lean_object* v_k_3990_, lean_object* v_b_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v___x_3997_; 
lean_inc(v___y_3995_);
lean_inc_ref(v___y_3994_);
lean_inc(v___y_3993_);
lean_inc_ref(v___y_3992_);
v___x_3997_ = lean_apply_6(v_k_3990_, v_b_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, lean_box(0));
return v___x_3997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed(lean_object* v_k_3998_, lean_object* v_b_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_){
_start:
{
lean_object* v_res_4005_; 
v_res_4005_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0(v_k_3998_, v_b_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
lean_dec(v___y_4003_);
lean_dec_ref(v___y_4002_);
lean_dec(v___y_4001_);
lean_dec_ref(v___y_4000_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(lean_object* v_name_4006_, uint8_t v_bi_4007_, lean_object* v_type_4008_, lean_object* v_k_4009_, uint8_t v_kind_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_){
_start:
{
lean_object* v___f_4016_; lean_object* v___x_4017_; 
v___f_4016_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4016_, 0, v_k_4009_);
v___x_4017_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_4006_, v_bi_4007_, v_type_4008_, v___f_4016_, v_kind_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_);
if (lean_obj_tag(v___x_4017_) == 0)
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
v_a_4018_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_4017_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_4017_);
v___x_4020_ = lean_box(0);
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
v_resetjp_4019_:
{
lean_object* v___x_4023_; 
if (v_isShared_4021_ == 0)
{
v___x_4023_ = v___x_4020_;
goto v_reusejp_4022_;
}
else
{
lean_object* v_reuseFailAlloc_4024_; 
v_reuseFailAlloc_4024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4024_, 0, v_a_4018_);
v___x_4023_ = v_reuseFailAlloc_4024_;
goto v_reusejp_4022_;
}
v_reusejp_4022_:
{
return v___x_4023_;
}
}
}
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
v_a_4026_ = lean_ctor_get(v___x_4017_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_4017_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4028_ = v___x_4017_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v___x_4017_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg___boxed(lean_object* v_name_4034_, lean_object* v_bi_4035_, lean_object* v_type_4036_, lean_object* v_k_4037_, lean_object* v_kind_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_){
_start:
{
uint8_t v_bi_boxed_4044_; uint8_t v_kind_boxed_4045_; lean_object* v_res_4046_; 
v_bi_boxed_4044_ = lean_unbox(v_bi_4035_);
v_kind_boxed_4045_ = lean_unbox(v_kind_4038_);
v_res_4046_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4034_, v_bi_boxed_4044_, v_type_4036_, v_k_4037_, v_kind_boxed_4045_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(lean_object* v_name_4047_, lean_object* v_type_4048_, lean_object* v_k_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_){
_start:
{
uint8_t v___x_4055_; uint8_t v___x_4056_; lean_object* v___x_4057_; 
v___x_4055_ = 0;
v___x_4056_ = 0;
v___x_4057_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4047_, v___x_4055_, v_type_4048_, v_k_4049_, v___x_4056_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg___boxed(lean_object* v_name_4058_, lean_object* v_type_4059_, lean_object* v_k_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_){
_start:
{
lean_object* v_res_4066_; 
v_res_4066_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4058_, v_type_4059_, v_k_4060_, v___y_4061_, v___y_4062_, v___y_4063_, v___y_4064_);
lean_dec(v___y_4064_);
lean_dec_ref(v___y_4063_);
lean_dec(v___y_4062_);
lean_dec_ref(v___y_4061_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(lean_object* v_numParams_4067_, lean_object* v_a_4068_, lean_object* v___x_4069_, lean_object* v_compFields_4070_, lean_object* v_name_4071_, lean_object* v_paramsIndices_4072_, lean_object* v_x_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v___f_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; 
lean_inc(v___x_4069_);
lean_inc_ref(v_paramsIndices_4072_);
v___f_4079_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__1___boxed), 11, 5);
lean_closure_set(v___f_4079_, 0, v_paramsIndices_4072_);
lean_closure_set(v___f_4079_, 1, v_numParams_4067_);
lean_closure_set(v___f_4079_, 2, v_a_4068_);
lean_closure_set(v___f_4079_, 3, v___x_4069_);
lean_closure_set(v___f_4079_, 4, v_compFields_4070_);
v___x_4080_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideComputedFields___closed__1));
v___x_4081_ = l_Lean_mkConst(v_name_4071_, v___x_4069_);
v___x_4082_ = l_Lean_mkAppN(v___x_4081_, v_paramsIndices_4072_);
lean_dec_ref(v_paramsIndices_4072_);
v___x_4083_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v___x_4080_, v___x_4082_, v___f_4079_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
return v___x_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed(lean_object* v_numParams_4084_, lean_object* v_a_4085_, lean_object* v___x_4086_, lean_object* v_compFields_4087_, lean_object* v_name_4088_, lean_object* v_paramsIndices_4089_, lean_object* v_x_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
lean_object* v_res_4096_; 
v_res_4096_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2(v_numParams_4084_, v_a_4085_, v___x_4086_, v_compFields_4087_, v_name_4088_, v_paramsIndices_4089_, v_x_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_);
lean_dec(v___y_4094_);
lean_dec_ref(v___y_4093_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4091_);
lean_dec_ref(v_x_4090_);
return v_res_4096_;
}
}
static lean_object* _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1(void){
_start:
{
lean_object* v___x_4098_; lean_object* v___x_4099_; 
v___x_4098_ = ((lean_object*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__0));
v___x_4099_ = l_Lean_stringToMessageData(v___x_4098_);
return v___x_4099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(lean_object* v_declName_4100_, lean_object* v_compFields_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_, lean_object* v_a_4105_){
_start:
{
lean_object* v___x_4107_; 
v___x_4107_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_declName_4100_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v_toConstantVal_4109_; lean_object* v_numParams_4110_; lean_object* v_ctors_4111_; lean_object* v___y_4113_; lean_object* v___y_4114_; lean_object* v___y_4115_; lean_object* v___y_4116_; lean_object* v___x_4125_; lean_object* v___x_4126_; uint8_t v___x_4127_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
lean_inc(v_a_4108_);
lean_dec_ref_known(v___x_4107_, 1);
v_toConstantVal_4109_ = lean_ctor_get(v_a_4108_, 0);
v_numParams_4110_ = lean_ctor_get(v_a_4108_, 1);
lean_inc(v_numParams_4110_);
v_ctors_4111_ = lean_ctor_get(v_a_4108_, 4);
v___x_4125_ = l_List_lengthTR___redArg(v_ctors_4111_);
v___x_4126_ = lean_unsigned_to_nat(2u);
v___x_4127_ = lean_nat_dec_lt(v___x_4125_, v___x_4126_);
lean_dec(v___x_4125_);
if (v___x_4127_ == 0)
{
v___y_4113_ = v_a_4102_;
v___y_4114_ = v_a_4103_;
v___y_4115_ = v_a_4104_;
v___y_4116_ = v_a_4105_;
goto v___jp_4112_;
}
else
{
lean_object* v___x_4128_; lean_object* v___x_4129_; 
lean_dec(v_numParams_4110_);
lean_dec(v_a_4108_);
lean_dec_ref(v_compFields_4101_);
v___x_4128_ = lean_obj_once(&l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1, &l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1_once, _init_l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___closed__1);
v___x_4129_ = l_Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1___redArg(v___x_4128_, v_a_4102_, v_a_4103_, v_a_4104_, v_a_4105_);
return v___x_4129_;
}
v___jp_4112_:
{
lean_object* v_name_4117_; lean_object* v_levelParams_4118_; lean_object* v_type_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___f_4122_; uint8_t v___x_4123_; lean_object* v___x_4124_; 
v_name_4117_ = lean_ctor_get(v_toConstantVal_4109_, 0);
lean_inc(v_name_4117_);
v_levelParams_4118_ = lean_ctor_get(v_toConstantVal_4109_, 1);
v_type_4119_ = lean_ctor_get(v_toConstantVal_4109_, 2);
lean_inc_ref(v_type_4119_);
v___x_4120_ = lean_box(0);
lean_inc(v_levelParams_4118_);
v___x_4121_ = l_List_mapTR_loop___at___00Lean_Elab_ComputedFields_overrideCasesOn_spec__5(v_levelParams_4118_, v___x_4120_);
v___f_4122_ = lean_alloc_closure((void*)(l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___lam__2___boxed), 12, 5);
lean_closure_set(v___f_4122_, 0, v_numParams_4110_);
lean_closure_set(v___f_4122_, 1, v_a_4108_);
lean_closure_set(v___f_4122_, 2, v___x_4121_);
lean_closure_set(v___f_4122_, 3, v_compFields_4101_);
lean_closure_set(v___f_4122_, 4, v_name_4117_);
v___x_4123_ = 0;
v___x_4124_ = l_Lean_Meta_forallTelescope___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__3___redArg(v_type_4119_, v___f_4122_, v___x_4123_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_);
return v___x_4124_;
}
}
else
{
lean_object* v_a_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4137_; 
lean_dec_ref(v_compFields_4101_);
v_a_4130_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4137_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4137_ == 0)
{
v___x_4132_ = v___x_4107_;
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_a_4130_);
lean_dec(v___x_4107_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4137_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4135_; 
if (v_isShared_4133_ == 0)
{
v___x_4135_ = v___x_4132_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_a_4130_);
v___x_4135_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
return v___x_4135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_mkComputedFieldOverrides___boxed(lean_object* v_declName_4138_, lean_object* v_compFields_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_declName_4138_, v_compFields_4139_, v_a_4140_, v_a_4141_, v_a_4142_, v_a_4143_);
lean_dec(v_a_4143_);
lean_dec_ref(v_a_4142_);
lean_dec(v_a_4141_);
lean_dec_ref(v_a_4140_);
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(lean_object* v_00_u03b1_4146_, lean_object* v_name_4147_, uint8_t v_bi_4148_, lean_object* v_type_4149_, lean_object* v_k_4150_, uint8_t v_kind_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_){
_start:
{
lean_object* v___x_4157_; 
v___x_4157_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___redArg(v_name_4147_, v_bi_4148_, v_type_4149_, v_k_4150_, v_kind_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_);
return v___x_4157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4___boxed(lean_object* v_00_u03b1_4158_, lean_object* v_name_4159_, lean_object* v_bi_4160_, lean_object* v_type_4161_, lean_object* v_k_4162_, lean_object* v_kind_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_){
_start:
{
uint8_t v_bi_boxed_4169_; uint8_t v_kind_boxed_4170_; lean_object* v_res_4171_; 
v_bi_boxed_4169_ = lean_unbox(v_bi_4160_);
v_kind_boxed_4170_ = lean_unbox(v_kind_4163_);
v_res_4171_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2_spec__4(v_00_u03b1_4158_, v_name_4159_, v_bi_boxed_4169_, v_type_4161_, v_k_4162_, v_kind_boxed_4170_, v___y_4164_, v___y_4165_, v___y_4166_, v___y_4167_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(lean_object* v_00_u03b1_4172_, lean_object* v_name_4173_, lean_object* v_type_4174_, lean_object* v_k_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_){
_start:
{
lean_object* v___x_4181_; 
v___x_4181_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___redArg(v_name_4173_, v_type_4174_, v_k_4175_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_);
return v___x_4181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2___boxed(lean_object* v_00_u03b1_4182_, lean_object* v_name_4183_, lean_object* v_type_4184_, lean_object* v_k_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_){
_start:
{
lean_object* v_res_4191_; 
v_res_4191_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_ComputedFields_mkComputedFieldOverrides_spec__2(v_00_u03b1_4182_, v_name_4183_, v_type_4184_, v_k_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
lean_dec(v___y_4189_);
lean_dec_ref(v___y_4188_);
lean_dec(v___y_4187_);
lean_dec_ref(v___y_4186_);
return v_res_4191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(lean_object* v_as_4192_, size_t v_sz_4193_, size_t v_i_4194_, lean_object* v_b_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v_a_4199_; uint8_t v___x_4203_; 
v___x_4203_ = lean_usize_dec_lt(v_i_4194_, v_sz_4193_);
if (v___x_4203_ == 0)
{
lean_object* v___x_4204_; 
v___x_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4204_, 0, v_b_4195_);
return v___x_4204_;
}
else
{
lean_object* v_a_4205_; lean_object* v___x_4206_; lean_object* v_env_4207_; uint8_t v___x_4208_; 
v_a_4205_ = lean_array_uget_borrowed(v_as_4192_, v_i_4194_);
v___x_4206_ = lean_st_ref_get(v___y_4196_);
v_env_4207_ = lean_ctor_get(v___x_4206_, 0);
lean_inc_ref(v_env_4207_);
lean_dec(v___x_4206_);
lean_inc(v_a_4205_);
v___x_4208_ = l_Lean_isExtern(v_env_4207_, v_a_4205_);
if (v___x_4208_ == 0)
{
lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
v___x_4209_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_a_4205_);
v___x_4210_ = l_Lean_Name_append(v_a_4205_, v___x_4209_);
v___x_4211_ = lean_array_push(v_b_4195_, v___x_4210_);
v_a_4199_ = v___x_4211_;
goto v___jp_4198_;
}
else
{
v_a_4199_ = v_b_4195_;
goto v___jp_4198_;
}
}
v___jp_4198_:
{
size_t v___x_4200_; size_t v___x_4201_; 
v___x_4200_ = ((size_t)1ULL);
v___x_4201_ = lean_usize_add(v_i_4194_, v___x_4200_);
v_i_4194_ = v___x_4201_;
v_b_4195_ = v_a_4199_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg___boxed(lean_object* v_as_4212_, lean_object* v_sz_4213_, lean_object* v_i_4214_, lean_object* v_b_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_){
_start:
{
size_t v_sz_boxed_4218_; size_t v_i_boxed_4219_; lean_object* v_res_4220_; 
v_sz_boxed_4218_ = lean_unbox_usize(v_sz_4213_);
lean_dec(v_sz_4213_);
v_i_boxed_4219_ = lean_unbox_usize(v_i_4214_);
lean_dec(v_i_4214_);
v_res_4220_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4212_, v_sz_boxed_4218_, v_i_boxed_4219_, v_b_4215_, v___y_4216_);
lean_dec(v___y_4216_);
lean_dec_ref(v_as_4212_);
return v_res_4220_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(lean_object* v_as_x27_4221_, lean_object* v_b_4222_){
_start:
{
if (lean_obj_tag(v_as_x27_4221_) == 0)
{
lean_object* v___x_4224_; 
v___x_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4224_, 0, v_b_4222_);
return v___x_4224_;
}
else
{
lean_object* v_head_4225_; lean_object* v_tail_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v_head_4225_ = lean_ctor_get(v_as_x27_4221_, 0);
v_tail_4226_ = lean_ctor_get(v_as_x27_4221_, 1);
v___x_4227_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
lean_inc(v_head_4225_);
v___x_4228_ = l_Lean_Name_append(v_head_4225_, v___x_4227_);
v___x_4229_ = lean_array_push(v_b_4222_, v___x_4228_);
v_as_x27_4221_ = v_tail_4226_;
v_b_4222_ = v___x_4229_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg___boxed(lean_object* v_as_x27_4231_, lean_object* v_b_4232_, lean_object* v___y_4233_){
_start:
{
lean_object* v_res_4234_; 
v_res_4234_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4231_, v_b_4232_);
lean_dec(v_as_x27_4231_);
return v_res_4234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(lean_object* v_as_4235_, size_t v_sz_4236_, size_t v_i_4237_, lean_object* v_b_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_){
_start:
{
uint8_t v___x_4244_; 
v___x_4244_ = lean_usize_dec_lt(v_i_4237_, v_sz_4236_);
if (v___x_4244_ == 0)
{
lean_object* v___x_4245_; 
v___x_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4245_, 0, v_b_4238_);
return v___x_4245_;
}
else
{
lean_object* v_a_4246_; lean_object* v_fst_4247_; lean_object* v_snd_4248_; lean_object* v___x_4249_; 
v_a_4246_ = lean_array_uget_borrowed(v_as_4235_, v_i_4237_);
v_fst_4247_ = lean_ctor_get(v_a_4246_, 0);
v_snd_4248_ = lean_ctor_get(v_a_4246_, 1);
lean_inc(v_fst_4247_);
v___x_4249_ = l_Lean_getConstInfoInduct___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__3(v_fst_4247_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_);
if (lean_obj_tag(v___x_4249_) == 0)
{
lean_object* v_a_4250_; lean_object* v_ctors_4251_; lean_object* v___x_4252_; 
v_a_4250_ = lean_ctor_get(v___x_4249_, 0);
lean_inc(v_a_4250_);
lean_dec_ref_known(v___x_4249_, 1);
v_ctors_4251_ = lean_ctor_get(v_a_4250_, 4);
lean_inc(v_ctors_4251_);
lean_dec(v_a_4250_);
v___x_4252_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_ctors_4251_, v_b_4238_);
lean_dec(v_ctors_4251_);
if (lean_obj_tag(v___x_4252_) == 0)
{
lean_object* v_a_4253_; size_t v_sz_4254_; size_t v___x_4255_; lean_object* v___x_4256_; 
v_a_4253_ = lean_ctor_get(v___x_4252_, 0);
lean_inc(v_a_4253_);
lean_dec_ref_known(v___x_4252_, 1);
v_sz_4254_ = lean_array_size(v_snd_4248_);
v___x_4255_ = ((size_t)0ULL);
v___x_4256_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_snd_4248_, v_sz_4254_, v___x_4255_, v_a_4253_, v___y_4242_);
if (lean_obj_tag(v___x_4256_) == 0)
{
lean_object* v_a_4257_; size_t v___x_4258_; size_t v___x_4259_; 
v_a_4257_ = lean_ctor_get(v___x_4256_, 0);
lean_inc(v_a_4257_);
lean_dec_ref_known(v___x_4256_, 1);
v___x_4258_ = ((size_t)1ULL);
v___x_4259_ = lean_usize_add(v_i_4237_, v___x_4258_);
v_i_4237_ = v___x_4259_;
v_b_4238_ = v_a_4257_;
goto _start;
}
else
{
return v___x_4256_;
}
}
else
{
return v___x_4252_;
}
}
else
{
lean_object* v_a_4261_; lean_object* v___x_4263_; uint8_t v_isShared_4264_; uint8_t v_isSharedCheck_4268_; 
lean_dec_ref(v_b_4238_);
v_a_4261_ = lean_ctor_get(v___x_4249_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4249_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4263_ = v___x_4249_;
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
else
{
lean_inc(v_a_4261_);
lean_dec(v___x_4249_);
v___x_4263_ = lean_box(0);
v_isShared_4264_ = v_isSharedCheck_4268_;
goto v_resetjp_4262_;
}
v_resetjp_4262_:
{
lean_object* v___x_4266_; 
if (v_isShared_4264_ == 0)
{
v___x_4266_ = v___x_4263_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v_a_4261_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6___boxed(lean_object* v_as_4269_, lean_object* v_sz_4270_, lean_object* v_i_4271_, lean_object* v_b_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_){
_start:
{
size_t v_sz_boxed_4278_; size_t v_i_boxed_4279_; lean_object* v_res_4280_; 
v_sz_boxed_4278_ = lean_unbox_usize(v_sz_4270_);
lean_dec(v_sz_4270_);
v_i_boxed_4279_ = lean_unbox_usize(v_i_4271_);
lean_dec(v_i_4271_);
v_res_4280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_as_4269_, v_sz_boxed_4278_, v_i_boxed_4279_, v_b_4272_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_);
lean_dec(v___y_4276_);
lean_dec_ref(v___y_4275_);
lean_dec(v___y_4274_);
lean_dec_ref(v___y_4273_);
lean_dec_ref(v_as_4269_);
return v_res_4280_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(uint8_t v_suppressElabErrors_4288_, uint8_t v___y_4289_, lean_object* v_x_4290_){
_start:
{
if (lean_obj_tag(v_x_4290_) == 1)
{
lean_object* v_pre_4291_; 
v_pre_4291_ = lean_ctor_get(v_x_4290_, 0);
switch(lean_obj_tag(v_pre_4291_))
{
case 1:
{
lean_object* v_pre_4292_; 
v_pre_4292_ = lean_ctor_get(v_pre_4291_, 0);
switch(lean_obj_tag(v_pre_4292_))
{
case 0:
{
lean_object* v_str_4293_; lean_object* v_str_4294_; lean_object* v___x_4295_; uint8_t v___x_4296_; 
v_str_4293_ = lean_ctor_get(v_x_4290_, 1);
v_str_4294_ = lean_ctor_get(v_pre_4291_, 1);
v___x_4295_ = ((lean_object*)(l___private_Lean_Elab_ComputedFields_0__Lean_Elab_ComputedFields_initFn___closed__5_00___x40_Lean_Elab_ComputedFields_4242877025____hygCtx___hyg_2_));
v___x_4296_ = lean_string_dec_eq(v_str_4294_, v___x_4295_);
if (v___x_4296_ == 0)
{
lean_object* v___x_4297_; uint8_t v___x_4298_; 
v___x_4297_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__0));
v___x_4298_ = lean_string_dec_eq(v_str_4294_, v___x_4297_);
if (v___x_4298_ == 0)
{
return v___x_4298_;
}
else
{
lean_object* v___x_4299_; uint8_t v___x_4300_; 
v___x_4299_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__1));
v___x_4300_ = lean_string_dec_eq(v_str_4293_, v___x_4299_);
if (v___x_4300_ == 0)
{
return v___x_4300_;
}
else
{
return v_suppressElabErrors_4288_;
}
}
}
else
{
lean_object* v___x_4301_; uint8_t v___x_4302_; 
v___x_4301_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__2));
v___x_4302_ = lean_string_dec_eq(v_str_4293_, v___x_4301_);
if (v___x_4302_ == 0)
{
return v___x_4302_;
}
else
{
return v_suppressElabErrors_4288_;
}
}
}
case 1:
{
lean_object* v_pre_4303_; 
v_pre_4303_ = lean_ctor_get(v_pre_4292_, 0);
if (lean_obj_tag(v_pre_4303_) == 0)
{
lean_object* v_str_4304_; lean_object* v_str_4305_; lean_object* v_str_4306_; lean_object* v___x_4307_; uint8_t v___x_4308_; 
v_str_4304_ = lean_ctor_get(v_x_4290_, 1);
v_str_4305_ = lean_ctor_get(v_pre_4291_, 1);
v_str_4306_ = lean_ctor_get(v_pre_4292_, 1);
v___x_4307_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__3));
v___x_4308_ = lean_string_dec_eq(v_str_4306_, v___x_4307_);
if (v___x_4308_ == 0)
{
return v___x_4308_;
}
else
{
lean_object* v___x_4309_; uint8_t v___x_4310_; 
v___x_4309_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__4));
v___x_4310_ = lean_string_dec_eq(v_str_4305_, v___x_4309_);
if (v___x_4310_ == 0)
{
return v___x_4310_;
}
else
{
lean_object* v___x_4311_; uint8_t v___x_4312_; 
v___x_4311_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__5));
v___x_4312_ = lean_string_dec_eq(v_str_4304_, v___x_4311_);
if (v___x_4312_ == 0)
{
return v___x_4312_;
}
else
{
return v_suppressElabErrors_4288_;
}
}
}
}
else
{
return v___y_4289_;
}
}
default: 
{
return v___y_4289_;
}
}
}
case 0:
{
lean_object* v_str_4313_; lean_object* v___x_4314_; uint8_t v___x_4315_; 
v_str_4313_ = lean_ctor_get(v_x_4290_, 1);
v___x_4314_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___closed__6));
v___x_4315_ = lean_string_dec_eq(v_str_4313_, v___x_4314_);
if (v___x_4315_ == 0)
{
return v___x_4315_;
}
else
{
return v_suppressElabErrors_4288_;
}
}
default: 
{
return v___y_4289_;
}
}
}
else
{
return v___y_4289_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed(lean_object* v_suppressElabErrors_4316_, lean_object* v___y_4317_, lean_object* v_x_4318_){
_start:
{
uint8_t v_suppressElabErrors_boxed_4319_; uint8_t v___y_7473__boxed_4320_; uint8_t v_res_4321_; lean_object* v_r_4322_; 
v_suppressElabErrors_boxed_4319_ = lean_unbox(v_suppressElabErrors_4316_);
v___y_7473__boxed_4320_ = lean_unbox(v___y_4317_);
v_res_4321_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0(v_suppressElabErrors_boxed_4319_, v___y_7473__boxed_4320_, v_x_4318_);
lean_dec(v_x_4318_);
v_r_4322_ = lean_box(v_res_4321_);
return v_r_4322_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(lean_object* v_opts_4323_, lean_object* v_opt_4324_){
_start:
{
lean_object* v_name_4325_; lean_object* v_defValue_4326_; lean_object* v_map_4327_; lean_object* v___x_4328_; 
v_name_4325_ = lean_ctor_get(v_opt_4324_, 0);
v_defValue_4326_ = lean_ctor_get(v_opt_4324_, 1);
v_map_4327_ = lean_ctor_get(v_opts_4323_, 0);
v___x_4328_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4327_, v_name_4325_);
if (lean_obj_tag(v___x_4328_) == 0)
{
uint8_t v___x_4329_; 
v___x_4329_ = lean_unbox(v_defValue_4326_);
return v___x_4329_;
}
else
{
lean_object* v_val_4330_; 
v_val_4330_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_val_4330_);
lean_dec_ref_known(v___x_4328_, 1);
if (lean_obj_tag(v_val_4330_) == 1)
{
uint8_t v_v_4331_; 
v_v_4331_ = lean_ctor_get_uint8(v_val_4330_, 0);
lean_dec_ref_known(v_val_4330_, 0);
return v_v_4331_;
}
else
{
uint8_t v___x_4332_; 
lean_dec(v_val_4330_);
v___x_4332_ = lean_unbox(v_defValue_4326_);
return v___x_4332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8___boxed(lean_object* v_opts_4333_, lean_object* v_opt_4334_){
_start:
{
uint8_t v_res_4335_; lean_object* v_r_4336_; 
v_res_4335_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v_opts_4333_, v_opt_4334_);
lean_dec_ref(v_opt_4334_);
lean_dec_ref(v_opts_4333_);
v_r_4336_ = lean_box(v_res_4335_);
return v_r_4336_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(lean_object* v_ref_4338_, lean_object* v_msgData_4339_, uint8_t v_severity_4340_, uint8_t v_isSilent_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_){
_start:
{
lean_object* v___y_4348_; uint8_t v___y_4349_; uint8_t v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; lean_object* v_currNamespace_4355_; lean_object* v_openDecls_4356_; lean_object* v___y_4357_; lean_object* v___y_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; uint8_t v___y_4386_; lean_object* v___y_4387_; uint8_t v___y_4388_; lean_object* v___y_4389_; uint8_t v___y_4390_; lean_object* v___y_4391_; lean_object* v___y_4392_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; uint8_t v___y_4413_; uint8_t v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4416_; lean_object* v___y_4417_; uint8_t v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4423_; lean_object* v___y_4424_; lean_object* v___y_4425_; uint8_t v___y_4426_; lean_object* v___y_4427_; lean_object* v___y_4428_; uint8_t v___y_4429_; lean_object* v___y_4430_; uint8_t v___y_4431_; uint8_t v___x_4436_; lean_object* v___y_4438_; lean_object* v___y_4439_; lean_object* v___y_4440_; lean_object* v___y_4441_; lean_object* v___y_4442_; uint8_t v___y_4443_; lean_object* v___y_4444_; uint8_t v___y_4445_; uint8_t v___y_4446_; uint8_t v___y_4448_; uint8_t v___x_4466_; 
v___x_4436_ = 2;
v___x_4466_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4340_, v___x_4436_);
if (v___x_4466_ == 0)
{
v___y_4448_ = v___x_4466_;
goto v___jp_4447_;
}
else
{
uint8_t v___x_4467_; 
lean_inc_ref(v_msgData_4339_);
v___x_4467_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4339_);
v___y_4448_ = v___x_4467_;
goto v___jp_4447_;
}
v___jp_4347_:
{
lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v_env_4362_; lean_object* v_nextMacroScope_4363_; lean_object* v_ngen_4364_; lean_object* v_auxDeclNGen_4365_; lean_object* v_traceState_4366_; lean_object* v_cache_4367_; lean_object* v_messages_4368_; lean_object* v_infoState_4369_; lean_object* v_snapshotTasks_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4381_; 
lean_inc(v_openDecls_4356_);
lean_inc(v_currNamespace_4355_);
v___x_4358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4358_, 0, v_currNamespace_4355_);
lean_ctor_set(v___x_4358_, 1, v_openDecls_4356_);
v___x_4359_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4358_);
lean_ctor_set(v___x_4359_, 1, v___y_4352_);
lean_inc_ref(v___y_4348_);
lean_inc_ref(v___y_4353_);
v___x_4360_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4360_, 0, v___y_4353_);
lean_ctor_set(v___x_4360_, 1, v___y_4354_);
lean_ctor_set(v___x_4360_, 2, v___y_4351_);
lean_ctor_set(v___x_4360_, 3, v___y_4348_);
lean_ctor_set(v___x_4360_, 4, v___x_4359_);
lean_ctor_set_uint8(v___x_4360_, sizeof(void*)*5, v___y_4350_);
lean_ctor_set_uint8(v___x_4360_, sizeof(void*)*5 + 1, v___y_4349_);
lean_ctor_set_uint8(v___x_4360_, sizeof(void*)*5 + 2, v_isSilent_4341_);
v___x_4361_ = lean_st_ref_take(v___y_4357_);
v_env_4362_ = lean_ctor_get(v___x_4361_, 0);
v_nextMacroScope_4363_ = lean_ctor_get(v___x_4361_, 1);
v_ngen_4364_ = lean_ctor_get(v___x_4361_, 2);
v_auxDeclNGen_4365_ = lean_ctor_get(v___x_4361_, 3);
v_traceState_4366_ = lean_ctor_get(v___x_4361_, 4);
v_cache_4367_ = lean_ctor_get(v___x_4361_, 5);
v_messages_4368_ = lean_ctor_get(v___x_4361_, 6);
v_infoState_4369_ = lean_ctor_get(v___x_4361_, 7);
v_snapshotTasks_4370_ = lean_ctor_get(v___x_4361_, 8);
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4361_);
if (v_isSharedCheck_4381_ == 0)
{
v___x_4372_ = v___x_4361_;
v_isShared_4373_ = v_isSharedCheck_4381_;
goto v_resetjp_4371_;
}
else
{
lean_inc(v_snapshotTasks_4370_);
lean_inc(v_infoState_4369_);
lean_inc(v_messages_4368_);
lean_inc(v_cache_4367_);
lean_inc(v_traceState_4366_);
lean_inc(v_auxDeclNGen_4365_);
lean_inc(v_ngen_4364_);
lean_inc(v_nextMacroScope_4363_);
lean_inc(v_env_4362_);
lean_dec(v___x_4361_);
v___x_4372_ = lean_box(0);
v_isShared_4373_ = v_isSharedCheck_4381_;
goto v_resetjp_4371_;
}
v_resetjp_4371_:
{
lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4377_; 
v___x_4374_ = lean_box(0);
v___x_4375_ = l_Lean_MessageLog_add(v___x_4360_, v_messages_4368_);
if (v_isShared_4373_ == 0)
{
lean_ctor_set(v___x_4372_, 6, v___x_4375_);
v___x_4377_ = v___x_4372_;
goto v_reusejp_4376_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v_env_4362_);
lean_ctor_set(v_reuseFailAlloc_4380_, 1, v_nextMacroScope_4363_);
lean_ctor_set(v_reuseFailAlloc_4380_, 2, v_ngen_4364_);
lean_ctor_set(v_reuseFailAlloc_4380_, 3, v_auxDeclNGen_4365_);
lean_ctor_set(v_reuseFailAlloc_4380_, 4, v_traceState_4366_);
lean_ctor_set(v_reuseFailAlloc_4380_, 5, v_cache_4367_);
lean_ctor_set(v_reuseFailAlloc_4380_, 6, v___x_4375_);
lean_ctor_set(v_reuseFailAlloc_4380_, 7, v_infoState_4369_);
lean_ctor_set(v_reuseFailAlloc_4380_, 8, v_snapshotTasks_4370_);
v___x_4377_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4376_;
}
v_reusejp_4376_:
{
lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4378_ = lean_st_ref_put(v___y_4357_, v___x_4377_);
v___x_4379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4374_);
return v___x_4379_;
}
}
}
v___jp_4382_:
{
lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v_a_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4408_; 
v___x_4393_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4339_);
v___x_4394_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ComputedFields_getComputedFieldValue_spec__1_spec__2(v___x_4393_, v___y_4342_, v___y_4343_, v___y_4344_, v___y_4345_);
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4397_ = v___x_4394_;
v_isShared_4398_ = v_isSharedCheck_4408_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_a_4395_);
lean_dec(v___x_4394_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4408_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
lean_object* v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; 
lean_inc_ref_n(v___y_4391_, 2);
v___x_4399_ = l_Lean_FileMap_toPosition(v___y_4391_, v___y_4387_);
lean_dec(v___y_4387_);
v___x_4400_ = l_Lean_FileMap_toPosition(v___y_4391_, v___y_4392_);
lean_dec(v___y_4392_);
v___x_4401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4401_, 0, v___x_4400_);
v___x_4402_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___closed__0));
if (v___y_4390_ == 0)
{
lean_del_object(v___x_4397_);
lean_dec_ref(v___y_4385_);
v___y_4348_ = v___x_4402_;
v___y_4349_ = v___y_4386_;
v___y_4350_ = v___y_4388_;
v___y_4351_ = v___x_4401_;
v___y_4352_ = v_a_4395_;
v___y_4353_ = v___y_4389_;
v___y_4354_ = v___x_4399_;
v_currNamespace_4355_ = v___y_4384_;
v_openDecls_4356_ = v___y_4383_;
v___y_4357_ = v___y_4345_;
goto v___jp_4347_;
}
else
{
uint8_t v___x_4403_; 
lean_inc(v_a_4395_);
v___x_4403_ = l_Lean_MessageData_hasTag(v___y_4385_, v_a_4395_);
if (v___x_4403_ == 0)
{
lean_object* v___x_4404_; lean_object* v___x_4406_; 
lean_dec_ref_known(v___x_4401_, 1);
lean_dec_ref(v___x_4399_);
lean_dec(v_a_4395_);
v___x_4404_ = lean_box(0);
if (v_isShared_4398_ == 0)
{
lean_ctor_set(v___x_4397_, 0, v___x_4404_);
v___x_4406_ = v___x_4397_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v___x_4404_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
else
{
lean_del_object(v___x_4397_);
v___y_4348_ = v___x_4402_;
v___y_4349_ = v___y_4386_;
v___y_4350_ = v___y_4388_;
v___y_4351_ = v___x_4401_;
v___y_4352_ = v_a_4395_;
v___y_4353_ = v___y_4389_;
v___y_4354_ = v___x_4399_;
v_currNamespace_4355_ = v___y_4384_;
v_openDecls_4356_ = v___y_4383_;
v___y_4357_ = v___y_4345_;
goto v___jp_4347_;
}
}
}
}
v___jp_4409_:
{
lean_object* v___x_4420_; 
v___x_4420_ = l_Lean_Syntax_getTailPos_x3f(v___y_4415_, v___y_4414_);
lean_dec(v___y_4415_);
if (lean_obj_tag(v___x_4420_) == 0)
{
lean_inc(v___y_4419_);
v___y_4383_ = v___y_4410_;
v___y_4384_ = v___y_4411_;
v___y_4385_ = v___y_4412_;
v___y_4386_ = v___y_4413_;
v___y_4387_ = v___y_4419_;
v___y_4388_ = v___y_4414_;
v___y_4389_ = v___y_4416_;
v___y_4390_ = v___y_4418_;
v___y_4391_ = v___y_4417_;
v___y_4392_ = v___y_4419_;
goto v___jp_4382_;
}
else
{
lean_object* v_val_4421_; 
v_val_4421_ = lean_ctor_get(v___x_4420_, 0);
lean_inc(v_val_4421_);
lean_dec_ref_known(v___x_4420_, 1);
v___y_4383_ = v___y_4410_;
v___y_4384_ = v___y_4411_;
v___y_4385_ = v___y_4412_;
v___y_4386_ = v___y_4413_;
v___y_4387_ = v___y_4419_;
v___y_4388_ = v___y_4414_;
v___y_4389_ = v___y_4416_;
v___y_4390_ = v___y_4418_;
v___y_4391_ = v___y_4417_;
v___y_4392_ = v_val_4421_;
goto v___jp_4382_;
}
}
v___jp_4422_:
{
lean_object* v_ref_4432_; lean_object* v___x_4433_; 
v_ref_4432_ = l_Lean_replaceRef(v_ref_4338_, v___y_4428_);
v___x_4433_ = l_Lean_Syntax_getPos_x3f(v_ref_4432_, v___y_4426_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v___x_4434_; 
v___x_4434_ = lean_unsigned_to_nat(0u);
v___y_4410_ = v___y_4423_;
v___y_4411_ = v___y_4424_;
v___y_4412_ = v___y_4425_;
v___y_4413_ = v___y_4431_;
v___y_4414_ = v___y_4426_;
v___y_4415_ = v_ref_4432_;
v___y_4416_ = v___y_4427_;
v___y_4417_ = v___y_4430_;
v___y_4418_ = v___y_4429_;
v___y_4419_ = v___x_4434_;
goto v___jp_4409_;
}
else
{
lean_object* v_val_4435_; 
v_val_4435_ = lean_ctor_get(v___x_4433_, 0);
lean_inc(v_val_4435_);
lean_dec_ref_known(v___x_4433_, 1);
v___y_4410_ = v___y_4423_;
v___y_4411_ = v___y_4424_;
v___y_4412_ = v___y_4425_;
v___y_4413_ = v___y_4431_;
v___y_4414_ = v___y_4426_;
v___y_4415_ = v_ref_4432_;
v___y_4416_ = v___y_4427_;
v___y_4417_ = v___y_4430_;
v___y_4418_ = v___y_4429_;
v___y_4419_ = v_val_4435_;
goto v___jp_4409_;
}
}
v___jp_4437_:
{
if (v___y_4446_ == 0)
{
v___y_4423_ = v___y_4438_;
v___y_4424_ = v___y_4439_;
v___y_4425_ = v___y_4441_;
v___y_4426_ = v___y_4443_;
v___y_4427_ = v___y_4440_;
v___y_4428_ = v___y_4444_;
v___y_4429_ = v___y_4445_;
v___y_4430_ = v___y_4442_;
v___y_4431_ = v_severity_4340_;
goto v___jp_4422_;
}
else
{
v___y_4423_ = v___y_4438_;
v___y_4424_ = v___y_4439_;
v___y_4425_ = v___y_4441_;
v___y_4426_ = v___y_4443_;
v___y_4427_ = v___y_4440_;
v___y_4428_ = v___y_4444_;
v___y_4429_ = v___y_4445_;
v___y_4430_ = v___y_4442_;
v___y_4431_ = v___x_4436_;
goto v___jp_4422_;
}
}
v___jp_4447_:
{
if (v___y_4448_ == 0)
{
lean_object* v_toCold_4449_; lean_object* v_ref_4450_; uint8_t v_suppressElabErrors_4451_; lean_object* v_fileName_4452_; lean_object* v_fileMap_4453_; lean_object* v_options_4454_; lean_object* v_currNamespace_4455_; lean_object* v_openDecls_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___f_4459_; uint8_t v___x_4460_; uint8_t v___x_4461_; 
v_toCold_4449_ = lean_ctor_get(v___y_4344_, 0);
v_ref_4450_ = lean_ctor_get(v___y_4344_, 2);
v_suppressElabErrors_4451_ = lean_ctor_get_uint8(v___y_4344_, sizeof(void*)*3 + 1);
v_fileName_4452_ = lean_ctor_get(v_toCold_4449_, 0);
v_fileMap_4453_ = lean_ctor_get(v_toCold_4449_, 1);
v_options_4454_ = lean_ctor_get(v_toCold_4449_, 2);
v_currNamespace_4455_ = lean_ctor_get(v_toCold_4449_, 4);
v_openDecls_4456_ = lean_ctor_get(v_toCold_4449_, 5);
v___x_4457_ = lean_box(v_suppressElabErrors_4451_);
v___x_4458_ = lean_box(v___y_4448_);
v___f_4459_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4459_, 0, v___x_4457_);
lean_closure_set(v___f_4459_, 1, v___x_4458_);
v___x_4460_ = 1;
v___x_4461_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4340_, v___x_4460_);
if (v___x_4461_ == 0)
{
v___y_4438_ = v_openDecls_4456_;
v___y_4439_ = v_currNamespace_4455_;
v___y_4440_ = v_fileName_4452_;
v___y_4441_ = v___f_4459_;
v___y_4442_ = v_fileMap_4453_;
v___y_4443_ = v___y_4448_;
v___y_4444_ = v_ref_4450_;
v___y_4445_ = v_suppressElabErrors_4451_;
v___y_4446_ = v___x_4461_;
goto v___jp_4437_;
}
else
{
lean_object* v___x_4462_; uint8_t v___x_4463_; 
v___x_4462_ = l_Lean_warningAsError;
v___x_4463_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3_spec__8(v_options_4454_, v___x_4462_);
v___y_4438_ = v_openDecls_4456_;
v___y_4439_ = v_currNamespace_4455_;
v___y_4440_ = v_fileName_4452_;
v___y_4441_ = v___f_4459_;
v___y_4442_ = v_fileMap_4453_;
v___y_4443_ = v___y_4448_;
v___y_4444_ = v_ref_4450_;
v___y_4445_ = v_suppressElabErrors_4451_;
v___y_4446_ = v___x_4463_;
goto v___jp_4437_;
}
}
else
{
lean_object* v___x_4464_; lean_object* v___x_4465_; 
lean_dec_ref(v_msgData_4339_);
v___x_4464_ = lean_box(0);
v___x_4465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4465_, 0, v___x_4464_);
return v___x_4465_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3___boxed(lean_object* v_ref_4468_, lean_object* v_msgData_4469_, lean_object* v_severity_4470_, lean_object* v_isSilent_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_){
_start:
{
uint8_t v_severity_boxed_4477_; uint8_t v_isSilent_boxed_4478_; lean_object* v_res_4479_; 
v_severity_boxed_4477_ = lean_unbox(v_severity_4470_);
v_isSilent_boxed_4478_ = lean_unbox(v_isSilent_4471_);
v_res_4479_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4468_, v_msgData_4469_, v_severity_boxed_4477_, v_isSilent_boxed_4478_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_);
lean_dec(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v_ref_4468_);
return v_res_4479_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(lean_object* v_msgData_4480_, uint8_t v_severity_4481_, uint8_t v_isSilent_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v_ref_4488_; lean_object* v___x_4489_; 
v_ref_4488_ = lean_ctor_get(v___y_4485_, 2);
v___x_4489_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2_spec__3(v_ref_4488_, v_msgData_4480_, v_severity_4481_, v_isSilent_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_);
return v___x_4489_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2___boxed(lean_object* v_msgData_4490_, lean_object* v_severity_4491_, lean_object* v_isSilent_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_){
_start:
{
uint8_t v_severity_boxed_4498_; uint8_t v_isSilent_boxed_4499_; lean_object* v_res_4500_; 
v_severity_boxed_4498_ = lean_unbox(v_severity_4491_);
v_isSilent_boxed_4499_ = lean_unbox(v_isSilent_4492_);
v_res_4500_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4490_, v_severity_boxed_4498_, v_isSilent_boxed_4499_, v___y_4493_, v___y_4494_, v___y_4495_, v___y_4496_);
lean_dec(v___y_4496_);
lean_dec_ref(v___y_4495_);
lean_dec(v___y_4494_);
lean_dec_ref(v___y_4493_);
return v_res_4500_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(lean_object* v_msgData_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_){
_start:
{
uint8_t v___x_4507_; uint8_t v___x_4508_; lean_object* v___x_4509_; 
v___x_4507_ = 2;
v___x_4508_ = 0;
v___x_4509_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2_spec__2(v_msgData_4501_, v___x_4507_, v___x_4508_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_);
return v___x_4509_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2___boxed(lean_object* v_msgData_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_){
_start:
{
lean_object* v_res_4516_; 
v_res_4516_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v_msgData_4510_, v___y_4511_, v___y_4512_, v___y_4513_, v___y_4514_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___y_4512_);
lean_dec_ref(v___y_4511_);
return v_res_4516_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1(void){
_start:
{
lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4518_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__0));
v___x_4519_ = l_Lean_stringToMessageData(v___x_4518_);
return v___x_4519_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3(void){
_start:
{
lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4521_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__2));
v___x_4522_ = l_Lean_stringToMessageData(v___x_4521_);
return v___x_4522_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(lean_object* v_as_4523_, size_t v_sz_4524_, size_t v_i_4525_, lean_object* v_b_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_){
_start:
{
lean_object* v_a_4533_; uint8_t v___x_4537_; 
v___x_4537_ = lean_usize_dec_lt(v_i_4525_, v_sz_4524_);
if (v___x_4537_ == 0)
{
lean_object* v___x_4538_; 
v___x_4538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4538_, 0, v_b_4526_);
return v___x_4538_;
}
else
{
lean_object* v___x_4539_; lean_object* v_a_4540_; lean_object* v___x_4541_; lean_object* v_env_4542_; lean_object* v___x_4543_; uint8_t v___x_4544_; 
v___x_4539_ = lean_box(0);
v_a_4540_ = lean_array_uget_borrowed(v_as_4523_, v_i_4525_);
v___x_4541_ = lean_st_ref_get(v___y_4530_);
v_env_4542_ = lean_ctor_get(v___x_4541_, 0);
lean_inc_ref(v_env_4542_);
lean_dec(v___x_4541_);
v___x_4543_ = l_Lean_Elab_ComputedFields_computedFieldAttr;
lean_inc(v_a_4540_);
v___x_4544_ = l_Lean_TagAttribute_hasTag(v___x_4543_, v_env_4542_, v_a_4540_);
if (v___x_4544_ == 0)
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4545_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__1);
lean_inc(v_a_4540_);
v___x_4546_ = l_Lean_MessageData_ofName(v_a_4540_);
v___x_4547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4545_);
lean_ctor_set(v___x_4547_, 1, v___x_4546_);
v___x_4548_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___closed__3);
v___x_4549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4547_);
lean_ctor_set(v___x_4549_, 1, v___x_4548_);
v___x_4550_ = l_Lean_logError___at___00Lean_Elab_ComputedFields_setComputedFields_spec__2(v___x_4549_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_);
if (lean_obj_tag(v___x_4550_) == 0)
{
lean_dec_ref_known(v___x_4550_, 1);
v_a_4533_ = v___x_4539_;
goto v___jp_4532_;
}
else
{
return v___x_4550_;
}
}
else
{
v_a_4533_ = v___x_4539_;
goto v___jp_4532_;
}
}
v___jp_4532_:
{
size_t v___x_4534_; size_t v___x_4535_; 
v___x_4534_ = ((size_t)1ULL);
v___x_4535_ = lean_usize_add(v_i_4525_, v___x_4534_);
v_i_4525_ = v___x_4535_;
v_b_4526_ = v_a_4533_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3___boxed(lean_object* v_as_4551_, lean_object* v_sz_4552_, lean_object* v_i_4553_, lean_object* v_b_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_){
_start:
{
size_t v_sz_boxed_4560_; size_t v_i_boxed_4561_; lean_object* v_res_4562_; 
v_sz_boxed_4560_ = lean_unbox_usize(v_sz_4552_);
lean_dec(v_sz_4552_);
v_i_boxed_4561_ = lean_unbox_usize(v_i_4553_);
lean_dec(v_i_4553_);
v_res_4562_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_as_4551_, v_sz_boxed_4560_, v_i_boxed_4561_, v_b_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_);
lean_dec(v___y_4558_);
lean_dec_ref(v___y_4557_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
lean_dec_ref(v_as_4551_);
return v_res_4562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(lean_object* v_as_4563_, size_t v_sz_4564_, size_t v_i_4565_, lean_object* v_b_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_){
_start:
{
uint8_t v___x_4572_; 
v___x_4572_ = lean_usize_dec_lt(v_i_4565_, v_sz_4564_);
if (v___x_4572_ == 0)
{
lean_object* v___x_4573_; 
v___x_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4573_, 0, v_b_4566_);
return v___x_4573_;
}
else
{
lean_object* v_a_4574_; lean_object* v_fst_4575_; lean_object* v_snd_4576_; lean_object* v___x_4577_; size_t v_sz_4578_; size_t v___x_4579_; lean_object* v___x_4580_; 
v_a_4574_ = lean_array_uget_borrowed(v_as_4563_, v_i_4565_);
v_fst_4575_ = lean_ctor_get(v_a_4574_, 0);
v_snd_4576_ = lean_ctor_get(v_a_4574_, 1);
v___x_4577_ = lean_box(0);
v_sz_4578_ = lean_array_size(v_snd_4576_);
v___x_4579_ = ((size_t)0ULL);
v___x_4580_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__3(v_snd_4576_, v_sz_4578_, v___x_4579_, v___x_4577_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v___x_4581_; 
lean_dec_ref_known(v___x_4580_, 1);
lean_inc(v_snd_4576_);
lean_inc(v_fst_4575_);
v___x_4581_ = l_Lean_Elab_ComputedFields_mkComputedFieldOverrides(v_fst_4575_, v_snd_4576_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_);
if (lean_obj_tag(v___x_4581_) == 0)
{
size_t v___x_4582_; size_t v___x_4583_; 
lean_dec_ref_known(v___x_4581_, 1);
v___x_4582_ = ((size_t)1ULL);
v___x_4583_ = lean_usize_add(v_i_4565_, v___x_4582_);
v_i_4565_ = v___x_4583_;
v_b_4566_ = v___x_4577_;
goto _start;
}
else
{
return v___x_4581_;
}
}
else
{
return v___x_4580_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4___boxed(lean_object* v_as_4585_, lean_object* v_sz_4586_, lean_object* v_i_4587_, lean_object* v_b_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_){
_start:
{
size_t v_sz_boxed_4594_; size_t v_i_boxed_4595_; lean_object* v_res_4596_; 
v_sz_boxed_4594_ = lean_unbox_usize(v_sz_4586_);
lean_dec(v_sz_4586_);
v_i_boxed_4595_ = lean_unbox_usize(v_i_4587_);
lean_dec(v_i_4587_);
v_res_4596_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_as_4585_, v_sz_boxed_4594_, v_i_boxed_4595_, v_b_4588_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_);
lean_dec(v___y_4592_);
lean_dec_ref(v___y_4591_);
lean_dec(v___y_4590_);
lean_dec_ref(v___y_4589_);
lean_dec_ref(v_as_4585_);
return v_res_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(size_t v_sz_4597_, size_t v_i_4598_, lean_object* v_bs_4599_){
_start:
{
uint8_t v___x_4600_; 
v___x_4600_ = lean_usize_dec_lt(v_i_4598_, v_sz_4597_);
if (v___x_4600_ == 0)
{
return v_bs_4599_;
}
else
{
lean_object* v_v_4601_; lean_object* v_fst_4602_; lean_object* v___x_4603_; lean_object* v_bs_x27_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; size_t v___x_4608_; size_t v___x_4609_; lean_object* v___x_4610_; 
v_v_4601_ = lean_array_uget_borrowed(v_bs_4599_, v_i_4598_);
v_fst_4602_ = lean_ctor_get(v_v_4601_, 0);
lean_inc(v_fst_4602_);
v___x_4603_ = lean_unsigned_to_nat(0u);
v_bs_x27_4604_ = lean_array_uset(v_bs_4599_, v_i_4598_, v___x_4603_);
v___x_4605_ = l_Lean_mkCasesOnName(v_fst_4602_);
v___x_4606_ = ((lean_object*)(l_Lean_Elab_ComputedFields_overrideCasesOn___closed__1));
v___x_4607_ = l_Lean_Name_append(v___x_4605_, v___x_4606_);
v___x_4608_ = ((size_t)1ULL);
v___x_4609_ = lean_usize_add(v_i_4598_, v___x_4608_);
v___x_4610_ = lean_array_uset(v_bs_x27_4604_, v_i_4598_, v___x_4607_);
v_i_4598_ = v___x_4609_;
v_bs_4599_ = v___x_4610_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5___boxed(lean_object* v_sz_4612_, lean_object* v_i_4613_, lean_object* v_bs_4614_){
_start:
{
size_t v_sz_boxed_4615_; size_t v_i_boxed_4616_; lean_object* v_res_4617_; 
v_sz_boxed_4615_ = lean_unbox_usize(v_sz_4612_);
lean_dec(v_sz_4612_);
v_i_boxed_4616_ = lean_unbox_usize(v_i_4613_);
lean_dec(v_i_4613_);
v_res_4617_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_boxed_4615_, v_i_boxed_4616_, v_bs_4614_);
return v_res_4617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields(lean_object* v_computedFields_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_){
_start:
{
lean_object* v___x_4626_; size_t v_sz_4627_; size_t v___x_4628_; lean_object* v___x_4629_; 
v___x_4626_ = lean_box(0);
v_sz_4627_ = lean_array_size(v_computedFields_4620_);
v___x_4628_ = ((size_t)0ULL);
v___x_4629_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__4(v_computedFields_4620_, v_sz_4627_, v___x_4628_, v___x_4626_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v___x_4630_; uint8_t v___x_4631_; lean_object* v___x_4632_; 
lean_dec_ref_known(v___x_4629_, 1);
lean_inc_ref(v_computedFields_4620_);
v___x_4630_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_ComputedFields_setComputedFields_spec__5(v_sz_4627_, v___x_4628_, v_computedFields_4620_);
v___x_4631_ = 1;
v___x_4632_ = l_Lean_compileDecls(v___x_4630_, v___x_4631_, v_a_4623_, v_a_4624_);
if (lean_obj_tag(v___x_4632_) == 0)
{
lean_object* v___x_4633_; lean_object* v___x_4634_; 
lean_dec_ref_known(v___x_4632_, 1);
v___x_4633_ = ((lean_object*)(l_Lean_Elab_ComputedFields_setComputedFields___closed__0));
v___x_4634_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__6(v_computedFields_4620_, v_sz_4627_, v___x_4628_, v___x_4633_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_);
lean_dec_ref(v_computedFields_4620_);
if (lean_obj_tag(v___x_4634_) == 0)
{
lean_object* v_a_4635_; lean_object* v___x_4636_; 
v_a_4635_ = lean_ctor_get(v___x_4634_, 0);
lean_inc(v_a_4635_);
lean_dec_ref_known(v___x_4634_, 1);
v___x_4636_ = l_Lean_compileDecls(v_a_4635_, v___x_4631_, v_a_4623_, v_a_4624_);
return v___x_4636_;
}
else
{
lean_object* v_a_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4644_; 
v_a_4637_ = lean_ctor_get(v___x_4634_, 0);
v_isSharedCheck_4644_ = !lean_is_exclusive(v___x_4634_);
if (v_isSharedCheck_4644_ == 0)
{
v___x_4639_ = v___x_4634_;
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_a_4637_);
lean_dec(v___x_4634_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v___x_4642_; 
if (v_isShared_4640_ == 0)
{
v___x_4642_ = v___x_4639_;
goto v_reusejp_4641_;
}
else
{
lean_object* v_reuseFailAlloc_4643_; 
v_reuseFailAlloc_4643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4643_, 0, v_a_4637_);
v___x_4642_ = v_reuseFailAlloc_4643_;
goto v_reusejp_4641_;
}
v_reusejp_4641_:
{
return v___x_4642_;
}
}
}
}
else
{
lean_dec_ref(v_computedFields_4620_);
return v___x_4632_;
}
}
else
{
lean_dec_ref(v_computedFields_4620_);
return v___x_4629_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputedFields_setComputedFields___boxed(lean_object* v_computedFields_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_){
_start:
{
lean_object* v_res_4651_; 
v_res_4651_ = l_Lean_Elab_ComputedFields_setComputedFields(v_computedFields_4645_, v_a_4646_, v_a_4647_, v_a_4648_, v_a_4649_);
lean_dec(v_a_4649_);
lean_dec_ref(v_a_4648_);
lean_dec(v_a_4647_);
lean_dec_ref(v_a_4646_);
return v_res_4651_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(lean_object* v_as_4652_, lean_object* v_as_x27_4653_, lean_object* v_b_4654_, lean_object* v_a_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_){
_start:
{
lean_object* v___x_4661_; 
v___x_4661_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___redArg(v_as_x27_4653_, v_b_4654_);
return v___x_4661_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0___boxed(lean_object* v_as_4662_, lean_object* v_as_x27_4663_, lean_object* v_b_4664_, lean_object* v_a_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_){
_start:
{
lean_object* v_res_4671_; 
v_res_4671_ = l_List_forIn_x27_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__0(v_as_4662_, v_as_x27_4663_, v_b_4664_, v_a_4665_, v___y_4666_, v___y_4667_, v___y_4668_, v___y_4669_);
lean_dec(v___y_4669_);
lean_dec_ref(v___y_4668_);
lean_dec(v___y_4667_);
lean_dec_ref(v___y_4666_);
lean_dec(v_as_x27_4663_);
lean_dec(v_as_4662_);
return v_res_4671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(lean_object* v_as_4672_, size_t v_sz_4673_, size_t v_i_4674_, lean_object* v_b_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_){
_start:
{
lean_object* v___x_4681_; 
v___x_4681_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___redArg(v_as_4672_, v_sz_4673_, v_i_4674_, v_b_4675_, v___y_4679_);
return v___x_4681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1___boxed(lean_object* v_as_4682_, lean_object* v_sz_4683_, lean_object* v_i_4684_, lean_object* v_b_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_){
_start:
{
size_t v_sz_boxed_4691_; size_t v_i_boxed_4692_; lean_object* v_res_4693_; 
v_sz_boxed_4691_ = lean_unbox_usize(v_sz_4683_);
lean_dec(v_sz_4683_);
v_i_boxed_4692_ = lean_unbox_usize(v_i_4684_);
lean_dec(v_i_4684_);
v_res_4693_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_ComputedFields_setComputedFields_spec__1(v_as_4682_, v_sz_boxed_4691_, v_i_boxed_4692_, v_b_4685_, v___y_4686_, v___y_4687_, v___y_4688_, v___y_4689_);
lean_dec(v___y_4689_);
lean_dec_ref(v___y_4688_);
lean_dec(v___y_4687_);
lean_dec_ref(v___y_4686_);
lean_dec_ref(v_as_4682_);
return v_res_4693_;
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
