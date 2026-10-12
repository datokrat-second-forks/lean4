// Lean compiler output
// Module: Lean.Elab.Tactic.UnsealingStructure
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
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
extern lean_object* l_Lean_ResolveName_backward_privateInPublic_warn;
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
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
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_shift(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_checkNotBool(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalTerm_checkExpectedNumberOfArguments(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalTerm_withSimpleEvalStx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
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
lean_object* l_Lean_ScopedEnvExtension_popScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
extern lean_object* l_Lean_reducibilityExtraExt;
lean_object* l_Lean_ScopedEnvExtension_pushScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_setLocalReducibilityStatus___redArg(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Environment_getVirtualStructureInfo_x3f(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_LocalContext_empty;
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_popScope___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_pushScope___redArg(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "implicitReducible"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "instanceReducible"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "UnsealingStructureReducibility"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___boxed, .m_arity = 13, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1_value),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__3_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__3_value),LEAN_SCALAR_PTR_LITERAL(245, 119, 243, 151, 189, 11, 137, 135)}};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility;
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "UnsealingStructureConfig"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 214, 195, 32, 65, 173, 25, 1)}};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__6;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Expression contains `sorry`:"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__9_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "reducibility"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 214, 195, 32, 65, 173, 25, 1)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 135, 44, 110, 16, 17, 12, 51)}};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_UnsealingStructureReducibility_toReducibilityStatus(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_UnsealingStructureReducibility_toReducibilityStatus___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__8(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__6(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___boxed(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__0;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__1 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__2 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__3 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__4 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__5 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__6 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__7 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__8 = (const lean_object*)&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__8_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lean.ResolveName"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.ensureNonAmbiguous"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__2_value;
static lean_once_cell_t l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__3;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "ambiguous identifier `"};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "`, possible interpretations: "};
static const lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3_spec__10(lean_object*, lean_object*);
static const lean_array_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__0_value;
static const lean_string_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "expected identifier"};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__1_value;
static const lean_ctor_object l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__1_value)}};
static const lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__2_value;
static lean_once_cell_t l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__15(lean_object*);
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__15___boxed(lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Private declaration `"};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1;
static const lean_string_object l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 167, .m_capacity = 167, .m_length = 166, .m_data = "` accessed publicly; this is allowed only because the `backward.privateInPublic` option is enabled. \n\nDisable `backward.privateInPublic.warn` to silence this warning."};
static const lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2 = (const lean_object*)&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2_value;
static lean_once_cell_t l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3;
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__19(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2___boxed, .m_arity = 10, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_evalUnsealingStructure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Cannot unseal structure `"};
static const lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_evalUnsealingStructure___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsealingStructure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_evalUnsealingStructure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "` because it was defined without the `+defeq` option"};
static const lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_evalUnsealingStructure___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsealingStructure___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unsealingStructure"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(200, 139, 28, 202, 53, 79, 115, 3)}};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "evalUnsealingStructure"};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(243, 201, 55, 190, 87, 28, 31, 146)}};
static const lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__0(lean_object* v_x_1_){
_start:
{
lean_object* v_fst_2_; 
v_fst_2_ = lean_ctor_get(v_x_1_, 0);
lean_inc(v_fst_2_);
return v_fst_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__0___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__0(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__1(lean_object* v___x_5_, lean_object* v_x_6_){
_start:
{
lean_inc(v___x_5_);
return v___x_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__1___boxed(lean_object* v___x_7_, lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__1(v___x_7_, v_x_8_);
lean_dec(v_x_8_);
lean_dec(v___x_7_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__2(lean_object* v_toFunctor_10_, lean_object* v___x_11_, lean_object* v_modifyEnv_12_, lean_object* v_inst_13_, lean_object* v_t_14_, lean_object* v___f_15_, lean_object* v_____s_16_){
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
v___f_20_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_20_, 0, v___x_19_);
v_y_21_ = lean_apply_4(v_inst_13_, lean_box(0), lean_box(0), v_t_14_, v___f_20_);
v___x_22_ = lean_apply_4(v_map_17_, lean_box(0), lean_box(0), v___f_15_, v_y_21_);
return v___x_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__3(lean_object* v___x_23_, lean_object* v_toPure_24_, lean_object* v_____r_25_){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_23_);
v___x_27_ = lean_apply_2(v_toPure_24_, lean_box(0), v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__4(lean_object* v_inst_28_, uint8_t v_status_29_, lean_object* v_toBind_30_, lean_object* v___f_31_, lean_object* v_a_32_, lean_object* v_x_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = l_Lean_setLocalReducibilityStatus___redArg(v_inst_28_, v_a_32_, v_status_29_);
v___x_36_ = lean_apply_4(v_toBind_30_, lean_box(0), lean_box(0), v___x_35_, v___f_31_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__4___boxed(lean_object* v_inst_37_, lean_object* v_status_38_, lean_object* v_toBind_39_, lean_object* v___f_40_, lean_object* v_a_41_, lean_object* v_x_42_, lean_object* v___y_43_){
_start:
{
uint8_t v_status_boxed_44_; lean_object* v_res_45_; 
v_status_boxed_44_ = lean_unbox(v_status_38_);
v_res_45_ = l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__4(v_inst_37_, v_status_boxed_44_, v_toBind_39_, v___f_40_, v_a_41_, v_x_42_, v___y_43_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__5(lean_object* v_toPure_46_, lean_object* v_inst_47_, uint8_t v_status_48_, lean_object* v_toBind_49_, lean_object* v_names_50_, lean_object* v_inst_51_, lean_object* v___f_52_, lean_object* v_____r_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___f_55_; lean_object* v___x_56_; lean_object* v___f_57_; size_t v_sz_58_; size_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_54_ = lean_box(0);
v___f_55_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__3), 3, 2);
lean_closure_set(v___f_55_, 0, v___x_54_);
lean_closure_set(v___f_55_, 1, v_toPure_46_);
v___x_56_ = lean_box(v_status_48_);
lean_inc(v_toBind_49_);
v___f_57_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__4___boxed), 7, 4);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__5___boxed(lean_object* v_toPure_62_, lean_object* v_inst_63_, lean_object* v_status_64_, lean_object* v_toBind_65_, lean_object* v_names_66_, lean_object* v_inst_67_, lean_object* v___f_68_, lean_object* v_____r_69_){
_start:
{
uint8_t v_status_boxed_70_; lean_object* v_res_71_; 
v_status_boxed_70_ = lean_unbox(v_status_64_);
v_res_71_ = l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__5(v_toPure_62_, v_inst_63_, v_status_boxed_70_, v_toBind_65_, v_names_66_, v_inst_67_, v___f_68_, v_____r_69_);
return v_res_71_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__1(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg(lean_object* v_inst_75_, lean_object* v_inst_76_, lean_object* v_inst_77_, lean_object* v_names_78_, uint8_t v_status_79_, lean_object* v_t_80_){
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
v___f_86_ = ((lean_object*)(l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__0));
v___x_87_ = l_Lean_reducibilityExtraExt;
v___x_88_ = lean_obj_once(&l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__1, &l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_unsealingStructure___redArg___closed__1);
lean_inc_n(v_modifyEnv_83_, 2);
v___x_89_ = lean_apply_1(v_modifyEnv_83_, v___x_88_);
lean_inc_ref(v_toFunctor_84_);
v___f_90_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__2), 7, 6);
lean_closure_set(v___f_90_, 0, v_toFunctor_84_);
lean_closure_set(v___f_90_, 1, v___x_87_);
lean_closure_set(v___f_90_, 2, v_modifyEnv_83_);
lean_closure_set(v___f_90_, 3, v_inst_77_);
lean_closure_set(v___f_90_, 4, v_t_80_);
lean_closure_set(v___f_90_, 5, v___f_86_);
v___x_91_ = lean_box(v_status_79_);
v___f_92_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_unsealingStructure___redArg___lam__5___boxed), 8, 7);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___redArg___boxed(lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v_inst_96_, lean_object* v_names_97_, lean_object* v_status_98_, lean_object* v_t_99_){
_start:
{
uint8_t v_status_boxed_100_; lean_object* v_res_101_; 
v_status_boxed_100_ = lean_unbox(v_status_98_);
v_res_101_ = l_Lean_Elab_Tactic_unsealingStructure___redArg(v_inst_94_, v_inst_95_, v_inst_96_, v_names_97_, v_status_boxed_100_, v_t_99_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure(lean_object* v_m_102_, lean_object* v_00_u03b1_103_, lean_object* v_inst_104_, lean_object* v_inst_105_, lean_object* v_inst_106_, lean_object* v_names_107_, uint8_t v_status_108_, lean_object* v_t_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Elab_Tactic_unsealingStructure___redArg(v_inst_104_, v_inst_105_, v_inst_106_, v_names_107_, v_status_108_, v_t_109_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___boxed(lean_object* v_m_111_, lean_object* v_00_u03b1_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_inst_115_, lean_object* v_names_116_, lean_object* v_status_117_, lean_object* v_t_118_){
_start:
{
uint8_t v_status_boxed_119_; lean_object* v_res_120_; 
v_status_boxed_119_ = lean_unbox(v_status_117_);
v_res_120_ = l_Lean_Elab_Tactic_unsealingStructure(v_m_111_, v_00_u03b1_112_, v_inst_113_, v_inst_114_, v_inst_115_, v_names_116_, v_status_boxed_119_, v_t_118_);
return v_res_120_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg(){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___closed__0);
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg___boxed(lean_object* v___y_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg();
return v_res_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0(lean_object* v_00_u03b1_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg();
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___boxed(lean_object* v_00_u03b1_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0(v_00_u03b1_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0(lean_object* v___x_151_, lean_object* v___x_152_, lean_object* v___x_153_, lean_object* v___x_154_, lean_object* v_ctor_155_, lean_object* v_args_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v___x_164_; uint8_t v___x_165_; 
v___x_164_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__0));
v___x_165_ = lean_string_dec_eq(v_ctor_155_, v___x_164_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; uint8_t v___x_167_; 
v___x_166_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__1));
v___x_167_ = lean_string_dec_eq(v_ctor_155_, v___x_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__2));
v___x_169_ = lean_string_dec_eq(v_ctor_155_, v___x_168_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; uint8_t v___x_171_; 
v___x_170_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__3));
v___x_171_ = lean_string_dec_eq(v_ctor_155_, v___x_170_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
lean_dec_ref(v___x_154_);
lean_dec_ref(v___x_153_);
lean_dec_ref(v___x_152_);
lean_dec_ref(v___x_151_);
v___x_172_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm_spec__0___redArg();
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___boxed(lean_object* v___x_269_, lean_object* v___x_270_, lean_object* v___x_271_, lean_object* v___x_272_, lean_object* v_ctor_273_, lean_object* v_args_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0(v___x_269_, v___x_270_, v___x_271_, v___x_272_, v_ctor_273_, v_args_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm(lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___f_305_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__4));
v___x_306_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5));
v___x_307_ = l_Lean_Elab_ConfigEval_EvalTerm_withSimpleEvalStx___redArg(v___x_306_, v___f_305_, v_a_297_, v_a_298_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___boxed(lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm(v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_, v_a_313_, v_a_314_);
lean_dec(v_a_314_);
lean_dec_ref(v_a_313_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
return v_res_316_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_318_ = lean_box(0);
v___x_319_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5));
v___x_320_ = l_Lean_Expr_const___override(v___x_319_, v___x_318_);
return v___x_320_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__2(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1);
v___x_322_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__0));
v___x_323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_322_);
lean_ctor_set(v___x_323_, 1, v___x_321_);
return v___x_323_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility(void){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__2, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__2_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__2);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___closed__0(void){
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg(){
_start:
{
lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_329_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___closed__0);
v___x_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_330_, 0, v___x_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg___boxed(lean_object* v___y_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg();
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0(lean_object* v_00_u03b1_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg();
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___boxed(lean_object* v_00_u03b1_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0(v_00_u03b1_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1(lean_object* v_msgData_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1___boxed(lean_object* v_msgData_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v_res_369_; 
v_res_369_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1(v_msgData_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(lean_object* v_msg_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v_ref_376_; lean_object* v___x_377_; lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_386_; 
v_ref_376_ = lean_ctor_get(v___y_373_, 2);
v___x_377_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1(v_msg_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg___boxed(lean_object* v_msg_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(v_msg_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
return v_res_393_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_395_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__0));
v___x_396_ = l_Lean_stringToMessageData(v___x_395_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0(lean_object* v_ctor_397_, lean_object* v_args_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_420_; uint8_t v___x_421_; 
v___x_420_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__0));
v___x_421_ = lean_string_dec_eq(v_ctor_397_, v___x_420_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; uint8_t v___x_423_; 
v___x_422_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__1));
v___x_423_ = lean_string_dec_eq(v_ctor_397_, v___x_422_);
if (v___x_423_ == 0)
{
lean_object* v___x_424_; uint8_t v___x_425_; 
v___x_424_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__2));
v___x_425_ = lean_string_dec_eq(v_ctor_397_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; uint8_t v___x_427_; 
v___x_426_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___lam__0___closed__3));
v___x_427_ = lean_string_dec_eq(v_ctor_397_, v___x_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; 
v___x_428_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg();
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
v___x_432_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1);
v___x_433_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(v___x_432_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
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
v___x_445_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1);
v___x_446_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(v___x_445_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
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
v___x_458_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1);
v___x_459_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(v___x_458_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
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
v___x_471_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1);
v___x_472_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(v___x_471_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___boxed(lean_object* v_ctor_481_, lean_object* v_args_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0(v_ctor_481_, v_args_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec_ref(v_args_482_);
lean_dec_ref(v_ctor_481_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr(lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_){
_start:
{
lean_object* v___f_496_; lean_object* v___x_497_; lean_object* v___x_498_; 
v___f_496_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___closed__0));
v___x_497_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__5));
v___x_498_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_497_, v___f_496_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___boxed(lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr(v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_);
lean_dec(v_a_503_);
lean_dec_ref(v_a_502_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1(lean_object* v_00_u03b1_506_, lean_object* v_msg_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(v_msg_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___boxed(lean_object* v_00_u03b1_514_, lean_object* v_msg_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1(v_00_u03b1_514_, v_msg_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
return v_res_521_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1(void){
_start:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1);
v___x_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
return v___x_524_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__2(void){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_525_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1);
v___x_526_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__0));
v___x_527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
lean_ctor_set(v___x_527_, 1, v___x_525_);
return v___x_527_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility(void){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__2, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__2_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__2);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0(lean_object* v___x_530_, lean_object* v_ctor_531_, lean_object* v_args_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_558_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0___closed__0));
v___x_559_ = lean_string_dec_eq(v_ctor_531_, v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__0___redArg();
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
v___x_564_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr___lam__0___closed__1);
v___x_565_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1___redArg(v___x_564_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
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
v___x_541_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr(v___x_540_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0___boxed(lean_object* v___x_574_, lean_object* v_ctor_575_, lean_object* v_args_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0(v___x_574_, v_ctor_575_, v_args_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
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
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__0(void){
_start:
{
lean_object* v___x_583_; lean_object* v___f_584_; 
v___x_583_ = l_Lean_instInhabitedExpr;
v___f_584_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___lam__0___boxed), 8, 1);
lean_closure_set(v___f_584_, 0, v___x_583_);
return v___f_584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr(lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
lean_object* v___f_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___f_597_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__0, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__0);
v___x_598_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2));
v___x_599_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_598_, v___f_597_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___boxed(lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr(v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
return v_res_606_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_box(0);
v___x_609_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2));
v___x_610_ = l_Lean_Expr_const___override(v___x_609_, v___x_608_);
return v___x_610_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1);
v___x_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
return v___x_612_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__3(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_613_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2);
v___x_614_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__0));
v___x_615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___x_613_);
return v___x_615_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig(void){
_start:
{
lean_object* v___x_616_; 
v___x_616_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__3, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__3_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__3);
return v___x_616_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0(void){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_box(1);
v___x_618_ = l_Lean_MessageData_ofFormat(v___x_617_);
return v___x_618_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__2));
v___x_623_ = l_Lean_MessageData_ofFormat(v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(lean_object* v_x_624_, lean_object* v_x_625_){
_start:
{
if (lean_obj_tag(v_x_625_) == 0)
{
return v_x_624_;
}
else
{
lean_object* v_head_626_; lean_object* v_tail_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_649_; 
v_head_626_ = lean_ctor_get(v_x_625_, 0);
v_tail_627_ = lean_ctor_get(v_x_625_, 1);
v_isSharedCheck_649_ = !lean_is_exclusive(v_x_625_);
if (v_isSharedCheck_649_ == 0)
{
v___x_629_ = v_x_625_;
v_isShared_630_ = v_isSharedCheck_649_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_tail_627_);
lean_inc(v_head_626_);
lean_dec(v_x_625_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_649_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v_before_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_647_; 
v_before_631_ = lean_ctor_get(v_head_626_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v_head_626_);
if (v_isSharedCheck_647_ == 0)
{
lean_object* v_unused_648_; 
v_unused_648_ = lean_ctor_get(v_head_626_, 1);
lean_dec(v_unused_648_);
v___x_633_ = v_head_626_;
v_isShared_634_ = v_isSharedCheck_647_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_before_631_);
lean_dec(v_head_626_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_647_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_635_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0);
if (v_isShared_634_ == 0)
{
lean_ctor_set_tag(v___x_633_, 7);
lean_ctor_set(v___x_633_, 1, v___x_635_);
lean_ctor_set(v___x_633_, 0, v_x_624_);
v___x_637_ = v___x_633_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_x_624_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v___x_635_);
v___x_637_ = v_reuseFailAlloc_646_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_638_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__3);
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 7);
lean_ctor_set(v___x_629_, 1, v___x_638_);
lean_ctor_set(v___x_629_, 0, v___x_637_);
v___x_640_ = v___x_629_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v___x_638_);
v___x_640_ = v_reuseFailAlloc_645_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_641_ = l_Lean_MessageData_ofSyntax(v_before_631_);
v___x_642_ = l_Lean_indentD(v___x_641_);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_640_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v_x_624_ = v___x_643_;
v_x_625_ = v_tail_627_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(lean_object* v_opts_650_, lean_object* v_opt_651_){
_start:
{
lean_object* v_name_652_; lean_object* v_defValue_653_; lean_object* v_map_654_; lean_object* v___x_655_; 
v_name_652_ = lean_ctor_get(v_opt_651_, 0);
v_defValue_653_ = lean_ctor_get(v_opt_651_, 1);
v_map_654_ = lean_ctor_get(v_opts_650_, 0);
v___x_655_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_654_, v_name_652_);
if (lean_obj_tag(v___x_655_) == 0)
{
uint8_t v___x_656_; 
v___x_656_ = lean_unbox(v_defValue_653_);
return v___x_656_;
}
else
{
lean_object* v_val_657_; 
v_val_657_ = lean_ctor_get(v___x_655_, 0);
lean_inc(v_val_657_);
lean_dec_ref_known(v___x_655_, 1);
if (lean_obj_tag(v_val_657_) == 1)
{
uint8_t v_v_658_; 
v_v_658_ = lean_ctor_get_uint8(v_val_657_, 0);
lean_dec_ref_known(v_val_657_, 0);
return v_v_658_;
}
else
{
uint8_t v___x_659_; 
lean_dec(v_val_657_);
v___x_659_ = lean_unbox(v_defValue_653_);
return v___x_659_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6___boxed(lean_object* v_opts_660_, lean_object* v_opt_661_){
_start:
{
uint8_t v_res_662_; lean_object* v_r_663_; 
v_res_662_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_opts_660_, v_opt_661_);
lean_dec_ref(v_opt_661_);
lean_dec_ref(v_opts_660_);
v_r_663_ = lean_box(v_res_662_);
return v_r_663_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_667_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__1));
v___x_668_ = l_Lean_MessageData_ofFormat(v___x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(lean_object* v_msgData_669_, lean_object* v_macroStack_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_toCold_673_; lean_object* v_options_674_; lean_object* v___x_675_; uint8_t v___x_676_; 
v_toCold_673_ = lean_ctor_get(v___y_671_, 0);
v_options_674_ = lean_ctor_get(v_toCold_673_, 2);
v___x_675_ = l_Lean_Elab_pp_macroStack;
v___x_676_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_674_, v___x_675_);
if (v___x_676_ == 0)
{
lean_object* v___x_677_; 
lean_dec(v_macroStack_670_);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v_msgData_669_);
return v___x_677_;
}
else
{
if (lean_obj_tag(v_macroStack_670_) == 0)
{
lean_object* v___x_678_; 
v___x_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_678_, 0, v_msgData_669_);
return v___x_678_;
}
else
{
lean_object* v_head_679_; lean_object* v_after_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_695_; 
v_head_679_ = lean_ctor_get(v_macroStack_670_, 0);
lean_inc(v_head_679_);
v_after_680_ = lean_ctor_get(v_head_679_, 1);
v_isSharedCheck_695_ = !lean_is_exclusive(v_head_679_);
if (v_isSharedCheck_695_ == 0)
{
lean_object* v_unused_696_; 
v_unused_696_ = lean_ctor_get(v_head_679_, 0);
lean_dec(v_unused_696_);
v___x_682_ = v_head_679_;
v_isShared_683_ = v_isSharedCheck_695_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_after_680_);
lean_dec(v_head_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_695_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_684_; lean_object* v___x_686_; 
v___x_684_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7___closed__0);
if (v_isShared_683_ == 0)
{
lean_ctor_set_tag(v___x_682_, 7);
lean_ctor_set(v___x_682_, 1, v___x_684_);
lean_ctor_set(v___x_682_, 0, v_msgData_669_);
v___x_686_ = v___x_682_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_msgData_669_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v___x_684_);
v___x_686_ = v_reuseFailAlloc_694_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v_msgData_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_687_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___closed__2);
v___x_688_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_686_);
lean_ctor_set(v___x_688_, 1, v___x_687_);
v___x_689_ = l_Lean_MessageData_ofSyntax(v_after_680_);
v___x_690_ = l_Lean_indentD(v___x_689_);
v_msgData_691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_691_, 0, v___x_688_);
lean_ctor_set(v_msgData_691_, 1, v___x_690_);
v___x_692_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__7(v_msgData_691_, v_macroStack_670_);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
return v___x_693_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_msgData_697_, lean_object* v_macroStack_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_msgData_697_, v_macroStack_698_, v___y_699_);
lean_dec_ref(v___y_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(lean_object* v_msg_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v_ref_710_; lean_object* v_macroStack_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v_a_714_; lean_object* v___x_715_; lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_724_; 
v_ref_710_ = lean_ctor_get(v___y_707_, 2);
v_macroStack_711_ = lean_ctor_get(v___y_703_, 1);
v___x_712_ = l_Lean_Elab_getBetterRef(v_ref_710_, v_macroStack_711_);
v___x_713_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1(v_msg_702_, v___y_705_, v___y_706_, v___y_707_, v___y_708_);
v_a_714_ = lean_ctor_get(v___x_713_, 0);
lean_inc(v_a_714_);
lean_dec_ref(v___x_713_);
lean_inc(v_macroStack_711_);
v___x_715_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_a_714_, v_macroStack_711_, v___y_707_);
v_a_716_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_724_ == 0)
{
v___x_718_ = v___x_715_;
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_715_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_724_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_720_; lean_object* v___x_722_; 
v___x_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_712_);
lean_ctor_set(v___x_720_, 1, v_a_716_);
if (v_isShared_719_ == 0)
{
lean_ctor_set_tag(v___x_718_, 1);
lean_ctor_set(v___x_718_, 0, v___x_720_);
v___x_722_ = v___x_718_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v___x_720_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg___boxed(lean_object* v_msg_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(v_msg_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg(lean_object* v_e_734_, lean_object* v___y_735_){
_start:
{
uint8_t v___x_737_; 
v___x_737_ = l_Lean_Expr_hasMVar(v_e_734_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; 
v___x_738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_738_, 0, v_e_734_);
return v___x_738_;
}
else
{
lean_object* v___x_739_; lean_object* v_mctx_740_; lean_object* v___x_741_; lean_object* v_fst_742_; lean_object* v_snd_743_; lean_object* v___x_744_; lean_object* v_cache_745_; lean_object* v_zetaDeltaFVarIds_746_; lean_object* v_postponed_747_; lean_object* v_diag_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_757_; 
v___x_739_ = lean_st_ref_get(v___y_735_);
v_mctx_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc_ref(v_mctx_740_);
lean_dec(v___x_739_);
v___x_741_ = l_Lean_instantiateMVarsCore(v_mctx_740_, v_e_734_);
v_fst_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_fst_742_);
v_snd_743_ = lean_ctor_get(v___x_741_, 1);
lean_inc(v_snd_743_);
lean_dec_ref(v___x_741_);
v___x_744_ = lean_st_ref_take(v___y_735_);
v_cache_745_ = lean_ctor_get(v___x_744_, 1);
v_zetaDeltaFVarIds_746_ = lean_ctor_get(v___x_744_, 2);
v_postponed_747_ = lean_ctor_get(v___x_744_, 3);
v_diag_748_ = lean_ctor_get(v___x_744_, 4);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_757_ == 0)
{
lean_object* v_unused_758_; 
v_unused_758_ = lean_ctor_get(v___x_744_, 0);
lean_dec(v_unused_758_);
v___x_750_ = v___x_744_;
v_isShared_751_ = v_isSharedCheck_757_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_diag_748_);
lean_inc(v_postponed_747_);
lean_inc(v_zetaDeltaFVarIds_746_);
lean_inc(v_cache_745_);
lean_dec(v___x_744_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_757_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v___x_753_; 
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v_snd_743_);
v___x_753_ = v___x_750_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_snd_743_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v_cache_745_);
lean_ctor_set(v_reuseFailAlloc_756_, 2, v_zetaDeltaFVarIds_746_);
lean_ctor_set(v_reuseFailAlloc_756_, 3, v_postponed_747_);
lean_ctor_set(v_reuseFailAlloc_756_, 4, v_diag_748_);
v___x_753_ = v_reuseFailAlloc_756_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = lean_st_ref_put(v___y_735_, v___x_753_);
v___x_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_755_, 0, v_fst_742_);
return v___x_755_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg___boxed(lean_object* v_e_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg(v_e_759_, v___y_760_);
lean_dec(v___y_760_);
return v_res_762_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_box(0);
v___x_764_ = l_Lean_Elab_abortTermExceptionId;
v___x_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
lean_ctor_set(v___x_765_, 1, v___x_763_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg(){
_start:
{
lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_767_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___closed__0);
v___x_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg___boxed(lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg();
return v_res_770_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_772_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__0));
v___x_773_ = l_Lean_stringToMessageData(v___x_772_);
return v___x_773_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__2(void){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__1);
v___x_775_ = l_Lean_MessageData_ofExpr(v___x_774_);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__3(void){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_776_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__2);
v___x_777_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1);
v___x_778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_777_);
lean_ctor_set(v___x_778_, 1, v___x_776_);
return v___x_778_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__4));
v___x_781_ = l_Lean_stringToMessageData(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__6(void){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5);
v___x_783_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__3, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__3_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__3);
v___x_784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
lean_ctor_set(v___x_784_, 1, v___x_782_);
return v___x_784_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8(void){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__7));
v___x_787_ = l_Lean_stringToMessageData(v___x_786_);
return v___x_787_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10(void){
_start:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__9));
v___x_790_ = l_Lean_stringToMessageData(v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1(lean_object* v_stx_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_){
_start:
{
lean_object* v_ty_x3f_799_; uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v_toCold_805_; lean_object* v_currRecDepth_806_; lean_object* v_ref_807_; uint8_t v_diag_808_; uint8_t v_suppressElabErrors_809_; uint8_t v___x_810_; lean_object* v_ref_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_ty_x3f_799_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig___closed__2);
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
v___x_815_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_814_, v_a_795_);
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
v___x_913_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg();
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
if (lean_obj_tag(v___y_823_) == 0)
{
lean_dec_ref_known(v___y_823_, 2);
lean_dec_ref(v___y_824_);
lean_dec(v_a_816_);
return v___y_822_;
}
else
{
lean_object* v_id_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_841_; 
v_id_828_ = lean_ctor_get(v___y_823_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___y_823_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; 
v_unused_842_ = lean_ctor_get(v___y_823_, 1);
lean_dec(v_unused_842_);
v___x_830_ = v___y_823_;
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_id_828_);
lean_dec(v___y_823_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_841_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
uint8_t v___x_832_; 
v___x_832_ = l_Lean_instBEqInternalExceptionId_beq(v___y_819_, v_id_828_);
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
v___x_833_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__6, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__6_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__6);
v___x_834_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8);
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
v___x_839_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_838_, v___y_820_, v___y_821_, v___y_826_, v___y_818_, v___y_824_, v___y_825_);
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
lean_dec_ref(v___y_823_);
lean_dec(v_a_816_);
return v___y_822_;
}
}
v___jp_843_:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_816_);
v___x_851_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr(v_a_816_, v___y_846_, v___y_847_, v___y_848_, v___y_849_);
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
v___y_818_ = v___y_847_;
v___y_819_ = v___x_850_;
v___y_820_ = v___y_844_;
v___y_821_ = v___y_845_;
v___y_822_ = v___x_851_;
v___y_823_ = v_a_852_;
v___y_824_ = v___y_848_;
v___y_825_ = v___y_849_;
v___y_826_ = v___y_846_;
v___y_827_ = v___x_854_;
goto v___jp_817_;
}
else
{
v___y_818_ = v___y_847_;
v___y_819_ = v___x_850_;
v___y_820_ = v___y_844_;
v___y_821_ = v___y_845_;
v___y_822_ = v___x_851_;
v___y_823_ = v_a_852_;
v___y_824_ = v___y_848_;
v___y_825_ = v___y_849_;
v___y_826_ = v___y_846_;
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
v___x_867_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg();
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
v___x_899_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10);
v___x_900_ = l_Lean_indentExpr(v_a_816_);
v___x_901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_901_, 0, v___x_899_);
lean_ctor_set(v___x_901_, 1, v___x_900_);
v___x_902_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_901_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_, v___y_898_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___boxed(lean_object* v_stx_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1(v_stx_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_, v_a_935_, v_a_936_);
lean_dec(v_a_936_);
lean_dec_ref(v_a_935_);
lean_dec(v_a_934_);
lean_dec_ref(v_a_933_);
lean_dec(v_a_932_);
lean_dec_ref(v_a_931_);
return v_res_938_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_939_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility___closed__1);
v___x_940_ = l_Lean_MessageData_ofExpr(v___x_939_);
return v___x_940_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_941_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__0, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__0_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__0);
v___x_942_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__1);
v___x_943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
lean_ctor_set(v___x_943_, 1, v___x_941_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_944_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5);
v___x_945_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__1);
v___x_946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_945_);
lean_ctor_set(v___x_946_, 1, v___x_944_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0(lean_object* v_stx_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_){
_start:
{
lean_object* v_ty_x3f_955_; uint8_t v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v_toCold_961_; lean_object* v_currRecDepth_962_; lean_object* v_ref_963_; uint8_t v_diag_964_; uint8_t v_suppressElabErrors_965_; uint8_t v___x_966_; lean_object* v_ref_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v_ty_x3f_955_ = lean_obj_once(&l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1, &l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1_once, _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility___closed__1);
v___x_956_ = 1;
v___x_957_ = lean_box(0);
v___x_958_ = lean_box(v___x_956_);
v___x_959_ = lean_box(v___x_956_);
lean_inc(v_stx_947_);
v___x_960_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_960_, 0, v_stx_947_);
lean_closure_set(v___x_960_, 1, v_ty_x3f_955_);
lean_closure_set(v___x_960_, 2, v___x_958_);
lean_closure_set(v___x_960_, 3, v___x_959_);
lean_closure_set(v___x_960_, 4, v___x_957_);
v_toCold_961_ = lean_ctor_get(v_a_952_, 0);
v_currRecDepth_962_ = lean_ctor_get(v_a_952_, 1);
v_ref_963_ = lean_ctor_get(v_a_952_, 2);
v_diag_964_ = lean_ctor_get_uint8(v_a_952_, sizeof(void*)*3);
v_suppressElabErrors_965_ = lean_ctor_get_uint8(v_a_952_, sizeof(void*)*3 + 1);
v___x_966_ = 1;
v_ref_967_ = l_Lean_replaceRef(v_stx_947_, v_ref_963_);
lean_dec(v_stx_947_);
lean_inc(v_currRecDepth_962_);
lean_inc_ref(v_toCold_961_);
v___x_968_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_968_, 0, v_toCold_961_);
lean_ctor_set(v___x_968_, 1, v_currRecDepth_962_);
lean_ctor_set(v___x_968_, 2, v_ref_967_);
lean_ctor_set_uint8(v___x_968_, sizeof(void*)*3, v_diag_964_);
lean_ctor_set_uint8(v___x_968_, sizeof(void*)*3 + 1, v_suppressElabErrors_965_);
v___x_969_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_960_, v___x_966_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v___x_968_, v_a_953_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; lean_object* v_a_972_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v___y_976_; lean_object* v___y_977_; lean_object* v___y_978_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_981_; lean_object* v___y_982_; uint8_t v___y_983_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; lean_object* v___y_1005_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1053_; lean_object* v___y_1054_; uint8_t v___x_1067_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg(v_a_970_, v_a_951_);
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref(v___x_971_);
v___x_1067_ = l_Lean_Expr_hasSorry(v_a_972_);
if (v___x_1067_ == 0)
{
v___y_1012_ = v_a_948_;
v___y_1013_ = v_a_949_;
v___y_1014_ = v_a_950_;
v___y_1015_ = v_a_951_;
v___y_1016_ = v___x_968_;
v___y_1017_ = v_a_953_;
goto v___jp_1011_;
}
else
{
uint8_t v___x_1068_; 
v___x_1068_ = l_Lean_Expr_hasSyntheticSorry(v_a_972_);
if (v___x_1068_ == 0)
{
v___y_1049_ = v_a_948_;
v___y_1050_ = v_a_949_;
v___y_1051_ = v_a_950_;
v___y_1052_ = v_a_951_;
v___y_1053_ = v___x_968_;
v___y_1054_ = v_a_953_;
goto v___jp_1048_;
}
else
{
lean_object* v___x_1069_; lean_object* v_a_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
lean_dec(v_a_972_);
lean_dec_ref_known(v___x_968_, 3);
v___x_1069_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_1070_ = lean_ctor_get(v___x_1069_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1069_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1072_ = v___x_1069_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_a_1070_);
lean_dec(v___x_1069_);
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
v___jp_973_:
{
if (v___y_983_ == 0)
{
if (lean_obj_tag(v___y_979_) == 0)
{
lean_dec_ref_known(v___y_979_, 2);
lean_dec_ref(v___y_982_);
lean_dec(v_a_972_);
return v___y_981_;
}
else
{
lean_object* v_id_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_997_; 
v_id_984_ = lean_ctor_get(v___y_979_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___y_979_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v___y_979_, 1);
lean_dec(v_unused_998_);
v___x_986_ = v___y_979_;
v_isShared_987_ = v_isSharedCheck_997_;
goto v_resetjp_985_;
}
else
{
lean_inc(v_id_984_);
lean_dec(v___y_979_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_997_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
uint8_t v___x_988_; 
v___x_988_ = l_Lean_instBEqInternalExceptionId_beq(v___y_975_, v_id_984_);
lean_dec(v_id_984_);
if (v___x_988_ == 0)
{
lean_del_object(v___x_986_);
lean_dec_ref(v___y_982_);
lean_dec(v_a_972_);
return v___y_981_;
}
else
{
lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_993_; 
lean_dec_ref(v___y_981_);
v___x_989_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___closed__2);
v___x_990_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__8);
v___x_991_ = l_Lean_indentExpr(v_a_972_);
if (v_isShared_987_ == 0)
{
lean_ctor_set_tag(v___x_986_, 7);
lean_ctor_set(v___x_986_, 1, v___x_991_);
lean_ctor_set(v___x_986_, 0, v___x_990_);
v___x_993_ = v___x_986_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v___x_991_);
v___x_993_ = v_reuseFailAlloc_996_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_993_);
lean_ctor_set(v___x_994_, 1, v___x_989_);
v___x_995_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_994_, v___y_980_, v___y_974_, v___y_978_, v___y_977_, v___y_982_, v___y_976_);
lean_dec_ref(v___y_982_);
return v___x_995_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_982_);
lean_dec_ref(v___y_979_);
lean_dec(v_a_972_);
return v___y_981_;
}
}
v___jp_999_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1006_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_972_);
v___x_1007_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr(v_a_972_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_dec_ref(v___y_1004_);
lean_dec(v_a_972_);
return v___x_1007_;
}
else
{
lean_object* v_a_1008_; uint8_t v___x_1009_; 
v_a_1008_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1008_);
v___x_1009_ = l_Lean_Exception_isInterrupt(v_a_1008_);
if (v___x_1009_ == 0)
{
uint8_t v___x_1010_; 
lean_inc(v_a_1008_);
v___x_1010_ = l_Lean_Exception_isRuntime(v_a_1008_);
v___y_974_ = v___y_1001_;
v___y_975_ = v___x_1006_;
v___y_976_ = v___y_1005_;
v___y_977_ = v___y_1003_;
v___y_978_ = v___y_1002_;
v___y_979_ = v_a_1008_;
v___y_980_ = v___y_1000_;
v___y_981_ = v___x_1007_;
v___y_982_ = v___y_1004_;
v___y_983_ = v___x_1010_;
goto v___jp_973_;
}
else
{
v___y_974_ = v___y_1001_;
v___y_975_ = v___x_1006_;
v___y_976_ = v___y_1005_;
v___y_977_ = v___y_1003_;
v___y_978_ = v___y_1002_;
v___y_979_ = v_a_1008_;
v___y_980_ = v___y_1000_;
v___y_981_ = v___x_1007_;
v___y_982_ = v___y_1004_;
v___y_983_ = v___x_1009_;
goto v___jp_973_;
}
}
}
v___jp_1011_:
{
lean_object* v___x_1018_; 
lean_inc(v_a_972_);
v___x_1018_ = l_Lean_Meta_getMVars(v_a_972_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1020_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_1019_, v___x_957_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
lean_dec(v_a_1019_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; uint8_t v___x_1022_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref_known(v___x_1020_, 1);
v___x_1022_ = lean_unbox(v_a_1021_);
lean_dec(v_a_1021_);
if (v___x_1022_ == 0)
{
v___y_1000_ = v___y_1012_;
v___y_1001_ = v___y_1013_;
v___y_1002_ = v___y_1014_;
v___y_1003_ = v___y_1015_;
v___y_1004_ = v___y_1016_;
v___y_1005_ = v___y_1017_;
goto v___jp_999_;
}
else
{
lean_object* v___x_1023_; lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
lean_dec_ref(v___y_1016_);
lean_dec(v_a_972_);
v___x_1023_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg();
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1023_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1023_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
lean_dec_ref(v___y_1016_);
lean_dec(v_a_972_);
v_a_1032_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_1020_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1020_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec_ref(v___y_1016_);
lean_dec(v_a_972_);
v_a_1040_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1018_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1018_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
v___jp_1048_:
{
lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
v___x_1055_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__10);
v___x_1056_ = l_Lean_indentExpr(v_a_972_);
v___x_1057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set(v___x_1057_, 1, v___x_1056_);
v___x_1058_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(v___x_1057_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
lean_dec_ref(v___y_1053_);
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1058_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1058_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec_ref_known(v___x_968_, 3);
v_a_1078_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_969_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_969_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object* v_stx_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0(v_stx_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_);
lean_dec(v_a_1092_);
lean_dec_ref(v_a_1091_);
lean_dec(v_a_1090_);
lean_dec_ref(v_a_1089_);
lean_dec(v_a_1088_);
lean_dec_ref(v_a_1087_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0(lean_object* v_stx_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v_toCold_1103_; lean_object* v_currRecDepth_1104_; lean_object* v_ref_1105_; uint8_t v_diag_1106_; uint8_t v_suppressElabErrors_1107_; lean_object* v___x_1108_; lean_object* v_ref_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v_toCold_1103_ = lean_ctor_get(v_a_1100_, 0);
v_currRecDepth_1104_ = lean_ctor_get(v_a_1100_, 1);
v_ref_1105_ = lean_ctor_get(v_a_1100_, 2);
v_diag_1106_ = lean_ctor_get_uint8(v_a_1100_, sizeof(void*)*3);
v_suppressElabErrors_1107_ = lean_ctor_get_uint8(v_a_1100_, sizeof(void*)*3 + 1);
v___x_1108_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v_ref_1109_ = l_Lean_replaceRef(v_stx_1095_, v_ref_1105_);
lean_inc(v_currRecDepth_1104_);
lean_inc_ref(v_toCold_1103_);
v___x_1110_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1110_, 0, v_toCold_1103_);
lean_ctor_set(v___x_1110_, 1, v_currRecDepth_1104_);
lean_ctor_set(v___x_1110_, 2, v_ref_1109_);
lean_ctor_set_uint8(v___x_1110_, sizeof(void*)*3, v_diag_1106_);
lean_ctor_set_uint8(v___x_1110_, sizeof(void*)*3 + 1, v_suppressElabErrors_1107_);
lean_inc(v_stx_1095_);
v___x_1111_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm(v_stx_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v___x_1110_, v_a_1101_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1120_; 
lean_dec_ref_known(v___x_1110_, 3);
lean_dec(v_stx_1095_);
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1114_ = v___x_1111_;
v_isShared_1115_ = v_isSharedCheck_1120_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1111_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1120_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v_fst_1116_; lean_object* v___x_1118_; 
v_fst_1116_ = lean_ctor_get(v_a_1112_, 0);
lean_inc(v_fst_1116_);
lean_dec(v_a_1112_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v_fst_1116_);
v___x_1118_ = v___x_1114_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_fst_1116_);
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
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1135_; 
v_a_1121_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1123_ = v___x_1111_;
v_isShared_1124_ = v_isSharedCheck_1135_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1111_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1135_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
lean_inc(v_a_1121_);
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
uint8_t v___y_1128_; uint8_t v___x_1132_; 
v___x_1132_ = l_Lean_Exception_isInterrupt(v_a_1121_);
if (v___x_1132_ == 0)
{
uint8_t v___x_1133_; 
lean_inc(v_a_1121_);
v___x_1133_ = l_Lean_Exception_isRuntime(v_a_1121_);
v___y_1128_ = v___x_1133_;
goto v___jp_1127_;
}
else
{
v___y_1128_ = v___x_1132_;
goto v___jp_1127_;
}
v___jp_1127_:
{
if (v___y_1128_ == 0)
{
if (lean_obj_tag(v_a_1121_) == 0)
{
lean_dec_ref_known(v_a_1121_, 2);
lean_dec_ref_known(v___x_1110_, 3);
lean_dec(v_stx_1095_);
return v___x_1126_;
}
else
{
lean_object* v_id_1129_; uint8_t v___x_1130_; 
v_id_1129_ = lean_ctor_get(v_a_1121_, 0);
lean_inc(v_id_1129_);
lean_dec_ref_known(v_a_1121_, 2);
v___x_1130_ = l_Lean_instBEqInternalExceptionId_beq(v___x_1108_, v_id_1129_);
lean_dec(v_id_1129_);
if (v___x_1130_ == 0)
{
lean_dec_ref_known(v___x_1110_, 3);
lean_dec(v_stx_1095_);
return v___x_1126_;
}
else
{
lean_object* v___x_1131_; 
lean_dec_ref(v___x_1126_);
v___x_1131_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0_spec__0(v_stx_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v___x_1110_, v_a_1101_);
lean_dec_ref_known(v___x_1110_, 3);
return v___x_1131_;
}
}
}
else
{
lean_dec(v_a_1121_);
lean_dec_ref_known(v___x_1110_, 3);
lean_dec(v_stx_1095_);
return v___x_1126_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_){
_start:
{
lean_object* v_res_1144_; 
v_res_1144_ = l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0(v_stx_1136_, v_a_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_, v_a_1142_);
lean_dec(v_a_1142_);
lean_dec_ref(v_a_1141_);
lean_dec(v_a_1140_);
lean_dec_ref(v_a_1139_);
lean_dec(v_a_1138_);
lean_dec_ref(v_a_1137_);
return v_res_1144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0(uint8_t v_config_1155_, lean_object* v_item_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_item_1165_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2));
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
v___x_1173_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__1));
v___x_1174_ = lean_string_dec_eq(v___x_1171_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__2));
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
v___x_1177_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__3));
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
v___x_1182_ = l_Lean_Elab_ConfigEval_evalTermOrExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__0(v_value_1181_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
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
v___x_1217_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1(v_value_1216_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
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
v___x_1166_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___closed__0));
v___x_1167_ = l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(v_item_1165_, v___x_1166_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0___boxed(lean_object* v_config_1226_, lean_object* v_item_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
uint8_t v_config_4599__boxed_1235_; lean_object* v_res_1236_; 
v_config_4599__boxed_1235_ = lean_unbox(v_config_1226_);
v_res_1236_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___lam__0(v_config_4599__boxed_1235_, v_item_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2(lean_object* v_e_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___redArg(v_e_1239_, v___y_1243_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2___boxed(lean_object* v_e_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__2(v_e_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4(lean_object* v_00_u03b1_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___redArg();
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__4(v_00_u03b1_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec_ref(v___y_1269_);
lean_dec(v___y_1268_);
lean_dec_ref(v___y_1267_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3(lean_object* v_00_u03b1_1275_, lean_object* v_msg_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___redArg(v_msg_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3___boxed(lean_object* v_00_u03b1_1285_, lean_object* v_msg_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3(v_00_u03b1_1285_, v_msg_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4(lean_object* v_msgData_1295_, lean_object* v_macroStack_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1304_; 
v___x_1304_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___redArg(v_msgData_1295_, v_macroStack_1296_, v___y_1301_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4___boxed(lean_object* v_msgData_1305_, lean_object* v_macroStack_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4(v_msgData_1305_, v_macroStack_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
return v_res_1314_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1315_ = lean_box(0);
v___x_1316_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig_evalExpr___closed__2));
v___x_1317_ = l_Lean_mkConst(v___x_1316_, v___x_1315_);
return v___x_1317_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_obj_once(&l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__0);
v___x_1319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0(uint8_t v_cfg_1320_, lean_object* v_cfgItem_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1329_ = lean_obj_once(&l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___closed__1);
v___x_1330_ = lean_box(v_cfg_1320_);
v___x_1331_ = l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(v___x_1330_, v_cfgItem_1321_, v___x_1329_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0___boxed(lean_object* v_cfg_1332_, lean_object* v_cfgItem_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
uint8_t v_cfg_boxed_1341_; lean_object* v_res_1342_; 
v_cfg_boxed_1341_ = lean_unbox(v_cfg_1332_);
v_res_1342_ = l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___lam__0(v_cfg_boxed_1341_, v_cfgItem_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg(lean_object* v_cfg_1344_, uint8_t v_init_1345_, uint8_t v_logExceptions_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_){
_start:
{
lean_object* v_onErr_1351_; lean_object* v_eval_1352_; 
v_onErr_1351_ = ((lean_object*)(l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___closed__0));
v_eval_1352_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem___closed__0));
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg___boxed(lean_object* v_cfg_1358_, lean_object* v_init_1359_, lean_object* v_logExceptions_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_){
_start:
{
uint8_t v_init_boxed_1365_; uint8_t v_logExceptions_boxed_1366_; lean_object* v_res_1367_; 
v_init_boxed_1365_ = lean_unbox(v_init_1359_);
v_logExceptions_boxed_1366_ = lean_unbox(v_logExceptions_1360_);
v_res_1367_ = l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg(v_cfg_1358_, v_init_boxed_1365_, v_logExceptions_boxed_1366_, v_a_1361_, v_a_1362_, v_a_1363_);
lean_dec(v_a_1363_);
lean_dec_ref(v_a_1362_);
lean_dec_ref(v_a_1361_);
return v_res_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig(lean_object* v_cfg_1368_, uint8_t v_init_1369_, uint8_t v_logExceptions_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg(v_cfg_1368_, v_init_1369_, v_logExceptions_1370_, v_a_1371_, v_a_1377_, v_a_1378_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabUnsealingStructureConfig___boxed(lean_object* v_cfg_1381_, lean_object* v_init_1382_, lean_object* v_logExceptions_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_){
_start:
{
uint8_t v_init_boxed_1393_; uint8_t v_logExceptions_boxed_1394_; lean_object* v_res_1395_; 
v_init_boxed_1393_ = lean_unbox(v_init_1382_);
v_logExceptions_boxed_1394_ = lean_unbox(v_logExceptions_1383_);
v_res_1395_ = l_Lean_Elab_Tactic_elabUnsealingStructureConfig(v_cfg_1381_, v_init_boxed_1393_, v_logExceptions_boxed_1394_, v_a_1384_, v_a_1385_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_);
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
LEAN_EXPORT uint8_t l_Lean_Parser_Tactic_UnsealingStructureReducibility_toReducibilityStatus(uint8_t v_x_1396_){
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
LEAN_EXPORT lean_object* l_Lean_Parser_Tactic_UnsealingStructureReducibility_toReducibilityStatus___boxed(lean_object* v_x_1401_){
_start:
{
uint8_t v_x_32__boxed_1402_; uint8_t v_res_1403_; lean_object* v_r_1404_; 
v_x_32__boxed_1402_ = lean_unbox(v_x_1401_);
v_res_1403_ = l_Lean_Parser_Tactic_UnsealingStructureReducibility_toReducibilityStatus(v_x_32__boxed_1402_);
v_r_1404_ = lean_box(v_res_1403_);
return v_r_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___redArg(lean_object* v_typeName_1405_, lean_object* v___y_1406_){
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
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___redArg___boxed(lean_object* v_typeName_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
lean_object* v_res_1415_; 
v_res_1415_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___redArg(v_typeName_1412_, v___y_1413_);
lean_dec(v___y_1413_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1(lean_object* v_typeName_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___redArg(v_typeName_1416_, v___y_1424_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___boxed(lean_object* v_typeName_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1(v_typeName_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___redArg(lean_object* v_msg_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_ref_1444_; lean_object* v___x_1445_; lean_object* v_a_1446_; lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1454_; 
v_ref_1444_ = lean_ctor_get(v___y_1441_, 2);
v___x_1445_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1(v_msg_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1448_ = v___x_1445_;
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
else
{
lean_inc(v_a_1446_);
lean_dec(v___x_1445_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1454_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v___x_1452_; 
lean_inc(v_ref_1444_);
v___x_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1450_, 0, v_ref_1444_);
lean_ctor_set(v___x_1450_, 1, v_a_1446_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set_tag(v___x_1448_, 1);
lean_ctor_set(v___x_1448_, 0, v___x_1450_);
v___x_1452_ = v___x_1448_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1450_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___redArg___boxed(lean_object* v_msg_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___redArg(v_msg_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
return v_res_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(lean_object* v_ref_1462_, lean_object* v_msg_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v_toCold_1473_; lean_object* v_currRecDepth_1474_; lean_object* v_ref_1475_; uint8_t v_diag_1476_; uint8_t v_suppressElabErrors_1477_; lean_object* v_ref_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v_toCold_1473_ = lean_ctor_get(v___y_1470_, 0);
v_currRecDepth_1474_ = lean_ctor_get(v___y_1470_, 1);
v_ref_1475_ = lean_ctor_get(v___y_1470_, 2);
v_diag_1476_ = lean_ctor_get_uint8(v___y_1470_, sizeof(void*)*3);
v_suppressElabErrors_1477_ = lean_ctor_get_uint8(v___y_1470_, sizeof(void*)*3 + 1);
v_ref_1478_ = l_Lean_replaceRef(v_ref_1462_, v_ref_1475_);
lean_inc(v_currRecDepth_1474_);
lean_inc_ref(v_toCold_1473_);
v___x_1479_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1479_, 0, v_toCold_1473_);
lean_ctor_set(v___x_1479_, 1, v_currRecDepth_1474_);
lean_ctor_set(v___x_1479_, 2, v_ref_1478_);
lean_ctor_set_uint8(v___x_1479_, sizeof(void*)*3, v_diag_1476_);
lean_ctor_set_uint8(v___x_1479_, sizeof(void*)*3 + 1, v_suppressElabErrors_1477_);
v___x_1480_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___redArg(v_msg_1463_, v___y_1468_, v___y_1469_, v___x_1479_, v___y_1471_);
lean_dec_ref_known(v___x_1479_, 3);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg___boxed(lean_object* v_ref_1481_, lean_object* v_msg_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(v_ref_1481_, v_msg_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec(v_ref_1481_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___redArg(lean_object* v_t_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v___x_1496_; lean_object* v_infoState_1497_; uint8_t v_enabled_1498_; 
v___x_1496_ = lean_st_ref_get(v___y_1494_);
v_infoState_1497_ = lean_ctor_get(v___x_1496_, 7);
lean_inc_ref(v_infoState_1497_);
lean_dec(v___x_1496_);
v_enabled_1498_ = lean_ctor_get_uint8(v_infoState_1497_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1497_);
if (v_enabled_1498_ == 0)
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
lean_dec_ref(v_t_1493_);
v___x_1499_ = lean_box(0);
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
return v___x_1500_;
}
else
{
lean_object* v___x_1501_; lean_object* v_infoState_1502_; lean_object* v_env_1503_; lean_object* v_nextMacroScope_1504_; lean_object* v_ngen_1505_; lean_object* v_auxDeclNGen_1506_; lean_object* v_traceState_1507_; lean_object* v_cache_1508_; lean_object* v_messages_1509_; lean_object* v_snapshotTasks_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1532_; 
v___x_1501_ = lean_st_ref_take(v___y_1494_);
v_infoState_1502_ = lean_ctor_get(v___x_1501_, 7);
v_env_1503_ = lean_ctor_get(v___x_1501_, 0);
v_nextMacroScope_1504_ = lean_ctor_get(v___x_1501_, 1);
v_ngen_1505_ = lean_ctor_get(v___x_1501_, 2);
v_auxDeclNGen_1506_ = lean_ctor_get(v___x_1501_, 3);
v_traceState_1507_ = lean_ctor_get(v___x_1501_, 4);
v_cache_1508_ = lean_ctor_get(v___x_1501_, 5);
v_messages_1509_ = lean_ctor_get(v___x_1501_, 6);
v_snapshotTasks_1510_ = lean_ctor_get(v___x_1501_, 8);
v_isSharedCheck_1532_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1532_ == 0)
{
v___x_1512_ = v___x_1501_;
v_isShared_1513_ = v_isSharedCheck_1532_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_snapshotTasks_1510_);
lean_inc(v_infoState_1502_);
lean_inc(v_messages_1509_);
lean_inc(v_cache_1508_);
lean_inc(v_traceState_1507_);
lean_inc(v_auxDeclNGen_1506_);
lean_inc(v_ngen_1505_);
lean_inc(v_nextMacroScope_1504_);
lean_inc(v_env_1503_);
lean_dec(v___x_1501_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1532_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
uint8_t v_enabled_1514_; lean_object* v_assignment_1515_; lean_object* v_lazyAssignment_1516_; lean_object* v_trees_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1531_; 
v_enabled_1514_ = lean_ctor_get_uint8(v_infoState_1502_, sizeof(void*)*3);
v_assignment_1515_ = lean_ctor_get(v_infoState_1502_, 0);
v_lazyAssignment_1516_ = lean_ctor_get(v_infoState_1502_, 1);
v_trees_1517_ = lean_ctor_get(v_infoState_1502_, 2);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_infoState_1502_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1519_ = v_infoState_1502_;
v_isShared_1520_ = v_isSharedCheck_1531_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_trees_1517_);
lean_inc(v_lazyAssignment_1516_);
lean_inc(v_assignment_1515_);
lean_dec(v_infoState_1502_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1531_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1524_; 
v___x_1521_ = lean_box(0);
v___x_1522_ = l_Lean_PersistentArray_push___redArg(v_trees_1517_, v_t_1493_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 2, v___x_1522_);
v___x_1524_ = v___x_1519_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_assignment_1515_);
lean_ctor_set(v_reuseFailAlloc_1530_, 1, v_lazyAssignment_1516_);
lean_ctor_set(v_reuseFailAlloc_1530_, 2, v___x_1522_);
lean_ctor_set_uint8(v_reuseFailAlloc_1530_, sizeof(void*)*3, v_enabled_1514_);
v___x_1524_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
lean_object* v___x_1526_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set(v___x_1512_, 7, v___x_1524_);
v___x_1526_ = v___x_1512_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_env_1503_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v_nextMacroScope_1504_);
lean_ctor_set(v_reuseFailAlloc_1529_, 2, v_ngen_1505_);
lean_ctor_set(v_reuseFailAlloc_1529_, 3, v_auxDeclNGen_1506_);
lean_ctor_set(v_reuseFailAlloc_1529_, 4, v_traceState_1507_);
lean_ctor_set(v_reuseFailAlloc_1529_, 5, v_cache_1508_);
lean_ctor_set(v_reuseFailAlloc_1529_, 6, v_messages_1509_);
lean_ctor_set(v_reuseFailAlloc_1529_, 7, v___x_1524_);
lean_ctor_set(v_reuseFailAlloc_1529_, 8, v_snapshotTasks_1510_);
v___x_1526_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_st_ref_put(v___y_1494_, v___x_1526_);
v___x_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1521_);
return v___x_1528_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___redArg___boxed(lean_object* v_t_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___redArg(v_t_1533_, v___y_1534_);
lean_dec(v___y_1534_);
return v_res_1536_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1537_ = lean_unsigned_to_nat(32u);
v___x_1538_ = lean_mk_empty_array_with_capacity(v___x_1537_);
v___x_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
return v___x_1539_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__1(void){
_start:
{
size_t v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1540_ = ((size_t)5ULL);
v___x_1541_ = lean_unsigned_to_nat(0u);
v___x_1542_ = lean_unsigned_to_nat(32u);
v___x_1543_ = lean_mk_empty_array_with_capacity(v___x_1542_);
v___x_1544_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__0);
v___x_1545_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
lean_ctor_set(v___x_1545_, 1, v___x_1543_);
lean_ctor_set(v___x_1545_, 2, v___x_1541_);
lean_ctor_set(v___x_1545_, 3, v___x_1541_);
lean_ctor_set_usize(v___x_1545_, 4, v___x_1540_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5(lean_object* v_t_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v_infoState_1557_; uint8_t v_enabled_1558_; 
v___x_1556_ = lean_st_ref_get(v___y_1554_);
v_infoState_1557_ = lean_ctor_get(v___x_1556_, 7);
lean_inc_ref(v_infoState_1557_);
lean_dec(v___x_1556_);
v_enabled_1558_ = lean_ctor_get_uint8(v_infoState_1557_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1557_);
if (v_enabled_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; 
lean_dec_ref(v_t_1546_);
v___x_1559_ = lean_box(0);
v___x_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1559_);
return v___x_1560_;
}
else
{
lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; 
v___x_1561_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___closed__1);
v___x_1562_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1562_, 0, v_t_1546_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___redArg(v___x_1562_, v___y_1554_);
return v___x_1563_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5___boxed(lean_object* v_t_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_){
_start:
{
lean_object* v_res_1574_; 
v_res_1574_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5(v_t_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_);
lean_dec(v___y_1572_);
lean_dec_ref(v___y_1571_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
return v_res_1574_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0(void){
_start:
{
lean_object* v___x_1575_; 
v___x_1575_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1575_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0);
v___x_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
return v___x_1577_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2(void){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1578_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1);
v___x_1579_ = lean_unsigned_to_nat(0u);
v___x_1580_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
lean_ctor_set(v___x_1580_, 1, v___x_1579_);
lean_ctor_set(v___x_1580_, 2, v___x_1579_);
lean_ctor_set(v___x_1580_, 3, v___x_1579_);
lean_ctor_set(v___x_1580_, 4, v___x_1578_);
lean_ctor_set(v___x_1580_, 5, v___x_1578_);
lean_ctor_set(v___x_1580_, 6, v___x_1578_);
lean_ctor_set(v___x_1580_, 7, v___x_1578_);
lean_ctor_set(v___x_1580_, 8, v___x_1578_);
lean_ctor_set(v___x_1580_, 9, v___x_1578_);
lean_ctor_set(v___x_1580_, 10, v___x_1578_);
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1581_ = lean_unsigned_to_nat(32u);
v___x_1582_ = lean_mk_empty_array_with_capacity(v___x_1581_);
v___x_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1583_, 0, v___x_1582_);
return v___x_1583_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4(void){
_start:
{
size_t v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1584_ = ((size_t)5ULL);
v___x_1585_ = lean_unsigned_to_nat(0u);
v___x_1586_ = lean_unsigned_to_nat(32u);
v___x_1587_ = lean_mk_empty_array_with_capacity(v___x_1586_);
v___x_1588_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__3);
v___x_1589_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1589_, 0, v___x_1588_);
lean_ctor_set(v___x_1589_, 1, v___x_1587_);
lean_ctor_set(v___x_1589_, 2, v___x_1585_);
lean_ctor_set(v___x_1589_, 3, v___x_1585_);
lean_ctor_set_usize(v___x_1589_, 4, v___x_1584_);
return v___x_1589_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5(void){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v___x_1590_ = lean_box(1);
v___x_1591_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__4);
v___x_1592_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__1);
v___x_1593_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
lean_ctor_set(v___x_1593_, 1, v___x_1591_);
lean_ctor_set(v___x_1593_, 2, v___x_1590_);
return v___x_1593_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7(void){
_start:
{
lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1595_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__6));
v___x_1596_ = l_Lean_stringToMessageData(v___x_1595_);
return v___x_1596_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9(void){
_start:
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1598_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__8));
v___x_1599_ = l_Lean_stringToMessageData(v___x_1598_);
return v___x_1599_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11(void){
_start:
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
v___x_1601_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__10));
v___x_1602_ = l_Lean_stringToMessageData(v___x_1601_);
return v___x_1602_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13(void){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__12));
v___x_1605_ = l_Lean_stringToMessageData(v___x_1604_);
return v___x_1605_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15(void){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__14));
v___x_1608_ = l_Lean_stringToMessageData(v___x_1607_);
return v___x_1608_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__16));
v___x_1611_ = l_Lean_stringToMessageData(v___x_1610_);
return v___x_1611_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19(void){
_start:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__18));
v___x_1614_ = l_Lean_stringToMessageData(v___x_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(lean_object* v_msg_1615_, lean_object* v_declHint_1616_, lean_object* v___y_1617_){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v_env_1621_; uint8_t v___x_1622_; 
v___x_1619_ = lean_box(0);
v___x_1620_ = lean_st_ref_get(v___y_1617_);
v_env_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc_ref(v_env_1621_);
lean_dec(v___x_1620_);
v___x_1622_ = l_Lean_Name_isAnonymous(v_declHint_1616_);
if (v___x_1622_ == 0)
{
uint8_t v_isExporting_1623_; 
v_isExporting_1623_ = lean_ctor_get_uint8(v_env_1621_, sizeof(void*)*8);
if (v_isExporting_1623_ == 0)
{
lean_object* v___x_1624_; 
lean_dec_ref(v_env_1621_);
lean_dec(v_declHint_1616_);
v___x_1624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1624_, 0, v_msg_1615_);
return v___x_1624_;
}
else
{
lean_object* v___x_1625_; uint8_t v___x_1626_; 
lean_inc_ref(v_env_1621_);
v___x_1625_ = l_Lean_Environment_setExporting(v_env_1621_, v___x_1622_);
lean_inc(v_declHint_1616_);
lean_inc_ref(v___x_1625_);
v___x_1626_ = l_Lean_Environment_contains(v___x_1625_, v_declHint_1616_, v_isExporting_1623_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; 
lean_dec_ref(v___x_1625_);
lean_dec_ref(v_env_1621_);
lean_dec(v_declHint_1616_);
v___x_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1627_, 0, v_msg_1615_);
return v___x_1627_;
}
else
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v_c_1633_; lean_object* v___x_1634_; 
v___x_1628_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__2);
v___x_1629_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__5);
v___x_1630_ = l_Lean_Options_empty;
v___x_1631_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1625_);
lean_ctor_set(v___x_1631_, 1, v___x_1628_);
lean_ctor_set(v___x_1631_, 2, v___x_1629_);
lean_ctor_set(v___x_1631_, 3, v___x_1630_);
lean_inc(v_declHint_1616_);
v___x_1632_ = l_Lean_MessageData_ofConstName(v_declHint_1616_, v___x_1622_);
v_c_1633_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1633_, 0, v___x_1631_);
lean_ctor_set(v_c_1633_, 1, v___x_1632_);
v___x_1634_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1621_, v_declHint_1616_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
lean_dec_ref(v_env_1621_);
lean_dec(v_declHint_1616_);
v___x_1635_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7);
v___x_1636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
lean_ctor_set(v___x_1636_, 1, v_c_1633_);
v___x_1637_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__9);
v___x_1638_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1636_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
v___x_1639_ = l_Lean_MessageData_note(v___x_1638_);
v___x_1640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1640_, 0, v_msg_1615_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
return v___x_1641_;
}
else
{
lean_object* v_val_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1676_; 
v_val_1642_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1644_ = v___x_1634_;
v_isShared_1645_ = v_isSharedCheck_1676_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_val_1642_);
lean_dec(v___x_1634_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1676_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v_mod_1648_; uint8_t v___x_1649_; 
v___x_1646_ = l_Lean_Environment_header(v_env_1621_);
lean_dec_ref(v_env_1621_);
v___x_1647_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1646_);
v_mod_1648_ = lean_array_get(v___x_1619_, v___x_1647_, v_val_1642_);
lean_dec(v_val_1642_);
lean_dec_ref(v___x_1647_);
v___x_1649_ = l_Lean_isPrivateName(v_declHint_1616_);
lean_dec(v_declHint_1616_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1661_; 
v___x_1650_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__11);
v___x_1651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
lean_ctor_set(v___x_1651_, 1, v_c_1633_);
v___x_1652_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__13);
v___x_1653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
v___x_1654_ = l_Lean_MessageData_ofName(v_mod_1648_);
v___x_1655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__15);
v___x_1657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1655_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
v___x_1658_ = l_Lean_MessageData_note(v___x_1657_);
v___x_1659_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1659_, 0, v_msg_1615_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1659_);
v___x_1661_ = v___x_1644_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1659_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
else
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1674_; 
v___x_1663_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__7);
v___x_1664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1664_, 0, v___x_1663_);
lean_ctor_set(v___x_1664_, 1, v_c_1633_);
v___x_1665_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__17);
v___x_1666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1666_, 0, v___x_1664_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
v___x_1667_ = l_Lean_MessageData_ofName(v_mod_1648_);
v___x_1668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1666_);
lean_ctor_set(v___x_1668_, 1, v___x_1667_);
v___x_1669_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__19);
v___x_1670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = l_Lean_MessageData_note(v___x_1670_);
v___x_1672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1672_, 0, v_msg_1615_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1672_);
v___x_1674_ = v___x_1644_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1677_; 
lean_dec_ref(v_env_1621_);
lean_dec(v_declHint_1616_);
v___x_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1677_, 0, v_msg_1615_);
return v___x_1677_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___boxed(lean_object* v_msg_1678_, lean_object* v_declHint_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_){
_start:
{
lean_object* v_res_1682_; 
v_res_1682_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_1678_, v_declHint_1679_, v___y_1680_);
lean_dec(v___y_1680_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(lean_object* v_msg_1683_, lean_object* v_declHint_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
lean_object* v___x_1694_; lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1704_; 
v___x_1694_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_1683_, v_declHint_1684_, v___y_1692_);
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1704_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1704_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1702_; 
v___x_1699_ = l_Lean_unknownIdentifierMessageTag;
v___x_1700_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1699_);
lean_ctor_set(v___x_1700_, 1, v_a_1695_);
if (v_isShared_1698_ == 0)
{
lean_ctor_set(v___x_1697_, 0, v___x_1700_);
v___x_1702_ = v___x_1697_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v___x_1700_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33___boxed(lean_object* v_msg_1705_, lean_object* v_declHint_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(v_msg_1705_, v_declHint_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(lean_object* v_ref_1717_, lean_object* v_msg_1718_, lean_object* v_declHint_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_){
_start:
{
lean_object* v___x_1729_; lean_object* v_a_1730_; lean_object* v___x_1731_; 
v___x_1729_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33(v_msg_1718_, v_declHint_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref(v___x_1729_);
v___x_1731_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(v_ref_1717_, v_a_1730_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_);
return v___x_1731_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg___boxed(lean_object* v_ref_1732_, lean_object* v_msg_1733_, lean_object* v_declHint_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_1732_, v_msg_1733_, v_declHint_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
lean_dec(v_ref_1732_);
return v_res_1744_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__0));
v___x_1747_ = l_Lean_stringToMessageData(v___x_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(lean_object* v_ref_1748_, lean_object* v_constName_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_){
_start:
{
lean_object* v___x_1759_; uint8_t v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1759_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___closed__1);
v___x_1760_ = 0;
lean_inc(v_constName_1749_);
v___x_1761_ = l_Lean_MessageData_ofConstName(v_constName_1749_, v___x_1760_);
v___x_1762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1762_, 0, v___x_1759_);
lean_ctor_set(v___x_1762_, 1, v___x_1761_);
v___x_1763_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1___closed__5);
v___x_1764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1762_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
v___x_1765_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_1748_, v___x_1764_, v_constName_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
return v___x_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg___boxed(lean_object* v_ref_1766_, lean_object* v_constName_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_1766_, v_constName_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
lean_dec(v_ref_1766_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___redArg(lean_object* v_constName_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_ref_1788_; lean_object* v___x_1789_; 
v_ref_1788_ = lean_ctor_get(v___y_1785_, 2);
v___x_1789_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_1788_, v_constName_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___redArg___boxed(lean_object* v_constName_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_);
lean_dec(v___y_1798_);
lean_dec_ref(v___y_1797_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10(lean_object* v_constName_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v___x_1811_; lean_object* v_env_1812_; uint8_t v___x_1813_; lean_object* v___x_1814_; 
v___x_1811_ = lean_st_ref_get(v___y_1809_);
v_env_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc_ref(v_env_1812_);
lean_dec(v___x_1811_);
v___x_1813_ = 0;
lean_inc(v_constName_1801_);
v___x_1814_ = l_Lean_Environment_findConstVal_x3f(v_env_1812_, v_constName_1801_, v___x_1813_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v___x_1815_; 
v___x_1815_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_);
return v___x_1815_;
}
else
{
lean_object* v_val_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
lean_dec(v_constName_1801_);
v_val_1816_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1814_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_val_1816_);
lean_dec(v___x_1814_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set_tag(v___x_1818_, 0);
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_val_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10___boxed(lean_object* v_constName_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10(v_constName_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__11(lean_object* v_a_1835_, lean_object* v_a_1836_){
_start:
{
if (lean_obj_tag(v_a_1835_) == 0)
{
lean_object* v___x_1837_; 
v___x_1837_ = l_List_reverse___redArg(v_a_1836_);
return v___x_1837_;
}
else
{
lean_object* v_head_1838_; lean_object* v_tail_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_1848_; 
v_head_1838_ = lean_ctor_get(v_a_1835_, 0);
v_tail_1839_ = lean_ctor_get(v_a_1835_, 1);
v_isSharedCheck_1848_ = !lean_is_exclusive(v_a_1835_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1841_ = v_a_1835_;
v_isShared_1842_ = v_isSharedCheck_1848_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_tail_1839_);
lean_inc(v_head_1838_);
lean_dec(v_a_1835_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_1848_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1845_; 
v___x_1843_ = l_Lean_mkLevelParam(v_head_1838_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v_a_1836_);
lean_ctor_set(v___x_1841_, 0, v___x_1843_);
v___x_1845_ = v___x_1841_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v___x_1843_);
lean_ctor_set(v_reuseFailAlloc_1847_, 1, v_a_1836_);
v___x_1845_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
v_a_1835_ = v_tail_1839_;
v_a_1836_ = v___x_1845_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4(lean_object* v_constName_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_){
_start:
{
lean_object* v___x_1859_; 
lean_inc(v_constName_1849_);
v___x_1859_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10(v_constName_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1871_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1862_ = v___x_1859_;
v_isShared_1863_ = v_isSharedCheck_1871_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1859_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1871_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v_levelParams_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1869_; 
v_levelParams_1864_ = lean_ctor_get(v_a_1860_, 1);
lean_inc(v_levelParams_1864_);
lean_dec(v_a_1860_);
v___x_1865_ = lean_box(0);
v___x_1866_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__11(v_levelParams_1864_, v___x_1865_);
v___x_1867_ = l_Lean_mkConst(v_constName_1849_, v___x_1866_);
if (v_isShared_1863_ == 0)
{
lean_ctor_set(v___x_1862_, 0, v___x_1867_);
v___x_1869_ = v___x_1862_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_dec(v_constName_1849_);
v_a_1872_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1859_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1859_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4___boxed(lean_object* v_constName_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4(v_constName_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2(lean_object* v_stx_1891_, lean_object* v_n_1892_, lean_object* v_expectedType_x3f_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v___x_1903_; 
v___x_1903_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4(v_n_1892_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
if (lean_obj_tag(v___x_1903_) == 0)
{
lean_object* v_a_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v_a_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc(v_a_1904_);
lean_dec_ref_known(v___x_1903_, 1);
v___x_1905_ = lean_box(0);
v___x_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1906_, 0, v___x_1905_);
lean_ctor_set(v___x_1906_, 1, v_stx_1891_);
v___x_1907_ = l_Lean_LocalContext_empty;
v___x_1908_ = 0;
v___x_1909_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1909_, 0, v___x_1906_);
lean_ctor_set(v___x_1909_, 1, v___x_1907_);
lean_ctor_set(v___x_1909_, 2, v_expectedType_x3f_1893_);
lean_ctor_set(v___x_1909_, 3, v_a_1904_);
lean_ctor_set_uint8(v___x_1909_, sizeof(void*)*4, v___x_1908_);
lean_ctor_set_uint8(v___x_1909_, sizeof(void*)*4 + 1, v___x_1908_);
v___x_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1910_, 0, v___x_1909_);
v___x_1911_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5(v___x_1910_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
return v___x_1911_;
}
else
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1919_; 
lean_dec(v_expectedType_x3f_1893_);
lean_dec(v_stx_1891_);
v_a_1912_ = lean_ctor_get(v___x_1903_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v___x_1903_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1914_ = v___x_1903_;
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1903_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1919_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1917_; 
if (v_isShared_1915_ == 0)
{
v___x_1917_ = v___x_1914_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1912_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2___boxed(lean_object* v_stx_1920_, lean_object* v_n_1921_, lean_object* v_expectedType_x3f_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2(v_stx_1920_, v_n_1921_, v_expectedType_x3f_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v___y_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___lam__0(lean_object* v___y_1933_, lean_object* v___x_1934_, lean_object* v___x_1935_, lean_object* v___y_1936_, lean_object* v___x_1937_, lean_object* v___x_1938_, lean_object* v_a_x3f_1939_){
_start:
{
lean_object* v___x_1941_; lean_object* v_env_1942_; lean_object* v_nextMacroScope_1943_; lean_object* v_ngen_1944_; lean_object* v_auxDeclNGen_1945_; lean_object* v_traceState_1946_; lean_object* v_messages_1947_; lean_object* v_infoState_1948_; lean_object* v_snapshotTasks_1949_; lean_object* v___x_1951_; uint8_t v_isShared_1952_; uint8_t v_isSharedCheck_1973_; 
v___x_1941_ = lean_st_ref_take(v___y_1933_);
v_env_1942_ = lean_ctor_get(v___x_1941_, 0);
v_nextMacroScope_1943_ = lean_ctor_get(v___x_1941_, 1);
v_ngen_1944_ = lean_ctor_get(v___x_1941_, 2);
v_auxDeclNGen_1945_ = lean_ctor_get(v___x_1941_, 3);
v_traceState_1946_ = lean_ctor_get(v___x_1941_, 4);
v_messages_1947_ = lean_ctor_get(v___x_1941_, 6);
v_infoState_1948_ = lean_ctor_get(v___x_1941_, 7);
v_snapshotTasks_1949_ = lean_ctor_get(v___x_1941_, 8);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1973_ == 0)
{
lean_object* v_unused_1974_; 
v_unused_1974_ = lean_ctor_get(v___x_1941_, 5);
lean_dec(v_unused_1974_);
v___x_1951_ = v___x_1941_;
v_isShared_1952_ = v_isSharedCheck_1973_;
goto v_resetjp_1950_;
}
else
{
lean_inc(v_snapshotTasks_1949_);
lean_inc(v_infoState_1948_);
lean_inc(v_messages_1947_);
lean_inc(v_traceState_1946_);
lean_inc(v_auxDeclNGen_1945_);
lean_inc(v_ngen_1944_);
lean_inc(v_nextMacroScope_1943_);
lean_inc(v_env_1942_);
lean_dec(v___x_1941_);
v___x_1951_ = lean_box(0);
v_isShared_1952_ = v_isSharedCheck_1973_;
goto v_resetjp_1950_;
}
v_resetjp_1950_:
{
lean_object* v___x_1953_; lean_object* v___x_1955_; 
v___x_1953_ = l_Lean_ScopedEnvExtension_popScope___redArg(v___x_1934_, v_env_1942_);
if (v_isShared_1952_ == 0)
{
lean_ctor_set(v___x_1951_, 5, v___x_1935_);
lean_ctor_set(v___x_1951_, 0, v___x_1953_);
v___x_1955_ = v___x_1951_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1953_);
lean_ctor_set(v_reuseFailAlloc_1972_, 1, v_nextMacroScope_1943_);
lean_ctor_set(v_reuseFailAlloc_1972_, 2, v_ngen_1944_);
lean_ctor_set(v_reuseFailAlloc_1972_, 3, v_auxDeclNGen_1945_);
lean_ctor_set(v_reuseFailAlloc_1972_, 4, v_traceState_1946_);
lean_ctor_set(v_reuseFailAlloc_1972_, 5, v___x_1935_);
lean_ctor_set(v_reuseFailAlloc_1972_, 6, v_messages_1947_);
lean_ctor_set(v_reuseFailAlloc_1972_, 7, v_infoState_1948_);
lean_ctor_set(v_reuseFailAlloc_1972_, 8, v_snapshotTasks_1949_);
v___x_1955_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v_mctx_1958_; lean_object* v_zetaDeltaFVarIds_1959_; lean_object* v_postponed_1960_; lean_object* v_diag_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1970_; 
v___x_1956_ = lean_st_ref_put(v___y_1933_, v___x_1955_);
v___x_1957_ = lean_st_ref_take(v___y_1936_);
v_mctx_1958_ = lean_ctor_get(v___x_1957_, 0);
v_zetaDeltaFVarIds_1959_ = lean_ctor_get(v___x_1957_, 2);
v_postponed_1960_ = lean_ctor_get(v___x_1957_, 3);
v_diag_1961_ = lean_ctor_get(v___x_1957_, 4);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1970_ == 0)
{
lean_object* v_unused_1971_; 
v_unused_1971_ = lean_ctor_get(v___x_1957_, 1);
lean_dec(v_unused_1971_);
v___x_1963_ = v___x_1957_;
v_isShared_1964_ = v_isSharedCheck_1970_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_diag_1961_);
lean_inc(v_postponed_1960_);
lean_inc(v_zetaDeltaFVarIds_1959_);
lean_inc(v_mctx_1958_);
lean_dec(v___x_1957_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1970_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 1, v___x_1937_);
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_mctx_1958_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v___x_1937_);
lean_ctor_set(v_reuseFailAlloc_1969_, 2, v_zetaDeltaFVarIds_1959_);
lean_ctor_set(v_reuseFailAlloc_1969_, 3, v_postponed_1960_);
lean_ctor_set(v_reuseFailAlloc_1969_, 4, v_diag_1961_);
v___x_1966_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = lean_st_ref_put(v___y_1936_, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1938_);
return v___x_1968_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___lam__0___boxed(lean_object* v___y_1975_, lean_object* v___x_1976_, lean_object* v___x_1977_, lean_object* v___y_1978_, lean_object* v___x_1979_, lean_object* v___x_1980_, lean_object* v_a_x3f_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___lam__0(v___y_1975_, v___x_1976_, v___x_1977_, v___y_1978_, v___x_1979_, v___x_1980_, v_a_x3f_1981_);
lean_dec(v_a_x3f_1981_);
lean_dec(v___y_1978_);
lean_dec(v___y_1975_);
return v_res_1983_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg___closed__0);
v___x_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1985_, 0, v___x_1984_);
return v___x_1985_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1986_; lean_object* v___x_1987_; 
v___x_1986_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0);
v___x_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1986_);
lean_ctor_set(v___x_1987_, 1, v___x_1986_);
return v___x_1987_;
}
}
static lean_object* _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__0);
v___x_1989_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1989_, 0, v___x_1988_);
lean_ctor_set(v___x_1989_, 1, v___x_1988_);
lean_ctor_set(v___x_1989_, 2, v___x_1988_);
lean_ctor_set(v___x_1989_, 3, v___x_1988_);
lean_ctor_set(v___x_1989_, 4, v___x_1988_);
lean_ctor_set(v___x_1989_, 5, v___x_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg(lean_object* v_declName_1990_, uint8_t v_s_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v___x_1995_; lean_object* v_env_1996_; lean_object* v_nextMacroScope_1997_; lean_object* v_ngen_1998_; lean_object* v_auxDeclNGen_1999_; lean_object* v_traceState_2000_; lean_object* v_messages_2001_; lean_object* v_infoState_2002_; lean_object* v_snapshotTasks_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2032_; 
v___x_1995_ = lean_st_ref_take(v___y_1993_);
v_env_1996_ = lean_ctor_get(v___x_1995_, 0);
v_nextMacroScope_1997_ = lean_ctor_get(v___x_1995_, 1);
v_ngen_1998_ = lean_ctor_get(v___x_1995_, 2);
v_auxDeclNGen_1999_ = lean_ctor_get(v___x_1995_, 3);
v_traceState_2000_ = lean_ctor_get(v___x_1995_, 4);
v_messages_2001_ = lean_ctor_get(v___x_1995_, 6);
v_infoState_2002_ = lean_ctor_get(v___x_1995_, 7);
v_snapshotTasks_2003_ = lean_ctor_get(v___x_1995_, 8);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_1995_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; 
v_unused_2033_ = lean_ctor_get(v___x_1995_, 5);
lean_dec(v_unused_2033_);
v___x_2005_ = v___x_1995_;
v_isShared_2006_ = v_isSharedCheck_2032_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_snapshotTasks_2003_);
lean_inc(v_infoState_2002_);
lean_inc(v_messages_2001_);
lean_inc(v_traceState_2000_);
lean_inc(v_auxDeclNGen_1999_);
lean_inc(v_ngen_1998_);
lean_inc(v_nextMacroScope_1997_);
lean_inc(v_env_1996_);
lean_dec(v___x_1995_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2032_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
uint8_t v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2012_; 
v___x_2007_ = 1;
v___x_2008_ = lean_box(0);
v___x_2009_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_1996_, v_declName_1990_, v_s_1991_, v___x_2007_, v___x_2008_);
v___x_2010_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 5, v___x_2010_);
lean_ctor_set(v___x_2005_, 0, v___x_2009_);
v___x_2012_ = v___x_2005_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_2009_);
lean_ctor_set(v_reuseFailAlloc_2031_, 1, v_nextMacroScope_1997_);
lean_ctor_set(v_reuseFailAlloc_2031_, 2, v_ngen_1998_);
lean_ctor_set(v_reuseFailAlloc_2031_, 3, v_auxDeclNGen_1999_);
lean_ctor_set(v_reuseFailAlloc_2031_, 4, v_traceState_2000_);
lean_ctor_set(v_reuseFailAlloc_2031_, 5, v___x_2010_);
lean_ctor_set(v_reuseFailAlloc_2031_, 6, v_messages_2001_);
lean_ctor_set(v_reuseFailAlloc_2031_, 7, v_infoState_2002_);
lean_ctor_set(v_reuseFailAlloc_2031_, 8, v_snapshotTasks_2003_);
v___x_2012_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v_mctx_2015_; lean_object* v_zetaDeltaFVarIds_2016_; lean_object* v_postponed_2017_; lean_object* v_diag_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2029_; 
v___x_2013_ = lean_st_ref_put(v___y_1993_, v___x_2012_);
v___x_2014_ = lean_st_ref_take(v___y_1992_);
v_mctx_2015_ = lean_ctor_get(v___x_2014_, 0);
v_zetaDeltaFVarIds_2016_ = lean_ctor_get(v___x_2014_, 2);
v_postponed_2017_ = lean_ctor_get(v___x_2014_, 3);
v_diag_2018_ = lean_ctor_get(v___x_2014_, 4);
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2029_ == 0)
{
lean_object* v_unused_2030_; 
v_unused_2030_ = lean_ctor_get(v___x_2014_, 1);
lean_dec(v_unused_2030_);
v___x_2020_ = v___x_2014_;
v_isShared_2021_ = v_isSharedCheck_2029_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_diag_2018_);
lean_inc(v_postponed_2017_);
lean_inc(v_zetaDeltaFVarIds_2016_);
lean_inc(v_mctx_2015_);
lean_dec(v___x_2014_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2029_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2022_ = lean_box(0);
v___x_2023_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 1, v___x_2023_);
v___x_2025_ = v___x_2020_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v_mctx_2015_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v___x_2023_);
lean_ctor_set(v_reuseFailAlloc_2028_, 2, v_zetaDeltaFVarIds_2016_);
lean_ctor_set(v_reuseFailAlloc_2028_, 3, v_postponed_2017_);
lean_ctor_set(v_reuseFailAlloc_2028_, 4, v_diag_2018_);
v___x_2025_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = lean_st_ref_put(v___y_1992_, v___x_2025_);
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2022_);
return v___x_2027_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___boxed(lean_object* v_declName_2034_, lean_object* v_s_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_){
_start:
{
uint8_t v_s_boxed_2039_; lean_object* v_res_2040_; 
v_s_boxed_2039_ = lean_unbox(v_s_2035_);
v_res_2040_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg(v_declName_2034_, v_s_boxed_2039_, v___y_2036_, v___y_2037_);
lean_dec(v___y_2037_);
lean_dec(v___y_2036_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__8(uint8_t v_status_2041_, lean_object* v_as_2042_, size_t v_sz_2043_, size_t v_i_2044_, lean_object* v_b_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
uint8_t v___x_2055_; 
v___x_2055_ = lean_usize_dec_lt(v_i_2044_, v_sz_2043_);
if (v___x_2055_ == 0)
{
lean_object* v___x_2056_; 
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_b_2045_);
return v___x_2056_;
}
else
{
lean_object* v___x_2057_; lean_object* v_a_2058_; lean_object* v___x_2059_; 
v___x_2057_ = lean_box(0);
v_a_2058_ = lean_array_uget_borrowed(v_as_2042_, v_i_2044_);
lean_inc(v_a_2058_);
v___x_2059_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg(v_a_2058_, v_status_2041_, v___y_2051_, v___y_2053_);
if (lean_obj_tag(v___x_2059_) == 0)
{
size_t v___x_2060_; size_t v___x_2061_; 
lean_dec_ref_known(v___x_2059_, 1);
v___x_2060_ = ((size_t)1ULL);
v___x_2061_ = lean_usize_add(v_i_2044_, v___x_2060_);
v_i_2044_ = v___x_2061_;
v_b_2045_ = v___x_2057_;
goto _start;
}
else
{
return v___x_2059_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__8___boxed(lean_object* v_status_2063_, lean_object* v_as_2064_, lean_object* v_sz_2065_, lean_object* v_i_2066_, lean_object* v_b_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_){
_start:
{
uint8_t v_status_boxed_2077_; size_t v_sz_boxed_2078_; size_t v_i_boxed_2079_; lean_object* v_res_2080_; 
v_status_boxed_2077_ = lean_unbox(v_status_2063_);
v_sz_boxed_2078_ = lean_unbox_usize(v_sz_2065_);
lean_dec(v_sz_2065_);
v_i_boxed_2079_ = lean_unbox_usize(v_i_2066_);
lean_dec(v_i_2066_);
v_res_2080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__8(v_status_boxed_2077_, v_as_2064_, v_sz_boxed_2078_, v_i_boxed_2079_, v_b_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_);
lean_dec(v___y_2075_);
lean_dec_ref(v___y_2074_);
lean_dec(v___y_2073_);
lean_dec_ref(v___y_2072_);
lean_dec(v___y_2071_);
lean_dec_ref(v___y_2070_);
lean_dec(v___y_2069_);
lean_dec_ref(v___y_2068_);
lean_dec_ref(v_as_2064_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg(lean_object* v_names_2081_, uint8_t v_status_2082_, lean_object* v_t_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v_env_2095_; lean_object* v_nextMacroScope_2096_; lean_object* v_ngen_2097_; lean_object* v_auxDeclNGen_2098_; lean_object* v_traceState_2099_; lean_object* v_messages_2100_; lean_object* v_infoState_2101_; lean_object* v_snapshotTasks_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2168_; 
v___x_2093_ = l_Lean_reducibilityExtraExt;
v___x_2094_ = lean_st_ref_take(v___y_2091_);
v_env_2095_ = lean_ctor_get(v___x_2094_, 0);
v_nextMacroScope_2096_ = lean_ctor_get(v___x_2094_, 1);
v_ngen_2097_ = lean_ctor_get(v___x_2094_, 2);
v_auxDeclNGen_2098_ = lean_ctor_get(v___x_2094_, 3);
v_traceState_2099_ = lean_ctor_get(v___x_2094_, 4);
v_messages_2100_ = lean_ctor_get(v___x_2094_, 6);
v_infoState_2101_ = lean_ctor_get(v___x_2094_, 7);
v_snapshotTasks_2102_ = lean_ctor_get(v___x_2094_, 8);
v_isSharedCheck_2168_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2168_ == 0)
{
lean_object* v_unused_2169_; 
v_unused_2169_ = lean_ctor_get(v___x_2094_, 5);
lean_dec(v_unused_2169_);
v___x_2104_ = v___x_2094_;
v_isShared_2105_ = v_isSharedCheck_2168_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_snapshotTasks_2102_);
lean_inc(v_infoState_2101_);
lean_inc(v_messages_2100_);
lean_inc(v_traceState_2099_);
lean_inc(v_auxDeclNGen_2098_);
lean_inc(v_ngen_2097_);
lean_inc(v_nextMacroScope_2096_);
lean_inc(v_env_2095_);
lean_dec(v___x_2094_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2168_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2106_ = l_Lean_ScopedEnvExtension_pushScope___redArg(v___x_2093_, v_env_2095_);
v___x_2107_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__1);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 5, v___x_2107_);
lean_ctor_set(v___x_2104_, 0, v___x_2106_);
v___x_2109_ = v___x_2104_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2106_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v_nextMacroScope_2096_);
lean_ctor_set(v_reuseFailAlloc_2167_, 2, v_ngen_2097_);
lean_ctor_set(v_reuseFailAlloc_2167_, 3, v_auxDeclNGen_2098_);
lean_ctor_set(v_reuseFailAlloc_2167_, 4, v_traceState_2099_);
lean_ctor_set(v_reuseFailAlloc_2167_, 5, v___x_2107_);
lean_ctor_set(v_reuseFailAlloc_2167_, 6, v_messages_2100_);
lean_ctor_set(v_reuseFailAlloc_2167_, 7, v_infoState_2101_);
lean_ctor_set(v_reuseFailAlloc_2167_, 8, v_snapshotTasks_2102_);
v___x_2109_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v_mctx_2112_; lean_object* v_zetaDeltaFVarIds_2113_; lean_object* v_postponed_2114_; lean_object* v_diag_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2165_; 
v___x_2110_ = lean_st_ref_put(v___y_2091_, v___x_2109_);
v___x_2111_ = lean_st_ref_take(v___y_2089_);
v_mctx_2112_ = lean_ctor_get(v___x_2111_, 0);
v_zetaDeltaFVarIds_2113_ = lean_ctor_get(v___x_2111_, 2);
v_postponed_2114_ = lean_ctor_get(v___x_2111_, 3);
v_diag_2115_ = lean_ctor_get(v___x_2111_, 4);
v_isSharedCheck_2165_ = !lean_is_exclusive(v___x_2111_);
if (v_isSharedCheck_2165_ == 0)
{
lean_object* v_unused_2166_; 
v_unused_2166_ = lean_ctor_get(v___x_2111_, 1);
lean_dec(v_unused_2166_);
v___x_2117_ = v___x_2111_;
v_isShared_2118_ = v_isSharedCheck_2165_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_diag_2115_);
lean_inc(v_postponed_2114_);
lean_inc(v_zetaDeltaFVarIds_2113_);
lean_inc(v_mctx_2112_);
lean_dec(v___x_2111_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2165_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2119_; lean_object* v___x_2121_; 
v___x_2119_ = lean_obj_once(&l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2, &l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2_once, _init_l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg___closed__2);
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 1, v___x_2119_);
v___x_2121_ = v___x_2117_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v_mctx_2112_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v___x_2119_);
lean_ctor_set(v_reuseFailAlloc_2164_, 2, v_zetaDeltaFVarIds_2113_);
lean_ctor_set(v_reuseFailAlloc_2164_, 3, v_postponed_2114_);
lean_ctor_set(v_reuseFailAlloc_2164_, 4, v_diag_2115_);
v___x_2121_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; size_t v_sz_2124_; size_t v___x_2125_; lean_object* v___x_2126_; 
v___x_2122_ = lean_st_ref_put(v___y_2089_, v___x_2121_);
v___x_2123_ = lean_box(0);
v_sz_2124_ = lean_array_size(v_names_2081_);
v___x_2125_ = ((size_t)0ULL);
v___x_2126_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__8(v_status_2082_, v_names_2081_, v_sz_2124_, v___x_2125_, v___x_2123_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_r_2127_; 
lean_dec_ref_known(v___x_2126_, 1);
lean_inc(v___y_2091_);
lean_inc_ref(v___y_2090_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
lean_inc(v___y_2085_);
lean_inc_ref(v___y_2084_);
v_r_2127_ = lean_apply_9(v_t_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, lean_box(0));
if (lean_obj_tag(v_r_2127_) == 0)
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2144_; 
v_a_2128_ = lean_ctor_get(v_r_2127_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v_r_2127_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2130_ = v_r_2127_;
v_isShared_2131_ = v_isSharedCheck_2144_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v_r_2127_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2144_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
lean_inc(v_a_2128_);
if (v_isShared_2131_ == 0)
{
lean_ctor_set_tag(v___x_2130_, 1);
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
lean_object* v___x_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
v___x_2134_ = l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___lam__0(v___y_2091_, v___x_2093_, v___x_2107_, v___y_2089_, v___x_2119_, v___x_2123_, v___x_2133_);
lean_dec_ref(v___x_2133_);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2141_ == 0)
{
lean_object* v_unused_2142_; 
v_unused_2142_ = lean_ctor_get(v___x_2134_, 0);
lean_dec(v_unused_2142_);
v___x_2136_ = v___x_2134_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_dec(v___x_2134_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2139_; 
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 0, v_a_2128_);
v___x_2139_ = v___x_2136_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_a_2128_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
v_a_2145_ = lean_ctor_get(v_r_2127_, 0);
lean_inc(v_a_2145_);
lean_dec_ref_known(v_r_2127_, 1);
v___x_2146_ = lean_box(0);
v___x_2147_ = l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___lam__0(v___y_2091_, v___x_2093_, v___x_2107_, v___y_2089_, v___x_2119_, v___x_2123_, v___x_2146_);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2154_ == 0)
{
lean_object* v_unused_2155_; 
v_unused_2155_ = lean_ctor_get(v___x_2147_, 0);
lean_dec(v_unused_2155_);
v___x_2149_ = v___x_2147_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_dec(v___x_2147_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
lean_ctor_set_tag(v___x_2149_, 1);
lean_ctor_set(v___x_2149_, 0, v_a_2145_);
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2145_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v_t_2083_);
v_a_2156_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2126_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2126_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg___boxed(lean_object* v_names_2170_, lean_object* v_status_2171_, lean_object* v_t_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_){
_start:
{
uint8_t v_status_boxed_2182_; lean_object* v_res_2183_; 
v_status_boxed_2182_ = lean_unbox(v_status_2171_);
v_res_2183_ = l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg(v_names_2170_, v_status_boxed_2182_, v_t_2172_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
lean_dec(v___y_2178_);
lean_dec_ref(v___y_2177_);
lean_dec(v___y_2176_);
lean_dec_ref(v___y_2175_);
lean_dec(v___y_2174_);
lean_dec_ref(v___y_2173_);
lean_dec_ref(v_names_2170_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__6(lean_object* v_a_2184_, lean_object* v_a_2185_){
_start:
{
if (lean_obj_tag(v_a_2184_) == 0)
{
lean_object* v___x_2186_; 
v___x_2186_ = l_List_reverse___redArg(v_a_2185_);
return v___x_2186_;
}
else
{
lean_object* v_head_2187_; lean_object* v_tail_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2198_; 
v_head_2187_ = lean_ctor_get(v_a_2184_, 0);
v_tail_2188_ = lean_ctor_get(v_a_2184_, 1);
v_isSharedCheck_2198_ = !lean_is_exclusive(v_a_2184_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2190_ = v_a_2184_;
v_isShared_2191_ = v_isSharedCheck_2198_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_tail_2188_);
lean_inc(v_head_2187_);
lean_dec(v_a_2184_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2198_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2195_; 
v___x_2192_ = lean_box(0);
v___x_2193_ = l_Lean_mkConst(v_head_2187_, v___x_2192_);
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 1, v_a_2185_);
lean_ctor_set(v___x_2190_, 0, v___x_2193_);
v___x_2195_ = v___x_2190_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v___x_2193_);
lean_ctor_set(v_reuseFailAlloc_2197_, 1, v_a_2185_);
v___x_2195_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
v_a_2184_ = v_tail_2188_;
v_a_2185_ = v___x_2195_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15(lean_object* v_x_2200_, lean_object* v_x_2201_){
_start:
{
if (lean_obj_tag(v_x_2201_) == 0)
{
return v_x_2200_;
}
else
{
lean_object* v_head_2202_; lean_object* v_tail_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; 
v_head_2202_ = lean_ctor_get(v_x_2201_, 0);
v_tail_2203_ = lean_ctor_get(v_x_2201_, 1);
v___x_2204_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15___closed__0));
v___x_2205_ = lean_string_append(v_x_2200_, v___x_2204_);
v___x_2206_ = lean_expr_dbg_to_string(v_head_2202_);
v___x_2207_ = lean_string_append(v___x_2205_, v___x_2206_);
lean_dec_ref(v___x_2206_);
v_x_2200_ = v___x_2207_;
v_x_2201_ = v_tail_2203_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15___boxed(lean_object* v_x_2209_, lean_object* v_x_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15(v_x_2209_, v_x_2210_);
lean_dec(v_x_2210_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7(lean_object* v_x_2215_){
_start:
{
if (lean_obj_tag(v_x_2215_) == 0)
{
lean_object* v___x_2216_; 
v___x_2216_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__0));
return v___x_2216_;
}
else
{
lean_object* v_tail_2217_; 
v_tail_2217_ = lean_ctor_get(v_x_2215_, 1);
if (lean_obj_tag(v_tail_2217_) == 0)
{
lean_object* v_head_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v_head_2218_ = lean_ctor_get(v_x_2215_, 0);
v___x_2219_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__1));
v___x_2220_ = lean_expr_dbg_to_string(v_head_2218_);
v___x_2221_ = lean_string_append(v___x_2219_, v___x_2220_);
lean_dec_ref(v___x_2220_);
v___x_2222_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__2));
v___x_2223_ = lean_string_append(v___x_2221_, v___x_2222_);
return v___x_2223_;
}
else
{
lean_object* v_head_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; uint32_t v___x_2229_; lean_object* v___x_2230_; 
v_head_2224_ = lean_ctor_get(v_x_2215_, 0);
v___x_2225_ = ((lean_object*)(l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___closed__1));
v___x_2226_ = lean_expr_dbg_to_string(v_head_2224_);
v___x_2227_ = lean_string_append(v___x_2225_, v___x_2226_);
lean_dec_ref(v___x_2226_);
v___x_2228_ = l_List_foldl___at___00List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7_spec__15(v___x_2227_, v_tail_2217_);
v___x_2229_ = 93;
v___x_2230_ = lean_string_push(v___x_2228_, v___x_2229_);
return v___x_2230_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7___boxed(lean_object* v_x_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7(v_x_2231_);
lean_dec(v_x_2231_);
return v_res_2232_;
}
}
static lean_object* _init_l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2233_; 
v___x_2233_ = l_instMonadEIO___redArg();
return v___x_2233_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5(lean_object* v_msg_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_){
_start:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v_toApplicative_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2375_; 
v___x_2252_ = lean_obj_once(&l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__0, &l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__0_once, _init_l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__0);
v___x_2253_ = l_StateRefT_x27_instMonad___redArg(v___x_2252_);
v_toApplicative_2254_ = lean_ctor_get(v___x_2253_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2375_ == 0)
{
lean_object* v_unused_2376_; 
v_unused_2376_ = lean_ctor_get(v___x_2253_, 1);
lean_dec(v_unused_2376_);
v___x_2256_ = v___x_2253_;
v_isShared_2257_ = v_isSharedCheck_2375_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_toApplicative_2254_);
lean_dec(v___x_2253_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2375_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
lean_object* v_toFunctor_2258_; lean_object* v_toSeq_2259_; lean_object* v_toSeqLeft_2260_; lean_object* v_toSeqRight_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2373_; 
v_toFunctor_2258_ = lean_ctor_get(v_toApplicative_2254_, 0);
v_toSeq_2259_ = lean_ctor_get(v_toApplicative_2254_, 2);
v_toSeqLeft_2260_ = lean_ctor_get(v_toApplicative_2254_, 3);
v_toSeqRight_2261_ = lean_ctor_get(v_toApplicative_2254_, 4);
v_isSharedCheck_2373_ = !lean_is_exclusive(v_toApplicative_2254_);
if (v_isSharedCheck_2373_ == 0)
{
lean_object* v_unused_2374_; 
v_unused_2374_ = lean_ctor_get(v_toApplicative_2254_, 1);
lean_dec(v_unused_2374_);
v___x_2263_ = v_toApplicative_2254_;
v_isShared_2264_ = v_isSharedCheck_2373_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_toSeqRight_2261_);
lean_inc(v_toSeqLeft_2260_);
lean_inc(v_toSeq_2259_);
lean_inc(v_toFunctor_2258_);
lean_dec(v_toApplicative_2254_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2373_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___f_2265_; lean_object* v___f_2266_; lean_object* v___f_2267_; lean_object* v___f_2268_; lean_object* v___x_2269_; lean_object* v___f_2270_; lean_object* v___f_2271_; lean_object* v___f_2272_; lean_object* v___x_2274_; 
v___f_2265_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__1));
v___f_2266_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__2));
lean_inc_ref(v_toFunctor_2258_);
v___f_2267_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2267_, 0, v_toFunctor_2258_);
v___f_2268_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2268_, 0, v_toFunctor_2258_);
v___x_2269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___f_2267_);
lean_ctor_set(v___x_2269_, 1, v___f_2268_);
v___f_2270_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2270_, 0, v_toSeqRight_2261_);
v___f_2271_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2271_, 0, v_toSeqLeft_2260_);
v___f_2272_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2272_, 0, v_toSeq_2259_);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 4, v___f_2270_);
lean_ctor_set(v___x_2263_, 3, v___f_2271_);
lean_ctor_set(v___x_2263_, 2, v___f_2272_);
lean_ctor_set(v___x_2263_, 1, v___f_2265_);
lean_ctor_set(v___x_2263_, 0, v___x_2269_);
v___x_2274_ = v___x_2263_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2269_);
lean_ctor_set(v_reuseFailAlloc_2372_, 1, v___f_2265_);
lean_ctor_set(v_reuseFailAlloc_2372_, 2, v___f_2272_);
lean_ctor_set(v_reuseFailAlloc_2372_, 3, v___f_2271_);
lean_ctor_set(v_reuseFailAlloc_2372_, 4, v___f_2270_);
v___x_2274_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
lean_object* v___x_2276_; 
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 1, v___f_2266_);
lean_ctor_set(v___x_2256_, 0, v___x_2274_);
v___x_2276_ = v___x_2256_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v___x_2274_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v___f_2266_);
v___x_2276_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
lean_object* v___x_2277_; lean_object* v_toApplicative_2278_; lean_object* v___x_2280_; uint8_t v_isShared_2281_; uint8_t v_isSharedCheck_2369_; 
v___x_2277_ = l_StateRefT_x27_instMonad___redArg(v___x_2276_);
v_toApplicative_2278_ = lean_ctor_get(v___x_2277_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2277_);
if (v_isSharedCheck_2369_ == 0)
{
lean_object* v_unused_2370_; 
v_unused_2370_ = lean_ctor_get(v___x_2277_, 1);
lean_dec(v_unused_2370_);
v___x_2280_ = v___x_2277_;
v_isShared_2281_ = v_isSharedCheck_2369_;
goto v_resetjp_2279_;
}
else
{
lean_inc(v_toApplicative_2278_);
lean_dec(v___x_2277_);
v___x_2280_ = lean_box(0);
v_isShared_2281_ = v_isSharedCheck_2369_;
goto v_resetjp_2279_;
}
v_resetjp_2279_:
{
lean_object* v_toFunctor_2282_; lean_object* v_toSeq_2283_; lean_object* v_toSeqLeft_2284_; lean_object* v_toSeqRight_2285_; lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2367_; 
v_toFunctor_2282_ = lean_ctor_get(v_toApplicative_2278_, 0);
v_toSeq_2283_ = lean_ctor_get(v_toApplicative_2278_, 2);
v_toSeqLeft_2284_ = lean_ctor_get(v_toApplicative_2278_, 3);
v_toSeqRight_2285_ = lean_ctor_get(v_toApplicative_2278_, 4);
v_isSharedCheck_2367_ = !lean_is_exclusive(v_toApplicative_2278_);
if (v_isSharedCheck_2367_ == 0)
{
lean_object* v_unused_2368_; 
v_unused_2368_ = lean_ctor_get(v_toApplicative_2278_, 1);
lean_dec(v_unused_2368_);
v___x_2287_ = v_toApplicative_2278_;
v_isShared_2288_ = v_isSharedCheck_2367_;
goto v_resetjp_2286_;
}
else
{
lean_inc(v_toSeqRight_2285_);
lean_inc(v_toSeqLeft_2284_);
lean_inc(v_toSeq_2283_);
lean_inc(v_toFunctor_2282_);
lean_dec(v_toApplicative_2278_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2367_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___f_2289_; lean_object* v___f_2290_; lean_object* v___f_2291_; lean_object* v___f_2292_; lean_object* v___x_2293_; lean_object* v___f_2294_; lean_object* v___f_2295_; lean_object* v___f_2296_; lean_object* v___x_2298_; 
v___f_2289_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__3));
v___f_2290_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__4));
lean_inc_ref(v_toFunctor_2282_);
v___f_2291_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2291_, 0, v_toFunctor_2282_);
v___f_2292_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2292_, 0, v_toFunctor_2282_);
v___x_2293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2293_, 0, v___f_2291_);
lean_ctor_set(v___x_2293_, 1, v___f_2292_);
v___f_2294_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2294_, 0, v_toSeqRight_2285_);
v___f_2295_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2295_, 0, v_toSeqLeft_2284_);
v___f_2296_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2296_, 0, v_toSeq_2283_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 4, v___f_2294_);
lean_ctor_set(v___x_2287_, 3, v___f_2295_);
lean_ctor_set(v___x_2287_, 2, v___f_2296_);
lean_ctor_set(v___x_2287_, 1, v___f_2289_);
lean_ctor_set(v___x_2287_, 0, v___x_2293_);
v___x_2298_ = v___x_2287_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v___x_2293_);
lean_ctor_set(v_reuseFailAlloc_2366_, 1, v___f_2289_);
lean_ctor_set(v_reuseFailAlloc_2366_, 2, v___f_2296_);
lean_ctor_set(v_reuseFailAlloc_2366_, 3, v___f_2295_);
lean_ctor_set(v_reuseFailAlloc_2366_, 4, v___f_2294_);
v___x_2298_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
lean_object* v___x_2300_; 
if (v_isShared_2281_ == 0)
{
lean_ctor_set(v___x_2280_, 1, v___f_2290_);
lean_ctor_set(v___x_2280_, 0, v___x_2298_);
v___x_2300_ = v___x_2280_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v___x_2298_);
lean_ctor_set(v_reuseFailAlloc_2365_, 1, v___f_2290_);
v___x_2300_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
lean_object* v___x_2301_; lean_object* v_toApplicative_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2363_; 
v___x_2301_ = l_StateRefT_x27_instMonad___redArg(v___x_2300_);
v_toApplicative_2302_ = lean_ctor_get(v___x_2301_, 0);
v_isSharedCheck_2363_ = !lean_is_exclusive(v___x_2301_);
if (v_isSharedCheck_2363_ == 0)
{
lean_object* v_unused_2364_; 
v_unused_2364_ = lean_ctor_get(v___x_2301_, 1);
lean_dec(v_unused_2364_);
v___x_2304_ = v___x_2301_;
v_isShared_2305_ = v_isSharedCheck_2363_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_toApplicative_2302_);
lean_dec(v___x_2301_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2363_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v_toFunctor_2306_; lean_object* v_toSeq_2307_; lean_object* v_toSeqLeft_2308_; lean_object* v_toSeqRight_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2361_; 
v_toFunctor_2306_ = lean_ctor_get(v_toApplicative_2302_, 0);
v_toSeq_2307_ = lean_ctor_get(v_toApplicative_2302_, 2);
v_toSeqLeft_2308_ = lean_ctor_get(v_toApplicative_2302_, 3);
v_toSeqRight_2309_ = lean_ctor_get(v_toApplicative_2302_, 4);
v_isSharedCheck_2361_ = !lean_is_exclusive(v_toApplicative_2302_);
if (v_isSharedCheck_2361_ == 0)
{
lean_object* v_unused_2362_; 
v_unused_2362_ = lean_ctor_get(v_toApplicative_2302_, 1);
lean_dec(v_unused_2362_);
v___x_2311_ = v_toApplicative_2302_;
v_isShared_2312_ = v_isSharedCheck_2361_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_toSeqRight_2309_);
lean_inc(v_toSeqLeft_2308_);
lean_inc(v_toSeq_2307_);
lean_inc(v_toFunctor_2306_);
lean_dec(v_toApplicative_2302_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2361_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___f_2313_; lean_object* v___f_2314_; lean_object* v___f_2315_; lean_object* v___f_2316_; lean_object* v___x_2317_; lean_object* v___f_2318_; lean_object* v___f_2319_; lean_object* v___f_2320_; lean_object* v___x_2322_; 
v___f_2313_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__5));
v___f_2314_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__6));
lean_inc_ref(v_toFunctor_2306_);
v___f_2315_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2315_, 0, v_toFunctor_2306_);
v___f_2316_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2316_, 0, v_toFunctor_2306_);
v___x_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___f_2315_);
lean_ctor_set(v___x_2317_, 1, v___f_2316_);
v___f_2318_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2318_, 0, v_toSeqRight_2309_);
v___f_2319_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2319_, 0, v_toSeqLeft_2308_);
v___f_2320_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2320_, 0, v_toSeq_2307_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 4, v___f_2318_);
lean_ctor_set(v___x_2311_, 3, v___f_2319_);
lean_ctor_set(v___x_2311_, 2, v___f_2320_);
lean_ctor_set(v___x_2311_, 1, v___f_2313_);
lean_ctor_set(v___x_2311_, 0, v___x_2317_);
v___x_2322_ = v___x_2311_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2317_);
lean_ctor_set(v_reuseFailAlloc_2360_, 1, v___f_2313_);
lean_ctor_set(v_reuseFailAlloc_2360_, 2, v___f_2320_);
lean_ctor_set(v_reuseFailAlloc_2360_, 3, v___f_2319_);
lean_ctor_set(v_reuseFailAlloc_2360_, 4, v___f_2318_);
v___x_2322_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
lean_object* v___x_2324_; 
if (v_isShared_2305_ == 0)
{
lean_ctor_set(v___x_2304_, 1, v___f_2314_);
lean_ctor_set(v___x_2304_, 0, v___x_2322_);
v___x_2324_ = v___x_2304_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v___x_2322_);
lean_ctor_set(v_reuseFailAlloc_2359_, 1, v___f_2314_);
v___x_2324_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
lean_object* v___x_2325_; lean_object* v_toApplicative_2326_; lean_object* v___x_2328_; uint8_t v_isShared_2329_; uint8_t v_isSharedCheck_2357_; 
v___x_2325_ = l_StateRefT_x27_instMonad___redArg(v___x_2324_);
v_toApplicative_2326_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2357_ == 0)
{
lean_object* v_unused_2358_; 
v_unused_2358_ = lean_ctor_get(v___x_2325_, 1);
lean_dec(v_unused_2358_);
v___x_2328_ = v___x_2325_;
v_isShared_2329_ = v_isSharedCheck_2357_;
goto v_resetjp_2327_;
}
else
{
lean_inc(v_toApplicative_2326_);
lean_dec(v___x_2325_);
v___x_2328_ = lean_box(0);
v_isShared_2329_ = v_isSharedCheck_2357_;
goto v_resetjp_2327_;
}
v_resetjp_2327_:
{
lean_object* v_toFunctor_2330_; lean_object* v_toSeq_2331_; lean_object* v_toSeqLeft_2332_; lean_object* v_toSeqRight_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2355_; 
v_toFunctor_2330_ = lean_ctor_get(v_toApplicative_2326_, 0);
v_toSeq_2331_ = lean_ctor_get(v_toApplicative_2326_, 2);
v_toSeqLeft_2332_ = lean_ctor_get(v_toApplicative_2326_, 3);
v_toSeqRight_2333_ = lean_ctor_get(v_toApplicative_2326_, 4);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_toApplicative_2326_);
if (v_isSharedCheck_2355_ == 0)
{
lean_object* v_unused_2356_; 
v_unused_2356_ = lean_ctor_get(v_toApplicative_2326_, 1);
lean_dec(v_unused_2356_);
v___x_2335_ = v_toApplicative_2326_;
v_isShared_2336_ = v_isSharedCheck_2355_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_toSeqRight_2333_);
lean_inc(v_toSeqLeft_2332_);
lean_inc(v_toSeq_2331_);
lean_inc(v_toFunctor_2330_);
lean_dec(v_toApplicative_2326_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2355_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___f_2337_; lean_object* v___f_2338_; lean_object* v___f_2339_; lean_object* v___f_2340_; lean_object* v___x_2341_; lean_object* v___f_2342_; lean_object* v___f_2343_; lean_object* v___f_2344_; lean_object* v___x_2346_; 
v___f_2337_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__7));
v___f_2338_ = ((lean_object*)(l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___closed__8));
lean_inc_ref(v_toFunctor_2330_);
v___f_2339_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2339_, 0, v_toFunctor_2330_);
v___f_2340_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2340_, 0, v_toFunctor_2330_);
v___x_2341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2341_, 0, v___f_2339_);
lean_ctor_set(v___x_2341_, 1, v___f_2340_);
v___f_2342_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2342_, 0, v_toSeqRight_2333_);
v___f_2343_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2343_, 0, v_toSeqLeft_2332_);
v___f_2344_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2344_, 0, v_toSeq_2331_);
if (v_isShared_2336_ == 0)
{
lean_ctor_set(v___x_2335_, 4, v___f_2342_);
lean_ctor_set(v___x_2335_, 3, v___f_2343_);
lean_ctor_set(v___x_2335_, 2, v___f_2344_);
lean_ctor_set(v___x_2335_, 1, v___f_2337_);
lean_ctor_set(v___x_2335_, 0, v___x_2341_);
v___x_2346_ = v___x_2335_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v___x_2341_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v___f_2337_);
lean_ctor_set(v_reuseFailAlloc_2354_, 2, v___f_2344_);
lean_ctor_set(v_reuseFailAlloc_2354_, 3, v___f_2343_);
lean_ctor_set(v_reuseFailAlloc_2354_, 4, v___f_2342_);
v___x_2346_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2348_; 
if (v_isShared_2329_ == 0)
{
lean_ctor_set(v___x_2328_, 1, v___f_2338_);
lean_ctor_set(v___x_2328_, 0, v___x_2346_);
v___x_2348_ = v___x_2328_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v___x_2346_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v___f_2338_);
v___x_2348_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_11298__overap_2351_; lean_object* v___x_2352_; 
v___x_2349_ = lean_box(0);
v___x_2350_ = l_instInhabitedOfMonad___redArg(v___x_2348_, v___x_2349_);
v___x_11298__overap_2351_ = lean_panic_fn_borrowed(v___x_2350_, v_msg_2242_);
lean_dec(v___x_2350_);
lean_inc(v___y_2250_);
lean_inc_ref(v___y_2249_);
lean_inc(v___y_2248_);
lean_inc_ref(v___y_2247_);
lean_inc(v___y_2246_);
lean_inc_ref(v___y_2245_);
lean_inc(v___y_2244_);
lean_inc_ref(v___y_2243_);
v___x_2352_ = lean_apply_9(v___x_11298__overap_2351_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, lean_box(0));
return v___x_2352_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5___boxed(lean_object* v_msg_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
lean_object* v_res_2387_; 
v_res_2387_ = l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5(v_msg_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
lean_dec_ref(v___y_2378_);
return v_res_2387_;
}
}
static lean_object* _init_l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2391_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__2));
v___x_2392_ = lean_unsigned_to_nat(11u);
v___x_2393_ = lean_unsigned_to_nat(429u);
v___x_2394_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__1));
v___x_2395_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__0));
v___x_2396_ = l_mkPanicMessageWithDecl(v___x_2395_, v___x_2394_, v___x_2393_, v___x_2392_, v___x_2391_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1(lean_object* v_id_2399_, lean_object* v_cs_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_){
_start:
{
if (lean_obj_tag(v_cs_2400_) == 0)
{
lean_object* v___x_2410_; lean_object* v___x_2411_; 
lean_dec(v_id_2399_);
v___x_2410_ = lean_obj_once(&l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__3, &l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__3_once, _init_l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__3);
v___x_2411_ = l_panic___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__5(v___x_2410_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
return v___x_2411_;
}
else
{
lean_object* v_tail_2412_; 
v_tail_2412_ = lean_ctor_get(v_cs_2400_, 1);
if (lean_obj_tag(v_tail_2412_) == 0)
{
lean_object* v_head_2413_; lean_object* v___x_2414_; 
lean_dec(v_id_2399_);
v_head_2413_ = lean_ctor_get(v_cs_2400_, 0);
lean_inc(v_head_2413_);
lean_dec_ref_known(v_cs_2400_, 2);
v___x_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2414_, 0, v_head_2413_);
return v___x_2414_;
}
else
{
lean_object* v___x_2415_; lean_object* v___x_2416_; uint8_t v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2415_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__4));
v___x_2416_ = lean_box(0);
v___x_2417_ = 0;
lean_inc(v_id_2399_);
v___x_2418_ = l_Lean_Syntax_formatStx(v_id_2399_, v___x_2416_, v___x_2417_);
v___x_2419_ = l_Std_Format_defWidth;
v___x_2420_ = lean_unsigned_to_nat(0u);
v___x_2421_ = l_Std_Format_pretty(v___x_2418_, v___x_2419_, v___x_2420_, v___x_2420_);
v___x_2422_ = lean_string_append(v___x_2415_, v___x_2421_);
lean_dec_ref(v___x_2421_);
v___x_2423_ = ((lean_object*)(l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___closed__5));
v___x_2424_ = lean_string_append(v___x_2422_, v___x_2423_);
v___x_2425_ = lean_box(0);
v___x_2426_ = l_List_mapTR_loop___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__6(v_cs_2400_, v___x_2425_);
v___x_2427_ = l_List_toString___at___00Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1_spec__7(v___x_2426_);
lean_dec(v___x_2426_);
v___x_2428_ = lean_string_append(v___x_2424_, v___x_2427_);
lean_dec_ref(v___x_2427_);
v___x_2429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
v___x_2430_ = l_Lean_MessageData_ofFormat(v___x_2429_);
v___x_2431_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(v_id_2399_, v___x_2430_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
lean_dec(v_id_2399_);
return v___x_2431_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1___boxed(lean_object* v_id_2432_, lean_object* v_cs_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1(v_id_2432_, v_cs_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3_spec__10(lean_object* v_a_2444_, lean_object* v_a_2445_){
_start:
{
if (lean_obj_tag(v_a_2444_) == 0)
{
lean_object* v___x_2446_; 
v___x_2446_ = lean_array_to_list(v_a_2445_);
return v___x_2446_;
}
else
{
lean_object* v_head_2447_; 
v_head_2447_ = lean_ctor_get(v_a_2444_, 0);
if (lean_obj_tag(v_head_2447_) == 1)
{
lean_object* v_fields_2448_; 
v_fields_2448_ = lean_ctor_get(v_head_2447_, 1);
if (lean_obj_tag(v_fields_2448_) == 0)
{
lean_object* v_tail_2449_; lean_object* v_n_2450_; lean_object* v___x_2451_; 
lean_inc_ref(v_head_2447_);
v_tail_2449_ = lean_ctor_get(v_a_2444_, 1);
lean_inc(v_tail_2449_);
lean_dec_ref_known(v_a_2444_, 2);
v_n_2450_ = lean_ctor_get(v_head_2447_, 0);
lean_inc(v_n_2450_);
lean_dec_ref_known(v_head_2447_, 2);
v___x_2451_ = lean_array_push(v_a_2445_, v_n_2450_);
v_a_2444_ = v_tail_2449_;
v_a_2445_ = v___x_2451_;
goto _start;
}
else
{
lean_object* v_tail_2453_; 
v_tail_2453_ = lean_ctor_get(v_a_2444_, 1);
lean_inc(v_tail_2453_);
lean_dec_ref_known(v_a_2444_, 2);
v_a_2444_ = v_tail_2453_;
goto _start;
}
}
else
{
lean_object* v_tail_2455_; 
v_tail_2455_ = lean_ctor_get(v_a_2444_, 1);
lean_inc(v_tail_2455_);
lean_dec_ref_known(v_a_2444_, 2);
v_a_2444_ = v_tail_2455_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; 
v___x_2462_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__2));
v___x_2463_ = l_Lean_MessageData_ofFormat(v___x_2462_);
return v___x_2463_;
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3(lean_object* v_stx_2464_, lean_object* v_k_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_){
_start:
{
if (lean_obj_tag(v_stx_2464_) == 3)
{
lean_object* v_val_2475_; lean_object* v_preresolved_2476_; lean_object* v___x_2477_; lean_object* v_pre_2478_; uint8_t v___x_2479_; 
v_val_2475_ = lean_ctor_get(v_stx_2464_, 2);
lean_inc(v_val_2475_);
v_preresolved_2476_ = lean_ctor_get(v_stx_2464_, 3);
v___x_2477_ = ((lean_object*)(l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__0));
lean_inc(v_preresolved_2476_);
v_pre_2478_ = l_List_filterMapTR_go___at___00Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3_spec__10(v_preresolved_2476_, v___x_2477_);
v___x_2479_ = l_List_isEmpty___redArg(v_pre_2478_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; 
lean_dec_ref_known(v_stx_2464_, 4);
lean_dec(v_val_2475_);
lean_dec_ref(v_k_2465_);
v___x_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2480_, 0, v_pre_2478_);
return v___x_2480_;
}
else
{
lean_object* v_toCold_2481_; lean_object* v_currRecDepth_2482_; lean_object* v_ref_2483_; uint8_t v_diag_2484_; uint8_t v_suppressElabErrors_2485_; lean_object* v_ref_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
lean_dec(v_pre_2478_);
v_toCold_2481_ = lean_ctor_get(v___y_2472_, 0);
v_currRecDepth_2482_ = lean_ctor_get(v___y_2472_, 1);
v_ref_2483_ = lean_ctor_get(v___y_2472_, 2);
v_diag_2484_ = lean_ctor_get_uint8(v___y_2472_, sizeof(void*)*3);
v_suppressElabErrors_2485_ = lean_ctor_get_uint8(v___y_2472_, sizeof(void*)*3 + 1);
v_ref_2486_ = l_Lean_replaceRef(v_stx_2464_, v_ref_2483_);
lean_dec_ref_known(v_stx_2464_, 4);
lean_inc(v_currRecDepth_2482_);
lean_inc_ref(v_toCold_2481_);
v___x_2487_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2487_, 0, v_toCold_2481_);
lean_ctor_set(v___x_2487_, 1, v_currRecDepth_2482_);
lean_ctor_set(v___x_2487_, 2, v_ref_2486_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*3, v_diag_2484_);
lean_ctor_set_uint8(v___x_2487_, sizeof(void*)*3 + 1, v_suppressElabErrors_2485_);
lean_inc(v___y_2473_);
lean_inc(v___y_2471_);
lean_inc_ref(v___y_2470_);
lean_inc(v___y_2469_);
lean_inc_ref(v___y_2468_);
lean_inc(v___y_2467_);
lean_inc_ref(v___y_2466_);
v___x_2488_ = lean_apply_10(v_k_2465_, v_val_2475_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___x_2487_, v___y_2473_, lean_box(0));
return v___x_2488_;
}
}
else
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
lean_dec_ref(v_k_2465_);
v___x_2489_ = lean_obj_once(&l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__3, &l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__3_once, _init_l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___closed__3);
v___x_2490_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(v_stx_2464_, v___x_2489_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_);
lean_dec(v_stx_2464_);
return v___x_2490_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3___boxed(lean_object* v_stx_2491_, lean_object* v_k_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3(v_stx_2491_, v_k_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__15(lean_object* v_x_2503_){
_start:
{
if (lean_obj_tag(v_x_2503_) == 0)
{
lean_object* v___x_2504_; 
v___x_2504_ = lean_box(0);
return v___x_2504_;
}
else
{
lean_object* v_head_2505_; lean_object* v_tail_2506_; lean_object* v_fst_2507_; uint8_t v___x_2508_; 
v_head_2505_ = lean_ctor_get(v_x_2503_, 0);
v_tail_2506_ = lean_ctor_get(v_x_2503_, 1);
v_fst_2507_ = lean_ctor_get(v_head_2505_, 0);
v___x_2508_ = l_Lean_isPrivateName(v_fst_2507_);
if (v___x_2508_ == 0)
{
v_x_2503_ = v_tail_2506_;
goto _start;
}
else
{
lean_object* v___x_2510_; 
lean_inc(v_head_2505_);
v___x_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_head_2505_);
return v___x_2510_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__15___boxed(lean_object* v_x_2511_){
_start:
{
lean_object* v_res_2512_; 
v_res_2512_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__15(v_x_2511_);
lean_dec(v_x_2511_);
return v_res_2512_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(uint8_t v_suppressElabErrors_2520_, uint8_t v___y_2521_, lean_object* v_x_2522_){
_start:
{
if (lean_obj_tag(v_x_2522_) == 1)
{
lean_object* v_pre_2523_; 
v_pre_2523_ = lean_ctor_get(v_x_2522_, 0);
switch(lean_obj_tag(v_pre_2523_))
{
case 1:
{
lean_object* v_pre_2524_; 
v_pre_2524_ = lean_ctor_get(v_pre_2523_, 0);
switch(lean_obj_tag(v_pre_2524_))
{
case 0:
{
lean_object* v_str_2525_; lean_object* v_str_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; 
v_str_2525_ = lean_ctor_get(v_x_2522_, 1);
v_str_2526_ = lean_ctor_get(v_pre_2523_, 1);
v___x_2527_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__0));
v___x_2528_ = lean_string_dec_eq(v_str_2526_, v___x_2527_);
if (v___x_2528_ == 0)
{
lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___x_2529_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility_evalTerm___closed__2));
v___x_2530_ = lean_string_dec_eq(v_str_2526_, v___x_2529_);
if (v___x_2530_ == 0)
{
return v___x_2530_;
}
else
{
lean_object* v___x_2531_; uint8_t v___x_2532_; 
v___x_2531_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__1));
v___x_2532_ = lean_string_dec_eq(v_str_2525_, v___x_2531_);
if (v___x_2532_ == 0)
{
return v___x_2532_;
}
else
{
return v_suppressElabErrors_2520_;
}
}
}
else
{
lean_object* v___x_2533_; uint8_t v___x_2534_; 
v___x_2533_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__2));
v___x_2534_ = lean_string_dec_eq(v_str_2525_, v___x_2533_);
if (v___x_2534_ == 0)
{
return v___x_2534_;
}
else
{
return v_suppressElabErrors_2520_;
}
}
}
case 1:
{
lean_object* v_pre_2535_; 
v_pre_2535_ = lean_ctor_get(v_pre_2524_, 0);
if (lean_obj_tag(v_pre_2535_) == 0)
{
lean_object* v_str_2536_; lean_object* v_str_2537_; lean_object* v_str_2538_; lean_object* v___x_2539_; uint8_t v___x_2540_; 
v_str_2536_ = lean_ctor_get(v_x_2522_, 1);
v_str_2537_ = lean_ctor_get(v_pre_2523_, 1);
v_str_2538_ = lean_ctor_get(v_pre_2524_, 1);
v___x_2539_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__3));
v___x_2540_ = lean_string_dec_eq(v_str_2538_, v___x_2539_);
if (v___x_2540_ == 0)
{
return v___x_2540_;
}
else
{
lean_object* v___x_2541_; uint8_t v___x_2542_; 
v___x_2541_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__4));
v___x_2542_ = lean_string_dec_eq(v_str_2537_, v___x_2541_);
if (v___x_2542_ == 0)
{
return v___x_2542_;
}
else
{
lean_object* v___x_2543_; uint8_t v___x_2544_; 
v___x_2543_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__5));
v___x_2544_ = lean_string_dec_eq(v_str_2536_, v___x_2543_);
if (v___x_2544_ == 0)
{
return v___x_2544_;
}
else
{
return v_suppressElabErrors_2520_;
}
}
}
}
else
{
return v___y_2521_;
}
}
default: 
{
return v___y_2521_;
}
}
}
case 0:
{
lean_object* v_str_2545_; lean_object* v___x_2546_; uint8_t v___x_2547_; 
v_str_2545_ = lean_ctor_get(v_x_2522_, 1);
v___x_2546_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___closed__6));
v___x_2547_ = lean_string_dec_eq(v_str_2545_, v___x_2546_);
if (v___x_2547_ == 0)
{
return v___x_2547_;
}
else
{
return v_suppressElabErrors_2520_;
}
}
default: 
{
return v___y_2521_;
}
}
}
else
{
return v___y_2521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_2548_, lean_object* v___y_2549_, lean_object* v_x_2550_){
_start:
{
uint8_t v_suppressElabErrors_boxed_2551_; uint8_t v___y_23079__boxed_2552_; uint8_t v_res_2553_; lean_object* v_r_2554_; 
v_suppressElabErrors_boxed_2551_ = lean_unbox(v_suppressElabErrors_2548_);
v___y_23079__boxed_2552_ = lean_unbox(v___y_2549_);
v_res_2553_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0(v_suppressElabErrors_boxed_2551_, v___y_23079__boxed_2552_, v_x_2550_);
lean_dec(v_x_2550_);
v_r_2554_ = lean_box(v_res_2553_);
return v_r_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(lean_object* v_ref_2556_, lean_object* v_msgData_2557_, uint8_t v_severity_2558_, uint8_t v_isSilent_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_){
_start:
{
lean_object* v___y_2566_; uint8_t v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; uint8_t v___y_2570_; lean_object* v___y_2571_; lean_object* v___y_2572_; lean_object* v_currNamespace_2573_; lean_object* v_openDecls_2574_; lean_object* v___y_2575_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2604_; uint8_t v___y_2605_; uint8_t v___y_2606_; uint8_t v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; uint8_t v___y_2632_; uint8_t v___y_2633_; lean_object* v___y_2634_; uint8_t v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; uint8_t v___y_2646_; uint8_t v___y_2647_; lean_object* v___y_2648_; uint8_t v___y_2649_; uint8_t v___x_2654_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; uint8_t v___y_2662_; uint8_t v___y_2663_; uint8_t v___y_2664_; uint8_t v___y_2666_; uint8_t v___x_2684_; 
v___x_2654_ = 2;
v___x_2684_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2558_, v___x_2654_);
if (v___x_2684_ == 0)
{
v___y_2666_ = v___x_2684_;
goto v___jp_2665_;
}
else
{
uint8_t v___x_2685_; 
lean_inc_ref(v_msgData_2557_);
v___x_2685_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2557_);
v___y_2666_ = v___x_2685_;
goto v___jp_2665_;
}
v___jp_2565_:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v_env_2580_; lean_object* v_nextMacroScope_2581_; lean_object* v_ngen_2582_; lean_object* v_auxDeclNGen_2583_; lean_object* v_traceState_2584_; lean_object* v_cache_2585_; lean_object* v_messages_2586_; lean_object* v_infoState_2587_; lean_object* v_snapshotTasks_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2599_; 
lean_inc(v_openDecls_2574_);
lean_inc(v_currNamespace_2573_);
v___x_2576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2576_, 0, v_currNamespace_2573_);
lean_ctor_set(v___x_2576_, 1, v_openDecls_2574_);
v___x_2577_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2576_);
lean_ctor_set(v___x_2577_, 1, v___y_2569_);
lean_inc_ref(v___y_2571_);
lean_inc_ref(v___y_2566_);
v___x_2578_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2578_, 0, v___y_2566_);
lean_ctor_set(v___x_2578_, 1, v___y_2568_);
lean_ctor_set(v___x_2578_, 2, v___y_2572_);
lean_ctor_set(v___x_2578_, 3, v___y_2571_);
lean_ctor_set(v___x_2578_, 4, v___x_2577_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*5, v___y_2567_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*5 + 1, v___y_2570_);
lean_ctor_set_uint8(v___x_2578_, sizeof(void*)*5 + 2, v_isSilent_2559_);
v___x_2579_ = lean_st_ref_take(v___y_2575_);
v_env_2580_ = lean_ctor_get(v___x_2579_, 0);
v_nextMacroScope_2581_ = lean_ctor_get(v___x_2579_, 1);
v_ngen_2582_ = lean_ctor_get(v___x_2579_, 2);
v_auxDeclNGen_2583_ = lean_ctor_get(v___x_2579_, 3);
v_traceState_2584_ = lean_ctor_get(v___x_2579_, 4);
v_cache_2585_ = lean_ctor_get(v___x_2579_, 5);
v_messages_2586_ = lean_ctor_get(v___x_2579_, 6);
v_infoState_2587_ = lean_ctor_get(v___x_2579_, 7);
v_snapshotTasks_2588_ = lean_ctor_get(v___x_2579_, 8);
v_isSharedCheck_2599_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2590_ = v___x_2579_;
v_isShared_2591_ = v_isSharedCheck_2599_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_snapshotTasks_2588_);
lean_inc(v_infoState_2587_);
lean_inc(v_messages_2586_);
lean_inc(v_cache_2585_);
lean_inc(v_traceState_2584_);
lean_inc(v_auxDeclNGen_2583_);
lean_inc(v_ngen_2582_);
lean_inc(v_nextMacroScope_2581_);
lean_inc(v_env_2580_);
lean_dec(v___x_2579_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2599_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2595_; 
v___x_2592_ = lean_box(0);
v___x_2593_ = l_Lean_MessageLog_add(v___x_2578_, v_messages_2586_);
if (v_isShared_2591_ == 0)
{
lean_ctor_set(v___x_2590_, 6, v___x_2593_);
v___x_2595_ = v___x_2590_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v_env_2580_);
lean_ctor_set(v_reuseFailAlloc_2598_, 1, v_nextMacroScope_2581_);
lean_ctor_set(v_reuseFailAlloc_2598_, 2, v_ngen_2582_);
lean_ctor_set(v_reuseFailAlloc_2598_, 3, v_auxDeclNGen_2583_);
lean_ctor_set(v_reuseFailAlloc_2598_, 4, v_traceState_2584_);
lean_ctor_set(v_reuseFailAlloc_2598_, 5, v_cache_2585_);
lean_ctor_set(v_reuseFailAlloc_2598_, 6, v___x_2593_);
lean_ctor_set(v_reuseFailAlloc_2598_, 7, v_infoState_2587_);
lean_ctor_set(v_reuseFailAlloc_2598_, 8, v_snapshotTasks_2588_);
v___x_2595_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2596_ = lean_st_ref_put(v___y_2575_, v___x_2595_);
v___x_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2592_);
return v___x_2597_;
}
}
}
v___jp_2600_:
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2626_; 
v___x_2611_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2557_);
v___x_2612_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility_evalExpr_spec__1_spec__1(v___x_2611_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2626_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2626_ == 0)
{
v___x_2615_ = v___x_2612_;
v_isShared_2616_ = v_isSharedCheck_2626_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2626_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
lean_inc_ref_n(v___y_2609_, 2);
v___x_2617_ = l_Lean_FileMap_toPosition(v___y_2609_, v___y_2608_);
lean_dec(v___y_2608_);
v___x_2618_ = l_Lean_FileMap_toPosition(v___y_2609_, v___y_2610_);
lean_dec(v___y_2610_);
v___x_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2618_);
v___x_2620_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___closed__0));
if (v___y_2607_ == 0)
{
lean_del_object(v___x_2615_);
lean_dec_ref(v___y_2603_);
v___y_2566_ = v___y_2604_;
v___y_2567_ = v___y_2605_;
v___y_2568_ = v___x_2617_;
v___y_2569_ = v_a_2613_;
v___y_2570_ = v___y_2606_;
v___y_2571_ = v___x_2620_;
v___y_2572_ = v___x_2619_;
v_currNamespace_2573_ = v___y_2602_;
v_openDecls_2574_ = v___y_2601_;
v___y_2575_ = v___y_2563_;
goto v___jp_2565_;
}
else
{
uint8_t v___x_2621_; 
lean_inc(v_a_2613_);
v___x_2621_ = l_Lean_MessageData_hasTag(v___y_2603_, v_a_2613_);
if (v___x_2621_ == 0)
{
lean_object* v___x_2622_; lean_object* v___x_2624_; 
lean_dec_ref_known(v___x_2619_, 1);
lean_dec_ref(v___x_2617_);
lean_dec(v_a_2613_);
v___x_2622_ = lean_box(0);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 0, v___x_2622_);
v___x_2624_ = v___x_2615_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v___x_2622_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
else
{
lean_del_object(v___x_2615_);
v___y_2566_ = v___y_2604_;
v___y_2567_ = v___y_2605_;
v___y_2568_ = v___x_2617_;
v___y_2569_ = v_a_2613_;
v___y_2570_ = v___y_2606_;
v___y_2571_ = v___x_2620_;
v___y_2572_ = v___x_2619_;
v_currNamespace_2573_ = v___y_2602_;
v_openDecls_2574_ = v___y_2601_;
v___y_2575_ = v___y_2563_;
goto v___jp_2565_;
}
}
}
}
v___jp_2627_:
{
lean_object* v___x_2638_; 
v___x_2638_ = l_Lean_Syntax_getTailPos_x3f(v___y_2634_, v___y_2632_);
lean_dec(v___y_2634_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_inc(v___y_2637_);
v___y_2601_ = v___y_2628_;
v___y_2602_ = v___y_2629_;
v___y_2603_ = v___y_2630_;
v___y_2604_ = v___y_2631_;
v___y_2605_ = v___y_2632_;
v___y_2606_ = v___y_2633_;
v___y_2607_ = v___y_2635_;
v___y_2608_ = v___y_2637_;
v___y_2609_ = v___y_2636_;
v___y_2610_ = v___y_2637_;
goto v___jp_2600_;
}
else
{
lean_object* v_val_2639_; 
v_val_2639_ = lean_ctor_get(v___x_2638_, 0);
lean_inc(v_val_2639_);
lean_dec_ref_known(v___x_2638_, 1);
v___y_2601_ = v___y_2628_;
v___y_2602_ = v___y_2629_;
v___y_2603_ = v___y_2630_;
v___y_2604_ = v___y_2631_;
v___y_2605_ = v___y_2632_;
v___y_2606_ = v___y_2633_;
v___y_2607_ = v___y_2635_;
v___y_2608_ = v___y_2637_;
v___y_2609_ = v___y_2636_;
v___y_2610_ = v_val_2639_;
goto v___jp_2600_;
}
}
v___jp_2640_:
{
lean_object* v_ref_2650_; lean_object* v___x_2651_; 
v_ref_2650_ = l_Lean_replaceRef(v_ref_2556_, v___y_2645_);
v___x_2651_ = l_Lean_Syntax_getPos_x3f(v_ref_2650_, v___y_2646_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v___x_2652_; 
v___x_2652_ = lean_unsigned_to_nat(0u);
v___y_2628_ = v___y_2641_;
v___y_2629_ = v___y_2642_;
v___y_2630_ = v___y_2643_;
v___y_2631_ = v___y_2644_;
v___y_2632_ = v___y_2646_;
v___y_2633_ = v___y_2649_;
v___y_2634_ = v_ref_2650_;
v___y_2635_ = v___y_2647_;
v___y_2636_ = v___y_2648_;
v___y_2637_ = v___x_2652_;
goto v___jp_2627_;
}
else
{
lean_object* v_val_2653_; 
v_val_2653_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_val_2653_);
lean_dec_ref_known(v___x_2651_, 1);
v___y_2628_ = v___y_2641_;
v___y_2629_ = v___y_2642_;
v___y_2630_ = v___y_2643_;
v___y_2631_ = v___y_2644_;
v___y_2632_ = v___y_2646_;
v___y_2633_ = v___y_2649_;
v___y_2634_ = v_ref_2650_;
v___y_2635_ = v___y_2647_;
v___y_2636_ = v___y_2648_;
v___y_2637_ = v_val_2653_;
goto v___jp_2627_;
}
}
v___jp_2655_:
{
if (v___y_2664_ == 0)
{
v___y_2641_ = v___y_2657_;
v___y_2642_ = v___y_2658_;
v___y_2643_ = v___y_2659_;
v___y_2644_ = v___y_2656_;
v___y_2645_ = v___y_2661_;
v___y_2646_ = v___y_2662_;
v___y_2647_ = v___y_2663_;
v___y_2648_ = v___y_2660_;
v___y_2649_ = v_severity_2558_;
goto v___jp_2640_;
}
else
{
v___y_2641_ = v___y_2657_;
v___y_2642_ = v___y_2658_;
v___y_2643_ = v___y_2659_;
v___y_2644_ = v___y_2656_;
v___y_2645_ = v___y_2661_;
v___y_2646_ = v___y_2662_;
v___y_2647_ = v___y_2663_;
v___y_2648_ = v___y_2660_;
v___y_2649_ = v___x_2654_;
goto v___jp_2640_;
}
}
v___jp_2665_:
{
if (v___y_2666_ == 0)
{
lean_object* v_toCold_2667_; lean_object* v_ref_2668_; uint8_t v_suppressElabErrors_2669_; lean_object* v_fileName_2670_; lean_object* v_fileMap_2671_; lean_object* v_options_2672_; lean_object* v_currNamespace_2673_; lean_object* v_openDecls_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___f_2677_; uint8_t v___x_2678_; uint8_t v___x_2679_; 
v_toCold_2667_ = lean_ctor_get(v___y_2562_, 0);
v_ref_2668_ = lean_ctor_get(v___y_2562_, 2);
v_suppressElabErrors_2669_ = lean_ctor_get_uint8(v___y_2562_, sizeof(void*)*3 + 1);
v_fileName_2670_ = lean_ctor_get(v_toCold_2667_, 0);
v_fileMap_2671_ = lean_ctor_get(v_toCold_2667_, 1);
v_options_2672_ = lean_ctor_get(v_toCold_2667_, 2);
v_currNamespace_2673_ = lean_ctor_get(v_toCold_2667_, 4);
v_openDecls_2674_ = lean_ctor_get(v_toCold_2667_, 5);
v___x_2675_ = lean_box(v_suppressElabErrors_2669_);
v___x_2676_ = lean_box(v___y_2666_);
v___f_2677_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2677_, 0, v___x_2675_);
lean_closure_set(v___f_2677_, 1, v___x_2676_);
v___x_2678_ = 1;
v___x_2679_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2558_, v___x_2678_);
if (v___x_2679_ == 0)
{
v___y_2656_ = v_fileName_2670_;
v___y_2657_ = v_openDecls_2674_;
v___y_2658_ = v_currNamespace_2673_;
v___y_2659_ = v___f_2677_;
v___y_2660_ = v_fileMap_2671_;
v___y_2661_ = v_ref_2668_;
v___y_2662_ = v___y_2666_;
v___y_2663_ = v_suppressElabErrors_2669_;
v___y_2664_ = v___x_2679_;
goto v___jp_2655_;
}
else
{
lean_object* v___x_2680_; uint8_t v___x_2681_; 
v___x_2680_ = l_Lean_warningAsError;
v___x_2681_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_2672_, v___x_2680_);
v___y_2656_ = v_fileName_2670_;
v___y_2657_ = v_openDecls_2674_;
v___y_2658_ = v_currNamespace_2673_;
v___y_2659_ = v___f_2677_;
v___y_2660_ = v_fileMap_2671_;
v___y_2661_ = v_ref_2668_;
v___y_2662_ = v___y_2666_;
v___y_2663_ = v_suppressElabErrors_2669_;
v___y_2664_ = v___x_2681_;
goto v___jp_2655_;
}
}
else
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
lean_dec_ref(v_msgData_2557_);
v___x_2682_ = lean_box(0);
v___x_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2682_);
return v___x_2683_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg___boxed(lean_object* v_ref_2686_, lean_object* v_msgData_2687_, lean_object* v_severity_2688_, lean_object* v_isSilent_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
uint8_t v_severity_boxed_2695_; uint8_t v_isSilent_boxed_2696_; lean_object* v_res_2697_; 
v_severity_boxed_2695_ = lean_unbox(v_severity_2688_);
v_isSilent_boxed_2696_ = lean_unbox(v_isSilent_2689_);
v_res_2697_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_2686_, v_msgData_2687_, v_severity_boxed_2695_, v_isSilent_boxed_2696_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v_ref_2686_);
return v_res_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(lean_object* v_msgData_2698_, uint8_t v_severity_2699_, uint8_t v_isSilent_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_){
_start:
{
lean_object* v_ref_2710_; lean_object* v___x_2711_; 
v_ref_2710_ = lean_ctor_get(v___y_2707_, 2);
v___x_2711_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_2710_, v_msgData_2698_, v_severity_2699_, v_isSilent_2700_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28___boxed(lean_object* v_msgData_2712_, lean_object* v_severity_2713_, lean_object* v_isSilent_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_){
_start:
{
uint8_t v_severity_boxed_2724_; uint8_t v_isSilent_boxed_2725_; lean_object* v_res_2726_; 
v_severity_boxed_2724_ = lean_unbox(v_severity_2713_);
v_isSilent_boxed_2725_ = lean_unbox(v_isSilent_2714_);
v_res_2726_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(v_msgData_2712_, v_severity_boxed_2724_, v_isSilent_boxed_2725_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
lean_dec(v___y_2720_);
lean_dec_ref(v___y_2719_);
lean_dec(v___y_2718_);
lean_dec_ref(v___y_2717_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(lean_object* v_msgData_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_){
_start:
{
uint8_t v___x_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; 
v___x_2737_ = 1;
v___x_2738_ = 0;
v___x_2739_ = l_Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28(v_msgData_2727_, v___x_2737_, v___x_2738_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23___boxed(lean_object* v_msgData_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(v_msgData_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec_ref(v___y_2743_);
lean_dec(v___y_2742_);
lean_dec_ref(v___y_2741_);
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(lean_object* v_opt_2751_, lean_object* v___y_2752_){
_start:
{
lean_object* v_toCold_2754_; lean_object* v_options_2755_; uint8_t v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v_toCold_2754_ = lean_ctor_get(v___y_2752_, 0);
v_options_2755_ = lean_ctor_get(v_toCold_2754_, 2);
v___x_2756_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_elabUnsealingStructureConfig_evalConfigItem_spec__1_spec__3_spec__4_spec__6(v_options_2755_, v_opt_2751_);
v___x_2757_ = lean_box(v___x_2756_);
v___x_2758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2757_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg___boxed(lean_object* v_opt_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v_opt_2759_, v___y_2760_);
lean_dec_ref(v___y_2760_);
lean_dec_ref(v_opt_2759_);
return v_res_2762_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1(void){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2764_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__0));
v___x_2765_ = l_Lean_stringToMessageData(v___x_2764_);
return v___x_2765_;
}
}
static lean_object* _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3(void){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2767_ = ((lean_object*)(l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__2));
v___x_2768_ = l_Lean_stringToMessageData(v___x_2767_);
return v___x_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16(lean_object* v_id_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v___x_2779_; lean_object* v_env_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v_a_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2802_; 
v___x_2779_ = lean_st_ref_get(v___y_2777_);
v_env_2780_ = lean_ctor_get(v___x_2779_, 0);
lean_inc_ref(v_env_2780_);
lean_dec(v___x_2779_);
v___x_2781_ = l_Lean_ResolveName_backward_privateInPublic_warn;
v___x_2782_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v___x_2781_, v___y_2776_);
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2785_ = v___x_2782_;
v_isShared_2786_ = v_isSharedCheck_2802_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_a_2783_);
lean_dec(v___x_2782_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2802_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
uint8_t v_isExporting_2792_; 
v_isExporting_2792_ = lean_ctor_get_uint8(v_env_2780_, sizeof(void*)*8);
lean_dec_ref(v_env_2780_);
if (v_isExporting_2792_ == 0)
{
lean_dec(v_a_2783_);
lean_dec(v_id_2769_);
goto v___jp_2787_;
}
else
{
uint8_t v___x_2793_; 
v___x_2793_ = l_Lean_isPrivateName(v_id_2769_);
if (v___x_2793_ == 0)
{
lean_dec(v_a_2783_);
lean_dec(v_id_2769_);
goto v___jp_2787_;
}
else
{
uint8_t v___x_2794_; 
v___x_2794_ = lean_unbox(v_a_2783_);
lean_dec(v_a_2783_);
if (v___x_2794_ == 0)
{
lean_dec(v_id_2769_);
goto v___jp_2787_;
}
else
{
lean_object* v___x_2795_; uint8_t v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; 
lean_del_object(v___x_2785_);
v___x_2795_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__1);
v___x_2796_ = 0;
v___x_2797_ = l_Lean_MessageData_ofConstName(v_id_2769_, v___x_2796_);
v___x_2798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2795_);
lean_ctor_set(v___x_2798_, 1, v___x_2797_);
v___x_2799_ = lean_obj_once(&l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3, &l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3_once, _init_l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___closed__3);
v___x_2800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2800_, 0, v___x_2798_);
lean_ctor_set(v___x_2800_, 1, v___x_2799_);
v___x_2801_ = l_Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23(v___x_2800_, v___y_2770_, v___y_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_);
return v___x_2801_;
}
}
}
v___jp_2787_:
{
lean_object* v___x_2788_; lean_object* v___x_2790_; 
v___x_2788_ = lean_box(0);
if (v_isShared_2786_ == 0)
{
lean_ctor_set(v___x_2785_, 0, v___x_2788_);
v___x_2790_ = v___x_2785_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v___x_2788_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16___boxed(lean_object* v_id_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16(v_id_2803_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec(v___y_2809_);
lean_dec_ref(v___y_2808_);
lean_dec(v___y_2807_);
lean_dec_ref(v___y_2806_);
lean_dec(v___y_2805_);
lean_dec_ref(v___y_2804_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7(lean_object* v_id_2814_, uint8_t v_enableLog_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v___x_2825_; lean_object* v_toCold_2826_; lean_object* v_env_2827_; lean_object* v_options_2828_; lean_object* v_currNamespace_2829_; lean_object* v_openDecls_2830_; lean_object* v_res_2831_; lean_object* v___x_2832_; 
v___x_2825_ = lean_st_ref_get(v___y_2823_);
v_toCold_2826_ = lean_ctor_get(v___y_2822_, 0);
v_env_2827_ = lean_ctor_get(v___x_2825_, 0);
lean_inc_ref(v_env_2827_);
lean_dec(v___x_2825_);
v_options_2828_ = lean_ctor_get(v_toCold_2826_, 2);
v_currNamespace_2829_ = lean_ctor_get(v_toCold_2826_, 4);
v_openDecls_2830_ = lean_ctor_get(v_toCold_2826_, 5);
lean_inc(v_openDecls_2830_);
lean_inc(v_currNamespace_2829_);
v_res_2831_ = l_Lean_ResolveName_resolveGlobalName(v_env_2827_, v_options_2828_, v_currNamespace_2829_, v_openDecls_2830_, v_id_2814_);
v___x_2832_ = lean_st_ref_get(v___y_2823_);
if (v_enableLog_2815_ == 0)
{
lean_object* v___x_2833_; 
lean_dec(v___x_2832_);
v___x_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2833_, 0, v_res_2831_);
return v___x_2833_;
}
else
{
lean_object* v_env_2834_; uint8_t v_isExporting_2835_; 
v_env_2834_ = lean_ctor_get(v___x_2832_, 0);
lean_inc_ref(v_env_2834_);
lean_dec(v___x_2832_);
v_isExporting_2835_ = lean_ctor_get_uint8(v_env_2834_, sizeof(void*)*8);
lean_dec_ref(v_env_2834_);
if (v_isExporting_2835_ == 0)
{
lean_object* v___x_2836_; 
v___x_2836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2836_, 0, v_res_2831_);
return v___x_2836_;
}
else
{
lean_object* v___x_2837_; 
v___x_2837_ = l_List_find_x3f___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__15(v_res_2831_);
if (lean_obj_tag(v___x_2837_) == 1)
{
lean_object* v_val_2838_; lean_object* v_fst_2839_; lean_object* v___x_2840_; 
v_val_2838_ = lean_ctor_get(v___x_2837_, 0);
lean_inc(v_val_2838_);
lean_dec_ref_known(v___x_2837_, 1);
v_fst_2839_ = lean_ctor_get(v_val_2838_, 0);
lean_inc(v_fst_2839_);
lean_dec(v_val_2838_);
v___x_2840_ = l_Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16(v_fst_2839_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
if (lean_obj_tag(v___x_2840_) == 0)
{
lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2847_ == 0)
{
lean_object* v_unused_2848_; 
v_unused_2848_ = lean_ctor_get(v___x_2840_, 0);
lean_dec(v_unused_2848_);
v___x_2842_ = v___x_2840_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_dec(v___x_2840_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v_res_2831_);
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_res_2831_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
lean_dec(v_res_2831_);
v_a_2849_ = lean_ctor_get(v___x_2840_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2840_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2840_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2840_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
else
{
lean_object* v___x_2857_; 
lean_dec(v___x_2837_);
v___x_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2857_, 0, v_res_2831_);
return v___x_2857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7___boxed(lean_object* v_id_2858_, lean_object* v_enableLog_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
uint8_t v_enableLog_boxed_2869_; lean_object* v_res_2870_; 
v_enableLog_boxed_2869_ = lean_unbox(v_enableLog_2859_);
v_res_2870_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7(v_id_2858_, v_enableLog_boxed_2869_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec_ref(v___y_2862_);
lean_dec(v___y_2861_);
lean_dec_ref(v___y_2860_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__19(lean_object* v_a_2871_, lean_object* v_a_2872_){
_start:
{
if (lean_obj_tag(v_a_2871_) == 0)
{
lean_object* v___x_2873_; 
v___x_2873_ = l_List_reverse___redArg(v_a_2872_);
return v___x_2873_;
}
else
{
lean_object* v_head_2874_; lean_object* v_tail_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2884_; 
v_head_2874_ = lean_ctor_get(v_a_2871_, 0);
v_tail_2875_ = lean_ctor_get(v_a_2871_, 1);
v_isSharedCheck_2884_ = !lean_is_exclusive(v_a_2871_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2877_ = v_a_2871_;
v_isShared_2878_ = v_isSharedCheck_2884_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_tail_2875_);
lean_inc(v_head_2874_);
lean_dec(v_a_2871_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2884_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v_fst_2879_; lean_object* v___x_2881_; 
v_fst_2879_ = lean_ctor_get(v_head_2874_, 0);
lean_inc(v_fst_2879_);
lean_dec(v_head_2874_);
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 1, v_a_2872_);
lean_ctor_set(v___x_2877_, 0, v_fst_2879_);
v___x_2881_ = v___x_2877_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_fst_2879_);
lean_ctor_set(v_reuseFailAlloc_2883_, 1, v_a_2872_);
v___x_2881_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
v_a_2871_ = v_tail_2875_;
v_a_2872_ = v___x_2881_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__18(lean_object* v_a_2885_, lean_object* v_a_2886_){
_start:
{
if (lean_obj_tag(v_a_2885_) == 0)
{
lean_object* v___x_2887_; 
v___x_2887_ = l_List_reverse___redArg(v_a_2886_);
return v___x_2887_;
}
else
{
lean_object* v_head_2888_; lean_object* v_tail_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2900_; 
v_head_2888_ = lean_ctor_get(v_a_2885_, 0);
v_tail_2889_ = lean_ctor_get(v_a_2885_, 1);
v_isSharedCheck_2900_ = !lean_is_exclusive(v_a_2885_);
if (v_isSharedCheck_2900_ == 0)
{
v___x_2891_ = v_a_2885_;
v_isShared_2892_ = v_isSharedCheck_2900_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_tail_2889_);
lean_inc(v_head_2888_);
lean_dec(v_a_2885_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2900_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v_snd_2893_; uint8_t v___x_2894_; 
v_snd_2893_ = lean_ctor_get(v_head_2888_, 1);
v___x_2894_ = l_List_isEmpty___redArg(v_snd_2893_);
if (v___x_2894_ == 0)
{
lean_del_object(v___x_2891_);
lean_dec(v_head_2888_);
v_a_2885_ = v_tail_2889_;
goto _start;
}
else
{
lean_object* v___x_2897_; 
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 1, v_a_2886_);
v___x_2897_ = v___x_2891_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_head_2888_);
lean_ctor_set(v_reuseFailAlloc_2899_, 1, v_a_2886_);
v___x_2897_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
v_a_2885_ = v_tail_2889_;
v_a_2886_ = v___x_2897_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8(lean_object* v_n_2901_, lean_object* v_cs_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v___x_2912_; lean_object* v_cs_2913_; uint8_t v___x_2917_; 
v___x_2912_ = lean_box(0);
v_cs_2913_ = l_List_filterTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__18(v_cs_2902_, v___x_2912_);
v___x_2917_ = l_List_isEmpty___redArg(v_cs_2913_);
if (v___x_2917_ == 0)
{
lean_dec(v_n_2901_);
goto v___jp_2914_;
}
else
{
lean_object* v_ref_2918_; lean_object* v___x_2919_; lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec(v_cs_2913_);
v_ref_2918_ = lean_ctor_get(v___y_2909_, 2);
v___x_2919_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_2918_, v_n_2901_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_);
v_a_2920_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2919_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2919_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
v___jp_2914_:
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2915_ = l_List_mapTR_loop___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__19(v_cs_2913_, v___x_2912_);
v___x_2916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
return v___x_2916_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8___boxed(lean_object* v_n_2928_, lean_object* v_cs_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8(v_n_2928_, v_cs_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_);
lean_dec(v___y_2937_);
lean_dec_ref(v___y_2936_);
lean_dec(v___y_2935_);
lean_dec_ref(v___y_2934_);
lean_dec(v___y_2933_);
lean_dec_ref(v___y_2932_);
lean_dec(v___y_2931_);
lean_dec_ref(v___y_2930_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2(lean_object* v_n_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
uint8_t v___x_2950_; lean_object* v___x_2951_; 
v___x_2950_ = 1;
lean_inc(v_n_2940_);
v___x_2951_ = l_Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7(v_n_2940_, v___x_2950_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v_a_2952_; lean_object* v___x_2953_; 
v_a_2952_ = lean_ctor_get(v___x_2951_, 0);
lean_inc(v_a_2952_);
lean_dec_ref_known(v___x_2951_, 1);
v___x_2953_ = l_Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8(v_n_2940_, v_a_2952_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_);
return v___x_2953_;
}
else
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
lean_dec(v_n_2940_);
v_a_2954_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2951_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2951_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2___boxed(lean_object* v_n_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_){
_start:
{
lean_object* v_res_2972_; 
v_res_2972_ = l___private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2(v_n_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_, v___y_2970_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0(lean_object* v_stx_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = ((lean_object*)(l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0___closed__0));
v___x_2985_ = l_Lean_preprocessSyntaxAndResolve___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__3(v_stx_2974_, v___x_2984_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_, v___y_2982_);
return v___x_2985_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0___boxed(lean_object* v_stx_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_){
_start:
{
lean_object* v_res_2996_; 
v_res_2996_ = l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0(v_stx_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec_ref(v___y_2987_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0(lean_object* v_id_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v___x_3007_; 
lean_inc(v_id_2997_);
v___x_3007_ = l_Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0(v_id_2997_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v___x_3009_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v___x_3007_, 1);
v___x_3009_ = l_Lean_ensureNonAmbiguous___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__1(v_id_2997_, v_a_3008_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
return v___x_3009_;
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
lean_dec(v_id_2997_);
v_a_3010_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_3007_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_3007_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0___boxed(lean_object* v_id_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0(v_id_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_);
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
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsealingStructure___closed__1(void){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; 
v___x_3030_ = ((lean_object*)(l_Lean_Elab_Tactic_evalUnsealingStructure___closed__0));
v___x_3031_ = l_Lean_stringToMessageData(v___x_3030_);
return v___x_3031_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsealingStructure___closed__3(void){
_start:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = ((lean_object*)(l_Lean_Elab_Tactic_evalUnsealingStructure___closed__2));
v___x_3034_ = l_Lean_stringToMessageData(v___x_3033_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure(lean_object* v_stx_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; uint8_t v___x_3047_; uint8_t v___x_3048_; lean_object* v___x_3049_; 
v___x_3045_ = lean_unsigned_to_nat(1u);
v___x_3046_ = l_Lean_Syntax_getArg(v_stx_3035_, v___x_3045_);
v___x_3047_ = 3;
v___x_3048_ = 1;
v___x_3049_ = l_Lean_Elab_Tactic_elabUnsealingStructureConfig___redArg(v___x_3046_, v___x_3047_, v___x_3048_, v_a_3036_, v_a_3042_, v_a_3043_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref_known(v___x_3049_, 1);
v___x_3051_ = lean_unsigned_to_nat(2u);
v___x_3052_ = l_Lean_Syntax_getArg(v_stx_3035_, v___x_3051_);
lean_inc(v___x_3052_);
v___x_3053_ = l_Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0(v___x_3052_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v___x_3055_; lean_object* v_a_3056_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc_n(v_a_3054_, 2);
lean_dec_ref_known(v___x_3053_, 1);
v___x_3055_ = l_Lean_getVirtualStructureInfo_x3f___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__1___redArg(v_a_3054_, v_a_3043_);
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
v___x_3059_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2(v___x_3052_, v_a_3054_, v___x_3058_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
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
v___x_3069_ = l_Lean_Parser_Tactic_UnsealingStructureReducibility_toReducibilityStatus(v___x_3068_);
v___x_3070_ = lean_unsigned_to_nat(4u);
v___x_3071_ = l_Lean_Syntax_getArg(v_stx_3035_, v___x_3070_);
v___x_3072_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_3072_, 0, v___x_3071_);
v___x_3073_ = l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg(v___x_3067_, v___x_3069_, v___x_3072_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
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
lean_object* v___x_3074_; uint8_t v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; 
lean_dec(v_a_3056_);
lean_dec(v_a_3050_);
v___x_3074_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsealingStructure___closed__1, &l_Lean_Elab_Tactic_evalUnsealingStructure___closed__1_once, _init_l_Lean_Elab_Tactic_evalUnsealingStructure___closed__1);
v___x_3075_ = 0;
v___x_3076_ = l_Lean_MessageData_ofConstName(v_a_3054_, v___x_3075_);
v___x_3077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3074_);
lean_ctor_set(v___x_3077_, 1, v___x_3076_);
v___x_3078_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsealingStructure___closed__3, &l_Lean_Elab_Tactic_evalUnsealingStructure___closed__3_once, _init_l_Lean_Elab_Tactic_evalUnsealingStructure___closed__3);
v___x_3079_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3077_);
lean_ctor_set(v___x_3079_, 1, v___x_3078_);
v___x_3080_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(v___x_3052_, v___x_3079_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_, v_a_3043_);
lean_dec(v___x_3052_);
return v___x_3080_;
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
lean_dec(v___x_3052_);
lean_dec(v_a_3050_);
v_a_3081_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_3053_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_3053_);
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
v_a_3089_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_3049_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3049_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsealingStructure___boxed(lean_object* v_stx_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_, lean_object* v_a_3104_, lean_object* v_a_3105_, lean_object* v_a_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l_Lean_Elab_Tactic_evalUnsealingStructure(v_stx_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_, v_a_3102_, v_a_3103_, v_a_3104_, v_a_3105_);
lean_dec(v_a_3105_);
lean_dec_ref(v_a_3104_);
lean_dec(v_a_3103_);
lean_dec_ref(v_a_3102_);
lean_dec(v_a_3101_);
lean_dec_ref(v_a_3100_);
lean_dec(v_a_3099_);
lean_dec_ref(v_a_3098_);
lean_dec(v_stx_3097_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7(lean_object* v_declName_3108_, uint8_t v_s_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v___x_3119_; 
v___x_3119_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___redArg(v_declName_3108_, v_s_3109_, v___y_3115_, v___y_3117_);
return v___x_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7___boxed(lean_object* v_declName_3120_, lean_object* v_s_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_){
_start:
{
uint8_t v_s_boxed_3131_; lean_object* v_res_3132_; 
v_s_boxed_3131_ = lean_unbox(v_s_3121_);
v_res_3132_ = l_Lean_setLocalReducibilityStatus___at___00Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3_spec__7(v_declName_3120_, v_s_boxed_3131_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_);
lean_dec(v___y_3129_);
lean_dec_ref(v___y_3128_);
lean_dec(v___y_3127_);
lean_dec_ref(v___y_3126_);
lean_dec(v___y_3125_);
lean_dec_ref(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3122_);
return v_res_3132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3(lean_object* v_00_u03b1_3133_, lean_object* v_names_3134_, uint8_t v_status_3135_, lean_object* v_t_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v___x_3146_; 
v___x_3146_ = l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___redArg(v_names_3134_, v_status_3135_, v_t_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3___boxed(lean_object* v_00_u03b1_3147_, lean_object* v_names_3148_, lean_object* v_status_3149_, lean_object* v_t_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_){
_start:
{
uint8_t v_status_boxed_3160_; lean_object* v_res_3161_; 
v_status_boxed_3160_ = lean_unbox(v_status_3149_);
v_res_3161_ = l_Lean_Elab_Tactic_unsealingStructure___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__3(v_00_u03b1_3147_, v_names_3148_, v_status_boxed_3160_, v_t_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec_ref(v_names_3148_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4(lean_object* v_00_u03b1_3162_, lean_object* v_ref_3163_, lean_object* v_msg_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_){
_start:
{
lean_object* v___x_3174_; 
v___x_3174_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___redArg(v_ref_3163_, v_msg_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4___boxed(lean_object* v_00_u03b1_3175_, lean_object* v_ref_3176_, lean_object* v_msg_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_){
_start:
{
lean_object* v_res_3187_; 
v_res_3187_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4(v_00_u03b1_3175_, v_ref_3176_, v_msg_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
lean_dec(v___y_3183_);
lean_dec_ref(v___y_3182_);
lean_dec(v___y_3181_);
lean_dec_ref(v___y_3180_);
lean_dec(v___y_3179_);
lean_dec_ref(v___y_3178_);
lean_dec(v_ref_3176_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13(lean_object* v_t_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_){
_start:
{
lean_object* v___x_3198_; 
v___x_3198_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___redArg(v_t_3188_, v___y_3196_);
return v___x_3198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13___boxed(lean_object* v_t_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_){
_start:
{
lean_object* v_res_3209_; 
v_res_3209_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__5_spec__13(v_t_3199_, v___y_3200_, v___y_3201_, v___y_3202_, v___y_3203_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_);
lean_dec(v___y_3207_);
lean_dec_ref(v___y_3206_);
lean_dec(v___y_3205_);
lean_dec_ref(v___y_3204_);
lean_dec(v___y_3203_);
lean_dec_ref(v___y_3202_);
lean_dec(v___y_3201_);
lean_dec_ref(v___y_3200_);
return v_res_3209_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10(lean_object* v_00_u03b1_3210_, lean_object* v_msg_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_){
_start:
{
lean_object* v___x_3221_; 
v___x_3221_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___redArg(v_msg_3211_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10___boxed(lean_object* v_00_u03b1_3222_, lean_object* v_msg_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v_res_3233_; 
v_res_3233_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__4_spec__10(v_00_u03b1_3222_, v_msg_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
lean_dec(v___y_3231_);
lean_dec_ref(v___y_3230_);
lean_dec(v___y_3229_);
lean_dec_ref(v___y_3228_);
lean_dec(v___y_3227_);
lean_dec_ref(v___y_3226_);
lean_dec(v___y_3225_);
lean_dec_ref(v___y_3224_);
return v_res_3233_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18(lean_object* v_00_u03b1_3234_, lean_object* v_constName_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_){
_start:
{
lean_object* v___x_3245_; 
v___x_3245_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___redArg(v_constName_3235_, v___y_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_);
return v___x_3245_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18___boxed(lean_object* v_00_u03b1_3246_, lean_object* v_constName_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_){
_start:
{
lean_object* v_res_3257_; 
v_res_3257_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__2_spec__4_spec__10_spec__18(v_00_u03b1_3246_, v_constName_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_);
lean_dec(v___y_3255_);
lean_dec_ref(v___y_3254_);
lean_dec(v___y_3253_);
lean_dec_ref(v___y_3252_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
lean_dec(v___y_3249_);
lean_dec_ref(v___y_3248_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20(lean_object* v_00_u03b1_3258_, lean_object* v_ref_3259_, lean_object* v_constName_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___redArg(v_ref_3259_, v_constName_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20___boxed(lean_object* v_00_u03b1_3271_, lean_object* v_ref_3272_, lean_object* v_constName_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l_Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20(v_00_u03b1_3271_, v_ref_3272_, v_constName_3273_, v___y_3274_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
lean_dec(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
lean_dec_ref(v___y_3276_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v_ref_3272_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(lean_object* v_opt_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_){
_start:
{
lean_object* v___x_3294_; 
v___x_3294_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___redArg(v_opt_3284_, v___y_3291_);
return v___x_3294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22___boxed(lean_object* v_opt_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_){
_start:
{
lean_object* v_res_3305_; 
v_res_3305_ = l_Lean_Option_getM___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__22(v_opt_3295_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_, v___y_3302_, v___y_3303_);
lean_dec(v___y_3303_);
lean_dec_ref(v___y_3302_);
lean_dec(v___y_3301_);
lean_dec_ref(v___y_3300_);
lean_dec(v___y_3299_);
lean_dec_ref(v___y_3298_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec_ref(v_opt_3295_);
return v_res_3305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(lean_object* v_00_u03b1_3306_, lean_object* v_ref_3307_, lean_object* v_msg_3308_, lean_object* v_declHint_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v___x_3319_; 
v___x_3319_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___redArg(v_ref_3307_, v_msg_3308_, v_declHint_3309_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28___boxed(lean_object* v_00_u03b1_3320_, lean_object* v_ref_3321_, lean_object* v_msg_3322_, lean_object* v_declHint_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28(v_00_u03b1_3320_, v_ref_3321_, v_msg_3322_, v_declHint_3323_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
lean_dec(v___y_3331_);
lean_dec_ref(v___y_3330_);
lean_dec(v___y_3329_);
lean_dec_ref(v___y_3328_);
lean_dec(v___y_3327_);
lean_dec_ref(v___y_3326_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
lean_dec(v_ref_3321_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(lean_object* v_msg_3334_, lean_object* v_declHint_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_){
_start:
{
lean_object* v___x_3345_; 
v___x_3345_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___redArg(v_msg_3334_, v_declHint_3335_, v___y_3343_);
return v___x_3345_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35___boxed(lean_object* v_msg_3346_, lean_object* v_declHint_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
lean_object* v_res_3357_; 
v_res_3357_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_filterFieldList___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__8_spec__20_spec__28_spec__33_spec__35(v_msg_3346_, v_declHint_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_);
lean_dec(v___y_3355_);
lean_dec_ref(v___y_3354_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
lean_dec(v___y_3349_);
lean_dec_ref(v___y_3348_);
return v_res_3357_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(lean_object* v_ref_3358_, lean_object* v_msgData_3359_, uint8_t v_severity_3360_, uint8_t v_isSilent_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v___x_3371_; 
v___x_3371_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___redArg(v_ref_3358_, v_msgData_3359_, v_severity_3360_, v_isSilent_3361_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_);
return v___x_3371_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32___boxed(lean_object* v_ref_3372_, lean_object* v_msgData_3373_, lean_object* v_severity_3374_, lean_object* v_isSilent_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_){
_start:
{
uint8_t v_severity_boxed_3385_; uint8_t v_isSilent_boxed_3386_; lean_object* v_res_3387_; 
v_severity_boxed_3385_ = lean_unbox(v_severity_3374_);
v_isSilent_boxed_3386_ = lean_unbox(v_isSilent_3375_);
v_res_3387_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00Lean_checkPrivateInPublic___at___00Lean_resolveGlobalName___at___00__private_Lean_ResolveName_0__Lean_resolveGlobalConstCore___at___00Lean_resolveGlobalConst___at___00Lean_resolveGlobalConstNoOverload___at___00Lean_Elab_Tactic_evalUnsealingStructure_spec__0_spec__0_spec__2_spec__7_spec__16_spec__23_spec__28_spec__32(v_ref_3372_, v_msgData_3373_, v_severity_boxed_3385_, v_isSilent_boxed_3386_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
lean_dec(v_ref_3372_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1(){
_start:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; 
v___x_3401_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3402_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__1));
v___x_3403_ = ((lean_object*)(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___closed__3));
v___x_3404_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalUnsealingStructure___boxed), 10, 0);
v___x_3405_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3401_, v___x_3402_, v___x_3403_, v___x_3404_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1___boxed(lean_object* v_a_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1();
return v_res_3407_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_UnsealingStructure(uint8_t builtin) {
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
l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility = _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility();
lean_mark_persistent(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalTermUnsealingStructureReducibility);
l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility = _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility();
lean_mark_persistent(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureReducibility);
l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig = _init_l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig();
lean_mark_persistent(l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_instEvalExprUnsealingStructureConfig);
res = l___private_Lean_Elab_Tactic_UnsealingStructure_0__Lean_Elab_Tactic_evalUnsealingStructure___regBuiltin_Lean_Elab_Tactic_evalUnsealingStructure__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_UnsealingStructure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_UnsealingStructure(uint8_t builtin) {
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
res = runtime_initialize_Lean_Elab_Tactic_UnsealingStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_UnsealingStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_UnsealingStructure(builtin);
}
#ifdef __cplusplus
}
#endif
