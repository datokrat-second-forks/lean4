// Lean compiler output
// Module: Lean.Elab.DefeqStructure
// Imports: public import Lean.Elab.Command public import Lean.Elab.DeclModifiers public import Lean.Elab.DeclarationRange public import Lean.Meta.VirtualStructure import Lean.Elab.ConfigEval import Lean.Meta.Injective import Lean.Elab.MutualInductive import Lean.DocString.Add import Init.Data.Function import Lean.Elab.Deriving.Basic import Lean.Meta.Transport
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
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_MutualInductive_0__Lean_Elab_Command_typelessBinder_x3f(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName_x3f(lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t lean_is_reserved_name(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_shift(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_evalBoolItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_instBEqInternalExceptionId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
lean_object* l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Elab_Term_processDefDeriving___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
lean_object* l_Lean_enableRealizationsForConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Lean_registerVirtualStructure(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_value_x21(lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkVirtualInjectiveTheorems(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_withScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* l_Lean_Elab_Command_getLevelNames___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_expandDeclId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__0;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__2 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__2_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "StructureConfig"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__4 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 100, 102, 194, 167, 62, 107, 182)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(63, 4, 240, 96, 23, 131, 236, 217)}};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1;
static lean_once_cell_t l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2;
static lean_once_cell_t l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nof type `"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__1;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__2;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__3;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__4 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__6;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Could not evaluate the expression"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__7 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__8;
static const lean_string_object l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Expression contains `sorry`:"};
static const lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__9 = (const lean_object*)&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__9_value;
static lean_once_cell_t l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "defeq"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__2_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 100, 102, 194, 167, 62, 107, 182)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__4_value),LEAN_SCALAR_PTR_LITERAL(63, 4, 240, 96, 23, 131, 236, 217)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(122, 65, 68, 152, 187, 88, 214, 55)}};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___closed__0 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Command_elabStructureConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Command_elabStructureConfig___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Command_elabStructureConfig___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabStructureConfig___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_isDefeqStructure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Command_isDefeqStructure___closed__0 = (const lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_isDefeqStructure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "structureTk"};
static const lean_object* l_Lean_Elab_Command_isDefeqStructure___closed__1 = (const lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_isDefeqStructure___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefeqStructure___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefeqStructure___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_isDefeqStructure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__1_value),LEAN_SCALAR_PTR_LITERAL(132, 164, 13, 167, 248, 219, 132, 242)}};
static const lean_object* l_Lean_Elab_Command_isDefeqStructure___closed__2 = (const lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_isDefeqStructure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_isDefeqStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__3(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "CanonicalEquivalence"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 213, 153, 238, 45, 67, 100, 241)}};
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 17, 213, 173, 237, 27, 227, 118)}};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9_spec__18(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "Only parameters appearing in the declaration header may have their binders kinds be overridden"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "If this is not intended to be an override, use a binder with a type: for example, `(x : _)`"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__2_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__3_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__12(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__0;
static lean_once_cell_t l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__1;
static lean_once_cell_t l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__2;
static const lean_array_object l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__11(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__2 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3_value;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Expecting binders that update binder kinds of type parameters."};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__4 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__5;
static const lean_string_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Invalid resulting type: Expected a sort"};
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__6 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a definition"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__2_value;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isDefn\?"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__3 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__3_value;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__4_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__0___boxed, .m_arity = 9, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__0 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__1___boxed, .m_arity = 9, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__1 = (const lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__16(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22_spec__28(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Invalid modifier: The "};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__1;
static const lean_string_object l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = " of a `+defeq` structure can only be preceded by a doc comment"};
static const lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "UnhygienicMain"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(124, 169, 242, 144, 140, 56, 85, 78)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__7;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__8_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "expose"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__11;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(170, 113, 233, 77, 243, 78, 243, 129)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__13;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25_spec__30(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__11(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "Invalid attribute: A `+defeq` structure is always irreducible, `@["};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "]` is not allowed"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "implicit_reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "instance_reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "irreducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__8_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is a reserved name"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__1;
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "a non-private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "A `+defeq` structure must have exactly one field"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__1;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "equivDef"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__2_value),LEAN_SCALAR_PTR_LITERAL(147, 183, 156, 110, 3, 215, 99, 72)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Invalid field name `"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__5;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "`: This is the name of the structure constructor"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__7;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "field"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__9_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "constructor"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 117, .m_capacity = 117, .m_length = 116, .m_data = "Invalid field: The field of a `+defeq` structure must be of the form `name : type`, without binders or default value"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__12;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structSimpleBinder"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__14_value_aux_1),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__13_value),LEAN_SCALAR_PTR_LITERAL(24, 230, 214, 182, 254, 52, 213, 225)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__14_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "A `+defeq` structure cannot extend other structures"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__15 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Command_elabDefeqStructure___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__16;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__17 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__18_value_aux_0),((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__18_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__18_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__17_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__18 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__18_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__19 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__19_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sort"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__20 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__20_value;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__21_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__21_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__20_value),LEAN_SCALAR_PTR_LITERAL(75, 182, 124, 97, 129, 181, 20, 113)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__21 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__21_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Sort"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__22 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__22_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Level"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__23 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__23_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__24 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Command_isDefeqStructure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__23_value),LEAN_SCALAR_PTR_LITERAL(176, 210, 143, 23, 235, 250, 136, 158)}};
static const lean_ctor_object l_Lean_Elab_Command_elabDefeqStructure___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__24_value),LEAN_SCALAR_PTR_LITERAL(144, 86, 172, 30, 114, 81, 66, 18)}};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__25 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__25_value;
static const lean_string_object l_Lean_Elab_Command_elabDefeqStructure___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Command_elabDefeqStructure___closed__26 = (const lean_object*)&l_Lean_Elab_Command_elabDefeqStructure___closed__26_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_ConfigEval_unsupportedExprExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___closed__0, &l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg();
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___boxed(lean_object* v_00_u03b1_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0(v_00_u03b1_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_);
lean_dec(v___y_20_);
lean_dec_ref(v___y_19_);
lean_dec(v___y_18_);
lean_dec_ref(v___y_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1(lean_object* v_msgData_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v___x_29_; lean_object* v_env_30_; lean_object* v___x_31_; lean_object* v_toCold_32_; lean_object* v_mctx_33_; lean_object* v_lctx_34_; lean_object* v_options_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_29_ = lean_st_ref_get(v___y_27_);
v_env_30_ = lean_ctor_get(v___x_29_, 0);
lean_inc_ref(v_env_30_);
lean_dec(v___x_29_);
v___x_31_ = lean_st_ref_get(v___y_25_);
v_toCold_32_ = lean_ctor_get(v___y_26_, 0);
v_mctx_33_ = lean_ctor_get(v___x_31_, 0);
lean_inc_ref(v_mctx_33_);
lean_dec(v___x_31_);
v_lctx_34_ = lean_ctor_get(v___y_24_, 2);
v_options_35_ = lean_ctor_get(v_toCold_32_, 2);
lean_inc_ref(v_options_35_);
lean_inc_ref(v_lctx_34_);
v___x_36_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_36_, 0, v_env_30_);
lean_ctor_set(v___x_36_, 1, v_mctx_33_);
lean_ctor_set(v___x_36_, 2, v_lctx_34_);
lean_ctor_set(v___x_36_, 3, v_options_35_);
v___x_37_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v_msgData_23_);
v___x_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1___boxed(lean_object* v_msgData_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1(v_msgData_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___redArg(lean_object* v_msg_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_ref_52_; lean_object* v___x_53_; lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_62_; 
v_ref_52_ = lean_ctor_get(v___y_49_, 2);
v___x_53_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1(v_msg_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_);
v_a_54_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_62_ == 0)
{
v___x_56_ = v___x_53_;
v_isShared_57_ = v_isSharedCheck_62_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_dec(v___x_53_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_62_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_58_; lean_object* v___x_60_; 
lean_inc(v_ref_52_);
v___x_58_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_58_, 0, v_ref_52_);
lean_ctor_set(v___x_58_, 1, v_a_54_);
if (v_isShared_57_ == 0)
{
lean_ctor_set_tag(v___x_56_, 1);
lean_ctor_set(v___x_56_, 0, v___x_58_);
v___x_60_ = v___x_56_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v___x_58_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___redArg___boxed(lean_object* v_msg_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___redArg(v_msg_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
lean_dec(v___y_67_);
lean_dec_ref(v___y_66_);
lean_dec(v___y_65_);
lean_dec_ref(v___y_64_);
return v_res_69_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__1));
v___x_73_ = l_Lean_stringToMessageData(v___x_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0(lean_object* v___x_74_, lean_object* v_ctor_75_, lean_object* v_args_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v___x_102_; uint8_t v___x_103_; 
v___x_102_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__0));
v___x_103_ = lean_string_dec_eq(v_ctor_75_, v___x_102_);
if (v___x_103_ == 0)
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_Elab_ConfigEval_throwUnsupportedExpr___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__0___redArg();
return v___x_104_;
}
else
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; 
v___x_105_ = lean_array_get_size(v_args_76_);
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_dec_eq(v___x_105_, v___x_106_);
if (v___x_107_ == 0)
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_a_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_117_; 
v___x_108_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__2, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__2_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___closed__2);
v___x_109_ = l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___redArg(v___x_108_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
v_a_110_ = lean_ctor_get(v___x_109_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_109_);
if (v_isSharedCheck_117_ == 0)
{
v___x_112_ = v___x_109_;
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_a_110_);
lean_dec(v___x_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_117_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_115_; 
if (v_isShared_113_ == 0)
{
v___x_115_ = v___x_112_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_a_110_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
else
{
goto v___jp_82_;
}
}
v___jp_82_:
{
lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_array_get_borrowed(v___x_74_, v_args_76_, v___x_83_);
lean_inc(v___x_84_);
v___x_85_ = l_Lean_Elab_ConfigEval_EvalExpr_evalBoolExpr(v___x_84_, v___y_77_, v___y_78_, v___y_79_, v___y_80_);
if (lean_obj_tag(v___x_85_) == 0)
{
lean_object* v_a_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_93_; 
v_a_86_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_93_ == 0)
{
v___x_88_ = v___x_85_;
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
else
{
lean_inc(v_a_86_);
lean_dec(v___x_85_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_91_; 
if (v_isShared_89_ == 0)
{
v___x_91_ = v___x_88_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_86_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
else
{
lean_object* v_a_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_101_; 
v_a_94_ = lean_ctor_get(v___x_85_, 0);
v_isSharedCheck_101_ = !lean_is_exclusive(v___x_85_);
if (v_isSharedCheck_101_ == 0)
{
v___x_96_ = v___x_85_;
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_a_94_);
lean_dec(v___x_85_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_101_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___x_99_; 
if (v_isShared_97_ == 0)
{
v___x_99_ = v___x_96_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v_a_94_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
return v___x_99_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___boxed(lean_object* v___x_118_, lean_object* v_ctor_119_, lean_object* v_args_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0(v___x_118_, v_ctor_119_, v_args_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
lean_dec_ref(v_args_120_);
lean_dec_ref(v_ctor_119_);
lean_dec_ref(v___x_118_);
return v_res_126_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__0(void){
_start:
{
lean_object* v___x_127_; lean_object* v___f_128_; 
v___x_127_ = l_Lean_instInhabitedExpr;
v___f_128_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___lam__0___boxed), 8, 1);
lean_closure_set(v___f_128_, 0, v___x_127_);
return v___f_128_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr(lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
lean_object* v___f_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___f_144_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__0, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__0_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__0);
v___x_145_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5));
v___x_146_ = l_Lean_Elab_ConfigEval_EvalExpr_withSimpleEvalExpr___redArg(v___x_145_, v___f_144_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___boxed(lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr(v_a_147_, v_a_148_, v_a_149_, v_a_150_, v_a_151_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1(lean_object* v_00_u03b1_154_, lean_object* v_msg_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v___x_161_; 
v___x_161_ = l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___redArg(v_msg_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1___boxed(lean_object* v_00_u03b1_162_, lean_object* v_msg_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l_Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1(v_00_u03b1_162_, v_msg_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
return v_res_169_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_171_ = lean_box(0);
v___x_172_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5));
v___x_173_ = l_Lean_Expr_const___override(v___x_172_, v___x_171_);
return v___x_173_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2(void){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1);
v___x_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__3(void){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_176_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2);
v___x_177_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__0));
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v___x_177_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
return v___x_178_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig(void){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__3, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__3_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__3);
return v___x_179_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_box(1);
v___x_181_ = l_Lean_MessageData_ofFormat(v___x_180_);
return v___x_181_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_186_ = l_Lean_MessageData_ofFormat(v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5(lean_object* v_x_187_, lean_object* v_x_188_){
_start:
{
if (lean_obj_tag(v_x_188_) == 0)
{
return v_x_187_;
}
else
{
lean_object* v_head_189_; lean_object* v_tail_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_212_; 
v_head_189_ = lean_ctor_get(v_x_188_, 0);
v_tail_190_ = lean_ctor_get(v_x_188_, 1);
v_isSharedCheck_212_ = !lean_is_exclusive(v_x_188_);
if (v_isSharedCheck_212_ == 0)
{
v___x_192_ = v_x_188_;
v_isShared_193_ = v_isSharedCheck_212_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_tail_190_);
lean_inc(v_head_189_);
lean_dec(v_x_188_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_212_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v_before_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_210_; 
v_before_194_ = lean_ctor_get(v_head_189_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v_head_189_);
if (v_isSharedCheck_210_ == 0)
{
lean_object* v_unused_211_; 
v_unused_211_ = lean_ctor_get(v_head_189_, 1);
lean_dec(v_unused_211_);
v___x_196_ = v_head_189_;
v_isShared_197_ = v_isSharedCheck_210_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_before_194_);
lean_dec(v_head_189_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_210_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_198_; lean_object* v___x_200_; 
v___x_198_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_197_ == 0)
{
lean_ctor_set_tag(v___x_196_, 7);
lean_ctor_set(v___x_196_, 1, v___x_198_);
lean_ctor_set(v___x_196_, 0, v_x_187_);
v___x_200_ = v___x_196_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_x_187_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___x_198_);
v___x_200_ = v_reuseFailAlloc_209_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__3);
if (v_isShared_193_ == 0)
{
lean_ctor_set_tag(v___x_192_, 7);
lean_ctor_set(v___x_192_, 1, v___x_201_);
lean_ctor_set(v___x_192_, 0, v___x_200_);
v___x_203_ = v___x_192_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v___x_200_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v___x_201_);
v___x_203_ = v_reuseFailAlloc_208_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_204_ = l_Lean_MessageData_ofSyntax(v_before_194_);
v___x_205_ = l_Lean_indentD(v___x_204_);
v___x_206_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_206_, 0, v___x_203_);
lean_ctor_set(v___x_206_, 1, v___x_205_);
v_x_187_ = v___x_206_;
v_x_188_ = v_tail_190_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(lean_object* v_opts_213_, lean_object* v_opt_214_){
_start:
{
lean_object* v_name_215_; lean_object* v_defValue_216_; lean_object* v_map_217_; lean_object* v___x_218_; 
v_name_215_ = lean_ctor_get(v_opt_214_, 0);
v_defValue_216_ = lean_ctor_get(v_opt_214_, 1);
v_map_217_ = lean_ctor_get(v_opts_213_, 0);
v___x_218_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_217_, v_name_215_);
if (lean_obj_tag(v___x_218_) == 0)
{
uint8_t v___x_219_; 
v___x_219_ = lean_unbox(v_defValue_216_);
return v___x_219_;
}
else
{
lean_object* v_val_220_; 
v_val_220_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_val_220_);
lean_dec_ref_known(v___x_218_, 1);
if (lean_obj_tag(v_val_220_) == 1)
{
uint8_t v_v_221_; 
v_v_221_ = lean_ctor_get_uint8(v_val_220_, 0);
lean_dec_ref_known(v_val_220_, 0);
return v_v_221_;
}
else
{
uint8_t v___x_222_; 
lean_dec(v_val_220_);
v___x_222_ = lean_unbox(v_defValue_216_);
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_opts_223_, lean_object* v_opt_224_){
_start:
{
uint8_t v_res_225_; lean_object* v_r_226_; 
v_res_225_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v_opts_223_, v_opt_224_);
lean_dec_ref(v_opt_224_);
lean_dec_ref(v_opts_223_);
v_r_226_ = lean_box(v_res_225_);
return v_r_226_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__1));
v___x_231_ = l_Lean_MessageData_ofFormat(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(lean_object* v_msgData_232_, lean_object* v_macroStack_233_, lean_object* v___y_234_){
_start:
{
lean_object* v_toCold_236_; lean_object* v_options_237_; lean_object* v___x_238_; uint8_t v___x_239_; 
v_toCold_236_ = lean_ctor_get(v___y_234_, 0);
v_options_237_ = lean_ctor_get(v_toCold_236_, 2);
v___x_238_ = l_Lean_Elab_pp_macroStack;
v___x_239_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v_options_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; 
lean_dec(v_macroStack_233_);
v___x_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_240_, 0, v_msgData_232_);
return v___x_240_;
}
else
{
if (lean_obj_tag(v_macroStack_233_) == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v_msgData_232_);
return v___x_241_;
}
else
{
lean_object* v_head_242_; lean_object* v_after_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_258_; 
v_head_242_ = lean_ctor_get(v_macroStack_233_, 0);
lean_inc(v_head_242_);
v_after_243_ = lean_ctor_get(v_head_242_, 1);
v_isSharedCheck_258_ = !lean_is_exclusive(v_head_242_);
if (v_isSharedCheck_258_ == 0)
{
lean_object* v_unused_259_; 
v_unused_259_ = lean_ctor_get(v_head_242_, 0);
lean_dec(v_unused_259_);
v___x_245_ = v_head_242_;
v_isShared_246_ = v_isSharedCheck_258_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_after_243_);
lean_dec(v_head_242_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_258_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_247_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_246_ == 0)
{
lean_ctor_set_tag(v___x_245_, 7);
lean_ctor_set(v___x_245_, 1, v___x_247_);
lean_ctor_set(v___x_245_, 0, v_msgData_232_);
v___x_249_ = v___x_245_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v_msgData_232_);
lean_ctor_set(v_reuseFailAlloc_257_, 1, v___x_247_);
v___x_249_ = v_reuseFailAlloc_257_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v_msgData_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_250_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2);
v___x_251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = l_Lean_MessageData_ofSyntax(v_after_243_);
v___x_253_ = l_Lean_indentD(v___x_252_);
v_msgData_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_254_, 0, v___x_251_);
lean_ctor_set(v_msgData_254_, 1, v___x_253_);
v___x_255_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5(v_msgData_254_, v_macroStack_233_);
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_260_, lean_object* v_macroStack_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_msgData_260_, v_macroStack_261_, v___y_262_);
lean_dec_ref(v___y_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(lean_object* v_msg_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_ref_273_; lean_object* v_macroStack_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v_a_277_; lean_object* v___x_278_; lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_287_; 
v_ref_273_ = lean_ctor_get(v___y_270_, 2);
v_macroStack_274_ = lean_ctor_get(v___y_266_, 1);
v___x_275_ = l_Lean_Elab_getBetterRef(v_ref_273_, v_macroStack_274_);
v___x_276_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1(v_msg_265_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
v_a_277_ = lean_ctor_get(v___x_276_, 0);
lean_inc(v_a_277_);
lean_dec_ref(v___x_276_);
lean_inc(v_macroStack_274_);
v___x_278_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_a_277_, v_macroStack_274_, v___y_270_);
v_a_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_287_ == 0)
{
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_287_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_287_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_275_);
lean_ctor_set(v___x_283_, 1, v_a_279_);
if (v_isShared_282_ == 0)
{
lean_ctor_set_tag(v___x_281_, 1);
lean_ctor_set(v___x_281_, 0, v___x_283_);
v___x_285_ = v___x_281_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg___boxed(lean_object* v_msg_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(v_msg_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
return v_res_296_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_297_ = lean_box(0);
v___x_298_ = l_Lean_Elab_abortTermExceptionId;
v___x_299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___x_297_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg(){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___closed__0);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg___boxed(lean_object* v___y_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg();
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___redArg(lean_object* v_e_305_, lean_object* v___y_306_){
_start:
{
uint8_t v___x_308_; 
v___x_308_ = l_Lean_Expr_hasMVar(v_e_305_);
if (v___x_308_ == 0)
{
lean_object* v___x_309_; 
v___x_309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_309_, 0, v_e_305_);
return v___x_309_;
}
else
{
lean_object* v___x_310_; lean_object* v_mctx_311_; lean_object* v___x_312_; lean_object* v_fst_313_; lean_object* v_snd_314_; lean_object* v___x_315_; lean_object* v_cache_316_; lean_object* v_zetaDeltaFVarIds_317_; lean_object* v_postponed_318_; lean_object* v_diag_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_328_; 
v___x_310_ = lean_st_ref_get(v___y_306_);
v_mctx_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc_ref(v_mctx_311_);
lean_dec(v___x_310_);
v___x_312_ = l_Lean_instantiateMVarsCore(v_mctx_311_, v_e_305_);
v_fst_313_ = lean_ctor_get(v___x_312_, 0);
lean_inc(v_fst_313_);
v_snd_314_ = lean_ctor_get(v___x_312_, 1);
lean_inc(v_snd_314_);
lean_dec_ref(v___x_312_);
v___x_315_ = lean_st_ref_take(v___y_306_);
v_cache_316_ = lean_ctor_get(v___x_315_, 1);
v_zetaDeltaFVarIds_317_ = lean_ctor_get(v___x_315_, 2);
v_postponed_318_ = lean_ctor_get(v___x_315_, 3);
v_diag_319_ = lean_ctor_get(v___x_315_, 4);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_328_ == 0)
{
lean_object* v_unused_329_; 
v_unused_329_ = lean_ctor_get(v___x_315_, 0);
lean_dec(v_unused_329_);
v___x_321_ = v___x_315_;
v_isShared_322_ = v_isSharedCheck_328_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_diag_319_);
lean_inc(v_postponed_318_);
lean_inc(v_zetaDeltaFVarIds_317_);
lean_inc(v_cache_316_);
lean_dec(v___x_315_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_328_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 0, v_snd_314_);
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_snd_314_);
lean_ctor_set(v_reuseFailAlloc_327_, 1, v_cache_316_);
lean_ctor_set(v_reuseFailAlloc_327_, 2, v_zetaDeltaFVarIds_317_);
lean_ctor_set(v_reuseFailAlloc_327_, 3, v_postponed_318_);
lean_ctor_set(v_reuseFailAlloc_327_, 4, v_diag_319_);
v___x_324_ = v_reuseFailAlloc_327_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = lean_st_ref_put(v___y_306_, v___x_324_);
v___x_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_326_, 0, v_fst_313_);
return v___x_326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___redArg___boxed(lean_object* v_e_330_, lean_object* v___y_331_, lean_object* v___y_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___redArg(v_e_330_, v___y_331_);
lean_dec(v___y_331_);
return v_res_333_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__1(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__0));
v___x_336_ = l_Lean_stringToMessageData(v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__2(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__1);
v___x_338_ = l_Lean_MessageData_ofExpr(v___x_337_);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__3(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__2, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__2_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__2);
v___x_340_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__1, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__1_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__1);
v___x_341_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v___x_339_);
return v___x_341_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__4));
v___x_344_ = l_Lean_stringToMessageData(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__6(void){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_345_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5);
v___x_346_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__3, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__3_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__3);
v___x_347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_345_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__8(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__7));
v___x_350_ = l_Lean_stringToMessageData(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__10(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__9));
v___x_353_ = l_Lean_stringToMessageData(v___x_352_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0(lean_object* v_stx_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_ty_x3f_362_; uint8_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v_toCold_368_; lean_object* v_currRecDepth_369_; lean_object* v_ref_370_; uint8_t v_diag_371_; uint8_t v_suppressElabErrors_372_; uint8_t v___x_373_; lean_object* v_ref_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v_ty_x3f_362_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig___closed__2);
v___x_363_ = 1;
v___x_364_ = lean_box(0);
v___x_365_ = lean_box(v___x_363_);
v___x_366_ = lean_box(v___x_363_);
lean_inc(v_stx_354_);
v___x_367_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_367_, 0, v_stx_354_);
lean_closure_set(v___x_367_, 1, v_ty_x3f_362_);
lean_closure_set(v___x_367_, 2, v___x_365_);
lean_closure_set(v___x_367_, 3, v___x_366_);
lean_closure_set(v___x_367_, 4, v___x_364_);
v_toCold_368_ = lean_ctor_get(v_a_359_, 0);
v_currRecDepth_369_ = lean_ctor_get(v_a_359_, 1);
v_ref_370_ = lean_ctor_get(v_a_359_, 2);
v_diag_371_ = lean_ctor_get_uint8(v_a_359_, sizeof(void*)*3);
v_suppressElabErrors_372_ = lean_ctor_get_uint8(v_a_359_, sizeof(void*)*3 + 1);
v___x_373_ = 1;
v_ref_374_ = l_Lean_replaceRef(v_stx_354_, v_ref_370_);
lean_dec(v_stx_354_);
lean_inc(v_currRecDepth_369_);
lean_inc_ref(v_toCold_368_);
v___x_375_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_375_, 0, v_toCold_368_);
lean_ctor_set(v___x_375_, 1, v_currRecDepth_369_);
lean_ctor_set(v___x_375_, 2, v_ref_374_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*3, v_diag_371_);
lean_ctor_set_uint8(v___x_375_, sizeof(void*)*3 + 1, v_suppressElabErrors_372_);
v___x_376_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_367_, v___x_373_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v___x_375_, v_a_360_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_378_; lean_object* v_a_379_; lean_object* v___y_381_; lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___y_384_; lean_object* v___y_385_; lean_object* v___y_386_; lean_object* v___y_387_; lean_object* v___y_388_; lean_object* v___y_389_; uint8_t v___y_390_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___y_419_; lean_object* v___y_420_; lean_object* v___y_421_; lean_object* v___y_422_; lean_object* v___y_423_; lean_object* v___y_424_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___y_458_; lean_object* v___y_459_; lean_object* v___y_460_; lean_object* v___y_461_; uint8_t v___x_474_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
lean_inc(v_a_377_);
lean_dec_ref_known(v___x_376_, 1);
v___x_378_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___redArg(v_a_377_, v_a_358_);
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
lean_dec_ref(v___x_378_);
v___x_474_ = l_Lean_Expr_hasSorry(v_a_379_);
if (v___x_474_ == 0)
{
v___y_419_ = v_a_355_;
v___y_420_ = v_a_356_;
v___y_421_ = v_a_357_;
v___y_422_ = v_a_358_;
v___y_423_ = v___x_375_;
v___y_424_ = v_a_360_;
goto v___jp_418_;
}
else
{
uint8_t v___x_475_; 
v___x_475_ = l_Lean_Expr_hasSyntheticSorry(v_a_379_);
if (v___x_475_ == 0)
{
v___y_456_ = v_a_355_;
v___y_457_ = v_a_356_;
v___y_458_ = v_a_357_;
v___y_459_ = v_a_358_;
v___y_460_ = v___x_375_;
v___y_461_ = v_a_360_;
goto v___jp_455_;
}
else
{
lean_object* v___x_476_; lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec(v_a_379_);
lean_dec_ref_known(v___x_375_, 3);
v___x_476_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_477_ = lean_ctor_get(v___x_476_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_476_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_476_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_476_);
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
v___jp_380_:
{
if (v___y_390_ == 0)
{
if (lean_obj_tag(v___y_389_) == 0)
{
lean_dec_ref_known(v___y_389_, 2);
lean_dec_ref(v___y_384_);
lean_dec(v_a_379_);
return v___y_387_;
}
else
{
lean_object* v_id_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_404_; 
v_id_391_ = lean_ctor_get(v___y_389_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___y_389_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v___y_389_, 1);
lean_dec(v_unused_405_);
v___x_393_ = v___y_389_;
v_isShared_394_ = v_isSharedCheck_404_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_id_391_);
lean_dec(v___y_389_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_404_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
uint8_t v___x_395_; 
v___x_395_ = l_Lean_instBEqInternalExceptionId_beq(v___y_383_, v_id_391_);
lean_dec(v_id_391_);
if (v___x_395_ == 0)
{
lean_del_object(v___x_393_);
lean_dec_ref(v___y_384_);
lean_dec(v_a_379_);
return v___y_387_;
}
else
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
lean_dec_ref(v___y_387_);
v___x_396_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__6, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__6_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__6);
v___x_397_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__8, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__8_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__8);
v___x_398_ = l_Lean_indentExpr(v_a_379_);
if (v_isShared_394_ == 0)
{
lean_ctor_set_tag(v___x_393_, 7);
lean_ctor_set(v___x_393_, 1, v___x_398_);
lean_ctor_set(v___x_393_, 0, v___x_397_);
v___x_400_ = v___x_393_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_397_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v___x_398_);
v___x_400_ = v_reuseFailAlloc_403_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
lean_ctor_set(v___x_401_, 1, v___x_396_);
v___x_402_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_401_, v___y_386_, v___y_385_, v___y_382_, v___y_381_, v___y_384_, v___y_388_);
lean_dec_ref(v___y_384_);
return v___x_402_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_389_);
lean_dec_ref(v___y_384_);
lean_dec(v_a_379_);
return v___y_387_;
}
}
v___jp_406_:
{
lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_413_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_inc(v_a_379_);
v___x_414_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr(v_a_379_, v___y_409_, v___y_410_, v___y_411_, v___y_412_);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_dec_ref(v___y_411_);
lean_dec(v_a_379_);
return v___x_414_;
}
else
{
lean_object* v_a_415_; uint8_t v___x_416_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
v___x_416_ = l_Lean_Exception_isInterrupt(v_a_415_);
if (v___x_416_ == 0)
{
uint8_t v___x_417_; 
lean_inc(v_a_415_);
v___x_417_ = l_Lean_Exception_isRuntime(v_a_415_);
v___y_381_ = v___y_410_;
v___y_382_ = v___y_409_;
v___y_383_ = v___x_413_;
v___y_384_ = v___y_411_;
v___y_385_ = v___y_408_;
v___y_386_ = v___y_407_;
v___y_387_ = v___x_414_;
v___y_388_ = v___y_412_;
v___y_389_ = v_a_415_;
v___y_390_ = v___x_417_;
goto v___jp_380_;
}
else
{
v___y_381_ = v___y_410_;
v___y_382_ = v___y_409_;
v___y_383_ = v___x_413_;
v___y_384_ = v___y_411_;
v___y_385_ = v___y_408_;
v___y_386_ = v___y_407_;
v___y_387_ = v___x_414_;
v___y_388_ = v___y_412_;
v___y_389_ = v_a_415_;
v___y_390_ = v___x_416_;
goto v___jp_380_;
}
}
}
v___jp_418_:
{
lean_object* v___x_425_; 
lean_inc(v_a_379_);
v___x_425_ = l_Lean_Meta_getMVars(v_a_379_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_427_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v___x_427_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_426_, v___x_364_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_);
lean_dec(v_a_426_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; uint8_t v___x_429_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_427_, 1);
v___x_429_ = lean_unbox(v_a_428_);
lean_dec(v_a_428_);
if (v___x_429_ == 0)
{
v___y_407_ = v___y_419_;
v___y_408_ = v___y_420_;
v___y_409_ = v___y_421_;
v___y_410_ = v___y_422_;
v___y_411_ = v___y_423_;
v___y_412_ = v___y_424_;
goto v___jp_406_;
}
else
{
lean_object* v___x_430_; lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
lean_dec_ref(v___y_423_);
lean_dec(v_a_379_);
v___x_430_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg();
v_a_431_ = lean_ctor_get(v___x_430_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_430_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_430_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_430_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_dec_ref(v___y_423_);
lean_dec(v_a_379_);
v_a_439_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_427_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_427_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_dec_ref(v___y_423_);
lean_dec(v_a_379_);
v_a_447_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_425_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_425_);
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
v___jp_455_:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v_a_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_473_; 
v___x_462_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__10, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__10_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__10);
v___x_463_ = l_Lean_indentExpr(v_a_379_);
v___x_464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_464_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec_ref(v___y_460_);
v_a_466_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_473_ == 0)
{
v___x_468_ = v___x_465_;
v_isShared_469_ = v_isSharedCheck_473_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_a_466_);
lean_dec(v___x_465_);
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
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref_known(v___x_375_, 3);
v_a_485_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_376_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_376_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___boxed(lean_object* v_stx_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0(v_stx_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_);
lean_dec(v_a_499_);
lean_dec_ref(v_a_498_);
lean_dec(v_a_497_);
lean_dec_ref(v_a_496_);
lean_dec(v_a_495_);
lean_dec_ref(v_a_494_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0(uint8_t v_config_512_, lean_object* v_item_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_item_522_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5));
v___x_526_ = l_Lean_Elab_ConfigEval_ConfigItem_addCompletionInfo(v_item_513_, v___x_525_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_526_) == 0)
{
uint8_t v___x_527_; 
lean_dec_ref_known(v___x_526_, 1);
v___x_527_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v_item_513_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; uint8_t v___x_531_; 
v___x_528_ = l_Lean_Elab_ConfigEval_ConfigItem_getRootStr(v_item_513_);
lean_inc_ref(v_item_513_);
v___x_529_ = l_Lean_Elab_ConfigEval_ConfigItem_shift(v_item_513_);
v___x_530_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__1));
v___x_531_ = lean_string_dec_eq(v___x_528_, v___x_530_);
if (v___x_531_ == 0)
{
lean_object* v___x_532_; uint8_t v___x_533_; 
v___x_532_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__2));
v___x_533_ = lean_string_dec_eq(v___x_528_, v___x_532_);
lean_dec_ref(v___x_528_);
if (v___x_533_ == 0)
{
lean_dec_ref(v_item_513_);
v_item_522_ = v___x_529_;
goto v___jp_521_;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__3));
v___x_535_ = l_Lean_Elab_ConfigEval_ConfigItem_addConstInfo(v_item_513_, v___x_534_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_535_) == 0)
{
uint8_t v___x_536_; 
lean_dec_ref_known(v___x_535_, 1);
v___x_536_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_529_);
if (v___x_536_ == 0)
{
lean_dec_ref(v_item_513_);
v_item_522_ = v___x_529_;
goto v___jp_521_;
}
else
{
lean_object* v___x_537_; 
lean_dec_ref(v___x_529_);
v___x_537_ = l_Lean_Elab_ConfigEval_evalBoolItem(v_item_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_537_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
v_a_546_ = lean_ctor_get(v___x_537_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_537_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_537_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec_ref(v___x_529_);
lean_dec_ref(v_item_513_);
v_a_554_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_535_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_535_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
}
else
{
uint8_t v___x_562_; 
lean_dec_ref(v___x_528_);
v___x_562_ = l_Lean_Elab_ConfigEval_ConfigItem_isAnonymous(v___x_529_);
if (v___x_562_ == 0)
{
lean_dec_ref(v_item_513_);
v_item_522_ = v___x_529_;
goto v___jp_521_;
}
else
{
lean_object* v_value_563_; lean_object* v___x_564_; 
lean_dec_ref(v___x_529_);
v_value_563_ = lean_ctor_get(v_item_513_, 2);
lean_inc(v_value_563_);
lean_dec_ref(v_item_513_);
v___x_564_ = l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0(v_value_563_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
return v___x_564_;
}
}
}
else
{
v_item_522_ = v_item_513_;
goto v___jp_521_;
}
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
lean_dec_ref(v_item_513_);
v_a_565_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_526_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_526_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
v___jp_521_:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___closed__0));
v___x_524_ = l_Lean_Elab_ConfigEval_ConfigItem_throwInvalidOption___redArg(v_item_522_, v___x_523_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0___boxed(lean_object* v_config_573_, lean_object* v_item_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_){
_start:
{
uint8_t v_config_3627__boxed_582_; lean_object* v_res_583_; 
v_config_3627__boxed_582_ = lean_unbox(v_config_573_);
v_res_583_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___lam__0(v_config_3627__boxed_582_, v_item_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_580_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
lean_dec_ref(v___y_577_);
lean_dec(v___y_576_);
lean_dec_ref(v___y_575_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0(lean_object* v_e_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___redArg(v_e_586_, v___y_590_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0___boxed(lean_object* v_e_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lean_instantiateMVars___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__0(v_e_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_);
lean_dec(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2(lean_object* v_00_u03b1_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___redArg();
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2___boxed(lean_object* v_00_u03b1_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lean_Elab_throwAbortTerm___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__2(v_00_u03b1_613_, v___y_614_, v___y_615_, v___y_616_, v___y_617_, v___y_618_, v___y_619_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v___y_616_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
return v_res_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1(lean_object* v_00_u03b1_622_, lean_object* v_msg_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_){
_start:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(v_msg_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
return v___x_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___boxed(lean_object* v_00_u03b1_632_, lean_object* v_msg_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1(v_00_u03b1_632_, v_msg_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2(lean_object* v_msgData_642_, lean_object* v_macroStack_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_, lean_object* v___y_649_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg(v_msgData_642_, v_macroStack_643_, v___y_648_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___boxed(lean_object* v_msgData_652_, lean_object* v_macroStack_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2(v_msgData_652_, v_macroStack_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
return v_res_661_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__0(void){
_start:
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_662_ = lean_box(0);
v___x_663_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__5));
v___x_664_ = l_Lean_mkConst(v___x_663_, v___x_662_);
return v___x_664_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__1(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_obj_once(&l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__0, &l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__0_once, _init_l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__0);
v___x_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig___lam__0(uint8_t v_cfg_667_, lean_object* v_cfgItem_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_676_ = lean_obj_once(&l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__1, &l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__1_once, _init_l_Lean_Elab_Command_elabStructureConfig___lam__0___closed__1);
v___x_677_ = lean_box(v_cfg_667_);
v___x_678_ = l_Lean_Elab_ConfigEval_EvalConfigItem_defaultOnErr___redArg(v___x_677_, v_cfgItem_668_, v___x_676_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig___lam__0___boxed(lean_object* v_cfg_679_, lean_object* v_cfgItem_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
uint8_t v_cfg_boxed_688_; lean_object* v_res_689_; 
v_cfg_boxed_688_ = lean_unbox(v_cfg_679_);
v_res_689_ = l_Lean_Elab_Command_elabStructureConfig___lam__0(v_cfg_boxed_688_, v_cfgItem_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec(v_cfgItem_680_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig(lean_object* v_cfg_691_, uint8_t v_init_692_, uint8_t v_logExceptions_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v_onErr_697_; lean_object* v_eval_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v_onErr_697_ = ((lean_object*)(l_Lean_Elab_Command_elabStructureConfig___closed__0));
v_eval_698_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem___closed__0));
v___x_699_ = lean_box(v_init_692_);
v___x_700_ = l_Lean_Elab_ConfigEval_EvalConfigItem_setConfig_x27___redArg(v_eval_698_, v___x_699_, v_cfg_691_, v_onErr_697_, v_logExceptions_693_, v_a_694_, v_a_695_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabStructureConfig___boxed(lean_object* v_cfg_701_, lean_object* v_init_702_, lean_object* v_logExceptions_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
uint8_t v_init_boxed_707_; uint8_t v_logExceptions_boxed_708_; lean_object* v_res_709_; 
v_init_boxed_707_ = lean_unbox(v_init_702_);
v_logExceptions_boxed_708_ = lean_unbox(v_logExceptions_703_);
v_res_709_ = l_Lean_Elab_Command_elabStructureConfig(v_cfg_701_, v_init_boxed_707_, v_logExceptions_boxed_708_, v_a_704_, v_a_705_);
lean_dec(v_a_705_);
lean_dec_ref(v_a_704_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_isDefeqStructure(lean_object* v_stx_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_721_ = lean_unsigned_to_nat(0u);
v___x_722_ = l_Lean_Syntax_getArg(v_stx_717_, v___x_721_);
v___x_723_ = ((lean_object*)(l_Lean_Elab_Command_isDefeqStructure___closed__2));
lean_inc(v___x_722_);
v___x_724_ = l_Lean_Syntax_isOfKind(v___x_722_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; lean_object* v___x_726_; 
lean_dec(v___x_722_);
v___x_725_ = lean_box(v___x_724_);
v___x_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_726_, 0, v___x_725_);
return v___x_726_;
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; lean_object* v___x_730_; 
v___x_727_ = lean_unsigned_to_nat(1u);
v___x_728_ = l_Lean_Syntax_getArg(v___x_722_, v___x_727_);
lean_dec(v___x_722_);
v___x_729_ = 0;
v___x_730_ = l_Lean_Elab_Command_elabStructureConfig(v___x_728_, v___x_729_, v___x_729_, v_a_718_, v_a_719_);
if (lean_obj_tag(v___x_730_) == 0)
{
lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_a_731_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v___x_730_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_dec(v___x_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_a_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
v_a_739_ = lean_ctor_get(v___x_730_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_730_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_730_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_730_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_isDefeqStructure___boxed(lean_object* v_stx_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lean_Elab_Command_isDefeqStructure(v_stx_747_, v_a_748_, v_a_749_);
lean_dec(v_a_749_);
lean_dec_ref(v_a_748_);
lean_dec(v_stx_747_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg(lean_object* v_name_752_, lean_object* v_levelParams_753_, lean_object* v_type_754_, lean_object* v_value_755_, lean_object* v_hints_756_, lean_object* v___y_757_){
_start:
{
lean_object* v___x_759_; uint8_t v___y_761_; uint8_t v___y_768_; lean_object* v_env_771_; uint8_t v___x_772_; 
v___x_759_ = lean_st_ref_get(v___y_757_);
v_env_771_ = lean_ctor_get(v___x_759_, 0);
lean_inc_ref_n(v_env_771_, 2);
lean_dec(v___x_759_);
v___x_772_ = l_Lean_Environment_hasUnsafe(v_env_771_, v_type_754_);
if (v___x_772_ == 0)
{
uint8_t v___x_773_; 
v___x_773_ = l_Lean_Environment_hasUnsafe(v_env_771_, v_value_755_);
v___y_768_ = v___x_773_;
goto v___jp_767_;
}
else
{
lean_dec_ref(v_env_771_);
v___y_768_ = v___x_772_;
goto v___jp_767_;
}
v___jp_760_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
lean_inc(v_name_752_);
v___x_762_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_762_, 0, v_name_752_);
lean_ctor_set(v___x_762_, 1, v_levelParams_753_);
lean_ctor_set(v___x_762_, 2, v_type_754_);
v___x_763_ = lean_box(0);
v___x_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_764_, 0, v_name_752_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_765_, 0, v___x_762_);
lean_ctor_set(v___x_765_, 1, v_value_755_);
lean_ctor_set(v___x_765_, 2, v_hints_756_);
lean_ctor_set(v___x_765_, 3, v___x_764_);
lean_ctor_set_uint8(v___x_765_, sizeof(void*)*4, v___y_761_);
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
return v___x_766_;
}
v___jp_767_:
{
if (v___y_768_ == 0)
{
uint8_t v___x_769_; 
v___x_769_ = 1;
v___y_761_ = v___x_769_;
goto v___jp_760_;
}
else
{
uint8_t v___x_770_; 
v___x_770_ = 0;
v___y_761_ = v___x_770_;
goto v___jp_760_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg___boxed(lean_object* v_name_774_, lean_object* v_levelParams_775_, lean_object* v_type_776_, lean_object* v_value_777_, lean_object* v_hints_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg(v_name_774_, v_levelParams_775_, v_type_776_, v_value_777_, v_hints_778_, v___y_779_);
lean_dec(v___y_779_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6(lean_object* v_name_782_, lean_object* v_levelParams_783_, lean_object* v_type_784_, lean_object* v_value_785_, lean_object* v_hints_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_){
_start:
{
lean_object* v___x_794_; 
v___x_794_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg(v_name_782_, v_levelParams_783_, v_type_784_, v_value_785_, v_hints_786_, v___y_792_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___boxed(lean_object* v_name_795_, lean_object* v_levelParams_796_, lean_object* v_type_797_, lean_object* v_value_798_, lean_object* v_hints_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6(v_name_795_, v_levelParams_796_, v_type_797_, v_value_798_, v_hints_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___lam__0(lean_object* v_k_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___x_816_; 
lean_inc(v___y_810_);
lean_inc_ref(v___y_809_);
v___x_816_ = lean_apply_7(v_k_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, lean_box(0));
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___lam__0___boxed(lean_object* v_k_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___lam__0(v_k_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg(lean_object* v_bs_826_, lean_object* v_k_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v___f_835_; lean_object* v___x_836_; 
lean_inc(v___y_829_);
lean_inc_ref(v___y_828_);
v___f_835_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_835_, 0, v_k_827_);
lean_closure_set(v___f_835_, 1, v___y_828_);
lean_closure_set(v___f_835_, 2, v___y_829_);
v___x_836_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_826_, v___f_835_, v___y_830_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_836_) == 0)
{
return v___x_836_;
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_836_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_836_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg___boxed(lean_object* v_bs_845_, lean_object* v_k_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg(v_bs_845_, v_k_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
lean_dec(v___y_848_);
lean_dec_ref(v___y_847_);
lean_dec_ref(v_bs_845_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8(lean_object* v_00_u03b1_855_, lean_object* v_bs_856_, lean_object* v_k_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg(v_bs_856_, v_k_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___boxed(lean_object* v_00_u03b1_866_, lean_object* v_bs_867_, lean_object* v_k_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8(v_00_u03b1_866_, v_bs_867_, v_k_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec_ref(v_bs_867_);
return v_res_876_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_877_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0);
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_880_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
return v___x_881_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__1);
v___x_883_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
lean_ctor_set(v___x_883_, 2, v___x_882_);
lean_ctor_set(v___x_883_, 3, v___x_882_);
lean_ctor_set(v___x_883_, 4, v___x_882_);
lean_ctor_set(v___x_883_, 5, v___x_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg(lean_object* v_declName_884_, uint8_t v_s_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v___x_889_; lean_object* v_env_890_; lean_object* v_nextMacroScope_891_; lean_object* v_ngen_892_; lean_object* v_auxDeclNGen_893_; lean_object* v_traceState_894_; lean_object* v_messages_895_; lean_object* v_infoState_896_; lean_object* v_snapshotTasks_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_926_; 
v___x_889_ = lean_st_ref_take(v___y_887_);
v_env_890_ = lean_ctor_get(v___x_889_, 0);
v_nextMacroScope_891_ = lean_ctor_get(v___x_889_, 1);
v_ngen_892_ = lean_ctor_get(v___x_889_, 2);
v_auxDeclNGen_893_ = lean_ctor_get(v___x_889_, 3);
v_traceState_894_ = lean_ctor_get(v___x_889_, 4);
v_messages_895_ = lean_ctor_get(v___x_889_, 6);
v_infoState_896_ = lean_ctor_get(v___x_889_, 7);
v_snapshotTasks_897_ = lean_ctor_get(v___x_889_, 8);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; 
v_unused_927_ = lean_ctor_get(v___x_889_, 5);
lean_dec(v_unused_927_);
v___x_899_ = v___x_889_;
v_isShared_900_ = v_isSharedCheck_926_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_snapshotTasks_897_);
lean_inc(v_infoState_896_);
lean_inc(v_messages_895_);
lean_inc(v_traceState_894_);
lean_inc(v_auxDeclNGen_893_);
lean_inc(v_ngen_892_);
lean_inc(v_nextMacroScope_891_);
lean_inc(v_env_890_);
lean_dec(v___x_889_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_926_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
uint8_t v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_906_; 
v___x_901_ = 0;
v___x_902_ = lean_box(0);
v___x_903_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_890_, v_declName_884_, v_s_885_, v___x_901_, v___x_902_);
v___x_904_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 5, v___x_904_);
lean_ctor_set(v___x_899_, 0, v___x_903_);
v___x_906_ = v___x_899_;
goto v_reusejp_905_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_903_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_nextMacroScope_891_);
lean_ctor_set(v_reuseFailAlloc_925_, 2, v_ngen_892_);
lean_ctor_set(v_reuseFailAlloc_925_, 3, v_auxDeclNGen_893_);
lean_ctor_set(v_reuseFailAlloc_925_, 4, v_traceState_894_);
lean_ctor_set(v_reuseFailAlloc_925_, 5, v___x_904_);
lean_ctor_set(v_reuseFailAlloc_925_, 6, v_messages_895_);
lean_ctor_set(v_reuseFailAlloc_925_, 7, v_infoState_896_);
lean_ctor_set(v_reuseFailAlloc_925_, 8, v_snapshotTasks_897_);
v___x_906_ = v_reuseFailAlloc_925_;
goto v_reusejp_905_;
}
v_reusejp_905_:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v_mctx_909_; lean_object* v_zetaDeltaFVarIds_910_; lean_object* v_postponed_911_; lean_object* v_diag_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_923_; 
v___x_907_ = lean_st_ref_put(v___y_887_, v___x_906_);
v___x_908_ = lean_st_ref_take(v___y_886_);
v_mctx_909_ = lean_ctor_get(v___x_908_, 0);
v_zetaDeltaFVarIds_910_ = lean_ctor_get(v___x_908_, 2);
v_postponed_911_ = lean_ctor_get(v___x_908_, 3);
v_diag_912_ = lean_ctor_get(v___x_908_, 4);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_923_ == 0)
{
lean_object* v_unused_924_; 
v_unused_924_ = lean_ctor_get(v___x_908_, 1);
lean_dec(v_unused_924_);
v___x_914_ = v___x_908_;
v_isShared_915_ = v_isSharedCheck_923_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_diag_912_);
lean_inc(v_postponed_911_);
lean_inc(v_zetaDeltaFVarIds_910_);
lean_inc(v_mctx_909_);
lean_dec(v___x_908_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_923_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_919_; 
v___x_916_ = lean_box(0);
v___x_917_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 1, v___x_917_);
v___x_919_ = v___x_914_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_mctx_909_);
lean_ctor_set(v_reuseFailAlloc_922_, 1, v___x_917_);
lean_ctor_set(v_reuseFailAlloc_922_, 2, v_zetaDeltaFVarIds_910_);
lean_ctor_set(v_reuseFailAlloc_922_, 3, v_postponed_911_);
lean_ctor_set(v_reuseFailAlloc_922_, 4, v_diag_912_);
v___x_919_ = v_reuseFailAlloc_922_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_st_ref_put(v___y_886_, v___x_919_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_916_);
return v___x_921_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___boxed(lean_object* v_declName_928_, lean_object* v_s_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
uint8_t v_s_boxed_933_; lean_object* v_res_934_; 
v_s_boxed_933_ = lean_unbox(v_s_929_);
v_res_934_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg(v_declName_928_, v_s_boxed_933_, v___y_930_, v___y_931_);
lean_dec(v___y_931_);
lean_dec(v___y_930_);
return v_res_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9(lean_object* v_declName_935_, uint8_t v_s_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg(v_declName_935_, v_s_936_, v___y_940_, v___y_942_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___boxed(lean_object* v_declName_945_, lean_object* v_s_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
uint8_t v_s_boxed_954_; lean_object* v_res_955_; 
v_s_boxed_954_ = lean_unbox(v_s_946_);
v_res_955_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9(v_declName_945_, v_s_boxed_954_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
lean_dec(v___y_952_);
lean_dec_ref(v___y_951_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___lam__0(lean_object* v_k_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v_b_959_, lean_object* v_c_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v___x_966_; 
lean_inc(v___y_964_);
lean_inc_ref(v___y_963_);
lean_inc(v___y_962_);
lean_inc_ref(v___y_961_);
lean_inc(v___y_958_);
lean_inc_ref(v___y_957_);
v___x_966_ = lean_apply_9(v_k_956_, v_b_959_, v_c_960_, v___y_957_, v___y_958_, v___y_961_, v___y_962_, v___y_963_, v___y_964_, lean_box(0));
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___lam__0___boxed(lean_object* v_k_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v_b_970_, lean_object* v_c_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___lam__0(v_k_967_, v___y_968_, v___y_969_, v_b_970_, v_c_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg(lean_object* v_type_978_, lean_object* v_k_979_, uint8_t v_cleanupAnnotations_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_){
_start:
{
lean_object* v___f_988_; uint8_t v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
lean_inc(v___y_982_);
lean_inc_ref(v___y_981_);
v___f_988_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_988_, 0, v_k_979_);
lean_closure_set(v___f_988_, 1, v___y_981_);
lean_closure_set(v___f_988_, 2, v___y_982_);
v___x_989_ = 0;
v___x_990_ = lean_box(0);
v___x_991_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_989_, v___x_990_, v_type_978_, v___f_988_, v_cleanupAnnotations_980_, v___x_989_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
if (lean_obj_tag(v___x_991_) == 0)
{
return v___x_991_;
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___boxed(lean_object* v_type_1000_, lean_object* v_k_1001_, lean_object* v_cleanupAnnotations_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1010_; lean_object* v_res_1011_; 
v_cleanupAnnotations_boxed_1010_ = lean_unbox(v_cleanupAnnotations_1002_);
v_res_1011_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg(v_type_1000_, v_k_1001_, v_cleanupAnnotations_boxed_1010_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_);
lean_dec(v___y_1008_);
lean_dec_ref(v___y_1007_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13(lean_object* v_00_u03b1_1012_, lean_object* v_type_1013_, lean_object* v_k_1014_, uint8_t v_cleanupAnnotations_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg(v_type_1013_, v_k_1014_, v_cleanupAnnotations_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___boxed(lean_object* v_00_u03b1_1024_, lean_object* v_type_1025_, lean_object* v_k_1026_, lean_object* v_cleanupAnnotations_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1035_; lean_object* v_res_1036_; 
v_cleanupAnnotations_boxed_1035_ = lean_unbox(v_cleanupAnnotations_1027_);
v_res_1036_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13(v_00_u03b1_1024_, v_type_1025_, v_k_1026_, v_cleanupAnnotations_boxed_1035_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__0(uint8_t v___x_1037_, lean_object* v_x_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_box(v___x_1037_);
v___x_1047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__0___boxed(lean_object* v___x_1048_, lean_object* v_x_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
uint8_t v___x_23228__boxed_1057_; lean_object* v_res_1058_; 
v___x_23228__boxed_1057_ = lean_unbox(v___x_1048_);
v_res_1058_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__0(v___x_23228__boxed_1057_, v_x_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v_x_1049_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__1(uint8_t v___x_1059_, lean_object* v_x_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v___x_1068_; 
lean_inc_ref(v_x_1060_);
v___x_1068_ = l_Lean_Meta_mkEqRefl(v_x_1060_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; uint8_t v___x_1074_; lean_object* v___x_1075_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = lean_unsigned_to_nat(1u);
v___x_1071_ = lean_mk_empty_array_with_capacity(v___x_1070_);
v___x_1072_ = lean_array_push(v___x_1071_, v_x_1060_);
v___x_1073_ = 0;
v___x_1074_ = 1;
v___x_1075_ = l_Lean_Meta_mkLambdaFVars(v___x_1072_, v_a_1069_, v___x_1073_, v___x_1059_, v___x_1073_, v___x_1059_, v___x_1074_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec_ref(v___x_1072_);
return v___x_1075_;
}
else
{
lean_dec_ref(v_x_1060_);
return v___x_1068_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__1___boxed(lean_object* v___x_1076_, lean_object* v_x_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
uint8_t v___x_23259__boxed_1085_; lean_object* v_res_1086_; 
v___x_23259__boxed_1085_ = lean_unbox(v___x_1076_);
v_res_1086_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__1(v___x_23259__boxed_1085_, v_x_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__2(lean_object* v_params_1087_, lean_object* v_resultType_1088_, uint8_t v___x_1089_, lean_object* v_name_1090_, lean_object* v_levelParams_1091_, uint8_t v___x_1092_, lean_object* v_a_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_){
_start:
{
lean_object* v___x_1101_; uint8_t v___x_1102_; uint8_t v___x_1103_; lean_object* v___x_1104_; 
lean_inc_ref(v_a_1093_);
v___x_1101_ = lean_array_push(v_params_1087_, v_a_1093_);
v___x_1102_ = 0;
v___x_1103_ = 1;
v___x_1104_ = l_Lean_Meta_mkForallFVars(v___x_1101_, v_resultType_1088_, v___x_1102_, v___x_1089_, v___x_1089_, v___x_1103_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1106_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = l_Lean_Meta_mkLambdaFVars(v___x_1101_, v_a_1093_, v___x_1102_, v___x_1089_, v___x_1102_, v___x_1089_, v___x_1103_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
lean_dec_ref(v___x_1101_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v_a_1107_; lean_object* v___x_1108_; lean_object* v_env_1109_; uint32_t v___x_1110_; uint32_t v___x_1111_; uint32_t v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1126_; 
v_a_1107_ = lean_ctor_get(v___x_1106_, 0);
lean_inc_n(v_a_1107_, 2);
lean_dec_ref_known(v___x_1106_, 1);
v___x_1108_ = lean_st_ref_get(v___y_1099_);
v_env_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc_ref(v_env_1109_);
lean_dec(v___x_1108_);
v___x_1110_ = l_Lean_getMaxHeight(v_env_1109_, v_a_1107_);
v___x_1111_ = 1;
v___x_1112_ = lean_uint32_add(v___x_1110_, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_1113_, 0, v___x_1112_);
lean_inc(v_name_1090_);
v___x_1114_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg(v_name_1090_, v_levelParams_1091_, v_a_1105_, v_a_1107_, v___x_1113_, v___y_1099_);
v_a_1115_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1117_ = v___x_1114_;
v_isShared_1118_ = v_isSharedCheck_1126_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1114_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1126_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set_tag(v___x_1117_, 1);
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
lean_object* v___x_1121_; 
lean_inc_ref(v___x_1120_);
v___x_1121_ = l_Lean_addDecl(v___x_1120_, v___x_1092_, v___y_1098_, v___y_1099_);
if (lean_obj_tag(v___x_1121_) == 0)
{
uint8_t v___x_1122_; lean_object* v___x_1123_; 
lean_dec_ref_known(v___x_1121_, 1);
v___x_1122_ = 4;
v___x_1123_ = l_Lean_Meta_setInlineAttribute(v_name_1090_, v___x_1122_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v___x_1124_; 
lean_dec_ref_known(v___x_1123_, 1);
v___x_1124_ = l_Lean_compileDecl(v___x_1120_, v___x_1089_, v___y_1098_, v___y_1099_);
return v___x_1124_;
}
else
{
lean_dec_ref(v___x_1120_);
return v___x_1123_;
}
}
else
{
lean_dec_ref(v___x_1120_);
lean_dec(v_name_1090_);
return v___x_1121_;
}
}
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_a_1105_);
lean_dec(v_levelParams_1091_);
lean_dec(v_name_1090_);
v_a_1127_ = lean_ctor_get(v___x_1106_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1106_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1106_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1106_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec_ref(v___x_1101_);
lean_dec_ref(v_a_1093_);
lean_dec(v_levelParams_1091_);
lean_dec(v_name_1090_);
v_a_1135_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1104_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1104_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__2___boxed(lean_object* v_params_1143_, lean_object* v_resultType_1144_, lean_object* v___x_1145_, lean_object* v_name_1146_, lean_object* v_levelParams_1147_, lean_object* v___x_1148_, lean_object* v_a_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
uint8_t v___x_23300__boxed_1157_; uint8_t v___x_23301__boxed_1158_; lean_object* v_res_1159_; 
v___x_23300__boxed_1157_ = lean_unbox(v___x_1145_);
v___x_23301__boxed_1158_ = lean_unbox(v___x_1148_);
v_res_1159_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__2(v_params_1143_, v_resultType_1144_, v___x_23300__boxed_1157_, v_name_1146_, v_levelParams_1147_, v___x_23301__boxed_1158_, v_a_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___lam__0(lean_object* v_k_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v_b_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v___x_1169_; 
lean_inc(v___y_1167_);
lean_inc_ref(v___y_1166_);
lean_inc(v___y_1165_);
lean_inc_ref(v___y_1164_);
lean_inc(v___y_1162_);
lean_inc_ref(v___y_1161_);
v___x_1169_ = lean_apply_8(v_k_1160_, v_b_1163_, v___y_1161_, v___y_1162_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, lean_box(0));
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___lam__0___boxed(lean_object* v_k_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v_b_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_){
_start:
{
lean_object* v_res_1179_; 
v_res_1179_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___lam__0(v_k_1170_, v___y_1171_, v___y_1172_, v_b_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
lean_dec(v___y_1175_);
lean_dec_ref(v___y_1174_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
return v_res_1179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg(lean_object* v_name_1180_, uint8_t v_bi_1181_, lean_object* v_type_1182_, lean_object* v_k_1183_, uint8_t v_kind_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v___f_1192_; lean_object* v___x_1193_; 
lean_inc(v___y_1186_);
lean_inc_ref(v___y_1185_);
v___f_1192_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1192_, 0, v_k_1183_);
lean_closure_set(v___f_1192_, 1, v___y_1185_);
lean_closure_set(v___f_1192_, 2, v___y_1186_);
v___x_1193_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1180_, v_bi_1181_, v_type_1182_, v___f_1192_, v_kind_1184_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
if (lean_obj_tag(v___x_1193_) == 0)
{
return v___x_1193_;
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1193_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1193_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg___boxed(lean_object* v_name_1202_, lean_object* v_bi_1203_, lean_object* v_type_1204_, lean_object* v_k_1205_, lean_object* v_kind_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
uint8_t v_bi_boxed_1214_; uint8_t v_kind_boxed_1215_; lean_object* v_res_1216_; 
v_bi_boxed_1214_ = lean_unbox(v_bi_1203_);
v_kind_boxed_1215_ = lean_unbox(v_kind_1206_);
v_res_1216_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg(v_name_1202_, v_bi_boxed_1214_, v_type_1204_, v_k_1205_, v_kind_boxed_1215_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg(lean_object* v_name_1217_, lean_object* v_type_1218_, lean_object* v_k_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
uint8_t v___x_1227_; uint8_t v___x_1228_; lean_object* v___x_1229_; 
v___x_1227_ = 0;
v___x_1228_ = 0;
v___x_1229_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg(v_name_1217_, v___x_1227_, v_type_1218_, v_k_1219_, v___x_1228_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg___boxed(lean_object* v_name_1230_, lean_object* v_type_1231_, lean_object* v_k_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg(v_name_1230_, v_type_1231_, v_k_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__3(lean_object* v_params_1241_, uint8_t v___x_1242_, lean_object* v_levelParams_1243_, uint8_t v___x_1244_, lean_object* v_name_1245_, lean_object* v_argName_1246_, lean_object* v_argType_1247_, lean_object* v_resultType_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___f_1258_; lean_object* v___x_1259_; 
v___x_1256_ = lean_box(v___x_1242_);
v___x_1257_ = lean_box(v___x_1244_);
v___f_1258_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__2___boxed), 14, 6);
lean_closure_set(v___f_1258_, 0, v_params_1241_);
lean_closure_set(v___f_1258_, 1, v_resultType_1248_);
lean_closure_set(v___f_1258_, 2, v___x_1256_);
lean_closure_set(v___f_1258_, 3, v_name_1245_);
lean_closure_set(v___f_1258_, 4, v_levelParams_1243_);
lean_closure_set(v___f_1258_, 5, v___x_1257_);
v___x_1259_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg(v_argName_1246_, v_argType_1247_, v___f_1258_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__3___boxed(lean_object* v_params_1260_, lean_object* v___x_1261_, lean_object* v_levelParams_1262_, lean_object* v___x_1263_, lean_object* v_name_1264_, lean_object* v_argName_1265_, lean_object* v_argType_1266_, lean_object* v_resultType_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
uint8_t v___x_23506__boxed_1275_; uint8_t v___x_23507__boxed_1276_; lean_object* v_res_1277_; 
v___x_23506__boxed_1275_ = lean_unbox(v___x_1261_);
v___x_23507__boxed_1276_ = lean_unbox(v___x_1263_);
v_res_1277_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__3(v_params_1260_, v___x_23506__boxed_1275_, v_levelParams_1262_, v___x_23507__boxed_1276_, v_name_1264_, v_argName_1265_, v_argType_1266_, v_resultType_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4(lean_object* v___f_1283_, lean_object* v_projName_1284_, lean_object* v___x_1285_, lean_object* v___x_1286_, lean_object* v___x_1287_, lean_object* v_ctorName_1288_, lean_object* v___x_1289_, lean_object* v_params_1290_, lean_object* v___f_1291_, lean_object* v_fieldName_1292_, uint8_t v___x_1293_, lean_object* v_equivName_1294_, lean_object* v_levelParams_1295_, uint8_t v___x_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v___x_1304_; 
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1299_);
lean_inc(v___y_1298_);
lean_inc_ref(v___y_1297_);
lean_inc_ref(v___x_1287_);
lean_inc_ref(v___x_1286_);
lean_inc(v___x_1285_);
lean_inc(v_projName_1284_);
v___x_1304_ = lean_apply_11(v___f_1283_, v_projName_1284_, v___x_1285_, v___x_1286_, v___x_1287_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, lean_box(0));
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
lean_dec_ref_known(v___x_1304_, 1);
lean_inc(v___x_1289_);
v___x_1305_ = l_Lean_mkConst(v_ctorName_1288_, v___x_1289_);
v___x_1306_ = l_Lean_mkAppN(v___x_1305_, v_params_1290_);
v___x_1307_ = l_Lean_mkConst(v_projName_1284_, v___x_1289_);
v___x_1308_ = l_Lean_mkAppN(v___x_1307_, v_params_1290_);
lean_inc_ref(v___f_1291_);
v___x_1309_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg(v___x_1285_, v___x_1286_, v___f_1291_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; lean_object* v___x_1311_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1309_, 1);
v___x_1311_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg(v_fieldName_1292_, v___x_1287_, v___f_1291_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v___x_1313_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___closed__1));
v___x_1314_ = lean_unsigned_to_nat(4u);
v___x_1315_ = lean_mk_empty_array_with_capacity(v___x_1314_);
v___x_1316_ = lean_array_push(v___x_1315_, v___x_1308_);
v___x_1317_ = lean_array_push(v___x_1316_, v___x_1306_);
v___x_1318_ = lean_array_push(v___x_1317_, v_a_1310_);
v___x_1319_ = lean_array_push(v___x_1318_, v_a_1312_);
v___x_1320_ = l_Lean_Meta_mkAppM(v___x_1313_, v___x_1319_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_object* v_a_1321_; lean_object* v___x_1322_; 
v_a_1321_ = lean_ctor_get(v___x_1320_, 0);
lean_inc_n(v_a_1321_, 2);
lean_dec_ref_known(v___x_1320_, 1);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1299_);
v___x_1322_ = lean_infer_type(v_a_1321_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; uint8_t v___x_1324_; uint8_t v___x_1325_; lean_object* v___x_1326_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc(v_a_1323_);
lean_dec_ref_known(v___x_1322_, 1);
v___x_1324_ = 0;
v___x_1325_ = 1;
v___x_1326_ = l_Lean_Meta_mkForallFVars(v_params_1290_, v_a_1323_, v___x_1324_, v___x_1293_, v___x_1293_, v___x_1325_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1328_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1326_, 1);
v___x_1328_ = l_Lean_Meta_mkLambdaFVars(v_params_1290_, v_a_1321_, v___x_1324_, v___x_1293_, v___x_1324_, v___x_1293_, v___x_1325_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v_a_1332_; lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1347_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v___x_1330_ = lean_box(1);
lean_inc(v_equivName_1294_);
v___x_1331_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__6___redArg(v_equivName_1294_, v_levelParams_1295_, v_a_1327_, v_a_1329_, v___x_1330_, v___y_1302_);
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1334_ = v___x_1331_;
v_isShared_1335_ = v_isSharedCheck_1347_;
goto v_resetjp_1333_;
}
else
{
lean_inc(v_a_1332_);
lean_dec(v___x_1331_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1347_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
lean_object* v___x_1337_; 
if (v_isShared_1335_ == 0)
{
lean_ctor_set_tag(v___x_1334_, 1);
v___x_1337_ = v___x_1334_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1332_);
v___x_1337_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
lean_object* v___x_1338_; 
lean_inc_ref(v___x_1337_);
v___x_1338_ = l_Lean_addDecl(v___x_1337_, v___x_1296_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1338_) == 0)
{
uint8_t v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; lean_object* v___x_1342_; 
lean_dec_ref_known(v___x_1338_, 1);
v___x_1339_ = 0;
lean_inc_n(v_equivName_1294_, 2);
v___x_1340_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg(v_equivName_1294_, v___x_1339_, v___y_1300_, v___y_1302_);
lean_dec_ref(v___x_1340_);
v___x_1341_ = 2;
v___x_1342_ = l_Lean_Meta_setInlineAttribute(v_equivName_1294_, v___x_1341_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v___x_1343_; 
lean_dec_ref_known(v___x_1342_, 1);
v___x_1343_ = l_Lean_compileDecl(v___x_1337_, v___x_1293_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1343_) == 0)
{
uint8_t v___x_1344_; lean_object* v___x_1345_; 
lean_dec_ref_known(v___x_1343_, 1);
v___x_1344_ = 0;
v___x_1345_ = l_Lean_Meta_Transport_addTransportDecl(v_equivName_1294_, v___x_1344_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
return v___x_1345_;
}
else
{
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_equivName_1294_);
return v___x_1343_;
}
}
else
{
lean_dec_ref(v___x_1337_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_equivName_1294_);
return v___x_1342_;
}
}
else
{
lean_dec_ref(v___x_1337_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_equivName_1294_);
return v___x_1338_;
}
}
}
}
else
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1355_; 
lean_dec(v_a_1327_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_levelParams_1295_);
lean_dec(v_equivName_1294_);
v_a_1348_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1355_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1355_ == 0)
{
v___x_1350_ = v___x_1328_;
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1328_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1355_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1353_; 
if (v_isShared_1351_ == 0)
{
v___x_1353_ = v___x_1350_;
goto v_reusejp_1352_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_a_1348_);
v___x_1353_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1352_;
}
v_reusejp_1352_:
{
return v___x_1353_;
}
}
}
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec(v_a_1321_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_levelParams_1295_);
lean_dec(v_equivName_1294_);
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
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_dec(v_a_1321_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_levelParams_1295_);
lean_dec(v_equivName_1294_);
v_a_1364_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1322_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1322_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
else
{
lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_levelParams_1295_);
lean_dec(v_equivName_1294_);
v_a_1372_ = lean_ctor_get(v___x_1320_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1320_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1374_ = v___x_1320_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1320_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1372_);
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
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1387_; 
lean_dec(v_a_1310_);
lean_dec_ref(v___x_1308_);
lean_dec_ref(v___x_1306_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v_levelParams_1295_);
lean_dec(v_equivName_1294_);
v_a_1380_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1382_ = v___x_1311_;
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1311_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1380_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
else
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
lean_dec_ref(v___x_1308_);
lean_dec_ref(v___x_1306_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v_levelParams_1295_);
lean_dec(v_equivName_1294_);
lean_dec(v_fieldName_1292_);
lean_dec_ref(v___f_1291_);
lean_dec_ref(v___x_1287_);
v_a_1388_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1309_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1309_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
else
{
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v_levelParams_1295_);
lean_dec(v_equivName_1294_);
lean_dec(v_fieldName_1292_);
lean_dec_ref(v___f_1291_);
lean_dec(v___x_1289_);
lean_dec(v_ctorName_1288_);
lean_dec_ref(v___x_1287_);
lean_dec_ref(v___x_1286_);
lean_dec(v___x_1285_);
lean_dec(v_projName_1284_);
return v___x_1304_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___boxed(lean_object** _args){
lean_object* v___f_1396_ = _args[0];
lean_object* v_projName_1397_ = _args[1];
lean_object* v___x_1398_ = _args[2];
lean_object* v___x_1399_ = _args[3];
lean_object* v___x_1400_ = _args[4];
lean_object* v_ctorName_1401_ = _args[5];
lean_object* v___x_1402_ = _args[6];
lean_object* v_params_1403_ = _args[7];
lean_object* v___f_1404_ = _args[8];
lean_object* v_fieldName_1405_ = _args[9];
lean_object* v___x_1406_ = _args[10];
lean_object* v_equivName_1407_ = _args[11];
lean_object* v_levelParams_1408_ = _args[12];
lean_object* v___x_1409_ = _args[13];
lean_object* v___y_1410_ = _args[14];
lean_object* v___y_1411_ = _args[15];
lean_object* v___y_1412_ = _args[16];
lean_object* v___y_1413_ = _args[17];
lean_object* v___y_1414_ = _args[18];
lean_object* v___y_1415_ = _args[19];
lean_object* v___y_1416_ = _args[20];
_start:
{
uint8_t v___x_23559__boxed_1417_; uint8_t v___x_23560__boxed_1418_; lean_object* v_res_1419_; 
v___x_23559__boxed_1417_ = lean_unbox(v___x_1406_);
v___x_23560__boxed_1418_ = lean_unbox(v___x_1409_);
v_res_1419_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4(v___f_1396_, v_projName_1397_, v___x_1398_, v___x_1399_, v___x_1400_, v_ctorName_1401_, v___x_1402_, v_params_1403_, v___f_1404_, v_fieldName_1405_, v___x_23559__boxed_1417_, v_equivName_1407_, v_levelParams_1408_, v___x_23560__boxed_1418_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_);
lean_dec_ref(v_params_1403_);
return v_res_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__5(size_t v_sz_1420_, size_t v_i_1421_, lean_object* v_bs_1422_){
_start:
{
uint8_t v___x_1423_; 
v___x_1423_ = lean_usize_dec_lt(v_i_1421_, v_sz_1420_);
if (v___x_1423_ == 0)
{
return v_bs_1422_;
}
else
{
lean_object* v_v_1424_; lean_object* v_snd_1425_; lean_object* v_fst_1426_; lean_object* v_snd_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1441_; 
v_v_1424_ = lean_array_uget_borrowed(v_bs_1422_, v_i_1421_);
v_snd_1425_ = lean_ctor_get(v_v_1424_, 1);
lean_inc(v_snd_1425_);
v_fst_1426_ = lean_ctor_get(v_v_1424_, 0);
lean_inc(v_fst_1426_);
v_snd_1427_ = lean_ctor_get(v_snd_1425_, 1);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_snd_1425_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; 
v_unused_1442_ = lean_ctor_get(v_snd_1425_, 0);
lean_dec(v_unused_1442_);
v___x_1429_ = v_snd_1425_;
v_isShared_1430_ = v_isSharedCheck_1441_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_snd_1427_);
lean_dec(v_snd_1425_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1441_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v_bs_x27_1432_; lean_object* v___x_1433_; lean_object* v___x_1435_; 
v___x_1431_ = lean_unsigned_to_nat(0u);
v_bs_x27_1432_ = lean_array_uset(v_bs_1422_, v_i_1421_, v___x_1431_);
v___x_1433_ = l_Lean_Expr_fvarId_x21(v_fst_1426_);
lean_dec(v_fst_1426_);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v___x_1433_);
v___x_1435_ = v___x_1429_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1433_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_snd_1427_);
v___x_1435_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
size_t v___x_1436_; size_t v___x_1437_; lean_object* v___x_1438_; 
v___x_1436_ = ((size_t)1ULL);
v___x_1437_ = lean_usize_add(v_i_1421_, v___x_1436_);
v___x_1438_ = lean_array_uset(v_bs_x27_1432_, v_i_1421_, v___x_1435_);
v_i_1421_ = v___x_1437_;
v_bs_1422_ = v___x_1438_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__5___boxed(lean_object* v_sz_1443_, lean_object* v_i_1444_, lean_object* v_bs_1445_){
_start:
{
size_t v_sz_boxed_1446_; size_t v_i_boxed_1447_; lean_object* v_res_1448_; 
v_sz_boxed_1446_ = lean_unbox_usize(v_sz_1443_);
lean_dec(v_sz_1443_);
v_i_boxed_1447_ = lean_unbox_usize(v_i_1444_);
lean_dec(v_i_1444_);
v_res_1448_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__5(v_sz_boxed_1446_, v_i_boxed_1447_, v_bs_1445_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__0(lean_object* v___x_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_){
_start:
{
lean_object* v___x_1457_; 
v___x_1457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1449_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__0___boxed(lean_object* v___x_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__0(v___x_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7_spec__12(lean_object* v___x_1467_, lean_object* v_as_1468_, size_t v_i_1469_, size_t v_stop_1470_, lean_object* v_b_1471_){
_start:
{
lean_object* v___y_1473_; uint8_t v___x_1477_; 
v___x_1477_ = lean_usize_dec_eq(v_i_1469_, v_stop_1470_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1478_ = lean_array_uget_borrowed(v_as_1468_, v_i_1469_);
v___x_1479_ = l_Lean_TSyntax_getId(v___x_1478_);
v___x_1480_ = l_Lean_LocalContext_findFromUserName_x3f(v___x_1467_, v___x_1479_);
lean_dec(v___x_1479_);
if (lean_obj_tag(v___x_1480_) == 0)
{
v___y_1473_ = v_b_1471_;
goto v___jp_1472_;
}
else
{
lean_object* v_val_1481_; lean_object* v___x_1482_; 
v_val_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_val_1481_);
lean_dec_ref_known(v___x_1480_, 1);
v___x_1482_ = lean_array_push(v_b_1471_, v_val_1481_);
v___y_1473_ = v___x_1482_;
goto v___jp_1472_;
}
}
else
{
return v_b_1471_;
}
v___jp_1472_:
{
size_t v___x_1474_; size_t v___x_1475_; 
v___x_1474_ = ((size_t)1ULL);
v___x_1475_ = lean_usize_add(v_i_1469_, v___x_1474_);
v_i_1469_ = v___x_1475_;
v_b_1471_ = v___y_1473_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7_spec__12___boxed(lean_object* v___x_1483_, lean_object* v_as_1484_, lean_object* v_i_1485_, lean_object* v_stop_1486_, lean_object* v_b_1487_){
_start:
{
size_t v_i_boxed_1488_; size_t v_stop_boxed_1489_; lean_object* v_res_1490_; 
v_i_boxed_1488_ = lean_unbox_usize(v_i_1485_);
lean_dec(v_i_1485_);
v_stop_boxed_1489_ = lean_unbox_usize(v_stop_1486_);
lean_dec(v_stop_1486_);
v_res_1490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7_spec__12(v___x_1483_, v_as_1484_, v_i_boxed_1488_, v_stop_boxed_1489_, v_b_1487_);
lean_dec_ref(v_as_1484_);
lean_dec_ref(v___x_1483_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7(lean_object* v___x_1493_, lean_object* v_as_1494_, lean_object* v_start_1495_, lean_object* v_stop_1496_){
_start:
{
lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1497_ = ((lean_object*)(l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7___closed__0));
v___x_1498_ = lean_nat_dec_lt(v_start_1495_, v_stop_1496_);
if (v___x_1498_ == 0)
{
return v___x_1497_;
}
else
{
lean_object* v___x_1499_; uint8_t v___x_1500_; 
v___x_1499_ = lean_array_get_size(v_as_1494_);
v___x_1500_ = lean_nat_dec_le(v_stop_1496_, v___x_1499_);
if (v___x_1500_ == 0)
{
uint8_t v___x_1501_; 
v___x_1501_ = lean_nat_dec_lt(v_start_1495_, v___x_1499_);
if (v___x_1501_ == 0)
{
return v___x_1497_;
}
else
{
size_t v___x_1502_; size_t v___x_1503_; lean_object* v___x_1504_; 
v___x_1502_ = lean_usize_of_nat(v_start_1495_);
v___x_1503_ = lean_usize_of_nat(v___x_1499_);
v___x_1504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7_spec__12(v___x_1493_, v_as_1494_, v___x_1502_, v___x_1503_, v___x_1497_);
return v___x_1504_;
}
}
else
{
size_t v___x_1505_; size_t v___x_1506_; lean_object* v___x_1507_; 
v___x_1505_ = lean_usize_of_nat(v_start_1495_);
v___x_1506_ = lean_usize_of_nat(v_stop_1496_);
v___x_1507_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7_spec__12(v___x_1493_, v_as_1494_, v___x_1505_, v___x_1506_, v___x_1497_);
return v___x_1507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7___boxed(lean_object* v___x_1508_, lean_object* v_as_1509_, lean_object* v_start_1510_, lean_object* v_stop_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7(v___x_1508_, v_as_1509_, v_start_1510_, v_stop_1511_);
lean_dec(v_stop_1511_);
lean_dec(v_start_1510_);
lean_dec_ref(v_as_1509_);
lean_dec_ref(v___x_1508_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__11(lean_object* v_maybeParam_1513_, lean_object* v_as_1514_, size_t v_i_1515_, size_t v_stop_1516_, lean_object* v_b_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_a_1526_; uint8_t v___x_1530_; 
v___x_1530_ = lean_usize_dec_eq(v_i_1515_, v_stop_1516_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1531_ = lean_array_uget_borrowed(v_as_1514_, v_i_1515_);
v___x_1532_ = l_Lean_LocalDecl_fvarId(v___x_1531_);
lean_inc_ref(v_maybeParam_1513_);
lean_inc(v___y_1523_);
lean_inc_ref(v___y_1522_);
lean_inc(v___y_1521_);
lean_inc_ref(v___y_1520_);
lean_inc(v___y_1519_);
lean_inc_ref(v___y_1518_);
v___x_1533_ = lean_apply_8(v_maybeParam_1513_, v___x_1532_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, lean_box(0));
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; uint8_t v___x_1535_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = lean_unbox(v_a_1534_);
lean_dec(v_a_1534_);
if (v___x_1535_ == 0)
{
v_a_1526_ = v_b_1517_;
goto v___jp_1525_;
}
else
{
lean_object* v___x_1536_; 
lean_inc(v___x_1531_);
v___x_1536_ = lean_array_push(v_b_1517_, v___x_1531_);
v_a_1526_ = v___x_1536_;
goto v___jp_1525_;
}
}
else
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
lean_dec_ref(v_b_1517_);
lean_dec_ref(v_maybeParam_1513_);
v_a_1537_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1533_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1533_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
else
{
lean_object* v___x_1545_; 
lean_dec_ref(v_maybeParam_1513_);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v_b_1517_);
return v___x_1545_;
}
v___jp_1525_:
{
size_t v___x_1527_; size_t v___x_1528_; 
v___x_1527_ = ((size_t)1ULL);
v___x_1528_ = lean_usize_add(v_i_1515_, v___x_1527_);
v_i_1515_ = v___x_1528_;
v_b_1517_ = v_a_1526_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__11___boxed(lean_object* v_maybeParam_1546_, lean_object* v_as_1547_, lean_object* v_i_1548_, lean_object* v_stop_1549_, lean_object* v_b_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_){
_start:
{
size_t v_i_boxed_1558_; size_t v_stop_boxed_1559_; lean_object* v_res_1560_; 
v_i_boxed_1558_ = lean_unbox_usize(v_i_1548_);
lean_dec(v_i_1548_);
v_stop_boxed_1559_ = lean_unbox_usize(v_stop_1549_);
lean_dec(v_stop_1549_);
v_res_1560_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__11(v_maybeParam_1546_, v_as_1547_, v_i_boxed_1558_, v_stop_boxed_1559_, v_b_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec_ref(v_as_1547_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22_spec__28___redArg(lean_object* v_x_1561_, lean_object* v_x_1562_){
_start:
{
if (lean_obj_tag(v_x_1562_) == 0)
{
return v_x_1561_;
}
else
{
lean_object* v_key_1563_; lean_object* v_value_1564_; lean_object* v_tail_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1588_; 
v_key_1563_ = lean_ctor_get(v_x_1562_, 0);
v_value_1564_ = lean_ctor_get(v_x_1562_, 1);
v_tail_1565_ = lean_ctor_get(v_x_1562_, 2);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_x_1562_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1567_ = v_x_1562_;
v_isShared_1568_ = v_isSharedCheck_1588_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_tail_1565_);
lean_inc(v_value_1564_);
lean_inc(v_key_1563_);
lean_dec(v_x_1562_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1588_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1569_; uint64_t v___x_1570_; uint64_t v___x_1571_; uint64_t v___x_1572_; uint64_t v_fold_1573_; uint64_t v___x_1574_; uint64_t v___x_1575_; uint64_t v___x_1576_; size_t v___x_1577_; size_t v___x_1578_; size_t v___x_1579_; size_t v___x_1580_; size_t v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1584_; 
v___x_1569_ = lean_array_get_size(v_x_1561_);
v___x_1570_ = l_Lean_Expr_hash(v_key_1563_);
v___x_1571_ = 32ULL;
v___x_1572_ = lean_uint64_shift_right(v___x_1570_, v___x_1571_);
v_fold_1573_ = lean_uint64_xor(v___x_1570_, v___x_1572_);
v___x_1574_ = 16ULL;
v___x_1575_ = lean_uint64_shift_right(v_fold_1573_, v___x_1574_);
v___x_1576_ = lean_uint64_xor(v_fold_1573_, v___x_1575_);
v___x_1577_ = lean_uint64_to_usize(v___x_1576_);
v___x_1578_ = lean_usize_of_nat(v___x_1569_);
v___x_1579_ = ((size_t)1ULL);
v___x_1580_ = lean_usize_sub(v___x_1578_, v___x_1579_);
v___x_1581_ = lean_usize_land(v___x_1577_, v___x_1580_);
v___x_1582_ = lean_array_uget_borrowed(v_x_1561_, v___x_1581_);
lean_inc(v___x_1582_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set(v___x_1567_, 2, v___x_1582_);
v___x_1584_ = v___x_1567_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_key_1563_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_value_1564_);
lean_ctor_set(v_reuseFailAlloc_1587_, 2, v___x_1582_);
v___x_1584_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1585_; 
v___x_1585_ = lean_array_uset(v_x_1561_, v___x_1581_, v___x_1584_);
v_x_1561_ = v___x_1585_;
v_x_1562_ = v_tail_1565_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22___redArg(lean_object* v_i_1589_, lean_object* v_source_1590_, lean_object* v_target_1591_){
_start:
{
lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1592_ = lean_array_get_size(v_source_1590_);
v___x_1593_ = lean_nat_dec_lt(v_i_1589_, v___x_1592_);
if (v___x_1593_ == 0)
{
lean_dec_ref(v_source_1590_);
lean_dec(v_i_1589_);
return v_target_1591_;
}
else
{
lean_object* v_es_1594_; lean_object* v___x_1595_; lean_object* v_source_1596_; lean_object* v_target_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v_es_1594_ = lean_array_fget(v_source_1590_, v_i_1589_);
v___x_1595_ = lean_box(0);
v_source_1596_ = lean_array_fset(v_source_1590_, v_i_1589_, v___x_1595_);
v_target_1597_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22_spec__28___redArg(v_target_1591_, v_es_1594_);
v___x_1598_ = lean_unsigned_to_nat(1u);
v___x_1599_ = lean_nat_add(v_i_1589_, v___x_1598_);
lean_dec(v_i_1589_);
v_i_1589_ = v___x_1599_;
v_source_1590_ = v_source_1596_;
v_target_1591_ = v_target_1597_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15___redArg(lean_object* v_data_1601_){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v_nbuckets_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v___x_1602_ = lean_array_get_size(v_data_1601_);
v___x_1603_ = lean_unsigned_to_nat(2u);
v_nbuckets_1604_ = lean_nat_mul(v___x_1602_, v___x_1603_);
v___x_1605_ = lean_unsigned_to_nat(0u);
v___x_1606_ = lean_box(0);
v___x_1607_ = lean_mk_array(v_nbuckets_1604_, v___x_1606_);
v___x_1608_ = lean_array_propagate_mark(v_data_1601_, v___x_1607_);
v___x_1609_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22___redArg(v___x_1605_, v_data_1601_, v___x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___redArg(lean_object* v_a_1610_, lean_object* v_x_1611_){
_start:
{
if (lean_obj_tag(v_x_1611_) == 0)
{
uint8_t v___x_1612_; 
v___x_1612_ = 0;
return v___x_1612_;
}
else
{
lean_object* v_key_1613_; lean_object* v_tail_1614_; uint8_t v___x_1615_; 
v_key_1613_ = lean_ctor_get(v_x_1611_, 0);
v_tail_1614_ = lean_ctor_get(v_x_1611_, 2);
v___x_1615_ = lean_expr_eqv(v_key_1613_, v_a_1610_);
if (v___x_1615_ == 0)
{
v_x_1611_ = v_tail_1614_;
goto _start;
}
else
{
return v___x_1615_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___redArg___boxed(lean_object* v_a_1617_, lean_object* v_x_1618_){
_start:
{
uint8_t v_res_1619_; lean_object* v_r_1620_; 
v_res_1619_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___redArg(v_a_1617_, v_x_1618_);
lean_dec(v_x_1618_);
lean_dec_ref(v_a_1617_);
v_r_1620_ = lean_box(v_res_1619_);
return v_r_1620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__16___redArg(lean_object* v_a_1621_, lean_object* v_b_1622_, lean_object* v_x_1623_){
_start:
{
if (lean_obj_tag(v_x_1623_) == 0)
{
lean_dec(v_b_1622_);
lean_dec_ref(v_a_1621_);
return v_x_1623_;
}
else
{
lean_object* v_key_1624_; lean_object* v_value_1625_; lean_object* v_tail_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1638_; 
v_key_1624_ = lean_ctor_get(v_x_1623_, 0);
v_value_1625_ = lean_ctor_get(v_x_1623_, 1);
v_tail_1626_ = lean_ctor_get(v_x_1623_, 2);
v_isSharedCheck_1638_ = !lean_is_exclusive(v_x_1623_);
if (v_isSharedCheck_1638_ == 0)
{
v___x_1628_ = v_x_1623_;
v_isShared_1629_ = v_isSharedCheck_1638_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_tail_1626_);
lean_inc(v_value_1625_);
lean_inc(v_key_1624_);
lean_dec(v_x_1623_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1638_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
uint8_t v___x_1630_; 
v___x_1630_ = lean_expr_eqv(v_key_1624_, v_a_1621_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; lean_object* v___x_1633_; 
v___x_1631_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__16___redArg(v_a_1621_, v_b_1622_, v_tail_1626_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 2, v___x_1631_);
v___x_1633_ = v___x_1628_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_key_1624_);
lean_ctor_set(v_reuseFailAlloc_1634_, 1, v_value_1625_);
lean_ctor_set(v_reuseFailAlloc_1634_, 2, v___x_1631_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
else
{
lean_object* v___x_1636_; 
lean_dec(v_value_1625_);
lean_dec(v_key_1624_);
if (v_isShared_1629_ == 0)
{
lean_ctor_set(v___x_1628_, 1, v_b_1622_);
lean_ctor_set(v___x_1628_, 0, v_a_1621_);
v___x_1636_ = v___x_1628_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1637_; 
v_reuseFailAlloc_1637_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1637_, 0, v_a_1621_);
lean_ctor_set(v_reuseFailAlloc_1637_, 1, v_b_1622_);
lean_ctor_set(v_reuseFailAlloc_1637_, 2, v_tail_1626_);
v___x_1636_ = v_reuseFailAlloc_1637_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
return v___x_1636_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8___redArg(lean_object* v_m_1639_, lean_object* v_a_1640_, lean_object* v_b_1641_){
_start:
{
lean_object* v_size_1642_; lean_object* v_buckets_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1686_; 
v_size_1642_ = lean_ctor_get(v_m_1639_, 0);
v_buckets_1643_ = lean_ctor_get(v_m_1639_, 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_m_1639_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1645_ = v_m_1639_;
v_isShared_1646_ = v_isSharedCheck_1686_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_buckets_1643_);
lean_inc(v_size_1642_);
lean_dec(v_m_1639_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1686_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1647_; uint64_t v___x_1648_; uint64_t v___x_1649_; uint64_t v___x_1650_; uint64_t v_fold_1651_; uint64_t v___x_1652_; uint64_t v___x_1653_; uint64_t v___x_1654_; size_t v___x_1655_; size_t v___x_1656_; size_t v___x_1657_; size_t v___x_1658_; size_t v___x_1659_; lean_object* v_bkt_1660_; uint8_t v___x_1661_; 
v___x_1647_ = lean_array_get_size(v_buckets_1643_);
v___x_1648_ = l_Lean_Expr_hash(v_a_1640_);
v___x_1649_ = 32ULL;
v___x_1650_ = lean_uint64_shift_right(v___x_1648_, v___x_1649_);
v_fold_1651_ = lean_uint64_xor(v___x_1648_, v___x_1650_);
v___x_1652_ = 16ULL;
v___x_1653_ = lean_uint64_shift_right(v_fold_1651_, v___x_1652_);
v___x_1654_ = lean_uint64_xor(v_fold_1651_, v___x_1653_);
v___x_1655_ = lean_uint64_to_usize(v___x_1654_);
v___x_1656_ = lean_usize_of_nat(v___x_1647_);
v___x_1657_ = ((size_t)1ULL);
v___x_1658_ = lean_usize_sub(v___x_1656_, v___x_1657_);
v___x_1659_ = lean_usize_land(v___x_1655_, v___x_1658_);
v_bkt_1660_ = lean_array_uget_borrowed(v_buckets_1643_, v___x_1659_);
v___x_1661_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___redArg(v_a_1640_, v_bkt_1660_);
if (v___x_1661_ == 0)
{
lean_object* v___x_1662_; lean_object* v_size_x27_1663_; lean_object* v___x_1664_; lean_object* v_buckets_x27_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; uint8_t v___x_1671_; 
v___x_1662_ = lean_unsigned_to_nat(1u);
v_size_x27_1663_ = lean_nat_add(v_size_1642_, v___x_1662_);
lean_dec(v_size_1642_);
lean_inc(v_bkt_1660_);
v___x_1664_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1664_, 0, v_a_1640_);
lean_ctor_set(v___x_1664_, 1, v_b_1641_);
lean_ctor_set(v___x_1664_, 2, v_bkt_1660_);
v_buckets_x27_1665_ = lean_array_uset(v_buckets_1643_, v___x_1659_, v___x_1664_);
v___x_1666_ = lean_unsigned_to_nat(4u);
v___x_1667_ = lean_nat_mul(v_size_x27_1663_, v___x_1666_);
v___x_1668_ = lean_unsigned_to_nat(3u);
v___x_1669_ = lean_nat_div(v___x_1667_, v___x_1668_);
lean_dec(v___x_1667_);
v___x_1670_ = lean_array_get_size(v_buckets_x27_1665_);
v___x_1671_ = lean_nat_dec_le(v___x_1669_, v___x_1670_);
lean_dec(v___x_1669_);
if (v___x_1671_ == 0)
{
lean_object* v_val_1672_; lean_object* v___x_1674_; 
v_val_1672_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15___redArg(v_buckets_x27_1665_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 1, v_val_1672_);
lean_ctor_set(v___x_1645_, 0, v_size_x27_1663_);
v___x_1674_ = v___x_1645_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_size_x27_1663_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v_val_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
else
{
lean_object* v___x_1677_; 
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 1, v_buckets_x27_1665_);
lean_ctor_set(v___x_1645_, 0, v_size_x27_1663_);
v___x_1677_ = v___x_1645_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_size_x27_1663_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v_buckets_x27_1665_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
else
{
lean_object* v___x_1679_; lean_object* v_buckets_x27_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1684_; 
lean_inc(v_bkt_1660_);
v___x_1679_ = lean_box(0);
v_buckets_x27_1680_ = lean_array_uset(v_buckets_1643_, v___x_1659_, v___x_1679_);
v___x_1681_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__16___redArg(v_a_1640_, v_b_1641_, v_bkt_1660_);
v___x_1682_ = lean_array_uset(v_buckets_x27_1680_, v___x_1659_, v___x_1681_);
if (v_isShared_1646_ == 0)
{
lean_ctor_set(v___x_1645_, 1, v___x_1682_);
v___x_1684_ = v___x_1645_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_size_1642_);
lean_ctor_set(v_reuseFailAlloc_1685_, 1, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0(lean_object* v___x_1687_, uint8_t v_snd_1688_, lean_object* v_fst_1689_, lean_object* v___x_1690_, lean_object* v___x_1691_, lean_object* v_____r_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1700_ = lean_box(v_snd_1688_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1687_);
lean_ctor_set(v___x_1701_, 1, v___x_1700_);
v___x_1702_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8___redArg(v_fst_1689_, v___x_1690_, v___x_1701_);
v___x_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
lean_ctor_set(v___x_1703_, 1, v___x_1691_);
v___x_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
v___x_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0___boxed(lean_object* v___x_1706_, lean_object* v_snd_1707_, lean_object* v_fst_1708_, lean_object* v___x_1709_, lean_object* v___x_1710_, lean_object* v_____r_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
uint8_t v_snd_24187__boxed_1719_; lean_object* v_res_1720_; 
v_snd_24187__boxed_1719_ = lean_unbox(v_snd_1707_);
v_res_1720_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0(v___x_1706_, v_snd_24187__boxed_1719_, v_fst_1708_, v___x_1709_, v___x_1710_, v_____r_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
return v_res_1720_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9_spec__18(lean_object* v_a_1721_, lean_object* v_as_1722_, size_t v_i_1723_, size_t v_stop_1724_){
_start:
{
uint8_t v___x_1725_; 
v___x_1725_ = lean_usize_dec_eq(v_i_1723_, v_stop_1724_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1726_; uint8_t v___x_1727_; 
v___x_1726_ = lean_array_uget_borrowed(v_as_1722_, v_i_1723_);
v___x_1727_ = lean_expr_eqv(v_a_1721_, v___x_1726_);
if (v___x_1727_ == 0)
{
size_t v___x_1728_; size_t v___x_1729_; 
v___x_1728_ = ((size_t)1ULL);
v___x_1729_ = lean_usize_add(v_i_1723_, v___x_1728_);
v_i_1723_ = v___x_1729_;
goto _start;
}
else
{
return v___x_1727_;
}
}
else
{
uint8_t v___x_1731_; 
v___x_1731_ = 0;
return v___x_1731_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9_spec__18___boxed(lean_object* v_a_1732_, lean_object* v_as_1733_, lean_object* v_i_1734_, lean_object* v_stop_1735_){
_start:
{
size_t v_i_boxed_1736_; size_t v_stop_boxed_1737_; uint8_t v_res_1738_; lean_object* v_r_1739_; 
v_i_boxed_1736_ = lean_unbox_usize(v_i_1734_);
lean_dec(v_i_1734_);
v_stop_boxed_1737_ = lean_unbox_usize(v_stop_1735_);
lean_dec(v_stop_1735_);
v_res_1738_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9_spec__18(v_a_1732_, v_as_1733_, v_i_boxed_1736_, v_stop_boxed_1737_);
lean_dec_ref(v_as_1733_);
lean_dec_ref(v_a_1732_);
v_r_1739_ = lean_box(v_res_1738_);
return v_r_1739_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9(lean_object* v_as_1740_, lean_object* v_a_1741_){
_start:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1742_ = lean_unsigned_to_nat(0u);
v___x_1743_ = lean_array_get_size(v_as_1740_);
v___x_1744_ = lean_nat_dec_lt(v___x_1742_, v___x_1743_);
if (v___x_1744_ == 0)
{
return v___x_1744_;
}
else
{
if (v___x_1744_ == 0)
{
return v___x_1744_;
}
else
{
size_t v___x_1745_; size_t v___x_1746_; uint8_t v___x_1747_; 
v___x_1745_ = ((size_t)0ULL);
v___x_1746_ = lean_usize_of_nat(v___x_1743_);
v___x_1747_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9_spec__18(v_a_1741_, v_as_1740_, v___x_1745_, v___x_1746_);
return v___x_1747_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9___boxed(lean_object* v_as_1748_, lean_object* v_a_1749_){
_start:
{
uint8_t v_res_1750_; lean_object* v_r_1751_; 
v_res_1750_ = l_Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9(v_as_1748_, v_a_1749_);
lean_dec_ref(v_a_1749_);
lean_dec_ref(v_as_1748_);
v_r_1751_ = lean_box(v_res_1750_);
return v_r_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(lean_object* v_ref_1752_, lean_object* v_msg_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_toCold_1761_; lean_object* v_currRecDepth_1762_; lean_object* v_ref_1763_; uint8_t v_diag_1764_; uint8_t v_suppressElabErrors_1765_; lean_object* v_ref_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v_toCold_1761_ = lean_ctor_get(v___y_1758_, 0);
v_currRecDepth_1762_ = lean_ctor_get(v___y_1758_, 1);
v_ref_1763_ = lean_ctor_get(v___y_1758_, 2);
v_diag_1764_ = lean_ctor_get_uint8(v___y_1758_, sizeof(void*)*3);
v_suppressElabErrors_1765_ = lean_ctor_get_uint8(v___y_1758_, sizeof(void*)*3 + 1);
v_ref_1766_ = l_Lean_replaceRef(v_ref_1752_, v_ref_1763_);
lean_inc(v_currRecDepth_1762_);
lean_inc_ref(v_toCold_1761_);
v___x_1767_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1767_, 0, v_toCold_1761_);
lean_ctor_set(v___x_1767_, 1, v_currRecDepth_1762_);
lean_ctor_set(v___x_1767_, 2, v_ref_1766_);
lean_ctor_set_uint8(v___x_1767_, sizeof(void*)*3, v_diag_1764_);
lean_ctor_set_uint8(v___x_1767_, sizeof(void*)*3 + 1, v_suppressElabErrors_1765_);
v___x_1768_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(v_msg_1753_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_, v___x_1767_, v___y_1759_);
lean_dec_ref_known(v___x_1767_, 3);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg___boxed(lean_object* v_ref_1769_, lean_object* v_msg_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(v_ref_1769_, v_msg_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v_ref_1769_);
return v_res_1778_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__1(void){
_start:
{
lean_object* v___x_1780_; lean_object* v___x_1781_; 
v___x_1780_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__0));
v___x_1781_ = l_Lean_stringToMessageData(v___x_1780_);
return v___x_1781_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__4(void){
_start:
{
lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1785_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__3));
v___x_1786_ = l_Lean_MessageData_ofFormat(v___x_1785_);
return v___x_1786_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__5(void){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__4);
v___x_1788_ = l_Lean_MessageData_hint_x27(v___x_1787_);
return v___x_1788_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6(void){
_start:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v___x_1789_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__5);
v___x_1790_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__1);
v___x_1791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___x_1790_);
lean_ctor_set(v___x_1791_, 1, v___x_1789_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10(uint8_t v_snd_1792_, lean_object* v___x_1793_, lean_object* v_params_1794_, lean_object* v_as_1795_, size_t v_sz_1796_, size_t v_i_1797_, lean_object* v_b_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_){
_start:
{
lean_object* v___y_1807_; uint8_t v___x_1829_; 
v___x_1829_ = lean_usize_dec_lt(v_i_1797_, v_sz_1796_);
if (v___x_1829_ == 0)
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1830_, 0, v_b_1798_);
return v___x_1830_;
}
else
{
lean_object* v_snd_1831_; lean_object* v_fst_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1887_; 
v_snd_1831_ = lean_ctor_get(v_b_1798_, 1);
v_fst_1832_ = lean_ctor_get(v_b_1798_, 0);
v_isSharedCheck_1887_ = !lean_is_exclusive(v_b_1798_);
if (v_isSharedCheck_1887_ == 0)
{
v___x_1834_ = v_b_1798_;
v_isShared_1835_ = v_isSharedCheck_1887_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_snd_1831_);
lean_inc(v_fst_1832_);
lean_dec(v_b_1798_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1887_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v_array_1836_; lean_object* v_start_1837_; lean_object* v_stop_1838_; uint8_t v___x_1839_; 
v_array_1836_ = lean_ctor_get(v_snd_1831_, 0);
v_start_1837_ = lean_ctor_get(v_snd_1831_, 1);
v_stop_1838_ = lean_ctor_get(v_snd_1831_, 2);
v___x_1839_ = lean_nat_dec_lt(v_start_1837_, v_stop_1838_);
if (v___x_1839_ == 0)
{
lean_object* v___x_1841_; 
if (v_isShared_1835_ == 0)
{
v___x_1841_ = v___x_1834_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_fst_1832_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v_snd_1831_);
v___x_1841_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1842_; 
v___x_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1842_, 0, v___x_1841_);
return v___x_1842_;
}
}
else
{
lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1883_; 
lean_inc(v_stop_1838_);
lean_inc(v_start_1837_);
lean_inc_ref(v_array_1836_);
lean_del_object(v___x_1834_);
v_isSharedCheck_1883_ = !lean_is_exclusive(v_snd_1831_);
if (v_isSharedCheck_1883_ == 0)
{
lean_object* v_unused_1884_; lean_object* v_unused_1885_; lean_object* v_unused_1886_; 
v_unused_1884_ = lean_ctor_get(v_snd_1831_, 2);
lean_dec(v_unused_1884_);
v_unused_1885_ = lean_ctor_get(v_snd_1831_, 1);
lean_dec(v_unused_1885_);
v_unused_1886_ = lean_ctor_get(v_snd_1831_, 0);
lean_dec(v_unused_1886_);
v___x_1845_ = v_snd_1831_;
v_isShared_1846_ = v_isSharedCheck_1883_;
goto v_resetjp_1844_;
}
else
{
lean_dec(v_snd_1831_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1883_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; uint8_t v___x_1848_; lean_object* v_a_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1854_; 
v___x_1847_ = lean_unsigned_to_nat(0u);
v___x_1848_ = lean_nat_dec_lt(v___x_1847_, v___x_1793_);
v_a_1849_ = lean_array_uget_borrowed(v_as_1795_, v_i_1797_);
v___x_1850_ = lean_array_fget(v_array_1836_, v_start_1837_);
v___x_1851_ = lean_unsigned_to_nat(1u);
v___x_1852_ = lean_nat_add(v_start_1837_, v___x_1851_);
lean_dec(v_start_1837_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1852_);
v___x_1854_ = v___x_1845_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_array_1836_);
lean_ctor_set(v_reuseFailAlloc_1882_, 1, v___x_1852_);
lean_ctor_set(v_reuseFailAlloc_1882_, 2, v_stop_1838_);
v___x_1854_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
lean_inc(v_a_1849_);
v___x_1855_ = l_Lean_LocalDecl_toExpr(v_a_1849_);
v___x_1856_ = lean_box(0);
v___x_1857_ = lean_box(0);
lean_inc_ref(v___x_1855_);
lean_inc(v___x_1850_);
v___x_1858_ = l_Lean_Elab_Term_addTermInfo_x27(v___x_1850_, v___x_1855_, v___x_1856_, v___x_1856_, v___x_1857_, v___x_1848_, v___x_1848_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
if (lean_obj_tag(v___x_1858_) == 0)
{
uint8_t v___x_1859_; 
lean_dec_ref_known(v___x_1858_, 1);
v___x_1859_ = l_Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9(v_params_1794_, v___x_1855_);
if (v___x_1859_ == 0)
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6);
v___x_1861_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(v___x_1850_, v___x_1860_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
if (lean_obj_tag(v___x_1861_) == 0)
{
lean_object* v_a_1862_; lean_object* v___x_1863_; 
v_a_1862_ = lean_ctor_get(v___x_1861_, 0);
lean_inc(v_a_1862_);
lean_dec_ref_known(v___x_1861_, 1);
v___x_1863_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0(v___x_1850_, v_snd_1792_, v_fst_1832_, v___x_1855_, v___x_1854_, v_a_1862_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
v___y_1807_ = v___x_1863_;
goto v___jp_1806_;
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
lean_dec_ref(v___x_1855_);
lean_dec_ref(v___x_1854_);
lean_dec(v___x_1850_);
lean_dec(v_fst_1832_);
v_a_1864_ = lean_ctor_get(v___x_1861_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1861_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1861_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1861_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
else
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_box(0);
v___x_1873_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0(v___x_1850_, v_snd_1792_, v_fst_1832_, v___x_1855_, v___x_1854_, v___x_1872_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
v___y_1807_ = v___x_1873_;
goto v___jp_1806_;
}
}
else
{
lean_object* v_a_1874_; lean_object* v___x_1876_; uint8_t v_isShared_1877_; uint8_t v_isSharedCheck_1881_; 
lean_dec_ref(v___x_1855_);
lean_dec_ref(v___x_1854_);
lean_dec(v___x_1850_);
lean_dec(v_fst_1832_);
v_a_1874_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1881_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1881_ == 0)
{
v___x_1876_ = v___x_1858_;
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
else
{
lean_inc(v_a_1874_);
lean_dec(v___x_1858_);
v___x_1876_ = lean_box(0);
v_isShared_1877_ = v_isSharedCheck_1881_;
goto v_resetjp_1875_;
}
v_resetjp_1875_:
{
lean_object* v___x_1879_; 
if (v_isShared_1877_ == 0)
{
v___x_1879_ = v___x_1876_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1880_; 
v_reuseFailAlloc_1880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1880_, 0, v_a_1874_);
v___x_1879_ = v_reuseFailAlloc_1880_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
return v___x_1879_;
}
}
}
}
}
}
}
}
v___jp_1806_:
{
if (lean_obj_tag(v___y_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1820_; 
v_a_1808_ = lean_ctor_get(v___y_1807_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___y_1807_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1810_ = v___y_1807_;
v_isShared_1811_ = v_isSharedCheck_1820_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___y_1807_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1820_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
if (lean_obj_tag(v_a_1808_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1814_; 
v_a_1812_ = lean_ctor_get(v_a_1808_, 0);
lean_inc(v_a_1812_);
lean_dec_ref_known(v_a_1808_, 1);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v_a_1812_);
v___x_1814_ = v___x_1810_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1812_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
else
{
lean_object* v_a_1816_; size_t v___x_1817_; size_t v___x_1818_; 
lean_del_object(v___x_1810_);
v_a_1816_ = lean_ctor_get(v_a_1808_, 0);
lean_inc(v_a_1816_);
lean_dec_ref_known(v_a_1808_, 1);
v___x_1817_ = ((size_t)1ULL);
v___x_1818_ = lean_usize_add(v_i_1797_, v___x_1817_);
v_i_1797_ = v___x_1818_;
v_b_1798_ = v_a_1816_;
goto _start;
}
}
}
else
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1828_; 
v_a_1821_ = lean_ctor_get(v___y_1807_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___y_1807_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1823_ = v___y_1807_;
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v___y_1807_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1828_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
if (v_isShared_1824_ == 0)
{
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1827_; 
v_reuseFailAlloc_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1827_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1827_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
return v___x_1826_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___boxed(lean_object* v_snd_1888_, lean_object* v___x_1889_, lean_object* v_params_1890_, lean_object* v_as_1891_, lean_object* v_sz_1892_, lean_object* v_i_1893_, lean_object* v_b_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
uint8_t v_snd_24311__boxed_1902_; size_t v_sz_boxed_1903_; size_t v_i_boxed_1904_; lean_object* v_res_1905_; 
v_snd_24311__boxed_1902_ = lean_unbox(v_snd_1888_);
v_sz_boxed_1903_ = lean_unbox_usize(v_sz_1892_);
lean_dec(v_sz_1892_);
v_i_boxed_1904_ = lean_unbox_usize(v_i_1893_);
lean_dec(v_i_1893_);
v_res_1905_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10(v_snd_24311__boxed_1902_, v___x_1889_, v_params_1890_, v_as_1891_, v_sz_boxed_1903_, v_i_boxed_1904_, v_b_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_);
lean_dec(v___y_1900_);
lean_dec_ref(v___y_1899_);
lean_dec(v___y_1898_);
lean_dec_ref(v___y_1897_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec_ref(v_as_1891_);
lean_dec_ref(v_params_1890_);
lean_dec(v___x_1889_);
return v_res_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__12(uint8_t v_snd_1906_, lean_object* v_params_1907_, lean_object* v_as_1908_, size_t v_sz_1909_, size_t v_i_1910_, lean_object* v_b_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___y_1920_; uint8_t v___x_1942_; 
v___x_1942_ = lean_usize_dec_lt(v_i_1910_, v_sz_1909_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1943_, 0, v_b_1911_);
return v___x_1943_;
}
else
{
lean_object* v_snd_1944_; lean_object* v_fst_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1999_; 
v_snd_1944_ = lean_ctor_get(v_b_1911_, 1);
v_fst_1945_ = lean_ctor_get(v_b_1911_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v_b_1911_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1947_ = v_b_1911_;
v_isShared_1948_ = v_isSharedCheck_1999_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_snd_1944_);
lean_inc(v_fst_1945_);
lean_dec(v_b_1911_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1999_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v_array_1949_; lean_object* v_start_1950_; lean_object* v_stop_1951_; uint8_t v___x_1952_; 
v_array_1949_ = lean_ctor_get(v_snd_1944_, 0);
v_start_1950_ = lean_ctor_get(v_snd_1944_, 1);
v_stop_1951_ = lean_ctor_get(v_snd_1944_, 2);
v___x_1952_ = lean_nat_dec_lt(v_start_1950_, v_stop_1951_);
if (v___x_1952_ == 0)
{
lean_object* v___x_1954_; 
if (v_isShared_1948_ == 0)
{
v___x_1954_ = v___x_1947_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_fst_1945_);
lean_ctor_set(v_reuseFailAlloc_1956_, 1, v_snd_1944_);
v___x_1954_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
lean_object* v___x_1955_; 
v___x_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1955_, 0, v___x_1954_);
return v___x_1955_;
}
}
else
{
lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1995_; 
lean_inc(v_stop_1951_);
lean_inc(v_start_1950_);
lean_inc_ref(v_array_1949_);
lean_del_object(v___x_1947_);
v_isSharedCheck_1995_ = !lean_is_exclusive(v_snd_1944_);
if (v_isSharedCheck_1995_ == 0)
{
lean_object* v_unused_1996_; lean_object* v_unused_1997_; lean_object* v_unused_1998_; 
v_unused_1996_ = lean_ctor_get(v_snd_1944_, 2);
lean_dec(v_unused_1996_);
v_unused_1997_ = lean_ctor_get(v_snd_1944_, 1);
lean_dec(v_unused_1997_);
v_unused_1998_ = lean_ctor_get(v_snd_1944_, 0);
lean_dec(v_unused_1998_);
v___x_1958_ = v_snd_1944_;
v_isShared_1959_ = v_isSharedCheck_1995_;
goto v_resetjp_1957_;
}
else
{
lean_dec(v_snd_1944_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1995_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
uint8_t v___x_1960_; lean_object* v_a_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1960_ = 0;
v_a_1961_ = lean_array_uget_borrowed(v_as_1908_, v_i_1910_);
v___x_1962_ = lean_array_fget(v_array_1949_, v_start_1950_);
v___x_1963_ = lean_unsigned_to_nat(1u);
v___x_1964_ = lean_nat_add(v_start_1950_, v___x_1963_);
lean_dec(v_start_1950_);
if (v_isShared_1959_ == 0)
{
lean_ctor_set(v___x_1958_, 1, v___x_1964_);
v___x_1966_ = v___x_1958_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_array_1949_);
lean_ctor_set(v_reuseFailAlloc_1994_, 1, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1994_, 2, v_stop_1951_);
v___x_1966_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
lean_inc(v_a_1961_);
v___x_1967_ = l_Lean_LocalDecl_toExpr(v_a_1961_);
v___x_1968_ = lean_box(0);
v___x_1969_ = lean_box(0);
lean_inc_ref(v___x_1967_);
lean_inc(v___x_1962_);
v___x_1970_ = l_Lean_Elab_Term_addTermInfo_x27(v___x_1962_, v___x_1967_, v___x_1968_, v___x_1968_, v___x_1969_, v___x_1960_, v___x_1960_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1970_) == 0)
{
uint8_t v___x_1971_; 
lean_dec_ref_known(v___x_1970_, 1);
v___x_1971_ = l_Array_contains___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__9(v_params_1907_, v___x_1967_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1972_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___closed__6);
v___x_1973_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(v___x_1962_, v___x_1972_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1975_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_a_1974_);
lean_dec_ref_known(v___x_1973_, 1);
v___x_1975_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0(v___x_1962_, v_snd_1906_, v_fst_1945_, v___x_1967_, v___x_1966_, v_a_1974_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
v___y_1920_ = v___x_1975_;
goto v___jp_1919_;
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
lean_dec_ref(v___x_1967_);
lean_dec_ref(v___x_1966_);
lean_dec(v___x_1962_);
lean_dec(v_fst_1945_);
v_a_1976_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1973_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1973_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
else
{
lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1984_ = lean_box(0);
v___x_1985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10___lam__0(v___x_1962_, v_snd_1906_, v_fst_1945_, v___x_1967_, v___x_1966_, v___x_1984_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
v___y_1920_ = v___x_1985_;
goto v___jp_1919_;
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1993_; 
lean_dec_ref(v___x_1967_);
lean_dec_ref(v___x_1966_);
lean_dec(v___x_1962_);
lean_dec(v_fst_1945_);
v_a_1986_ = lean_ctor_get(v___x_1970_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1988_ = v___x_1970_;
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1970_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1993_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
}
}
}
}
}
}
v___jp_1919_:
{
if (lean_obj_tag(v___y_1920_) == 0)
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1933_; 
v_a_1921_ = lean_ctor_get(v___y_1920_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___y_1920_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1923_ = v___y_1920_;
v_isShared_1924_ = v_isSharedCheck_1933_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___y_1920_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1933_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
if (lean_obj_tag(v_a_1921_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1927_; 
v_a_1925_ = lean_ctor_get(v_a_1921_, 0);
lean_inc(v_a_1925_);
lean_dec_ref_known(v_a_1921_, 1);
if (v_isShared_1924_ == 0)
{
lean_ctor_set(v___x_1923_, 0, v_a_1925_);
v___x_1927_ = v___x_1923_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1925_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
else
{
lean_object* v_a_1929_; size_t v___x_1930_; size_t v___x_1931_; 
lean_del_object(v___x_1923_);
v_a_1929_ = lean_ctor_get(v_a_1921_, 0);
lean_inc(v_a_1929_);
lean_dec_ref_known(v_a_1921_, 1);
v___x_1930_ = ((size_t)1ULL);
v___x_1931_ = lean_usize_add(v_i_1910_, v___x_1930_);
v_i_1910_ = v___x_1931_;
v_b_1911_ = v_a_1929_;
goto _start;
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
v_a_1934_ = lean_ctor_get(v___y_1920_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___y_1920_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___y_1920_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___y_1920_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__12___boxed(lean_object* v_snd_2000_, lean_object* v_params_2001_, lean_object* v_as_2002_, lean_object* v_sz_2003_, lean_object* v_i_2004_, lean_object* v_b_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
uint8_t v_snd_24517__boxed_2013_; size_t v_sz_boxed_2014_; size_t v_i_boxed_2015_; lean_object* v_res_2016_; 
v_snd_24517__boxed_2013_ = lean_unbox(v_snd_2000_);
v_sz_boxed_2014_ = lean_unbox_usize(v_sz_2003_);
lean_dec(v_sz_2003_);
v_i_boxed_2015_ = lean_unbox_usize(v_i_2004_);
lean_dec(v_i_2004_);
v_res_2016_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__12(v_snd_24517__boxed_2013_, v_params_2001_, v_as_2002_, v_sz_boxed_2014_, v_i_boxed_2015_, v_b_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec_ref(v_as_2002_);
lean_dec_ref(v_params_2001_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__1(lean_object* v_fst_2017_, lean_object* v___x_2018_, lean_object* v_binders_2019_, lean_object* v_a_2020_, lean_object* v___x_2021_, lean_object* v_snd_2022_, uint8_t v_snd_2023_, lean_object* v_params_2024_, lean_object* v___x_2025_, lean_object* v_maybeParam_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v_lctx_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; uint8_t v___x_2039_; 
v_lctx_2034_ = lean_ctor_get(v___y_2029_, 2);
v___x_2035_ = lean_array_get_size(v_fst_2017_);
v___x_2036_ = l_Array_filterMapM___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__7(v_lctx_2034_, v_fst_2017_, v___x_2018_, v___x_2035_);
v___x_2037_ = lean_array_get_size(v___x_2036_);
v___x_2038_ = lean_mk_empty_array_with_capacity(v___x_2018_);
v___x_2039_ = lean_nat_dec_lt(v___x_2018_, v___x_2037_);
if (v___x_2039_ == 0)
{
lean_object* v___x_2040_; uint8_t v___x_2041_; 
lean_dec_ref(v___x_2036_);
lean_dec_ref(v_maybeParam_2026_);
v___x_2040_ = lean_array_get_size(v___x_2038_);
v___x_2041_ = lean_nat_dec_eq(v___x_2040_, v___x_2035_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; 
lean_dec_ref(v___x_2038_);
lean_dec(v___x_2025_);
lean_dec(v___x_2018_);
lean_dec_ref(v_fst_2017_);
v___x_2042_ = l_Array_extract___redArg(v_binders_2019_, v_a_2020_, v___x_2021_);
lean_inc(v_snd_2022_);
v___x_2043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
lean_ctor_set(v___x_2043_, 1, v_snd_2022_);
v___x_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
lean_ctor_set(v___x_2045_, 1, v_snd_2022_);
v___x_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
v___x_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2046_);
return v___x_2047_;
}
else
{
lean_object* v___x_2048_; lean_object* v___x_2049_; size_t v_sz_2050_; size_t v___x_2051_; lean_object* v___x_2052_; 
lean_dec(v___x_2021_);
lean_dec(v_a_2020_);
v___x_2048_ = l_Array_toSubarray___redArg(v_fst_2017_, v___x_2018_, v___x_2035_);
v___x_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2049_, 0, v_snd_2022_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v_sz_2050_ = lean_array_size(v___x_2038_);
v___x_2051_ = ((size_t)0ULL);
v___x_2052_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__10(v_snd_2023_, v___x_2037_, v_params_2024_, v___x_2038_, v_sz_2050_, v___x_2051_, v___x_2049_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec_ref(v___x_2038_);
if (lean_obj_tag(v___x_2052_) == 0)
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2070_; 
v_a_2053_ = lean_ctor_get(v___x_2052_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2052_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2055_ = v___x_2052_;
v_isShared_2056_ = v_isSharedCheck_2070_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2052_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2070_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v_fst_2057_; lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2068_; 
v_fst_2057_ = lean_ctor_get(v_a_2053_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v_a_2053_);
if (v_isSharedCheck_2068_ == 0)
{
lean_object* v_unused_2069_; 
v_unused_2069_ = lean_ctor_get(v_a_2053_, 1);
lean_dec(v_unused_2069_);
v___x_2059_ = v_a_2053_;
v_isShared_2060_ = v_isSharedCheck_2068_;
goto v_resetjp_2058_;
}
else
{
lean_inc(v_fst_2057_);
lean_dec(v_a_2053_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2068_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 1, v_fst_2057_);
lean_ctor_set(v___x_2059_, 0, v___x_2025_);
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v_fst_2057_);
v___x_2062_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
lean_object* v___x_2063_; lean_object* v___x_2065_; 
v___x_2063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2062_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v___x_2063_);
v___x_2065_ = v___x_2055_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2066_; 
v_reuseFailAlloc_2066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2066_, 0, v___x_2063_);
v___x_2065_ = v_reuseFailAlloc_2066_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
return v___x_2065_;
}
}
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec(v___x_2025_);
v_a_2071_ = lean_ctor_get(v___x_2052_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2052_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2052_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2052_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
else
{
size_t v___x_2079_; size_t v___x_2080_; lean_object* v___x_2081_; 
v___x_2079_ = ((size_t)0ULL);
v___x_2080_ = lean_usize_of_nat(v___x_2037_);
v___x_2081_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__11(v_maybeParam_2026_, v___x_2036_, v___x_2079_, v___x_2080_, v___x_2038_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec_ref(v___x_2036_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2126_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2084_ = v___x_2081_;
v_isShared_2085_ = v_isSharedCheck_2126_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2081_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2126_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; uint8_t v___x_2087_; 
v___x_2086_ = lean_array_get_size(v_a_2082_);
v___x_2087_ = lean_nat_dec_eq(v___x_2086_, v___x_2035_);
if (v___x_2087_ == 0)
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2094_; 
lean_dec(v_a_2082_);
lean_dec(v___x_2025_);
lean_dec(v___x_2018_);
lean_dec_ref(v_fst_2017_);
v___x_2088_ = l_Array_extract___redArg(v_binders_2019_, v_a_2020_, v___x_2021_);
lean_inc(v_snd_2022_);
v___x_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2088_);
lean_ctor_set(v___x_2089_, 1, v_snd_2022_);
v___x_2090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
v___x_2091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
lean_ctor_set(v___x_2091_, 1, v_snd_2022_);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 0, v___x_2092_);
v___x_2094_ = v___x_2084_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
else
{
lean_object* v___x_2096_; lean_object* v___x_2097_; size_t v_sz_2098_; lean_object* v___x_2099_; 
lean_del_object(v___x_2084_);
lean_dec(v___x_2021_);
lean_dec(v_a_2020_);
v___x_2096_ = l_Array_toSubarray___redArg(v_fst_2017_, v___x_2018_, v___x_2035_);
v___x_2097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2097_, 0, v_snd_2022_);
lean_ctor_set(v___x_2097_, 1, v___x_2096_);
v_sz_2098_ = lean_array_size(v_a_2082_);
v___x_2099_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__12(v_snd_2023_, v_params_2024_, v_a_2082_, v_sz_2098_, v___x_2079_, v___x_2097_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_);
lean_dec(v_a_2082_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2102_; uint8_t v_isShared_2103_; uint8_t v_isSharedCheck_2117_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2102_ = v___x_2099_;
v_isShared_2103_ = v_isSharedCheck_2117_;
goto v_resetjp_2101_;
}
else
{
lean_inc(v_a_2100_);
lean_dec(v___x_2099_);
v___x_2102_ = lean_box(0);
v_isShared_2103_ = v_isSharedCheck_2117_;
goto v_resetjp_2101_;
}
v_resetjp_2101_:
{
lean_object* v_fst_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2115_; 
v_fst_2104_ = lean_ctor_get(v_a_2100_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_a_2100_);
if (v_isSharedCheck_2115_ == 0)
{
lean_object* v_unused_2116_; 
v_unused_2116_ = lean_ctor_get(v_a_2100_, 1);
lean_dec(v_unused_2116_);
v___x_2106_ = v_a_2100_;
v_isShared_2107_ = v_isSharedCheck_2115_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_fst_2104_);
lean_dec(v_a_2100_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2115_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 1, v_fst_2104_);
lean_ctor_set(v___x_2106_, 0, v___x_2025_);
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v_fst_2104_);
v___x_2109_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v___x_2110_; lean_object* v___x_2112_; 
v___x_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2109_);
if (v_isShared_2103_ == 0)
{
lean_ctor_set(v___x_2102_, 0, v___x_2110_);
v___x_2112_ = v___x_2102_;
goto v_reusejp_2111_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v___x_2110_);
v___x_2112_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2111_;
}
v_reusejp_2111_:
{
return v___x_2112_;
}
}
}
}
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
lean_dec(v___x_2025_);
v_a_2118_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___x_2099_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2099_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
}
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2134_; 
lean_dec(v___x_2025_);
lean_dec(v_snd_2022_);
lean_dec(v___x_2021_);
lean_dec(v_a_2020_);
lean_dec(v___x_2018_);
lean_dec_ref(v_fst_2017_);
v_a_2127_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2129_ = v___x_2081_;
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2081_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_a_2127_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__1___boxed(lean_object** _args){
lean_object* v_fst_2135_ = _args[0];
lean_object* v___x_2136_ = _args[1];
lean_object* v_binders_2137_ = _args[2];
lean_object* v_a_2138_ = _args[3];
lean_object* v___x_2139_ = _args[4];
lean_object* v_snd_2140_ = _args[5];
lean_object* v_snd_2141_ = _args[6];
lean_object* v_params_2142_ = _args[7];
lean_object* v___x_2143_ = _args[8];
lean_object* v_maybeParam_2144_ = _args[9];
lean_object* v___y_2145_ = _args[10];
lean_object* v___y_2146_ = _args[11];
lean_object* v___y_2147_ = _args[12];
lean_object* v___y_2148_ = _args[13];
lean_object* v___y_2149_ = _args[14];
lean_object* v___y_2150_ = _args[15];
lean_object* v___y_2151_ = _args[16];
_start:
{
uint8_t v_snd_24701__boxed_2152_; lean_object* v_res_2153_; 
v_snd_24701__boxed_2152_ = lean_unbox(v_snd_2141_);
v_res_2153_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__1(v_fst_2135_, v___x_2136_, v_binders_2137_, v_a_2138_, v___x_2139_, v_snd_2140_, v_snd_24701__boxed_2152_, v_params_2142_, v___x_2143_, v_maybeParam_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec(v___y_2146_);
lean_dec_ref(v___y_2145_);
lean_dec_ref(v_params_2142_);
lean_dec_ref(v_binders_2137_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___redArg(lean_object* v_upperBound_2154_, lean_object* v_binders_2155_, lean_object* v___x_2156_, lean_object* v_params_2157_, lean_object* v_maybeParam_2158_, lean_object* v_a_2159_, lean_object* v_b_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_){
_start:
{
lean_object* v___y_2169_; uint8_t v___x_2192_; 
v___x_2192_ = lean_nat_dec_lt(v_a_2159_, v_upperBound_2154_);
if (v___x_2192_ == 0)
{
lean_object* v___x_2193_; 
lean_dec(v_a_2159_);
lean_dec_ref(v_maybeParam_2158_);
lean_dec_ref(v_params_2157_);
lean_dec(v___x_2156_);
lean_dec_ref(v_binders_2155_);
v___x_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2193_, 0, v_b_2160_);
return v___x_2193_;
}
else
{
lean_object* v_snd_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2215_; 
v_snd_2194_ = lean_ctor_get(v_b_2160_, 1);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_b_2160_);
if (v_isSharedCheck_2215_ == 0)
{
lean_object* v_unused_2216_; 
v_unused_2216_ = lean_ctor_get(v_b_2160_, 0);
lean_dec(v_unused_2216_);
v___x_2196_ = v_b_2160_;
v_isShared_2197_ = v_isSharedCheck_2215_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_snd_2194_);
lean_dec(v_b_2160_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2215_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2198_ = lean_box(0);
v___x_2199_ = lean_array_get_borrowed(v___x_2198_, v_binders_2155_, v_a_2159_);
lean_inc(v___x_2199_);
v___x_2200_ = l___private_Lean_Elab_MutualInductive_0__Lean_Elab_Command_typelessBinder_x3f(v___x_2199_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v___x_2201_; lean_object* v___x_2203_; 
lean_inc(v___x_2156_);
lean_inc(v_a_2159_);
v___x_2201_ = l_Array_extract___redArg(v_binders_2155_, v_a_2159_, v___x_2156_);
lean_inc(v_snd_2194_);
if (v_isShared_2197_ == 0)
{
lean_ctor_set(v___x_2196_, 0, v___x_2201_);
v___x_2203_ = v___x_2196_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2201_);
lean_ctor_set(v_reuseFailAlloc_2208_, 1, v_snd_2194_);
v___x_2203_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___f_2207_; 
v___x_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
v___x_2205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
lean_ctor_set(v___x_2205_, 1, v_snd_2194_);
v___x_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2205_);
v___f_2207_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2207_, 0, v___x_2206_);
v___y_2169_ = v___f_2207_;
goto v___jp_2168_;
}
}
else
{
lean_object* v_val_2209_; lean_object* v_fst_2210_; lean_object* v_snd_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___f_2214_; 
lean_del_object(v___x_2196_);
v_val_2209_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_val_2209_);
lean_dec_ref_known(v___x_2200_, 1);
v_fst_2210_ = lean_ctor_get(v_val_2209_, 0);
lean_inc(v_fst_2210_);
v_snd_2211_ = lean_ctor_get(v_val_2209_, 1);
lean_inc(v_snd_2211_);
lean_dec(v_val_2209_);
v___x_2212_ = lean_unsigned_to_nat(0u);
v___x_2213_ = lean_box(0);
lean_inc_ref(v_maybeParam_2158_);
lean_inc_ref(v_params_2157_);
lean_inc(v___x_2156_);
lean_inc(v_a_2159_);
lean_inc_ref(v_binders_2155_);
v___f_2214_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__1___boxed), 17, 10);
lean_closure_set(v___f_2214_, 0, v_fst_2210_);
lean_closure_set(v___f_2214_, 1, v___x_2212_);
lean_closure_set(v___f_2214_, 2, v_binders_2155_);
lean_closure_set(v___f_2214_, 3, v_a_2159_);
lean_closure_set(v___f_2214_, 4, v___x_2156_);
lean_closure_set(v___f_2214_, 5, v_snd_2194_);
lean_closure_set(v___f_2214_, 6, v_snd_2211_);
lean_closure_set(v___f_2214_, 7, v_params_2157_);
lean_closure_set(v___f_2214_, 8, v___x_2213_);
lean_closure_set(v___f_2214_, 9, v_maybeParam_2158_);
v___y_2169_ = v___f_2214_;
goto v___jp_2168_;
}
}
}
v___jp_2168_:
{
lean_object* v___x_2170_; 
lean_inc(v___y_2166_);
lean_inc_ref(v___y_2165_);
lean_inc(v___y_2164_);
lean_inc_ref(v___y_2163_);
lean_inc(v___y_2162_);
lean_inc_ref(v___y_2161_);
v___x_2170_ = lean_apply_7(v___y_2169_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, lean_box(0));
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2183_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2183_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2183_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
if (lean_obj_tag(v_a_2171_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2177_; 
lean_dec(v_a_2159_);
lean_dec_ref(v_maybeParam_2158_);
lean_dec_ref(v_params_2157_);
lean_dec(v___x_2156_);
lean_dec_ref(v_binders_2155_);
v_a_2175_ = lean_ctor_get(v_a_2171_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v_a_2171_, 1);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v_a_2175_);
v___x_2177_ = v___x_2173_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2175_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
else
{
lean_object* v_a_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; 
lean_del_object(v___x_2173_);
v_a_2179_ = lean_ctor_get(v_a_2171_, 0);
lean_inc(v_a_2179_);
lean_dec_ref_known(v_a_2171_, 1);
v___x_2180_ = lean_unsigned_to_nat(1u);
v___x_2181_ = lean_nat_add(v_a_2159_, v___x_2180_);
lean_dec(v_a_2159_);
v_a_2159_ = v___x_2181_;
v_b_2160_ = v_a_2179_;
goto _start;
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_a_2159_);
lean_dec_ref(v_maybeParam_2158_);
lean_dec_ref(v_params_2157_);
lean_dec(v___x_2156_);
lean_dec_ref(v_binders_2155_);
v_a_2184_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2170_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2170_);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___redArg___boxed(lean_object* v_upperBound_2217_, lean_object* v_binders_2218_, lean_object* v___x_2219_, lean_object* v_params_2220_, lean_object* v_maybeParam_2221_, lean_object* v_a_2222_, lean_object* v_b_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_){
_start:
{
lean_object* v_res_2231_; 
v_res_2231_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___redArg(v_upperBound_2217_, v_binders_2218_, v___x_2219_, v_params_2220_, v_maybeParam_2221_, v_a_2222_, v_b_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
lean_dec(v___y_2229_);
lean_dec_ref(v___y_2228_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v_upperBound_2217_);
return v_res_2231_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg(lean_object* v_upperBound_2232_, lean_object* v_binders_2233_, lean_object* v___x_2234_, lean_object* v_maybeParam_2235_, lean_object* v_params_2236_, lean_object* v_a_2237_, lean_object* v_b_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___y_2247_; uint8_t v___x_2270_; 
v___x_2270_ = lean_nat_dec_lt(v_a_2237_, v_upperBound_2232_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; 
lean_dec(v_a_2237_);
lean_dec_ref(v_params_2236_);
lean_dec_ref(v_maybeParam_2235_);
lean_dec(v___x_2234_);
lean_dec_ref(v_binders_2233_);
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v_b_2238_);
return v___x_2271_;
}
else
{
lean_object* v_snd_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2293_; 
v_snd_2272_ = lean_ctor_get(v_b_2238_, 1);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_b_2238_);
if (v_isSharedCheck_2293_ == 0)
{
lean_object* v_unused_2294_; 
v_unused_2294_ = lean_ctor_get(v_b_2238_, 0);
lean_dec(v_unused_2294_);
v___x_2274_ = v_b_2238_;
v_isShared_2275_ = v_isSharedCheck_2293_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_snd_2272_);
lean_dec(v_b_2238_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2293_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2276_ = lean_box(0);
v___x_2277_ = lean_array_get_borrowed(v___x_2276_, v_binders_2233_, v_a_2237_);
lean_inc(v___x_2277_);
v___x_2278_ = l___private_Lean_Elab_MutualInductive_0__Lean_Elab_Command_typelessBinder_x3f(v___x_2277_);
if (lean_obj_tag(v___x_2278_) == 0)
{
lean_object* v___x_2279_; lean_object* v___x_2281_; 
lean_inc(v___x_2234_);
lean_inc(v_a_2237_);
v___x_2279_ = l_Array_extract___redArg(v_binders_2233_, v_a_2237_, v___x_2234_);
lean_inc(v_snd_2272_);
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 0, v___x_2279_);
v___x_2281_ = v___x_2274_;
goto v_reusejp_2280_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v___x_2279_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v_snd_2272_);
v___x_2281_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2280_;
}
v_reusejp_2280_:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___f_2285_; 
v___x_2282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
v___x_2283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2282_);
lean_ctor_set(v___x_2283_, 1, v_snd_2272_);
v___x_2284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2283_);
v___f_2285_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2285_, 0, v___x_2284_);
v___y_2247_ = v___f_2285_;
goto v___jp_2246_;
}
}
else
{
lean_object* v_val_2287_; lean_object* v_fst_2288_; lean_object* v_snd_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___f_2292_; 
lean_del_object(v___x_2274_);
v_val_2287_ = lean_ctor_get(v___x_2278_, 0);
lean_inc(v_val_2287_);
lean_dec_ref_known(v___x_2278_, 1);
v_fst_2288_ = lean_ctor_get(v_val_2287_, 0);
lean_inc(v_fst_2288_);
v_snd_2289_ = lean_ctor_get(v_val_2287_, 1);
lean_inc(v_snd_2289_);
lean_dec(v_val_2287_);
v___x_2290_ = lean_unsigned_to_nat(0u);
v___x_2291_ = lean_box(0);
lean_inc_ref(v_maybeParam_2235_);
lean_inc_ref(v_params_2236_);
lean_inc(v___x_2234_);
lean_inc(v_a_2237_);
lean_inc_ref(v_binders_2233_);
v___f_2292_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___lam__1___boxed), 17, 10);
lean_closure_set(v___f_2292_, 0, v_fst_2288_);
lean_closure_set(v___f_2292_, 1, v___x_2290_);
lean_closure_set(v___f_2292_, 2, v_binders_2233_);
lean_closure_set(v___f_2292_, 3, v_a_2237_);
lean_closure_set(v___f_2292_, 4, v___x_2234_);
lean_closure_set(v___f_2292_, 5, v_snd_2272_);
lean_closure_set(v___f_2292_, 6, v_snd_2289_);
lean_closure_set(v___f_2292_, 7, v_params_2236_);
lean_closure_set(v___f_2292_, 8, v___x_2291_);
lean_closure_set(v___f_2292_, 9, v_maybeParam_2235_);
v___y_2247_ = v___f_2292_;
goto v___jp_2246_;
}
}
}
v___jp_2246_:
{
lean_object* v___x_2248_; 
lean_inc(v___y_2244_);
lean_inc_ref(v___y_2243_);
lean_inc(v___y_2242_);
lean_inc_ref(v___y_2241_);
lean_inc(v___y_2240_);
lean_inc_ref(v___y_2239_);
v___x_2248_ = lean_apply_7(v___y_2247_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, lean_box(0));
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2261_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2251_ = v___x_2248_;
v_isShared_2252_ = v_isSharedCheck_2261_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2248_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2261_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
if (lean_obj_tag(v_a_2249_) == 0)
{
lean_object* v_a_2253_; lean_object* v___x_2255_; 
lean_dec(v_a_2237_);
lean_dec_ref(v_params_2236_);
lean_dec_ref(v_maybeParam_2235_);
lean_dec(v___x_2234_);
lean_dec_ref(v_binders_2233_);
v_a_2253_ = lean_ctor_get(v_a_2249_, 0);
lean_inc(v_a_2253_);
lean_dec_ref_known(v_a_2249_, 1);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 0, v_a_2253_);
v___x_2255_ = v___x_2251_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_a_2253_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
else
{
lean_object* v_a_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
lean_del_object(v___x_2251_);
v_a_2257_ = lean_ctor_get(v_a_2249_, 0);
lean_inc(v_a_2257_);
lean_dec_ref_known(v_a_2249_, 1);
v___x_2258_ = lean_unsigned_to_nat(1u);
v___x_2259_ = lean_nat_add(v_a_2237_, v___x_2258_);
lean_dec(v_a_2237_);
v___x_2260_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___redArg(v_upperBound_2232_, v_binders_2233_, v___x_2234_, v_params_2236_, v_maybeParam_2235_, v___x_2259_, v_a_2257_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
return v___x_2260_;
}
}
}
else
{
lean_object* v_a_2262_; lean_object* v___x_2264_; uint8_t v_isShared_2265_; uint8_t v_isSharedCheck_2269_; 
lean_dec(v_a_2237_);
lean_dec_ref(v_params_2236_);
lean_dec_ref(v_maybeParam_2235_);
lean_dec(v___x_2234_);
lean_dec_ref(v_binders_2233_);
v_a_2262_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2269_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2269_ == 0)
{
v___x_2264_ = v___x_2248_;
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
else
{
lean_inc(v_a_2262_);
lean_dec(v___x_2248_);
v___x_2264_ = lean_box(0);
v_isShared_2265_ = v_isSharedCheck_2269_;
goto v_resetjp_2263_;
}
v_resetjp_2263_:
{
lean_object* v___x_2267_; 
if (v_isShared_2265_ == 0)
{
v___x_2267_ = v___x_2264_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2262_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg___boxed(lean_object* v_upperBound_2295_, lean_object* v_binders_2296_, lean_object* v___x_2297_, lean_object* v_maybeParam_2298_, lean_object* v_params_2299_, lean_object* v_a_2300_, lean_object* v_b_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg(v_upperBound_2295_, v_binders_2296_, v___x_2297_, v_maybeParam_2298_, v_params_2299_, v_a_2300_, v_b_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
lean_dec(v___y_2307_);
lean_dec_ref(v___y_2306_);
lean_dec(v___y_2305_);
lean_dec_ref(v___y_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v_upperBound_2295_);
return v_res_2309_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__0(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2310_ = lean_box(0);
v___x_2311_ = lean_unsigned_to_nat(16u);
v___x_2312_ = lean_mk_array(v___x_2311_, v___x_2310_);
return v___x_2312_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__1(void){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v_overrides_2315_; 
v___x_2313_ = lean_obj_once(&l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__0, &l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__0_once, _init_l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__0);
v___x_2314_ = lean_unsigned_to_nat(0u);
v_overrides_2315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_overrides_2315_, 0, v___x_2314_);
lean_ctor_set(v_overrides_2315_, 1, v___x_2313_);
return v_overrides_2315_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__2(void){
_start:
{
lean_object* v_overrides_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v_overrides_2316_ = lean_obj_once(&l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__1, &l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__1_once, _init_l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__1);
v___x_2317_ = lean_box(0);
v___x_2318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
lean_ctor_set(v___x_2318_, 1, v_overrides_2316_);
return v___x_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4(lean_object* v_params_2321_, lean_object* v_binders_2322_, lean_object* v_maybeParam_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2331_ = lean_unsigned_to_nat(0u);
v___x_2332_ = lean_array_get_size(v_binders_2322_);
v___x_2333_ = lean_obj_once(&l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__2, &l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__2_once, _init_l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__2);
v___x_2334_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg(v___x_2332_, v_binders_2322_, v___x_2332_, v_maybeParam_2323_, v_params_2321_, v___x_2331_, v___x_2333_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2357_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2337_ = v___x_2334_;
v_isShared_2338_ = v_isSharedCheck_2357_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2334_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2357_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v_fst_2339_; 
v_fst_2339_ = lean_ctor_get(v_a_2335_, 0);
if (lean_obj_tag(v_fst_2339_) == 0)
{
lean_object* v_snd_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2351_; 
v_snd_2340_ = lean_ctor_get(v_a_2335_, 1);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_a_2335_);
if (v_isSharedCheck_2351_ == 0)
{
lean_object* v_unused_2352_; 
v_unused_2352_ = lean_ctor_get(v_a_2335_, 0);
lean_dec(v_unused_2352_);
v___x_2342_ = v_a_2335_;
v_isShared_2343_ = v_isSharedCheck_2351_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_snd_2340_);
lean_dec(v_a_2335_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2351_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2344_; lean_object* v___x_2346_; 
v___x_2344_ = ((lean_object*)(l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__3));
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 0, v___x_2344_);
v___x_2346_ = v___x_2342_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2344_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v_snd_2340_);
v___x_2346_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2348_; 
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v___x_2346_);
v___x_2348_ = v___x_2337_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
else
{
lean_object* v_val_2353_; lean_object* v___x_2355_; 
lean_inc_ref(v_fst_2339_);
lean_dec(v_a_2335_);
v_val_2353_ = lean_ctor_get(v_fst_2339_, 0);
lean_inc(v_val_2353_);
lean_dec_ref_known(v_fst_2339_, 1);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v_val_2353_);
v___x_2355_ = v___x_2337_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_val_2353_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
v_a_2358_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2334_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2334_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___boxed(lean_object* v_params_2366_, lean_object* v_binders_2367_, lean_object* v_maybeParam_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4(v_params_2366_, v_binders_2367_, v_maybeParam_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
lean_dec(v___y_2370_);
lean_dec_ref(v___y_2369_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg(lean_object* v_as_2377_, size_t v_i_2378_, size_t v_stop_2379_, lean_object* v_b_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_){
_start:
{
lean_object* v_a_2386_; uint8_t v___x_2390_; 
v___x_2390_ = lean_usize_dec_eq(v_i_2378_, v_stop_2379_);
if (v___x_2390_ == 0)
{
lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2391_ = lean_array_uget_borrowed(v_as_2377_, v_i_2378_);
v___x_2392_ = l_Lean_Expr_fvarId_x21(v___x_2391_);
lean_inc(v___x_2392_);
v___x_2393_ = l_Lean_FVarId_getDecl___redArg(v___x_2392_, v___y_2381_, v___y_2382_, v___y_2383_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v_a_2394_; uint8_t v___x_2395_; uint8_t v___x_2396_; 
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v___x_2393_, 1);
v___x_2395_ = l_Lean_LocalDecl_binderInfo(v_a_2394_);
lean_dec(v_a_2394_);
v___x_2396_ = l_Lean_BinderInfo_isExplicit(v___x_2395_);
if (v___x_2396_ == 0)
{
lean_dec(v___x_2392_);
v_a_2386_ = v_b_2380_;
goto v___jp_2385_;
}
else
{
uint8_t v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2397_ = 1;
v___x_2398_ = lean_box(v___x_2397_);
v___x_2399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2392_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
v___x_2400_ = lean_array_push(v_b_2380_, v___x_2399_);
v_a_2386_ = v___x_2400_;
goto v___jp_2385_;
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
lean_dec(v___x_2392_);
lean_dec_ref(v_b_2380_);
v_a_2401_ = lean_ctor_get(v___x_2393_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2393_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2393_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2393_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
return v___x_2406_;
}
}
}
}
else
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2409_, 0, v_b_2380_);
return v___x_2409_;
}
v___jp_2385_:
{
size_t v___x_2387_; size_t v___x_2388_; 
v___x_2387_ = ((size_t)1ULL);
v___x_2388_ = lean_usize_add(v_i_2378_, v___x_2387_);
v_i_2378_ = v___x_2388_;
v_b_2380_ = v_a_2386_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg___boxed(lean_object* v_as_2410_, lean_object* v_i_2411_, lean_object* v_stop_2412_, lean_object* v_b_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_){
_start:
{
size_t v_i_boxed_2418_; size_t v_stop_boxed_2419_; lean_object* v_res_2420_; 
v_i_boxed_2418_ = lean_unbox_usize(v_i_2411_);
lean_dec(v_i_2411_);
v_stop_boxed_2419_ = lean_unbox_usize(v_stop_2412_);
lean_dec(v_stop_2412_);
v_res_2420_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg(v_as_2410_, v_i_boxed_2418_, v_stop_boxed_2419_, v_b_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
lean_dec(v___y_2416_);
lean_dec_ref(v___y_2415_);
lean_dec_ref(v___y_2414_);
lean_dec_ref(v_as_2410_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3(lean_object* v_as_2423_, lean_object* v_start_2424_, lean_object* v_stop_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v___x_2433_; uint8_t v___x_2434_; 
v___x_2433_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3___closed__0));
v___x_2434_ = lean_nat_dec_lt(v_start_2424_, v_stop_2425_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2435_; 
v___x_2435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2433_);
return v___x_2435_;
}
else
{
lean_object* v___x_2436_; uint8_t v___x_2437_; 
v___x_2436_ = lean_array_get_size(v_as_2423_);
v___x_2437_ = lean_nat_dec_le(v_stop_2425_, v___x_2436_);
if (v___x_2437_ == 0)
{
uint8_t v___x_2438_; 
v___x_2438_ = lean_nat_dec_lt(v_start_2424_, v___x_2436_);
if (v___x_2438_ == 0)
{
lean_object* v___x_2439_; 
v___x_2439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2433_);
return v___x_2439_;
}
else
{
size_t v___x_2440_; size_t v___x_2441_; lean_object* v___x_2442_; 
v___x_2440_ = lean_usize_of_nat(v_start_2424_);
v___x_2441_ = lean_usize_of_nat(v___x_2436_);
v___x_2442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg(v_as_2423_, v___x_2440_, v___x_2441_, v___x_2433_, v___y_2428_, v___y_2430_, v___y_2431_);
return v___x_2442_;
}
}
else
{
size_t v___x_2443_; size_t v___x_2444_; lean_object* v___x_2445_; 
v___x_2443_ = lean_usize_of_nat(v_start_2424_);
v___x_2444_ = lean_usize_of_nat(v_stop_2425_);
v___x_2445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg(v_as_2423_, v___x_2443_, v___x_2444_, v___x_2433_, v___y_2428_, v___y_2430_, v___y_2431_);
return v___x_2445_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3___boxed(lean_object* v_as_2446_, lean_object* v_start_2447_, lean_object* v_stop_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3(v_as_2446_, v_start_2447_, v_stop_2448_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec(v_stop_2448_);
lean_dec(v_start_2447_);
lean_dec_ref(v_as_2446_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__10(lean_object* v_x_2457_, lean_object* v_x_2458_){
_start:
{
if (lean_obj_tag(v_x_2458_) == 0)
{
return v_x_2457_;
}
else
{
lean_object* v_key_2459_; lean_object* v_value_2460_; lean_object* v_tail_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v_key_2459_ = lean_ctor_get(v_x_2458_, 0);
v_value_2460_ = lean_ctor_get(v_x_2458_, 1);
v_tail_2461_ = lean_ctor_get(v_x_2458_, 2);
lean_inc(v_value_2460_);
lean_inc(v_key_2459_);
v___x_2462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2462_, 0, v_key_2459_);
lean_ctor_set(v___x_2462_, 1, v_value_2460_);
v___x_2463_ = lean_array_push(v_x_2457_, v___x_2462_);
v_x_2457_ = v___x_2463_;
v_x_2458_ = v_tail_2461_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__10___boxed(lean_object* v_x_2465_, lean_object* v_x_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__10(v_x_2465_, v_x_2466_);
lean_dec(v_x_2466_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__11(lean_object* v_as_2468_, size_t v_i_2469_, size_t v_stop_2470_, lean_object* v_b_2471_){
_start:
{
uint8_t v___x_2472_; 
v___x_2472_ = lean_usize_dec_eq(v_i_2469_, v_stop_2470_);
if (v___x_2472_ == 0)
{
lean_object* v___x_2473_; lean_object* v___x_2474_; size_t v___x_2475_; size_t v___x_2476_; 
v___x_2473_ = lean_array_uget_borrowed(v_as_2468_, v_i_2469_);
v___x_2474_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__10(v_b_2471_, v___x_2473_);
v___x_2475_ = ((size_t)1ULL);
v___x_2476_ = lean_usize_add(v_i_2469_, v___x_2475_);
v_i_2469_ = v___x_2476_;
v_b_2471_ = v___x_2474_;
goto _start;
}
else
{
return v_b_2471_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__11___boxed(lean_object* v_as_2478_, lean_object* v_i_2479_, lean_object* v_stop_2480_, lean_object* v_b_2481_){
_start:
{
size_t v_i_boxed_2482_; size_t v_stop_boxed_2483_; lean_object* v_res_2484_; 
v_i_boxed_2482_ = lean_unbox_usize(v_i_2479_);
lean_dec(v_i_2479_);
v_stop_boxed_2483_ = lean_unbox_usize(v_stop_2480_);
lean_dec(v_stop_2480_);
v_res_2484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__11(v_as_2478_, v_i_boxed_2482_, v_stop_boxed_2483_, v_b_2481_);
lean_dec_ref(v_as_2478_);
return v_res_2484_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__5(void){
_start:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__4));
v___x_2493_ = l_Lean_stringToMessageData(v___x_2492_);
return v___x_2493_;
}
}
static lean_object* _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__7(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__6));
v___x_2496_ = l_Lean_stringToMessageData(v___x_2495_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5(lean_object* v_value_2497_, lean_object* v_declName_2498_, lean_object* v___x_2499_, uint8_t v___x_2500_, lean_object* v_levelParams_2501_, lean_object* v_ctorName_2502_, lean_object* v_fieldName_2503_, lean_object* v_projName_2504_, lean_object* v___f_2505_, lean_object* v_equivName_2506_, lean_object* v_ctorBinders_2507_, lean_object* v___f_2508_, lean_object* v_params_2509_, lean_object* v_resultType_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_){
_start:
{
lean_object* v___y_2519_; lean_object* v___y_2520_; lean_object* v___y_2521_; lean_object* v___y_2522_; lean_object* v___y_2523_; lean_object* v___y_2524_; lean_object* v___y_2525_; lean_object* v___y_2526_; lean_object* v___y_2527_; lean_object* v___y_2528_; lean_object* v___y_2529_; lean_object* v___y_2530_; lean_object* v___y_2531_; lean_object* v___y_2576_; lean_object* v___y_2577_; lean_object* v___y_2578_; lean_object* v___y_2579_; lean_object* v___y_2580_; lean_object* v___y_2581_; lean_object* v___x_2633_; 
lean_inc(v___y_2516_);
lean_inc_ref(v___y_2515_);
lean_inc(v___y_2514_);
lean_inc_ref(v___y_2513_);
v___x_2633_ = lean_whnf(v_resultType_2510_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
if (lean_obj_tag(v___x_2633_) == 0)
{
lean_object* v_a_2634_; uint8_t v___x_2635_; 
v_a_2634_ = lean_ctor_get(v___x_2633_, 0);
lean_inc(v_a_2634_);
lean_dec_ref_known(v___x_2633_, 1);
v___x_2635_ = l_Lean_Expr_isSort(v_a_2634_);
lean_dec(v_a_2634_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec_ref(v_params_2509_);
lean_dec_ref(v___f_2508_);
lean_dec_ref(v_ctorBinders_2507_);
lean_dec(v_equivName_2506_);
lean_dec_ref(v___f_2505_);
lean_dec(v_projName_2504_);
lean_dec(v_fieldName_2503_);
lean_dec(v_ctorName_2502_);
lean_dec(v_levelParams_2501_);
lean_dec(v___x_2499_);
lean_dec(v_declName_2498_);
lean_dec_ref(v_value_2497_);
v___x_2636_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__7, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__7_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__7);
v___x_2637_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_2636_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2637_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2637_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
else
{
goto v___jp_2590_;
}
}
else
{
lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2653_; 
lean_dec_ref(v_params_2509_);
lean_dec_ref(v___f_2508_);
lean_dec_ref(v_ctorBinders_2507_);
lean_dec(v_equivName_2506_);
lean_dec_ref(v___f_2505_);
lean_dec(v_projName_2504_);
lean_dec(v_fieldName_2503_);
lean_dec(v_ctorName_2502_);
lean_dec(v_levelParams_2501_);
lean_dec(v___x_2499_);
lean_dec(v_declName_2498_);
lean_dec_ref(v_value_2497_);
v_a_2646_ = lean_ctor_get(v___x_2633_, 0);
v_isSharedCheck_2653_ = !lean_is_exclusive(v___x_2633_);
if (v_isSharedCheck_2653_ == 0)
{
v___x_2648_ = v___x_2633_;
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v___x_2633_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2653_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2651_; 
if (v_isShared_2649_ == 0)
{
v___x_2651_ = v___x_2648_;
goto v_reusejp_2650_;
}
else
{
lean_object* v_reuseFailAlloc_2652_; 
v_reuseFailAlloc_2652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2652_, 0, v_a_2646_);
v___x_2651_ = v_reuseFailAlloc_2652_;
goto v_reusejp_2650_;
}
v_reusejp_2650_:
{
return v___x_2651_;
}
}
}
v___jp_2518_:
{
size_t v_sz_2532_; size_t v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v_env_2537_; uint8_t v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___f_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v_sz_2532_ = lean_array_size(v___y_2531_);
v___x_2533_ = ((size_t)0ULL);
v___x_2534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__5(v_sz_2532_, v___x_2533_, v___y_2531_);
lean_inc_ref(v___y_2522_);
v___x_2535_ = l_Array_append___redArg(v___y_2522_, v___x_2534_);
lean_dec_ref(v___x_2534_);
v___x_2536_ = lean_st_ref_get(v___y_2527_);
v_env_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc_ref(v_env_2537_);
lean_dec(v___x_2536_);
v___x_2538_ = l_Lean_Environment_hasExposedBody(v_env_2537_, v_declName_2498_);
v___x_2539_ = lean_box(v___x_2500_);
v___x_2540_ = lean_box(v___x_2538_);
lean_inc_n(v_levelParams_2501_, 2);
lean_inc_ref_n(v_params_2509_, 2);
v___f_2541_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__3___boxed), 15, 4);
lean_closure_set(v___f_2541_, 0, v_params_2509_);
lean_closure_set(v___f_2541_, 1, v___x_2539_);
lean_closure_set(v___f_2541_, 2, v_levelParams_2501_);
lean_closure_set(v___f_2541_, 3, v___x_2540_);
v___x_2542_ = lean_box(v___x_2500_);
v___x_2543_ = lean_box(v___x_2538_);
lean_inc(v_fieldName_2503_);
lean_inc(v_ctorName_2502_);
v___x_2544_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__3___boxed), 15, 8);
lean_closure_set(v___x_2544_, 0, v_params_2509_);
lean_closure_set(v___x_2544_, 1, v___x_2542_);
lean_closure_set(v___x_2544_, 2, v_levelParams_2501_);
lean_closure_set(v___x_2544_, 3, v___x_2543_);
lean_closure_set(v___x_2544_, 4, v_ctorName_2502_);
lean_closure_set(v___x_2544_, 5, v_fieldName_2503_);
lean_closure_set(v___x_2544_, 6, v___y_2525_);
lean_closure_set(v___x_2544_, 7, v___y_2530_);
v___x_2545_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg(v___x_2535_, v___x_2544_, v___y_2529_, v___y_2523_, v___y_2526_, v___y_2521_, v___y_2524_, v___y_2527_);
lean_dec_ref(v___x_2535_);
if (lean_obj_tag(v___x_2545_) == 0)
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___f_2549_; lean_object* v___x_2550_; 
lean_dec_ref_known(v___x_2545_, 1);
v___x_2546_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__1));
v___x_2547_ = lean_box(v___x_2500_);
v___x_2548_ = lean_box(v___x_2538_);
v___f_2549_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__4___boxed), 21, 14);
lean_closure_set(v___f_2549_, 0, v___f_2541_);
lean_closure_set(v___f_2549_, 1, v_projName_2504_);
lean_closure_set(v___f_2549_, 2, v___x_2546_);
lean_closure_set(v___f_2549_, 3, v___y_2520_);
lean_closure_set(v___f_2549_, 4, v___y_2519_);
lean_closure_set(v___f_2549_, 5, v_ctorName_2502_);
lean_closure_set(v___f_2549_, 6, v___x_2499_);
lean_closure_set(v___f_2549_, 7, v_params_2509_);
lean_closure_set(v___f_2549_, 8, v___f_2505_);
lean_closure_set(v___f_2549_, 9, v_fieldName_2503_);
lean_closure_set(v___f_2549_, 10, v___x_2547_);
lean_closure_set(v___f_2549_, 11, v_equivName_2506_);
lean_closure_set(v___f_2549_, 12, v_levelParams_2501_);
lean_closure_set(v___f_2549_, 13, v___x_2548_);
v___x_2550_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__8___redArg(v___y_2522_, v___f_2549_, v___y_2529_, v___y_2523_, v___y_2526_, v___y_2521_, v___y_2524_, v___y_2527_);
lean_dec_ref(v___y_2522_);
if (lean_obj_tag(v___x_2550_) == 0)
{
lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2557_ == 0)
{
lean_object* v_unused_2558_; 
v_unused_2558_ = lean_ctor_get(v___x_2550_, 0);
lean_dec(v_unused_2558_);
v___x_2552_ = v___x_2550_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_dec(v___x_2550_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
lean_ctor_set(v___x_2552_, 0, v___y_2528_);
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v___y_2528_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
lean_dec(v___y_2528_);
v_a_2559_ = lean_ctor_get(v___x_2550_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2550_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2550_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2550_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
v___x_2564_ = v_reuseFailAlloc_2565_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
return v___x_2564_;
}
}
}
}
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec_ref(v___f_2541_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2522_);
lean_dec_ref(v___y_2520_);
lean_dec_ref(v___y_2519_);
lean_dec_ref(v_params_2509_);
lean_dec(v_equivName_2506_);
lean_dec_ref(v___f_2505_);
lean_dec(v_projName_2504_);
lean_dec(v_fieldName_2503_);
lean_dec(v_ctorName_2502_);
lean_dec(v_levelParams_2501_);
lean_dec(v___x_2499_);
v_a_2567_ = lean_ctor_get(v___x_2545_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2545_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2545_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
v___jp_2575_:
{
lean_object* v_size_2582_; lean_object* v_buckets_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; 
v_size_2582_ = lean_ctor_get(v___y_2581_, 0);
lean_inc(v_size_2582_);
v_buckets_2583_ = lean_ctor_get(v___y_2581_, 1);
lean_inc_ref(v_buckets_2583_);
lean_dec_ref(v___y_2581_);
v___x_2584_ = lean_mk_empty_array_with_capacity(v_size_2582_);
lean_dec(v_size_2582_);
v___x_2585_ = lean_array_get_size(v_buckets_2583_);
v___x_2586_ = lean_nat_dec_lt(v___y_2579_, v___x_2585_);
if (v___x_2586_ == 0)
{
lean_dec_ref(v_buckets_2583_);
lean_inc_ref(v___y_2577_);
lean_inc_ref(v___y_2576_);
v___y_2519_ = v___y_2576_;
v___y_2520_ = v___y_2577_;
v___y_2521_ = v___y_2514_;
v___y_2522_ = v___y_2578_;
v___y_2523_ = v___y_2512_;
v___y_2524_ = v___y_2515_;
v___y_2525_ = v___y_2576_;
v___y_2526_ = v___y_2513_;
v___y_2527_ = v___y_2516_;
v___y_2528_ = v___y_2580_;
v___y_2529_ = v___y_2511_;
v___y_2530_ = v___y_2577_;
v___y_2531_ = v___x_2584_;
goto v___jp_2518_;
}
else
{
size_t v___x_2587_; size_t v___x_2588_; lean_object* v___x_2589_; 
v___x_2587_ = ((size_t)0ULL);
v___x_2588_ = lean_usize_of_nat(v___x_2585_);
v___x_2589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__11(v_buckets_2583_, v___x_2587_, v___x_2588_, v___x_2584_);
lean_dec_ref(v_buckets_2583_);
lean_inc_ref(v___y_2577_);
lean_inc_ref(v___y_2576_);
v___y_2519_ = v___y_2576_;
v___y_2520_ = v___y_2577_;
v___y_2521_ = v___y_2514_;
v___y_2522_ = v___y_2578_;
v___y_2523_ = v___y_2512_;
v___y_2524_ = v___y_2515_;
v___y_2525_ = v___y_2576_;
v___y_2526_ = v___y_2513_;
v___y_2527_ = v___y_2516_;
v___y_2528_ = v___y_2580_;
v___y_2529_ = v___y_2511_;
v___y_2530_ = v___y_2577_;
v___y_2531_ = v___x_2589_;
goto v___jp_2518_;
}
}
v___jp_2590_:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
lean_inc_ref(v_params_2509_);
v___x_2591_ = l_Lean_Expr_beta(v_value_2497_, v_params_2509_);
lean_inc(v___x_2499_);
lean_inc(v_declName_2498_);
v___x_2592_ = l_Lean_mkConst(v_declName_2498_, v___x_2499_);
v___x_2593_ = l_Lean_mkAppN(v___x_2592_, v_params_2509_);
v___x_2594_ = lean_unsigned_to_nat(0u);
v___x_2595_ = lean_array_get_size(v_params_2509_);
v___x_2596_ = l_Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3(v_params_2509_, v___x_2594_, v___x_2595_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2598_; 
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
lean_inc(v_a_2597_);
lean_dec_ref_known(v___x_2596_, 1);
lean_inc_ref(v_params_2509_);
v___x_2598_ = l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4(v_params_2509_, v_ctorBinders_2507_, v___f_2508_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v_fst_2600_; lean_object* v_snd_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref_known(v___x_2598_, 1);
v_fst_2600_ = lean_ctor_get(v_a_2599_, 0);
lean_inc(v_fst_2600_);
v_snd_2601_ = lean_ctor_get(v_a_2599_, 1);
lean_inc(v_snd_2601_);
lean_dec(v_a_2599_);
v___x_2602_ = lean_array_get_size(v_fst_2600_);
v___x_2603_ = lean_nat_dec_eq(v___x_2602_, v___x_2594_);
if (v___x_2603_ == 0)
{
lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v_a_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2616_; 
lean_dec(v_snd_2601_);
lean_dec(v_a_2597_);
lean_dec_ref(v___x_2593_);
lean_dec_ref(v___x_2591_);
lean_dec_ref(v_params_2509_);
lean_dec(v_equivName_2506_);
lean_dec_ref(v___f_2505_);
lean_dec(v_projName_2504_);
lean_dec(v_fieldName_2503_);
lean_dec(v_ctorName_2502_);
lean_dec(v_levelParams_2501_);
lean_dec(v___x_2499_);
lean_dec(v_declName_2498_);
v___x_2604_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3));
v___x_2605_ = lean_box(2);
v___x_2606_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2605_);
lean_ctor_set(v___x_2606_, 1, v___x_2604_);
lean_ctor_set(v___x_2606_, 2, v_fst_2600_);
v___x_2607_ = lean_obj_once(&l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__5, &l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__5_once, _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__5);
v___x_2608_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(v___x_2606_, v___x_2607_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_);
lean_dec_ref_known(v___x_2606_, 3);
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
v_isSharedCheck_2616_ = !lean_is_exclusive(v___x_2608_);
if (v_isSharedCheck_2616_ == 0)
{
v___x_2611_ = v___x_2608_;
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_a_2609_);
lean_dec(v___x_2608_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2616_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2614_; 
if (v_isShared_2612_ == 0)
{
v___x_2614_ = v___x_2611_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v_a_2609_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
}
else
{
lean_dec(v_fst_2600_);
v___y_2576_ = v___x_2591_;
v___y_2577_ = v___x_2593_;
v___y_2578_ = v_a_2597_;
v___y_2579_ = v___x_2594_;
v___y_2580_ = v___x_2595_;
v___y_2581_ = v_snd_2601_;
goto v___jp_2575_;
}
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec(v_a_2597_);
lean_dec_ref(v___x_2593_);
lean_dec_ref(v___x_2591_);
lean_dec_ref(v_params_2509_);
lean_dec(v_equivName_2506_);
lean_dec_ref(v___f_2505_);
lean_dec(v_projName_2504_);
lean_dec(v_fieldName_2503_);
lean_dec(v_ctorName_2502_);
lean_dec(v_levelParams_2501_);
lean_dec(v___x_2499_);
lean_dec(v_declName_2498_);
v_a_2617_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2598_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2598_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_a_2617_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
lean_dec_ref(v___x_2593_);
lean_dec_ref(v___x_2591_);
lean_dec_ref(v_params_2509_);
lean_dec_ref(v___f_2508_);
lean_dec_ref(v_ctorBinders_2507_);
lean_dec(v_equivName_2506_);
lean_dec_ref(v___f_2505_);
lean_dec(v_projName_2504_);
lean_dec(v_fieldName_2503_);
lean_dec(v_ctorName_2502_);
lean_dec(v_levelParams_2501_);
lean_dec(v___x_2499_);
lean_dec(v_declName_2498_);
v_a_2625_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2596_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2596_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___boxed(lean_object** _args){
lean_object* v_value_2654_ = _args[0];
lean_object* v_declName_2655_ = _args[1];
lean_object* v___x_2656_ = _args[2];
lean_object* v___x_2657_ = _args[3];
lean_object* v_levelParams_2658_ = _args[4];
lean_object* v_ctorName_2659_ = _args[5];
lean_object* v_fieldName_2660_ = _args[6];
lean_object* v_projName_2661_ = _args[7];
lean_object* v___f_2662_ = _args[8];
lean_object* v_equivName_2663_ = _args[9];
lean_object* v_ctorBinders_2664_ = _args[10];
lean_object* v___f_2665_ = _args[11];
lean_object* v_params_2666_ = _args[12];
lean_object* v_resultType_2667_ = _args[13];
lean_object* v___y_2668_ = _args[14];
lean_object* v___y_2669_ = _args[15];
lean_object* v___y_2670_ = _args[16];
lean_object* v___y_2671_ = _args[17];
lean_object* v___y_2672_ = _args[18];
lean_object* v___y_2673_ = _args[19];
lean_object* v___y_2674_ = _args[20];
_start:
{
uint8_t v___x_25460__boxed_2675_; lean_object* v_res_2676_; 
v___x_25460__boxed_2675_ = lean_unbox(v___x_2657_);
v_res_2676_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5(v_value_2654_, v_declName_2655_, v___x_2656_, v___x_25460__boxed_2675_, v_levelParams_2658_, v_ctorName_2659_, v_fieldName_2660_, v_projName_2661_, v___f_2662_, v_equivName_2663_, v_ctorBinders_2664_, v___f_2665_, v_params_2666_, v_resultType_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_);
lean_dec(v___y_2673_);
lean_dec_ref(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__2(lean_object* v_a_2677_, lean_object* v_a_2678_){
_start:
{
if (lean_obj_tag(v_a_2677_) == 0)
{
lean_object* v___x_2679_; 
v___x_2679_ = l_List_reverse___redArg(v_a_2678_);
return v___x_2679_;
}
else
{
lean_object* v_head_2680_; lean_object* v_tail_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2690_; 
v_head_2680_ = lean_ctor_get(v_a_2677_, 0);
v_tail_2681_ = lean_ctor_get(v_a_2677_, 1);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_a_2677_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2683_ = v_a_2677_;
v_isShared_2684_ = v_isSharedCheck_2690_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_tail_2681_);
lean_inc(v_head_2680_);
lean_dec(v_a_2677_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2690_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2685_; lean_object* v___x_2687_; 
v___x_2685_ = l_Lean_mkLevelParam(v_head_2680_);
if (v_isShared_2684_ == 0)
{
lean_ctor_set(v___x_2683_, 1, v_a_2678_);
lean_ctor_set(v___x_2683_, 0, v___x_2685_);
v___x_2687_ = v___x_2683_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2689_, 1, v_a_2678_);
v___x_2687_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
v_a_2677_ = v_tail_2681_;
v_a_2678_ = v___x_2687_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___lam__0(lean_object* v___y_2691_, uint8_t v_isExporting_2692_, lean_object* v___x_2693_, lean_object* v___y_2694_, lean_object* v___x_2695_, lean_object* v_a_x3f_2696_){
_start:
{
lean_object* v___x_2698_; lean_object* v_env_2699_; lean_object* v_nextMacroScope_2700_; lean_object* v_ngen_2701_; lean_object* v_auxDeclNGen_2702_; lean_object* v_traceState_2703_; lean_object* v_messages_2704_; lean_object* v_infoState_2705_; lean_object* v_snapshotTasks_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2731_; 
v___x_2698_ = lean_st_ref_take(v___y_2691_);
v_env_2699_ = lean_ctor_get(v___x_2698_, 0);
v_nextMacroScope_2700_ = lean_ctor_get(v___x_2698_, 1);
v_ngen_2701_ = lean_ctor_get(v___x_2698_, 2);
v_auxDeclNGen_2702_ = lean_ctor_get(v___x_2698_, 3);
v_traceState_2703_ = lean_ctor_get(v___x_2698_, 4);
v_messages_2704_ = lean_ctor_get(v___x_2698_, 6);
v_infoState_2705_ = lean_ctor_get(v___x_2698_, 7);
v_snapshotTasks_2706_ = lean_ctor_get(v___x_2698_, 8);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2731_ == 0)
{
lean_object* v_unused_2732_; 
v_unused_2732_ = lean_ctor_get(v___x_2698_, 5);
lean_dec(v_unused_2732_);
v___x_2708_ = v___x_2698_;
v_isShared_2709_ = v_isSharedCheck_2731_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_snapshotTasks_2706_);
lean_inc(v_infoState_2705_);
lean_inc(v_messages_2704_);
lean_inc(v_traceState_2703_);
lean_inc(v_auxDeclNGen_2702_);
lean_inc(v_ngen_2701_);
lean_inc(v_nextMacroScope_2700_);
lean_inc(v_env_2699_);
lean_dec(v___x_2698_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2731_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2710_; lean_object* v___x_2712_; 
v___x_2710_ = l_Lean_Environment_setExporting(v_env_2699_, v_isExporting_2692_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 5, v___x_2693_);
lean_ctor_set(v___x_2708_, 0, v___x_2710_);
v___x_2712_ = v___x_2708_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v___x_2710_);
lean_ctor_set(v_reuseFailAlloc_2730_, 1, v_nextMacroScope_2700_);
lean_ctor_set(v_reuseFailAlloc_2730_, 2, v_ngen_2701_);
lean_ctor_set(v_reuseFailAlloc_2730_, 3, v_auxDeclNGen_2702_);
lean_ctor_set(v_reuseFailAlloc_2730_, 4, v_traceState_2703_);
lean_ctor_set(v_reuseFailAlloc_2730_, 5, v___x_2693_);
lean_ctor_set(v_reuseFailAlloc_2730_, 6, v_messages_2704_);
lean_ctor_set(v_reuseFailAlloc_2730_, 7, v_infoState_2705_);
lean_ctor_set(v_reuseFailAlloc_2730_, 8, v_snapshotTasks_2706_);
v___x_2712_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v_mctx_2715_; lean_object* v_zetaDeltaFVarIds_2716_; lean_object* v_postponed_2717_; lean_object* v_diag_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2728_; 
v___x_2713_ = lean_st_ref_put(v___y_2691_, v___x_2712_);
v___x_2714_ = lean_st_ref_take(v___y_2694_);
v_mctx_2715_ = lean_ctor_get(v___x_2714_, 0);
v_zetaDeltaFVarIds_2716_ = lean_ctor_get(v___x_2714_, 2);
v_postponed_2717_ = lean_ctor_get(v___x_2714_, 3);
v_diag_2718_ = lean_ctor_get(v___x_2714_, 4);
v_isSharedCheck_2728_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2728_ == 0)
{
lean_object* v_unused_2729_; 
v_unused_2729_ = lean_ctor_get(v___x_2714_, 1);
lean_dec(v_unused_2729_);
v___x_2720_ = v___x_2714_;
v_isShared_2721_ = v_isSharedCheck_2728_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_diag_2718_);
lean_inc(v_postponed_2717_);
lean_inc(v_zetaDeltaFVarIds_2716_);
lean_inc(v_mctx_2715_);
lean_dec(v___x_2714_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2728_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2722_; lean_object* v___x_2724_; 
v___x_2722_ = lean_box(0);
if (v_isShared_2721_ == 0)
{
lean_ctor_set(v___x_2720_, 1, v___x_2695_);
v___x_2724_ = v___x_2720_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_mctx_2715_);
lean_ctor_set(v_reuseFailAlloc_2727_, 1, v___x_2695_);
lean_ctor_set(v_reuseFailAlloc_2727_, 2, v_zetaDeltaFVarIds_2716_);
lean_ctor_set(v_reuseFailAlloc_2727_, 3, v_postponed_2717_);
lean_ctor_set(v_reuseFailAlloc_2727_, 4, v_diag_2718_);
v___x_2724_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
lean_object* v___x_2725_; lean_object* v___x_2726_; 
v___x_2725_ = lean_st_ref_put(v___y_2694_, v___x_2724_);
v___x_2726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2722_);
return v___x_2726_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v___y_2733_, lean_object* v_isExporting_2734_, lean_object* v___x_2735_, lean_object* v___y_2736_, lean_object* v___x_2737_, lean_object* v_a_x3f_2738_, lean_object* v___y_2739_){
_start:
{
uint8_t v_isExporting_boxed_2740_; lean_object* v_res_2741_; 
v_isExporting_boxed_2740_ = lean_unbox(v_isExporting_2734_);
v_res_2741_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___lam__0(v___y_2733_, v_isExporting_boxed_2740_, v___x_2735_, v___y_2736_, v___x_2737_, v_a_x3f_2738_);
lean_dec(v_a_x3f_2738_);
lean_dec(v___y_2736_);
lean_dec(v___y_2733_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg(lean_object* v_x_2742_, uint8_t v_isExporting_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_){
_start:
{
lean_object* v___x_2751_; lean_object* v_env_2752_; lean_object* v___x_2753_; uint8_t v_isModule_2754_; 
v___x_2751_ = lean_st_ref_get(v___y_2749_);
v_env_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc_ref(v_env_2752_);
lean_dec(v___x_2751_);
v___x_2753_ = l_Lean_Environment_header(v_env_2752_);
v_isModule_2754_ = lean_ctor_get_uint8(v___x_2753_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2753_);
if (v_isModule_2754_ == 0)
{
lean_object* v___x_2755_; 
lean_dec_ref(v_env_2752_);
lean_inc(v___y_2749_);
lean_inc_ref(v___y_2748_);
lean_inc(v___y_2747_);
lean_inc_ref(v___y_2746_);
lean_inc(v___y_2745_);
lean_inc_ref(v___y_2744_);
v___x_2755_ = lean_apply_7(v_x_2742_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, lean_box(0));
return v___x_2755_;
}
else
{
uint8_t v_isExporting_2756_; 
v_isExporting_2756_ = lean_ctor_get_uint8(v_env_2752_, sizeof(void*)*8);
lean_dec_ref(v_env_2752_);
if (v_isExporting_2743_ == 0)
{
if (v_isExporting_2756_ == 0)
{
lean_object* v___x_2822_; 
lean_inc(v___y_2749_);
lean_inc_ref(v___y_2748_);
lean_inc(v___y_2747_);
lean_inc_ref(v___y_2746_);
lean_inc(v___y_2745_);
lean_inc_ref(v___y_2744_);
v___x_2822_ = lean_apply_7(v_x_2742_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, lean_box(0));
return v___x_2822_;
}
else
{
goto v___jp_2757_;
}
}
else
{
if (v_isExporting_2756_ == 0)
{
goto v___jp_2757_;
}
else
{
lean_object* v___x_2823_; 
lean_inc(v___y_2749_);
lean_inc_ref(v___y_2748_);
lean_inc(v___y_2747_);
lean_inc_ref(v___y_2746_);
lean_inc(v___y_2745_);
lean_inc_ref(v___y_2744_);
v___x_2823_ = lean_apply_7(v_x_2742_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, lean_box(0));
return v___x_2823_;
}
}
v___jp_2757_:
{
lean_object* v___x_2758_; lean_object* v_env_2759_; lean_object* v_nextMacroScope_2760_; lean_object* v_ngen_2761_; lean_object* v_auxDeclNGen_2762_; lean_object* v_traceState_2763_; lean_object* v_messages_2764_; lean_object* v_infoState_2765_; lean_object* v_snapshotTasks_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2820_; 
v___x_2758_ = lean_st_ref_take(v___y_2749_);
v_env_2759_ = lean_ctor_get(v___x_2758_, 0);
v_nextMacroScope_2760_ = lean_ctor_get(v___x_2758_, 1);
v_ngen_2761_ = lean_ctor_get(v___x_2758_, 2);
v_auxDeclNGen_2762_ = lean_ctor_get(v___x_2758_, 3);
v_traceState_2763_ = lean_ctor_get(v___x_2758_, 4);
v_messages_2764_ = lean_ctor_get(v___x_2758_, 6);
v_infoState_2765_ = lean_ctor_get(v___x_2758_, 7);
v_snapshotTasks_2766_ = lean_ctor_get(v___x_2758_, 8);
v_isSharedCheck_2820_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2820_ == 0)
{
lean_object* v_unused_2821_; 
v_unused_2821_ = lean_ctor_get(v___x_2758_, 5);
lean_dec(v_unused_2821_);
v___x_2768_ = v___x_2758_;
v_isShared_2769_ = v_isSharedCheck_2820_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_snapshotTasks_2766_);
lean_inc(v_infoState_2765_);
lean_inc(v_messages_2764_);
lean_inc(v_traceState_2763_);
lean_inc(v_auxDeclNGen_2762_);
lean_inc(v_ngen_2761_);
lean_inc(v_nextMacroScope_2760_);
lean_inc(v_env_2759_);
lean_dec(v___x_2758_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2820_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2773_; 
v___x_2770_ = l_Lean_Environment_setExporting(v_env_2759_, v_isExporting_2743_);
v___x_2771_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__2);
if (v_isShared_2769_ == 0)
{
lean_ctor_set(v___x_2768_, 5, v___x_2771_);
lean_ctor_set(v___x_2768_, 0, v___x_2770_);
v___x_2773_ = v___x_2768_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v___x_2770_);
lean_ctor_set(v_reuseFailAlloc_2819_, 1, v_nextMacroScope_2760_);
lean_ctor_set(v_reuseFailAlloc_2819_, 2, v_ngen_2761_);
lean_ctor_set(v_reuseFailAlloc_2819_, 3, v_auxDeclNGen_2762_);
lean_ctor_set(v_reuseFailAlloc_2819_, 4, v_traceState_2763_);
lean_ctor_set(v_reuseFailAlloc_2819_, 5, v___x_2771_);
lean_ctor_set(v_reuseFailAlloc_2819_, 6, v_messages_2764_);
lean_ctor_set(v_reuseFailAlloc_2819_, 7, v_infoState_2765_);
lean_ctor_set(v_reuseFailAlloc_2819_, 8, v_snapshotTasks_2766_);
v___x_2773_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v_mctx_2776_; lean_object* v_zetaDeltaFVarIds_2777_; lean_object* v_postponed_2778_; lean_object* v_diag_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2817_; 
v___x_2774_ = lean_st_ref_put(v___y_2749_, v___x_2773_);
v___x_2775_ = lean_st_ref_take(v___y_2747_);
v_mctx_2776_ = lean_ctor_get(v___x_2775_, 0);
v_zetaDeltaFVarIds_2777_ = lean_ctor_get(v___x_2775_, 2);
v_postponed_2778_ = lean_ctor_get(v___x_2775_, 3);
v_diag_2779_ = lean_ctor_get(v___x_2775_, 4);
v_isSharedCheck_2817_ = !lean_is_exclusive(v___x_2775_);
if (v_isSharedCheck_2817_ == 0)
{
lean_object* v_unused_2818_; 
v_unused_2818_ = lean_ctor_get(v___x_2775_, 1);
lean_dec(v_unused_2818_);
v___x_2781_ = v___x_2775_;
v_isShared_2782_ = v_isSharedCheck_2817_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_diag_2779_);
lean_inc(v_postponed_2778_);
lean_inc(v_zetaDeltaFVarIds_2777_);
lean_inc(v_mctx_2776_);
lean_dec(v___x_2775_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2817_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2783_; lean_object* v___x_2785_; 
v___x_2783_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__3);
if (v_isShared_2782_ == 0)
{
lean_ctor_set(v___x_2781_, 1, v___x_2783_);
v___x_2785_ = v___x_2781_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v_mctx_2776_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v___x_2783_);
lean_ctor_set(v_reuseFailAlloc_2816_, 2, v_zetaDeltaFVarIds_2777_);
lean_ctor_set(v_reuseFailAlloc_2816_, 3, v_postponed_2778_);
lean_ctor_set(v_reuseFailAlloc_2816_, 4, v_diag_2779_);
v___x_2785_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
lean_object* v___x_2786_; lean_object* v_r_2787_; 
v___x_2786_ = lean_st_ref_put(v___y_2747_, v___x_2785_);
lean_inc(v___y_2749_);
lean_inc_ref(v___y_2748_);
lean_inc(v___y_2747_);
lean_inc_ref(v___y_2746_);
lean_inc(v___y_2745_);
lean_inc_ref(v___y_2744_);
v_r_2787_ = lean_apply_7(v_x_2742_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, lean_box(0));
if (lean_obj_tag(v_r_2787_) == 0)
{
lean_object* v_a_2788_; lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2804_; 
v_a_2788_ = lean_ctor_get(v_r_2787_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v_r_2787_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2790_ = v_r_2787_;
v_isShared_2791_ = v_isSharedCheck_2804_;
goto v_resetjp_2789_;
}
else
{
lean_inc(v_a_2788_);
lean_dec(v_r_2787_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2804_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v___x_2793_; 
lean_inc(v_a_2788_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set_tag(v___x_2790_, 1);
v___x_2793_ = v___x_2790_;
goto v_reusejp_2792_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_a_2788_);
v___x_2793_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2792_;
}
v_reusejp_2792_:
{
lean_object* v___x_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
v___x_2794_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___lam__0(v___y_2749_, v_isExporting_2756_, v___x_2771_, v___y_2747_, v___x_2783_, v___x_2793_);
lean_dec_ref(v___x_2793_);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2794_);
if (v_isSharedCheck_2801_ == 0)
{
lean_object* v_unused_2802_; 
v_unused_2802_ = lean_ctor_get(v___x_2794_, 0);
lean_dec(v_unused_2802_);
v___x_2796_ = v___x_2794_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_dec(v___x_2794_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v_a_2788_);
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2788_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
}
else
{
lean_object* v_a_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
v_a_2805_ = lean_ctor_get(v_r_2787_, 0);
lean_inc(v_a_2805_);
lean_dec_ref_known(v_r_2787_, 1);
v___x_2806_ = lean_box(0);
v___x_2807_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___lam__0(v___y_2749_, v_isExporting_2756_, v___x_2771_, v___y_2747_, v___x_2783_, v___x_2806_);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2814_ == 0)
{
lean_object* v_unused_2815_; 
v_unused_2815_ = lean_ctor_get(v___x_2807_, 0);
lean_dec(v_unused_2815_);
v___x_2809_ = v___x_2807_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_dec(v___x_2807_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
lean_ctor_set_tag(v___x_2809_, 1);
lean_ctor_set(v___x_2809_, 0, v_a_2805_);
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2805_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg___boxed(lean_object* v_x_2824_, lean_object* v_isExporting_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
uint8_t v_isExporting_boxed_2833_; lean_object* v_res_2834_; 
v_isExporting_boxed_2833_ = lean_unbox(v_isExporting_2825_);
v_res_2834_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg(v_x_2824_, v_isExporting_boxed_2833_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg(lean_object* v_x_2835_, uint8_t v_when_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_){
_start:
{
if (v_when_2836_ == 0)
{
lean_object* v___x_2844_; 
lean_inc(v___y_2842_);
lean_inc_ref(v___y_2841_);
lean_inc(v___y_2840_);
lean_inc_ref(v___y_2839_);
lean_inc(v___y_2838_);
lean_inc_ref(v___y_2837_);
v___x_2844_ = lean_apply_7(v_x_2835_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, lean_box(0));
return v___x_2844_;
}
else
{
uint8_t v___x_2845_; lean_object* v___x_2846_; 
v___x_2845_ = 0;
v___x_2846_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg(v_x_2835_, v___x_2845_, v___y_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_);
return v___x_2846_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg___boxed(lean_object* v_x_2847_, lean_object* v_when_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
uint8_t v_when_boxed_2856_; lean_object* v_res_2857_; 
v_when_boxed_2856_ = lean_unbox(v_when_2848_);
v_res_2857_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg(v_x_2847_, v_when_boxed_2856_, v___y_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v___y_2852_);
lean_dec_ref(v___y_2851_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
return v_res_2857_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2858_; 
v___x_2858_ = l_instMonadEIO___redArg();
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0(lean_object* v_msg_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v_toApplicative_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2966_; 
v___x_2873_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__0);
v___x_2874_ = l_StateRefT_x27_instMonad___redArg(v___x_2873_);
v_toApplicative_2875_ = lean_ctor_get(v___x_2874_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2874_);
if (v_isSharedCheck_2966_ == 0)
{
lean_object* v_unused_2967_; 
v_unused_2967_ = lean_ctor_get(v___x_2874_, 1);
lean_dec(v_unused_2967_);
v___x_2877_ = v___x_2874_;
v_isShared_2878_ = v_isSharedCheck_2966_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_toApplicative_2875_);
lean_dec(v___x_2874_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2966_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v_toFunctor_2879_; lean_object* v_toSeq_2880_; lean_object* v_toSeqLeft_2881_; lean_object* v_toSeqRight_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2964_; 
v_toFunctor_2879_ = lean_ctor_get(v_toApplicative_2875_, 0);
v_toSeq_2880_ = lean_ctor_get(v_toApplicative_2875_, 2);
v_toSeqLeft_2881_ = lean_ctor_get(v_toApplicative_2875_, 3);
v_toSeqRight_2882_ = lean_ctor_get(v_toApplicative_2875_, 4);
v_isSharedCheck_2964_ = !lean_is_exclusive(v_toApplicative_2875_);
if (v_isSharedCheck_2964_ == 0)
{
lean_object* v_unused_2965_; 
v_unused_2965_ = lean_ctor_get(v_toApplicative_2875_, 1);
lean_dec(v_unused_2965_);
v___x_2884_ = v_toApplicative_2875_;
v_isShared_2885_ = v_isSharedCheck_2964_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_toSeqRight_2882_);
lean_inc(v_toSeqLeft_2881_);
lean_inc(v_toSeq_2880_);
lean_inc(v_toFunctor_2879_);
lean_dec(v_toApplicative_2875_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2964_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___f_2886_; lean_object* v___f_2887_; lean_object* v___f_2888_; lean_object* v___f_2889_; lean_object* v___x_2890_; lean_object* v___f_2891_; lean_object* v___f_2892_; lean_object* v___f_2893_; lean_object* v___x_2895_; 
v___f_2886_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__1));
v___f_2887_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_2879_);
v___f_2888_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2888_, 0, v_toFunctor_2879_);
v___f_2889_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2889_, 0, v_toFunctor_2879_);
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___f_2888_);
lean_ctor_set(v___x_2890_, 1, v___f_2889_);
v___f_2891_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2891_, 0, v_toSeqRight_2882_);
v___f_2892_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2892_, 0, v_toSeqLeft_2881_);
v___f_2893_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2893_, 0, v_toSeq_2880_);
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 4, v___f_2891_);
lean_ctor_set(v___x_2884_, 3, v___f_2892_);
lean_ctor_set(v___x_2884_, 2, v___f_2893_);
lean_ctor_set(v___x_2884_, 1, v___f_2886_);
lean_ctor_set(v___x_2884_, 0, v___x_2890_);
v___x_2895_ = v___x_2884_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v___x_2890_);
lean_ctor_set(v_reuseFailAlloc_2963_, 1, v___f_2886_);
lean_ctor_set(v_reuseFailAlloc_2963_, 2, v___f_2893_);
lean_ctor_set(v_reuseFailAlloc_2963_, 3, v___f_2892_);
lean_ctor_set(v_reuseFailAlloc_2963_, 4, v___f_2891_);
v___x_2895_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
lean_object* v___x_2897_; 
if (v_isShared_2878_ == 0)
{
lean_ctor_set(v___x_2877_, 1, v___f_2887_);
lean_ctor_set(v___x_2877_, 0, v___x_2895_);
v___x_2897_ = v___x_2877_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2962_; 
v_reuseFailAlloc_2962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2962_, 0, v___x_2895_);
lean_ctor_set(v_reuseFailAlloc_2962_, 1, v___f_2887_);
v___x_2897_ = v_reuseFailAlloc_2962_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
lean_object* v___x_2898_; lean_object* v_toApplicative_2899_; lean_object* v___x_2901_; uint8_t v_isShared_2902_; uint8_t v_isSharedCheck_2960_; 
v___x_2898_ = l_StateRefT_x27_instMonad___redArg(v___x_2897_);
v_toApplicative_2899_ = lean_ctor_get(v___x_2898_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2960_ == 0)
{
lean_object* v_unused_2961_; 
v_unused_2961_ = lean_ctor_get(v___x_2898_, 1);
lean_dec(v_unused_2961_);
v___x_2901_ = v___x_2898_;
v_isShared_2902_ = v_isSharedCheck_2960_;
goto v_resetjp_2900_;
}
else
{
lean_inc(v_toApplicative_2899_);
lean_dec(v___x_2898_);
v___x_2901_ = lean_box(0);
v_isShared_2902_ = v_isSharedCheck_2960_;
goto v_resetjp_2900_;
}
v_resetjp_2900_:
{
lean_object* v_toFunctor_2903_; lean_object* v_toSeq_2904_; lean_object* v_toSeqLeft_2905_; lean_object* v_toSeqRight_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2958_; 
v_toFunctor_2903_ = lean_ctor_get(v_toApplicative_2899_, 0);
v_toSeq_2904_ = lean_ctor_get(v_toApplicative_2899_, 2);
v_toSeqLeft_2905_ = lean_ctor_get(v_toApplicative_2899_, 3);
v_toSeqRight_2906_ = lean_ctor_get(v_toApplicative_2899_, 4);
v_isSharedCheck_2958_ = !lean_is_exclusive(v_toApplicative_2899_);
if (v_isSharedCheck_2958_ == 0)
{
lean_object* v_unused_2959_; 
v_unused_2959_ = lean_ctor_get(v_toApplicative_2899_, 1);
lean_dec(v_unused_2959_);
v___x_2908_ = v_toApplicative_2899_;
v_isShared_2909_ = v_isSharedCheck_2958_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_toSeqRight_2906_);
lean_inc(v_toSeqLeft_2905_);
lean_inc(v_toSeq_2904_);
lean_inc(v_toFunctor_2903_);
lean_dec(v_toApplicative_2899_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2958_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___f_2910_; lean_object* v___f_2911_; lean_object* v___f_2912_; lean_object* v___f_2913_; lean_object* v___x_2914_; lean_object* v___f_2915_; lean_object* v___f_2916_; lean_object* v___f_2917_; lean_object* v___x_2919_; 
v___f_2910_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__3));
v___f_2911_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_2903_);
v___f_2912_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2912_, 0, v_toFunctor_2903_);
v___f_2913_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2913_, 0, v_toFunctor_2903_);
v___x_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2914_, 0, v___f_2912_);
lean_ctor_set(v___x_2914_, 1, v___f_2913_);
v___f_2915_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2915_, 0, v_toSeqRight_2906_);
v___f_2916_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2916_, 0, v_toSeqLeft_2905_);
v___f_2917_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2917_, 0, v_toSeq_2904_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 4, v___f_2915_);
lean_ctor_set(v___x_2908_, 3, v___f_2916_);
lean_ctor_set(v___x_2908_, 2, v___f_2917_);
lean_ctor_set(v___x_2908_, 1, v___f_2910_);
lean_ctor_set(v___x_2908_, 0, v___x_2914_);
v___x_2919_ = v___x_2908_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_2957_, 1, v___f_2910_);
lean_ctor_set(v_reuseFailAlloc_2957_, 2, v___f_2917_);
lean_ctor_set(v_reuseFailAlloc_2957_, 3, v___f_2916_);
lean_ctor_set(v_reuseFailAlloc_2957_, 4, v___f_2915_);
v___x_2919_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
lean_object* v___x_2921_; 
if (v_isShared_2902_ == 0)
{
lean_ctor_set(v___x_2901_, 1, v___f_2911_);
lean_ctor_set(v___x_2901_, 0, v___x_2919_);
v___x_2921_ = v___x_2901_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2919_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v___f_2911_);
v___x_2921_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
lean_object* v___x_2922_; lean_object* v_toApplicative_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2954_; 
v___x_2922_ = l_StateRefT_x27_instMonad___redArg(v___x_2921_);
v_toApplicative_2923_ = lean_ctor_get(v___x_2922_, 0);
v_isSharedCheck_2954_ = !lean_is_exclusive(v___x_2922_);
if (v_isSharedCheck_2954_ == 0)
{
lean_object* v_unused_2955_; 
v_unused_2955_ = lean_ctor_get(v___x_2922_, 1);
lean_dec(v_unused_2955_);
v___x_2925_ = v___x_2922_;
v_isShared_2926_ = v_isSharedCheck_2954_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_toApplicative_2923_);
lean_dec(v___x_2922_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2954_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v_toFunctor_2927_; lean_object* v_toSeq_2928_; lean_object* v_toSeqLeft_2929_; lean_object* v_toSeqRight_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2952_; 
v_toFunctor_2927_ = lean_ctor_get(v_toApplicative_2923_, 0);
v_toSeq_2928_ = lean_ctor_get(v_toApplicative_2923_, 2);
v_toSeqLeft_2929_ = lean_ctor_get(v_toApplicative_2923_, 3);
v_toSeqRight_2930_ = lean_ctor_get(v_toApplicative_2923_, 4);
v_isSharedCheck_2952_ = !lean_is_exclusive(v_toApplicative_2923_);
if (v_isSharedCheck_2952_ == 0)
{
lean_object* v_unused_2953_; 
v_unused_2953_ = lean_ctor_get(v_toApplicative_2923_, 1);
lean_dec(v_unused_2953_);
v___x_2932_ = v_toApplicative_2923_;
v_isShared_2933_ = v_isSharedCheck_2952_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_toSeqRight_2930_);
lean_inc(v_toSeqLeft_2929_);
lean_inc(v_toSeq_2928_);
lean_inc(v_toFunctor_2927_);
lean_dec(v_toApplicative_2923_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2952_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___f_2934_; lean_object* v___f_2935_; lean_object* v___f_2936_; lean_object* v___f_2937_; lean_object* v___x_2938_; lean_object* v___f_2939_; lean_object* v___f_2940_; lean_object* v___f_2941_; lean_object* v___x_2943_; 
v___f_2934_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__5));
v___f_2935_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___closed__6));
lean_inc_ref(v_toFunctor_2927_);
v___f_2936_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2936_, 0, v_toFunctor_2927_);
v___f_2937_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2937_, 0, v_toFunctor_2927_);
v___x_2938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2938_, 0, v___f_2936_);
lean_ctor_set(v___x_2938_, 1, v___f_2937_);
v___f_2939_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2939_, 0, v_toSeqRight_2930_);
v___f_2940_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2940_, 0, v_toSeqLeft_2929_);
v___f_2941_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2941_, 0, v_toSeq_2928_);
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 4, v___f_2939_);
lean_ctor_set(v___x_2932_, 3, v___f_2940_);
lean_ctor_set(v___x_2932_, 2, v___f_2941_);
lean_ctor_set(v___x_2932_, 1, v___f_2934_);
lean_ctor_set(v___x_2932_, 0, v___x_2938_);
v___x_2943_ = v___x_2932_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v___x_2938_);
lean_ctor_set(v_reuseFailAlloc_2951_, 1, v___f_2934_);
lean_ctor_set(v_reuseFailAlloc_2951_, 2, v___f_2941_);
lean_ctor_set(v_reuseFailAlloc_2951_, 3, v___f_2940_);
lean_ctor_set(v_reuseFailAlloc_2951_, 4, v___f_2939_);
v___x_2943_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
lean_object* v___x_2945_; 
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 1, v___f_2935_);
lean_ctor_set(v___x_2925_, 0, v___x_2943_);
v___x_2945_ = v___x_2925_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2943_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v___f_2935_);
v___x_2945_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_14460__overap_2948_; lean_object* v___x_2949_; 
v___x_2946_ = lean_box(0);
v___x_2947_ = l_instInhabitedOfMonad___redArg(v___x_2945_, v___x_2946_);
v___x_14460__overap_2948_ = lean_panic_fn_borrowed(v___x_2947_, v_msg_2865_);
lean_dec(v___x_2947_);
lean_inc(v___y_2871_);
lean_inc_ref(v___y_2870_);
lean_inc(v___y_2869_);
lean_inc_ref(v___y_2868_);
lean_inc(v___y_2867_);
lean_inc_ref(v___y_2866_);
v___x_2949_ = lean_apply_7(v___x_14460__overap_2948_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, lean_box(0));
return v___x_2949_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0(v_msg_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_);
lean_dec(v___y_2974_);
lean_dec_ref(v___y_2973_);
lean_dec(v___y_2972_);
lean_dec_ref(v___y_2971_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
return v_res_2976_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2978_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__0));
v___x_2979_ = l_Lean_stringToMessageData(v___x_2978_);
return v___x_2979_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2983_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__4));
v___x_2984_ = lean_unsigned_to_nat(11u);
v___x_2985_ = lean_unsigned_to_nat(115u);
v___x_2986_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__3));
v___x_2987_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__2));
v___x_2988_ = l_mkPanicMessageWithDecl(v___x_2987_, v___x_2986_, v___x_2985_, v___x_2984_, v___x_2983_);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0(lean_object* v_constName_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_){
_start:
{
lean_object* v___x_3005_; lean_object* v_env_3006_; uint8_t v___x_3007_; lean_object* v___x_3008_; 
v___x_3005_ = lean_st_ref_get(v___y_2995_);
v_env_3006_ = lean_ctor_get(v___x_3005_, 0);
lean_inc_ref(v_env_3006_);
lean_dec(v___x_3005_);
v___x_3007_ = 0;
lean_inc(v_constName_2989_);
v___x_3008_ = l_Lean_Environment_findAsync_x3f(v_env_3006_, v_constName_2989_, v___x_3007_);
if (lean_obj_tag(v___x_3008_) == 1)
{
lean_object* v_val_3009_; uint8_t v_kind_3010_; 
v_val_3009_ = lean_ctor_get(v___x_3008_, 0);
lean_inc(v_val_3009_);
lean_dec_ref_known(v___x_3008_, 1);
v_kind_3010_ = lean_ctor_get_uint8(v_val_3009_, sizeof(void*)*3);
if (v_kind_3010_ == 0)
{
lean_object* v___x_3011_; 
v___x_3011_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_3009_);
if (lean_obj_tag(v___x_3011_) == 1)
{
lean_object* v_val_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_dec(v_constName_2989_);
v_val_3012_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_3011_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_val_3012_);
lean_dec(v___x_3011_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
lean_ctor_set_tag(v___x_3014_, 0);
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_val_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
else
{
lean_object* v___x_3020_; lean_object* v___x_3021_; 
lean_dec_ref(v___x_3011_);
v___x_3020_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__5, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__5_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__5);
v___x_3021_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0_spec__0(v___x_3020_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_);
if (lean_obj_tag(v___x_3021_) == 0)
{
lean_object* v_a_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3030_; 
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3024_ = v___x_3021_;
v_isShared_3025_ = v_isSharedCheck_3030_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_a_3022_);
lean_dec(v___x_3021_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3030_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
if (lean_obj_tag(v_a_3022_) == 0)
{
lean_del_object(v___x_3024_);
goto v___jp_2997_;
}
else
{
lean_object* v_val_3026_; lean_object* v___x_3028_; 
lean_dec(v_constName_2989_);
v_val_3026_ = lean_ctor_get(v_a_3022_, 0);
lean_inc(v_val_3026_);
lean_dec_ref_known(v_a_3022_, 1);
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 0, v_val_3026_);
v___x_3028_ = v___x_3024_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_val_3026_);
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
else
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3038_; 
lean_dec(v_constName_2989_);
v_a_3031_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3033_ = v___x_3021_;
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_3021_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3038_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v___x_3036_; 
if (v_isShared_3034_ == 0)
{
v___x_3036_ = v___x_3033_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_a_3031_);
v___x_3036_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3035_;
}
v_reusejp_3035_:
{
return v___x_3036_;
}
}
}
}
}
else
{
lean_dec(v_val_3009_);
goto v___jp_2997_;
}
}
else
{
lean_dec(v___x_3008_);
goto v___jp_2997_;
}
v___jp_2997_:
{
lean_object* v___x_2998_; uint8_t v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_2998_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5);
v___x_2999_ = 0;
v___x_3000_ = l_Lean_MessageData_ofConstName(v_constName_2989_, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_2998_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
v___x_3002_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___closed__1);
v___x_3003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3001_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = l_Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1___redArg(v___x_3003_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_);
return v___x_3004_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___boxed(lean_object* v_constName_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0(v_constName_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj(lean_object* v_declName_3054_, lean_object* v_ctorName_3055_, lean_object* v_projName_3056_, lean_object* v_equivName_3057_, lean_object* v_fieldName_3058_, lean_object* v_ctorBinders_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_, lean_object* v_a_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v___x_3067_; uint8_t v___x_3068_; lean_object* v___f_3069_; lean_object* v___f_3070_; lean_object* v___x_3071_; 
lean_inc(v_declName_3054_);
v___x_3067_ = lean_alloc_closure((void*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__0___boxed), 8, 1);
lean_closure_set(v___x_3067_, 0, v_declName_3054_);
v___x_3068_ = 1;
v___f_3069_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__0));
v___f_3070_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___closed__1));
v___x_3071_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg(v___x_3067_, v___x_3068_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v_toConstantVal_3073_; lean_object* v_value_3074_; lean_object* v_levelParams_3075_; lean_object* v_type_3076_; lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___f_3080_; uint8_t v___x_3081_; lean_object* v___x_3082_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3071_, 1);
v_toConstantVal_3073_ = lean_ctor_get(v_a_3072_, 0);
lean_inc_ref(v_toConstantVal_3073_);
v_value_3074_ = lean_ctor_get(v_a_3072_, 1);
lean_inc_ref(v_value_3074_);
lean_dec(v_a_3072_);
v_levelParams_3075_ = lean_ctor_get(v_toConstantVal_3073_, 1);
lean_inc_n(v_levelParams_3075_, 2);
v_type_3076_ = lean_ctor_get(v_toConstantVal_3073_, 2);
lean_inc_ref(v_type_3076_);
lean_dec_ref(v_toConstantVal_3073_);
v___x_3077_ = lean_box(0);
v___x_3078_ = l_List_mapTR_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__2(v_levelParams_3075_, v___x_3077_);
v___x_3079_ = lean_box(v___x_3068_);
v___f_3080_ = lean_alloc_closure((void*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___boxed), 21, 12);
lean_closure_set(v___f_3080_, 0, v_value_3074_);
lean_closure_set(v___f_3080_, 1, v_declName_3054_);
lean_closure_set(v___f_3080_, 2, v___x_3078_);
lean_closure_set(v___f_3080_, 3, v___x_3079_);
lean_closure_set(v___f_3080_, 4, v_levelParams_3075_);
lean_closure_set(v___f_3080_, 5, v_ctorName_3055_);
lean_closure_set(v___f_3080_, 6, v_fieldName_3058_);
lean_closure_set(v___f_3080_, 7, v_projName_3056_);
lean_closure_set(v___f_3080_, 8, v___f_3070_);
lean_closure_set(v___f_3080_, 9, v_equivName_3057_);
lean_closure_set(v___f_3080_, 10, v_ctorBinders_3059_);
lean_closure_set(v___f_3080_, 11, v___f_3069_);
v___x_3081_ = 0;
v___x_3082_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg(v_type_3076_, v___f_3080_, v___x_3081_, v_a_3060_, v_a_3061_, v_a_3062_, v_a_3063_, v_a_3064_, v_a_3065_);
return v___x_3082_;
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
lean_dec_ref(v_ctorBinders_3059_);
lean_dec(v_fieldName_3058_);
lean_dec(v_equivName_3057_);
lean_dec(v_projName_3056_);
lean_dec(v_ctorName_3055_);
lean_dec(v_declName_3054_);
v_a_3083_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3071_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3071_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___boxed(lean_object* v_declName_3091_, lean_object* v_ctorName_3092_, lean_object* v_projName_3093_, lean_object* v_equivName_3094_, lean_object* v_fieldName_3095_, lean_object* v_ctorBinders_3096_, lean_object* v_a_3097_, lean_object* v_a_3098_, lean_object* v_a_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_, lean_object* v_a_3102_, lean_object* v_a_3103_){
_start:
{
lean_object* v_res_3104_; 
v_res_3104_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj(v_declName_3091_, v_ctorName_3092_, v_projName_3093_, v_equivName_3094_, v_fieldName_3095_, v_ctorBinders_3096_, v_a_3097_, v_a_3098_, v_a_3099_, v_a_3100_, v_a_3101_, v_a_3102_);
lean_dec(v_a_3102_);
lean_dec_ref(v_a_3101_);
lean_dec(v_a_3100_);
lean_dec_ref(v_a_3099_);
lean_dec(v_a_3098_);
lean_dec_ref(v_a_3097_);
return v_res_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2(lean_object* v_00_u03b1_3105_, lean_object* v_x_3106_, uint8_t v_isExporting_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_){
_start:
{
lean_object* v___x_3115_; 
v___x_3115_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___redArg(v_x_3106_, v_isExporting_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_);
return v___x_3115_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3116_, lean_object* v_x_3117_, lean_object* v_isExporting_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
uint8_t v_isExporting_boxed_3126_; lean_object* v_res_3127_; 
v_isExporting_boxed_3126_ = lean_unbox(v_isExporting_3118_);
v_res_3127_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1_spec__2(v_00_u03b1_3116_, v_x_3117_, v_isExporting_boxed_3126_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1(lean_object* v_00_u03b1_3128_, lean_object* v_x_3129_, uint8_t v_when_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
lean_object* v___x_3138_; 
v___x_3138_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg(v_x_3129_, v_when_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_);
return v___x_3138_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___boxed(lean_object* v_00_u03b1_3139_, lean_object* v_x_3140_, lean_object* v_when_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_){
_start:
{
uint8_t v_when_boxed_3149_; lean_object* v_res_3150_; 
v_when_boxed_3149_ = lean_unbox(v_when_3141_);
v_res_3150_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1(v_00_u03b1_3139_, v_x_3140_, v_when_boxed_3149_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_);
lean_dec(v___y_3147_);
lean_dec_ref(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17(lean_object* v_00_u03b1_3151_, lean_object* v_name_3152_, uint8_t v_bi_3153_, lean_object* v_type_3154_, lean_object* v_k_3155_, uint8_t v_kind_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_){
_start:
{
lean_object* v___x_3164_; 
v___x_3164_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___redArg(v_name_3152_, v_bi_3153_, v_type_3154_, v_k_3155_, v_kind_3156_, v___y_3157_, v___y_3158_, v___y_3159_, v___y_3160_, v___y_3161_, v___y_3162_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17___boxed(lean_object* v_00_u03b1_3165_, lean_object* v_name_3166_, lean_object* v_bi_3167_, lean_object* v_type_3168_, lean_object* v_k_3169_, lean_object* v_kind_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
uint8_t v_bi_boxed_3178_; uint8_t v_kind_boxed_3179_; lean_object* v_res_3180_; 
v_bi_boxed_3178_ = lean_unbox(v_bi_3167_);
v_kind_boxed_3179_ = lean_unbox(v_kind_3170_);
v_res_3180_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7_spec__17(v_00_u03b1_3165_, v_name_3166_, v_bi_boxed_3178_, v_type_3168_, v_k_3169_, v_kind_boxed_3179_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7(lean_object* v_00_u03b1_3181_, lean_object* v_name_3182_, lean_object* v_type_3183_, lean_object* v_k_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_){
_start:
{
lean_object* v___x_3192_; 
v___x_3192_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___redArg(v_name_3182_, v_type_3183_, v_k_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_);
return v___x_3192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7___boxed(lean_object* v_00_u03b1_3193_, lean_object* v_name_3194_, lean_object* v_type_3195_, lean_object* v_k_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__7(v_00_u03b1_3193_, v_name_3194_, v_type_3195_, v_k_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12(lean_object* v_00_u03b1_3205_, lean_object* v_ref_3206_, lean_object* v_msg_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(v_ref_3206_, v_msg_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___boxed(lean_object* v_00_u03b1_3216_, lean_object* v_ref_3217_, lean_object* v_msg_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_){
_start:
{
lean_object* v_res_3226_; 
v_res_3226_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12(v_00_u03b1_3216_, v_ref_3217_, v_msg_3218_, v___y_3219_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_);
lean_dec(v___y_3224_);
lean_dec_ref(v___y_3223_);
lean_dec(v___y_3222_);
lean_dec_ref(v___y_3221_);
lean_dec(v___y_3220_);
lean_dec_ref(v___y_3219_);
lean_dec(v_ref_3217_);
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5(lean_object* v_as_3227_, size_t v_i_3228_, size_t v_stop_3229_, lean_object* v_b_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_){
_start:
{
lean_object* v___x_3238_; 
v___x_3238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___redArg(v_as_3227_, v_i_3228_, v_stop_3229_, v_b_3230_, v___y_3233_, v___y_3235_, v___y_3236_);
return v___x_3238_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5___boxed(lean_object* v_as_3239_, lean_object* v_i_3240_, lean_object* v_stop_3241_, lean_object* v_b_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
size_t v_i_boxed_3250_; size_t v_stop_boxed_3251_; lean_object* v_res_3252_; 
v_i_boxed_3250_ = lean_unbox_usize(v_i_3240_);
lean_dec(v_i_3240_);
v_stop_boxed_3251_ = lean_unbox_usize(v_stop_3241_);
lean_dec(v_stop_3241_);
v_res_3252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__3_spec__5(v_as_3239_, v_i_boxed_3250_, v_stop_boxed_3251_, v_b_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_);
lean_dec(v___y_3248_);
lean_dec_ref(v___y_3247_);
lean_dec(v___y_3246_);
lean_dec_ref(v___y_3245_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
lean_dec_ref(v_as_3239_);
return v_res_3252_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8(lean_object* v_00_u03b2_3253_, lean_object* v_m_3254_, lean_object* v_a_3255_, lean_object* v_b_3256_){
_start:
{
lean_object* v___x_3257_; 
v___x_3257_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8___redArg(v_m_3254_, v_a_3255_, v_b_3256_);
return v___x_3257_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13(lean_object* v_upperBound_3258_, lean_object* v_binders_3259_, lean_object* v___x_3260_, lean_object* v_maybeParam_3261_, lean_object* v_params_3262_, lean_object* v_inst_3263_, lean_object* v_R_3264_, lean_object* v_a_3265_, lean_object* v_b_3266_, lean_object* v_c_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___redArg(v_upperBound_3258_, v_binders_3259_, v___x_3260_, v_maybeParam_3261_, v_params_3262_, v_a_3265_, v_b_3266_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_, v___y_3273_);
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13___boxed(lean_object** _args){
lean_object* v_upperBound_3276_ = _args[0];
lean_object* v_binders_3277_ = _args[1];
lean_object* v___x_3278_ = _args[2];
lean_object* v_maybeParam_3279_ = _args[3];
lean_object* v_params_3280_ = _args[4];
lean_object* v_inst_3281_ = _args[5];
lean_object* v_R_3282_ = _args[6];
lean_object* v_a_3283_ = _args[7];
lean_object* v_b_3284_ = _args[8];
lean_object* v_c_3285_ = _args[9];
lean_object* v___y_3286_ = _args[10];
lean_object* v___y_3287_ = _args[11];
lean_object* v___y_3288_ = _args[12];
lean_object* v___y_3289_ = _args[13];
lean_object* v___y_3290_ = _args[14];
lean_object* v___y_3291_ = _args[15];
lean_object* v___y_3292_ = _args[16];
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13(v_upperBound_3276_, v_binders_3277_, v___x_3278_, v_maybeParam_3279_, v_params_3280_, v_inst_3281_, v_R_3282_, v_a_3283_, v_b_3284_, v_c_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec_ref(v___y_3286_);
lean_dec(v_upperBound_3276_);
return v_res_3293_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14(lean_object* v_00_u03b2_3294_, lean_object* v_a_3295_, lean_object* v_x_3296_){
_start:
{
uint8_t v___x_3297_; 
v___x_3297_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___redArg(v_a_3295_, v_x_3296_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14___boxed(lean_object* v_00_u03b2_3298_, lean_object* v_a_3299_, lean_object* v_x_3300_){
_start:
{
uint8_t v_res_3301_; lean_object* v_r_3302_; 
v_res_3301_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__14(v_00_u03b2_3298_, v_a_3299_, v_x_3300_);
lean_dec(v_x_3300_);
lean_dec_ref(v_a_3299_);
v_r_3302_ = lean_box(v_res_3301_);
return v_r_3302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15(lean_object* v_00_u03b2_3303_, lean_object* v_data_3304_){
_start:
{
lean_object* v___x_3305_; 
v___x_3305_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15___redArg(v_data_3304_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__16(lean_object* v_00_u03b2_3306_, lean_object* v_a_3307_, lean_object* v_b_3308_, lean_object* v_x_3309_){
_start:
{
lean_object* v___x_3310_; 
v___x_3310_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__16___redArg(v_a_3307_, v_b_3308_, v_x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23(lean_object* v_upperBound_3311_, lean_object* v_binders_3312_, lean_object* v___x_3313_, lean_object* v_params_3314_, lean_object* v_maybeParam_3315_, lean_object* v_inst_3316_, lean_object* v_R_3317_, lean_object* v_a_3318_, lean_object* v_b_3319_, lean_object* v_c_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_){
_start:
{
lean_object* v___x_3328_; 
v___x_3328_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___redArg(v_upperBound_3311_, v_binders_3312_, v___x_3313_, v_params_3314_, v_maybeParam_3315_, v_a_3318_, v_b_3319_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23___boxed(lean_object** _args){
lean_object* v_upperBound_3329_ = _args[0];
lean_object* v_binders_3330_ = _args[1];
lean_object* v___x_3331_ = _args[2];
lean_object* v_params_3332_ = _args[3];
lean_object* v_maybeParam_3333_ = _args[4];
lean_object* v_inst_3334_ = _args[5];
lean_object* v_R_3335_ = _args[6];
lean_object* v_a_3336_ = _args[7];
lean_object* v_b_3337_ = _args[8];
lean_object* v_c_3338_ = _args[9];
lean_object* v___y_3339_ = _args[10];
lean_object* v___y_3340_ = _args[11];
lean_object* v___y_3341_ = _args[12];
lean_object* v___y_3342_ = _args[13];
lean_object* v___y_3343_ = _args[14];
lean_object* v___y_3344_ = _args[15];
lean_object* v___y_3345_ = _args[16];
_start:
{
lean_object* v_res_3346_; 
v_res_3346_ = l_WellFounded_opaqueFix_u2083___at___00WellFounded_opaqueFix_u2083___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__13_spec__23(v_upperBound_3329_, v_binders_3330_, v___x_3331_, v_params_3332_, v_maybeParam_3333_, v_inst_3334_, v_R_3335_, v_a_3336_, v_b_3337_, v_c_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
lean_dec(v_upperBound_3329_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22(lean_object* v_00_u03b2_3347_, lean_object* v_i_3348_, lean_object* v_source_3349_, lean_object* v_target_3350_){
_start:
{
lean_object* v___x_3351_; 
v___x_3351_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22___redArg(v_i_3348_, v_source_3349_, v_target_3350_);
return v___x_3351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22_spec__28(lean_object* v_00_u03b2_3352_, lean_object* v_x_3353_, lean_object* v_x_3354_){
_start:
{
lean_object* v___x_3355_; 
v___x_3355_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4_spec__8_spec__15_spec__22_spec__28___redArg(v_x_3353_, v_x_3354_);
return v___x_3355_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0);
v___x_3357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3356_);
return v___x_3357_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3358_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_3359_ = lean_unsigned_to_nat(0u);
v___x_3360_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_3360_, 0, v___x_3359_);
lean_ctor_set(v___x_3360_, 1, v___x_3359_);
lean_ctor_set(v___x_3360_, 2, v___x_3359_);
lean_ctor_set(v___x_3360_, 3, v___x_3359_);
lean_ctor_set(v___x_3360_, 4, v___x_3358_);
lean_ctor_set(v___x_3360_, 5, v___x_3358_);
lean_ctor_set(v___x_3360_, 6, v___x_3358_);
lean_ctor_set(v___x_3360_, 7, v___x_3358_);
lean_ctor_set(v___x_3360_, 8, v___x_3358_);
lean_ctor_set(v___x_3360_, 9, v___x_3358_);
lean_ctor_set(v___x_3360_, 10, v___x_3358_);
return v___x_3360_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v___x_3361_ = lean_unsigned_to_nat(32u);
v___x_3362_ = lean_mk_empty_array_with_capacity(v___x_3361_);
v___x_3363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3363_, 0, v___x_3362_);
return v___x_3363_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
size_t v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3364_ = ((size_t)5ULL);
v___x_3365_ = lean_unsigned_to_nat(0u);
v___x_3366_ = lean_unsigned_to_nat(32u);
v___x_3367_ = lean_mk_empty_array_with_capacity(v___x_3366_);
v___x_3368_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_3369_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
lean_ctor_set(v___x_3369_, 1, v___x_3367_);
lean_ctor_set(v___x_3369_, 2, v___x_3365_);
lean_ctor_set(v___x_3369_, 3, v___x_3365_);
lean_ctor_set_usize(v___x_3369_, 4, v___x_3364_);
return v___x_3369_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3370_ = lean_box(1);
v___x_3371_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_3372_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_3373_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3373_, 0, v___x_3372_);
lean_ctor_set(v___x_3373_, 1, v___x_3371_);
lean_ctor_set(v___x_3373_, 2, v___x_3370_);
return v___x_3373_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_msgData_3374_, lean_object* v___y_3375_){
_start:
{
lean_object* v___x_3377_; lean_object* v_env_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v_scopes_3381_; lean_object* v___x_3382_; lean_object* v_opts_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3377_ = lean_st_ref_get(v___y_3375_);
v_env_3378_ = lean_ctor_get(v___x_3377_, 0);
lean_inc_ref(v_env_3378_);
lean_dec(v___x_3377_);
v___x_3379_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3380_ = lean_st_ref_get(v___y_3375_);
v_scopes_3381_ = lean_ctor_get(v___x_3380_, 2);
lean_inc(v_scopes_3381_);
lean_dec(v___x_3380_);
v___x_3382_ = l_List_head_x21___redArg(v___x_3379_, v_scopes_3381_);
lean_dec(v_scopes_3381_);
v_opts_3383_ = lean_ctor_get(v___x_3382_, 1);
lean_inc_ref(v_opts_3383_);
lean_dec(v___x_3382_);
v___x_3384_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_3385_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4);
v___x_3386_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3386_, 0, v_env_3378_);
lean_ctor_set(v___x_3386_, 1, v___x_3384_);
lean_ctor_set(v___x_3386_, 2, v___x_3385_);
lean_ctor_set(v___x_3386_, 3, v_opts_3383_);
v___x_3387_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3387_, 0, v___x_3386_);
lean_ctor_set(v___x_3387_, 1, v_msgData_3374_);
v___x_3388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3388_, 0, v___x_3387_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_){
_start:
{
lean_object* v_res_3392_; 
v_res_3392_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg(v_msgData_3389_, v___y_3390_);
lean_dec(v___y_3390_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___redArg(lean_object* v_msgData_3393_, lean_object* v_macroStack_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v_scopes_3399_; lean_object* v___x_3400_; lean_object* v_opts_3401_; lean_object* v___x_3402_; uint8_t v___x_3403_; 
v___x_3397_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3398_ = lean_st_ref_get(v___y_3395_);
v_scopes_3399_ = lean_ctor_get(v___x_3398_, 2);
lean_inc(v_scopes_3399_);
lean_dec(v___x_3398_);
v___x_3400_ = l_List_head_x21___redArg(v___x_3397_, v_scopes_3399_);
lean_dec(v_scopes_3399_);
v_opts_3401_ = lean_ctor_get(v___x_3400_, 1);
lean_inc_ref(v_opts_3401_);
lean_dec(v___x_3400_);
v___x_3402_ = l_Lean_Elab_pp_macroStack;
v___x_3403_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v_opts_3401_, v___x_3402_);
lean_dec_ref(v_opts_3401_);
if (v___x_3403_ == 0)
{
lean_object* v___x_3404_; 
lean_dec(v_macroStack_3394_);
v___x_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3404_, 0, v_msgData_3393_);
return v___x_3404_;
}
else
{
if (lean_obj_tag(v_macroStack_3394_) == 0)
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3405_, 0, v_msgData_3393_);
return v___x_3405_;
}
else
{
lean_object* v_head_3406_; lean_object* v_after_3407_; lean_object* v___x_3409_; uint8_t v_isShared_3410_; uint8_t v_isSharedCheck_3422_; 
v_head_3406_ = lean_ctor_get(v_macroStack_3394_, 0);
lean_inc(v_head_3406_);
v_after_3407_ = lean_ctor_get(v_head_3406_, 1);
v_isSharedCheck_3422_ = !lean_is_exclusive(v_head_3406_);
if (v_isSharedCheck_3422_ == 0)
{
lean_object* v_unused_3423_; 
v_unused_3423_ = lean_ctor_get(v_head_3406_, 0);
lean_dec(v_unused_3423_);
v___x_3409_ = v_head_3406_;
v_isShared_3410_ = v_isSharedCheck_3422_;
goto v_resetjp_3408_;
}
else
{
lean_inc(v_after_3407_);
lean_dec(v_head_3406_);
v___x_3409_ = lean_box(0);
v_isShared_3410_ = v_isSharedCheck_3422_;
goto v_resetjp_3408_;
}
v_resetjp_3408_:
{
lean_object* v___x_3411_; lean_object* v___x_3413_; 
v___x_3411_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5___closed__0);
if (v_isShared_3410_ == 0)
{
lean_ctor_set_tag(v___x_3409_, 7);
lean_ctor_set(v___x_3409_, 1, v___x_3411_);
lean_ctor_set(v___x_3409_, 0, v_msgData_3393_);
v___x_3413_ = v___x_3409_;
goto v_reusejp_3412_;
}
else
{
lean_object* v_reuseFailAlloc_3421_; 
v_reuseFailAlloc_3421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3421_, 0, v_msgData_3393_);
lean_ctor_set(v_reuseFailAlloc_3421_, 1, v___x_3411_);
v___x_3413_ = v_reuseFailAlloc_3421_;
goto v_reusejp_3412_;
}
v_reusejp_3412_:
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v_msgData_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3414_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2___redArg___closed__2);
v___x_3415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3415_, 0, v___x_3413_);
lean_ctor_set(v___x_3415_, 1, v___x_3414_);
v___x_3416_ = l_Lean_MessageData_ofSyntax(v_after_3407_);
v___x_3417_ = l_Lean_indentD(v___x_3416_);
v_msgData_3418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_3418_, 0, v___x_3415_);
lean_ctor_set(v_msgData_3418_, 1, v___x_3417_);
v___x_3419_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__5(v_msgData_3418_, v_macroStack_3394_);
v___x_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3420_, 0, v___x_3419_);
return v___x_3420_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_msgData_3424_, lean_object* v_macroStack_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
lean_object* v_res_3428_; 
v_res_3428_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___redArg(v_msgData_3424_, v_macroStack_3425_, v___y_3426_);
lean_dec(v___y_3426_);
return v_res_3428_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(lean_object* v_msg_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_){
_start:
{
lean_object* v___x_3433_; 
v___x_3433_ = l_Lean_Elab_Command_getRef___redArg(v___y_3430_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; lean_object* v_macroStack_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v_a_3438_; lean_object* v___x_3439_; lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3448_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
lean_inc(v_a_3434_);
lean_dec_ref_known(v___x_3433_, 1);
v_macroStack_3435_ = lean_ctor_get(v___y_3430_, 4);
v___x_3436_ = l_Lean_Elab_getBetterRef(v_a_3434_, v_macroStack_3435_);
lean_dec(v_a_3434_);
v___x_3437_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg(v_msg_3429_, v___y_3431_);
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3438_);
lean_dec_ref(v___x_3437_);
lean_inc(v_macroStack_3435_);
v___x_3439_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___redArg(v_a_3438_, v_macroStack_3435_, v___y_3431_);
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3442_ = v___x_3439_;
v_isShared_3443_ = v_isSharedCheck_3448_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3439_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3448_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3444_; lean_object* v___x_3446_; 
v___x_3444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3436_);
lean_ctor_set(v___x_3444_, 1, v_a_3440_);
if (v_isShared_3443_ == 0)
{
lean_ctor_set_tag(v___x_3442_, 1);
lean_ctor_set(v___x_3442_, 0, v___x_3444_);
v___x_3446_ = v___x_3442_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v___x_3444_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec_ref(v_msg_3429_);
v_a_3449_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3433_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3433_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_msg_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_){
_start:
{
lean_object* v_res_3461_; 
v_res_3461_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v_msg_3457_, v___y_3458_, v___y_3459_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(lean_object* v_ref_3462_, lean_object* v_msg_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_Lean_Elab_Command_getRef___redArg(v___y_3464_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v_a_3468_; lean_object* v_fileName_3469_; lean_object* v_fileMap_3470_; lean_object* v_currRecDepth_3471_; lean_object* v_cmdPos_3472_; lean_object* v_macroStack_3473_; lean_object* v_quotContext_x3f_3474_; lean_object* v_currMacroScope_3475_; lean_object* v_snap_x3f_3476_; lean_object* v_cancelTk_x3f_3477_; uint8_t v_suppressElabErrors_3478_; lean_object* v_ref_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
v_a_3468_ = lean_ctor_get(v___x_3467_, 0);
lean_inc(v_a_3468_);
lean_dec_ref_known(v___x_3467_, 1);
v_fileName_3469_ = lean_ctor_get(v___y_3464_, 0);
v_fileMap_3470_ = lean_ctor_get(v___y_3464_, 1);
v_currRecDepth_3471_ = lean_ctor_get(v___y_3464_, 2);
v_cmdPos_3472_ = lean_ctor_get(v___y_3464_, 3);
v_macroStack_3473_ = lean_ctor_get(v___y_3464_, 4);
v_quotContext_x3f_3474_ = lean_ctor_get(v___y_3464_, 5);
v_currMacroScope_3475_ = lean_ctor_get(v___y_3464_, 6);
v_snap_x3f_3476_ = lean_ctor_get(v___y_3464_, 8);
v_cancelTk_x3f_3477_ = lean_ctor_get(v___y_3464_, 9);
v_suppressElabErrors_3478_ = lean_ctor_get_uint8(v___y_3464_, sizeof(void*)*10);
v_ref_3479_ = l_Lean_replaceRef(v_ref_3462_, v_a_3468_);
lean_dec(v_a_3468_);
lean_inc(v_cancelTk_x3f_3477_);
lean_inc(v_snap_x3f_3476_);
lean_inc(v_currMacroScope_3475_);
lean_inc(v_quotContext_x3f_3474_);
lean_inc(v_macroStack_3473_);
lean_inc(v_cmdPos_3472_);
lean_inc(v_currRecDepth_3471_);
lean_inc_ref(v_fileMap_3470_);
lean_inc_ref(v_fileName_3469_);
v___x_3480_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_3480_, 0, v_fileName_3469_);
lean_ctor_set(v___x_3480_, 1, v_fileMap_3470_);
lean_ctor_set(v___x_3480_, 2, v_currRecDepth_3471_);
lean_ctor_set(v___x_3480_, 3, v_cmdPos_3472_);
lean_ctor_set(v___x_3480_, 4, v_macroStack_3473_);
lean_ctor_set(v___x_3480_, 5, v_quotContext_x3f_3474_);
lean_ctor_set(v___x_3480_, 6, v_currMacroScope_3475_);
lean_ctor_set(v___x_3480_, 7, v_ref_3479_);
lean_ctor_set(v___x_3480_, 8, v_snap_x3f_3476_);
lean_ctor_set(v___x_3480_, 9, v_cancelTk_x3f_3477_);
lean_ctor_set_uint8(v___x_3480_, sizeof(void*)*10, v_suppressElabErrors_3478_);
v___x_3481_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v_msg_3463_, v___x_3480_, v___y_3465_);
lean_dec_ref_known(v___x_3480_, 10);
return v___x_3481_;
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_dec_ref(v_msg_3463_);
v_a_3482_ = lean_ctor_get(v___x_3467_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3467_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3467_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3467_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg___boxed(lean_object* v_ref_3490_, lean_object* v_msg_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_){
_start:
{
lean_object* v_res_3495_; 
v_res_3495_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v_ref_3490_, v_msg_3491_, v___y_3492_, v___y_3493_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec(v_ref_3490_);
return v_res_3495_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__0));
v___x_3498_ = l_Lean_stringToMessageData(v___x_3497_);
return v___x_3498_;
}
}
static lean_object* _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3500_ = ((lean_object*)(l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__2));
v___x_3501_ = l_Lean_stringToMessageData(v___x_3500_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg(lean_object* v_mods_3502_, lean_object* v_what_3503_, lean_object* v_range_3504_, lean_object* v_b_3505_, lean_object* v_i_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v_stop_3510_; lean_object* v_step_3511_; uint8_t v___x_3512_; 
v_stop_3510_ = lean_ctor_get(v_range_3504_, 1);
v_step_3511_ = lean_ctor_get(v_range_3504_, 2);
v___x_3512_ = lean_nat_dec_lt(v_i_3506_, v_stop_3510_);
if (v___x_3512_ == 0)
{
lean_object* v___x_3513_; 
lean_dec(v_i_3506_);
lean_dec_ref(v_what_3503_);
v___x_3513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3513_, 0, v_b_3505_);
return v___x_3513_;
}
else
{
lean_object* v___x_3514_; lean_object* v___x_3518_; uint8_t v___x_3519_; 
v___x_3514_ = lean_box(0);
v___x_3518_ = l_Lean_Syntax_getArg(v_mods_3502_, v_i_3506_);
v___x_3519_ = l_Lean_Syntax_isNone(v___x_3518_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; 
lean_dec(v_i_3506_);
v___x_3520_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__1, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__1_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__1);
v___x_3521_ = l_Lean_stringToMessageData(v_what_3503_);
v___x_3522_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3520_);
lean_ctor_set(v___x_3522_, 1, v___x_3521_);
v___x_3523_ = lean_obj_once(&l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__3, &l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__3_once, _init_l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___closed__3);
v___x_3524_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3522_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v___x_3518_, v___x_3524_, v___y_3507_, v___y_3508_);
lean_dec(v___x_3518_);
return v___x_3525_;
}
else
{
lean_dec(v___x_3518_);
goto v___jp_3515_;
}
v___jp_3515_:
{
lean_object* v___x_3516_; 
v___x_3516_ = lean_nat_add(v_i_3506_, v_step_3511_);
lean_dec(v_i_3506_);
v_b_3505_ = v___x_3514_;
v_i_3506_ = v___x_3516_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg___boxed(lean_object* v_mods_3526_, lean_object* v_what_3527_, lean_object* v_range_3528_, lean_object* v_b_3529_, lean_object* v_i_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_){
_start:
{
lean_object* v_res_3534_; 
v_res_3534_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg(v_mods_3526_, v_what_3527_, v_range_3528_, v_b_3529_, v_i_3530_, v___y_3531_, v___y_3532_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
lean_dec_ref(v_range_3528_);
lean_dec(v_mods_3526_);
return v_res_3534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f(lean_object* v_mods_3535_, lean_object* v_what_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_){
_start:
{
lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3540_ = lean_unsigned_to_nat(1u);
v___x_3541_ = l_Lean_Syntax_getNumArgs(v_mods_3535_);
v___x_3542_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3540_);
lean_ctor_set(v___x_3542_, 1, v___x_3541_);
lean_ctor_set(v___x_3542_, 2, v___x_3540_);
v___x_3543_ = lean_box(0);
v___x_3544_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg(v_mods_3535_, v_what_3536_, v___x_3542_, v___x_3543_, v___x_3540_, v_a_3537_, v_a_3538_);
lean_dec_ref_known(v___x_3542_, 3);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3560_; 
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3560_ == 0)
{
lean_object* v_unused_3561_; 
v_unused_3561_ = lean_ctor_get(v___x_3544_, 0);
lean_dec(v_unused_3561_);
v___x_3546_ = v___x_3544_;
v_isShared_3547_ = v_isSharedCheck_3560_;
goto v_resetjp_3545_;
}
else
{
lean_dec(v___x_3544_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3560_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; uint8_t v___x_3550_; 
v___x_3548_ = lean_unsigned_to_nat(0u);
v___x_3549_ = l_Lean_Syntax_getArg(v_mods_3535_, v___x_3548_);
v___x_3550_ = l_Lean_Syntax_isNone(v___x_3549_);
if (v___x_3550_ == 0)
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3554_; 
v___x_3551_ = l_Lean_Syntax_getArg(v___x_3549_, v___x_3548_);
lean_dec(v___x_3549_);
v___x_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
if (v_isShared_3547_ == 0)
{
lean_ctor_set(v___x_3546_, 0, v___x_3552_);
v___x_3554_ = v___x_3546_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v___x_3552_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
else
{
lean_object* v___x_3556_; lean_object* v___x_3558_; 
lean_dec(v___x_3549_);
v___x_3556_ = lean_box(0);
if (v_isShared_3547_ == 0)
{
lean_ctor_set(v___x_3546_, 0, v___x_3556_);
v___x_3558_ = v___x_3546_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v___x_3556_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3569_; 
v_a_3562_ = lean_ctor_get(v___x_3544_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3564_ = v___x_3544_;
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3544_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_a_3562_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f___boxed(lean_object* v_mods_3570_, lean_object* v_what_3571_, lean_object* v_a_3572_, lean_object* v_a_3573_, lean_object* v_a_3574_){
_start:
{
lean_object* v_res_3575_; 
v_res_3575_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f(v_mods_3570_, v_what_3571_, v_a_3572_, v_a_3573_);
lean_dec(v_a_3573_);
lean_dec_ref(v_a_3572_);
lean_dec(v_mods_3570_);
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0(lean_object* v_00_u03b1_3576_, lean_object* v_ref_3577_, lean_object* v_msg_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
lean_object* v___x_3582_; 
v___x_3582_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v_ref_3577_, v_msg_3578_, v___y_3579_, v___y_3580_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___boxed(lean_object* v_00_u03b1_3583_, lean_object* v_ref_3584_, lean_object* v_msg_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0(v_00_u03b1_3583_, v_ref_3584_, v_msg_3585_, v___y_3586_, v___y_3587_);
lean_dec(v___y_3587_);
lean_dec_ref(v___y_3586_);
lean_dec(v_ref_3584_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1(lean_object* v_mods_3590_, lean_object* v_what_3591_, lean_object* v_range_3592_, lean_object* v_b_3593_, lean_object* v_i_3594_, lean_object* v_hs_3595_, lean_object* v_hl_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_){
_start:
{
lean_object* v___x_3600_; 
v___x_3600_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___redArg(v_mods_3590_, v_what_3591_, v_range_3592_, v_b_3593_, v_i_3594_, v___y_3597_, v___y_3598_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1___boxed(lean_object* v_mods_3601_, lean_object* v_what_3602_, lean_object* v_range_3603_, lean_object* v_b_3604_, lean_object* v_i_3605_, lean_object* v_hs_3606_, lean_object* v_hl_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_){
_start:
{
lean_object* v_res_3611_; 
v_res_3611_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__1(v_mods_3601_, v_what_3602_, v_range_3603_, v_b_3604_, v_i_3605_, v_hs_3606_, v_hl_3607_, v___y_3608_, v___y_3609_);
lean_dec(v___y_3609_);
lean_dec_ref(v___y_3608_);
lean_dec_ref(v_range_3603_);
lean_dec(v_mods_3601_);
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1(lean_object* v_msgData_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_){
_start:
{
lean_object* v___x_3616_; 
v___x_3616_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg(v_msgData_3612_, v___y_3614_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_msgData_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
lean_object* v_res_3621_; 
v_res_3621_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1(v_msgData_3617_, v___y_3618_, v___y_3619_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0(lean_object* v_00_u03b1_3622_, lean_object* v_msg_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_){
_start:
{
lean_object* v___x_3627_; 
v___x_3627_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v_msg_3623_, v___y_3624_, v___y_3625_);
return v___x_3627_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3628_, lean_object* v_msg_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_){
_start:
{
lean_object* v_res_3633_; 
v_res_3633_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0(v_00_u03b1_3628_, v_msg_3629_, v___y_3630_, v___y_3631_);
lean_dec(v___y_3631_);
lean_dec_ref(v___y_3630_);
return v_res_3633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2(lean_object* v_msgData_3634_, lean_object* v_macroStack_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_){
_start:
{
lean_object* v___x_3639_; 
v___x_3639_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___redArg(v_msgData_3634_, v_macroStack_3635_, v___y_3637_);
return v___x_3639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_msgData_3640_, lean_object* v_macroStack_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__2(v_msgData_3640_, v_macroStack_3641_, v___y_3642_, v___y_3643_);
lean_dec(v___y_3643_);
lean_dec_ref(v___y_3642_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg(lean_object* v___y_3646_){
_start:
{
lean_object* v___x_3648_; lean_object* v_env_3649_; lean_object* v___x_3650_; lean_object* v_mainModule_3651_; lean_object* v___x_3652_; 
v___x_3648_ = lean_st_ref_get(v___y_3646_);
v_env_3649_ = lean_ctor_get(v___x_3648_, 0);
lean_inc_ref(v_env_3649_);
lean_dec(v___x_3648_);
v___x_3650_ = l_Lean_Environment_header(v_env_3649_);
lean_dec_ref(v_env_3649_);
v_mainModule_3651_ = lean_ctor_get(v___x_3650_, 0);
lean_inc(v_mainModule_3651_);
lean_dec_ref(v___x_3650_);
v___x_3652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3652_, 0, v_mainModule_3651_);
return v___x_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg___boxed(lean_object* v___y_3653_, lean_object* v___y_3654_){
_start:
{
lean_object* v_res_3655_; 
v_res_3655_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg(v___y_3653_);
lean_dec(v___y_3653_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0(lean_object* v___y_3656_, lean_object* v___y_3657_){
_start:
{
lean_object* v___x_3659_; 
v___x_3659_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg(v___y_3657_);
return v___x_3659_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___boxed(lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0(v___y_3660_, v___y_3661_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___redArg(lean_object* v_e_3664_, lean_object* v_k_3665_, uint8_t v_cleanupAnnotations_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_){
_start:
{
lean_object* v___f_3674_; uint8_t v___x_3675_; uint8_t v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; 
lean_inc(v___y_3668_);
lean_inc_ref(v___y_3667_);
v___f_3674_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__13___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3674_, 0, v_k_3665_);
lean_closure_set(v___f_3674_, 1, v___y_3667_);
lean_closure_set(v___f_3674_, 2, v___y_3668_);
v___x_3675_ = 1;
v___x_3676_ = 0;
v___x_3677_ = lean_box(0);
v___x_3678_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3664_, v___x_3675_, v___x_3676_, v___x_3675_, v___x_3676_, v___x_3677_, v___f_3674_, v_cleanupAnnotations_3666_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_);
if (lean_obj_tag(v___x_3678_) == 0)
{
return v___x_3678_;
}
else
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3686_; 
v_a_3679_ = lean_ctor_get(v___x_3678_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3678_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3681_ = v___x_3678_;
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3678_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___redArg___boxed(lean_object* v_e_3687_, lean_object* v_k_3688_, lean_object* v_cleanupAnnotations_3689_, lean_object* v___y_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3697_; lean_object* v_res_3698_; 
v_cleanupAnnotations_boxed_3697_ = lean_unbox(v_cleanupAnnotations_3689_);
v_res_3698_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___redArg(v_e_3687_, v_k_3688_, v_cleanupAnnotations_boxed_3697_, v___y_3690_, v___y_3691_, v___y_3692_, v___y_3693_, v___y_3694_, v___y_3695_);
lean_dec(v___y_3695_);
lean_dec_ref(v___y_3694_);
lean_dec(v___y_3693_);
lean_dec_ref(v___y_3692_);
lean_dec(v___y_3691_);
lean_dec_ref(v___y_3690_);
return v_res_3698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12(lean_object* v_00_u03b1_3699_, lean_object* v_e_3700_, lean_object* v_k_3701_, uint8_t v_cleanupAnnotations_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_){
_start:
{
lean_object* v___x_3710_; 
v___x_3710_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___redArg(v_e_3700_, v_k_3701_, v_cleanupAnnotations_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___boxed(lean_object* v_00_u03b1_3711_, lean_object* v_e_3712_, lean_object* v_k_3713_, lean_object* v_cleanupAnnotations_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3722_; lean_object* v_res_3723_; 
v_cleanupAnnotations_boxed_3722_ = lean_unbox(v_cleanupAnnotations_3714_);
v_res_3723_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12(v_00_u03b1_3711_, v_e_3712_, v_k_3713_, v_cleanupAnnotations_boxed_3722_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___lam__0(lean_object* v_x_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_){
_start:
{
lean_object* v___x_3732_; 
lean_inc(v___y_3726_);
lean_inc_ref(v___y_3725_);
v___x_3732_ = lean_apply_7(v_x_3724_, v___y_3725_, v___y_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, lean_box(0));
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___lam__0___boxed(lean_object* v_x_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___lam__0(v_x_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_);
lean_dec(v___y_3735_);
lean_dec_ref(v___y_3734_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg(lean_object* v_lctx_3742_, lean_object* v_localInsts_3743_, lean_object* v_x_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_){
_start:
{
lean_object* v___f_3752_; lean_object* v___x_3753_; 
lean_inc(v___y_3746_);
lean_inc_ref(v___y_3745_);
v___f_3752_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3752_, 0, v_x_3744_);
lean_closure_set(v___f_3752_, 1, v___y_3745_);
lean_closure_set(v___f_3752_, 2, v___y_3746_);
v___x_3753_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_3742_, v_localInsts_3743_, v___f_3752_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_);
if (lean_obj_tag(v___x_3753_) == 0)
{
return v___x_3753_;
}
else
{
lean_object* v_a_3754_; lean_object* v___x_3756_; uint8_t v_isShared_3757_; uint8_t v_isSharedCheck_3761_; 
v_a_3754_ = lean_ctor_get(v___x_3753_, 0);
v_isSharedCheck_3761_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3756_ = v___x_3753_;
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
else
{
lean_inc(v_a_3754_);
lean_dec(v___x_3753_);
v___x_3756_ = lean_box(0);
v_isShared_3757_ = v_isSharedCheck_3761_;
goto v_resetjp_3755_;
}
v_resetjp_3755_:
{
lean_object* v___x_3759_; 
if (v_isShared_3757_ == 0)
{
v___x_3759_ = v___x_3756_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v_a_3754_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg___boxed(lean_object* v_lctx_3762_, lean_object* v_localInsts_3763_, lean_object* v_x_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_){
_start:
{
lean_object* v_res_3772_; 
v_res_3772_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg(v_lctx_3762_, v_localInsts_3763_, v_x_3764_, v___y_3765_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_);
lean_dec(v___y_3770_);
lean_dec_ref(v___y_3769_);
lean_dec(v___y_3768_);
lean_dec_ref(v___y_3767_);
lean_dec(v___y_3766_);
lean_dec_ref(v___y_3765_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13(lean_object* v_00_u03b1_3773_, lean_object* v_lctx_3774_, lean_object* v_localInsts_3775_, lean_object* v_x_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_){
_start:
{
lean_object* v___x_3784_; 
v___x_3784_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___redArg(v_lctx_3774_, v_localInsts_3775_, v_x_3776_, v___y_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___boxed(lean_object* v_00_u03b1_3785_, lean_object* v_lctx_3786_, lean_object* v_localInsts_3787_, lean_object* v_x_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13(v_00_u03b1_3785_, v_lctx_3786_, v_localInsts_3787_, v_x_3788_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_);
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
lean_dec(v___y_3792_);
lean_dec_ref(v___y_3791_);
lean_dec(v___y_3790_);
lean_dec_ref(v___y_3789_);
return v_res_3796_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0(void){
_start:
{
uint8_t v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3797_ = 0;
v___x_3798_ = lean_box(0);
v___x_3799_ = l_Lean_SourceInfo_fromRef(v___x_3798_, v___x_3797_);
return v___x_3799_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3806_; 
v___x_3806_ = l_Array_mkArray0___redArg();
return v___x_3806_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3807_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6);
v___x_3808_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3));
v___x_3809_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0);
v___x_3810_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
lean_ctor_set(v___x_3810_, 1, v___x_3808_);
lean_ctor_set(v___x_3810_, 2, v___x_3807_);
return v___x_3810_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__11(void){
_start:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3814_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__10));
v___x_3815_ = l_String_toRawSubstring_x27(v___x_3814_);
return v___x_3815_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__13(void){
_start:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3818_ = l_Lean_firstFrontendMacroScope;
v___x_3819_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__12));
v___x_3820_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__2));
v___x_3821_ = l_Lean_addMacroScope(v___x_3820_, v___x_3819_, v___x_3818_);
return v___x_3821_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__14(void){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3822_ = lean_box(0);
v___x_3823_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__13, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__13_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__13);
v___x_3824_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__11, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__11_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__11);
v___x_3825_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0);
v___x_3826_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3826_, 0, v___x_3825_);
lean_ctor_set(v___x_3826_, 1, v___x_3824_);
lean_ctor_set(v___x_3826_, 2, v___x_3823_);
lean_ctor_set(v___x_3826_, 3, v___x_3822_);
return v___x_3826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0(uint8_t v___x_3827_, lean_object* v___x_3828_, lean_object* v___x_3829_, lean_object* v_sc_3830_){
_start:
{
if (v___x_3827_ == 0)
{
lean_dec_ref(v___x_3829_);
lean_dec_ref(v___x_3828_);
return v_sc_3830_;
}
else
{
lean_object* v_header_3831_; lean_object* v_opts_3832_; lean_object* v_currNamespace_3833_; lean_object* v_openDecls_3834_; lean_object* v_levelNames_3835_; lean_object* v_varDecls_3836_; lean_object* v_varUIds_3837_; lean_object* v_includedVars_3838_; lean_object* v_omittedVars_3839_; uint8_t v_isNoncomputable_3840_; uint8_t v_isPublic_3841_; uint8_t v_isMeta_3842_; lean_object* v_attrs_3843_; lean_object* v___x_3845_; uint8_t v_isShared_3846_; uint8_t v_isSharedCheck_3865_; 
v_header_3831_ = lean_ctor_get(v_sc_3830_, 0);
v_opts_3832_ = lean_ctor_get(v_sc_3830_, 1);
v_currNamespace_3833_ = lean_ctor_get(v_sc_3830_, 2);
v_openDecls_3834_ = lean_ctor_get(v_sc_3830_, 3);
v_levelNames_3835_ = lean_ctor_get(v_sc_3830_, 4);
v_varDecls_3836_ = lean_ctor_get(v_sc_3830_, 5);
v_varUIds_3837_ = lean_ctor_get(v_sc_3830_, 6);
v_includedVars_3838_ = lean_ctor_get(v_sc_3830_, 7);
v_omittedVars_3839_ = lean_ctor_get(v_sc_3830_, 8);
v_isNoncomputable_3840_ = lean_ctor_get_uint8(v_sc_3830_, sizeof(void*)*10);
v_isPublic_3841_ = lean_ctor_get_uint8(v_sc_3830_, sizeof(void*)*10 + 1);
v_isMeta_3842_ = lean_ctor_get_uint8(v_sc_3830_, sizeof(void*)*10 + 2);
v_attrs_3843_ = lean_ctor_get(v_sc_3830_, 9);
v_isSharedCheck_3865_ = !lean_is_exclusive(v_sc_3830_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3845_ = v_sc_3830_;
v_isShared_3846_ = v_isSharedCheck_3865_;
goto v_resetjp_3844_;
}
else
{
lean_inc(v_attrs_3843_);
lean_inc(v_omittedVars_3839_);
lean_inc(v_includedVars_3838_);
lean_inc(v_varUIds_3837_);
lean_inc(v_varDecls_3836_);
lean_inc(v_levelNames_3835_);
lean_inc(v_openDecls_3834_);
lean_inc(v_currNamespace_3833_);
lean_inc(v_opts_3832_);
lean_inc(v_header_3831_);
lean_dec(v_sc_3830_);
v___x_3845_ = lean_box(0);
v_isShared_3846_ = v_isSharedCheck_3865_;
goto v_resetjp_3844_;
}
v_resetjp_3844_:
{
lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3863_; 
v___x_3847_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__0);
v___x_3848_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__3));
v___x_3849_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__4));
lean_inc_ref_n(v___x_3829_, 2);
lean_inc_ref_n(v___x_3828_, 2);
v___x_3850_ = l_Lean_Name_mkStr4(v___x_3828_, v___x_3829_, v___x_3848_, v___x_3849_);
v___x_3851_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__5));
v___x_3852_ = l_Lean_Name_mkStr4(v___x_3828_, v___x_3829_, v___x_3848_, v___x_3851_);
v___x_3853_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__7, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__7_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__7);
v___x_3854_ = l_Lean_Syntax_node1(v___x_3847_, v___x_3852_, v___x_3853_);
v___x_3855_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__8));
v___x_3856_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__9));
v___x_3857_ = l_Lean_Name_mkStr4(v___x_3828_, v___x_3829_, v___x_3855_, v___x_3856_);
v___x_3858_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__14, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__14_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__14);
v___x_3859_ = l_Lean_Syntax_node2(v___x_3847_, v___x_3857_, v___x_3858_, v___x_3853_);
v___x_3860_ = l_Lean_Syntax_node2(v___x_3847_, v___x_3850_, v___x_3854_, v___x_3859_);
v___x_3861_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
lean_ctor_set(v___x_3861_, 1, v_attrs_3843_);
if (v_isShared_3846_ == 0)
{
lean_ctor_set(v___x_3845_, 9, v___x_3861_);
v___x_3863_ = v___x_3845_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 10, 3);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_header_3831_);
lean_ctor_set(v_reuseFailAlloc_3864_, 1, v_opts_3832_);
lean_ctor_set(v_reuseFailAlloc_3864_, 2, v_currNamespace_3833_);
lean_ctor_set(v_reuseFailAlloc_3864_, 3, v_openDecls_3834_);
lean_ctor_set(v_reuseFailAlloc_3864_, 4, v_levelNames_3835_);
lean_ctor_set(v_reuseFailAlloc_3864_, 5, v_varDecls_3836_);
lean_ctor_set(v_reuseFailAlloc_3864_, 6, v_varUIds_3837_);
lean_ctor_set(v_reuseFailAlloc_3864_, 7, v_includedVars_3838_);
lean_ctor_set(v_reuseFailAlloc_3864_, 8, v_omittedVars_3839_);
lean_ctor_set(v_reuseFailAlloc_3864_, 9, v___x_3861_);
lean_ctor_set_uint8(v_reuseFailAlloc_3864_, sizeof(void*)*10, v_isNoncomputable_3840_);
lean_ctor_set_uint8(v_reuseFailAlloc_3864_, sizeof(void*)*10 + 1, v_isPublic_3841_);
lean_ctor_set_uint8(v_reuseFailAlloc_3864_, sizeof(void*)*10 + 2, v_isMeta_3842_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__0___boxed(lean_object* v___x_3866_, lean_object* v___x_3867_, lean_object* v___x_3868_, lean_object* v_sc_3869_){
_start:
{
uint8_t v___x_41480__boxed_3870_; lean_object* v_res_3871_; 
v___x_41480__boxed_3870_ = lean_unbox(v___x_3866_);
v_res_3871_ = l_Lean_Elab_Command_elabDefeqStructure___lam__0(v___x_41480__boxed_3870_, v___x_3867_, v___x_3868_, v_sc_3869_);
return v_res_3871_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0(uint8_t v_suppressElabErrors_3880_, uint8_t v___y_3881_, lean_object* v_x_3882_){
_start:
{
if (lean_obj_tag(v_x_3882_) == 1)
{
lean_object* v_pre_3883_; 
v_pre_3883_ = lean_ctor_get(v_x_3882_, 0);
switch(lean_obj_tag(v_pre_3883_))
{
case 1:
{
lean_object* v_pre_3884_; 
v_pre_3884_ = lean_ctor_get(v_pre_3883_, 0);
switch(lean_obj_tag(v_pre_3884_))
{
case 0:
{
lean_object* v_str_3885_; lean_object* v_str_3886_; lean_object* v___x_3887_; uint8_t v___x_3888_; 
v_str_3885_ = lean_ctor_get(v_x_3882_, 1);
v_str_3886_ = lean_ctor_get(v_pre_3883_, 1);
v___x_3887_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__0));
v___x_3888_ = lean_string_dec_eq(v_str_3886_, v___x_3887_);
if (v___x_3888_ == 0)
{
lean_object* v___x_3889_; uint8_t v___x_3890_; 
v___x_3889_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__1));
v___x_3890_ = lean_string_dec_eq(v_str_3886_, v___x_3889_);
if (v___x_3890_ == 0)
{
return v___x_3890_;
}
else
{
lean_object* v___x_3891_; uint8_t v___x_3892_; 
v___x_3891_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__2));
v___x_3892_ = lean_string_dec_eq(v_str_3885_, v___x_3891_);
if (v___x_3892_ == 0)
{
return v___x_3892_;
}
else
{
return v_suppressElabErrors_3880_;
}
}
}
else
{
lean_object* v___x_3893_; uint8_t v___x_3894_; 
v___x_3893_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__3));
v___x_3894_ = lean_string_dec_eq(v_str_3885_, v___x_3893_);
if (v___x_3894_ == 0)
{
return v___x_3894_;
}
else
{
return v_suppressElabErrors_3880_;
}
}
}
case 1:
{
lean_object* v_pre_3895_; 
v_pre_3895_ = lean_ctor_get(v_pre_3884_, 0);
if (lean_obj_tag(v_pre_3895_) == 0)
{
lean_object* v_str_3896_; lean_object* v_str_3897_; lean_object* v_str_3898_; lean_object* v___x_3899_; uint8_t v___x_3900_; 
v_str_3896_ = lean_ctor_get(v_x_3882_, 1);
v_str_3897_ = lean_ctor_get(v_pre_3883_, 1);
v_str_3898_ = lean_ctor_get(v_pre_3884_, 1);
v___x_3899_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__4));
v___x_3900_ = lean_string_dec_eq(v_str_3898_, v___x_3899_);
if (v___x_3900_ == 0)
{
return v___x_3900_;
}
else
{
lean_object* v___x_3901_; uint8_t v___x_3902_; 
v___x_3901_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__5));
v___x_3902_ = lean_string_dec_eq(v_str_3897_, v___x_3901_);
if (v___x_3902_ == 0)
{
return v___x_3902_;
}
else
{
lean_object* v___x_3903_; uint8_t v___x_3904_; 
v___x_3903_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__6));
v___x_3904_ = lean_string_dec_eq(v_str_3896_, v___x_3903_);
if (v___x_3904_ == 0)
{
return v___x_3904_;
}
else
{
return v_suppressElabErrors_3880_;
}
}
}
}
else
{
return v___y_3881_;
}
}
default: 
{
return v___y_3881_;
}
}
}
case 0:
{
lean_object* v_str_3905_; lean_object* v___x_3906_; uint8_t v___x_3907_; 
v_str_3905_ = lean_ctor_get(v_x_3882_, 1);
v___x_3906_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___closed__7));
v___x_3907_ = lean_string_dec_eq(v_str_3905_, v___x_3906_);
if (v___x_3907_ == 0)
{
return v___x_3907_;
}
else
{
return v_suppressElabErrors_3880_;
}
}
default: 
{
return v___y_3881_;
}
}
}
else
{
return v___y_3881_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_3908_, lean_object* v___y_3909_, lean_object* v_x_3910_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3911_; uint8_t v___y_41579__boxed_3912_; uint8_t v_res_3913_; lean_object* v_r_3914_; 
v_suppressElabErrors_boxed_3911_ = lean_unbox(v_suppressElabErrors_3908_);
v___y_41579__boxed_3912_ = lean_unbox(v___y_3909_);
v_res_3913_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0(v_suppressElabErrors_boxed_3911_, v___y_41579__boxed_3912_, v_x_3910_);
lean_dec(v_x_3910_);
v_r_3914_ = lean_box(v_res_3913_);
return v_r_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg(lean_object* v_ref_3916_, lean_object* v_msgData_3917_, uint8_t v_severity_3918_, uint8_t v_isSilent_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_){
_start:
{
lean_object* v___y_3926_; lean_object* v___y_3927_; uint8_t v___y_3928_; uint8_t v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v_currNamespace_3933_; lean_object* v_openDecls_3934_; lean_object* v___y_3935_; lean_object* v___y_3961_; lean_object* v___y_3962_; lean_object* v___y_3963_; lean_object* v___y_3964_; uint8_t v___y_3965_; uint8_t v___y_3966_; lean_object* v___y_3967_; uint8_t v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3988_; lean_object* v___y_3989_; lean_object* v___y_3990_; uint8_t v___y_3991_; uint8_t v___y_3992_; lean_object* v___y_3993_; uint8_t v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_3996_; lean_object* v___y_3997_; lean_object* v___y_4001_; lean_object* v___y_4002_; lean_object* v___y_4003_; uint8_t v___y_4004_; lean_object* v___y_4005_; uint8_t v___y_4006_; lean_object* v___y_4007_; lean_object* v___y_4008_; uint8_t v___y_4009_; uint8_t v___x_4014_; lean_object* v___y_4016_; lean_object* v___y_4017_; lean_object* v___y_4018_; lean_object* v___y_4019_; lean_object* v___y_4020_; uint8_t v___y_4021_; uint8_t v___y_4022_; lean_object* v___y_4023_; uint8_t v___y_4024_; uint8_t v___y_4026_; uint8_t v___x_4044_; 
v___x_4014_ = 2;
v___x_4044_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3918_, v___x_4014_);
if (v___x_4044_ == 0)
{
v___y_4026_ = v___x_4044_;
goto v___jp_4025_;
}
else
{
uint8_t v___x_4045_; 
lean_inc_ref(v_msgData_3917_);
v___x_4045_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3917_);
v___y_4026_ = v___x_4045_;
goto v___jp_4025_;
}
v___jp_3925_:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v_env_3940_; lean_object* v_nextMacroScope_3941_; lean_object* v_ngen_3942_; lean_object* v_auxDeclNGen_3943_; lean_object* v_traceState_3944_; lean_object* v_cache_3945_; lean_object* v_messages_3946_; lean_object* v_infoState_3947_; lean_object* v_snapshotTasks_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3959_; 
lean_inc(v_openDecls_3934_);
lean_inc(v_currNamespace_3933_);
v___x_3936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3936_, 0, v_currNamespace_3933_);
lean_ctor_set(v___x_3936_, 1, v_openDecls_3934_);
v___x_3937_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3936_);
lean_ctor_set(v___x_3937_, 1, v___y_3931_);
lean_inc_ref(v___y_3926_);
lean_inc_ref(v___y_3932_);
v___x_3938_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3938_, 0, v___y_3932_);
lean_ctor_set(v___x_3938_, 1, v___y_3930_);
lean_ctor_set(v___x_3938_, 2, v___y_3927_);
lean_ctor_set(v___x_3938_, 3, v___y_3926_);
lean_ctor_set(v___x_3938_, 4, v___x_3937_);
lean_ctor_set_uint8(v___x_3938_, sizeof(void*)*5, v___y_3929_);
lean_ctor_set_uint8(v___x_3938_, sizeof(void*)*5 + 1, v___y_3928_);
lean_ctor_set_uint8(v___x_3938_, sizeof(void*)*5 + 2, v_isSilent_3919_);
v___x_3939_ = lean_st_ref_take(v___y_3935_);
v_env_3940_ = lean_ctor_get(v___x_3939_, 0);
v_nextMacroScope_3941_ = lean_ctor_get(v___x_3939_, 1);
v_ngen_3942_ = lean_ctor_get(v___x_3939_, 2);
v_auxDeclNGen_3943_ = lean_ctor_get(v___x_3939_, 3);
v_traceState_3944_ = lean_ctor_get(v___x_3939_, 4);
v_cache_3945_ = lean_ctor_get(v___x_3939_, 5);
v_messages_3946_ = lean_ctor_get(v___x_3939_, 6);
v_infoState_3947_ = lean_ctor_get(v___x_3939_, 7);
v_snapshotTasks_3948_ = lean_ctor_get(v___x_3939_, 8);
v_isSharedCheck_3959_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3959_ == 0)
{
v___x_3950_ = v___x_3939_;
v_isShared_3951_ = v_isSharedCheck_3959_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_snapshotTasks_3948_);
lean_inc(v_infoState_3947_);
lean_inc(v_messages_3946_);
lean_inc(v_cache_3945_);
lean_inc(v_traceState_3944_);
lean_inc(v_auxDeclNGen_3943_);
lean_inc(v_ngen_3942_);
lean_inc(v_nextMacroScope_3941_);
lean_inc(v_env_3940_);
lean_dec(v___x_3939_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3959_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3955_; 
v___x_3952_ = lean_box(0);
v___x_3953_ = l_Lean_MessageLog_add(v___x_3938_, v_messages_3946_);
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 6, v___x_3953_);
v___x_3955_ = v___x_3950_;
goto v_reusejp_3954_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_env_3940_);
lean_ctor_set(v_reuseFailAlloc_3958_, 1, v_nextMacroScope_3941_);
lean_ctor_set(v_reuseFailAlloc_3958_, 2, v_ngen_3942_);
lean_ctor_set(v_reuseFailAlloc_3958_, 3, v_auxDeclNGen_3943_);
lean_ctor_set(v_reuseFailAlloc_3958_, 4, v_traceState_3944_);
lean_ctor_set(v_reuseFailAlloc_3958_, 5, v_cache_3945_);
lean_ctor_set(v_reuseFailAlloc_3958_, 6, v___x_3953_);
lean_ctor_set(v_reuseFailAlloc_3958_, 7, v_infoState_3947_);
lean_ctor_set(v_reuseFailAlloc_3958_, 8, v_snapshotTasks_3948_);
v___x_3955_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3954_;
}
v_reusejp_3954_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3956_ = lean_st_ref_put(v___y_3935_, v___x_3955_);
v___x_3957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3952_);
return v___x_3957_;
}
}
}
v___jp_3960_:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v_a_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3986_; 
v___x_3971_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3917_);
v___x_3972_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr_spec__1_spec__1(v___x_3971_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_);
v_a_3973_ = lean_ctor_get(v___x_3972_, 0);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3972_);
if (v_isSharedCheck_3986_ == 0)
{
v___x_3975_ = v___x_3972_;
v_isShared_3976_ = v_isSharedCheck_3986_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_a_3973_);
lean_dec(v___x_3972_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3986_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
lean_inc_ref_n(v___y_3967_, 2);
v___x_3977_ = l_Lean_FileMap_toPosition(v___y_3967_, v___y_3964_);
lean_dec(v___y_3964_);
v___x_3978_ = l_Lean_FileMap_toPosition(v___y_3967_, v___y_3970_);
lean_dec(v___y_3970_);
v___x_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3979_, 0, v___x_3978_);
v___x_3980_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___closed__0));
if (v___y_3965_ == 0)
{
lean_del_object(v___x_3975_);
lean_dec_ref(v___y_3961_);
v___y_3926_ = v___x_3980_;
v___y_3927_ = v___x_3979_;
v___y_3928_ = v___y_3966_;
v___y_3929_ = v___y_3968_;
v___y_3930_ = v___x_3977_;
v___y_3931_ = v_a_3973_;
v___y_3932_ = v___y_3969_;
v_currNamespace_3933_ = v___y_3963_;
v_openDecls_3934_ = v___y_3962_;
v___y_3935_ = v___y_3923_;
goto v___jp_3925_;
}
else
{
uint8_t v___x_3981_; 
lean_inc(v_a_3973_);
v___x_3981_ = l_Lean_MessageData_hasTag(v___y_3961_, v_a_3973_);
if (v___x_3981_ == 0)
{
lean_object* v___x_3982_; lean_object* v___x_3984_; 
lean_dec_ref_known(v___x_3979_, 1);
lean_dec_ref(v___x_3977_);
lean_dec(v_a_3973_);
v___x_3982_ = lean_box(0);
if (v_isShared_3976_ == 0)
{
lean_ctor_set(v___x_3975_, 0, v___x_3982_);
v___x_3984_ = v___x_3975_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v___x_3982_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
else
{
lean_del_object(v___x_3975_);
v___y_3926_ = v___x_3980_;
v___y_3927_ = v___x_3979_;
v___y_3928_ = v___y_3966_;
v___y_3929_ = v___y_3968_;
v___y_3930_ = v___x_3977_;
v___y_3931_ = v_a_3973_;
v___y_3932_ = v___y_3969_;
v_currNamespace_3933_ = v___y_3963_;
v_openDecls_3934_ = v___y_3962_;
v___y_3935_ = v___y_3923_;
goto v___jp_3925_;
}
}
}
}
v___jp_3987_:
{
lean_object* v___x_3998_; 
v___x_3998_ = l_Lean_Syntax_getTailPos_x3f(v___y_3995_, v___y_3994_);
lean_dec(v___y_3995_);
if (lean_obj_tag(v___x_3998_) == 0)
{
lean_inc(v___y_3997_);
v___y_3961_ = v___y_3988_;
v___y_3962_ = v___y_3990_;
v___y_3963_ = v___y_3989_;
v___y_3964_ = v___y_3997_;
v___y_3965_ = v___y_3992_;
v___y_3966_ = v___y_3991_;
v___y_3967_ = v___y_3993_;
v___y_3968_ = v___y_3994_;
v___y_3969_ = v___y_3996_;
v___y_3970_ = v___y_3997_;
goto v___jp_3960_;
}
else
{
lean_object* v_val_3999_; 
v_val_3999_ = lean_ctor_get(v___x_3998_, 0);
lean_inc(v_val_3999_);
lean_dec_ref_known(v___x_3998_, 1);
v___y_3961_ = v___y_3988_;
v___y_3962_ = v___y_3990_;
v___y_3963_ = v___y_3989_;
v___y_3964_ = v___y_3997_;
v___y_3965_ = v___y_3992_;
v___y_3966_ = v___y_3991_;
v___y_3967_ = v___y_3993_;
v___y_3968_ = v___y_3994_;
v___y_3969_ = v___y_3996_;
v___y_3970_ = v_val_3999_;
goto v___jp_3960_;
}
}
v___jp_4000_:
{
lean_object* v_ref_4010_; lean_object* v___x_4011_; 
v_ref_4010_ = l_Lean_replaceRef(v_ref_3916_, v___y_4008_);
v___x_4011_ = l_Lean_Syntax_getPos_x3f(v_ref_4010_, v___y_4006_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_object* v___x_4012_; 
v___x_4012_ = lean_unsigned_to_nat(0u);
v___y_3988_ = v___y_4001_;
v___y_3989_ = v___y_4003_;
v___y_3990_ = v___y_4002_;
v___y_3991_ = v___y_4009_;
v___y_3992_ = v___y_4004_;
v___y_3993_ = v___y_4005_;
v___y_3994_ = v___y_4006_;
v___y_3995_ = v_ref_4010_;
v___y_3996_ = v___y_4007_;
v___y_3997_ = v___x_4012_;
goto v___jp_3987_;
}
else
{
lean_object* v_val_4013_; 
v_val_4013_ = lean_ctor_get(v___x_4011_, 0);
lean_inc(v_val_4013_);
lean_dec_ref_known(v___x_4011_, 1);
v___y_3988_ = v___y_4001_;
v___y_3989_ = v___y_4003_;
v___y_3990_ = v___y_4002_;
v___y_3991_ = v___y_4009_;
v___y_3992_ = v___y_4004_;
v___y_3993_ = v___y_4005_;
v___y_3994_ = v___y_4006_;
v___y_3995_ = v_ref_4010_;
v___y_3996_ = v___y_4007_;
v___y_3997_ = v_val_4013_;
goto v___jp_3987_;
}
}
v___jp_4015_:
{
if (v___y_4024_ == 0)
{
v___y_4001_ = v___y_4016_;
v___y_4002_ = v___y_4019_;
v___y_4003_ = v___y_4018_;
v___y_4004_ = v___y_4021_;
v___y_4005_ = v___y_4017_;
v___y_4006_ = v___y_4022_;
v___y_4007_ = v___y_4020_;
v___y_4008_ = v___y_4023_;
v___y_4009_ = v_severity_3918_;
goto v___jp_4000_;
}
else
{
v___y_4001_ = v___y_4016_;
v___y_4002_ = v___y_4019_;
v___y_4003_ = v___y_4018_;
v___y_4004_ = v___y_4021_;
v___y_4005_ = v___y_4017_;
v___y_4006_ = v___y_4022_;
v___y_4007_ = v___y_4020_;
v___y_4008_ = v___y_4023_;
v___y_4009_ = v___x_4014_;
goto v___jp_4000_;
}
}
v___jp_4025_:
{
if (v___y_4026_ == 0)
{
lean_object* v_toCold_4027_; lean_object* v_ref_4028_; uint8_t v_suppressElabErrors_4029_; lean_object* v_fileName_4030_; lean_object* v_fileMap_4031_; lean_object* v_options_4032_; lean_object* v_currNamespace_4033_; lean_object* v_openDecls_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___f_4037_; uint8_t v___x_4038_; uint8_t v___x_4039_; 
v_toCold_4027_ = lean_ctor_get(v___y_3922_, 0);
v_ref_4028_ = lean_ctor_get(v___y_3922_, 2);
v_suppressElabErrors_4029_ = lean_ctor_get_uint8(v___y_3922_, sizeof(void*)*3 + 1);
v_fileName_4030_ = lean_ctor_get(v_toCold_4027_, 0);
v_fileMap_4031_ = lean_ctor_get(v_toCold_4027_, 1);
v_options_4032_ = lean_ctor_get(v_toCold_4027_, 2);
v_currNamespace_4033_ = lean_ctor_get(v_toCold_4027_, 4);
v_openDecls_4034_ = lean_ctor_get(v_toCold_4027_, 5);
v___x_4035_ = lean_box(v_suppressElabErrors_4029_);
v___x_4036_ = lean_box(v___y_4026_);
v___f_4037_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4037_, 0, v___x_4035_);
lean_closure_set(v___f_4037_, 1, v___x_4036_);
v___x_4038_ = 1;
v___x_4039_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3918_, v___x_4038_);
if (v___x_4039_ == 0)
{
v___y_4016_ = v___f_4037_;
v___y_4017_ = v_fileMap_4031_;
v___y_4018_ = v_currNamespace_4033_;
v___y_4019_ = v_openDecls_4034_;
v___y_4020_ = v_fileName_4030_;
v___y_4021_ = v_suppressElabErrors_4029_;
v___y_4022_ = v___y_4026_;
v___y_4023_ = v_ref_4028_;
v___y_4024_ = v___x_4039_;
goto v___jp_4015_;
}
else
{
lean_object* v___x_4040_; uint8_t v___x_4041_; 
v___x_4040_ = l_Lean_warningAsError;
v___x_4041_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0_spec__1_spec__2_spec__4(v_options_4032_, v___x_4040_);
v___y_4016_ = v___f_4037_;
v___y_4017_ = v_fileMap_4031_;
v___y_4018_ = v_currNamespace_4033_;
v___y_4019_ = v_openDecls_4034_;
v___y_4020_ = v_fileName_4030_;
v___y_4021_ = v_suppressElabErrors_4029_;
v___y_4022_ = v___y_4026_;
v___y_4023_ = v_ref_4028_;
v___y_4024_ = v___x_4041_;
goto v___jp_4015_;
}
}
else
{
lean_object* v___x_4042_; lean_object* v___x_4043_; 
lean_dec_ref(v_msgData_3917_);
v___x_4042_ = lean_box(0);
v___x_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
return v___x_4043_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg___boxed(lean_object* v_ref_4046_, lean_object* v_msgData_4047_, lean_object* v_severity_4048_, lean_object* v_isSilent_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_){
_start:
{
uint8_t v_severity_boxed_4055_; uint8_t v_isSilent_boxed_4056_; lean_object* v_res_4057_; 
v_severity_boxed_4055_ = lean_unbox(v_severity_4048_);
v_isSilent_boxed_4056_ = lean_unbox(v_isSilent_4049_);
v_res_4057_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg(v_ref_4046_, v_msgData_4047_, v_severity_boxed_4055_, v_isSilent_boxed_4056_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
lean_dec(v___y_4053_);
lean_dec_ref(v___y_4052_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec(v_ref_4046_);
return v_res_4057_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24(lean_object* v_ref_4058_, lean_object* v_msgData_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_){
_start:
{
uint8_t v___x_4067_; uint8_t v___x_4068_; lean_object* v___x_4069_; 
v___x_4067_ = 2;
v___x_4068_ = 0;
v___x_4069_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg(v_ref_4058_, v_msgData_4059_, v___x_4067_, v___x_4068_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24___boxed(lean_object* v_ref_4070_, lean_object* v_msgData_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24(v_ref_4070_, v_msgData_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
lean_dec(v___y_4077_);
lean_dec_ref(v___y_4076_);
lean_dec(v___y_4075_);
lean_dec_ref(v___y_4074_);
lean_dec(v___y_4073_);
lean_dec_ref(v___y_4072_);
lean_dec(v_ref_4070_);
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25_spec__30(lean_object* v_msgData_4080_, uint8_t v_severity_4081_, uint8_t v_isSilent_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
lean_object* v_ref_4090_; lean_object* v___x_4091_; 
v_ref_4090_ = lean_ctor_get(v___y_4087_, 2);
v___x_4091_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg(v_ref_4090_, v_msgData_4080_, v_severity_4081_, v_isSilent_4082_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25_spec__30___boxed(lean_object* v_msgData_4092_, lean_object* v_severity_4093_, lean_object* v_isSilent_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
uint8_t v_severity_boxed_4102_; uint8_t v_isSilent_boxed_4103_; lean_object* v_res_4104_; 
v_severity_boxed_4102_ = lean_unbox(v_severity_4093_);
v_isSilent_boxed_4103_ = lean_unbox(v_isSilent_4094_);
v_res_4104_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25_spec__30(v_msgData_4092_, v_severity_boxed_4102_, v_isSilent_boxed_4103_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25(lean_object* v_msgData_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
uint8_t v___x_4113_; uint8_t v___x_4114_; lean_object* v___x_4115_; 
v___x_4113_ = 2;
v___x_4114_ = 0;
v___x_4115_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25_spec__30(v_msgData_4105_, v___x_4113_, v___x_4114_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
return v___x_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25___boxed(lean_object* v_msgData_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
lean_object* v_res_4124_; 
v_res_4124_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25(v_msgData_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
lean_dec(v___y_4118_);
lean_dec_ref(v___y_4117_);
return v_res_4124_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__1(void){
_start:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4126_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__0));
v___x_4127_ = l_Lean_stringToMessageData(v___x_4126_);
return v___x_4127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17(lean_object* v_ex_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_){
_start:
{
if (lean_obj_tag(v_ex_4128_) == 0)
{
lean_object* v_ref_4136_; lean_object* v_msg_4137_; lean_object* v___x_4138_; 
v_ref_4136_ = lean_ctor_get(v_ex_4128_, 0);
lean_inc(v_ref_4136_);
v_msg_4137_ = lean_ctor_get(v_ex_4128_, 1);
lean_inc_ref(v_msg_4137_);
lean_dec_ref_known(v_ex_4128_, 2);
v___x_4138_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24(v_ref_4136_, v_msg_4137_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_);
lean_dec(v_ref_4136_);
return v___x_4138_;
}
else
{
lean_object* v_id_4139_; uint8_t v___y_4141_; uint8_t v___x_4163_; 
v_id_4139_ = lean_ctor_get(v_ex_4128_, 0);
lean_inc(v_id_4139_);
v___x_4163_ = l_Lean_Elab_isAbortExceptionId(v_id_4139_);
if (v___x_4163_ == 0)
{
uint8_t v___x_4164_; 
v___x_4164_ = l_Lean_Exception_isInterrupt(v_ex_4128_);
lean_dec_ref_known(v_ex_4128_, 2);
v___y_4141_ = v___x_4164_;
goto v___jp_4140_;
}
else
{
lean_dec_ref_known(v_ex_4128_, 2);
v___y_4141_ = v___x_4163_;
goto v___jp_4140_;
}
v___jp_4140_:
{
if (v___y_4141_ == 0)
{
lean_object* v_ref_4142_; lean_object* v___x_4143_; 
v_ref_4142_ = lean_ctor_get(v___y_4133_, 2);
v___x_4143_ = l_Lean_InternalExceptionId_getName(v_id_4139_);
lean_dec(v_id_4139_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; 
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
lean_dec_ref_known(v___x_4143_, 1);
v___x_4145_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___closed__1);
v___x_4146_ = l_Lean_MessageData_ofName(v_a_4144_);
v___x_4147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4145_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
v___x_4148_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__25(v___x_4147_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_);
return v___x_4148_;
}
else
{
lean_object* v_a_4149_; lean_object* v___x_4151_; uint8_t v_isShared_4152_; uint8_t v_isSharedCheck_4160_; 
v_a_4149_ = lean_ctor_get(v___x_4143_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4151_ = v___x_4143_;
v_isShared_4152_ = v_isSharedCheck_4160_;
goto v_resetjp_4150_;
}
else
{
lean_inc(v_a_4149_);
lean_dec(v___x_4143_);
v___x_4151_ = lean_box(0);
v_isShared_4152_ = v_isSharedCheck_4160_;
goto v_resetjp_4150_;
}
v_resetjp_4150_:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4158_; 
v___x_4153_ = lean_io_error_to_string(v_a_4149_);
v___x_4154_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4153_);
v___x_4155_ = l_Lean_MessageData_ofFormat(v___x_4154_);
lean_inc(v_ref_4142_);
v___x_4156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4156_, 0, v_ref_4142_);
lean_ctor_set(v___x_4156_, 1, v___x_4155_);
if (v_isShared_4152_ == 0)
{
lean_ctor_set(v___x_4151_, 0, v___x_4156_);
v___x_4158_ = v___x_4151_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v___x_4156_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
}
}
else
{
lean_object* v___x_4161_; lean_object* v___x_4162_; 
lean_dec(v_id_4139_);
v___x_4161_ = lean_box(0);
v___x_4162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4161_);
return v___x_4162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17___boxed(lean_object* v_ex_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_){
_start:
{
lean_object* v_res_4173_; 
v_res_4173_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17(v_ex_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_);
lean_dec(v___y_4171_);
lean_dec_ref(v___y_4170_);
lean_dec(v___y_4169_);
lean_dec_ref(v___y_4168_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
return v_res_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10(lean_object* v_x_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_){
_start:
{
lean_object* v___x_4182_; 
lean_inc(v___y_4180_);
lean_inc_ref(v___y_4179_);
lean_inc(v___y_4178_);
lean_inc_ref(v___y_4177_);
lean_inc(v___y_4176_);
lean_inc_ref(v___y_4175_);
v___x_4182_ = lean_apply_7(v_x_4174_, v___y_4175_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_, lean_box(0));
if (lean_obj_tag(v___x_4182_) == 0)
{
return v___x_4182_;
}
else
{
lean_object* v_a_4183_; uint8_t v___y_4185_; uint8_t v___x_4187_; 
v_a_4183_ = lean_ctor_get(v___x_4182_, 0);
lean_inc(v_a_4183_);
v___x_4187_ = l_Lean_Exception_isInterrupt(v_a_4183_);
if (v___x_4187_ == 0)
{
uint8_t v___x_4188_; 
lean_inc(v_a_4183_);
v___x_4188_ = l_Lean_Exception_isRuntime(v_a_4183_);
v___y_4185_ = v___x_4188_;
goto v___jp_4184_;
}
else
{
v___y_4185_ = v___x_4187_;
goto v___jp_4184_;
}
v___jp_4184_:
{
if (v___y_4185_ == 0)
{
lean_object* v___x_4186_; 
lean_dec_ref_known(v___x_4182_, 1);
v___x_4186_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17(v_a_4183_, v___y_4175_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_);
return v___x_4186_;
}
else
{
lean_dec(v_a_4183_);
return v___x_4182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10___boxed(lean_object* v_x_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10(v_x_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_);
lean_dec(v___y_4195_);
lean_dec_ref(v___y_4194_);
lean_dec(v___y_4193_);
lean_dec_ref(v___y_4192_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
return v_res_4197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__11(lean_object* v___x_4198_, lean_object* v___x_4199_, lean_object* v_as_4200_, size_t v_sz_4201_, size_t v_i_4202_, lean_object* v_b_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_){
_start:
{
uint8_t v___x_4211_; 
v___x_4211_ = lean_usize_dec_lt(v_i_4202_, v_sz_4201_);
if (v___x_4211_ == 0)
{
lean_object* v___x_4212_; 
lean_dec_ref(v___x_4198_);
v___x_4212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4212_, 0, v_b_4203_);
return v___x_4212_;
}
else
{
lean_object* v_a_4213_; lean_object* v_ref_4214_; lean_object* v_toCold_4215_; lean_object* v_currRecDepth_4216_; lean_object* v_ref_4217_; uint8_t v_diag_4218_; uint8_t v_suppressElabErrors_4219_; lean_object* v___x_4220_; uint8_t v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v_ref_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v_a_4213_ = lean_array_uget_borrowed(v_as_4200_, v_i_4202_);
v_ref_4214_ = lean_ctor_get(v_a_4213_, 0);
v_toCold_4215_ = lean_ctor_get(v___y_4208_, 0);
v_currRecDepth_4216_ = lean_ctor_get(v___y_4208_, 1);
v_ref_4217_ = lean_ctor_get(v___y_4208_, 2);
v_diag_4218_ = lean_ctor_get_uint8(v___y_4208_, sizeof(void*)*3);
v_suppressElabErrors_4219_ = lean_ctor_get_uint8(v___y_4208_, sizeof(void*)*3 + 1);
v___x_4220_ = lean_unsigned_to_nat(0u);
v___x_4221_ = lean_nat_dec_eq(v___x_4199_, v___x_4220_);
v___x_4222_ = lean_box(0);
v___x_4223_ = lean_box(0);
v___x_4224_ = lean_box(v___x_4221_);
lean_inc_ref(v___x_4198_);
lean_inc(v_a_4213_);
v___x_4225_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_processDefDeriving___boxed), 11, 4);
lean_closure_set(v___x_4225_, 0, v_a_4213_);
lean_closure_set(v___x_4225_, 1, v___x_4198_);
lean_closure_set(v___x_4225_, 2, v___x_4224_);
lean_closure_set(v___x_4225_, 3, v___x_4223_);
v_ref_4226_ = l_Lean_replaceRef(v_ref_4214_, v_ref_4217_);
lean_inc(v_currRecDepth_4216_);
lean_inc_ref(v_toCold_4215_);
v___x_4227_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_4227_, 0, v_toCold_4215_);
lean_ctor_set(v___x_4227_, 1, v_currRecDepth_4216_);
lean_ctor_set(v___x_4227_, 2, v_ref_4226_);
lean_ctor_set_uint8(v___x_4227_, sizeof(void*)*3, v_diag_4218_);
lean_ctor_set_uint8(v___x_4227_, sizeof(void*)*3 + 1, v_suppressElabErrors_4219_);
v___x_4228_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10(v___x_4225_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_, v___x_4227_, v___y_4209_);
lean_dec_ref_known(v___x_4227_, 3);
if (lean_obj_tag(v___x_4228_) == 0)
{
size_t v___x_4229_; size_t v___x_4230_; 
lean_dec_ref_known(v___x_4228_, 1);
v___x_4229_ = ((size_t)1ULL);
v___x_4230_ = lean_usize_add(v_i_4202_, v___x_4229_);
v_i_4202_ = v___x_4230_;
v_b_4203_ = v___x_4222_;
goto _start;
}
else
{
lean_dec_ref(v___x_4198_);
return v___x_4228_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__11___boxed(lean_object* v___x_4232_, lean_object* v___x_4233_, lean_object* v_as_4234_, lean_object* v_sz_4235_, lean_object* v_i_4236_, lean_object* v_b_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_){
_start:
{
size_t v_sz_boxed_4245_; size_t v_i_boxed_4246_; lean_object* v_res_4247_; 
v_sz_boxed_4245_ = lean_unbox_usize(v_sz_4235_);
lean_dec(v_sz_4235_);
v_i_boxed_4246_ = lean_unbox_usize(v_i_4236_);
lean_dec(v_i_4236_);
v_res_4247_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__11(v___x_4232_, v___x_4233_, v_as_4234_, v_sz_boxed_4245_, v_i_boxed_4246_, v_b_4237_, v___y_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
lean_dec(v___y_4241_);
lean_dec_ref(v___y_4240_);
lean_dec(v___y_4239_);
lean_dec_ref(v___y_4238_);
lean_dec_ref(v_as_4234_);
lean_dec(v___x_4233_);
return v_res_4247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__1(lean_object* v_a_4248_, lean_object* v_declName_4249_, lean_object* v_a_4250_, lean_object* v___x_4251_, size_t v___x_4252_, lean_object* v___x_4253_, lean_object* v_xs_4254_, lean_object* v_x_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_){
_start:
{
lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; size_t v_sz_4268_; lean_object* v___x_4269_; 
v___x_4263_ = l_Lean_ConstantInfo_levelParams(v_a_4248_);
v___x_4264_ = lean_box(0);
v___x_4265_ = l_List_mapTR_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__2(v___x_4263_, v___x_4264_);
v___x_4266_ = l_Lean_Expr_const___override(v_declName_4249_, v___x_4265_);
v___x_4267_ = l_Lean_mkAppN(v___x_4266_, v_xs_4254_);
v_sz_4268_ = lean_array_size(v_a_4250_);
v___x_4269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__11(v___x_4267_, v___x_4251_, v_a_4250_, v_sz_4268_, v___x_4252_, v___x_4253_, v___y_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_);
if (lean_obj_tag(v___x_4269_) == 0)
{
lean_object* v___x_4271_; uint8_t v_isShared_4272_; uint8_t v_isSharedCheck_4276_; 
v_isSharedCheck_4276_ = !lean_is_exclusive(v___x_4269_);
if (v_isSharedCheck_4276_ == 0)
{
lean_object* v_unused_4277_; 
v_unused_4277_ = lean_ctor_get(v___x_4269_, 0);
lean_dec(v_unused_4277_);
v___x_4271_ = v___x_4269_;
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
else
{
lean_dec(v___x_4269_);
v___x_4271_ = lean_box(0);
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
v_resetjp_4270_:
{
lean_object* v___x_4274_; 
if (v_isShared_4272_ == 0)
{
lean_ctor_set(v___x_4271_, 0, v___x_4253_);
v___x_4274_ = v___x_4271_;
goto v_reusejp_4273_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v___x_4253_);
v___x_4274_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
return v___x_4274_;
}
}
}
else
{
return v___x_4269_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__1___boxed(lean_object* v_a_4278_, lean_object* v_declName_4279_, lean_object* v_a_4280_, lean_object* v___x_4281_, lean_object* v___x_4282_, lean_object* v___x_4283_, lean_object* v_xs_4284_, lean_object* v_x_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_){
_start:
{
size_t v___x_42137__boxed_4293_; lean_object* v_res_4294_; 
v___x_42137__boxed_4293_ = lean_unbox_usize(v___x_4282_);
lean_dec(v___x_4282_);
v_res_4294_ = l_Lean_Elab_Command_elabDefeqStructure___lam__1(v_a_4278_, v_declName_4279_, v_a_4280_, v___x_4281_, v___x_42137__boxed_4293_, v___x_4283_, v_xs_4284_, v_x_4285_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_);
lean_dec(v___y_4291_);
lean_dec_ref(v___y_4290_);
lean_dec(v___y_4289_);
lean_dec_ref(v___y_4288_);
lean_dec(v___y_4287_);
lean_dec_ref(v___y_4286_);
lean_dec_ref(v_x_4285_);
lean_dec_ref(v_xs_4284_);
lean_dec(v___x_4281_);
lean_dec_ref(v_a_4280_);
lean_dec_ref(v_a_4278_);
return v_res_4294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__2(lean_object* v___x_4295_, uint8_t v___x_4296_, lean_object* v_declName_4297_, lean_object* v_a_4298_, lean_object* v___x_4299_, size_t v___x_4300_, lean_object* v___x_4301_, uint8_t v___x_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v___x_4310_; 
v___x_4310_ = l_Lean_withoutExporting___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__1___redArg(v___x_4295_, v___x_4296_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_);
if (lean_obj_tag(v___x_4310_) == 0)
{
lean_object* v_a_4311_; lean_object* v___x_4312_; lean_object* v___f_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; 
v_a_4311_ = lean_ctor_get(v___x_4310_, 0);
lean_inc_n(v_a_4311_, 2);
lean_dec_ref_known(v___x_4310_, 1);
v___x_4312_ = lean_box_usize(v___x_4300_);
v___f_4313_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDefeqStructure___lam__1___boxed), 15, 6);
lean_closure_set(v___f_4313_, 0, v_a_4311_);
lean_closure_set(v___f_4313_, 1, v_declName_4297_);
lean_closure_set(v___f_4313_, 2, v_a_4298_);
lean_closure_set(v___f_4313_, 3, v___x_4299_);
lean_closure_set(v___f_4313_, 4, v___x_4312_);
lean_closure_set(v___f_4313_, 5, v___x_4301_);
v___x_4314_ = l_Lean_ConstantInfo_value_x21(v_a_4311_, v___x_4302_);
lean_dec(v_a_4311_);
v___x_4315_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabDefeqStructure_spec__12___redArg(v___x_4314_, v___f_4313_, v___x_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_);
return v___x_4315_;
}
else
{
lean_object* v_a_4316_; lean_object* v___x_4318_; uint8_t v_isShared_4319_; uint8_t v_isSharedCheck_4323_; 
lean_dec(v___x_4299_);
lean_dec_ref(v_a_4298_);
lean_dec(v_declName_4297_);
v_a_4316_ = lean_ctor_get(v___x_4310_, 0);
v_isSharedCheck_4323_ = !lean_is_exclusive(v___x_4310_);
if (v_isSharedCheck_4323_ == 0)
{
v___x_4318_ = v___x_4310_;
v_isShared_4319_ = v_isSharedCheck_4323_;
goto v_resetjp_4317_;
}
else
{
lean_inc(v_a_4316_);
lean_dec(v___x_4310_);
v___x_4318_ = lean_box(0);
v_isShared_4319_ = v_isSharedCheck_4323_;
goto v_resetjp_4317_;
}
v_resetjp_4317_:
{
lean_object* v___x_4321_; 
if (v_isShared_4319_ == 0)
{
v___x_4321_ = v___x_4318_;
goto v_reusejp_4320_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v_a_4316_);
v___x_4321_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4320_;
}
v_reusejp_4320_:
{
return v___x_4321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__2___boxed(lean_object* v___x_4324_, lean_object* v___x_4325_, lean_object* v_declName_4326_, lean_object* v_a_4327_, lean_object* v___x_4328_, lean_object* v___x_4329_, lean_object* v___x_4330_, lean_object* v___x_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_){
_start:
{
uint8_t v___x_42206__boxed_4339_; size_t v___x_42210__boxed_4340_; uint8_t v___x_42212__boxed_4341_; lean_object* v_res_4342_; 
v___x_42206__boxed_4339_ = lean_unbox(v___x_4325_);
v___x_42210__boxed_4340_ = lean_unbox_usize(v___x_4329_);
lean_dec(v___x_4329_);
v___x_42212__boxed_4341_ = lean_unbox(v___x_4331_);
v_res_4342_ = l_Lean_Elab_Command_elabDefeqStructure___lam__2(v___x_4324_, v___x_42206__boxed_4339_, v_declName_4326_, v_a_4327_, v___x_4328_, v___x_42210__boxed_4340_, v___x_4330_, v___x_42212__boxed_4341_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_);
lean_dec(v___y_4337_);
lean_dec_ref(v___y_4336_);
lean_dec(v___y_4335_);
lean_dec_ref(v___y_4334_);
lean_dec(v___y_4333_);
lean_dec_ref(v___y_4332_);
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__3(lean_object* v___y_4343_, lean_object* v_declName_4344_, lean_object* v___x_4345_, lean_object* v___x_4346_, lean_object* v___x_4347_, lean_object* v___x_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_, lean_object* v___y_4355_){
_start:
{
lean_object* v_toCold_4357_; lean_object* v_currRecDepth_4358_; lean_object* v_ref_4359_; uint8_t v_diag_4360_; uint8_t v_suppressElabErrors_4361_; lean_object* v___x_4363_; uint8_t v_isShared_4364_; uint8_t v_isSharedCheck_4370_; 
v_toCold_4357_ = lean_ctor_get(v___y_4354_, 0);
v_currRecDepth_4358_ = lean_ctor_get(v___y_4354_, 1);
v_ref_4359_ = lean_ctor_get(v___y_4354_, 2);
v_diag_4360_ = lean_ctor_get_uint8(v___y_4354_, sizeof(void*)*3);
v_suppressElabErrors_4361_ = lean_ctor_get_uint8(v___y_4354_, sizeof(void*)*3 + 1);
v_isSharedCheck_4370_ = !lean_is_exclusive(v___y_4354_);
if (v_isSharedCheck_4370_ == 0)
{
v___x_4363_ = v___y_4354_;
v_isShared_4364_ = v_isSharedCheck_4370_;
goto v_resetjp_4362_;
}
else
{
lean_inc(v_ref_4359_);
lean_inc(v_currRecDepth_4358_);
lean_inc(v_toCold_4357_);
lean_dec(v___y_4354_);
v___x_4363_ = lean_box(0);
v_isShared_4364_ = v_isSharedCheck_4370_;
goto v_resetjp_4362_;
}
v_resetjp_4362_:
{
lean_object* v_ref_4365_; lean_object* v___x_4367_; 
v_ref_4365_ = l_Lean_replaceRef(v___y_4343_, v_ref_4359_);
lean_dec(v_ref_4359_);
if (v_isShared_4364_ == 0)
{
lean_ctor_set(v___x_4363_, 2, v_ref_4365_);
v___x_4367_ = v___x_4363_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4369_; 
v_reuseFailAlloc_4369_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4369_, 0, v_toCold_4357_);
lean_ctor_set(v_reuseFailAlloc_4369_, 1, v_currRecDepth_4358_);
lean_ctor_set(v_reuseFailAlloc_4369_, 2, v_ref_4365_);
lean_ctor_set_uint8(v_reuseFailAlloc_4369_, sizeof(void*)*3, v_diag_4360_);
lean_ctor_set_uint8(v_reuseFailAlloc_4369_, sizeof(void*)*3 + 1, v_suppressElabErrors_4361_);
v___x_4367_ = v_reuseFailAlloc_4369_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
lean_object* v___x_4368_; 
v___x_4368_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj(v_declName_4344_, v___x_4345_, v___x_4346_, v___x_4347_, v___x_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_, v___x_4367_, v___y_4355_);
lean_dec_ref(v___x_4367_);
return v___x_4368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__3___boxed(lean_object* v___y_4371_, lean_object* v_declName_4372_, lean_object* v___x_4373_, lean_object* v___x_4374_, lean_object* v___x_4375_, lean_object* v___x_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_){
_start:
{
lean_object* v_res_4385_; 
v_res_4385_ = l_Lean_Elab_Command_elabDefeqStructure___lam__3(v___y_4371_, v_declName_4372_, v___x_4373_, v___x_4374_, v___x_4375_, v___x_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_, v___y_4383_);
lean_dec(v___y_4383_);
lean_dec(v___y_4381_);
lean_dec_ref(v___y_4380_);
lean_dec(v___y_4379_);
lean_dec_ref(v___y_4378_);
lean_dec(v___y_4371_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__4(lean_object* v___x_4386_, lean_object* v___x_4387_, lean_object* v_a_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_){
_start:
{
lean_object* v___x_4396_; 
v___x_4396_ = l_Lean_Meta_mkVirtualInjectiveTheorems(v___x_4386_, v___x_4387_, v_a_4388_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_);
return v___x_4396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__4___boxed(lean_object* v___x_4397_, lean_object* v___x_4398_, lean_object* v_a_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l_Lean_Elab_Command_elabDefeqStructure___lam__4(v___x_4397_, v___x_4398_, v_a_4399_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_, v___y_4404_, v___y_4405_);
lean_dec(v___y_4405_);
lean_dec_ref(v___y_4404_);
lean_dec(v___y_4403_);
lean_dec_ref(v___y_4402_);
lean_dec(v___y_4401_);
lean_dec_ref(v___y_4400_);
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__5(lean_object* v___x_4408_, lean_object* v___x_4409_, lean_object* v_ctorDoc_x3f_4410_, lean_object* v___x_4411_, lean_object* v___x_4412_, lean_object* v___x_4413_, lean_object* v___x_4414_, lean_object* v_a_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_){
_start:
{
lean_object* v___x_4423_; 
v___x_4423_ = l_Lean_addDocString_x27(v___x_4408_, v___x_4409_, v_ctorDoc_x3f_4410_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
if (lean_obj_tag(v___x_4423_) == 0)
{
lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; 
lean_dec_ref_known(v___x_4423_, 1);
v___x_4424_ = lean_mk_empty_array_with_capacity(v___x_4411_);
v___x_4425_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4412_);
lean_ctor_set(v___x_4425_, 1, v___x_4413_);
lean_ctor_set(v___x_4425_, 2, v___x_4424_);
v___x_4426_ = l_Lean_addDocString_x27(v___x_4414_, v___x_4425_, v_a_4415_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
return v___x_4426_;
}
else
{
lean_dec(v_a_4415_);
lean_dec(v___x_4414_);
lean_dec(v___x_4413_);
lean_dec(v___x_4412_);
return v___x_4423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__5___boxed(lean_object* v___x_4427_, lean_object* v___x_4428_, lean_object* v_ctorDoc_x3f_4429_, lean_object* v___x_4430_, lean_object* v___x_4431_, lean_object* v___x_4432_, lean_object* v___x_4433_, lean_object* v_a_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_){
_start:
{
lean_object* v_res_4442_; 
v_res_4442_ = l_Lean_Elab_Command_elabDefeqStructure___lam__5(v___x_4427_, v___x_4428_, v_ctorDoc_x3f_4429_, v___x_4430_, v___x_4431_, v___x_4432_, v___x_4433_, v_a_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_);
lean_dec(v___y_4440_);
lean_dec_ref(v___y_4439_);
lean_dec(v___y_4438_);
lean_dec_ref(v___y_4437_);
lean_dec(v___y_4436_);
lean_dec_ref(v___y_4435_);
lean_dec(v___x_4430_);
return v_res_4442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6(lean_object* v_modifiers_4450_, lean_object* v___x_4451_, lean_object* v___x_4452_, lean_object* v___x_4453_, lean_object* v___x_4454_, lean_object* v___x_4455_, lean_object* v_declSig_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_){
_start:
{
lean_object* v___x_4460_; 
v___x_4460_ = l_Lean_Elab_Command_getRef___redArg(v___y_4457_);
if (lean_obj_tag(v___x_4460_) == 0)
{
lean_object* v_a_4461_; uint8_t v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4487_; 
v_a_4461_ = lean_ctor_get(v___x_4460_, 0);
lean_inc(v_a_4461_);
lean_dec_ref_known(v___x_4460_, 1);
v___x_4462_ = 0;
v___x_4463_ = l_Lean_SourceInfo_fromRef(v_a_4461_, v___x_4462_);
lean_dec(v_a_4461_);
v___x_4487_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_4457_);
if (lean_obj_tag(v___x_4487_) == 0)
{
lean_object* v_quotContext_x3f_4488_; 
lean_dec_ref_known(v___x_4487_, 1);
v_quotContext_x3f_4488_ = lean_ctor_get(v___y_4457_, 5);
if (lean_obj_tag(v_quotContext_x3f_4488_) == 0)
{
lean_object* v___x_4489_; 
v___x_4489_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg(v___y_4458_);
lean_dec_ref(v___x_4489_);
goto v___jp_4464_;
}
else
{
goto v___jp_4464_;
}
}
else
{
lean_object* v_a_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4497_; 
lean_dec(v___x_4463_);
lean_dec(v_declSig_4456_);
lean_dec(v___x_4455_);
lean_dec(v___x_4454_);
lean_dec_ref(v___x_4453_);
lean_dec_ref(v___x_4452_);
lean_dec_ref(v___x_4451_);
lean_dec_ref(v_modifiers_4450_);
v_a_4490_ = lean_ctor_get(v___x_4487_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4487_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4492_ = v___x_4487_;
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v___x_4487_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4495_; 
if (v_isShared_4493_ == 0)
{
v___x_4495_ = v___x_4492_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_a_4490_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
}
v___jp_4464_:
{
lean_object* v_stx_4465_; lean_object* v___x_4466_; lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v_stx_4465_ = lean_ctor_get(v_modifiers_4450_, 0);
lean_inc(v_stx_4465_);
lean_dec_ref(v_modifiers_4450_);
v___x_4466_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__0));
lean_inc_ref_n(v___x_4453_, 2);
lean_inc_ref_n(v___x_4452_, 3);
lean_inc_ref_n(v___x_4451_, 3);
v___x_4467_ = l_Lean_Name_mkStr4(v___x_4451_, v___x_4452_, v___x_4453_, v___x_4466_);
v___x_4468_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__1));
v___x_4469_ = l_Lean_Name_mkStr4(v___x_4451_, v___x_4452_, v___x_4453_, v___x_4468_);
v___x_4470_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__2));
lean_inc_n(v___x_4463_, 6);
v___x_4471_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4471_, 0, v___x_4463_);
lean_ctor_set(v___x_4471_, 1, v___x_4470_);
v___x_4472_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__3));
v___x_4473_ = l_Lean_Name_mkStr4(v___x_4451_, v___x_4452_, v___x_4453_, v___x_4472_);
v___x_4474_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__4));
v___x_4475_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4475_, 0, v___x_4463_);
lean_ctor_set(v___x_4475_, 1, v___x_4474_);
v___x_4476_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__5));
v___x_4477_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___closed__6));
v___x_4478_ = l_Lean_Name_mkStr4(v___x_4451_, v___x_4452_, v___x_4476_, v___x_4477_);
v___x_4479_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3));
v___x_4480_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6, &l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6_once, _init_l_Lean_Elab_Command_elabDefeqStructure___lam__0___closed__6);
v___x_4481_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4481_, 0, v___x_4463_);
lean_ctor_set(v___x_4481_, 1, v___x_4479_);
lean_ctor_set(v___x_4481_, 2, v___x_4480_);
lean_inc_ref_n(v___x_4481_, 3);
v___x_4482_ = l_Lean_Syntax_node2(v___x_4463_, v___x_4478_, v___x_4481_, v___x_4481_);
v___x_4483_ = l_Lean_Syntax_node4(v___x_4463_, v___x_4473_, v___x_4475_, v___x_4454_, v___x_4482_, v___x_4481_);
v___x_4484_ = l_Lean_Syntax_node5(v___x_4463_, v___x_4469_, v___x_4471_, v___x_4455_, v_declSig_4456_, v___x_4483_, v___x_4481_);
v___x_4485_ = l_Lean_Syntax_node2(v___x_4463_, v___x_4467_, v_stx_4465_, v___x_4484_);
v___x_4486_ = l_Lean_Elab_Command_elabCommand(v___x_4485_, v___y_4457_, v___y_4458_);
return v___x_4486_;
}
}
else
{
lean_object* v_a_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4505_; 
lean_dec(v_declSig_4456_);
lean_dec(v___x_4455_);
lean_dec(v___x_4454_);
lean_dec_ref(v___x_4453_);
lean_dec_ref(v___x_4452_);
lean_dec_ref(v___x_4451_);
lean_dec_ref(v_modifiers_4450_);
v_a_4498_ = lean_ctor_get(v___x_4460_, 0);
v_isSharedCheck_4505_ = !lean_is_exclusive(v___x_4460_);
if (v_isSharedCheck_4505_ == 0)
{
v___x_4500_ = v___x_4460_;
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_a_4498_);
lean_dec(v___x_4460_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4505_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
lean_object* v___x_4503_; 
if (v_isShared_4501_ == 0)
{
v___x_4503_ = v___x_4500_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v_a_4498_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___lam__6___boxed(lean_object* v_modifiers_4506_, lean_object* v___x_4507_, lean_object* v___x_4508_, lean_object* v___x_4509_, lean_object* v___x_4510_, lean_object* v___x_4511_, lean_object* v_declSig_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_){
_start:
{
lean_object* v_res_4516_; 
v_res_4516_ = l_Lean_Elab_Command_elabDefeqStructure___lam__6(v_modifiers_4506_, v___x_4507_, v___x_4508_, v___x_4509_, v___x_4510_, v___x_4511_, v_declSig_4512_, v___y_4513_, v___y_4514_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
return v_res_4516_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___redArg(lean_object* v_declName_4517_, lean_object* v_declRanges_4518_, lean_object* v___y_4519_){
_start:
{
uint8_t v___x_4521_; 
v___x_4521_ = l_Lean_Name_isAnonymous(v_declName_4517_);
if (v___x_4521_ == 0)
{
lean_object* v___x_4522_; lean_object* v_env_4523_; lean_object* v_messages_4524_; lean_object* v_scopes_4525_; lean_object* v_usedQuotCtxts_4526_; lean_object* v_nextMacroScope_4527_; lean_object* v_maxRecDepth_4528_; lean_object* v_ngen_4529_; lean_object* v_auxDeclNGen_4530_; lean_object* v_infoState_4531_; lean_object* v_traceState_4532_; lean_object* v_snapshotTasks_4533_; lean_object* v_prevLinterStates_4534_; lean_object* v_codeQualityEntryTasks_4535_; lean_object* v___x_4537_; uint8_t v_isShared_4538_; uint8_t v_isSharedCheck_4547_; 
v___x_4522_ = lean_st_ref_take(v___y_4519_);
v_env_4523_ = lean_ctor_get(v___x_4522_, 0);
v_messages_4524_ = lean_ctor_get(v___x_4522_, 1);
v_scopes_4525_ = lean_ctor_get(v___x_4522_, 2);
v_usedQuotCtxts_4526_ = lean_ctor_get(v___x_4522_, 3);
v_nextMacroScope_4527_ = lean_ctor_get(v___x_4522_, 4);
v_maxRecDepth_4528_ = lean_ctor_get(v___x_4522_, 5);
v_ngen_4529_ = lean_ctor_get(v___x_4522_, 6);
v_auxDeclNGen_4530_ = lean_ctor_get(v___x_4522_, 7);
v_infoState_4531_ = lean_ctor_get(v___x_4522_, 8);
v_traceState_4532_ = lean_ctor_get(v___x_4522_, 9);
v_snapshotTasks_4533_ = lean_ctor_get(v___x_4522_, 10);
v_prevLinterStates_4534_ = lean_ctor_get(v___x_4522_, 11);
v_codeQualityEntryTasks_4535_ = lean_ctor_get(v___x_4522_, 12);
v_isSharedCheck_4547_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4547_ == 0)
{
v___x_4537_ = v___x_4522_;
v_isShared_4538_ = v_isSharedCheck_4547_;
goto v_resetjp_4536_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4535_);
lean_inc(v_prevLinterStates_4534_);
lean_inc(v_snapshotTasks_4533_);
lean_inc(v_traceState_4532_);
lean_inc(v_infoState_4531_);
lean_inc(v_auxDeclNGen_4530_);
lean_inc(v_ngen_4529_);
lean_inc(v_maxRecDepth_4528_);
lean_inc(v_nextMacroScope_4527_);
lean_inc(v_usedQuotCtxts_4526_);
lean_inc(v_scopes_4525_);
lean_inc(v_messages_4524_);
lean_inc(v_env_4523_);
lean_dec(v___x_4522_);
v___x_4537_ = lean_box(0);
v_isShared_4538_ = v_isSharedCheck_4547_;
goto v_resetjp_4536_;
}
v_resetjp_4536_:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4543_; 
v___x_4539_ = lean_box(0);
v___x_4540_ = l_Lean_declRangeExt;
v___x_4541_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_4540_, v_env_4523_, v_declName_4517_, v_declRanges_4518_);
if (v_isShared_4538_ == 0)
{
lean_ctor_set(v___x_4537_, 0, v___x_4541_);
v___x_4543_ = v___x_4537_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4546_; 
v_reuseFailAlloc_4546_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4546_, 0, v___x_4541_);
lean_ctor_set(v_reuseFailAlloc_4546_, 1, v_messages_4524_);
lean_ctor_set(v_reuseFailAlloc_4546_, 2, v_scopes_4525_);
lean_ctor_set(v_reuseFailAlloc_4546_, 3, v_usedQuotCtxts_4526_);
lean_ctor_set(v_reuseFailAlloc_4546_, 4, v_nextMacroScope_4527_);
lean_ctor_set(v_reuseFailAlloc_4546_, 5, v_maxRecDepth_4528_);
lean_ctor_set(v_reuseFailAlloc_4546_, 6, v_ngen_4529_);
lean_ctor_set(v_reuseFailAlloc_4546_, 7, v_auxDeclNGen_4530_);
lean_ctor_set(v_reuseFailAlloc_4546_, 8, v_infoState_4531_);
lean_ctor_set(v_reuseFailAlloc_4546_, 9, v_traceState_4532_);
lean_ctor_set(v_reuseFailAlloc_4546_, 10, v_snapshotTasks_4533_);
lean_ctor_set(v_reuseFailAlloc_4546_, 11, v_prevLinterStates_4534_);
lean_ctor_set(v_reuseFailAlloc_4546_, 12, v_codeQualityEntryTasks_4535_);
v___x_4543_ = v_reuseFailAlloc_4546_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
lean_object* v___x_4544_; lean_object* v___x_4545_; 
v___x_4544_ = lean_st_ref_put(v___y_4519_, v___x_4543_);
v___x_4545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4539_);
return v___x_4545_;
}
}
}
else
{
lean_object* v___x_4548_; lean_object* v___x_4549_; 
lean_dec_ref(v_declRanges_4518_);
lean_dec(v_declName_4517_);
v___x_4548_ = lean_box(0);
v___x_4549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4548_);
return v___x_4549_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___redArg___boxed(lean_object* v_declName_4550_, lean_object* v_declRanges_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_){
_start:
{
lean_object* v_res_4554_; 
v_res_4554_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___redArg(v_declName_4550_, v_declRanges_4551_, v___y_4552_);
lean_dec(v___y_4552_);
return v_res_4554_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg(lean_object* v_stx_4555_, lean_object* v___y_4556_){
_start:
{
uint8_t v___x_4558_; lean_object* v___x_4559_; 
v___x_4558_ = 0;
v___x_4559_ = l_Lean_Syntax_getRange_x3f(v_stx_4555_, v___x_4558_);
if (lean_obj_tag(v___x_4559_) == 1)
{
lean_object* v_val_4560_; lean_object* v___x_4562_; uint8_t v_isShared_4563_; uint8_t v_isSharedCheck_4572_; 
v_val_4560_ = lean_ctor_get(v___x_4559_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4559_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4562_ = v___x_4559_;
v_isShared_4563_ = v_isSharedCheck_4572_;
goto v_resetjp_4561_;
}
else
{
lean_inc(v_val_4560_);
lean_dec(v___x_4559_);
v___x_4562_ = lean_box(0);
v_isShared_4563_ = v_isSharedCheck_4572_;
goto v_resetjp_4561_;
}
v_resetjp_4561_:
{
lean_object* v_fileMap_4564_; lean_object* v_start_4565_; lean_object* v_stop_4566_; lean_object* v___x_4567_; lean_object* v___x_4569_; 
v_fileMap_4564_ = lean_ctor_get(v___y_4556_, 1);
v_start_4565_ = lean_ctor_get(v_val_4560_, 0);
lean_inc(v_start_4565_);
v_stop_4566_ = lean_ctor_get(v_val_4560_, 1);
lean_inc(v_stop_4566_);
lean_dec(v_val_4560_);
lean_inc_ref(v_fileMap_4564_);
v___x_4567_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_4564_, v_start_4565_, v_stop_4566_);
lean_dec(v_stop_4566_);
lean_dec(v_start_4565_);
if (v_isShared_4563_ == 0)
{
lean_ctor_set(v___x_4562_, 0, v___x_4567_);
v___x_4569_ = v___x_4562_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v___x_4567_);
v___x_4569_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
lean_object* v___x_4570_; 
v___x_4570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4569_);
return v___x_4570_;
}
}
}
else
{
lean_object* v___x_4573_; lean_object* v___x_4574_; 
lean_dec(v___x_4559_);
v___x_4573_ = lean_box(0);
v___x_4574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4574_, 0, v___x_4573_);
return v___x_4574_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg___boxed(lean_object* v_stx_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg(v_stx_4575_, v___y_4576_);
lean_dec_ref(v___y_4576_);
lean_dec(v_stx_4575_);
return v_res_4578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8(lean_object* v_declName_4579_, lean_object* v_rangeStx_4580_, lean_object* v_selectionRangeStx_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_){
_start:
{
lean_object* v___x_4585_; lean_object* v_a_4586_; lean_object* v___x_4588_; uint8_t v_isShared_4589_; uint8_t v_isSharedCheck_4602_; 
v___x_4585_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg(v_rangeStx_4580_, v___y_4582_);
v_a_4586_ = lean_ctor_get(v___x_4585_, 0);
v_isSharedCheck_4602_ = !lean_is_exclusive(v___x_4585_);
if (v_isSharedCheck_4602_ == 0)
{
v___x_4588_ = v___x_4585_;
v_isShared_4589_ = v_isSharedCheck_4602_;
goto v_resetjp_4587_;
}
else
{
lean_inc(v_a_4586_);
lean_dec(v___x_4585_);
v___x_4588_ = lean_box(0);
v_isShared_4589_ = v_isSharedCheck_4602_;
goto v_resetjp_4587_;
}
v_resetjp_4587_:
{
if (lean_obj_tag(v_a_4586_) == 1)
{
lean_object* v_val_4590_; lean_object* v_a_4592_; lean_object* v___x_4595_; lean_object* v_a_4596_; 
lean_del_object(v___x_4588_);
v_val_4590_ = lean_ctor_get(v_a_4586_, 0);
lean_inc(v_val_4590_);
lean_dec_ref_known(v_a_4586_, 1);
v___x_4595_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg(v_selectionRangeStx_4581_, v___y_4582_);
v_a_4596_ = lean_ctor_get(v___x_4595_, 0);
lean_inc(v_a_4596_);
lean_dec_ref(v___x_4595_);
if (lean_obj_tag(v_a_4596_) == 0)
{
lean_inc(v_val_4590_);
v_a_4592_ = v_val_4590_;
goto v___jp_4591_;
}
else
{
lean_object* v_val_4597_; 
v_val_4597_ = lean_ctor_get(v_a_4596_, 0);
lean_inc(v_val_4597_);
lean_dec_ref_known(v_a_4596_, 1);
v_a_4592_ = v_val_4597_;
goto v___jp_4591_;
}
v___jp_4591_:
{
lean_object* v___x_4593_; lean_object* v___x_4594_; 
v___x_4593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4593_, 0, v_val_4590_);
lean_ctor_set(v___x_4593_, 1, v_a_4592_);
v___x_4594_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___redArg(v_declName_4579_, v___x_4593_, v___y_4583_);
return v___x_4594_;
}
}
else
{
lean_object* v___x_4598_; lean_object* v___x_4600_; 
lean_dec(v_a_4586_);
lean_dec(v_declName_4579_);
v___x_4598_ = lean_box(0);
if (v_isShared_4589_ == 0)
{
lean_ctor_set(v___x_4588_, 0, v___x_4598_);
v___x_4600_ = v___x_4588_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4601_; 
v_reuseFailAlloc_4601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4601_, 0, v___x_4598_);
v___x_4600_ = v_reuseFailAlloc_4601_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
return v___x_4600_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8___boxed(lean_object* v_declName_4603_, lean_object* v_rangeStx_4604_, lean_object* v_selectionRangeStx_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_){
_start:
{
lean_object* v_res_4609_; 
v_res_4609_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8(v_declName_4603_, v_rangeStx_4604_, v_selectionRangeStx_4605_, v___y_4606_, v___y_4607_);
lean_dec(v___y_4607_);
lean_dec_ref(v___y_4606_);
lean_dec(v_selectionRangeStx_4605_);
lean_dec(v_rangeStx_4604_);
return v_res_4609_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__1(void){
_start:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; 
v___x_4611_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__0));
v___x_4612_ = l_Lean_stringToMessageData(v___x_4611_);
return v___x_4612_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__3(void){
_start:
{
lean_object* v___x_4614_; lean_object* v___x_4615_; 
v___x_4614_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__2));
v___x_4615_ = l_Lean_stringToMessageData(v___x_4614_);
return v___x_4615_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4(lean_object* v_as_4621_, size_t v_sz_4622_, size_t v_i_4623_, lean_object* v_b_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
lean_object* v_a_4629_; uint8_t v___x_4633_; 
v___x_4633_ = lean_usize_dec_lt(v_i_4623_, v_sz_4622_);
if (v___x_4633_ == 0)
{
lean_object* v___x_4634_; 
v___x_4634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4634_, 0, v_b_4624_);
return v___x_4634_;
}
else
{
lean_object* v_a_4635_; lean_object* v_name_4636_; lean_object* v___x_4637_; 
v_a_4635_ = lean_array_uget_borrowed(v_as_4621_, v_i_4623_);
v_name_4636_ = lean_ctor_get(v_a_4635_, 0);
v___x_4637_ = lean_box(0);
if (lean_obj_tag(v_name_4636_) == 1)
{
lean_object* v_pre_4645_; 
v_pre_4645_ = lean_ctor_get(v_name_4636_, 0);
if (lean_obj_tag(v_pre_4645_) == 0)
{
lean_object* v_str_4646_; lean_object* v___x_4647_; uint8_t v___x_4648_; 
v_str_4646_ = lean_ctor_get(v_name_4636_, 1);
v___x_4647_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__4));
v___x_4648_ = lean_string_dec_eq(v_str_4646_, v___x_4647_);
if (v___x_4648_ == 0)
{
lean_object* v___x_4649_; uint8_t v___x_4650_; 
v___x_4649_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__5));
v___x_4650_ = lean_string_dec_eq(v_str_4646_, v___x_4649_);
if (v___x_4650_ == 0)
{
lean_object* v___x_4651_; uint8_t v___x_4652_; 
v___x_4651_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__6));
v___x_4652_ = lean_string_dec_eq(v_str_4646_, v___x_4651_);
if (v___x_4652_ == 0)
{
lean_object* v___x_4653_; uint8_t v___x_4654_; 
v___x_4653_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__7));
v___x_4654_ = lean_string_dec_eq(v_str_4646_, v___x_4653_);
if (v___x_4654_ == 0)
{
lean_object* v___x_4655_; uint8_t v___x_4656_; 
v___x_4655_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__8));
v___x_4656_ = lean_string_dec_eq(v_str_4646_, v___x_4655_);
if (v___x_4656_ == 0)
{
v_a_4629_ = v___x_4637_;
goto v___jp_4628_;
}
else
{
goto v___jp_4638_;
}
}
else
{
goto v___jp_4638_;
}
}
else
{
goto v___jp_4638_;
}
}
else
{
goto v___jp_4638_;
}
}
else
{
goto v___jp_4638_;
}
}
else
{
v_a_4629_ = v___x_4637_;
goto v___jp_4628_;
}
}
else
{
v_a_4629_ = v___x_4637_;
goto v___jp_4628_;
}
v___jp_4638_:
{
lean_object* v___x_4639_; lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v___x_4639_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__1);
lean_inc(v_name_4636_);
v___x_4640_ = l_Lean_MessageData_ofName(v_name_4636_);
v___x_4641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4641_, 0, v___x_4639_);
lean_ctor_set(v___x_4641_, 1, v___x_4640_);
v___x_4642_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___closed__3);
v___x_4643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4643_, 0, v___x_4641_);
lean_ctor_set(v___x_4643_, 1, v___x_4642_);
v___x_4644_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v___x_4643_, v___y_4625_, v___y_4626_);
if (lean_obj_tag(v___x_4644_) == 0)
{
lean_dec_ref_known(v___x_4644_, 1);
v_a_4629_ = v___x_4637_;
goto v___jp_4628_;
}
else
{
return v___x_4644_;
}
}
}
v___jp_4628_:
{
size_t v___x_4630_; size_t v___x_4631_; 
v___x_4630_ = ((size_t)1ULL);
v___x_4631_ = lean_usize_add(v_i_4623_, v___x_4630_);
v_i_4623_ = v___x_4631_;
v_b_4624_ = v_a_4629_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4___boxed(lean_object* v_as_4657_, lean_object* v_sz_4658_, lean_object* v_i_4659_, lean_object* v_b_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
size_t v_sz_boxed_4664_; size_t v_i_boxed_4665_; lean_object* v_res_4666_; 
v_sz_boxed_4664_ = lean_unbox_usize(v_sz_4658_);
lean_dec(v_sz_4658_);
v_i_boxed_4665_ = lean_unbox_usize(v_i_4659_);
lean_dec(v_i_4659_);
v_res_4666_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4(v_as_4657_, v_sz_boxed_4664_, v_i_boxed_4665_, v_b_4660_, v___y_4661_, v___y_4662_);
lean_dec(v___y_4662_);
lean_dec_ref(v___y_4661_);
lean_dec_ref(v_as_4657_);
return v_res_4666_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___redArg(lean_object* v_as_x27_4667_, lean_object* v_b_4668_, lean_object* v___y_4669_, lean_object* v___y_4670_){
_start:
{
if (lean_obj_tag(v_as_x27_4667_) == 0)
{
lean_object* v___x_4672_; 
v___x_4672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4672_, 0, v_b_4668_);
return v___x_4672_;
}
else
{
lean_object* v_head_4673_; lean_object* v_tail_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; lean_object* v___x_4677_; 
v_head_4673_ = lean_ctor_get(v_as_x27_4667_, 0);
v_tail_4674_ = lean_ctor_get(v_as_x27_4667_, 1);
v___x_4675_ = lean_box(0);
lean_inc(v_head_4673_);
v___x_4676_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_4676_, 0, v_head_4673_);
v___x_4677_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_4676_, v___y_4669_, v___y_4670_);
if (lean_obj_tag(v___x_4677_) == 0)
{
lean_dec_ref_known(v___x_4677_, 1);
v_as_x27_4667_ = v_tail_4674_;
v_b_4668_ = v___x_4675_;
goto _start;
}
else
{
return v___x_4677_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___redArg___boxed(lean_object* v_as_x27_4679_, lean_object* v_b_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_){
_start:
{
lean_object* v_res_4684_; 
v_res_4684_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___redArg(v_as_x27_4679_, v_b_4680_, v___y_4681_, v___y_4682_);
lean_dec(v___y_4682_);
lean_dec_ref(v___y_4681_);
lean_dec(v_as_x27_4679_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___redArg(lean_object* v_declName_4685_, uint8_t v_s_4686_, lean_object* v___y_4687_){
_start:
{
lean_object* v___x_4689_; lean_object* v_env_4690_; lean_object* v_messages_4691_; lean_object* v_scopes_4692_; lean_object* v_usedQuotCtxts_4693_; lean_object* v_nextMacroScope_4694_; lean_object* v_maxRecDepth_4695_; lean_object* v_ngen_4696_; lean_object* v_auxDeclNGen_4697_; lean_object* v_infoState_4698_; lean_object* v_traceState_4699_; lean_object* v_snapshotTasks_4700_; lean_object* v_prevLinterStates_4701_; lean_object* v_codeQualityEntryTasks_4702_; lean_object* v___x_4704_; uint8_t v_isShared_4705_; uint8_t v_isSharedCheck_4715_; 
v___x_4689_ = lean_st_ref_take(v___y_4687_);
v_env_4690_ = lean_ctor_get(v___x_4689_, 0);
v_messages_4691_ = lean_ctor_get(v___x_4689_, 1);
v_scopes_4692_ = lean_ctor_get(v___x_4689_, 2);
v_usedQuotCtxts_4693_ = lean_ctor_get(v___x_4689_, 3);
v_nextMacroScope_4694_ = lean_ctor_get(v___x_4689_, 4);
v_maxRecDepth_4695_ = lean_ctor_get(v___x_4689_, 5);
v_ngen_4696_ = lean_ctor_get(v___x_4689_, 6);
v_auxDeclNGen_4697_ = lean_ctor_get(v___x_4689_, 7);
v_infoState_4698_ = lean_ctor_get(v___x_4689_, 8);
v_traceState_4699_ = lean_ctor_get(v___x_4689_, 9);
v_snapshotTasks_4700_ = lean_ctor_get(v___x_4689_, 10);
v_prevLinterStates_4701_ = lean_ctor_get(v___x_4689_, 11);
v_codeQualityEntryTasks_4702_ = lean_ctor_get(v___x_4689_, 12);
v_isSharedCheck_4715_ = !lean_is_exclusive(v___x_4689_);
if (v_isSharedCheck_4715_ == 0)
{
v___x_4704_ = v___x_4689_;
v_isShared_4705_ = v_isSharedCheck_4715_;
goto v_resetjp_4703_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4702_);
lean_inc(v_prevLinterStates_4701_);
lean_inc(v_snapshotTasks_4700_);
lean_inc(v_traceState_4699_);
lean_inc(v_infoState_4698_);
lean_inc(v_auxDeclNGen_4697_);
lean_inc(v_ngen_4696_);
lean_inc(v_maxRecDepth_4695_);
lean_inc(v_nextMacroScope_4694_);
lean_inc(v_usedQuotCtxts_4693_);
lean_inc(v_scopes_4692_);
lean_inc(v_messages_4691_);
lean_inc(v_env_4690_);
lean_dec(v___x_4689_);
v___x_4704_ = lean_box(0);
v_isShared_4705_ = v_isSharedCheck_4715_;
goto v_resetjp_4703_;
}
v_resetjp_4703_:
{
lean_object* v___x_4706_; uint8_t v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4711_; 
v___x_4706_ = lean_box(0);
v___x_4707_ = 0;
v___x_4708_ = lean_box(0);
v___x_4709_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_4690_, v_declName_4685_, v_s_4686_, v___x_4707_, v___x_4708_);
if (v_isShared_4705_ == 0)
{
lean_ctor_set(v___x_4704_, 0, v___x_4709_);
v___x_4711_ = v___x_4704_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4714_; 
v_reuseFailAlloc_4714_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4714_, 0, v___x_4709_);
lean_ctor_set(v_reuseFailAlloc_4714_, 1, v_messages_4691_);
lean_ctor_set(v_reuseFailAlloc_4714_, 2, v_scopes_4692_);
lean_ctor_set(v_reuseFailAlloc_4714_, 3, v_usedQuotCtxts_4693_);
lean_ctor_set(v_reuseFailAlloc_4714_, 4, v_nextMacroScope_4694_);
lean_ctor_set(v_reuseFailAlloc_4714_, 5, v_maxRecDepth_4695_);
lean_ctor_set(v_reuseFailAlloc_4714_, 6, v_ngen_4696_);
lean_ctor_set(v_reuseFailAlloc_4714_, 7, v_auxDeclNGen_4697_);
lean_ctor_set(v_reuseFailAlloc_4714_, 8, v_infoState_4698_);
lean_ctor_set(v_reuseFailAlloc_4714_, 9, v_traceState_4699_);
lean_ctor_set(v_reuseFailAlloc_4714_, 10, v_snapshotTasks_4700_);
lean_ctor_set(v_reuseFailAlloc_4714_, 11, v_prevLinterStates_4701_);
lean_ctor_set(v_reuseFailAlloc_4714_, 12, v_codeQualityEntryTasks_4702_);
v___x_4711_ = v_reuseFailAlloc_4714_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
lean_object* v___x_4712_; lean_object* v___x_4713_; 
v___x_4712_ = lean_st_ref_put(v___y_4687_, v___x_4711_);
v___x_4713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4713_, 0, v___x_4706_);
return v___x_4713_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___redArg___boxed(lean_object* v_declName_4716_, lean_object* v_s_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_){
_start:
{
uint8_t v_s_boxed_4720_; lean_object* v_res_4721_; 
v_s_boxed_4720_ = lean_unbox(v_s_4717_);
v_res_4721_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___redArg(v_declName_4716_, v_s_boxed_4720_, v___y_4718_);
lean_dec(v___y_4718_);
return v_res_4721_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2(lean_object* v_declName_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
uint8_t v___x_4726_; lean_object* v___x_4727_; 
v___x_4726_ = 2;
v___x_4727_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___redArg(v_declName_4722_, v___x_4726_, v___y_4724_);
return v___x_4727_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2___boxed(lean_object* v_declName_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_, lean_object* v___y_4731_){
_start:
{
lean_object* v_res_4732_; 
v_res_4732_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2(v_declName_4728_, v___y_4729_, v___y_4730_);
lean_dec(v___y_4730_);
lean_dec_ref(v___y_4729_);
return v_res_4732_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___redArg(lean_object* v_as_x27_4733_, lean_object* v_b_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_){
_start:
{
if (lean_obj_tag(v_as_x27_4733_) == 0)
{
lean_object* v___x_4738_; 
v___x_4738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4738_, 0, v_b_4734_);
return v___x_4738_;
}
else
{
lean_object* v_head_4739_; lean_object* v_tail_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; 
v_head_4739_ = lean_ctor_get(v_as_x27_4733_, 0);
v_tail_4740_ = lean_ctor_get(v_as_x27_4733_, 1);
v___x_4741_ = lean_box(0);
lean_inc(v_head_4739_);
v___x_4742_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2(v_head_4739_, v___y_4735_, v___y_4736_);
lean_dec_ref(v___x_4742_);
v_as_x27_4733_ = v_tail_4740_;
v_b_4734_ = v___x_4741_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___redArg___boxed(lean_object* v_as_x27_4744_, lean_object* v_b_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_){
_start:
{
lean_object* v_res_4749_; 
v_res_4749_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___redArg(v_as_x27_4744_, v_b_4745_, v___y_4746_, v___y_4747_);
lean_dec(v___y_4747_);
lean_dec_ref(v___y_4746_);
lean_dec(v_as_x27_4744_);
return v_res_4749_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1(void){
_start:
{
lean_object* v___x_4751_; lean_object* v___x_4752_; 
v___x_4751_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__0));
v___x_4752_ = l_Lean_stringToMessageData(v___x_4751_);
return v___x_4752_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3(void){
_start:
{
lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4754_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__2));
v___x_4755_ = l_Lean_stringToMessageData(v___x_4754_);
return v___x_4755_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5(void){
_start:
{
lean_object* v___x_4757_; lean_object* v___x_4758_; 
v___x_4757_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__4));
v___x_4758_ = l_Lean_stringToMessageData(v___x_4757_);
return v___x_4758_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7(void){
_start:
{
lean_object* v___x_4760_; lean_object* v___x_4761_; 
v___x_4760_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__6));
v___x_4761_ = l_Lean_stringToMessageData(v___x_4760_);
return v___x_4761_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9(void){
_start:
{
lean_object* v___x_4763_; lean_object* v___x_4764_; 
v___x_4763_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__8));
v___x_4764_ = l_Lean_stringToMessageData(v___x_4763_);
return v___x_4764_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11(void){
_start:
{
lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4766_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__10));
v___x_4767_ = l_Lean_stringToMessageData(v___x_4766_);
return v___x_4767_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13(void){
_start:
{
lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4769_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__12));
v___x_4770_ = l_Lean_stringToMessageData(v___x_4769_);
return v___x_4770_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg(lean_object* v_msg_4771_, lean_object* v_declHint_4772_, lean_object* v___y_4773_){
_start:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v_env_4777_; uint8_t v___x_4778_; 
v___x_4775_ = lean_box(0);
v___x_4776_ = lean_st_ref_get(v___y_4773_);
v_env_4777_ = lean_ctor_get(v___x_4776_, 0);
lean_inc_ref(v_env_4777_);
lean_dec(v___x_4776_);
v___x_4778_ = l_Lean_Name_isAnonymous(v_declHint_4772_);
if (v___x_4778_ == 0)
{
uint8_t v_isExporting_4779_; 
v_isExporting_4779_ = lean_ctor_get_uint8(v_env_4777_, sizeof(void*)*8);
if (v_isExporting_4779_ == 0)
{
lean_object* v___x_4780_; 
lean_dec_ref(v_env_4777_);
lean_dec(v_declHint_4772_);
v___x_4780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4780_, 0, v_msg_4771_);
return v___x_4780_;
}
else
{
lean_object* v___x_4781_; uint8_t v___x_4782_; 
lean_inc_ref(v_env_4777_);
v___x_4781_ = l_Lean_Environment_setExporting(v_env_4777_, v___x_4778_);
lean_inc(v_declHint_4772_);
lean_inc_ref(v___x_4781_);
v___x_4782_ = l_Lean_Environment_contains(v___x_4781_, v_declHint_4772_, v_isExporting_4779_);
if (v___x_4782_ == 0)
{
lean_object* v___x_4783_; 
lean_dec_ref(v___x_4781_);
lean_dec_ref(v_env_4777_);
lean_dec(v_declHint_4772_);
v___x_4783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4783_, 0, v_msg_4771_);
return v___x_4783_;
}
else
{
lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v_c_4789_; lean_object* v___x_4790_; 
v___x_4784_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_4785_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4);
v___x_4786_ = l_Lean_Options_empty;
v___x_4787_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4787_, 0, v___x_4781_);
lean_ctor_set(v___x_4787_, 1, v___x_4784_);
lean_ctor_set(v___x_4787_, 2, v___x_4785_);
lean_ctor_set(v___x_4787_, 3, v___x_4786_);
lean_inc(v_declHint_4772_);
v___x_4788_ = l_Lean_MessageData_ofConstName(v_declHint_4772_, v___x_4778_);
v_c_4789_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_4789_, 0, v___x_4787_);
lean_ctor_set(v_c_4789_, 1, v___x_4788_);
v___x_4790_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4777_, v_declHint_4772_);
if (lean_obj_tag(v___x_4790_) == 0)
{
lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; 
lean_dec_ref(v_env_4777_);
lean_dec(v_declHint_4772_);
v___x_4791_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1);
v___x_4792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4792_, 0, v___x_4791_);
lean_ctor_set(v___x_4792_, 1, v_c_4789_);
v___x_4793_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3);
v___x_4794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4794_, 0, v___x_4792_);
lean_ctor_set(v___x_4794_, 1, v___x_4793_);
v___x_4795_ = l_Lean_MessageData_note(v___x_4794_);
v___x_4796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4796_, 0, v_msg_4771_);
lean_ctor_set(v___x_4796_, 1, v___x_4795_);
v___x_4797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4797_, 0, v___x_4796_);
return v___x_4797_;
}
else
{
lean_object* v_val_4798_; lean_object* v___x_4800_; uint8_t v_isShared_4801_; uint8_t v_isSharedCheck_4832_; 
v_val_4798_ = lean_ctor_get(v___x_4790_, 0);
v_isSharedCheck_4832_ = !lean_is_exclusive(v___x_4790_);
if (v_isSharedCheck_4832_ == 0)
{
v___x_4800_ = v___x_4790_;
v_isShared_4801_ = v_isSharedCheck_4832_;
goto v_resetjp_4799_;
}
else
{
lean_inc(v_val_4798_);
lean_dec(v___x_4790_);
v___x_4800_ = lean_box(0);
v_isShared_4801_ = v_isSharedCheck_4832_;
goto v_resetjp_4799_;
}
v_resetjp_4799_:
{
lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v_mod_4804_; uint8_t v___x_4805_; 
v___x_4802_ = l_Lean_Environment_header(v_env_4777_);
lean_dec_ref(v_env_4777_);
v___x_4803_ = l_Lean_EnvironmentHeader_moduleNames(v___x_4802_);
v_mod_4804_ = lean_array_get(v___x_4775_, v___x_4803_, v_val_4798_);
lean_dec(v_val_4798_);
lean_dec_ref(v___x_4803_);
v___x_4805_ = l_Lean_isPrivateName(v_declHint_4772_);
lean_dec(v_declHint_4772_);
if (v___x_4805_ == 0)
{
lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4817_; 
v___x_4806_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5);
v___x_4807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4806_);
lean_ctor_set(v___x_4807_, 1, v_c_4789_);
v___x_4808_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7);
v___x_4809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4807_);
lean_ctor_set(v___x_4809_, 1, v___x_4808_);
v___x_4810_ = l_Lean_MessageData_ofName(v_mod_4804_);
v___x_4811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4809_);
lean_ctor_set(v___x_4811_, 1, v___x_4810_);
v___x_4812_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9);
v___x_4813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4813_, 0, v___x_4811_);
lean_ctor_set(v___x_4813_, 1, v___x_4812_);
v___x_4814_ = l_Lean_MessageData_note(v___x_4813_);
v___x_4815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4815_, 0, v_msg_4771_);
lean_ctor_set(v___x_4815_, 1, v___x_4814_);
if (v_isShared_4801_ == 0)
{
lean_ctor_set_tag(v___x_4800_, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4815_);
v___x_4817_ = v___x_4800_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v___x_4815_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
else
{
lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4830_; 
v___x_4819_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1);
v___x_4820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4820_, 0, v___x_4819_);
lean_ctor_set(v___x_4820_, 1, v_c_4789_);
v___x_4821_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11);
v___x_4822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4822_, 0, v___x_4820_);
lean_ctor_set(v___x_4822_, 1, v___x_4821_);
v___x_4823_ = l_Lean_MessageData_ofName(v_mod_4804_);
v___x_4824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4824_, 0, v___x_4822_);
lean_ctor_set(v___x_4824_, 1, v___x_4823_);
v___x_4825_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13);
v___x_4826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4826_, 0, v___x_4824_);
lean_ctor_set(v___x_4826_, 1, v___x_4825_);
v___x_4827_ = l_Lean_MessageData_note(v___x_4826_);
v___x_4828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4828_, 0, v_msg_4771_);
lean_ctor_set(v___x_4828_, 1, v___x_4827_);
if (v_isShared_4801_ == 0)
{
lean_ctor_set_tag(v___x_4800_, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4828_);
v___x_4830_ = v___x_4800_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v___x_4828_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
return v___x_4830_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4833_; 
lean_dec_ref(v_env_4777_);
lean_dec(v_declHint_4772_);
v___x_4833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4833_, 0, v_msg_4771_);
return v___x_4833_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___boxed(lean_object* v_msg_4834_, lean_object* v_declHint_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_){
_start:
{
lean_object* v_res_4838_; 
v_res_4838_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg(v_msg_4834_, v_declHint_4835_, v___y_4836_);
lean_dec(v___y_4836_);
return v_res_4838_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28(lean_object* v_msg_4839_, lean_object* v_declHint_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_, lean_object* v___y_4843_, lean_object* v___y_4844_, lean_object* v___y_4845_, lean_object* v___y_4846_){
_start:
{
lean_object* v___x_4848_; lean_object* v_a_4849_; lean_object* v___x_4851_; uint8_t v_isShared_4852_; uint8_t v_isSharedCheck_4858_; 
v___x_4848_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg(v_msg_4839_, v_declHint_4840_, v___y_4846_);
v_a_4849_ = lean_ctor_get(v___x_4848_, 0);
v_isSharedCheck_4858_ = !lean_is_exclusive(v___x_4848_);
if (v_isSharedCheck_4858_ == 0)
{
v___x_4851_ = v___x_4848_;
v_isShared_4852_ = v_isSharedCheck_4858_;
goto v_resetjp_4850_;
}
else
{
lean_inc(v_a_4849_);
lean_dec(v___x_4848_);
v___x_4851_ = lean_box(0);
v_isShared_4852_ = v_isSharedCheck_4858_;
goto v_resetjp_4850_;
}
v_resetjp_4850_:
{
lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4856_; 
v___x_4853_ = l_Lean_unknownIdentifierMessageTag;
v___x_4854_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4854_, 0, v___x_4853_);
lean_ctor_set(v___x_4854_, 1, v_a_4849_);
if (v_isShared_4852_ == 0)
{
lean_ctor_set(v___x_4851_, 0, v___x_4854_);
v___x_4856_ = v___x_4851_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4857_; 
v_reuseFailAlloc_4857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4857_, 0, v___x_4854_);
v___x_4856_ = v_reuseFailAlloc_4857_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
return v___x_4856_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28___boxed(lean_object* v_msg_4859_, lean_object* v_declHint_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_){
_start:
{
lean_object* v_res_4868_; 
v_res_4868_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28(v_msg_4859_, v_declHint_4860_, v___y_4861_, v___y_4862_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_);
lean_dec(v___y_4866_);
lean_dec_ref(v___y_4865_);
lean_dec(v___y_4864_);
lean_dec_ref(v___y_4863_);
lean_dec(v___y_4862_);
lean_dec_ref(v___y_4861_);
return v_res_4868_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___redArg(lean_object* v_ref_4869_, lean_object* v_msg_4870_, lean_object* v_declHint_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_){
_start:
{
lean_object* v___x_4879_; lean_object* v_a_4880_; lean_object* v___x_4881_; 
v___x_4879_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28(v_msg_4870_, v_declHint_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_);
v_a_4880_ = lean_ctor_get(v___x_4879_, 0);
lean_inc(v_a_4880_);
lean_dec_ref(v___x_4879_);
v___x_4881_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__12___redArg(v_ref_4869_, v_a_4880_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_);
return v___x_4881_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___redArg___boxed(lean_object* v_ref_4882_, lean_object* v_msg_4883_, lean_object* v_declHint_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_){
_start:
{
lean_object* v_res_4892_; 
v_res_4892_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___redArg(v_ref_4882_, v_msg_4883_, v_declHint_4884_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_, v___y_4889_, v___y_4890_);
lean_dec(v___y_4890_);
lean_dec_ref(v___y_4889_);
lean_dec(v___y_4888_);
lean_dec_ref(v___y_4887_);
lean_dec(v___y_4886_);
lean_dec_ref(v___y_4885_);
lean_dec(v_ref_4882_);
return v_res_4892_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1(void){
_start:
{
lean_object* v___x_4894_; lean_object* v___x_4895_; 
v___x_4894_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__0));
v___x_4895_ = l_Lean_stringToMessageData(v___x_4894_);
return v___x_4895_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg(lean_object* v_ref_4896_, lean_object* v_constName_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_){
_start:
{
lean_object* v___x_4905_; uint8_t v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4905_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1);
v___x_4906_ = 0;
lean_inc(v_constName_4897_);
v___x_4907_ = l_Lean_MessageData_ofConstName(v_constName_4897_, v___x_4906_);
v___x_4908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4908_, 0, v___x_4905_);
lean_ctor_set(v___x_4908_, 1, v___x_4907_);
v___x_4909_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5);
v___x_4910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4910_, 0, v___x_4908_);
lean_ctor_set(v___x_4910_, 1, v___x_4909_);
v___x_4911_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___redArg(v_ref_4896_, v___x_4910_, v_constName_4897_, v___y_4898_, v___y_4899_, v___y_4900_, v___y_4901_, v___y_4902_, v___y_4903_);
return v___x_4911_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___boxed(lean_object* v_ref_4912_, lean_object* v_constName_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_, lean_object* v___y_4920_){
_start:
{
lean_object* v_res_4921_; 
v_res_4921_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg(v_ref_4912_, v_constName_4913_, v___y_4914_, v___y_4915_, v___y_4916_, v___y_4917_, v___y_4918_, v___y_4919_);
lean_dec(v___y_4919_);
lean_dec_ref(v___y_4918_);
lean_dec(v___y_4917_);
lean_dec_ref(v___y_4916_);
lean_dec(v___y_4915_);
lean_dec_ref(v___y_4914_);
lean_dec(v_ref_4912_);
return v_res_4921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___redArg(lean_object* v_constName_4922_, lean_object* v___y_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_){
_start:
{
lean_object* v_ref_4930_; lean_object* v___x_4931_; 
v_ref_4930_ = lean_ctor_get(v___y_4927_, 2);
v___x_4931_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg(v_ref_4930_, v_constName_4922_, v___y_4923_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_);
return v___x_4931_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___redArg___boxed(lean_object* v_constName_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_){
_start:
{
lean_object* v_res_4940_; 
v_res_4940_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___redArg(v_constName_4932_, v___y_4933_, v___y_4934_, v___y_4935_, v___y_4936_, v___y_4937_, v___y_4938_);
lean_dec(v___y_4938_);
lean_dec_ref(v___y_4937_);
lean_dec(v___y_4936_);
lean_dec_ref(v___y_4935_);
lean_dec(v___y_4934_);
lean_dec_ref(v___y_4933_);
return v_res_4940_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9(lean_object* v_constName_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_){
_start:
{
lean_object* v___x_4949_; lean_object* v_env_4950_; uint8_t v___x_4951_; lean_object* v___x_4952_; 
v___x_4949_ = lean_st_ref_get(v___y_4947_);
v_env_4950_ = lean_ctor_get(v___x_4949_, 0);
lean_inc_ref(v_env_4950_);
lean_dec(v___x_4949_);
v___x_4951_ = 0;
lean_inc(v_constName_4941_);
v___x_4952_ = l_Lean_Environment_find_x3f(v_env_4950_, v_constName_4941_, v___x_4951_);
if (lean_obj_tag(v___x_4952_) == 0)
{
lean_object* v___x_4953_; 
v___x_4953_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___redArg(v_constName_4941_, v___y_4942_, v___y_4943_, v___y_4944_, v___y_4945_, v___y_4946_, v___y_4947_);
return v___x_4953_;
}
else
{
lean_object* v_val_4954_; lean_object* v___x_4956_; uint8_t v_isShared_4957_; uint8_t v_isSharedCheck_4961_; 
lean_dec(v_constName_4941_);
v_val_4954_ = lean_ctor_get(v___x_4952_, 0);
v_isSharedCheck_4961_ = !lean_is_exclusive(v___x_4952_);
if (v_isSharedCheck_4961_ == 0)
{
v___x_4956_ = v___x_4952_;
v_isShared_4957_ = v_isSharedCheck_4961_;
goto v_resetjp_4955_;
}
else
{
lean_inc(v_val_4954_);
lean_dec(v___x_4952_);
v___x_4956_ = lean_box(0);
v_isShared_4957_ = v_isSharedCheck_4961_;
goto v_resetjp_4955_;
}
v_resetjp_4955_:
{
lean_object* v___x_4959_; 
if (v_isShared_4957_ == 0)
{
lean_ctor_set_tag(v___x_4956_, 0);
v___x_4959_ = v___x_4956_;
goto v_reusejp_4958_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v_val_4954_);
v___x_4959_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4958_;
}
v_reusejp_4958_:
{
return v___x_4959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9___boxed(lean_object* v_constName_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_){
_start:
{
lean_object* v_res_4970_; 
v_res_4970_ = l_Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9(v_constName_4962_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_, v___y_4967_, v___y_4968_);
lean_dec(v___y_4968_);
lean_dec_ref(v___y_4967_);
lean_dec(v___y_4966_);
lean_dec_ref(v___y_4965_);
lean_dec(v___y_4964_);
lean_dec_ref(v___y_4963_);
return v_res_4970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___redArg(lean_object* v_t_4971_, lean_object* v___y_4972_){
_start:
{
lean_object* v___x_4974_; lean_object* v_infoState_4975_; uint8_t v_enabled_4976_; 
v___x_4974_ = lean_st_ref_get(v___y_4972_);
v_infoState_4975_ = lean_ctor_get(v___x_4974_, 8);
lean_inc_ref(v_infoState_4975_);
lean_dec(v___x_4974_);
v_enabled_4976_ = lean_ctor_get_uint8(v_infoState_4975_, sizeof(void*)*3);
lean_dec_ref(v_infoState_4975_);
if (v_enabled_4976_ == 0)
{
lean_object* v___x_4977_; lean_object* v___x_4978_; 
lean_dec_ref(v_t_4971_);
v___x_4977_ = lean_box(0);
v___x_4978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4978_, 0, v___x_4977_);
return v___x_4978_;
}
else
{
lean_object* v___x_4979_; lean_object* v_infoState_4980_; lean_object* v_env_4981_; lean_object* v_messages_4982_; lean_object* v_scopes_4983_; lean_object* v_usedQuotCtxts_4984_; lean_object* v_nextMacroScope_4985_; lean_object* v_maxRecDepth_4986_; lean_object* v_ngen_4987_; lean_object* v_auxDeclNGen_4988_; lean_object* v_traceState_4989_; lean_object* v_snapshotTasks_4990_; lean_object* v_prevLinterStates_4991_; lean_object* v_codeQualityEntryTasks_4992_; lean_object* v___x_4994_; uint8_t v_isShared_4995_; uint8_t v_isSharedCheck_5014_; 
v___x_4979_ = lean_st_ref_take(v___y_4972_);
v_infoState_4980_ = lean_ctor_get(v___x_4979_, 8);
v_env_4981_ = lean_ctor_get(v___x_4979_, 0);
v_messages_4982_ = lean_ctor_get(v___x_4979_, 1);
v_scopes_4983_ = lean_ctor_get(v___x_4979_, 2);
v_usedQuotCtxts_4984_ = lean_ctor_get(v___x_4979_, 3);
v_nextMacroScope_4985_ = lean_ctor_get(v___x_4979_, 4);
v_maxRecDepth_4986_ = lean_ctor_get(v___x_4979_, 5);
v_ngen_4987_ = lean_ctor_get(v___x_4979_, 6);
v_auxDeclNGen_4988_ = lean_ctor_get(v___x_4979_, 7);
v_traceState_4989_ = lean_ctor_get(v___x_4979_, 9);
v_snapshotTasks_4990_ = lean_ctor_get(v___x_4979_, 10);
v_prevLinterStates_4991_ = lean_ctor_get(v___x_4979_, 11);
v_codeQualityEntryTasks_4992_ = lean_ctor_get(v___x_4979_, 12);
v_isSharedCheck_5014_ = !lean_is_exclusive(v___x_4979_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_4994_ = v___x_4979_;
v_isShared_4995_ = v_isSharedCheck_5014_;
goto v_resetjp_4993_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4992_);
lean_inc(v_prevLinterStates_4991_);
lean_inc(v_snapshotTasks_4990_);
lean_inc(v_traceState_4989_);
lean_inc(v_infoState_4980_);
lean_inc(v_auxDeclNGen_4988_);
lean_inc(v_ngen_4987_);
lean_inc(v_maxRecDepth_4986_);
lean_inc(v_nextMacroScope_4985_);
lean_inc(v_usedQuotCtxts_4984_);
lean_inc(v_scopes_4983_);
lean_inc(v_messages_4982_);
lean_inc(v_env_4981_);
lean_dec(v___x_4979_);
v___x_4994_ = lean_box(0);
v_isShared_4995_ = v_isSharedCheck_5014_;
goto v_resetjp_4993_;
}
v_resetjp_4993_:
{
uint8_t v_enabled_4996_; lean_object* v_assignment_4997_; lean_object* v_lazyAssignment_4998_; lean_object* v_trees_4999_; lean_object* v___x_5001_; uint8_t v_isShared_5002_; uint8_t v_isSharedCheck_5013_; 
v_enabled_4996_ = lean_ctor_get_uint8(v_infoState_4980_, sizeof(void*)*3);
v_assignment_4997_ = lean_ctor_get(v_infoState_4980_, 0);
v_lazyAssignment_4998_ = lean_ctor_get(v_infoState_4980_, 1);
v_trees_4999_ = lean_ctor_get(v_infoState_4980_, 2);
v_isSharedCheck_5013_ = !lean_is_exclusive(v_infoState_4980_);
if (v_isSharedCheck_5013_ == 0)
{
v___x_5001_ = v_infoState_4980_;
v_isShared_5002_ = v_isSharedCheck_5013_;
goto v_resetjp_5000_;
}
else
{
lean_inc(v_trees_4999_);
lean_inc(v_lazyAssignment_4998_);
lean_inc(v_assignment_4997_);
lean_dec(v_infoState_4980_);
v___x_5001_ = lean_box(0);
v_isShared_5002_ = v_isSharedCheck_5013_;
goto v_resetjp_5000_;
}
v_resetjp_5000_:
{
lean_object* v___x_5003_; lean_object* v___x_5004_; lean_object* v___x_5006_; 
v___x_5003_ = lean_box(0);
v___x_5004_ = l_Lean_PersistentArray_push___redArg(v_trees_4999_, v_t_4971_);
if (v_isShared_5002_ == 0)
{
lean_ctor_set(v___x_5001_, 2, v___x_5004_);
v___x_5006_ = v___x_5001_;
goto v_reusejp_5005_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v_assignment_4997_);
lean_ctor_set(v_reuseFailAlloc_5012_, 1, v_lazyAssignment_4998_);
lean_ctor_set(v_reuseFailAlloc_5012_, 2, v___x_5004_);
lean_ctor_set_uint8(v_reuseFailAlloc_5012_, sizeof(void*)*3, v_enabled_4996_);
v___x_5006_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5005_;
}
v_reusejp_5005_:
{
lean_object* v___x_5008_; 
if (v_isShared_4995_ == 0)
{
lean_ctor_set(v___x_4994_, 8, v___x_5006_);
v___x_5008_ = v___x_4994_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5011_; 
v_reuseFailAlloc_5011_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_5011_, 0, v_env_4981_);
lean_ctor_set(v_reuseFailAlloc_5011_, 1, v_messages_4982_);
lean_ctor_set(v_reuseFailAlloc_5011_, 2, v_scopes_4983_);
lean_ctor_set(v_reuseFailAlloc_5011_, 3, v_usedQuotCtxts_4984_);
lean_ctor_set(v_reuseFailAlloc_5011_, 4, v_nextMacroScope_4985_);
lean_ctor_set(v_reuseFailAlloc_5011_, 5, v_maxRecDepth_4986_);
lean_ctor_set(v_reuseFailAlloc_5011_, 6, v_ngen_4987_);
lean_ctor_set(v_reuseFailAlloc_5011_, 7, v_auxDeclNGen_4988_);
lean_ctor_set(v_reuseFailAlloc_5011_, 8, v___x_5006_);
lean_ctor_set(v_reuseFailAlloc_5011_, 9, v_traceState_4989_);
lean_ctor_set(v_reuseFailAlloc_5011_, 10, v_snapshotTasks_4990_);
lean_ctor_set(v_reuseFailAlloc_5011_, 11, v_prevLinterStates_4991_);
lean_ctor_set(v_reuseFailAlloc_5011_, 12, v_codeQualityEntryTasks_4992_);
v___x_5008_ = v_reuseFailAlloc_5011_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
lean_object* v___x_5009_; lean_object* v___x_5010_; 
v___x_5009_ = lean_st_ref_put(v___y_4972_, v___x_5008_);
v___x_5010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5010_, 0, v___x_5003_);
return v___x_5010_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___redArg___boxed(lean_object* v_t_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_){
_start:
{
lean_object* v_res_5018_; 
v_res_5018_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___redArg(v_t_5015_, v___y_5016_);
lean_dec(v___y_5016_);
return v_res_5018_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; 
v___x_5019_ = lean_unsigned_to_nat(32u);
v___x_5020_ = lean_mk_empty_array_with_capacity(v___x_5019_);
v___x_5021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5021_, 0, v___x_5020_);
return v___x_5021_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__1(void){
_start:
{
size_t v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; 
v___x_5022_ = ((size_t)5ULL);
v___x_5023_ = lean_unsigned_to_nat(0u);
v___x_5024_ = lean_unsigned_to_nat(32u);
v___x_5025_ = lean_mk_empty_array_with_capacity(v___x_5024_);
v___x_5026_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__0);
v___x_5027_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5027_, 0, v___x_5026_);
lean_ctor_set(v___x_5027_, 1, v___x_5025_);
lean_ctor_set(v___x_5027_, 2, v___x_5023_);
lean_ctor_set(v___x_5027_, 3, v___x_5023_);
lean_ctor_set_usize(v___x_5027_, 4, v___x_5022_);
return v___x_5027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2(lean_object* v_t_5028_, lean_object* v___y_5029_, lean_object* v___y_5030_){
_start:
{
lean_object* v___x_5032_; lean_object* v_infoState_5033_; uint8_t v_enabled_5034_; 
v___x_5032_ = lean_st_ref_get(v___y_5030_);
v_infoState_5033_ = lean_ctor_get(v___x_5032_, 8);
lean_inc_ref(v_infoState_5033_);
lean_dec(v___x_5032_);
v_enabled_5034_ = lean_ctor_get_uint8(v_infoState_5033_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5033_);
if (v_enabled_5034_ == 0)
{
lean_object* v___x_5035_; lean_object* v___x_5036_; 
lean_dec_ref(v_t_5028_);
v___x_5035_ = lean_box(0);
v___x_5036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5036_, 0, v___x_5035_);
return v___x_5036_;
}
else
{
lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; 
v___x_5037_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___closed__1);
v___x_5038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5038_, 0, v_t_5028_);
lean_ctor_set(v___x_5038_, 1, v___x_5037_);
v___x_5039_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___redArg(v___x_5038_, v___y_5030_);
return v___x_5039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2___boxed(lean_object* v_t_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_, lean_object* v___y_5043_){
_start:
{
lean_object* v_res_5044_; 
v_res_5044_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2(v_t_5040_, v___y_5041_, v___y_5042_);
lean_dec(v___y_5042_);
lean_dec_ref(v___y_5041_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___redArg(lean_object* v_msg_5045_, lean_object* v_declHint_5046_, lean_object* v___y_5047_){
_start:
{
lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v_env_5051_; uint8_t v___x_5052_; 
v___x_5049_ = lean_box(0);
v___x_5050_ = lean_st_ref_get(v___y_5047_);
v_env_5051_ = lean_ctor_get(v___x_5050_, 0);
lean_inc_ref(v_env_5051_);
lean_dec(v___x_5050_);
v___x_5052_ = l_Lean_Name_isAnonymous(v_declHint_5046_);
if (v___x_5052_ == 0)
{
uint8_t v_isExporting_5053_; 
v_isExporting_5053_ = lean_ctor_get_uint8(v_env_5051_, sizeof(void*)*8);
if (v_isExporting_5053_ == 0)
{
lean_object* v___x_5054_; 
lean_dec_ref(v_env_5051_);
lean_dec(v_declHint_5046_);
v___x_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5054_, 0, v_msg_5045_);
return v___x_5054_;
}
else
{
lean_object* v___x_5055_; uint8_t v___x_5056_; 
lean_inc_ref(v_env_5051_);
v___x_5055_ = l_Lean_Environment_setExporting(v_env_5051_, v___x_5052_);
lean_inc(v_declHint_5046_);
lean_inc_ref(v___x_5055_);
v___x_5056_ = l_Lean_Environment_contains(v___x_5055_, v_declHint_5046_, v_isExporting_5053_);
if (v___x_5056_ == 0)
{
lean_object* v___x_5057_; 
lean_dec_ref(v___x_5055_);
lean_dec_ref(v_env_5051_);
lean_dec(v_declHint_5046_);
v___x_5057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5057_, 0, v_msg_5045_);
return v___x_5057_;
}
else
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; lean_object* v___x_5062_; lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v_c_5065_; lean_object* v___x_5066_; 
v___x_5058_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_5059_ = lean_unsigned_to_nat(32u);
v___x_5060_ = lean_mk_empty_array_with_capacity(v___x_5059_);
lean_dec_ref(v___x_5060_);
v___x_5061_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__4);
v___x_5062_ = l_Lean_Options_empty;
v___x_5063_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5063_, 0, v___x_5055_);
lean_ctor_set(v___x_5063_, 1, v___x_5058_);
lean_ctor_set(v___x_5063_, 2, v___x_5061_);
lean_ctor_set(v___x_5063_, 3, v___x_5062_);
lean_inc(v_declHint_5046_);
v___x_5064_ = l_Lean_MessageData_ofConstName(v_declHint_5046_, v___x_5052_);
v_c_5065_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_5065_, 0, v___x_5063_);
lean_ctor_set(v_c_5065_, 1, v___x_5064_);
v___x_5066_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_5051_, v_declHint_5046_);
if (lean_obj_tag(v___x_5066_) == 0)
{
lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; 
lean_dec_ref(v_env_5051_);
lean_dec(v_declHint_5046_);
v___x_5067_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1);
v___x_5068_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5068_, 0, v___x_5067_);
lean_ctor_set(v___x_5068_, 1, v_c_5065_);
v___x_5069_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__3);
v___x_5070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5070_, 0, v___x_5068_);
lean_ctor_set(v___x_5070_, 1, v___x_5069_);
v___x_5071_ = l_Lean_MessageData_note(v___x_5070_);
v___x_5072_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5072_, 0, v_msg_5045_);
lean_ctor_set(v___x_5072_, 1, v___x_5071_);
v___x_5073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5073_, 0, v___x_5072_);
return v___x_5073_;
}
else
{
lean_object* v_val_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5108_; 
v_val_5074_ = lean_ctor_get(v___x_5066_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v___x_5066_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5076_ = v___x_5066_;
v_isShared_5077_ = v_isSharedCheck_5108_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_val_5074_);
lean_dec(v___x_5066_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5108_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v_mod_5080_; uint8_t v___x_5081_; 
v___x_5078_ = l_Lean_Environment_header(v_env_5051_);
lean_dec_ref(v_env_5051_);
v___x_5079_ = l_Lean_EnvironmentHeader_moduleNames(v___x_5078_);
v_mod_5080_ = lean_array_get(v___x_5049_, v___x_5079_, v_val_5074_);
lean_dec(v_val_5074_);
lean_dec_ref(v___x_5079_);
v___x_5081_ = l_Lean_isPrivateName(v_declHint_5046_);
lean_dec(v_declHint_5046_);
if (v___x_5081_ == 0)
{
lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5093_; 
v___x_5082_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__5);
v___x_5083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5082_);
lean_ctor_set(v___x_5083_, 1, v_c_5065_);
v___x_5084_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__7);
v___x_5085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5083_);
lean_ctor_set(v___x_5085_, 1, v___x_5084_);
v___x_5086_ = l_Lean_MessageData_ofName(v_mod_5080_);
v___x_5087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5087_, 0, v___x_5085_);
lean_ctor_set(v___x_5087_, 1, v___x_5086_);
v___x_5088_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__9);
v___x_5089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5089_, 0, v___x_5087_);
lean_ctor_set(v___x_5089_, 1, v___x_5088_);
v___x_5090_ = l_Lean_MessageData_note(v___x_5089_);
v___x_5091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5091_, 0, v_msg_5045_);
lean_ctor_set(v___x_5091_, 1, v___x_5090_);
if (v_isShared_5077_ == 0)
{
lean_ctor_set_tag(v___x_5076_, 0);
lean_ctor_set(v___x_5076_, 0, v___x_5091_);
v___x_5093_ = v___x_5076_;
goto v_reusejp_5092_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v___x_5091_);
v___x_5093_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5092_;
}
v_reusejp_5092_:
{
return v___x_5093_;
}
}
else
{
lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5106_; 
v___x_5095_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__1);
v___x_5096_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5096_, 0, v___x_5095_);
lean_ctor_set(v___x_5096_, 1, v_c_5065_);
v___x_5097_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__11);
v___x_5098_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5098_, 0, v___x_5096_);
lean_ctor_set(v___x_5098_, 1, v___x_5097_);
v___x_5099_ = l_Lean_MessageData_ofName(v_mod_5080_);
v___x_5100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5100_, 0, v___x_5098_);
lean_ctor_set(v___x_5100_, 1, v___x_5099_);
v___x_5101_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg___closed__13);
v___x_5102_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5102_, 0, v___x_5100_);
lean_ctor_set(v___x_5102_, 1, v___x_5101_);
v___x_5103_ = l_Lean_MessageData_note(v___x_5102_);
v___x_5104_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5104_, 0, v_msg_5045_);
lean_ctor_set(v___x_5104_, 1, v___x_5103_);
if (v_isShared_5077_ == 0)
{
lean_ctor_set_tag(v___x_5076_, 0);
lean_ctor_set(v___x_5076_, 0, v___x_5104_);
v___x_5106_ = v___x_5076_;
goto v_reusejp_5105_;
}
else
{
lean_object* v_reuseFailAlloc_5107_; 
v_reuseFailAlloc_5107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5107_, 0, v___x_5104_);
v___x_5106_ = v_reuseFailAlloc_5107_;
goto v_reusejp_5105_;
}
v_reusejp_5105_:
{
return v___x_5106_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5109_; 
lean_dec_ref(v_env_5051_);
lean_dec(v_declHint_5046_);
v___x_5109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5109_, 0, v_msg_5045_);
return v___x_5109_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___redArg___boxed(lean_object* v_msg_5110_, lean_object* v_declHint_5111_, lean_object* v___y_5112_, lean_object* v___y_5113_){
_start:
{
lean_object* v_res_5114_; 
v_res_5114_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___redArg(v_msg_5110_, v_declHint_5111_, v___y_5112_);
lean_dec(v___y_5112_);
return v_res_5114_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33(lean_object* v_msg_5115_, lean_object* v_declHint_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_){
_start:
{
lean_object* v___x_5120_; lean_object* v_a_5121_; lean_object* v___x_5123_; uint8_t v_isShared_5124_; uint8_t v_isSharedCheck_5130_; 
v___x_5120_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___redArg(v_msg_5115_, v_declHint_5116_, v___y_5118_);
v_a_5121_ = lean_ctor_get(v___x_5120_, 0);
v_isSharedCheck_5130_ = !lean_is_exclusive(v___x_5120_);
if (v_isSharedCheck_5130_ == 0)
{
v___x_5123_ = v___x_5120_;
v_isShared_5124_ = v_isSharedCheck_5130_;
goto v_resetjp_5122_;
}
else
{
lean_inc(v_a_5121_);
lean_dec(v___x_5120_);
v___x_5123_ = lean_box(0);
v_isShared_5124_ = v_isSharedCheck_5130_;
goto v_resetjp_5122_;
}
v_resetjp_5122_:
{
lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5128_; 
v___x_5125_ = l_Lean_unknownIdentifierMessageTag;
v___x_5126_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_5126_, 0, v___x_5125_);
lean_ctor_set(v___x_5126_, 1, v_a_5121_);
if (v_isShared_5124_ == 0)
{
lean_ctor_set(v___x_5123_, 0, v___x_5126_);
v___x_5128_ = v___x_5123_;
goto v_reusejp_5127_;
}
else
{
lean_object* v_reuseFailAlloc_5129_; 
v_reuseFailAlloc_5129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5129_, 0, v___x_5126_);
v___x_5128_ = v_reuseFailAlloc_5129_;
goto v_reusejp_5127_;
}
v_reusejp_5127_:
{
return v___x_5128_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33___boxed(lean_object* v_msg_5131_, lean_object* v_declHint_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_){
_start:
{
lean_object* v_res_5136_; 
v_res_5136_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33(v_msg_5131_, v_declHint_5132_, v___y_5133_, v___y_5134_);
lean_dec(v___y_5134_);
lean_dec_ref(v___y_5133_);
return v_res_5136_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___redArg(lean_object* v_ref_5137_, lean_object* v_msg_5138_, lean_object* v_declHint_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_){
_start:
{
lean_object* v___x_5143_; lean_object* v_a_5144_; lean_object* v___x_5145_; 
v___x_5143_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33(v_msg_5138_, v_declHint_5139_, v___y_5140_, v___y_5141_);
v_a_5144_ = lean_ctor_get(v___x_5143_, 0);
lean_inc(v_a_5144_);
lean_dec_ref(v___x_5143_);
v___x_5145_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v_ref_5137_, v_a_5144_, v___y_5140_, v___y_5141_);
return v___x_5145_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___redArg___boxed(lean_object* v_ref_5146_, lean_object* v_msg_5147_, lean_object* v_declHint_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_){
_start:
{
lean_object* v_res_5152_; 
v_res_5152_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___redArg(v_ref_5146_, v_msg_5147_, v_declHint_5148_, v___y_5149_, v___y_5150_);
lean_dec(v___y_5150_);
lean_dec_ref(v___y_5149_);
lean_dec(v_ref_5146_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___redArg(lean_object* v_ref_5153_, lean_object* v_constName_5154_, lean_object* v___y_5155_, lean_object* v___y_5156_){
_start:
{
lean_object* v___x_5158_; uint8_t v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___x_5164_; 
v___x_5158_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg___closed__1);
v___x_5159_ = 0;
lean_inc(v_constName_5154_);
v___x_5160_ = l_Lean_MessageData_ofConstName(v_constName_5154_, v___x_5159_);
v___x_5161_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5161_, 0, v___x_5158_);
lean_ctor_set(v___x_5161_, 1, v___x_5160_);
v___x_5162_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5);
v___x_5163_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5163_, 0, v___x_5161_);
lean_ctor_set(v___x_5163_, 1, v___x_5162_);
v___x_5164_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___redArg(v_ref_5153_, v___x_5163_, v_constName_5154_, v___y_5155_, v___y_5156_);
return v___x_5164_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___redArg___boxed(lean_object* v_ref_5165_, lean_object* v_constName_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_){
_start:
{
lean_object* v_res_5170_; 
v_res_5170_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___redArg(v_ref_5165_, v_constName_5166_, v___y_5167_, v___y_5168_);
lean_dec(v___y_5168_);
lean_dec_ref(v___y_5167_);
lean_dec(v_ref_5165_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___redArg(lean_object* v_constName_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_){
_start:
{
lean_object* v___x_5175_; 
v___x_5175_ = l_Lean_Elab_Command_getRef___redArg(v___y_5172_);
if (lean_obj_tag(v___x_5175_) == 0)
{
lean_object* v_a_5176_; lean_object* v___x_5177_; 
v_a_5176_ = lean_ctor_get(v___x_5175_, 0);
lean_inc(v_a_5176_);
lean_dec_ref_known(v___x_5175_, 1);
v___x_5177_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___redArg(v_a_5176_, v_constName_5171_, v___y_5172_, v___y_5173_);
lean_dec(v_a_5176_);
return v___x_5177_;
}
else
{
lean_object* v_a_5178_; lean_object* v___x_5180_; uint8_t v_isShared_5181_; uint8_t v_isSharedCheck_5185_; 
lean_dec(v_constName_5171_);
v_a_5178_ = lean_ctor_get(v___x_5175_, 0);
v_isSharedCheck_5185_ = !lean_is_exclusive(v___x_5175_);
if (v_isSharedCheck_5185_ == 0)
{
v___x_5180_ = v___x_5175_;
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
else
{
lean_inc(v_a_5178_);
lean_dec(v___x_5175_);
v___x_5180_ = lean_box(0);
v_isShared_5181_ = v_isSharedCheck_5185_;
goto v_resetjp_5179_;
}
v_resetjp_5179_:
{
lean_object* v___x_5183_; 
if (v_isShared_5181_ == 0)
{
v___x_5183_ = v___x_5180_;
goto v_reusejp_5182_;
}
else
{
lean_object* v_reuseFailAlloc_5184_; 
v_reuseFailAlloc_5184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5184_, 0, v_a_5178_);
v___x_5183_ = v_reuseFailAlloc_5184_;
goto v_reusejp_5182_;
}
v_reusejp_5182_:
{
return v___x_5183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___redArg___boxed(lean_object* v_constName_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_){
_start:
{
lean_object* v_res_5190_; 
v_res_5190_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___redArg(v_constName_5186_, v___y_5187_, v___y_5188_);
lean_dec(v___y_5188_);
lean_dec_ref(v___y_5187_);
return v_res_5190_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4(lean_object* v_constName_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_){
_start:
{
lean_object* v___x_5195_; lean_object* v_env_5196_; uint8_t v___x_5197_; lean_object* v___x_5198_; 
v___x_5195_ = lean_st_ref_get(v___y_5193_);
v_env_5196_ = lean_ctor_get(v___x_5195_, 0);
lean_inc_ref(v_env_5196_);
lean_dec(v___x_5195_);
v___x_5197_ = 0;
lean_inc(v_constName_5191_);
v___x_5198_ = l_Lean_Environment_findConstVal_x3f(v_env_5196_, v_constName_5191_, v___x_5197_);
if (lean_obj_tag(v___x_5198_) == 0)
{
lean_object* v___x_5199_; 
v___x_5199_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___redArg(v_constName_5191_, v___y_5192_, v___y_5193_);
return v___x_5199_;
}
else
{
lean_object* v_val_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5207_; 
lean_dec(v_constName_5191_);
v_val_5200_ = lean_ctor_get(v___x_5198_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v___x_5198_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5202_ = v___x_5198_;
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_val_5200_);
lean_dec(v___x_5198_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5205_; 
if (v_isShared_5203_ == 0)
{
lean_ctor_set_tag(v___x_5202_, 0);
v___x_5205_ = v___x_5202_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_val_5200_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4___boxed(lean_object* v_constName_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_){
_start:
{
lean_object* v_res_5212_; 
v_res_5212_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4(v_constName_5208_, v___y_5209_, v___y_5210_);
lean_dec(v___y_5210_);
lean_dec_ref(v___y_5209_);
return v_res_5212_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1(lean_object* v_constName_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_){
_start:
{
lean_object* v___x_5217_; 
lean_inc(v_constName_5213_);
v___x_5217_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4(v_constName_5213_, v___y_5214_, v___y_5215_);
if (lean_obj_tag(v___x_5217_) == 0)
{
lean_object* v_a_5218_; lean_object* v___x_5220_; uint8_t v_isShared_5221_; uint8_t v_isSharedCheck_5229_; 
v_a_5218_ = lean_ctor_get(v___x_5217_, 0);
v_isSharedCheck_5229_ = !lean_is_exclusive(v___x_5217_);
if (v_isSharedCheck_5229_ == 0)
{
v___x_5220_ = v___x_5217_;
v_isShared_5221_ = v_isSharedCheck_5229_;
goto v_resetjp_5219_;
}
else
{
lean_inc(v_a_5218_);
lean_dec(v___x_5217_);
v___x_5220_ = lean_box(0);
v_isShared_5221_ = v_isSharedCheck_5229_;
goto v_resetjp_5219_;
}
v_resetjp_5219_:
{
lean_object* v_levelParams_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5227_; 
v_levelParams_5222_ = lean_ctor_get(v_a_5218_, 1);
lean_inc(v_levelParams_5222_);
lean_dec(v_a_5218_);
v___x_5223_ = lean_box(0);
v___x_5224_ = l_List_mapTR_loop___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__2(v_levelParams_5222_, v___x_5223_);
v___x_5225_ = l_Lean_mkConst(v_constName_5213_, v___x_5224_);
if (v_isShared_5221_ == 0)
{
lean_ctor_set(v___x_5220_, 0, v___x_5225_);
v___x_5227_ = v___x_5220_;
goto v_reusejp_5226_;
}
else
{
lean_object* v_reuseFailAlloc_5228_; 
v_reuseFailAlloc_5228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5228_, 0, v___x_5225_);
v___x_5227_ = v_reuseFailAlloc_5228_;
goto v_reusejp_5226_;
}
v_reusejp_5226_:
{
return v___x_5227_;
}
}
}
else
{
lean_object* v_a_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5237_; 
lean_dec(v_constName_5213_);
v_a_5230_ = lean_ctor_get(v___x_5217_, 0);
v_isSharedCheck_5237_ = !lean_is_exclusive(v___x_5217_);
if (v_isSharedCheck_5237_ == 0)
{
v___x_5232_ = v___x_5217_;
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
else
{
lean_inc(v_a_5230_);
lean_dec(v___x_5217_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5237_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
lean_object* v___x_5235_; 
if (v_isShared_5233_ == 0)
{
v___x_5235_ = v___x_5232_;
goto v_reusejp_5234_;
}
else
{
lean_object* v_reuseFailAlloc_5236_; 
v_reuseFailAlloc_5236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5236_, 0, v_a_5230_);
v___x_5235_ = v_reuseFailAlloc_5236_;
goto v_reusejp_5234_;
}
v_reusejp_5234_:
{
return v___x_5235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1___boxed(lean_object* v_constName_5238_, lean_object* v___y_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_){
_start:
{
lean_object* v_res_5242_; 
v_res_5242_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1(v_constName_5238_, v___y_5239_, v___y_5240_);
lean_dec(v___y_5240_);
lean_dec_ref(v___y_5239_);
return v_res_5242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__5(lean_object* v_stx_5243_, lean_object* v_n_5244_, lean_object* v_expectedType_x3f_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_){
_start:
{
lean_object* v___x_5249_; 
v___x_5249_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1(v_n_5244_, v___y_5246_, v___y_5247_);
if (lean_obj_tag(v___x_5249_) == 0)
{
lean_object* v_a_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; uint8_t v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; 
v_a_5250_ = lean_ctor_get(v___x_5249_, 0);
lean_inc(v_a_5250_);
lean_dec_ref_known(v___x_5249_, 1);
v___x_5251_ = lean_box(0);
v___x_5252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5252_, 0, v___x_5251_);
lean_ctor_set(v___x_5252_, 1, v_stx_5243_);
v___x_5253_ = l_Lean_LocalContext_empty;
v___x_5254_ = 0;
v___x_5255_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_5255_, 0, v___x_5252_);
lean_ctor_set(v___x_5255_, 1, v___x_5253_);
lean_ctor_set(v___x_5255_, 2, v_expectedType_x3f_5245_);
lean_ctor_set(v___x_5255_, 3, v_a_5250_);
lean_ctor_set_uint8(v___x_5255_, sizeof(void*)*4, v___x_5254_);
lean_ctor_set_uint8(v___x_5255_, sizeof(void*)*4 + 1, v___x_5254_);
v___x_5256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5256_, 0, v___x_5255_);
v___x_5257_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2(v___x_5256_, v___y_5246_, v___y_5247_);
return v___x_5257_;
}
else
{
lean_object* v_a_5258_; lean_object* v___x_5260_; uint8_t v_isShared_5261_; uint8_t v_isSharedCheck_5265_; 
lean_dec(v_expectedType_x3f_5245_);
lean_dec(v_stx_5243_);
v_a_5258_ = lean_ctor_get(v___x_5249_, 0);
v_isSharedCheck_5265_ = !lean_is_exclusive(v___x_5249_);
if (v_isSharedCheck_5265_ == 0)
{
v___x_5260_ = v___x_5249_;
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
else
{
lean_inc(v_a_5258_);
lean_dec(v___x_5249_);
v___x_5260_ = lean_box(0);
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
v_resetjp_5259_:
{
lean_object* v___x_5263_; 
if (v_isShared_5261_ == 0)
{
v___x_5263_ = v___x_5260_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5264_; 
v_reuseFailAlloc_5264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5264_, 0, v_a_5258_);
v___x_5263_ = v_reuseFailAlloc_5264_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
return v___x_5263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__5___boxed(lean_object* v_stx_5266_, lean_object* v_n_5267_, lean_object* v_expectedType_x3f_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_){
_start:
{
lean_object* v_res_5272_; 
v_res_5272_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__5(v_stx_5266_, v_n_5267_, v_expectedType_x3f_5268_, v___y_5269_, v___y_5270_);
lean_dec(v___y_5270_);
lean_dec_ref(v___y_5269_);
return v_res_5272_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg(lean_object* v_env_5273_, lean_object* v___y_5274_){
_start:
{
lean_object* v___x_5276_; lean_object* v_messages_5277_; lean_object* v_scopes_5278_; lean_object* v_usedQuotCtxts_5279_; lean_object* v_nextMacroScope_5280_; lean_object* v_maxRecDepth_5281_; lean_object* v_ngen_5282_; lean_object* v_auxDeclNGen_5283_; lean_object* v_infoState_5284_; lean_object* v_traceState_5285_; lean_object* v_snapshotTasks_5286_; lean_object* v_prevLinterStates_5287_; lean_object* v_codeQualityEntryTasks_5288_; lean_object* v___x_5290_; uint8_t v_isShared_5291_; uint8_t v_isSharedCheck_5298_; 
v___x_5276_ = lean_st_ref_take(v___y_5274_);
v_messages_5277_ = lean_ctor_get(v___x_5276_, 1);
v_scopes_5278_ = lean_ctor_get(v___x_5276_, 2);
v_usedQuotCtxts_5279_ = lean_ctor_get(v___x_5276_, 3);
v_nextMacroScope_5280_ = lean_ctor_get(v___x_5276_, 4);
v_maxRecDepth_5281_ = lean_ctor_get(v___x_5276_, 5);
v_ngen_5282_ = lean_ctor_get(v___x_5276_, 6);
v_auxDeclNGen_5283_ = lean_ctor_get(v___x_5276_, 7);
v_infoState_5284_ = lean_ctor_get(v___x_5276_, 8);
v_traceState_5285_ = lean_ctor_get(v___x_5276_, 9);
v_snapshotTasks_5286_ = lean_ctor_get(v___x_5276_, 10);
v_prevLinterStates_5287_ = lean_ctor_get(v___x_5276_, 11);
v_codeQualityEntryTasks_5288_ = lean_ctor_get(v___x_5276_, 12);
v_isSharedCheck_5298_ = !lean_is_exclusive(v___x_5276_);
if (v_isSharedCheck_5298_ == 0)
{
lean_object* v_unused_5299_; 
v_unused_5299_ = lean_ctor_get(v___x_5276_, 0);
lean_dec(v_unused_5299_);
v___x_5290_ = v___x_5276_;
v_isShared_5291_ = v_isSharedCheck_5298_;
goto v_resetjp_5289_;
}
else
{
lean_inc(v_codeQualityEntryTasks_5288_);
lean_inc(v_prevLinterStates_5287_);
lean_inc(v_snapshotTasks_5286_);
lean_inc(v_traceState_5285_);
lean_inc(v_infoState_5284_);
lean_inc(v_auxDeclNGen_5283_);
lean_inc(v_ngen_5282_);
lean_inc(v_maxRecDepth_5281_);
lean_inc(v_nextMacroScope_5280_);
lean_inc(v_usedQuotCtxts_5279_);
lean_inc(v_scopes_5278_);
lean_inc(v_messages_5277_);
lean_dec(v___x_5276_);
v___x_5290_ = lean_box(0);
v_isShared_5291_ = v_isSharedCheck_5298_;
goto v_resetjp_5289_;
}
v_resetjp_5289_:
{
lean_object* v___x_5292_; lean_object* v___x_5294_; 
v___x_5292_ = lean_box(0);
if (v_isShared_5291_ == 0)
{
lean_ctor_set(v___x_5290_, 0, v_env_5273_);
v___x_5294_ = v___x_5290_;
goto v_reusejp_5293_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v_env_5273_);
lean_ctor_set(v_reuseFailAlloc_5297_, 1, v_messages_5277_);
lean_ctor_set(v_reuseFailAlloc_5297_, 2, v_scopes_5278_);
lean_ctor_set(v_reuseFailAlloc_5297_, 3, v_usedQuotCtxts_5279_);
lean_ctor_set(v_reuseFailAlloc_5297_, 4, v_nextMacroScope_5280_);
lean_ctor_set(v_reuseFailAlloc_5297_, 5, v_maxRecDepth_5281_);
lean_ctor_set(v_reuseFailAlloc_5297_, 6, v_ngen_5282_);
lean_ctor_set(v_reuseFailAlloc_5297_, 7, v_auxDeclNGen_5283_);
lean_ctor_set(v_reuseFailAlloc_5297_, 8, v_infoState_5284_);
lean_ctor_set(v_reuseFailAlloc_5297_, 9, v_traceState_5285_);
lean_ctor_set(v_reuseFailAlloc_5297_, 10, v_snapshotTasks_5286_);
lean_ctor_set(v_reuseFailAlloc_5297_, 11, v_prevLinterStates_5287_);
lean_ctor_set(v_reuseFailAlloc_5297_, 12, v_codeQualityEntryTasks_5288_);
v___x_5294_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5293_;
}
v_reusejp_5293_:
{
lean_object* v___x_5295_; lean_object* v___x_5296_; 
v___x_5295_ = lean_st_ref_put(v___y_5274_, v___x_5294_);
v___x_5296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5296_, 0, v___x_5292_);
return v___x_5296_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_env_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_){
_start:
{
lean_object* v_res_5303_; 
v_res_5303_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg(v_env_5300_, v___y_5301_);
lean_dec(v___y_5301_);
return v_res_5303_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg(lean_object* v_env_5304_, lean_object* v_x_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_){
_start:
{
lean_object* v___x_5309_; lean_object* v_env_5310_; lean_object* v_a_5312_; lean_object* v___x_5322_; lean_object* v___x_5323_; 
v___x_5309_ = lean_st_ref_get(v___y_5307_);
v_env_5310_ = lean_ctor_get(v___x_5309_, 0);
lean_inc_ref(v_env_5310_);
lean_dec(v___x_5309_);
v___x_5322_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg(v_env_5304_, v___y_5307_);
lean_dec_ref(v___x_5322_);
lean_inc(v___y_5307_);
lean_inc_ref(v___y_5306_);
v___x_5323_ = lean_apply_3(v_x_5305_, v___y_5306_, v___y_5307_, lean_box(0));
if (lean_obj_tag(v___x_5323_) == 0)
{
lean_object* v_a_5324_; lean_object* v___x_5325_; lean_object* v___x_5327_; uint8_t v_isShared_5328_; uint8_t v_isSharedCheck_5332_; 
v_a_5324_ = lean_ctor_get(v___x_5323_, 0);
lean_inc(v_a_5324_);
lean_dec_ref_known(v___x_5323_, 1);
v___x_5325_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg(v_env_5310_, v___y_5307_);
v_isSharedCheck_5332_ = !lean_is_exclusive(v___x_5325_);
if (v_isSharedCheck_5332_ == 0)
{
lean_object* v_unused_5333_; 
v_unused_5333_ = lean_ctor_get(v___x_5325_, 0);
lean_dec(v_unused_5333_);
v___x_5327_ = v___x_5325_;
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
else
{
lean_dec(v___x_5325_);
v___x_5327_ = lean_box(0);
v_isShared_5328_ = v_isSharedCheck_5332_;
goto v_resetjp_5326_;
}
v_resetjp_5326_:
{
lean_object* v___x_5330_; 
if (v_isShared_5328_ == 0)
{
lean_ctor_set(v___x_5327_, 0, v_a_5324_);
v___x_5330_ = v___x_5327_;
goto v_reusejp_5329_;
}
else
{
lean_object* v_reuseFailAlloc_5331_; 
v_reuseFailAlloc_5331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5331_, 0, v_a_5324_);
v___x_5330_ = v_reuseFailAlloc_5331_;
goto v_reusejp_5329_;
}
v_reusejp_5329_:
{
return v___x_5330_;
}
}
}
else
{
lean_object* v_a_5334_; 
v_a_5334_ = lean_ctor_get(v___x_5323_, 0);
lean_inc(v_a_5334_);
lean_dec_ref_known(v___x_5323_, 1);
v_a_5312_ = v_a_5334_;
goto v___jp_5311_;
}
v___jp_5311_:
{
lean_object* v___x_5313_; lean_object* v___x_5315_; uint8_t v_isShared_5316_; uint8_t v_isSharedCheck_5320_; 
v___x_5313_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg(v_env_5310_, v___y_5307_);
v_isSharedCheck_5320_ = !lean_is_exclusive(v___x_5313_);
if (v_isSharedCheck_5320_ == 0)
{
lean_object* v_unused_5321_; 
v_unused_5321_ = lean_ctor_get(v___x_5313_, 0);
lean_dec(v_unused_5321_);
v___x_5315_ = v___x_5313_;
v_isShared_5316_ = v_isSharedCheck_5320_;
goto v_resetjp_5314_;
}
else
{
lean_dec(v___x_5313_);
v___x_5315_ = lean_box(0);
v_isShared_5316_ = v_isSharedCheck_5320_;
goto v_resetjp_5314_;
}
v_resetjp_5314_:
{
lean_object* v___x_5318_; 
if (v_isShared_5316_ == 0)
{
lean_ctor_set_tag(v___x_5315_, 1);
lean_ctor_set(v___x_5315_, 0, v_a_5312_);
v___x_5318_ = v___x_5315_;
goto v_reusejp_5317_;
}
else
{
lean_object* v_reuseFailAlloc_5319_; 
v_reuseFailAlloc_5319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5319_, 0, v_a_5312_);
v___x_5318_ = v_reuseFailAlloc_5319_;
goto v_reusejp_5317_;
}
v_reusejp_5317_:
{
return v___x_5318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg___boxed(lean_object* v_env_5335_, lean_object* v_x_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_){
_start:
{
lean_object* v_res_5340_; 
v_res_5340_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg(v_env_5335_, v_x_5336_, v___y_5337_, v___y_5338_);
lean_dec(v___y_5338_);
lean_dec_ref(v___y_5337_);
return v_res_5340_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__1(void){
_start:
{
lean_object* v___x_5342_; lean_object* v___x_5343_; 
v___x_5342_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__0));
v___x_5343_ = l_Lean_stringToMessageData(v___x_5342_);
return v___x_5343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3(lean_object* v___f_5344_, lean_object* v_declName_5345_, uint8_t v___x_5346_, lean_object* v_env_5347_, lean_object* v_____do__lift_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_){
_start:
{
uint8_t v___y_5353_; lean_object* v___x_5362_; uint8_t v___x_5363_; 
lean_inc(v_declName_5345_);
v___x_5362_ = l_Lean_privateToUserName(v_declName_5345_);
lean_inc_ref(v_env_5347_);
v___x_5363_ = lean_is_reserved_name(v_env_5347_, v___x_5362_);
if (v___x_5363_ == 0)
{
lean_object* v___x_5364_; uint8_t v___x_5365_; 
lean_inc(v_declName_5345_);
v___x_5364_ = l_Lean_mkPrivateName(v_____do__lift_5348_, v_declName_5345_);
v___x_5365_ = lean_is_reserved_name(v_env_5347_, v___x_5364_);
v___y_5353_ = v___x_5365_;
goto v___jp_5352_;
}
else
{
lean_dec_ref(v_env_5347_);
v___y_5353_ = v___x_5363_;
goto v___jp_5352_;
}
v___jp_5352_:
{
if (v___y_5353_ == 0)
{
lean_object* v___x_5354_; lean_object* v___x_5355_; 
lean_dec(v_declName_5345_);
v___x_5354_ = lean_box(0);
lean_inc(v___y_5350_);
lean_inc_ref(v___y_5349_);
v___x_5355_ = lean_apply_4(v___f_5344_, v___x_5354_, v___y_5349_, v___y_5350_, lean_box(0));
return v___x_5355_;
}
else
{
lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; 
lean_dec_ref(v___f_5344_);
v___x_5356_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5);
v___x_5357_ = l_Lean_MessageData_ofConstName(v_declName_5345_, v___x_5346_);
v___x_5358_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5358_, 0, v___x_5356_);
lean_ctor_set(v___x_5358_, 1, v___x_5357_);
v___x_5359_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___closed__1);
v___x_5360_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5360_, 0, v___x_5358_);
lean_ctor_set(v___x_5360_, 1, v___x_5359_);
v___x_5361_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v___x_5360_, v___y_5349_, v___y_5350_);
return v___x_5361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___boxed(lean_object* v___f_5366_, lean_object* v_declName_5367_, lean_object* v___x_5368_, lean_object* v_env_5369_, lean_object* v_____do__lift_5370_, lean_object* v___y_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_){
_start:
{
uint8_t v___x_43898__boxed_5374_; lean_object* v_res_5375_; 
v___x_43898__boxed_5374_ = lean_unbox(v___x_5368_);
v_res_5375_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3(v___f_5366_, v_declName_5367_, v___x_43898__boxed_5374_, v_env_5369_, v_____do__lift_5370_, v___y_5371_, v___y_5372_);
lean_dec(v___y_5372_);
lean_dec_ref(v___y_5371_);
lean_dec_ref(v_____do__lift_5370_);
return v_res_5375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__4(lean_object* v___f_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_){
_start:
{
lean_object* v___x_5380_; lean_object* v_env_5381_; lean_object* v___x_5382_; 
v___x_5380_ = lean_st_ref_get(v___y_5378_);
v_env_5381_ = lean_ctor_get(v___x_5380_, 0);
lean_inc_ref(v_env_5381_);
lean_dec(v___x_5380_);
v___x_5382_ = lean_apply_4(v___f_5376_, v_env_5381_, v___y_5377_, v___y_5378_, lean_box(0));
return v___x_5382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__4___boxed(lean_object* v___f_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_){
_start:
{
lean_object* v_res_5387_; 
v_res_5387_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__4(v___f_5383_, v___y_5384_, v___y_5385_);
return v_res_5387_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__1(void){
_start:
{
lean_object* v___x_5389_; lean_object* v___x_5390_; 
v___x_5389_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__0));
v___x_5390_ = l_Lean_stringToMessageData(v___x_5389_);
return v___x_5390_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3(void){
_start:
{
lean_object* v___x_5392_; lean_object* v___x_5393_; 
v___x_5392_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__2));
v___x_5393_ = l_Lean_stringToMessageData(v___x_5392_);
return v___x_5393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2(lean_object* v_env_5394_, lean_object* v_declName_5395_, lean_object* v___f_5396_, lean_object* v_addInfo_5397_, lean_object* v_____r_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_){
_start:
{
lean_object* v___x_5402_; uint8_t v___x_5403_; uint8_t v___x_5404_; 
lean_inc(v_declName_5395_);
v___x_5402_ = l_Lean_mkPrivateName(v_env_5394_, v_declName_5395_);
v___x_5403_ = 1;
lean_inc(v___x_5402_);
v___x_5404_ = l_Lean_Environment_contains(v_env_5394_, v___x_5402_, v___x_5403_);
if (v___x_5404_ == 0)
{
lean_object* v___x_5405_; lean_object* v___x_5406_; 
lean_dec(v___x_5402_);
lean_dec_ref(v_addInfo_5397_);
lean_dec(v_declName_5395_);
v___x_5405_ = lean_box(0);
lean_inc(v___y_5400_);
lean_inc_ref(v___y_5399_);
v___x_5406_ = lean_apply_4(v___f_5396_, v___x_5405_, v___y_5399_, v___y_5400_, lean_box(0));
return v___x_5406_;
}
else
{
lean_object* v___x_5407_; 
lean_dec_ref(v___f_5396_);
lean_inc(v___y_5400_);
lean_inc_ref(v___y_5399_);
v___x_5407_ = lean_apply_4(v_addInfo_5397_, v___x_5402_, v___y_5399_, v___y_5400_, lean_box(0));
if (lean_obj_tag(v___x_5407_) == 0)
{
lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; 
lean_dec_ref_known(v___x_5407_, 1);
v___x_5408_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__1);
v___x_5409_ = l_Lean_MessageData_ofConstName(v_declName_5395_, v___x_5403_);
v___x_5410_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5410_, 0, v___x_5408_);
lean_ctor_set(v___x_5410_, 1, v___x_5409_);
v___x_5411_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3);
v___x_5412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5412_, 0, v___x_5410_);
lean_ctor_set(v___x_5412_, 1, v___x_5411_);
v___x_5413_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v___x_5412_, v___y_5399_, v___y_5400_);
return v___x_5413_;
}
else
{
lean_dec(v_declName_5395_);
return v___x_5407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___boxed(lean_object* v_env_5414_, lean_object* v_declName_5415_, lean_object* v___f_5416_, lean_object* v_addInfo_5417_, lean_object* v_____r_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_){
_start:
{
lean_object* v_res_5422_; 
v_res_5422_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2(v_env_5414_, v_declName_5415_, v___f_5416_, v_addInfo_5417_, v_____r_5418_, v___y_5419_, v___y_5420_);
lean_dec(v___y_5420_);
lean_dec_ref(v___y_5419_);
return v_res_5422_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__1(void){
_start:
{
lean_object* v___x_5424_; lean_object* v___x_5425_; 
v___x_5424_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__0));
v___x_5425_ = l_Lean_stringToMessageData(v___x_5424_);
return v___x_5425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5(lean_object* v_addInfo_5426_, lean_object* v_declName_5427_, uint8_t v___x_5428_, lean_object* v___f_5429_, uint8_t v___x_5430_, lean_object* v_env_5431_, lean_object* v___f_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_){
_start:
{
lean_object* v___x_5436_; 
lean_inc(v___y_5434_);
lean_inc_ref(v___y_5433_);
lean_inc(v_declName_5427_);
v___x_5436_ = lean_apply_4(v_addInfo_5426_, v_declName_5427_, v___y_5433_, v___y_5434_, lean_box(0));
if (lean_obj_tag(v___x_5436_) == 0)
{
lean_object* v___x_5437_; 
lean_dec_ref_known(v___x_5436_, 1);
lean_inc(v_declName_5427_);
v___x_5437_ = l_Lean_privateToUserName_x3f(v_declName_5427_);
if (lean_obj_tag(v___x_5437_) == 0)
{
lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; lean_object* v___x_5442_; lean_object* v___x_5443_; 
v___x_5438_ = lean_obj_once(&l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5, &l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5_once, _init_l_Lean_Elab_ConfigEval_evalExprWithElab___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_elabStructureConfig_evalConfigItem_spec__0___closed__5);
v___x_5439_ = l_Lean_MessageData_ofConstName(v_declName_5427_, v___x_5428_);
v___x_5440_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5440_, 0, v___x_5438_);
lean_ctor_set(v___x_5440_, 1, v___x_5439_);
v___x_5441_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3);
v___x_5442_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5442_, 0, v___x_5440_);
lean_ctor_set(v___x_5442_, 1, v___x_5441_);
v___x_5443_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v___x_5442_, v___y_5433_, v___y_5434_);
lean_dec(v___y_5434_);
lean_dec_ref(v___y_5433_);
return v___x_5443_;
}
else
{
lean_object* v_val_5444_; lean_object* v___x_5445_; lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; 
lean_dec(v_declName_5427_);
v_val_5444_ = lean_ctor_get(v___x_5437_, 0);
lean_inc(v_val_5444_);
lean_dec_ref_known(v___x_5437_, 1);
v___x_5445_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___closed__1);
v___x_5446_ = l_Lean_MessageData_ofConstName(v_val_5444_, v___x_5428_);
v___x_5447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5447_, 0, v___x_5445_);
lean_ctor_set(v___x_5447_, 1, v___x_5446_);
v___x_5448_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3);
v___x_5449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5449_, 0, v___x_5447_);
lean_ctor_set(v___x_5449_, 1, v___x_5448_);
v___x_5450_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v___x_5449_, v___y_5433_, v___y_5434_);
lean_dec(v___y_5434_);
lean_dec_ref(v___y_5433_);
return v___x_5450_;
}
}
else
{
lean_dec(v___y_5434_);
lean_dec_ref(v___y_5433_);
lean_dec(v_declName_5427_);
return v___x_5436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___boxed(lean_object* v_addInfo_5451_, lean_object* v_declName_5452_, lean_object* v___x_5453_, lean_object* v___f_5454_, lean_object* v___x_5455_, lean_object* v_env_5456_, lean_object* v___f_5457_, lean_object* v___y_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_){
_start:
{
uint8_t v___x_44040__boxed_5461_; uint8_t v___x_44042__boxed_5462_; lean_object* v_res_5463_; 
v___x_44040__boxed_5461_ = lean_unbox(v___x_5453_);
v___x_44042__boxed_5462_ = lean_unbox(v___x_5455_);
v_res_5463_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5(v_addInfo_5451_, v_declName_5452_, v___x_44040__boxed_5461_, v___f_5454_, v___x_44042__boxed_5462_, v_env_5456_, v___f_5457_, v___y_5458_, v___y_5459_);
lean_dec_ref(v___f_5457_);
lean_dec_ref(v_env_5456_);
lean_dec_ref(v___f_5454_);
return v_res_5463_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__1(void){
_start:
{
lean_object* v___x_5465_; lean_object* v___x_5466_; 
v___x_5465_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__0));
v___x_5466_ = l_Lean_stringToMessageData(v___x_5465_);
return v___x_5466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1(lean_object* v_declName_5467_, lean_object* v_env_5468_, lean_object* v_addInfo_5469_, lean_object* v_____r_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_){
_start:
{
lean_object* v___x_5474_; 
v___x_5474_ = l_Lean_privateToUserName_x3f(v_declName_5467_);
if (lean_obj_tag(v___x_5474_) == 0)
{
lean_object* v___x_5475_; lean_object* v___x_5476_; 
lean_dec_ref(v_addInfo_5469_);
lean_dec_ref(v_env_5468_);
v___x_5475_ = lean_box(0);
v___x_5476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5476_, 0, v___x_5475_);
return v___x_5476_;
}
else
{
lean_object* v_val_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5494_; 
v_val_5477_ = lean_ctor_get(v___x_5474_, 0);
v_isSharedCheck_5494_ = !lean_is_exclusive(v___x_5474_);
if (v_isSharedCheck_5494_ == 0)
{
v___x_5479_ = v___x_5474_;
v_isShared_5480_ = v_isSharedCheck_5494_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_val_5477_);
lean_dec(v___x_5474_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5494_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
uint8_t v___x_5481_; uint8_t v___x_5482_; 
v___x_5481_ = 1;
lean_inc(v_val_5477_);
v___x_5482_ = l_Lean_Environment_contains(v_env_5468_, v_val_5477_, v___x_5481_);
if (v___x_5482_ == 0)
{
lean_object* v___x_5483_; lean_object* v___x_5485_; 
lean_dec(v_val_5477_);
lean_dec_ref(v_addInfo_5469_);
v___x_5483_ = lean_box(0);
if (v_isShared_5480_ == 0)
{
lean_ctor_set_tag(v___x_5479_, 0);
lean_ctor_set(v___x_5479_, 0, v___x_5483_);
v___x_5485_ = v___x_5479_;
goto v_reusejp_5484_;
}
else
{
lean_object* v_reuseFailAlloc_5486_; 
v_reuseFailAlloc_5486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5486_, 0, v___x_5483_);
v___x_5485_ = v_reuseFailAlloc_5486_;
goto v_reusejp_5484_;
}
v_reusejp_5484_:
{
return v___x_5485_;
}
}
else
{
lean_object* v___x_5487_; 
lean_del_object(v___x_5479_);
lean_inc(v___y_5472_);
lean_inc_ref(v___y_5471_);
lean_inc(v_val_5477_);
v___x_5487_ = lean_apply_4(v_addInfo_5469_, v_val_5477_, v___y_5471_, v___y_5472_, lean_box(0));
if (lean_obj_tag(v___x_5487_) == 0)
{
lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; 
lean_dec_ref_known(v___x_5487_, 1);
v___x_5488_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___closed__1);
v___x_5489_ = l_Lean_MessageData_ofConstName(v_val_5477_, v___x_5481_);
v___x_5490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5490_, 0, v___x_5488_);
lean_ctor_set(v___x_5490_, 1, v___x_5489_);
v___x_5491_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___closed__3);
v___x_5492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5492_, 0, v___x_5490_);
lean_ctor_set(v___x_5492_, 1, v___x_5491_);
v___x_5493_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0___redArg(v___x_5492_, v___y_5471_, v___y_5472_);
return v___x_5493_;
}
else
{
lean_dec(v_val_5477_);
return v___x_5487_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___boxed(lean_object* v_declName_5495_, lean_object* v_env_5496_, lean_object* v_addInfo_5497_, lean_object* v_____r_5498_, lean_object* v___y_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_){
_start:
{
lean_object* v_res_5502_; 
v_res_5502_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1(v_declName_5495_, v_env_5496_, v_addInfo_5497_, v_____r_5498_, v___y_5499_, v___y_5500_);
lean_dec(v___y_5500_);
lean_dec_ref(v___y_5499_);
return v_res_5502_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5503_; lean_object* v___x_5504_; 
v___x_5503_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__9___redArg___closed__0);
v___x_5504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5504_, 0, v___x_5503_);
return v___x_5504_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; 
v___x_5505_ = lean_box(1);
v___x_5506_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_5507_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0);
v___x_5508_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5507_);
lean_ctor_set(v___x_5508_, 1, v___x_5506_);
lean_ctor_set(v___x_5508_, 2, v___x_5505_);
return v___x_5508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0(uint8_t v___x_5509_, lean_object* v_declName_5510_, lean_object* v___y_5511_, lean_object* v___y_5512_){
_start:
{
lean_object* v___x_5514_; 
v___x_5514_ = l_Lean_Elab_Command_getRef___redArg(v___y_5511_);
if (lean_obj_tag(v___x_5514_) == 0)
{
lean_object* v_a_5515_; lean_object* v___x_5516_; 
v_a_5515_ = lean_ctor_get(v___x_5514_, 0);
lean_inc(v_a_5515_);
lean_dec_ref_known(v___x_5514_, 1);
v___x_5516_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1(v_declName_5510_, v___y_5511_, v___y_5512_);
if (lean_obj_tag(v___x_5516_) == 0)
{
lean_object* v_a_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; 
v_a_5517_ = lean_ctor_get(v___x_5516_, 0);
lean_inc(v_a_5517_);
lean_dec_ref_known(v___x_5516_, 1);
v___x_5518_ = lean_box(0);
v___x_5519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5519_, 0, v___x_5518_);
lean_ctor_set(v___x_5519_, 1, v_a_5515_);
v___x_5520_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__1);
v___x_5521_ = lean_box(0);
v___x_5522_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_5522_, 0, v___x_5519_);
lean_ctor_set(v___x_5522_, 1, v___x_5520_);
lean_ctor_set(v___x_5522_, 2, v___x_5521_);
lean_ctor_set(v___x_5522_, 3, v_a_5517_);
lean_ctor_set_uint8(v___x_5522_, sizeof(void*)*4, v___x_5509_);
lean_ctor_set_uint8(v___x_5522_, sizeof(void*)*4 + 1, v___x_5509_);
v___x_5523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5523_, 0, v___x_5522_);
v___x_5524_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2(v___x_5523_, v___y_5511_, v___y_5512_);
return v___x_5524_;
}
else
{
lean_object* v_a_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5532_; 
lean_dec(v_a_5515_);
v_a_5525_ = lean_ctor_get(v___x_5516_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v___x_5516_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5527_ = v___x_5516_;
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_a_5525_);
lean_dec(v___x_5516_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
lean_object* v___x_5530_; 
if (v_isShared_5528_ == 0)
{
v___x_5530_ = v___x_5527_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v_a_5525_);
v___x_5530_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
return v___x_5530_;
}
}
}
}
else
{
lean_object* v_a_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5540_; 
lean_dec(v_declName_5510_);
v_a_5533_ = lean_ctor_get(v___x_5514_, 0);
v_isSharedCheck_5540_ = !lean_is_exclusive(v___x_5514_);
if (v_isSharedCheck_5540_ == 0)
{
v___x_5535_ = v___x_5514_;
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_a_5533_);
lean_dec(v___x_5514_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5540_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5538_; 
if (v_isShared_5536_ == 0)
{
v___x_5538_ = v___x_5535_;
goto v_reusejp_5537_;
}
else
{
lean_object* v_reuseFailAlloc_5539_; 
v_reuseFailAlloc_5539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5539_, 0, v_a_5533_);
v___x_5538_ = v_reuseFailAlloc_5539_;
goto v_reusejp_5537_;
}
v_reusejp_5537_:
{
return v___x_5538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___boxed(lean_object* v___x_5541_, lean_object* v_declName_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_){
_start:
{
uint8_t v___x_44191__boxed_5546_; lean_object* v_res_5547_; 
v___x_44191__boxed_5546_ = lean_unbox(v___x_5541_);
v_res_5547_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0(v___x_44191__boxed_5546_, v_declName_5542_, v___y_5543_, v___y_5544_);
lean_dec(v___y_5544_);
lean_dec_ref(v___y_5543_);
return v_res_5547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1(lean_object* v_declName_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_){
_start:
{
lean_object* v___x_5555_; lean_object* v_env_5556_; uint8_t v___x_5557_; lean_object* v_addInfo_5558_; lean_object* v_env_5559_; lean_object* v___f_5560_; lean_object* v___f_5561_; lean_object* v___x_5562_; lean_object* v___f_5563_; uint8_t v___x_5564_; uint8_t v___x_5565_; 
v___x_5555_ = lean_st_ref_get(v___y_5553_);
v_env_5556_ = lean_ctor_get(v___x_5555_, 0);
lean_inc_ref(v_env_5556_);
lean_dec(v___x_5555_);
v___x_5557_ = 0;
v_addInfo_5558_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___closed__0));
v_env_5559_ = l_Lean_Environment_setExporting(v_env_5556_, v___x_5557_);
lean_inc_ref_n(v_env_5559_, 4);
lean_inc_n(v_declName_5551_, 4);
v___f_5560_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__1___boxed), 7, 3);
lean_closure_set(v___f_5560_, 0, v_declName_5551_);
lean_closure_set(v___f_5560_, 1, v_env_5559_);
lean_closure_set(v___f_5560_, 2, v_addInfo_5558_);
v___f_5561_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__2___boxed), 8, 4);
lean_closure_set(v___f_5561_, 0, v_env_5559_);
lean_closure_set(v___f_5561_, 1, v_declName_5551_);
lean_closure_set(v___f_5561_, 2, v___f_5560_);
lean_closure_set(v___f_5561_, 3, v_addInfo_5558_);
v___x_5562_ = lean_box(v___x_5557_);
lean_inc_ref(v___f_5561_);
v___f_5563_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__3___boxed), 8, 4);
lean_closure_set(v___f_5563_, 0, v___f_5561_);
lean_closure_set(v___f_5563_, 1, v_declName_5551_);
lean_closure_set(v___f_5563_, 2, v___x_5562_);
lean_closure_set(v___f_5563_, 3, v_env_5559_);
v___x_5564_ = 1;
v___x_5565_ = l_Lean_Environment_contains(v_env_5559_, v_declName_5551_, v___x_5564_);
if (v___x_5565_ == 0)
{
lean_object* v___f_5566_; lean_object* v___x_5567_; 
lean_dec_ref(v___f_5561_);
lean_dec(v_declName_5551_);
v___f_5566_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__4___boxed), 4, 1);
lean_closure_set(v___f_5566_, 0, v___f_5563_);
v___x_5567_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg(v_env_5559_, v___f_5566_, v___y_5552_, v___y_5553_);
return v___x_5567_;
}
else
{
lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___f_5570_; lean_object* v___x_5571_; 
v___x_5568_ = lean_box(v___x_5564_);
v___x_5569_ = lean_box(v___x_5557_);
lean_inc_ref(v_env_5559_);
v___f_5570_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__5___boxed), 10, 7);
lean_closure_set(v___f_5570_, 0, v_addInfo_5558_);
lean_closure_set(v___f_5570_, 1, v_declName_5551_);
lean_closure_set(v___f_5570_, 2, v___x_5568_);
lean_closure_set(v___f_5570_, 3, v___f_5561_);
lean_closure_set(v___f_5570_, 4, v___x_5569_);
lean_closure_set(v___f_5570_, 5, v_env_5559_);
lean_closure_set(v___f_5570_, 6, v___f_5563_);
v___x_5571_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg(v_env_5559_, v___f_5570_, v___y_5552_, v___y_5553_);
return v___x_5571_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___boxed(lean_object* v_declName_5572_, lean_object* v___y_5573_, lean_object* v___y_5574_, lean_object* v___y_5575_){
_start:
{
lean_object* v_res_5576_; 
v_res_5576_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1(v_declName_5572_, v___y_5573_, v___y_5574_);
lean_dec(v___y_5574_);
lean_dec_ref(v___y_5573_);
return v_res_5576_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___redArg(lean_object* v___x_5577_, lean_object* v___x_5578_, lean_object* v___x_5579_, lean_object* v___y_5580_, lean_object* v___x_5581_, lean_object* v_as_x27_5582_, lean_object* v_b_5583_, lean_object* v___y_5584_, lean_object* v___y_5585_){
_start:
{
if (lean_obj_tag(v_as_x27_5582_) == 0)
{
lean_object* v___x_5587_; 
v___x_5587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5587_, 0, v_b_5583_);
return v___x_5587_;
}
else
{
lean_object* v_head_5588_; lean_object* v_tail_5589_; lean_object* v___x_5590_; lean_object* v___y_5592_; uint8_t v___x_5617_; 
v_head_5588_ = lean_ctor_get(v_as_x27_5582_, 0);
v_tail_5589_ = lean_ctor_get(v_as_x27_5582_, 1);
v___x_5590_ = lean_box(0);
v___x_5617_ = lean_name_eq(v_head_5588_, v___x_5577_);
if (v___x_5617_ == 0)
{
uint8_t v___x_5618_; 
v___x_5618_ = lean_name_eq(v_head_5588_, v___x_5578_);
if (v___x_5618_ == 0)
{
v___y_5592_ = v___x_5579_;
goto v___jp_5591_;
}
else
{
v___y_5592_ = v___y_5580_;
goto v___jp_5591_;
}
}
else
{
v___y_5592_ = v___x_5581_;
goto v___jp_5591_;
}
v___jp_5591_:
{
lean_object* v___x_5593_; 
v___x_5593_ = l_Lean_Elab_Command_getRef___redArg(v___y_5584_);
if (lean_obj_tag(v___x_5593_) == 0)
{
lean_object* v_a_5594_; lean_object* v_fileName_5595_; lean_object* v_fileMap_5596_; lean_object* v_currRecDepth_5597_; lean_object* v_cmdPos_5598_; lean_object* v_macroStack_5599_; lean_object* v_quotContext_x3f_5600_; lean_object* v_currMacroScope_5601_; lean_object* v_snap_x3f_5602_; lean_object* v_cancelTk_x3f_5603_; uint8_t v_suppressElabErrors_5604_; lean_object* v_ref_5605_; lean_object* v___x_5606_; lean_object* v___x_5607_; 
v_a_5594_ = lean_ctor_get(v___x_5593_, 0);
lean_inc(v_a_5594_);
lean_dec_ref_known(v___x_5593_, 1);
v_fileName_5595_ = lean_ctor_get(v___y_5584_, 0);
v_fileMap_5596_ = lean_ctor_get(v___y_5584_, 1);
v_currRecDepth_5597_ = lean_ctor_get(v___y_5584_, 2);
v_cmdPos_5598_ = lean_ctor_get(v___y_5584_, 3);
v_macroStack_5599_ = lean_ctor_get(v___y_5584_, 4);
v_quotContext_x3f_5600_ = lean_ctor_get(v___y_5584_, 5);
v_currMacroScope_5601_ = lean_ctor_get(v___y_5584_, 6);
v_snap_x3f_5602_ = lean_ctor_get(v___y_5584_, 8);
v_cancelTk_x3f_5603_ = lean_ctor_get(v___y_5584_, 9);
v_suppressElabErrors_5604_ = lean_ctor_get_uint8(v___y_5584_, sizeof(void*)*10);
v_ref_5605_ = l_Lean_replaceRef(v___y_5592_, v_a_5594_);
lean_dec(v_a_5594_);
lean_inc(v_cancelTk_x3f_5603_);
lean_inc(v_snap_x3f_5602_);
lean_inc(v_currMacroScope_5601_);
lean_inc(v_quotContext_x3f_5600_);
lean_inc(v_macroStack_5599_);
lean_inc(v_cmdPos_5598_);
lean_inc(v_currRecDepth_5597_);
lean_inc_ref(v_fileMap_5596_);
lean_inc_ref(v_fileName_5595_);
v___x_5606_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_5606_, 0, v_fileName_5595_);
lean_ctor_set(v___x_5606_, 1, v_fileMap_5596_);
lean_ctor_set(v___x_5606_, 2, v_currRecDepth_5597_);
lean_ctor_set(v___x_5606_, 3, v_cmdPos_5598_);
lean_ctor_set(v___x_5606_, 4, v_macroStack_5599_);
lean_ctor_set(v___x_5606_, 5, v_quotContext_x3f_5600_);
lean_ctor_set(v___x_5606_, 6, v_currMacroScope_5601_);
lean_ctor_set(v___x_5606_, 7, v_ref_5605_);
lean_ctor_set(v___x_5606_, 8, v_snap_x3f_5602_);
lean_ctor_set(v___x_5606_, 9, v_cancelTk_x3f_5603_);
lean_ctor_set_uint8(v___x_5606_, sizeof(void*)*10, v_suppressElabErrors_5604_);
lean_inc(v_head_5588_);
v___x_5607_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1(v_head_5588_, v___x_5606_, v___y_5585_);
lean_dec_ref_known(v___x_5606_, 10);
if (lean_obj_tag(v___x_5607_) == 0)
{
lean_dec_ref_known(v___x_5607_, 1);
v_as_x27_5582_ = v_tail_5589_;
v_b_5583_ = v___x_5590_;
goto _start;
}
else
{
return v___x_5607_;
}
}
else
{
lean_object* v_a_5609_; lean_object* v___x_5611_; uint8_t v_isShared_5612_; uint8_t v_isSharedCheck_5616_; 
v_a_5609_ = lean_ctor_get(v___x_5593_, 0);
v_isSharedCheck_5616_ = !lean_is_exclusive(v___x_5593_);
if (v_isSharedCheck_5616_ == 0)
{
v___x_5611_ = v___x_5593_;
v_isShared_5612_ = v_isSharedCheck_5616_;
goto v_resetjp_5610_;
}
else
{
lean_inc(v_a_5609_);
lean_dec(v___x_5593_);
v___x_5611_ = lean_box(0);
v_isShared_5612_ = v_isSharedCheck_5616_;
goto v_resetjp_5610_;
}
v_resetjp_5610_:
{
lean_object* v___x_5614_; 
if (v_isShared_5612_ == 0)
{
v___x_5614_ = v___x_5611_;
goto v_reusejp_5613_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v_a_5609_);
v___x_5614_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5613_;
}
v_reusejp_5613_:
{
return v___x_5614_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___redArg___boxed(lean_object* v___x_5619_, lean_object* v___x_5620_, lean_object* v___x_5621_, lean_object* v___y_5622_, lean_object* v___x_5623_, lean_object* v_as_x27_5624_, lean_object* v_b_5625_, lean_object* v___y_5626_, lean_object* v___y_5627_, lean_object* v___y_5628_){
_start:
{
lean_object* v_res_5629_; 
v_res_5629_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___redArg(v___x_5619_, v___x_5620_, v___x_5621_, v___y_5622_, v___x_5623_, v_as_x27_5624_, v_b_5625_, v___y_5626_, v___y_5627_);
lean_dec(v___y_5627_);
lean_dec_ref(v___y_5626_);
lean_dec(v_as_x27_5624_);
lean_dec(v___x_5623_);
lean_dec(v___y_5622_);
lean_dec(v___x_5621_);
lean_dec(v___x_5620_);
lean_dec(v___x_5619_);
return v_res_5629_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___closed__1(void){
_start:
{
lean_object* v___x_5631_; lean_object* v___x_5632_; 
v___x_5631_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__0));
v___x_5632_ = l_Lean_stringToMessageData(v___x_5631_);
return v___x_5632_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___closed__5(void){
_start:
{
lean_object* v___x_5637_; lean_object* v___x_5638_; 
v___x_5637_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__4));
v___x_5638_ = l_Lean_stringToMessageData(v___x_5637_);
return v___x_5638_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___closed__7(void){
_start:
{
lean_object* v___x_5640_; lean_object* v___x_5641_; 
v___x_5640_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__6));
v___x_5641_ = l_Lean_stringToMessageData(v___x_5640_);
return v___x_5641_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___closed__12(void){
_start:
{
lean_object* v___x_5647_; lean_object* v___x_5648_; 
v___x_5647_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__11));
v___x_5648_ = l_Lean_stringToMessageData(v___x_5647_);
return v___x_5648_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDefeqStructure___closed__16(void){
_start:
{
lean_object* v___x_5656_; lean_object* v___x_5657_; 
v___x_5656_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__15));
v___x_5657_ = l_Lean_stringToMessageData(v___x_5656_);
return v___x_5657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure(lean_object* v_modifiers_5680_, lean_object* v_stx_5681_, lean_object* v_a_5682_, lean_object* v_a_5683_){
_start:
{
lean_object* v___y_5686_; lean_object* v___y_5687_; lean_object* v___y_5688_; lean_object* v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___y_5699_; lean_object* v___y_5700_; size_t v___y_5701_; uint8_t v___y_5702_; lean_object* v___y_5703_; lean_object* v___y_5704_; lean_object* v___y_5705_; lean_object* v___y_5706_; lean_object* v___y_5707_; lean_object* v___y_5708_; lean_object* v___y_5709_; lean_object* v___y_5710_; lean_object* v___y_5711_; lean_object* v___y_5712_; lean_object* v___y_5713_; lean_object* v___y_5714_; lean_object* v___y_5715_; lean_object* v___y_5788_; lean_object* v___y_5789_; lean_object* v___y_5790_; lean_object* v___y_5791_; lean_object* v___y_5792_; lean_object* v___y_5793_; lean_object* v___y_5794_; lean_object* v___y_5795_; lean_object* v___y_5796_; lean_object* v___y_5797_; uint8_t v___y_5798_; size_t v___y_5799_; lean_object* v___y_5800_; lean_object* v___y_5801_; lean_object* v___y_5802_; lean_object* v___y_5803_; lean_object* v___y_5804_; lean_object* v___y_5805_; lean_object* v___y_5806_; lean_object* v___y_5807_; lean_object* v___y_5808_; lean_object* v___y_5809_; lean_object* v___y_5810_; lean_object* v___y_5811_; lean_object* v___y_5812_; lean_object* v___y_5835_; lean_object* v___y_5836_; lean_object* v___y_5837_; lean_object* v___y_5838_; lean_object* v___y_5839_; lean_object* v___y_5840_; lean_object* v___y_5841_; lean_object* v___y_5842_; uint8_t v___y_5843_; lean_object* v___y_5844_; lean_object* v___y_5845_; lean_object* v___y_5846_; lean_object* v___y_5847_; lean_object* v___y_5848_; lean_object* v___y_5849_; lean_object* v___y_5850_; lean_object* v___y_5851_; lean_object* v___y_5852_; lean_object* v___y_5853_; lean_object* v___y_5869_; lean_object* v___y_5870_; lean_object* v___y_5871_; lean_object* v___y_5872_; lean_object* v___y_5873_; lean_object* v___y_5874_; uint8_t v___y_5875_; lean_object* v___y_5876_; lean_object* v___y_5877_; lean_object* v___y_5878_; lean_object* v___y_5879_; lean_object* v___y_5880_; lean_object* v___y_5881_; lean_object* v___y_5882_; lean_object* v___y_5883_; lean_object* v___y_5884_; lean_object* v___y_5898_; uint8_t v___y_5899_; lean_object* v___y_5900_; lean_object* v___y_5901_; lean_object* v___y_5902_; lean_object* v___y_5903_; lean_object* v___y_5904_; lean_object* v___y_5905_; lean_object* v___y_5906_; lean_object* v_ctorDoc_x3f_5907_; lean_object* v___y_5908_; lean_object* v___y_5909_; lean_object* v___y_5966_; lean_object* v___y_5967_; uint8_t v___y_5968_; lean_object* v___y_5969_; lean_object* v___y_5970_; lean_object* v___y_5971_; lean_object* v___y_5972_; lean_object* v___y_5973_; lean_object* v___y_5998_; lean_object* v___y_5999_; uint8_t v___y_6000_; lean_object* v___y_6001_; lean_object* v___y_6002_; lean_object* v___y_6003_; lean_object* v___y_6004_; lean_object* v___y_6005_; lean_object* v___y_6009_; lean_object* v___y_6010_; uint8_t v___y_6011_; lean_object* v___y_6012_; lean_object* v___y_6013_; lean_object* v___y_6014_; lean_object* v___y_6015_; uint8_t v___y_6016_; lean_object* v___y_6025_; lean_object* v___y_6026_; lean_object* v___y_6027_; lean_object* v_fst_6028_; lean_object* v_snd_6029_; lean_object* v___y_6045_; lean_object* v___y_6046_; lean_object* v___y_6047_; lean_object* v___y_6048_; lean_object* v___y_6049_; lean_object* v___y_6056_; lean_object* v___y_6057_; lean_object* v___y_6058_; lean_object* v_declSig_6071_; lean_object* v___y_6072_; lean_object* v___y_6073_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; uint8_t v___x_6082_; 
v___x_5691_ = lean_box(0);
v___x_5692_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__1));
v___x_5693_ = ((lean_object*)(l_Lean_Elab_Command_isDefeqStructure___closed__0));
v___x_5694_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig_evalExpr___closed__3));
v___x_5695_ = lean_box(0);
v___x_5696_ = lean_unsigned_to_nat(1u);
v___x_5697_ = l_Lean_Syntax_getArg(v_stx_5681_, v___x_5696_);
v___x_6079_ = lean_unsigned_to_nat(2u);
v___x_6080_ = l_Lean_Syntax_getArg(v_stx_5681_, v___x_6079_);
v___x_6081_ = l_Lean_Syntax_getArg(v___x_6080_, v___x_5696_);
v___x_6082_ = l_Lean_Syntax_isNone(v___x_6081_);
lean_dec(v___x_6081_);
if (v___x_6082_ == 0)
{
v_declSig_6071_ = v___x_6080_;
v___y_6072_ = v_a_5682_;
v___y_6073_ = v_a_5683_;
goto v___jp_6070_;
}
else
{
lean_object* v___x_6083_; 
v___x_6083_ = l_Lean_Elab_Command_getRef___redArg(v_a_5682_);
if (lean_obj_tag(v___x_6083_) == 0)
{
lean_object* v_a_6084_; uint8_t v___x_6085_; lean_object* v___x_6086_; lean_object* v___x_6107_; 
v_a_6084_ = lean_ctor_get(v___x_6083_, 0);
lean_inc(v_a_6084_);
lean_dec_ref_known(v___x_6083_, 1);
v___x_6085_ = 0;
v___x_6086_ = l_Lean_SourceInfo_fromRef(v_a_6084_, v___x_6085_);
lean_dec(v_a_6084_);
v___x_6107_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v_a_5682_);
if (lean_obj_tag(v___x_6107_) == 0)
{
lean_object* v_quotContext_x3f_6108_; 
lean_dec_ref_known(v___x_6107_, 1);
v_quotContext_x3f_6108_ = lean_ctor_get(v_a_5682_, 5);
if (lean_obj_tag(v_quotContext_x3f_6108_) == 0)
{
lean_object* v___x_6109_; 
v___x_6109_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabDefeqStructure_spec__0___redArg(v_a_5683_);
lean_dec_ref(v___x_6109_);
goto v___jp_6087_;
}
else
{
goto v___jp_6087_;
}
}
else
{
lean_object* v_a_6110_; lean_object* v___x_6112_; uint8_t v_isShared_6113_; uint8_t v_isSharedCheck_6117_; 
lean_dec(v___x_6086_);
lean_dec(v___x_6080_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v_a_6110_ = lean_ctor_get(v___x_6107_, 0);
v_isSharedCheck_6117_ = !lean_is_exclusive(v___x_6107_);
if (v_isSharedCheck_6117_ == 0)
{
v___x_6112_ = v___x_6107_;
v_isShared_6113_ = v_isSharedCheck_6117_;
goto v_resetjp_6111_;
}
else
{
lean_inc(v_a_6110_);
lean_dec(v___x_6107_);
v___x_6112_ = lean_box(0);
v_isShared_6113_ = v_isSharedCheck_6117_;
goto v_resetjp_6111_;
}
v_resetjp_6111_:
{
lean_object* v___x_6115_; 
if (v_isShared_6113_ == 0)
{
v___x_6115_ = v___x_6112_;
goto v_reusejp_6114_;
}
else
{
lean_object* v_reuseFailAlloc_6116_; 
v_reuseFailAlloc_6116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6116_, 0, v_a_6110_);
v___x_6115_ = v_reuseFailAlloc_6116_;
goto v_reusejp_6114_;
}
v_reusejp_6114_:
{
return v___x_6115_;
}
}
}
v___jp_6087_:
{
lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; lean_object* v___x_6101_; lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6106_; 
v___x_6088_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__18));
v___x_6089_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__19));
lean_inc_n(v___x_6086_, 6);
v___x_6090_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6090_, 0, v___x_6086_);
lean_ctor_set(v___x_6090_, 1, v___x_6089_);
v___x_6091_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__21));
v___x_6092_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__22));
v___x_6093_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6093_, 0, v___x_6086_);
lean_ctor_set(v___x_6093_, 1, v___x_6092_);
v___x_6094_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3));
v___x_6095_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__25));
v___x_6096_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__26));
v___x_6097_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_6097_, 0, v___x_6086_);
lean_ctor_set(v___x_6097_, 1, v___x_6096_);
v___x_6098_ = l_Lean_Syntax_node1(v___x_6086_, v___x_6095_, v___x_6097_);
v___x_6099_ = l_Lean_Syntax_node1(v___x_6086_, v___x_6094_, v___x_6098_);
v___x_6100_ = l_Lean_Syntax_node2(v___x_6086_, v___x_6091_, v___x_6093_, v___x_6099_);
v___x_6101_ = l_Lean_Syntax_node2(v___x_6086_, v___x_6088_, v___x_6090_, v___x_6100_);
v___x_6102_ = lean_mk_empty_array_with_capacity(v___x_5696_);
v___x_6103_ = lean_array_push(v___x_6102_, v___x_6101_);
v___x_6104_ = lean_box(2);
v___x_6105_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6105_, 0, v___x_6104_);
lean_ctor_set(v___x_6105_, 1, v___x_6094_);
lean_ctor_set(v___x_6105_, 2, v___x_6103_);
v___x_6106_ = l_Lean_Syntax_setArg(v___x_6080_, v___x_5696_, v___x_6105_);
v_declSig_6071_ = v___x_6106_;
v___y_6072_ = v_a_5682_;
v___y_6073_ = v_a_5683_;
goto v___jp_6070_;
}
}
else
{
lean_object* v_a_6118_; lean_object* v___x_6120_; uint8_t v_isShared_6121_; uint8_t v_isSharedCheck_6125_; 
lean_dec(v___x_6080_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v_a_6118_ = lean_ctor_get(v___x_6083_, 0);
v_isSharedCheck_6125_ = !lean_is_exclusive(v___x_6083_);
if (v_isSharedCheck_6125_ == 0)
{
v___x_6120_ = v___x_6083_;
v_isShared_6121_ = v_isSharedCheck_6125_;
goto v_resetjp_6119_;
}
else
{
lean_inc(v_a_6118_);
lean_dec(v___x_6083_);
v___x_6120_ = lean_box(0);
v_isShared_6121_ = v_isSharedCheck_6125_;
goto v_resetjp_6119_;
}
v_resetjp_6119_:
{
lean_object* v___x_6123_; 
if (v_isShared_6121_ == 0)
{
v___x_6123_ = v___x_6120_;
goto v_reusejp_6122_;
}
else
{
lean_object* v_reuseFailAlloc_6124_; 
v_reuseFailAlloc_6124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6124_, 0, v_a_6118_);
v___x_6123_ = v_reuseFailAlloc_6124_;
goto v_reusejp_6122_;
}
v_reusejp_6122_:
{
return v___x_6123_;
}
}
}
}
v___jp_5685_:
{
lean_object* v___x_5689_; lean_object* v___x_5690_; 
v___x_5689_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___closed__1, &l_Lean_Elab_Command_elabDefeqStructure___closed__1_once, _init_l_Lean_Elab_Command_elabDefeqStructure___closed__1);
v___x_5690_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v___y_5688_, v___x_5689_, v___y_5686_, v___y_5687_);
lean_dec(v___y_5688_);
return v___x_5690_;
}
v___jp_5698_:
{
lean_object* v___x_5716_; lean_object* v___x_5717_; 
v___x_5716_ = lean_box(0);
lean_inc(v___y_5705_);
v___x_5717_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__5(v___y_5708_, v___y_5705_, v___x_5716_, v___y_5714_, v___y_5715_);
if (lean_obj_tag(v___x_5717_) == 0)
{
lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v_env_5723_; lean_object* v_messages_5724_; lean_object* v_scopes_5725_; lean_object* v_usedQuotCtxts_5726_; lean_object* v_nextMacroScope_5727_; lean_object* v_maxRecDepth_5728_; lean_object* v_ngen_5729_; lean_object* v_auxDeclNGen_5730_; lean_object* v_infoState_5731_; lean_object* v_traceState_5732_; lean_object* v_snapshotTasks_5733_; lean_object* v_prevLinterStates_5734_; lean_object* v_codeQualityEntryTasks_5735_; lean_object* v___x_5737_; uint8_t v_isShared_5738_; uint8_t v_isSharedCheck_5786_; 
lean_dec_ref_known(v___x_5717_, 1);
lean_inc(v___y_5705_);
v___x_5718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5718_, 0, v___y_5705_);
lean_ctor_set(v___x_5718_, 1, v___x_5695_);
lean_inc(v___y_5713_);
v___x_5719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5719_, 0, v___y_5713_);
lean_ctor_set(v___x_5719_, 1, v___x_5718_);
lean_inc_ref(v___x_5719_);
lean_inc(v___y_5712_);
v___x_5720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5720_, 0, v___y_5712_);
lean_ctor_set(v___x_5720_, 1, v___x_5719_);
v___x_5721_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___redArg(v___x_5720_, v___y_5703_, v___y_5714_, v___y_5715_);
lean_dec_ref_known(v___x_5720_, 2);
lean_dec_ref(v___x_5721_);
v___x_5722_ = lean_st_ref_take(v___y_5715_);
v_env_5723_ = lean_ctor_get(v___x_5722_, 0);
v_messages_5724_ = lean_ctor_get(v___x_5722_, 1);
v_scopes_5725_ = lean_ctor_get(v___x_5722_, 2);
v_usedQuotCtxts_5726_ = lean_ctor_get(v___x_5722_, 3);
v_nextMacroScope_5727_ = lean_ctor_get(v___x_5722_, 4);
v_maxRecDepth_5728_ = lean_ctor_get(v___x_5722_, 5);
v_ngen_5729_ = lean_ctor_get(v___x_5722_, 6);
v_auxDeclNGen_5730_ = lean_ctor_get(v___x_5722_, 7);
v_infoState_5731_ = lean_ctor_get(v___x_5722_, 8);
v_traceState_5732_ = lean_ctor_get(v___x_5722_, 9);
v_snapshotTasks_5733_ = lean_ctor_get(v___x_5722_, 10);
v_prevLinterStates_5734_ = lean_ctor_get(v___x_5722_, 11);
v_codeQualityEntryTasks_5735_ = lean_ctor_get(v___x_5722_, 12);
v_isSharedCheck_5786_ = !lean_is_exclusive(v___x_5722_);
if (v_isSharedCheck_5786_ == 0)
{
v___x_5737_ = v___x_5722_;
v_isShared_5738_ = v_isSharedCheck_5786_;
goto v_resetjp_5736_;
}
else
{
lean_inc(v_codeQualityEntryTasks_5735_);
lean_inc(v_prevLinterStates_5734_);
lean_inc(v_snapshotTasks_5733_);
lean_inc(v_traceState_5732_);
lean_inc(v_infoState_5731_);
lean_inc(v_auxDeclNGen_5730_);
lean_inc(v_ngen_5729_);
lean_inc(v_maxRecDepth_5728_);
lean_inc(v_nextMacroScope_5727_);
lean_inc(v_usedQuotCtxts_5726_);
lean_inc(v_scopes_5725_);
lean_inc(v_messages_5724_);
lean_inc(v_env_5723_);
lean_dec(v___x_5722_);
v___x_5737_ = lean_box(0);
v_isShared_5738_ = v_isSharedCheck_5786_;
goto v_resetjp_5736_;
}
v_resetjp_5736_:
{
lean_object* v___x_5739_; lean_object* v___x_5740_; lean_object* v___x_5742_; 
lean_inc(v___y_5712_);
v___x_5739_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5739_, 0, v___y_5712_);
lean_ctor_set(v___x_5739_, 1, v___y_5713_);
lean_ctor_set(v___x_5739_, 2, v___y_5705_);
lean_ctor_set(v___x_5739_, 3, v___y_5709_);
v___x_5740_ = l_Lean_registerVirtualStructure(v_env_5723_, v___x_5739_);
if (v_isShared_5738_ == 0)
{
lean_ctor_set(v___x_5737_, 0, v___x_5740_);
v___x_5742_ = v___x_5737_;
goto v_reusejp_5741_;
}
else
{
lean_object* v_reuseFailAlloc_5785_; 
v_reuseFailAlloc_5785_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_5785_, 0, v___x_5740_);
lean_ctor_set(v_reuseFailAlloc_5785_, 1, v_messages_5724_);
lean_ctor_set(v_reuseFailAlloc_5785_, 2, v_scopes_5725_);
lean_ctor_set(v_reuseFailAlloc_5785_, 3, v_usedQuotCtxts_5726_);
lean_ctor_set(v_reuseFailAlloc_5785_, 4, v_nextMacroScope_5727_);
lean_ctor_set(v_reuseFailAlloc_5785_, 5, v_maxRecDepth_5728_);
lean_ctor_set(v_reuseFailAlloc_5785_, 6, v_ngen_5729_);
lean_ctor_set(v_reuseFailAlloc_5785_, 7, v_auxDeclNGen_5730_);
lean_ctor_set(v_reuseFailAlloc_5785_, 8, v_infoState_5731_);
lean_ctor_set(v_reuseFailAlloc_5785_, 9, v_traceState_5732_);
lean_ctor_set(v_reuseFailAlloc_5785_, 10, v_snapshotTasks_5733_);
lean_ctor_set(v_reuseFailAlloc_5785_, 11, v_prevLinterStates_5734_);
lean_ctor_set(v_reuseFailAlloc_5785_, 12, v_codeQualityEntryTasks_5735_);
v___x_5742_ = v_reuseFailAlloc_5785_;
goto v_reusejp_5741_;
}
v_reusejp_5741_:
{
lean_object* v___x_5743_; lean_object* v___x_5744_; 
v___x_5743_ = lean_st_ref_put(v___y_5715_, v___x_5742_);
v___x_5744_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___y_5704_, v___y_5714_, v___y_5715_);
if (lean_obj_tag(v___x_5744_) == 0)
{
lean_object* v___x_5745_; 
lean_dec_ref_known(v___x_5744_, 1);
v___x_5745_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___redArg(v___x_5719_, v___y_5703_, v___y_5714_, v___y_5715_);
lean_dec_ref_known(v___x_5719_, 2);
if (lean_obj_tag(v___x_5745_) == 0)
{
lean_object* v___x_5746_; 
lean_dec_ref_known(v___x_5745_, 1);
lean_inc(v___y_5711_);
v___x_5746_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8(v___y_5711_, v___x_5697_, v___y_5707_, v___y_5714_, v___y_5715_);
lean_dec(v___x_5697_);
if (lean_obj_tag(v___x_5746_) == 0)
{
lean_object* v___x_5747_; lean_object* v___x_5748_; 
lean_dec_ref_known(v___x_5746_, 1);
v___x_5747_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_5747_, 0, v___y_5711_);
v___x_5748_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_5747_, v___y_5714_, v___y_5715_);
if (lean_obj_tag(v___x_5748_) == 0)
{
lean_object* v___x_5749_; lean_object* v___x_5750_; 
lean_dec_ref_known(v___x_5748_, 1);
v___x_5749_ = lean_alloc_closure((void*)(l_Lean_Elab_getOptDerivingClasses___boxed), 4, 1);
lean_closure_set(v___x_5749_, 0, v___y_5710_);
v___x_5750_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_5749_, v___y_5714_, v___y_5715_);
if (lean_obj_tag(v___x_5750_) == 0)
{
lean_object* v_a_5751_; lean_object* v___x_5753_; uint8_t v_isShared_5754_; uint8_t v_isSharedCheck_5776_; 
v_a_5751_ = lean_ctor_get(v___x_5750_, 0);
v_isSharedCheck_5776_ = !lean_is_exclusive(v___x_5750_);
if (v_isSharedCheck_5776_ == 0)
{
v___x_5753_ = v___x_5750_;
v_isShared_5754_ = v_isSharedCheck_5776_;
goto v_resetjp_5752_;
}
else
{
lean_inc(v_a_5751_);
lean_dec(v___x_5750_);
v___x_5753_ = lean_box(0);
v_isShared_5754_ = v_isSharedCheck_5776_;
goto v_resetjp_5752_;
}
v_resetjp_5752_:
{
lean_object* v___x_5755_; uint8_t v___x_5756_; 
v___x_5755_ = lean_array_get_size(v_a_5751_);
v___x_5756_ = lean_nat_dec_eq(v___x_5755_, v___y_5706_);
if (v___x_5756_ == 0)
{
lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; size_t v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; lean_object* v___f_5770_; lean_object* v___x_5771_; lean_object* v___x_5772_; 
lean_del_object(v___x_5753_);
v___x_5757_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1___lam__0___closed__0);
v___x_5758_ = lean_unsigned_to_nat(32u);
v___x_5759_ = lean_mk_empty_array_with_capacity(v___x_5758_);
v___x_5760_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_5761_ = ((size_t)5ULL);
lean_inc_n(v___y_5706_, 2);
v___x_5762_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5762_, 0, v___x_5760_);
lean_ctor_set(v___x_5762_, 1, v___x_5759_);
lean_ctor_set(v___x_5762_, 2, v___y_5706_);
lean_ctor_set(v___x_5762_, 3, v___y_5706_);
lean_ctor_set_usize(v___x_5762_, 4, v___x_5761_);
v___x_5763_ = lean_box(1);
v___x_5764_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5764_, 0, v___x_5757_);
lean_ctor_set(v___x_5764_, 1, v___x_5762_);
lean_ctor_set(v___x_5764_, 2, v___x_5763_);
v___x_5765_ = lean_mk_empty_array_with_capacity(v___y_5706_);
lean_dec(v___y_5706_);
v___x_5766_ = lean_alloc_closure((void*)(l_Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9___boxed), 8, 1);
lean_closure_set(v___x_5766_, 0, v___y_5712_);
v___x_5767_ = lean_box(v___y_5702_);
v___x_5768_ = lean_box_usize(v___y_5701_);
v___x_5769_ = lean_box(v___x_5756_);
v___f_5770_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDefeqStructure___lam__2___boxed), 15, 8);
lean_closure_set(v___f_5770_, 0, v___x_5766_);
lean_closure_set(v___f_5770_, 1, v___x_5767_);
lean_closure_set(v___f_5770_, 2, v___y_5700_);
lean_closure_set(v___f_5770_, 3, v_a_5751_);
lean_closure_set(v___f_5770_, 4, v___x_5755_);
lean_closure_set(v___f_5770_, 5, v___x_5768_);
lean_closure_set(v___f_5770_, 6, v___y_5699_);
lean_closure_set(v___f_5770_, 7, v___x_5769_);
v___x_5771_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabDefeqStructure_spec__13___boxed), 11, 4);
lean_closure_set(v___x_5771_, 0, lean_box(0));
lean_closure_set(v___x_5771_, 1, v___x_5764_);
lean_closure_set(v___x_5771_, 2, v___x_5765_);
lean_closure_set(v___x_5771_, 3, v___f_5770_);
v___x_5772_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_5771_, v___y_5714_, v___y_5715_);
return v___x_5772_;
}
else
{
lean_object* v___x_5774_; 
lean_dec(v_a_5751_);
lean_dec(v___y_5712_);
lean_dec(v___y_5706_);
lean_dec(v___y_5700_);
if (v_isShared_5754_ == 0)
{
lean_ctor_set(v___x_5753_, 0, v___y_5703_);
v___x_5774_ = v___x_5753_;
goto v_reusejp_5773_;
}
else
{
lean_object* v_reuseFailAlloc_5775_; 
v_reuseFailAlloc_5775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5775_, 0, v___y_5703_);
v___x_5774_ = v_reuseFailAlloc_5775_;
goto v_reusejp_5773_;
}
v_reusejp_5773_:
{
return v___x_5774_;
}
}
}
}
else
{
lean_object* v_a_5777_; lean_object* v___x_5779_; uint8_t v_isShared_5780_; uint8_t v_isSharedCheck_5784_; 
lean_dec(v___y_5712_);
lean_dec(v___y_5706_);
lean_dec(v___y_5700_);
v_a_5777_ = lean_ctor_get(v___x_5750_, 0);
v_isSharedCheck_5784_ = !lean_is_exclusive(v___x_5750_);
if (v_isSharedCheck_5784_ == 0)
{
v___x_5779_ = v___x_5750_;
v_isShared_5780_ = v_isSharedCheck_5784_;
goto v_resetjp_5778_;
}
else
{
lean_inc(v_a_5777_);
lean_dec(v___x_5750_);
v___x_5779_ = lean_box(0);
v_isShared_5780_ = v_isSharedCheck_5784_;
goto v_resetjp_5778_;
}
v_resetjp_5778_:
{
lean_object* v___x_5782_; 
if (v_isShared_5780_ == 0)
{
v___x_5782_ = v___x_5779_;
goto v_reusejp_5781_;
}
else
{
lean_object* v_reuseFailAlloc_5783_; 
v_reuseFailAlloc_5783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5783_, 0, v_a_5777_);
v___x_5782_ = v_reuseFailAlloc_5783_;
goto v_reusejp_5781_;
}
v_reusejp_5781_:
{
return v___x_5782_;
}
}
}
}
else
{
lean_dec(v___y_5712_);
lean_dec(v___y_5710_);
lean_dec(v___y_5706_);
lean_dec(v___y_5700_);
return v___x_5748_;
}
}
else
{
lean_dec(v___y_5712_);
lean_dec(v___y_5711_);
lean_dec(v___y_5710_);
lean_dec(v___y_5706_);
lean_dec(v___y_5700_);
return v___x_5746_;
}
}
else
{
lean_dec(v___y_5712_);
lean_dec(v___y_5711_);
lean_dec(v___y_5710_);
lean_dec(v___y_5706_);
lean_dec(v___y_5700_);
lean_dec(v___x_5697_);
return v___x_5745_;
}
}
else
{
lean_dec_ref_known(v___x_5719_, 2);
lean_dec(v___y_5712_);
lean_dec(v___y_5711_);
lean_dec(v___y_5710_);
lean_dec(v___y_5706_);
lean_dec(v___y_5700_);
lean_dec(v___x_5697_);
return v___x_5744_;
}
}
}
}
else
{
lean_dec(v___y_5713_);
lean_dec(v___y_5712_);
lean_dec(v___y_5711_);
lean_dec(v___y_5710_);
lean_dec(v___y_5709_);
lean_dec(v___y_5706_);
lean_dec(v___y_5705_);
lean_dec_ref(v___y_5704_);
lean_dec(v___y_5700_);
lean_dec(v___x_5697_);
return v___x_5717_;
}
}
v___jp_5787_:
{
lean_object* v___f_5813_; lean_object* v___x_5814_; 
lean_inc_ref(v___y_5812_);
lean_inc(v___y_5789_);
lean_inc(v___y_5795_);
lean_inc(v___y_5793_);
v___f_5813_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDefeqStructure___lam__3___boxed), 14, 7);
lean_closure_set(v___f_5813_, 0, v___y_5794_);
lean_closure_set(v___f_5813_, 1, v___y_5793_);
lean_closure_set(v___f_5813_, 2, v___y_5795_);
lean_closure_set(v___f_5813_, 3, v___y_5789_);
lean_closure_set(v___f_5813_, 4, v___y_5792_);
lean_closure_set(v___f_5813_, 5, v___y_5791_);
lean_closure_set(v___f_5813_, 6, v___y_5812_);
v___x_5814_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_5813_, v___y_5806_, v___y_5800_);
if (lean_obj_tag(v___x_5814_) == 0)
{
lean_object* v_a_5815_; lean_object* v___f_5816_; lean_object* v___x_5817_; 
v_a_5815_ = lean_ctor_get(v___x_5814_, 0);
lean_inc_n(v_a_5815_, 2);
lean_dec_ref_known(v___x_5814_, 1);
lean_inc(v___y_5789_);
lean_inc(v___y_5795_);
v___f_5816_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDefeqStructure___lam__4___boxed), 10, 3);
lean_closure_set(v___f_5816_, 0, v___y_5795_);
lean_closure_set(v___f_5816_, 1, v___y_5789_);
lean_closure_set(v___f_5816_, 2, v_a_5815_);
lean_inc(v___y_5811_);
v___x_5817_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8(v___y_5811_, v___y_5810_, v___x_5691_, v___y_5806_, v___y_5800_);
if (lean_obj_tag(v___x_5817_) == 0)
{
lean_object* v___x_5818_; 
lean_dec_ref_known(v___x_5817_, 1);
lean_inc(v___y_5808_);
v___x_5818_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8(v___y_5808_, v___y_5802_, v___x_5691_, v___y_5806_, v___y_5800_);
if (lean_obj_tag(v___x_5818_) == 0)
{
lean_object* v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___f_5822_; lean_object* v___x_5823_; 
lean_dec_ref_known(v___x_5818_, 1);
v___x_5819_ = ((lean_object*)(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj___lam__5___closed__3));
v___x_5820_ = lean_box(2);
v___x_5821_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5821_, 0, v___x_5820_);
lean_ctor_set(v___x_5821_, 1, v___x_5819_);
lean_ctor_set(v___x_5821_, 2, v___y_5812_);
v___f_5822_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDefeqStructure___lam__5___boxed), 15, 8);
lean_closure_set(v___f_5822_, 0, v___y_5795_);
lean_closure_set(v___f_5822_, 1, v___x_5821_);
lean_closure_set(v___f_5822_, 2, v___y_5796_);
lean_closure_set(v___f_5822_, 3, v___y_5790_);
lean_closure_set(v___f_5822_, 4, v___x_5820_);
lean_closure_set(v___f_5822_, 5, v___x_5819_);
lean_closure_set(v___f_5822_, 6, v___y_5789_);
lean_closure_set(v___f_5822_, 7, v___y_5797_);
v___x_5823_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___f_5822_, v___y_5806_, v___y_5800_);
if (lean_obj_tag(v___x_5823_) == 0)
{
lean_dec_ref_known(v___x_5823_, 1);
if (lean_obj_tag(v___y_5805_) == 0)
{
lean_dec(v___y_5810_);
v___y_5699_ = v___y_5788_;
v___y_5700_ = v___y_5793_;
v___y_5701_ = v___y_5799_;
v___y_5702_ = v___y_5798_;
v___y_5703_ = v___y_5807_;
v___y_5704_ = v___f_5816_;
v___y_5705_ = v___y_5808_;
v___y_5706_ = v___y_5801_;
v___y_5707_ = v___x_5691_;
v___y_5708_ = v___y_5802_;
v___y_5709_ = v_a_5815_;
v___y_5710_ = v___y_5803_;
v___y_5711_ = v___y_5804_;
v___y_5712_ = v___y_5809_;
v___y_5713_ = v___y_5811_;
v___y_5714_ = v___y_5806_;
v___y_5715_ = v___y_5800_;
goto v___jp_5698_;
}
else
{
lean_object* v___x_5824_; lean_object* v___x_5825_; 
lean_dec_ref_known(v___y_5805_, 1);
v___x_5824_ = lean_box(0);
lean_inc(v___y_5811_);
v___x_5825_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__5(v___y_5810_, v___y_5811_, v___x_5824_, v___y_5806_, v___y_5800_);
if (lean_obj_tag(v___x_5825_) == 0)
{
lean_dec_ref_known(v___x_5825_, 1);
v___y_5699_ = v___y_5788_;
v___y_5700_ = v___y_5793_;
v___y_5701_ = v___y_5799_;
v___y_5702_ = v___y_5798_;
v___y_5703_ = v___y_5807_;
v___y_5704_ = v___f_5816_;
v___y_5705_ = v___y_5808_;
v___y_5706_ = v___y_5801_;
v___y_5707_ = v___x_5691_;
v___y_5708_ = v___y_5802_;
v___y_5709_ = v_a_5815_;
v___y_5710_ = v___y_5803_;
v___y_5711_ = v___y_5804_;
v___y_5712_ = v___y_5809_;
v___y_5713_ = v___y_5811_;
v___y_5714_ = v___y_5806_;
v___y_5715_ = v___y_5800_;
goto v___jp_5698_;
}
else
{
lean_dec_ref(v___f_5816_);
lean_dec(v_a_5815_);
lean_dec(v___y_5811_);
lean_dec(v___y_5809_);
lean_dec(v___y_5808_);
lean_dec(v___y_5804_);
lean_dec(v___y_5803_);
lean_dec(v___y_5802_);
lean_dec(v___y_5801_);
lean_dec(v___y_5793_);
lean_dec(v___x_5697_);
return v___x_5825_;
}
}
}
else
{
lean_dec_ref(v___f_5816_);
lean_dec(v_a_5815_);
lean_dec(v___y_5811_);
lean_dec(v___y_5810_);
lean_dec(v___y_5809_);
lean_dec(v___y_5808_);
lean_dec(v___y_5805_);
lean_dec(v___y_5804_);
lean_dec(v___y_5803_);
lean_dec(v___y_5802_);
lean_dec(v___y_5801_);
lean_dec(v___y_5793_);
lean_dec(v___x_5697_);
return v___x_5823_;
}
}
else
{
lean_dec_ref(v___f_5816_);
lean_dec(v_a_5815_);
lean_dec_ref(v___y_5812_);
lean_dec(v___y_5811_);
lean_dec(v___y_5810_);
lean_dec(v___y_5809_);
lean_dec(v___y_5808_);
lean_dec(v___y_5805_);
lean_dec(v___y_5804_);
lean_dec(v___y_5803_);
lean_dec(v___y_5802_);
lean_dec(v___y_5801_);
lean_dec(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec(v___y_5795_);
lean_dec(v___y_5793_);
lean_dec(v___y_5790_);
lean_dec(v___y_5789_);
lean_dec(v___x_5697_);
return v___x_5818_;
}
}
else
{
lean_dec_ref(v___f_5816_);
lean_dec(v_a_5815_);
lean_dec_ref(v___y_5812_);
lean_dec(v___y_5811_);
lean_dec(v___y_5810_);
lean_dec(v___y_5809_);
lean_dec(v___y_5808_);
lean_dec(v___y_5805_);
lean_dec(v___y_5804_);
lean_dec(v___y_5803_);
lean_dec(v___y_5802_);
lean_dec(v___y_5801_);
lean_dec(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec(v___y_5795_);
lean_dec(v___y_5793_);
lean_dec(v___y_5790_);
lean_dec(v___y_5789_);
lean_dec(v___x_5697_);
return v___x_5817_;
}
}
else
{
lean_object* v_a_5826_; lean_object* v___x_5828_; uint8_t v_isShared_5829_; uint8_t v_isSharedCheck_5833_; 
lean_dec_ref(v___y_5812_);
lean_dec(v___y_5811_);
lean_dec(v___y_5810_);
lean_dec(v___y_5809_);
lean_dec(v___y_5808_);
lean_dec(v___y_5805_);
lean_dec(v___y_5804_);
lean_dec(v___y_5803_);
lean_dec(v___y_5802_);
lean_dec(v___y_5801_);
lean_dec(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec(v___y_5795_);
lean_dec(v___y_5793_);
lean_dec(v___y_5790_);
lean_dec(v___y_5789_);
lean_dec(v___x_5697_);
v_a_5826_ = lean_ctor_get(v___x_5814_, 0);
v_isSharedCheck_5833_ = !lean_is_exclusive(v___x_5814_);
if (v_isSharedCheck_5833_ == 0)
{
v___x_5828_ = v___x_5814_;
v_isShared_5829_ = v_isSharedCheck_5833_;
goto v_resetjp_5827_;
}
else
{
lean_inc(v_a_5826_);
lean_dec(v___x_5814_);
v___x_5828_ = lean_box(0);
v_isShared_5829_ = v_isSharedCheck_5833_;
goto v_resetjp_5827_;
}
v_resetjp_5827_:
{
lean_object* v___x_5831_; 
if (v_isShared_5829_ == 0)
{
v___x_5831_ = v___x_5828_;
goto v_reusejp_5830_;
}
else
{
lean_object* v_reuseFailAlloc_5832_; 
v_reuseFailAlloc_5832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5832_, 0, v_a_5826_);
v___x_5831_ = v_reuseFailAlloc_5832_;
goto v_reusejp_5830_;
}
v_reusejp_5830_:
{
return v___x_5831_;
}
}
}
}
v___jp_5834_:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; 
lean_inc(v___y_5840_);
v___x_5854_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5854_, 0, v___y_5840_);
lean_ctor_set(v___x_5854_, 1, v___x_5695_);
lean_inc(v___y_5846_);
v___x_5855_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5855_, 0, v___y_5846_);
lean_ctor_set(v___x_5855_, 1, v___x_5854_);
lean_inc(v___y_5851_);
v___x_5856_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5856_, 0, v___y_5851_);
lean_ctor_set(v___x_5856_, 1, v___x_5855_);
v___x_5857_ = lean_box(0);
v___x_5858_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___redArg(v___y_5846_, v___y_5851_, v___x_5697_, v___y_5849_, v___y_5835_, v___x_5856_, v___x_5857_, v___y_5838_, v___y_5850_);
lean_dec_ref_known(v___x_5856_, 2);
if (lean_obj_tag(v___x_5858_) == 0)
{
lean_object* v_attrs_5859_; size_t v_sz_5860_; size_t v___x_5861_; lean_object* v___x_5862_; 
lean_dec_ref_known(v___x_5858_, 1);
v_attrs_5859_ = lean_ctor_get(v_modifiers_5680_, 2);
lean_inc_ref(v_attrs_5859_);
lean_dec_ref(v_modifiers_5680_);
v_sz_5860_ = lean_array_size(v_attrs_5859_);
v___x_5861_ = ((size_t)0ULL);
v___x_5862_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__4(v_attrs_5859_, v_sz_5860_, v___x_5861_, v___x_5857_, v___y_5838_, v___y_5850_);
lean_dec_ref(v_attrs_5859_);
if (lean_obj_tag(v___x_5862_) == 0)
{
lean_object* v___x_5863_; 
lean_dec_ref_known(v___x_5862_, 1);
v___x_5863_ = l_Lean_Elab_Command_withScope___redArg(v___y_5845_, v___y_5847_, v___y_5838_, v___y_5850_);
if (lean_obj_tag(v___x_5863_) == 0)
{
lean_dec_ref_known(v___x_5863_, 1);
if (lean_obj_tag(v___y_5844_) == 0)
{
lean_object* v___x_5864_; 
v___x_5864_ = lean_mk_empty_array_with_capacity(v___y_5839_);
lean_inc(v___y_5851_);
lean_inc(v___y_5849_);
lean_inc(v___y_5848_);
lean_inc(v___y_5840_);
lean_inc(v___y_5846_);
v___y_5788_ = v___x_5857_;
v___y_5789_ = v___y_5846_;
v___y_5790_ = v___y_5836_;
v___y_5791_ = v___y_5841_;
v___y_5792_ = v___y_5840_;
v___y_5793_ = v___y_5848_;
v___y_5794_ = v___y_5849_;
v___y_5795_ = v___y_5851_;
v___y_5796_ = v___y_5852_;
v___y_5797_ = v___y_5842_;
v___y_5798_ = v___y_5843_;
v___y_5799_ = v___x_5861_;
v___y_5800_ = v___y_5850_;
v___y_5801_ = v___y_5839_;
v___y_5802_ = v___y_5835_;
v___y_5803_ = v___y_5853_;
v___y_5804_ = v___y_5840_;
v___y_5805_ = v___y_5844_;
v___y_5806_ = v___y_5838_;
v___y_5807_ = v___x_5857_;
v___y_5808_ = v___y_5846_;
v___y_5809_ = v___y_5848_;
v___y_5810_ = v___y_5849_;
v___y_5811_ = v___y_5851_;
v___y_5812_ = v___x_5864_;
goto v___jp_5787_;
}
else
{
lean_object* v_val_5865_; lean_object* v___x_5866_; lean_object* v___x_5867_; 
v_val_5865_ = lean_ctor_get(v___y_5844_, 0);
v___x_5866_ = l_Lean_Syntax_getArg(v_val_5865_, v___y_5837_);
v___x_5867_ = l_Lean_Syntax_getArgs(v___x_5866_);
lean_dec(v___x_5866_);
lean_inc(v___y_5851_);
lean_inc(v___y_5849_);
lean_inc(v___y_5848_);
lean_inc(v___y_5840_);
lean_inc(v___y_5846_);
v___y_5788_ = v___x_5857_;
v___y_5789_ = v___y_5846_;
v___y_5790_ = v___y_5836_;
v___y_5791_ = v___y_5841_;
v___y_5792_ = v___y_5840_;
v___y_5793_ = v___y_5848_;
v___y_5794_ = v___y_5849_;
v___y_5795_ = v___y_5851_;
v___y_5796_ = v___y_5852_;
v___y_5797_ = v___y_5842_;
v___y_5798_ = v___y_5843_;
v___y_5799_ = v___x_5861_;
v___y_5800_ = v___y_5850_;
v___y_5801_ = v___y_5839_;
v___y_5802_ = v___y_5835_;
v___y_5803_ = v___y_5853_;
v___y_5804_ = v___y_5840_;
v___y_5805_ = v___y_5844_;
v___y_5806_ = v___y_5838_;
v___y_5807_ = v___x_5857_;
v___y_5808_ = v___y_5846_;
v___y_5809_ = v___y_5848_;
v___y_5810_ = v___y_5849_;
v___y_5811_ = v___y_5851_;
v___y_5812_ = v___x_5867_;
goto v___jp_5787_;
}
}
else
{
lean_dec(v___y_5853_);
lean_dec(v___y_5852_);
lean_dec(v___y_5851_);
lean_dec(v___y_5849_);
lean_dec(v___y_5848_);
lean_dec(v___y_5846_);
lean_dec(v___y_5844_);
lean_dec(v___y_5842_);
lean_dec(v___y_5841_);
lean_dec(v___y_5840_);
lean_dec(v___y_5839_);
lean_dec(v___y_5836_);
lean_dec(v___y_5835_);
lean_dec(v___x_5697_);
return v___x_5863_;
}
}
else
{
lean_dec(v___y_5853_);
lean_dec(v___y_5852_);
lean_dec(v___y_5851_);
lean_dec(v___y_5849_);
lean_dec(v___y_5848_);
lean_dec_ref(v___y_5847_);
lean_dec(v___y_5846_);
lean_dec_ref(v___y_5845_);
lean_dec(v___y_5844_);
lean_dec(v___y_5842_);
lean_dec(v___y_5841_);
lean_dec(v___y_5840_);
lean_dec(v___y_5839_);
lean_dec(v___y_5836_);
lean_dec(v___y_5835_);
lean_dec(v___x_5697_);
return v___x_5862_;
}
}
else
{
lean_dec(v___y_5853_);
lean_dec(v___y_5852_);
lean_dec(v___y_5851_);
lean_dec(v___y_5849_);
lean_dec(v___y_5848_);
lean_dec_ref(v___y_5847_);
lean_dec(v___y_5846_);
lean_dec_ref(v___y_5845_);
lean_dec(v___y_5844_);
lean_dec(v___y_5842_);
lean_dec(v___y_5841_);
lean_dec(v___y_5840_);
lean_dec(v___y_5839_);
lean_dec(v___y_5836_);
lean_dec(v___y_5835_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
return v___x_5858_;
}
}
v___jp_5868_:
{
lean_object* v___x_5885_; lean_object* v___x_5886_; lean_object* v___x_5887_; lean_object* v___x_5888_; lean_object* v___x_5889_; uint8_t v___x_5890_; 
lean_inc_n(v___y_5879_, 3);
v___x_5885_ = l_Lean_Name_append(v___y_5879_, v___y_5884_);
v___x_5886_ = l_Lean_TSyntax_getId(v___y_5869_);
lean_inc(v___x_5886_);
v___x_5887_ = l_Lean_Name_append(v___y_5879_, v___x_5886_);
v___x_5888_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__3));
v___x_5889_ = l_Lean_Name_append(v___y_5879_, v___x_5888_);
v___x_5890_ = lean_name_eq(v___x_5887_, v___x_5885_);
if (v___x_5890_ == 0)
{
v___y_5835_ = v___y_5869_;
v___y_5836_ = v___y_5870_;
v___y_5837_ = v___y_5871_;
v___y_5838_ = v___y_5872_;
v___y_5839_ = v___y_5873_;
v___y_5840_ = v___x_5889_;
v___y_5841_ = v___x_5886_;
v___y_5842_ = v___y_5874_;
v___y_5843_ = v___y_5875_;
v___y_5844_ = v___y_5876_;
v___y_5845_ = v___y_5877_;
v___y_5846_ = v___x_5887_;
v___y_5847_ = v___y_5878_;
v___y_5848_ = v___y_5879_;
v___y_5849_ = v___y_5880_;
v___y_5850_ = v___y_5881_;
v___y_5851_ = v___x_5885_;
v___y_5852_ = v___y_5882_;
v___y_5853_ = v___y_5883_;
goto v___jp_5834_;
}
else
{
lean_object* v___x_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; lean_object* v___x_5895_; lean_object* v___x_5896_; 
lean_dec(v___x_5889_);
lean_dec(v___x_5887_);
lean_dec(v___x_5885_);
lean_dec(v___y_5883_);
lean_dec(v___y_5882_);
lean_dec(v___y_5880_);
lean_dec(v___y_5879_);
lean_dec_ref(v___y_5878_);
lean_dec_ref(v___y_5877_);
lean_dec(v___y_5876_);
lean_dec(v___y_5874_);
lean_dec(v___y_5873_);
lean_dec(v___y_5870_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v___x_5891_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___closed__5, &l_Lean_Elab_Command_elabDefeqStructure___closed__5_once, _init_l_Lean_Elab_Command_elabDefeqStructure___closed__5);
v___x_5892_ = l_Lean_MessageData_ofName(v___x_5886_);
v___x_5893_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5893_, 0, v___x_5891_);
lean_ctor_set(v___x_5893_, 1, v___x_5892_);
v___x_5894_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___closed__7, &l_Lean_Elab_Command_elabDefeqStructure___closed__7_once, _init_l_Lean_Elab_Command_elabDefeqStructure___closed__7);
v___x_5895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5895_, 0, v___x_5893_);
lean_ctor_set(v___x_5895_, 1, v___x_5894_);
v___x_5896_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v___y_5869_, v___x_5895_, v___y_5872_, v___y_5881_);
lean_dec(v___y_5869_);
return v___x_5896_;
}
}
v___jp_5897_:
{
lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; 
v___x_5910_ = l_Lean_Syntax_getArg(v___y_5905_, v___y_5902_);
lean_dec(v___y_5905_);
v___x_5911_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__8));
v___x_5912_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f(v___x_5910_, v___x_5911_, v___y_5908_, v___y_5909_);
lean_dec(v___x_5910_);
if (lean_obj_tag(v___x_5912_) == 0)
{
lean_object* v_a_5913_; lean_object* v___x_5914_; lean_object* v_env_5915_; uint8_t v___x_5916_; lean_object* v___x_5917_; lean_object* v___f_5918_; lean_object* v___x_5919_; 
v_a_5913_ = lean_ctor_get(v___x_5912_, 0);
lean_inc(v_a_5913_);
lean_dec_ref_known(v___x_5912_, 1);
v___x_5914_ = lean_st_ref_get(v___y_5909_);
v_env_5915_ = lean_ctor_get(v___x_5914_, 0);
lean_inc_ref(v_env_5915_);
lean_dec(v___x_5914_);
v___x_5916_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_5915_, v_modifiers_5680_);
lean_dec_ref(v_env_5915_);
v___x_5917_ = lean_box(v___x_5916_);
v___f_5918_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDefeqStructure___lam__0___boxed), 4, 3);
lean_closure_set(v___f_5918_, 0, v___x_5917_);
lean_closure_set(v___f_5918_, 1, v___x_5692_);
lean_closure_set(v___f_5918_, 2, v___x_5693_);
v___x_5919_ = l_Lean_Elab_Command_getScope___redArg(v___y_5909_);
if (lean_obj_tag(v___x_5919_) == 0)
{
lean_object* v_a_5920_; lean_object* v_currNamespace_5921_; lean_object* v___x_5922_; 
v_a_5920_ = lean_ctor_get(v___x_5919_, 0);
lean_inc(v_a_5920_);
lean_dec_ref_known(v___x_5919_, 1);
v_currNamespace_5921_ = lean_ctor_get(v_a_5920_, 2);
lean_inc(v_currNamespace_5921_);
lean_dec(v_a_5920_);
v___x_5922_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_5909_);
if (lean_obj_tag(v___x_5922_) == 0)
{
lean_object* v_a_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; 
v_a_5923_ = lean_ctor_get(v___x_5922_, 0);
lean_inc(v_a_5923_);
lean_dec_ref_known(v___x_5922_, 1);
lean_inc_ref(v_modifiers_5680_);
lean_inc(v___x_5697_);
v___x_5924_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_5924_, 0, v_currNamespace_5921_);
lean_closure_set(v___x_5924_, 1, v_a_5923_);
lean_closure_set(v___x_5924_, 2, v___x_5697_);
lean_closure_set(v___x_5924_, 3, v_modifiers_5680_);
v___x_5925_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_5924_, v___y_5908_, v___y_5909_);
if (lean_obj_tag(v___x_5925_) == 0)
{
lean_object* v_a_5926_; 
v_a_5926_ = lean_ctor_get(v___x_5925_, 0);
lean_inc(v_a_5926_);
lean_dec_ref_known(v___x_5925_, 1);
if (lean_obj_tag(v___y_5906_) == 0)
{
lean_object* v_declName_5927_; lean_object* v___x_5928_; 
v_declName_5927_ = lean_ctor_get(v_a_5926_, 1);
lean_inc(v_declName_5927_);
lean_dec(v_a_5926_);
v___x_5928_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__9));
lean_inc(v___x_5697_);
v___y_5869_ = v___y_5901_;
v___y_5870_ = v___y_5898_;
v___y_5871_ = v___y_5900_;
v___y_5872_ = v___y_5908_;
v___y_5873_ = v___y_5902_;
v___y_5874_ = v_a_5913_;
v___y_5875_ = v___y_5899_;
v___y_5876_ = v___y_5906_;
v___y_5877_ = v___f_5918_;
v___y_5878_ = v___y_5904_;
v___y_5879_ = v_declName_5927_;
v___y_5880_ = v___x_5697_;
v___y_5881_ = v___y_5909_;
v___y_5882_ = v_ctorDoc_x3f_5907_;
v___y_5883_ = v___y_5903_;
v___y_5884_ = v___x_5928_;
goto v___jp_5868_;
}
else
{
lean_object* v_declName_5929_; lean_object* v_val_5930_; lean_object* v___x_5931_; lean_object* v___x_5932_; 
v_declName_5929_ = lean_ctor_get(v_a_5926_, 1);
lean_inc(v_declName_5929_);
lean_dec(v_a_5926_);
v_val_5930_ = lean_ctor_get(v___y_5906_, 0);
v___x_5931_ = l_Lean_Syntax_getArg(v_val_5930_, v___x_5696_);
v___x_5932_ = l_Lean_Syntax_getId(v___x_5931_);
v___y_5869_ = v___y_5901_;
v___y_5870_ = v___y_5898_;
v___y_5871_ = v___y_5900_;
v___y_5872_ = v___y_5908_;
v___y_5873_ = v___y_5902_;
v___y_5874_ = v_a_5913_;
v___y_5875_ = v___y_5899_;
v___y_5876_ = v___y_5906_;
v___y_5877_ = v___f_5918_;
v___y_5878_ = v___y_5904_;
v___y_5879_ = v_declName_5929_;
v___y_5880_ = v___x_5931_;
v___y_5881_ = v___y_5909_;
v___y_5882_ = v_ctorDoc_x3f_5907_;
v___y_5883_ = v___y_5903_;
v___y_5884_ = v___x_5932_;
goto v___jp_5868_;
}
}
else
{
lean_object* v_a_5933_; lean_object* v___x_5935_; uint8_t v_isShared_5936_; uint8_t v_isSharedCheck_5940_; 
lean_dec_ref(v___f_5918_);
lean_dec(v_a_5913_);
lean_dec(v_ctorDoc_x3f_5907_);
lean_dec(v___y_5906_);
lean_dec_ref(v___y_5904_);
lean_dec(v___y_5903_);
lean_dec(v___y_5902_);
lean_dec(v___y_5901_);
lean_dec(v___y_5898_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v_a_5933_ = lean_ctor_get(v___x_5925_, 0);
v_isSharedCheck_5940_ = !lean_is_exclusive(v___x_5925_);
if (v_isSharedCheck_5940_ == 0)
{
v___x_5935_ = v___x_5925_;
v_isShared_5936_ = v_isSharedCheck_5940_;
goto v_resetjp_5934_;
}
else
{
lean_inc(v_a_5933_);
lean_dec(v___x_5925_);
v___x_5935_ = lean_box(0);
v_isShared_5936_ = v_isSharedCheck_5940_;
goto v_resetjp_5934_;
}
v_resetjp_5934_:
{
lean_object* v___x_5938_; 
if (v_isShared_5936_ == 0)
{
v___x_5938_ = v___x_5935_;
goto v_reusejp_5937_;
}
else
{
lean_object* v_reuseFailAlloc_5939_; 
v_reuseFailAlloc_5939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5939_, 0, v_a_5933_);
v___x_5938_ = v_reuseFailAlloc_5939_;
goto v_reusejp_5937_;
}
v_reusejp_5937_:
{
return v___x_5938_;
}
}
}
}
else
{
lean_object* v_a_5941_; lean_object* v___x_5943_; uint8_t v_isShared_5944_; uint8_t v_isSharedCheck_5948_; 
lean_dec(v_currNamespace_5921_);
lean_dec_ref(v___f_5918_);
lean_dec(v_a_5913_);
lean_dec(v_ctorDoc_x3f_5907_);
lean_dec(v___y_5906_);
lean_dec_ref(v___y_5904_);
lean_dec(v___y_5903_);
lean_dec(v___y_5902_);
lean_dec(v___y_5901_);
lean_dec(v___y_5898_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v_a_5941_ = lean_ctor_get(v___x_5922_, 0);
v_isSharedCheck_5948_ = !lean_is_exclusive(v___x_5922_);
if (v_isSharedCheck_5948_ == 0)
{
v___x_5943_ = v___x_5922_;
v_isShared_5944_ = v_isSharedCheck_5948_;
goto v_resetjp_5942_;
}
else
{
lean_inc(v_a_5941_);
lean_dec(v___x_5922_);
v___x_5943_ = lean_box(0);
v_isShared_5944_ = v_isSharedCheck_5948_;
goto v_resetjp_5942_;
}
v_resetjp_5942_:
{
lean_object* v___x_5946_; 
if (v_isShared_5944_ == 0)
{
v___x_5946_ = v___x_5943_;
goto v_reusejp_5945_;
}
else
{
lean_object* v_reuseFailAlloc_5947_; 
v_reuseFailAlloc_5947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5947_, 0, v_a_5941_);
v___x_5946_ = v_reuseFailAlloc_5947_;
goto v_reusejp_5945_;
}
v_reusejp_5945_:
{
return v___x_5946_;
}
}
}
}
else
{
lean_object* v_a_5949_; lean_object* v___x_5951_; uint8_t v_isShared_5952_; uint8_t v_isSharedCheck_5956_; 
lean_dec_ref(v___f_5918_);
lean_dec(v_a_5913_);
lean_dec(v_ctorDoc_x3f_5907_);
lean_dec(v___y_5906_);
lean_dec_ref(v___y_5904_);
lean_dec(v___y_5903_);
lean_dec(v___y_5902_);
lean_dec(v___y_5901_);
lean_dec(v___y_5898_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v_a_5949_ = lean_ctor_get(v___x_5919_, 0);
v_isSharedCheck_5956_ = !lean_is_exclusive(v___x_5919_);
if (v_isSharedCheck_5956_ == 0)
{
v___x_5951_ = v___x_5919_;
v_isShared_5952_ = v_isSharedCheck_5956_;
goto v_resetjp_5950_;
}
else
{
lean_inc(v_a_5949_);
lean_dec(v___x_5919_);
v___x_5951_ = lean_box(0);
v_isShared_5952_ = v_isSharedCheck_5956_;
goto v_resetjp_5950_;
}
v_resetjp_5950_:
{
lean_object* v___x_5954_; 
if (v_isShared_5952_ == 0)
{
v___x_5954_ = v___x_5951_;
goto v_reusejp_5953_;
}
else
{
lean_object* v_reuseFailAlloc_5955_; 
v_reuseFailAlloc_5955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5955_, 0, v_a_5949_);
v___x_5954_ = v_reuseFailAlloc_5955_;
goto v_reusejp_5953_;
}
v_reusejp_5953_:
{
return v___x_5954_;
}
}
}
}
else
{
lean_object* v_a_5957_; lean_object* v___x_5959_; uint8_t v_isShared_5960_; uint8_t v_isSharedCheck_5964_; 
lean_dec(v_ctorDoc_x3f_5907_);
lean_dec(v___y_5906_);
lean_dec_ref(v___y_5904_);
lean_dec(v___y_5903_);
lean_dec(v___y_5902_);
lean_dec(v___y_5901_);
lean_dec(v___y_5898_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v_a_5957_ = lean_ctor_get(v___x_5912_, 0);
v_isSharedCheck_5964_ = !lean_is_exclusive(v___x_5912_);
if (v_isSharedCheck_5964_ == 0)
{
v___x_5959_ = v___x_5912_;
v_isShared_5960_ = v_isSharedCheck_5964_;
goto v_resetjp_5958_;
}
else
{
lean_inc(v_a_5957_);
lean_dec(v___x_5912_);
v___x_5959_ = lean_box(0);
v_isShared_5960_ = v_isSharedCheck_5964_;
goto v_resetjp_5958_;
}
v_resetjp_5958_:
{
lean_object* v___x_5962_; 
if (v_isShared_5960_ == 0)
{
v___x_5962_ = v___x_5959_;
goto v_reusejp_5961_;
}
else
{
lean_object* v_reuseFailAlloc_5963_; 
v_reuseFailAlloc_5963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5963_, 0, v_a_5957_);
v___x_5962_ = v_reuseFailAlloc_5963_;
goto v_reusejp_5961_;
}
v_reusejp_5961_:
{
return v___x_5962_;
}
}
}
}
v___jp_5965_:
{
lean_object* v_projId_5974_; lean_object* v___x_5975_; lean_object* v___x_5976_; lean_object* v___x_5977_; lean_object* v___x_5978_; lean_object* v___x_5979_; lean_object* v___f_5980_; lean_object* v___x_5981_; lean_object* v_optDeriving_5982_; 
v_projId_5974_ = l_Lean_Syntax_getArg(v___y_5970_, v___x_5696_);
v___x_5975_ = lean_unsigned_to_nat(2u);
v___x_5976_ = l_Lean_Syntax_getArg(v___y_5970_, v___x_5975_);
v___x_5977_ = l_Lean_Syntax_getArg(v___x_5976_, v___x_5696_);
lean_dec(v___x_5976_);
v___x_5978_ = l_Lean_Syntax_getArg(v___x_5977_, v___y_5969_);
lean_dec(v___x_5977_);
v___x_5979_ = l_Lean_Syntax_getArg(v___x_5978_, v___x_5696_);
lean_dec(v___x_5978_);
lean_inc(v___x_5697_);
lean_inc_ref(v_modifiers_5680_);
v___f_5980_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDefeqStructure___lam__6___boxed), 10, 7);
lean_closure_set(v___f_5980_, 0, v_modifiers_5680_);
lean_closure_set(v___f_5980_, 1, v___x_5692_);
lean_closure_set(v___f_5980_, 2, v___x_5693_);
lean_closure_set(v___f_5980_, 3, v___x_5694_);
lean_closure_set(v___f_5980_, 4, v___x_5979_);
lean_closure_set(v___f_5980_, 5, v___x_5697_);
lean_closure_set(v___f_5980_, 6, v___y_5967_);
v___x_5981_ = lean_unsigned_to_nat(5u);
v_optDeriving_5982_ = l_Lean_Syntax_getArg(v_stx_5681_, v___x_5981_);
if (lean_obj_tag(v___y_5971_) == 0)
{
lean_object* v___x_5983_; 
v___x_5983_ = lean_box(0);
v___y_5898_ = v___y_5966_;
v___y_5899_ = v___y_5968_;
v___y_5900_ = v___x_5975_;
v___y_5901_ = v_projId_5974_;
v___y_5902_ = v___y_5969_;
v___y_5903_ = v_optDeriving_5982_;
v___y_5904_ = v___f_5980_;
v___y_5905_ = v___y_5970_;
v___y_5906_ = v___y_5971_;
v_ctorDoc_x3f_5907_ = v___x_5983_;
v___y_5908_ = v___y_5972_;
v___y_5909_ = v___y_5973_;
goto v___jp_5897_;
}
else
{
lean_object* v_val_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; 
v_val_5984_ = lean_ctor_get(v___y_5971_, 0);
v___x_5985_ = l_Lean_Syntax_getArg(v_val_5984_, v___y_5969_);
v___x_5986_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__10));
v___x_5987_ = l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f(v___x_5985_, v___x_5986_, v___y_5972_, v___y_5973_);
lean_dec(v___x_5985_);
if (lean_obj_tag(v___x_5987_) == 0)
{
lean_object* v_a_5988_; 
v_a_5988_ = lean_ctor_get(v___x_5987_, 0);
lean_inc(v_a_5988_);
lean_dec_ref_known(v___x_5987_, 1);
v___y_5898_ = v___y_5966_;
v___y_5899_ = v___y_5968_;
v___y_5900_ = v___x_5975_;
v___y_5901_ = v_projId_5974_;
v___y_5902_ = v___y_5969_;
v___y_5903_ = v_optDeriving_5982_;
v___y_5904_ = v___f_5980_;
v___y_5905_ = v___y_5970_;
v___y_5906_ = v___y_5971_;
v_ctorDoc_x3f_5907_ = v_a_5988_;
v___y_5908_ = v___y_5972_;
v___y_5909_ = v___y_5973_;
goto v___jp_5897_;
}
else
{
lean_object* v_a_5989_; lean_object* v___x_5991_; uint8_t v_isShared_5992_; uint8_t v_isSharedCheck_5996_; 
lean_dec_ref_known(v___y_5971_, 1);
lean_dec(v_optDeriving_5982_);
lean_dec_ref(v___f_5980_);
lean_dec(v_projId_5974_);
lean_dec(v___y_5970_);
lean_dec(v___y_5969_);
lean_dec(v___y_5966_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v_a_5989_ = lean_ctor_get(v___x_5987_, 0);
v_isSharedCheck_5996_ = !lean_is_exclusive(v___x_5987_);
if (v_isSharedCheck_5996_ == 0)
{
v___x_5991_ = v___x_5987_;
v_isShared_5992_ = v_isSharedCheck_5996_;
goto v_resetjp_5990_;
}
else
{
lean_inc(v_a_5989_);
lean_dec(v___x_5987_);
v___x_5991_ = lean_box(0);
v_isShared_5992_ = v_isSharedCheck_5996_;
goto v_resetjp_5990_;
}
v_resetjp_5990_:
{
lean_object* v___x_5994_; 
if (v_isShared_5992_ == 0)
{
v___x_5994_ = v___x_5991_;
goto v_reusejp_5993_;
}
else
{
lean_object* v_reuseFailAlloc_5995_; 
v_reuseFailAlloc_5995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5995_, 0, v_a_5989_);
v___x_5994_ = v_reuseFailAlloc_5995_;
goto v_reusejp_5993_;
}
v_reusejp_5993_:
{
return v___x_5994_;
}
}
}
}
}
v___jp_5997_:
{
lean_object* v___x_6006_; lean_object* v___x_6007_; 
lean_dec(v___y_6005_);
lean_dec(v___y_6002_);
lean_dec(v___y_5999_);
lean_dec(v___y_5998_);
v___x_6006_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___closed__12, &l_Lean_Elab_Command_elabDefeqStructure___closed__12_once, _init_l_Lean_Elab_Command_elabDefeqStructure___closed__12);
v___x_6007_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v___y_6004_, v___x_6006_, v___y_6001_, v___y_6003_);
lean_dec(v___y_6004_);
return v___x_6007_;
}
v___jp_6008_:
{
if (v___y_6016_ == 0)
{
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
lean_inc(v___y_6009_);
v___y_5998_ = v___y_6009_;
v___y_5999_ = v___y_6010_;
v___y_6000_ = v___y_6011_;
v___y_6001_ = v___y_6012_;
v___y_6002_ = v___y_6009_;
v___y_6003_ = v___y_6013_;
v___y_6004_ = v___y_6014_;
v___y_6005_ = v___y_6015_;
goto v___jp_5997_;
}
else
{
lean_object* v___x_6017_; lean_object* v___x_6018_; lean_object* v___x_6019_; uint8_t v___x_6020_; 
v___x_6017_ = lean_unsigned_to_nat(2u);
v___x_6018_ = l_Lean_Syntax_getArg(v___y_6014_, v___x_6017_);
v___x_6019_ = l_Lean_Syntax_getArg(v___x_6018_, v___x_5696_);
lean_dec(v___x_6018_);
v___x_6020_ = l_Lean_Syntax_isNone(v___x_6019_);
lean_dec(v___x_6019_);
if (v___x_6020_ == 0)
{
lean_object* v___x_6021_; lean_object* v___x_6022_; uint8_t v___x_6023_; 
v___x_6021_ = lean_unsigned_to_nat(3u);
v___x_6022_ = l_Lean_Syntax_getArg(v___y_6014_, v___x_6021_);
v___x_6023_ = l_Lean_Syntax_isNone(v___x_6022_);
lean_dec(v___x_6022_);
if (v___x_6023_ == 0)
{
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
lean_inc(v___y_6009_);
v___y_5998_ = v___y_6009_;
v___y_5999_ = v___y_6010_;
v___y_6000_ = v___y_6011_;
v___y_6001_ = v___y_6012_;
v___y_6002_ = v___y_6009_;
v___y_6003_ = v___y_6013_;
v___y_6004_ = v___y_6014_;
v___y_6005_ = v___y_6015_;
goto v___jp_5997_;
}
else
{
lean_inc(v___y_6009_);
v___y_5966_ = v___y_6009_;
v___y_5967_ = v___y_6010_;
v___y_5968_ = v___y_6011_;
v___y_5969_ = v___y_6009_;
v___y_5970_ = v___y_6014_;
v___y_5971_ = v___y_6015_;
v___y_5972_ = v___y_6012_;
v___y_5973_ = v___y_6013_;
goto v___jp_5965_;
}
}
else
{
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
lean_inc(v___y_6009_);
v___y_5998_ = v___y_6009_;
v___y_5999_ = v___y_6010_;
v___y_6000_ = v___y_6011_;
v___y_6001_ = v___y_6012_;
v___y_6002_ = v___y_6009_;
v___y_6003_ = v___y_6013_;
v___y_6004_ = v___y_6014_;
v___y_6005_ = v___y_6015_;
goto v___jp_5997_;
}
}
}
v___jp_6024_:
{
lean_object* v___x_6030_; uint8_t v___x_6031_; 
v___x_6030_ = lean_array_get_size(v_snd_6029_);
v___x_6031_ = lean_nat_dec_eq(v___x_6030_, v___x_5696_);
if (v___x_6031_ == 0)
{
lean_object* v___x_6032_; uint8_t v___x_6033_; 
lean_dec(v_fst_6028_);
lean_dec(v___y_6025_);
lean_dec_ref(v_modifiers_5680_);
v___x_6032_ = lean_unsigned_to_nat(0u);
v___x_6033_ = lean_nat_dec_eq(v___x_6030_, v___x_6032_);
if (v___x_6033_ == 0)
{
lean_object* v___x_6034_; 
lean_dec(v___x_5697_);
v___x_6034_ = lean_array_get(v___x_5691_, v_snd_6029_, v___x_5696_);
lean_dec_ref(v_snd_6029_);
v___y_5686_ = v___y_6026_;
v___y_5687_ = v___y_6027_;
v___y_5688_ = v___x_6034_;
goto v___jp_5685_;
}
else
{
lean_dec_ref(v_snd_6029_);
v___y_5686_ = v___y_6026_;
v___y_5687_ = v___y_6027_;
v___y_5688_ = v___x_5697_;
goto v___jp_5685_;
}
}
else
{
lean_object* v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; uint8_t v___x_6038_; 
v___x_6035_ = lean_unsigned_to_nat(0u);
v___x_6036_ = lean_array_fget(v_snd_6029_, v___x_6035_);
lean_dec_ref(v_snd_6029_);
v___x_6037_ = ((lean_object*)(l_Lean_Elab_Command_elabDefeqStructure___closed__14));
lean_inc(v___x_6036_);
v___x_6038_ = l_Lean_Syntax_isOfKind(v___x_6036_, v___x_6037_);
if (v___x_6038_ == 0)
{
v___y_6009_ = v___x_6035_;
v___y_6010_ = v___y_6025_;
v___y_6011_ = v___x_6031_;
v___y_6012_ = v___y_6026_;
v___y_6013_ = v___y_6027_;
v___y_6014_ = v___x_6036_;
v___y_6015_ = v_fst_6028_;
v___y_6016_ = v___x_6038_;
goto v___jp_6008_;
}
else
{
lean_object* v___x_6039_; lean_object* v___x_6040_; lean_object* v___x_6041_; lean_object* v___x_6042_; uint8_t v___x_6043_; 
v___x_6039_ = lean_unsigned_to_nat(2u);
v___x_6040_ = l_Lean_Syntax_getArg(v___x_6036_, v___x_6039_);
v___x_6041_ = l_Lean_Syntax_getArg(v___x_6040_, v___x_6035_);
lean_dec(v___x_6040_);
v___x_6042_ = l_Lean_Syntax_getNumArgs(v___x_6041_);
lean_dec(v___x_6041_);
v___x_6043_ = lean_nat_dec_eq(v___x_6042_, v___x_6035_);
lean_dec(v___x_6042_);
v___y_6009_ = v___x_6035_;
v___y_6010_ = v___y_6025_;
v___y_6011_ = v___x_6031_;
v___y_6012_ = v___y_6026_;
v___y_6013_ = v___y_6027_;
v___y_6014_ = v___x_6036_;
v___y_6015_ = v_fst_6028_;
v___y_6016_ = v___x_6043_;
goto v___jp_6008_;
}
}
}
v___jp_6044_:
{
lean_object* v___x_6050_; lean_object* v___x_6051_; lean_object* v___x_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; 
v___x_6050_ = lean_unsigned_to_nat(2u);
v___x_6051_ = l_Lean_Syntax_getArg(v___y_6046_, v___x_6050_);
lean_dec(v___y_6046_);
v___x_6052_ = lean_unsigned_to_nat(0u);
v___x_6053_ = l_Lean_Syntax_getArg(v___x_6051_, v___x_6052_);
lean_dec(v___x_6051_);
v___x_6054_ = l_Lean_Syntax_getArgs(v___x_6053_);
lean_dec(v___x_6053_);
v___y_6025_ = v___y_6045_;
v___y_6026_ = v___y_6047_;
v___y_6027_ = v___y_6048_;
v_fst_6028_ = v___y_6049_;
v_snd_6029_ = v___x_6054_;
goto v___jp_6024_;
}
v___jp_6055_:
{
lean_object* v___x_6059_; lean_object* v___x_6060_; uint8_t v___x_6061_; 
v___x_6059_ = lean_unsigned_to_nat(4u);
v___x_6060_ = l_Lean_Syntax_getArg(v_stx_5681_, v___x_6059_);
v___x_6061_ = l_Lean_Syntax_isNone(v___x_6060_);
if (v___x_6061_ == 0)
{
lean_object* v___x_6062_; uint8_t v___x_6063_; 
v___x_6062_ = l_Lean_Syntax_getArg(v___x_6060_, v___x_5696_);
v___x_6063_ = l_Lean_Syntax_isNone(v___x_6062_);
if (v___x_6063_ == 0)
{
lean_object* v___x_6064_; lean_object* v___x_6065_; lean_object* v___x_6066_; 
v___x_6064_ = lean_unsigned_to_nat(0u);
v___x_6065_ = l_Lean_Syntax_getArg(v___x_6062_, v___x_6064_);
lean_dec(v___x_6062_);
v___x_6066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6066_, 0, v___x_6065_);
v___y_6045_ = v___y_6058_;
v___y_6046_ = v___x_6060_;
v___y_6047_ = v___y_6056_;
v___y_6048_ = v___y_6057_;
v___y_6049_ = v___x_6066_;
goto v___jp_6044_;
}
else
{
lean_object* v___x_6067_; 
lean_dec(v___x_6062_);
v___x_6067_ = lean_box(0);
v___y_6045_ = v___y_6058_;
v___y_6046_ = v___x_6060_;
v___y_6047_ = v___y_6056_;
v___y_6048_ = v___y_6057_;
v___y_6049_ = v___x_6067_;
goto v___jp_6044_;
}
}
else
{
lean_object* v___x_6068_; lean_object* v___x_6069_; 
lean_dec(v___x_6060_);
v___x_6068_ = lean_box(0);
v___x_6069_ = ((lean_object*)(l_Lean_Elab_Command_elabParamInfoUpdates___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_addDefeqStructureCtorProj_spec__4___closed__3));
v___y_6025_ = v___y_6058_;
v___y_6026_ = v___y_6056_;
v___y_6027_ = v___y_6057_;
v_fst_6028_ = v___x_6068_;
v_snd_6029_ = v___x_6069_;
goto v___jp_6024_;
}
}
v___jp_6070_:
{
lean_object* v___x_6074_; lean_object* v___x_6075_; uint8_t v___x_6076_; 
v___x_6074_ = lean_unsigned_to_nat(3u);
v___x_6075_ = l_Lean_Syntax_getArg(v_stx_5681_, v___x_6074_);
v___x_6076_ = l_Lean_Syntax_isNone(v___x_6075_);
if (v___x_6076_ == 0)
{
lean_object* v___x_6077_; lean_object* v___x_6078_; 
lean_dec(v_declSig_6071_);
lean_dec(v___x_5697_);
lean_dec_ref(v_modifiers_5680_);
v___x_6077_ = lean_obj_once(&l_Lean_Elab_Command_elabDefeqStructure___closed__16, &l_Lean_Elab_Command_elabDefeqStructure___closed__16_once, _init_l_Lean_Elab_Command_elabDefeqStructure___closed__16);
v___x_6078_ = l_Lean_throwErrorAt___at___00__private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_memberDocComment_x3f_spec__0___redArg(v___x_6075_, v___x_6077_, v___y_6072_, v___y_6073_);
lean_dec(v___x_6075_);
return v___x_6078_;
}
else
{
lean_dec(v___x_6075_);
v___y_6056_ = v___y_6072_;
v___y_6057_ = v___y_6073_;
v___y_6058_ = v_declSig_6071_;
goto v___jp_6055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabDefeqStructure___boxed(lean_object* v_modifiers_6126_, lean_object* v_stx_6127_, lean_object* v_a_6128_, lean_object* v_a_6129_, lean_object* v_a_6130_){
_start:
{
lean_object* v_res_6131_; 
v_res_6131_ = l_Lean_Elab_Command_elabDefeqStructure(v_modifiers_6126_, v_stx_6127_, v_a_6128_, v_a_6129_);
lean_dec(v_a_6129_);
lean_dec_ref(v_a_6128_);
lean_dec(v_stx_6127_);
return v_res_6131_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5(lean_object* v_declName_6132_, uint8_t v_s_6133_, lean_object* v___y_6134_, lean_object* v___y_6135_){
_start:
{
lean_object* v___x_6137_; 
v___x_6137_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___redArg(v_declName_6132_, v_s_6133_, v___y_6135_);
return v___x_6137_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5___boxed(lean_object* v_declName_6138_, lean_object* v_s_6139_, lean_object* v___y_6140_, lean_object* v___y_6141_, lean_object* v___y_6142_){
_start:
{
uint8_t v_s_boxed_6143_; lean_object* v_res_6144_; 
v_s_boxed_6143_ = lean_unbox(v_s_6139_);
v_res_6144_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabDefeqStructure_spec__2_spec__5(v_declName_6138_, v_s_boxed_6143_, v___y_6140_, v___y_6141_);
lean_dec(v___y_6141_);
lean_dec_ref(v___y_6140_);
return v_res_6144_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3(lean_object* v___x_6145_, lean_object* v___x_6146_, lean_object* v___x_6147_, lean_object* v___y_6148_, lean_object* v___x_6149_, lean_object* v_as_6150_, lean_object* v_as_x27_6151_, lean_object* v_b_6152_, lean_object* v_a_6153_, lean_object* v___y_6154_, lean_object* v___y_6155_){
_start:
{
lean_object* v___x_6157_; 
v___x_6157_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___redArg(v___x_6145_, v___x_6146_, v___x_6147_, v___y_6148_, v___x_6149_, v_as_x27_6151_, v_b_6152_, v___y_6154_, v___y_6155_);
return v___x_6157_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3___boxed(lean_object* v___x_6158_, lean_object* v___x_6159_, lean_object* v___x_6160_, lean_object* v___y_6161_, lean_object* v___x_6162_, lean_object* v_as_6163_, lean_object* v_as_x27_6164_, lean_object* v_b_6165_, lean_object* v_a_6166_, lean_object* v___y_6167_, lean_object* v___y_6168_, lean_object* v___y_6169_){
_start:
{
lean_object* v_res_6170_; 
v_res_6170_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__3(v___x_6158_, v___x_6159_, v___x_6160_, v___y_6161_, v___x_6162_, v_as_6163_, v_as_x27_6164_, v_b_6165_, v_a_6166_, v___y_6167_, v___y_6168_);
lean_dec(v___y_6168_);
lean_dec_ref(v___y_6167_);
lean_dec(v_as_x27_6164_);
lean_dec(v_as_6163_);
lean_dec(v___x_6162_);
lean_dec(v___y_6161_);
lean_dec(v___x_6160_);
lean_dec(v___x_6159_);
lean_dec(v___x_6158_);
return v_res_6170_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6(lean_object* v_as_6171_, lean_object* v_as_x27_6172_, lean_object* v_b_6173_, lean_object* v_a_6174_, lean_object* v___y_6175_, lean_object* v___y_6176_){
_start:
{
lean_object* v___x_6178_; 
v___x_6178_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___redArg(v_as_x27_6172_, v_b_6173_, v___y_6175_, v___y_6176_);
return v___x_6178_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6___boxed(lean_object* v_as_6179_, lean_object* v_as_x27_6180_, lean_object* v_b_6181_, lean_object* v_a_6182_, lean_object* v___y_6183_, lean_object* v___y_6184_, lean_object* v___y_6185_){
_start:
{
lean_object* v_res_6186_; 
v_res_6186_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__6(v_as_6179_, v_as_x27_6180_, v_b_6181_, v_a_6182_, v___y_6183_, v___y_6184_);
lean_dec(v___y_6184_);
lean_dec_ref(v___y_6183_);
lean_dec(v_as_x27_6180_);
lean_dec(v_as_6179_);
return v_res_6186_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7(lean_object* v_as_6187_, lean_object* v_as_x27_6188_, lean_object* v_b_6189_, lean_object* v_a_6190_, lean_object* v___y_6191_, lean_object* v___y_6192_){
_start:
{
lean_object* v___x_6194_; 
v___x_6194_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___redArg(v_as_x27_6188_, v_b_6189_, v___y_6191_, v___y_6192_);
return v___x_6194_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7___boxed(lean_object* v_as_6195_, lean_object* v_as_x27_6196_, lean_object* v_b_6197_, lean_object* v_a_6198_, lean_object* v___y_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_){
_start:
{
lean_object* v_res_6202_; 
v_res_6202_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabDefeqStructure_spec__7(v_as_6195_, v_as_x27_6196_, v_b_6197_, v_a_6198_, v___y_6199_, v___y_6200_);
lean_dec(v___y_6200_);
lean_dec_ref(v___y_6199_);
lean_dec(v_as_x27_6196_);
lean_dec(v_as_6195_);
return v_res_6202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12(lean_object* v_stx_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_){
_start:
{
lean_object* v___x_6207_; 
v___x_6207_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___redArg(v_stx_6203_, v___y_6204_);
return v___x_6207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12___boxed(lean_object* v_stx_6208_, lean_object* v___y_6209_, lean_object* v___y_6210_, lean_object* v___y_6211_){
_start:
{
lean_object* v_res_6212_; 
v_res_6212_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__12(v_stx_6208_, v___y_6209_, v___y_6210_);
lean_dec(v___y_6210_);
lean_dec_ref(v___y_6209_);
lean_dec(v_stx_6208_);
return v_res_6212_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13(lean_object* v_declName_6213_, lean_object* v_declRanges_6214_, lean_object* v___y_6215_, lean_object* v___y_6216_){
_start:
{
lean_object* v___x_6218_; 
v___x_6218_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___redArg(v_declName_6213_, v_declRanges_6214_, v___y_6216_);
return v___x_6218_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13___boxed(lean_object* v_declName_6219_, lean_object* v_declRanges_6220_, lean_object* v___y_6221_, lean_object* v___y_6222_, lean_object* v___y_6223_){
_start:
{
lean_object* v_res_6224_; 
v_res_6224_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabDefeqStructure_spec__8_spec__13(v_declName_6219_, v_declRanges_6220_, v___y_6221_, v___y_6222_);
lean_dec(v___y_6222_);
lean_dec_ref(v___y_6221_);
return v_res_6224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6(lean_object* v_t_6225_, lean_object* v___y_6226_, lean_object* v___y_6227_){
_start:
{
lean_object* v___x_6229_; 
v___x_6229_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___redArg(v_t_6225_, v___y_6227_);
return v___x_6229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6___boxed(lean_object* v_t_6230_, lean_object* v___y_6231_, lean_object* v___y_6232_, lean_object* v___y_6233_){
_start:
{
lean_object* v_res_6234_; 
v_res_6234_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__2_spec__6(v_t_6230_, v___y_6231_, v___y_6232_);
lean_dec(v___y_6232_);
lean_dec_ref(v___y_6231_);
return v_res_6234_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8(lean_object* v_env_6235_, lean_object* v___y_6236_, lean_object* v___y_6237_){
_start:
{
lean_object* v___x_6239_; 
v___x_6239_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___redArg(v_env_6235_, v___y_6237_);
return v___x_6239_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8___boxed(lean_object* v_env_6240_, lean_object* v___y_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_){
_start:
{
lean_object* v_res_6244_; 
v_res_6244_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3_spec__8(v_env_6240_, v___y_6241_, v___y_6242_);
lean_dec(v___y_6242_);
lean_dec_ref(v___y_6241_);
return v_res_6244_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3(lean_object* v_00_u03b1_6245_, lean_object* v_env_6246_, lean_object* v_x_6247_, lean_object* v___y_6248_, lean_object* v___y_6249_){
_start:
{
lean_object* v___x_6251_; 
v___x_6251_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___redArg(v_env_6246_, v_x_6247_, v___y_6248_, v___y_6249_);
return v___x_6251_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3___boxed(lean_object* v_00_u03b1_6252_, lean_object* v_env_6253_, lean_object* v_x_6254_, lean_object* v___y_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_){
_start:
{
lean_object* v_res_6258_; 
v_res_6258_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__3(v_00_u03b1_6252_, v_env_6253_, v_x_6254_, v___y_6255_, v___y_6256_);
lean_dec(v___y_6256_);
lean_dec_ref(v___y_6255_);
return v_res_6258_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15(lean_object* v_00_u03b1_6259_, lean_object* v_constName_6260_, lean_object* v___y_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_){
_start:
{
lean_object* v___x_6268_; 
v___x_6268_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___redArg(v_constName_6260_, v___y_6261_, v___y_6262_, v___y_6263_, v___y_6264_, v___y_6265_, v___y_6266_);
return v___x_6268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15___boxed(lean_object* v_00_u03b1_6269_, lean_object* v_constName_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_, lean_object* v___y_6277_){
_start:
{
lean_object* v_res_6278_; 
v_res_6278_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15(v_00_u03b1_6269_, v_constName_6270_, v___y_6271_, v___y_6272_, v___y_6273_, v___y_6274_, v___y_6275_, v___y_6276_);
lean_dec(v___y_6276_);
lean_dec_ref(v___y_6275_);
lean_dec(v___y_6274_);
lean_dec_ref(v___y_6273_);
lean_dec(v___y_6272_);
lean_dec_ref(v___y_6271_);
return v_res_6278_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21(lean_object* v_00_u03b1_6279_, lean_object* v_ref_6280_, lean_object* v_constName_6281_, lean_object* v___y_6282_, lean_object* v___y_6283_, lean_object* v___y_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_){
_start:
{
lean_object* v___x_6289_; 
v___x_6289_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___redArg(v_ref_6280_, v_constName_6281_, v___y_6282_, v___y_6283_, v___y_6284_, v___y_6285_, v___y_6286_, v___y_6287_);
return v___x_6289_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21___boxed(lean_object* v_00_u03b1_6290_, lean_object* v_ref_6291_, lean_object* v_constName_6292_, lean_object* v___y_6293_, lean_object* v___y_6294_, lean_object* v___y_6295_, lean_object* v___y_6296_, lean_object* v___y_6297_, lean_object* v___y_6298_, lean_object* v___y_6299_){
_start:
{
lean_object* v_res_6300_; 
v_res_6300_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21(v_00_u03b1_6290_, v_ref_6291_, v_constName_6292_, v___y_6293_, v___y_6294_, v___y_6295_, v___y_6296_, v___y_6297_, v___y_6298_);
lean_dec(v___y_6298_);
lean_dec_ref(v___y_6297_);
lean_dec(v___y_6296_);
lean_dec_ref(v___y_6295_);
lean_dec(v___y_6294_);
lean_dec_ref(v___y_6293_);
lean_dec(v_ref_6291_);
return v_res_6300_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18(lean_object* v_00_u03b1_6301_, lean_object* v_constName_6302_, lean_object* v___y_6303_, lean_object* v___y_6304_){
_start:
{
lean_object* v___x_6306_; 
v___x_6306_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___redArg(v_constName_6302_, v___y_6303_, v___y_6304_);
return v___x_6306_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18___boxed(lean_object* v_00_u03b1_6307_, lean_object* v_constName_6308_, lean_object* v___y_6309_, lean_object* v___y_6310_, lean_object* v___y_6311_){
_start:
{
lean_object* v_res_6312_; 
v_res_6312_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18(v_00_u03b1_6307_, v_constName_6308_, v___y_6309_, v___y_6310_);
lean_dec(v___y_6310_);
lean_dec_ref(v___y_6309_);
return v_res_6312_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25(lean_object* v_00_u03b1_6313_, lean_object* v_ref_6314_, lean_object* v_msg_6315_, lean_object* v_declHint_6316_, lean_object* v___y_6317_, lean_object* v___y_6318_, lean_object* v___y_6319_, lean_object* v___y_6320_, lean_object* v___y_6321_, lean_object* v___y_6322_){
_start:
{
lean_object* v___x_6324_; 
v___x_6324_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___redArg(v_ref_6314_, v_msg_6315_, v_declHint_6316_, v___y_6317_, v___y_6318_, v___y_6319_, v___y_6320_, v___y_6321_, v___y_6322_);
return v___x_6324_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25___boxed(lean_object* v_00_u03b1_6325_, lean_object* v_ref_6326_, lean_object* v_msg_6327_, lean_object* v_declHint_6328_, lean_object* v___y_6329_, lean_object* v___y_6330_, lean_object* v___y_6331_, lean_object* v___y_6332_, lean_object* v___y_6333_, lean_object* v___y_6334_, lean_object* v___y_6335_){
_start:
{
lean_object* v_res_6336_; 
v_res_6336_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25(v_00_u03b1_6325_, v_ref_6326_, v_msg_6327_, v_declHint_6328_, v___y_6329_, v___y_6330_, v___y_6331_, v___y_6332_, v___y_6333_, v___y_6334_);
lean_dec(v___y_6334_);
lean_dec_ref(v___y_6333_);
lean_dec(v___y_6332_);
lean_dec_ref(v___y_6331_);
lean_dec(v___y_6330_);
lean_dec_ref(v___y_6329_);
lean_dec(v_ref_6326_);
return v_res_6336_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28(lean_object* v_ref_6337_, lean_object* v_msgData_6338_, uint8_t v_severity_6339_, uint8_t v_isSilent_6340_, lean_object* v___y_6341_, lean_object* v___y_6342_, lean_object* v___y_6343_, lean_object* v___y_6344_, lean_object* v___y_6345_, lean_object* v___y_6346_){
_start:
{
lean_object* v___x_6348_; 
v___x_6348_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___redArg(v_ref_6337_, v_msgData_6338_, v_severity_6339_, v_isSilent_6340_, v___y_6343_, v___y_6344_, v___y_6345_, v___y_6346_);
return v___x_6348_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28___boxed(lean_object* v_ref_6349_, lean_object* v_msgData_6350_, lean_object* v_severity_6351_, lean_object* v_isSilent_6352_, lean_object* v___y_6353_, lean_object* v___y_6354_, lean_object* v___y_6355_, lean_object* v___y_6356_, lean_object* v___y_6357_, lean_object* v___y_6358_, lean_object* v___y_6359_){
_start:
{
uint8_t v_severity_boxed_6360_; uint8_t v_isSilent_boxed_6361_; lean_object* v_res_6362_; 
v_severity_boxed_6360_ = lean_unbox(v_severity_6351_);
v_isSilent_boxed_6361_ = lean_unbox(v_isSilent_6352_);
v_res_6362_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabDefeqStructure_spec__10_spec__17_spec__24_spec__28(v_ref_6349_, v_msgData_6350_, v_severity_boxed_6360_, v_isSilent_boxed_6361_, v___y_6353_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_, v___y_6358_);
lean_dec(v___y_6358_);
lean_dec_ref(v___y_6357_);
lean_dec(v___y_6356_);
lean_dec_ref(v___y_6355_);
lean_dec(v___y_6354_);
lean_dec_ref(v___y_6353_);
lean_dec(v_ref_6349_);
return v_res_6362_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25(lean_object* v_00_u03b1_6363_, lean_object* v_ref_6364_, lean_object* v_constName_6365_, lean_object* v___y_6366_, lean_object* v___y_6367_){
_start:
{
lean_object* v___x_6369_; 
v___x_6369_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___redArg(v_ref_6364_, v_constName_6365_, v___y_6366_, v___y_6367_);
return v___x_6369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25___boxed(lean_object* v_00_u03b1_6370_, lean_object* v_ref_6371_, lean_object* v_constName_6372_, lean_object* v___y_6373_, lean_object* v___y_6374_, lean_object* v___y_6375_){
_start:
{
lean_object* v_res_6376_; 
v_res_6376_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25(v_00_u03b1_6370_, v_ref_6371_, v_constName_6372_, v___y_6373_, v___y_6374_);
lean_dec(v___y_6374_);
lean_dec_ref(v___y_6373_);
lean_dec(v_ref_6371_);
return v_res_6376_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32(lean_object* v_msg_6377_, lean_object* v_declHint_6378_, lean_object* v___y_6379_, lean_object* v___y_6380_, lean_object* v___y_6381_, lean_object* v___y_6382_, lean_object* v___y_6383_, lean_object* v___y_6384_){
_start:
{
lean_object* v___x_6386_; 
v___x_6386_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___redArg(v_msg_6377_, v_declHint_6378_, v___y_6384_);
return v___x_6386_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32___boxed(lean_object* v_msg_6387_, lean_object* v_declHint_6388_, lean_object* v___y_6389_, lean_object* v___y_6390_, lean_object* v___y_6391_, lean_object* v___y_6392_, lean_object* v___y_6393_, lean_object* v___y_6394_, lean_object* v___y_6395_){
_start:
{
lean_object* v_res_6396_; 
v_res_6396_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabDefeqStructure_spec__9_spec__15_spec__21_spec__25_spec__28_spec__32(v_msg_6387_, v_declHint_6388_, v___y_6389_, v___y_6390_, v___y_6391_, v___y_6392_, v___y_6393_, v___y_6394_);
lean_dec(v___y_6394_);
lean_dec_ref(v___y_6393_);
lean_dec(v___y_6392_);
lean_dec_ref(v___y_6391_);
lean_dec(v___y_6390_);
lean_dec_ref(v___y_6389_);
return v_res_6396_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29(lean_object* v_00_u03b1_6397_, lean_object* v_ref_6398_, lean_object* v_msg_6399_, lean_object* v_declHint_6400_, lean_object* v___y_6401_, lean_object* v___y_6402_){
_start:
{
lean_object* v___x_6404_; 
v___x_6404_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___redArg(v_ref_6398_, v_msg_6399_, v_declHint_6400_, v___y_6401_, v___y_6402_);
return v___x_6404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29___boxed(lean_object* v_00_u03b1_6405_, lean_object* v_ref_6406_, lean_object* v_msg_6407_, lean_object* v_declHint_6408_, lean_object* v___y_6409_, lean_object* v___y_6410_, lean_object* v___y_6411_){
_start:
{
lean_object* v_res_6412_; 
v_res_6412_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29(v_00_u03b1_6405_, v_ref_6406_, v_msg_6407_, v_declHint_6408_, v___y_6409_, v___y_6410_);
lean_dec(v___y_6410_);
lean_dec_ref(v___y_6409_);
lean_dec(v_ref_6406_);
return v_res_6412_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36(lean_object* v_msg_6413_, lean_object* v_declHint_6414_, lean_object* v___y_6415_, lean_object* v___y_6416_){
_start:
{
lean_object* v___x_6418_; 
v___x_6418_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___redArg(v_msg_6413_, v_declHint_6414_, v___y_6416_);
return v___x_6418_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36___boxed(lean_object* v_msg_6419_, lean_object* v_declHint_6420_, lean_object* v___y_6421_, lean_object* v___y_6422_, lean_object* v___y_6423_){
_start:
{
lean_object* v_res_6424_; 
v_res_6424_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_Command_elabDefeqStructure_spec__1_spec__1_spec__4_spec__18_spec__25_spec__29_spec__33_spec__36(v_msg_6419_, v_declHint_6420_, v___y_6421_, v___y_6422_);
lean_dec(v___y_6422_);
lean_dec_ref(v___y_6421_);
return v_res_6424_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclModifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ConfigEval(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Injective(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_MutualInductive(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DefeqStructure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_MutualInductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig = _init_l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig();
lean_mark_persistent(l___private_Lean_Elab_DefeqStructure_0__Lean_Elab_Command_instEvalExprStructureConfig);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DefeqStructure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclModifiers(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* initialize_Lean_Elab_ConfigEval(uint8_t builtin);
lean_object* initialize_Lean_Meta_Injective(uint8_t builtin);
lean_object* initialize_Lean_Elab_MutualInductive(uint8_t builtin);
lean_object* initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* initialize_Init_Data_Function(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DefeqStructure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_VirtualStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ConfigEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Injective(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_MutualInductive(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DefeqStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DefeqStructure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DefeqStructure(builtin);
}
#ifdef __cplusplus
}
#endif
