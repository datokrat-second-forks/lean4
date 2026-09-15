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
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__9 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__9_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__10 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__10_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__11 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__11_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__12 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__12_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__13 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__13_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm(lean_object* v_a_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_){
_start:
{
lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___f_305_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__4));
v___x_306_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5));
v___x_307_ = l_Lean_Elab_ConfigEval_EvalTerm_withSimpleEvalStx___redArg(v___x_306_, v___f_305_, v_a_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___boxed(lean_object* v_a_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm(v_a_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec(v___y_310_);
lean_dec_ref(v___y_309_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr(lean_object* v_a_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v___f_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___f_496_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___closed__0));
v___x_497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__5));
v___x_498_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_497_, v___f_496_, v_a_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr___boxed(lean_object* v_a_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr(v_a_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr(lean_object* v_a_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_){
_start:
{
lean_object* v___f_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___f_597_ = lean_obj_once(&l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__0);
v___x_598_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___closed__2));
v___x_599_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_598_, v___f_597_, v_a_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr___boxed(lean_object* v_a_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeConfig_evalExpr(v_a_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_602_);
lean_dec_ref(v___y_601_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0(lean_object* v_stx_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
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
v_toCold_805_ = lean_ctor_get(v___y_796_, 0);
v_currRecDepth_806_ = lean_ctor_get(v___y_796_, 1);
v_ref_807_ = lean_ctor_get(v___y_796_, 2);
v_diag_808_ = lean_ctor_get_uint8(v___y_796_, sizeof(void*)*3);
v_suppressElabErrors_809_ = lean_ctor_get_uint8(v___y_796_, sizeof(void*)*3 + 1);
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
v___x_813_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_804_, v___x_810_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___x_812_, v___y_797_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; lean_object* v___x_815_; lean_object* v_a_816_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; uint8_t v___y_827_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___y_848_; lean_object* v___y_849_; lean_object* v___y_856_; lean_object* v___y_857_; lean_object* v___y_858_; lean_object* v___y_859_; lean_object* v___y_860_; lean_object* v___y_861_; lean_object* v___y_893_; lean_object* v___y_894_; lean_object* v___y_895_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; uint8_t v___x_911_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v___x_815_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_814_, v___y_795_);
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref(v___x_815_);
v___x_911_ = l_Lean_Expr_hasSorry(v_a_816_);
if (v___x_911_ == 0)
{
v___y_856_ = v___y_792_;
v___y_857_ = v___y_793_;
v___y_858_ = v___y_794_;
v___y_859_ = v___y_795_;
v___y_860_ = v___x_812_;
v___y_861_ = v___y_797_;
goto v___jp_855_;
}
else
{
uint8_t v___x_912_; 
v___x_912_ = l_Lean_Expr_hasSyntheticSorry(v_a_816_);
if (v___x_912_ == 0)
{
v___y_893_ = v___y_792_;
v___y_894_ = v___y_793_;
v___y_895_ = v___y_794_;
v___y_896_ = v___y_795_;
v___y_897_ = v___x_812_;
v___y_898_ = v___y_797_;
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
if (lean_obj_tag(v___y_818_) == 0)
{
lean_dec_ref_known(v___y_818_, 2);
lean_dec_ref(v___y_820_);
lean_dec(v_a_816_);
return v___y_826_;
}
else
{
lean_object* v_id_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_841_; 
v_id_828_ = lean_ctor_get(v___y_818_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___y_818_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; 
v_unused_842_ = lean_ctor_get(v___y_818_, 1);
lean_dec(v_unused_842_);
v___x_830_ = v___y_818_;
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_id_828_);
lean_dec(v___y_818_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
uint8_t v___x_832_; 
v___x_832_ = l_Lean_instBEqInternalExceptionId_beq(v___y_824_, v_id_828_);
lean_dec(v_id_828_);
if (v___x_832_ == 0)
{
lean_del_object(v___x_830_);
lean_dec_ref(v___y_820_);
lean_dec(v_a_816_);
return v___y_826_;
}
else
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_837_; 
lean_dec_ref(v___y_826_);
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
v___x_839_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_838_, v___y_819_, v___y_825_, v___y_821_, v___y_822_, v___y_820_, v___y_823_);
lean_dec_ref(v___y_820_);
return v___x_839_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_820_);
lean_dec_ref(v___y_818_);
lean_dec(v_a_816_);
return v___y_826_;
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
v___y_818_ = v_a_852_;
v___y_819_ = v___y_844_;
v___y_820_ = v___y_848_;
v___y_821_ = v___y_846_;
v___y_822_ = v___y_847_;
v___y_823_ = v___y_849_;
v___y_824_ = v___x_850_;
v___y_825_ = v___y_845_;
v___y_826_ = v___x_851_;
v___y_827_ = v___x_854_;
goto v___jp_817_;
}
else
{
v___y_818_ = v_a_852_;
v___y_819_ = v___y_844_;
v___y_820_ = v___y_848_;
v___y_821_ = v___y_846_;
v___y_822_ = v___y_847_;
v___y_823_ = v___y_849_;
v___y_824_ = v___x_850_;
v___y_825_ = v___y_845_;
v___y_826_ = v___x_851_;
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object* v_stx_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0(v_stx_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0(lean_object* v_stx_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v_toCold_947_; lean_object* v_currRecDepth_948_; lean_object* v_ref_949_; uint8_t v_diag_950_; uint8_t v_suppressElabErrors_951_; lean_object* v___x_952_; lean_object* v_ref_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
v_toCold_947_ = lean_ctor_get(v___y_944_, 0);
v_currRecDepth_948_ = lean_ctor_get(v___y_944_, 1);
v_ref_949_ = lean_ctor_get(v___y_944_, 2);
v_diag_950_ = lean_ctor_get_uint8(v___y_944_, sizeof(void*)*3);
v_suppressElabErrors_951_ = lean_ctor_get_uint8(v___y_944_, sizeof(void*)*3 + 1);
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
v___x_955_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm(v_stx_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___x_954_, v___y_945_);
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
v___x_975_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0(v_stx_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___x_954_, v___y_945_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0(v_stx_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1(lean_object* v_stx_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
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
v_toCold_1011_ = lean_ctor_get(v___y_1002_, 0);
v_currRecDepth_1012_ = lean_ctor_get(v___y_1002_, 1);
v_ref_1013_ = lean_ctor_get(v___y_1002_, 2);
v_diag_1014_ = lean_ctor_get_uint8(v___y_1002_, sizeof(void*)*3);
v_suppressElabErrors_1015_ = lean_ctor_get_uint8(v___y_1002_, sizeof(void*)*3 + 1);
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
v___x_1019_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1010_, v___x_1016_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___x_1018_, v___y_1003_);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; lean_object* v___x_1021_; lean_object* v_a_1022_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; uint8_t v___y_1033_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1054_; lean_object* v___y_1055_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; uint8_t v___x_1117_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v___x_1021_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_1020_, v___y_1001_);
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
lean_inc(v_a_1022_);
lean_dec_ref(v___x_1021_);
v___x_1117_ = l_Lean_Expr_hasSorry(v_a_1022_);
if (v___x_1117_ == 0)
{
v___y_1062_ = v___y_998_;
v___y_1063_ = v___y_999_;
v___y_1064_ = v___y_1000_;
v___y_1065_ = v___y_1001_;
v___y_1066_ = v___x_1018_;
v___y_1067_ = v___y_1003_;
goto v___jp_1061_;
}
else
{
uint8_t v___x_1118_; 
v___x_1118_ = l_Lean_Expr_hasSyntheticSorry(v_a_1022_);
if (v___x_1118_ == 0)
{
v___y_1099_ = v___y_998_;
v___y_1100_ = v___y_999_;
v___y_1101_ = v___y_1000_;
v___y_1102_ = v___y_1001_;
v___y_1103_ = v___x_1018_;
v___y_1104_ = v___y_1003_;
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
if (lean_obj_tag(v___y_1025_) == 0)
{
lean_dec_ref_known(v___y_1025_, 2);
lean_dec_ref(v___y_1032_);
lean_dec(v_a_1022_);
return v___y_1028_;
}
else
{
lean_object* v_id_1034_; lean_object* v___x_1036_; uint8_t v_isShared_1037_; uint8_t v_isSharedCheck_1047_; 
v_id_1034_ = lean_ctor_get(v___y_1025_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___y_1025_);
if (v_isSharedCheck_1047_ == 0)
{
lean_object* v_unused_1048_; 
v_unused_1048_ = lean_ctor_get(v___y_1025_, 1);
lean_dec(v_unused_1048_);
v___x_1036_ = v___y_1025_;
v_isShared_1037_ = v_isSharedCheck_1047_;
goto v_resetjp_1035_;
}
else
{
lean_inc(v_id_1034_);
lean_dec(v___y_1025_);
v___x_1036_ = lean_box(0);
v_isShared_1037_ = v_isSharedCheck_1047_;
goto v_resetjp_1035_;
}
v_resetjp_1035_:
{
uint8_t v___x_1038_; 
v___x_1038_ = l_Lean_instBEqInternalExceptionId_beq(v___y_1031_, v_id_1034_);
lean_dec(v_id_1034_);
if (v___x_1038_ == 0)
{
lean_del_object(v___x_1036_);
lean_dec_ref(v___y_1032_);
lean_dec(v_a_1022_);
return v___y_1028_;
}
else
{
lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1043_; 
lean_dec_ref(v___y_1028_);
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
v___x_1045_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_1044_, v___y_1030_, v___y_1026_, v___y_1024_, v___y_1027_, v___y_1032_, v___y_1029_);
lean_dec_ref(v___y_1032_);
return v___x_1045_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_1032_);
lean_dec_ref(v___y_1025_);
lean_dec(v_a_1022_);
return v___y_1028_;
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
v___y_1024_ = v___y_1052_;
v___y_1025_ = v_a_1058_;
v___y_1026_ = v___y_1051_;
v___y_1027_ = v___y_1053_;
v___y_1028_ = v___x_1057_;
v___y_1029_ = v___y_1055_;
v___y_1030_ = v___y_1050_;
v___y_1031_ = v___x_1056_;
v___y_1032_ = v___y_1054_;
v___y_1033_ = v___x_1060_;
goto v___jp_1023_;
}
else
{
v___y_1024_ = v___y_1052_;
v___y_1025_ = v_a_1058_;
v___y_1026_ = v___y_1051_;
v___y_1027_ = v___y_1053_;
v___y_1028_ = v___x_1057_;
v___y_1029_ = v___y_1055_;
v___y_1030_ = v___y_1050_;
v___y_1031_ = v___x_1056_;
v___y_1032_ = v___y_1054_;
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1___boxed(lean_object* v_stx_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1(v_stx_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
lean_dec(v___y_1142_);
lean_dec_ref(v___y_1141_);
lean_dec(v___y_1140_);
lean_dec_ref(v___y_1139_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
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
uint8_t v_config_4747__boxed_1235_; lean_object* v_res_1236_; 
v_config_4747__boxed_1235_ = lean_unbox(v_config_1226_);
v_res_1236_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___lam__0(v_config_4747__boxed_1235_, v_item_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(lean_object* v_cfg_1344_, uint8_t v_init_1345_, uint8_t v_logExceptions_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_onErr_1351_; lean_object* v_eval_1352_; 
v_onErr_1351_ = ((lean_object*)(l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___closed__0));
v_eval_1352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem___closed__0));
if (v_logExceptions_1346_ == 0)
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_box(v_init_1345_);
v___x_1354_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1352_, v___x_1353_, v_cfg_1344_, v_onErr_1351_, v_logExceptions_1346_, v___y_1348_, v___y_1349_);
return v___x_1354_;
}
else
{
uint8_t v_recover_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v_recover_1355_ = lean_ctor_get_uint8(v___y_1347_, sizeof(void*)*1);
v___x_1356_ = lean_box(v_init_1345_);
v___x_1357_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_1352_, v___x_1356_, v_cfg_1344_, v_onErr_1351_, v_recover_1355_, v___y_1348_, v___y_1349_);
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg___boxed(lean_object* v_cfg_1358_, lean_object* v_init_1359_, lean_object* v_logExceptions_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
uint8_t v_init_boxed_1365_; uint8_t v_logExceptions_boxed_1366_; lean_object* v_res_1367_; 
v_init_boxed_1365_ = lean_unbox(v_init_1359_);
v_logExceptions_boxed_1366_ = lean_unbox(v_logExceptions_1360_);
v_res_1367_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(v_cfg_1358_, v_init_boxed_1365_, v_logExceptions_boxed_1366_, v___y_1361_, v___y_1362_, v___y_1363_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec_ref(v___y_1361_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig(lean_object* v_cfg_1368_, uint8_t v_init_1369_, uint8_t v_logExceptions_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(v_cfg_1368_, v_init_1369_, v_logExceptions_1370_, v___y_1371_, v___y_1377_, v___y_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___boxed(lean_object* v_cfg_1381_, lean_object* v_init_1382_, lean_object* v_logExceptions_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
uint8_t v_init_boxed_1393_; uint8_t v_logExceptions_boxed_1394_; lean_object* v_res_1395_; 
v_init_boxed_1393_ = lean_unbox(v_init_1382_);
v_logExceptions_boxed_1394_ = lean_unbox(v_logExceptions_1383_);
v_res_1395_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig(v_cfg_1381_, v_init_boxed_1393_, v_logExceptions_boxed_1394_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5(lean_object* v_msg_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v___f_1477_; lean_object* v___f_1478_; lean_object* v___f_1479_; lean_object* v___f_1480_; lean_object* v___f_1481_; lean_object* v___f_1482_; lean_object* v___f_1483_; lean_object* v___f_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v_toApplicative_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1610_; 
v___f_1477_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__0));
v___f_1478_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__1));
v___f_1479_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__2));
v___f_1480_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__3));
v___f_1481_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__4));
v___f_1482_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1482_, 0, v___f_1481_);
lean_closure_set(v___f_1482_, 1, v___f_1480_);
v___f_1483_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1483_, 0, v___f_1480_);
v___f_1484_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__5));
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v___f_1477_);
lean_ctor_set(v___x_1485_, 1, v___f_1478_);
v___x_1486_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
lean_ctor_set(v___x_1486_, 1, v___f_1479_);
lean_ctor_set(v___x_1486_, 2, v___f_1482_);
lean_ctor_set(v___x_1486_, 3, v___f_1483_);
lean_ctor_set(v___x_1486_, 4, v___f_1484_);
v___x_1487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1486_);
lean_ctor_set(v___x_1487_, 1, v___f_1480_);
v___x_1488_ = l_StateRefT_x27_instMonad___redArg(v___x_1487_);
v_toApplicative_1489_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1610_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1610_ == 0)
{
lean_object* v_unused_1611_; 
v_unused_1611_ = lean_ctor_get(v___x_1488_, 1);
lean_dec(v_unused_1611_);
v___x_1491_ = v___x_1488_;
v_isShared_1492_ = v_isSharedCheck_1610_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_toApplicative_1489_);
lean_dec(v___x_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1610_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v_toFunctor_1493_; lean_object* v_toSeq_1494_; lean_object* v_toSeqLeft_1495_; lean_object* v_toSeqRight_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1608_; 
v_toFunctor_1493_ = lean_ctor_get(v_toApplicative_1489_, 0);
v_toSeq_1494_ = lean_ctor_get(v_toApplicative_1489_, 2);
v_toSeqLeft_1495_ = lean_ctor_get(v_toApplicative_1489_, 3);
v_toSeqRight_1496_ = lean_ctor_get(v_toApplicative_1489_, 4);
v_isSharedCheck_1608_ = !lean_is_exclusive(v_toApplicative_1489_);
if (v_isSharedCheck_1608_ == 0)
{
lean_object* v_unused_1609_; 
v_unused_1609_ = lean_ctor_get(v_toApplicative_1489_, 1);
lean_dec(v_unused_1609_);
v___x_1498_ = v_toApplicative_1489_;
v_isShared_1499_ = v_isSharedCheck_1608_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_toSeqRight_1496_);
lean_inc(v_toSeqLeft_1495_);
lean_inc(v_toSeq_1494_);
lean_inc(v_toFunctor_1493_);
lean_dec(v_toApplicative_1489_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1608_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___f_1500_; lean_object* v___f_1501_; lean_object* v___f_1502_; lean_object* v___f_1503_; lean_object* v___x_1504_; lean_object* v___f_1505_; lean_object* v___f_1506_; lean_object* v___f_1507_; lean_object* v___x_1509_; 
v___f_1500_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__6));
v___f_1501_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__7));
lean_inc_ref(v_toFunctor_1493_);
v___f_1502_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1502_, 0, v_toFunctor_1493_);
v___f_1503_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1503_, 0, v_toFunctor_1493_);
v___x_1504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1504_, 0, v___f_1502_);
lean_ctor_set(v___x_1504_, 1, v___f_1503_);
v___f_1505_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1505_, 0, v_toSeqRight_1496_);
v___f_1506_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1506_, 0, v_toSeqLeft_1495_);
v___f_1507_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1507_, 0, v_toSeq_1494_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 4, v___f_1505_);
lean_ctor_set(v___x_1498_, 3, v___f_1506_);
lean_ctor_set(v___x_1498_, 2, v___f_1507_);
lean_ctor_set(v___x_1498_, 1, v___f_1500_);
lean_ctor_set(v___x_1498_, 0, v___x_1504_);
v___x_1509_ = v___x_1498_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1504_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v___f_1500_);
lean_ctor_set(v_reuseFailAlloc_1607_, 2, v___f_1507_);
lean_ctor_set(v_reuseFailAlloc_1607_, 3, v___f_1506_);
lean_ctor_set(v_reuseFailAlloc_1607_, 4, v___f_1505_);
v___x_1509_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1511_; 
if (v_isShared_1492_ == 0)
{
lean_ctor_set(v___x_1491_, 1, v___f_1501_);
lean_ctor_set(v___x_1491_, 0, v___x_1509_);
v___x_1511_ = v___x_1491_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v___f_1501_);
v___x_1511_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1512_; lean_object* v_toApplicative_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1604_; 
v___x_1512_ = l_StateRefT_x27_instMonad___redArg(v___x_1511_);
v_toApplicative_1513_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1604_ == 0)
{
lean_object* v_unused_1605_; 
v_unused_1605_ = lean_ctor_get(v___x_1512_, 1);
lean_dec(v_unused_1605_);
v___x_1515_ = v___x_1512_;
v_isShared_1516_ = v_isSharedCheck_1604_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_toApplicative_1513_);
lean_dec(v___x_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1604_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v_toFunctor_1517_; lean_object* v_toSeq_1518_; lean_object* v_toSeqLeft_1519_; lean_object* v_toSeqRight_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1602_; 
v_toFunctor_1517_ = lean_ctor_get(v_toApplicative_1513_, 0);
v_toSeq_1518_ = lean_ctor_get(v_toApplicative_1513_, 2);
v_toSeqLeft_1519_ = lean_ctor_get(v_toApplicative_1513_, 3);
v_toSeqRight_1520_ = lean_ctor_get(v_toApplicative_1513_, 4);
v_isSharedCheck_1602_ = !lean_is_exclusive(v_toApplicative_1513_);
if (v_isSharedCheck_1602_ == 0)
{
lean_object* v_unused_1603_; 
v_unused_1603_ = lean_ctor_get(v_toApplicative_1513_, 1);
lean_dec(v_unused_1603_);
v___x_1522_ = v_toApplicative_1513_;
v_isShared_1523_ = v_isSharedCheck_1602_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_toSeqRight_1520_);
lean_inc(v_toSeqLeft_1519_);
lean_inc(v_toSeq_1518_);
lean_inc(v_toFunctor_1517_);
lean_dec(v_toApplicative_1513_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1602_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___f_1524_; lean_object* v___f_1525_; lean_object* v___f_1526_; lean_object* v___f_1527_; lean_object* v___x_1528_; lean_object* v___f_1529_; lean_object* v___f_1530_; lean_object* v___f_1531_; lean_object* v___x_1533_; 
v___f_1524_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__8));
v___f_1525_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__9));
lean_inc_ref(v_toFunctor_1517_);
v___f_1526_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1526_, 0, v_toFunctor_1517_);
v___f_1527_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1527_, 0, v_toFunctor_1517_);
v___x_1528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1528_, 0, v___f_1526_);
lean_ctor_set(v___x_1528_, 1, v___f_1527_);
v___f_1529_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1529_, 0, v_toSeqRight_1520_);
v___f_1530_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1530_, 0, v_toSeqLeft_1519_);
v___f_1531_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1531_, 0, v_toSeq_1518_);
if (v_isShared_1523_ == 0)
{
lean_ctor_set(v___x_1522_, 4, v___f_1529_);
lean_ctor_set(v___x_1522_, 3, v___f_1530_);
lean_ctor_set(v___x_1522_, 2, v___f_1531_);
lean_ctor_set(v___x_1522_, 1, v___f_1524_);
lean_ctor_set(v___x_1522_, 0, v___x_1528_);
v___x_1533_ = v___x_1522_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v___x_1528_);
lean_ctor_set(v_reuseFailAlloc_1601_, 1, v___f_1524_);
lean_ctor_set(v_reuseFailAlloc_1601_, 2, v___f_1531_);
lean_ctor_set(v_reuseFailAlloc_1601_, 3, v___f_1530_);
lean_ctor_set(v_reuseFailAlloc_1601_, 4, v___f_1529_);
v___x_1533_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
lean_object* v___x_1535_; 
if (v_isShared_1516_ == 0)
{
lean_ctor_set(v___x_1515_, 1, v___f_1525_);
lean_ctor_set(v___x_1515_, 0, v___x_1533_);
v___x_1535_ = v___x_1515_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1533_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v___f_1525_);
v___x_1535_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1536_; lean_object* v_toApplicative_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1598_; 
v___x_1536_ = l_StateRefT_x27_instMonad___redArg(v___x_1535_);
v_toApplicative_1537_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1598_ == 0)
{
lean_object* v_unused_1599_; 
v_unused_1599_ = lean_ctor_get(v___x_1536_, 1);
lean_dec(v_unused_1599_);
v___x_1539_ = v___x_1536_;
v_isShared_1540_ = v_isSharedCheck_1598_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_toApplicative_1537_);
lean_dec(v___x_1536_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1598_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v_toFunctor_1541_; lean_object* v_toSeq_1542_; lean_object* v_toSeqLeft_1543_; lean_object* v_toSeqRight_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1596_; 
v_toFunctor_1541_ = lean_ctor_get(v_toApplicative_1537_, 0);
v_toSeq_1542_ = lean_ctor_get(v_toApplicative_1537_, 2);
v_toSeqLeft_1543_ = lean_ctor_get(v_toApplicative_1537_, 3);
v_toSeqRight_1544_ = lean_ctor_get(v_toApplicative_1537_, 4);
v_isSharedCheck_1596_ = !lean_is_exclusive(v_toApplicative_1537_);
if (v_isSharedCheck_1596_ == 0)
{
lean_object* v_unused_1597_; 
v_unused_1597_ = lean_ctor_get(v_toApplicative_1537_, 1);
lean_dec(v_unused_1597_);
v___x_1546_ = v_toApplicative_1537_;
v_isShared_1547_ = v_isSharedCheck_1596_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_toSeqRight_1544_);
lean_inc(v_toSeqLeft_1543_);
lean_inc(v_toSeq_1542_);
lean_inc(v_toFunctor_1541_);
lean_dec(v_toApplicative_1537_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1596_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___f_1548_; lean_object* v___f_1549_; lean_object* v___f_1550_; lean_object* v___f_1551_; lean_object* v___x_1552_; lean_object* v___f_1553_; lean_object* v___f_1554_; lean_object* v___f_1555_; lean_object* v___x_1557_; 
v___f_1548_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__10));
v___f_1549_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__11));
lean_inc_ref(v_toFunctor_1541_);
v___f_1550_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1550_, 0, v_toFunctor_1541_);
v___f_1551_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1551_, 0, v_toFunctor_1541_);
v___x_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___f_1550_);
lean_ctor_set(v___x_1552_, 1, v___f_1551_);
v___f_1553_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1553_, 0, v_toSeqRight_1544_);
v___f_1554_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1554_, 0, v_toSeqLeft_1543_);
v___f_1555_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1555_, 0, v_toSeq_1542_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 4, v___f_1553_);
lean_ctor_set(v___x_1546_, 3, v___f_1554_);
lean_ctor_set(v___x_1546_, 2, v___f_1555_);
lean_ctor_set(v___x_1546_, 1, v___f_1548_);
lean_ctor_set(v___x_1546_, 0, v___x_1552_);
v___x_1557_ = v___x_1546_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1552_);
lean_ctor_set(v_reuseFailAlloc_1595_, 1, v___f_1548_);
lean_ctor_set(v_reuseFailAlloc_1595_, 2, v___f_1555_);
lean_ctor_set(v_reuseFailAlloc_1595_, 3, v___f_1554_);
lean_ctor_set(v_reuseFailAlloc_1595_, 4, v___f_1553_);
v___x_1557_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
lean_object* v___x_1559_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set(v___x_1539_, 1, v___f_1549_);
lean_ctor_set(v___x_1539_, 0, v___x_1557_);
v___x_1559_ = v___x_1539_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1557_);
lean_ctor_set(v_reuseFailAlloc_1594_, 1, v___f_1549_);
v___x_1559_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
lean_object* v___x_1560_; lean_object* v_toApplicative_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1592_; 
v___x_1560_ = l_StateRefT_x27_instMonad___redArg(v___x_1559_);
v_toApplicative_1561_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1592_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1592_ == 0)
{
lean_object* v_unused_1593_; 
v_unused_1593_ = lean_ctor_get(v___x_1560_, 1);
lean_dec(v_unused_1593_);
v___x_1563_ = v___x_1560_;
v_isShared_1564_ = v_isSharedCheck_1592_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_toApplicative_1561_);
lean_dec(v___x_1560_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1592_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v_toFunctor_1565_; lean_object* v_toSeq_1566_; lean_object* v_toSeqLeft_1567_; lean_object* v_toSeqRight_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1590_; 
v_toFunctor_1565_ = lean_ctor_get(v_toApplicative_1561_, 0);
v_toSeq_1566_ = lean_ctor_get(v_toApplicative_1561_, 2);
v_toSeqLeft_1567_ = lean_ctor_get(v_toApplicative_1561_, 3);
v_toSeqRight_1568_ = lean_ctor_get(v_toApplicative_1561_, 4);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_toApplicative_1561_);
if (v_isSharedCheck_1590_ == 0)
{
lean_object* v_unused_1591_; 
v_unused_1591_ = lean_ctor_get(v_toApplicative_1561_, 1);
lean_dec(v_unused_1591_);
v___x_1570_ = v_toApplicative_1561_;
v_isShared_1571_ = v_isSharedCheck_1590_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_toSeqRight_1568_);
lean_inc(v_toSeqLeft_1567_);
lean_inc(v_toSeq_1566_);
lean_inc(v_toFunctor_1565_);
lean_dec(v_toApplicative_1561_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1590_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___f_1572_; lean_object* v___f_1573_; lean_object* v___f_1574_; lean_object* v___f_1575_; lean_object* v___x_1576_; lean_object* v___f_1577_; lean_object* v___f_1578_; lean_object* v___f_1579_; lean_object* v___x_1581_; 
v___f_1572_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__12));
v___f_1573_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___closed__13));
lean_inc_ref(v_toFunctor_1565_);
v___f_1574_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1574_, 0, v_toFunctor_1565_);
v___f_1575_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1575_, 0, v_toFunctor_1565_);
v___x_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___f_1574_);
lean_ctor_set(v___x_1576_, 1, v___f_1575_);
v___f_1577_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1577_, 0, v_toSeqRight_1568_);
v___f_1578_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1578_, 0, v_toSeqLeft_1567_);
v___f_1579_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1579_, 0, v_toSeq_1566_);
if (v_isShared_1571_ == 0)
{
lean_ctor_set(v___x_1570_, 4, v___f_1577_);
lean_ctor_set(v___x_1570_, 3, v___f_1578_);
lean_ctor_set(v___x_1570_, 2, v___f_1579_);
lean_ctor_set(v___x_1570_, 1, v___f_1572_);
lean_ctor_set(v___x_1570_, 0, v___x_1576_);
v___x_1581_ = v___x_1570_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1576_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v___f_1572_);
lean_ctor_set(v_reuseFailAlloc_1589_, 2, v___f_1579_);
lean_ctor_set(v_reuseFailAlloc_1589_, 3, v___f_1578_);
lean_ctor_set(v_reuseFailAlloc_1589_, 4, v___f_1577_);
v___x_1581_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
lean_object* v___x_1583_; 
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 1, v___f_1573_);
lean_ctor_set(v___x_1563_, 0, v___x_1581_);
v___x_1583_ = v___x_1563_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v___f_1573_);
v___x_1583_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_12390__overap_1586_; lean_object* v___x_1587_; 
v___x_1584_ = lean_box(0);
v___x_1585_ = l_instInhabitedOfMonad___redArg(v___x_1583_, v___x_1584_);
v___x_12390__overap_1586_ = lean_panic_fn_borrowed(v___x_1585_, v_msg_1467_);
lean_dec(v___x_1585_);
lean_inc(v___y_1475_);
lean_inc_ref(v___y_1474_);
lean_inc(v___y_1473_);
lean_inc_ref(v___y_1472_);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
v___x_1587_ = lean_apply_9(v___x_12390__overap_1586_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, lean_box(0));
return v___x_1587_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5___boxed(lean_object* v_msg_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5(v_msg_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec_ref(v___y_1615_);
lean_dec(v___y_1614_);
lean_dec_ref(v___y_1613_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(lean_object* v_msg_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v_ref_1629_; lean_object* v___x_1630_; lean_object* v_a_1631_; lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1639_; 
v_ref_1629_ = lean_ctor_get(v___y_1626_, 2);
v___x_1630_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(v_msg_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
v_a_1631_ = lean_ctor_get(v___x_1630_, 0);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1630_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1633_ = v___x_1630_;
v_isShared_1634_ = v_isSharedCheck_1639_;
goto v_resetjp_1632_;
}
else
{
lean_inc(v_a_1631_);
lean_dec(v___x_1630_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1639_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v___x_1635_; lean_object* v___x_1637_; 
lean_inc(v_ref_1629_);
v___x_1635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1635_, 0, v_ref_1629_);
lean_ctor_set(v___x_1635_, 1, v_a_1631_);
if (v_isShared_1634_ == 0)
{
lean_ctor_set_tag(v___x_1633_, 1);
lean_ctor_set(v___x_1633_, 0, v___x_1635_);
v___x_1637_ = v___x_1633_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg___boxed(lean_object* v_msg_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(v_msg_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_);
lean_dec(v___y_1644_);
lean_dec_ref(v___y_1643_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(lean_object* v_ref_1647_, lean_object* v_msg_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_toCold_1658_; lean_object* v_currRecDepth_1659_; lean_object* v_ref_1660_; uint8_t v_diag_1661_; uint8_t v_suppressElabErrors_1662_; lean_object* v_ref_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v_toCold_1658_ = lean_ctor_get(v___y_1655_, 0);
v_currRecDepth_1659_ = lean_ctor_get(v___y_1655_, 1);
v_ref_1660_ = lean_ctor_get(v___y_1655_, 2);
v_diag_1661_ = lean_ctor_get_uint8(v___y_1655_, sizeof(void*)*3);
v_suppressElabErrors_1662_ = lean_ctor_get_uint8(v___y_1655_, sizeof(void*)*3 + 1);
v_ref_1663_ = l_Lean_replaceRef(v_ref_1647_, v_ref_1660_);
lean_inc(v_currRecDepth_1659_);
lean_inc_ref(v_toCold_1658_);
v___x_1664_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1664_, 0, v_toCold_1658_);
lean_ctor_set(v___x_1664_, 1, v_currRecDepth_1659_);
lean_ctor_set(v___x_1664_, 2, v_ref_1663_);
lean_ctor_set_uint8(v___x_1664_, sizeof(void*)*3, v_diag_1661_);
lean_ctor_set_uint8(v___x_1664_, sizeof(void*)*3 + 1, v_suppressElabErrors_1662_);
v___x_1665_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(v_msg_1648_, v___y_1653_, v___y_1654_, v___x_1664_, v___y_1656_);
lean_dec_ref_known(v___x_1664_, 3);
return v___x_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg___boxed(lean_object* v_ref_1666_, lean_object* v_msg_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v_res_1677_; 
v_res_1677_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_ref_1666_, v_msg_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec_ref(v___y_1670_);
lean_dec(v___y_1669_);
lean_dec_ref(v___y_1668_);
lean_dec(v_ref_1666_);
return v_res_1677_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15(lean_object* v_x_1679_, lean_object* v_x_1680_){
_start:
{
if (lean_obj_tag(v_x_1680_) == 0)
{
return v_x_1679_;
}
else
{
lean_object* v_head_1681_; lean_object* v_tail_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v_head_1681_ = lean_ctor_get(v_x_1680_, 0);
v_tail_1682_ = lean_ctor_get(v_x_1680_, 1);
v___x_1683_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___closed__0));
v___x_1684_ = lean_string_append(v_x_1679_, v___x_1683_);
v___x_1685_ = lean_expr_dbg_to_string(v_head_1681_);
v___x_1686_ = lean_string_append(v___x_1684_, v___x_1685_);
lean_dec_ref(v___x_1685_);
v_x_1679_ = v___x_1686_;
v_x_1680_ = v_tail_1682_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15___boxed(lean_object* v_x_1688_, lean_object* v_x_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15(v_x_1688_, v_x_1689_);
lean_dec(v_x_1689_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7(lean_object* v_x_1694_){
_start:
{
if (lean_obj_tag(v_x_1694_) == 0)
{
lean_object* v___x_1695_; 
v___x_1695_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__0));
return v___x_1695_;
}
else
{
lean_object* v_tail_1696_; 
v_tail_1696_ = lean_ctor_get(v_x_1694_, 1);
if (lean_obj_tag(v_tail_1696_) == 0)
{
lean_object* v_head_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v_head_1697_ = lean_ctor_get(v_x_1694_, 0);
v___x_1698_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__1));
v___x_1699_ = lean_expr_dbg_to_string(v_head_1697_);
v___x_1700_ = lean_string_append(v___x_1698_, v___x_1699_);
lean_dec_ref(v___x_1699_);
v___x_1701_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__2));
v___x_1702_ = lean_string_append(v___x_1700_, v___x_1701_);
return v___x_1702_;
}
else
{
lean_object* v_head_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; uint32_t v___x_1708_; lean_object* v___x_1709_; 
v_head_1703_ = lean_ctor_get(v_x_1694_, 0);
v___x_1704_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___closed__1));
v___x_1705_ = lean_expr_dbg_to_string(v_head_1703_);
v___x_1706_ = lean_string_append(v___x_1704_, v___x_1705_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7_spec__15(v___x_1706_, v_tail_1696_);
v___x_1708_ = 93;
v___x_1709_ = lean_string_push(v___x_1707_, v___x_1708_);
return v___x_1709_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7___boxed(lean_object* v_x_1710_){
_start:
{
lean_object* v_res_1711_; 
v_res_1711_ = l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7(v_x_1710_);
lean_dec(v_x_1710_);
return v_res_1711_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1715_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__2));
v___x_1716_ = lean_unsigned_to_nat(11u);
v___x_1717_ = lean_unsigned_to_nat(429u);
v___x_1718_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__1));
v___x_1719_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__0));
v___x_1720_ = l_mkPanicMessageWithDecl(v___x_1719_, v___x_1718_, v___x_1717_, v___x_1716_, v___x_1715_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1(lean_object* v_id_1723_, lean_object* v_cs_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
if (lean_obj_tag(v_cs_1724_) == 0)
{
lean_object* v___x_1734_; lean_object* v___x_1735_; 
lean_dec(v_id_1723_);
v___x_1734_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3, &l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3_once, _init_l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__3);
v___x_1735_ = l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__5(v___x_1734_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
return v___x_1735_;
}
else
{
lean_object* v_tail_1736_; 
v_tail_1736_ = lean_ctor_get(v_cs_1724_, 1);
if (lean_obj_tag(v_tail_1736_) == 0)
{
lean_object* v_head_1737_; lean_object* v___x_1738_; 
lean_dec(v_id_1723_);
v_head_1737_ = lean_ctor_get(v_cs_1724_, 0);
lean_inc(v_head_1737_);
lean_dec_ref_known(v_cs_1724_, 2);
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v_head_1737_);
return v___x_1738_;
}
else
{
lean_object* v___x_1739_; lean_object* v___x_1740_; uint8_t v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v___x_1739_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__4));
v___x_1740_ = lean_box(0);
v___x_1741_ = 0;
lean_inc(v_id_1723_);
v___x_1742_ = l_Lean_Syntax_formatStx(v_id_1723_, v___x_1740_, v___x_1741_);
v___x_1743_ = l_Std_Format_defWidth;
v___x_1744_ = lean_unsigned_to_nat(0u);
v___x_1745_ = l_Std_Format_pretty(v___x_1742_, v___x_1743_, v___x_1744_, v___x_1744_);
v___x_1746_ = lean_string_append(v___x_1739_, v___x_1745_);
lean_dec_ref(v___x_1745_);
v___x_1747_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___closed__5));
v___x_1748_ = lean_string_append(v___x_1746_, v___x_1747_);
v___x_1749_ = lean_box(0);
v___x_1750_ = l_List_mapTR_loop___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__6(v_cs_1724_, v___x_1749_);
v___x_1751_ = l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1_spec__7(v___x_1750_);
lean_dec(v___x_1750_);
v___x_1752_ = lean_string_append(v___x_1748_, v___x_1751_);
lean_dec_ref(v___x_1751_);
v___x_1753_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1752_);
v___x_1754_ = l_Lean_MessageData_ofFormat(v___x_1753_);
v___x_1755_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_id_1723_, v___x_1754_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec(v_id_1723_);
return v___x_1755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1___boxed(lean_object* v_id_1756_, lean_object* v_cs_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1(v_id_1756_, v_cs_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
return v_res_1767_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(uint8_t v_suppressElabErrors_1775_, uint8_t v___y_1776_, lean_object* v_x_1777_){
_start:
{
if (lean_obj_tag(v_x_1777_) == 1)
{
lean_object* v_pre_1778_; 
v_pre_1778_ = lean_ctor_get(v_x_1777_, 0);
switch(lean_obj_tag(v_pre_1778_))
{
case 1:
{
lean_object* v_pre_1779_; 
v_pre_1779_ = lean_ctor_get(v_pre_1778_, 0);
switch(lean_obj_tag(v_pre_1779_))
{
case 0:
{
lean_object* v_str_1780_; lean_object* v_str_1781_; lean_object* v___x_1782_; uint8_t v___x_1783_; 
v_str_1780_ = lean_ctor_get(v_x_1777_, 1);
v_str_1781_ = lean_ctor_get(v_pre_1778_, 1);
v___x_1782_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0));
v___x_1783_ = lean_string_dec_eq(v_str_1781_, v___x_1782_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; uint8_t v___x_1785_; 
v___x_1784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalTermUnsealingNewtypeReducibility_evalTerm___closed__2));
v___x_1785_ = lean_string_dec_eq(v_str_1781_, v___x_1784_);
if (v___x_1785_ == 0)
{
return v___x_1785_;
}
else
{
lean_object* v___x_1786_; uint8_t v___x_1787_; 
v___x_1786_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1));
v___x_1787_ = lean_string_dec_eq(v_str_1780_, v___x_1786_);
if (v___x_1787_ == 0)
{
return v___x_1787_;
}
else
{
return v_suppressElabErrors_1775_;
}
}
}
else
{
lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1788_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2));
v___x_1789_ = lean_string_dec_eq(v_str_1780_, v___x_1788_);
if (v___x_1789_ == 0)
{
return v___x_1789_;
}
else
{
return v_suppressElabErrors_1775_;
}
}
}
case 1:
{
lean_object* v_pre_1790_; 
v_pre_1790_ = lean_ctor_get(v_pre_1779_, 0);
if (lean_obj_tag(v_pre_1790_) == 0)
{
lean_object* v_str_1791_; lean_object* v_str_1792_; lean_object* v_str_1793_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v_str_1791_ = lean_ctor_get(v_x_1777_, 1);
v_str_1792_ = lean_ctor_get(v_pre_1778_, 1);
v_str_1793_ = lean_ctor_get(v_pre_1779_, 1);
v___x_1794_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3));
v___x_1795_ = lean_string_dec_eq(v_str_1793_, v___x_1794_);
if (v___x_1795_ == 0)
{
return v___x_1795_;
}
else
{
lean_object* v___x_1796_; uint8_t v___x_1797_; 
v___x_1796_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4));
v___x_1797_ = lean_string_dec_eq(v_str_1792_, v___x_1796_);
if (v___x_1797_ == 0)
{
return v___x_1797_;
}
else
{
lean_object* v___x_1798_; uint8_t v___x_1799_; 
v___x_1798_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5));
v___x_1799_ = lean_string_dec_eq(v_str_1791_, v___x_1798_);
if (v___x_1799_ == 0)
{
return v___x_1799_;
}
else
{
return v_suppressElabErrors_1775_;
}
}
}
}
else
{
return v___y_1776_;
}
}
default: 
{
return v___y_1776_;
}
}
}
case 0:
{
lean_object* v_str_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; 
v_str_1800_ = lean_ctor_get(v_x_1777_, 1);
v___x_1801_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6));
v___x_1802_ = lean_string_dec_eq(v_str_1800_, v___x_1801_);
if (v___x_1802_ == 0)
{
return v___x_1802_;
}
else
{
return v_suppressElabErrors_1775_;
}
}
default: 
{
return v___y_1776_;
}
}
}
else
{
return v___y_1776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1803_, lean_object* v___y_1804_, lean_object* v_x_1805_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1806_; uint8_t v___y_22990__boxed_1807_; uint8_t v_res_1808_; lean_object* v_r_1809_; 
v_suppressElabErrors_boxed_1806_ = lean_unbox(v_suppressElabErrors_1803_);
v___y_22990__boxed_1807_ = lean_unbox(v___y_1804_);
v_res_1808_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(v_suppressElabErrors_boxed_1806_, v___y_22990__boxed_1807_, v_x_1805_);
lean_dec(v_x_1805_);
v_r_1809_ = lean_box(v_res_1808_);
return v_r_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(lean_object* v_ref_1811_, lean_object* v_msgData_1812_, uint8_t v_severity_1813_, uint8_t v_isSilent_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; uint8_t v___y_1825_; uint8_t v___y_1826_; lean_object* v___y_1827_; lean_object* v_currNamespace_1828_; lean_object* v_openDecls_1829_; lean_object* v___y_1830_; lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___y_1860_; lean_object* v___y_1861_; uint8_t v___y_1862_; uint8_t v___y_1863_; uint8_t v___y_1864_; lean_object* v___y_1865_; lean_object* v___y_1883_; lean_object* v___y_1884_; lean_object* v___y_1885_; lean_object* v___y_1886_; lean_object* v___y_1887_; lean_object* v___y_1888_; uint8_t v___y_1889_; uint8_t v___y_1890_; uint8_t v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1898_; lean_object* v___y_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; uint8_t v___y_1902_; uint8_t v___y_1903_; uint8_t v___y_1904_; uint8_t v___x_1909_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___y_1916_; uint8_t v___y_1917_; uint8_t v___y_1918_; uint8_t v___y_1919_; uint8_t v___y_1921_; uint8_t v___x_1939_; 
v___x_1909_ = 2;
v___x_1939_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1813_, v___x_1909_);
if (v___x_1939_ == 0)
{
v___y_1921_ = v___x_1939_;
goto v___jp_1920_;
}
else
{
uint8_t v___x_1940_; 
lean_inc_ref(v_msgData_1812_);
v___x_1940_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1812_);
v___y_1921_ = v___x_1940_;
goto v___jp_1920_;
}
v___jp_1820_:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v_env_1835_; lean_object* v_nextMacroScope_1836_; lean_object* v_ngen_1837_; lean_object* v_auxDeclNGen_1838_; lean_object* v_traceState_1839_; lean_object* v_cache_1840_; lean_object* v_messages_1841_; lean_object* v_infoState_1842_; lean_object* v_snapshotTasks_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1854_; 
lean_inc(v_openDecls_1829_);
lean_inc(v_currNamespace_1828_);
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v_currNamespace_1828_);
lean_ctor_set(v___x_1831_, 1, v_openDecls_1829_);
v___x_1832_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1832_, 0, v___x_1831_);
lean_ctor_set(v___x_1832_, 1, v___y_1822_);
lean_inc_ref(v___y_1824_);
lean_inc_ref(v___y_1821_);
v___x_1833_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1833_, 0, v___y_1821_);
lean_ctor_set(v___x_1833_, 1, v___y_1827_);
lean_ctor_set(v___x_1833_, 2, v___y_1823_);
lean_ctor_set(v___x_1833_, 3, v___y_1824_);
lean_ctor_set(v___x_1833_, 4, v___x_1832_);
lean_ctor_set_uint8(v___x_1833_, sizeof(void*)*5, v___y_1825_);
lean_ctor_set_uint8(v___x_1833_, sizeof(void*)*5 + 1, v___y_1826_);
lean_ctor_set_uint8(v___x_1833_, sizeof(void*)*5 + 2, v_isSilent_1814_);
v___x_1834_ = lean_st_ref_take(v___y_1830_);
v_env_1835_ = lean_ctor_get(v___x_1834_, 0);
v_nextMacroScope_1836_ = lean_ctor_get(v___x_1834_, 1);
v_ngen_1837_ = lean_ctor_get(v___x_1834_, 2);
v_auxDeclNGen_1838_ = lean_ctor_get(v___x_1834_, 3);
v_traceState_1839_ = lean_ctor_get(v___x_1834_, 4);
v_cache_1840_ = lean_ctor_get(v___x_1834_, 5);
v_messages_1841_ = lean_ctor_get(v___x_1834_, 6);
v_infoState_1842_ = lean_ctor_get(v___x_1834_, 7);
v_snapshotTasks_1843_ = lean_ctor_get(v___x_1834_, 8);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1845_ = v___x_1834_;
v_isShared_1846_ = v_isSharedCheck_1854_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_snapshotTasks_1843_);
lean_inc(v_infoState_1842_);
lean_inc(v_messages_1841_);
lean_inc(v_cache_1840_);
lean_inc(v_traceState_1839_);
lean_inc(v_auxDeclNGen_1838_);
lean_inc(v_ngen_1837_);
lean_inc(v_nextMacroScope_1836_);
lean_inc(v_env_1835_);
lean_dec(v___x_1834_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1854_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1850_; 
v___x_1847_ = lean_box(0);
v___x_1848_ = l_Lean_MessageLog_add(v___x_1833_, v_messages_1841_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 6, v___x_1848_);
v___x_1850_ = v___x_1845_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_env_1835_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v_nextMacroScope_1836_);
lean_ctor_set(v_reuseFailAlloc_1853_, 2, v_ngen_1837_);
lean_ctor_set(v_reuseFailAlloc_1853_, 3, v_auxDeclNGen_1838_);
lean_ctor_set(v_reuseFailAlloc_1853_, 4, v_traceState_1839_);
lean_ctor_set(v_reuseFailAlloc_1853_, 5, v_cache_1840_);
lean_ctor_set(v_reuseFailAlloc_1853_, 6, v___x_1848_);
lean_ctor_set(v_reuseFailAlloc_1853_, 7, v_infoState_1842_);
lean_ctor_set(v_reuseFailAlloc_1853_, 8, v_snapshotTasks_1843_);
v___x_1850_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1851_ = lean_st_ref_put(v___y_1830_, v___x_1850_);
v___x_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1847_);
return v___x_1852_;
}
}
}
v___jp_1855_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1881_; 
v___x_1866_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1812_);
v___x_1867_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_instEvalExprUnsealingNewtypeReducibility_evalExpr_spec__1_spec__1(v___x_1866_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1881_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1881_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; 
lean_inc_ref_n(v___y_1861_, 2);
v___x_1872_ = l_Lean_FileMap_toPosition(v___y_1861_, v___y_1860_);
lean_dec(v___y_1860_);
v___x_1873_ = l_Lean_FileMap_toPosition(v___y_1861_, v___y_1865_);
lean_dec(v___y_1865_);
v___x_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1874_, 0, v___x_1873_);
v___x_1875_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0));
if (v___y_1863_ == 0)
{
lean_del_object(v___x_1870_);
lean_dec_ref(v___y_1856_);
v___y_1821_ = v___y_1859_;
v___y_1822_ = v_a_1868_;
v___y_1823_ = v___x_1874_;
v___y_1824_ = v___x_1875_;
v___y_1825_ = v___y_1862_;
v___y_1826_ = v___y_1864_;
v___y_1827_ = v___x_1872_;
v_currNamespace_1828_ = v___y_1858_;
v_openDecls_1829_ = v___y_1857_;
v___y_1830_ = v___y_1818_;
goto v___jp_1820_;
}
else
{
uint8_t v___x_1876_; 
lean_inc(v_a_1868_);
v___x_1876_ = l_Lean_MessageData_hasTag(v___y_1856_, v_a_1868_);
if (v___x_1876_ == 0)
{
lean_object* v___x_1877_; lean_object* v___x_1879_; 
lean_dec_ref_known(v___x_1874_, 1);
lean_dec_ref(v___x_1872_);
lean_dec(v_a_1868_);
v___x_1877_ = lean_box(0);
if (v_isShared_1871_ == 0)
{
lean_ctor_set(v___x_1870_, 0, v___x_1877_);
v___x_1879_ = v___x_1870_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v___x_1877_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
else
{
lean_del_object(v___x_1870_);
v___y_1821_ = v___y_1859_;
v___y_1822_ = v_a_1868_;
v___y_1823_ = v___x_1874_;
v___y_1824_ = v___x_1875_;
v___y_1825_ = v___y_1862_;
v___y_1826_ = v___y_1864_;
v___y_1827_ = v___x_1872_;
v_currNamespace_1828_ = v___y_1858_;
v_openDecls_1829_ = v___y_1857_;
v___y_1830_ = v___y_1818_;
goto v___jp_1820_;
}
}
}
}
v___jp_1882_:
{
lean_object* v___x_1893_; 
v___x_1893_ = l_Lean_Syntax_getTailPos_x3f(v___y_1887_, v___y_1889_);
lean_dec(v___y_1887_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_inc(v___y_1892_);
v___y_1856_ = v___y_1883_;
v___y_1857_ = v___y_1884_;
v___y_1858_ = v___y_1885_;
v___y_1859_ = v___y_1886_;
v___y_1860_ = v___y_1892_;
v___y_1861_ = v___y_1888_;
v___y_1862_ = v___y_1889_;
v___y_1863_ = v___y_1890_;
v___y_1864_ = v___y_1891_;
v___y_1865_ = v___y_1892_;
goto v___jp_1855_;
}
else
{
lean_object* v_val_1894_; 
v_val_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_val_1894_);
lean_dec_ref_known(v___x_1893_, 1);
v___y_1856_ = v___y_1883_;
v___y_1857_ = v___y_1884_;
v___y_1858_ = v___y_1885_;
v___y_1859_ = v___y_1886_;
v___y_1860_ = v___y_1892_;
v___y_1861_ = v___y_1888_;
v___y_1862_ = v___y_1889_;
v___y_1863_ = v___y_1890_;
v___y_1864_ = v___y_1891_;
v___y_1865_ = v_val_1894_;
goto v___jp_1855_;
}
}
v___jp_1895_:
{
lean_object* v_ref_1905_; lean_object* v___x_1906_; 
v_ref_1905_ = l_Lean_replaceRef(v_ref_1811_, v___y_1900_);
v___x_1906_ = l_Lean_Syntax_getPos_x3f(v_ref_1905_, v___y_1902_);
if (lean_obj_tag(v___x_1906_) == 0)
{
lean_object* v___x_1907_; 
v___x_1907_ = lean_unsigned_to_nat(0u);
v___y_1883_ = v___y_1896_;
v___y_1884_ = v___y_1897_;
v___y_1885_ = v___y_1898_;
v___y_1886_ = v___y_1899_;
v___y_1887_ = v_ref_1905_;
v___y_1888_ = v___y_1901_;
v___y_1889_ = v___y_1902_;
v___y_1890_ = v___y_1903_;
v___y_1891_ = v___y_1904_;
v___y_1892_ = v___x_1907_;
goto v___jp_1882_;
}
else
{
lean_object* v_val_1908_; 
v_val_1908_ = lean_ctor_get(v___x_1906_, 0);
lean_inc(v_val_1908_);
lean_dec_ref_known(v___x_1906_, 1);
v___y_1883_ = v___y_1896_;
v___y_1884_ = v___y_1897_;
v___y_1885_ = v___y_1898_;
v___y_1886_ = v___y_1899_;
v___y_1887_ = v_ref_1905_;
v___y_1888_ = v___y_1901_;
v___y_1889_ = v___y_1902_;
v___y_1890_ = v___y_1903_;
v___y_1891_ = v___y_1904_;
v___y_1892_ = v_val_1908_;
goto v___jp_1882_;
}
}
v___jp_1910_:
{
if (v___y_1919_ == 0)
{
v___y_1896_ = v___y_1912_;
v___y_1897_ = v___y_1914_;
v___y_1898_ = v___y_1915_;
v___y_1899_ = v___y_1911_;
v___y_1900_ = v___y_1916_;
v___y_1901_ = v___y_1913_;
v___y_1902_ = v___y_1917_;
v___y_1903_ = v___y_1918_;
v___y_1904_ = v_severity_1813_;
goto v___jp_1895_;
}
else
{
v___y_1896_ = v___y_1912_;
v___y_1897_ = v___y_1914_;
v___y_1898_ = v___y_1915_;
v___y_1899_ = v___y_1911_;
v___y_1900_ = v___y_1916_;
v___y_1901_ = v___y_1913_;
v___y_1902_ = v___y_1917_;
v___y_1903_ = v___y_1918_;
v___y_1904_ = v___x_1909_;
goto v___jp_1895_;
}
}
v___jp_1920_:
{
if (v___y_1921_ == 0)
{
lean_object* v_toCold_1922_; lean_object* v_ref_1923_; uint8_t v_suppressElabErrors_1924_; lean_object* v_fileName_1925_; lean_object* v_fileMap_1926_; lean_object* v_options_1927_; lean_object* v_currNamespace_1928_; lean_object* v_openDecls_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___f_1932_; uint8_t v___x_1933_; uint8_t v___x_1934_; 
v_toCold_1922_ = lean_ctor_get(v___y_1817_, 0);
v_ref_1923_ = lean_ctor_get(v___y_1817_, 2);
v_suppressElabErrors_1924_ = lean_ctor_get_uint8(v___y_1817_, sizeof(void*)*3 + 1);
v_fileName_1925_ = lean_ctor_get(v_toCold_1922_, 0);
v_fileMap_1926_ = lean_ctor_get(v_toCold_1922_, 1);
v_options_1927_ = lean_ctor_get(v_toCold_1922_, 2);
v_currNamespace_1928_ = lean_ctor_get(v_toCold_1922_, 4);
v_openDecls_1929_ = lean_ctor_get(v_toCold_1922_, 5);
v___x_1930_ = lean_box(v_suppressElabErrors_1924_);
v___x_1931_ = lean_box(v___y_1921_);
v___f_1932_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1932_, 0, v___x_1930_);
lean_closure_set(v___f_1932_, 1, v___x_1931_);
v___x_1933_ = 1;
v___x_1934_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1813_, v___x_1933_);
if (v___x_1934_ == 0)
{
v___y_1911_ = v_fileName_1925_;
v___y_1912_ = v___f_1932_;
v___y_1913_ = v_fileMap_1926_;
v___y_1914_ = v_openDecls_1929_;
v___y_1915_ = v_currNamespace_1928_;
v___y_1916_ = v_ref_1923_;
v___y_1917_ = v___y_1921_;
v___y_1918_ = v_suppressElabErrors_1924_;
v___y_1919_ = v___x_1934_;
goto v___jp_1910_;
}
else
{
lean_object* v___x_1935_; uint8_t v___x_1936_; 
v___x_1935_ = l_Lean_warningAsError;
v___x_1936_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_1927_, v___x_1935_);
v___y_1911_ = v_fileName_1925_;
v___y_1912_ = v___f_1932_;
v___y_1913_ = v_fileMap_1926_;
v___y_1914_ = v_openDecls_1929_;
v___y_1915_ = v_currNamespace_1928_;
v___y_1916_ = v_ref_1923_;
v___y_1917_ = v___y_1921_;
v___y_1918_ = v_suppressElabErrors_1924_;
v___y_1919_ = v___x_1936_;
goto v___jp_1910_;
}
}
else
{
lean_object* v___x_1937_; lean_object* v___x_1938_; 
lean_dec_ref(v_msgData_1812_);
v___x_1937_ = lean_box(0);
v___x_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
return v___x_1938_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___boxed(lean_object* v_ref_1941_, lean_object* v_msgData_1942_, lean_object* v_severity_1943_, lean_object* v_isSilent_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
uint8_t v_severity_boxed_1950_; uint8_t v_isSilent_boxed_1951_; lean_object* v_res_1952_; 
v_severity_boxed_1950_ = lean_unbox(v_severity_1943_);
v_isSilent_boxed_1951_ = lean_unbox(v_isSilent_1944_);
v_res_1952_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_1941_, v_msgData_1942_, v_severity_boxed_1950_, v_isSilent_boxed_1951_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v_ref_1941_);
return v_res_1952_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(lean_object* v_msgData_1953_, uint8_t v_severity_1954_, uint8_t v_isSilent_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_){
_start:
{
lean_object* v_ref_1965_; lean_object* v___x_1966_; 
v_ref_1965_ = lean_ctor_get(v___y_1962_, 2);
v___x_1966_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_1965_, v_msgData_1953_, v_severity_1954_, v_isSilent_1955_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28___boxed(lean_object* v_msgData_1967_, lean_object* v_severity_1968_, lean_object* v_isSilent_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
uint8_t v_severity_boxed_1979_; uint8_t v_isSilent_boxed_1980_; lean_object* v_res_1981_; 
v_severity_boxed_1979_ = lean_unbox(v_severity_1968_);
v_isSilent_boxed_1980_ = lean_unbox(v_isSilent_1969_);
v_res_1981_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(v_msgData_1967_, v_severity_boxed_1979_, v_isSilent_boxed_1980_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
lean_dec(v___y_1975_);
lean_dec_ref(v___y_1974_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(lean_object* v_msgData_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_){
_start:
{
uint8_t v___x_1992_; uint8_t v___x_1993_; lean_object* v___x_1994_; 
v___x_1992_ = 1;
v___x_1993_ = 0;
v___x_1994_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(v_msgData_1982_, v___x_1992_, v___x_1993_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23___boxed(lean_object* v_msgData_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(v_msgData_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
lean_dec(v___y_1999_);
lean_dec_ref(v___y_1998_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(lean_object* v_opt_2006_, lean_object* v___y_2007_){
_start:
{
lean_object* v_toCold_2009_; lean_object* v_options_2010_; uint8_t v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v_toCold_2009_ = lean_ctor_get(v___y_2007_, 0);
v_options_2010_ = lean_ctor_get(v_toCold_2009_, 2);
v___x_2011_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_2010_, v_opt_2006_);
v___x_2012_ = lean_box(v___x_2011_);
v___x_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
return v___x_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg___boxed(lean_object* v_opt_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v_opt_2014_, v___y_2015_);
lean_dec_ref(v___y_2015_);
lean_dec_ref(v_opt_2014_);
return v_res_2017_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1(void){
_start:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; 
v___x_2019_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0));
v___x_2020_ = l_Lean_stringToMessageData(v___x_2019_);
return v___x_2020_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3(void){
_start:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2022_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2));
v___x_2023_ = l_Lean_stringToMessageData(v___x_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16(lean_object* v_id_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v___x_2034_; lean_object* v_env_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2057_; 
v___x_2034_ = lean_st_ref_get(v___y_2032_);
v_env_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc_ref(v_env_2035_);
lean_dec(v___x_2034_);
v___x_2036_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_2037_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v___x_2036_, v___y_2031_);
v_a_2038_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2040_ = v___x_2037_;
v_isShared_2041_ = v_isSharedCheck_2057_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v___x_2037_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2057_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
uint8_t v_isExporting_2047_; 
v_isExporting_2047_ = lean_ctor_get_uint8(v_env_2035_, sizeof(void*)*8);
lean_dec_ref(v_env_2035_);
if (v_isExporting_2047_ == 0)
{
lean_dec(v_a_2038_);
lean_dec(v_id_2024_);
goto v___jp_2042_;
}
else
{
uint8_t v___x_2048_; 
v___x_2048_ = l_Lean_isPrivateName(v_id_2024_);
if (v___x_2048_ == 0)
{
lean_dec(v_a_2038_);
lean_dec(v_id_2024_);
goto v___jp_2042_;
}
else
{
uint8_t v___x_2049_; 
v___x_2049_ = lean_unbox(v_a_2038_);
lean_dec(v_a_2038_);
if (v___x_2049_ == 0)
{
lean_dec(v_id_2024_);
goto v___jp_2042_;
}
else
{
lean_object* v___x_2050_; uint8_t v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
lean_del_object(v___x_2040_);
v___x_2050_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1);
v___x_2051_ = 0;
v___x_2052_ = l_Lean_MessageData_ofConstName(v_id_2024_, v___x_2051_);
v___x_2053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2050_);
lean_ctor_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3);
v___x_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2053_);
lean_ctor_set(v___x_2055_, 1, v___x_2054_);
v___x_2056_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(v___x_2055_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
return v___x_2056_;
}
}
}
v___jp_2042_:
{
lean_object* v___x_2043_; lean_object* v___x_2045_; 
v___x_2043_ = lean_box(0);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2043_);
v___x_2045_ = v___x_2040_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16___boxed(lean_object* v_id_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16(v_id_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15(lean_object* v_x_2069_){
_start:
{
if (lean_obj_tag(v_x_2069_) == 0)
{
lean_object* v___x_2070_; 
v___x_2070_ = lean_box(0);
return v___x_2070_;
}
else
{
lean_object* v_head_2071_; lean_object* v_tail_2072_; lean_object* v_fst_2073_; uint8_t v___x_2074_; 
v_head_2071_ = lean_ctor_get(v_x_2069_, 0);
v_tail_2072_ = lean_ctor_get(v_x_2069_, 1);
v_fst_2073_ = lean_ctor_get(v_head_2071_, 0);
v___x_2074_ = l_Lean_isPrivateName(v_fst_2073_);
if (v___x_2074_ == 0)
{
v_x_2069_ = v_tail_2072_;
goto _start;
}
else
{
lean_object* v___x_2076_; 
lean_inc(v_head_2071_);
v___x_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2076_, 0, v_head_2071_);
return v___x_2076_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15___boxed(lean_object* v_x_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15(v_x_2077_);
lean_dec(v_x_2077_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7(lean_object* v_id_2079_, uint8_t v_enableLog_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_){
_start:
{
lean_object* v___x_2090_; lean_object* v_toCold_2091_; lean_object* v_env_2092_; lean_object* v_options_2093_; lean_object* v_currNamespace_2094_; lean_object* v_openDecls_2095_; lean_object* v_res_2096_; lean_object* v___x_2097_; 
v___x_2090_ = lean_st_ref_get(v___y_2088_);
v_toCold_2091_ = lean_ctor_get(v___y_2087_, 0);
v_env_2092_ = lean_ctor_get(v___x_2090_, 0);
lean_inc_ref(v_env_2092_);
lean_dec(v___x_2090_);
v_options_2093_ = lean_ctor_get(v_toCold_2091_, 2);
v_currNamespace_2094_ = lean_ctor_get(v_toCold_2091_, 4);
v_openDecls_2095_ = lean_ctor_get(v_toCold_2091_, 5);
lean_inc(v_openDecls_2095_);
lean_inc(v_currNamespace_2094_);
v_res_2096_ = l_Lean_ResolveName_resolveGlobalName(v_env_2092_, v_options_2093_, v_currNamespace_2094_, v_openDecls_2095_, v_id_2079_);
v___x_2097_ = lean_st_ref_get(v___y_2088_);
if (v_enableLog_2080_ == 0)
{
lean_object* v___x_2098_; 
lean_dec(v___x_2097_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v_res_2096_);
return v___x_2098_;
}
else
{
lean_object* v_env_2099_; uint8_t v_isExporting_2100_; 
v_env_2099_ = lean_ctor_get(v___x_2097_, 0);
lean_inc_ref(v_env_2099_);
lean_dec(v___x_2097_);
v_isExporting_2100_ = lean_ctor_get_uint8(v_env_2099_, sizeof(void*)*8);
lean_dec_ref(v_env_2099_);
if (v_isExporting_2100_ == 0)
{
lean_object* v___x_2101_; 
v___x_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2101_, 0, v_res_2096_);
return v___x_2101_;
}
else
{
lean_object* v___x_2102_; 
v___x_2102_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__15(v_res_2096_);
if (lean_obj_tag(v___x_2102_) == 1)
{
lean_object* v_val_2103_; lean_object* v_fst_2104_; lean_object* v___x_2105_; 
v_val_2103_ = lean_ctor_get(v___x_2102_, 0);
lean_inc(v_val_2103_);
lean_dec_ref_known(v___x_2102_, 1);
v_fst_2104_ = lean_ctor_get(v_val_2103_, 0);
lean_inc(v_fst_2104_);
lean_dec(v_val_2103_);
v___x_2105_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16(v_fst_2104_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2112_ == 0)
{
lean_object* v_unused_2113_; 
v_unused_2113_ = lean_ctor_get(v___x_2105_, 0);
lean_dec(v_unused_2113_);
v___x_2107_ = v___x_2105_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_dec(v___x_2105_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 0, v_res_2096_);
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_res_2096_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2121_; 
lean_dec(v_res_2096_);
v_a_2114_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2116_ = v___x_2105_;
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2105_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2117_ == 0)
{
v___x_2119_ = v___x_2116_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_a_2114_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
}
else
{
lean_object* v___x_2122_; 
lean_dec(v___x_2102_);
v___x_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2122_, 0, v_res_2096_);
return v___x_2122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_id_2123_, lean_object* v_enableLog_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_){
_start:
{
uint8_t v_enableLog_boxed_2134_; lean_object* v_res_2135_; 
v_enableLog_boxed_2134_ = lean_unbox(v_enableLog_2124_);
v_res_2135_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7(v_id_2123_, v_enableLog_boxed_2134_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_);
lean_dec(v___y_2132_);
lean_dec_ref(v___y_2131_);
lean_dec(v___y_2130_);
lean_dec_ref(v___y_2129_);
lean_dec(v___y_2128_);
lean_dec_ref(v___y_2127_);
lean_dec(v___y_2126_);
lean_dec_ref(v___y_2125_);
return v_res_2135_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0(void){
_start:
{
lean_object* v___x_2136_; 
v___x_2136_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_2136_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1(void){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0);
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
return v___x_2138_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2(void){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2139_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1);
v___x_2140_ = lean_unsigned_to_nat(0u);
v___x_2141_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
lean_ctor_set(v___x_2141_, 1, v___x_2140_);
lean_ctor_set(v___x_2141_, 2, v___x_2140_);
lean_ctor_set(v___x_2141_, 3, v___x_2140_);
lean_ctor_set(v___x_2141_, 4, v___x_2139_);
lean_ctor_set(v___x_2141_, 5, v___x_2139_);
lean_ctor_set(v___x_2141_, 6, v___x_2139_);
lean_ctor_set(v___x_2141_, 7, v___x_2139_);
lean_ctor_set(v___x_2141_, 8, v___x_2139_);
lean_ctor_set(v___x_2141_, 9, v___x_2139_);
lean_ctor_set(v___x_2141_, 10, v___x_2139_);
return v___x_2141_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3(void){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2142_ = lean_unsigned_to_nat(32u);
v___x_2143_ = lean_mk_empty_array_with_capacity(v___x_2142_);
v___x_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
return v___x_2144_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4(void){
_start:
{
size_t v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2145_ = ((size_t)5ULL);
v___x_2146_ = lean_unsigned_to_nat(0u);
v___x_2147_ = lean_unsigned_to_nat(32u);
v___x_2148_ = lean_mk_empty_array_with_capacity(v___x_2147_);
v___x_2149_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3);
v___x_2150_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2150_, 0, v___x_2149_);
lean_ctor_set(v___x_2150_, 1, v___x_2148_);
lean_ctor_set(v___x_2150_, 2, v___x_2146_);
lean_ctor_set(v___x_2150_, 3, v___x_2146_);
lean_ctor_set_usize(v___x_2150_, 4, v___x_2145_);
return v___x_2150_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5(void){
_start:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2151_ = lean_box(1);
v___x_2152_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4);
v___x_2153_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1);
v___x_2154_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
lean_ctor_set(v___x_2154_, 1, v___x_2152_);
lean_ctor_set(v___x_2154_, 2, v___x_2151_);
return v___x_2154_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7(void){
_start:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6));
v___x_2157_ = l_Lean_stringToMessageData(v___x_2156_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8));
v___x_2160_ = l_Lean_stringToMessageData(v___x_2159_);
return v___x_2160_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11(void){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; 
v___x_2162_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10));
v___x_2163_ = l_Lean_stringToMessageData(v___x_2162_);
return v___x_2163_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13(void){
_start:
{
lean_object* v___x_2165_; lean_object* v___x_2166_; 
v___x_2165_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12));
v___x_2166_ = l_Lean_stringToMessageData(v___x_2165_);
return v___x_2166_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15(void){
_start:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; 
v___x_2168_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14));
v___x_2169_ = l_Lean_stringToMessageData(v___x_2168_);
return v___x_2169_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2171_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16));
v___x_2172_ = l_Lean_stringToMessageData(v___x_2171_);
return v___x_2172_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19(void){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2174_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18));
v___x_2175_ = l_Lean_stringToMessageData(v___x_2174_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(lean_object* v_msg_2176_, lean_object* v_declHint_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v_env_2182_; uint8_t v___x_2183_; 
v___x_2180_ = lean_box(0);
v___x_2181_ = lean_st_ref_get(v___y_2178_);
v_env_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc_ref(v_env_2182_);
lean_dec(v___x_2181_);
v___x_2183_ = l_Lean_Name_isAnonymous(v_declHint_2177_);
if (v___x_2183_ == 0)
{
uint8_t v_isExporting_2184_; 
v_isExporting_2184_ = lean_ctor_get_uint8(v_env_2182_, sizeof(void*)*8);
if (v_isExporting_2184_ == 0)
{
lean_object* v___x_2185_; 
lean_dec_ref(v_env_2182_);
lean_dec(v_declHint_2177_);
v___x_2185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2185_, 0, v_msg_2176_);
return v___x_2185_;
}
else
{
lean_object* v___x_2186_; uint8_t v___x_2187_; 
lean_inc_ref(v_env_2182_);
v___x_2186_ = l_Lean_Environment_setExporting(v_env_2182_, v___x_2183_);
lean_inc(v_declHint_2177_);
lean_inc_ref(v___x_2186_);
v___x_2187_ = l_Lean_Environment_contains(v___x_2186_, v_declHint_2177_, v_isExporting_2184_);
if (v___x_2187_ == 0)
{
lean_object* v___x_2188_; 
lean_dec_ref(v___x_2186_);
lean_dec_ref(v_env_2182_);
lean_dec(v_declHint_2177_);
v___x_2188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2188_, 0, v_msg_2176_);
return v___x_2188_;
}
else
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v_c_2194_; lean_object* v___x_2195_; 
v___x_2189_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2);
v___x_2190_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5);
v___x_2191_ = l_Lean_Options_empty;
v___x_2192_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2186_);
lean_ctor_set(v___x_2192_, 1, v___x_2189_);
lean_ctor_set(v___x_2192_, 2, v___x_2190_);
lean_ctor_set(v___x_2192_, 3, v___x_2191_);
lean_inc(v_declHint_2177_);
v___x_2193_ = l_Lean_MessageData_ofConstName(v_declHint_2177_, v___x_2183_);
v_c_2194_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2194_, 0, v___x_2192_);
lean_ctor_set(v_c_2194_, 1, v___x_2193_);
v___x_2195_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2182_, v_declHint_2177_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
lean_dec_ref(v_env_2182_);
lean_dec(v_declHint_2177_);
v___x_2196_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7);
v___x_2197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v_c_2194_);
v___x_2198_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9);
v___x_2199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = l_Lean_MessageData_note(v___x_2199_);
v___x_2201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2201_, 0, v_msg_2176_);
lean_ctor_set(v___x_2201_, 1, v___x_2200_);
v___x_2202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
return v___x_2202_;
}
else
{
lean_object* v_val_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2237_; 
v_val_2203_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2205_ = v___x_2195_;
v_isShared_2206_ = v_isSharedCheck_2237_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_val_2203_);
lean_dec(v___x_2195_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2237_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v_mod_2209_; uint8_t v___x_2210_; 
v___x_2207_ = l_Lean_Environment_header(v_env_2182_);
lean_dec_ref(v_env_2182_);
v___x_2208_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2207_);
v_mod_2209_ = lean_array_get(v___x_2180_, v___x_2208_, v_val_2203_);
lean_dec(v_val_2203_);
lean_dec_ref(v___x_2208_);
v___x_2210_ = l_Lean_isPrivateName(v_declHint_2177_);
lean_dec(v_declHint_2177_);
if (v___x_2210_ == 0)
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2222_; 
v___x_2211_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11);
v___x_2212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2211_);
lean_ctor_set(v___x_2212_, 1, v_c_2194_);
v___x_2213_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13);
v___x_2214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2212_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = l_Lean_MessageData_ofName(v_mod_2209_);
v___x_2216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2214_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
v___x_2217_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15);
v___x_2218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2216_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = l_Lean_MessageData_note(v___x_2218_);
v___x_2220_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2220_, 0, v_msg_2176_);
lean_ctor_set(v___x_2220_, 1, v___x_2219_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set_tag(v___x_2205_, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2220_);
v___x_2222_ = v___x_2205_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v___x_2220_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
else
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2235_; 
v___x_2224_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7);
v___x_2225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2225_, 0, v___x_2224_);
lean_ctor_set(v___x_2225_, 1, v_c_2194_);
v___x_2226_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17);
v___x_2227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2225_);
lean_ctor_set(v___x_2227_, 1, v___x_2226_);
v___x_2228_ = l_Lean_MessageData_ofName(v_mod_2209_);
v___x_2229_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2227_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19);
v___x_2231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2229_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
v___x_2232_ = l_Lean_MessageData_note(v___x_2231_);
v___x_2233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2233_, 0, v_msg_2176_);
lean_ctor_set(v___x_2233_, 1, v___x_2232_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set_tag(v___x_2205_, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2233_);
v___x_2235_ = v___x_2205_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2233_);
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
lean_object* v___x_2238_; 
lean_dec_ref(v_env_2182_);
lean_dec(v_declHint_2177_);
v___x_2238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_msg_2176_);
return v___x_2238_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___boxed(lean_object* v_msg_2239_, lean_object* v_declHint_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_2239_, v_declHint_2240_, v___y_2241_);
lean_dec(v___y_2241_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(lean_object* v_msg_2244_, lean_object* v_declHint_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v___x_2255_; lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2265_; 
v___x_2255_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_2244_, v_declHint_2245_, v___y_2253_);
v_a_2256_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2265_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2265_ == 0)
{
v___x_2258_ = v___x_2255_;
v_isShared_2259_ = v_isSharedCheck_2265_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2255_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2265_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2263_; 
v___x_2260_ = l_Lean_unknownIdentifierMessageTag;
v___x_2261_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2260_);
lean_ctor_set(v___x_2261_, 1, v_a_2256_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 0, v___x_2261_);
v___x_2263_ = v___x_2258_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2264_; 
v_reuseFailAlloc_2264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2264_, 0, v___x_2261_);
v___x_2263_ = v_reuseFailAlloc_2264_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
return v___x_2263_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33___boxed(lean_object* v_msg_2266_, lean_object* v_declHint_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v_res_2277_; 
v_res_2277_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(v_msg_2266_, v_declHint_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec_ref(v___y_2270_);
lean_dec(v___y_2269_);
lean_dec_ref(v___y_2268_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(lean_object* v_ref_2278_, lean_object* v_msg_2279_, lean_object* v_declHint_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v___x_2290_; lean_object* v_a_2291_; lean_object* v___x_2292_; 
v___x_2290_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(v_msg_2279_, v_declHint_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
lean_inc(v_a_2291_);
lean_dec_ref(v___x_2290_);
v___x_2292_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_ref_2278_, v_a_2291_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg___boxed(lean_object* v_ref_2293_, lean_object* v_msg_2294_, lean_object* v_declHint_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_2293_, v_msg_2294_, v_declHint_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v_ref_2293_);
return v_res_2305_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2307_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0));
v___x_2308_ = l_Lean_stringToMessageData(v___x_2307_);
return v___x_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(lean_object* v_ref_2309_, lean_object* v_constName_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_){
_start:
{
lean_object* v___x_2320_; uint8_t v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2320_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1);
v___x_2321_ = 0;
lean_inc(v_constName_2310_);
v___x_2322_ = l_Lean_MessageData_ofConstName(v_constName_2310_, v___x_2321_);
v___x_2323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2320_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_elabUnsealingNewtypeConfig_evalConfigItem_spec__0_spec__0___closed__5);
v___x_2325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2325_, 0, v___x_2323_);
lean_ctor_set(v___x_2325_, 1, v___x_2324_);
v___x_2326_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_2309_, v___x_2325_, v_constName_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___boxed(lean_object* v_ref_2327_, lean_object* v_constName_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_2327_, v_constName_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
lean_dec(v___y_2332_);
lean_dec_ref(v___y_2331_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
lean_dec(v_ref_2327_);
return v_res_2338_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__19(lean_object* v_a_2339_, lean_object* v_a_2340_){
_start:
{
if (lean_obj_tag(v_a_2339_) == 0)
{
lean_object* v___x_2341_; 
v___x_2341_ = l_List_reverse___redArg(v_a_2340_);
return v___x_2341_;
}
else
{
lean_object* v_head_2342_; lean_object* v_tail_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2352_; 
v_head_2342_ = lean_ctor_get(v_a_2339_, 0);
v_tail_2343_ = lean_ctor_get(v_a_2339_, 1);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_a_2339_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2345_ = v_a_2339_;
v_isShared_2346_ = v_isSharedCheck_2352_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_tail_2343_);
lean_inc(v_head_2342_);
lean_dec(v_a_2339_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2352_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v_fst_2347_; lean_object* v___x_2349_; 
v_fst_2347_ = lean_ctor_get(v_head_2342_, 0);
lean_inc(v_fst_2347_);
lean_dec(v_head_2342_);
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 1, v_a_2340_);
lean_ctor_set(v___x_2345_, 0, v_fst_2347_);
v___x_2349_ = v___x_2345_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_fst_2347_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_a_2340_);
v___x_2349_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
v_a_2339_ = v_tail_2343_;
v_a_2340_ = v___x_2349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__18(lean_object* v_a_2353_, lean_object* v_a_2354_){
_start:
{
if (lean_obj_tag(v_a_2353_) == 0)
{
lean_object* v___x_2355_; 
v___x_2355_ = l_List_reverse___redArg(v_a_2354_);
return v___x_2355_;
}
else
{
lean_object* v_head_2356_; lean_object* v_tail_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2368_; 
v_head_2356_ = lean_ctor_get(v_a_2353_, 0);
v_tail_2357_ = lean_ctor_get(v_a_2353_, 1);
v_isSharedCheck_2368_ = !lean_is_exclusive(v_a_2353_);
if (v_isSharedCheck_2368_ == 0)
{
v___x_2359_ = v_a_2353_;
v_isShared_2360_ = v_isSharedCheck_2368_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_tail_2357_);
lean_inc(v_head_2356_);
lean_dec(v_a_2353_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2368_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v_snd_2361_; uint8_t v___x_2362_; 
v_snd_2361_ = lean_ctor_get(v_head_2356_, 1);
v___x_2362_ = l_List_isEmpty___redArg(v_snd_2361_);
if (v___x_2362_ == 0)
{
lean_del_object(v___x_2359_);
lean_dec(v_head_2356_);
v_a_2353_ = v_tail_2357_;
goto _start;
}
else
{
lean_object* v___x_2365_; 
if (v_isShared_2360_ == 0)
{
lean_ctor_set(v___x_2359_, 1, v_a_2354_);
v___x_2365_ = v___x_2359_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_head_2356_);
lean_ctor_set(v_reuseFailAlloc_2367_, 1, v_a_2354_);
v___x_2365_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
v_a_2353_ = v_tail_2357_;
v_a_2354_ = v___x_2365_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8(lean_object* v_n_2369_, lean_object* v_cs_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v___x_2380_; lean_object* v_cs_2381_; uint8_t v___x_2385_; 
v___x_2380_ = lean_box(0);
v_cs_2381_ = l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__18(v_cs_2370_, v___x_2380_);
v___x_2385_ = l_List_isEmpty___redArg(v_cs_2381_);
if (v___x_2385_ == 0)
{
lean_dec(v_n_2369_);
goto v___jp_2382_;
}
else
{
lean_object* v_ref_2386_; lean_object* v___x_2387_; lean_object* v_a_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
lean_dec(v_cs_2381_);
v_ref_2386_ = lean_ctor_get(v___y_2377_, 2);
v___x_2387_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_2386_, v_n_2369_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_);
v_a_2388_ = lean_ctor_get(v___x_2387_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2387_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2387_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_a_2388_);
lean_dec(v___x_2387_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_a_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
v___jp_2382_:
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2383_ = l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__19(v_cs_2381_, v___x_2380_);
v___x_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2383_);
return v___x_2384_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8___boxed(lean_object* v_n_2396_, lean_object* v_cs_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_){
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8(v_n_2396_, v_cs_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_);
lean_dec(v___y_2405_);
lean_dec_ref(v___y_2404_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2(lean_object* v_n_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_){
_start:
{
uint8_t v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = 1;
lean_inc(v_n_2408_);
v___x_2419_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7(v_n_2408_, v___x_2418_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; lean_object* v___x_2421_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
lean_dec_ref_known(v___x_2419_, 1);
v___x_2421_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8(v_n_2408_, v_a_2420_, v___y_2409_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
return v___x_2421_;
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec(v_n_2408_);
v_a_2422_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2419_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2419_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2___boxed(lean_object* v_n_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v_res_2440_; 
v_res_2440_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2(v_n_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
return v_res_2440_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3_spec__10(lean_object* v_a_2441_, lean_object* v_a_2442_){
_start:
{
if (lean_obj_tag(v_a_2441_) == 0)
{
lean_object* v___x_2443_; 
v___x_2443_ = lean_array_to_list(v_a_2442_);
return v___x_2443_;
}
else
{
lean_object* v_head_2444_; 
v_head_2444_ = lean_ctor_get(v_a_2441_, 0);
if (lean_obj_tag(v_head_2444_) == 1)
{
lean_object* v_fields_2445_; 
v_fields_2445_ = lean_ctor_get(v_head_2444_, 1);
if (lean_obj_tag(v_fields_2445_) == 0)
{
lean_object* v_tail_2446_; lean_object* v_n_2447_; lean_object* v___x_2448_; 
lean_inc_ref(v_head_2444_);
v_tail_2446_ = lean_ctor_get(v_a_2441_, 1);
lean_inc(v_tail_2446_);
lean_dec_ref_known(v_a_2441_, 2);
v_n_2447_ = lean_ctor_get(v_head_2444_, 0);
lean_inc(v_n_2447_);
lean_dec_ref_known(v_head_2444_, 2);
v___x_2448_ = lean_array_push(v_a_2442_, v_n_2447_);
v_a_2441_ = v_tail_2446_;
v_a_2442_ = v___x_2448_;
goto _start;
}
else
{
lean_object* v_tail_2450_; 
v_tail_2450_ = lean_ctor_get(v_a_2441_, 1);
lean_inc(v_tail_2450_);
lean_dec_ref_known(v_a_2441_, 2);
v_a_2441_ = v_tail_2450_;
goto _start;
}
}
else
{
lean_object* v_tail_2452_; 
v_tail_2452_ = lean_ctor_get(v_a_2441_, 1);
lean_inc(v_tail_2452_);
lean_dec_ref_known(v_a_2441_, 2);
v_a_2441_ = v_tail_2452_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2459_; lean_object* v___x_2460_; 
v___x_2459_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__2));
v___x_2460_ = l_Lean_MessageData_ofFormat(v___x_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3(lean_object* v_stx_2461_, lean_object* v_k_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
if (lean_obj_tag(v_stx_2461_) == 3)
{
lean_object* v_val_2472_; lean_object* v_preresolved_2473_; lean_object* v___x_2474_; lean_object* v_pre_2475_; uint8_t v___x_2476_; 
v_val_2472_ = lean_ctor_get(v_stx_2461_, 2);
lean_inc(v_val_2472_);
v_preresolved_2473_ = lean_ctor_get(v_stx_2461_, 3);
v___x_2474_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__0));
lean_inc(v_preresolved_2473_);
v_pre_2475_ = l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3_spec__10(v_preresolved_2473_, v___x_2474_);
v___x_2476_ = l_List_isEmpty___redArg(v_pre_2475_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; 
lean_dec_ref_known(v_stx_2461_, 4);
lean_dec(v_val_2472_);
lean_dec_ref(v_k_2462_);
v___x_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_pre_2475_);
return v___x_2477_;
}
else
{
lean_object* v_toCold_2478_; lean_object* v_currRecDepth_2479_; lean_object* v_ref_2480_; uint8_t v_diag_2481_; uint8_t v_suppressElabErrors_2482_; lean_object* v_ref_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
lean_dec(v_pre_2475_);
v_toCold_2478_ = lean_ctor_get(v___y_2469_, 0);
v_currRecDepth_2479_ = lean_ctor_get(v___y_2469_, 1);
v_ref_2480_ = lean_ctor_get(v___y_2469_, 2);
v_diag_2481_ = lean_ctor_get_uint8(v___y_2469_, sizeof(void*)*3);
v_suppressElabErrors_2482_ = lean_ctor_get_uint8(v___y_2469_, sizeof(void*)*3 + 1);
v_ref_2483_ = l_Lean_replaceRef(v_stx_2461_, v_ref_2480_);
lean_dec_ref_known(v_stx_2461_, 4);
lean_inc(v_currRecDepth_2479_);
lean_inc_ref(v_toCold_2478_);
v___x_2484_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2484_, 0, v_toCold_2478_);
lean_ctor_set(v___x_2484_, 1, v_currRecDepth_2479_);
lean_ctor_set(v___x_2484_, 2, v_ref_2483_);
lean_ctor_set_uint8(v___x_2484_, sizeof(void*)*3, v_diag_2481_);
lean_ctor_set_uint8(v___x_2484_, sizeof(void*)*3 + 1, v_suppressElabErrors_2482_);
lean_inc(v___y_2470_);
lean_inc(v___y_2468_);
lean_inc_ref(v___y_2467_);
lean_inc(v___y_2466_);
lean_inc_ref(v___y_2465_);
lean_inc(v___y_2464_);
lean_inc_ref(v___y_2463_);
v___x_2485_ = lean_apply_10(v_k_2462_, v_val_2472_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___x_2484_, v___y_2470_, lean_box(0));
return v___x_2485_;
}
}
else
{
lean_object* v___x_2486_; lean_object* v___x_2487_; 
lean_dec_ref(v_k_2462_);
v___x_2486_ = lean_obj_once(&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3, &l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3_once, _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___closed__3);
v___x_2487_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_stx_2461_, v___x_2486_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_);
lean_dec(v_stx_2461_);
return v___x_2487_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3___boxed(lean_object* v_stx_2488_, lean_object* v_k_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3(v_stx_2488_, v_k_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0(lean_object* v_stx_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2511_ = ((lean_object*)(l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___closed__0));
v___x_2512_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__3(v_stx_2501_, v___x_2511_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0___boxed(lean_object* v_stx_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_){
_start:
{
lean_object* v_res_2523_; 
v_res_2523_ = l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0(v_stx_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
lean_dec(v___y_2521_);
lean_dec_ref(v___y_2520_);
lean_dec(v___y_2519_);
lean_dec_ref(v___y_2518_);
lean_dec(v___y_2517_);
lean_dec_ref(v___y_2516_);
lean_dec(v___y_2515_);
lean_dec_ref(v___y_2514_);
return v_res_2523_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0(lean_object* v_id_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v___x_2534_; 
lean_inc(v_id_2524_);
v___x_2534_ = l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0(v_id_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; lean_object* v___x_2536_; 
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2534_, 1);
v___x_2536_ = l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__1(v_id_2524_, v_a_2535_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
return v___x_2536_;
}
else
{
lean_object* v_a_2537_; lean_object* v___x_2539_; uint8_t v_isShared_2540_; uint8_t v_isSharedCheck_2544_; 
lean_dec(v_id_2524_);
v_a_2537_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2539_ = v___x_2534_;
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
else
{
lean_inc(v_a_2537_);
lean_dec(v___x_2534_);
v___x_2539_ = lean_box(0);
v_isShared_2540_ = v_isSharedCheck_2544_;
goto v_resetjp_2538_;
}
v_resetjp_2538_:
{
lean_object* v___x_2542_; 
if (v_isShared_2540_ == 0)
{
v___x_2542_ = v___x_2539_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_a_2537_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0___boxed(lean_object* v_id_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0(v_id_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
return v_res_2555_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0);
v___x_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2556_);
return v___x_2557_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0);
v___x_2559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
lean_ctor_set(v___x_2559_, 1, v___x_2558_);
return v___x_2559_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2560_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__0);
v___x_2561_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2560_);
lean_ctor_set(v___x_2561_, 1, v___x_2560_);
lean_ctor_set(v___x_2561_, 2, v___x_2560_);
lean_ctor_set(v___x_2561_, 3, v___x_2560_);
lean_ctor_set(v___x_2561_, 4, v___x_2560_);
lean_ctor_set(v___x_2561_, 5, v___x_2560_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(lean_object* v_declName_2562_, uint8_t v_s_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_){
_start:
{
lean_object* v___x_2567_; lean_object* v_env_2568_; lean_object* v_nextMacroScope_2569_; lean_object* v_ngen_2570_; lean_object* v_auxDeclNGen_2571_; lean_object* v_traceState_2572_; lean_object* v_messages_2573_; lean_object* v_infoState_2574_; lean_object* v_snapshotTasks_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2604_; 
v___x_2567_ = lean_st_ref_take(v___y_2565_);
v_env_2568_ = lean_ctor_get(v___x_2567_, 0);
v_nextMacroScope_2569_ = lean_ctor_get(v___x_2567_, 1);
v_ngen_2570_ = lean_ctor_get(v___x_2567_, 2);
v_auxDeclNGen_2571_ = lean_ctor_get(v___x_2567_, 3);
v_traceState_2572_ = lean_ctor_get(v___x_2567_, 4);
v_messages_2573_ = lean_ctor_get(v___x_2567_, 6);
v_infoState_2574_ = lean_ctor_get(v___x_2567_, 7);
v_snapshotTasks_2575_ = lean_ctor_get(v___x_2567_, 8);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2604_ == 0)
{
lean_object* v_unused_2605_; 
v_unused_2605_ = lean_ctor_get(v___x_2567_, 5);
lean_dec(v_unused_2605_);
v___x_2577_ = v___x_2567_;
v_isShared_2578_ = v_isSharedCheck_2604_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_snapshotTasks_2575_);
lean_inc(v_infoState_2574_);
lean_inc(v_messages_2573_);
lean_inc(v_traceState_2572_);
lean_inc(v_auxDeclNGen_2571_);
lean_inc(v_ngen_2570_);
lean_inc(v_nextMacroScope_2569_);
lean_inc(v_env_2568_);
lean_dec(v___x_2567_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2604_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
uint8_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2584_; 
v___x_2579_ = 1;
v___x_2580_ = lean_box(0);
v___x_2581_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2568_, v_declName_2562_, v_s_2563_, v___x_2579_, v___x_2580_);
v___x_2582_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1);
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 5, v___x_2582_);
lean_ctor_set(v___x_2577_, 0, v___x_2581_);
v___x_2584_ = v___x_2577_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v___x_2581_);
lean_ctor_set(v_reuseFailAlloc_2603_, 1, v_nextMacroScope_2569_);
lean_ctor_set(v_reuseFailAlloc_2603_, 2, v_ngen_2570_);
lean_ctor_set(v_reuseFailAlloc_2603_, 3, v_auxDeclNGen_2571_);
lean_ctor_set(v_reuseFailAlloc_2603_, 4, v_traceState_2572_);
lean_ctor_set(v_reuseFailAlloc_2603_, 5, v___x_2582_);
lean_ctor_set(v_reuseFailAlloc_2603_, 6, v_messages_2573_);
lean_ctor_set(v_reuseFailAlloc_2603_, 7, v_infoState_2574_);
lean_ctor_set(v_reuseFailAlloc_2603_, 8, v_snapshotTasks_2575_);
v___x_2584_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v_mctx_2587_; lean_object* v_zetaDeltaFVarIds_2588_; lean_object* v_postponed_2589_; lean_object* v_diag_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2601_; 
v___x_2585_ = lean_st_ref_put(v___y_2565_, v___x_2584_);
v___x_2586_ = lean_st_ref_take(v___y_2564_);
v_mctx_2587_ = lean_ctor_get(v___x_2586_, 0);
v_zetaDeltaFVarIds_2588_ = lean_ctor_get(v___x_2586_, 2);
v_postponed_2589_ = lean_ctor_get(v___x_2586_, 3);
v_diag_2590_ = lean_ctor_get(v___x_2586_, 4);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2601_ == 0)
{
lean_object* v_unused_2602_; 
v_unused_2602_ = lean_ctor_get(v___x_2586_, 1);
lean_dec(v_unused_2602_);
v___x_2592_ = v___x_2586_;
v_isShared_2593_ = v_isSharedCheck_2601_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_diag_2590_);
lean_inc(v_postponed_2589_);
lean_inc(v_zetaDeltaFVarIds_2588_);
lean_inc(v_mctx_2587_);
lean_dec(v___x_2586_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2601_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2597_; 
v___x_2594_ = lean_box(0);
v___x_2595_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 1, v___x_2595_);
v___x_2597_ = v___x_2592_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_mctx_2587_);
lean_ctor_set(v_reuseFailAlloc_2600_, 1, v___x_2595_);
lean_ctor_set(v_reuseFailAlloc_2600_, 2, v_zetaDeltaFVarIds_2588_);
lean_ctor_set(v_reuseFailAlloc_2600_, 3, v_postponed_2589_);
lean_ctor_set(v_reuseFailAlloc_2600_, 4, v_diag_2590_);
v___x_2597_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2598_ = lean_st_ref_put(v___y_2564_, v___x_2597_);
v___x_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2599_, 0, v___x_2594_);
return v___x_2599_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___boxed(lean_object* v_declName_2606_, lean_object* v_s_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_){
_start:
{
uint8_t v_s_boxed_2611_; lean_object* v_res_2612_; 
v_s_boxed_2611_ = lean_unbox(v_s_2607_);
v_res_2612_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(v_declName_2606_, v_s_boxed_2611_, v___y_2608_, v___y_2609_);
lean_dec(v___y_2609_);
lean_dec(v___y_2608_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8(uint8_t v_status_2613_, lean_object* v_as_2614_, size_t v_sz_2615_, size_t v_i_2616_, lean_object* v_b_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_){
_start:
{
uint8_t v___x_2627_; 
v___x_2627_ = lean_usize_dec_lt(v_i_2616_, v_sz_2615_);
if (v___x_2627_ == 0)
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v_b_2617_);
return v___x_2628_;
}
else
{
lean_object* v___x_2629_; lean_object* v_a_2630_; lean_object* v___x_2631_; 
v___x_2629_ = lean_box(0);
v_a_2630_ = lean_array_uget_borrowed(v_as_2614_, v_i_2616_);
lean_inc(v_a_2630_);
v___x_2631_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(v_a_2630_, v_status_2613_, v___y_2623_, v___y_2625_);
if (lean_obj_tag(v___x_2631_) == 0)
{
size_t v___x_2632_; size_t v___x_2633_; 
lean_dec_ref_known(v___x_2631_, 1);
v___x_2632_ = ((size_t)1ULL);
v___x_2633_ = lean_usize_add(v_i_2616_, v___x_2632_);
v_i_2616_ = v___x_2633_;
v_b_2617_ = v___x_2629_;
goto _start;
}
else
{
return v___x_2631_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8___boxed(lean_object* v_status_2635_, lean_object* v_as_2636_, lean_object* v_sz_2637_, lean_object* v_i_2638_, lean_object* v_b_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
uint8_t v_status_boxed_2649_; size_t v_sz_boxed_2650_; size_t v_i_boxed_2651_; lean_object* v_res_2652_; 
v_status_boxed_2649_ = lean_unbox(v_status_2635_);
v_sz_boxed_2650_ = lean_unbox_usize(v_sz_2637_);
lean_dec(v_sz_2637_);
v_i_boxed_2651_ = lean_unbox_usize(v_i_2638_);
lean_dec(v_i_2638_);
v_res_2652_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8(v_status_boxed_2649_, v_as_2636_, v_sz_boxed_2650_, v_i_boxed_2651_, v_b_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_);
lean_dec(v___y_2647_);
lean_dec_ref(v___y_2646_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec_ref(v_as_2636_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(lean_object* v___y_2653_, lean_object* v___x_2654_, lean_object* v___x_2655_, lean_object* v___y_2656_, lean_object* v___x_2657_, lean_object* v___x_2658_, lean_object* v_a_x3f_2659_){
_start:
{
lean_object* v___x_2661_; lean_object* v_env_2662_; lean_object* v_nextMacroScope_2663_; lean_object* v_ngen_2664_; lean_object* v_auxDeclNGen_2665_; lean_object* v_traceState_2666_; lean_object* v_messages_2667_; lean_object* v_infoState_2668_; lean_object* v_snapshotTasks_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2693_; 
v___x_2661_ = lean_st_ref_take(v___y_2653_);
v_env_2662_ = lean_ctor_get(v___x_2661_, 0);
v_nextMacroScope_2663_ = lean_ctor_get(v___x_2661_, 1);
v_ngen_2664_ = lean_ctor_get(v___x_2661_, 2);
v_auxDeclNGen_2665_ = lean_ctor_get(v___x_2661_, 3);
v_traceState_2666_ = lean_ctor_get(v___x_2661_, 4);
v_messages_2667_ = lean_ctor_get(v___x_2661_, 6);
v_infoState_2668_ = lean_ctor_get(v___x_2661_, 7);
v_snapshotTasks_2669_ = lean_ctor_get(v___x_2661_, 8);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2693_ == 0)
{
lean_object* v_unused_2694_; 
v_unused_2694_ = lean_ctor_get(v___x_2661_, 5);
lean_dec(v_unused_2694_);
v___x_2671_ = v___x_2661_;
v_isShared_2672_ = v_isSharedCheck_2693_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_snapshotTasks_2669_);
lean_inc(v_infoState_2668_);
lean_inc(v_messages_2667_);
lean_inc(v_traceState_2666_);
lean_inc(v_auxDeclNGen_2665_);
lean_inc(v_ngen_2664_);
lean_inc(v_nextMacroScope_2663_);
lean_inc(v_env_2662_);
lean_dec(v___x_2661_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2693_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2673_; lean_object* v___x_2675_; 
v___x_2673_ = l_Lean_ScopedEnvExtension_popScope___redArg(v___x_2654_, v_env_2662_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 5, v___x_2655_);
lean_ctor_set(v___x_2671_, 0, v___x_2673_);
v___x_2675_ = v___x_2671_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v___x_2673_);
lean_ctor_set(v_reuseFailAlloc_2692_, 1, v_nextMacroScope_2663_);
lean_ctor_set(v_reuseFailAlloc_2692_, 2, v_ngen_2664_);
lean_ctor_set(v_reuseFailAlloc_2692_, 3, v_auxDeclNGen_2665_);
lean_ctor_set(v_reuseFailAlloc_2692_, 4, v_traceState_2666_);
lean_ctor_set(v_reuseFailAlloc_2692_, 5, v___x_2655_);
lean_ctor_set(v_reuseFailAlloc_2692_, 6, v_messages_2667_);
lean_ctor_set(v_reuseFailAlloc_2692_, 7, v_infoState_2668_);
lean_ctor_set(v_reuseFailAlloc_2692_, 8, v_snapshotTasks_2669_);
v___x_2675_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v_mctx_2678_; lean_object* v_zetaDeltaFVarIds_2679_; lean_object* v_postponed_2680_; lean_object* v_diag_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2690_; 
v___x_2676_ = lean_st_ref_put(v___y_2653_, v___x_2675_);
v___x_2677_ = lean_st_ref_take(v___y_2656_);
v_mctx_2678_ = lean_ctor_get(v___x_2677_, 0);
v_zetaDeltaFVarIds_2679_ = lean_ctor_get(v___x_2677_, 2);
v_postponed_2680_ = lean_ctor_get(v___x_2677_, 3);
v_diag_2681_ = lean_ctor_get(v___x_2677_, 4);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2690_ == 0)
{
lean_object* v_unused_2691_; 
v_unused_2691_ = lean_ctor_get(v___x_2677_, 1);
lean_dec(v_unused_2691_);
v___x_2683_ = v___x_2677_;
v_isShared_2684_ = v_isSharedCheck_2690_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_diag_2681_);
lean_inc(v_postponed_2680_);
lean_inc(v_zetaDeltaFVarIds_2679_);
lean_inc(v_mctx_2678_);
lean_dec(v___x_2677_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2690_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 1, v___x_2657_);
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_mctx_2678_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v___x_2657_);
lean_ctor_set(v_reuseFailAlloc_2689_, 2, v_zetaDeltaFVarIds_2679_);
lean_ctor_set(v_reuseFailAlloc_2689_, 3, v_postponed_2680_);
lean_ctor_set(v_reuseFailAlloc_2689_, 4, v_diag_2681_);
v___x_2686_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2687_ = lean_st_ref_put(v___y_2656_, v___x_2686_);
v___x_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2658_);
return v___x_2688_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0___boxed(lean_object* v___y_2695_, lean_object* v___x_2696_, lean_object* v___x_2697_, lean_object* v___y_2698_, lean_object* v___x_2699_, lean_object* v___x_2700_, lean_object* v_a_x3f_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v_res_2703_; 
v_res_2703_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(v___y_2695_, v___x_2696_, v___x_2697_, v___y_2698_, v___x_2699_, v___x_2700_, v_a_x3f_2701_);
lean_dec(v_a_x3f_2701_);
lean_dec(v___y_2698_);
lean_dec(v___y_2695_);
return v_res_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(lean_object* v_names_2704_, uint8_t v_status_2705_, lean_object* v_t_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v_env_2718_; lean_object* v_nextMacroScope_2719_; lean_object* v_ngen_2720_; lean_object* v_auxDeclNGen_2721_; lean_object* v_traceState_2722_; lean_object* v_messages_2723_; lean_object* v_infoState_2724_; lean_object* v_snapshotTasks_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2791_; 
v___x_2716_ = l_Lean_reducibilityExtraExt;
v___x_2717_ = lean_st_ref_take(v___y_2714_);
v_env_2718_ = lean_ctor_get(v___x_2717_, 0);
v_nextMacroScope_2719_ = lean_ctor_get(v___x_2717_, 1);
v_ngen_2720_ = lean_ctor_get(v___x_2717_, 2);
v_auxDeclNGen_2721_ = lean_ctor_get(v___x_2717_, 3);
v_traceState_2722_ = lean_ctor_get(v___x_2717_, 4);
v_messages_2723_ = lean_ctor_get(v___x_2717_, 6);
v_infoState_2724_ = lean_ctor_get(v___x_2717_, 7);
v_snapshotTasks_2725_ = lean_ctor_get(v___x_2717_, 8);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2791_ == 0)
{
lean_object* v_unused_2792_; 
v_unused_2792_ = lean_ctor_get(v___x_2717_, 5);
lean_dec(v_unused_2792_);
v___x_2727_ = v___x_2717_;
v_isShared_2728_ = v_isSharedCheck_2791_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_snapshotTasks_2725_);
lean_inc(v_infoState_2724_);
lean_inc(v_messages_2723_);
lean_inc(v_traceState_2722_);
lean_inc(v_auxDeclNGen_2721_);
lean_inc(v_ngen_2720_);
lean_inc(v_nextMacroScope_2719_);
lean_inc(v_env_2718_);
lean_dec(v___x_2717_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2791_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2732_; 
v___x_2729_ = l_Lean_ScopedEnvExtension_pushScope___redArg(v___x_2716_, v_env_2718_);
v___x_2730_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__1);
if (v_isShared_2728_ == 0)
{
lean_ctor_set(v___x_2727_, 5, v___x_2730_);
lean_ctor_set(v___x_2727_, 0, v___x_2729_);
v___x_2732_ = v___x_2727_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v___x_2729_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v_nextMacroScope_2719_);
lean_ctor_set(v_reuseFailAlloc_2790_, 2, v_ngen_2720_);
lean_ctor_set(v_reuseFailAlloc_2790_, 3, v_auxDeclNGen_2721_);
lean_ctor_set(v_reuseFailAlloc_2790_, 4, v_traceState_2722_);
lean_ctor_set(v_reuseFailAlloc_2790_, 5, v___x_2730_);
lean_ctor_set(v_reuseFailAlloc_2790_, 6, v_messages_2723_);
lean_ctor_set(v_reuseFailAlloc_2790_, 7, v_infoState_2724_);
lean_ctor_set(v_reuseFailAlloc_2790_, 8, v_snapshotTasks_2725_);
v___x_2732_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v_mctx_2735_; lean_object* v_zetaDeltaFVarIds_2736_; lean_object* v_postponed_2737_; lean_object* v_diag_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2788_; 
v___x_2733_ = lean_st_ref_put(v___y_2714_, v___x_2732_);
v___x_2734_ = lean_st_ref_take(v___y_2712_);
v_mctx_2735_ = lean_ctor_get(v___x_2734_, 0);
v_zetaDeltaFVarIds_2736_ = lean_ctor_get(v___x_2734_, 2);
v_postponed_2737_ = lean_ctor_get(v___x_2734_, 3);
v_diag_2738_ = lean_ctor_get(v___x_2734_, 4);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2788_ == 0)
{
lean_object* v_unused_2789_; 
v_unused_2789_ = lean_ctor_get(v___x_2734_, 1);
lean_dec(v_unused_2789_);
v___x_2740_ = v___x_2734_;
v_isShared_2741_ = v_isSharedCheck_2788_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_diag_2738_);
lean_inc(v_postponed_2737_);
lean_inc(v_zetaDeltaFVarIds_2736_);
lean_inc(v_mctx_2735_);
lean_dec(v___x_2734_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2788_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2742_; lean_object* v___x_2744_; 
v___x_2742_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg___closed__2);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 1, v___x_2742_);
v___x_2744_ = v___x_2740_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_mctx_2735_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v___x_2742_);
lean_ctor_set(v_reuseFailAlloc_2787_, 2, v_zetaDeltaFVarIds_2736_);
lean_ctor_set(v_reuseFailAlloc_2787_, 3, v_postponed_2737_);
lean_ctor_set(v_reuseFailAlloc_2787_, 4, v_diag_2738_);
v___x_2744_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; size_t v_sz_2747_; size_t v___x_2748_; lean_object* v___x_2749_; 
v___x_2745_ = lean_st_ref_put(v___y_2712_, v___x_2744_);
v___x_2746_ = lean_box(0);
v_sz_2747_ = lean_array_size(v_names_2704_);
v___x_2748_ = ((size_t)0ULL);
v___x_2749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__8(v_status_2705_, v_names_2704_, v_sz_2747_, v___x_2748_, v___x_2746_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
if (lean_obj_tag(v___x_2749_) == 0)
{
lean_object* v___x_2750_; 
lean_dec_ref_known(v___x_2749_, 1);
lean_inc(v___y_2714_);
lean_inc_ref(v___y_2713_);
lean_inc(v___y_2712_);
lean_inc_ref(v___y_2711_);
lean_inc(v___y_2710_);
lean_inc_ref(v___y_2709_);
lean_inc(v___y_2708_);
lean_inc_ref(v___y_2707_);
v___x_2750_ = lean_apply_9(v_t_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_, lean_box(0));
if (lean_obj_tag(v___x_2750_) == 0)
{
lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2767_; 
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
v_isSharedCheck_2767_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2753_ = v___x_2750_;
v_isShared_2754_ = v_isSharedCheck_2767_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2750_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2767_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2756_; 
lean_inc(v_a_2751_);
if (v_isShared_2754_ == 0)
{
lean_ctor_set_tag(v___x_2753_, 1);
v___x_2756_ = v___x_2753_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_a_2751_);
v___x_2756_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
lean_object* v___x_2757_; lean_object* v___x_2759_; uint8_t v_isShared_2760_; uint8_t v_isSharedCheck_2764_; 
v___x_2757_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(v___y_2714_, v___x_2716_, v___x_2730_, v___y_2712_, v___x_2742_, v___x_2746_, v___x_2756_);
lean_dec_ref(v___x_2756_);
v_isSharedCheck_2764_ = !lean_is_exclusive(v___x_2757_);
if (v_isSharedCheck_2764_ == 0)
{
lean_object* v_unused_2765_; 
v_unused_2765_ = lean_ctor_get(v___x_2757_, 0);
lean_dec(v_unused_2765_);
v___x_2759_ = v___x_2757_;
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
else
{
lean_dec(v___x_2757_);
v___x_2759_ = lean_box(0);
v_isShared_2760_ = v_isSharedCheck_2764_;
goto v_resetjp_2758_;
}
v_resetjp_2758_:
{
lean_object* v___x_2762_; 
if (v_isShared_2760_ == 0)
{
lean_ctor_set(v___x_2759_, 0, v_a_2751_);
v___x_2762_ = v___x_2759_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2763_; 
v_reuseFailAlloc_2763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2763_, 0, v_a_2751_);
v___x_2762_ = v_reuseFailAlloc_2763_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
return v___x_2762_;
}
}
}
}
}
else
{
lean_object* v_a_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
v_a_2768_ = lean_ctor_get(v___x_2750_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2750_, 1);
v___x_2769_ = lean_box(0);
v___x_2770_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___lam__0(v___y_2714_, v___x_2716_, v___x_2730_, v___y_2712_, v___x_2742_, v___x_2746_, v___x_2769_);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2777_ == 0)
{
lean_object* v_unused_2778_; 
v_unused_2778_ = lean_ctor_get(v___x_2770_, 0);
lean_dec(v_unused_2778_);
v___x_2772_ = v___x_2770_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_dec(v___x_2770_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
lean_ctor_set_tag(v___x_2772_, 1);
lean_ctor_set(v___x_2772_, 0, v_a_2768_);
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2768_);
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
else
{
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
lean_dec_ref(v_t_2706_);
v_a_2779_ = lean_ctor_get(v___x_2749_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2749_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2749_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2749_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2784_; 
if (v_isShared_2782_ == 0)
{
v___x_2784_ = v___x_2781_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2779_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg___boxed(lean_object* v_names_2793_, lean_object* v_status_2794_, lean_object* v_t_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
uint8_t v_status_boxed_2805_; lean_object* v_res_2806_; 
v_status_boxed_2805_ = lean_unbox(v_status_2794_);
v_res_2806_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(v_names_2793_, v_status_boxed_2805_, v_t_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec(v___y_2797_);
lean_dec_ref(v___y_2796_);
lean_dec_ref(v_names_2793_);
return v_res_2806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(lean_object* v_t_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v___x_2810_; lean_object* v_infoState_2811_; uint8_t v_enabled_2812_; 
v___x_2810_ = lean_st_ref_get(v___y_2808_);
v_infoState_2811_ = lean_ctor_get(v___x_2810_, 7);
lean_inc_ref(v_infoState_2811_);
lean_dec(v___x_2810_);
v_enabled_2812_ = lean_ctor_get_uint8(v_infoState_2811_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2811_);
if (v_enabled_2812_ == 0)
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
lean_dec_ref(v_t_2807_);
v___x_2813_ = lean_box(0);
v___x_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2813_);
return v___x_2814_;
}
else
{
lean_object* v___x_2815_; lean_object* v_infoState_2816_; lean_object* v_env_2817_; lean_object* v_nextMacroScope_2818_; lean_object* v_ngen_2819_; lean_object* v_auxDeclNGen_2820_; lean_object* v_traceState_2821_; lean_object* v_cache_2822_; lean_object* v_messages_2823_; lean_object* v_snapshotTasks_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2846_; 
v___x_2815_ = lean_st_ref_take(v___y_2808_);
v_infoState_2816_ = lean_ctor_get(v___x_2815_, 7);
v_env_2817_ = lean_ctor_get(v___x_2815_, 0);
v_nextMacroScope_2818_ = lean_ctor_get(v___x_2815_, 1);
v_ngen_2819_ = lean_ctor_get(v___x_2815_, 2);
v_auxDeclNGen_2820_ = lean_ctor_get(v___x_2815_, 3);
v_traceState_2821_ = lean_ctor_get(v___x_2815_, 4);
v_cache_2822_ = lean_ctor_get(v___x_2815_, 5);
v_messages_2823_ = lean_ctor_get(v___x_2815_, 6);
v_snapshotTasks_2824_ = lean_ctor_get(v___x_2815_, 8);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2826_ = v___x_2815_;
v_isShared_2827_ = v_isSharedCheck_2846_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_snapshotTasks_2824_);
lean_inc(v_infoState_2816_);
lean_inc(v_messages_2823_);
lean_inc(v_cache_2822_);
lean_inc(v_traceState_2821_);
lean_inc(v_auxDeclNGen_2820_);
lean_inc(v_ngen_2819_);
lean_inc(v_nextMacroScope_2818_);
lean_inc(v_env_2817_);
lean_dec(v___x_2815_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2846_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
uint8_t v_enabled_2828_; lean_object* v_assignment_2829_; lean_object* v_lazyAssignment_2830_; lean_object* v_trees_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2845_; 
v_enabled_2828_ = lean_ctor_get_uint8(v_infoState_2816_, sizeof(void*)*3);
v_assignment_2829_ = lean_ctor_get(v_infoState_2816_, 0);
v_lazyAssignment_2830_ = lean_ctor_get(v_infoState_2816_, 1);
v_trees_2831_ = lean_ctor_get(v_infoState_2816_, 2);
v_isSharedCheck_2845_ = !lean_is_exclusive(v_infoState_2816_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2833_ = v_infoState_2816_;
v_isShared_2834_ = v_isSharedCheck_2845_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_trees_2831_);
lean_inc(v_lazyAssignment_2830_);
lean_inc(v_assignment_2829_);
lean_dec(v_infoState_2816_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2845_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2838_; 
v___x_2835_ = lean_box(0);
v___x_2836_ = l_Lean_PersistentArray_push___redArg(v_trees_2831_, v_t_2807_);
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 2, v___x_2836_);
v___x_2838_ = v___x_2833_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_assignment_2829_);
lean_ctor_set(v_reuseFailAlloc_2844_, 1, v_lazyAssignment_2830_);
lean_ctor_set(v_reuseFailAlloc_2844_, 2, v___x_2836_);
lean_ctor_set_uint8(v_reuseFailAlloc_2844_, sizeof(void*)*3, v_enabled_2828_);
v___x_2838_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
lean_object* v___x_2840_; 
if (v_isShared_2827_ == 0)
{
lean_ctor_set(v___x_2826_, 7, v___x_2838_);
v___x_2840_ = v___x_2826_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2843_; 
v_reuseFailAlloc_2843_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2843_, 0, v_env_2817_);
lean_ctor_set(v_reuseFailAlloc_2843_, 1, v_nextMacroScope_2818_);
lean_ctor_set(v_reuseFailAlloc_2843_, 2, v_ngen_2819_);
lean_ctor_set(v_reuseFailAlloc_2843_, 3, v_auxDeclNGen_2820_);
lean_ctor_set(v_reuseFailAlloc_2843_, 4, v_traceState_2821_);
lean_ctor_set(v_reuseFailAlloc_2843_, 5, v_cache_2822_);
lean_ctor_set(v_reuseFailAlloc_2843_, 6, v_messages_2823_);
lean_ctor_set(v_reuseFailAlloc_2843_, 7, v___x_2838_);
lean_ctor_set(v_reuseFailAlloc_2843_, 8, v_snapshotTasks_2824_);
v___x_2840_ = v_reuseFailAlloc_2843_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2841_ = lean_st_ref_put(v___y_2808_, v___x_2840_);
v___x_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2842_, 0, v___x_2835_);
return v___x_2842_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg___boxed(lean_object* v_t_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(v_t_2847_, v___y_2848_);
lean_dec(v___y_2848_);
return v_res_2850_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___x_2851_ = lean_unsigned_to_nat(32u);
v___x_2852_ = lean_mk_empty_array_with_capacity(v___x_2851_);
v___x_2853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
return v___x_2853_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1(void){
_start:
{
size_t v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2854_ = ((size_t)5ULL);
v___x_2855_ = lean_unsigned_to_nat(0u);
v___x_2856_ = lean_unsigned_to_nat(32u);
v___x_2857_ = lean_mk_empty_array_with_capacity(v___x_2856_);
v___x_2858_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__0);
v___x_2859_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
lean_ctor_set(v___x_2859_, 1, v___x_2857_);
lean_ctor_set(v___x_2859_, 2, v___x_2855_);
lean_ctor_set(v___x_2859_, 3, v___x_2855_);
lean_ctor_set_usize(v___x_2859_, 4, v___x_2854_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5(lean_object* v_t_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v___x_2870_; lean_object* v_infoState_2871_; uint8_t v_enabled_2872_; 
v___x_2870_ = lean_st_ref_get(v___y_2868_);
v_infoState_2871_ = lean_ctor_get(v___x_2870_, 7);
lean_inc_ref(v_infoState_2871_);
lean_dec(v___x_2870_);
v_enabled_2872_ = lean_ctor_get_uint8(v_infoState_2871_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2871_);
if (v_enabled_2872_ == 0)
{
lean_object* v___x_2873_; lean_object* v___x_2874_; 
lean_dec_ref(v_t_2860_);
v___x_2873_ = lean_box(0);
v___x_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
return v___x_2874_;
}
else
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2875_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___closed__1);
v___x_2876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2876_, 0, v_t_2860_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(v___x_2876_, v___y_2868_);
return v___x_2877_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5___boxed(lean_object* v_t_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5(v_t_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_);
lean_dec(v___y_2886_);
lean_dec_ref(v___y_2885_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec(v___y_2880_);
lean_dec_ref(v___y_2879_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__11(lean_object* v_a_2889_, lean_object* v_a_2890_){
_start:
{
if (lean_obj_tag(v_a_2889_) == 0)
{
lean_object* v___x_2891_; 
v___x_2891_ = l_List_reverse___redArg(v_a_2890_);
return v___x_2891_;
}
else
{
lean_object* v_head_2892_; lean_object* v_tail_2893_; lean_object* v___x_2895_; uint8_t v_isShared_2896_; uint8_t v_isSharedCheck_2902_; 
v_head_2892_ = lean_ctor_get(v_a_2889_, 0);
v_tail_2893_ = lean_ctor_get(v_a_2889_, 1);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_a_2889_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2895_ = v_a_2889_;
v_isShared_2896_ = v_isSharedCheck_2902_;
goto v_resetjp_2894_;
}
else
{
lean_inc(v_tail_2893_);
lean_inc(v_head_2892_);
lean_dec(v_a_2889_);
v___x_2895_ = lean_box(0);
v_isShared_2896_ = v_isSharedCheck_2902_;
goto v_resetjp_2894_;
}
v_resetjp_2894_:
{
lean_object* v___x_2897_; lean_object* v___x_2899_; 
v___x_2897_ = l_Lean_mkLevelParam(v_head_2892_);
if (v_isShared_2896_ == 0)
{
lean_ctor_set(v___x_2895_, 1, v_a_2890_);
lean_ctor_set(v___x_2895_, 0, v___x_2897_);
v___x_2899_ = v___x_2895_;
goto v_reusejp_2898_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2897_);
lean_ctor_set(v_reuseFailAlloc_2901_, 1, v_a_2890_);
v___x_2899_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2898_;
}
v_reusejp_2898_:
{
v_a_2889_ = v_tail_2893_;
v_a_2890_ = v___x_2899_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(lean_object* v_constName_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_){
_start:
{
lean_object* v_ref_2913_; lean_object* v___x_2914_; 
v_ref_2913_ = lean_ctor_get(v___y_2910_, 2);
v___x_2914_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_2913_, v_constName_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
return v___x_2914_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg___boxed(lean_object* v_constName_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_);
lean_dec(v___y_2923_);
lean_dec_ref(v___y_2922_);
lean_dec(v___y_2921_);
lean_dec_ref(v___y_2920_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10(lean_object* v_constName_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_){
_start:
{
lean_object* v___x_2936_; lean_object* v_env_2937_; uint8_t v___x_2938_; lean_object* v___x_2939_; 
v___x_2936_ = lean_st_ref_get(v___y_2934_);
v_env_2937_ = lean_ctor_get(v___x_2936_, 0);
lean_inc_ref(v_env_2937_);
lean_dec(v___x_2936_);
v___x_2938_ = 0;
lean_inc(v_constName_2926_);
v___x_2939_ = l_Lean_Environment_findConstVal_x3f(v_env_2937_, v_constName_2926_, v___x_2938_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v___x_2940_; 
v___x_2940_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
return v___x_2940_;
}
else
{
lean_object* v_val_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v_constName_2926_);
v_val_2941_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2939_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_val_2941_);
lean_dec(v___x_2939_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
lean_ctor_set_tag(v___x_2943_, 0);
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_val_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10___boxed(lean_object* v_constName_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10(v_constName_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec_ref(v___y_2950_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4(lean_object* v_constName_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_){
_start:
{
lean_object* v___x_2970_; 
lean_inc(v_constName_2960_);
v___x_2970_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10(v_constName_2960_, v___y_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2982_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2982_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2973_ = v___x_2970_;
v_isShared_2974_ = v_isSharedCheck_2982_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_a_2971_);
lean_dec(v___x_2970_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2982_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v_levelParams_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2980_; 
v_levelParams_2975_ = lean_ctor_get(v_a_2971_, 1);
lean_inc(v_levelParams_2975_);
lean_dec(v_a_2971_);
v___x_2976_ = lean_box(0);
v___x_2977_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__11(v_levelParams_2975_, v___x_2976_);
v___x_2978_ = l_Lean_mkConst(v_constName_2960_, v___x_2977_);
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 0, v___x_2978_);
v___x_2980_ = v___x_2973_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v___x_2978_);
v___x_2980_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
return v___x_2980_;
}
}
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec(v_constName_2960_);
v_a_2983_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2970_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2970_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4___boxed(lean_object* v_constName_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4(v_constName_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_, v___y_2999_);
lean_dec(v___y_2999_);
lean_dec_ref(v___y_2998_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
lean_dec(v___y_2995_);
lean_dec_ref(v___y_2994_);
lean_dec(v___y_2993_);
lean_dec_ref(v___y_2992_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2(lean_object* v_stx_3002_, lean_object* v_n_3003_, lean_object* v_expectedType_x3f_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_){
_start:
{
lean_object* v___x_3014_; 
v___x_3014_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4(v_n_3003_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v_a_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; uint8_t v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_a_3015_);
lean_dec_ref_known(v___x_3014_, 1);
v___x_3016_ = lean_box(0);
v___x_3017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3016_);
lean_ctor_set(v___x_3017_, 1, v_stx_3002_);
v___x_3018_ = l_Lean_LocalContext_empty;
v___x_3019_ = 0;
v___x_3020_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3020_, 0, v___x_3017_);
lean_ctor_set(v___x_3020_, 1, v___x_3018_);
lean_ctor_set(v___x_3020_, 2, v_expectedType_x3f_3004_);
lean_ctor_set(v___x_3020_, 3, v_a_3015_);
lean_ctor_set_uint8(v___x_3020_, sizeof(void*)*4, v___x_3019_);
lean_ctor_set_uint8(v___x_3020_, sizeof(void*)*4 + 1, v___x_3019_);
v___x_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3020_);
v___x_3022_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5(v___x_3021_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_);
return v___x_3022_;
}
else
{
lean_object* v_a_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3030_; 
lean_dec(v_expectedType_x3f_3004_);
lean_dec(v_stx_3002_);
v_a_3023_ = lean_ctor_get(v___x_3014_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3025_ = v___x_3014_;
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_a_3023_);
lean_dec(v___x_3014_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3028_; 
if (v_isShared_3026_ == 0)
{
v___x_3028_ = v___x_3025_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3023_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2___boxed(lean_object* v_stx_3031_, lean_object* v_n_3032_, lean_object* v_expectedType_x3f_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2(v_stx_3031_, v_n_3032_, v_expectedType_x3f_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
return v_res_3043_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1(void){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3045_ = ((lean_object*)(l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__0));
v___x_3046_ = l_Lean_stringToMessageData(v___x_3045_);
return v___x_3046_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3(void){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3048_ = ((lean_object*)(l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__2));
v___x_3049_ = l_Lean_stringToMessageData(v___x_3048_);
return v___x_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype(lean_object* v_stx_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v___x_3060_; lean_object* v___x_3061_; uint8_t v___x_3062_; uint8_t v___x_3063_; lean_object* v___x_3064_; 
v___x_3060_ = lean_unsigned_to_nat(1u);
v___x_3061_ = l_Lean_Syntax_getArg(v_stx_3050_, v___x_3060_);
v___x_3062_ = 3;
v___x_3063_ = 1;
v___x_3064_ = l_Lean_Elab_Tactic_elabUnsealingNewtypeConfig___redArg(v___x_3061_, v___x_3062_, v___x_3063_, v___y_3051_, v___y_3057_, v___y_3058_);
if (lean_obj_tag(v___x_3064_) == 0)
{
lean_object* v_a_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v_a_3065_ = lean_ctor_get(v___x_3064_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3064_, 1);
v___x_3066_ = lean_unsigned_to_nat(2u);
v___x_3067_ = l_Lean_Syntax_getArg(v_stx_3050_, v___x_3066_);
lean_inc(v___x_3067_);
v___x_3068_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0(v___x_3067_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v_a_3069_; lean_object* v___x_3070_; lean_object* v_a_3071_; 
v_a_3069_ = lean_ctor_get(v___x_3068_, 0);
lean_inc_n(v_a_3069_, 2);
lean_dec_ref_known(v___x_3068_, 1);
v___x_3070_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__1___redArg(v_a_3069_, v___y_3058_);
v_a_3071_ = lean_ctor_get(v___x_3070_, 0);
lean_inc(v_a_3071_);
lean_dec_ref(v___x_3070_);
if (lean_obj_tag(v_a_3071_) == 1)
{
lean_object* v_val_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v_val_3072_ = lean_ctor_get(v_a_3071_, 0);
lean_inc(v_val_3072_);
lean_dec_ref_known(v_a_3071_, 1);
v___x_3073_ = lean_box(0);
v___x_3074_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2(v___x_3067_, v_a_3069_, v___x_3073_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
if (lean_obj_tag(v___x_3074_) == 0)
{
lean_object* v_typeName_3075_; lean_object* v_ctorName_3076_; lean_object* v_projName_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; uint8_t v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
lean_dec_ref_known(v___x_3074_, 1);
v_typeName_3075_ = lean_ctor_get(v_val_3072_, 0);
lean_inc(v_typeName_3075_);
v_ctorName_3076_ = lean_ctor_get(v_val_3072_, 1);
lean_inc(v_ctorName_3076_);
v_projName_3077_ = lean_ctor_get(v_val_3072_, 2);
lean_inc(v_projName_3077_);
lean_dec(v_val_3072_);
v___x_3078_ = lean_unsigned_to_nat(3u);
v___x_3079_ = lean_mk_empty_array_with_capacity(v___x_3078_);
v___x_3080_ = lean_array_push(v___x_3079_, v_typeName_3075_);
v___x_3081_ = lean_array_push(v___x_3080_, v_ctorName_3076_);
v___x_3082_ = lean_array_push(v___x_3081_, v_projName_3077_);
v___x_3083_ = lean_unbox(v_a_3065_);
lean_dec(v_a_3065_);
v___x_3084_ = l_Lean_Parser_Tactic_UnsealingNewtypeReducibility_toReducibilityStatus(v___x_3083_);
v___x_3085_ = lean_unsigned_to_nat(4u);
v___x_3086_ = l_Lean_Syntax_getArg(v_stx_3050_, v___x_3085_);
v___x_3087_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_3087_, 0, v___x_3086_);
v___x_3088_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(v___x_3082_, v___x_3084_, v___x_3087_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
lean_dec_ref(v___x_3082_);
return v___x_3088_;
}
else
{
lean_dec(v_val_3072_);
lean_dec(v_a_3065_);
return v___x_3074_;
}
}
else
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_dec(v_a_3071_);
lean_dec(v_a_3065_);
v___x_3089_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1, &l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1_once, _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__1);
v___x_3090_ = l_Lean_MessageData_ofName(v_a_3069_);
v___x_3091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3089_);
lean_ctor_set(v___x_3091_, 1, v___x_3090_);
v___x_3092_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3, &l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3_once, _init_l_Lean_Elab_Tactic_evalUnsealingNewtype___closed__3);
v___x_3093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3091_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
v___x_3094_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v___x_3067_, v___x_3093_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_);
lean_dec(v___x_3067_);
return v___x_3094_;
}
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_dec(v___x_3067_);
lean_dec(v_a_3065_);
v_a_3095_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3068_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3068_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
v_a_3103_ = lean_ctor_get(v___x_3064_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3064_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3064_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3064_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingNewtype___boxed(lean_object* v_stx_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_){
_start:
{
lean_object* v_res_3121_; 
v_res_3121_ = l_Lean_Elab_Tactic_evalUnsealingNewtype(v_stx_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_);
lean_dec(v___y_3119_);
lean_dec_ref(v___y_3118_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v_stx_3111_);
return v_res_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7(lean_object* v_declName_3122_, uint8_t v_s_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
lean_object* v___x_3133_; 
v___x_3133_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___redArg(v_declName_3122_, v_s_3123_, v___y_3129_, v___y_3131_);
return v___x_3133_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7___boxed(lean_object* v_declName_3134_, lean_object* v_s_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
uint8_t v_s_boxed_3145_; lean_object* v_res_3146_; 
v_s_boxed_3145_ = lean_unbox(v_s_3135_);
v_res_3146_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3_spec__7(v_declName_3134_, v_s_boxed_3145_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v___y_3139_);
lean_dec_ref(v___y_3138_);
lean_dec(v___y_3137_);
lean_dec_ref(v___y_3136_);
return v_res_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3(lean_object* v_00_u03b1_3147_, lean_object* v_names_3148_, uint8_t v_status_3149_, lean_object* v_t_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___redArg(v_names_3148_, v_status_3149_, v_t_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3___boxed(lean_object* v_00_u03b1_3161_, lean_object* v_names_3162_, lean_object* v_status_3163_, lean_object* v_t_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_){
_start:
{
uint8_t v_status_boxed_3174_; lean_object* v_res_3175_; 
v_status_boxed_3174_ = lean_unbox(v_status_3163_);
v_res_3175_ = l_Lean_Elab_Tactic_unsealingNewtype___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__3(v_00_u03b1_3161_, v_names_3162_, v_status_boxed_3174_, v_t_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
lean_dec(v___y_3170_);
lean_dec_ref(v___y_3169_);
lean_dec(v___y_3168_);
lean_dec_ref(v___y_3167_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec_ref(v_names_3162_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4(lean_object* v_00_u03b1_3176_, lean_object* v_ref_3177_, lean_object* v_msg_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_){
_start:
{
lean_object* v___x_3188_; 
v___x_3188_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___redArg(v_ref_3177_, v_msg_3178_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3188_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4___boxed(lean_object* v_00_u03b1_3189_, lean_object* v_ref_3190_, lean_object* v_msg_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4(v_00_u03b1_3189_, v_ref_3190_, v_msg_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec(v_ref_3190_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13(lean_object* v_t_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_){
_start:
{
lean_object* v___x_3212_; 
v___x_3212_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___redArg(v_t_3202_, v___y_3210_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13___boxed(lean_object* v_t_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__5_spec__13(v_t_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_);
lean_dec(v___y_3221_);
lean_dec_ref(v___y_3220_);
lean_dec(v___y_3219_);
lean_dec_ref(v___y_3218_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10(lean_object* v_00_u03b1_3224_, lean_object* v_msg_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_){
_start:
{
lean_object* v___x_3235_; 
v___x_3235_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___redArg(v_msg_3225_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10___boxed(lean_object* v_00_u03b1_3236_, lean_object* v_msg_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__4_spec__10(v_00_u03b1_3236_, v_msg_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_);
lean_dec(v___y_3245_);
lean_dec_ref(v___y_3244_);
lean_dec(v___y_3243_);
lean_dec_ref(v___y_3242_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec_ref(v___y_3238_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18(lean_object* v_00_u03b1_3248_, lean_object* v_constName_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_){
_start:
{
lean_object* v___x_3259_; 
v___x_3259_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_);
return v___x_3259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18___boxed(lean_object* v_00_u03b1_3260_, lean_object* v_constName_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__2_spec__4_spec__10_spec__18(v_00_u03b1_3260_, v_constName_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec_ref(v___y_3262_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20(lean_object* v_00_u03b1_3272_, lean_object* v_ref_3273_, lean_object* v_constName_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v___x_3284_; 
v___x_3284_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_3273_, v_constName_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20___boxed(lean_object* v_00_u03b1_3285_, lean_object* v_ref_3286_, lean_object* v_constName_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20(v_00_u03b1_3285_, v_ref_3286_, v_constName_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v_ref_3286_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(lean_object* v_opt_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_){
_start:
{
lean_object* v___x_3308_; 
v___x_3308_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v_opt_3298_, v___y_3305_);
return v___x_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___boxed(lean_object* v_opt_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_){
_start:
{
lean_object* v_res_3319_; 
v_res_3319_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(v_opt_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_);
lean_dec(v___y_3317_);
lean_dec_ref(v___y_3316_);
lean_dec(v___y_3315_);
lean_dec_ref(v___y_3314_);
lean_dec(v___y_3313_);
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3311_);
lean_dec_ref(v___y_3310_);
lean_dec_ref(v_opt_3309_);
return v_res_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(lean_object* v_00_u03b1_3320_, lean_object* v_ref_3321_, lean_object* v_msg_3322_, lean_object* v_declHint_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
lean_object* v___x_3333_; 
v___x_3333_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_3321_, v_msg_3322_, v_declHint_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
return v___x_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___boxed(lean_object* v_00_u03b1_3334_, lean_object* v_ref_3335_, lean_object* v_msg_3336_, lean_object* v_declHint_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v_res_3347_; 
v_res_3347_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(v_00_u03b1_3334_, v_ref_3335_, v_msg_3336_, v_declHint_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec(v_ref_3335_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(lean_object* v_msg_3348_, lean_object* v_declHint_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v___x_3359_; 
v___x_3359_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_3348_, v_declHint_3349_, v___y_3357_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___boxed(lean_object* v_msg_3360_, lean_object* v_declHint_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
lean_object* v_res_3371_; 
v_res_3371_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(v_msg_3360_, v_declHint_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_);
lean_dec(v___y_3369_);
lean_dec_ref(v___y_3368_);
lean_dec(v___y_3367_);
lean_dec_ref(v___y_3366_);
lean_dec(v___y_3365_);
lean_dec_ref(v___y_3364_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
return v_res_3371_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(lean_object* v_ref_3372_, lean_object* v_msgData_3373_, uint8_t v_severity_3374_, uint8_t v_isSilent_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
lean_object* v___x_3385_; 
v___x_3385_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_3372_, v_msgData_3373_, v_severity_3374_, v_isSilent_3375_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
return v___x_3385_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___boxed(lean_object* v_ref_3386_, lean_object* v_msgData_3387_, lean_object* v_severity_3388_, lean_object* v_isSilent_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_){
_start:
{
uint8_t v_severity_boxed_3399_; uint8_t v_isSilent_boxed_3400_; lean_object* v_res_3401_; 
v_severity_boxed_3399_ = lean_unbox(v_severity_3388_);
v_isSilent_boxed_3400_ = lean_unbox(v_isSilent_3389_);
v_res_3401_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingNewtype_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(v_ref_3386_, v_msgData_3387_, v_severity_boxed_3399_, v_isSilent_boxed_3400_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_);
lean_dec(v___y_3397_);
lean_dec_ref(v___y_3396_);
lean_dec(v___y_3395_);
lean_dec_ref(v___y_3394_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec(v_ref_3386_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1(){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3415_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3416_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__1));
v___x_3417_ = ((lean_object*)(l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___closed__3));
v___x_3418_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalUnsealingNewtype___boxed), 10, 0);
v___x_3419_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3415_, v___x_3416_, v___x_3417_, v___x_3418_);
return v___x_3419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1___boxed(lean_object* v___y_3420_){
_start:
{
lean_object* v_res_3421_; 
v_res_3421_ = l___private_Lean_Elab_Tactic_NewType_0__Lean_Elab_Tactic_evalUnsealingNewtype___regBuiltin_Lean_Elab_Tactic_evalUnsealingNewtype__1();
return v_res_3421_;
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
