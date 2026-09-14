// Lean compiler output
// Module: Lean.Elab.Tactic.NewType
// Imports: public import Lean.Elab.Tactic.Basic public import Lean.Meta.VirtualStructure import Lean.Elab.Tactic.Config
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_shift(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_checkNotBool(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalTerm_checkExpectedNumberOfArguments(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalTerm_withSimpleEvalStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
uint8_t l_Lean_Expr_hasSorry(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Environment_getVirtualStructureInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_reducibilityExtraExt;
lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_ScopedEnvExtension_popScope___redArg(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_pushScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_popScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setLocalReducibilityStatus___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "implicitReducible"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instanceReducible"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "UnsealingNewtypeReducibility"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___boxed, .m_arity = 13, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1_value),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__3_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 69, 166, 250, 237, 120, 243, 49)}};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility;
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "UnsealingNewtypeConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 110, 121, 120, 38, 160, 62, 65)}};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__6;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Expression contains `sorry`:"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reducibility"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 110, 121, 120, 38, 160, 62, 65)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(76, 27, 50, 137, 52, 88, 46, 116)}};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_UnsealingNewtypeReducibility_toReducibilityStatus(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_UnsealingNewtypeReducibility_toReducibilityStatus___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__6(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___boxed(lean_object*);
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.ResolveName"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.ensureNonAmbiguous"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ambiguous identifier `"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, possible interpretations: "};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3_spec__10(lean_object*, lean_object*);
static const lean_array_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__0_value;
static const lean_string_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__1_value;
static const lean_ctor_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__1_value)}};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "' is not a `newtype`-declared type"};
static const lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unsealingNewtype"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(239, 183, 190, 112, 31, 207, 91, 94)}};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "evalUnsealingNewtype"};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(180, 244, 49, 54, 241, 189, 250, 162)}};
static const lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v_fst_2_; 
v_fst_2_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_fst_2_);
return v_fst_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__0___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__0(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__1(lean_object* v___x_5_, lean_object* v_x_6_){
_start:
{
lean_inc(v___x_5_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__1___boxed(lean_object* v___x_7_, lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__1(v___x_7_, v_x_8_);
lean_dec(v_x_8_);
lean_dec(v___x_7_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__2(lean_object* v_toFunctor_10_, lean_object* v___x_11_, lean_object* v_modifyEnv_12_, lean_object* v_inst_13_, lean_object* v_t_14_, lean_object* v___f_15_, lean_object* v_____s_16_){
_start:
{
lean_object* v_map_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___f_20_; lean_object* v_y_21_; lean_object* v___x_22_; 
v_map_17_ = lean_ctor_get(v_toFunctor_10_, 0);
lean_inc(v_map_17_);
lean_dec_ref(v_toFunctor_10_);
v___x_18_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_popScope), 5, 4);
lean_closure_set(v___x_18_, 0, lean_box(0));
lean_closure_set(v___x_18_, 1, lean_box(0));
lean_closure_set(v___x_18_, 2, lean_box(0));
lean_closure_set(v___x_18_, 3, v___x_11_);
v___x_19_ = lean_apply_1(v_modifyEnv_12_, v___x_18_);
v___f_20_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_20_, 0, v___x_19_);
v_y_21_ = lean_apply_4(v_inst_13_, lean_box(0), lean_box(0), v_t_14_, v___f_20_);
v___x_22_ = lean_apply_4(v_map_17_, lean_box(0), lean_box(0), v___f_15_, v_y_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__3(lean_object* v___x_23_, lean_object* v_toPure_24_, lean_object* v_____r_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_23_);
v___x_27_ = lean_apply_2(v_toPure_24_, lean_box(0), v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__4(lean_object* v_inst_28_, uint8_t v_status_29_, lean_object* v_toBind_30_, lean_object* v___f_31_, lean_object* v_a_32_, lean_object* v_x_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = l_Lean_setLocalReducibilityStatus___redArg(v_inst_28_, v_a_32_, v_status_29_);
v___x_36_ = lean_apply_4(v_toBind_30_, lean_box(0), lean_box(0), v___x_35_, v___f_31_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__4___boxed(lean_object* v_inst_37_, lean_object* v_status_38_, lean_object* v_toBind_39_, lean_object* v___f_40_, lean_object* v_a_41_, lean_object* v_x_42_, lean_object* v___y_43_){
_start:
{
uint8_t v_status_boxed_44_; lean_object* v_res_45_; 
v_status_boxed_44_ = lean_unbox(v_status_38_);
v_res_45_ = l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__4(v_inst_37_, v_status_boxed_44_, v_toBind_39_, v___f_40_, v_a_41_, v_x_42_, v___y_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__5(lean_object* v_toPure_46_, lean_object* v_inst_47_, uint8_t v_status_48_, lean_object* v_toBind_49_, lean_object* v_names_50_, lean_object* v_inst_51_, lean_object* v___f_52_, lean_object* v_____r_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___f_55_; lean_object* v___x_56_; lean_object* v___f_57_; size_t v_sz_58_; size_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_54_ = lean_box(0);
v___f_55_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__3), 3, 2);
lean_closure_set(v___f_55_, 0, v___x_54_);
lean_closure_set(v___f_55_, 1, v_toPure_46_);
v___x_56_ = lean_box(v_status_48_);
lean_inc(v_toBind_49_);
v___f_57_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_57_, 0, v_inst_47_);
lean_closure_set(v___f_57_, 1, v___x_56_);
lean_closure_set(v___f_57_, 2, v_toBind_49_);
lean_closure_set(v___f_57_, 3, v___f_55_);
v_sz_58_ = lean_array_size(v_names_50_);
v___x_59_ = ((size_t)0ULL);
v___x_60_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_51_, v_names_50_, v___f_57_, v_sz_58_, v___x_59_, v___x_54_);
v___x_61_ = lean_apply_4(v_toBind_49_, lean_box(0), lean_box(0), v___x_60_, v___f_52_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__5___boxed(lean_object* v_toPure_62_, lean_object* v_inst_63_, lean_object* v_status_64_, lean_object* v_toBind_65_, lean_object* v_names_66_, lean_object* v_inst_67_, lean_object* v___f_68_, lean_object* v_____r_69_){
_start:
{
uint8_t v_status_boxed_70_; lean_object* v_res_71_; 
v_status_boxed_70_ = lean_unbox(v_status_64_);
v_res_71_ = l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__5(v_toPure_62_, v_inst_63_, v_status_boxed_70_, v_toBind_65_, v_names_66_, v_inst_67_, v___f_68_, v_____r_69_);
return v_res_71_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__1(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = l_Lean_reducibilityExtraExt;
v___x_74_ = lean_alloc_closure((void*)(l_Lean_ScopedEnvExtension_pushScope), 5, 4);
lean_closure_set(v___x_74_, 0, lean_box(0));
lean_closure_set(v___x_74_, 1, lean_box(0));
lean_closure_set(v___x_74_, 2, lean_box(0));
lean_closure_set(v___x_74_, 3, v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg(lean_object* v_inst_75_, lean_object* v_inst_76_, lean_object* v_inst_77_, lean_object* v_names_78_, uint8_t v_status_79_, lean_object* v_t_80_){
_start:
{
lean_object* v_toApplicative_81_; lean_object* v_toBind_82_; lean_object* v_modifyEnv_83_; lean_object* v_toFunctor_84_; lean_object* v_toPure_85_; lean_object* v___f_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___f_90_; lean_object* v___x_91_; lean_object* v___f_92_; lean_object* v___x_93_; 
v_toApplicative_81_ = lean_ctor_get(v_inst_75_, 0);
v_toBind_82_ = lean_ctor_get(v_inst_75_, 1);
lean_inc_n(v_toBind_82_, 2);
v_modifyEnv_83_ = lean_ctor_get(v_inst_76_, 1);
v_toFunctor_84_ = lean_ctor_get(v_toApplicative_81_, 0);
v_toPure_85_ = lean_ctor_get(v_toApplicative_81_, 1);
lean_inc(v_toPure_85_);
v___f_86_ = ((lean_object*)(l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__0));
v___x_87_ = l_Lean_reducibilityExtraExt;
v___x_88_ = lean_obj_once(&l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__1, &l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_unsealingNewtype___redArg___closed__1);
lean_inc_n(v_modifyEnv_83_, 2);
v___x_89_ = lean_apply_1(v_modifyEnv_83_, v___x_88_);
lean_inc_ref(v_toFunctor_84_);
v___f_90_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__2), 7, 6);
lean_closure_set(v___f_90_, 0, v_toFunctor_84_);
lean_closure_set(v___f_90_, 1, v___x_87_);
lean_closure_set(v___f_90_, 2, v_modifyEnv_83_);
lean_closure_set(v___f_90_, 3, v_inst_77_);
lean_closure_set(v___f_90_, 4, v_t_80_);
lean_closure_set(v___f_90_, 5, v___f_86_);
v___x_91_ = lean_box(v_status_79_);
v___f_92_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingNewtype___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_92_, 0, v_toPure_85_);
lean_closure_set(v___f_92_, 1, v_inst_76_);
lean_closure_set(v___f_92_, 2, v___x_91_);
lean_closure_set(v___f_92_, 3, v_toBind_82_);
lean_closure_set(v___f_92_, 4, v_names_78_);
lean_closure_set(v___f_92_, 5, v_inst_75_);
lean_closure_set(v___f_92_, 6, v___f_90_);
v___x_93_ = lean_apply_4(v_toBind_82_, lean_box(0), lean_box(0), v___x_89_, v___f_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___redArg___boxed(lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_names_97_, lean_object* v_status_98_, lean_object* v_t_99_){
_start:
{
uint8_t v_status_boxed_100_; lean_object* v_res_101_; 
v_status_boxed_100_ = lean_unbox(v_status_98_);
v_res_101_ = l_Lean_Elab_Tactic_unsealingNewtype___redArg(v_inst_94_, v_inst_95_, v_inst_96_, v_names_97_, v_status_boxed_100_, v_t_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype(lean_object* v_m_102_, lean_object* v_00_u03b1_103_, lean_object* v_inst_104_, lean_object* v_inst_105_, lean_object* v_inst_106_, lean_object* v_names_107_, uint8_t v_status_108_, lean_object* v_t_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Elab_Tactic_unsealingNewtype___redArg(v_inst_104_, v_inst_105_, v_inst_106_, v_names_107_, v_status_108_, v_t_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___boxed(lean_object* v_m_111_, lean_object* v_00_u03b1_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_inst_115_, lean_object* v_names_116_, lean_object* v_status_117_, lean_object* v_t_118_){
_start:
{
uint8_t v_status_boxed_119_; lean_object* v_res_120_; 
v_status_boxed_119_ = lean_unbox(v_status_117_);
v_res_120_ = l_Lean_Elab_Tactic_unsealingNewtype(v_m_111_, v_00_u03b1_112_, v_inst_113_, v_inst_114_, v_inst_115_, v_names_116_, v_status_boxed_119_, v_t_118_);
return v_res_120_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_121_ = lean_box(0);
v___x_122_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
lean_ctor_set(v___x_123_, 1, v___x_121_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg(){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___closed__0);
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg___boxed(lean_object* v___y_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg();
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0(lean_object* v_00_u03b1_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg();
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___boxed(lean_object* v_00_u03b1_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0(v_00_u03b1_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0(lean_object* v___x_151_, lean_object* v___x_152_, lean_object* v___x_153_, lean_object* v___x_154_, lean_object* v_ctor_155_, lean_object* v_args_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__0));
v___x_165_ = lean_string_dec_eq(v_ctor_155_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__1));
v___x_167_ = lean_string_dec_eq(v_ctor_155_, v___x_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__2));
v___x_169_ = lean_string_dec_eq(v_ctor_155_, v___x_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__3));
v___x_171_ = lean_string_dec_eq(v_ctor_155_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
lean_dec_ref(v___x_154_);
lean_dec_ref(v___x_153_);
lean_dec_ref(v___x_152_);
lean_dec_ref(v___x_151_);
v___x_172_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm_spec__0___redArg();
return v___x_172_;
}
else
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_173_ = l_Lean_Name_mkStr5(v___x_151_, v___x_152_, v___x_153_, v___x_154_, v___x_170_);
v___x_174_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_173_);
v___x_175_ = l_Lean_Elab_ConfigEval_EvalTerm_checkExpectedNumberOfArguments(v___x_173_, v___x_174_, v_args_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_187_; 
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_187_ == 0)
{
lean_object* v_unused_188_; 
v_unused_188_ = lean_ctor_get(v___x_175_, 0);
lean_dec(v_unused_188_);
v___x_177_ = v___x_175_;
v_isShared_178_ = v_isSharedCheck_187_;
goto v_resetjp_176_;
}
else
{
lean_dec(v___x_175_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_187_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
uint8_t v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_185_; 
v___x_179_ = 3;
v___x_180_ = lean_box(0);
v___x_181_ = l_Lean_Expr_const___override(v___x_173_, v___x_180_);
v___x_182_ = lean_box(v___x_179_);
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 0, v___x_183_);
v___x_185_ = v___x_177_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v___x_183_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
lean_dec(v___x_173_);
v_a_189_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_175_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_175_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
}
else
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_197_ = l_Lean_Name_mkStr5(v___x_151_, v___x_152_, v___x_153_, v___x_154_, v___x_168_);
v___x_198_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_197_);
v___x_199_ = l_Lean_Elab_ConfigEval_EvalTerm_checkExpectedNumberOfArguments(v___x_197_, v___x_198_, v_args_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_211_; 
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_211_ == 0)
{
lean_object* v_unused_212_; 
v_unused_212_ = lean_ctor_get(v___x_199_, 0);
lean_dec(v_unused_212_);
v___x_201_ = v___x_199_;
v_isShared_202_ = v_isSharedCheck_211_;
goto v_resetjp_200_;
}
else
{
lean_dec(v___x_199_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_211_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
uint8_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_209_; 
v___x_203_ = 0;
v___x_204_ = lean_box(0);
v___x_205_ = l_Lean_Expr_const___override(v___x_197_, v___x_204_);
v___x_206_ = lean_box(v___x_203_);
v___x_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_207_, 0, v___x_206_);
lean_ctor_set(v___x_207_, 1, v___x_205_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_207_);
v___x_209_ = v___x_201_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v___x_207_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
lean_dec(v___x_197_);
v_a_213_ = lean_ctor_get(v___x_199_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_199_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_199_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_199_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
else
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_221_ = l_Lean_Name_mkStr5(v___x_151_, v___x_152_, v___x_153_, v___x_154_, v___x_166_);
v___x_222_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_221_);
v___x_223_ = l_Lean_Elab_ConfigEval_EvalTerm_checkExpectedNumberOfArguments(v___x_221_, v___x_222_, v_args_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
if (lean_obj_tag(v___x_223_) == 0)
{
lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_235_; 
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_235_ == 0)
{
lean_object* v_unused_236_; 
v_unused_236_ = lean_ctor_get(v___x_223_, 0);
lean_dec(v_unused_236_);
v___x_225_ = v___x_223_;
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
else
{
lean_dec(v___x_223_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_235_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
uint8_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_233_; 
v___x_227_ = 1;
v___x_228_ = lean_box(0);
v___x_229_ = l_Lean_Expr_const___override(v___x_221_, v___x_228_);
v___x_230_ = lean_box(v___x_227_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
lean_ctor_set(v___x_231_, 1, v___x_229_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_231_);
v___x_233_ = v___x_225_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v___x_231_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec(v___x_221_);
v_a_237_ = lean_ctor_get(v___x_223_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_223_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_223_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_223_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
else
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_245_ = l_Lean_Name_mkStr5(v___x_151_, v___x_152_, v___x_153_, v___x_154_, v___x_164_);
v___x_246_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_245_);
v___x_247_ = l_Lean_Elab_ConfigEval_EvalTerm_checkExpectedNumberOfArguments(v___x_245_, v___x_246_, v_args_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_259_; 
v_isSharedCheck_259_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_259_ == 0)
{
lean_object* v_unused_260_; 
v_unused_260_ = lean_ctor_get(v___x_247_, 0);
lean_dec(v_unused_260_);
v___x_249_ = v___x_247_;
v_isShared_250_ = v_isSharedCheck_259_;
goto v_resetjp_248_;
}
else
{
lean_dec(v___x_247_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_259_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
uint8_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_251_ = 2;
v___x_252_ = lean_box(0);
v___x_253_ = l_Lean_Expr_const___override(v___x_245_, v___x_252_);
v___x_254_ = lean_box(v___x_251_);
v___x_255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set(v___x_255_, 1, v___x_253_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_255_);
v___x_257_ = v___x_249_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___x_255_);
v___x_257_ = v_reuseFailAlloc_258_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
return v___x_257_;
}
}
}
else
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_268_; 
lean_dec(v___x_245_);
v_a_261_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_268_ == 0)
{
v___x_263_ = v___x_247_;
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_247_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_268_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_266_; 
if (v_isShared_264_ == 0)
{
v___x_266_ = v___x_263_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v_a_261_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___boxed(lean_object* v___x_269_, lean_object* v___x_270_, lean_object* v___x_271_, lean_object* v___x_272_, lean_object* v_ctor_273_, lean_object* v_args_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0(v___x_269_, v___x_270_, v___x_271_, v___x_272_, v_ctor_273_, v_args_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec_ref(v_args_274_);
lean_dec_ref(v_ctor_273_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm(lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___f_305_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__4));
v___x_306_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5));
v___x_307_ = l_Lean_Elab_ConfigEval_EvalTerm_withSimpleEvalStx___redArg(v___x_306_, v___f_305_, v_a_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___boxed(lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm(v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_);
lean_dec(v_a_314_);
lean_dec_ref(v_a_313_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
return v_res_316_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_318_ = lean_box(0);
v___x_319_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5));
v___x_320_ = l_Lean_Expr_const___override(v___x_319_, v___x_318_);
return v___x_320_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__2(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1);
v___x_322_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__0));
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v___x_321_);
return v___x_323_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility(void){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__2, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__2_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__2);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_325_ = lean_box(0);
v___x_326_ = l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
v___x_327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
lean_ctor_set(v___x_327_, 1, v___x_325_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg(){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___closed__0);
v___x_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg___boxed(lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg();
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0(lean_object* v_00_u03b1_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg();
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___boxed(lean_object* v_00_u03b1_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0(v_00_u03b1_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(lean_object* v_msgData_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v___x_353_; lean_object* v_env_354_; lean_object* v___x_355_; lean_object* v_toCold_356_; lean_object* v_mctx_357_; lean_object* v_lctx_358_; lean_object* v_options_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_353_ = lean_st_ref_get(v___y_351_);
v_env_354_ = lean_ctor_get(v___x_353_, 0);
lean_inc_ref(v_env_354_);
lean_dec(v___x_353_);
v___x_355_ = lean_st_ref_get(v___y_349_);
v_toCold_356_ = lean_ctor_get(v___y_350_, 0);
v_mctx_357_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_mctx_357_);
lean_dec(v___x_355_);
v_lctx_358_ = lean_ctor_get(v___y_348_, 2);
v_options_359_ = lean_ctor_get(v_toCold_356_, 2);
lean_inc_ref(v_options_359_);
lean_inc_ref(v_lctx_358_);
v___x_360_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_360_, 0, v_env_354_);
lean_ctor_set(v___x_360_, 1, v_mctx_357_);
lean_ctor_set(v___x_360_, 2, v_lctx_358_);
lean_ctor_set(v___x_360_, 3, v_options_359_);
v___x_361_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v_msgData_347_);
v___x_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1___boxed(lean_object* v_msgData_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(v_msgData_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(lean_object* v_msg_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_ref_376_; lean_object* v___x_377_; lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_386_; 
v_ref_376_ = lean_ctor_get(v___y_373_, 2);
v___x_377_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(v_msg_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
v_a_378_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_386_ == 0)
{
v___x_380_ = v___x_377_;
v_isShared_381_ = v_isSharedCheck_386_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_377_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_386_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_384_; 
lean_inc(v_ref_376_);
v___x_382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_382_, 0, v_ref_376_);
lean_ctor_set(v___x_382_, 1, v_a_378_);
if (v_isShared_381_ == 0)
{
lean_ctor_set_tag(v___x_380_, 1);
lean_ctor_set(v___x_380_, 0, v___x_382_);
v___x_384_ = v___x_380_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg___boxed(lean_object* v_msg_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(v_msg_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
return v_res_393_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__0));
v___x_396_ = l_Lean_stringToMessageData(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0(lean_object* v_ctor_397_, lean_object* v_args_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__0));
v___x_421_ = lean_string_dec_eq(v_ctor_397_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__1));
v___x_423_ = lean_string_dec_eq(v_ctor_397_, v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__2));
v___x_425_ = lean_string_dec_eq(v_ctor_397_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___lam__0___closed__3));
v___x_427_ = lean_string_dec_eq(v_ctor_397_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg();
return v___x_428_;
}
else
{
lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_429_ = lean_array_get_size(v_args_398_);
v___x_430_ = lean_unsigned_to_nat(0u);
v___x_431_ = lean_nat_dec_eq(v___x_429_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v___x_432_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1);
v___x_433_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(v___x_432_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
goto v___jp_404_;
}
}
}
else
{
lean_object* v___x_442_; lean_object* v___x_443_; uint8_t v___x_444_; 
v___x_442_ = lean_array_get_size(v_args_398_);
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_nat_dec_eq(v___x_442_, v___x_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
v___x_445_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1);
v___x_446_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(v___x_445_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
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
else
{
goto v___jp_408_;
}
}
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_455_ = lean_array_get_size(v_args_398_);
v___x_456_ = lean_unsigned_to_nat(0u);
v___x_457_ = lean_nat_dec_eq(v___x_455_, v___x_456_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v___x_458_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1);
v___x_459_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(v___x_458_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
else
{
goto v___jp_412_;
}
}
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_468_ = lean_array_get_size(v_args_398_);
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = lean_nat_dec_eq(v___x_468_, v___x_469_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
v___x_471_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1);
v___x_472_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(v___x_471_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
else
{
goto v___jp_416_;
}
}
v___jp_404_:
{
uint8_t v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = 3;
v___x_406_ = lean_box(v___x_405_);
v___x_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
return v___x_407_;
}
v___jp_408_:
{
uint8_t v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___x_409_ = 0;
v___x_410_ = lean_box(v___x_409_);
v___x_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
return v___x_411_;
}
v___jp_412_:
{
uint8_t v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_413_ = 1;
v___x_414_ = lean_box(v___x_413_);
v___x_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_415_, 0, v___x_414_);
return v___x_415_;
}
v___jp_416_:
{
uint8_t v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = 2;
v___x_418_ = lean_box(v___x_417_);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v___x_418_);
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___boxed(lean_object* v_ctor_481_, lean_object* v_args_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0(v_ctor_481_, v_args_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec_ref(v_args_482_);
lean_dec_ref(v_ctor_481_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr(lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v___f_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___f_496_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___closed__0));
v___x_497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5));
v___x_498_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_497_, v___f_496_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___boxed(lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr(v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_);
lean_dec(v_a_503_);
lean_dec_ref(v_a_502_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1(lean_object* v_00_u03b1_506_, lean_object* v_msg_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(v_msg_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___boxed(lean_object* v_00_u03b1_514_, lean_object* v_msg_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1(v_00_u03b1_514_, v_msg_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
return v_res_521_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1);
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__2(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_525_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1);
v___x_526_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__0));
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
lean_ctor_set(v___x_527_, 1, v___x_525_);
return v___x_527_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__2, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__2_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__2);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0(lean_object* v___x_530_, lean_object* v_ctor_531_, lean_object* v_args_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_558_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0___closed__0));
v___x_559_ = lean_string_dec_eq(v_ctor_531_, v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__0___redArg();
return v___x_560_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_561_ = lean_array_get_size(v_args_532_);
v___x_562_ = lean_unsigned_to_nat(1u);
v___x_563_ = lean_nat_dec_eq(v___x_561_, v___x_562_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v_a_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_573_; 
v___x_564_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___lam__0___closed__1);
v___x_565_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1___redArg(v___x_564_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
v_a_566_ = lean_ctor_get(v___x_565_, 0);
v_isSharedCheck_573_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_573_ == 0)
{
v___x_568_ = v___x_565_;
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_a_566_);
lean_dec(v___x_565_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_573_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
lean_object* v___x_571_; 
if (v_isShared_569_ == 0)
{
v___x_571_ = v___x_568_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_a_566_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
return v___x_571_;
}
}
}
else
{
goto v___jp_538_;
}
}
v___jp_538_:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_539_ = lean_unsigned_to_nat(0u);
v___x_540_ = lean_array_get_borrowed(v___x_530_, v_args_532_, v___x_539_);
lean_inc(v___x_540_);
v___x_541_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr(v___x_540_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_541_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_541_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
v_a_550_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_541_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_541_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0___boxed(lean_object* v___x_574_, lean_object* v_ctor_575_, lean_object* v_args_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0(v___x_574_, v_ctor_575_, v_args_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec_ref(v_args_576_);
lean_dec_ref(v_ctor_575_);
lean_dec_ref(v___x_574_);
return v_res_582_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0(void){
_start:
{
lean_object* v___x_583_; lean_object* v___f_584_; 
v___x_583_ = l_Lean_instInhabitedExpr;
v___f_584_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___lam__0___boxed), 8, 1);
lean_closure_set(v___f_584_, 0, v___x_583_);
return v___f_584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr(lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
lean_object* v___f_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___f_597_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0);
v___x_598_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2));
v___x_599_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_598_, v___f_597_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___boxed(lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr(v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
return v_res_606_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_box(0);
v___x_609_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2));
v___x_610_ = l_Lean_Expr_const___override(v___x_609_, v___x_608_);
return v___x_610_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1);
v___x_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__3(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2);
v___x_614_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__0));
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___x_613_);
return v___x_615_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__3, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__3_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__3);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(lean_object* v_e_617_, lean_object* v___y_618_){
_start:
{
uint8_t v___x_620_; 
v___x_620_ = l_Lean_Expr_hasMVar(v_e_617_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; 
v___x_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_621_, 0, v_e_617_);
return v___x_621_;
}
else
{
lean_object* v___x_622_; lean_object* v_mctx_623_; lean_object* v___x_624_; lean_object* v_fst_625_; lean_object* v_snd_626_; lean_object* v___x_627_; lean_object* v_cache_628_; lean_object* v_zetaDeltaFVarIds_629_; lean_object* v_postponed_630_; lean_object* v_diag_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_640_; 
v___x_622_ = lean_st_ref_get(v___y_618_);
v_mctx_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc_ref(v_mctx_623_);
lean_dec(v___x_622_);
v___x_624_ = l_Lean_instantiateMVarsCore(v_mctx_623_, v_e_617_);
v_fst_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_fst_625_);
v_snd_626_ = lean_ctor_get(v___x_624_, 1);
lean_inc(v_snd_626_);
lean_dec_ref(v___x_624_);
v___x_627_ = lean_st_ref_take(v___y_618_);
v_cache_628_ = lean_ctor_get(v___x_627_, 1);
v_zetaDeltaFVarIds_629_ = lean_ctor_get(v___x_627_, 2);
v_postponed_630_ = lean_ctor_get(v___x_627_, 3);
v_diag_631_ = lean_ctor_get(v___x_627_, 4);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v___x_627_, 0);
lean_dec(v_unused_641_);
v___x_633_ = v___x_627_;
v_isShared_634_ = v_isSharedCheck_640_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_diag_631_);
lean_inc(v_postponed_630_);
lean_inc(v_zetaDeltaFVarIds_629_);
lean_inc(v_cache_628_);
lean_dec(v___x_627_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_640_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 0, v_snd_626_);
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_snd_626_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v_cache_628_);
lean_ctor_set(v_reuseFailAlloc_639_, 2, v_zetaDeltaFVarIds_629_);
lean_ctor_set(v_reuseFailAlloc_639_, 3, v_postponed_630_);
lean_ctor_set(v_reuseFailAlloc_639_, 4, v_diag_631_);
v___x_636_ = v_reuseFailAlloc_639_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_637_ = lean_st_ref_put(v___y_618_, v___x_636_);
v___x_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_638_, 0, v_fst_625_);
return v___x_638_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg___boxed(lean_object* v_e_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(v_e_642_, v___y_643_);
lean_dec(v___y_643_);
return v_res_645_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_646_ = lean_box(0);
v___x_647_ = l_Lean_Elab_abortTermExceptionId;
v___x_648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
lean_ctor_set(v___x_648_, 1, v___x_646_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg(){
_start:
{
lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_650_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0);
v___x_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg___boxed(lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg();
return v_res_653_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(lean_object* v_opts_654_, lean_object* v_opt_655_){
_start:
{
lean_object* v_name_656_; lean_object* v_defValue_657_; lean_object* v_map_658_; lean_object* v___x_659_; 
v_name_656_ = lean_ctor_get(v_opt_655_, 0);
v_defValue_657_ = lean_ctor_get(v_opt_655_, 1);
v_map_658_ = lean_ctor_get(v_opts_654_, 0);
v___x_659_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_658_, v_name_656_);
if (lean_obj_tag(v___x_659_) == 0)
{
uint8_t v___x_660_; 
v___x_660_ = lean_unbox(v_defValue_657_);
return v___x_660_;
}
else
{
lean_object* v_val_661_; 
v_val_661_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_val_661_);
lean_dec_ref_known(v___x_659_, 1);
if (lean_obj_tag(v_val_661_) == 1)
{
uint8_t v_v_662_; 
v_v_662_ = lean_ctor_get_uint8(v_val_661_, 0);
lean_dec_ref_known(v_val_661_, 0);
return v_v_662_;
}
else
{
uint8_t v___x_663_; 
lean_dec(v_val_661_);
v___x_663_ = lean_unbox(v_defValue_657_);
return v___x_663_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6___boxed(lean_object* v_opts_664_, lean_object* v_opt_665_){
_start:
{
uint8_t v_res_666_; lean_object* v_r_667_; 
v_res_666_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_opts_664_, v_opt_665_);
lean_dec_ref(v_opt_665_);
lean_dec_ref(v_opts_664_);
v_r_667_ = lean_box(v_res_666_);
return v_r_667_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_box(1);
v___x_669_ = l_Lean_MessageData_ofFormat(v___x_668_);
return v___x_669_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2));
v___x_674_ = l_Lean_MessageData_ofFormat(v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(lean_object* v_x_675_, lean_object* v_x_676_){
_start:
{
if (lean_obj_tag(v_x_676_) == 0)
{
return v_x_675_;
}
else
{
lean_object* v_head_677_; lean_object* v_tail_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_700_; 
v_head_677_ = lean_ctor_get(v_x_676_, 0);
v_tail_678_ = lean_ctor_get(v_x_676_, 1);
v_isSharedCheck_700_ = !lean_is_exclusive(v_x_676_);
if (v_isSharedCheck_700_ == 0)
{
v___x_680_ = v_x_676_;
v_isShared_681_ = v_isSharedCheck_700_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_tail_678_);
lean_inc(v_head_677_);
lean_dec(v_x_676_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_700_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v_before_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_698_; 
v_before_682_ = lean_ctor_get(v_head_677_, 0);
v_isSharedCheck_698_ = !lean_is_exclusive(v_head_677_);
if (v_isSharedCheck_698_ == 0)
{
lean_object* v_unused_699_; 
v_unused_699_ = lean_ctor_get(v_head_677_, 1);
lean_dec(v_unused_699_);
v___x_684_ = v_head_677_;
v_isShared_685_ = v_isSharedCheck_698_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_before_682_);
lean_dec(v_head_677_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_698_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_686_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0);
if (v_isShared_685_ == 0)
{
lean_ctor_set_tag(v___x_684_, 7);
lean_ctor_set(v___x_684_, 1, v___x_686_);
lean_ctor_set(v___x_684_, 0, v_x_675_);
v___x_688_ = v___x_684_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v_x_675_);
lean_ctor_set(v_reuseFailAlloc_697_, 1, v___x_686_);
v___x_688_ = v_reuseFailAlloc_697_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v_isShared_681_ == 0)
{
lean_ctor_set_tag(v___x_680_, 7);
lean_ctor_set(v___x_680_, 1, v___x_689_);
lean_ctor_set(v___x_680_, 0, v___x_688_);
v___x_691_ = v___x_680_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v___x_689_);
v___x_691_ = v_reuseFailAlloc_696_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = l_Lean_MessageData_ofSyntax(v_before_682_);
v___x_693_ = l_Lean_indentD(v___x_692_);
v___x_694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_691_);
lean_ctor_set(v___x_694_, 1, v___x_693_);
v_x_675_ = v___x_694_;
v_x_676_ = v_tail_678_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1));
v___x_705_ = l_Lean_MessageData_ofFormat(v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(lean_object* v_msgData_706_, lean_object* v_macroStack_707_, lean_object* v___y_708_){
_start:
{
lean_object* v_toCold_710_; lean_object* v_options_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v_toCold_710_ = lean_ctor_get(v___y_708_, 0);
v_options_711_ = lean_ctor_get(v_toCold_710_, 2);
v___x_712_ = l_Lean_Elab_pp_macroStack;
v___x_713_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_711_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; 
lean_dec(v_macroStack_707_);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v_msgData_706_);
return v___x_714_;
}
else
{
if (lean_obj_tag(v_macroStack_707_) == 0)
{
lean_object* v___x_715_; 
v___x_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_715_, 0, v_msgData_706_);
return v___x_715_;
}
else
{
lean_object* v_head_716_; lean_object* v_after_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_732_; 
v_head_716_ = lean_ctor_get(v_macroStack_707_, 0);
lean_inc(v_head_716_);
v_after_717_ = lean_ctor_get(v_head_716_, 1);
v_isSharedCheck_732_ = !lean_is_exclusive(v_head_716_);
if (v_isSharedCheck_732_ == 0)
{
lean_object* v_unused_733_; 
v_unused_733_ = lean_ctor_get(v_head_716_, 0);
lean_dec(v_unused_733_);
v___x_719_ = v_head_716_;
v_isShared_720_ = v_isSharedCheck_732_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_after_717_);
lean_dec(v_head_716_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_732_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; lean_object* v___x_723_; 
v___x_721_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0);
if (v_isShared_720_ == 0)
{
lean_ctor_set_tag(v___x_719_, 7);
lean_ctor_set(v___x_719_, 1, v___x_721_);
lean_ctor_set(v___x_719_, 0, v_msgData_706_);
v___x_723_ = v___x_719_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_msgData_706_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_721_);
v___x_723_ = v_reuseFailAlloc_731_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v_msgData_728_; lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_724_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2);
v___x_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = l_Lean_MessageData_ofSyntax(v_after_717_);
v___x_727_ = l_Lean_indentD(v___x_726_);
v_msgData_728_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_728_, 0, v___x_725_);
lean_ctor_set(v_msgData_728_, 1, v___x_727_);
v___x_729_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(v_msgData_728_, v_macroStack_707_);
v___x_730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_729_);
return v___x_730_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_msgData_734_, lean_object* v_macroStack_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_msgData_734_, v_macroStack_735_, v___y_736_);
lean_dec_ref(v___y_736_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(lean_object* v_msg_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_ref_747_; lean_object* v_macroStack_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v_a_751_; lean_object* v___x_752_; lean_object* v_a_753_; lean_object* v___x_755_; uint8_t v_isShared_756_; uint8_t v_isSharedCheck_761_; 
v_ref_747_ = lean_ctor_get(v___y_744_, 2);
v_macroStack_748_ = lean_ctor_get(v___y_740_, 1);
v___x_749_ = l_Lean_Elab_getBetterRef(v_ref_747_, v_macroStack_748_);
v___x_750_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(v_msg_739_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
v_a_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_a_751_);
lean_dec_ref(v___x_750_);
lean_inc(v_macroStack_748_);
v___x_752_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_a_751_, v_macroStack_748_, v___y_744_);
v_a_753_ = lean_ctor_get(v___x_752_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_761_ == 0)
{
v___x_755_ = v___x_752_;
v_isShared_756_ = v_isSharedCheck_761_;
goto v_resetjp_754_;
}
else
{
lean_inc(v_a_753_);
lean_dec(v___x_752_);
v___x_755_ = lean_box(0);
v_isShared_756_ = v_isSharedCheck_761_;
goto v_resetjp_754_;
}
v_resetjp_754_:
{
lean_object* v___x_757_; lean_object* v___x_759_; 
v___x_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_757_, 0, v___x_749_);
lean_ctor_set(v___x_757_, 1, v_a_753_);
if (v_isShared_756_ == 0)
{
lean_ctor_set_tag(v___x_755_, 1);
lean_ctor_set(v___x_755_, 0, v___x_757_);
v___x_759_ = v___x_755_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v___x_757_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg___boxed(lean_object* v_msg_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v_msg_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
return v_res_770_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__0));
v___x_773_ = l_Lean_stringToMessageData(v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility___closed__1);
v___x_775_ = l_Lean_MessageData_ofExpr(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_776_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__2);
v___x_777_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1);
v___x_778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
lean_ctor_set(v___x_778_, 1, v___x_776_);
return v___x_778_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__4));
v___x_781_ = l_Lean_stringToMessageData(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_783_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__3, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__3);
v___x_784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_782_);
return v___x_784_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__7));
v___x_787_ = l_Lean_stringToMessageData(v___x_786_);
return v___x_787_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__9));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0(lean_object* v_stx_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_){
_start:
{
lean_object* v_ty_x3f_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v_toCold_805_; lean_object* v_currRecDepth_806_; lean_object* v_ref_807_; uint8_t v_diag_808_; uint8_t v_suppressElabErrors_809_; uint8_t v___x_810_; lean_object* v_ref_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_ty_x3f_799_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility___closed__1);
v___x_800_ = 1;
v___x_801_ = lean_box(0);
v___x_802_ = lean_box(v___x_800_);
v___x_803_ = lean_box(v___x_800_);
lean_inc(v_stx_791_);
v___x_804_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_804_, 0, v_stx_791_);
lean_closure_set(v___x_804_, 1, v_ty_x3f_799_);
lean_closure_set(v___x_804_, 2, v___x_802_);
lean_closure_set(v___x_804_, 3, v___x_803_);
lean_closure_set(v___x_804_, 4, v___x_801_);
v_toCold_805_ = lean_ctor_get(v_a_796_, 0);
v_currRecDepth_806_ = lean_ctor_get(v_a_796_, 1);
v_ref_807_ = lean_ctor_get(v_a_796_, 2);
v_diag_808_ = lean_ctor_get_uint8(v_a_796_, sizeof(void*)*3);
v_suppressElabErrors_809_ = lean_ctor_get_uint8(v_a_796_, sizeof(void*)*3 + 1);
v___x_810_ = 1;
v_ref_811_ = l_Lean_replaceRef(v_stx_791_, v_ref_807_);
lean_dec(v_stx_791_);
lean_inc(v_currRecDepth_806_);
lean_inc_ref(v_toCold_805_);
v___x_812_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_812_, 0, v_toCold_805_);
lean_ctor_set(v___x_812_, 1, v_currRecDepth_806_);
lean_ctor_set(v___x_812_, 2, v_ref_811_);
lean_ctor_set_uint8(v___x_812_, sizeof(void*)*3, v_diag_808_);
lean_ctor_set_uint8(v___x_812_, sizeof(void*)*3 + 1, v_suppressElabErrors_809_);
v___x_813_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_804_, v___x_810_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v___x_812_, v_a_797_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_815_; lean_object* v_a_816_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; uint8_t v___y_827_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; uint8_t v___x_911_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v___x_815_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_814_, v_a_795_);
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref(v___x_815_);
v___x_911_ = l_Lean_Expr_hasSorry(v_a_816_);
if (v___x_911_ == 0)
{
v___y_856_ = v_a_792_;
v___y_857_ = v_a_793_;
v___y_858_ = v_a_794_;
v___y_859_ = v_a_795_;
v___y_860_ = v___x_812_;
v___y_861_ = v_a_797_;
goto v___jp_855_;
}
else
{
uint8_t v___x_912_; 
v___x_912_ = l_Lean_Expr_hasSyntheticSorry(v_a_816_);
if (v___x_912_ == 0)
{
v___y_893_ = v_a_792_;
v___y_894_ = v_a_793_;
v___y_895_ = v_a_794_;
v___y_896_ = v_a_795_;
v___y_897_ = v___x_812_;
v___y_898_ = v_a_797_;
goto v___jp_892_;
}
else
{
lean_object* v___x_913_; lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
lean_dec(v_a_816_);
lean_dec_ref_known(v___x_812_, 3);
v___x_913_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_914_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_913_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_913_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
v___jp_817_:
{
if (v___y_827_ == 0)
{
if (lean_obj_tag(v___y_820_) == 0)
{
lean_dec_ref_known(v___y_820_, 2);
lean_dec_ref(v___y_824_);
lean_dec(v_a_816_);
return v___y_822_;
}
else
{
lean_object* v_id_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_841_; 
v_id_828_ = lean_ctor_get(v___y_820_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___y_820_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; 
v_unused_842_ = lean_ctor_get(v___y_820_, 1);
lean_dec(v_unused_842_);
v___x_830_ = v___y_820_;
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_id_828_);
lean_dec(v___y_820_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
uint8_t v___x_832_; 
v___x_832_ = l_Lean_instBEqInternalExceptionId_beq(v___y_825_, v_id_828_);
lean_dec(v_id_828_);
if (v___x_832_ == 0)
{
lean_del_object(v___x_830_);
lean_dec_ref(v___y_824_);
lean_dec(v_a_816_);
return v___y_822_;
}
else
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_837_; 
lean_dec_ref(v___y_822_);
v___x_833_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__6, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__6_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__6);
v___x_834_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8);
v___x_835_ = l_Lean_indentExpr(v_a_816_);
if (v_isShared_831_ == 0)
{
lean_ctor_set_tag(v___x_830_, 7);
lean_ctor_set(v___x_830_, 1, v___x_835_);
lean_ctor_set(v___x_830_, 0, v___x_834_);
v___x_837_ = v___x_830_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___x_835_);
v___x_837_ = v_reuseFailAlloc_840_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_837_);
lean_ctor_set(v___x_838_, 1, v___x_833_);
v___x_839_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_838_, v___y_818_, v___y_823_, v___y_821_, v___y_819_, v___y_824_, v___y_826_);
lean_dec_ref(v___y_824_);
return v___x_839_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_824_);
lean_dec_ref(v___y_820_);
lean_dec(v_a_816_);
return v___y_822_;
}
}
v___jp_843_:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_816_);
v___x_851_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr(v_a_816_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_dec_ref(v___y_848_);
lean_dec(v_a_816_);
return v___x_851_;
}
else
{
lean_object* v_a_852_; uint8_t v___x_853_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
v___x_853_ = l_Lean_Exception_isInterrupt(v_a_852_);
if (v___x_853_ == 0)
{
uint8_t v___x_854_; 
lean_inc(v_a_852_);
v___x_854_ = l_Lean_Exception_isRuntime(v_a_852_);
v___y_818_ = v___y_844_;
v___y_819_ = v___y_847_;
v___y_820_ = v_a_852_;
v___y_821_ = v___y_846_;
v___y_822_ = v___x_851_;
v___y_823_ = v___y_845_;
v___y_824_ = v___y_848_;
v___y_825_ = v___x_850_;
v___y_826_ = v___y_849_;
v___y_827_ = v___x_854_;
goto v___jp_817_;
}
else
{
v___y_818_ = v___y_844_;
v___y_819_ = v___y_847_;
v___y_820_ = v_a_852_;
v___y_821_ = v___y_846_;
v___y_822_ = v___x_851_;
v___y_823_ = v___y_845_;
v___y_824_ = v___y_848_;
v___y_825_ = v___x_850_;
v___y_826_ = v___y_849_;
v___y_827_ = v___x_853_;
goto v___jp_817_;
}
}
}
v___jp_855_:
{
lean_object* v___x_862_; 
lean_inc(v_a_816_);
v___x_862_ = l_Lean_Meta_getMVars(v_a_816_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_864_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc(v_a_863_);
lean_dec_ref_known(v___x_862_, 1);
v___x_864_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_863_, v___x_801_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_);
lean_dec(v_a_863_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; uint8_t v___x_866_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = lean_unbox(v_a_865_);
lean_dec(v_a_865_);
if (v___x_866_ == 0)
{
v___y_844_ = v___y_856_;
v___y_845_ = v___y_857_;
v___y_846_ = v___y_858_;
v___y_847_ = v___y_859_;
v___y_848_ = v___y_860_;
v___y_849_ = v___y_861_;
goto v___jp_843_;
}
else
{
lean_object* v___x_867_; lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
lean_dec_ref(v___y_860_);
lean_dec(v_a_816_);
v___x_867_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_868_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_867_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_867_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
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
lean_dec_ref(v___y_860_);
lean_dec(v_a_816_);
v_a_876_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_864_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_864_);
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
else
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
lean_dec_ref(v___y_860_);
lean_dec(v_a_816_);
v_a_884_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_891_ == 0)
{
v___x_886_ = v___x_862_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_862_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_884_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
v___jp_892_:
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
v___x_899_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10);
v___x_900_ = l_Lean_indentExpr(v_a_816_);
v___x_901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_901_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
lean_dec_ref(v___y_897_);
v_a_903_ = lean_ctor_get(v___x_902_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_902_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_902_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_902_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
else
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_929_; 
lean_dec_ref_known(v___x_812_, 3);
v_a_922_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_929_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_929_ == 0)
{
v___x_924_ = v___x_813_;
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_813_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_929_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object* v_stx_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0(v_stx_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec(v_a_932_);
lean_dec_ref(v_a_931_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0(lean_object* v_stx_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_){
_start:
{
lean_object* v_toCold_947_; lean_object* v_currRecDepth_948_; lean_object* v_ref_949_; uint8_t v_diag_950_; uint8_t v_suppressElabErrors_951_; lean_object* v___x_952_; lean_object* v_ref_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_toCold_947_ = lean_ctor_get(v_a_944_, 0);
v_currRecDepth_948_ = lean_ctor_get(v_a_944_, 1);
v_ref_949_ = lean_ctor_get(v_a_944_, 2);
v_diag_950_ = lean_ctor_get_uint8(v_a_944_, sizeof(void*)*3);
v_suppressElabErrors_951_ = lean_ctor_get_uint8(v_a_944_, sizeof(void*)*3 + 1);
v___x_952_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v_ref_953_ = l_Lean_replaceRef(v_stx_939_, v_ref_949_);
lean_inc(v_currRecDepth_948_);
lean_inc_ref(v_toCold_947_);
v___x_954_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_954_, 0, v_toCold_947_);
lean_ctor_set(v___x_954_, 1, v_currRecDepth_948_);
lean_ctor_set(v___x_954_, 2, v_ref_953_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*3, v_diag_950_);
lean_ctor_set_uint8(v___x_954_, sizeof(void*)*3 + 1, v_suppressElabErrors_951_);
lean_inc(v_stx_939_);
v___x_955_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm(v_stx_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v___x_954_, v_a_945_);
if (lean_obj_tag(v___x_955_) == 0)
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_964_; 
lean_dec_ref_known(v___x_954_, 3);
lean_dec(v_stx_939_);
v_a_956_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_964_ == 0)
{
v___x_958_ = v___x_955_;
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_955_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_964_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v_fst_960_; lean_object* v___x_962_; 
v_fst_960_ = lean_ctor_get(v_a_956_, 0);
lean_inc(v_fst_960_);
lean_dec(v_a_956_);
if (v_isShared_959_ == 0)
{
lean_ctor_set(v___x_958_, 0, v_fst_960_);
v___x_962_ = v___x_958_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_fst_960_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_979_; 
v_a_965_ = lean_ctor_get(v___x_955_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_955_);
if (v_isSharedCheck_979_ == 0)
{
v___x_967_ = v___x_955_;
v_isShared_968_ = v_isSharedCheck_979_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_955_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_979_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
lean_inc(v_a_965_);
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_978_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
uint8_t v___y_972_; uint8_t v___x_976_; 
v___x_976_ = l_Lean_Exception_isInterrupt(v_a_965_);
if (v___x_976_ == 0)
{
uint8_t v___x_977_; 
lean_inc(v_a_965_);
v___x_977_ = l_Lean_Exception_isRuntime(v_a_965_);
v___y_972_ = v___x_977_;
goto v___jp_971_;
}
else
{
v___y_972_ = v___x_976_;
goto v___jp_971_;
}
v___jp_971_:
{
if (v___y_972_ == 0)
{
if (lean_obj_tag(v_a_965_) == 0)
{
lean_dec_ref_known(v_a_965_, 2);
lean_dec_ref_known(v___x_954_, 3);
lean_dec(v_stx_939_);
return v___x_970_;
}
else
{
lean_object* v_id_973_; uint8_t v___x_974_; 
v_id_973_ = lean_ctor_get(v_a_965_, 0);
lean_inc(v_id_973_);
lean_dec_ref_known(v_a_965_, 2);
v___x_974_ = l_Lean_instBEqInternalExceptionId_beq(v___x_952_, v_id_973_);
lean_dec(v_id_973_);
if (v___x_974_ == 0)
{
lean_dec_ref_known(v___x_954_, 3);
lean_dec(v_stx_939_);
return v___x_970_;
}
else
{
lean_object* v___x_975_; 
lean_dec_ref(v___x_970_);
v___x_975_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0(v_stx_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v___x_954_, v_a_945_);
lean_dec_ref_known(v___x_954_, 3);
return v___x_975_;
}
}
}
else
{
lean_dec(v_a_965_);
lean_dec_ref_known(v___x_954_, 3);
lean_dec(v_stx_939_);
return v___x_970_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v___y_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0(v_stx_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_, v_a_986_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
return v_res_988_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__0(void){
_start:
{
lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__1);
v___x_990_ = l_Lean_MessageData_ofExpr(v___x_989_);
return v___x_990_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__1(void){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_991_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__0, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__0_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__0);
v___x_992_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__1);
v___x_993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
lean_ctor_set(v___x_993_, 1, v___x_991_);
return v___x_993_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__2(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_994_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_995_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__1);
v___x_996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_996_, 0, v___x_995_);
lean_ctor_set(v___x_996_, 1, v___x_994_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1(lean_object* v_stx_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_ty_x3f_1005_; uint8_t v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v_toCold_1011_; lean_object* v_currRecDepth_1012_; lean_object* v_ref_1013_; uint8_t v_diag_1014_; uint8_t v_suppressElabErrors_1015_; uint8_t v___x_1016_; lean_object* v_ref_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v_ty_x3f_1005_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig___closed__2);
v___x_1006_ = 1;
v___x_1007_ = lean_box(0);
v___x_1008_ = lean_box(v___x_1006_);
v___x_1009_ = lean_box(v___x_1006_);
lean_inc(v_stx_997_);
v___x_1010_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_1010_, 0, v_stx_997_);
lean_closure_set(v___x_1010_, 1, v_ty_x3f_1005_);
lean_closure_set(v___x_1010_, 2, v___x_1008_);
lean_closure_set(v___x_1010_, 3, v___x_1009_);
lean_closure_set(v___x_1010_, 4, v___x_1007_);
v_toCold_1011_ = lean_ctor_get(v_a_1002_, 0);
v_currRecDepth_1012_ = lean_ctor_get(v_a_1002_, 1);
v_ref_1013_ = lean_ctor_get(v_a_1002_, 2);
v_diag_1014_ = lean_ctor_get_uint8(v_a_1002_, sizeof(void*)*3);
v_suppressElabErrors_1015_ = lean_ctor_get_uint8(v_a_1002_, sizeof(void*)*3 + 1);
v___x_1016_ = 1;
v_ref_1017_ = l_Lean_replaceRef(v_stx_997_, v_ref_1013_);
lean_dec(v_stx_997_);
lean_inc(v_currRecDepth_1012_);
lean_inc_ref(v_toCold_1011_);
v___x_1018_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1018_, 0, v_toCold_1011_);
lean_ctor_set(v___x_1018_, 1, v_currRecDepth_1012_);
lean_ctor_set(v___x_1018_, 2, v_ref_1017_);
lean_ctor_set_uint8(v___x_1018_, sizeof(void*)*3, v_diag_1014_);
lean_ctor_set_uint8(v___x_1018_, sizeof(void*)*3 + 1, v_suppressElabErrors_1015_);
v___x_1019_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1010_, v___x_1016_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v___x_1018_, v_a_1003_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1021_; lean_object* v_a_1022_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; uint8_t v___y_1033_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; uint8_t v___x_1117_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v___x_1021_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_1020_, v_a_1001_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref(v___x_1021_);
v___x_1117_ = l_Lean_Expr_hasSorry(v_a_1022_);
if (v___x_1117_ == 0)
{
v___y_1062_ = v_a_998_;
v___y_1063_ = v_a_999_;
v___y_1064_ = v_a_1000_;
v___y_1065_ = v_a_1001_;
v___y_1066_ = v___x_1018_;
v___y_1067_ = v_a_1003_;
goto v___jp_1061_;
}
else
{
uint8_t v___x_1118_; 
v___x_1118_ = l_Lean_Expr_hasSyntheticSorry(v_a_1022_);
if (v___x_1118_ == 0)
{
v___y_1099_ = v_a_998_;
v___y_1100_ = v_a_999_;
v___y_1101_ = v_a_1000_;
v___y_1102_ = v_a_1001_;
v___y_1103_ = v___x_1018_;
v___y_1104_ = v_a_1003_;
goto v___jp_1098_;
}
else
{
lean_object* v___x_1119_; lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec(v_a_1022_);
lean_dec_ref_known(v___x_1018_, 3);
v___x_1119_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1119_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1119_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
v___jp_1023_:
{
if (v___y_1033_ == 0)
{
if (lean_obj_tag(v___y_1030_) == 0)
{
lean_dec_ref_known(v___y_1030_, 2);
lean_dec_ref(v___y_1027_);
lean_dec(v_a_1022_);
return v___y_1031_;
}
else
{
lean_object* v_id_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1047_; 
v_id_1034_ = lean_ctor_get(v___y_1030_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___y_1030_);
if (v_isSharedCheck_1047_ == 0)
{
lean_object* v_unused_1048_; 
v_unused_1048_ = lean_ctor_get(v___y_1030_, 1);
lean_dec(v_unused_1048_);
v___x_1036_ = v___y_1030_;
v_isShared_1037_ = v_isSharedCheck_1047_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_id_1034_);
lean_dec(v___y_1030_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1047_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
uint8_t v___x_1038_; 
v___x_1038_ = l_Lean_instBEqInternalExceptionId_beq(v___y_1032_, v_id_1034_);
lean_dec(v_id_1034_);
if (v___x_1038_ == 0)
{
lean_del_object(v___x_1036_);
lean_dec_ref(v___y_1027_);
lean_dec(v_a_1022_);
return v___y_1031_;
}
else
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
lean_dec_ref(v___y_1031_);
v___x_1039_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___closed__2);
v___x_1040_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__8);
v___x_1041_ = l_Lean_indentExpr(v_a_1022_);
if (v_isShared_1037_ == 0)
{
lean_ctor_set_tag(v___x_1036_, 7);
lean_ctor_set(v___x_1036_, 1, v___x_1041_);
lean_ctor_set(v___x_1036_, 0, v___x_1040_);
v___x_1043_ = v___x_1036_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1046_, 1, v___x_1041_);
v___x_1043_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___x_1039_);
v___x_1045_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_1044_, v___y_1029_, v___y_1028_, v___y_1026_, v___y_1025_, v___y_1027_, v___y_1024_);
lean_dec_ref(v___y_1027_);
return v___x_1045_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_1030_);
lean_dec_ref(v___y_1027_);
lean_dec(v_a_1022_);
return v___y_1031_;
}
}
v___jp_1049_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_1022_);
v___x_1057_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr(v_a_1022_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_dec_ref(v___y_1054_);
lean_dec(v_a_1022_);
return v___x_1057_;
}
else
{
lean_object* v_a_1058_; uint8_t v___x_1059_; 
v_a_1058_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1058_);
v___x_1059_ = l_Lean_Exception_isInterrupt(v_a_1058_);
if (v___x_1059_ == 0)
{
uint8_t v___x_1060_; 
lean_inc(v_a_1058_);
v___x_1060_ = l_Lean_Exception_isRuntime(v_a_1058_);
v___y_1024_ = v___y_1055_;
v___y_1025_ = v___y_1053_;
v___y_1026_ = v___y_1052_;
v___y_1027_ = v___y_1054_;
v___y_1028_ = v___y_1051_;
v___y_1029_ = v___y_1050_;
v___y_1030_ = v_a_1058_;
v___y_1031_ = v___x_1057_;
v___y_1032_ = v___x_1056_;
v___y_1033_ = v___x_1060_;
goto v___jp_1023_;
}
else
{
v___y_1024_ = v___y_1055_;
v___y_1025_ = v___y_1053_;
v___y_1026_ = v___y_1052_;
v___y_1027_ = v___y_1054_;
v___y_1028_ = v___y_1051_;
v___y_1029_ = v___y_1050_;
v___y_1030_ = v_a_1058_;
v___y_1031_ = v___x_1057_;
v___y_1032_ = v___x_1056_;
v___y_1033_ = v___x_1059_;
goto v___jp_1023_;
}
}
}
v___jp_1061_:
{
lean_object* v___x_1068_; 
lean_inc(v_a_1022_);
v___x_1068_ = l_Lean_Meta_getMVars(v_a_1022_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_1069_, v___x_1007_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v_a_1069_);
if (lean_obj_tag(v___x_1070_) == 0)
{
lean_object* v_a_1071_; uint8_t v___x_1072_; 
v_a_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_a_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v___x_1072_ = lean_unbox(v_a_1071_);
lean_dec(v_a_1071_);
if (v___x_1072_ == 0)
{
v___y_1050_ = v___y_1062_;
v___y_1051_ = v___y_1063_;
v___y_1052_ = v___y_1064_;
v___y_1053_ = v___y_1065_;
v___y_1054_ = v___y_1066_;
v___y_1055_ = v___y_1067_;
goto v___jp_1049_;
}
else
{
lean_object* v___x_1073_; lean_object* v_a_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1081_; 
lean_dec_ref(v___y_1066_);
lean_dec(v_a_1022_);
v___x_1073_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1081_ == 0)
{
v___x_1076_ = v___x_1073_;
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_a_1074_);
lean_dec(v___x_1073_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1081_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1079_; 
if (v_isShared_1077_ == 0)
{
v___x_1079_ = v___x_1076_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_a_1074_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
}
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
lean_dec_ref(v___y_1066_);
lean_dec(v_a_1022_);
v_a_1082_ = lean_ctor_get(v___x_1070_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1070_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1070_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v___y_1066_);
lean_dec(v_a_1022_);
v_a_1090_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1068_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1068_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
v___jp_1098_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
v___x_1105_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__10);
v___x_1106_ = l_Lean_indentExpr(v_a_1022_);
v___x_1107_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_1107_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_, v___y_1104_);
lean_dec_ref(v___y_1103_);
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec_ref_known(v___x_1018_, 3);
v_a_1128_ = lean_ctor_get(v___x_1019_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1019_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1019_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1019_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___boxed(lean_object* v_stx_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1(v_stx_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0(uint8_t v_config_1155_, lean_object* v_item_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_item_1165_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2));
v___x_1169_ = l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(v_item_1156_, v___x_1168_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1169_) == 0)
{
uint8_t v___x_1170_; 
lean_dec_ref_known(v___x_1169_, 1);
v___x_1170_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v_item_1156_);
if (v___x_1170_ == 0)
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1171_ = l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(v_item_1156_);
lean_inc_ref(v_item_1156_);
v___x_1172_ = l_Lean_Elab_ConfigEval_ConfigItem_shift(v_item_1156_);
v___x_1173_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__1));
v___x_1174_ = lean_string_dec_eq(v___x_1171_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__2));
v___x_1176_ = lean_string_dec_eq(v___x_1171_, v___x_1175_);
lean_dec_ref(v___x_1171_);
if (v___x_1176_ == 0)
{
lean_dec_ref(v_item_1156_);
v_item_1165_ = v___x_1172_;
goto v___jp_1164_;
}
else
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__3));
v___x_1178_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_1156_, v___x_1177_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1178_) == 0)
{
uint8_t v___x_1179_; 
lean_dec_ref_known(v___x_1178_, 1);
v___x_1179_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1172_);
if (v___x_1179_ == 0)
{
lean_dec_ref(v_item_1156_);
v_item_1165_ = v___x_1172_;
goto v___jp_1164_;
}
else
{
lean_object* v___x_1180_; 
lean_dec_ref(v___x_1172_);
lean_inc_ref(v_item_1156_);
v___x_1180_ = l_Lean_Elab_ConfigEval_ConfigItem_checkNotBool(v_item_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v_value_1181_; lean_object* v___x_1182_; 
lean_dec_ref_known(v___x_1180_, 1);
v_value_1181_ = lean_ctor_get(v_item_1156_, 2);
lean_inc(v_value_1181_);
lean_dec_ref(v_item_1156_);
v___x_1182_ = l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0(v_value_1181_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1182_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1182_);
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
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1191_; lean_object* v___x_1193_; uint8_t v_isShared_1194_; uint8_t v_isSharedCheck_1198_; 
v_a_1191_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1193_ = v___x_1182_;
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
else
{
lean_inc(v_a_1191_);
lean_dec(v___x_1182_);
v___x_1193_ = lean_box(0);
v_isShared_1194_ = v_isSharedCheck_1198_;
goto v_resetjp_1192_;
}
v_resetjp_1192_:
{
lean_object* v___x_1196_; 
if (v_isShared_1194_ == 0)
{
v___x_1196_ = v___x_1193_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_a_1191_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec_ref(v_item_1156_);
v_a_1199_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1180_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1180_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1214_; 
lean_dec_ref(v___x_1172_);
lean_dec_ref(v_item_1156_);
v_a_1207_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1209_ = v___x_1178_;
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1178_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1214_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1212_; 
if (v_isShared_1210_ == 0)
{
v___x_1212_ = v___x_1209_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1207_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
else
{
uint8_t v___x_1215_; 
lean_dec_ref(v___x_1171_);
v___x_1215_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_1172_);
if (v___x_1215_ == 0)
{
lean_dec_ref(v_item_1156_);
v_item_1165_ = v___x_1172_;
goto v___jp_1164_;
}
else
{
lean_object* v_value_1216_; lean_object* v___x_1217_; 
lean_dec_ref(v___x_1172_);
v_value_1216_ = lean_ctor_get(v_item_1156_, 2);
lean_inc(v_value_1216_);
lean_dec_ref(v_item_1156_);
v___x_1217_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1(v_value_1216_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1217_;
}
}
}
else
{
v_item_1165_ = v_item_1156_;
goto v___jp_1164_;
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec_ref(v_item_1156_);
v_a_1218_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1169_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1169_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
v___jp_1164_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1166_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___closed__0));
v___x_1167_ = l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(v_item_1165_, v___x_1166_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0___boxed(lean_object* v_config_1226_, lean_object* v_item_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
uint8_t v_config_4599__boxed_1235_; lean_object* v_res_1236_; 
v_config_4599__boxed_1235_ = lean_unbox(v_config_1226_);
v_res_1236_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0(v_config_4599__boxed_1235_, v_item_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2(lean_object* v_e_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(v_e_1239_, v___y_1243_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___boxed(lean_object* v_e_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2(v_e_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4(lean_object* v_00_u03b1_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___redArg();
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__4(v_00_u03b1_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3(lean_object* v_00_u03b1_1275_, lean_object* v_msg_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v_msg_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1285_, lean_object* v_msg_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3(v_00_u03b1_1285_, v_msg_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4(lean_object* v_msgData_1295_, lean_object* v_macroStack_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_msgData_1295_, v_macroStack_1296_, v___y_1301_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4___boxed(lean_object* v_msgData_1305_, lean_object* v_macroStack_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4(v_msgData_1305_, v_macroStack_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
return v_res_1314_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = lean_box(0);
v___x_1316_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2));
v___x_1317_ = l_Lean_mkConst(v___x_1316_, v___x_1315_);
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_obj_once(&l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__0);
v___x_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0(uint8_t v_cfg_1320_, lean_object* v_cfgItem_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1329_ = lean_obj_once(&l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___closed__1);
v___x_1330_ = lean_box(v_cfg_1320_);
v___x_1331_ = l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(v___x_1330_, v_cfgItem_1321_, v___x_1329_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0___boxed(lean_object* v_cfg_1332_, lean_object* v_cfgItem_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
uint8_t v_cfg_boxed_1341_; lean_object* v_res_1342_; 
v_cfg_boxed_1341_ = lean_unbox(v_cfg_1332_);
v_res_1342_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___lam__0(v_cfg_boxed_1341_, v_cfgItem_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v_cfgItem_1333_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(lean_object* v_cfg_1344_, uint8_t v_init_1345_, uint8_t v_logExceptions_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_){
_start:
{
lean_object* v_onErr_1351_; lean_object* v_eval_1352_; 
v_onErr_1351_ = ((lean_object*)(l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___closed__0));
v_eval_1352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___closed__0));
if (v_logExceptions_1346_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_box(v_init_1345_);
v___x_1354_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1352_, v___x_1353_, v_cfg_1344_, v_onErr_1351_, v_logExceptions_1346_, v_a_1348_, v_a_1349_);
return v___x_1354_;
}
else
{
uint8_t v_recover_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v_recover_1355_ = lean_ctor_get_uint8(v_a_1347_, sizeof(void*)*1);
v___x_1356_ = lean_box(v_init_1345_);
v___x_1357_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1352_, v___x_1356_, v_cfg_1344_, v_onErr_1351_, v_recover_1355_, v_a_1348_, v_a_1349_);
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___boxed(lean_object* v_cfg_1358_, lean_object* v_init_1359_, lean_object* v_logExceptions_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v___y_1364_){
_start:
{
uint8_t v_init_boxed_1365_; uint8_t v_logExceptions_boxed_1366_; lean_object* v_res_1367_; 
v_init_boxed_1365_ = lean_unbox(v_init_1359_);
v_logExceptions_boxed_1366_ = lean_unbox(v_logExceptions_1360_);
v_res_1367_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(v_cfg_1358_, v_init_boxed_1365_, v_logExceptions_boxed_1366_, v_a_1361_, v_a_1362_, v_a_1363_);
lean_dec(v_a_1363_);
lean_dec_ref(v_a_1362_);
lean_dec_ref(v_a_1361_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig(lean_object* v_cfg_1368_, uint8_t v_init_1369_, uint8_t v_logExceptions_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(v_cfg_1368_, v_init_1369_, v_logExceptions_1370_, v_a_1371_, v_a_1377_, v_a_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___boxed(lean_object* v_cfg_1381_, lean_object* v_init_1382_, lean_object* v_logExceptions_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v___y_1392_){
_start:
{
uint8_t v_init_boxed_1393_; uint8_t v_logExceptions_boxed_1394_; lean_object* v_res_1395_; 
v_init_boxed_1393_ = lean_unbox(v_init_1382_);
v_logExceptions_boxed_1394_ = lean_unbox(v_logExceptions_1383_);
v_res_1395_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig(v_cfg_1381_, v_init_boxed_1393_, v_logExceptions_boxed_1394_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_);
lean_dec(v_a_1391_);
lean_dec_ref(v_a_1390_);
lean_dec(v_a_1389_);
lean_dec_ref(v_a_1388_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
return v_res_1395_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_UnsealingNewtypeReducibility_toReducibilityStatus(uint8_t v_x_1396_){
_start:
{
switch(v_x_1396_)
{
case 0:
{
uint8_t v___x_1397_; 
v___x_1397_ = 0;
return v___x_1397_;
}
case 1:
{
uint8_t v___x_1398_; 
v___x_1398_ = 4;
return v___x_1398_;
}
case 2:
{
uint8_t v___x_1399_; 
v___x_1399_ = 3;
return v___x_1399_;
}
default: 
{
uint8_t v___x_1400_; 
v___x_1400_ = 1;
return v___x_1400_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_UnsealingNewtypeReducibility_toReducibilityStatus___boxed(lean_object* v_x_1401_){
_start:
{
uint8_t v_x_32__boxed_1402_; uint8_t v_res_1403_; lean_object* v_r_1404_; 
v_x_32__boxed_1402_ = lean_unbox(v_x_1401_);
v_res_1403_ = l_Lean_Parser_Tactic_UnsealingNewtypeReducibility_toReducibilityStatus(v_x_32__boxed_1402_);
v_r_1404_ = lean_box(v_res_1403_);
return v_r_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg(lean_object* v_typeName_1405_, lean_object* v___y_1406_){
_start:
{
lean_object* v___x_1408_; lean_object* v_env_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1408_ = lean_st_ref_get(v___y_1406_);
v_env_1409_ = lean_ctor_get(v___x_1408_, 0);
lean_inc_ref(v_env_1409_);
lean_dec(v___x_1408_);
v___x_1410_ = l_Lean_Environment_getVirtualStructureInfo_x3f(v_env_1409_, v_typeName_1405_);
v___x_1411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg___boxed(lean_object* v_typeName_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg(v_typeName_1412_, v___y_1413_);
lean_dec(v___y_1413_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1(lean_object* v_typeName_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg(v_typeName_1416_, v___y_1424_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___boxed(lean_object* v_typeName_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1(v_typeName_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec(v___y_1431_);
lean_dec_ref(v___y_1430_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__6(lean_object* v_a_1438_, lean_object* v_a_1439_){
_start:
{
if (lean_obj_tag(v_a_1438_) == 0)
{
lean_object* v___x_1440_; 
v___x_1440_ = l_List_reverse___redArg(v_a_1439_);
return v___x_1440_;
}
else
{
lean_object* v_head_1441_; lean_object* v_tail_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1452_; 
v_head_1441_ = lean_ctor_get(v_a_1438_, 0);
v_tail_1442_ = lean_ctor_get(v_a_1438_, 1);
v_isSharedCheck_1452_ = !lean_is_exclusive(v_a_1438_);
if (v_isSharedCheck_1452_ == 0)
{
v___x_1444_ = v_a_1438_;
v_isShared_1445_ = v_isSharedCheck_1452_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_tail_1442_);
lean_inc(v_head_1441_);
lean_dec(v_a_1438_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1452_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1449_; 
v___x_1446_ = lean_box(0);
v___x_1447_ = l_Lean_mkConst(v_head_1441_, v___x_1446_);
if (v_isShared_1445_ == 0)
{
lean_ctor_set(v___x_1444_, 1, v_a_1439_);
lean_ctor_set(v___x_1444_, 0, v___x_1447_);
v___x_1449_ = v___x_1444_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1451_; 
v_reuseFailAlloc_1451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1451_, 0, v___x_1447_);
lean_ctor_set(v_reuseFailAlloc_1451_, 1, v_a_1439_);
v___x_1449_ = v_reuseFailAlloc_1451_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
v_a_1438_ = v_tail_1442_;
v_a_1439_ = v___x_1449_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_instMonadEIO___redArg();
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5(lean_object* v_msg_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v_toApplicative_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1595_; 
v___x_1472_ = lean_obj_once(&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0, &l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0_once, _init_l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0);
v___x_1473_ = l_StateRefT_x27_instMonad___redArg(v___x_1472_);
v_toApplicative_1474_ = lean_ctor_get(v___x_1473_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1473_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; 
v_unused_1596_ = lean_ctor_get(v___x_1473_, 1);
lean_dec(v_unused_1596_);
v___x_1476_ = v___x_1473_;
v_isShared_1477_ = v_isSharedCheck_1595_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_toApplicative_1474_);
lean_dec(v___x_1473_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1595_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v_toFunctor_1478_; lean_object* v_toSeq_1479_; lean_object* v_toSeqLeft_1480_; lean_object* v_toSeqRight_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1593_; 
v_toFunctor_1478_ = lean_ctor_get(v_toApplicative_1474_, 0);
v_toSeq_1479_ = lean_ctor_get(v_toApplicative_1474_, 2);
v_toSeqLeft_1480_ = lean_ctor_get(v_toApplicative_1474_, 3);
v_toSeqRight_1481_ = lean_ctor_get(v_toApplicative_1474_, 4);
v_isSharedCheck_1593_ = !lean_is_exclusive(v_toApplicative_1474_);
if (v_isSharedCheck_1593_ == 0)
{
lean_object* v_unused_1594_; 
v_unused_1594_ = lean_ctor_get(v_toApplicative_1474_, 1);
lean_dec(v_unused_1594_);
v___x_1483_ = v_toApplicative_1474_;
v_isShared_1484_ = v_isSharedCheck_1593_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_toSeqRight_1481_);
lean_inc(v_toSeqLeft_1480_);
lean_inc(v_toSeq_1479_);
lean_inc(v_toFunctor_1478_);
lean_dec(v_toApplicative_1474_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1593_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___f_1485_; lean_object* v___f_1486_; lean_object* v___f_1487_; lean_object* v___f_1488_; lean_object* v___x_1489_; lean_object* v___f_1490_; lean_object* v___f_1491_; lean_object* v___f_1492_; lean_object* v___x_1494_; 
v___f_1485_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1));
v___f_1486_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2));
lean_inc_ref(v_toFunctor_1478_);
v___f_1487_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1487_, 0, v_toFunctor_1478_);
v___f_1488_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1488_, 0, v_toFunctor_1478_);
v___x_1489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1489_, 0, v___f_1487_);
lean_ctor_set(v___x_1489_, 1, v___f_1488_);
v___f_1490_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1490_, 0, v_toSeqRight_1481_);
v___f_1491_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1491_, 0, v_toSeqLeft_1480_);
v___f_1492_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1492_, 0, v_toSeq_1479_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 4, v___f_1490_);
lean_ctor_set(v___x_1483_, 3, v___f_1491_);
lean_ctor_set(v___x_1483_, 2, v___f_1492_);
lean_ctor_set(v___x_1483_, 1, v___f_1485_);
lean_ctor_set(v___x_1483_, 0, v___x_1489_);
v___x_1494_ = v___x_1483_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v___x_1489_);
lean_ctor_set(v_reuseFailAlloc_1592_, 1, v___f_1485_);
lean_ctor_set(v_reuseFailAlloc_1592_, 2, v___f_1492_);
lean_ctor_set(v_reuseFailAlloc_1592_, 3, v___f_1491_);
lean_ctor_set(v_reuseFailAlloc_1592_, 4, v___f_1490_);
v___x_1494_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
lean_object* v___x_1496_; 
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 1, v___f_1486_);
lean_ctor_set(v___x_1476_, 0, v___x_1494_);
v___x_1496_ = v___x_1476_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1591_; 
v_reuseFailAlloc_1591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1591_, 0, v___x_1494_);
lean_ctor_set(v_reuseFailAlloc_1591_, 1, v___f_1486_);
v___x_1496_ = v_reuseFailAlloc_1591_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
lean_object* v___x_1497_; lean_object* v_toApplicative_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1589_; 
v___x_1497_ = l_StateRefT_x27_instMonad___redArg(v___x_1496_);
v_toApplicative_1498_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1589_ == 0)
{
lean_object* v_unused_1590_; 
v_unused_1590_ = lean_ctor_get(v___x_1497_, 1);
lean_dec(v_unused_1590_);
v___x_1500_ = v___x_1497_;
v_isShared_1501_ = v_isSharedCheck_1589_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_toApplicative_1498_);
lean_dec(v___x_1497_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1589_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v_toFunctor_1502_; lean_object* v_toSeq_1503_; lean_object* v_toSeqLeft_1504_; lean_object* v_toSeqRight_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1587_; 
v_toFunctor_1502_ = lean_ctor_get(v_toApplicative_1498_, 0);
v_toSeq_1503_ = lean_ctor_get(v_toApplicative_1498_, 2);
v_toSeqLeft_1504_ = lean_ctor_get(v_toApplicative_1498_, 3);
v_toSeqRight_1505_ = lean_ctor_get(v_toApplicative_1498_, 4);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_toApplicative_1498_);
if (v_isSharedCheck_1587_ == 0)
{
lean_object* v_unused_1588_; 
v_unused_1588_ = lean_ctor_get(v_toApplicative_1498_, 1);
lean_dec(v_unused_1588_);
v___x_1507_ = v_toApplicative_1498_;
v_isShared_1508_ = v_isSharedCheck_1587_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_toSeqRight_1505_);
lean_inc(v_toSeqLeft_1504_);
lean_inc(v_toSeq_1503_);
lean_inc(v_toFunctor_1502_);
lean_dec(v_toApplicative_1498_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1587_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___f_1509_; lean_object* v___f_1510_; lean_object* v___f_1511_; lean_object* v___f_1512_; lean_object* v___x_1513_; lean_object* v___f_1514_; lean_object* v___f_1515_; lean_object* v___f_1516_; lean_object* v___x_1518_; 
v___f_1509_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3));
v___f_1510_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4));
lean_inc_ref(v_toFunctor_1502_);
v___f_1511_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1511_, 0, v_toFunctor_1502_);
v___f_1512_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1512_, 0, v_toFunctor_1502_);
v___x_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1513_, 0, v___f_1511_);
lean_ctor_set(v___x_1513_, 1, v___f_1512_);
v___f_1514_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1514_, 0, v_toSeqRight_1505_);
v___f_1515_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1515_, 0, v_toSeqLeft_1504_);
v___f_1516_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1516_, 0, v_toSeq_1503_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 4, v___f_1514_);
lean_ctor_set(v___x_1507_, 3, v___f_1515_);
lean_ctor_set(v___x_1507_, 2, v___f_1516_);
lean_ctor_set(v___x_1507_, 1, v___f_1509_);
lean_ctor_set(v___x_1507_, 0, v___x_1513_);
v___x_1518_ = v___x_1507_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v___x_1513_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v___f_1509_);
lean_ctor_set(v_reuseFailAlloc_1586_, 2, v___f_1516_);
lean_ctor_set(v_reuseFailAlloc_1586_, 3, v___f_1515_);
lean_ctor_set(v_reuseFailAlloc_1586_, 4, v___f_1514_);
v___x_1518_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
lean_object* v___x_1520_; 
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 1, v___f_1510_);
lean_ctor_set(v___x_1500_, 0, v___x_1518_);
v___x_1520_ = v___x_1500_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v___f_1510_);
v___x_1520_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
lean_object* v___x_1521_; lean_object* v_toApplicative_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1583_; 
v___x_1521_ = l_StateRefT_x27_instMonad___redArg(v___x_1520_);
v_toApplicative_1522_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; 
v_unused_1584_ = lean_ctor_get(v___x_1521_, 1);
lean_dec(v_unused_1584_);
v___x_1524_ = v___x_1521_;
v_isShared_1525_ = v_isSharedCheck_1583_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_toApplicative_1522_);
lean_dec(v___x_1521_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1583_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v_toFunctor_1526_; lean_object* v_toSeq_1527_; lean_object* v_toSeqLeft_1528_; lean_object* v_toSeqRight_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1581_; 
v_toFunctor_1526_ = lean_ctor_get(v_toApplicative_1522_, 0);
v_toSeq_1527_ = lean_ctor_get(v_toApplicative_1522_, 2);
v_toSeqLeft_1528_ = lean_ctor_get(v_toApplicative_1522_, 3);
v_toSeqRight_1529_ = lean_ctor_get(v_toApplicative_1522_, 4);
v_isSharedCheck_1581_ = !lean_is_exclusive(v_toApplicative_1522_);
if (v_isSharedCheck_1581_ == 0)
{
lean_object* v_unused_1582_; 
v_unused_1582_ = lean_ctor_get(v_toApplicative_1522_, 1);
lean_dec(v_unused_1582_);
v___x_1531_ = v_toApplicative_1522_;
v_isShared_1532_ = v_isSharedCheck_1581_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_toSeqRight_1529_);
lean_inc(v_toSeqLeft_1528_);
lean_inc(v_toSeq_1527_);
lean_inc(v_toFunctor_1526_);
lean_dec(v_toApplicative_1522_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1581_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___f_1533_; lean_object* v___f_1534_; lean_object* v___f_1535_; lean_object* v___f_1536_; lean_object* v___x_1537_; lean_object* v___f_1538_; lean_object* v___f_1539_; lean_object* v___f_1540_; lean_object* v___x_1542_; 
v___f_1533_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5));
v___f_1534_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6));
lean_inc_ref(v_toFunctor_1526_);
v___f_1535_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1535_, 0, v_toFunctor_1526_);
v___f_1536_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1536_, 0, v_toFunctor_1526_);
v___x_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___f_1535_);
lean_ctor_set(v___x_1537_, 1, v___f_1536_);
v___f_1538_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1538_, 0, v_toSeqRight_1529_);
v___f_1539_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1539_, 0, v_toSeqLeft_1528_);
v___f_1540_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1540_, 0, v_toSeq_1527_);
if (v_isShared_1532_ == 0)
{
lean_ctor_set(v___x_1531_, 4, v___f_1538_);
lean_ctor_set(v___x_1531_, 3, v___f_1539_);
lean_ctor_set(v___x_1531_, 2, v___f_1540_);
lean_ctor_set(v___x_1531_, 1, v___f_1533_);
lean_ctor_set(v___x_1531_, 0, v___x_1537_);
v___x_1542_ = v___x_1531_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1537_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v___f_1533_);
lean_ctor_set(v_reuseFailAlloc_1580_, 2, v___f_1540_);
lean_ctor_set(v_reuseFailAlloc_1580_, 3, v___f_1539_);
lean_ctor_set(v_reuseFailAlloc_1580_, 4, v___f_1538_);
v___x_1542_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
lean_object* v___x_1544_; 
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 1, v___f_1534_);
lean_ctor_set(v___x_1524_, 0, v___x_1542_);
v___x_1544_ = v___x_1524_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1542_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v___f_1534_);
v___x_1544_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
lean_object* v___x_1545_; lean_object* v_toApplicative_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1577_; 
v___x_1545_ = l_StateRefT_x27_instMonad___redArg(v___x_1544_);
v_toApplicative_1546_ = lean_ctor_get(v___x_1545_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1545_);
if (v_isSharedCheck_1577_ == 0)
{
lean_object* v_unused_1578_; 
v_unused_1578_ = lean_ctor_get(v___x_1545_, 1);
lean_dec(v_unused_1578_);
v___x_1548_ = v___x_1545_;
v_isShared_1549_ = v_isSharedCheck_1577_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_toApplicative_1546_);
lean_dec(v___x_1545_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1577_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v_toFunctor_1550_; lean_object* v_toSeq_1551_; lean_object* v_toSeqLeft_1552_; lean_object* v_toSeqRight_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1575_; 
v_toFunctor_1550_ = lean_ctor_get(v_toApplicative_1546_, 0);
v_toSeq_1551_ = lean_ctor_get(v_toApplicative_1546_, 2);
v_toSeqLeft_1552_ = lean_ctor_get(v_toApplicative_1546_, 3);
v_toSeqRight_1553_ = lean_ctor_get(v_toApplicative_1546_, 4);
v_isSharedCheck_1575_ = !lean_is_exclusive(v_toApplicative_1546_);
if (v_isSharedCheck_1575_ == 0)
{
lean_object* v_unused_1576_; 
v_unused_1576_ = lean_ctor_get(v_toApplicative_1546_, 1);
lean_dec(v_unused_1576_);
v___x_1555_ = v_toApplicative_1546_;
v_isShared_1556_ = v_isSharedCheck_1575_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_toSeqRight_1553_);
lean_inc(v_toSeqLeft_1552_);
lean_inc(v_toSeq_1551_);
lean_inc(v_toFunctor_1550_);
lean_dec(v_toApplicative_1546_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1575_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___f_1557_; lean_object* v___f_1558_; lean_object* v___f_1559_; lean_object* v___f_1560_; lean_object* v___x_1561_; lean_object* v___f_1562_; lean_object* v___f_1563_; lean_object* v___f_1564_; lean_object* v___x_1566_; 
v___f_1557_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7));
v___f_1558_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8));
lean_inc_ref(v_toFunctor_1550_);
v___f_1559_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1559_, 0, v_toFunctor_1550_);
v___f_1560_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1560_, 0, v_toFunctor_1550_);
v___x_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___f_1559_);
lean_ctor_set(v___x_1561_, 1, v___f_1560_);
v___f_1562_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1562_, 0, v_toSeqRight_1553_);
v___f_1563_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1563_, 0, v_toSeqLeft_1552_);
v___f_1564_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1564_, 0, v_toSeq_1551_);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 4, v___f_1562_);
lean_ctor_set(v___x_1555_, 3, v___f_1563_);
lean_ctor_set(v___x_1555_, 2, v___f_1564_);
lean_ctor_set(v___x_1555_, 1, v___f_1557_);
lean_ctor_set(v___x_1555_, 0, v___x_1561_);
v___x_1566_ = v___x_1555_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v___x_1561_);
lean_ctor_set(v_reuseFailAlloc_1574_, 1, v___f_1557_);
lean_ctor_set(v_reuseFailAlloc_1574_, 2, v___f_1564_);
lean_ctor_set(v_reuseFailAlloc_1574_, 3, v___f_1563_);
lean_ctor_set(v_reuseFailAlloc_1574_, 4, v___f_1562_);
v___x_1566_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1568_; 
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 1, v___f_1558_);
lean_ctor_set(v___x_1548_, 0, v___x_1566_);
v___x_1568_ = v___x_1548_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v___f_1558_);
v___x_1568_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_11342__overap_1571_; lean_object* v___x_1572_; 
v___x_1569_ = lean_box(0);
v___x_1570_ = l_instInhabitedOfMonad___redArg(v___x_1568_, v___x_1569_);
v___x_11342__overap_1571_ = lean_panic_fn_borrowed(v___x_1570_, v_msg_1462_);
lean_dec(v___x_1570_);
lean_inc(v___y_1470_);
lean_inc_ref(v___y_1469_);
lean_inc(v___y_1468_);
lean_inc_ref(v___y_1467_);
lean_inc(v___y_1466_);
lean_inc_ref(v___y_1465_);
lean_inc(v___y_1464_);
lean_inc_ref(v___y_1463_);
v___x_1572_ = lean_apply_9(v___x_11342__overap_1571_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, lean_box(0));
return v___x_1572_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___boxed(lean_object* v_msg_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5(v_msg_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v___y_1600_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(lean_object* v_msg_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v_ref_1614_; lean_object* v___x_1615_; lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1624_; 
v_ref_1614_ = lean_ctor_get(v___y_1611_, 2);
v___x_1615_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(v_msg_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1618_ = v___x_1615_;
v_isShared_1619_ = v_isSharedCheck_1624_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1615_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1624_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; lean_object* v___x_1622_; 
lean_inc(v_ref_1614_);
v___x_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1620_, 0, v_ref_1614_);
lean_ctor_set(v___x_1620_, 1, v_a_1616_);
if (v_isShared_1619_ == 0)
{
lean_ctor_set_tag(v___x_1618_, 1);
lean_ctor_set(v___x_1618_, 0, v___x_1620_);
v___x_1622_ = v___x_1618_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1623_; 
v_reuseFailAlloc_1623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1623_, 0, v___x_1620_);
v___x_1622_ = v_reuseFailAlloc_1623_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
return v___x_1622_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg___boxed(lean_object* v_msg_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(v_msg_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(lean_object* v_ref_1632_, lean_object* v_msg_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v_toCold_1643_; lean_object* v_currRecDepth_1644_; lean_object* v_ref_1645_; uint8_t v_diag_1646_; uint8_t v_suppressElabErrors_1647_; lean_object* v_ref_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; 
v_toCold_1643_ = lean_ctor_get(v___y_1640_, 0);
v_currRecDepth_1644_ = lean_ctor_get(v___y_1640_, 1);
v_ref_1645_ = lean_ctor_get(v___y_1640_, 2);
v_diag_1646_ = lean_ctor_get_uint8(v___y_1640_, sizeof(void*)*3);
v_suppressElabErrors_1647_ = lean_ctor_get_uint8(v___y_1640_, sizeof(void*)*3 + 1);
v_ref_1648_ = l_Lean_replaceRef(v_ref_1632_, v_ref_1645_);
lean_inc(v_currRecDepth_1644_);
lean_inc_ref(v_toCold_1643_);
v___x_1649_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1649_, 0, v_toCold_1643_);
lean_ctor_set(v___x_1649_, 1, v_currRecDepth_1644_);
lean_ctor_set(v___x_1649_, 2, v_ref_1648_);
lean_ctor_set_uint8(v___x_1649_, sizeof(void*)*3, v_diag_1646_);
lean_ctor_set_uint8(v___x_1649_, sizeof(void*)*3 + 1, v_suppressElabErrors_1647_);
v___x_1650_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(v_msg_1633_, v___y_1638_, v___y_1639_, v___x_1649_, v___y_1641_);
lean_dec_ref_known(v___x_1649_, 3);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg___boxed(lean_object* v_ref_1651_, lean_object* v_msg_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_ref_1651_, v_msg_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v_ref_1651_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15(lean_object* v_x_1664_, lean_object* v_x_1665_){
_start:
{
if (lean_obj_tag(v_x_1665_) == 0)
{
return v_x_1664_;
}
else
{
lean_object* v_head_1666_; lean_object* v_tail_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; 
v_head_1666_ = lean_ctor_get(v_x_1665_, 0);
v_tail_1667_ = lean_ctor_get(v_x_1665_, 1);
v___x_1668_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___closed__0));
v___x_1669_ = lean_string_append(v_x_1664_, v___x_1668_);
v___x_1670_ = lean_expr_dbg_to_string(v_head_1666_);
v___x_1671_ = lean_string_append(v___x_1669_, v___x_1670_);
lean_dec_ref(v___x_1670_);
v_x_1664_ = v___x_1671_;
v_x_1665_ = v_tail_1667_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___boxed(lean_object* v_x_1673_, lean_object* v_x_1674_){
_start:
{
lean_object* v_res_1675_; 
v_res_1675_ = l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15(v_x_1673_, v_x_1674_);
lean_dec(v_x_1674_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7(lean_object* v_x_1679_){
_start:
{
if (lean_obj_tag(v_x_1679_) == 0)
{
lean_object* v___x_1680_; 
v___x_1680_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__0));
return v___x_1680_;
}
else
{
lean_object* v_tail_1681_; 
v_tail_1681_ = lean_ctor_get(v_x_1679_, 1);
if (lean_obj_tag(v_tail_1681_) == 0)
{
lean_object* v_head_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v_head_1682_ = lean_ctor_get(v_x_1679_, 0);
v___x_1683_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__1));
v___x_1684_ = lean_expr_dbg_to_string(v_head_1682_);
v___x_1685_ = lean_string_append(v___x_1683_, v___x_1684_);
lean_dec_ref(v___x_1684_);
v___x_1686_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__2));
v___x_1687_ = lean_string_append(v___x_1685_, v___x_1686_);
return v___x_1687_;
}
else
{
lean_object* v_head_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; uint32_t v___x_1693_; lean_object* v___x_1694_; 
v_head_1688_ = lean_ctor_get(v_x_1679_, 0);
v___x_1689_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__1));
v___x_1690_ = lean_expr_dbg_to_string(v_head_1688_);
v___x_1691_ = lean_string_append(v___x_1689_, v___x_1690_);
lean_dec_ref(v___x_1690_);
v___x_1692_ = l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15(v___x_1691_, v_tail_1681_);
v___x_1693_ = 93;
v___x_1694_ = lean_string_push(v___x_1692_, v___x_1693_);
return v___x_1694_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___boxed(lean_object* v_x_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7(v_x_1695_);
lean_dec(v_x_1695_);
return v_res_1696_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1700_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__2));
v___x_1701_ = lean_unsigned_to_nat(11u);
v___x_1702_ = lean_unsigned_to_nat(429u);
v___x_1703_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__1));
v___x_1704_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__0));
v___x_1705_ = l_mkPanicMessageWithDecl(v___x_1704_, v___x_1703_, v___x_1702_, v___x_1701_, v___x_1700_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1(lean_object* v_id_1708_, lean_object* v_cs_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
if (lean_obj_tag(v_cs_1709_) == 0)
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
lean_dec(v_id_1708_);
v___x_1719_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3, &l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3_once, _init_l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3);
v___x_1720_ = l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5(v___x_1719_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
return v___x_1720_;
}
else
{
lean_object* v_tail_1721_; 
v_tail_1721_ = lean_ctor_get(v_cs_1709_, 1);
if (lean_obj_tag(v_tail_1721_) == 0)
{
lean_object* v_head_1722_; lean_object* v___x_1723_; 
lean_dec(v_id_1708_);
v_head_1722_ = lean_ctor_get(v_cs_1709_, 0);
lean_inc(v_head_1722_);
lean_dec_ref_known(v_cs_1709_, 2);
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v_head_1722_);
return v___x_1723_;
}
else
{
lean_object* v___x_1724_; lean_object* v___x_1725_; uint8_t v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1724_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__4));
v___x_1725_ = lean_box(0);
v___x_1726_ = 0;
lean_inc(v_id_1708_);
v___x_1727_ = l_Lean_Syntax_formatStx(v_id_1708_, v___x_1725_, v___x_1726_);
v___x_1728_ = l_Std_Format_defWidth;
v___x_1729_ = lean_unsigned_to_nat(0u);
v___x_1730_ = l_Std_Format_pretty(v___x_1727_, v___x_1728_, v___x_1729_, v___x_1729_);
v___x_1731_ = lean_string_append(v___x_1724_, v___x_1730_);
lean_dec_ref(v___x_1730_);
v___x_1732_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__5));
v___x_1733_ = lean_string_append(v___x_1731_, v___x_1732_);
v___x_1734_ = lean_box(0);
v___x_1735_ = l_List_mapTR_loop___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__6(v_cs_1709_, v___x_1734_);
v___x_1736_ = l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7(v___x_1735_);
lean_dec(v___x_1735_);
v___x_1737_ = lean_string_append(v___x_1733_, v___x_1736_);
lean_dec_ref(v___x_1736_);
v___x_1738_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
v___x_1739_ = l_Lean_MessageData_ofFormat(v___x_1738_);
v___x_1740_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_id_1708_, v___x_1739_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v_id_1708_);
return v___x_1740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___boxed(lean_object* v_id_1741_, lean_object* v_cs_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
lean_object* v_res_1752_; 
v_res_1752_ = l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1(v_id_1741_, v_cs_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
lean_dec(v___y_1746_);
lean_dec_ref(v___y_1745_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
return v_res_1752_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(uint8_t v_suppressElabErrors_1760_, uint8_t v___y_1761_, lean_object* v_x_1762_){
_start:
{
if (lean_obj_tag(v_x_1762_) == 1)
{
lean_object* v_pre_1763_; 
v_pre_1763_ = lean_ctor_get(v_x_1762_, 0);
switch(lean_obj_tag(v_pre_1763_))
{
case 1:
{
lean_object* v_pre_1764_; 
v_pre_1764_ = lean_ctor_get(v_pre_1763_, 0);
switch(lean_obj_tag(v_pre_1764_))
{
case 0:
{
lean_object* v_str_1765_; lean_object* v_str_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; 
v_str_1765_ = lean_ctor_get(v_x_1762_, 1);
v_str_1766_ = lean_ctor_get(v_pre_1763_, 1);
v___x_1767_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0));
v___x_1768_ = lean_string_dec_eq(v_str_1766_, v___x_1767_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; uint8_t v___x_1770_; 
v___x_1769_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2));
v___x_1770_ = lean_string_dec_eq(v_str_1766_, v___x_1769_);
if (v___x_1770_ == 0)
{
return v___x_1770_;
}
else
{
lean_object* v___x_1771_; uint8_t v___x_1772_; 
v___x_1771_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1));
v___x_1772_ = lean_string_dec_eq(v_str_1765_, v___x_1771_);
if (v___x_1772_ == 0)
{
return v___x_1772_;
}
else
{
return v_suppressElabErrors_1760_;
}
}
}
else
{
lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1773_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2));
v___x_1774_ = lean_string_dec_eq(v_str_1765_, v___x_1773_);
if (v___x_1774_ == 0)
{
return v___x_1774_;
}
else
{
return v_suppressElabErrors_1760_;
}
}
}
case 1:
{
lean_object* v_pre_1775_; 
v_pre_1775_ = lean_ctor_get(v_pre_1764_, 0);
if (lean_obj_tag(v_pre_1775_) == 0)
{
lean_object* v_str_1776_; lean_object* v_str_1777_; lean_object* v_str_1778_; lean_object* v___x_1779_; uint8_t v___x_1780_; 
v_str_1776_ = lean_ctor_get(v_x_1762_, 1);
v_str_1777_ = lean_ctor_get(v_pre_1763_, 1);
v_str_1778_ = lean_ctor_get(v_pre_1764_, 1);
v___x_1779_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3));
v___x_1780_ = lean_string_dec_eq(v_str_1778_, v___x_1779_);
if (v___x_1780_ == 0)
{
return v___x_1780_;
}
else
{
lean_object* v___x_1781_; uint8_t v___x_1782_; 
v___x_1781_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4));
v___x_1782_ = lean_string_dec_eq(v_str_1777_, v___x_1781_);
if (v___x_1782_ == 0)
{
return v___x_1782_;
}
else
{
lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1783_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5));
v___x_1784_ = lean_string_dec_eq(v_str_1776_, v___x_1783_);
if (v___x_1784_ == 0)
{
return v___x_1784_;
}
else
{
return v_suppressElabErrors_1760_;
}
}
}
}
else
{
return v___y_1761_;
}
}
default: 
{
return v___y_1761_;
}
}
}
case 0:
{
lean_object* v_str_1785_; lean_object* v___x_1786_; uint8_t v___x_1787_; 
v_str_1785_ = lean_ctor_get(v_x_1762_, 1);
v___x_1786_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6));
v___x_1787_ = lean_string_dec_eq(v_str_1785_, v___x_1786_);
if (v___x_1787_ == 0)
{
return v___x_1787_;
}
else
{
return v_suppressElabErrors_1760_;
}
}
default: 
{
return v___y_1761_;
}
}
}
else
{
return v___y_1761_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1788_, lean_object* v___y_1789_, lean_object* v_x_1790_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1791_; uint8_t v___y_21897__boxed_1792_; uint8_t v_res_1793_; lean_object* v_r_1794_; 
v_suppressElabErrors_boxed_1791_ = lean_unbox(v_suppressElabErrors_1788_);
v___y_21897__boxed_1792_ = lean_unbox(v___y_1789_);
v_res_1793_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(v_suppressElabErrors_boxed_1791_, v___y_21897__boxed_1792_, v_x_1790_);
lean_dec(v_x_1790_);
v_r_1794_ = lean_box(v_res_1793_);
return v_r_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(lean_object* v_ref_1796_, lean_object* v_msgData_1797_, uint8_t v_severity_1798_, uint8_t v_isSilent_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v___y_1806_; uint8_t v___y_1807_; lean_object* v___y_1808_; uint8_t v___y_1809_; lean_object* v___y_1810_; lean_object* v___y_1811_; lean_object* v___y_1812_; lean_object* v_currNamespace_1813_; lean_object* v_openDecls_1814_; lean_object* v___y_1815_; lean_object* v___y_1841_; lean_object* v___y_1842_; lean_object* v___y_1843_; uint8_t v___y_1844_; lean_object* v___y_1845_; lean_object* v___y_1846_; uint8_t v___y_1847_; uint8_t v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1868_; lean_object* v___y_1869_; lean_object* v___y_1870_; uint8_t v___y_1871_; lean_object* v___y_1872_; lean_object* v___y_1873_; lean_object* v___y_1874_; uint8_t v___y_1875_; uint8_t v___y_1876_; lean_object* v___y_1877_; lean_object* v___y_1881_; lean_object* v___y_1882_; lean_object* v___y_1883_; uint8_t v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; uint8_t v___y_1887_; lean_object* v___y_1888_; uint8_t v___y_1889_; uint8_t v___x_1894_; lean_object* v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; uint8_t v___y_1901_; uint8_t v___y_1902_; lean_object* v___y_1903_; uint8_t v___y_1904_; uint8_t v___y_1906_; uint8_t v___x_1924_; 
v___x_1894_ = 2;
v___x_1924_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1798_, v___x_1894_);
if (v___x_1924_ == 0)
{
v___y_1906_ = v___x_1924_;
goto v___jp_1905_;
}
else
{
uint8_t v___x_1925_; 
lean_inc_ref(v_msgData_1797_);
v___x_1925_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1797_);
v___y_1906_ = v___x_1925_;
goto v___jp_1905_;
}
v___jp_1805_:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v_env_1820_; lean_object* v_nextMacroScope_1821_; lean_object* v_ngen_1822_; lean_object* v_auxDeclNGen_1823_; lean_object* v_traceState_1824_; lean_object* v_cache_1825_; lean_object* v_messages_1826_; lean_object* v_infoState_1827_; lean_object* v_snapshotTasks_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1839_; 
lean_inc(v_openDecls_1814_);
lean_inc(v_currNamespace_1813_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v_currNamespace_1813_);
lean_ctor_set(v___x_1816_, 1, v_openDecls_1814_);
v___x_1817_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1816_);
lean_ctor_set(v___x_1817_, 1, v___y_1806_);
lean_inc_ref(v___y_1810_);
lean_inc_ref(v___y_1808_);
v___x_1818_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1818_, 0, v___y_1808_);
lean_ctor_set(v___x_1818_, 1, v___y_1812_);
lean_ctor_set(v___x_1818_, 2, v___y_1811_);
lean_ctor_set(v___x_1818_, 3, v___y_1810_);
lean_ctor_set(v___x_1818_, 4, v___x_1817_);
lean_ctor_set_uint8(v___x_1818_, sizeof(void*)*5, v___y_1807_);
lean_ctor_set_uint8(v___x_1818_, sizeof(void*)*5 + 1, v___y_1809_);
lean_ctor_set_uint8(v___x_1818_, sizeof(void*)*5 + 2, v_isSilent_1799_);
v___x_1819_ = lean_st_ref_take(v___y_1815_);
v_env_1820_ = lean_ctor_get(v___x_1819_, 0);
v_nextMacroScope_1821_ = lean_ctor_get(v___x_1819_, 1);
v_ngen_1822_ = lean_ctor_get(v___x_1819_, 2);
v_auxDeclNGen_1823_ = lean_ctor_get(v___x_1819_, 3);
v_traceState_1824_ = lean_ctor_get(v___x_1819_, 4);
v_cache_1825_ = lean_ctor_get(v___x_1819_, 5);
v_messages_1826_ = lean_ctor_get(v___x_1819_, 6);
v_infoState_1827_ = lean_ctor_get(v___x_1819_, 7);
v_snapshotTasks_1828_ = lean_ctor_get(v___x_1819_, 8);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1819_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1830_ = v___x_1819_;
v_isShared_1831_ = v_isSharedCheck_1839_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_snapshotTasks_1828_);
lean_inc(v_infoState_1827_);
lean_inc(v_messages_1826_);
lean_inc(v_cache_1825_);
lean_inc(v_traceState_1824_);
lean_inc(v_auxDeclNGen_1823_);
lean_inc(v_ngen_1822_);
lean_inc(v_nextMacroScope_1821_);
lean_inc(v_env_1820_);
lean_dec(v___x_1819_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1839_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1832_ = lean_box(0);
v___x_1833_ = l_Lean_MessageLog_add(v___x_1818_, v_messages_1826_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 6, v___x_1833_);
v___x_1835_ = v___x_1830_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_env_1820_);
lean_ctor_set(v_reuseFailAlloc_1838_, 1, v_nextMacroScope_1821_);
lean_ctor_set(v_reuseFailAlloc_1838_, 2, v_ngen_1822_);
lean_ctor_set(v_reuseFailAlloc_1838_, 3, v_auxDeclNGen_1823_);
lean_ctor_set(v_reuseFailAlloc_1838_, 4, v_traceState_1824_);
lean_ctor_set(v_reuseFailAlloc_1838_, 5, v_cache_1825_);
lean_ctor_set(v_reuseFailAlloc_1838_, 6, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1838_, 7, v_infoState_1827_);
lean_ctor_set(v_reuseFailAlloc_1838_, 8, v_snapshotTasks_1828_);
v___x_1835_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = lean_st_ref_put(v___y_1815_, v___x_1835_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1832_);
return v___x_1837_;
}
}
}
v___jp_1840_:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1866_; 
v___x_1851_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1797_);
v___x_1852_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(v___x_1851_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
v_a_1853_ = lean_ctor_get(v___x_1852_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1852_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1855_ = v___x_1852_;
v_isShared_1856_ = v_isSharedCheck_1866_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1852_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1866_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
lean_inc_ref_n(v___y_1846_, 2);
v___x_1857_ = l_Lean_FileMap_toPosition(v___y_1846_, v___y_1849_);
lean_dec(v___y_1849_);
v___x_1858_ = l_Lean_FileMap_toPosition(v___y_1846_, v___y_1850_);
lean_dec(v___y_1850_);
v___x_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
v___x_1860_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0));
if (v___y_1847_ == 0)
{
lean_del_object(v___x_1855_);
lean_dec_ref(v___y_1841_);
v___y_1806_ = v_a_1853_;
v___y_1807_ = v___y_1844_;
v___y_1808_ = v___y_1845_;
v___y_1809_ = v___y_1848_;
v___y_1810_ = v___x_1860_;
v___y_1811_ = v___x_1859_;
v___y_1812_ = v___x_1857_;
v_currNamespace_1813_ = v___y_1842_;
v_openDecls_1814_ = v___y_1843_;
v___y_1815_ = v___y_1803_;
goto v___jp_1805_;
}
else
{
uint8_t v___x_1861_; 
lean_inc(v_a_1853_);
v___x_1861_ = l_Lean_MessageData_hasTag(v___y_1841_, v_a_1853_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1862_; lean_object* v___x_1864_; 
lean_dec_ref_known(v___x_1859_, 1);
lean_dec_ref(v___x_1857_);
lean_dec(v_a_1853_);
v___x_1862_ = lean_box(0);
if (v_isShared_1856_ == 0)
{
lean_ctor_set(v___x_1855_, 0, v___x_1862_);
v___x_1864_ = v___x_1855_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v___x_1862_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
else
{
lean_del_object(v___x_1855_);
v___y_1806_ = v_a_1853_;
v___y_1807_ = v___y_1844_;
v___y_1808_ = v___y_1845_;
v___y_1809_ = v___y_1848_;
v___y_1810_ = v___x_1860_;
v___y_1811_ = v___x_1859_;
v___y_1812_ = v___x_1857_;
v_currNamespace_1813_ = v___y_1842_;
v_openDecls_1814_ = v___y_1843_;
v___y_1815_ = v___y_1803_;
goto v___jp_1805_;
}
}
}
}
v___jp_1867_:
{
lean_object* v___x_1878_; 
v___x_1878_ = l_Lean_Syntax_getTailPos_x3f(v___y_1872_, v___y_1871_);
lean_dec(v___y_1872_);
if (lean_obj_tag(v___x_1878_) == 0)
{
lean_inc(v___y_1877_);
v___y_1841_ = v___y_1868_;
v___y_1842_ = v___y_1869_;
v___y_1843_ = v___y_1870_;
v___y_1844_ = v___y_1871_;
v___y_1845_ = v___y_1874_;
v___y_1846_ = v___y_1873_;
v___y_1847_ = v___y_1876_;
v___y_1848_ = v___y_1875_;
v___y_1849_ = v___y_1877_;
v___y_1850_ = v___y_1877_;
goto v___jp_1840_;
}
else
{
lean_object* v_val_1879_; 
v_val_1879_ = lean_ctor_get(v___x_1878_, 0);
lean_inc(v_val_1879_);
lean_dec_ref_known(v___x_1878_, 1);
v___y_1841_ = v___y_1868_;
v___y_1842_ = v___y_1869_;
v___y_1843_ = v___y_1870_;
v___y_1844_ = v___y_1871_;
v___y_1845_ = v___y_1874_;
v___y_1846_ = v___y_1873_;
v___y_1847_ = v___y_1876_;
v___y_1848_ = v___y_1875_;
v___y_1849_ = v___y_1877_;
v___y_1850_ = v_val_1879_;
goto v___jp_1840_;
}
}
v___jp_1880_:
{
lean_object* v_ref_1890_; lean_object* v___x_1891_; 
v_ref_1890_ = l_Lean_replaceRef(v_ref_1796_, v___y_1888_);
v___x_1891_ = l_Lean_Syntax_getPos_x3f(v_ref_1890_, v___y_1884_);
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_object* v___x_1892_; 
v___x_1892_ = lean_unsigned_to_nat(0u);
v___y_1868_ = v___y_1881_;
v___y_1869_ = v___y_1882_;
v___y_1870_ = v___y_1883_;
v___y_1871_ = v___y_1884_;
v___y_1872_ = v_ref_1890_;
v___y_1873_ = v___y_1886_;
v___y_1874_ = v___y_1885_;
v___y_1875_ = v___y_1889_;
v___y_1876_ = v___y_1887_;
v___y_1877_ = v___x_1892_;
goto v___jp_1867_;
}
else
{
lean_object* v_val_1893_; 
v_val_1893_ = lean_ctor_get(v___x_1891_, 0);
lean_inc(v_val_1893_);
lean_dec_ref_known(v___x_1891_, 1);
v___y_1868_ = v___y_1881_;
v___y_1869_ = v___y_1882_;
v___y_1870_ = v___y_1883_;
v___y_1871_ = v___y_1884_;
v___y_1872_ = v_ref_1890_;
v___y_1873_ = v___y_1886_;
v___y_1874_ = v___y_1885_;
v___y_1875_ = v___y_1889_;
v___y_1876_ = v___y_1887_;
v___y_1877_ = v_val_1893_;
goto v___jp_1867_;
}
}
v___jp_1895_:
{
if (v___y_1904_ == 0)
{
v___y_1881_ = v___y_1898_;
v___y_1882_ = v___y_1899_;
v___y_1883_ = v___y_1900_;
v___y_1884_ = v___y_1901_;
v___y_1885_ = v___y_1897_;
v___y_1886_ = v___y_1896_;
v___y_1887_ = v___y_1902_;
v___y_1888_ = v___y_1903_;
v___y_1889_ = v_severity_1798_;
goto v___jp_1880_;
}
else
{
v___y_1881_ = v___y_1898_;
v___y_1882_ = v___y_1899_;
v___y_1883_ = v___y_1900_;
v___y_1884_ = v___y_1901_;
v___y_1885_ = v___y_1897_;
v___y_1886_ = v___y_1896_;
v___y_1887_ = v___y_1902_;
v___y_1888_ = v___y_1903_;
v___y_1889_ = v___x_1894_;
goto v___jp_1880_;
}
}
v___jp_1905_:
{
if (v___y_1906_ == 0)
{
lean_object* v_toCold_1907_; lean_object* v_ref_1908_; uint8_t v_suppressElabErrors_1909_; lean_object* v_fileName_1910_; lean_object* v_fileMap_1911_; lean_object* v_options_1912_; lean_object* v_currNamespace_1913_; lean_object* v_openDecls_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___f_1917_; uint8_t v___x_1918_; uint8_t v___x_1919_; 
v_toCold_1907_ = lean_ctor_get(v___y_1802_, 0);
v_ref_1908_ = lean_ctor_get(v___y_1802_, 2);
v_suppressElabErrors_1909_ = lean_ctor_get_uint8(v___y_1802_, sizeof(void*)*3 + 1);
v_fileName_1910_ = lean_ctor_get(v_toCold_1907_, 0);
v_fileMap_1911_ = lean_ctor_get(v_toCold_1907_, 1);
v_options_1912_ = lean_ctor_get(v_toCold_1907_, 2);
v_currNamespace_1913_ = lean_ctor_get(v_toCold_1907_, 4);
v_openDecls_1914_ = lean_ctor_get(v_toCold_1907_, 5);
v___x_1915_ = lean_box(v_suppressElabErrors_1909_);
v___x_1916_ = lean_box(v___y_1906_);
v___f_1917_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1917_, 0, v___x_1915_);
lean_closure_set(v___f_1917_, 1, v___x_1916_);
v___x_1918_ = 1;
v___x_1919_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1798_, v___x_1918_);
if (v___x_1919_ == 0)
{
v___y_1896_ = v_fileMap_1911_;
v___y_1897_ = v_fileName_1910_;
v___y_1898_ = v___f_1917_;
v___y_1899_ = v_currNamespace_1913_;
v___y_1900_ = v_openDecls_1914_;
v___y_1901_ = v___y_1906_;
v___y_1902_ = v_suppressElabErrors_1909_;
v___y_1903_ = v_ref_1908_;
v___y_1904_ = v___x_1919_;
goto v___jp_1895_;
}
else
{
lean_object* v___x_1920_; uint8_t v___x_1921_; 
v___x_1920_ = l_Lean_warningAsError;
v___x_1921_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_1912_, v___x_1920_);
v___y_1896_ = v_fileMap_1911_;
v___y_1897_ = v_fileName_1910_;
v___y_1898_ = v___f_1917_;
v___y_1899_ = v_currNamespace_1913_;
v___y_1900_ = v_openDecls_1914_;
v___y_1901_ = v___y_1906_;
v___y_1902_ = v_suppressElabErrors_1909_;
v___y_1903_ = v_ref_1908_;
v___y_1904_ = v___x_1921_;
goto v___jp_1895_;
}
}
else
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
lean_dec_ref(v_msgData_1797_);
v___x_1922_ = lean_box(0);
v___x_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1922_);
return v___x_1923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___boxed(lean_object* v_ref_1926_, lean_object* v_msgData_1927_, lean_object* v_severity_1928_, lean_object* v_isSilent_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
uint8_t v_severity_boxed_1935_; uint8_t v_isSilent_boxed_1936_; lean_object* v_res_1937_; 
v_severity_boxed_1935_ = lean_unbox(v_severity_1928_);
v_isSilent_boxed_1936_ = lean_unbox(v_isSilent_1929_);
v_res_1937_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_1926_, v_msgData_1927_, v_severity_boxed_1935_, v_isSilent_boxed_1936_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v_ref_1926_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(lean_object* v_msgData_1938_, uint8_t v_severity_1939_, uint8_t v_isSilent_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v_ref_1950_; lean_object* v___x_1951_; 
v_ref_1950_ = lean_ctor_get(v___y_1947_, 2);
v___x_1951_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_1950_, v_msgData_1938_, v_severity_1939_, v_isSilent_1940_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28___boxed(lean_object* v_msgData_1952_, lean_object* v_severity_1953_, lean_object* v_isSilent_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_){
_start:
{
uint8_t v_severity_boxed_1964_; uint8_t v_isSilent_boxed_1965_; lean_object* v_res_1966_; 
v_severity_boxed_1964_ = lean_unbox(v_severity_1953_);
v_isSilent_boxed_1965_ = lean_unbox(v_isSilent_1954_);
v_res_1966_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(v_msgData_1952_, v_severity_boxed_1964_, v_isSilent_boxed_1965_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
lean_dec(v___y_1962_);
lean_dec_ref(v___y_1961_);
lean_dec(v___y_1960_);
lean_dec_ref(v___y_1959_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(lean_object* v_msgData_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_){
_start:
{
uint8_t v___x_1977_; uint8_t v___x_1978_; lean_object* v___x_1979_; 
v___x_1977_ = 1;
v___x_1978_ = 0;
v___x_1979_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(v_msgData_1967_, v___x_1977_, v___x_1978_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23___boxed(lean_object* v_msgData_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_){
_start:
{
lean_object* v_res_1990_; 
v_res_1990_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(v_msgData_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
return v_res_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(lean_object* v_opt_1991_, lean_object* v___y_1992_){
_start:
{
lean_object* v_toCold_1994_; lean_object* v_options_1995_; uint8_t v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; 
v_toCold_1994_ = lean_ctor_get(v___y_1992_, 0);
v_options_1995_ = lean_ctor_get(v_toCold_1994_, 2);
v___x_1996_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_1995_, v_opt_1991_);
v___x_1997_ = lean_box(v___x_1996_);
v___x_1998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1998_, 0, v___x_1997_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg___boxed(lean_object* v_opt_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v_opt_1999_, v___y_2000_);
lean_dec_ref(v___y_2000_);
lean_dec_ref(v_opt_1999_);
return v_res_2002_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1(void){
_start:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2004_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0));
v___x_2005_ = l_Lean_stringToMessageData(v___x_2004_);
return v___x_2005_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3(void){
_start:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2007_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2));
v___x_2008_ = l_Lean_stringToMessageData(v___x_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16(lean_object* v_id_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v___x_2019_; lean_object* v_env_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v_a_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2042_; 
v___x_2019_ = lean_st_ref_get(v___y_2017_);
v_env_2020_ = lean_ctor_get(v___x_2019_, 0);
lean_inc_ref(v_env_2020_);
lean_dec(v___x_2019_);
v___x_2021_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_2022_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v___x_2021_, v___y_2016_);
v_a_2023_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2025_ = v___x_2022_;
v_isShared_2026_ = v_isSharedCheck_2042_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_a_2023_);
lean_dec(v___x_2022_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2042_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
uint8_t v_isExporting_2032_; 
v_isExporting_2032_ = lean_ctor_get_uint8(v_env_2020_, sizeof(void*)*8);
lean_dec_ref(v_env_2020_);
if (v_isExporting_2032_ == 0)
{
lean_dec(v_a_2023_);
lean_dec(v_id_2009_);
goto v___jp_2027_;
}
else
{
uint8_t v___x_2033_; 
v___x_2033_ = l_Lean_isPrivateName(v_id_2009_);
if (v___x_2033_ == 0)
{
lean_dec(v_a_2023_);
lean_dec(v_id_2009_);
goto v___jp_2027_;
}
else
{
uint8_t v___x_2034_; 
v___x_2034_ = lean_unbox(v_a_2023_);
lean_dec(v_a_2023_);
if (v___x_2034_ == 0)
{
lean_dec(v_id_2009_);
goto v___jp_2027_;
}
else
{
lean_object* v___x_2035_; uint8_t v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
lean_del_object(v___x_2025_);
v___x_2035_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1);
v___x_2036_ = 0;
v___x_2037_ = l_Lean_MessageData_ofConstName(v_id_2009_, v___x_2036_);
v___x_2038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2035_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3);
v___x_2040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2038_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v___x_2041_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(v___x_2040_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
return v___x_2041_;
}
}
}
v___jp_2027_:
{
lean_object* v___x_2028_; lean_object* v___x_2030_; 
v___x_2028_ = lean_box(0);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 0, v___x_2028_);
v___x_2030_ = v___x_2025_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_2028_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___boxed(lean_object* v_id_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16(v_id_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___y_2045_);
lean_dec_ref(v___y_2044_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15(lean_object* v_x_2054_){
_start:
{
if (lean_obj_tag(v_x_2054_) == 0)
{
lean_object* v___x_2055_; 
v___x_2055_ = lean_box(0);
return v___x_2055_;
}
else
{
lean_object* v_head_2056_; lean_object* v_tail_2057_; lean_object* v_fst_2058_; uint8_t v___x_2059_; 
v_head_2056_ = lean_ctor_get(v_x_2054_, 0);
v_tail_2057_ = lean_ctor_get(v_x_2054_, 1);
v_fst_2058_ = lean_ctor_get(v_head_2056_, 0);
v___x_2059_ = l_Lean_isPrivateName(v_fst_2058_);
if (v___x_2059_ == 0)
{
v_x_2054_ = v_tail_2057_;
goto _start;
}
else
{
lean_object* v___x_2061_; 
lean_inc(v_head_2056_);
v___x_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2061_, 0, v_head_2056_);
return v___x_2061_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15___boxed(lean_object* v_x_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15(v_x_2062_);
lean_dec(v_x_2062_);
return v_res_2063_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7(lean_object* v_id_2064_, uint8_t v_enableLog_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v___x_2075_; lean_object* v_toCold_2076_; lean_object* v_env_2077_; lean_object* v_options_2078_; lean_object* v_currNamespace_2079_; lean_object* v_openDecls_2080_; lean_object* v_res_2081_; lean_object* v___x_2082_; 
v___x_2075_ = lean_st_ref_get(v___y_2073_);
v_toCold_2076_ = lean_ctor_get(v___y_2072_, 0);
v_env_2077_ = lean_ctor_get(v___x_2075_, 0);
lean_inc_ref(v_env_2077_);
lean_dec(v___x_2075_);
v_options_2078_ = lean_ctor_get(v_toCold_2076_, 2);
v_currNamespace_2079_ = lean_ctor_get(v_toCold_2076_, 4);
v_openDecls_2080_ = lean_ctor_get(v_toCold_2076_, 5);
lean_inc(v_openDecls_2080_);
lean_inc(v_currNamespace_2079_);
v_res_2081_ = l_Lean_ResolveName_resolveGlobalName(v_env_2077_, v_options_2078_, v_currNamespace_2079_, v_openDecls_2080_, v_id_2064_);
v___x_2082_ = lean_st_ref_get(v___y_2073_);
if (v_enableLog_2065_ == 0)
{
lean_object* v___x_2083_; 
lean_dec(v___x_2082_);
v___x_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2083_, 0, v_res_2081_);
return v___x_2083_;
}
else
{
lean_object* v_env_2084_; uint8_t v_isExporting_2085_; 
v_env_2084_ = lean_ctor_get(v___x_2082_, 0);
lean_inc_ref(v_env_2084_);
lean_dec(v___x_2082_);
v_isExporting_2085_ = lean_ctor_get_uint8(v_env_2084_, sizeof(void*)*8);
lean_dec_ref(v_env_2084_);
if (v_isExporting_2085_ == 0)
{
lean_object* v___x_2086_; 
v___x_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2086_, 0, v_res_2081_);
return v___x_2086_;
}
else
{
lean_object* v___x_2087_; 
v___x_2087_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15(v_res_2081_);
if (lean_obj_tag(v___x_2087_) == 1)
{
lean_object* v_val_2088_; lean_object* v_fst_2089_; lean_object* v___x_2090_; 
v_val_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_val_2088_);
lean_dec_ref_known(v___x_2087_, 1);
v_fst_2089_ = lean_ctor_get(v_val_2088_, 0);
lean_inc(v_fst_2089_);
lean_dec(v_val_2088_);
v___x_2090_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16(v_fst_2089_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2097_; 
v_isSharedCheck_2097_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2097_ == 0)
{
lean_object* v_unused_2098_; 
v_unused_2098_ = lean_ctor_get(v___x_2090_, 0);
lean_dec(v_unused_2098_);
v___x_2092_ = v___x_2090_;
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
else
{
lean_dec(v___x_2090_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2097_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2095_; 
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 0, v_res_2081_);
v___x_2095_ = v___x_2092_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v_res_2081_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
else
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
lean_dec(v_res_2081_);
v_a_2099_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2090_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2090_);
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
else
{
lean_object* v___x_2107_; 
lean_dec(v___x_2087_);
v___x_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2107_, 0, v_res_2081_);
return v___x_2107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_id_2108_, lean_object* v_enableLog_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
uint8_t v_enableLog_boxed_2119_; lean_object* v_res_2120_; 
v_enableLog_boxed_2119_ = lean_unbox(v_enableLog_2109_);
v_res_2120_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7(v_id_2108_, v_enableLog_boxed_2119_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
return v_res_2120_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0(void){
_start:
{
lean_object* v___x_2121_; 
v___x_2121_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2121_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1(void){
_start:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2122_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0);
v___x_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
return v___x_2123_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2(void){
_start:
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2124_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1);
v___x_2125_ = lean_unsigned_to_nat(0u);
v___x_2126_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2125_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
lean_ctor_set(v___x_2126_, 2, v___x_2125_);
lean_ctor_set(v___x_2126_, 3, v___x_2125_);
lean_ctor_set(v___x_2126_, 4, v___x_2124_);
lean_ctor_set(v___x_2126_, 5, v___x_2124_);
lean_ctor_set(v___x_2126_, 6, v___x_2124_);
lean_ctor_set(v___x_2126_, 7, v___x_2124_);
lean_ctor_set(v___x_2126_, 8, v___x_2124_);
lean_ctor_set(v___x_2126_, 9, v___x_2124_);
lean_ctor_set(v___x_2126_, 10, v___x_2124_);
return v___x_2126_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3(void){
_start:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v___x_2127_ = lean_unsigned_to_nat(32u);
v___x_2128_ = lean_mk_empty_array_with_capacity(v___x_2127_);
v___x_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2128_);
return v___x_2129_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4(void){
_start:
{
size_t v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2130_ = ((size_t)5ULL);
v___x_2131_ = lean_unsigned_to_nat(0u);
v___x_2132_ = lean_unsigned_to_nat(32u);
v___x_2133_ = lean_mk_empty_array_with_capacity(v___x_2132_);
v___x_2134_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3);
v___x_2135_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
lean_ctor_set(v___x_2135_, 1, v___x_2133_);
lean_ctor_set(v___x_2135_, 2, v___x_2131_);
lean_ctor_set(v___x_2135_, 3, v___x_2131_);
lean_ctor_set_usize(v___x_2135_, 4, v___x_2130_);
return v___x_2135_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5(void){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2136_ = lean_box(1);
v___x_2137_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4);
v___x_2138_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1);
v___x_2139_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v___x_2137_);
lean_ctor_set(v___x_2139_, 2, v___x_2136_);
return v___x_2139_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7(void){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6));
v___x_2142_ = l_Lean_stringToMessageData(v___x_2141_);
return v___x_2142_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9(void){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8));
v___x_2145_ = l_Lean_stringToMessageData(v___x_2144_);
return v___x_2145_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11(void){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2147_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10));
v___x_2148_ = l_Lean_stringToMessageData(v___x_2147_);
return v___x_2148_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13(void){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12));
v___x_2151_ = l_Lean_stringToMessageData(v___x_2150_);
return v___x_2151_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15(void){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2153_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14));
v___x_2154_ = l_Lean_stringToMessageData(v___x_2153_);
return v___x_2154_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17(void){
_start:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16));
v___x_2157_ = l_Lean_stringToMessageData(v___x_2156_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18));
v___x_2160_ = l_Lean_stringToMessageData(v___x_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(lean_object* v_msg_2161_, lean_object* v_declHint_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v_env_2167_; uint8_t v___x_2168_; 
v___x_2165_ = lean_box(0);
v___x_2166_ = lean_st_ref_get(v___y_2163_);
v_env_2167_ = lean_ctor_get(v___x_2166_, 0);
lean_inc_ref(v_env_2167_);
lean_dec(v___x_2166_);
v___x_2168_ = l_Lean_Name_isAnonymous(v_declHint_2162_);
if (v___x_2168_ == 0)
{
uint8_t v_isExporting_2169_; 
v_isExporting_2169_ = lean_ctor_get_uint8(v_env_2167_, sizeof(void*)*8);
if (v_isExporting_2169_ == 0)
{
lean_object* v___x_2170_; 
lean_dec_ref(v_env_2167_);
lean_dec(v_declHint_2162_);
v___x_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2170_, 0, v_msg_2161_);
return v___x_2170_;
}
else
{
lean_object* v___x_2171_; uint8_t v___x_2172_; 
lean_inc_ref(v_env_2167_);
v___x_2171_ = l_Lean_Environment_setExporting(v_env_2167_, v___x_2168_);
lean_inc(v_declHint_2162_);
lean_inc_ref(v___x_2171_);
v___x_2172_ = l_Lean_Environment_contains(v___x_2171_, v_declHint_2162_, v_isExporting_2169_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; 
lean_dec_ref(v___x_2171_);
lean_dec_ref(v_env_2167_);
lean_dec(v_declHint_2162_);
v___x_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2173_, 0, v_msg_2161_);
return v___x_2173_;
}
else
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v_c_2179_; lean_object* v___x_2180_; 
v___x_2174_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2);
v___x_2175_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5);
v___x_2176_ = l_Lean_Options_empty;
v___x_2177_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2171_);
lean_ctor_set(v___x_2177_, 1, v___x_2174_);
lean_ctor_set(v___x_2177_, 2, v___x_2175_);
lean_ctor_set(v___x_2177_, 3, v___x_2176_);
lean_inc(v_declHint_2162_);
v___x_2178_ = l_Lean_MessageData_ofConstName(v_declHint_2162_, v___x_2168_);
v_c_2179_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2179_, 0, v___x_2177_);
lean_ctor_set(v_c_2179_, 1, v___x_2178_);
v___x_2180_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2167_, v_declHint_2162_);
if (lean_obj_tag(v___x_2180_) == 0)
{
lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
lean_dec_ref(v_env_2167_);
lean_dec(v_declHint_2162_);
v___x_2181_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7);
v___x_2182_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2181_);
lean_ctor_set(v___x_2182_, 1, v_c_2179_);
v___x_2183_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9);
v___x_2184_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2182_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = l_Lean_MessageData_note(v___x_2184_);
v___x_2186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2186_, 0, v_msg_2161_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
return v___x_2187_;
}
else
{
lean_object* v_val_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2222_; 
v_val_2188_ = lean_ctor_get(v___x_2180_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2180_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2190_ = v___x_2180_;
v_isShared_2191_ = v_isSharedCheck_2222_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_val_2188_);
lean_dec(v___x_2180_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2222_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v_mod_2194_; uint8_t v___x_2195_; 
v___x_2192_ = l_Lean_Environment_header(v_env_2167_);
lean_dec_ref(v_env_2167_);
v___x_2193_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2192_);
v_mod_2194_ = lean_array_get(v___x_2165_, v___x_2193_, v_val_2188_);
lean_dec(v_val_2188_);
lean_dec_ref(v___x_2193_);
v___x_2195_ = l_Lean_isPrivateName(v_declHint_2162_);
lean_dec(v_declHint_2162_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2196_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11);
v___x_2197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v_c_2179_);
v___x_2198_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13);
v___x_2199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = l_Lean_MessageData_ofName(v_mod_2194_);
v___x_2201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2199_);
lean_ctor_set(v___x_2201_, 1, v___x_2200_);
v___x_2202_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15);
v___x_2203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2201_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = l_Lean_MessageData_note(v___x_2203_);
v___x_2205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2205_, 0, v_msg_2161_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
if (v_isShared_2191_ == 0)
{
lean_ctor_set_tag(v___x_2190_, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2205_);
v___x_2207_ = v___x_2190_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
else
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
v___x_2209_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7);
v___x_2210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2209_);
lean_ctor_set(v___x_2210_, 1, v_c_2179_);
v___x_2211_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17);
v___x_2212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = l_Lean_MessageData_ofName(v_mod_2194_);
v___x_2214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2212_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19);
v___x_2216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2214_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
v___x_2217_ = l_Lean_MessageData_note(v___x_2216_);
v___x_2218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2218_, 0, v_msg_2161_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
if (v_isShared_2191_ == 0)
{
lean_ctor_set_tag(v___x_2190_, 0);
lean_ctor_set(v___x_2190_, 0, v___x_2218_);
v___x_2220_ = v___x_2190_;
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
}
}
}
}
}
else
{
lean_object* v___x_2223_; 
lean_dec_ref(v_env_2167_);
lean_dec(v_declHint_2162_);
v___x_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2223_, 0, v_msg_2161_);
return v___x_2223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___boxed(lean_object* v_msg_2224_, lean_object* v_declHint_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_2224_, v_declHint_2225_, v___y_2226_);
lean_dec(v___y_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(lean_object* v_msg_2229_, lean_object* v_declHint_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
lean_object* v___x_2240_; lean_object* v_a_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2250_; 
v___x_2240_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_2229_, v_declHint_2230_, v___y_2238_);
v_a_2241_ = lean_ctor_get(v___x_2240_, 0);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2240_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2243_ = v___x_2240_;
v_isShared_2244_ = v_isSharedCheck_2250_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_a_2241_);
lean_dec(v___x_2240_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2250_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2248_; 
v___x_2245_ = l_Lean_unknownIdentifierMessageTag;
v___x_2246_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2246_, 0, v___x_2245_);
lean_ctor_set(v___x_2246_, 1, v_a_2241_);
if (v_isShared_2244_ == 0)
{
lean_ctor_set(v___x_2243_, 0, v___x_2246_);
v___x_2248_ = v___x_2243_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v___x_2246_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33___boxed(lean_object* v_msg_2251_, lean_object* v_declHint_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(v_msg_2251_, v_declHint_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(lean_object* v_ref_2263_, lean_object* v_msg_2264_, lean_object* v_declHint_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v___x_2275_; lean_object* v_a_2276_; lean_object* v___x_2277_; 
v___x_2275_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(v_msg_2264_, v_declHint_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
v_a_2276_ = lean_ctor_get(v___x_2275_, 0);
lean_inc(v_a_2276_);
lean_dec_ref(v___x_2275_);
v___x_2277_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_ref_2263_, v_a_2276_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg___boxed(lean_object* v_ref_2278_, lean_object* v_msg_2279_, lean_object* v_declHint_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_2278_, v_msg_2279_, v_declHint_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
lean_dec(v___y_2288_);
lean_dec_ref(v___y_2287_);
lean_dec(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v_ref_2278_);
return v_res_2290_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2292_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0));
v___x_2293_ = l_Lean_stringToMessageData(v___x_2292_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(lean_object* v_ref_2294_, lean_object* v_constName_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v___x_2305_; uint8_t v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2305_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1);
v___x_2306_ = 0;
lean_inc(v_constName_2295_);
v___x_2307_ = l_Lean_MessageData_ofConstName(v_constName_2295_, v___x_2306_);
v___x_2308_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2305_);
lean_ctor_set(v___x_2308_, 1, v___x_2307_);
v___x_2309_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_2310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2310_, 0, v___x_2308_);
lean_ctor_set(v___x_2310_, 1, v___x_2309_);
v___x_2311_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_2294_, v___x_2310_, v_constName_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___boxed(lean_object* v_ref_2312_, lean_object* v_constName_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_2312_, v_constName_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v_ref_2312_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__19(lean_object* v_a_2324_, lean_object* v_a_2325_){
_start:
{
if (lean_obj_tag(v_a_2324_) == 0)
{
lean_object* v___x_2326_; 
v___x_2326_ = l_List_reverse___redArg(v_a_2325_);
return v___x_2326_;
}
else
{
lean_object* v_head_2327_; lean_object* v_tail_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2337_; 
v_head_2327_ = lean_ctor_get(v_a_2324_, 0);
v_tail_2328_ = lean_ctor_get(v_a_2324_, 1);
v_isSharedCheck_2337_ = !lean_is_exclusive(v_a_2324_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2330_ = v_a_2324_;
v_isShared_2331_ = v_isSharedCheck_2337_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_tail_2328_);
lean_inc(v_head_2327_);
lean_dec(v_a_2324_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2337_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v_fst_2332_; lean_object* v___x_2334_; 
v_fst_2332_ = lean_ctor_get(v_head_2327_, 0);
lean_inc(v_fst_2332_);
lean_dec(v_head_2327_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 1, v_a_2325_);
lean_ctor_set(v___x_2330_, 0, v_fst_2332_);
v___x_2334_ = v___x_2330_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_fst_2332_);
lean_ctor_set(v_reuseFailAlloc_2336_, 1, v_a_2325_);
v___x_2334_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
v_a_2324_ = v_tail_2328_;
v_a_2325_ = v___x_2334_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__18(lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
if (lean_obj_tag(v_a_2338_) == 0)
{
lean_object* v___x_2340_; 
v___x_2340_ = l_List_reverse___redArg(v_a_2339_);
return v___x_2340_;
}
else
{
lean_object* v_head_2341_; lean_object* v_tail_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2353_; 
v_head_2341_ = lean_ctor_get(v_a_2338_, 0);
v_tail_2342_ = lean_ctor_get(v_a_2338_, 1);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_a_2338_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2344_ = v_a_2338_;
v_isShared_2345_ = v_isSharedCheck_2353_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_tail_2342_);
lean_inc(v_head_2341_);
lean_dec(v_a_2338_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2353_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v_snd_2346_; uint8_t v___x_2347_; 
v_snd_2346_ = lean_ctor_get(v_head_2341_, 1);
v___x_2347_ = l_List_isEmpty___redArg(v_snd_2346_);
if (v___x_2347_ == 0)
{
lean_del_object(v___x_2344_);
lean_dec(v_head_2341_);
v_a_2338_ = v_tail_2342_;
goto _start;
}
else
{
lean_object* v___x_2350_; 
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 1, v_a_2339_);
v___x_2350_ = v___x_2344_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_head_2341_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v_a_2339_);
v___x_2350_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
v_a_2338_ = v_tail_2342_;
v_a_2339_ = v___x_2350_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8(lean_object* v_n_2354_, lean_object* v_cs_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
lean_object* v___x_2365_; lean_object* v_cs_2366_; uint8_t v___x_2370_; 
v___x_2365_ = lean_box(0);
v_cs_2366_ = l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__18(v_cs_2355_, v___x_2365_);
v___x_2370_ = l_List_isEmpty___redArg(v_cs_2366_);
if (v___x_2370_ == 0)
{
lean_dec(v_n_2354_);
goto v___jp_2367_;
}
else
{
lean_object* v_ref_2371_; lean_object* v___x_2372_; lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
lean_dec(v_cs_2366_);
v_ref_2371_ = lean_ctor_get(v___y_2362_, 2);
v___x_2372_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_2371_, v_n_2354_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2372_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2372_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
v___jp_2367_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2368_ = l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__19(v_cs_2366_, v___x_2365_);
v___x_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2368_);
return v___x_2369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8___boxed(lean_object* v_n_2381_, lean_object* v_cs_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8(v_n_2381_, v_cs_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2(lean_object* v_n_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_){
_start:
{
uint8_t v___x_2403_; lean_object* v___x_2404_; 
v___x_2403_ = 1;
lean_inc(v_n_2393_);
v___x_2404_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7(v_n_2393_, v___x_2403_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
if (lean_obj_tag(v___x_2404_) == 0)
{
lean_object* v_a_2405_; lean_object* v___x_2406_; 
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
lean_inc(v_a_2405_);
lean_dec_ref_known(v___x_2404_, 1);
v___x_2406_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8(v_n_2393_, v_a_2405_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_);
return v___x_2406_;
}
else
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_dec(v_n_2393_);
v_a_2407_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2404_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2404_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2___boxed(lean_object* v_n_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_){
_start:
{
lean_object* v_res_2425_; 
v_res_2425_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2(v_n_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_);
lean_dec(v___y_2423_);
lean_dec_ref(v___y_2422_);
lean_dec(v___y_2421_);
lean_dec_ref(v___y_2420_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
return v_res_2425_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3_spec__10(lean_object* v_a_2426_, lean_object* v_a_2427_){
_start:
{
if (lean_obj_tag(v_a_2426_) == 0)
{
lean_object* v___x_2428_; 
v___x_2428_ = lean_array_to_list(v_a_2427_);
return v___x_2428_;
}
else
{
lean_object* v_head_2429_; 
v_head_2429_ = lean_ctor_get(v_a_2426_, 0);
if (lean_obj_tag(v_head_2429_) == 1)
{
lean_object* v_fields_2430_; 
v_fields_2430_ = lean_ctor_get(v_head_2429_, 1);
if (lean_obj_tag(v_fields_2430_) == 0)
{
lean_object* v_tail_2431_; lean_object* v_n_2432_; lean_object* v___x_2433_; 
lean_inc_ref(v_head_2429_);
v_tail_2431_ = lean_ctor_get(v_a_2426_, 1);
lean_inc(v_tail_2431_);
lean_dec_ref_known(v_a_2426_, 2);
v_n_2432_ = lean_ctor_get(v_head_2429_, 0);
lean_inc(v_n_2432_);
lean_dec_ref_known(v_head_2429_, 2);
v___x_2433_ = lean_array_push(v_a_2427_, v_n_2432_);
v_a_2426_ = v_tail_2431_;
v_a_2427_ = v___x_2433_;
goto _start;
}
else
{
lean_object* v_tail_2435_; 
v_tail_2435_ = lean_ctor_get(v_a_2426_, 1);
lean_inc(v_tail_2435_);
lean_dec_ref_known(v_a_2426_, 2);
v_a_2426_ = v_tail_2435_;
goto _start;
}
}
else
{
lean_object* v_tail_2437_; 
v_tail_2437_ = lean_ctor_get(v_a_2426_, 1);
lean_inc(v_tail_2437_);
lean_dec_ref_known(v_a_2426_, 2);
v_a_2426_ = v_tail_2437_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2444_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__2));
v___x_2445_ = l_Lean_MessageData_ofFormat(v___x_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3(lean_object* v_stx_2446_, lean_object* v_k_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
if (lean_obj_tag(v_stx_2446_) == 3)
{
lean_object* v_val_2457_; lean_object* v_preresolved_2458_; lean_object* v___x_2459_; lean_object* v_pre_2460_; uint8_t v___x_2461_; 
v_val_2457_ = lean_ctor_get(v_stx_2446_, 2);
lean_inc(v_val_2457_);
v_preresolved_2458_ = lean_ctor_get(v_stx_2446_, 3);
v___x_2459_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__0));
lean_inc(v_preresolved_2458_);
v_pre_2460_ = l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3_spec__10(v_preresolved_2458_, v___x_2459_);
v___x_2461_ = l_List_isEmpty___redArg(v_pre_2460_);
if (v___x_2461_ == 0)
{
lean_object* v___x_2462_; 
lean_dec_ref_known(v_stx_2446_, 4);
lean_dec(v_val_2457_);
lean_dec_ref(v_k_2447_);
v___x_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2462_, 0, v_pre_2460_);
return v___x_2462_;
}
else
{
lean_object* v_toCold_2463_; lean_object* v_currRecDepth_2464_; lean_object* v_ref_2465_; uint8_t v_diag_2466_; uint8_t v_suppressElabErrors_2467_; lean_object* v_ref_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
lean_dec(v_pre_2460_);
v_toCold_2463_ = lean_ctor_get(v___y_2454_, 0);
v_currRecDepth_2464_ = lean_ctor_get(v___y_2454_, 1);
v_ref_2465_ = lean_ctor_get(v___y_2454_, 2);
v_diag_2466_ = lean_ctor_get_uint8(v___y_2454_, sizeof(void*)*3);
v_suppressElabErrors_2467_ = lean_ctor_get_uint8(v___y_2454_, sizeof(void*)*3 + 1);
v_ref_2468_ = l_Lean_replaceRef(v_stx_2446_, v_ref_2465_);
lean_dec_ref_known(v_stx_2446_, 4);
lean_inc(v_currRecDepth_2464_);
lean_inc_ref(v_toCold_2463_);
v___x_2469_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2469_, 0, v_toCold_2463_);
lean_ctor_set(v___x_2469_, 1, v_currRecDepth_2464_);
lean_ctor_set(v___x_2469_, 2, v_ref_2468_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3, v_diag_2466_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*3 + 1, v_suppressElabErrors_2467_);
lean_inc(v___y_2455_);
lean_inc(v___y_2453_);
lean_inc_ref(v___y_2452_);
lean_inc(v___y_2451_);
lean_inc_ref(v___y_2450_);
lean_inc(v___y_2449_);
lean_inc_ref(v___y_2448_);
v___x_2470_ = lean_apply_10(v_k_2447_, v_val_2457_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___x_2469_, v___y_2455_, lean_box(0));
return v___x_2470_;
}
}
else
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
lean_dec_ref(v_k_2447_);
v___x_2471_ = lean_obj_once(&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3, &l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3_once, _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3);
v___x_2472_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_stx_2446_, v___x_2471_, v___y_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_);
lean_dec(v_stx_2446_);
return v___x_2472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___boxed(lean_object* v_stx_2473_, lean_object* v_k_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v_res_2484_; 
v_res_2484_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3(v_stx_2473_, v_k_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_);
lean_dec(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec_ref(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
return v_res_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0(lean_object* v_stx_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2496_ = ((lean_object*)(l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___closed__0));
v___x_2497_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3(v_stx_2486_, v___x_2496_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___boxed(lean_object* v_stx_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_){
_start:
{
lean_object* v_res_2508_; 
v_res_2508_ = l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0(v_stx_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_);
lean_dec(v___y_2506_);
lean_dec_ref(v___y_2505_);
lean_dec(v___y_2504_);
lean_dec_ref(v___y_2503_);
lean_dec(v___y_2502_);
lean_dec_ref(v___y_2501_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0(lean_object* v_id_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_){
_start:
{
lean_object* v___x_2519_; 
lean_inc(v_id_2509_);
v___x_2519_ = l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0(v_id_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2521_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
lean_inc(v_a_2520_);
lean_dec_ref_known(v___x_2519_, 1);
v___x_2521_ = l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1(v_id_2509_, v_a_2520_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_);
return v___x_2521_;
}
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2529_; 
lean_dec(v_id_2509_);
v_a_2522_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2529_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2524_ = v___x_2519_;
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2519_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2529_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2527_; 
if (v_isShared_2525_ == 0)
{
v___x_2527_ = v___x_2524_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v_a_2522_);
v___x_2527_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
return v___x_2527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0___boxed(lean_object* v_id_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0(v_id_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec_ref(v___y_2531_);
return v_res_2540_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0);
v___x_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
return v___x_2542_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0);
v___x_2544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
lean_ctor_set(v___x_2544_, 1, v___x_2543_);
return v___x_2544_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0);
v___x_2546_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
lean_ctor_set(v___x_2546_, 2, v___x_2545_);
lean_ctor_set(v___x_2546_, 3, v___x_2545_);
lean_ctor_set(v___x_2546_, 4, v___x_2545_);
lean_ctor_set(v___x_2546_, 5, v___x_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(lean_object* v_declName_2547_, uint8_t v_s_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
lean_object* v___x_2552_; lean_object* v_env_2553_; lean_object* v_nextMacroScope_2554_; lean_object* v_ngen_2555_; lean_object* v_auxDeclNGen_2556_; lean_object* v_traceState_2557_; lean_object* v_messages_2558_; lean_object* v_infoState_2559_; lean_object* v_snapshotTasks_2560_; lean_object* v___x_2562_; uint8_t v_isShared_2563_; uint8_t v_isSharedCheck_2589_; 
v___x_2552_ = lean_st_ref_take(v___y_2550_);
v_env_2553_ = lean_ctor_get(v___x_2552_, 0);
v_nextMacroScope_2554_ = lean_ctor_get(v___x_2552_, 1);
v_ngen_2555_ = lean_ctor_get(v___x_2552_, 2);
v_auxDeclNGen_2556_ = lean_ctor_get(v___x_2552_, 3);
v_traceState_2557_ = lean_ctor_get(v___x_2552_, 4);
v_messages_2558_ = lean_ctor_get(v___x_2552_, 6);
v_infoState_2559_ = lean_ctor_get(v___x_2552_, 7);
v_snapshotTasks_2560_ = lean_ctor_get(v___x_2552_, 8);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2589_ == 0)
{
lean_object* v_unused_2590_; 
v_unused_2590_ = lean_ctor_get(v___x_2552_, 5);
lean_dec(v_unused_2590_);
v___x_2562_ = v___x_2552_;
v_isShared_2563_ = v_isSharedCheck_2589_;
goto v_resetjp_2561_;
}
else
{
lean_inc(v_snapshotTasks_2560_);
lean_inc(v_infoState_2559_);
lean_inc(v_messages_2558_);
lean_inc(v_traceState_2557_);
lean_inc(v_auxDeclNGen_2556_);
lean_inc(v_ngen_2555_);
lean_inc(v_nextMacroScope_2554_);
lean_inc(v_env_2553_);
lean_dec(v___x_2552_);
v___x_2562_ = lean_box(0);
v_isShared_2563_ = v_isSharedCheck_2589_;
goto v_resetjp_2561_;
}
v_resetjp_2561_:
{
uint8_t v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2569_; 
v___x_2564_ = 1;
v___x_2565_ = lean_box(0);
v___x_2566_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2553_, v_declName_2547_, v_s_2548_, v___x_2564_, v___x_2565_);
v___x_2567_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1);
if (v_isShared_2563_ == 0)
{
lean_ctor_set(v___x_2562_, 5, v___x_2567_);
lean_ctor_set(v___x_2562_, 0, v___x_2566_);
v___x_2569_ = v___x_2562_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2566_);
lean_ctor_set(v_reuseFailAlloc_2588_, 1, v_nextMacroScope_2554_);
lean_ctor_set(v_reuseFailAlloc_2588_, 2, v_ngen_2555_);
lean_ctor_set(v_reuseFailAlloc_2588_, 3, v_auxDeclNGen_2556_);
lean_ctor_set(v_reuseFailAlloc_2588_, 4, v_traceState_2557_);
lean_ctor_set(v_reuseFailAlloc_2588_, 5, v___x_2567_);
lean_ctor_set(v_reuseFailAlloc_2588_, 6, v_messages_2558_);
lean_ctor_set(v_reuseFailAlloc_2588_, 7, v_infoState_2559_);
lean_ctor_set(v_reuseFailAlloc_2588_, 8, v_snapshotTasks_2560_);
v___x_2569_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v_mctx_2572_; lean_object* v_zetaDeltaFVarIds_2573_; lean_object* v_postponed_2574_; lean_object* v_diag_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2586_; 
v___x_2570_ = lean_st_ref_put(v___y_2550_, v___x_2569_);
v___x_2571_ = lean_st_ref_take(v___y_2549_);
v_mctx_2572_ = lean_ctor_get(v___x_2571_, 0);
v_zetaDeltaFVarIds_2573_ = lean_ctor_get(v___x_2571_, 2);
v_postponed_2574_ = lean_ctor_get(v___x_2571_, 3);
v_diag_2575_ = lean_ctor_get(v___x_2571_, 4);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2571_);
if (v_isSharedCheck_2586_ == 0)
{
lean_object* v_unused_2587_; 
v_unused_2587_ = lean_ctor_get(v___x_2571_, 1);
lean_dec(v_unused_2587_);
v___x_2577_ = v___x_2571_;
v_isShared_2578_ = v_isSharedCheck_2586_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_diag_2575_);
lean_inc(v_postponed_2574_);
lean_inc(v_zetaDeltaFVarIds_2573_);
lean_inc(v_mctx_2572_);
lean_dec(v___x_2571_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2586_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2582_; 
v___x_2579_ = lean_box(0);
v___x_2580_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2);
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 1, v___x_2580_);
v___x_2582_ = v___x_2577_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_mctx_2572_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v___x_2580_);
lean_ctor_set(v_reuseFailAlloc_2585_, 2, v_zetaDeltaFVarIds_2573_);
lean_ctor_set(v_reuseFailAlloc_2585_, 3, v_postponed_2574_);
lean_ctor_set(v_reuseFailAlloc_2585_, 4, v_diag_2575_);
v___x_2582_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2583_ = lean_st_ref_put(v___y_2549_, v___x_2582_);
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2579_);
return v___x_2584_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___boxed(lean_object* v_declName_2591_, lean_object* v_s_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
uint8_t v_s_boxed_2596_; lean_object* v_res_2597_; 
v_s_boxed_2596_ = lean_unbox(v_s_2592_);
v_res_2597_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(v_declName_2591_, v_s_boxed_2596_, v___y_2593_, v___y_2594_);
lean_dec(v___y_2594_);
lean_dec(v___y_2593_);
return v_res_2597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8(uint8_t v_status_2598_, lean_object* v_as_2599_, size_t v_sz_2600_, size_t v_i_2601_, lean_object* v_b_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_){
_start:
{
uint8_t v___x_2612_; 
v___x_2612_ = lean_usize_dec_lt(v_i_2601_, v_sz_2600_);
if (v___x_2612_ == 0)
{
lean_object* v___x_2613_; 
v___x_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2613_, 0, v_b_2602_);
return v___x_2613_;
}
else
{
lean_object* v___x_2614_; lean_object* v_a_2615_; lean_object* v___x_2616_; 
v___x_2614_ = lean_box(0);
v_a_2615_ = lean_array_uget_borrowed(v_as_2599_, v_i_2601_);
lean_inc(v_a_2615_);
v___x_2616_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(v_a_2615_, v_status_2598_, v___y_2608_, v___y_2610_);
if (lean_obj_tag(v___x_2616_) == 0)
{
size_t v___x_2617_; size_t v___x_2618_; 
lean_dec_ref_known(v___x_2616_, 1);
v___x_2617_ = ((size_t)1ULL);
v___x_2618_ = lean_usize_add(v_i_2601_, v___x_2617_);
v_i_2601_ = v___x_2618_;
v_b_2602_ = v___x_2614_;
goto _start;
}
else
{
return v___x_2616_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8___boxed(lean_object* v_status_2620_, lean_object* v_as_2621_, lean_object* v_sz_2622_, lean_object* v_i_2623_, lean_object* v_b_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
uint8_t v_status_boxed_2634_; size_t v_sz_boxed_2635_; size_t v_i_boxed_2636_; lean_object* v_res_2637_; 
v_status_boxed_2634_ = lean_unbox(v_status_2620_);
v_sz_boxed_2635_ = lean_unbox_usize(v_sz_2622_);
lean_dec(v_sz_2622_);
v_i_boxed_2636_ = lean_unbox_usize(v_i_2623_);
lean_dec(v_i_2623_);
v_res_2637_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8(v_status_boxed_2634_, v_as_2621_, v_sz_boxed_2635_, v_i_boxed_2636_, v_b_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec_ref(v_as_2621_);
return v_res_2637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(lean_object* v___y_2638_, lean_object* v___x_2639_, lean_object* v___x_2640_, lean_object* v___y_2641_, lean_object* v___x_2642_, lean_object* v___x_2643_, lean_object* v_a_x3f_2644_){
_start:
{
lean_object* v___x_2646_; lean_object* v_env_2647_; lean_object* v_nextMacroScope_2648_; lean_object* v_ngen_2649_; lean_object* v_auxDeclNGen_2650_; lean_object* v_traceState_2651_; lean_object* v_messages_2652_; lean_object* v_infoState_2653_; lean_object* v_snapshotTasks_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2678_; 
v___x_2646_ = lean_st_ref_take(v___y_2638_);
v_env_2647_ = lean_ctor_get(v___x_2646_, 0);
v_nextMacroScope_2648_ = lean_ctor_get(v___x_2646_, 1);
v_ngen_2649_ = lean_ctor_get(v___x_2646_, 2);
v_auxDeclNGen_2650_ = lean_ctor_get(v___x_2646_, 3);
v_traceState_2651_ = lean_ctor_get(v___x_2646_, 4);
v_messages_2652_ = lean_ctor_get(v___x_2646_, 6);
v_infoState_2653_ = lean_ctor_get(v___x_2646_, 7);
v_snapshotTasks_2654_ = lean_ctor_get(v___x_2646_, 8);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2678_ == 0)
{
lean_object* v_unused_2679_; 
v_unused_2679_ = lean_ctor_get(v___x_2646_, 5);
lean_dec(v_unused_2679_);
v___x_2656_ = v___x_2646_;
v_isShared_2657_ = v_isSharedCheck_2678_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_snapshotTasks_2654_);
lean_inc(v_infoState_2653_);
lean_inc(v_messages_2652_);
lean_inc(v_traceState_2651_);
lean_inc(v_auxDeclNGen_2650_);
lean_inc(v_ngen_2649_);
lean_inc(v_nextMacroScope_2648_);
lean_inc(v_env_2647_);
lean_dec(v___x_2646_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2678_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2658_; lean_object* v___x_2660_; 
v___x_2658_ = l_Lean_ScopedEnvExtension_popScope___redArg(v___x_2639_, v_env_2647_);
if (v_isShared_2657_ == 0)
{
lean_ctor_set(v___x_2656_, 5, v___x_2640_);
lean_ctor_set(v___x_2656_, 0, v___x_2658_);
v___x_2660_ = v___x_2656_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v___x_2658_);
lean_ctor_set(v_reuseFailAlloc_2677_, 1, v_nextMacroScope_2648_);
lean_ctor_set(v_reuseFailAlloc_2677_, 2, v_ngen_2649_);
lean_ctor_set(v_reuseFailAlloc_2677_, 3, v_auxDeclNGen_2650_);
lean_ctor_set(v_reuseFailAlloc_2677_, 4, v_traceState_2651_);
lean_ctor_set(v_reuseFailAlloc_2677_, 5, v___x_2640_);
lean_ctor_set(v_reuseFailAlloc_2677_, 6, v_messages_2652_);
lean_ctor_set(v_reuseFailAlloc_2677_, 7, v_infoState_2653_);
lean_ctor_set(v_reuseFailAlloc_2677_, 8, v_snapshotTasks_2654_);
v___x_2660_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v_mctx_2663_; lean_object* v_zetaDeltaFVarIds_2664_; lean_object* v_postponed_2665_; lean_object* v_diag_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2675_; 
v___x_2661_ = lean_st_ref_put(v___y_2638_, v___x_2660_);
v___x_2662_ = lean_st_ref_take(v___y_2641_);
v_mctx_2663_ = lean_ctor_get(v___x_2662_, 0);
v_zetaDeltaFVarIds_2664_ = lean_ctor_get(v___x_2662_, 2);
v_postponed_2665_ = lean_ctor_get(v___x_2662_, 3);
v_diag_2666_ = lean_ctor_get(v___x_2662_, 4);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2675_ == 0)
{
lean_object* v_unused_2676_; 
v_unused_2676_ = lean_ctor_get(v___x_2662_, 1);
lean_dec(v_unused_2676_);
v___x_2668_ = v___x_2662_;
v_isShared_2669_ = v_isSharedCheck_2675_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_diag_2666_);
lean_inc(v_postponed_2665_);
lean_inc(v_zetaDeltaFVarIds_2664_);
lean_inc(v_mctx_2663_);
lean_dec(v___x_2662_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2675_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 1, v___x_2642_);
v___x_2671_ = v___x_2668_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_mctx_2663_);
lean_ctor_set(v_reuseFailAlloc_2674_, 1, v___x_2642_);
lean_ctor_set(v_reuseFailAlloc_2674_, 2, v_zetaDeltaFVarIds_2664_);
lean_ctor_set(v_reuseFailAlloc_2674_, 3, v_postponed_2665_);
lean_ctor_set(v_reuseFailAlloc_2674_, 4, v_diag_2666_);
v___x_2671_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2672_; lean_object* v___x_2673_; 
v___x_2672_ = lean_st_ref_put(v___y_2641_, v___x_2671_);
v___x_2673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2643_);
return v___x_2673_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0___boxed(lean_object* v___y_2680_, lean_object* v___x_2681_, lean_object* v___x_2682_, lean_object* v___y_2683_, lean_object* v___x_2684_, lean_object* v___x_2685_, lean_object* v_a_x3f_2686_, lean_object* v___y_2687_){
_start:
{
lean_object* v_res_2688_; 
v_res_2688_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(v___y_2680_, v___x_2681_, v___x_2682_, v___y_2683_, v___x_2684_, v___x_2685_, v_a_x3f_2686_);
lean_dec(v_a_x3f_2686_);
lean_dec(v___y_2683_);
lean_dec(v___y_2680_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(lean_object* v_names_2689_, uint8_t v_status_2690_, lean_object* v_t_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_){
_start:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v_env_2703_; lean_object* v_nextMacroScope_2704_; lean_object* v_ngen_2705_; lean_object* v_auxDeclNGen_2706_; lean_object* v_traceState_2707_; lean_object* v_messages_2708_; lean_object* v_infoState_2709_; lean_object* v_snapshotTasks_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2776_; 
v___x_2701_ = l_Lean_reducibilityExtraExt;
v___x_2702_ = lean_st_ref_take(v___y_2699_);
v_env_2703_ = lean_ctor_get(v___x_2702_, 0);
v_nextMacroScope_2704_ = lean_ctor_get(v___x_2702_, 1);
v_ngen_2705_ = lean_ctor_get(v___x_2702_, 2);
v_auxDeclNGen_2706_ = lean_ctor_get(v___x_2702_, 3);
v_traceState_2707_ = lean_ctor_get(v___x_2702_, 4);
v_messages_2708_ = lean_ctor_get(v___x_2702_, 6);
v_infoState_2709_ = lean_ctor_get(v___x_2702_, 7);
v_snapshotTasks_2710_ = lean_ctor_get(v___x_2702_, 8);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2776_ == 0)
{
lean_object* v_unused_2777_; 
v_unused_2777_ = lean_ctor_get(v___x_2702_, 5);
lean_dec(v_unused_2777_);
v___x_2712_ = v___x_2702_;
v_isShared_2713_ = v_isSharedCheck_2776_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_snapshotTasks_2710_);
lean_inc(v_infoState_2709_);
lean_inc(v_messages_2708_);
lean_inc(v_traceState_2707_);
lean_inc(v_auxDeclNGen_2706_);
lean_inc(v_ngen_2705_);
lean_inc(v_nextMacroScope_2704_);
lean_inc(v_env_2703_);
lean_dec(v___x_2702_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2776_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2717_; 
v___x_2714_ = l_Lean_ScopedEnvExtension_pushScope___redArg(v___x_2701_, v_env_2703_);
v___x_2715_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1);
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 5, v___x_2715_);
lean_ctor_set(v___x_2712_, 0, v___x_2714_);
v___x_2717_ = v___x_2712_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v___x_2714_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v_nextMacroScope_2704_);
lean_ctor_set(v_reuseFailAlloc_2775_, 2, v_ngen_2705_);
lean_ctor_set(v_reuseFailAlloc_2775_, 3, v_auxDeclNGen_2706_);
lean_ctor_set(v_reuseFailAlloc_2775_, 4, v_traceState_2707_);
lean_ctor_set(v_reuseFailAlloc_2775_, 5, v___x_2715_);
lean_ctor_set(v_reuseFailAlloc_2775_, 6, v_messages_2708_);
lean_ctor_set(v_reuseFailAlloc_2775_, 7, v_infoState_2709_);
lean_ctor_set(v_reuseFailAlloc_2775_, 8, v_snapshotTasks_2710_);
v___x_2717_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v_mctx_2720_; lean_object* v_zetaDeltaFVarIds_2721_; lean_object* v_postponed_2722_; lean_object* v_diag_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2773_; 
v___x_2718_ = lean_st_ref_put(v___y_2699_, v___x_2717_);
v___x_2719_ = lean_st_ref_take(v___y_2697_);
v_mctx_2720_ = lean_ctor_get(v___x_2719_, 0);
v_zetaDeltaFVarIds_2721_ = lean_ctor_get(v___x_2719_, 2);
v_postponed_2722_ = lean_ctor_get(v___x_2719_, 3);
v_diag_2723_ = lean_ctor_get(v___x_2719_, 4);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2719_);
if (v_isSharedCheck_2773_ == 0)
{
lean_object* v_unused_2774_; 
v_unused_2774_ = lean_ctor_get(v___x_2719_, 1);
lean_dec(v_unused_2774_);
v___x_2725_ = v___x_2719_;
v_isShared_2726_ = v_isSharedCheck_2773_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_diag_2723_);
lean_inc(v_postponed_2722_);
lean_inc(v_zetaDeltaFVarIds_2721_);
lean_inc(v_mctx_2720_);
lean_dec(v___x_2719_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2773_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2727_; lean_object* v___x_2729_; 
v___x_2727_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2);
if (v_isShared_2726_ == 0)
{
lean_ctor_set(v___x_2725_, 1, v___x_2727_);
v___x_2729_ = v___x_2725_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_mctx_2720_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v___x_2727_);
lean_ctor_set(v_reuseFailAlloc_2772_, 2, v_zetaDeltaFVarIds_2721_);
lean_ctor_set(v_reuseFailAlloc_2772_, 3, v_postponed_2722_);
lean_ctor_set(v_reuseFailAlloc_2772_, 4, v_diag_2723_);
v___x_2729_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2730_; lean_object* v___x_2731_; size_t v_sz_2732_; size_t v___x_2733_; lean_object* v___x_2734_; 
v___x_2730_ = lean_st_ref_put(v___y_2697_, v___x_2729_);
v___x_2731_ = lean_box(0);
v_sz_2732_ = lean_array_size(v_names_2689_);
v___x_2733_ = ((size_t)0ULL);
v___x_2734_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8(v_status_2690_, v_names_2689_, v_sz_2732_, v___x_2733_, v___x_2731_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_r_2735_; 
lean_dec_ref_known(v___x_2734_, 1);
lean_inc(v___y_2699_);
lean_inc_ref(v___y_2698_);
lean_inc(v___y_2697_);
lean_inc_ref(v___y_2696_);
lean_inc(v___y_2695_);
lean_inc_ref(v___y_2694_);
lean_inc(v___y_2693_);
lean_inc_ref(v___y_2692_);
v_r_2735_ = lean_apply_9(v_t_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, lean_box(0));
if (lean_obj_tag(v_r_2735_) == 0)
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2752_; 
v_a_2736_ = lean_ctor_get(v_r_2735_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v_r_2735_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2738_ = v_r_2735_;
v_isShared_2739_ = v_isSharedCheck_2752_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v_r_2735_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2752_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
lean_inc(v_a_2736_);
if (v_isShared_2739_ == 0)
{
lean_ctor_set_tag(v___x_2738_, 1);
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
lean_object* v___x_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
v___x_2742_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(v___y_2699_, v___x_2701_, v___x_2715_, v___y_2697_, v___x_2727_, v___x_2731_, v___x_2741_);
lean_dec_ref(v___x_2741_);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2749_ == 0)
{
lean_object* v_unused_2750_; 
v_unused_2750_ = lean_ctor_get(v___x_2742_, 0);
lean_dec(v_unused_2750_);
v___x_2744_ = v___x_2742_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_dec(v___x_2742_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 0, v_a_2736_);
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2736_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
}
else
{
lean_object* v_a_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2762_; 
v_a_2753_ = lean_ctor_get(v_r_2735_, 0);
lean_inc(v_a_2753_);
lean_dec_ref_known(v_r_2735_, 1);
v___x_2754_ = lean_box(0);
v___x_2755_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(v___y_2699_, v___x_2701_, v___x_2715_, v___y_2697_, v___x_2727_, v___x_2731_, v___x_2754_);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2755_);
if (v_isSharedCheck_2762_ == 0)
{
lean_object* v_unused_2763_; 
v_unused_2763_ = lean_ctor_get(v___x_2755_, 0);
lean_dec(v_unused_2763_);
v___x_2757_ = v___x_2755_;
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
else
{
lean_dec(v___x_2755_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 1);
lean_ctor_set(v___x_2757_, 0, v_a_2753_);
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_a_2753_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec_ref(v_t_2691_);
v_a_2764_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2734_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2734_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___boxed(lean_object* v_names_2778_, lean_object* v_status_2779_, lean_object* v_t_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_){
_start:
{
uint8_t v_status_boxed_2790_; lean_object* v_res_2791_; 
v_status_boxed_2790_ = lean_unbox(v_status_2779_);
v_res_2791_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(v_names_2778_, v_status_boxed_2790_, v_t_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
lean_dec_ref(v___y_2781_);
lean_dec_ref(v_names_2778_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(lean_object* v_t_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v___x_2795_; lean_object* v_infoState_2796_; uint8_t v_enabled_2797_; 
v___x_2795_ = lean_st_ref_get(v___y_2793_);
v_infoState_2796_ = lean_ctor_get(v___x_2795_, 7);
lean_inc_ref(v_infoState_2796_);
lean_dec(v___x_2795_);
v_enabled_2797_ = lean_ctor_get_uint8(v_infoState_2796_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2796_);
if (v_enabled_2797_ == 0)
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
lean_dec_ref(v_t_2792_);
v___x_2798_ = lean_box(0);
v___x_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
return v___x_2799_;
}
else
{
lean_object* v___x_2800_; lean_object* v_infoState_2801_; lean_object* v_env_2802_; lean_object* v_nextMacroScope_2803_; lean_object* v_ngen_2804_; lean_object* v_auxDeclNGen_2805_; lean_object* v_traceState_2806_; lean_object* v_cache_2807_; lean_object* v_messages_2808_; lean_object* v_snapshotTasks_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2831_; 
v___x_2800_ = lean_st_ref_take(v___y_2793_);
v_infoState_2801_ = lean_ctor_get(v___x_2800_, 7);
v_env_2802_ = lean_ctor_get(v___x_2800_, 0);
v_nextMacroScope_2803_ = lean_ctor_get(v___x_2800_, 1);
v_ngen_2804_ = lean_ctor_get(v___x_2800_, 2);
v_auxDeclNGen_2805_ = lean_ctor_get(v___x_2800_, 3);
v_traceState_2806_ = lean_ctor_get(v___x_2800_, 4);
v_cache_2807_ = lean_ctor_get(v___x_2800_, 5);
v_messages_2808_ = lean_ctor_get(v___x_2800_, 6);
v_snapshotTasks_2809_ = lean_ctor_get(v___x_2800_, 8);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2811_ = v___x_2800_;
v_isShared_2812_ = v_isSharedCheck_2831_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_snapshotTasks_2809_);
lean_inc(v_infoState_2801_);
lean_inc(v_messages_2808_);
lean_inc(v_cache_2807_);
lean_inc(v_traceState_2806_);
lean_inc(v_auxDeclNGen_2805_);
lean_inc(v_ngen_2804_);
lean_inc(v_nextMacroScope_2803_);
lean_inc(v_env_2802_);
lean_dec(v___x_2800_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2831_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
uint8_t v_enabled_2813_; lean_object* v_assignment_2814_; lean_object* v_lazyAssignment_2815_; lean_object* v_trees_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2830_; 
v_enabled_2813_ = lean_ctor_get_uint8(v_infoState_2801_, sizeof(void*)*3);
v_assignment_2814_ = lean_ctor_get(v_infoState_2801_, 0);
v_lazyAssignment_2815_ = lean_ctor_get(v_infoState_2801_, 1);
v_trees_2816_ = lean_ctor_get(v_infoState_2801_, 2);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_infoState_2801_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2818_ = v_infoState_2801_;
v_isShared_2819_ = v_isSharedCheck_2830_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_trees_2816_);
lean_inc(v_lazyAssignment_2815_);
lean_inc(v_assignment_2814_);
lean_dec(v_infoState_2801_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2830_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2823_; 
v___x_2820_ = lean_box(0);
v___x_2821_ = l_Lean_PersistentArray_push___redArg(v_trees_2816_, v_t_2792_);
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 2, v___x_2821_);
v___x_2823_ = v___x_2818_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_assignment_2814_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_lazyAssignment_2815_);
lean_ctor_set(v_reuseFailAlloc_2829_, 2, v___x_2821_);
lean_ctor_set_uint8(v_reuseFailAlloc_2829_, sizeof(void*)*3, v_enabled_2813_);
v___x_2823_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
lean_object* v___x_2825_; 
if (v_isShared_2812_ == 0)
{
lean_ctor_set(v___x_2811_, 7, v___x_2823_);
v___x_2825_ = v___x_2811_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v_env_2802_);
lean_ctor_set(v_reuseFailAlloc_2828_, 1, v_nextMacroScope_2803_);
lean_ctor_set(v_reuseFailAlloc_2828_, 2, v_ngen_2804_);
lean_ctor_set(v_reuseFailAlloc_2828_, 3, v_auxDeclNGen_2805_);
lean_ctor_set(v_reuseFailAlloc_2828_, 4, v_traceState_2806_);
lean_ctor_set(v_reuseFailAlloc_2828_, 5, v_cache_2807_);
lean_ctor_set(v_reuseFailAlloc_2828_, 6, v_messages_2808_);
lean_ctor_set(v_reuseFailAlloc_2828_, 7, v___x_2823_);
lean_ctor_set(v_reuseFailAlloc_2828_, 8, v_snapshotTasks_2809_);
v___x_2825_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; 
v___x_2826_ = lean_st_ref_put(v___y_2793_, v___x_2825_);
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v___x_2820_);
return v___x_2827_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg___boxed(lean_object* v_t_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v_res_2835_; 
v_res_2835_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(v_t_2832_, v___y_2833_);
lean_dec(v___y_2833_);
return v_res_2835_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v___x_2836_ = lean_unsigned_to_nat(32u);
v___x_2837_ = lean_mk_empty_array_with_capacity(v___x_2836_);
v___x_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2838_, 0, v___x_2837_);
return v___x_2838_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1(void){
_start:
{
size_t v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2839_ = ((size_t)5ULL);
v___x_2840_ = lean_unsigned_to_nat(0u);
v___x_2841_ = lean_unsigned_to_nat(32u);
v___x_2842_ = lean_mk_empty_array_with_capacity(v___x_2841_);
v___x_2843_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0);
v___x_2844_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2844_, 0, v___x_2843_);
lean_ctor_set(v___x_2844_, 1, v___x_2842_);
lean_ctor_set(v___x_2844_, 2, v___x_2840_);
lean_ctor_set(v___x_2844_, 3, v___x_2840_);
lean_ctor_set_usize(v___x_2844_, 4, v___x_2839_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5(lean_object* v_t_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v___x_2855_; lean_object* v_infoState_2856_; uint8_t v_enabled_2857_; 
v___x_2855_ = lean_st_ref_get(v___y_2853_);
v_infoState_2856_ = lean_ctor_get(v___x_2855_, 7);
lean_inc_ref(v_infoState_2856_);
lean_dec(v___x_2855_);
v_enabled_2857_ = lean_ctor_get_uint8(v_infoState_2856_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2856_);
if (v_enabled_2857_ == 0)
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
lean_dec_ref(v_t_2845_);
v___x_2858_ = lean_box(0);
v___x_2859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
return v___x_2859_;
}
else
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2860_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1);
v___x_2861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2861_, 0, v_t_2845_);
lean_ctor_set(v___x_2861_, 1, v___x_2860_);
v___x_2862_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(v___x_2861_, v___y_2853_);
return v___x_2862_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___boxed(lean_object* v_t_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5(v_t_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__11(lean_object* v_a_2874_, lean_object* v_a_2875_){
_start:
{
if (lean_obj_tag(v_a_2874_) == 0)
{
lean_object* v___x_2876_; 
v___x_2876_ = l_List_reverse___redArg(v_a_2875_);
return v___x_2876_;
}
else
{
lean_object* v_head_2877_; lean_object* v_tail_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2887_; 
v_head_2877_ = lean_ctor_get(v_a_2874_, 0);
v_tail_2878_ = lean_ctor_get(v_a_2874_, 1);
v_isSharedCheck_2887_ = !lean_is_exclusive(v_a_2874_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2880_ = v_a_2874_;
v_isShared_2881_ = v_isSharedCheck_2887_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_tail_2878_);
lean_inc(v_head_2877_);
lean_dec(v_a_2874_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2887_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2882_; lean_object* v___x_2884_; 
v___x_2882_ = l_Lean_mkLevelParam(v_head_2877_);
if (v_isShared_2881_ == 0)
{
lean_ctor_set(v___x_2880_, 1, v_a_2875_);
lean_ctor_set(v___x_2880_, 0, v___x_2882_);
v___x_2884_ = v___x_2880_;
goto v_reusejp_2883_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v___x_2882_);
lean_ctor_set(v_reuseFailAlloc_2886_, 1, v_a_2875_);
v___x_2884_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2883_;
}
v_reusejp_2883_:
{
v_a_2874_ = v_tail_2878_;
v_a_2875_ = v___x_2884_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(lean_object* v_constName_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v_ref_2898_; lean_object* v___x_2899_; 
v_ref_2898_ = lean_ctor_get(v___y_2895_, 2);
v___x_2899_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_2898_, v_constName_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
return v___x_2899_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg___boxed(lean_object* v_constName_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_){
_start:
{
lean_object* v_res_2910_; 
v_res_2910_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_);
lean_dec(v___y_2908_);
lean_dec_ref(v___y_2907_);
lean_dec(v___y_2906_);
lean_dec_ref(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec_ref(v___y_2903_);
lean_dec(v___y_2902_);
lean_dec_ref(v___y_2901_);
return v_res_2910_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10(lean_object* v_constName_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v___x_2921_; lean_object* v_env_2922_; uint8_t v___x_2923_; lean_object* v___x_2924_; 
v___x_2921_ = lean_st_ref_get(v___y_2919_);
v_env_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc_ref(v_env_2922_);
lean_dec(v___x_2921_);
v___x_2923_ = 0;
lean_inc(v_constName_2911_);
v___x_2924_ = l_Lean_Environment_findConstVal_x3f(v_env_2922_, v_constName_2911_, v___x_2923_);
if (lean_obj_tag(v___x_2924_) == 0)
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
return v___x_2925_;
}
else
{
lean_object* v_val_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_dec(v_constName_2911_);
v_val_2926_ = lean_ctor_get(v___x_2924_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2924_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2924_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_val_2926_);
lean_dec(v___x_2924_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
lean_ctor_set_tag(v___x_2928_, 0);
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_val_2926_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10___boxed(lean_object* v_constName_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10(v_constName_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4(lean_object* v_constName_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v___x_2955_; 
lean_inc(v_constName_2945_);
v___x_2955_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10(v_constName_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; lean_object* v___x_2958_; uint8_t v_isShared_2959_; uint8_t v_isSharedCheck_2967_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2958_ = v___x_2955_;
v_isShared_2959_ = v_isSharedCheck_2967_;
goto v_resetjp_2957_;
}
else
{
lean_inc(v_a_2956_);
lean_dec(v___x_2955_);
v___x_2958_ = lean_box(0);
v_isShared_2959_ = v_isSharedCheck_2967_;
goto v_resetjp_2957_;
}
v_resetjp_2957_:
{
lean_object* v_levelParams_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2965_; 
v_levelParams_2960_ = lean_ctor_get(v_a_2956_, 1);
lean_inc(v_levelParams_2960_);
lean_dec(v_a_2956_);
v___x_2961_ = lean_box(0);
v___x_2962_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__11(v_levelParams_2960_, v___x_2961_);
v___x_2963_ = l_Lean_mkConst(v_constName_2945_, v___x_2962_);
if (v_isShared_2959_ == 0)
{
lean_ctor_set(v___x_2958_, 0, v___x_2963_);
v___x_2965_ = v___x_2958_;
goto v_reusejp_2964_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2963_);
v___x_2965_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2964_;
}
v_reusejp_2964_:
{
return v___x_2965_;
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
lean_dec(v_constName_2945_);
v_a_2968_ = lean_ctor_get(v___x_2955_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2955_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2970_ = v___x_2955_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2955_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4___boxed(lean_object* v_constName_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_){
_start:
{
lean_object* v_res_2986_; 
v_res_2986_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4(v_constName_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_, v___y_2983_, v___y_2984_);
lean_dec(v___y_2984_);
lean_dec_ref(v___y_2983_);
lean_dec(v___y_2982_);
lean_dec_ref(v___y_2981_);
lean_dec(v___y_2980_);
lean_dec_ref(v___y_2979_);
lean_dec(v___y_2978_);
lean_dec_ref(v___y_2977_);
return v_res_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2(lean_object* v_stx_2987_, lean_object* v_n_2988_, lean_object* v_expectedType_x3f_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v___x_2999_; 
v___x_2999_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4(v_n_2988_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; uint8_t v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2999_, 1);
v___x_3001_ = lean_box(0);
v___x_3002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3002_, 0, v___x_3001_);
lean_ctor_set(v___x_3002_, 1, v_stx_2987_);
v___x_3003_ = l_Lean_LocalContext_empty;
v___x_3004_ = 0;
v___x_3005_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3005_, 0, v___x_3002_);
lean_ctor_set(v___x_3005_, 1, v___x_3003_);
lean_ctor_set(v___x_3005_, 2, v_expectedType_x3f_2989_);
lean_ctor_set(v___x_3005_, 3, v_a_3000_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*4, v___x_3004_);
lean_ctor_set_uint8(v___x_3005_, sizeof(void*)*4 + 1, v___x_3004_);
v___x_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
v___x_3007_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5(v___x_3006_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
return v___x_3007_;
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec(v_expectedType_x3f_2989_);
lean_dec(v_stx_2987_);
v_a_3008_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2999_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2999_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2___boxed(lean_object* v_stx_3016_, lean_object* v_n_3017_, lean_object* v_expectedType_x3f_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2(v_stx_3016_, v_n_3017_, v_expectedType_x3f_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_);
lean_dec(v___y_3026_);
lean_dec_ref(v___y_3025_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
return v_res_3028_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1(void){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = ((lean_object*)(l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__0));
v___x_3031_ = l_Lean_stringToMessageData(v___x_3030_);
return v___x_3031_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3(void){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = ((lean_object*)(l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__2));
v___x_3034_ = l_Lean_stringToMessageData(v___x_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype(lean_object* v_stx_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; uint8_t v___x_3047_; uint8_t v___x_3048_; lean_object* v___x_3049_; 
v___x_3045_ = lean_unsigned_to_nat(1u);
v___x_3046_ = l_Lean_Syntax_getArg(v_stx_3035_, v___x_3045_);
v___x_3047_ = 3;
v___x_3048_ = 1;
v___x_3049_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(v___x_3046_, v___x_3047_, v___x_3048_, v_a_3036_, v_a_3042_, v_a_3043_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v___x_3051_ = lean_unsigned_to_nat(2u);
v___x_3052_ = l_Lean_Syntax_getArg(v_stx_3035_, v___x_3051_);
lean_inc(v___x_3052_);
v___x_3053_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0(v___x_3052_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v___x_3055_; lean_object* v_a_3056_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc_n(v_a_3054_, 2);
lean_dec_ref_known(v___x_3053_, 1);
v___x_3055_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg(v_a_3054_, v_a_3043_);
v_a_3056_ = lean_ctor_get(v___x_3055_, 0);
lean_inc(v_a_3056_);
lean_dec_ref(v___x_3055_);
if (lean_obj_tag(v_a_3056_) == 1)
{
lean_object* v_val_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v_val_3057_ = lean_ctor_get(v_a_3056_, 0);
lean_inc(v_val_3057_);
lean_dec_ref_known(v_a_3056_, 1);
v___x_3058_ = lean_box(0);
v___x_3059_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2(v___x_3052_, v_a_3054_, v___x_3058_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v_typeName_3060_; lean_object* v_ctorName_3061_; lean_object* v_projName_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; uint8_t v___x_3068_; uint8_t v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; 
lean_dec_ref_known(v___x_3059_, 1);
v_typeName_3060_ = lean_ctor_get(v_val_3057_, 0);
lean_inc(v_typeName_3060_);
v_ctorName_3061_ = lean_ctor_get(v_val_3057_, 1);
lean_inc(v_ctorName_3061_);
v_projName_3062_ = lean_ctor_get(v_val_3057_, 2);
lean_inc(v_projName_3062_);
lean_dec(v_val_3057_);
v___x_3063_ = lean_unsigned_to_nat(3u);
v___x_3064_ = lean_mk_empty_array_with_capacity(v___x_3063_);
v___x_3065_ = lean_array_push(v___x_3064_, v_typeName_3060_);
v___x_3066_ = lean_array_push(v___x_3065_, v_ctorName_3061_);
v___x_3067_ = lean_array_push(v___x_3066_, v_projName_3062_);
v___x_3068_ = lean_unbox(v_a_3050_);
lean_dec(v_a_3050_);
v___x_3069_ = l_Lean_Parser_Tactic_UnsealingNewtypeReducibility_toReducibilityStatus(v___x_3068_);
v___x_3070_ = lean_unsigned_to_nat(4u);
v___x_3071_ = l_Lean_Syntax_getArg(v_stx_3035_, v___x_3070_);
v___x_3072_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_3072_, 0, v___x_3071_);
v___x_3073_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(v___x_3067_, v___x_3069_, v___x_3072_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
lean_dec_ref(v___x_3067_);
return v___x_3073_;
}
else
{
lean_dec(v_val_3057_);
lean_dec(v_a_3050_);
return v___x_3059_;
}
}
else
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; 
lean_dec(v_a_3056_);
lean_dec(v_a_3050_);
v___x_3074_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1, &l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1_once, _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1);
v___x_3075_ = l_Lean_MessageData_ofName(v_a_3054_);
v___x_3076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3074_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3, &l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3_once, _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3);
v___x_3078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3078_, 0, v___x_3076_);
lean_ctor_set(v___x_3078_, 1, v___x_3077_);
v___x_3079_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v___x_3052_, v___x_3078_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
lean_dec(v___x_3052_);
return v___x_3079_;
}
}
else
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
lean_dec(v___x_3052_);
lean_dec(v_a_3050_);
v_a_3080_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3082_ = v___x_3053_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v___x_3053_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_a_3080_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
}
}
else
{
lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
v_a_3088_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3090_ = v___x_3049_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v___x_3049_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3088_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype___boxed(lean_object* v_stx_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v___y_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l_Lean_Elab_Tactic_evalUnsealingNewtype(v_stx_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_);
lean_dec(v_a_3104_);
lean_dec_ref(v_a_3103_);
lean_dec(v_a_3102_);
lean_dec_ref(v_a_3101_);
lean_dec(v_a_3100_);
lean_dec_ref(v_a_3099_);
lean_dec(v_a_3098_);
lean_dec_ref(v_a_3097_);
lean_dec(v_stx_3096_);
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7(lean_object* v_declName_3107_, uint8_t v_s_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v___x_3118_; 
v___x_3118_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(v_declName_3107_, v_s_3108_, v___y_3114_, v___y_3116_);
return v___x_3118_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___boxed(lean_object* v_declName_3119_, lean_object* v_s_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
uint8_t v_s_boxed_3130_; lean_object* v_res_3131_; 
v_s_boxed_3130_ = lean_unbox(v_s_3120_);
v_res_3131_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7(v_declName_3119_, v_s_boxed_3130_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec(v___y_3126_);
lean_dec_ref(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3(lean_object* v_00_u03b1_3132_, lean_object* v_names_3133_, uint8_t v_status_3134_, lean_object* v_t_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_){
_start:
{
lean_object* v___x_3145_; 
v___x_3145_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(v_names_3133_, v_status_3134_, v_t_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___boxed(lean_object* v_00_u03b1_3146_, lean_object* v_names_3147_, lean_object* v_status_3148_, lean_object* v_t_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
uint8_t v_status_boxed_3159_; lean_object* v_res_3160_; 
v_status_boxed_3159_ = lean_unbox(v_status_3148_);
v_res_3160_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3(v_00_u03b1_3146_, v_names_3147_, v_status_boxed_3159_, v_t_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
lean_dec(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec(v___y_3151_);
lean_dec_ref(v___y_3150_);
lean_dec_ref(v_names_3147_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4(lean_object* v_00_u03b1_3161_, lean_object* v_ref_3162_, lean_object* v_msg_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_ref_3162_, v_msg_3163_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___boxed(lean_object* v_00_u03b1_3174_, lean_object* v_ref_3175_, lean_object* v_msg_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_){
_start:
{
lean_object* v_res_3186_; 
v_res_3186_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4(v_00_u03b1_3174_, v_ref_3175_, v_msg_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_);
lean_dec(v___y_3184_);
lean_dec_ref(v___y_3183_);
lean_dec(v___y_3182_);
lean_dec_ref(v___y_3181_);
lean_dec(v___y_3180_);
lean_dec_ref(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v_ref_3175_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13(lean_object* v_t_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(v_t_3187_, v___y_3195_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___boxed(lean_object* v_t_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_){
_start:
{
lean_object* v_res_3208_; 
v_res_3208_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13(v_t_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_);
lean_dec(v___y_3206_);
lean_dec_ref(v___y_3205_);
lean_dec(v___y_3204_);
lean_dec_ref(v___y_3203_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
return v_res_3208_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10(lean_object* v_00_u03b1_3209_, lean_object* v_msg_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v___x_3220_; 
v___x_3220_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(v_msg_3210_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3220_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___boxed(lean_object* v_00_u03b1_3221_, lean_object* v_msg_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10(v_00_u03b1_3221_, v_msg_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v___y_3224_);
lean_dec_ref(v___y_3223_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18(lean_object* v_00_u03b1_3233_, lean_object* v_constName_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_){
_start:
{
lean_object* v___x_3244_; 
v___x_3244_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_);
return v___x_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___boxed(lean_object* v_00_u03b1_3245_, lean_object* v_constName_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_){
_start:
{
lean_object* v_res_3256_; 
v_res_3256_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18(v_00_u03b1_3245_, v_constName_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
lean_dec(v___y_3250_);
lean_dec_ref(v___y_3249_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
return v_res_3256_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20(lean_object* v_00_u03b1_3257_, lean_object* v_ref_3258_, lean_object* v_constName_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v___x_3269_; 
v___x_3269_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_3258_, v_constName_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___boxed(lean_object* v_00_u03b1_3270_, lean_object* v_ref_3271_, lean_object* v_constName_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
lean_object* v_res_3282_; 
v_res_3282_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20(v_00_u03b1_3270_, v_ref_3271_, v_constName_3272_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
lean_dec(v___y_3274_);
lean_dec_ref(v___y_3273_);
lean_dec(v_ref_3271_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(lean_object* v_opt_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v_opt_3283_, v___y_3290_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___boxed(lean_object* v_opt_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_){
_start:
{
lean_object* v_res_3304_; 
v_res_3304_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(v_opt_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_);
lean_dec(v___y_3302_);
lean_dec_ref(v___y_3301_);
lean_dec(v___y_3300_);
lean_dec_ref(v___y_3299_);
lean_dec(v___y_3298_);
lean_dec_ref(v___y_3297_);
lean_dec(v___y_3296_);
lean_dec_ref(v___y_3295_);
lean_dec_ref(v_opt_3294_);
return v_res_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(lean_object* v_00_u03b1_3305_, lean_object* v_ref_3306_, lean_object* v_msg_3307_, lean_object* v_declHint_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_3306_, v_msg_3307_, v_declHint_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___boxed(lean_object* v_00_u03b1_3319_, lean_object* v_ref_3320_, lean_object* v_msg_3321_, lean_object* v_declHint_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
lean_object* v_res_3332_; 
v_res_3332_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(v_00_u03b1_3319_, v_ref_3320_, v_msg_3321_, v_declHint_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_);
lean_dec(v___y_3330_);
lean_dec_ref(v___y_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___y_3327_);
lean_dec(v___y_3326_);
lean_dec_ref(v___y_3325_);
lean_dec(v___y_3324_);
lean_dec_ref(v___y_3323_);
lean_dec(v_ref_3320_);
return v_res_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(lean_object* v_msg_3333_, lean_object* v_declHint_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_3333_, v_declHint_3334_, v___y_3342_);
return v___x_3344_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___boxed(lean_object* v_msg_3345_, lean_object* v_declHint_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_){
_start:
{
lean_object* v_res_3356_; 
v_res_3356_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(v_msg_3345_, v_declHint_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_);
lean_dec(v___y_3354_);
lean_dec_ref(v___y_3353_);
lean_dec(v___y_3352_);
lean_dec_ref(v___y_3351_);
lean_dec(v___y_3350_);
lean_dec_ref(v___y_3349_);
lean_dec(v___y_3348_);
lean_dec_ref(v___y_3347_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(lean_object* v_ref_3357_, lean_object* v_msgData_3358_, uint8_t v_severity_3359_, uint8_t v_isSilent_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_){
_start:
{
lean_object* v___x_3370_; 
v___x_3370_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_3357_, v_msgData_3358_, v_severity_3359_, v_isSilent_3360_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_);
return v___x_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___boxed(lean_object* v_ref_3371_, lean_object* v_msgData_3372_, lean_object* v_severity_3373_, lean_object* v_isSilent_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
uint8_t v_severity_boxed_3384_; uint8_t v_isSilent_boxed_3385_; lean_object* v_res_3386_; 
v_severity_boxed_3384_ = lean_unbox(v_severity_3373_);
v_isSilent_boxed_3385_ = lean_unbox(v_isSilent_3374_);
v_res_3386_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(v_ref_3371_, v_msgData_3372_, v_severity_boxed_3384_, v_isSilent_boxed_3385_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v_ref_3371_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1(){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3400_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3401_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1));
v___x_3402_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3));
v___x_3403_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalUnsealingNewtype___boxed), 10, 0);
v___x_3404_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3400_, v___x_3401_, v___x_3402_, v___x_3403_);
return v___x_3404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___boxed(lean_object* v___y_3405_){
_start:
{
lean_object* v_res_3406_; 
v_res_3406_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1();
return v_res_3406_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_NewType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility = _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility();
lean_mark_persistent(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility);
l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility = _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility();
lean_mark_persistent(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility);
l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig = _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig();
lean_mark_persistent(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig);
res = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_NewType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_NewType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_NewType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_NewType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_NewType(builtin);
}
#ifdef __cplusplus
}
#endif
