// Lean compiler output
// Module: Lean.Elab.NewType
// Imports: public import Lean.Elab.Command public import Lean.Elab.DeclModifiers public import Lean.Elab.DeclarationRange public import Lean.Meta.VirtualStructure import Init.Data.Function import Lean.Elab.Deriving.Basic import Lean.Meta.Transport
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
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_InternalExceptionId_getName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_Elab_isAbortExceptionId(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* l_Lean_Elab_toAttributeKind___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope___redArg(lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_expandMacros(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getAttributeImpl(lean_object*, lean_object*);
extern lean_object* l_Lean_regularInitAttr;
lean_object* l_Lean_ParametricAttribute_getParam_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_instInhabitedLinterSetsState_default;
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
extern lean_object* l_Lean_Linter_linterMessageTag;
extern lean_object* l_Lean_linter_redundantVisibility;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* l_Lean_Elab_Command_getLevelNames___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_expandDeclId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_processDefDeriving___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_ConstantInfo_value_x21(lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
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
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_Meta_Transport_addTransportDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Lean_registerVirtualStructure(lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Equiv"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3_value;
static const lean_closure_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed, .m_arity = 9, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(248, 223, 249, 79, 34, 43, 167, 75)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "invalid `newtype`, the right-hand side must be a type, but has type"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed(lean_object**);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "` is not a definition"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Lean.MonadEnv"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4_value;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.isDefn\?"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5_value;
static const lean_string_object l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6 = (const lean_object*)&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6_value;
static lean_once_cell_t l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__5 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__5_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__7 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__7_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__9 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__9_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__11 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__11_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__13 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__13_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__15 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__15_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__17 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__17_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Command_elabNewtype___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__0;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__1_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "equiv"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(117, 128, 25, 164, 22, 153, 243, 50)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__7_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__9 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Command_elabNewtype___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__10;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__13_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__14 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "byTactic"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(187, 150, 238, 148, 228, 221, 116, 224)}};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4_value;
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__1_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot use attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "]`: module `"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "` is loaded for IR only (reached as a private `meta` dependency). Add an import of `"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Unknown attribute `["};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]`"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__10_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__11_value;
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value_aux_1),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value_aux_2),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12_value;
static const lean_string_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Unknown attribute"};
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13_value;
static lean_once_cell_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0 = (const lean_object*)&l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "This linter can be disabled with `set_option "};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1;
static const lean_string_object l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " false`"};
static const lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2 = (const lean_object*)&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2_value;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "; the modifier has no effect"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "`public` is the default visibility"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " inside a `public section`"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value_aux_0),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6_value;
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected visibility modifier"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9;
static const lean_string_object l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "`private` has no effect in a `module` file outside `public section`; declarations are already `private` by default"};
static const lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__0 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value_aux_2),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15_value),LEAN_SCALAR_PTR_LITERAL(124, 247, 59, 43, 44, 177, 111, 66)}};
static const lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2 = (const lean_object*)&l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "newtypeCmd"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 214, 155, 84, 76, 243, 163, 92)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabNewtype"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 181, 244, 12, 1, 14, 170, 235)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(140, 106, 150, 17, 51, 30, 9, 241)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(lean_object* v_name_1_, lean_object* v_levelParams_2_, lean_object* v_type_3_, lean_object* v_value_4_, lean_object* v_hints_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; uint8_t v___y_10_; uint8_t v___y_17_; lean_object* v_env_20_; uint8_t v___x_21_; 
v___x_8_ = lean_st_ref_get(v___y_6_);
v_env_20_ = lean_ctor_get(v___x_8_, 0);
lean_inc_ref_n(v_env_20_, 2);
lean_dec(v___x_8_);
v___x_21_ = l_Lean_Environment_hasUnsafe(v_env_20_, v_type_3_);
if (v___x_21_ == 0)
{
uint8_t v___x_22_; 
v___x_22_ = l_Lean_Environment_hasUnsafe(v_env_20_, v_value_4_);
v___y_17_ = v___x_22_;
goto v___jp_16_;
}
else
{
lean_dec_ref(v_env_20_);
v___y_17_ = v___x_21_;
goto v___jp_16_;
}
v___jp_9_:
{
lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
lean_inc(v_name_1_);
v___x_11_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_11_, 0, v_name_1_);
lean_ctor_set(v___x_11_, 1, v_levelParams_2_);
lean_ctor_set(v___x_11_, 2, v_type_3_);
v___x_12_ = lean_box(0);
v___x_13_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_13_, 0, v_name_1_);
lean_ctor_set(v___x_13_, 1, v___x_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_14_, 0, v___x_11_);
lean_ctor_set(v___x_14_, 1, v_value_4_);
lean_ctor_set(v___x_14_, 2, v_hints_5_);
lean_ctor_set(v___x_14_, 3, v___x_13_);
lean_ctor_set_uint8(v___x_14_, sizeof(void*)*4, v___y_10_);
v___x_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
return v___x_15_;
}
v___jp_16_:
{
if (v___y_17_ == 0)
{
uint8_t v___x_18_; 
v___x_18_ = 1;
v___y_10_ = v___x_18_;
goto v___jp_9_;
}
else
{
uint8_t v___x_19_; 
v___x_19_ = 0;
v___y_10_ = v___x_19_;
goto v___jp_9_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg___boxed(lean_object* v_name_23_, lean_object* v_levelParams_24_, lean_object* v_type_25_, lean_object* v_value_26_, lean_object* v_hints_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_name_23_, v_levelParams_24_, v_type_25_, v_value_26_, v_hints_27_, v___y_28_);
lean_dec(v___y_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3(lean_object* v_name_31_, lean_object* v_levelParams_32_, lean_object* v_type_33_, lean_object* v_value_34_, lean_object* v_hints_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_name_31_, v_levelParams_32_, v_type_33_, v_value_34_, v_hints_35_, v___y_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___boxed(lean_object* v_name_44_, lean_object* v_levelParams_45_, lean_object* v_type_46_, lean_object* v_value_47_, lean_object* v_hints_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3(v_name_44_, v_levelParams_45_, v_type_46_, v_value_47_, v_hints_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_);
lean_dec(v___y_54_);
lean_dec_ref(v___y_53_);
lean_dec(v___y_52_);
lean_dec_ref(v___y_51_);
lean_dec(v___y_50_);
lean_dec_ref(v___y_49_);
return v_res_56_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_57_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_59_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1);
v___x_61_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__1);
v___x_63_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_63_, 0, v___x_62_);
lean_ctor_set(v___x_63_, 1, v___x_62_);
lean_ctor_set(v___x_63_, 2, v___x_62_);
lean_ctor_set(v___x_63_, 3, v___x_62_);
lean_ctor_set(v___x_63_, 4, v___x_62_);
lean_ctor_set(v___x_63_, 5, v___x_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(lean_object* v_declName_64_, uint8_t v_s_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v___x_69_; lean_object* v_env_70_; lean_object* v_nextMacroScope_71_; lean_object* v_ngen_72_; lean_object* v_auxDeclNGen_73_; lean_object* v_traceState_74_; lean_object* v_messages_75_; lean_object* v_infoState_76_; lean_object* v_snapshotTasks_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_106_; 
v___x_69_ = lean_st_ref_take(v___y_67_);
v_env_70_ = lean_ctor_get(v___x_69_, 0);
v_nextMacroScope_71_ = lean_ctor_get(v___x_69_, 1);
v_ngen_72_ = lean_ctor_get(v___x_69_, 2);
v_auxDeclNGen_73_ = lean_ctor_get(v___x_69_, 3);
v_traceState_74_ = lean_ctor_get(v___x_69_, 4);
v_messages_75_ = lean_ctor_get(v___x_69_, 6);
v_infoState_76_ = lean_ctor_get(v___x_69_, 7);
v_snapshotTasks_77_ = lean_ctor_get(v___x_69_, 8);
v_isSharedCheck_106_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_106_ == 0)
{
lean_object* v_unused_107_; 
v_unused_107_ = lean_ctor_get(v___x_69_, 5);
lean_dec(v_unused_107_);
v___x_79_ = v___x_69_;
v_isShared_80_ = v_isSharedCheck_106_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_snapshotTasks_77_);
lean_inc(v_infoState_76_);
lean_inc(v_messages_75_);
lean_inc(v_traceState_74_);
lean_inc(v_auxDeclNGen_73_);
lean_inc(v_ngen_72_);
lean_inc(v_nextMacroScope_71_);
lean_inc(v_env_70_);
lean_dec(v___x_69_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_106_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
uint8_t v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_86_; 
v___x_81_ = 0;
v___x_82_ = lean_box(0);
v___x_83_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_70_, v_declName_64_, v_s_65_, v___x_81_, v___x_82_);
v___x_84_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 5, v___x_84_);
lean_ctor_set(v___x_79_, 0, v___x_83_);
v___x_86_ = v___x_79_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_83_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v_nextMacroScope_71_);
lean_ctor_set(v_reuseFailAlloc_105_, 2, v_ngen_72_);
lean_ctor_set(v_reuseFailAlloc_105_, 3, v_auxDeclNGen_73_);
lean_ctor_set(v_reuseFailAlloc_105_, 4, v_traceState_74_);
lean_ctor_set(v_reuseFailAlloc_105_, 5, v___x_84_);
lean_ctor_set(v_reuseFailAlloc_105_, 6, v_messages_75_);
lean_ctor_set(v_reuseFailAlloc_105_, 7, v_infoState_76_);
lean_ctor_set(v_reuseFailAlloc_105_, 8, v_snapshotTasks_77_);
v___x_86_ = v_reuseFailAlloc_105_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v_mctx_89_; lean_object* v_zetaDeltaFVarIds_90_; lean_object* v_postponed_91_; lean_object* v_diag_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_103_; 
v___x_87_ = lean_st_ref_put(v___y_67_, v___x_86_);
v___x_88_ = lean_st_ref_take(v___y_66_);
v_mctx_89_ = lean_ctor_get(v___x_88_, 0);
v_zetaDeltaFVarIds_90_ = lean_ctor_get(v___x_88_, 2);
v_postponed_91_ = lean_ctor_get(v___x_88_, 3);
v_diag_92_ = lean_ctor_get(v___x_88_, 4);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_88_);
if (v_isSharedCheck_103_ == 0)
{
lean_object* v_unused_104_; 
v_unused_104_ = lean_ctor_get(v___x_88_, 1);
lean_dec(v_unused_104_);
v___x_94_ = v___x_88_;
v_isShared_95_ = v_isSharedCheck_103_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_diag_92_);
lean_inc(v_postponed_91_);
lean_inc(v_zetaDeltaFVarIds_90_);
lean_inc(v_mctx_89_);
lean_dec(v___x_88_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_103_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_99_; 
v___x_96_ = lean_box(0);
v___x_97_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 1, v___x_97_);
v___x_99_ = v___x_94_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_mctx_89_);
lean_ctor_set(v_reuseFailAlloc_102_, 1, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_102_, 2, v_zetaDeltaFVarIds_90_);
lean_ctor_set(v_reuseFailAlloc_102_, 3, v_postponed_91_);
lean_ctor_set(v_reuseFailAlloc_102_, 4, v_diag_92_);
v___x_99_ = v_reuseFailAlloc_102_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_100_ = lean_st_ref_put(v___y_66_, v___x_99_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_96_);
return v___x_101_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___boxed(lean_object* v_declName_108_, lean_object* v_s_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
uint8_t v_s_boxed_113_; lean_object* v_res_114_; 
v_s_boxed_113_ = lean_unbox(v_s_109_);
v_res_114_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_declName_108_, v_s_boxed_113_, v___y_110_, v___y_111_);
lean_dec(v___y_111_);
lean_dec(v___y_110_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5(lean_object* v_declName_115_, uint8_t v_s_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_declName_115_, v_s_116_, v___y_120_, v___y_122_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___boxed(lean_object* v_declName_125_, lean_object* v_s_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
uint8_t v_s_boxed_134_; lean_object* v_res_135_; 
v_s_boxed_134_ = lean_unbox(v_s_126_);
v_res_135_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5(v_declName_125_, v_s_boxed_134_, v___y_127_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___lam__0(lean_object* v_k_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v___x_144_; 
lean_inc(v___y_138_);
lean_inc_ref(v___y_137_);
v___x_144_ = lean_apply_7(v_k_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, lean_box(0));
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___lam__0___boxed(lean_object* v_k_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v_res_153_; 
v_res_153_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___lam__0(v_k_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_);
lean_dec(v___y_147_);
lean_dec_ref(v___y_146_);
return v_res_153_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(lean_object* v_bs_154_, lean_object* v_k_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_){
_start:
{
lean_object* v___f_163_; lean_object* v___x_164_; 
lean_inc(v___y_157_);
lean_inc_ref(v___y_156_);
v___f_163_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_163_, 0, v_k_155_);
lean_closure_set(v___f_163_, 1, v___y_156_);
lean_closure_set(v___f_163_, 2, v___y_157_);
v___x_164_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewBinderInfosImp(lean_box(0), v_bs_154_, v___f_163_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
if (lean_obj_tag(v___x_164_) == 0)
{
return v___x_164_;
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_164_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_164_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg___boxed(lean_object* v_bs_173_, lean_object* v_k_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_bs_173_, v_k_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec_ref(v_bs_173_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(lean_object* v_00_u03b1_183_, lean_object* v_bs_184_, lean_object* v_k_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_bs_184_, v_k_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___boxed(lean_object* v_00_u03b1_194_, lean_object* v_bs_195_, lean_object* v_k_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6(v_00_u03b1_194_, v_bs_195_, v_k_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_);
lean_dec(v___y_202_);
lean_dec_ref(v___y_201_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec_ref(v_bs_195_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0(lean_object* v_k_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v_b_208_, lean_object* v_c_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
lean_object* v___x_215_; 
lean_inc(v___y_213_);
lean_inc_ref(v___y_212_);
lean_inc(v___y_211_);
lean_inc_ref(v___y_210_);
lean_inc(v___y_207_);
lean_inc_ref(v___y_206_);
v___x_215_ = lean_apply_9(v_k_205_, v_b_208_, v_c_209_, v___y_206_, v___y_207_, v___y_210_, v___y_211_, v___y_212_, v___y_213_, lean_box(0));
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed(lean_object* v_k_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v_b_219_, lean_object* v_c_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0(v_k_216_, v___y_217_, v___y_218_, v_b_219_, v_c_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_);
lean_dec(v___y_224_);
lean_dec_ref(v___y_223_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(lean_object* v_type_227_, lean_object* v_k_228_, uint8_t v_cleanupAnnotations_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v___f_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
lean_inc(v___y_231_);
lean_inc_ref(v___y_230_);
v___f_237_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_237_, 0, v_k_228_);
lean_closure_set(v___f_237_, 1, v___y_230_);
lean_closure_set(v___f_237_, 2, v___y_231_);
v___x_238_ = 0;
v___x_239_ = lean_box(0);
v___x_240_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_238_, v___x_239_, v_type_227_, v___f_237_, v_cleanupAnnotations_229_, v___x_238_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
if (lean_obj_tag(v___x_240_) == 0)
{
return v___x_240_;
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_240_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_240_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___boxed(lean_object* v_type_249_, lean_object* v_k_250_, lean_object* v_cleanupAnnotations_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_259_; lean_object* v_res_260_; 
v_cleanupAnnotations_boxed_259_ = lean_unbox(v_cleanupAnnotations_251_);
v_res_260_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(v_type_249_, v_k_250_, v_cleanupAnnotations_boxed_259_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8(lean_object* v_00_u03b1_261_, lean_object* v_type_262_, lean_object* v_k_263_, uint8_t v_cleanupAnnotations_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(v_type_262_, v_k_263_, v_cleanupAnnotations_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_, v___y_270_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___boxed(lean_object* v_00_u03b1_273_, lean_object* v_type_274_, lean_object* v_k_275_, lean_object* v_cleanupAnnotations_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_284_; lean_object* v_res_285_; 
v_cleanupAnnotations_boxed_284_ = lean_unbox(v_cleanupAnnotations_276_);
v_res_285_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8(v_00_u03b1_273_, v_type_274_, v_k_275_, v_cleanupAnnotations_boxed_284_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(lean_object* v_params_286_, lean_object* v_resultType_287_, lean_object* v_name_288_, lean_object* v_levelParams_289_, uint8_t v___x_290_, lean_object* v_a_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_){
_start:
{
lean_object* v___x_299_; uint8_t v___x_300_; uint8_t v___x_301_; uint8_t v___x_302_; lean_object* v___x_303_; 
lean_inc_ref(v_a_291_);
v___x_299_ = lean_array_push(v_params_286_, v_a_291_);
v___x_300_ = 0;
v___x_301_ = 1;
v___x_302_ = 1;
v___x_303_ = l_Lean_Meta_mkForallFVars(v___x_299_, v_resultType_287_, v___x_300_, v___x_301_, v___x_301_, v___x_302_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___x_305_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_303_, 1);
v___x_305_ = l_Lean_Meta_mkLambdaFVars(v___x_299_, v_a_291_, v___x_300_, v___x_301_, v___x_300_, v___x_301_, v___x_302_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec_ref(v___x_299_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v_a_306_; lean_object* v___x_307_; lean_object* v_env_308_; uint32_t v___x_309_; uint32_t v___x_310_; uint32_t v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_325_; 
v_a_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc_n(v_a_306_, 2);
lean_dec_ref_known(v___x_305_, 1);
v___x_307_ = lean_st_ref_get(v___y_297_);
v_env_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc_ref(v_env_308_);
lean_dec(v___x_307_);
v___x_309_ = l_Lean_getMaxHeight(v_env_308_, v_a_306_);
v___x_310_ = 1;
v___x_311_ = lean_uint32_add(v___x_309_, v___x_310_);
v___x_312_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_312_, 0, v___x_311_);
lean_inc(v_name_288_);
v___x_313_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_name_288_, v_levelParams_289_, v_a_304_, v_a_306_, v___x_312_, v___y_297_);
v_a_314_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_325_ == 0)
{
v___x_316_ = v___x_313_;
v_isShared_317_ = v_isSharedCheck_325_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_325_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 1);
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_324_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
lean_object* v___x_320_; 
lean_inc_ref(v___x_319_);
v___x_320_ = l_Lean_addDecl(v___x_319_, v___x_290_, v___y_296_, v___y_297_);
if (lean_obj_tag(v___x_320_) == 0)
{
uint8_t v___x_321_; lean_object* v___x_322_; 
lean_dec_ref_known(v___x_320_, 1);
v___x_321_ = 4;
v___x_322_ = l_Lean_Meta_setInlineAttribute(v_name_288_, v___x_321_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
if (lean_obj_tag(v___x_322_) == 0)
{
lean_object* v___x_323_; 
lean_dec_ref_known(v___x_322_, 1);
v___x_323_ = l_Lean_compileDecl(v___x_319_, v___x_301_, v___y_296_, v___y_297_);
return v___x_323_;
}
else
{
lean_dec_ref(v___x_319_);
return v___x_322_;
}
}
else
{
lean_dec_ref(v___x_319_);
lean_dec(v_name_288_);
return v___x_320_;
}
}
}
}
else
{
lean_object* v_a_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_333_; 
lean_dec(v_a_304_);
lean_dec(v_levelParams_289_);
lean_dec(v_name_288_);
v_a_326_ = lean_ctor_get(v___x_305_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v___x_305_);
if (v_isSharedCheck_333_ == 0)
{
v___x_328_ = v___x_305_;
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_a_326_);
lean_dec(v___x_305_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_333_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_331_; 
if (v_isShared_329_ == 0)
{
v___x_331_ = v___x_328_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v_a_326_);
v___x_331_ = v_reuseFailAlloc_332_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
return v___x_331_;
}
}
}
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
lean_dec_ref(v___x_299_);
lean_dec_ref(v_a_291_);
lean_dec(v_levelParams_289_);
lean_dec(v_name_288_);
v_a_334_ = lean_ctor_get(v___x_303_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___x_303_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_303_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed(lean_object* v_params_342_, lean_object* v_resultType_343_, lean_object* v_name_344_, lean_object* v_levelParams_345_, lean_object* v___x_346_, lean_object* v_a_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
uint8_t v___x_13859__boxed_355_; lean_object* v_res_356_; 
v___x_13859__boxed_355_ = lean_unbox(v___x_346_);
v_res_356_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_params_342_, v_resultType_343_, v_name_344_, v_levelParams_345_, v___x_13859__boxed_355_, v_a_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
lean_dec(v___y_349_);
lean_dec_ref(v___y_348_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(lean_object* v_k_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v_b_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_){
_start:
{
lean_object* v___x_366_; 
lean_inc(v___y_364_);
lean_inc_ref(v___y_363_);
lean_inc(v___y_362_);
lean_inc_ref(v___y_361_);
lean_inc(v___y_359_);
lean_inc_ref(v___y_358_);
v___x_366_ = lean_apply_8(v_k_357_, v_b_360_, v___y_358_, v___y_359_, v___y_361_, v___y_362_, v___y_363_, v___y_364_, lean_box(0));
return v___x_366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed(lean_object* v_k_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v_b_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(v_k_367_, v___y_368_, v___y_369_, v_b_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
lean_dec_ref(v___y_371_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(lean_object* v_name_377_, uint8_t v_bi_378_, lean_object* v_type_379_, lean_object* v_k_380_, uint8_t v_kind_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___f_389_; lean_object* v___x_390_; 
lean_inc(v___y_383_);
lean_inc_ref(v___y_382_);
v___f_389_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_389_, 0, v_k_380_);
lean_closure_set(v___f_389_, 1, v___y_382_);
lean_closure_set(v___f_389_, 2, v___y_383_);
v___x_390_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_377_, v_bi_378_, v_type_379_, v___f_389_, v_kind_381_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
if (lean_obj_tag(v___x_390_) == 0)
{
return v___x_390_;
}
else
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___boxed(lean_object* v_name_399_, lean_object* v_bi_400_, lean_object* v_type_401_, lean_object* v_k_402_, lean_object* v_kind_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
uint8_t v_bi_boxed_411_; uint8_t v_kind_boxed_412_; lean_object* v_res_413_; 
v_bi_boxed_411_ = lean_unbox(v_bi_400_);
v_kind_boxed_412_ = lean_unbox(v_kind_403_);
v_res_413_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_399_, v_bi_boxed_411_, v_type_401_, v_k_402_, v_kind_boxed_412_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(lean_object* v_name_414_, lean_object* v_type_415_, lean_object* v_k_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
uint8_t v___x_424_; uint8_t v___x_425_; lean_object* v___x_426_; 
v___x_424_ = 0;
v___x_425_ = 0;
v___x_426_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_414_, v___x_424_, v_type_415_, v_k_416_, v___x_425_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg___boxed(lean_object* v_name_427_, lean_object* v_type_428_, lean_object* v_k_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_427_, v_type_428_, v_k_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(lean_object* v_params_438_, lean_object* v_levelParams_439_, uint8_t v___x_440_, lean_object* v_name_441_, lean_object* v_argName_442_, lean_object* v_argType_443_, lean_object* v_resultType_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___x_452_; lean_object* v___f_453_; lean_object* v___x_454_; 
v___x_452_ = lean_box(v___x_440_);
v___f_453_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed), 13, 5);
lean_closure_set(v___f_453_, 0, v_params_438_);
lean_closure_set(v___f_453_, 1, v_resultType_444_);
lean_closure_set(v___f_453_, 2, v_name_441_);
lean_closure_set(v___f_453_, 3, v_levelParams_439_);
lean_closure_set(v___f_453_, 4, v___x_452_);
v___x_454_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_argName_442_, v_argType_443_, v___f_453_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed(lean_object* v_params_455_, lean_object* v_levelParams_456_, lean_object* v___x_457_, lean_object* v_name_458_, lean_object* v_argName_459_, lean_object* v_argType_460_, lean_object* v_resultType_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
uint8_t v___x_14064__boxed_469_; lean_object* v_res_470_; 
v___x_14064__boxed_469_ = lean_unbox(v___x_457_);
v_res_470_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_455_, v_levelParams_456_, v___x_14064__boxed_469_, v_name_458_, v_argName_459_, v_argType_460_, v_resultType_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(uint8_t v___x_471_, lean_object* v_a_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v___x_480_; 
lean_inc_ref(v_a_472_);
v___x_480_ = l_Lean_Meta_mkEqRefl(v_a_472_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; uint8_t v___x_486_; lean_object* v___x_487_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref_known(v___x_480_, 1);
v___x_482_ = lean_unsigned_to_nat(1u);
v___x_483_ = lean_mk_empty_array_with_capacity(v___x_482_);
v___x_484_ = lean_array_push(v___x_483_, v_a_472_);
v___x_485_ = 0;
v___x_486_ = 1;
v___x_487_ = l_Lean_Meta_mkLambdaFVars(v___x_484_, v_a_481_, v___x_485_, v___x_471_, v___x_485_, v___x_471_, v___x_486_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
lean_dec_ref(v___x_484_);
return v___x_487_;
}
else
{
lean_dec_ref(v_a_472_);
return v___x_480_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed(lean_object* v___x_488_, lean_object* v_a_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
uint8_t v___x_14094__boxed_497_; lean_object* v_res_498_; 
v___x_14094__boxed_497_ = lean_unbox(v___x_488_);
v_res_498_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(v___x_14094__boxed_497_, v_a_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(lean_object* v___f_512_, lean_object* v_ctorName_513_, lean_object* v_fieldName_514_, lean_object* v___x_515_, lean_object* v___x_516_, lean_object* v_projName_517_, lean_object* v___x_518_, lean_object* v_params_519_, lean_object* v_equivName_520_, lean_object* v_levelParams_521_, uint8_t v___x_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_){
_start:
{
lean_object* v___x_530_; 
lean_inc_ref(v___f_512_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
lean_inc(v___y_526_);
lean_inc_ref(v___y_525_);
lean_inc(v___y_524_);
lean_inc_ref(v___y_523_);
lean_inc_ref(v___x_516_);
lean_inc_ref(v___x_515_);
lean_inc(v_fieldName_514_);
lean_inc(v_ctorName_513_);
v___x_530_ = lean_apply_11(v___f_512_, v_ctorName_513_, v_fieldName_514_, v___x_515_, v___x_516_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, lean_box(0));
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v___x_531_; lean_object* v___x_532_; 
lean_dec_ref_known(v___x_530_, 1);
v___x_531_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1));
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
lean_inc(v___y_526_);
lean_inc_ref(v___y_525_);
lean_inc(v___y_524_);
lean_inc_ref(v___y_523_);
lean_inc_ref(v___x_515_);
lean_inc_ref(v___x_516_);
lean_inc(v_projName_517_);
v___x_532_ = lean_apply_11(v___f_512_, v_projName_517_, v___x_531_, v___x_516_, v___x_515_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, lean_box(0));
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_637_; 
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_637_ == 0)
{
lean_object* v_unused_638_; 
v_unused_638_ = lean_ctor_get(v___x_532_, 0);
lean_dec(v_unused_638_);
v___x_534_ = v___x_532_;
v_isShared_535_ = v_isSharedCheck_637_;
goto v_resetjp_533_;
}
else
{
lean_dec(v___x_532_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_637_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v_env_537_; lean_object* v___x_538_; uint8_t v___x_539_; uint8_t v___x_540_; 
v___x_536_ = lean_st_ref_get(v___y_528_);
v_env_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc_ref(v_env_537_);
lean_dec(v___x_536_);
v___x_538_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3));
v___x_539_ = 1;
v___x_540_ = l_Lean_Environment_contains(v_env_537_, v___x_538_, v___x_539_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_543_; 
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
lean_dec(v___x_518_);
lean_dec(v_projName_517_);
lean_dec_ref(v___x_516_);
lean_dec_ref(v___x_515_);
lean_dec(v_fieldName_514_);
lean_dec(v_ctorName_513_);
v___x_541_ = lean_box(0);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_541_);
v___x_543_ = v___x_534_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
else
{
lean_object* v___f_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
lean_del_object(v___x_534_);
v___f_545_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4));
lean_inc(v___x_518_);
v___x_546_ = l_Lean_mkConst(v_ctorName_513_, v___x_518_);
v___x_547_ = l_Lean_mkAppN(v___x_546_, v_params_519_);
v___x_548_ = l_Lean_mkConst(v_projName_517_, v___x_518_);
v___x_549_ = l_Lean_mkAppN(v___x_548_, v_params_519_);
v___x_550_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_fieldName_514_, v___x_515_, v___f_545_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; lean_object* v___x_552_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_a_551_);
lean_dec_ref_known(v___x_550_, 1);
v___x_552_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v___x_531_, v___x_516_, v___f_545_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v___x_552_, 1);
v___x_554_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__6));
v___x_555_ = lean_unsigned_to_nat(4u);
v___x_556_ = lean_mk_empty_array_with_capacity(v___x_555_);
v___x_557_ = lean_array_push(v___x_556_, v___x_547_);
v___x_558_ = lean_array_push(v___x_557_, v___x_549_);
v___x_559_ = lean_array_push(v___x_558_, v_a_551_);
v___x_560_ = lean_array_push(v___x_559_, v_a_553_);
v___x_561_ = l_Lean_Meta_mkAppM(v___x_554_, v___x_560_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; lean_object* v___x_563_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc_n(v_a_562_, 2);
lean_dec_ref_known(v___x_561_, 1);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
lean_inc(v___y_526_);
lean_inc_ref(v___y_525_);
v___x_563_ = lean_infer_type(v_a_562_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_563_) == 0)
{
lean_object* v_a_564_; uint8_t v___x_565_; uint8_t v___x_566_; lean_object* v___x_567_; 
v_a_564_ = lean_ctor_get(v___x_563_, 0);
lean_inc(v_a_564_);
lean_dec_ref_known(v___x_563_, 1);
v___x_565_ = 0;
v___x_566_ = 1;
v___x_567_ = l_Lean_Meta_mkForallFVars(v_params_519_, v_a_564_, v___x_565_, v___x_539_, v___x_539_, v___x_566_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; lean_object* v___x_569_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_567_, 1);
v___x_569_ = l_Lean_Meta_mkLambdaFVars(v_params_519_, v_a_562_, v___x_565_, v___x_539_, v___x_565_, v___x_539_, v___x_566_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_588_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_569_, 1);
v___x_571_ = lean_box(1);
lean_inc(v_equivName_520_);
v___x_572_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_equivName_520_, v_levelParams_521_, v_a_568_, v_a_570_, v___x_571_, v___y_528_);
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_588_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_588_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_588_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set_tag(v___x_575_, 1);
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_587_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; 
lean_inc_ref(v___x_578_);
v___x_579_ = l_Lean_addDecl(v___x_578_, v___x_522_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_579_) == 0)
{
uint8_t v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; lean_object* v___x_583_; 
lean_dec_ref_known(v___x_579_, 1);
v___x_580_ = 0;
lean_inc_n(v_equivName_520_, 2);
v___x_581_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_equivName_520_, v___x_580_, v___y_526_, v___y_528_);
lean_dec_ref(v___x_581_);
v___x_582_ = 2;
v___x_583_ = l_Lean_Meta_setInlineAttribute(v_equivName_520_, v___x_582_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v___x_584_; 
lean_dec_ref_known(v___x_583_, 1);
v___x_584_ = l_Lean_compileDecl(v___x_578_, v___x_539_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_584_) == 0)
{
uint8_t v___x_585_; lean_object* v___x_586_; 
lean_dec_ref_known(v___x_584_, 1);
v___x_585_ = 0;
v___x_586_ = l_Lean_Meta_Transport_addTransportDecl(v_equivName_520_, v___x_585_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
return v___x_586_;
}
else
{
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_equivName_520_);
return v___x_584_;
}
}
else
{
lean_dec_ref(v___x_578_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_equivName_520_);
return v___x_583_;
}
}
else
{
lean_dec_ref(v___x_578_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_equivName_520_);
return v___x_579_;
}
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec(v_a_568_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_589_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_569_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_569_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_dec(v_a_562_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_597_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_567_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_567_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
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
lean_dec(v_a_562_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_605_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_563_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_563_);
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
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_613_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_561_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_561_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
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
lean_dec(v_a_551_);
lean_dec_ref(v___x_549_);
lean_dec_ref(v___x_547_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_621_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_552_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_552_);
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
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec_ref(v___x_549_);
lean_dec_ref(v___x_547_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
lean_dec_ref(v___x_516_);
v_a_629_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_550_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_550_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
}
}
else
{
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
lean_dec(v___x_518_);
lean_dec(v_projName_517_);
lean_dec_ref(v___x_516_);
lean_dec_ref(v___x_515_);
lean_dec(v_fieldName_514_);
lean_dec(v_ctorName_513_);
return v___x_532_;
}
}
else
{
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v___y_524_);
lean_dec_ref(v___y_523_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
lean_dec(v___x_518_);
lean_dec(v_projName_517_);
lean_dec_ref(v___x_516_);
lean_dec_ref(v___x_515_);
lean_dec(v_fieldName_514_);
lean_dec(v_ctorName_513_);
lean_dec_ref(v___f_512_);
return v___x_530_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed(lean_object** _args){
lean_object* v___f_639_ = _args[0];
lean_object* v_ctorName_640_ = _args[1];
lean_object* v_fieldName_641_ = _args[2];
lean_object* v___x_642_ = _args[3];
lean_object* v___x_643_ = _args[4];
lean_object* v_projName_644_ = _args[5];
lean_object* v___x_645_ = _args[6];
lean_object* v_params_646_ = _args[7];
lean_object* v_equivName_647_ = _args[8];
lean_object* v_levelParams_648_ = _args[9];
lean_object* v___x_649_ = _args[10];
lean_object* v___y_650_ = _args[11];
lean_object* v___y_651_ = _args[12];
lean_object* v___y_652_ = _args[13];
lean_object* v___y_653_ = _args[14];
lean_object* v___y_654_ = _args[15];
lean_object* v___y_655_ = _args[16];
lean_object* v___y_656_ = _args[17];
_start:
{
uint8_t v___x_14163__boxed_657_; lean_object* v_res_658_; 
v___x_14163__boxed_657_ = lean_unbox(v___x_649_);
v_res_658_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(v___f_639_, v_ctorName_640_, v_fieldName_641_, v___x_642_, v___x_643_, v_projName_644_, v___x_645_, v_params_646_, v_equivName_647_, v_levelParams_648_, v___x_14163__boxed_657_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
lean_dec_ref(v_params_646_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(lean_object* v_msgData_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v___x_665_; lean_object* v_env_666_; lean_object* v___x_667_; lean_object* v_toCold_668_; lean_object* v_mctx_669_; lean_object* v_lctx_670_; lean_object* v_options_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_665_ = lean_st_ref_get(v___y_663_);
v_env_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc_ref(v_env_666_);
lean_dec(v___x_665_);
v___x_667_ = lean_st_ref_get(v___y_661_);
v_toCold_668_ = lean_ctor_get(v___y_662_, 0);
v_mctx_669_ = lean_ctor_get(v___x_667_, 0);
lean_inc_ref(v_mctx_669_);
lean_dec(v___x_667_);
v_lctx_670_ = lean_ctor_get(v___y_660_, 2);
v_options_671_ = lean_ctor_get(v_toCold_668_, 2);
lean_inc_ref(v_options_671_);
lean_inc_ref(v_lctx_670_);
v___x_672_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_672_, 0, v_env_666_);
lean_ctor_set(v___x_672_, 1, v_mctx_669_);
lean_ctor_set(v___x_672_, 2, v_lctx_670_);
lean_ctor_set(v___x_672_, 3, v_options_671_);
v___x_673_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
lean_ctor_set(v___x_673_, 1, v_msgData_659_);
v___x_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10___boxed(lean_object* v_msgData_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v_msgData_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_);
lean_dec(v___y_679_);
lean_dec_ref(v___y_678_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
return v_res_681_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(lean_object* v_opts_682_, lean_object* v_opt_683_){
_start:
{
lean_object* v_name_684_; lean_object* v_defValue_685_; lean_object* v_map_686_; lean_object* v___x_687_; 
v_name_684_ = lean_ctor_get(v_opt_683_, 0);
v_defValue_685_ = lean_ctor_get(v_opt_683_, 1);
v_map_686_ = lean_ctor_get(v_opts_682_, 0);
v___x_687_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_686_, v_name_684_);
if (lean_obj_tag(v___x_687_) == 0)
{
uint8_t v___x_688_; 
v___x_688_ = lean_unbox(v_defValue_685_);
return v___x_688_;
}
else
{
lean_object* v_val_689_; 
v_val_689_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_val_689_);
lean_dec_ref_known(v___x_687_, 1);
if (lean_obj_tag(v_val_689_) == 1)
{
uint8_t v_v_690_; 
v_v_690_ = lean_ctor_get_uint8(v_val_689_, 0);
lean_dec_ref_known(v_val_689_, 0);
return v_v_690_;
}
else
{
uint8_t v___x_691_; 
lean_dec(v_val_689_);
v___x_691_ = lean_unbox(v_defValue_685_);
return v___x_691_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13___boxed(lean_object* v_opts_692_, lean_object* v_opt_693_){
_start:
{
uint8_t v_res_694_; lean_object* v_r_695_; 
v_res_694_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_692_, v_opt_693_);
lean_dec_ref(v_opt_693_);
lean_dec_ref(v_opts_692_);
v_r_695_ = lean_box(v_res_694_);
return v_r_695_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_box(1);
v___x_697_ = l_Lean_MessageData_ofFormat(v___x_696_);
return v___x_697_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_701_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__2));
v___x_702_ = l_Lean_MessageData_ofFormat(v___x_701_);
return v___x_702_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(lean_object* v_x_703_, lean_object* v_x_704_){
_start:
{
if (lean_obj_tag(v_x_704_) == 0)
{
return v_x_703_;
}
else
{
lean_object* v_head_705_; lean_object* v_tail_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_728_; 
v_head_705_ = lean_ctor_get(v_x_704_, 0);
v_tail_706_ = lean_ctor_get(v_x_704_, 1);
v_isSharedCheck_728_ = !lean_is_exclusive(v_x_704_);
if (v_isSharedCheck_728_ == 0)
{
v___x_708_ = v_x_704_;
v_isShared_709_ = v_isSharedCheck_728_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_tail_706_);
lean_inc(v_head_705_);
lean_dec(v_x_704_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_728_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v_before_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_726_; 
v_before_710_ = lean_ctor_get(v_head_705_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v_head_705_);
if (v_isSharedCheck_726_ == 0)
{
lean_object* v_unused_727_; 
v_unused_727_ = lean_ctor_get(v_head_705_, 1);
lean_dec(v_unused_727_);
v___x_712_ = v_head_705_;
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_before_710_);
lean_dec(v_head_705_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_726_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_713_ == 0)
{
lean_ctor_set_tag(v___x_712_, 7);
lean_ctor_set(v___x_712_, 1, v___x_714_);
lean_ctor_set(v___x_712_, 0, v_x_703_);
v___x_716_ = v___x_712_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_x_703_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_714_);
v___x_716_ = v_reuseFailAlloc_725_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_717_; lean_object* v___x_719_; 
v___x_717_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3);
if (v_isShared_709_ == 0)
{
lean_ctor_set_tag(v___x_708_, 7);
lean_ctor_set(v___x_708_, 1, v___x_717_);
lean_ctor_set(v___x_708_, 0, v___x_716_);
v___x_719_ = v___x_708_;
goto v_reusejp_718_;
}
else
{
lean_object* v_reuseFailAlloc_724_; 
v_reuseFailAlloc_724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_724_, 0, v___x_716_);
lean_ctor_set(v_reuseFailAlloc_724_, 1, v___x_717_);
v___x_719_ = v_reuseFailAlloc_724_;
goto v_reusejp_718_;
}
v_reusejp_718_:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_720_ = l_Lean_MessageData_ofSyntax(v_before_710_);
v___x_721_ = l_Lean_indentD(v___x_720_);
v___x_722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_719_);
lean_ctor_set(v___x_722_, 1, v___x_721_);
v_x_703_ = v___x_722_;
v_x_704_ = v_tail_706_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__1));
v___x_733_ = l_Lean_MessageData_ofFormat(v___x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(lean_object* v_msgData_734_, lean_object* v_macroStack_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_toCold_738_; lean_object* v_options_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v_toCold_738_ = lean_ctor_get(v___y_736_, 0);
v_options_739_ = lean_ctor_get(v_toCold_738_, 2);
v___x_740_ = l_Lean_Elab_pp_macroStack;
v___x_741_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v_macroStack_735_);
v___x_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_742_, 0, v_msgData_734_);
return v___x_742_;
}
else
{
if (lean_obj_tag(v_macroStack_735_) == 0)
{
lean_object* v___x_743_; 
v___x_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_743_, 0, v_msgData_734_);
return v___x_743_;
}
else
{
lean_object* v_head_744_; lean_object* v_after_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_760_; 
v_head_744_ = lean_ctor_get(v_macroStack_735_, 0);
lean_inc(v_head_744_);
v_after_745_ = lean_ctor_get(v_head_744_, 1);
v_isSharedCheck_760_ = !lean_is_exclusive(v_head_744_);
if (v_isSharedCheck_760_ == 0)
{
lean_object* v_unused_761_; 
v_unused_761_ = lean_ctor_get(v_head_744_, 0);
lean_dec(v_unused_761_);
v___x_747_ = v_head_744_;
v_isShared_748_ = v_isSharedCheck_760_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_after_745_);
lean_dec(v_head_744_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_760_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_749_; lean_object* v___x_751_; 
v___x_749_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_748_ == 0)
{
lean_ctor_set_tag(v___x_747_, 7);
lean_ctor_set(v___x_747_, 1, v___x_749_);
lean_ctor_set(v___x_747_, 0, v_msgData_734_);
v___x_751_ = v___x_747_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_msgData_734_);
lean_ctor_set(v_reuseFailAlloc_759_, 1, v___x_749_);
v___x_751_ = v_reuseFailAlloc_759_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v_msgData_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_752_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
v___x_754_ = l_Lean_MessageData_ofSyntax(v_after_745_);
v___x_755_ = l_Lean_indentD(v___x_754_);
v_msgData_756_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_756_, 0, v___x_753_);
lean_ctor_set(v_msgData_756_, 1, v___x_755_);
v___x_757_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_756_, v_macroStack_735_);
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___boxed(lean_object* v_msgData_762_, lean_object* v_macroStack_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_762_, v_macroStack_763_, v___y_764_);
lean_dec_ref(v___y_764_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(lean_object* v_msg_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_){
_start:
{
lean_object* v_ref_775_; lean_object* v_macroStack_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v_a_779_; lean_object* v___x_780_; lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_789_; 
v_ref_775_ = lean_ctor_get(v___y_772_, 2);
v_macroStack_776_ = lean_ctor_get(v___y_768_, 1);
v___x_777_ = l_Lean_Elab_getBetterRef(v_ref_775_, v_macroStack_776_);
v___x_778_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v_msg_767_, v___y_770_, v___y_771_, v___y_772_, v___y_773_);
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref(v___x_778_);
lean_inc(v_macroStack_776_);
v___x_780_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_a_779_, v_macroStack_776_, v___y_772_);
v_a_781_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_789_ == 0)
{
v___x_783_ = v___x_780_;
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_780_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_789_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; lean_object* v___x_787_; 
v___x_785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_785_, 0, v___x_777_);
lean_ctor_set(v___x_785_, 1, v_a_781_);
if (v_isShared_784_ == 0)
{
lean_ctor_set_tag(v___x_783_, 1);
lean_ctor_set(v___x_783_, 0, v___x_785_);
v___x_787_ = v___x_783_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___boxed(lean_object* v_msg_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(lean_object* v_as_799_, size_t v_i_800_, size_t v_stop_801_, lean_object* v_b_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_a_808_; uint8_t v___x_812_; 
v___x_812_ = lean_usize_dec_eq(v_i_800_, v_stop_801_);
if (v___x_812_ == 0)
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_813_ = lean_array_uget_borrowed(v_as_799_, v_i_800_);
v___x_814_ = l_Lean_Expr_fvarId_x21(v___x_813_);
lean_inc(v___x_814_);
v___x_815_ = l_Lean_FVarId_getDecl___redArg(v___x_814_, v___y_803_, v___y_804_, v___y_805_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; uint8_t v___x_817_; uint8_t v___x_818_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
lean_inc(v_a_816_);
lean_dec_ref_known(v___x_815_, 1);
v___x_817_ = l_Lean_LocalDecl_binderInfo(v_a_816_);
lean_dec(v_a_816_);
v___x_818_ = l_Lean_BinderInfo_isExplicit(v___x_817_);
if (v___x_818_ == 0)
{
lean_dec(v___x_814_);
v_a_808_ = v_b_802_;
goto v___jp_807_;
}
else
{
uint8_t v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_819_ = 1;
v___x_820_ = lean_box(v___x_819_);
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_814_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v___x_822_ = lean_array_push(v_b_802_, v___x_821_);
v_a_808_ = v___x_822_;
goto v___jp_807_;
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v___x_814_);
lean_dec_ref(v_b_802_);
v_a_823_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_815_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_815_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v___x_831_; 
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v_b_802_);
return v___x_831_;
}
v___jp_807_:
{
size_t v___x_809_; size_t v___x_810_; 
v___x_809_ = ((size_t)1ULL);
v___x_810_ = lean_usize_add(v_i_800_, v___x_809_);
v_i_800_ = v___x_810_;
v_b_802_ = v_a_808_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg___boxed(lean_object* v_as_832_, lean_object* v_i_833_, lean_object* v_stop_834_, lean_object* v_b_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
size_t v_i_boxed_840_; size_t v_stop_boxed_841_; lean_object* v_res_842_; 
v_i_boxed_840_ = lean_unbox_usize(v_i_833_);
lean_dec(v_i_833_);
v_stop_boxed_841_ = lean_unbox_usize(v_stop_834_);
lean_dec(v_stop_834_);
v_res_842_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_832_, v_i_boxed_840_, v_stop_boxed_841_, v_b_835_, v___y_836_, v___y_837_, v___y_838_);
lean_dec(v___y_838_);
lean_dec_ref(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec_ref(v_as_832_);
return v_res_842_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(lean_object* v_as_845_, lean_object* v_start_846_, lean_object* v_stop_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
lean_object* v___x_855_; uint8_t v___x_856_; 
v___x_855_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0));
v___x_856_ = lean_nat_dec_lt(v_start_846_, v_stop_847_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; 
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_855_);
return v___x_857_;
}
else
{
lean_object* v___x_858_; uint8_t v___x_859_; 
v___x_858_ = lean_array_get_size(v_as_845_);
v___x_859_ = lean_nat_dec_le(v_stop_847_, v___x_858_);
if (v___x_859_ == 0)
{
uint8_t v___x_860_; 
v___x_860_ = lean_nat_dec_lt(v_start_846_, v___x_858_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; 
v___x_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_861_, 0, v___x_855_);
return v___x_861_;
}
else
{
size_t v___x_862_; size_t v___x_863_; lean_object* v___x_864_; 
v___x_862_ = lean_usize_of_nat(v_start_846_);
v___x_863_ = lean_usize_of_nat(v___x_858_);
v___x_864_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_845_, v___x_862_, v___x_863_, v___x_855_, v___y_850_, v___y_852_, v___y_853_);
return v___x_864_;
}
}
else
{
size_t v___x_865_; size_t v___x_866_; lean_object* v___x_867_; 
v___x_865_ = lean_usize_of_nat(v_start_846_);
v___x_866_ = lean_usize_of_nat(v_stop_847_);
v___x_867_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_845_, v___x_865_, v___x_866_, v___x_855_, v___y_850_, v___y_852_, v___y_853_);
return v___x_867_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___boxed(lean_object* v_as_868_, lean_object* v_start_869_, lean_object* v_stop_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
lean_object* v_res_878_; 
v_res_878_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_as_868_, v_start_869_, v_stop_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v_stop_870_);
lean_dec(v_start_869_);
lean_dec_ref(v_as_868_);
return v_res_878_;
}
}
static lean_object* _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1(void){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__0));
v___x_881_ = l_Lean_stringToMessageData(v___x_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(lean_object* v_value_882_, lean_object* v_declName_883_, lean_object* v___x_884_, lean_object* v_levelParams_885_, lean_object* v_ctorName_886_, lean_object* v_fieldName_887_, lean_object* v_projName_888_, lean_object* v_equivName_889_, lean_object* v_params_890_, lean_object* v_resultType_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v___x_939_; 
lean_inc(v___y_897_);
lean_inc_ref(v___y_896_);
lean_inc(v___y_895_);
lean_inc_ref(v___y_894_);
lean_inc_ref(v_resultType_891_);
v___x_939_ = lean_whnf(v_resultType_891_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; uint8_t v___x_941_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
v___x_941_ = l_Lean_Expr_isSort(v_a_940_);
lean_dec(v_a_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec_ref(v_params_890_);
lean_dec(v_equivName_889_);
lean_dec(v_projName_888_);
lean_dec(v_fieldName_887_);
lean_dec(v_ctorName_886_);
lean_dec(v_levelParams_885_);
lean_dec(v___x_884_);
lean_dec(v_declName_883_);
lean_dec_ref(v_value_882_);
v___x_942_ = lean_obj_once(&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1, &l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1_once, _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1);
v___x_943_ = l_Lean_indentExpr(v_resultType_891_);
v___x_944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v___x_945_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_944_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
v_a_946_ = lean_ctor_get(v___x_945_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_945_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_945_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_945_);
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
else
{
lean_dec_ref(v_resultType_891_);
goto v___jp_899_;
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec_ref(v_resultType_891_);
lean_dec_ref(v_params_890_);
lean_dec(v_equivName_889_);
lean_dec(v_projName_888_);
lean_dec(v_fieldName_887_);
lean_dec(v_ctorName_886_);
lean_dec(v_levelParams_885_);
lean_dec(v___x_884_);
lean_dec(v_declName_883_);
lean_dec_ref(v_value_882_);
v_a_954_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_939_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_939_);
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
v___jp_899_:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
lean_inc_ref(v_params_890_);
v___x_900_ = l_Lean_Expr_beta(v_value_882_, v_params_890_);
lean_inc(v___x_884_);
lean_inc(v_declName_883_);
v___x_901_ = l_Lean_mkConst(v_declName_883_, v___x_884_);
v___x_902_ = l_Lean_mkAppN(v___x_901_, v_params_890_);
v___x_903_ = lean_unsigned_to_nat(0u);
v___x_904_ = lean_array_get_size(v_params_890_);
v___x_905_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_params_890_, v___x_903_, v___x_904_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v___x_907_; lean_object* v_env_908_; uint8_t v___x_909_; lean_object* v___x_910_; lean_object* v___f_911_; lean_object* v___x_912_; lean_object* v___f_913_; lean_object* v___x_914_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_906_);
lean_dec_ref_known(v___x_905_, 1);
v___x_907_ = lean_st_ref_get(v___y_897_);
v_env_908_ = lean_ctor_get(v___x_907_, 0);
lean_inc_ref(v_env_908_);
lean_dec(v___x_907_);
v___x_909_ = l_Lean_Environment_hasExposedBody(v_env_908_, v_declName_883_);
v___x_910_ = lean_box(v___x_909_);
lean_inc(v_levelParams_885_);
lean_inc_ref(v_params_890_);
v___f_911_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed), 14, 3);
lean_closure_set(v___f_911_, 0, v_params_890_);
lean_closure_set(v___f_911_, 1, v_levelParams_885_);
lean_closure_set(v___f_911_, 2, v___x_910_);
v___x_912_ = lean_box(v___x_909_);
v___f_913_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed), 18, 11);
lean_closure_set(v___f_913_, 0, v___f_911_);
lean_closure_set(v___f_913_, 1, v_ctorName_886_);
lean_closure_set(v___f_913_, 2, v_fieldName_887_);
lean_closure_set(v___f_913_, 3, v___x_900_);
lean_closure_set(v___f_913_, 4, v___x_902_);
lean_closure_set(v___f_913_, 5, v_projName_888_);
lean_closure_set(v___f_913_, 6, v___x_884_);
lean_closure_set(v___f_913_, 7, v_params_890_);
lean_closure_set(v___f_913_, 8, v_equivName_889_);
lean_closure_set(v___f_913_, 9, v_levelParams_885_);
lean_closure_set(v___f_913_, 10, v___x_912_);
v___x_914_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_a_906_, v___f_913_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
lean_dec(v_a_906_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_921_ == 0)
{
lean_object* v_unused_922_; 
v_unused_922_ = lean_ctor_get(v___x_914_, 0);
lean_dec(v_unused_922_);
v___x_916_ = v___x_914_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_dec(v___x_914_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
lean_ctor_set(v___x_916_, 0, v___x_904_);
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v___x_904_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
v_a_923_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_914_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_914_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
lean_dec_ref(v___x_902_);
lean_dec_ref(v___x_900_);
lean_dec_ref(v_params_890_);
lean_dec(v_equivName_889_);
lean_dec(v_projName_888_);
lean_dec(v_fieldName_887_);
lean_dec(v_ctorName_886_);
lean_dec(v_levelParams_885_);
lean_dec(v___x_884_);
lean_dec(v_declName_883_);
v_a_931_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_938_ == 0)
{
v___x_933_ = v___x_905_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v___x_905_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_931_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed(lean_object** _args){
lean_object* v_value_962_ = _args[0];
lean_object* v_declName_963_ = _args[1];
lean_object* v___x_964_ = _args[2];
lean_object* v_levelParams_965_ = _args[3];
lean_object* v_ctorName_966_ = _args[4];
lean_object* v_fieldName_967_ = _args[5];
lean_object* v_projName_968_ = _args[6];
lean_object* v_equivName_969_ = _args[7];
lean_object* v_params_970_ = _args[8];
lean_object* v_resultType_971_ = _args[9];
lean_object* v___y_972_ = _args[10];
lean_object* v___y_973_ = _args[11];
lean_object* v___y_974_ = _args[12];
lean_object* v___y_975_ = _args[13];
lean_object* v___y_976_ = _args[14];
lean_object* v___y_977_ = _args[15];
lean_object* v___y_978_ = _args[16];
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(v_value_962_, v_declName_963_, v___x_964_, v_levelParams_965_, v_ctorName_966_, v_fieldName_967_, v_projName_968_, v_equivName_969_, v_params_970_, v_resultType_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_);
lean_dec(v___y_977_);
lean_dec_ref(v___y_976_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
return v_res_979_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_instMonadEIO___redArg();
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object* v_msg_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v_toApplicative_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1088_; 
v___x_995_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0);
v___x_996_ = l_StateRefT_x27_instMonad___redArg(v___x_995_);
v_toApplicative_997_ = lean_ctor_get(v___x_996_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_996_);
if (v_isSharedCheck_1088_ == 0)
{
lean_object* v_unused_1089_; 
v_unused_1089_ = lean_ctor_get(v___x_996_, 1);
lean_dec(v_unused_1089_);
v___x_999_ = v___x_996_;
v_isShared_1000_ = v_isSharedCheck_1088_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_toApplicative_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1088_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v_toFunctor_1001_; lean_object* v_toSeq_1002_; lean_object* v_toSeqLeft_1003_; lean_object* v_toSeqRight_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1086_; 
v_toFunctor_1001_ = lean_ctor_get(v_toApplicative_997_, 0);
v_toSeq_1002_ = lean_ctor_get(v_toApplicative_997_, 2);
v_toSeqLeft_1003_ = lean_ctor_get(v_toApplicative_997_, 3);
v_toSeqRight_1004_ = lean_ctor_get(v_toApplicative_997_, 4);
v_isSharedCheck_1086_ = !lean_is_exclusive(v_toApplicative_997_);
if (v_isSharedCheck_1086_ == 0)
{
lean_object* v_unused_1087_; 
v_unused_1087_ = lean_ctor_get(v_toApplicative_997_, 1);
lean_dec(v_unused_1087_);
v___x_1006_ = v_toApplicative_997_;
v_isShared_1007_ = v_isSharedCheck_1086_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_toSeqRight_1004_);
lean_inc(v_toSeqLeft_1003_);
lean_inc(v_toSeq_1002_);
lean_inc(v_toFunctor_1001_);
lean_dec(v_toApplicative_997_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1086_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___f_1008_; lean_object* v___f_1009_; lean_object* v___f_1010_; lean_object* v___f_1011_; lean_object* v___x_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___f_1015_; lean_object* v___x_1017_; 
v___f_1008_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1));
v___f_1009_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1001_);
v___f_1010_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1010_, 0, v_toFunctor_1001_);
v___f_1011_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1011_, 0, v_toFunctor_1001_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___f_1010_);
lean_ctor_set(v___x_1012_, 1, v___f_1011_);
v___f_1013_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1013_, 0, v_toSeqRight_1004_);
v___f_1014_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1014_, 0, v_toSeqLeft_1003_);
v___f_1015_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1015_, 0, v_toSeq_1002_);
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 4, v___f_1013_);
lean_ctor_set(v___x_1006_, 3, v___f_1014_);
lean_ctor_set(v___x_1006_, 2, v___f_1015_);
lean_ctor_set(v___x_1006_, 1, v___f_1008_);
lean_ctor_set(v___x_1006_, 0, v___x_1012_);
v___x_1017_ = v___x_1006_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1085_, 1, v___f_1008_);
lean_ctor_set(v_reuseFailAlloc_1085_, 2, v___f_1015_);
lean_ctor_set(v_reuseFailAlloc_1085_, 3, v___f_1014_);
lean_ctor_set(v_reuseFailAlloc_1085_, 4, v___f_1013_);
v___x_1017_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1019_; 
if (v_isShared_1000_ == 0)
{
lean_ctor_set(v___x_999_, 1, v___f_1009_);
lean_ctor_set(v___x_999_, 0, v___x_1017_);
v___x_1019_ = v___x_999_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1084_, 1, v___f_1009_);
v___x_1019_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
lean_object* v___x_1020_; lean_object* v_toApplicative_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1082_; 
v___x_1020_ = l_StateRefT_x27_instMonad___redArg(v___x_1019_);
v_toApplicative_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1082_ == 0)
{
lean_object* v_unused_1083_; 
v_unused_1083_ = lean_ctor_get(v___x_1020_, 1);
lean_dec(v_unused_1083_);
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1082_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_toApplicative_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1082_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v_toFunctor_1025_; lean_object* v_toSeq_1026_; lean_object* v_toSeqLeft_1027_; lean_object* v_toSeqRight_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1080_; 
v_toFunctor_1025_ = lean_ctor_get(v_toApplicative_1021_, 0);
v_toSeq_1026_ = lean_ctor_get(v_toApplicative_1021_, 2);
v_toSeqLeft_1027_ = lean_ctor_get(v_toApplicative_1021_, 3);
v_toSeqRight_1028_ = lean_ctor_get(v_toApplicative_1021_, 4);
v_isSharedCheck_1080_ = !lean_is_exclusive(v_toApplicative_1021_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v_toApplicative_1021_, 1);
lean_dec(v_unused_1081_);
v___x_1030_ = v_toApplicative_1021_;
v_isShared_1031_ = v_isSharedCheck_1080_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_toSeqRight_1028_);
lean_inc(v_toSeqLeft_1027_);
lean_inc(v_toSeq_1026_);
lean_inc(v_toFunctor_1025_);
lean_dec(v_toApplicative_1021_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1080_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___x_1036_; lean_object* v___f_1037_; lean_object* v___f_1038_; lean_object* v___f_1039_; lean_object* v___x_1041_; 
v___f_1032_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3));
v___f_1033_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1025_);
v___f_1034_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1034_, 0, v_toFunctor_1025_);
v___f_1035_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1035_, 0, v_toFunctor_1025_);
v___x_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1036_, 0, v___f_1034_);
lean_ctor_set(v___x_1036_, 1, v___f_1035_);
v___f_1037_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1037_, 0, v_toSeqRight_1028_);
v___f_1038_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1038_, 0, v_toSeqLeft_1027_);
v___f_1039_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1039_, 0, v_toSeq_1026_);
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 4, v___f_1037_);
lean_ctor_set(v___x_1030_, 3, v___f_1038_);
lean_ctor_set(v___x_1030_, 2, v___f_1039_);
lean_ctor_set(v___x_1030_, 1, v___f_1032_);
lean_ctor_set(v___x_1030_, 0, v___x_1036_);
v___x_1041_ = v___x_1030_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v___x_1036_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v___f_1032_);
lean_ctor_set(v_reuseFailAlloc_1079_, 2, v___f_1039_);
lean_ctor_set(v_reuseFailAlloc_1079_, 3, v___f_1038_);
lean_ctor_set(v_reuseFailAlloc_1079_, 4, v___f_1037_);
v___x_1041_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1043_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 1, v___f_1033_);
lean_ctor_set(v___x_1023_, 0, v___x_1041_);
v___x_1043_ = v___x_1023_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1041_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___f_1033_);
v___x_1043_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; lean_object* v_toApplicative_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1076_; 
v___x_1044_ = l_StateRefT_x27_instMonad___redArg(v___x_1043_);
v_toApplicative_1045_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1076_ == 0)
{
lean_object* v_unused_1077_; 
v_unused_1077_ = lean_ctor_get(v___x_1044_, 1);
lean_dec(v_unused_1077_);
v___x_1047_ = v___x_1044_;
v_isShared_1048_ = v_isSharedCheck_1076_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_toApplicative_1045_);
lean_dec(v___x_1044_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1076_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v_toFunctor_1049_; lean_object* v_toSeq_1050_; lean_object* v_toSeqLeft_1051_; lean_object* v_toSeqRight_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1074_; 
v_toFunctor_1049_ = lean_ctor_get(v_toApplicative_1045_, 0);
v_toSeq_1050_ = lean_ctor_get(v_toApplicative_1045_, 2);
v_toSeqLeft_1051_ = lean_ctor_get(v_toApplicative_1045_, 3);
v_toSeqRight_1052_ = lean_ctor_get(v_toApplicative_1045_, 4);
v_isSharedCheck_1074_ = !lean_is_exclusive(v_toApplicative_1045_);
if (v_isSharedCheck_1074_ == 0)
{
lean_object* v_unused_1075_; 
v_unused_1075_ = lean_ctor_get(v_toApplicative_1045_, 1);
lean_dec(v_unused_1075_);
v___x_1054_ = v_toApplicative_1045_;
v_isShared_1055_ = v_isSharedCheck_1074_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_toSeqRight_1052_);
lean_inc(v_toSeqLeft_1051_);
lean_inc(v_toSeq_1050_);
lean_inc(v_toFunctor_1049_);
lean_dec(v_toApplicative_1045_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1074_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___f_1056_; lean_object* v___f_1057_; lean_object* v___f_1058_; lean_object* v___f_1059_; lean_object* v___x_1060_; lean_object* v___f_1061_; lean_object* v___f_1062_; lean_object* v___f_1063_; lean_object* v___x_1065_; 
v___f_1056_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5));
v___f_1057_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6));
lean_inc_ref(v_toFunctor_1049_);
v___f_1058_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1058_, 0, v_toFunctor_1049_);
v___f_1059_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1059_, 0, v_toFunctor_1049_);
v___x_1060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___f_1058_);
lean_ctor_set(v___x_1060_, 1, v___f_1059_);
v___f_1061_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1061_, 0, v_toSeqRight_1052_);
v___f_1062_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1062_, 0, v_toSeqLeft_1051_);
v___f_1063_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1063_, 0, v_toSeq_1050_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 4, v___f_1061_);
lean_ctor_set(v___x_1054_, 3, v___f_1062_);
lean_ctor_set(v___x_1054_, 2, v___f_1063_);
lean_ctor_set(v___x_1054_, 1, v___f_1056_);
lean_ctor_set(v___x_1054_, 0, v___x_1060_);
v___x_1065_ = v___x_1054_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v___x_1060_);
lean_ctor_set(v_reuseFailAlloc_1073_, 1, v___f_1056_);
lean_ctor_set(v_reuseFailAlloc_1073_, 2, v___f_1063_);
lean_ctor_set(v_reuseFailAlloc_1073_, 3, v___f_1062_);
lean_ctor_set(v_reuseFailAlloc_1073_, 4, v___f_1061_);
v___x_1065_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
lean_object* v___x_1067_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v___f_1057_);
lean_ctor_set(v___x_1047_, 0, v___x_1065_);
v___x_1067_ = v___x_1047_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1065_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___f_1057_);
v___x_1067_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_10972__overap_1070_; lean_object* v___x_1071_; 
v___x_1068_ = lean_box(0);
v___x_1069_ = l_instInhabitedOfMonad___redArg(v___x_1067_, v___x_1068_);
v___x_10972__overap_1070_ = lean_panic_fn_borrowed(v___x_1069_, v_msg_987_);
lean_dec(v___x_1069_);
lean_inc(v___y_993_);
lean_inc_ref(v___y_992_);
lean_inc(v___y_991_);
lean_inc_ref(v___y_990_);
lean_inc(v___y_989_);
lean_inc_ref(v___y_988_);
v___x_1071_ = lean_apply_7(v___x_10972__overap_1070_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, lean_box(0));
return v___x_1071_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v_msg_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
return v_res_1098_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0));
v___x_1101_ = l_Lean_stringToMessageData(v___x_1100_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2));
v___x_1104_ = l_Lean_stringToMessageData(v___x_1103_);
return v___x_1104_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1108_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6));
v___x_1109_ = lean_unsigned_to_nat(11u);
v___x_1110_ = lean_unsigned_to_nat(115u);
v___x_1111_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5));
v___x_1112_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4));
v___x_1113_ = l_mkPanicMessageWithDecl(v___x_1112_, v___x_1111_, v___x_1110_, v___x_1109_, v___x_1108_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object* v_constName_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1130_; lean_object* v_env_1131_; uint8_t v___x_1132_; lean_object* v___x_1133_; 
v___x_1130_ = lean_st_ref_get(v___y_1120_);
v_env_1131_ = lean_ctor_get(v___x_1130_, 0);
lean_inc_ref(v_env_1131_);
lean_dec(v___x_1130_);
v___x_1132_ = 0;
lean_inc(v_constName_1114_);
v___x_1133_ = l_Lean_Environment_findAsync_x3f(v_env_1131_, v_constName_1114_, v___x_1132_);
if (lean_obj_tag(v___x_1133_) == 1)
{
lean_object* v_val_1134_; uint8_t v_kind_1135_; 
v_val_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_val_1134_);
lean_dec_ref_known(v___x_1133_, 1);
v_kind_1135_ = lean_ctor_get_uint8(v_val_1134_, sizeof(void*)*3);
if (v_kind_1135_ == 0)
{
lean_object* v___x_1136_; 
v___x_1136_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1134_);
if (lean_obj_tag(v___x_1136_) == 1)
{
lean_object* v_val_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1144_; 
lean_dec(v_constName_1114_);
v_val_1137_ = lean_ctor_get(v___x_1136_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1136_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1139_ = v___x_1136_;
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_val_1137_);
lean_dec(v___x_1136_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1144_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1142_; 
if (v_isShared_1140_ == 0)
{
lean_ctor_set_tag(v___x_1139_, 0);
v___x_1142_ = v___x_1139_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v_val_1137_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
else
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
lean_dec_ref(v___x_1136_);
v___x_1145_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7);
v___x_1146_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v___x_1145_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1155_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
if (lean_obj_tag(v_a_1147_) == 0)
{
lean_del_object(v___x_1149_);
goto v___jp_1122_;
}
else
{
lean_object* v_val_1151_; lean_object* v___x_1153_; 
lean_dec(v_constName_1114_);
v_val_1151_ = lean_ctor_get(v_a_1147_, 0);
lean_inc(v_val_1151_);
lean_dec_ref_known(v_a_1147_, 1);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v_val_1151_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_val_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_dec(v_constName_1114_);
v_a_1156_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1146_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1146_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
else
{
lean_dec(v_val_1134_);
goto v___jp_1122_;
}
}
else
{
lean_dec(v___x_1133_);
goto v___jp_1122_;
}
v___jp_1122_:
{
lean_object* v___x_1123_; uint8_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v___x_1123_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1124_ = 0;
v___x_1125_ = l_Lean_MessageData_ofConstName(v_constName_1114_, v___x_1124_);
v___x_1126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1123_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_1128_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
return v___x_1129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object* v_constName_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_constName_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object* v_a_1173_, lean_object* v_a_1174_){
_start:
{
if (lean_obj_tag(v_a_1173_) == 0)
{
lean_object* v___x_1175_; 
v___x_1175_ = l_List_reverse___redArg(v_a_1174_);
return v___x_1175_;
}
else
{
lean_object* v_head_1176_; lean_object* v_tail_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1186_; 
v_head_1176_ = lean_ctor_get(v_a_1173_, 0);
v_tail_1177_ = lean_ctor_get(v_a_1173_, 1);
v_isSharedCheck_1186_ = !lean_is_exclusive(v_a_1173_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1179_ = v_a_1173_;
v_isShared_1180_ = v_isSharedCheck_1186_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_tail_1177_);
lean_inc(v_head_1176_);
lean_dec(v_a_1173_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1186_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1181_; lean_object* v___x_1183_; 
v___x_1181_ = l_Lean_mkLevelParam(v_head_1176_);
if (v_isShared_1180_ == 0)
{
lean_ctor_set(v___x_1179_, 1, v_a_1174_);
lean_ctor_set(v___x_1179_, 0, v___x_1181_);
v___x_1183_ = v___x_1179_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1181_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v_a_1174_);
v___x_1183_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
v_a_1173_ = v_tail_1177_;
v_a_1174_ = v___x_1183_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_1187_, lean_object* v_ctorName_1188_, lean_object* v_projName_1189_, lean_object* v_equivName_1190_, lean_object* v_fieldName_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_){
_start:
{
lean_object* v___x_1199_; 
lean_inc(v_declName_1187_);
v___x_1199_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_1187_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v_toConstantVal_1201_; lean_object* v_value_1202_; lean_object* v_levelParams_1203_; lean_object* v_type_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___f_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___x_1199_, 1);
v_toConstantVal_1201_ = lean_ctor_get(v_a_1200_, 0);
lean_inc_ref(v_toConstantVal_1201_);
v_value_1202_ = lean_ctor_get(v_a_1200_, 1);
lean_inc_ref(v_value_1202_);
lean_dec(v_a_1200_);
v_levelParams_1203_ = lean_ctor_get(v_toConstantVal_1201_, 1);
lean_inc_n(v_levelParams_1203_, 2);
v_type_1204_ = lean_ctor_get(v_toConstantVal_1201_, 2);
lean_inc_ref(v_type_1204_);
lean_dec_ref(v_toConstantVal_1201_);
v___x_1205_ = lean_box(0);
v___x_1206_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1203_, v___x_1205_);
v___f_1207_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed), 17, 8);
lean_closure_set(v___f_1207_, 0, v_value_1202_);
lean_closure_set(v___f_1207_, 1, v_declName_1187_);
lean_closure_set(v___f_1207_, 2, v___x_1206_);
lean_closure_set(v___f_1207_, 3, v_levelParams_1203_);
lean_closure_set(v___f_1207_, 4, v_ctorName_1188_);
lean_closure_set(v___f_1207_, 5, v_fieldName_1191_);
lean_closure_set(v___f_1207_, 6, v_projName_1189_);
lean_closure_set(v___f_1207_, 7, v_equivName_1190_);
v___x_1208_ = 0;
v___x_1209_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(v_type_1204_, v___f_1207_, v___x_1208_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
return v___x_1209_;
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec(v_fieldName_1191_);
lean_dec(v_equivName_1190_);
lean_dec(v_projName_1189_);
lean_dec(v_ctorName_1188_);
lean_dec(v_declName_1187_);
v_a_1210_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1199_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1199_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_1218_, lean_object* v_ctorName_1219_, lean_object* v_projName_1220_, lean_object* v_equivName_1221_, lean_object* v_fieldName_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_1218_, v_ctorName_1219_, v_projName_1220_, v_equivName_1221_, v_fieldName_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_);
lean_dec(v___y_1228_);
lean_dec_ref(v___y_1227_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object* v_00_u03b1_1231_, lean_object* v_name_1232_, uint8_t v_bi_1233_, lean_object* v_type_1234_, lean_object* v_k_1235_, uint8_t v_kind_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_1232_, v_bi_1233_, v_type_1234_, v_k_1235_, v_kind_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1245_, lean_object* v_name_1246_, lean_object* v_bi_1247_, lean_object* v_type_1248_, lean_object* v_k_1249_, lean_object* v_kind_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
uint8_t v_bi_boxed_1258_; uint8_t v_kind_boxed_1259_; lean_object* v_res_1260_; 
v_bi_boxed_1258_ = lean_unbox(v_bi_1247_);
v_kind_boxed_1259_ = lean_unbox(v_kind_1250_);
v_res_1260_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(v_00_u03b1_1245_, v_name_1246_, v_bi_boxed_1258_, v_type_1248_, v_k_1249_, v_kind_boxed_1259_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object* v_00_u03b1_1261_, lean_object* v_name_1262_, lean_object* v_type_1263_, lean_object* v_k_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_1262_, v_type_1263_, v_k_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object* v_00_u03b1_1273_, lean_object* v_name_1274_, lean_object* v_type_1275_, lean_object* v_k_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(v_00_u03b1_1273_, v_name_1274_, v_type_1275_, v_k_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object* v_00_u03b1_1285_, lean_object* v_msg_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_){
_start:
{
lean_object* v___x_1294_; 
v___x_1294_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object* v_00_u03b1_1295_, lean_object* v_msg_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(v_00_u03b1_1295_, v_msg_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object* v_as_1305_, size_t v_i_1306_, size_t v_stop_1307_, lean_object* v_b_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_1305_, v_i_1306_, v_stop_1307_, v_b_1308_, v___y_1311_, v___y_1313_, v___y_1314_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object* v_as_1317_, lean_object* v_i_1318_, lean_object* v_stop_1319_, lean_object* v_b_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
size_t v_i_boxed_1328_; size_t v_stop_boxed_1329_; lean_object* v_res_1330_; 
v_i_boxed_1328_ = lean_unbox_usize(v_i_1318_);
lean_dec(v_i_1318_);
v_stop_boxed_1329_ = lean_unbox_usize(v_stop_1319_);
lean_dec(v_stop_1319_);
v_res_1330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(v_as_1317_, v_i_boxed_1328_, v_stop_boxed_1329_, v_b_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec_ref(v_as_1317_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(lean_object* v_msgData_1331_, lean_object* v_macroStack_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
lean_object* v___x_1340_; 
v___x_1340_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_1331_, v_macroStack_1332_, v___y_1337_);
return v___x_1340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___boxed(lean_object* v_msgData_1341_, lean_object* v_macroStack_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_res_1350_; 
v_res_1350_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(v_msgData_1341_, v_macroStack_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
return v_res_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v_e_1351_, lean_object* v_k_1352_, uint8_t v_cleanupAnnotations_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_){
_start:
{
lean_object* v___f_1361_; uint8_t v___x_1362_; uint8_t v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; 
lean_inc(v___y_1355_);
lean_inc_ref(v___y_1354_);
v___f_1361_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1361_, 0, v_k_1352_);
lean_closure_set(v___f_1361_, 1, v___y_1354_);
lean_closure_set(v___f_1361_, 2, v___y_1355_);
v___x_1362_ = 1;
v___x_1363_ = 0;
v___x_1364_ = lean_box(0);
v___x_1365_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1351_, v___x_1362_, v___x_1363_, v___x_1362_, v___x_1363_, v___x_1364_, v___f_1361_, v_cleanupAnnotations_1353_, v___y_1356_, v___y_1357_, v___y_1358_, v___y_1359_);
if (lean_obj_tag(v___x_1365_) == 0)
{
return v___x_1365_;
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1365_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1365_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1365_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v_e_1374_, lean_object* v_k_1375_, lean_object* v_cleanupAnnotations_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1384_; lean_object* v_res_1385_; 
v_cleanupAnnotations_boxed_1384_ = lean_unbox(v_cleanupAnnotations_1376_);
v_res_1385_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1374_, v_k_1375_, v_cleanupAnnotations_boxed_1384_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v_00_u03b1_1386_, lean_object* v_e_1387_, lean_object* v_k_1388_, uint8_t v_cleanupAnnotations_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1387_, v_k_1388_, v_cleanupAnnotations_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v_00_u03b1_1398_, lean_object* v_e_1399_, lean_object* v_k_1400_, lean_object* v_cleanupAnnotations_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1409_; lean_object* v_res_1410_; 
v_cleanupAnnotations_boxed_1409_ = lean_unbox(v_cleanupAnnotations_1401_);
v_res_1410_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(v_00_u03b1_1398_, v_e_1399_, v_k_1400_, v_cleanupAnnotations_boxed_1409_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object* v_x_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v___x_1419_; 
lean_inc(v___y_1413_);
lean_inc_ref(v___y_1412_);
v___x_1419_ = lean_apply_7(v_x_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, lean_box(0));
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object* v_x_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v_x_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
return v_res_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object* v_lctx_1429_, lean_object* v_localInsts_1430_, lean_object* v_x_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v___f_1439_; lean_object* v___x_1440_; 
lean_inc(v___y_1433_);
lean_inc_ref(v___y_1432_);
v___f_1439_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1439_, 0, v_x_1431_);
lean_closure_set(v___f_1439_, 1, v___y_1432_);
lean_closure_set(v___f_1439_, 2, v___y_1433_);
v___x_1440_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1429_, v_localInsts_1430_, v___f_1439_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1440_) == 0)
{
return v___x_1440_;
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1440_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1440_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object* v_lctx_1449_, lean_object* v_localInsts_1450_, lean_object* v_x_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1449_, v_localInsts_1450_, v_x_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_00_u03b1_1460_, lean_object* v_lctx_1461_, lean_object* v_localInsts_1462_, lean_object* v_x_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v___x_1471_; 
v___x_1471_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1461_, v_localInsts_1462_, v_x_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_00_u03b1_1472_, lean_object* v_lctx_1473_, lean_object* v_localInsts_1474_, lean_object* v_x_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(v_00_u03b1_1472_, v_lctx_1473_, v_localInsts_1474_, v_x_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(lean_object* v___y_1484_){
_start:
{
lean_object* v___x_1486_; lean_object* v_env_1487_; lean_object* v___x_1488_; lean_object* v_mainModule_1489_; lean_object* v___x_1490_; 
v___x_1486_ = lean_st_ref_get(v___y_1484_);
v_env_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc_ref(v_env_1487_);
lean_dec(v___x_1486_);
v___x_1488_ = l_Lean_Environment_header(v_env_1487_);
lean_dec_ref(v_env_1487_);
v_mainModule_1489_ = lean_ctor_get(v___x_1488_, 0);
lean_inc(v_mainModule_1489_);
lean_dec_ref(v___x_1488_);
v___x_1490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1490_, 0, v_mainModule_1489_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg___boxed(lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1491_);
lean_dec(v___y_1491_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v___x_1497_; 
v___x_1497_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1495_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___boxed(lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(lean_object* v___y_1502_, uint8_t v_isExporting_1503_, lean_object* v_a_x3f_1504_){
_start:
{
lean_object* v___x_1506_; lean_object* v_env_1507_; lean_object* v_messages_1508_; lean_object* v_scopes_1509_; lean_object* v_usedQuotCtxts_1510_; lean_object* v_nextMacroScope_1511_; lean_object* v_maxRecDepth_1512_; lean_object* v_ngen_1513_; lean_object* v_auxDeclNGen_1514_; lean_object* v_infoState_1515_; lean_object* v_traceState_1516_; lean_object* v_snapshotTasks_1517_; lean_object* v_prevLinterStates_1518_; lean_object* v_codeQualityEntryTasks_1519_; lean_object* v___x_1521_; uint8_t v_isShared_1522_; uint8_t v_isSharedCheck_1530_; 
v___x_1506_ = lean_st_ref_take(v___y_1502_);
v_env_1507_ = lean_ctor_get(v___x_1506_, 0);
v_messages_1508_ = lean_ctor_get(v___x_1506_, 1);
v_scopes_1509_ = lean_ctor_get(v___x_1506_, 2);
v_usedQuotCtxts_1510_ = lean_ctor_get(v___x_1506_, 3);
v_nextMacroScope_1511_ = lean_ctor_get(v___x_1506_, 4);
v_maxRecDepth_1512_ = lean_ctor_get(v___x_1506_, 5);
v_ngen_1513_ = lean_ctor_get(v___x_1506_, 6);
v_auxDeclNGen_1514_ = lean_ctor_get(v___x_1506_, 7);
v_infoState_1515_ = lean_ctor_get(v___x_1506_, 8);
v_traceState_1516_ = lean_ctor_get(v___x_1506_, 9);
v_snapshotTasks_1517_ = lean_ctor_get(v___x_1506_, 10);
v_prevLinterStates_1518_ = lean_ctor_get(v___x_1506_, 11);
v_codeQualityEntryTasks_1519_ = lean_ctor_get(v___x_1506_, 12);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1521_ = v___x_1506_;
v_isShared_1522_ = v_isSharedCheck_1530_;
goto v_resetjp_1520_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1519_);
lean_inc(v_prevLinterStates_1518_);
lean_inc(v_snapshotTasks_1517_);
lean_inc(v_traceState_1516_);
lean_inc(v_infoState_1515_);
lean_inc(v_auxDeclNGen_1514_);
lean_inc(v_ngen_1513_);
lean_inc(v_maxRecDepth_1512_);
lean_inc(v_nextMacroScope_1511_);
lean_inc(v_usedQuotCtxts_1510_);
lean_inc(v_scopes_1509_);
lean_inc(v_messages_1508_);
lean_inc(v_env_1507_);
lean_dec(v___x_1506_);
v___x_1521_ = lean_box(0);
v_isShared_1522_ = v_isSharedCheck_1530_;
goto v_resetjp_1520_;
}
v_resetjp_1520_:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1526_; 
v___x_1523_ = lean_box(0);
v___x_1524_ = l_Lean_Environment_setExporting(v_env_1507_, v_isExporting_1503_);
if (v_isShared_1522_ == 0)
{
lean_ctor_set(v___x_1521_, 0, v___x_1524_);
v___x_1526_ = v___x_1521_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v___x_1524_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v_messages_1508_);
lean_ctor_set(v_reuseFailAlloc_1529_, 2, v_scopes_1509_);
lean_ctor_set(v_reuseFailAlloc_1529_, 3, v_usedQuotCtxts_1510_);
lean_ctor_set(v_reuseFailAlloc_1529_, 4, v_nextMacroScope_1511_);
lean_ctor_set(v_reuseFailAlloc_1529_, 5, v_maxRecDepth_1512_);
lean_ctor_set(v_reuseFailAlloc_1529_, 6, v_ngen_1513_);
lean_ctor_set(v_reuseFailAlloc_1529_, 7, v_auxDeclNGen_1514_);
lean_ctor_set(v_reuseFailAlloc_1529_, 8, v_infoState_1515_);
lean_ctor_set(v_reuseFailAlloc_1529_, 9, v_traceState_1516_);
lean_ctor_set(v_reuseFailAlloc_1529_, 10, v_snapshotTasks_1517_);
lean_ctor_set(v_reuseFailAlloc_1529_, 11, v_prevLinterStates_1518_);
lean_ctor_set(v_reuseFailAlloc_1529_, 12, v_codeQualityEntryTasks_1519_);
v___x_1526_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_st_ref_put(v___y_1502_, v___x_1526_);
v___x_1528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1528_, 0, v___x_1523_);
return v___x_1528_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0___boxed(lean_object* v___y_1531_, lean_object* v_isExporting_1532_, lean_object* v_a_x3f_1533_, lean_object* v___y_1534_){
_start:
{
uint8_t v_isExporting_boxed_1535_; lean_object* v_res_1536_; 
v_isExporting_boxed_1535_ = lean_unbox(v_isExporting_1532_);
v_res_1536_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1531_, v_isExporting_boxed_1535_, v_a_x3f_1533_);
lean_dec(v_a_x3f_1533_);
lean_dec(v___y_1531_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(lean_object* v_x_1537_, uint8_t v_isExporting_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v___x_1542_; lean_object* v_env_1543_; lean_object* v___x_1544_; uint8_t v_isModule_1545_; 
v___x_1542_ = lean_st_ref_get(v___y_1540_);
v_env_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc_ref(v_env_1543_);
lean_dec(v___x_1542_);
v___x_1544_ = l_Lean_Environment_header(v_env_1543_);
v_isModule_1545_ = lean_ctor_get_uint8(v___x_1544_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1544_);
if (v_isModule_1545_ == 0)
{
lean_object* v___x_1546_; 
lean_dec_ref(v_env_1543_);
lean_inc(v___y_1540_);
lean_inc_ref(v___y_1539_);
v___x_1546_ = lean_apply_3(v_x_1537_, v___y_1539_, v___y_1540_, lean_box(0));
return v___x_1546_;
}
else
{
uint8_t v_isExporting_1547_; 
v_isExporting_1547_ = lean_ctor_get_uint8(v_env_1543_, sizeof(void*)*8);
lean_dec_ref(v_env_1543_);
if (v_isExporting_1538_ == 0)
{
if (v_isExporting_1547_ == 0)
{
lean_object* v___x_1601_; 
lean_inc(v___y_1540_);
lean_inc_ref(v___y_1539_);
v___x_1601_ = lean_apply_3(v_x_1537_, v___y_1539_, v___y_1540_, lean_box(0));
return v___x_1601_;
}
else
{
goto v___jp_1548_;
}
}
else
{
if (v_isExporting_1547_ == 0)
{
goto v___jp_1548_;
}
else
{
lean_object* v___x_1602_; 
lean_inc(v___y_1540_);
lean_inc_ref(v___y_1539_);
v___x_1602_ = lean_apply_3(v_x_1537_, v___y_1539_, v___y_1540_, lean_box(0));
return v___x_1602_;
}
}
v___jp_1548_:
{
lean_object* v___x_1549_; lean_object* v_env_1550_; lean_object* v_messages_1551_; lean_object* v_scopes_1552_; lean_object* v_usedQuotCtxts_1553_; lean_object* v_nextMacroScope_1554_; lean_object* v_maxRecDepth_1555_; lean_object* v_ngen_1556_; lean_object* v_auxDeclNGen_1557_; lean_object* v_infoState_1558_; lean_object* v_traceState_1559_; lean_object* v_snapshotTasks_1560_; lean_object* v_prevLinterStates_1561_; lean_object* v_codeQualityEntryTasks_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1600_; 
v___x_1549_ = lean_st_ref_take(v___y_1540_);
v_env_1550_ = lean_ctor_get(v___x_1549_, 0);
v_messages_1551_ = lean_ctor_get(v___x_1549_, 1);
v_scopes_1552_ = lean_ctor_get(v___x_1549_, 2);
v_usedQuotCtxts_1553_ = lean_ctor_get(v___x_1549_, 3);
v_nextMacroScope_1554_ = lean_ctor_get(v___x_1549_, 4);
v_maxRecDepth_1555_ = lean_ctor_get(v___x_1549_, 5);
v_ngen_1556_ = lean_ctor_get(v___x_1549_, 6);
v_auxDeclNGen_1557_ = lean_ctor_get(v___x_1549_, 7);
v_infoState_1558_ = lean_ctor_get(v___x_1549_, 8);
v_traceState_1559_ = lean_ctor_get(v___x_1549_, 9);
v_snapshotTasks_1560_ = lean_ctor_get(v___x_1549_, 10);
v_prevLinterStates_1561_ = lean_ctor_get(v___x_1549_, 11);
v_codeQualityEntryTasks_1562_ = lean_ctor_get(v___x_1549_, 12);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1564_ = v___x_1549_;
v_isShared_1565_ = v_isSharedCheck_1600_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1562_);
lean_inc(v_prevLinterStates_1561_);
lean_inc(v_snapshotTasks_1560_);
lean_inc(v_traceState_1559_);
lean_inc(v_infoState_1558_);
lean_inc(v_auxDeclNGen_1557_);
lean_inc(v_ngen_1556_);
lean_inc(v_maxRecDepth_1555_);
lean_inc(v_nextMacroScope_1554_);
lean_inc(v_usedQuotCtxts_1553_);
lean_inc(v_scopes_1552_);
lean_inc(v_messages_1551_);
lean_inc(v_env_1550_);
lean_dec(v___x_1549_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1600_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1566_; lean_object* v___x_1568_; 
v___x_1566_ = l_Lean_Environment_setExporting(v_env_1550_, v_isExporting_1538_);
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v___x_1566_);
v___x_1568_ = v___x_1564_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v___x_1566_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v_messages_1551_);
lean_ctor_set(v_reuseFailAlloc_1599_, 2, v_scopes_1552_);
lean_ctor_set(v_reuseFailAlloc_1599_, 3, v_usedQuotCtxts_1553_);
lean_ctor_set(v_reuseFailAlloc_1599_, 4, v_nextMacroScope_1554_);
lean_ctor_set(v_reuseFailAlloc_1599_, 5, v_maxRecDepth_1555_);
lean_ctor_set(v_reuseFailAlloc_1599_, 6, v_ngen_1556_);
lean_ctor_set(v_reuseFailAlloc_1599_, 7, v_auxDeclNGen_1557_);
lean_ctor_set(v_reuseFailAlloc_1599_, 8, v_infoState_1558_);
lean_ctor_set(v_reuseFailAlloc_1599_, 9, v_traceState_1559_);
lean_ctor_set(v_reuseFailAlloc_1599_, 10, v_snapshotTasks_1560_);
lean_ctor_set(v_reuseFailAlloc_1599_, 11, v_prevLinterStates_1561_);
lean_ctor_set(v_reuseFailAlloc_1599_, 12, v_codeQualityEntryTasks_1562_);
v___x_1568_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = lean_st_ref_put(v___y_1540_, v___x_1568_);
lean_inc(v___y_1540_);
lean_inc_ref(v___y_1539_);
v___x_1570_ = lean_apply_3(v_x_1537_, v___y_1539_, v___y_1540_, lean_box(0));
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1587_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1573_ = v___x_1570_;
v_isShared_1574_ = v_isSharedCheck_1587_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1570_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1587_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
lean_inc(v_a_1571_);
if (v_isShared_1574_ == 0)
{
lean_ctor_set_tag(v___x_1573_, 1);
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
v___x_1577_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1540_, v_isExporting_1547_, v___x_1576_);
lean_dec_ref(v___x_1576_);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1584_ == 0)
{
lean_object* v_unused_1585_; 
v_unused_1585_ = lean_ctor_get(v___x_1577_, 0);
lean_dec(v_unused_1585_);
v___x_1579_ = v___x_1577_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_dec(v___x_1577_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v_a_1571_);
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1571_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
}
else
{
lean_object* v_a_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
v_a_1588_ = lean_ctor_get(v___x_1570_, 0);
lean_inc(v_a_1588_);
lean_dec_ref_known(v___x_1570_, 1);
v___x_1589_ = lean_box(0);
v___x_1590_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1540_, v_isExporting_1547_, v___x_1589_);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1597_ == 0)
{
lean_object* v_unused_1598_; 
v_unused_1598_ = lean_ctor_get(v___x_1590_, 0);
lean_dec(v_unused_1598_);
v___x_1592_ = v___x_1590_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_dec(v___x_1590_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
lean_ctor_set_tag(v___x_1592_, 1);
lean_ctor_set(v___x_1592_, 0, v_a_1588_);
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1588_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___boxed(lean_object* v_x_1603_, lean_object* v_isExporting_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
uint8_t v_isExporting_boxed_1608_; lean_object* v_res_1609_; 
v_isExporting_boxed_1608_ = lean_unbox(v_isExporting_1604_);
v_res_1609_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1603_, v_isExporting_boxed_1608_, v___y_1605_, v___y_1606_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(lean_object* v_00_u03b1_1610_, lean_object* v_x_1611_, uint8_t v_isExporting_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1611_, v_isExporting_1612_, v___y_1613_, v___y_1614_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___boxed(lean_object* v_00_u03b1_1617_, lean_object* v_x_1618_, lean_object* v_isExporting_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
uint8_t v_isExporting_boxed_1623_; lean_object* v_res_1624_; 
v_isExporting_boxed_1623_ = lean_unbox(v_isExporting_1619_);
v_res_1624_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(v_00_u03b1_1617_, v_x_1618_, v_isExporting_boxed_1623_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
return v_res_1624_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(uint8_t v_suppressElabErrors_1633_, uint8_t v___y_1634_, lean_object* v_x_1635_){
_start:
{
if (lean_obj_tag(v_x_1635_) == 1)
{
lean_object* v_pre_1636_; 
v_pre_1636_ = lean_ctor_get(v_x_1635_, 0);
switch(lean_obj_tag(v_pre_1636_))
{
case 1:
{
lean_object* v_pre_1637_; 
v_pre_1637_ = lean_ctor_get(v_pre_1636_, 0);
switch(lean_obj_tag(v_pre_1637_))
{
case 0:
{
lean_object* v_str_1638_; lean_object* v_str_1639_; lean_object* v___x_1640_; uint8_t v___x_1641_; 
v_str_1638_ = lean_ctor_get(v_x_1635_, 1);
v_str_1639_ = lean_ctor_get(v_pre_1636_, 1);
v___x_1640_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0));
v___x_1641_ = lean_string_dec_eq(v_str_1639_, v___x_1640_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1642_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__1));
v___x_1643_ = lean_string_dec_eq(v_str_1639_, v___x_1642_);
if (v___x_1643_ == 0)
{
return v___x_1643_;
}
else
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1644_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__2));
v___x_1645_ = lean_string_dec_eq(v_str_1638_, v___x_1644_);
if (v___x_1645_ == 0)
{
return v___x_1645_;
}
else
{
return v_suppressElabErrors_1633_;
}
}
}
else
{
lean_object* v___x_1646_; uint8_t v___x_1647_; 
v___x_1646_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__3));
v___x_1647_ = lean_string_dec_eq(v_str_1638_, v___x_1646_);
if (v___x_1647_ == 0)
{
return v___x_1647_;
}
else
{
return v_suppressElabErrors_1633_;
}
}
}
case 1:
{
lean_object* v_pre_1648_; 
v_pre_1648_ = lean_ctor_get(v_pre_1637_, 0);
if (lean_obj_tag(v_pre_1648_) == 0)
{
lean_object* v_str_1649_; lean_object* v_str_1650_; lean_object* v_str_1651_; lean_object* v___x_1652_; uint8_t v___x_1653_; 
v_str_1649_ = lean_ctor_get(v_x_1635_, 1);
v_str_1650_ = lean_ctor_get(v_pre_1636_, 1);
v_str_1651_ = lean_ctor_get(v_pre_1637_, 1);
v___x_1652_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__4));
v___x_1653_ = lean_string_dec_eq(v_str_1651_, v___x_1652_);
if (v___x_1653_ == 0)
{
return v___x_1653_;
}
else
{
lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1654_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__5));
v___x_1655_ = lean_string_dec_eq(v_str_1650_, v___x_1654_);
if (v___x_1655_ == 0)
{
return v___x_1655_;
}
else
{
lean_object* v___x_1656_; uint8_t v___x_1657_; 
v___x_1656_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__6));
v___x_1657_ = lean_string_dec_eq(v_str_1649_, v___x_1656_);
if (v___x_1657_ == 0)
{
return v___x_1657_;
}
else
{
return v_suppressElabErrors_1633_;
}
}
}
}
else
{
return v___y_1634_;
}
}
default: 
{
return v___y_1634_;
}
}
}
case 0:
{
lean_object* v_str_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
v_str_1658_ = lean_ctor_get(v_x_1635_, 1);
v___x_1659_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_1660_ = lean_string_dec_eq(v_str_1658_, v___x_1659_);
if (v___x_1660_ == 0)
{
return v___x_1660_;
}
else
{
return v_suppressElabErrors_1633_;
}
}
default: 
{
return v___y_1634_;
}
}
}
else
{
return v___y_1634_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1661_, lean_object* v___y_1662_, lean_object* v_x_1663_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1664_; uint8_t v___y_51363__boxed_1665_; uint8_t v_res_1666_; lean_object* v_r_1667_; 
v_suppressElabErrors_boxed_1664_ = lean_unbox(v_suppressElabErrors_1661_);
v___y_51363__boxed_1665_ = lean_unbox(v___y_1662_);
v_res_1666_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(v_suppressElabErrors_boxed_1664_, v___y_51363__boxed_1665_, v_x_1663_);
lean_dec(v_x_1663_);
v_r_1667_ = lean_box(v_res_1666_);
return v_r_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(lean_object* v_ref_1669_, lean_object* v_msgData_1670_, uint8_t v_severity_1671_, uint8_t v_isSilent_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; uint8_t v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; uint8_t v___y_1685_; lean_object* v_currNamespace_1686_; lean_object* v_openDecls_1687_; lean_object* v___y_1688_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; uint8_t v___y_1717_; lean_object* v___y_1718_; uint8_t v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; uint8_t v___y_1722_; lean_object* v___y_1723_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v___y_1743_; uint8_t v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; uint8_t v___y_1747_; lean_object* v___y_1748_; uint8_t v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; uint8_t v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; uint8_t v___y_1760_; lean_object* v___y_1761_; uint8_t v___y_1762_; uint8_t v___x_1767_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; lean_object* v___y_1773_; uint8_t v___y_1774_; lean_object* v___y_1775_; uint8_t v___y_1776_; uint8_t v___y_1777_; uint8_t v___y_1779_; uint8_t v___x_1797_; 
v___x_1767_ = 2;
v___x_1797_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1671_, v___x_1767_);
if (v___x_1797_ == 0)
{
v___y_1779_ = v___x_1797_;
goto v___jp_1778_;
}
else
{
uint8_t v___x_1798_; 
lean_inc_ref(v_msgData_1670_);
v___x_1798_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1670_);
v___y_1779_ = v___x_1798_;
goto v___jp_1778_;
}
v___jp_1678_:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v_env_1693_; lean_object* v_nextMacroScope_1694_; lean_object* v_ngen_1695_; lean_object* v_auxDeclNGen_1696_; lean_object* v_traceState_1697_; lean_object* v_cache_1698_; lean_object* v_messages_1699_; lean_object* v_infoState_1700_; lean_object* v_snapshotTasks_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1712_; 
lean_inc(v_openDecls_1687_);
lean_inc(v_currNamespace_1686_);
v___x_1689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1689_, 0, v_currNamespace_1686_);
lean_ctor_set(v___x_1689_, 1, v_openDecls_1687_);
v___x_1690_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1690_, 0, v___x_1689_);
lean_ctor_set(v___x_1690_, 1, v___y_1680_);
lean_inc_ref(v___y_1681_);
lean_inc_ref(v___y_1684_);
v___x_1691_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1691_, 0, v___y_1684_);
lean_ctor_set(v___x_1691_, 1, v___y_1683_);
lean_ctor_set(v___x_1691_, 2, v___y_1679_);
lean_ctor_set(v___x_1691_, 3, v___y_1681_);
lean_ctor_set(v___x_1691_, 4, v___x_1690_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*5, v___y_1682_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*5 + 1, v___y_1685_);
lean_ctor_set_uint8(v___x_1691_, sizeof(void*)*5 + 2, v_isSilent_1672_);
v___x_1692_ = lean_st_ref_take(v___y_1688_);
v_env_1693_ = lean_ctor_get(v___x_1692_, 0);
v_nextMacroScope_1694_ = lean_ctor_get(v___x_1692_, 1);
v_ngen_1695_ = lean_ctor_get(v___x_1692_, 2);
v_auxDeclNGen_1696_ = lean_ctor_get(v___x_1692_, 3);
v_traceState_1697_ = lean_ctor_get(v___x_1692_, 4);
v_cache_1698_ = lean_ctor_get(v___x_1692_, 5);
v_messages_1699_ = lean_ctor_get(v___x_1692_, 6);
v_infoState_1700_ = lean_ctor_get(v___x_1692_, 7);
v_snapshotTasks_1701_ = lean_ctor_get(v___x_1692_, 8);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1692_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1703_ = v___x_1692_;
v_isShared_1704_ = v_isSharedCheck_1712_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_snapshotTasks_1701_);
lean_inc(v_infoState_1700_);
lean_inc(v_messages_1699_);
lean_inc(v_cache_1698_);
lean_inc(v_traceState_1697_);
lean_inc(v_auxDeclNGen_1696_);
lean_inc(v_ngen_1695_);
lean_inc(v_nextMacroScope_1694_);
lean_inc(v_env_1693_);
lean_dec(v___x_1692_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1712_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1708_; 
v___x_1705_ = lean_box(0);
v___x_1706_ = l_Lean_MessageLog_add(v___x_1691_, v_messages_1699_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 6, v___x_1706_);
v___x_1708_ = v___x_1703_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_env_1693_);
lean_ctor_set(v_reuseFailAlloc_1711_, 1, v_nextMacroScope_1694_);
lean_ctor_set(v_reuseFailAlloc_1711_, 2, v_ngen_1695_);
lean_ctor_set(v_reuseFailAlloc_1711_, 3, v_auxDeclNGen_1696_);
lean_ctor_set(v_reuseFailAlloc_1711_, 4, v_traceState_1697_);
lean_ctor_set(v_reuseFailAlloc_1711_, 5, v_cache_1698_);
lean_ctor_set(v_reuseFailAlloc_1711_, 6, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1711_, 7, v_infoState_1700_);
lean_ctor_set(v_reuseFailAlloc_1711_, 8, v_snapshotTasks_1701_);
v___x_1708_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; 
v___x_1709_ = lean_st_ref_put(v___y_1688_, v___x_1708_);
v___x_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1705_);
return v___x_1710_;
}
}
}
v___jp_1713_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1739_; 
v___x_1724_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1670_);
v___x_1725_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v___x_1724_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_);
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1728_ = v___x_1725_;
v_isShared_1729_ = v_isSharedCheck_1739_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1725_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1739_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; 
lean_inc_ref_n(v___y_1718_, 2);
v___x_1730_ = l_Lean_FileMap_toPosition(v___y_1718_, v___y_1720_);
lean_dec(v___y_1720_);
v___x_1731_ = l_Lean_FileMap_toPosition(v___y_1718_, v___y_1723_);
lean_dec(v___y_1723_);
v___x_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
v___x_1733_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v___y_1717_ == 0)
{
lean_del_object(v___x_1728_);
lean_dec_ref(v___y_1715_);
v___y_1679_ = v___x_1732_;
v___y_1680_ = v_a_1726_;
v___y_1681_ = v___x_1733_;
v___y_1682_ = v___y_1719_;
v___y_1683_ = v___x_1730_;
v___y_1684_ = v___y_1721_;
v___y_1685_ = v___y_1722_;
v_currNamespace_1686_ = v___y_1714_;
v_openDecls_1687_ = v___y_1716_;
v___y_1688_ = v___y_1676_;
goto v___jp_1678_;
}
else
{
uint8_t v___x_1734_; 
lean_inc(v_a_1726_);
v___x_1734_ = l_Lean_MessageData_hasTag(v___y_1715_, v_a_1726_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; lean_object* v___x_1737_; 
lean_dec_ref_known(v___x_1732_, 1);
lean_dec_ref(v___x_1730_);
lean_dec(v_a_1726_);
v___x_1735_ = lean_box(0);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 0, v___x_1735_);
v___x_1737_ = v___x_1728_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v___x_1735_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
else
{
lean_del_object(v___x_1728_);
v___y_1679_ = v___x_1732_;
v___y_1680_ = v_a_1726_;
v___y_1681_ = v___x_1733_;
v___y_1682_ = v___y_1719_;
v___y_1683_ = v___x_1730_;
v___y_1684_ = v___y_1721_;
v___y_1685_ = v___y_1722_;
v_currNamespace_1686_ = v___y_1714_;
v_openDecls_1687_ = v___y_1716_;
v___y_1688_ = v___y_1676_;
goto v___jp_1678_;
}
}
}
}
v___jp_1740_:
{
lean_object* v___x_1751_; 
v___x_1751_ = l_Lean_Syntax_getTailPos_x3f(v___y_1746_, v___y_1747_);
lean_dec(v___y_1746_);
if (lean_obj_tag(v___x_1751_) == 0)
{
lean_inc(v___y_1750_);
v___y_1714_ = v___y_1741_;
v___y_1715_ = v___y_1742_;
v___y_1716_ = v___y_1743_;
v___y_1717_ = v___y_1744_;
v___y_1718_ = v___y_1745_;
v___y_1719_ = v___y_1747_;
v___y_1720_ = v___y_1750_;
v___y_1721_ = v___y_1748_;
v___y_1722_ = v___y_1749_;
v___y_1723_ = v___y_1750_;
goto v___jp_1713_;
}
else
{
lean_object* v_val_1752_; 
v_val_1752_ = lean_ctor_get(v___x_1751_, 0);
lean_inc(v_val_1752_);
lean_dec_ref_known(v___x_1751_, 1);
v___y_1714_ = v___y_1741_;
v___y_1715_ = v___y_1742_;
v___y_1716_ = v___y_1743_;
v___y_1717_ = v___y_1744_;
v___y_1718_ = v___y_1745_;
v___y_1719_ = v___y_1747_;
v___y_1720_ = v___y_1750_;
v___y_1721_ = v___y_1748_;
v___y_1722_ = v___y_1749_;
v___y_1723_ = v_val_1752_;
goto v___jp_1713_;
}
}
v___jp_1753_:
{
lean_object* v_ref_1763_; lean_object* v___x_1764_; 
v_ref_1763_ = l_Lean_replaceRef(v_ref_1669_, v___y_1759_);
v___x_1764_ = l_Lean_Syntax_getPos_x3f(v_ref_1763_, v___y_1760_);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_unsigned_to_nat(0u);
v___y_1741_ = v___y_1754_;
v___y_1742_ = v___y_1755_;
v___y_1743_ = v___y_1756_;
v___y_1744_ = v___y_1757_;
v___y_1745_ = v___y_1758_;
v___y_1746_ = v_ref_1763_;
v___y_1747_ = v___y_1760_;
v___y_1748_ = v___y_1761_;
v___y_1749_ = v___y_1762_;
v___y_1750_ = v___x_1765_;
goto v___jp_1740_;
}
else
{
lean_object* v_val_1766_; 
v_val_1766_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_val_1766_);
lean_dec_ref_known(v___x_1764_, 1);
v___y_1741_ = v___y_1754_;
v___y_1742_ = v___y_1755_;
v___y_1743_ = v___y_1756_;
v___y_1744_ = v___y_1757_;
v___y_1745_ = v___y_1758_;
v___y_1746_ = v_ref_1763_;
v___y_1747_ = v___y_1760_;
v___y_1748_ = v___y_1761_;
v___y_1749_ = v___y_1762_;
v___y_1750_ = v_val_1766_;
goto v___jp_1740_;
}
}
v___jp_1768_:
{
if (v___y_1777_ == 0)
{
v___y_1754_ = v___y_1769_;
v___y_1755_ = v___y_1771_;
v___y_1756_ = v___y_1772_;
v___y_1757_ = v___y_1774_;
v___y_1758_ = v___y_1770_;
v___y_1759_ = v___y_1775_;
v___y_1760_ = v___y_1776_;
v___y_1761_ = v___y_1773_;
v___y_1762_ = v_severity_1671_;
goto v___jp_1753_;
}
else
{
v___y_1754_ = v___y_1769_;
v___y_1755_ = v___y_1771_;
v___y_1756_ = v___y_1772_;
v___y_1757_ = v___y_1774_;
v___y_1758_ = v___y_1770_;
v___y_1759_ = v___y_1775_;
v___y_1760_ = v___y_1776_;
v___y_1761_ = v___y_1773_;
v___y_1762_ = v___x_1767_;
goto v___jp_1753_;
}
}
v___jp_1778_:
{
if (v___y_1779_ == 0)
{
lean_object* v_toCold_1780_; lean_object* v_ref_1781_; uint8_t v_suppressElabErrors_1782_; lean_object* v_fileName_1783_; lean_object* v_fileMap_1784_; lean_object* v_options_1785_; lean_object* v_currNamespace_1786_; lean_object* v_openDecls_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___f_1790_; uint8_t v___x_1791_; uint8_t v___x_1792_; 
v_toCold_1780_ = lean_ctor_get(v___y_1675_, 0);
v_ref_1781_ = lean_ctor_get(v___y_1675_, 2);
v_suppressElabErrors_1782_ = lean_ctor_get_uint8(v___y_1675_, sizeof(void*)*3 + 1);
v_fileName_1783_ = lean_ctor_get(v_toCold_1780_, 0);
v_fileMap_1784_ = lean_ctor_get(v_toCold_1780_, 1);
v_options_1785_ = lean_ctor_get(v_toCold_1780_, 2);
v_currNamespace_1786_ = lean_ctor_get(v_toCold_1780_, 4);
v_openDecls_1787_ = lean_ctor_get(v_toCold_1780_, 5);
v___x_1788_ = lean_box(v_suppressElabErrors_1782_);
v___x_1789_ = lean_box(v___y_1779_);
v___f_1790_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1790_, 0, v___x_1788_);
lean_closure_set(v___f_1790_, 1, v___x_1789_);
v___x_1791_ = 1;
v___x_1792_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1671_, v___x_1791_);
if (v___x_1792_ == 0)
{
v___y_1769_ = v_currNamespace_1786_;
v___y_1770_ = v_fileMap_1784_;
v___y_1771_ = v___f_1790_;
v___y_1772_ = v_openDecls_1787_;
v___y_1773_ = v_fileName_1783_;
v___y_1774_ = v_suppressElabErrors_1782_;
v___y_1775_ = v_ref_1781_;
v___y_1776_ = v___y_1779_;
v___y_1777_ = v___x_1792_;
goto v___jp_1768_;
}
else
{
lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1793_ = l_Lean_warningAsError;
v___x_1794_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_1785_, v___x_1793_);
v___y_1769_ = v_currNamespace_1786_;
v___y_1770_ = v_fileMap_1784_;
v___y_1771_ = v___f_1790_;
v___y_1772_ = v_openDecls_1787_;
v___y_1773_ = v_fileName_1783_;
v___y_1774_ = v_suppressElabErrors_1782_;
v___y_1775_ = v_ref_1781_;
v___y_1776_ = v___y_1779_;
v___y_1777_ = v___x_1794_;
goto v___jp_1768_;
}
}
else
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
lean_dec_ref(v_msgData_1670_);
v___x_1795_ = lean_box(0);
v___x_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
return v___x_1796_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___boxed(lean_object* v_ref_1799_, lean_object* v_msgData_1800_, lean_object* v_severity_1801_, lean_object* v_isSilent_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v_severity_boxed_1808_; uint8_t v_isSilent_boxed_1809_; lean_object* v_res_1810_; 
v_severity_boxed_1808_ = lean_unbox(v_severity_1801_);
v_isSilent_boxed_1809_ = lean_unbox(v_isSilent_1802_);
v_res_1810_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1799_, v_msgData_1800_, v_severity_boxed_1808_, v_isSilent_boxed_1809_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v_ref_1799_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(lean_object* v_ref_1811_, lean_object* v_msgData_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_){
_start:
{
uint8_t v___x_1820_; uint8_t v___x_1821_; lean_object* v___x_1822_; 
v___x_1820_ = 2;
v___x_1821_ = 0;
v___x_1822_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1811_, v_msgData_1812_, v___x_1820_, v___x_1821_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26___boxed(lean_object* v_ref_1823_, lean_object* v_msgData_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v_res_1832_; 
v_res_1832_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1823_, v_msgData_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v_ref_1823_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(lean_object* v_msgData_1833_, uint8_t v_severity_1834_, uint8_t v_isSilent_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_ref_1843_; lean_object* v___x_1844_; 
v_ref_1843_ = lean_ctor_get(v___y_1840_, 2);
v___x_1844_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1843_, v_msgData_1833_, v_severity_1834_, v_isSilent_1835_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42___boxed(lean_object* v_msgData_1845_, lean_object* v_severity_1846_, lean_object* v_isSilent_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
uint8_t v_severity_boxed_1855_; uint8_t v_isSilent_boxed_1856_; lean_object* v_res_1857_; 
v_severity_boxed_1855_ = lean_unbox(v_severity_1846_);
v_isSilent_boxed_1856_ = lean_unbox(v_isSilent_1847_);
v_res_1857_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1845_, v_severity_boxed_1855_, v_isSilent_boxed_1856_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_, v___y_1853_);
lean_dec(v___y_1853_);
lean_dec_ref(v___y_1852_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec(v___y_1849_);
lean_dec_ref(v___y_1848_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(lean_object* v_msgData_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
uint8_t v___x_1866_; uint8_t v___x_1867_; lean_object* v___x_1868_; 
v___x_1866_ = 2;
v___x_1867_ = 0;
v___x_1868_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1858_, v___x_1866_, v___x_1867_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27___boxed(lean_object* v_msgData_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_){
_start:
{
lean_object* v_res_1877_; 
v_res_1877_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v_msgData_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
return v_res_1877_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1(void){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__0));
v___x_1880_ = l_Lean_stringToMessageData(v___x_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(lean_object* v_ex_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
if (lean_obj_tag(v_ex_1881_) == 0)
{
lean_object* v_ref_1889_; lean_object* v_msg_1890_; lean_object* v___x_1891_; 
v_ref_1889_ = lean_ctor_get(v_ex_1881_, 0);
lean_inc(v_ref_1889_);
v_msg_1890_ = lean_ctor_get(v_ex_1881_, 1);
lean_inc_ref(v_msg_1890_);
lean_dec_ref_known(v_ex_1881_, 2);
v___x_1891_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1889_, v_msg_1890_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v_ref_1889_);
return v___x_1891_;
}
else
{
lean_object* v_id_1892_; uint8_t v___y_1894_; uint8_t v___x_1916_; 
v_id_1892_ = lean_ctor_get(v_ex_1881_, 0);
lean_inc(v_id_1892_);
v___x_1916_ = l_Lean_Elab_isAbortExceptionId(v_id_1892_);
if (v___x_1916_ == 0)
{
uint8_t v___x_1917_; 
v___x_1917_ = l_Lean_Exception_isInterrupt(v_ex_1881_);
lean_dec_ref_known(v_ex_1881_, 2);
v___y_1894_ = v___x_1917_;
goto v___jp_1893_;
}
else
{
lean_dec_ref_known(v_ex_1881_, 2);
v___y_1894_ = v___x_1916_;
goto v___jp_1893_;
}
v___jp_1893_:
{
if (v___y_1894_ == 0)
{
lean_object* v_ref_1895_; lean_object* v___x_1896_; 
v_ref_1895_ = lean_ctor_get(v___y_1886_, 2);
v___x_1896_ = l_Lean_InternalExceptionId_getName(v_id_1892_);
lean_dec(v_id_1892_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_a_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v_a_1897_ = lean_ctor_get(v___x_1896_, 0);
lean_inc(v_a_1897_);
lean_dec_ref_known(v___x_1896_, 1);
v___x_1898_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_1899_ = l_Lean_MessageData_ofName(v_a_1897_);
v___x_1900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1898_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v___x_1900_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
return v___x_1901_;
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1913_; 
v_a_1902_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1904_ = v___x_1896_;
v_isShared_1905_ = v_isSharedCheck_1913_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1896_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1913_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1911_; 
v___x_1906_ = lean_io_error_to_string(v_a_1902_);
v___x_1907_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
v___x_1908_ = l_Lean_MessageData_ofFormat(v___x_1907_);
lean_inc(v_ref_1895_);
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v_ref_1895_);
lean_ctor_set(v___x_1909_, 1, v___x_1908_);
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 0, v___x_1909_);
v___x_1911_ = v___x_1904_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
else
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
lean_dec(v_id_1892_);
v___x_1914_ = lean_box(0);
v___x_1915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1914_);
return v___x_1915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___boxed(lean_object* v_ex_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_ex_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_x_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v___x_1935_; 
lean_inc(v___y_1933_);
lean_inc_ref(v___y_1932_);
lean_inc(v___y_1931_);
lean_inc_ref(v___y_1930_);
lean_inc(v___y_1929_);
lean_inc_ref(v___y_1928_);
v___x_1935_ = lean_apply_7(v_x_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, lean_box(0));
if (lean_obj_tag(v___x_1935_) == 0)
{
return v___x_1935_;
}
else
{
lean_object* v_a_1936_; uint8_t v___y_1938_; uint8_t v___x_1940_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1936_);
v___x_1940_ = l_Lean_Exception_isInterrupt(v_a_1936_);
if (v___x_1940_ == 0)
{
uint8_t v___x_1941_; 
lean_inc(v_a_1936_);
v___x_1941_ = l_Lean_Exception_isRuntime(v_a_1936_);
v___y_1938_ = v___x_1941_;
goto v___jp_1937_;
}
else
{
v___y_1938_ = v___x_1940_;
goto v___jp_1937_;
}
v___jp_1937_:
{
if (v___y_1938_ == 0)
{
lean_object* v___x_1939_; 
lean_dec_ref_known(v___x_1935_, 1);
v___x_1939_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_a_1936_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
return v___x_1939_;
}
else
{
lean_dec(v_a_1936_);
return v___x_1935_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_x_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v_x_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v___x_1951_, lean_object* v___x_1952_, lean_object* v_as_1953_, size_t v_sz_1954_, size_t v_i_1955_, lean_object* v_b_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
uint8_t v___x_1964_; 
v___x_1964_ = lean_usize_dec_lt(v_i_1955_, v_sz_1954_);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
lean_dec_ref(v___x_1951_);
v___x_1965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_b_1956_);
return v___x_1965_;
}
else
{
lean_object* v_a_1966_; lean_object* v_ref_1967_; lean_object* v_toCold_1968_; lean_object* v_currRecDepth_1969_; lean_object* v_ref_1970_; uint8_t v_diag_1971_; uint8_t v_suppressElabErrors_1972_; lean_object* v___x_1973_; uint8_t v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v_ref_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; 
v_a_1966_ = lean_array_uget_borrowed(v_as_1953_, v_i_1955_);
v_ref_1967_ = lean_ctor_get(v_a_1966_, 0);
v_toCold_1968_ = lean_ctor_get(v___y_1961_, 0);
v_currRecDepth_1969_ = lean_ctor_get(v___y_1961_, 1);
v_ref_1970_ = lean_ctor_get(v___y_1961_, 2);
v_diag_1971_ = lean_ctor_get_uint8(v___y_1961_, sizeof(void*)*3);
v_suppressElabErrors_1972_ = lean_ctor_get_uint8(v___y_1961_, sizeof(void*)*3 + 1);
v___x_1973_ = lean_unsigned_to_nat(0u);
v___x_1974_ = lean_nat_dec_eq(v___x_1952_, v___x_1973_);
v___x_1975_ = lean_box(0);
v___x_1976_ = lean_box(0);
v___x_1977_ = lean_box(v___x_1974_);
lean_inc_ref(v___x_1951_);
lean_inc(v_a_1966_);
v___x_1978_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_processDefDeriving___boxed), 11, 4);
lean_closure_set(v___x_1978_, 0, v_a_1966_);
lean_closure_set(v___x_1978_, 1, v___x_1951_);
lean_closure_set(v___x_1978_, 2, v___x_1977_);
lean_closure_set(v___x_1978_, 3, v___x_1976_);
v_ref_1979_ = l_Lean_replaceRef(v_ref_1967_, v_ref_1970_);
lean_inc(v_currRecDepth_1969_);
lean_inc_ref(v_toCold_1968_);
v___x_1980_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1980_, 0, v_toCold_1968_);
lean_ctor_set(v___x_1980_, 1, v_currRecDepth_1969_);
lean_ctor_set(v___x_1980_, 2, v_ref_1979_);
lean_ctor_set_uint8(v___x_1980_, sizeof(void*)*3, v_diag_1971_);
lean_ctor_set_uint8(v___x_1980_, sizeof(void*)*3 + 1, v_suppressElabErrors_1972_);
v___x_1981_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v___x_1978_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___x_1980_, v___y_1962_);
lean_dec_ref_known(v___x_1980_, 3);
if (lean_obj_tag(v___x_1981_) == 0)
{
size_t v___x_1982_; size_t v___x_1983_; 
lean_dec_ref_known(v___x_1981_, 1);
v___x_1982_ = ((size_t)1ULL);
v___x_1983_ = lean_usize_add(v_i_1955_, v___x_1982_);
v_i_1955_ = v___x_1983_;
v_b_1956_ = v___x_1975_;
goto _start;
}
else
{
lean_dec_ref(v___x_1951_);
return v___x_1981_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v___x_1985_, lean_object* v___x_1986_, lean_object* v_as_1987_, lean_object* v_sz_1988_, lean_object* v_i_1989_, lean_object* v_b_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
size_t v_sz_boxed_1998_; size_t v_i_boxed_1999_; lean_object* v_res_2000_; 
v_sz_boxed_1998_ = lean_unbox_usize(v_sz_1988_);
lean_dec(v_sz_1988_);
v_i_boxed_1999_ = lean_unbox_usize(v_i_1989_);
lean_dec(v_i_1989_);
v_res_2000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_1985_, v___x_1986_, v_as_1987_, v_sz_boxed_1998_, v_i_boxed_1999_, v_b_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
lean_dec(v___y_1996_);
lean_dec_ref(v___y_1995_);
lean_dec(v___y_1994_);
lean_dec_ref(v___y_1993_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec_ref(v_as_1987_);
lean_dec(v___x_1986_);
return v_res_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v_a_2001_, lean_object* v_declName_2002_, lean_object* v_a_2003_, lean_object* v___x_2004_, size_t v___x_2005_, lean_object* v___x_2006_, lean_object* v_xs_2007_, lean_object* v_x_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; size_t v_sz_2021_; lean_object* v___x_2022_; 
v___x_2016_ = l_Lean_ConstantInfo_levelParams(v_a_2001_);
v___x_2017_ = lean_box(0);
v___x_2018_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v___x_2016_, v___x_2017_);
v___x_2019_ = l_Lean_Expr_const___override(v_declName_2002_, v___x_2018_);
v___x_2020_ = l_Lean_mkAppN(v___x_2019_, v_xs_2007_);
v_sz_2021_ = lean_array_size(v_a_2003_);
v___x_2022_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_2020_, v___x_2004_, v_a_2003_, v_sz_2021_, v___x_2005_, v___x_2006_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_object* v___x_2024_; uint8_t v_isShared_2025_; uint8_t v_isSharedCheck_2029_; 
v_isSharedCheck_2029_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2029_ == 0)
{
lean_object* v_unused_2030_; 
v_unused_2030_ = lean_ctor_get(v___x_2022_, 0);
lean_dec(v_unused_2030_);
v___x_2024_ = v___x_2022_;
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
else
{
lean_dec(v___x_2022_);
v___x_2024_ = lean_box(0);
v_isShared_2025_ = v_isSharedCheck_2029_;
goto v_resetjp_2023_;
}
v_resetjp_2023_:
{
lean_object* v___x_2027_; 
if (v_isShared_2025_ == 0)
{
lean_ctor_set(v___x_2024_, 0, v___x_2006_);
v___x_2027_ = v___x_2024_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2006_);
v___x_2027_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
return v___x_2027_;
}
}
}
else
{
return v___x_2022_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v_a_2031_, lean_object* v_declName_2032_, lean_object* v_a_2033_, lean_object* v___x_2034_, lean_object* v___x_2035_, lean_object* v___x_2036_, lean_object* v_xs_2037_, lean_object* v_x_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_){
_start:
{
size_t v___x_51921__boxed_2046_; lean_object* v_res_2047_; 
v___x_51921__boxed_2046_ = lean_unbox_usize(v___x_2035_);
lean_dec(v___x_2035_);
v_res_2047_ = l_Lean_Elab_Command_elabNewtype___lam__0(v_a_2031_, v_declName_2032_, v_a_2033_, v___x_2034_, v___x_51921__boxed_2046_, v___x_2036_, v_xs_2037_, v_x_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_);
lean_dec(v___y_2044_);
lean_dec_ref(v___y_2043_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec_ref(v_x_2038_);
lean_dec_ref(v_xs_2037_);
lean_dec(v___x_2034_);
lean_dec_ref(v_a_2033_);
lean_dec_ref(v_a_2031_);
return v_res_2047_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(lean_object* v___y_2048_, uint8_t v_isExporting_2049_, lean_object* v___x_2050_, lean_object* v___y_2051_, lean_object* v___x_2052_, lean_object* v_a_x3f_2053_){
_start:
{
lean_object* v___x_2055_; lean_object* v_env_2056_; lean_object* v_nextMacroScope_2057_; lean_object* v_ngen_2058_; lean_object* v_auxDeclNGen_2059_; lean_object* v_traceState_2060_; lean_object* v_messages_2061_; lean_object* v_infoState_2062_; lean_object* v_snapshotTasks_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2088_; 
v___x_2055_ = lean_st_ref_take(v___y_2048_);
v_env_2056_ = lean_ctor_get(v___x_2055_, 0);
v_nextMacroScope_2057_ = lean_ctor_get(v___x_2055_, 1);
v_ngen_2058_ = lean_ctor_get(v___x_2055_, 2);
v_auxDeclNGen_2059_ = lean_ctor_get(v___x_2055_, 3);
v_traceState_2060_ = lean_ctor_get(v___x_2055_, 4);
v_messages_2061_ = lean_ctor_get(v___x_2055_, 6);
v_infoState_2062_ = lean_ctor_get(v___x_2055_, 7);
v_snapshotTasks_2063_ = lean_ctor_get(v___x_2055_, 8);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2055_);
if (v_isSharedCheck_2088_ == 0)
{
lean_object* v_unused_2089_; 
v_unused_2089_ = lean_ctor_get(v___x_2055_, 5);
lean_dec(v_unused_2089_);
v___x_2065_ = v___x_2055_;
v_isShared_2066_ = v_isSharedCheck_2088_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_snapshotTasks_2063_);
lean_inc(v_infoState_2062_);
lean_inc(v_messages_2061_);
lean_inc(v_traceState_2060_);
lean_inc(v_auxDeclNGen_2059_);
lean_inc(v_ngen_2058_);
lean_inc(v_nextMacroScope_2057_);
lean_inc(v_env_2056_);
lean_dec(v___x_2055_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2088_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2067_; lean_object* v___x_2069_; 
v___x_2067_ = l_Lean_Environment_setExporting(v_env_2056_, v_isExporting_2049_);
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 5, v___x_2050_);
lean_ctor_set(v___x_2065_, 0, v___x_2067_);
v___x_2069_ = v___x_2065_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_nextMacroScope_2057_);
lean_ctor_set(v_reuseFailAlloc_2087_, 2, v_ngen_2058_);
lean_ctor_set(v_reuseFailAlloc_2087_, 3, v_auxDeclNGen_2059_);
lean_ctor_set(v_reuseFailAlloc_2087_, 4, v_traceState_2060_);
lean_ctor_set(v_reuseFailAlloc_2087_, 5, v___x_2050_);
lean_ctor_set(v_reuseFailAlloc_2087_, 6, v_messages_2061_);
lean_ctor_set(v_reuseFailAlloc_2087_, 7, v_infoState_2062_);
lean_ctor_set(v_reuseFailAlloc_2087_, 8, v_snapshotTasks_2063_);
v___x_2069_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v_mctx_2072_; lean_object* v_zetaDeltaFVarIds_2073_; lean_object* v_postponed_2074_; lean_object* v_diag_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2085_; 
v___x_2070_ = lean_st_ref_put(v___y_2048_, v___x_2069_);
v___x_2071_ = lean_st_ref_take(v___y_2051_);
v_mctx_2072_ = lean_ctor_get(v___x_2071_, 0);
v_zetaDeltaFVarIds_2073_ = lean_ctor_get(v___x_2071_, 2);
v_postponed_2074_ = lean_ctor_get(v___x_2071_, 3);
v_diag_2075_ = lean_ctor_get(v___x_2071_, 4);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2085_ == 0)
{
lean_object* v_unused_2086_; 
v_unused_2086_ = lean_ctor_get(v___x_2071_, 1);
lean_dec(v_unused_2086_);
v___x_2077_ = v___x_2071_;
v_isShared_2078_ = v_isSharedCheck_2085_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_diag_2075_);
lean_inc(v_postponed_2074_);
lean_inc(v_zetaDeltaFVarIds_2073_);
lean_inc(v_mctx_2072_);
lean_dec(v___x_2071_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2085_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; lean_object* v___x_2081_; 
v___x_2079_ = lean_box(0);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 1, v___x_2052_);
v___x_2081_ = v___x_2077_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_mctx_2072_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v___x_2052_);
lean_ctor_set(v_reuseFailAlloc_2084_, 2, v_zetaDeltaFVarIds_2073_);
lean_ctor_set(v_reuseFailAlloc_2084_, 3, v_postponed_2074_);
lean_ctor_set(v_reuseFailAlloc_2084_, 4, v_diag_2075_);
v___x_2081_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; 
v___x_2082_ = lean_st_ref_put(v___y_2051_, v___x_2081_);
v___x_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2079_);
return v___x_2083_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0___boxed(lean_object* v___y_2090_, lean_object* v_isExporting_2091_, lean_object* v___x_2092_, lean_object* v___y_2093_, lean_object* v___x_2094_, lean_object* v_a_x3f_2095_, lean_object* v___y_2096_){
_start:
{
uint8_t v_isExporting_boxed_2097_; lean_object* v_res_2098_; 
v_isExporting_boxed_2097_ = lean_unbox(v_isExporting_2091_);
v_res_2098_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2090_, v_isExporting_boxed_2097_, v___x_2092_, v___y_2093_, v___x_2094_, v_a_x3f_2095_);
lean_dec(v_a_x3f_2095_);
lean_dec(v___y_2093_);
lean_dec(v___y_2090_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(lean_object* v_x_2099_, uint8_t v_isExporting_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v___x_2108_; lean_object* v_env_2109_; lean_object* v___x_2110_; uint8_t v_isModule_2111_; 
v___x_2108_ = lean_st_ref_get(v___y_2106_);
v_env_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc_ref(v_env_2109_);
lean_dec(v___x_2108_);
v___x_2110_ = l_Lean_Environment_header(v_env_2109_);
v_isModule_2111_ = lean_ctor_get_uint8(v___x_2110_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2110_);
if (v_isModule_2111_ == 0)
{
lean_object* v___x_2112_; 
lean_dec_ref(v_env_2109_);
lean_inc(v___y_2106_);
lean_inc_ref(v___y_2105_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
v___x_2112_ = lean_apply_7(v_x_2099_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, lean_box(0));
return v___x_2112_;
}
else
{
uint8_t v_isExporting_2113_; 
v_isExporting_2113_ = lean_ctor_get_uint8(v_env_2109_, sizeof(void*)*8);
lean_dec_ref(v_env_2109_);
if (v_isExporting_2100_ == 0)
{
if (v_isExporting_2113_ == 0)
{
lean_object* v___x_2179_; 
lean_inc(v___y_2106_);
lean_inc_ref(v___y_2105_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
v___x_2179_ = lean_apply_7(v_x_2099_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, lean_box(0));
return v___x_2179_;
}
else
{
goto v___jp_2114_;
}
}
else
{
if (v_isExporting_2113_ == 0)
{
goto v___jp_2114_;
}
else
{
lean_object* v___x_2180_; 
lean_inc(v___y_2106_);
lean_inc_ref(v___y_2105_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
v___x_2180_ = lean_apply_7(v_x_2099_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, lean_box(0));
return v___x_2180_;
}
}
v___jp_2114_:
{
lean_object* v___x_2115_; lean_object* v_env_2116_; lean_object* v_nextMacroScope_2117_; lean_object* v_ngen_2118_; lean_object* v_auxDeclNGen_2119_; lean_object* v_traceState_2120_; lean_object* v_messages_2121_; lean_object* v_infoState_2122_; lean_object* v_snapshotTasks_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2177_; 
v___x_2115_ = lean_st_ref_take(v___y_2106_);
v_env_2116_ = lean_ctor_get(v___x_2115_, 0);
v_nextMacroScope_2117_ = lean_ctor_get(v___x_2115_, 1);
v_ngen_2118_ = lean_ctor_get(v___x_2115_, 2);
v_auxDeclNGen_2119_ = lean_ctor_get(v___x_2115_, 3);
v_traceState_2120_ = lean_ctor_get(v___x_2115_, 4);
v_messages_2121_ = lean_ctor_get(v___x_2115_, 6);
v_infoState_2122_ = lean_ctor_get(v___x_2115_, 7);
v_snapshotTasks_2123_ = lean_ctor_get(v___x_2115_, 8);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2115_);
if (v_isSharedCheck_2177_ == 0)
{
lean_object* v_unused_2178_; 
v_unused_2178_ = lean_ctor_get(v___x_2115_, 5);
lean_dec(v_unused_2178_);
v___x_2125_ = v___x_2115_;
v_isShared_2126_ = v_isSharedCheck_2177_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_snapshotTasks_2123_);
lean_inc(v_infoState_2122_);
lean_inc(v_messages_2121_);
lean_inc(v_traceState_2120_);
lean_inc(v_auxDeclNGen_2119_);
lean_inc(v_ngen_2118_);
lean_inc(v_nextMacroScope_2117_);
lean_inc(v_env_2116_);
lean_dec(v___x_2115_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2177_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2130_; 
v___x_2127_ = l_Lean_Environment_setExporting(v_env_2116_, v_isExporting_2100_);
v___x_2128_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 5, v___x_2128_);
lean_ctor_set(v___x_2125_, 0, v___x_2127_);
v___x_2130_ = v___x_2125_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2127_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v_nextMacroScope_2117_);
lean_ctor_set(v_reuseFailAlloc_2176_, 2, v_ngen_2118_);
lean_ctor_set(v_reuseFailAlloc_2176_, 3, v_auxDeclNGen_2119_);
lean_ctor_set(v_reuseFailAlloc_2176_, 4, v_traceState_2120_);
lean_ctor_set(v_reuseFailAlloc_2176_, 5, v___x_2128_);
lean_ctor_set(v_reuseFailAlloc_2176_, 6, v_messages_2121_);
lean_ctor_set(v_reuseFailAlloc_2176_, 7, v_infoState_2122_);
lean_ctor_set(v_reuseFailAlloc_2176_, 8, v_snapshotTasks_2123_);
v___x_2130_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v_mctx_2133_; lean_object* v_zetaDeltaFVarIds_2134_; lean_object* v_postponed_2135_; lean_object* v_diag_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2174_; 
v___x_2131_ = lean_st_ref_put(v___y_2106_, v___x_2130_);
v___x_2132_ = lean_st_ref_take(v___y_2104_);
v_mctx_2133_ = lean_ctor_get(v___x_2132_, 0);
v_zetaDeltaFVarIds_2134_ = lean_ctor_get(v___x_2132_, 2);
v_postponed_2135_ = lean_ctor_get(v___x_2132_, 3);
v_diag_2136_ = lean_ctor_get(v___x_2132_, 4);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2174_ == 0)
{
lean_object* v_unused_2175_; 
v_unused_2175_ = lean_ctor_get(v___x_2132_, 1);
lean_dec(v_unused_2175_);
v___x_2138_ = v___x_2132_;
v_isShared_2139_ = v_isSharedCheck_2174_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_diag_2136_);
lean_inc(v_postponed_2135_);
lean_inc(v_zetaDeltaFVarIds_2134_);
lean_inc(v_mctx_2133_);
lean_dec(v___x_2132_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2174_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2140_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 1, v___x_2140_);
v___x_2142_ = v___x_2138_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_mctx_2133_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v___x_2140_);
lean_ctor_set(v_reuseFailAlloc_2173_, 2, v_zetaDeltaFVarIds_2134_);
lean_ctor_set(v_reuseFailAlloc_2173_, 3, v_postponed_2135_);
lean_ctor_set(v_reuseFailAlloc_2173_, 4, v_diag_2136_);
v___x_2142_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2143_ = lean_st_ref_put(v___y_2104_, v___x_2142_);
lean_inc(v___y_2106_);
lean_inc_ref(v___y_2105_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
v___x_2144_ = lean_apply_7(v_x_2099_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, lean_box(0));
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2161_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2147_ = v___x_2144_;
v_isShared_2148_ = v_isSharedCheck_2161_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2144_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2161_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
lean_inc(v_a_2145_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set_tag(v___x_2147_, 1);
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
lean_object* v___x_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
v___x_2151_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2106_, v_isExporting_2113_, v___x_2128_, v___y_2104_, v___x_2140_, v___x_2150_);
lean_dec_ref(v___x_2150_);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2158_ == 0)
{
lean_object* v_unused_2159_; 
v_unused_2159_ = lean_ctor_get(v___x_2151_, 0);
lean_dec(v_unused_2159_);
v___x_2153_ = v___x_2151_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_dec(v___x_2151_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v_a_2145_);
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2145_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
v_a_2162_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2144_, 1);
v___x_2163_ = lean_box(0);
v___x_2164_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2106_, v_isExporting_2113_, v___x_2128_, v___y_2104_, v___x_2140_, v___x_2163_);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2164_);
if (v_isSharedCheck_2171_ == 0)
{
lean_object* v_unused_2172_; 
v_unused_2172_ = lean_ctor_get(v___x_2164_, 0);
lean_dec(v_unused_2172_);
v___x_2166_ = v___x_2164_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_dec(v___x_2164_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
lean_ctor_set_tag(v___x_2166_, 1);
lean_ctor_set(v___x_2166_, 0, v_a_2162_);
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2162_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___boxed(lean_object* v_x_2181_, lean_object* v_isExporting_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_){
_start:
{
uint8_t v_isExporting_boxed_2190_; lean_object* v_res_2191_; 
v_isExporting_boxed_2190_ = lean_unbox(v_isExporting_2182_);
v_res_2191_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2181_, v_isExporting_boxed_2190_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2187_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(lean_object* v_x_2192_, uint8_t v_when_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
if (v_when_2193_ == 0)
{
lean_object* v___x_2201_; 
lean_inc(v___y_2199_);
lean_inc_ref(v___y_2198_);
lean_inc(v___y_2197_);
lean_inc_ref(v___y_2196_);
lean_inc(v___y_2195_);
lean_inc_ref(v___y_2194_);
v___x_2201_ = lean_apply_7(v_x_2192_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, lean_box(0));
return v___x_2201_;
}
else
{
uint8_t v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = 0;
v___x_2203_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2192_, v___x_2202_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
return v___x_2203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg___boxed(lean_object* v_x_2204_, lean_object* v_when_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_){
_start:
{
uint8_t v_when_boxed_2213_; lean_object* v_res_2214_; 
v_when_boxed_2213_ = lean_unbox(v_when_2205_);
v_res_2214_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_2204_, v_when_boxed_2213_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v___x_2215_, uint8_t v___x_2216_, lean_object* v_declName_2217_, lean_object* v_a_2218_, lean_object* v___x_2219_, size_t v___x_2220_, lean_object* v___x_2221_, uint8_t v___x_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v___x_2230_; 
v___x_2230_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v___x_2215_, v___x_2216_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; lean_object* v___x_2232_; lean_object* v___f_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
lean_inc_n(v_a_2231_, 2);
lean_dec_ref_known(v___x_2230_, 1);
v___x_2232_ = lean_box_usize(v___x_2220_);
v___f_2233_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 15, 6);
lean_closure_set(v___f_2233_, 0, v_a_2231_);
lean_closure_set(v___f_2233_, 1, v_declName_2217_);
lean_closure_set(v___f_2233_, 2, v_a_2218_);
lean_closure_set(v___f_2233_, 3, v___x_2219_);
lean_closure_set(v___f_2233_, 4, v___x_2232_);
lean_closure_set(v___f_2233_, 5, v___x_2221_);
v___x_2234_ = l_Lean_ConstantInfo_value_x21(v_a_2231_, v___x_2222_);
lean_dec(v_a_2231_);
v___x_2235_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___x_2234_, v___f_2233_, v___x_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
return v___x_2235_;
}
else
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2243_; 
lean_dec(v___x_2219_);
lean_dec_ref(v_a_2218_);
lean_dec(v_declName_2217_);
v_a_2236_ = lean_ctor_get(v___x_2230_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2238_ = v___x_2230_;
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2230_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2241_; 
if (v_isShared_2239_ == 0)
{
v___x_2241_ = v___x_2238_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_a_2236_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v___x_2244_, lean_object* v___x_2245_, lean_object* v_declName_2246_, lean_object* v_a_2247_, lean_object* v___x_2248_, lean_object* v___x_2249_, lean_object* v___x_2250_, lean_object* v___x_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
uint8_t v___x_52234__boxed_2259_; size_t v___x_52238__boxed_2260_; uint8_t v___x_52240__boxed_2261_; lean_object* v_res_2262_; 
v___x_52234__boxed_2259_ = lean_unbox(v___x_2245_);
v___x_52238__boxed_2260_ = lean_unbox_usize(v___x_2249_);
lean_dec(v___x_2249_);
v___x_52240__boxed_2261_ = lean_unbox(v___x_2251_);
v_res_2262_ = l_Lean_Elab_Command_elabNewtype___lam__1(v___x_2244_, v___x_52234__boxed_2259_, v_declName_2246_, v_a_2247_, v___x_2248_, v___x_52238__boxed_2260_, v___x_2250_, v___x_52240__boxed_2261_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(lean_object* v_ref_2263_, lean_object* v_msg_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_){
_start:
{
lean_object* v_toCold_2272_; lean_object* v_currRecDepth_2273_; lean_object* v_ref_2274_; uint8_t v_diag_2275_; uint8_t v_suppressElabErrors_2276_; lean_object* v_ref_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v_toCold_2272_ = lean_ctor_get(v___y_2269_, 0);
v_currRecDepth_2273_ = lean_ctor_get(v___y_2269_, 1);
v_ref_2274_ = lean_ctor_get(v___y_2269_, 2);
v_diag_2275_ = lean_ctor_get_uint8(v___y_2269_, sizeof(void*)*3);
v_suppressElabErrors_2276_ = lean_ctor_get_uint8(v___y_2269_, sizeof(void*)*3 + 1);
v_ref_2277_ = l_Lean_replaceRef(v_ref_2263_, v_ref_2274_);
lean_inc(v_currRecDepth_2273_);
lean_inc_ref(v_toCold_2272_);
v___x_2278_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2278_, 0, v_toCold_2272_);
lean_ctor_set(v___x_2278_, 1, v_currRecDepth_2273_);
lean_ctor_set(v___x_2278_, 2, v_ref_2277_);
lean_ctor_set_uint8(v___x_2278_, sizeof(void*)*3, v_diag_2275_);
lean_ctor_set_uint8(v___x_2278_, sizeof(void*)*3 + 1, v_suppressElabErrors_2276_);
v___x_2279_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___x_2278_, v___y_2270_);
lean_dec_ref_known(v___x_2278_, 3);
return v___x_2279_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg___boxed(lean_object* v_ref_2280_, lean_object* v_msg_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2280_, v_msg_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v_ref_2280_);
return v_res_2289_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0(void){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; 
v___x_2290_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_2291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2290_);
return v___x_2291_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2292_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2293_ = lean_unsigned_to_nat(0u);
v___x_2294_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2293_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
lean_ctor_set(v___x_2294_, 2, v___x_2293_);
lean_ctor_set(v___x_2294_, 3, v___x_2293_);
lean_ctor_set(v___x_2294_, 4, v___x_2292_);
lean_ctor_set(v___x_2294_, 5, v___x_2292_);
lean_ctor_set(v___x_2294_, 6, v___x_2292_);
lean_ctor_set(v___x_2294_, 7, v___x_2292_);
lean_ctor_set(v___x_2294_, 8, v___x_2292_);
lean_ctor_set(v___x_2294_, 9, v___x_2292_);
lean_ctor_set(v___x_2294_, 10, v___x_2292_);
return v___x_2294_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2(void){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2295_ = lean_unsigned_to_nat(32u);
v___x_2296_ = lean_mk_empty_array_with_capacity(v___x_2295_);
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
return v___x_2297_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3(void){
_start:
{
size_t v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2298_ = ((size_t)5ULL);
v___x_2299_ = lean_unsigned_to_nat(0u);
v___x_2300_ = lean_unsigned_to_nat(32u);
v___x_2301_ = lean_mk_empty_array_with_capacity(v___x_2300_);
v___x_2302_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_2303_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
lean_ctor_set(v___x_2303_, 1, v___x_2301_);
lean_ctor_set(v___x_2303_, 2, v___x_2299_);
lean_ctor_set(v___x_2303_, 3, v___x_2299_);
lean_ctor_set_usize(v___x_2303_, 4, v___x_2298_);
return v___x_2303_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4(void){
_start:
{
lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; 
v___x_2304_ = lean_box(1);
v___x_2305_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3);
v___x_2306_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2307_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2307_, 0, v___x_2306_);
lean_ctor_set(v___x_2307_, 1, v___x_2305_);
lean_ctor_set(v___x_2307_, 2, v___x_2304_);
return v___x_2307_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6(void){
_start:
{
lean_object* v___x_2309_; lean_object* v___x_2310_; 
v___x_2309_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__5));
v___x_2310_ = l_Lean_stringToMessageData(v___x_2309_);
return v___x_2310_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8(void){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__7));
v___x_2313_ = l_Lean_stringToMessageData(v___x_2312_);
return v___x_2313_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__9));
v___x_2316_ = l_Lean_stringToMessageData(v___x_2315_);
return v___x_2316_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12(void){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2318_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__11));
v___x_2319_ = l_Lean_stringToMessageData(v___x_2318_);
return v___x_2319_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2321_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__13));
v___x_2322_ = l_Lean_stringToMessageData(v___x_2321_);
return v___x_2322_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16(void){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__15));
v___x_2325_ = l_Lean_stringToMessageData(v___x_2324_);
return v___x_2325_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__17));
v___x_2328_ = l_Lean_stringToMessageData(v___x_2327_);
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(lean_object* v_msg_2329_, lean_object* v_declHint_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v_env_2335_; uint8_t v___x_2336_; 
v___x_2333_ = lean_box(0);
v___x_2334_ = lean_st_ref_get(v___y_2331_);
v_env_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc_ref(v_env_2335_);
lean_dec(v___x_2334_);
v___x_2336_ = l_Lean_Name_isAnonymous(v_declHint_2330_);
if (v___x_2336_ == 0)
{
uint8_t v_isExporting_2337_; 
v_isExporting_2337_ = lean_ctor_get_uint8(v_env_2335_, sizeof(void*)*8);
if (v_isExporting_2337_ == 0)
{
lean_object* v___x_2338_; 
lean_dec_ref(v_env_2335_);
lean_dec(v_declHint_2330_);
v___x_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2338_, 0, v_msg_2329_);
return v___x_2338_;
}
else
{
lean_object* v___x_2339_; uint8_t v___x_2340_; 
lean_inc_ref(v_env_2335_);
v___x_2339_ = l_Lean_Environment_setExporting(v_env_2335_, v___x_2336_);
lean_inc(v_declHint_2330_);
lean_inc_ref(v___x_2339_);
v___x_2340_ = l_Lean_Environment_contains(v___x_2339_, v_declHint_2330_, v_isExporting_2337_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; 
lean_dec_ref(v___x_2339_);
lean_dec_ref(v_env_2335_);
lean_dec(v_declHint_2330_);
v___x_2341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2341_, 0, v_msg_2329_);
return v___x_2341_;
}
else
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v_c_2347_; lean_object* v___x_2348_; 
v___x_2342_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2343_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2344_ = l_Lean_Options_empty;
v___x_2345_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2339_);
lean_ctor_set(v___x_2345_, 1, v___x_2342_);
lean_ctor_set(v___x_2345_, 2, v___x_2343_);
lean_ctor_set(v___x_2345_, 3, v___x_2344_);
lean_inc(v_declHint_2330_);
v___x_2346_ = l_Lean_MessageData_ofConstName(v_declHint_2330_, v___x_2336_);
v_c_2347_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2347_, 0, v___x_2345_);
lean_ctor_set(v_c_2347_, 1, v___x_2346_);
v___x_2348_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2335_, v_declHint_2330_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
lean_dec_ref(v_env_2335_);
lean_dec(v_declHint_2330_);
v___x_2349_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2349_);
lean_ctor_set(v___x_2350_, 1, v_c_2347_);
v___x_2351_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2352_, 0, v___x_2350_);
lean_ctor_set(v___x_2352_, 1, v___x_2351_);
v___x_2353_ = l_Lean_MessageData_note(v___x_2352_);
v___x_2354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2354_, 0, v_msg_2329_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v___x_2355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2354_);
return v___x_2355_;
}
else
{
lean_object* v_val_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2390_; 
v_val_2356_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2358_ = v___x_2348_;
v_isShared_2359_ = v_isSharedCheck_2390_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_val_2356_);
lean_dec(v___x_2348_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2390_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v_mod_2362_; uint8_t v___x_2363_; 
v___x_2360_ = l_Lean_Environment_header(v_env_2335_);
lean_dec_ref(v_env_2335_);
v___x_2361_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2360_);
v_mod_2362_ = lean_array_get(v___x_2333_, v___x_2361_, v_val_2356_);
lean_dec(v_val_2356_);
lean_dec_ref(v___x_2361_);
v___x_2363_ = l_Lean_isPrivateName(v_declHint_2330_);
lean_dec(v_declHint_2330_);
if (v___x_2363_ == 0)
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2375_; 
v___x_2364_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
lean_ctor_set(v___x_2365_, 1, v_c_2347_);
v___x_2366_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2365_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = l_Lean_MessageData_ofName(v_mod_2362_);
v___x_2369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set(v___x_2369_, 1, v___x_2368_);
v___x_2370_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2371_, 0, v___x_2369_);
lean_ctor_set(v___x_2371_, 1, v___x_2370_);
v___x_2372_ = l_Lean_MessageData_note(v___x_2371_);
v___x_2373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2373_, 0, v_msg_2329_);
lean_ctor_set(v___x_2373_, 1, v___x_2372_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2373_);
v___x_2375_ = v___x_2358_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
else
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2388_; 
v___x_2377_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
lean_ctor_set(v___x_2378_, 1, v_c_2347_);
v___x_2379_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2378_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = l_Lean_MessageData_ofName(v_mod_2362_);
v___x_2382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2382_, 0, v___x_2380_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
v___x_2383_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2382_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = l_Lean_MessageData_note(v___x_2384_);
v___x_2386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2386_, 0, v_msg_2329_);
lean_ctor_set(v___x_2386_, 1, v___x_2385_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2386_);
v___x_2388_ = v___x_2358_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2391_; 
lean_dec_ref(v_env_2335_);
lean_dec(v_declHint_2330_);
v___x_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2391_, 0, v_msg_2329_);
return v___x_2391_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___boxed(lean_object* v_msg_2392_, lean_object* v_declHint_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2392_, v_declHint_2393_, v___y_2394_);
lean_dec(v___y_2394_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(lean_object* v_msg_2397_, lean_object* v_declHint_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v___x_2406_; lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2416_; 
v___x_2406_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2397_, v_declHint_2398_, v___y_2404_);
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2409_ = v___x_2406_;
v_isShared_2410_ = v_isSharedCheck_2416_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2406_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2416_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2411_ = l_Lean_unknownIdentifierMessageTag;
v___x_2412_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2412_, 0, v___x_2411_);
lean_ctor_set(v___x_2412_, 1, v_a_2407_);
if (v_isShared_2410_ == 0)
{
lean_ctor_set(v___x_2409_, 0, v___x_2412_);
v___x_2414_ = v___x_2409_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49___boxed(lean_object* v_msg_2417_, lean_object* v_declHint_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2417_, v_declHint_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(lean_object* v_ref_2427_, lean_object* v_msg_2428_, lean_object* v_declHint_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
lean_object* v___x_2437_; lean_object* v_a_2438_; lean_object* v___x_2439_; 
v___x_2437_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2428_, v_declHint_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
lean_inc(v_a_2438_);
lean_dec_ref(v___x_2437_);
v___x_2439_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2427_, v_a_2438_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg___boxed(lean_object* v_ref_2440_, lean_object* v_msg_2441_, lean_object* v_declHint_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2440_, v_msg_2441_, v_declHint_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v_ref_2440_);
return v_res_2450_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1(void){
_start:
{
lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2452_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__0));
v___x_2453_ = l_Lean_stringToMessageData(v___x_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(lean_object* v_ref_2454_, lean_object* v_constName_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v___x_2463_; uint8_t v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2463_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2464_ = 0;
lean_inc(v_constName_2455_);
v___x_2465_ = l_Lean_MessageData_ofConstName(v_constName_2455_, v___x_2464_);
v___x_2466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2463_);
lean_ctor_set(v___x_2466_, 1, v___x_2465_);
v___x_2467_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2468_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2468_, 0, v___x_2466_);
lean_ctor_set(v___x_2468_, 1, v___x_2467_);
v___x_2469_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2454_, v___x_2468_, v_constName_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
return v___x_2469_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___boxed(lean_object* v_ref_2470_, lean_object* v_constName_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2470_, v_constName_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v_ref_2470_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(lean_object* v_constName_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v_ref_2488_; lean_object* v___x_2489_; 
v_ref_2488_ = lean_ctor_get(v___y_2485_, 2);
v___x_2489_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2488_, v_constName_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_);
return v___x_2489_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg___boxed(lean_object* v_constName_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_constName_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_){
_start:
{
lean_object* v___x_2507_; lean_object* v_env_2508_; uint8_t v___x_2509_; lean_object* v___x_2510_; 
v___x_2507_ = lean_st_ref_get(v___y_2505_);
v_env_2508_ = lean_ctor_get(v___x_2507_, 0);
lean_inc_ref(v_env_2508_);
lean_dec(v___x_2507_);
v___x_2509_ = 0;
lean_inc(v_constName_2499_);
v___x_2510_ = l_Lean_Environment_find_x3f(v_env_2508_, v_constName_2499_, v___x_2509_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v___x_2511_; 
v___x_2511_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_);
return v___x_2511_;
}
else
{
lean_object* v_val_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
lean_dec(v_constName_2499_);
v_val_2512_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2510_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_val_2512_);
lean_dec(v___x_2510_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
lean_ctor_set_tag(v___x_2514_, 0);
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_val_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_constName_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_constName_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(lean_object* v_t_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v___x_2532_; lean_object* v_infoState_2533_; uint8_t v_enabled_2534_; 
v___x_2532_ = lean_st_ref_get(v___y_2530_);
v_infoState_2533_ = lean_ctor_get(v___x_2532_, 8);
lean_inc_ref(v_infoState_2533_);
lean_dec(v___x_2532_);
v_enabled_2534_ = lean_ctor_get_uint8(v_infoState_2533_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2533_);
if (v_enabled_2534_ == 0)
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
lean_dec_ref(v_t_2529_);
v___x_2535_ = lean_box(0);
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
return v___x_2536_;
}
else
{
lean_object* v___x_2537_; lean_object* v_infoState_2538_; lean_object* v_env_2539_; lean_object* v_messages_2540_; lean_object* v_scopes_2541_; lean_object* v_usedQuotCtxts_2542_; lean_object* v_nextMacroScope_2543_; lean_object* v_maxRecDepth_2544_; lean_object* v_ngen_2545_; lean_object* v_auxDeclNGen_2546_; lean_object* v_traceState_2547_; lean_object* v_snapshotTasks_2548_; lean_object* v_prevLinterStates_2549_; lean_object* v_codeQualityEntryTasks_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2572_; 
v___x_2537_ = lean_st_ref_take(v___y_2530_);
v_infoState_2538_ = lean_ctor_get(v___x_2537_, 8);
v_env_2539_ = lean_ctor_get(v___x_2537_, 0);
v_messages_2540_ = lean_ctor_get(v___x_2537_, 1);
v_scopes_2541_ = lean_ctor_get(v___x_2537_, 2);
v_usedQuotCtxts_2542_ = lean_ctor_get(v___x_2537_, 3);
v_nextMacroScope_2543_ = lean_ctor_get(v___x_2537_, 4);
v_maxRecDepth_2544_ = lean_ctor_get(v___x_2537_, 5);
v_ngen_2545_ = lean_ctor_get(v___x_2537_, 6);
v_auxDeclNGen_2546_ = lean_ctor_get(v___x_2537_, 7);
v_traceState_2547_ = lean_ctor_get(v___x_2537_, 9);
v_snapshotTasks_2548_ = lean_ctor_get(v___x_2537_, 10);
v_prevLinterStates_2549_ = lean_ctor_get(v___x_2537_, 11);
v_codeQualityEntryTasks_2550_ = lean_ctor_get(v___x_2537_, 12);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2537_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2552_ = v___x_2537_;
v_isShared_2553_ = v_isSharedCheck_2572_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2550_);
lean_inc(v_prevLinterStates_2549_);
lean_inc(v_snapshotTasks_2548_);
lean_inc(v_traceState_2547_);
lean_inc(v_infoState_2538_);
lean_inc(v_auxDeclNGen_2546_);
lean_inc(v_ngen_2545_);
lean_inc(v_maxRecDepth_2544_);
lean_inc(v_nextMacroScope_2543_);
lean_inc(v_usedQuotCtxts_2542_);
lean_inc(v_scopes_2541_);
lean_inc(v_messages_2540_);
lean_inc(v_env_2539_);
lean_dec(v___x_2537_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2572_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
uint8_t v_enabled_2554_; lean_object* v_assignment_2555_; lean_object* v_lazyAssignment_2556_; lean_object* v_trees_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2571_; 
v_enabled_2554_ = lean_ctor_get_uint8(v_infoState_2538_, sizeof(void*)*3);
v_assignment_2555_ = lean_ctor_get(v_infoState_2538_, 0);
v_lazyAssignment_2556_ = lean_ctor_get(v_infoState_2538_, 1);
v_trees_2557_ = lean_ctor_get(v_infoState_2538_, 2);
v_isSharedCheck_2571_ = !lean_is_exclusive(v_infoState_2538_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2559_ = v_infoState_2538_;
v_isShared_2560_ = v_isSharedCheck_2571_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_trees_2557_);
lean_inc(v_lazyAssignment_2556_);
lean_inc(v_assignment_2555_);
lean_dec(v_infoState_2538_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2571_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2564_; 
v___x_2561_ = lean_box(0);
v___x_2562_ = l_Lean_PersistentArray_push___redArg(v_trees_2557_, v_t_2529_);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 2, v___x_2562_);
v___x_2564_ = v___x_2559_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_assignment_2555_);
lean_ctor_set(v_reuseFailAlloc_2570_, 1, v_lazyAssignment_2556_);
lean_ctor_set(v_reuseFailAlloc_2570_, 2, v___x_2562_);
lean_ctor_set_uint8(v_reuseFailAlloc_2570_, sizeof(void*)*3, v_enabled_2554_);
v___x_2564_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
lean_object* v___x_2566_; 
if (v_isShared_2553_ == 0)
{
lean_ctor_set(v___x_2552_, 8, v___x_2564_);
v___x_2566_ = v___x_2552_;
goto v_reusejp_2565_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_env_2539_);
lean_ctor_set(v_reuseFailAlloc_2569_, 1, v_messages_2540_);
lean_ctor_set(v_reuseFailAlloc_2569_, 2, v_scopes_2541_);
lean_ctor_set(v_reuseFailAlloc_2569_, 3, v_usedQuotCtxts_2542_);
lean_ctor_set(v_reuseFailAlloc_2569_, 4, v_nextMacroScope_2543_);
lean_ctor_set(v_reuseFailAlloc_2569_, 5, v_maxRecDepth_2544_);
lean_ctor_set(v_reuseFailAlloc_2569_, 6, v_ngen_2545_);
lean_ctor_set(v_reuseFailAlloc_2569_, 7, v_auxDeclNGen_2546_);
lean_ctor_set(v_reuseFailAlloc_2569_, 8, v___x_2564_);
lean_ctor_set(v_reuseFailAlloc_2569_, 9, v_traceState_2547_);
lean_ctor_set(v_reuseFailAlloc_2569_, 10, v_snapshotTasks_2548_);
lean_ctor_set(v_reuseFailAlloc_2569_, 11, v_prevLinterStates_2549_);
lean_ctor_set(v_reuseFailAlloc_2569_, 12, v_codeQualityEntryTasks_2550_);
v___x_2566_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2565_;
}
v_reusejp_2565_:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; 
v___x_2567_ = lean_st_ref_put(v___y_2530_, v___x_2566_);
v___x_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2568_, 0, v___x_2561_);
return v___x_2568_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg___boxed(lean_object* v_t_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_2573_, v___y_2574_);
lean_dec(v___y_2574_);
return v_res_2576_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2577_ = lean_unsigned_to_nat(32u);
v___x_2578_ = lean_mk_empty_array_with_capacity(v___x_2577_);
v___x_2579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2578_);
return v___x_2579_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1(void){
_start:
{
size_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2580_ = ((size_t)5ULL);
v___x_2581_ = lean_unsigned_to_nat(0u);
v___x_2582_ = lean_unsigned_to_nat(32u);
v___x_2583_ = lean_mk_empty_array_with_capacity(v___x_2582_);
v___x_2584_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0);
v___x_2585_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2585_, 0, v___x_2584_);
lean_ctor_set(v___x_2585_, 1, v___x_2583_);
lean_ctor_set(v___x_2585_, 2, v___x_2581_);
lean_ctor_set(v___x_2585_, 3, v___x_2581_);
lean_ctor_set_usize(v___x_2585_, 4, v___x_2580_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(lean_object* v_t_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v___x_2590_; lean_object* v_infoState_2591_; uint8_t v_enabled_2592_; 
v___x_2590_ = lean_st_ref_get(v___y_2588_);
v_infoState_2591_ = lean_ctor_get(v___x_2590_, 8);
lean_inc_ref(v_infoState_2591_);
lean_dec(v___x_2590_);
v_enabled_2592_ = lean_ctor_get_uint8(v_infoState_2591_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2591_);
if (v_enabled_2592_ == 0)
{
lean_object* v___x_2593_; lean_object* v___x_2594_; 
lean_dec_ref(v_t_2586_);
v___x_2593_ = lean_box(0);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
else
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2595_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1);
v___x_2596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2596_, 0, v_t_2586_);
lean_ctor_set(v___x_2596_, 1, v___x_2595_);
v___x_2597_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v___x_2596_, v___y_2588_);
return v___x_2597_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___boxed(lean_object* v_t_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v_t_2598_, v___y_2599_, v___y_2600_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
return v_res_2602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(lean_object* v_msgData_2603_, lean_object* v_macroStack_2604_, lean_object* v___y_2605_){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v_scopes_2609_; lean_object* v___x_2610_; lean_object* v_opts_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; 
v___x_2607_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2608_ = lean_st_ref_get(v___y_2605_);
v_scopes_2609_ = lean_ctor_get(v___x_2608_, 2);
lean_inc(v_scopes_2609_);
lean_dec(v___x_2608_);
v___x_2610_ = l_List_head_x21___redArg(v___x_2607_, v_scopes_2609_);
lean_dec(v_scopes_2609_);
v_opts_2611_ = lean_ctor_get(v___x_2610_, 1);
lean_inc_ref(v_opts_2611_);
lean_dec(v___x_2610_);
v___x_2612_ = l_Lean_Elab_pp_macroStack;
v___x_2613_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_2611_, v___x_2612_);
lean_dec_ref(v_opts_2611_);
if (v___x_2613_ == 0)
{
lean_object* v___x_2614_; 
lean_dec(v_macroStack_2604_);
v___x_2614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2614_, 0, v_msgData_2603_);
return v___x_2614_;
}
else
{
if (lean_obj_tag(v_macroStack_2604_) == 0)
{
lean_object* v___x_2615_; 
v___x_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2615_, 0, v_msgData_2603_);
return v___x_2615_;
}
else
{
lean_object* v_head_2616_; lean_object* v_after_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2632_; 
v_head_2616_ = lean_ctor_get(v_macroStack_2604_, 0);
lean_inc(v_head_2616_);
v_after_2617_ = lean_ctor_get(v_head_2616_, 1);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_head_2616_);
if (v_isSharedCheck_2632_ == 0)
{
lean_object* v_unused_2633_; 
v_unused_2633_ = lean_ctor_get(v_head_2616_, 0);
lean_dec(v_unused_2633_);
v___x_2619_ = v_head_2616_;
v_isShared_2620_ = v_isSharedCheck_2632_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_after_2617_);
lean_dec(v_head_2616_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2632_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2621_; lean_object* v___x_2623_; 
v___x_2621_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_2620_ == 0)
{
lean_ctor_set_tag(v___x_2619_, 7);
lean_ctor_set(v___x_2619_, 1, v___x_2621_);
lean_ctor_set(v___x_2619_, 0, v_msgData_2603_);
v___x_2623_ = v___x_2619_;
goto v_reusejp_2622_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_msgData_2603_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v___x_2621_);
v___x_2623_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2622_;
}
v_reusejp_2622_:
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v_msgData_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2624_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_2625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2623_);
lean_ctor_set(v___x_2625_, 1, v___x_2624_);
v___x_2626_ = l_Lean_MessageData_ofSyntax(v_after_2617_);
v___x_2627_ = l_Lean_indentD(v___x_2626_);
v_msgData_2628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2628_, 0, v___x_2625_);
lean_ctor_set(v_msgData_2628_, 1, v___x_2627_);
v___x_2629_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_2628_, v_macroStack_2604_);
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
return v___x_2630_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg___boxed(lean_object* v_msgData_2634_, lean_object* v_macroStack_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_2634_, v_macroStack_2635_, v___y_2636_);
lean_dec(v___y_2636_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(lean_object* v_msgData_2639_, lean_object* v___y_2640_){
_start:
{
lean_object* v___x_2642_; lean_object* v_env_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v_scopes_2646_; lean_object* v___x_2647_; lean_object* v_opts_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2642_ = lean_st_ref_get(v___y_2640_);
v_env_2643_ = lean_ctor_get(v___x_2642_, 0);
lean_inc_ref(v_env_2643_);
lean_dec(v___x_2642_);
v___x_2644_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2645_ = lean_st_ref_get(v___y_2640_);
v_scopes_2646_ = lean_ctor_get(v___x_2645_, 2);
lean_inc(v_scopes_2646_);
lean_dec(v___x_2645_);
v___x_2647_ = l_List_head_x21___redArg(v___x_2644_, v_scopes_2646_);
lean_dec(v_scopes_2646_);
v_opts_2648_ = lean_ctor_get(v___x_2647_, 1);
lean_inc_ref(v_opts_2648_);
lean_dec(v___x_2647_);
v___x_2649_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2650_ = lean_unsigned_to_nat(32u);
v___x_2651_ = lean_mk_empty_array_with_capacity(v___x_2650_);
lean_dec_ref(v___x_2651_);
v___x_2652_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2653_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2653_, 0, v_env_2643_);
lean_ctor_set(v___x_2653_, 1, v___x_2649_);
lean_ctor_set(v___x_2653_, 2, v___x_2652_);
lean_ctor_set(v___x_2653_, 3, v_opts_2648_);
v___x_2654_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2653_);
lean_ctor_set(v___x_2654_, 1, v_msgData_2639_);
v___x_2655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2654_);
return v___x_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___boxed(lean_object* v_msgData_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_2656_, v___y_2657_);
lean_dec(v___y_2657_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(lean_object* v_msg_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v___x_2664_; 
v___x_2664_ = l_Lean_Elab_Command_getRef___redArg(v___y_2661_);
if (lean_obj_tag(v___x_2664_) == 0)
{
lean_object* v_a_2665_; lean_object* v_macroStack_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v_a_2669_; lean_object* v___x_2670_; lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2679_; 
v_a_2665_ = lean_ctor_get(v___x_2664_, 0);
lean_inc(v_a_2665_);
lean_dec_ref_known(v___x_2664_, 1);
v_macroStack_2666_ = lean_ctor_get(v___y_2661_, 4);
v___x_2667_ = l_Lean_Elab_getBetterRef(v_a_2665_, v_macroStack_2666_);
lean_dec(v_a_2665_);
v___x_2668_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_2660_, v___y_2662_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
lean_inc(v_a_2669_);
lean_dec_ref(v___x_2668_);
lean_inc(v_macroStack_2666_);
v___x_2670_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_a_2669_, v_macroStack_2666_, v___y_2662_);
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2673_ = v___x_2670_;
v_isShared_2674_ = v_isSharedCheck_2679_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2670_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2679_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2667_);
lean_ctor_set(v___x_2675_, 1, v_a_2671_);
if (v_isShared_2674_ == 0)
{
lean_ctor_set_tag(v___x_2673_, 1);
lean_ctor_set(v___x_2673_, 0, v___x_2675_);
v___x_2677_ = v___x_2673_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec_ref(v_msg_2660_);
v_a_2680_ = lean_ctor_get(v___x_2664_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2664_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2664_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2664_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg___boxed(lean_object* v_msg_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v_res_2692_; 
v_res_2692_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2688_, v___y_2689_, v___y_2690_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(lean_object* v_ref_2693_, lean_object* v_msg_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_){
_start:
{
lean_object* v___x_2698_; 
v___x_2698_ = l_Lean_Elab_Command_getRef___redArg(v___y_2695_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v_a_2699_; lean_object* v_fileName_2700_; lean_object* v_fileMap_2701_; lean_object* v_currRecDepth_2702_; lean_object* v_cmdPos_2703_; lean_object* v_macroStack_2704_; lean_object* v_quotContext_x3f_2705_; lean_object* v_currMacroScope_2706_; lean_object* v_snap_x3f_2707_; lean_object* v_cancelTk_x3f_2708_; uint8_t v_suppressElabErrors_2709_; lean_object* v_ref_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v_a_2699_ = lean_ctor_get(v___x_2698_, 0);
lean_inc(v_a_2699_);
lean_dec_ref_known(v___x_2698_, 1);
v_fileName_2700_ = lean_ctor_get(v___y_2695_, 0);
v_fileMap_2701_ = lean_ctor_get(v___y_2695_, 1);
v_currRecDepth_2702_ = lean_ctor_get(v___y_2695_, 2);
v_cmdPos_2703_ = lean_ctor_get(v___y_2695_, 3);
v_macroStack_2704_ = lean_ctor_get(v___y_2695_, 4);
v_quotContext_x3f_2705_ = lean_ctor_get(v___y_2695_, 5);
v_currMacroScope_2706_ = lean_ctor_get(v___y_2695_, 6);
v_snap_x3f_2707_ = lean_ctor_get(v___y_2695_, 8);
v_cancelTk_x3f_2708_ = lean_ctor_get(v___y_2695_, 9);
v_suppressElabErrors_2709_ = lean_ctor_get_uint8(v___y_2695_, sizeof(void*)*10);
v_ref_2710_ = l_Lean_replaceRef(v_ref_2693_, v_a_2699_);
lean_dec(v_a_2699_);
lean_inc(v_cancelTk_x3f_2708_);
lean_inc(v_snap_x3f_2707_);
lean_inc(v_currMacroScope_2706_);
lean_inc(v_quotContext_x3f_2705_);
lean_inc(v_macroStack_2704_);
lean_inc(v_cmdPos_2703_);
lean_inc(v_currRecDepth_2702_);
lean_inc_ref(v_fileMap_2701_);
lean_inc_ref(v_fileName_2700_);
v___x_2711_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2711_, 0, v_fileName_2700_);
lean_ctor_set(v___x_2711_, 1, v_fileMap_2701_);
lean_ctor_set(v___x_2711_, 2, v_currRecDepth_2702_);
lean_ctor_set(v___x_2711_, 3, v_cmdPos_2703_);
lean_ctor_set(v___x_2711_, 4, v_macroStack_2704_);
lean_ctor_set(v___x_2711_, 5, v_quotContext_x3f_2705_);
lean_ctor_set(v___x_2711_, 6, v_currMacroScope_2706_);
lean_ctor_set(v___x_2711_, 7, v_ref_2710_);
lean_ctor_set(v___x_2711_, 8, v_snap_x3f_2707_);
lean_ctor_set(v___x_2711_, 9, v_cancelTk_x3f_2708_);
lean_ctor_set_uint8(v___x_2711_, sizeof(void*)*10, v_suppressElabErrors_2709_);
v___x_2712_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2694_, v___x_2711_, v___y_2696_);
lean_dec_ref_known(v___x_2711_, 10);
return v___x_2712_;
}
else
{
lean_object* v_a_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2720_; 
lean_dec_ref(v_msg_2694_);
v_a_2713_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2715_ = v___x_2698_;
v_isShared_2716_ = v_isSharedCheck_2720_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_a_2713_);
lean_dec(v___x_2698_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_ref_2721_, lean_object* v_msg_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2721_, v_msg_2722_, v___y_2723_, v___y_2724_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v_ref_2721_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(lean_object* v_msg_2727_, lean_object* v_declHint_2728_, lean_object* v___y_2729_){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v_env_2733_; uint8_t v___x_2734_; 
v___x_2731_ = lean_box(0);
v___x_2732_ = lean_st_ref_get(v___y_2729_);
v_env_2733_ = lean_ctor_get(v___x_2732_, 0);
lean_inc_ref(v_env_2733_);
lean_dec(v___x_2732_);
v___x_2734_ = l_Lean_Name_isAnonymous(v_declHint_2728_);
if (v___x_2734_ == 0)
{
uint8_t v_isExporting_2735_; 
v_isExporting_2735_ = lean_ctor_get_uint8(v_env_2733_, sizeof(void*)*8);
if (v_isExporting_2735_ == 0)
{
lean_object* v___x_2736_; 
lean_dec_ref(v_env_2733_);
lean_dec(v_declHint_2728_);
v___x_2736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2736_, 0, v_msg_2727_);
return v___x_2736_;
}
else
{
lean_object* v___x_2737_; uint8_t v___x_2738_; 
lean_inc_ref(v_env_2733_);
v___x_2737_ = l_Lean_Environment_setExporting(v_env_2733_, v___x_2734_);
lean_inc(v_declHint_2728_);
lean_inc_ref(v___x_2737_);
v___x_2738_ = l_Lean_Environment_contains(v___x_2737_, v_declHint_2728_, v_isExporting_2735_);
if (v___x_2738_ == 0)
{
lean_object* v___x_2739_; 
lean_dec_ref(v___x_2737_);
lean_dec_ref(v_env_2733_);
lean_dec(v_declHint_2728_);
v___x_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2739_, 0, v_msg_2727_);
return v___x_2739_;
}
else
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v_c_2747_; lean_object* v___x_2748_; 
v___x_2740_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2741_ = lean_unsigned_to_nat(32u);
v___x_2742_ = lean_mk_empty_array_with_capacity(v___x_2741_);
lean_dec_ref(v___x_2742_);
v___x_2743_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2744_ = l_Lean_Options_empty;
v___x_2745_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2745_, 0, v___x_2737_);
lean_ctor_set(v___x_2745_, 1, v___x_2740_);
lean_ctor_set(v___x_2745_, 2, v___x_2743_);
lean_ctor_set(v___x_2745_, 3, v___x_2744_);
lean_inc(v_declHint_2728_);
v___x_2746_ = l_Lean_MessageData_ofConstName(v_declHint_2728_, v___x_2734_);
v_c_2747_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2747_, 0, v___x_2745_);
lean_ctor_set(v_c_2747_, 1, v___x_2746_);
v___x_2748_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2733_, v_declHint_2728_);
if (lean_obj_tag(v___x_2748_) == 0)
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; 
lean_dec_ref(v_env_2733_);
lean_dec(v_declHint_2728_);
v___x_2749_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2749_);
lean_ctor_set(v___x_2750_, 1, v_c_2747_);
v___x_2751_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2750_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = l_Lean_MessageData_note(v___x_2752_);
v___x_2754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2754_, 0, v_msg_2727_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2755_, 0, v___x_2754_);
return v___x_2755_;
}
else
{
lean_object* v_val_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2790_; 
v_val_2756_ = lean_ctor_get(v___x_2748_, 0);
v_isSharedCheck_2790_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2790_ == 0)
{
v___x_2758_ = v___x_2748_;
v_isShared_2759_ = v_isSharedCheck_2790_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_val_2756_);
lean_dec(v___x_2748_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2790_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v_mod_2762_; uint8_t v___x_2763_; 
v___x_2760_ = l_Lean_Environment_header(v_env_2733_);
lean_dec_ref(v_env_2733_);
v___x_2761_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2760_);
v_mod_2762_ = lean_array_get(v___x_2731_, v___x_2761_, v_val_2756_);
lean_dec(v_val_2756_);
lean_dec_ref(v___x_2761_);
v___x_2763_ = l_Lean_isPrivateName(v_declHint_2728_);
lean_dec(v_declHint_2728_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2775_; 
v___x_2764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2764_);
lean_ctor_set(v___x_2765_, 1, v_c_2747_);
v___x_2766_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = l_Lean_MessageData_ofName(v_mod_2762_);
v___x_2769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2769_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
v___x_2772_ = l_Lean_MessageData_note(v___x_2771_);
v___x_2773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2773_, 0, v_msg_2727_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2773_);
v___x_2775_ = v___x_2758_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v___x_2773_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
else
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2788_; 
v___x_2777_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2777_);
lean_ctor_set(v___x_2778_, 1, v_c_2747_);
v___x_2779_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2778_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = l_Lean_MessageData_ofName(v_mod_2762_);
v___x_2782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2782_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
v___x_2785_ = l_Lean_MessageData_note(v___x_2784_);
v___x_2786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2786_, 0, v_msg_2727_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
if (v_isShared_2759_ == 0)
{
lean_ctor_set_tag(v___x_2758_, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2786_);
v___x_2788_ = v___x_2758_;
goto v_reusejp_2787_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v___x_2786_);
v___x_2788_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2787_;
}
v_reusejp_2787_:
{
return v___x_2788_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2791_; 
lean_dec_ref(v_env_2733_);
lean_dec(v_declHint_2728_);
v___x_2791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2791_, 0, v_msg_2727_);
return v___x_2791_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___boxed(lean_object* v_msg_2792_, lean_object* v_declHint_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2792_, v_declHint_2793_, v___y_2794_);
lean_dec(v___y_2794_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(lean_object* v_msg_2797_, lean_object* v_declHint_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_){
_start:
{
lean_object* v___x_2802_; lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2812_; 
v___x_2802_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2797_, v_declHint_2798_, v___y_2800_);
v_a_2803_ = lean_ctor_get(v___x_2802_, 0);
v_isSharedCheck_2812_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2805_ = v___x_2802_;
v_isShared_2806_ = v_isSharedCheck_2812_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2802_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2812_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2810_; 
v___x_2807_ = l_Lean_unknownIdentifierMessageTag;
v___x_2808_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2808_, 0, v___x_2807_);
lean_ctor_set(v___x_2808_, 1, v_a_2803_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2808_);
v___x_2810_ = v___x_2805_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v___x_2808_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67___boxed(lean_object* v_msg_2813_, lean_object* v_declHint_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_){
_start:
{
lean_object* v_res_2818_; 
v_res_2818_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2813_, v_declHint_2814_, v___y_2815_, v___y_2816_);
lean_dec(v___y_2816_);
lean_dec_ref(v___y_2815_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(lean_object* v_ref_2819_, lean_object* v_msg_2820_, lean_object* v_declHint_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_){
_start:
{
lean_object* v___x_2825_; lean_object* v_a_2826_; lean_object* v___x_2827_; 
v___x_2825_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2820_, v_declHint_2821_, v___y_2822_, v___y_2823_);
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2826_);
lean_dec_ref(v___x_2825_);
v___x_2827_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2819_, v_a_2826_, v___y_2822_, v___y_2823_);
return v___x_2827_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg___boxed(lean_object* v_ref_2828_, lean_object* v_msg_2829_, lean_object* v_declHint_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_){
_start:
{
lean_object* v_res_2834_; 
v_res_2834_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2828_, v_msg_2829_, v_declHint_2830_, v___y_2831_, v___y_2832_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v_ref_2828_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(lean_object* v_ref_2835_, lean_object* v_constName_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v___x_2840_; uint8_t v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2840_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2841_ = 0;
lean_inc(v_constName_2836_);
v___x_2842_ = l_Lean_MessageData_ofConstName(v_constName_2836_, v___x_2841_);
v___x_2843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2840_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2843_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2835_, v___x_2845_, v_constName_2836_, v___y_2837_, v___y_2838_);
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___boxed(lean_object* v_ref_2847_, lean_object* v_constName_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_){
_start:
{
lean_object* v_res_2852_; 
v_res_2852_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_2847_, v_constName_2848_, v___y_2849_, v___y_2850_);
lean_dec(v___y_2850_);
lean_dec_ref(v___y_2849_);
lean_dec(v_ref_2847_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(lean_object* v_constName_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_){
_start:
{
lean_object* v___x_2857_; 
v___x_2857_ = l_Lean_Elab_Command_getRef___redArg(v___y_2854_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v_a_2858_; lean_object* v___x_2859_; 
v_a_2858_ = lean_ctor_get(v___x_2857_, 0);
lean_inc(v_a_2858_);
lean_dec_ref_known(v___x_2857_, 1);
v___x_2859_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_a_2858_, v_constName_2853_, v___y_2854_, v___y_2855_);
lean_dec(v_a_2858_);
return v___x_2859_;
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec(v_constName_2853_);
v_a_2860_ = lean_ctor_get(v___x_2857_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2857_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2857_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg___boxed(lean_object* v_constName_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2868_, v___y_2869_, v___y_2870_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(lean_object* v_constName_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
lean_object* v___x_2877_; lean_object* v_env_2878_; uint8_t v___x_2879_; lean_object* v___x_2880_; 
v___x_2877_ = lean_st_ref_get(v___y_2875_);
v_env_2878_ = lean_ctor_get(v___x_2877_, 0);
lean_inc_ref(v_env_2878_);
lean_dec(v___x_2877_);
v___x_2879_ = 0;
lean_inc(v_constName_2873_);
v___x_2880_ = l_Lean_Environment_findConstVal_x3f(v_env_2878_, v_constName_2873_, v___x_2879_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2873_, v___y_2874_, v___y_2875_);
return v___x_2881_;
}
else
{
lean_object* v_val_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2889_; 
lean_dec(v_constName_2873_);
v_val_2882_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2889_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2884_ = v___x_2880_;
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_val_2882_);
lean_dec(v___x_2880_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2889_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v___x_2887_; 
if (v_isShared_2885_ == 0)
{
lean_ctor_set_tag(v___x_2884_, 0);
v___x_2887_ = v___x_2884_;
goto v_reusejp_2886_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v_val_2882_);
v___x_2887_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2886_;
}
v_reusejp_2886_:
{
return v___x_2887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16___boxed(lean_object* v_constName_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
lean_object* v_res_2894_; 
v_res_2894_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
return v_res_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(lean_object* v_constName_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v___x_2899_; 
lean_inc(v_constName_2895_);
v___x_2899_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2895_, v___y_2896_, v___y_2897_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2911_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2902_ = v___x_2899_;
v_isShared_2903_ = v_isSharedCheck_2911_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2899_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2911_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v_levelParams_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2909_; 
v_levelParams_2904_ = lean_ctor_get(v_a_2900_, 1);
lean_inc(v_levelParams_2904_);
lean_dec(v_a_2900_);
v___x_2905_ = lean_box(0);
v___x_2906_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_2904_, v___x_2905_);
v___x_2907_ = l_Lean_mkConst(v_constName_2895_, v___x_2906_);
if (v_isShared_2903_ == 0)
{
lean_ctor_set(v___x_2902_, 0, v___x_2907_);
v___x_2909_ = v___x_2902_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v___x_2907_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec(v_constName_2895_);
v_a_2912_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2899_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2899_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8___boxed(lean_object* v_constName_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_constName_2920_, v___y_2921_, v___y_2922_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_stx_2925_, lean_object* v_n_2926_, lean_object* v_expectedType_x3f_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v___x_2931_; 
v___x_2931_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_n_2926_, v___y_2928_, v___y_2929_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; uint8_t v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v___x_2931_, 1);
v___x_2933_ = lean_box(0);
v___x_2934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2934_, 0, v___x_2933_);
lean_ctor_set(v___x_2934_, 1, v_stx_2925_);
v___x_2935_ = l_Lean_LocalContext_empty;
v___x_2936_ = 0;
v___x_2937_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2937_, 0, v___x_2934_);
lean_ctor_set(v___x_2937_, 1, v___x_2935_);
lean_ctor_set(v___x_2937_, 2, v_expectedType_x3f_2927_);
lean_ctor_set(v___x_2937_, 3, v_a_2932_);
lean_ctor_set_uint8(v___x_2937_, sizeof(void*)*4, v___x_2936_);
lean_ctor_set_uint8(v___x_2937_, sizeof(void*)*4 + 1, v___x_2936_);
v___x_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
v___x_2939_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v___x_2938_, v___y_2928_, v___y_2929_);
return v___x_2939_;
}
else
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2947_; 
lean_dec(v_expectedType_x3f_2927_);
lean_dec(v_stx_2925_);
v_a_2940_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2947_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2947_ == 0)
{
v___x_2942_ = v___x_2931_;
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2931_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2947_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2945_; 
if (v_isShared_2943_ == 0)
{
v___x_2945_ = v___x_2942_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2940_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
return v___x_2945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_stx_2948_, lean_object* v_n_2949_, lean_object* v_expectedType_x3f_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
lean_object* v_res_2954_; 
v_res_2954_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_stx_2948_, v_n_2949_, v_expectedType_x3f_2950_, v___y_2951_, v___y_2952_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(lean_object* v_as_x27_2955_, lean_object* v_b_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
if (lean_obj_tag(v_as_x27_2955_) == 0)
{
lean_object* v___x_2960_; 
v___x_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2960_, 0, v_b_2956_);
return v___x_2960_;
}
else
{
lean_object* v_head_2961_; lean_object* v_tail_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v_head_2961_ = lean_ctor_get(v_as_x27_2955_, 0);
v_tail_2962_ = lean_ctor_get(v_as_x27_2955_, 1);
v___x_2963_ = lean_box(0);
lean_inc(v_head_2961_);
v___x_2964_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_2964_, 0, v_head_2961_);
v___x_2965_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_2964_, v___y_2957_, v___y_2958_);
if (lean_obj_tag(v___x_2965_) == 0)
{
lean_dec_ref_known(v___x_2965_, 1);
v_as_x27_2955_ = v_tail_2962_;
v_b_2956_ = v___x_2963_;
goto _start;
}
else
{
return v___x_2965_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___boxed(lean_object* v_as_x27_2967_, lean_object* v_b_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_){
_start:
{
lean_object* v_res_2972_; 
v_res_2972_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_2967_, v_b_2968_, v___y_2969_, v___y_2970_);
lean_dec(v___y_2970_);
lean_dec_ref(v___y_2969_);
lean_dec(v_as_x27_2967_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(lean_object* v_declName_2973_, uint8_t v_s_2974_, lean_object* v___y_2975_){
_start:
{
lean_object* v___x_2977_; lean_object* v_env_2978_; lean_object* v_messages_2979_; lean_object* v_scopes_2980_; lean_object* v_usedQuotCtxts_2981_; lean_object* v_nextMacroScope_2982_; lean_object* v_maxRecDepth_2983_; lean_object* v_ngen_2984_; lean_object* v_auxDeclNGen_2985_; lean_object* v_infoState_2986_; lean_object* v_traceState_2987_; lean_object* v_snapshotTasks_2988_; lean_object* v_prevLinterStates_2989_; lean_object* v_codeQualityEntryTasks_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3003_; 
v___x_2977_ = lean_st_ref_take(v___y_2975_);
v_env_2978_ = lean_ctor_get(v___x_2977_, 0);
v_messages_2979_ = lean_ctor_get(v___x_2977_, 1);
v_scopes_2980_ = lean_ctor_get(v___x_2977_, 2);
v_usedQuotCtxts_2981_ = lean_ctor_get(v___x_2977_, 3);
v_nextMacroScope_2982_ = lean_ctor_get(v___x_2977_, 4);
v_maxRecDepth_2983_ = lean_ctor_get(v___x_2977_, 5);
v_ngen_2984_ = lean_ctor_get(v___x_2977_, 6);
v_auxDeclNGen_2985_ = lean_ctor_get(v___x_2977_, 7);
v_infoState_2986_ = lean_ctor_get(v___x_2977_, 8);
v_traceState_2987_ = lean_ctor_get(v___x_2977_, 9);
v_snapshotTasks_2988_ = lean_ctor_get(v___x_2977_, 10);
v_prevLinterStates_2989_ = lean_ctor_get(v___x_2977_, 11);
v_codeQualityEntryTasks_2990_ = lean_ctor_get(v___x_2977_, 12);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2992_ = v___x_2977_;
v_isShared_2993_ = v_isSharedCheck_3003_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2990_);
lean_inc(v_prevLinterStates_2989_);
lean_inc(v_snapshotTasks_2988_);
lean_inc(v_traceState_2987_);
lean_inc(v_infoState_2986_);
lean_inc(v_auxDeclNGen_2985_);
lean_inc(v_ngen_2984_);
lean_inc(v_maxRecDepth_2983_);
lean_inc(v_nextMacroScope_2982_);
lean_inc(v_usedQuotCtxts_2981_);
lean_inc(v_scopes_2980_);
lean_inc(v_messages_2979_);
lean_inc(v_env_2978_);
lean_dec(v___x_2977_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3003_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2994_; uint8_t v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2999_; 
v___x_2994_ = lean_box(0);
v___x_2995_ = 0;
v___x_2996_ = lean_box(0);
v___x_2997_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2978_, v_declName_2973_, v_s_2974_, v___x_2995_, v___x_2996_);
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 0, v___x_2997_);
v___x_2999_ = v___x_2992_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v___x_2997_);
lean_ctor_set(v_reuseFailAlloc_3002_, 1, v_messages_2979_);
lean_ctor_set(v_reuseFailAlloc_3002_, 2, v_scopes_2980_);
lean_ctor_set(v_reuseFailAlloc_3002_, 3, v_usedQuotCtxts_2981_);
lean_ctor_set(v_reuseFailAlloc_3002_, 4, v_nextMacroScope_2982_);
lean_ctor_set(v_reuseFailAlloc_3002_, 5, v_maxRecDepth_2983_);
lean_ctor_set(v_reuseFailAlloc_3002_, 6, v_ngen_2984_);
lean_ctor_set(v_reuseFailAlloc_3002_, 7, v_auxDeclNGen_2985_);
lean_ctor_set(v_reuseFailAlloc_3002_, 8, v_infoState_2986_);
lean_ctor_set(v_reuseFailAlloc_3002_, 9, v_traceState_2987_);
lean_ctor_set(v_reuseFailAlloc_3002_, 10, v_snapshotTasks_2988_);
lean_ctor_set(v_reuseFailAlloc_3002_, 11, v_prevLinterStates_2989_);
lean_ctor_set(v_reuseFailAlloc_3002_, 12, v_codeQualityEntryTasks_2990_);
v___x_2999_ = v_reuseFailAlloc_3002_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; 
v___x_3000_ = lean_st_ref_put(v___y_2975_, v___x_2999_);
v___x_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3001_, 0, v___x_2994_);
return v___x_3001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg___boxed(lean_object* v_declName_3004_, lean_object* v_s_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
uint8_t v_s_boxed_3008_; lean_object* v_res_3009_; 
v_s_boxed_3008_ = lean_unbox(v_s_3005_);
v_res_3009_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3004_, v_s_boxed_3008_, v___y_3006_);
lean_dec(v___y_3006_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(lean_object* v_declName_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_){
_start:
{
uint8_t v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = 2;
v___x_3015_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3010_, v___x_3014_, v___y_3012_);
return v___x_3015_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11___boxed(lean_object* v_declName_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_declName_3016_, v___y_3017_, v___y_3018_);
lean_dec(v___y_3018_);
lean_dec_ref(v___y_3017_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(lean_object* v_as_x27_3021_, lean_object* v_b_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_){
_start:
{
if (lean_obj_tag(v_as_x27_3021_) == 0)
{
lean_object* v___x_3026_; 
v___x_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3026_, 0, v_b_3022_);
return v___x_3026_;
}
else
{
lean_object* v_head_3027_; lean_object* v_tail_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v_head_3027_ = lean_ctor_get(v_as_x27_3021_, 0);
v_tail_3028_ = lean_ctor_get(v_as_x27_3021_, 1);
v___x_3029_ = lean_box(0);
lean_inc(v_head_3027_);
v___x_3030_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_head_3027_, v___y_3023_, v___y_3024_);
lean_dec_ref(v___x_3030_);
v_as_x27_3021_ = v_tail_3028_;
v_b_3022_ = v___x_3029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg___boxed(lean_object* v_as_x27_3032_, lean_object* v_b_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_){
_start:
{
lean_object* v_res_3037_; 
v_res_3037_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_3032_, v_b_3033_, v___y_3034_, v___y_3035_);
lean_dec(v___y_3035_);
lean_dec_ref(v___y_3034_);
lean_dec(v_as_x27_3032_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_3038_, size_t v_i_3039_, lean_object* v_bs_3040_){
_start:
{
uint8_t v___x_3041_; 
v___x_3041_ = lean_usize_dec_lt(v_i_3039_, v_sz_3038_);
if (v___x_3041_ == 0)
{
return v_bs_3040_;
}
else
{
lean_object* v_v_3042_; lean_object* v___x_3043_; lean_object* v_bs_x27_3044_; size_t v___x_3045_; size_t v___x_3046_; lean_object* v___x_3047_; 
v_v_3042_ = lean_array_uget(v_bs_3040_, v_i_3039_);
v___x_3043_ = lean_unsigned_to_nat(0u);
v_bs_x27_3044_ = lean_array_uset(v_bs_3040_, v_i_3039_, v___x_3043_);
v___x_3045_ = ((size_t)1ULL);
v___x_3046_ = lean_usize_add(v_i_3039_, v___x_3045_);
v___x_3047_ = lean_array_uset(v_bs_x27_3044_, v_i_3039_, v_v_3042_);
v_i_3039_ = v___x_3046_;
v_bs_3040_ = v___x_3047_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_3049_, lean_object* v_i_3050_, lean_object* v_bs_3051_){
_start:
{
size_t v_sz_boxed_3052_; size_t v_i_boxed_3053_; lean_object* v_res_3054_; 
v_sz_boxed_3052_ = lean_unbox_usize(v_sz_3049_);
lean_dec(v_sz_3049_);
v_i_boxed_3053_ = lean_unbox_usize(v_i_3050_);
lean_dec(v_i_3050_);
v_res_3054_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_3052_, v_i_boxed_3053_, v_bs_3051_);
return v_res_3054_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(size_t v_sz_3055_, size_t v_i_3056_, lean_object* v_bs_3057_){
_start:
{
uint8_t v___x_3058_; 
v___x_3058_ = lean_usize_dec_lt(v_i_3056_, v_sz_3055_);
if (v___x_3058_ == 0)
{
return v_bs_3057_;
}
else
{
lean_object* v_v_3059_; lean_object* v___x_3060_; lean_object* v_bs_x27_3061_; size_t v___x_3062_; size_t v___x_3063_; lean_object* v___x_3064_; 
v_v_3059_ = lean_array_uget(v_bs_3057_, v_i_3056_);
v___x_3060_ = lean_unsigned_to_nat(0u);
v_bs_x27_3061_ = lean_array_uset(v_bs_3057_, v_i_3056_, v___x_3060_);
v___x_3062_ = ((size_t)1ULL);
v___x_3063_ = lean_usize_add(v_i_3056_, v___x_3062_);
v___x_3064_ = lean_array_uset(v_bs_x27_3061_, v_i_3056_, v_v_3059_);
v_i_3056_ = v___x_3063_;
v_bs_3057_ = v___x_3064_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_sz_3066_, lean_object* v_i_3067_, lean_object* v_bs_3068_){
_start:
{
size_t v_sz_boxed_3069_; size_t v_i_boxed_3070_; lean_object* v_res_3071_; 
v_sz_boxed_3069_ = lean_unbox_usize(v_sz_3066_);
lean_dec(v_sz_3066_);
v_i_boxed_3070_ = lean_unbox_usize(v_i_3067_);
lean_dec(v_i_3067_);
v_res_3071_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_boxed_3069_, v_i_boxed_3070_, v_bs_3068_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(lean_object* v_declName_3072_, lean_object* v_declRanges_3073_, lean_object* v___y_3074_){
_start:
{
uint8_t v___x_3076_; 
v___x_3076_ = l_Lean_Name_isAnonymous(v_declName_3072_);
if (v___x_3076_ == 0)
{
lean_object* v___x_3077_; lean_object* v_env_3078_; lean_object* v_messages_3079_; lean_object* v_scopes_3080_; lean_object* v_usedQuotCtxts_3081_; lean_object* v_nextMacroScope_3082_; lean_object* v_maxRecDepth_3083_; lean_object* v_ngen_3084_; lean_object* v_auxDeclNGen_3085_; lean_object* v_infoState_3086_; lean_object* v_traceState_3087_; lean_object* v_snapshotTasks_3088_; lean_object* v_prevLinterStates_3089_; lean_object* v_codeQualityEntryTasks_3090_; lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3102_; 
v___x_3077_ = lean_st_ref_take(v___y_3074_);
v_env_3078_ = lean_ctor_get(v___x_3077_, 0);
v_messages_3079_ = lean_ctor_get(v___x_3077_, 1);
v_scopes_3080_ = lean_ctor_get(v___x_3077_, 2);
v_usedQuotCtxts_3081_ = lean_ctor_get(v___x_3077_, 3);
v_nextMacroScope_3082_ = lean_ctor_get(v___x_3077_, 4);
v_maxRecDepth_3083_ = lean_ctor_get(v___x_3077_, 5);
v_ngen_3084_ = lean_ctor_get(v___x_3077_, 6);
v_auxDeclNGen_3085_ = lean_ctor_get(v___x_3077_, 7);
v_infoState_3086_ = lean_ctor_get(v___x_3077_, 8);
v_traceState_3087_ = lean_ctor_get(v___x_3077_, 9);
v_snapshotTasks_3088_ = lean_ctor_get(v___x_3077_, 10);
v_prevLinterStates_3089_ = lean_ctor_get(v___x_3077_, 11);
v_codeQualityEntryTasks_3090_ = lean_ctor_get(v___x_3077_, 12);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3092_ = v___x_3077_;
v_isShared_3093_ = v_isSharedCheck_3102_;
goto v_resetjp_3091_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3090_);
lean_inc(v_prevLinterStates_3089_);
lean_inc(v_snapshotTasks_3088_);
lean_inc(v_traceState_3087_);
lean_inc(v_infoState_3086_);
lean_inc(v_auxDeclNGen_3085_);
lean_inc(v_ngen_3084_);
lean_inc(v_maxRecDepth_3083_);
lean_inc(v_nextMacroScope_3082_);
lean_inc(v_usedQuotCtxts_3081_);
lean_inc(v_scopes_3080_);
lean_inc(v_messages_3079_);
lean_inc(v_env_3078_);
lean_dec(v___x_3077_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3102_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3098_; 
v___x_3094_ = lean_box(0);
v___x_3095_ = l_Lean_declRangeExt;
v___x_3096_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3095_, v_env_3078_, v_declName_3072_, v_declRanges_3073_);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 0, v___x_3096_);
v___x_3098_ = v___x_3092_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v___x_3096_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v_messages_3079_);
lean_ctor_set(v_reuseFailAlloc_3101_, 2, v_scopes_3080_);
lean_ctor_set(v_reuseFailAlloc_3101_, 3, v_usedQuotCtxts_3081_);
lean_ctor_set(v_reuseFailAlloc_3101_, 4, v_nextMacroScope_3082_);
lean_ctor_set(v_reuseFailAlloc_3101_, 5, v_maxRecDepth_3083_);
lean_ctor_set(v_reuseFailAlloc_3101_, 6, v_ngen_3084_);
lean_ctor_set(v_reuseFailAlloc_3101_, 7, v_auxDeclNGen_3085_);
lean_ctor_set(v_reuseFailAlloc_3101_, 8, v_infoState_3086_);
lean_ctor_set(v_reuseFailAlloc_3101_, 9, v_traceState_3087_);
lean_ctor_set(v_reuseFailAlloc_3101_, 10, v_snapshotTasks_3088_);
lean_ctor_set(v_reuseFailAlloc_3101_, 11, v_prevLinterStates_3089_);
lean_ctor_set(v_reuseFailAlloc_3101_, 12, v_codeQualityEntryTasks_3090_);
v___x_3098_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
lean_object* v___x_3099_; lean_object* v___x_3100_; 
v___x_3099_ = lean_st_ref_put(v___y_3074_, v___x_3098_);
v___x_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3094_);
return v___x_3100_;
}
}
}
else
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
lean_dec_ref(v_declRanges_3073_);
lean_dec(v_declName_3072_);
v___x_3103_ = lean_box(0);
v___x_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3103_);
return v___x_3104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg___boxed(lean_object* v_declName_3105_, lean_object* v_declRanges_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_){
_start:
{
lean_object* v_res_3109_; 
v_res_3109_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3105_, v_declRanges_3106_, v___y_3107_);
lean_dec(v___y_3107_);
return v_res_3109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(lean_object* v_stx_3110_, lean_object* v___y_3111_){
_start:
{
uint8_t v___x_3113_; lean_object* v___x_3114_; 
v___x_3113_ = 0;
v___x_3114_ = l_Lean_Syntax_getRange_x3f(v_stx_3110_, v___x_3113_);
if (lean_obj_tag(v___x_3114_) == 1)
{
lean_object* v_val_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3127_; 
v_val_3115_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3127_ == 0)
{
v___x_3117_ = v___x_3114_;
v_isShared_3118_ = v_isSharedCheck_3127_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_val_3115_);
lean_dec(v___x_3114_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3127_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v_fileMap_3119_; lean_object* v_start_3120_; lean_object* v_stop_3121_; lean_object* v___x_3122_; lean_object* v___x_3124_; 
v_fileMap_3119_ = lean_ctor_get(v___y_3111_, 1);
v_start_3120_ = lean_ctor_get(v_val_3115_, 0);
lean_inc(v_start_3120_);
v_stop_3121_ = lean_ctor_get(v_val_3115_, 1);
lean_inc(v_stop_3121_);
lean_dec(v_val_3115_);
lean_inc_ref(v_fileMap_3119_);
v___x_3122_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_3119_, v_start_3120_, v_stop_3121_);
lean_dec(v_stop_3121_);
lean_dec(v_start_3120_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v___x_3122_);
v___x_3124_ = v___x_3117_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3122_);
v___x_3124_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
lean_object* v___x_3125_; 
v___x_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
return v___x_3125_;
}
}
}
else
{
lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_dec(v___x_3114_);
v___x_3128_ = lean_box(0);
v___x_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3128_);
return v___x_3129_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg___boxed(lean_object* v_stx_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_3130_, v___y_3131_);
lean_dec_ref(v___y_3131_);
lean_dec(v_stx_3130_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(lean_object* v_declName_3134_, lean_object* v_rangeStx_3135_, lean_object* v_selectionRangeStx_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_){
_start:
{
lean_object* v___x_3140_; lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3157_; 
v___x_3140_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_rangeStx_3135_, v___y_3137_);
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3143_ = v___x_3140_;
v_isShared_3144_ = v_isSharedCheck_3157_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3140_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3157_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
if (lean_obj_tag(v_a_3141_) == 1)
{
lean_object* v_val_3145_; lean_object* v_a_3147_; lean_object* v___x_3150_; lean_object* v_a_3151_; 
lean_del_object(v___x_3143_);
v_val_3145_ = lean_ctor_get(v_a_3141_, 0);
lean_inc(v_val_3145_);
lean_dec_ref_known(v_a_3141_, 1);
v___x_3150_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_selectionRangeStx_3136_, v___y_3137_);
v_a_3151_ = lean_ctor_get(v___x_3150_, 0);
lean_inc(v_a_3151_);
lean_dec_ref(v___x_3150_);
if (lean_obj_tag(v_a_3151_) == 0)
{
lean_inc(v_val_3145_);
v_a_3147_ = v_val_3145_;
goto v___jp_3146_;
}
else
{
lean_object* v_val_3152_; 
v_val_3152_ = lean_ctor_get(v_a_3151_, 0);
lean_inc(v_val_3152_);
lean_dec_ref_known(v_a_3151_, 1);
v_a_3147_ = v_val_3152_;
goto v___jp_3146_;
}
v___jp_3146_:
{
lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3148_, 0, v_val_3145_);
lean_ctor_set(v___x_3148_, 1, v_a_3147_);
v___x_3149_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3134_, v___x_3148_, v___y_3138_);
return v___x_3149_;
}
}
else
{
lean_object* v___x_3153_; lean_object* v___x_3155_; 
lean_dec(v_a_3141_);
lean_dec(v_declName_3134_);
v___x_3153_ = lean_box(0);
if (v_isShared_3144_ == 0)
{
lean_ctor_set(v___x_3143_, 0, v___x_3153_);
v___x_3155_ = v___x_3143_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v___x_3153_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_declName_3158_, lean_object* v_rangeStx_3159_, lean_object* v_selectionRangeStx_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v_declName_3158_, v_rangeStx_3159_, v_selectionRangeStx_3160_, v___y_3161_, v___y_3162_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec(v_selectionRangeStx_3160_);
lean_dec(v_rangeStx_3159_);
return v_res_3164_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0(void){
_start:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; 
v___x_3165_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
return v___x_3166_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l_Array_mkArray0___redArg();
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2(lean_object* v___x_3184_, lean_object* v_a_3185_, lean_object* v_projId_3186_, lean_object* v___x_3187_, lean_object* v___x_3188_, lean_object* v___x_3189_, lean_object* v_params_3190_, lean_object* v___x_3191_, lean_object* v_mods_3192_, lean_object* v___x_3193_, lean_object* v_optDeriving_3194_, lean_object* v___x_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_){
_start:
{
lean_object* v___x_3199_; 
v___x_3199_ = l_Lean_Elab_Command_getScope___redArg(v___y_3197_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v_currNamespace_3201_; lean_object* v___x_3202_; 
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v___x_3199_, 1);
v_currNamespace_3201_ = lean_ctor_get(v_a_3200_, 2);
lean_inc(v_currNamespace_3201_);
lean_dec(v_a_3200_);
v___x_3202_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_3197_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
lean_inc(v_a_3203_);
lean_dec_ref_known(v___x_3202_, 1);
lean_inc(v___x_3184_);
v___x_3204_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_3204_, 0, v_currNamespace_3201_);
lean_closure_set(v___x_3204_, 1, v_a_3203_);
lean_closure_set(v___x_3204_, 2, v___x_3184_);
lean_closure_set(v___x_3204_, 3, v_a_3185_);
v___x_3205_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3204_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; lean_object* v_declName_3207_; lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3369_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3205_, 1);
v_declName_3207_ = lean_ctor_get(v_a_3206_, 1);
v_isSharedCheck_3369_ = !lean_is_exclusive(v_a_3206_);
if (v_isSharedCheck_3369_ == 0)
{
lean_object* v_unused_3370_; lean_object* v_unused_3371_; lean_object* v_unused_3372_; 
v_unused_3370_ = lean_ctor_get(v_a_3206_, 3);
lean_dec(v_unused_3370_);
v_unused_3371_ = lean_ctor_get(v_a_3206_, 2);
lean_dec(v_unused_3371_);
v_unused_3372_ = lean_ctor_get(v_a_3206_, 0);
lean_dec(v_unused_3372_);
v___x_3209_ = v_a_3206_;
v_isShared_3210_ = v_isSharedCheck_3369_;
goto v_resetjp_3208_;
}
else
{
lean_inc(v_declName_3207_);
lean_dec(v_a_3206_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3369_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
size_t v___y_3212_; lean_object* v___y_3213_; lean_object* v___y_3214_; lean_object* v___y_3215_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3253_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__1));
lean_inc_n(v_declName_3207_, 3);
v___x_3254_ = l_Lean_Name_append(v_declName_3207_, v___x_3253_);
v___x_3255_ = l_Lean_TSyntax_getId(v_projId_3186_);
lean_inc(v___x_3255_);
v___x_3256_ = l_Lean_Name_append(v_declName_3207_, v___x_3255_);
v___x_3257_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__3));
v___x_3258_ = l_Lean_Name_append(v_declName_3207_, v___x_3257_);
v___x_3259_ = l_Lean_Elab_Command_getRef___redArg(v___y_3196_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_object* v_a_3260_; uint8_t v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3350_; 
v_a_3260_ = lean_ctor_get(v___x_3259_, 0);
lean_inc(v_a_3260_);
lean_dec_ref_known(v___x_3259_, 1);
v___x_3261_ = 0;
v___x_3262_ = l_Lean_SourceInfo_fromRef(v_a_3260_, v___x_3261_);
lean_dec(v_a_3260_);
v___x_3350_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3196_);
if (lean_obj_tag(v___x_3350_) == 0)
{
lean_object* v_quotContext_x3f_3351_; 
lean_dec_ref_known(v___x_3350_, 1);
v_quotContext_x3f_3351_ = lean_ctor_get(v___y_3196_, 5);
if (lean_obj_tag(v_quotContext_x3f_3351_) == 0)
{
lean_object* v___x_3352_; 
v___x_3352_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_3197_);
lean_dec_ref(v___x_3352_);
goto v___jp_3263_;
}
else
{
goto v___jp_3263_;
}
}
else
{
lean_object* v_a_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3360_; 
lean_dec(v___x_3262_);
lean_dec(v___x_3258_);
lean_dec(v___x_3256_);
lean_dec(v___x_3255_);
lean_dec(v___x_3254_);
lean_del_object(v___x_3209_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_mods_3192_);
lean_dec(v___x_3191_);
lean_dec_ref(v_params_3190_);
lean_dec_ref(v___x_3189_);
lean_dec_ref(v___x_3188_);
lean_dec_ref(v___x_3187_);
lean_dec(v_projId_3186_);
lean_dec(v___x_3184_);
v_a_3353_ = lean_ctor_get(v___x_3350_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3350_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3355_ = v___x_3350_;
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_a_3353_);
lean_dec(v___x_3350_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3358_; 
if (v_isShared_3356_ == 0)
{
v___x_3358_ = v___x_3355_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_a_3353_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
}
v___jp_3263_:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; size_t v_sz_3274_; size_t v___x_3275_; lean_object* v___x_3276_; size_t v_sz_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3264_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__4));
lean_inc_ref_n(v___x_3189_, 3);
lean_inc_ref_n(v___x_3188_, 4);
lean_inc_ref_n(v___x_3187_, 4);
v___x_3265_ = l_Lean_Name_mkStr4(v___x_3187_, v___x_3188_, v___x_3189_, v___x_3264_);
v___x_3266_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__5));
v___x_3267_ = l_Lean_Name_mkStr4(v___x_3187_, v___x_3188_, v___x_3189_, v___x_3266_);
v___x_3268_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__6));
lean_inc_n(v___x_3262_, 8);
v___x_3269_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3262_);
lean_ctor_set(v___x_3269_, 1, v___x_3268_);
v___x_3270_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__7));
v___x_3271_ = l_Lean_Name_mkStr4(v___x_3187_, v___x_3188_, v___x_3189_, v___x_3270_);
v___x_3272_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__9));
v___x_3273_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__10, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__10_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10);
v_sz_3274_ = lean_array_size(v_params_3190_);
v___x_3275_ = ((size_t)0ULL);
v___x_3276_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_3274_, v___x_3275_, v_params_3190_);
v_sz_3277_ = lean_array_size(v___x_3276_);
v___x_3278_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_3277_, v___x_3275_, v___x_3276_);
v___x_3279_ = l_Array_append___redArg(v___x_3273_, v___x_3278_);
lean_dec_ref(v___x_3278_);
v___x_3280_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3262_);
lean_ctor_set(v___x_3280_, 1, v___x_3272_);
lean_ctor_set(v___x_3280_, 2, v___x_3279_);
v___x_3281_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3281_, 0, v___x_3262_);
lean_ctor_set(v___x_3281_, 1, v___x_3272_);
lean_ctor_set(v___x_3281_, 2, v___x_3273_);
lean_inc_ref_n(v___x_3281_, 4);
v___x_3282_ = l_Lean_Syntax_node2(v___x_3262_, v___x_3271_, v___x_3280_, v___x_3281_);
v___x_3283_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__11));
v___x_3284_ = l_Lean_Name_mkStr4(v___x_3187_, v___x_3188_, v___x_3189_, v___x_3283_);
v___x_3285_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__12));
v___x_3286_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3262_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__13));
v___x_3288_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__14));
v___x_3289_ = l_Lean_Name_mkStr4(v___x_3187_, v___x_3188_, v___x_3287_, v___x_3288_);
v___x_3290_ = l_Lean_Syntax_node2(v___x_3262_, v___x_3289_, v___x_3281_, v___x_3281_);
v___x_3291_ = l_Lean_Syntax_node4(v___x_3262_, v___x_3284_, v___x_3286_, v___x_3191_, v___x_3290_, v___x_3281_);
lean_inc(v___x_3184_);
v___x_3292_ = l_Lean_Syntax_node5(v___x_3262_, v___x_3267_, v___x_3269_, v___x_3184_, v___x_3282_, v___x_3291_, v___x_3281_);
v___x_3293_ = l_Lean_Syntax_node2(v___x_3262_, v___x_3265_, v_mods_3192_, v___x_3292_);
v___x_3294_ = l_Lean_Elab_Command_elabCommand(v___x_3293_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v___x_3295_; lean_object* v___x_3296_; 
lean_dec_ref_known(v___x_3294_, 1);
lean_inc(v___x_3258_);
lean_inc(v___x_3256_);
lean_inc(v___x_3254_);
lean_inc(v_declName_3207_);
v___x_3295_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 12, 5);
lean_closure_set(v___x_3295_, 0, v_declName_3207_);
lean_closure_set(v___x_3295_, 1, v___x_3254_);
lean_closure_set(v___x_3295_, 2, v___x_3256_);
lean_closure_set(v___x_3295_, 3, v___x_3258_);
lean_closure_set(v___x_3295_, 4, v___x_3255_);
v___x_3296_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3295_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v_a_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc(v_a_3297_);
lean_dec_ref_known(v___x_3296_, 1);
v___x_3298_ = lean_box(0);
lean_inc(v___x_3254_);
v___x_3299_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3254_, v___x_3184_, v___x_3298_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v___x_3300_; 
lean_dec_ref_known(v___x_3299_, 1);
lean_inc(v___x_3256_);
v___x_3300_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3256_, v_projId_3186_, v___x_3298_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; 
lean_dec_ref_known(v___x_3300_, 1);
v___x_3301_ = lean_box(0);
lean_inc(v___x_3256_);
v___x_3302_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_projId_3186_, v___x_3256_, v___x_3301_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v_env_3309_; lean_object* v_messages_3310_; lean_object* v_scopes_3311_; lean_object* v_usedQuotCtxts_3312_; lean_object* v_nextMacroScope_3313_; lean_object* v_maxRecDepth_3314_; lean_object* v_ngen_3315_; lean_object* v_auxDeclNGen_3316_; lean_object* v_infoState_3317_; lean_object* v_traceState_3318_; lean_object* v_snapshotTasks_3319_; lean_object* v_prevLinterStates_3320_; lean_object* v_codeQualityEntryTasks_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3341_; 
lean_dec_ref_known(v___x_3302_, 1);
lean_inc(v___x_3256_);
v___x_3303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3303_, 0, v___x_3256_);
lean_ctor_set(v___x_3303_, 1, v___x_3193_);
lean_inc(v___x_3254_);
v___x_3304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3254_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
lean_inc_ref(v___x_3304_);
lean_inc(v_declName_3207_);
v___x_3305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3305_, 0, v_declName_3207_);
lean_ctor_set(v___x_3305_, 1, v___x_3304_);
v___x_3306_ = lean_box(0);
v___x_3307_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v___x_3305_, v___x_3306_, v___y_3196_, v___y_3197_);
lean_dec_ref_known(v___x_3305_, 2);
lean_dec_ref(v___x_3307_);
v___x_3308_ = lean_st_ref_take(v___y_3197_);
v_env_3309_ = lean_ctor_get(v___x_3308_, 0);
v_messages_3310_ = lean_ctor_get(v___x_3308_, 1);
v_scopes_3311_ = lean_ctor_get(v___x_3308_, 2);
v_usedQuotCtxts_3312_ = lean_ctor_get(v___x_3308_, 3);
v_nextMacroScope_3313_ = lean_ctor_get(v___x_3308_, 4);
v_maxRecDepth_3314_ = lean_ctor_get(v___x_3308_, 5);
v_ngen_3315_ = lean_ctor_get(v___x_3308_, 6);
v_auxDeclNGen_3316_ = lean_ctor_get(v___x_3308_, 7);
v_infoState_3317_ = lean_ctor_get(v___x_3308_, 8);
v_traceState_3318_ = lean_ctor_get(v___x_3308_, 9);
v_snapshotTasks_3319_ = lean_ctor_get(v___x_3308_, 10);
v_prevLinterStates_3320_ = lean_ctor_get(v___x_3308_, 11);
v_codeQualityEntryTasks_3321_ = lean_ctor_get(v___x_3308_, 12);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3323_ = v___x_3308_;
v_isShared_3324_ = v_isSharedCheck_3341_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3321_);
lean_inc(v_prevLinterStates_3320_);
lean_inc(v_snapshotTasks_3319_);
lean_inc(v_traceState_3318_);
lean_inc(v_infoState_3317_);
lean_inc(v_auxDeclNGen_3316_);
lean_inc(v_ngen_3315_);
lean_inc(v_maxRecDepth_3314_);
lean_inc(v_nextMacroScope_3313_);
lean_inc(v_usedQuotCtxts_3312_);
lean_inc(v_scopes_3311_);
lean_inc(v_messages_3310_);
lean_inc(v_env_3309_);
lean_dec(v___x_3308_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3341_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
lean_inc(v_declName_3207_);
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 3, v_a_3297_);
lean_ctor_set(v___x_3209_, 2, v___x_3256_);
lean_ctor_set(v___x_3209_, 1, v___x_3254_);
lean_ctor_set(v___x_3209_, 0, v_declName_3207_);
v___x_3326_ = v___x_3209_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_declName_3207_);
lean_ctor_set(v_reuseFailAlloc_3340_, 1, v___x_3254_);
lean_ctor_set(v_reuseFailAlloc_3340_, 2, v___x_3256_);
lean_ctor_set(v_reuseFailAlloc_3340_, 3, v_a_3297_);
v___x_3326_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
lean_object* v___x_3327_; lean_object* v___x_3329_; 
v___x_3327_ = l_Lean_registerVirtualStructure(v_env_3309_, v___x_3326_);
if (v_isShared_3324_ == 0)
{
lean_ctor_set(v___x_3323_, 0, v___x_3327_);
v___x_3329_ = v___x_3323_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v___x_3327_);
lean_ctor_set(v_reuseFailAlloc_3339_, 1, v_messages_3310_);
lean_ctor_set(v_reuseFailAlloc_3339_, 2, v_scopes_3311_);
lean_ctor_set(v_reuseFailAlloc_3339_, 3, v_usedQuotCtxts_3312_);
lean_ctor_set(v_reuseFailAlloc_3339_, 4, v_nextMacroScope_3313_);
lean_ctor_set(v_reuseFailAlloc_3339_, 5, v_maxRecDepth_3314_);
lean_ctor_set(v_reuseFailAlloc_3339_, 6, v_ngen_3315_);
lean_ctor_set(v_reuseFailAlloc_3339_, 7, v_auxDeclNGen_3316_);
lean_ctor_set(v_reuseFailAlloc_3339_, 8, v_infoState_3317_);
lean_ctor_set(v_reuseFailAlloc_3339_, 9, v_traceState_3318_);
lean_ctor_set(v_reuseFailAlloc_3339_, 10, v_snapshotTasks_3319_);
lean_ctor_set(v_reuseFailAlloc_3339_, 11, v_prevLinterStates_3320_);
lean_ctor_set(v_reuseFailAlloc_3339_, 12, v_codeQualityEntryTasks_3321_);
v___x_3329_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
lean_object* v___x_3330_; lean_object* v___x_3331_; 
v___x_3330_ = lean_st_ref_put(v___y_3197_, v___x_3329_);
v___x_3331_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v___x_3304_, v___x_3306_, v___y_3196_, v___y_3197_);
lean_dec_ref_known(v___x_3304_, 2);
if (lean_obj_tag(v___x_3331_) == 0)
{
lean_object* v___x_3332_; lean_object* v_env_3333_; uint8_t v___x_3334_; uint8_t v___x_3335_; 
lean_dec_ref_known(v___x_3331_, 1);
v___x_3332_ = lean_st_ref_get(v___y_3197_);
v_env_3333_ = lean_ctor_get(v___x_3332_, 0);
lean_inc_ref(v_env_3333_);
lean_dec(v___x_3332_);
v___x_3334_ = 1;
lean_inc(v___x_3258_);
v___x_3335_ = l_Lean_Environment_contains(v_env_3333_, v___x_3258_, v___x_3334_);
if (v___x_3335_ == 0)
{
lean_dec(v___x_3258_);
lean_dec(v___x_3184_);
v___y_3212_ = v___x_3275_;
v___y_3213_ = v___x_3306_;
v___y_3214_ = v___y_3196_;
v___y_3215_ = v___y_3197_;
goto v___jp_3211_;
}
else
{
lean_object* v___x_3336_; 
lean_inc(v___x_3258_);
v___x_3336_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3258_, v___x_3184_, v___x_3298_, v___y_3196_, v___y_3197_);
lean_dec(v___x_3184_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v___x_3337_; lean_object* v___x_3338_; 
lean_dec_ref_known(v___x_3336_, 1);
v___x_3337_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_3337_, 0, v___x_3258_);
v___x_3338_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3337_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_dec_ref_known(v___x_3338_, 1);
v___y_3212_ = v___x_3275_;
v___y_3213_ = v___x_3306_;
v___y_3214_ = v___y_3196_;
v___y_3215_ = v___y_3197_;
goto v___jp_3211_;
}
else
{
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
return v___x_3338_;
}
}
else
{
lean_dec(v___x_3258_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
return v___x_3336_;
}
}
}
else
{
lean_dec(v___x_3258_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3184_);
return v___x_3331_;
}
}
}
}
}
else
{
lean_dec(v_a_3297_);
lean_dec(v___x_3258_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_del_object(v___x_3209_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v___x_3184_);
return v___x_3302_;
}
}
else
{
lean_dec(v_a_3297_);
lean_dec(v___x_3258_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_del_object(v___x_3209_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_projId_3186_);
lean_dec(v___x_3184_);
return v___x_3300_;
}
}
else
{
lean_dec(v_a_3297_);
lean_dec(v___x_3258_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_del_object(v___x_3209_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_projId_3186_);
lean_dec(v___x_3184_);
return v___x_3299_;
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3349_; 
lean_dec(v___x_3258_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_del_object(v___x_3209_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_projId_3186_);
lean_dec(v___x_3184_);
v_a_3342_ = lean_ctor_get(v___x_3296_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_3296_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_3344_ = v___x_3296_;
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3296_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3349_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_a_3342_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
}
}
else
{
lean_dec(v___x_3258_);
lean_dec(v___x_3256_);
lean_dec(v___x_3255_);
lean_dec(v___x_3254_);
lean_del_object(v___x_3209_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_projId_3186_);
lean_dec(v___x_3184_);
return v___x_3294_;
}
}
}
else
{
lean_object* v_a_3361_; lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3368_; 
lean_dec(v___x_3258_);
lean_dec(v___x_3256_);
lean_dec(v___x_3255_);
lean_dec(v___x_3254_);
lean_del_object(v___x_3209_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_mods_3192_);
lean_dec(v___x_3191_);
lean_dec_ref(v_params_3190_);
lean_dec_ref(v___x_3189_);
lean_dec_ref(v___x_3188_);
lean_dec_ref(v___x_3187_);
lean_dec(v_projId_3186_);
lean_dec(v___x_3184_);
v_a_3361_ = lean_ctor_get(v___x_3259_, 0);
v_isSharedCheck_3368_ = !lean_is_exclusive(v___x_3259_);
if (v_isSharedCheck_3368_ == 0)
{
v___x_3363_ = v___x_3259_;
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
else
{
lean_inc(v_a_3361_);
lean_dec(v___x_3259_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3368_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3366_; 
if (v_isShared_3364_ == 0)
{
v___x_3366_ = v___x_3363_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v_a_3361_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
v___jp_3211_:
{
lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3216_ = lean_alloc_closure((void*)(l_Lean_Elab_getOptDerivingClasses___boxed), 4, 1);
lean_closure_set(v___x_3216_, 0, v_optDeriving_3194_);
v___x_3217_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3216_, v___y_3214_, v___y_3215_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3244_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3220_ = v___x_3217_;
v_isShared_3221_ = v_isSharedCheck_3244_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_a_3218_);
lean_dec(v___x_3217_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3244_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3222_; uint8_t v___x_3223_; 
v___x_3222_ = lean_array_get_size(v_a_3218_);
v___x_3223_ = lean_nat_dec_eq(v___x_3222_, v___x_3195_);
if (v___x_3223_ == 0)
{
uint8_t v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; size_t v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___f_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
lean_del_object(v___x_3220_);
v___x_3224_ = 1;
v___x_3225_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__0, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__0_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0);
v___x_3226_ = lean_unsigned_to_nat(32u);
v___x_3227_ = lean_mk_empty_array_with_capacity(v___x_3226_);
v___x_3228_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_3229_ = ((size_t)5ULL);
lean_inc_n(v___x_3195_, 2);
v___x_3230_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3230_, 0, v___x_3228_);
lean_ctor_set(v___x_3230_, 1, v___x_3227_);
lean_ctor_set(v___x_3230_, 2, v___x_3195_);
lean_ctor_set(v___x_3230_, 3, v___x_3195_);
lean_ctor_set_usize(v___x_3230_, 4, v___x_3229_);
v___x_3231_ = lean_box(1);
v___x_3232_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3225_);
lean_ctor_set(v___x_3232_, 1, v___x_3230_);
lean_ctor_set(v___x_3232_, 2, v___x_3231_);
v___x_3233_ = lean_mk_empty_array_with_capacity(v___x_3195_);
lean_dec(v___x_3195_);
lean_inc(v_declName_3207_);
v___x_3234_ = lean_alloc_closure((void*)(l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed), 8, 1);
lean_closure_set(v___x_3234_, 0, v_declName_3207_);
v___x_3235_ = lean_box(v___x_3224_);
v___x_3236_ = lean_box_usize(v___y_3212_);
v___x_3237_ = lean_box(v___x_3223_);
v___f_3238_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3238_, 0, v___x_3234_);
lean_closure_set(v___f_3238_, 1, v___x_3235_);
lean_closure_set(v___f_3238_, 2, v_declName_3207_);
lean_closure_set(v___f_3238_, 3, v_a_3218_);
lean_closure_set(v___f_3238_, 4, v___x_3222_);
lean_closure_set(v___f_3238_, 5, v___x_3236_);
lean_closure_set(v___f_3238_, 6, v___y_3213_);
lean_closure_set(v___f_3238_, 7, v___x_3237_);
v___x_3239_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed), 11, 4);
lean_closure_set(v___x_3239_, 0, lean_box(0));
lean_closure_set(v___x_3239_, 1, v___x_3232_);
lean_closure_set(v___x_3239_, 2, v___x_3233_);
lean_closure_set(v___x_3239_, 3, v___f_3238_);
v___x_3240_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3239_, v___y_3214_, v___y_3215_);
return v___x_3240_;
}
else
{
lean_object* v___x_3242_; 
lean_dec(v_a_3218_);
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 0, v___y_3213_);
v___x_3242_ = v___x_3220_;
goto v_reusejp_3241_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v___y_3213_);
v___x_3242_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3241_;
}
v_reusejp_3241_:
{
return v___x_3242_;
}
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec(v_declName_3207_);
lean_dec(v___x_3195_);
v_a_3245_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3217_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3217_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
}
}
}
else
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3380_; 
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_mods_3192_);
lean_dec(v___x_3191_);
lean_dec_ref(v_params_3190_);
lean_dec_ref(v___x_3189_);
lean_dec_ref(v___x_3188_);
lean_dec_ref(v___x_3187_);
lean_dec(v_projId_3186_);
lean_dec(v___x_3184_);
v_a_3373_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3375_ = v___x_3205_;
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v___x_3205_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3380_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec(v_currNamespace_3201_);
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_mods_3192_);
lean_dec(v___x_3191_);
lean_dec_ref(v_params_3190_);
lean_dec_ref(v___x_3189_);
lean_dec_ref(v___x_3188_);
lean_dec_ref(v___x_3187_);
lean_dec(v_projId_3186_);
lean_dec_ref(v_a_3185_);
lean_dec(v___x_3184_);
v_a_3381_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3202_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3202_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec(v___x_3195_);
lean_dec(v_optDeriving_3194_);
lean_dec(v___x_3193_);
lean_dec(v_mods_3192_);
lean_dec(v___x_3191_);
lean_dec_ref(v_params_3190_);
lean_dec_ref(v___x_3189_);
lean_dec_ref(v___x_3188_);
lean_dec_ref(v___x_3187_);
lean_dec(v_projId_3186_);
lean_dec_ref(v_a_3185_);
lean_dec(v___x_3184_);
v_a_3389_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3199_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3199_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___boxed(lean_object* v___x_3397_, lean_object* v_a_3398_, lean_object* v_projId_3399_, lean_object* v___x_3400_, lean_object* v___x_3401_, lean_object* v___x_3402_, lean_object* v_params_3403_, lean_object* v___x_3404_, lean_object* v_mods_3405_, lean_object* v___x_3406_, lean_object* v_optDeriving_3407_, lean_object* v___x_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_){
_start:
{
lean_object* v_res_3412_; 
v_res_3412_ = l_Lean_Elab_Command_elabNewtype___lam__2(v___x_3397_, v_a_3398_, v_projId_3399_, v___x_3400_, v___x_3401_, v___x_3402_, v_params_3403_, v___x_3404_, v_mods_3405_, v___x_3406_, v_optDeriving_3407_, v___x_3408_, v___y_3409_, v___y_3410_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
return v_res_3412_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(uint8_t v_suppressElabErrors_3413_, uint8_t v___y_3414_, lean_object* v_x_3415_){
_start:
{
if (lean_obj_tag(v_x_3415_) == 1)
{
lean_object* v_pre_3416_; 
v_pre_3416_ = lean_ctor_get(v_x_3415_, 0);
if (lean_obj_tag(v_pre_3416_) == 0)
{
lean_object* v_str_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; 
v_str_3417_ = lean_ctor_get(v_x_3415_, 1);
v___x_3418_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_3419_ = lean_string_dec_eq(v_str_3417_, v___x_3418_);
if (v___x_3419_ == 0)
{
return v___x_3419_;
}
else
{
return v_suppressElabErrors_3413_;
}
}
else
{
return v___y_3414_;
}
}
else
{
return v___y_3414_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed(lean_object* v_suppressElabErrors_3420_, lean_object* v___y_3421_, lean_object* v_x_3422_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3423_; uint8_t v___y_54232__boxed_3424_; uint8_t v_res_3425_; lean_object* v_r_3426_; 
v_suppressElabErrors_boxed_3423_ = lean_unbox(v_suppressElabErrors_3420_);
v___y_54232__boxed_3424_ = lean_unbox(v___y_3421_);
v_res_3425_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(v_suppressElabErrors_boxed_3423_, v___y_54232__boxed_3424_, v_x_3422_);
lean_dec(v_x_3422_);
v_r_3426_ = lean_box(v_res_3425_);
return v_r_3426_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(lean_object* v_ref_3427_, lean_object* v_msgData_3428_, uint8_t v_severity_3429_, uint8_t v_isSilent_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_){
_start:
{
lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___y_3437_; uint8_t v___y_3438_; lean_object* v___y_3439_; uint8_t v___y_3440_; lean_object* v___y_3441_; lean_object* v___y_3442_; uint8_t v___y_3500_; lean_object* v___y_3501_; uint8_t v___y_3502_; uint8_t v___y_3503_; lean_object* v___y_3504_; uint8_t v___y_3528_; uint8_t v___y_3529_; lean_object* v___y_3530_; uint8_t v___y_3531_; lean_object* v___y_3532_; uint8_t v___y_3536_; uint8_t v___y_3537_; uint8_t v___y_3538_; uint8_t v___x_3553_; uint8_t v___y_3555_; uint8_t v___y_3556_; uint8_t v___y_3557_; uint8_t v___y_3559_; uint8_t v___x_3571_; 
v___x_3553_ = 2;
v___x_3571_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3429_, v___x_3553_);
if (v___x_3571_ == 0)
{
v___y_3559_ = v___x_3571_;
goto v___jp_3558_;
}
else
{
uint8_t v___x_3572_; 
lean_inc_ref(v_msgData_3428_);
v___x_3572_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3428_);
v___y_3559_ = v___x_3572_;
goto v___jp_3558_;
}
v___jp_3434_:
{
lean_object* v___x_3443_; 
v___x_3443_ = l_Lean_Elab_Command_getScope___redArg(v___y_3442_);
if (lean_obj_tag(v___x_3443_) == 0)
{
lean_object* v_a_3444_; lean_object* v_currNamespace_3445_; lean_object* v___x_3446_; 
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref_known(v___x_3443_, 1);
v_currNamespace_3445_ = lean_ctor_get(v_a_3444_, 2);
lean_inc(v_currNamespace_3445_);
lean_dec(v_a_3444_);
v___x_3446_ = l_Lean_Elab_Command_getScope___redArg(v___y_3442_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3482_; 
v_a_3447_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3482_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3482_ == 0)
{
v___x_3449_ = v___x_3446_;
v_isShared_3450_ = v_isSharedCheck_3482_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3446_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3482_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v_openDecls_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v_env_3456_; lean_object* v_messages_3457_; lean_object* v_scopes_3458_; lean_object* v_usedQuotCtxts_3459_; lean_object* v_nextMacroScope_3460_; lean_object* v_maxRecDepth_3461_; lean_object* v_ngen_3462_; lean_object* v_auxDeclNGen_3463_; lean_object* v_infoState_3464_; lean_object* v_traceState_3465_; lean_object* v_snapshotTasks_3466_; lean_object* v_prevLinterStates_3467_; lean_object* v_codeQualityEntryTasks_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3481_; 
v_openDecls_3451_ = lean_ctor_get(v_a_3447_, 3);
lean_inc(v_openDecls_3451_);
lean_dec(v_a_3447_);
v___x_3452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3452_, 0, v_currNamespace_3445_);
lean_ctor_set(v___x_3452_, 1, v_openDecls_3451_);
v___x_3453_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3452_);
lean_ctor_set(v___x_3453_, 1, v___y_3436_);
lean_inc_ref(v___y_3437_);
lean_inc_ref(v___y_3441_);
v___x_3454_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3454_, 0, v___y_3441_);
lean_ctor_set(v___x_3454_, 1, v___y_3439_);
lean_ctor_set(v___x_3454_, 2, v___y_3435_);
lean_ctor_set(v___x_3454_, 3, v___y_3437_);
lean_ctor_set(v___x_3454_, 4, v___x_3453_);
lean_ctor_set_uint8(v___x_3454_, sizeof(void*)*5, v___y_3438_);
lean_ctor_set_uint8(v___x_3454_, sizeof(void*)*5 + 1, v___y_3440_);
lean_ctor_set_uint8(v___x_3454_, sizeof(void*)*5 + 2, v_isSilent_3430_);
v___x_3455_ = lean_st_ref_take(v___y_3442_);
v_env_3456_ = lean_ctor_get(v___x_3455_, 0);
v_messages_3457_ = lean_ctor_get(v___x_3455_, 1);
v_scopes_3458_ = lean_ctor_get(v___x_3455_, 2);
v_usedQuotCtxts_3459_ = lean_ctor_get(v___x_3455_, 3);
v_nextMacroScope_3460_ = lean_ctor_get(v___x_3455_, 4);
v_maxRecDepth_3461_ = lean_ctor_get(v___x_3455_, 5);
v_ngen_3462_ = lean_ctor_get(v___x_3455_, 6);
v_auxDeclNGen_3463_ = lean_ctor_get(v___x_3455_, 7);
v_infoState_3464_ = lean_ctor_get(v___x_3455_, 8);
v_traceState_3465_ = lean_ctor_get(v___x_3455_, 9);
v_snapshotTasks_3466_ = lean_ctor_get(v___x_3455_, 10);
v_prevLinterStates_3467_ = lean_ctor_get(v___x_3455_, 11);
v_codeQualityEntryTasks_3468_ = lean_ctor_get(v___x_3455_, 12);
v_isSharedCheck_3481_ = !lean_is_exclusive(v___x_3455_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3470_ = v___x_3455_;
v_isShared_3471_ = v_isSharedCheck_3481_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3468_);
lean_inc(v_prevLinterStates_3467_);
lean_inc(v_snapshotTasks_3466_);
lean_inc(v_traceState_3465_);
lean_inc(v_infoState_3464_);
lean_inc(v_auxDeclNGen_3463_);
lean_inc(v_ngen_3462_);
lean_inc(v_maxRecDepth_3461_);
lean_inc(v_nextMacroScope_3460_);
lean_inc(v_usedQuotCtxts_3459_);
lean_inc(v_scopes_3458_);
lean_inc(v_messages_3457_);
lean_inc(v_env_3456_);
lean_dec(v___x_3455_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3481_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3475_; 
v___x_3472_ = lean_box(0);
v___x_3473_ = l_Lean_MessageLog_add(v___x_3454_, v_messages_3457_);
if (v_isShared_3471_ == 0)
{
lean_ctor_set(v___x_3470_, 1, v___x_3473_);
v___x_3475_ = v___x_3470_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v_env_3456_);
lean_ctor_set(v_reuseFailAlloc_3480_, 1, v___x_3473_);
lean_ctor_set(v_reuseFailAlloc_3480_, 2, v_scopes_3458_);
lean_ctor_set(v_reuseFailAlloc_3480_, 3, v_usedQuotCtxts_3459_);
lean_ctor_set(v_reuseFailAlloc_3480_, 4, v_nextMacroScope_3460_);
lean_ctor_set(v_reuseFailAlloc_3480_, 5, v_maxRecDepth_3461_);
lean_ctor_set(v_reuseFailAlloc_3480_, 6, v_ngen_3462_);
lean_ctor_set(v_reuseFailAlloc_3480_, 7, v_auxDeclNGen_3463_);
lean_ctor_set(v_reuseFailAlloc_3480_, 8, v_infoState_3464_);
lean_ctor_set(v_reuseFailAlloc_3480_, 9, v_traceState_3465_);
lean_ctor_set(v_reuseFailAlloc_3480_, 10, v_snapshotTasks_3466_);
lean_ctor_set(v_reuseFailAlloc_3480_, 11, v_prevLinterStates_3467_);
lean_ctor_set(v_reuseFailAlloc_3480_, 12, v_codeQualityEntryTasks_3468_);
v___x_3475_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
lean_object* v___x_3476_; lean_object* v___x_3478_; 
v___x_3476_ = lean_st_ref_put(v___y_3442_, v___x_3475_);
if (v_isShared_3450_ == 0)
{
lean_ctor_set(v___x_3449_, 0, v___x_3472_);
v___x_3478_ = v___x_3449_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v___x_3472_);
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
else
{
lean_object* v_a_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3490_; 
lean_dec(v_currNamespace_3445_);
lean_dec_ref(v___y_3439_);
lean_dec_ref(v___y_3436_);
lean_dec(v___y_3435_);
v_a_3483_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3485_ = v___x_3446_;
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_a_3483_);
lean_dec(v___x_3446_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3490_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3488_; 
if (v_isShared_3486_ == 0)
{
v___x_3488_ = v___x_3485_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v_a_3483_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
}
else
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
lean_dec_ref(v___y_3439_);
lean_dec_ref(v___y_3436_);
lean_dec(v___y_3435_);
v_a_3491_ = lean_ctor_get(v___x_3443_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3443_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v___x_3443_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3443_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
v___jp_3499_:
{
lean_object* v_fileName_3505_; lean_object* v_fileMap_3506_; uint8_t v_suppressElabErrors_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___f_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v_a_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3526_; 
v_fileName_3505_ = lean_ctor_get(v___y_3431_, 0);
v_fileMap_3506_ = lean_ctor_get(v___y_3431_, 1);
v_suppressElabErrors_3507_ = lean_ctor_get_uint8(v___y_3431_, sizeof(void*)*10);
v___x_3508_ = lean_box(v_suppressElabErrors_3507_);
v___x_3509_ = lean_box(v___y_3500_);
v___f_3510_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3510_, 0, v___x_3508_);
lean_closure_set(v___f_3510_, 1, v___x_3509_);
v___x_3511_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3428_);
v___x_3512_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v___x_3511_, v___y_3432_);
v_a_3513_ = lean_ctor_get(v___x_3512_, 0);
v_isSharedCheck_3526_ = !lean_is_exclusive(v___x_3512_);
if (v_isSharedCheck_3526_ == 0)
{
v___x_3515_ = v___x_3512_;
v_isShared_3516_ = v_isSharedCheck_3526_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_a_3513_);
lean_dec(v___x_3512_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3526_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; 
lean_inc_ref_n(v_fileMap_3506_, 2);
v___x_3517_ = l_Lean_FileMap_toPosition(v_fileMap_3506_, v___y_3501_);
lean_dec(v___y_3501_);
v___x_3518_ = l_Lean_FileMap_toPosition(v_fileMap_3506_, v___y_3504_);
lean_dec(v___y_3504_);
v___x_3519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3518_);
v___x_3520_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v_suppressElabErrors_3507_ == 0)
{
lean_del_object(v___x_3515_);
lean_dec_ref(v___f_3510_);
v___y_3435_ = v___x_3519_;
v___y_3436_ = v_a_3513_;
v___y_3437_ = v___x_3520_;
v___y_3438_ = v___y_3502_;
v___y_3439_ = v___x_3517_;
v___y_3440_ = v___y_3503_;
v___y_3441_ = v_fileName_3505_;
v___y_3442_ = v___y_3432_;
goto v___jp_3434_;
}
else
{
uint8_t v___x_3521_; 
lean_inc(v_a_3513_);
v___x_3521_ = l_Lean_MessageData_hasTag(v___f_3510_, v_a_3513_);
if (v___x_3521_ == 0)
{
lean_object* v___x_3522_; lean_object* v___x_3524_; 
lean_dec_ref_known(v___x_3519_, 1);
lean_dec_ref(v___x_3517_);
lean_dec(v_a_3513_);
v___x_3522_ = lean_box(0);
if (v_isShared_3516_ == 0)
{
lean_ctor_set(v___x_3515_, 0, v___x_3522_);
v___x_3524_ = v___x_3515_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v___x_3522_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
else
{
lean_del_object(v___x_3515_);
v___y_3435_ = v___x_3519_;
v___y_3436_ = v_a_3513_;
v___y_3437_ = v___x_3520_;
v___y_3438_ = v___y_3502_;
v___y_3439_ = v___x_3517_;
v___y_3440_ = v___y_3503_;
v___y_3441_ = v_fileName_3505_;
v___y_3442_ = v___y_3432_;
goto v___jp_3434_;
}
}
}
}
v___jp_3527_:
{
lean_object* v___x_3533_; 
v___x_3533_ = l_Lean_Syntax_getTailPos_x3f(v___y_3530_, v___y_3529_);
lean_dec(v___y_3530_);
if (lean_obj_tag(v___x_3533_) == 0)
{
lean_inc(v___y_3532_);
v___y_3500_ = v___y_3528_;
v___y_3501_ = v___y_3532_;
v___y_3502_ = v___y_3529_;
v___y_3503_ = v___y_3531_;
v___y_3504_ = v___y_3532_;
goto v___jp_3499_;
}
else
{
lean_object* v_val_3534_; 
v_val_3534_ = lean_ctor_get(v___x_3533_, 0);
lean_inc(v_val_3534_);
lean_dec_ref_known(v___x_3533_, 1);
v___y_3500_ = v___y_3528_;
v___y_3501_ = v___y_3532_;
v___y_3502_ = v___y_3529_;
v___y_3503_ = v___y_3531_;
v___y_3504_ = v_val_3534_;
goto v___jp_3499_;
}
}
v___jp_3535_:
{
lean_object* v___x_3539_; 
v___x_3539_ = l_Lean_Elab_Command_getRef___redArg(v___y_3431_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v_a_3540_; lean_object* v_ref_3541_; lean_object* v___x_3542_; 
v_a_3540_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_a_3540_);
lean_dec_ref_known(v___x_3539_, 1);
v_ref_3541_ = l_Lean_replaceRef(v_ref_3427_, v_a_3540_);
lean_dec(v_a_3540_);
v___x_3542_ = l_Lean_Syntax_getPos_x3f(v_ref_3541_, v___y_3537_);
if (lean_obj_tag(v___x_3542_) == 0)
{
lean_object* v___x_3543_; 
v___x_3543_ = lean_unsigned_to_nat(0u);
v___y_3528_ = v___y_3536_;
v___y_3529_ = v___y_3537_;
v___y_3530_ = v_ref_3541_;
v___y_3531_ = v___y_3538_;
v___y_3532_ = v___x_3543_;
goto v___jp_3527_;
}
else
{
lean_object* v_val_3544_; 
v_val_3544_ = lean_ctor_get(v___x_3542_, 0);
lean_inc(v_val_3544_);
lean_dec_ref_known(v___x_3542_, 1);
v___y_3528_ = v___y_3536_;
v___y_3529_ = v___y_3537_;
v___y_3530_ = v_ref_3541_;
v___y_3531_ = v___y_3538_;
v___y_3532_ = v_val_3544_;
goto v___jp_3527_;
}
}
else
{
lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3552_; 
lean_dec_ref(v_msgData_3428_);
v_a_3545_ = lean_ctor_get(v___x_3539_, 0);
v_isSharedCheck_3552_ = !lean_is_exclusive(v___x_3539_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3547_ = v___x_3539_;
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_dec(v___x_3539_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3552_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3550_; 
if (v_isShared_3548_ == 0)
{
v___x_3550_ = v___x_3547_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v_a_3545_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
v___jp_3554_:
{
if (v___y_3557_ == 0)
{
v___y_3536_ = v___y_3555_;
v___y_3537_ = v___y_3556_;
v___y_3538_ = v_severity_3429_;
goto v___jp_3535_;
}
else
{
v___y_3536_ = v___y_3555_;
v___y_3537_ = v___y_3556_;
v___y_3538_ = v___x_3553_;
goto v___jp_3535_;
}
}
v___jp_3558_:
{
if (v___y_3559_ == 0)
{
lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v_scopes_3562_; lean_object* v___x_3563_; lean_object* v_opts_3564_; uint8_t v___x_3565_; uint8_t v___x_3566_; 
v___x_3560_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3561_ = lean_st_ref_get(v___y_3432_);
v_scopes_3562_ = lean_ctor_get(v___x_3561_, 2);
lean_inc(v_scopes_3562_);
lean_dec(v___x_3561_);
v___x_3563_ = l_List_head_x21___redArg(v___x_3560_, v_scopes_3562_);
lean_dec(v_scopes_3562_);
v_opts_3564_ = lean_ctor_get(v___x_3563_, 1);
lean_inc_ref(v_opts_3564_);
lean_dec(v___x_3563_);
v___x_3565_ = 1;
v___x_3566_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3429_, v___x_3565_);
if (v___x_3566_ == 0)
{
lean_dec_ref(v_opts_3564_);
v___y_3555_ = v___y_3559_;
v___y_3556_ = v___y_3559_;
v___y_3557_ = v___x_3566_;
goto v___jp_3554_;
}
else
{
lean_object* v___x_3567_; uint8_t v___x_3568_; 
v___x_3567_ = l_Lean_warningAsError;
v___x_3568_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_3564_, v___x_3567_);
lean_dec_ref(v_opts_3564_);
v___y_3555_ = v___y_3559_;
v___y_3556_ = v___y_3559_;
v___y_3557_ = v___x_3568_;
goto v___jp_3554_;
}
}
else
{
lean_object* v___x_3569_; lean_object* v___x_3570_; 
lean_dec_ref(v_msgData_3428_);
v___x_3569_ = lean_box(0);
v___x_3570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3570_, 0, v___x_3569_);
return v___x_3570_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___boxed(lean_object* v_ref_3573_, lean_object* v_msgData_3574_, lean_object* v_severity_3575_, lean_object* v_isSilent_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
uint8_t v_severity_boxed_3580_; uint8_t v_isSilent_boxed_3581_; lean_object* v_res_3582_; 
v_severity_boxed_3580_ = lean_unbox(v_severity_3575_);
v_isSilent_boxed_3581_ = lean_unbox(v_isSilent_3576_);
v_res_3582_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3573_, v_msgData_3574_, v_severity_boxed_3580_, v_isSilent_boxed_3581_, v___y_3577_, v___y_3578_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v_ref_3573_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(lean_object* v_msgData_3583_, uint8_t v_severity_3584_, uint8_t v_isSilent_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_){
_start:
{
lean_object* v___x_3589_; 
v___x_3589_ = l_Lean_Elab_Command_getRef___redArg(v___y_3586_);
if (lean_obj_tag(v___x_3589_) == 0)
{
lean_object* v_a_3590_; lean_object* v___x_3591_; 
v_a_3590_ = lean_ctor_get(v___x_3589_, 0);
lean_inc(v_a_3590_);
lean_dec_ref_known(v___x_3589_, 1);
v___x_3591_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_a_3590_, v_msgData_3583_, v_severity_3584_, v_isSilent_3585_, v___y_3586_, v___y_3587_);
lean_dec(v_a_3590_);
return v___x_3591_;
}
else
{
lean_object* v_a_3592_; lean_object* v___x_3594_; uint8_t v_isShared_3595_; uint8_t v_isSharedCheck_3599_; 
lean_dec_ref(v_msgData_3583_);
v_a_3592_ = lean_ctor_get(v___x_3589_, 0);
v_isSharedCheck_3599_ = !lean_is_exclusive(v___x_3589_);
if (v_isSharedCheck_3599_ == 0)
{
v___x_3594_ = v___x_3589_;
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
else
{
lean_inc(v_a_3592_);
lean_dec(v___x_3589_);
v___x_3594_ = lean_box(0);
v_isShared_3595_ = v_isSharedCheck_3599_;
goto v_resetjp_3593_;
}
v_resetjp_3593_:
{
lean_object* v___x_3597_; 
if (v_isShared_3595_ == 0)
{
v___x_3597_ = v___x_3594_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v_a_3592_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44___boxed(lean_object* v_msgData_3600_, lean_object* v_severity_3601_, lean_object* v_isSilent_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
uint8_t v_severity_boxed_3606_; uint8_t v_isSilent_boxed_3607_; lean_object* v_res_3608_; 
v_severity_boxed_3606_ = lean_unbox(v_severity_3601_);
v_isSilent_boxed_3607_ = lean_unbox(v_isSilent_3602_);
v_res_3608_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3600_, v_severity_boxed_3606_, v_isSilent_boxed_3607_, v___y_3603_, v___y_3604_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(lean_object* v_msgData_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
uint8_t v___x_3613_; uint8_t v___x_3614_; lean_object* v___x_3615_; 
v___x_3613_ = 2;
v___x_3614_ = 0;
v___x_3615_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3609_, v___x_3613_, v___x_3614_, v___y_3610_, v___y_3611_);
return v___x_3615_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38___boxed(lean_object* v_msgData_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v_msgData_3616_, v___y_3617_, v___y_3618_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(lean_object* v_ref_3621_, lean_object* v_msgData_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
uint8_t v___x_3626_; uint8_t v___x_3627_; lean_object* v___x_3628_; 
v___x_3626_ = 2;
v___x_3627_ = 0;
v___x_3628_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3621_, v_msgData_3622_, v___x_3626_, v___x_3627_, v___y_3623_, v___y_3624_);
return v___x_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37___boxed(lean_object* v_ref_3629_, lean_object* v_msgData_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_){
_start:
{
lean_object* v_res_3634_; 
v_res_3634_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3629_, v_msgData_3630_, v___y_3631_, v___y_3632_);
lean_dec(v___y_3632_);
lean_dec_ref(v___y_3631_);
lean_dec(v_ref_3629_);
return v_res_3634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(lean_object* v_ex_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_){
_start:
{
if (lean_obj_tag(v_ex_3635_) == 0)
{
lean_object* v_ref_3639_; lean_object* v_msg_3640_; lean_object* v___x_3641_; 
v_ref_3639_ = lean_ctor_get(v_ex_3635_, 0);
lean_inc(v_ref_3639_);
v_msg_3640_ = lean_ctor_get(v_ex_3635_, 1);
lean_inc_ref(v_msg_3640_);
lean_dec_ref_known(v_ex_3635_, 2);
v___x_3641_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3639_, v_msg_3640_, v___y_3636_, v___y_3637_);
lean_dec(v_ref_3639_);
return v___x_3641_;
}
else
{
lean_object* v_id_3642_; uint8_t v___y_3644_; uint8_t v___x_3666_; 
v_id_3642_ = lean_ctor_get(v_ex_3635_, 0);
lean_inc(v_id_3642_);
v___x_3666_ = l_Lean_Elab_isAbortExceptionId(v_id_3642_);
if (v___x_3666_ == 0)
{
uint8_t v___x_3667_; 
v___x_3667_ = l_Lean_Exception_isInterrupt(v_ex_3635_);
lean_dec_ref_known(v_ex_3635_, 2);
v___y_3644_ = v___x_3667_;
goto v___jp_3643_;
}
else
{
lean_dec_ref_known(v_ex_3635_, 2);
v___y_3644_ = v___x_3666_;
goto v___jp_3643_;
}
v___jp_3643_:
{
if (v___y_3644_ == 0)
{
lean_object* v___x_3645_; 
v___x_3645_ = l_Lean_InternalExceptionId_getName(v_id_3642_);
lean_dec(v_id_3642_);
if (lean_obj_tag(v___x_3645_) == 0)
{
lean_object* v_a_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
v_a_3646_ = lean_ctor_get(v___x_3645_, 0);
lean_inc(v_a_3646_);
lean_dec_ref_known(v___x_3645_, 1);
v___x_3647_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_3648_ = l_Lean_MessageData_ofName(v_a_3646_);
v___x_3649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3647_);
lean_ctor_set(v___x_3649_, 1, v___x_3648_);
v___x_3650_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v___x_3649_, v___y_3636_, v___y_3637_);
return v___x_3650_;
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3663_; 
v_a_3651_ = lean_ctor_get(v___x_3645_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3645_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3653_ = v___x_3645_;
v_isShared_3654_ = v_isSharedCheck_3663_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3645_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3663_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v_ref_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3661_; 
v_ref_3655_ = lean_ctor_get(v___y_3636_, 7);
v___x_3656_ = lean_io_error_to_string(v_a_3651_);
v___x_3657_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3657_, 0, v___x_3656_);
v___x_3658_ = l_Lean_MessageData_ofFormat(v___x_3657_);
lean_inc(v_ref_3655_);
v___x_3659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3659_, 0, v_ref_3655_);
lean_ctor_set(v___x_3659_, 1, v___x_3658_);
if (v_isShared_3654_ == 0)
{
lean_ctor_set(v___x_3653_, 0, v___x_3659_);
v___x_3661_ = v___x_3653_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v___x_3659_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
}
else
{
lean_object* v___x_3664_; lean_object* v___x_3665_; 
lean_dec(v_id_3642_);
v___x_3664_ = lean_box(0);
v___x_3665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3665_, 0, v___x_3664_);
return v___x_3665_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27___boxed(lean_object* v_ex_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_ex_3668_, v___y_3669_, v___y_3670_);
lean_dec(v___y_3670_);
lean_dec_ref(v___y_3669_);
return v_res_3672_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(lean_object* v_k_3682_){
_start:
{
lean_object* v___x_3683_; uint8_t v___x_3684_; 
v___x_3683_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4));
v___x_3684_ = lean_name_eq(v_k_3682_, v___x_3683_);
if (v___x_3684_ == 0)
{
uint8_t v___x_3685_; 
v___x_3685_ = 1;
return v___x_3685_;
}
else
{
uint8_t v___x_3686_; 
v___x_3686_ = 0;
return v___x_3686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___boxed(lean_object* v_k_3687_){
_start:
{
uint8_t v_res_3688_; lean_object* v_r_3689_; 
v_res_3688_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(v_k_3687_);
lean_dec(v_k_3687_);
v_r_3689_ = lean_box(v_res_3688_);
return v_r_3689_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(lean_object* v_keys_3690_, lean_object* v_i_3691_, lean_object* v_k_3692_){
_start:
{
lean_object* v___x_3693_; uint8_t v___x_3694_; 
v___x_3693_ = lean_array_get_size(v_keys_3690_);
v___x_3694_ = lean_nat_dec_lt(v_i_3691_, v___x_3693_);
if (v___x_3694_ == 0)
{
lean_dec(v_i_3691_);
return v___x_3694_;
}
else
{
lean_object* v_k_x27_3695_; uint8_t v___x_3696_; 
v_k_x27_3695_ = lean_array_fget_borrowed(v_keys_3690_, v_i_3691_);
v___x_3696_ = l_Lean_instBEqExtraModUse_beq(v_k_3692_, v_k_x27_3695_);
if (v___x_3696_ == 0)
{
lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3697_ = lean_unsigned_to_nat(1u);
v___x_3698_ = lean_nat_add(v_i_3691_, v___x_3697_);
lean_dec(v_i_3691_);
v_i_3691_ = v___x_3698_;
goto _start;
}
else
{
lean_dec(v_i_3691_);
return v___x_3694_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg___boxed(lean_object* v_keys_3700_, lean_object* v_i_3701_, lean_object* v_k_3702_){
_start:
{
uint8_t v_res_3703_; lean_object* v_r_3704_; 
v_res_3703_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_3700_, v_i_3701_, v_k_3702_);
lean_dec_ref(v_k_3702_);
lean_dec_ref(v_keys_3700_);
v_r_3704_ = lean_box(v_res_3703_);
return v_r_3704_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(lean_object* v_x_3705_, size_t v_x_3706_, lean_object* v_x_3707_){
_start:
{
if (lean_obj_tag(v_x_3705_) == 0)
{
lean_object* v_es_3708_; lean_object* v___x_3709_; size_t v___x_3710_; size_t v___x_3711_; lean_object* v_j_3712_; lean_object* v___x_3713_; 
v_es_3708_ = lean_ctor_get(v_x_3705_, 0);
v___x_3709_ = lean_box(2);
v___x_3710_ = ((size_t)31ULL);
v___x_3711_ = lean_usize_land(v_x_3706_, v___x_3710_);
v_j_3712_ = lean_usize_to_nat(v___x_3711_);
v___x_3713_ = lean_array_get_borrowed(v___x_3709_, v_es_3708_, v_j_3712_);
lean_dec(v_j_3712_);
switch(lean_obj_tag(v___x_3713_))
{
case 0:
{
lean_object* v_key_3714_; uint8_t v___x_3715_; 
v_key_3714_ = lean_ctor_get(v___x_3713_, 0);
v___x_3715_ = l_Lean_instBEqExtraModUse_beq(v_x_3707_, v_key_3714_);
return v___x_3715_;
}
case 1:
{
lean_object* v_node_3716_; size_t v___x_3717_; size_t v___x_3718_; 
v_node_3716_ = lean_ctor_get(v___x_3713_, 0);
v___x_3717_ = ((size_t)5ULL);
v___x_3718_ = lean_usize_shift_right(v_x_3706_, v___x_3717_);
v_x_3705_ = v_node_3716_;
v_x_3706_ = v___x_3718_;
goto _start;
}
default: 
{
uint8_t v___x_3720_; 
v___x_3720_ = 0;
return v___x_3720_;
}
}
}
else
{
lean_object* v_ks_3721_; lean_object* v___x_3722_; uint8_t v___x_3723_; 
v_ks_3721_ = lean_ctor_get(v_x_3705_, 0);
v___x_3722_ = lean_unsigned_to_nat(0u);
v___x_3723_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_ks_3721_, v___x_3722_, v_x_3707_);
return v___x_3723_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg___boxed(lean_object* v_x_3724_, lean_object* v_x_3725_, lean_object* v_x_3726_){
_start:
{
size_t v_x_54676__boxed_3727_; uint8_t v_res_3728_; lean_object* v_r_3729_; 
v_x_54676__boxed_3727_ = lean_unbox_usize(v_x_3725_);
lean_dec(v_x_3725_);
v_res_3728_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3724_, v_x_54676__boxed_3727_, v_x_3726_);
lean_dec_ref(v_x_3726_);
lean_dec_ref(v_x_3724_);
v_r_3729_ = lean_box(v_res_3728_);
return v_r_3729_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(lean_object* v_x_3730_, lean_object* v_x_3731_){
_start:
{
uint64_t v___x_3732_; size_t v___x_3733_; uint8_t v___x_3734_; 
v___x_3732_ = l_Lean_instHashableExtraModUse_hash(v_x_3731_);
v___x_3733_ = lean_uint64_to_usize(v___x_3732_);
v___x_3734_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3730_, v___x_3733_, v_x_3731_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg___boxed(lean_object* v_x_3735_, lean_object* v_x_3736_){
_start:
{
uint8_t v_res_3737_; lean_object* v_r_3738_; 
v_res_3737_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_3735_, v_x_3736_);
lean_dec_ref(v_x_3736_);
lean_dec_ref(v_x_3735_);
v_r_3738_ = lean_box(v_res_3737_);
return v_r_3738_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0(void){
_start:
{
lean_object* v___x_3739_; double v___x_3740_; 
v___x_3739_ = lean_unsigned_to_nat(0u);
v___x_3740_ = lean_float_of_nat(v___x_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(lean_object* v_cls_3743_, lean_object* v_msg_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v___x_3748_; 
v___x_3748_ = l_Lean_Elab_Command_getRef___redArg(v___y_3745_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v_a_3749_; lean_object* v___x_3750_; lean_object* v_a_3751_; lean_object* v___x_3753_; uint8_t v_isShared_3754_; uint8_t v_isSharedCheck_3799_; 
v_a_3749_ = lean_ctor_get(v___x_3748_, 0);
lean_inc(v_a_3749_);
lean_dec_ref_known(v___x_3748_, 1);
v___x_3750_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_3744_, v___y_3746_);
v_a_3751_ = lean_ctor_get(v___x_3750_, 0);
v_isSharedCheck_3799_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3753_ = v___x_3750_;
v_isShared_3754_ = v_isSharedCheck_3799_;
goto v_resetjp_3752_;
}
else
{
lean_inc(v_a_3751_);
lean_dec(v___x_3750_);
v___x_3753_ = lean_box(0);
v_isShared_3754_ = v_isSharedCheck_3799_;
goto v_resetjp_3752_;
}
v_resetjp_3752_:
{
lean_object* v___x_3755_; lean_object* v_traceState_3756_; lean_object* v_env_3757_; lean_object* v_messages_3758_; lean_object* v_scopes_3759_; lean_object* v_usedQuotCtxts_3760_; lean_object* v_nextMacroScope_3761_; lean_object* v_maxRecDepth_3762_; lean_object* v_ngen_3763_; lean_object* v_auxDeclNGen_3764_; lean_object* v_infoState_3765_; lean_object* v_snapshotTasks_3766_; lean_object* v_prevLinterStates_3767_; lean_object* v_codeQualityEntryTasks_3768_; lean_object* v___x_3770_; uint8_t v_isShared_3771_; uint8_t v_isSharedCheck_3798_; 
v___x_3755_ = lean_st_ref_take(v___y_3746_);
v_traceState_3756_ = lean_ctor_get(v___x_3755_, 9);
v_env_3757_ = lean_ctor_get(v___x_3755_, 0);
v_messages_3758_ = lean_ctor_get(v___x_3755_, 1);
v_scopes_3759_ = lean_ctor_get(v___x_3755_, 2);
v_usedQuotCtxts_3760_ = lean_ctor_get(v___x_3755_, 3);
v_nextMacroScope_3761_ = lean_ctor_get(v___x_3755_, 4);
v_maxRecDepth_3762_ = lean_ctor_get(v___x_3755_, 5);
v_ngen_3763_ = lean_ctor_get(v___x_3755_, 6);
v_auxDeclNGen_3764_ = lean_ctor_get(v___x_3755_, 7);
v_infoState_3765_ = lean_ctor_get(v___x_3755_, 8);
v_snapshotTasks_3766_ = lean_ctor_get(v___x_3755_, 10);
v_prevLinterStates_3767_ = lean_ctor_get(v___x_3755_, 11);
v_codeQualityEntryTasks_3768_ = lean_ctor_get(v___x_3755_, 12);
v_isSharedCheck_3798_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3798_ == 0)
{
v___x_3770_ = v___x_3755_;
v_isShared_3771_ = v_isSharedCheck_3798_;
goto v_resetjp_3769_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3768_);
lean_inc(v_prevLinterStates_3767_);
lean_inc(v_snapshotTasks_3766_);
lean_inc(v_traceState_3756_);
lean_inc(v_infoState_3765_);
lean_inc(v_auxDeclNGen_3764_);
lean_inc(v_ngen_3763_);
lean_inc(v_maxRecDepth_3762_);
lean_inc(v_nextMacroScope_3761_);
lean_inc(v_usedQuotCtxts_3760_);
lean_inc(v_scopes_3759_);
lean_inc(v_messages_3758_);
lean_inc(v_env_3757_);
lean_dec(v___x_3755_);
v___x_3770_ = lean_box(0);
v_isShared_3771_ = v_isSharedCheck_3798_;
goto v_resetjp_3769_;
}
v_resetjp_3769_:
{
uint64_t v_tid_3772_; lean_object* v_traces_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3797_; 
v_tid_3772_ = lean_ctor_get_uint64(v_traceState_3756_, sizeof(void*)*1);
v_traces_3773_ = lean_ctor_get(v_traceState_3756_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v_traceState_3756_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3775_ = v_traceState_3756_;
v_isShared_3776_ = v_isSharedCheck_3797_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_traces_3773_);
lean_dec(v_traceState_3756_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3797_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; double v___x_3779_; uint8_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___x_3777_ = lean_box(0);
v___x_3778_ = lean_box(0);
v___x_3779_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0);
v___x_3780_ = 0;
v___x_3781_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3782_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3782_, 0, v_cls_3743_);
lean_ctor_set(v___x_3782_, 1, v___x_3778_);
lean_ctor_set(v___x_3782_, 2, v___x_3781_);
lean_ctor_set_float(v___x_3782_, sizeof(void*)*3, v___x_3779_);
lean_ctor_set_float(v___x_3782_, sizeof(void*)*3 + 8, v___x_3779_);
lean_ctor_set_uint8(v___x_3782_, sizeof(void*)*3 + 16, v___x_3780_);
v___x_3783_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1));
v___x_3784_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3782_);
lean_ctor_set(v___x_3784_, 1, v_a_3751_);
lean_ctor_set(v___x_3784_, 2, v___x_3783_);
v___x_3785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3785_, 0, v_a_3749_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = l_Lean_PersistentArray_push___redArg(v_traces_3773_, v___x_3785_);
if (v_isShared_3776_ == 0)
{
lean_ctor_set(v___x_3775_, 0, v___x_3786_);
v___x_3788_ = v___x_3775_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v___x_3786_);
lean_ctor_set_uint64(v_reuseFailAlloc_3796_, sizeof(void*)*1, v_tid_3772_);
v___x_3788_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3790_; 
if (v_isShared_3771_ == 0)
{
lean_ctor_set(v___x_3770_, 9, v___x_3788_);
v___x_3790_ = v___x_3770_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_env_3757_);
lean_ctor_set(v_reuseFailAlloc_3795_, 1, v_messages_3758_);
lean_ctor_set(v_reuseFailAlloc_3795_, 2, v_scopes_3759_);
lean_ctor_set(v_reuseFailAlloc_3795_, 3, v_usedQuotCtxts_3760_);
lean_ctor_set(v_reuseFailAlloc_3795_, 4, v_nextMacroScope_3761_);
lean_ctor_set(v_reuseFailAlloc_3795_, 5, v_maxRecDepth_3762_);
lean_ctor_set(v_reuseFailAlloc_3795_, 6, v_ngen_3763_);
lean_ctor_set(v_reuseFailAlloc_3795_, 7, v_auxDeclNGen_3764_);
lean_ctor_set(v_reuseFailAlloc_3795_, 8, v_infoState_3765_);
lean_ctor_set(v_reuseFailAlloc_3795_, 9, v___x_3788_);
lean_ctor_set(v_reuseFailAlloc_3795_, 10, v_snapshotTasks_3766_);
lean_ctor_set(v_reuseFailAlloc_3795_, 11, v_prevLinterStates_3767_);
lean_ctor_set(v_reuseFailAlloc_3795_, 12, v_codeQualityEntryTasks_3768_);
v___x_3790_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
lean_object* v___x_3791_; lean_object* v___x_3793_; 
v___x_3791_ = lean_st_ref_put(v___y_3746_, v___x_3790_);
if (v_isShared_3754_ == 0)
{
lean_ctor_set(v___x_3753_, 0, v___x_3777_);
v___x_3793_ = v___x_3753_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v___x_3777_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3807_; 
lean_dec_ref(v_msg_3744_);
lean_dec(v_cls_3743_);
v_a_3800_ = lean_ctor_get(v___x_3748_, 0);
v_isSharedCheck_3807_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3807_ == 0)
{
v___x_3802_ = v___x_3748_;
v_isShared_3803_ = v_isSharedCheck_3807_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_a_3800_);
lean_dec(v___x_3748_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3807_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
lean_object* v___x_3805_; 
if (v_isShared_3803_ == 0)
{
v___x_3805_ = v___x_3802_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v_a_3800_);
v___x_3805_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
return v___x_3805_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___boxed(lean_object* v_cls_3808_, lean_object* v_msg_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_){
_start:
{
lean_object* v_res_3813_; 
v_res_3813_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3808_, v_msg_3809_, v___y_3810_, v___y_3811_);
lean_dec(v___y_3811_);
lean_dec_ref(v___y_3810_);
return v_res_3813_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0(void){
_start:
{
lean_object* v___x_3814_; 
v___x_3814_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3814_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4(void){
_start:
{
lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3819_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3));
v___x_3820_ = l_Lean_stringToMessageData(v___x_3819_);
return v___x_3820_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6(void){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; 
v___x_3822_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5));
v___x_3823_ = l_Lean_stringToMessageData(v___x_3822_);
return v___x_3823_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7(void){
_start:
{
lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3824_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3825_ = l_Lean_stringToMessageData(v___x_3824_);
return v___x_3825_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9(void){
_start:
{
lean_object* v_cls_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; 
v_cls_3828_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3829_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
v___x_3830_ = l_Lean_Name_append(v___x_3829_, v_cls_3828_);
return v___x_3830_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11(void){
_start:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; 
v___x_3832_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10));
v___x_3833_ = l_Lean_stringToMessageData(v___x_3832_);
return v___x_3833_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13(void){
_start:
{
lean_object* v___x_3835_; lean_object* v___x_3836_; 
v___x_3835_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12));
v___x_3836_ = l_Lean_stringToMessageData(v___x_3835_);
return v___x_3836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(lean_object* v_mod_3841_, uint8_t v_isMeta_3842_, lean_object* v_hint_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_){
_start:
{
lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v_env_3849_; uint8_t v_isExporting_3850_; lean_object* v_entry_3851_; lean_object* v___x_3852_; lean_object* v_env_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___y_3858_; lean_object* v___x_3886_; uint8_t v___x_3887_; 
v___x_3847_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0);
v___x_3848_ = lean_st_ref_get(v___y_3845_);
v_env_3849_ = lean_ctor_get(v___x_3848_, 0);
lean_inc_ref(v_env_3849_);
lean_dec(v___x_3848_);
v_isExporting_3850_ = lean_ctor_get_uint8(v_env_3849_, sizeof(void*)*8);
lean_dec_ref(v_env_3849_);
lean_inc(v_mod_3841_);
v_entry_3851_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3851_, 0, v_mod_3841_);
lean_ctor_set_uint8(v_entry_3851_, sizeof(void*)*1, v_isExporting_3850_);
lean_ctor_set_uint8(v_entry_3851_, sizeof(void*)*1 + 1, v_isMeta_3842_);
v___x_3852_ = lean_st_ref_get(v___y_3845_);
v_env_3853_ = lean_ctor_get(v___x_3852_, 0);
lean_inc_ref(v_env_3853_);
lean_dec(v___x_3852_);
v___x_3854_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3855_ = lean_box(1);
v___x_3856_ = lean_box(0);
v___x_3886_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3847_, v___x_3854_, v_env_3853_, v___x_3855_, v___x_3856_);
v___x_3887_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v___x_3886_, v_entry_3851_);
lean_dec(v___x_3886_);
if (v___x_3887_ == 0)
{
lean_object* v_cls_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___y_3894_; lean_object* v___y_3895_; lean_object* v___y_3899_; lean_object* v___y_3900_; lean_object* v_scopes_3912_; lean_object* v___x_3913_; lean_object* v_opts_3914_; uint8_t v_hasTrace_3915_; 
v_cls_3888_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3889_ = l_Lean_inheritedTraceOptions;
v___x_3890_ = lean_st_ref_get(v___x_3889_);
v___x_3891_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3892_ = lean_st_ref_get(v___y_3845_);
v_scopes_3912_ = lean_ctor_get(v___x_3892_, 2);
lean_inc(v_scopes_3912_);
lean_dec(v___x_3892_);
v___x_3913_ = l_List_head_x21___redArg(v___x_3891_, v_scopes_3912_);
lean_dec(v_scopes_3912_);
v_opts_3914_ = lean_ctor_get(v___x_3913_, 1);
lean_inc_ref(v_opts_3914_);
lean_dec(v___x_3913_);
v_hasTrace_3915_ = lean_ctor_get_uint8(v_opts_3914_, sizeof(void*)*1);
if (v_hasTrace_3915_ == 0)
{
lean_dec_ref(v_opts_3914_);
lean_dec(v___x_3890_);
lean_dec(v_hint_3843_);
lean_dec(v_mod_3841_);
v___y_3858_ = v___y_3845_;
goto v___jp_3857_;
}
else
{
lean_object* v___x_3916_; uint8_t v___x_3917_; 
v___x_3916_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9);
v___x_3917_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3890_, v_opts_3914_, v___x_3916_);
lean_dec_ref(v_opts_3914_);
lean_dec(v___x_3890_);
if (v___x_3917_ == 0)
{
lean_dec(v_hint_3843_);
lean_dec(v_mod_3841_);
v___y_3858_ = v___y_3845_;
goto v___jp_3857_;
}
else
{
lean_object* v___x_3918_; lean_object* v___y_3920_; 
v___x_3918_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11);
if (v_isExporting_3850_ == 0)
{
lean_object* v___x_3927_; 
v___x_3927_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16));
v___y_3920_ = v___x_3927_;
goto v___jp_3919_;
}
else
{
lean_object* v___x_3928_; 
v___x_3928_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17));
v___y_3920_ = v___x_3928_;
goto v___jp_3919_;
}
v___jp_3919_:
{
lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; 
lean_inc_ref(v___y_3920_);
v___x_3921_ = l_Lean_stringToMessageData(v___y_3920_);
v___x_3922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3918_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
v___x_3923_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13);
v___x_3924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3922_);
lean_ctor_set(v___x_3924_, 1, v___x_3923_);
if (v_isMeta_3842_ == 0)
{
lean_object* v___x_3925_; 
v___x_3925_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14));
v___y_3899_ = v___x_3924_;
v___y_3900_ = v___x_3925_;
goto v___jp_3898_;
}
else
{
lean_object* v___x_3926_; 
v___x_3926_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15));
v___y_3899_ = v___x_3924_;
v___y_3900_ = v___x_3926_;
goto v___jp_3898_;
}
}
}
}
v___jp_3893_:
{
lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3896_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___y_3894_);
lean_ctor_set(v___x_3896_, 1, v___y_3895_);
v___x_3897_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3888_, v___x_3896_, v___y_3844_, v___y_3845_);
if (lean_obj_tag(v___x_3897_) == 0)
{
lean_dec_ref_known(v___x_3897_, 1);
v___y_3858_ = v___y_3845_;
goto v___jp_3857_;
}
else
{
lean_dec_ref_known(v_entry_3851_, 1);
return v___x_3897_;
}
}
v___jp_3898_:
{
lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; uint8_t v___x_3907_; 
lean_inc_ref(v___y_3900_);
v___x_3901_ = l_Lean_stringToMessageData(v___y_3900_);
v___x_3902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3902_, 0, v___y_3899_);
lean_ctor_set(v___x_3902_, 1, v___x_3901_);
v___x_3903_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4);
v___x_3904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3902_);
lean_ctor_set(v___x_3904_, 1, v___x_3903_);
v___x_3905_ = l_Lean_MessageData_ofName(v_mod_3841_);
v___x_3906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3904_);
lean_ctor_set(v___x_3906_, 1, v___x_3905_);
v___x_3907_ = l_Lean_Name_isAnonymous(v_hint_3843_);
if (v___x_3907_ == 0)
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3908_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6);
v___x_3909_ = l_Lean_MessageData_ofName(v_hint_3843_);
v___x_3910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3908_);
lean_ctor_set(v___x_3910_, 1, v___x_3909_);
v___y_3894_ = v___x_3906_;
v___y_3895_ = v___x_3910_;
goto v___jp_3893_;
}
else
{
lean_object* v___x_3911_; 
lean_dec(v_hint_3843_);
v___x_3911_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7);
v___y_3894_ = v___x_3906_;
v___y_3895_ = v___x_3911_;
goto v___jp_3893_;
}
}
}
else
{
lean_object* v___x_3929_; lean_object* v___x_3930_; 
lean_dec_ref_known(v_entry_3851_, 1);
lean_dec(v_hint_3843_);
lean_dec(v_mod_3841_);
v___x_3929_ = lean_box(0);
v___x_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3930_, 0, v___x_3929_);
return v___x_3930_;
}
v___jp_3857_:
{
lean_object* v___x_3859_; lean_object* v_toEnvExtension_3860_; lean_object* v_env_3861_; lean_object* v_messages_3862_; lean_object* v_scopes_3863_; lean_object* v_usedQuotCtxts_3864_; lean_object* v_nextMacroScope_3865_; lean_object* v_maxRecDepth_3866_; lean_object* v_ngen_3867_; lean_object* v_auxDeclNGen_3868_; lean_object* v_infoState_3869_; lean_object* v_traceState_3870_; lean_object* v_snapshotTasks_3871_; lean_object* v_prevLinterStates_3872_; lean_object* v_codeQualityEntryTasks_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3885_; 
v___x_3859_ = lean_st_ref_take(v___y_3858_);
v_toEnvExtension_3860_ = lean_ctor_get(v___x_3854_, 0);
v_env_3861_ = lean_ctor_get(v___x_3859_, 0);
v_messages_3862_ = lean_ctor_get(v___x_3859_, 1);
v_scopes_3863_ = lean_ctor_get(v___x_3859_, 2);
v_usedQuotCtxts_3864_ = lean_ctor_get(v___x_3859_, 3);
v_nextMacroScope_3865_ = lean_ctor_get(v___x_3859_, 4);
v_maxRecDepth_3866_ = lean_ctor_get(v___x_3859_, 5);
v_ngen_3867_ = lean_ctor_get(v___x_3859_, 6);
v_auxDeclNGen_3868_ = lean_ctor_get(v___x_3859_, 7);
v_infoState_3869_ = lean_ctor_get(v___x_3859_, 8);
v_traceState_3870_ = lean_ctor_get(v___x_3859_, 9);
v_snapshotTasks_3871_ = lean_ctor_get(v___x_3859_, 10);
v_prevLinterStates_3872_ = lean_ctor_get(v___x_3859_, 11);
v_codeQualityEntryTasks_3873_ = lean_ctor_get(v___x_3859_, 12);
v_isSharedCheck_3885_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3885_ == 0)
{
v___x_3875_ = v___x_3859_;
v_isShared_3876_ = v_isSharedCheck_3885_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3873_);
lean_inc(v_prevLinterStates_3872_);
lean_inc(v_snapshotTasks_3871_);
lean_inc(v_traceState_3870_);
lean_inc(v_infoState_3869_);
lean_inc(v_auxDeclNGen_3868_);
lean_inc(v_ngen_3867_);
lean_inc(v_maxRecDepth_3866_);
lean_inc(v_nextMacroScope_3865_);
lean_inc(v_usedQuotCtxts_3864_);
lean_inc(v_scopes_3863_);
lean_inc(v_messages_3862_);
lean_inc(v_env_3861_);
lean_dec(v___x_3859_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3885_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v_asyncMode_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3881_; 
v_asyncMode_3877_ = lean_ctor_get(v_toEnvExtension_3860_, 2);
v___x_3878_ = lean_box(0);
v___x_3879_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3854_, v_env_3861_, v_entry_3851_, v_asyncMode_3877_, v___x_3856_);
if (v_isShared_3876_ == 0)
{
lean_ctor_set(v___x_3875_, 0, v___x_3879_);
v___x_3881_ = v___x_3875_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3884_; 
v_reuseFailAlloc_3884_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3884_, 0, v___x_3879_);
lean_ctor_set(v_reuseFailAlloc_3884_, 1, v_messages_3862_);
lean_ctor_set(v_reuseFailAlloc_3884_, 2, v_scopes_3863_);
lean_ctor_set(v_reuseFailAlloc_3884_, 3, v_usedQuotCtxts_3864_);
lean_ctor_set(v_reuseFailAlloc_3884_, 4, v_nextMacroScope_3865_);
lean_ctor_set(v_reuseFailAlloc_3884_, 5, v_maxRecDepth_3866_);
lean_ctor_set(v_reuseFailAlloc_3884_, 6, v_ngen_3867_);
lean_ctor_set(v_reuseFailAlloc_3884_, 7, v_auxDeclNGen_3868_);
lean_ctor_set(v_reuseFailAlloc_3884_, 8, v_infoState_3869_);
lean_ctor_set(v_reuseFailAlloc_3884_, 9, v_traceState_3870_);
lean_ctor_set(v_reuseFailAlloc_3884_, 10, v_snapshotTasks_3871_);
lean_ctor_set(v_reuseFailAlloc_3884_, 11, v_prevLinterStates_3872_);
lean_ctor_set(v_reuseFailAlloc_3884_, 12, v_codeQualityEntryTasks_3873_);
v___x_3881_ = v_reuseFailAlloc_3884_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3882_ = lean_st_ref_put(v___y_3858_, v___x_3881_);
v___x_3883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3878_);
return v___x_3883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___boxed(lean_object* v_mod_3931_, lean_object* v_isMeta_3932_, lean_object* v_hint_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
uint8_t v_isMeta_boxed_3937_; lean_object* v_res_3938_; 
v_isMeta_boxed_3937_ = lean_unbox(v_isMeta_3932_);
v_res_3938_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_mod_3931_, v_isMeta_boxed_3937_, v_hint_3933_, v___y_3934_, v___y_3935_);
lean_dec(v___y_3935_);
lean_dec_ref(v___y_3934_);
return v_res_3938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(lean_object* v___x_3939_, lean_object* v_declName_3940_, lean_object* v_as_3941_, size_t v_sz_3942_, size_t v_i_3943_, lean_object* v_b_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_){
_start:
{
uint8_t v___x_3948_; 
v___x_3948_ = lean_usize_dec_lt(v_i_3943_, v_sz_3942_);
if (v___x_3948_ == 0)
{
lean_object* v___x_3949_; 
lean_dec(v_declName_3940_);
v___x_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3949_, 0, v_b_3944_);
return v___x_3949_;
}
else
{
lean_object* v___x_3950_; lean_object* v_modules_3951_; lean_object* v___x_3952_; lean_object* v_a_3953_; lean_object* v___x_3954_; lean_object* v_toImport_3955_; lean_object* v_module_3956_; lean_object* v___x_3957_; uint8_t v___x_3958_; lean_object* v___x_3959_; 
v___x_3950_ = l_Lean_Environment_header(v___x_3939_);
v_modules_3951_ = lean_ctor_get(v___x_3950_, 3);
lean_inc_ref(v_modules_3951_);
lean_dec_ref(v___x_3950_);
v___x_3952_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3953_ = lean_array_uget_borrowed(v_as_3941_, v_i_3943_);
v___x_3954_ = lean_array_get(v___x_3952_, v_modules_3951_, v_a_3953_);
lean_dec_ref(v_modules_3951_);
v_toImport_3955_ = lean_ctor_get(v___x_3954_, 0);
lean_inc_ref(v_toImport_3955_);
lean_dec(v___x_3954_);
v_module_3956_ = lean_ctor_get(v_toImport_3955_, 0);
lean_inc(v_module_3956_);
lean_dec_ref(v_toImport_3955_);
v___x_3957_ = lean_box(0);
v___x_3958_ = 0;
lean_inc(v_declName_3940_);
v___x_3959_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_3956_, v___x_3958_, v_declName_3940_, v___y_3945_, v___y_3946_);
if (lean_obj_tag(v___x_3959_) == 0)
{
size_t v___x_3960_; size_t v___x_3961_; 
lean_dec_ref_known(v___x_3959_, 1);
v___x_3960_ = ((size_t)1ULL);
v___x_3961_ = lean_usize_add(v_i_3943_, v___x_3960_);
v_i_3943_ = v___x_3961_;
v_b_3944_ = v___x_3957_;
goto _start;
}
else
{
lean_dec(v_declName_3940_);
return v___x_3959_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55___boxed(lean_object* v___x_3963_, lean_object* v_declName_3964_, lean_object* v_as_3965_, lean_object* v_sz_3966_, lean_object* v_i_3967_, lean_object* v_b_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
size_t v_sz_boxed_3972_; size_t v_i_boxed_3973_; lean_object* v_res_3974_; 
v_sz_boxed_3972_ = lean_unbox_usize(v_sz_3966_);
lean_dec(v_sz_3966_);
v_i_boxed_3973_ = lean_unbox_usize(v_i_3967_);
lean_dec(v_i_3967_);
v_res_3974_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v___x_3963_, v_declName_3964_, v_as_3965_, v_sz_boxed_3972_, v_i_boxed_3973_, v_b_3968_, v___y_3969_, v___y_3970_);
lean_dec(v___y_3970_);
lean_dec_ref(v___y_3969_);
lean_dec_ref(v_as_3965_);
lean_dec_ref(v___x_3963_);
return v_res_3974_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(lean_object* v_a_3975_, lean_object* v_x_3976_){
_start:
{
if (lean_obj_tag(v_x_3976_) == 0)
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_box(0);
return v___x_3977_;
}
else
{
lean_object* v_key_3978_; lean_object* v_value_3979_; lean_object* v_tail_3980_; uint8_t v___x_3981_; 
v_key_3978_ = lean_ctor_get(v_x_3976_, 0);
v_value_3979_ = lean_ctor_get(v_x_3976_, 1);
v_tail_3980_ = lean_ctor_get(v_x_3976_, 2);
v___x_3981_ = lean_name_eq(v_key_3978_, v_a_3975_);
if (v___x_3981_ == 0)
{
v_x_3976_ = v_tail_3980_;
goto _start;
}
else
{
lean_object* v___x_3983_; 
lean_inc(v_value_3979_);
v___x_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3983_, 0, v_value_3979_);
return v___x_3983_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg___boxed(lean_object* v_a_3984_, lean_object* v_x_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3984_, v_x_3985_);
lean_dec(v_x_3985_);
lean_dec(v_a_3984_);
return v_res_3986_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(lean_object* v_m_3987_, lean_object* v_a_3988_){
_start:
{
lean_object* v_buckets_3989_; lean_object* v___x_3990_; uint64_t v___y_3992_; 
v_buckets_3989_ = lean_ctor_get(v_m_3987_, 1);
v___x_3990_ = lean_array_get_size(v_buckets_3989_);
if (lean_obj_tag(v_a_3988_) == 0)
{
uint64_t v___x_4006_; 
v___x_4006_ = 1723ULL;
v___y_3992_ = v___x_4006_;
goto v___jp_3991_;
}
else
{
uint64_t v_hash_4007_; 
v_hash_4007_ = lean_ctor_get_uint64(v_a_3988_, sizeof(void*)*2);
v___y_3992_ = v_hash_4007_;
goto v___jp_3991_;
}
v___jp_3991_:
{
uint64_t v___x_3993_; uint64_t v___x_3994_; uint64_t v_fold_3995_; uint64_t v___x_3996_; uint64_t v___x_3997_; uint64_t v___x_3998_; size_t v___x_3999_; size_t v___x_4000_; size_t v___x_4001_; size_t v___x_4002_; size_t v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_3993_ = 32ULL;
v___x_3994_ = lean_uint64_shift_right(v___y_3992_, v___x_3993_);
v_fold_3995_ = lean_uint64_xor(v___y_3992_, v___x_3994_);
v___x_3996_ = 16ULL;
v___x_3997_ = lean_uint64_shift_right(v_fold_3995_, v___x_3996_);
v___x_3998_ = lean_uint64_xor(v_fold_3995_, v___x_3997_);
v___x_3999_ = lean_uint64_to_usize(v___x_3998_);
v___x_4000_ = lean_usize_of_nat(v___x_3990_);
v___x_4001_ = ((size_t)1ULL);
v___x_4002_ = lean_usize_sub(v___x_4000_, v___x_4001_);
v___x_4003_ = lean_usize_land(v___x_3999_, v___x_4002_);
v___x_4004_ = lean_array_uget_borrowed(v_buckets_3989_, v___x_4003_);
v___x_4005_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3988_, v___x_4004_);
return v___x_4005_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg___boxed(lean_object* v_m_4008_, lean_object* v_a_4009_){
_start:
{
lean_object* v_res_4010_; 
v_res_4010_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_4008_, v_a_4009_);
lean_dec(v_a_4009_);
lean_dec_ref(v_m_4008_);
return v_res_4010_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0(void){
_start:
{
lean_object* v___x_4011_; 
v___x_4011_ = l_Std_HashMap_instInhabited___redArg();
return v___x_4011_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(lean_object* v_declName_4014_, uint8_t v_isMeta_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_){
_start:
{
lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v_env_4024_; lean_object* v___y_4026_; lean_object* v___x_4039_; 
v___x_4019_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0);
v___x_4020_ = lean_st_ref_get(v___y_4017_);
v_env_4024_ = lean_ctor_get(v___x_4020_, 0);
lean_inc_ref(v_env_4024_);
lean_dec(v___x_4020_);
v___x_4039_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4024_, v_declName_4014_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_dec_ref(v_env_4024_);
lean_dec(v_declName_4014_);
goto v___jp_4021_;
}
else
{
lean_object* v_val_4040_; lean_object* v___x_4041_; lean_object* v_modules_4042_; lean_object* v___x_4043_; uint8_t v___x_4044_; 
v_val_4040_ = lean_ctor_get(v___x_4039_, 0);
lean_inc(v_val_4040_);
lean_dec_ref_known(v___x_4039_, 1);
v___x_4041_ = l_Lean_Environment_header(v_env_4024_);
v_modules_4042_ = lean_ctor_get(v___x_4041_, 3);
lean_inc_ref(v_modules_4042_);
lean_dec_ref(v___x_4041_);
v___x_4043_ = lean_array_get_size(v_modules_4042_);
v___x_4044_ = lean_nat_dec_lt(v_val_4040_, v___x_4043_);
if (v___x_4044_ == 0)
{
lean_dec_ref(v_modules_4042_);
lean_dec(v_val_4040_);
lean_dec_ref(v_env_4024_);
lean_dec(v_declName_4014_);
goto v___jp_4021_;
}
else
{
lean_object* v___x_4045_; lean_object* v___x_4046_; uint8_t v___y_4048_; 
v___x_4045_ = lean_array_fget(v_modules_4042_, v_val_4040_);
lean_dec(v_val_4040_);
lean_dec_ref(v_modules_4042_);
v___x_4046_ = lean_st_ref_get(v___y_4017_);
if (v_isMeta_4015_ == 0)
{
lean_dec(v___x_4046_);
v___y_4048_ = v_isMeta_4015_;
goto v___jp_4047_;
}
else
{
lean_object* v_env_4059_; uint8_t v___x_4060_; 
v_env_4059_ = lean_ctor_get(v___x_4046_, 0);
lean_inc_ref(v_env_4059_);
lean_dec(v___x_4046_);
lean_inc(v_declName_4014_);
v___x_4060_ = l_Lean_isMarkedMeta(v_env_4059_, v_declName_4014_);
if (v___x_4060_ == 0)
{
v___y_4048_ = v_isMeta_4015_;
goto v___jp_4047_;
}
else
{
uint8_t v___x_4061_; 
v___x_4061_ = 0;
v___y_4048_ = v___x_4061_;
goto v___jp_4047_;
}
}
v___jp_4047_:
{
lean_object* v_toImport_4049_; lean_object* v_module_4050_; lean_object* v___x_4051_; 
v_toImport_4049_ = lean_ctor_get(v___x_4045_, 0);
lean_inc_ref(v_toImport_4049_);
lean_dec(v___x_4045_);
v_module_4050_ = lean_ctor_get(v_toImport_4049_, 0);
lean_inc(v_module_4050_);
lean_dec_ref(v_toImport_4049_);
lean_inc(v_declName_4014_);
v___x_4051_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_4050_, v___y_4048_, v_declName_4014_, v___y_4016_, v___y_4017_);
if (lean_obj_tag(v___x_4051_) == 0)
{
lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; 
lean_dec_ref_known(v___x_4051_, 1);
v___x_4052_ = l_Lean_indirectModUseExt;
v___x_4053_ = lean_box(1);
v___x_4054_ = lean_box(0);
lean_inc_ref(v_env_4024_);
v___x_4055_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4019_, v___x_4052_, v_env_4024_, v___x_4053_, v___x_4054_);
v___x_4056_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v___x_4055_, v_declName_4014_);
lean_dec(v___x_4055_);
if (lean_obj_tag(v___x_4056_) == 0)
{
lean_object* v___x_4057_; 
v___x_4057_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1));
v___y_4026_ = v___x_4057_;
goto v___jp_4025_;
}
else
{
lean_object* v_val_4058_; 
v_val_4058_ = lean_ctor_get(v___x_4056_, 0);
lean_inc(v_val_4058_);
lean_dec_ref_known(v___x_4056_, 1);
v___y_4026_ = v_val_4058_;
goto v___jp_4025_;
}
}
else
{
lean_dec_ref(v_env_4024_);
lean_dec(v_declName_4014_);
return v___x_4051_;
}
}
}
}
v___jp_4021_:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4022_ = lean_box(0);
v___x_4023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4023_, 0, v___x_4022_);
return v___x_4023_;
}
v___jp_4025_:
{
lean_object* v___x_4027_; size_t v_sz_4028_; size_t v___x_4029_; lean_object* v___x_4030_; 
v___x_4027_ = lean_box(0);
v_sz_4028_ = lean_array_size(v___y_4026_);
v___x_4029_ = ((size_t)0ULL);
v___x_4030_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v_env_4024_, v_declName_4014_, v___y_4026_, v_sz_4028_, v___x_4029_, v___x_4027_, v___y_4016_, v___y_4017_);
lean_dec_ref(v___y_4026_);
lean_dec_ref(v_env_4024_);
if (lean_obj_tag(v___x_4030_) == 0)
{
lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4037_; 
v_isSharedCheck_4037_ = !lean_is_exclusive(v___x_4030_);
if (v_isSharedCheck_4037_ == 0)
{
lean_object* v_unused_4038_; 
v_unused_4038_ = lean_ctor_get(v___x_4030_, 0);
lean_dec(v_unused_4038_);
v___x_4032_ = v___x_4030_;
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
else
{
lean_dec(v___x_4030_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4037_;
goto v_resetjp_4031_;
}
v_resetjp_4031_:
{
lean_object* v___x_4035_; 
if (v_isShared_4033_ == 0)
{
lean_ctor_set(v___x_4032_, 0, v___x_4027_);
v___x_4035_ = v___x_4032_;
goto v_reusejp_4034_;
}
else
{
lean_object* v_reuseFailAlloc_4036_; 
v_reuseFailAlloc_4036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4036_, 0, v___x_4027_);
v___x_4035_ = v_reuseFailAlloc_4036_;
goto v_reusejp_4034_;
}
v_reusejp_4034_:
{
return v___x_4035_;
}
}
}
else
{
return v___x_4030_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___boxed(lean_object* v_declName_4062_, lean_object* v_isMeta_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_){
_start:
{
uint8_t v_isMeta_boxed_4067_; lean_object* v_res_4068_; 
v_isMeta_boxed_4067_ = lean_unbox(v_isMeta_4063_);
v_res_4068_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_declName_4062_, v_isMeta_boxed_4067_, v___y_4064_, v___y_4065_);
lean_dec(v___y_4065_);
lean_dec_ref(v___y_4064_);
return v_res_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(lean_object* v_currNamespace_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_){
_start:
{
lean_object* v___x_4072_; 
v___x_4072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4072_, 0, v_currNamespace_4069_);
lean_ctor_set(v___x_4072_, 1, v___y_4071_);
return v___x_4072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed(lean_object* v_currNamespace_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(v_currNamespace_4073_, v___y_4074_, v___y_4075_);
lean_dec_ref(v___y_4074_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(lean_object* v_env_4077_, lean_object* v_declName_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_){
_start:
{
uint8_t v___x_4081_; lean_object* v_env_4082_; lean_object* v___x_4083_; uint8_t v___x_4084_; uint8_t v___x_4085_; 
v___x_4081_ = 0;
v_env_4082_ = l_Lean_Environment_setExporting(v_env_4077_, v___x_4081_);
lean_inc(v_declName_4078_);
v___x_4083_ = l_Lean_mkPrivateName(v_env_4082_, v_declName_4078_);
v___x_4084_ = 1;
lean_inc_ref(v_env_4082_);
v___x_4085_ = l_Lean_Environment_contains(v_env_4082_, v___x_4083_, v___x_4084_);
if (v___x_4085_ == 0)
{
lean_object* v___x_4086_; uint8_t v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4086_ = l_Lean_privateToUserName(v_declName_4078_);
v___x_4087_ = l_Lean_Environment_contains(v_env_4082_, v___x_4086_, v___x_4084_);
v___x_4088_ = lean_box(v___x_4087_);
v___x_4089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
lean_ctor_set(v___x_4089_, 1, v___y_4080_);
return v___x_4089_;
}
else
{
lean_object* v___x_4090_; lean_object* v___x_4091_; 
lean_dec_ref(v_env_4082_);
lean_dec(v_declName_4078_);
v___x_4090_ = lean_box(v___x_4085_);
v___x_4091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4090_);
lean_ctor_set(v___x_4091_, 1, v___y_4080_);
return v___x_4091_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed(lean_object* v_env_4092_, lean_object* v_declName_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
lean_object* v_res_4096_; 
v_res_4096_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(v_env_4092_, v_declName_4093_, v___y_4094_, v___y_4095_);
lean_dec_ref(v___y_4094_);
return v_res_4096_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0(void){
_start:
{
lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; 
v___x_4097_ = lean_box(0);
v___x_4098_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4099_, 0, v___x_4098_);
lean_ctor_set(v___x_4099_, 1, v___x_4097_);
return v___x_4099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg(){
_start:
{
lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4101_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0);
v___x_4102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4102_, 0, v___x_4101_);
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___boxed(lean_object* v___y_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(lean_object* v_env_4105_, lean_object* v_opts_4106_, lean_object* v_currNamespace_4107_, lean_object* v_openDecls_4108_, lean_object* v_n_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4112_ = l_Lean_ResolveName_resolveGlobalName(v_env_4105_, v_opts_4106_, v_currNamespace_4107_, v_openDecls_4108_, v_n_4109_);
v___x_4113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4112_);
lean_ctor_set(v___x_4113_, 1, v___y_4111_);
return v___x_4113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed(lean_object* v_env_4114_, lean_object* v_opts_4115_, lean_object* v_currNamespace_4116_, lean_object* v_openDecls_4117_, lean_object* v_n_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_){
_start:
{
lean_object* v_res_4121_; 
v_res_4121_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(v_env_4114_, v_opts_4115_, v_currNamespace_4116_, v_openDecls_4117_, v_n_4118_, v___y_4119_, v___y_4120_);
lean_dec_ref(v___y_4119_);
lean_dec_ref(v_opts_4115_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(lean_object* v_as_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_){
_start:
{
if (lean_obj_tag(v_as_4122_) == 0)
{
lean_object* v___x_4126_; lean_object* v___x_4127_; 
v___x_4126_ = lean_box(0);
v___x_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
return v___x_4127_;
}
else
{
lean_object* v_head_4128_; lean_object* v_tail_4129_; lean_object* v_fst_4130_; lean_object* v_snd_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v_scopes_4136_; lean_object* v___x_4137_; lean_object* v_opts_4138_; uint8_t v_hasTrace_4139_; 
v_head_4128_ = lean_ctor_get(v_as_4122_, 0);
lean_inc(v_head_4128_);
v_tail_4129_ = lean_ctor_get(v_as_4122_, 1);
lean_inc(v_tail_4129_);
lean_dec_ref_known(v_as_4122_, 2);
v_fst_4130_ = lean_ctor_get(v_head_4128_, 0);
lean_inc(v_fst_4130_);
v_snd_4131_ = lean_ctor_get(v_head_4128_, 1);
lean_inc(v_snd_4131_);
lean_dec(v_head_4128_);
v___x_4132_ = l_Lean_inheritedTraceOptions;
v___x_4133_ = lean_st_ref_get(v___x_4132_);
v___x_4134_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4135_ = lean_st_ref_get(v___y_4124_);
v_scopes_4136_ = lean_ctor_get(v___x_4135_, 2);
lean_inc(v_scopes_4136_);
lean_dec(v___x_4135_);
v___x_4137_ = l_List_head_x21___redArg(v___x_4134_, v_scopes_4136_);
lean_dec(v_scopes_4136_);
v_opts_4138_ = lean_ctor_get(v___x_4137_, 1);
lean_inc_ref(v_opts_4138_);
lean_dec(v___x_4137_);
v_hasTrace_4139_ = lean_ctor_get_uint8(v_opts_4138_, sizeof(void*)*1);
if (v_hasTrace_4139_ == 0)
{
lean_dec_ref(v_opts_4138_);
lean_dec(v___x_4133_);
lean_dec(v_snd_4131_);
lean_dec(v_fst_4130_);
v_as_4122_ = v_tail_4129_;
goto _start;
}
else
{
lean_object* v___x_4141_; lean_object* v___x_4142_; uint8_t v___x_4143_; 
v___x_4141_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
lean_inc(v_fst_4130_);
v___x_4142_ = l_Lean_Name_append(v___x_4141_, v_fst_4130_);
v___x_4143_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4133_, v_opts_4138_, v___x_4142_);
lean_dec(v___x_4142_);
lean_dec_ref(v_opts_4138_);
lean_dec(v___x_4133_);
if (v___x_4143_ == 0)
{
lean_dec(v_snd_4131_);
lean_dec(v_fst_4130_);
v_as_4122_ = v_tail_4129_;
goto _start;
}
else
{
lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4145_, 0, v_snd_4131_);
v___x_4146_ = l_Lean_MessageData_ofFormat(v___x_4145_);
v___x_4147_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_fst_4130_, v___x_4146_, v___y_4123_, v___y_4124_);
if (lean_obj_tag(v___x_4147_) == 0)
{
lean_dec_ref_known(v___x_4147_, 1);
v_as_4122_ = v_tail_4129_;
goto _start;
}
else
{
lean_dec(v_tail_4129_);
return v___x_4147_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50___boxed(lean_object* v_as_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_){
_start:
{
lean_object* v_res_4153_; 
v_res_4153_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v_as_4149_, v___y_4150_, v___y_4151_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
return v_res_4153_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(lean_object* v_x_4154_, lean_object* v___y_4155_){
_start:
{
if (lean_obj_tag(v_x_4154_) == 0)
{
lean_object* v_a_4156_; lean_object* v___x_4157_; 
v_a_4156_ = lean_ctor_get(v_x_4154_, 0);
lean_inc(v_a_4156_);
v___x_4157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4157_, 0, v_a_4156_);
lean_ctor_set(v___x_4157_, 1, v___y_4155_);
return v___x_4157_;
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4159_; 
v_a_4158_ = lean_ctor_get(v_x_4154_, 0);
lean_inc(v_a_4158_);
v___x_4159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4159_, 0, v_a_4158_);
lean_ctor_set(v___x_4159_, 1, v___y_4155_);
return v___x_4159_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg___boxed(lean_object* v_x_4160_, lean_object* v___y_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_4160_, v___y_4161_);
lean_dec_ref(v_x_4160_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(lean_object* v_env_4163_, lean_object* v_stx_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
lean_object* v___x_4167_; 
v___x_4167_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_4163_, v_stx_4164_, v___y_4165_, v___y_4166_);
if (lean_obj_tag(v___x_4167_) == 0)
{
lean_object* v_a_4168_; 
v_a_4168_ = lean_ctor_get(v___x_4167_, 0);
lean_inc(v_a_4168_);
if (lean_obj_tag(v_a_4168_) == 0)
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4177_; 
v_a_4169_ = lean_ctor_get(v___x_4167_, 1);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4167_);
if (v_isSharedCheck_4177_ == 0)
{
lean_object* v_unused_4178_; 
v_unused_4178_ = lean_ctor_get(v___x_4167_, 0);
lean_dec(v_unused_4178_);
v___x_4171_ = v___x_4167_;
v_isShared_4172_ = v_isSharedCheck_4177_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4167_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4177_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4173_; lean_object* v___x_4175_; 
v___x_4173_ = lean_box(0);
if (v_isShared_4172_ == 0)
{
lean_ctor_set(v___x_4171_, 0, v___x_4173_);
v___x_4175_ = v___x_4171_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4173_);
lean_ctor_set(v_reuseFailAlloc_4176_, 1, v_a_4169_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
else
{
lean_object* v_val_4179_; lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4207_; 
v_val_4179_ = lean_ctor_get(v_a_4168_, 0);
v_isSharedCheck_4207_ = !lean_is_exclusive(v_a_4168_);
if (v_isSharedCheck_4207_ == 0)
{
v___x_4181_ = v_a_4168_;
v_isShared_4182_ = v_isSharedCheck_4207_;
goto v_resetjp_4180_;
}
else
{
lean_inc(v_val_4179_);
lean_dec(v_a_4168_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4207_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v_snd_4183_; 
v_snd_4183_ = lean_ctor_get(v_val_4179_, 1);
lean_inc(v_snd_4183_);
lean_dec(v_val_4179_);
if (lean_obj_tag(v_snd_4183_) == 0)
{
lean_object* v_a_4184_; lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4193_; 
lean_del_object(v___x_4181_);
v_a_4184_ = lean_ctor_get(v___x_4167_, 1);
lean_inc(v_a_4184_);
lean_dec_ref_known(v___x_4167_, 2);
v_a_4185_ = lean_ctor_get(v_snd_4183_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v_snd_4183_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4187_ = v_snd_4183_;
v_isShared_4188_ = v_isSharedCheck_4193_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_dec(v_snd_4183_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4193_;
goto v_resetjp_4186_;
}
v_resetjp_4186_:
{
lean_object* v___x_4190_; 
if (v_isShared_4188_ == 0)
{
v___x_4190_ = v___x_4187_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
lean_object* v___x_4191_; 
v___x_4191_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4190_, v_a_4184_);
lean_dec_ref(v___x_4190_);
return v___x_4191_;
}
}
}
else
{
lean_object* v_a_4194_; lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4206_; 
v_a_4194_ = lean_ctor_get(v___x_4167_, 1);
lean_inc(v_a_4194_);
lean_dec_ref_known(v___x_4167_, 2);
v_a_4195_ = lean_ctor_get(v_snd_4183_, 0);
v_isSharedCheck_4206_ = !lean_is_exclusive(v_snd_4183_);
if (v_isSharedCheck_4206_ == 0)
{
v___x_4197_ = v_snd_4183_;
v_isShared_4198_ = v_isSharedCheck_4206_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v_snd_4183_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4206_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
lean_object* v___x_4200_; 
if (v_isShared_4182_ == 0)
{
lean_ctor_set(v___x_4181_, 0, v_a_4195_);
v___x_4200_ = v___x_4181_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4205_; 
v_reuseFailAlloc_4205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4205_, 0, v_a_4195_);
v___x_4200_ = v_reuseFailAlloc_4205_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
lean_object* v___x_4202_; 
if (v_isShared_4198_ == 0)
{
lean_ctor_set(v___x_4197_, 0, v___x_4200_);
v___x_4202_ = v___x_4197_;
goto v_reusejp_4201_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v___x_4200_);
v___x_4202_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4201_;
}
v_reusejp_4201_:
{
lean_object* v___x_4203_; 
v___x_4203_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4202_, v_a_4194_);
lean_dec_ref(v___x_4202_);
return v___x_4203_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4208_; lean_object* v_a_4209_; lean_object* v___x_4211_; uint8_t v_isShared_4212_; uint8_t v_isSharedCheck_4216_; 
v_a_4208_ = lean_ctor_get(v___x_4167_, 0);
v_a_4209_ = lean_ctor_get(v___x_4167_, 1);
v_isSharedCheck_4216_ = !lean_is_exclusive(v___x_4167_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4211_ = v___x_4167_;
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
else
{
lean_inc(v_a_4209_);
lean_inc(v_a_4208_);
lean_dec(v___x_4167_);
v___x_4211_ = lean_box(0);
v_isShared_4212_ = v_isSharedCheck_4216_;
goto v_resetjp_4210_;
}
v_resetjp_4210_:
{
lean_object* v___x_4214_; 
if (v_isShared_4212_ == 0)
{
v___x_4214_ = v___x_4211_;
goto v_reusejp_4213_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_a_4208_);
lean_ctor_set(v_reuseFailAlloc_4215_, 1, v_a_4209_);
v___x_4214_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4213_;
}
v_reusejp_4213_:
{
return v___x_4214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed(lean_object* v_env_4217_, lean_object* v_stx_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_){
_start:
{
lean_object* v_res_4221_; 
v_res_4221_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(v_env_4217_, v_stx_4218_, v___y_4219_, v___y_4220_);
lean_dec_ref(v___y_4219_);
return v_res_4221_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3(void){
_start:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4227_ = l_Lean_maxRecDepthErrorMessage;
v___x_4228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4228_, 0, v___x_4227_);
return v___x_4228_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4(void){
_start:
{
lean_object* v___x_4229_; lean_object* v___x_4230_; 
v___x_4229_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3);
v___x_4230_ = l_Lean_MessageData_ofFormat(v___x_4229_);
return v___x_4230_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5(void){
_start:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4231_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4);
v___x_4232_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2));
v___x_4233_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4233_, 0, v___x_4232_);
lean_ctor_set(v___x_4233_, 1, v___x_4231_);
return v___x_4233_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(lean_object* v_ref_4234_){
_start:
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; 
v___x_4236_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5);
v___x_4237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4237_, 0, v_ref_4234_);
lean_ctor_set(v___x_4237_, 1, v___x_4236_);
v___x_4238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4237_);
return v___x_4238_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___boxed(lean_object* v_ref_4239_, lean_object* v___y_4240_){
_start:
{
lean_object* v_res_4241_; 
v_res_4241_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_4239_);
return v_res_4241_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(lean_object* v_as_x27_4242_, lean_object* v_b_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_){
_start:
{
if (lean_obj_tag(v_as_x27_4242_) == 0)
{
lean_object* v___x_4247_; 
v___x_4247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4247_, 0, v_b_4243_);
return v___x_4247_;
}
else
{
lean_object* v_head_4248_; lean_object* v_tail_4249_; lean_object* v___x_4250_; uint8_t v___x_4251_; lean_object* v___x_4252_; 
v_head_4248_ = lean_ctor_get(v_as_x27_4242_, 0);
v_tail_4249_ = lean_ctor_get(v_as_x27_4242_, 1);
v___x_4250_ = lean_box(0);
v___x_4251_ = 1;
lean_inc(v_head_4248_);
v___x_4252_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_head_4248_, v___x_4251_, v___y_4244_, v___y_4245_);
if (lean_obj_tag(v___x_4252_) == 0)
{
lean_dec_ref_known(v___x_4252_, 1);
v_as_x27_4242_ = v_tail_4249_;
v_b_4243_ = v___x_4250_;
goto _start;
}
else
{
return v___x_4252_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg___boxed(lean_object* v_as_x27_4254_, lean_object* v_b_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v_res_4259_; 
v_res_4259_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_4254_, v_b_4255_, v___y_4256_, v___y_4257_);
lean_dec(v___y_4257_);
lean_dec_ref(v___y_4256_);
lean_dec(v_as_x27_4254_);
return v_res_4259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(lean_object* v_env_4260_, lean_object* v_currNamespace_4261_, lean_object* v_openDecls_4262_, lean_object* v_n_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_){
_start:
{
lean_object* v___x_4266_; lean_object* v___x_4267_; 
v___x_4266_ = l_Lean_ResolveName_resolveNamespace(v_env_4260_, v_currNamespace_4261_, v_openDecls_4262_, v_n_4263_);
v___x_4267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4267_, 0, v___x_4266_);
lean_ctor_set(v___x_4267_, 1, v___y_4265_);
return v___x_4267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed(lean_object* v_env_4268_, lean_object* v_currNamespace_4269_, lean_object* v_openDecls_4270_, lean_object* v_n_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_){
_start:
{
lean_object* v_res_4274_; 
v_res_4274_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(v_env_4268_, v_currNamespace_4269_, v_openDecls_4270_, v_n_4271_, v___y_4272_, v___y_4273_);
lean_dec_ref(v___y_4272_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(lean_object* v_x_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v___x_4280_; lean_object* v_env_4281_; lean_object* v___f_4282_; lean_object* v___f_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v_scopes_4286_; lean_object* v___x_4287_; lean_object* v_opts_4288_; lean_object* v___x_4289_; 
v___x_4280_ = lean_st_ref_get(v___y_4278_);
v_env_4281_ = lean_ctor_get(v___x_4280_, 0);
lean_inc_ref_n(v_env_4281_, 3);
lean_dec(v___x_4280_);
v___f_4282_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_4282_, 0, v_env_4281_);
v___f_4283_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_4283_, 0, v_env_4281_);
v___x_4284_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4285_ = lean_st_ref_get(v___y_4278_);
v_scopes_4286_ = lean_ctor_get(v___x_4285_, 2);
lean_inc(v_scopes_4286_);
lean_dec(v___x_4285_);
v___x_4287_ = l_List_head_x21___redArg(v___x_4284_, v_scopes_4286_);
lean_dec(v_scopes_4286_);
v_opts_4288_ = lean_ctor_get(v___x_4287_, 1);
lean_inc_ref(v_opts_4288_);
lean_dec(v___x_4287_);
v___x_4289_ = l_Lean_Elab_Command_getScope___redArg(v___y_4278_);
if (lean_obj_tag(v___x_4289_) == 0)
{
lean_object* v_a_4290_; lean_object* v_currNamespace_4291_; lean_object* v___f_4292_; lean_object* v___x_4293_; 
v_a_4290_ = lean_ctor_get(v___x_4289_, 0);
lean_inc(v_a_4290_);
lean_dec_ref_known(v___x_4289_, 1);
v_currNamespace_4291_ = lean_ctor_get(v_a_4290_, 2);
lean_inc_n(v_currNamespace_4291_, 2);
lean_dec(v_a_4290_);
v___f_4292_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4292_, 0, v_currNamespace_4291_);
v___x_4293_ = l_Lean_Elab_Command_getScope___redArg(v___y_4278_);
if (lean_obj_tag(v___x_4293_) == 0)
{
lean_object* v_a_4294_; lean_object* v_openDecls_4295_; lean_object* v___f_4296_; lean_object* v___f_4297_; lean_object* v_methods_4298_; lean_object* v___x_4299_; 
v_a_4294_ = lean_ctor_get(v___x_4293_, 0);
lean_inc(v_a_4294_);
lean_dec_ref_known(v___x_4293_, 1);
v_openDecls_4295_ = lean_ctor_get(v_a_4294_, 3);
lean_inc_n(v_openDecls_4295_, 2);
lean_dec(v_a_4294_);
lean_inc(v_currNamespace_4291_);
lean_inc_ref(v_env_4281_);
v___f_4296_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_4296_, 0, v_env_4281_);
lean_closure_set(v___f_4296_, 1, v_currNamespace_4291_);
lean_closure_set(v___f_4296_, 2, v_openDecls_4295_);
v___f_4297_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_4297_, 0, v_env_4281_);
lean_closure_set(v___f_4297_, 1, v_opts_4288_);
lean_closure_set(v___f_4297_, 2, v_currNamespace_4291_);
lean_closure_set(v___f_4297_, 3, v_openDecls_4295_);
v_methods_4298_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_4298_, 0, v___f_4283_);
lean_ctor_set(v_methods_4298_, 1, v___f_4292_);
lean_ctor_set(v_methods_4298_, 2, v___f_4282_);
lean_ctor_set(v_methods_4298_, 3, v___f_4296_);
lean_ctor_set(v_methods_4298_, 4, v___f_4297_);
v___x_4299_ = l_Lean_Elab_Command_getRef___redArg(v___y_4277_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_a_4300_; lean_object* v___x_4301_; 
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v___x_4299_, 1);
v___x_4301_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_4277_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_object* v_a_4302_; lean_object* v_currRecDepth_4303_; lean_object* v_quotContext_x3f_4304_; lean_object* v_a_4306_; 
v_a_4302_ = lean_ctor_get(v___x_4301_, 0);
lean_inc(v_a_4302_);
lean_dec_ref_known(v___x_4301_, 1);
v_currRecDepth_4303_ = lean_ctor_get(v___y_4277_, 2);
v_quotContext_x3f_4304_ = lean_ctor_get(v___y_4277_, 5);
if (lean_obj_tag(v_quotContext_x3f_4304_) == 0)
{
lean_object* v___x_4380_; lean_object* v_a_4381_; 
v___x_4380_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_4278_);
v_a_4381_ = lean_ctor_get(v___x_4380_, 0);
lean_inc(v_a_4381_);
lean_dec_ref(v___x_4380_);
v_a_4306_ = v_a_4381_;
goto v___jp_4305_;
}
else
{
lean_object* v_val_4382_; 
v_val_4382_ = lean_ctor_get(v_quotContext_x3f_4304_, 0);
lean_inc(v_val_4382_);
v_a_4306_ = v_val_4382_;
goto v___jp_4305_;
}
v___jp_4305_:
{
lean_object* v___x_4307_; lean_object* v_maxRecDepth_4308_; lean_object* v___x_4309_; lean_object* v_nextMacroScope_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4307_ = lean_st_ref_get(v___y_4278_);
v_maxRecDepth_4308_ = lean_ctor_get(v___x_4307_, 5);
lean_inc(v_maxRecDepth_4308_);
lean_dec(v___x_4307_);
v___x_4309_ = lean_st_ref_get(v___y_4278_);
v_nextMacroScope_4310_ = lean_ctor_get(v___x_4309_, 4);
lean_inc(v_nextMacroScope_4310_);
lean_dec(v___x_4309_);
lean_inc(v_currRecDepth_4303_);
v___x_4311_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4311_, 0, v_methods_4298_);
lean_ctor_set(v___x_4311_, 1, v_a_4306_);
lean_ctor_set(v___x_4311_, 2, v_a_4302_);
lean_ctor_set(v___x_4311_, 3, v_currRecDepth_4303_);
lean_ctor_set(v___x_4311_, 4, v_maxRecDepth_4308_);
lean_ctor_set(v___x_4311_, 5, v_a_4300_);
v___x_4312_ = lean_box(0);
v___x_4313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4313_, 0, v_nextMacroScope_4310_);
lean_ctor_set(v___x_4313_, 1, v___x_4312_);
lean_ctor_set(v___x_4313_, 2, v___x_4312_);
v___x_4314_ = lean_apply_2(v_x_4276_, v___x_4311_, v___x_4313_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v_a_4316_; lean_object* v_macroScope_4317_; lean_object* v_traceMsgs_4318_; lean_object* v_expandedMacroDecls_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 1);
lean_inc(v_a_4315_);
v_a_4316_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4316_);
lean_dec_ref_known(v___x_4314_, 2);
v_macroScope_4317_ = lean_ctor_get(v_a_4315_, 0);
lean_inc(v_macroScope_4317_);
v_traceMsgs_4318_ = lean_ctor_get(v_a_4315_, 1);
lean_inc(v_traceMsgs_4318_);
v_expandedMacroDecls_4319_ = lean_ctor_get(v_a_4315_, 2);
lean_inc(v_expandedMacroDecls_4319_);
lean_dec(v_a_4315_);
v___x_4320_ = lean_box(0);
v___x_4321_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_expandedMacroDecls_4319_, v___x_4320_, v___y_4277_, v___y_4278_);
lean_dec(v_expandedMacroDecls_4319_);
if (lean_obj_tag(v___x_4321_) == 0)
{
lean_object* v___x_4322_; lean_object* v_env_4323_; lean_object* v_messages_4324_; lean_object* v_scopes_4325_; lean_object* v_usedQuotCtxts_4326_; lean_object* v_maxRecDepth_4327_; lean_object* v_ngen_4328_; lean_object* v_auxDeclNGen_4329_; lean_object* v_infoState_4330_; lean_object* v_traceState_4331_; lean_object* v_snapshotTasks_4332_; lean_object* v_prevLinterStates_4333_; lean_object* v_codeQualityEntryTasks_4334_; lean_object* v___x_4336_; uint8_t v_isShared_4337_; uint8_t v_isSharedCheck_4360_; 
lean_dec_ref_known(v___x_4321_, 1);
v___x_4322_ = lean_st_ref_take(v___y_4278_);
v_env_4323_ = lean_ctor_get(v___x_4322_, 0);
v_messages_4324_ = lean_ctor_get(v___x_4322_, 1);
v_scopes_4325_ = lean_ctor_get(v___x_4322_, 2);
v_usedQuotCtxts_4326_ = lean_ctor_get(v___x_4322_, 3);
v_maxRecDepth_4327_ = lean_ctor_get(v___x_4322_, 5);
v_ngen_4328_ = lean_ctor_get(v___x_4322_, 6);
v_auxDeclNGen_4329_ = lean_ctor_get(v___x_4322_, 7);
v_infoState_4330_ = lean_ctor_get(v___x_4322_, 8);
v_traceState_4331_ = lean_ctor_get(v___x_4322_, 9);
v_snapshotTasks_4332_ = lean_ctor_get(v___x_4322_, 10);
v_prevLinterStates_4333_ = lean_ctor_get(v___x_4322_, 11);
v_codeQualityEntryTasks_4334_ = lean_ctor_get(v___x_4322_, 12);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4322_);
if (v_isSharedCheck_4360_ == 0)
{
lean_object* v_unused_4361_; 
v_unused_4361_ = lean_ctor_get(v___x_4322_, 4);
lean_dec(v_unused_4361_);
v___x_4336_ = v___x_4322_;
v_isShared_4337_ = v_isSharedCheck_4360_;
goto v_resetjp_4335_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4334_);
lean_inc(v_prevLinterStates_4333_);
lean_inc(v_snapshotTasks_4332_);
lean_inc(v_traceState_4331_);
lean_inc(v_infoState_4330_);
lean_inc(v_auxDeclNGen_4329_);
lean_inc(v_ngen_4328_);
lean_inc(v_maxRecDepth_4327_);
lean_inc(v_usedQuotCtxts_4326_);
lean_inc(v_scopes_4325_);
lean_inc(v_messages_4324_);
lean_inc(v_env_4323_);
lean_dec(v___x_4322_);
v___x_4336_ = lean_box(0);
v_isShared_4337_ = v_isSharedCheck_4360_;
goto v_resetjp_4335_;
}
v_resetjp_4335_:
{
lean_object* v___x_4339_; 
if (v_isShared_4337_ == 0)
{
lean_ctor_set(v___x_4336_, 4, v_macroScope_4317_);
v___x_4339_ = v___x_4336_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_env_4323_);
lean_ctor_set(v_reuseFailAlloc_4359_, 1, v_messages_4324_);
lean_ctor_set(v_reuseFailAlloc_4359_, 2, v_scopes_4325_);
lean_ctor_set(v_reuseFailAlloc_4359_, 3, v_usedQuotCtxts_4326_);
lean_ctor_set(v_reuseFailAlloc_4359_, 4, v_macroScope_4317_);
lean_ctor_set(v_reuseFailAlloc_4359_, 5, v_maxRecDepth_4327_);
lean_ctor_set(v_reuseFailAlloc_4359_, 6, v_ngen_4328_);
lean_ctor_set(v_reuseFailAlloc_4359_, 7, v_auxDeclNGen_4329_);
lean_ctor_set(v_reuseFailAlloc_4359_, 8, v_infoState_4330_);
lean_ctor_set(v_reuseFailAlloc_4359_, 9, v_traceState_4331_);
lean_ctor_set(v_reuseFailAlloc_4359_, 10, v_snapshotTasks_4332_);
lean_ctor_set(v_reuseFailAlloc_4359_, 11, v_prevLinterStates_4333_);
lean_ctor_set(v_reuseFailAlloc_4359_, 12, v_codeQualityEntryTasks_4334_);
v___x_4339_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v___x_4340_ = lean_st_ref_put(v___y_4278_, v___x_4339_);
v___x_4341_ = l_List_reverse___redArg(v_traceMsgs_4318_);
v___x_4342_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v___x_4341_, v___y_4277_, v___y_4278_);
if (lean_obj_tag(v___x_4342_) == 0)
{
lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4349_; 
v_isSharedCheck_4349_ = !lean_is_exclusive(v___x_4342_);
if (v_isSharedCheck_4349_ == 0)
{
lean_object* v_unused_4350_; 
v_unused_4350_ = lean_ctor_get(v___x_4342_, 0);
lean_dec(v_unused_4350_);
v___x_4344_ = v___x_4342_;
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
else
{
lean_dec(v___x_4342_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4349_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v___x_4347_; 
if (v_isShared_4345_ == 0)
{
lean_ctor_set(v___x_4344_, 0, v_a_4316_);
v___x_4347_ = v___x_4344_;
goto v_reusejp_4346_;
}
else
{
lean_object* v_reuseFailAlloc_4348_; 
v_reuseFailAlloc_4348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4348_, 0, v_a_4316_);
v___x_4347_ = v_reuseFailAlloc_4348_;
goto v_reusejp_4346_;
}
v_reusejp_4346_:
{
return v___x_4347_;
}
}
}
else
{
lean_object* v_a_4351_; lean_object* v___x_4353_; uint8_t v_isShared_4354_; uint8_t v_isSharedCheck_4358_; 
lean_dec(v_a_4316_);
v_a_4351_ = lean_ctor_get(v___x_4342_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v___x_4342_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4353_ = v___x_4342_;
v_isShared_4354_ = v_isSharedCheck_4358_;
goto v_resetjp_4352_;
}
else
{
lean_inc(v_a_4351_);
lean_dec(v___x_4342_);
v___x_4353_ = lean_box(0);
v_isShared_4354_ = v_isSharedCheck_4358_;
goto v_resetjp_4352_;
}
v_resetjp_4352_:
{
lean_object* v___x_4356_; 
if (v_isShared_4354_ == 0)
{
v___x_4356_ = v___x_4353_;
goto v_reusejp_4355_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v_a_4351_);
v___x_4356_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4355_;
}
v_reusejp_4355_:
{
return v___x_4356_;
}
}
}
}
}
}
else
{
lean_object* v_a_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4369_; 
lean_dec(v_traceMsgs_4318_);
lean_dec(v_macroScope_4317_);
lean_dec(v_a_4316_);
v_a_4362_ = lean_ctor_get(v___x_4321_, 0);
v_isSharedCheck_4369_ = !lean_is_exclusive(v___x_4321_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4364_ = v___x_4321_;
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
else
{
lean_inc(v_a_4362_);
lean_dec(v___x_4321_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4369_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v___x_4367_; 
if (v_isShared_4365_ == 0)
{
v___x_4367_ = v___x_4364_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4368_; 
v_reuseFailAlloc_4368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4368_, 0, v_a_4362_);
v___x_4367_ = v_reuseFailAlloc_4368_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
return v___x_4367_;
}
}
}
}
else
{
lean_object* v_a_4370_; 
v_a_4370_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4370_);
lean_dec_ref_known(v___x_4314_, 2);
if (lean_obj_tag(v_a_4370_) == 0)
{
lean_object* v_a_4371_; lean_object* v_a_4372_; lean_object* v___x_4373_; uint8_t v___x_4374_; 
v_a_4371_ = lean_ctor_get(v_a_4370_, 0);
lean_inc(v_a_4371_);
v_a_4372_ = lean_ctor_get(v_a_4370_, 1);
lean_inc_ref(v_a_4372_);
lean_dec_ref_known(v_a_4370_, 2);
v___x_4373_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0));
v___x_4374_ = lean_string_dec_eq(v_a_4372_, v___x_4373_);
if (v___x_4374_ == 0)
{
lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; 
v___x_4375_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4375_, 0, v_a_4372_);
v___x_4376_ = l_Lean_MessageData_ofFormat(v___x_4375_);
v___x_4377_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4371_, v___x_4376_, v___y_4277_, v___y_4278_);
lean_dec(v_a_4371_);
return v___x_4377_;
}
else
{
lean_object* v___x_4378_; 
lean_dec_ref(v_a_4372_);
v___x_4378_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_a_4371_);
return v___x_4378_;
}
}
else
{
lean_object* v___x_4379_; 
v___x_4379_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_4379_;
}
}
}
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_dec(v_a_4300_);
lean_dec_ref_known(v_methods_4298_, 5);
lean_dec_ref(v_x_4276_);
v_a_4383_ = lean_ctor_get(v___x_4301_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4301_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___x_4301_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4301_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_a_4383_);
v___x_4388_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
return v___x_4388_;
}
}
}
}
else
{
lean_object* v_a_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4398_; 
lean_dec_ref_known(v_methods_4298_, 5);
lean_dec_ref(v_x_4276_);
v_a_4391_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4393_ = v___x_4299_;
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_a_4391_);
lean_dec(v___x_4299_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4396_; 
if (v_isShared_4394_ == 0)
{
v___x_4396_ = v___x_4393_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v_a_4391_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
return v___x_4396_;
}
}
}
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_dec_ref(v___f_4292_);
lean_dec(v_currNamespace_4291_);
lean_dec_ref(v_opts_4288_);
lean_dec_ref(v___f_4283_);
lean_dec_ref(v___f_4282_);
lean_dec_ref(v_env_4281_);
lean_dec_ref(v_x_4276_);
v_a_4399_ = lean_ctor_get(v___x_4293_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4293_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4293_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4293_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
else
{
lean_object* v_a_4407_; lean_object* v___x_4409_; uint8_t v_isShared_4410_; uint8_t v_isSharedCheck_4414_; 
lean_dec_ref(v_opts_4288_);
lean_dec_ref(v___f_4283_);
lean_dec_ref(v___f_4282_);
lean_dec_ref(v_env_4281_);
lean_dec_ref(v_x_4276_);
v_a_4407_ = lean_ctor_get(v___x_4289_, 0);
v_isSharedCheck_4414_ = !lean_is_exclusive(v___x_4289_);
if (v_isSharedCheck_4414_ == 0)
{
v___x_4409_ = v___x_4289_;
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
else
{
lean_inc(v_a_4407_);
lean_dec(v___x_4289_);
v___x_4409_ = lean_box(0);
v_isShared_4410_ = v_isSharedCheck_4414_;
goto v_resetjp_4408_;
}
v_resetjp_4408_:
{
lean_object* v___x_4412_; 
if (v_isShared_4410_ == 0)
{
v___x_4412_ = v___x_4409_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4413_; 
v_reuseFailAlloc_4413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4413_, 0, v_a_4407_);
v___x_4412_ = v_reuseFailAlloc_4413_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
return v___x_4412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___boxed(lean_object* v_x_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_){
_start:
{
lean_object* v_res_4419_; 
v_res_4419_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_4415_, v___y_4416_, v___y_4417_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
return v_res_4419_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4421_; lean_object* v___x_4422_; 
v___x_4421_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0));
v___x_4422_ = l_Lean_stringToMessageData(v___x_4421_);
return v___x_4422_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4424_; lean_object* v___x_4425_; 
v___x_4424_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2));
v___x_4425_ = l_Lean_stringToMessageData(v___x_4424_);
return v___x_4425_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5(void){
_start:
{
lean_object* v___x_4427_; lean_object* v___x_4428_; 
v___x_4427_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4));
v___x_4428_ = l_Lean_stringToMessageData(v___x_4427_);
return v___x_4428_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7(void){
_start:
{
lean_object* v___x_4430_; lean_object* v___x_4431_; 
v___x_4430_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6));
v___x_4431_ = l_Lean_stringToMessageData(v___x_4430_);
return v___x_4431_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9(void){
_start:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; 
v___x_4433_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8));
v___x_4434_ = l_Lean_stringToMessageData(v___x_4433_);
return v___x_4434_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14(void){
_start:
{
lean_object* v___x_4443_; lean_object* v___x_4444_; 
v___x_4443_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13));
v___x_4444_ = l_Lean_stringToMessageData(v___x_4443_);
return v___x_4444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(lean_object* v___x_4445_, lean_object* v_attrInstance_4446_, lean_object* v___f_4447_, lean_object* v___x_4448_, lean_object* v___x_4449_, lean_object* v___x_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_){
_start:
{
lean_object* v___x_4454_; 
v___x_4454_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4445_, v___y_4451_, v___y_4452_);
if (lean_obj_tag(v___x_4454_) == 0)
{
lean_object* v_a_4455_; lean_object* v___x_4456_; lean_object* v_attr_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; 
v_a_4455_ = lean_ctor_get(v___x_4454_, 0);
lean_inc(v_a_4455_);
lean_dec_ref_known(v___x_4454_, 1);
v___x_4456_ = lean_unsigned_to_nat(1u);
v_attr_4457_ = l_Lean_Syntax_getArg(v_attrInstance_4446_, v___x_4456_);
v___x_4458_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_4458_, 0, v_attr_4457_);
lean_closure_set(v___x_4458_, 1, v___f_4447_);
v___x_4459_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4458_, v___y_4451_, v___y_4452_);
if (lean_obj_tag(v___x_4459_) == 0)
{
lean_object* v_a_4460_; lean_object* v___x_4462_; uint8_t v_isShared_4463_; uint8_t v_isSharedCheck_4565_; 
v_a_4460_ = lean_ctor_get(v___x_4459_, 0);
v_isSharedCheck_4565_ = !lean_is_exclusive(v___x_4459_);
if (v_isSharedCheck_4565_ == 0)
{
v___x_4462_ = v___x_4459_;
v_isShared_4463_ = v_isSharedCheck_4565_;
goto v_resetjp_4461_;
}
else
{
lean_inc(v_a_4460_);
lean_dec(v___x_4459_);
v___x_4462_ = lean_box(0);
v_isShared_4463_ = v_isSharedCheck_4565_;
goto v_resetjp_4461_;
}
v_resetjp_4461_:
{
lean_object* v___y_4465_; lean_object* v___y_4472_; uint8_t v___y_4473_; lean_object* v___y_4474_; lean_object* v___y_4475_; lean_object* v___y_4476_; lean_object* v_attrName_4487_; lean_object* v___y_4488_; lean_object* v___y_4489_; lean_object* v___x_4546_; lean_object* v___x_4547_; uint8_t v___x_4548_; 
lean_inc(v_a_4460_);
v___x_4546_ = l_Lean_Syntax_getKind(v_a_4460_);
v___x_4547_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12));
v___x_4548_ = lean_name_eq(v___x_4546_, v___x_4547_);
if (v___x_4548_ == 0)
{
if (lean_obj_tag(v___x_4546_) == 1)
{
lean_object* v_str_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; 
v_str_4549_ = lean_ctor_get(v___x_4546_, 1);
lean_inc_ref(v_str_4549_);
lean_dec_ref_known(v___x_4546_, 2);
v___x_4550_ = lean_box(0);
v___x_4551_ = l_Lean_Name_str___override(v___x_4550_, v_str_4549_);
v_attrName_4487_ = v___x_4551_;
v___y_4488_ = v___y_4451_;
v___y_4489_ = v___y_4452_;
goto v___jp_4486_;
}
else
{
lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v_a_4554_; lean_object* v___x_4556_; uint8_t v_isShared_4557_; uint8_t v_isSharedCheck_4561_; 
lean_dec(v___x_4546_);
lean_del_object(v___x_4462_);
lean_dec(v_a_4455_);
lean_dec(v___x_4448_);
v___x_4552_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14);
v___x_4553_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4460_, v___x_4552_, v___y_4451_, v___y_4452_);
lean_dec(v_a_4460_);
v_a_4554_ = lean_ctor_get(v___x_4553_, 0);
v_isSharedCheck_4561_ = !lean_is_exclusive(v___x_4553_);
if (v_isSharedCheck_4561_ == 0)
{
v___x_4556_ = v___x_4553_;
v_isShared_4557_ = v_isSharedCheck_4561_;
goto v_resetjp_4555_;
}
else
{
lean_inc(v_a_4554_);
lean_dec(v___x_4553_);
v___x_4556_ = lean_box(0);
v_isShared_4557_ = v_isSharedCheck_4561_;
goto v_resetjp_4555_;
}
v_resetjp_4555_:
{
lean_object* v___x_4559_; 
if (v_isShared_4557_ == 0)
{
v___x_4559_ = v___x_4556_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v_a_4554_);
v___x_4559_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
return v___x_4559_;
}
}
}
}
else
{
lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
lean_dec(v___x_4546_);
v___x_4562_ = l_Lean_Syntax_getArg(v_a_4460_, v___x_4450_);
v___x_4563_ = l_Lean_Syntax_getId(v___x_4562_);
lean_dec(v___x_4562_);
v___x_4564_ = l_Lean_Name_eraseMacroScopes(v___x_4563_);
lean_dec(v___x_4563_);
v_attrName_4487_ = v___x_4564_;
v___y_4488_ = v___y_4451_;
v___y_4489_ = v___y_4452_;
goto v___jp_4486_;
}
v___jp_4464_:
{
lean_object* v___x_4466_; uint8_t v___x_4467_; lean_object* v___x_4469_; 
v___x_4466_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4466_, 0, v___y_4465_);
lean_ctor_set(v___x_4466_, 1, v_a_4460_);
v___x_4467_ = lean_unbox(v_a_4455_);
lean_dec(v_a_4455_);
lean_ctor_set_uint8(v___x_4466_, sizeof(void*)*2, v___x_4467_);
if (v_isShared_4463_ == 0)
{
lean_ctor_set(v___x_4462_, 0, v___x_4466_);
v___x_4469_ = v___x_4462_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4470_; 
v_reuseFailAlloc_4470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4470_, 0, v___x_4466_);
v___x_4469_ = v_reuseFailAlloc_4470_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
return v___x_4469_;
}
}
v___jp_4471_:
{
lean_object* v___x_4477_; 
v___x_4477_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v___y_4472_, v___y_4473_, v___y_4475_, v___y_4476_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_dec_ref_known(v___x_4477_, 1);
v___y_4465_ = v___y_4474_;
goto v___jp_4464_;
}
else
{
lean_object* v_a_4478_; lean_object* v___x_4480_; uint8_t v_isShared_4481_; uint8_t v_isSharedCheck_4485_; 
lean_dec(v___y_4474_);
lean_del_object(v___x_4462_);
lean_dec(v_a_4460_);
lean_dec(v_a_4455_);
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4485_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4480_ = v___x_4477_;
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
else
{
lean_inc(v_a_4478_);
lean_dec(v___x_4477_);
v___x_4480_ = lean_box(0);
v_isShared_4481_ = v_isSharedCheck_4485_;
goto v_resetjp_4479_;
}
v_resetjp_4479_:
{
lean_object* v___x_4483_; 
if (v_isShared_4481_ == 0)
{
v___x_4483_ = v___x_4480_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_a_4478_);
v___x_4483_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
return v___x_4483_;
}
}
}
}
v___jp_4486_:
{
lean_object* v___x_4490_; lean_object* v_env_4491_; lean_object* v___x_4492_; 
v___x_4490_ = lean_st_ref_get(v___y_4489_);
v_env_4491_ = lean_ctor_get(v___x_4490_, 0);
lean_inc_ref(v_env_4491_);
lean_dec(v___x_4490_);
lean_inc(v_attrName_4487_);
v___x_4492_ = l_Lean_getAttributeImpl(v_env_4491_, v_attrName_4487_);
if (lean_obj_tag(v___x_4492_) == 1)
{
lean_object* v___x_4493_; lean_object* v_env_4494_; lean_object* v___x_4495_; 
lean_dec_ref_known(v___x_4492_, 1);
v___x_4493_ = lean_st_ref_get(v___y_4489_);
v_env_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc_ref(v_env_4494_);
lean_dec(v___x_4493_);
lean_inc(v_attrName_4487_);
v___x_4495_ = l_Lean_getAttributeImpl(v_env_4494_, v_attrName_4487_);
if (lean_obj_tag(v___x_4495_) == 1)
{
lean_object* v_a_4496_; lean_object* v___x_4497_; lean_object* v_toAttributeImplCore_4498_; lean_object* v_env_4499_; lean_object* v_ref_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; 
v_a_4496_ = lean_ctor_get(v___x_4495_, 0);
lean_inc(v_a_4496_);
lean_dec_ref_known(v___x_4495_, 1);
v___x_4497_ = lean_st_ref_get(v___y_4489_);
v_toAttributeImplCore_4498_ = lean_ctor_get(v_a_4496_, 0);
lean_inc_ref(v_toAttributeImplCore_4498_);
lean_dec(v_a_4496_);
v_env_4499_ = lean_ctor_get(v___x_4497_, 0);
lean_inc_ref(v_env_4499_);
lean_dec(v___x_4497_);
v_ref_4500_ = lean_ctor_get(v_toAttributeImplCore_4498_, 0);
lean_inc_n(v_ref_4500_, 2);
lean_dec_ref(v_toAttributeImplCore_4498_);
v___x_4501_ = l_Lean_regularInitAttr;
v___x_4502_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_4448_, v___x_4501_, v_env_4499_, v_ref_4500_);
if (lean_obj_tag(v___x_4502_) == 0)
{
lean_dec(v_ref_4500_);
v___y_4465_ = v_attrName_4487_;
goto v___jp_4464_;
}
else
{
uint8_t v___x_4503_; lean_object* v___x_4504_; lean_object* v_env_4505_; lean_object* v___x_4506_; 
lean_dec_ref_known(v___x_4502_, 1);
v___x_4503_ = 1;
v___x_4504_ = lean_st_ref_get(v___y_4489_);
v_env_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc_ref(v_env_4505_);
lean_dec(v___x_4504_);
v___x_4506_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4505_, v_ref_4500_);
lean_dec_ref(v_env_4505_);
if (lean_obj_tag(v___x_4506_) == 1)
{
lean_object* v_val_4507_; lean_object* v___x_4508_; lean_object* v_env_4509_; lean_object* v___x_4510_; lean_object* v_modules_4511_; lean_object* v___x_4512_; uint8_t v___x_4513_; 
v_val_4507_ = lean_ctor_get(v___x_4506_, 0);
lean_inc(v_val_4507_);
lean_dec_ref_known(v___x_4506_, 1);
v___x_4508_ = lean_st_ref_get(v___y_4489_);
v_env_4509_ = lean_ctor_get(v___x_4508_, 0);
lean_inc_ref(v_env_4509_);
lean_dec(v___x_4508_);
v___x_4510_ = l_Lean_Environment_header(v_env_4509_);
lean_dec_ref(v_env_4509_);
v_modules_4511_ = lean_ctor_get(v___x_4510_, 3);
lean_inc_ref(v_modules_4511_);
lean_dec_ref(v___x_4510_);
v___x_4512_ = lean_array_get_size(v_modules_4511_);
v___x_4513_ = lean_nat_dec_lt(v_val_4507_, v___x_4512_);
if (v___x_4513_ == 0)
{
lean_dec_ref(v_modules_4511_);
lean_dec(v_val_4507_);
v___y_4472_ = v_ref_4500_;
v___y_4473_ = v___x_4503_;
v___y_4474_ = v_attrName_4487_;
v___y_4475_ = v___y_4488_;
v___y_4476_ = v___y_4489_;
goto v___jp_4471_;
}
else
{
lean_object* v___x_4514_; uint8_t v_hasData_4515_; 
v___x_4514_ = lean_array_fget_borrowed(v_modules_4511_, v_val_4507_);
v_hasData_4515_ = lean_ctor_get_uint8(v___x_4514_, sizeof(void*)*1 + 1);
if (v_hasData_4515_ == 0)
{
lean_object* v___x_4516_; lean_object* v_toImport_4517_; lean_object* v_module_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4539_; 
lean_dec(v_ref_4500_);
lean_del_object(v___x_4462_);
lean_dec(v_a_4460_);
lean_dec(v_a_4455_);
v___x_4516_ = lean_array_get(v___x_4449_, v_modules_4511_, v_val_4507_);
lean_dec(v_val_4507_);
lean_dec_ref(v_modules_4511_);
v_toImport_4517_ = lean_ctor_get(v___x_4516_, 0);
lean_inc_ref(v_toImport_4517_);
lean_dec(v___x_4516_);
v_module_4518_ = lean_ctor_get(v_toImport_4517_, 0);
lean_inc(v_module_4518_);
lean_dec_ref(v_toImport_4517_);
v___x_4519_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1);
v___x_4520_ = l_Lean_MessageData_ofName(v_attrName_4487_);
v___x_4521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4519_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
v___x_4522_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3);
v___x_4523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4521_);
lean_ctor_set(v___x_4523_, 1, v___x_4522_);
v___x_4524_ = l_Lean_MessageData_ofName(v_module_4518_);
lean_inc_ref(v___x_4524_);
v___x_4525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4523_);
lean_ctor_set(v___x_4525_, 1, v___x_4524_);
v___x_4526_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5);
v___x_4527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4527_, 0, v___x_4525_);
lean_ctor_set(v___x_4527_, 1, v___x_4526_);
v___x_4528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4527_);
lean_ctor_set(v___x_4528_, 1, v___x_4524_);
v___x_4529_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_4530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4530_, 0, v___x_4528_);
lean_ctor_set(v___x_4530_, 1, v___x_4529_);
v___x_4531_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4530_, v___y_4488_, v___y_4489_);
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4539_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4539_ == 0)
{
v___x_4534_ = v___x_4531_;
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4531_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4539_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v___x_4537_; 
if (v_isShared_4535_ == 0)
{
v___x_4537_ = v___x_4534_;
goto v_reusejp_4536_;
}
else
{
lean_object* v_reuseFailAlloc_4538_; 
v_reuseFailAlloc_4538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4538_, 0, v_a_4532_);
v___x_4537_ = v_reuseFailAlloc_4538_;
goto v_reusejp_4536_;
}
v_reusejp_4536_:
{
return v___x_4537_;
}
}
}
else
{
lean_dec_ref(v_modules_4511_);
lean_dec(v_val_4507_);
v___y_4472_ = v_ref_4500_;
v___y_4473_ = v___x_4503_;
v___y_4474_ = v_attrName_4487_;
v___y_4475_ = v___y_4488_;
v___y_4476_ = v___y_4489_;
goto v___jp_4471_;
}
}
}
else
{
lean_dec(v___x_4506_);
v___y_4472_ = v_ref_4500_;
v___y_4473_ = v___x_4503_;
v___y_4474_ = v_attrName_4487_;
v___y_4475_ = v___y_4488_;
v___y_4476_ = v___y_4489_;
goto v___jp_4471_;
}
}
}
else
{
lean_dec_ref(v___x_4495_);
lean_dec(v___x_4448_);
v___y_4465_ = v_attrName_4487_;
goto v___jp_4464_;
}
}
else
{
lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
lean_dec_ref(v___x_4492_);
lean_del_object(v___x_4462_);
lean_dec(v_a_4460_);
lean_dec(v_a_4455_);
lean_dec(v___x_4448_);
v___x_4540_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7);
v___x_4541_ = l_Lean_MessageData_ofName(v_attrName_4487_);
v___x_4542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4540_);
lean_ctor_set(v___x_4542_, 1, v___x_4541_);
v___x_4543_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9);
v___x_4544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4544_, 0, v___x_4542_);
lean_ctor_set(v___x_4544_, 1, v___x_4543_);
v___x_4545_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4544_, v___y_4488_, v___y_4489_);
return v___x_4545_;
}
}
}
}
else
{
lean_object* v_a_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4573_; 
lean_dec(v_a_4455_);
lean_dec(v___x_4448_);
v_a_4566_ = lean_ctor_get(v___x_4459_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4459_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4568_ = v___x_4459_;
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_a_4566_);
lean_dec(v___x_4459_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4573_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v___x_4571_; 
if (v_isShared_4569_ == 0)
{
v___x_4571_ = v___x_4568_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v_a_4566_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
return v___x_4571_;
}
}
}
}
else
{
lean_object* v_a_4574_; lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4581_; 
lean_dec(v___x_4448_);
lean_dec_ref(v___f_4447_);
v_a_4574_ = lean_ctor_get(v___x_4454_, 0);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___x_4454_);
if (v_isSharedCheck_4581_ == 0)
{
v___x_4576_ = v___x_4454_;
v_isShared_4577_ = v_isSharedCheck_4581_;
goto v_resetjp_4575_;
}
else
{
lean_inc(v_a_4574_);
lean_dec(v___x_4454_);
v___x_4576_ = lean_box(0);
v_isShared_4577_ = v_isSharedCheck_4581_;
goto v_resetjp_4575_;
}
v_resetjp_4575_:
{
lean_object* v___x_4579_; 
if (v_isShared_4577_ == 0)
{
v___x_4579_ = v___x_4576_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v_a_4574_);
v___x_4579_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
return v___x_4579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed(lean_object* v___x_4582_, lean_object* v_attrInstance_4583_, lean_object* v___f_4584_, lean_object* v___x_4585_, lean_object* v___x_4586_, lean_object* v___x_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(v___x_4582_, v_attrInstance_4583_, v___f_4584_, v___x_4585_, v___x_4586_, v___x_4587_, v___y_4588_, v___y_4589_);
lean_dec(v___y_4589_);
lean_dec_ref(v___y_4588_);
lean_dec(v___x_4587_);
lean_dec_ref(v___x_4586_);
lean_dec(v_attrInstance_4583_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(lean_object* v_x_4592_, uint8_t v_when_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_){
_start:
{
if (v_when_4593_ == 0)
{
lean_object* v___x_4597_; 
lean_inc(v___y_4595_);
lean_inc_ref(v___y_4594_);
v___x_4597_ = lean_apply_3(v_x_4592_, v___y_4594_, v___y_4595_, lean_box(0));
return v___x_4597_;
}
else
{
uint8_t v___x_4598_; lean_object* v___x_4599_; 
v___x_4598_ = 0;
v___x_4599_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_4592_, v___x_4598_, v___y_4594_, v___y_4595_);
return v___x_4599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg___boxed(lean_object* v_x_4600_, lean_object* v_when_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_){
_start:
{
uint8_t v_when_boxed_4605_; lean_object* v_res_4606_; 
v_when_boxed_4605_ = lean_unbox(v_when_4601_);
v_res_4606_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_4600_, v_when_boxed_4605_, v___y_4602_, v___y_4603_);
lean_dec(v___y_4603_);
lean_dec_ref(v___y_4602_);
return v_res_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(lean_object* v_attrInstance_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v___f_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___f_4618_; uint8_t v___x_4619_; lean_object* v___x_4620_; 
v___f_4612_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0));
v___x_4613_ = lean_box(0);
v___x_4614_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_4615_ = lean_unsigned_to_nat(0u);
v___x_4616_ = l_Lean_Syntax_getArg(v_attrInstance_4608_, v___x_4615_);
v___x_4617_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_4617_, 0, v___x_4616_);
v___f_4618_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed), 9, 6);
lean_closure_set(v___f_4618_, 0, v___x_4617_);
lean_closure_set(v___f_4618_, 1, v_attrInstance_4608_);
lean_closure_set(v___f_4618_, 2, v___f_4612_);
lean_closure_set(v___f_4618_, 3, v___x_4613_);
lean_closure_set(v___f_4618_, 4, v___x_4614_);
lean_closure_set(v___f_4618_, 5, v___x_4615_);
v___x_4619_ = 1;
v___x_4620_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v___f_4618_, v___x_4619_, v___y_4609_, v___y_4610_);
return v___x_4620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___boxed(lean_object* v_attrInstance_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_){
_start:
{
lean_object* v_res_4625_; 
v_res_4625_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_attrInstance_4621_, v___y_4622_, v___y_4623_);
lean_dec(v___y_4623_);
lean_dec_ref(v___y_4622_);
return v_res_4625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(lean_object* v_as_4626_, size_t v_sz_4627_, size_t v_i_4628_, lean_object* v_b_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_){
_start:
{
lean_object* v_snd_4634_; lean_object* v_a_4639_; uint8_t v___x_4651_; 
v___x_4651_ = lean_usize_dec_lt(v_i_4628_, v_sz_4627_);
if (v___x_4651_ == 0)
{
lean_object* v___x_4652_; 
v___x_4652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4652_, 0, v_b_4629_);
return v___x_4652_;
}
else
{
lean_object* v_a_4653_; lean_object* v___x_4654_; 
v_a_4653_ = lean_array_uget_borrowed(v_as_4626_, v_i_4628_);
v___x_4654_ = l_Lean_Elab_Command_getRef___redArg(v___y_4630_);
if (lean_obj_tag(v___x_4654_) == 0)
{
lean_object* v_a_4655_; lean_object* v_fileName_4656_; lean_object* v_fileMap_4657_; lean_object* v_currRecDepth_4658_; lean_object* v_cmdPos_4659_; lean_object* v_macroStack_4660_; lean_object* v_quotContext_x3f_4661_; lean_object* v_currMacroScope_4662_; lean_object* v_snap_x3f_4663_; lean_object* v_cancelTk_x3f_4664_; uint8_t v_suppressElabErrors_4665_; lean_object* v_ref_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; 
v_a_4655_ = lean_ctor_get(v___x_4654_, 0);
lean_inc(v_a_4655_);
lean_dec_ref_known(v___x_4654_, 1);
v_fileName_4656_ = lean_ctor_get(v___y_4630_, 0);
v_fileMap_4657_ = lean_ctor_get(v___y_4630_, 1);
v_currRecDepth_4658_ = lean_ctor_get(v___y_4630_, 2);
v_cmdPos_4659_ = lean_ctor_get(v___y_4630_, 3);
v_macroStack_4660_ = lean_ctor_get(v___y_4630_, 4);
v_quotContext_x3f_4661_ = lean_ctor_get(v___y_4630_, 5);
v_currMacroScope_4662_ = lean_ctor_get(v___y_4630_, 6);
v_snap_x3f_4663_ = lean_ctor_get(v___y_4630_, 8);
v_cancelTk_x3f_4664_ = lean_ctor_get(v___y_4630_, 9);
v_suppressElabErrors_4665_ = lean_ctor_get_uint8(v___y_4630_, sizeof(void*)*10);
v_ref_4666_ = l_Lean_replaceRef(v_a_4653_, v_a_4655_);
lean_dec(v_a_4655_);
lean_inc(v_cancelTk_x3f_4664_);
lean_inc(v_snap_x3f_4663_);
lean_inc(v_currMacroScope_4662_);
lean_inc(v_quotContext_x3f_4661_);
lean_inc(v_macroStack_4660_);
lean_inc(v_cmdPos_4659_);
lean_inc(v_currRecDepth_4658_);
lean_inc_ref(v_fileMap_4657_);
lean_inc_ref(v_fileName_4656_);
v___x_4667_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_4667_, 0, v_fileName_4656_);
lean_ctor_set(v___x_4667_, 1, v_fileMap_4657_);
lean_ctor_set(v___x_4667_, 2, v_currRecDepth_4658_);
lean_ctor_set(v___x_4667_, 3, v_cmdPos_4659_);
lean_ctor_set(v___x_4667_, 4, v_macroStack_4660_);
lean_ctor_set(v___x_4667_, 5, v_quotContext_x3f_4661_);
lean_ctor_set(v___x_4667_, 6, v_currMacroScope_4662_);
lean_ctor_set(v___x_4667_, 7, v_ref_4666_);
lean_ctor_set(v___x_4667_, 8, v_snap_x3f_4663_);
lean_ctor_set(v___x_4667_, 9, v_cancelTk_x3f_4664_);
lean_ctor_set_uint8(v___x_4667_, sizeof(void*)*10, v_suppressElabErrors_4665_);
lean_inc(v_a_4653_);
v___x_4668_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_a_4653_, v___x_4667_, v___y_4631_);
lean_dec_ref_known(v___x_4667_, 10);
if (lean_obj_tag(v___x_4668_) == 0)
{
lean_object* v_a_4669_; lean_object* v___x_4670_; 
v_a_4669_ = lean_ctor_get(v___x_4668_, 0);
lean_inc(v_a_4669_);
lean_dec_ref_known(v___x_4668_, 1);
v___x_4670_ = lean_array_push(v_b_4629_, v_a_4669_);
v_snd_4634_ = v___x_4670_;
goto v___jp_4633_;
}
else
{
lean_object* v_a_4671_; 
v_a_4671_ = lean_ctor_get(v___x_4668_, 0);
lean_inc(v_a_4671_);
lean_dec_ref_known(v___x_4668_, 1);
v_a_4639_ = v_a_4671_;
goto v___jp_4638_;
}
}
else
{
lean_object* v_a_4672_; 
v_a_4672_ = lean_ctor_get(v___x_4654_, 0);
lean_inc(v_a_4672_);
lean_dec_ref_known(v___x_4654_, 1);
v_a_4639_ = v_a_4672_;
goto v___jp_4638_;
}
}
v___jp_4633_:
{
size_t v___x_4635_; size_t v___x_4636_; 
v___x_4635_ = ((size_t)1ULL);
v___x_4636_ = lean_usize_add(v_i_4628_, v___x_4635_);
v_i_4628_ = v___x_4636_;
v_b_4629_ = v_snd_4634_;
goto _start;
}
v___jp_4638_:
{
uint8_t v___x_4640_; 
v___x_4640_ = l_Lean_Exception_isInterrupt(v_a_4639_);
if (v___x_4640_ == 0)
{
lean_object* v___x_4641_; 
v___x_4641_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_a_4639_, v___y_4630_, v___y_4631_);
if (lean_obj_tag(v___x_4641_) == 0)
{
lean_dec_ref_known(v___x_4641_, 1);
v_snd_4634_ = v_b_4629_;
goto v___jp_4633_;
}
else
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4649_; 
lean_dec_ref(v_b_4629_);
v_a_4642_ = lean_ctor_get(v___x_4641_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4644_ = v___x_4641_;
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4641_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
return v___x_4647_;
}
}
}
}
else
{
lean_object* v___x_4650_; 
lean_dec_ref(v_b_4629_);
v___x_4650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4650_, 0, v_a_4639_);
return v___x_4650_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29___boxed(lean_object* v_as_4673_, lean_object* v_sz_4674_, lean_object* v_i_4675_, lean_object* v_b_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_){
_start:
{
size_t v_sz_boxed_4680_; size_t v_i_boxed_4681_; lean_object* v_res_4682_; 
v_sz_boxed_4680_ = lean_unbox_usize(v_sz_4674_);
lean_dec(v_sz_4674_);
v_i_boxed_4681_ = lean_unbox_usize(v_i_4675_);
lean_dec(v_i_4675_);
v_res_4682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_as_4673_, v_sz_boxed_4680_, v_i_boxed_4681_, v_b_4676_, v___y_4677_, v___y_4678_);
lean_dec(v___y_4678_);
lean_dec_ref(v___y_4677_);
lean_dec_ref(v_as_4673_);
return v_res_4682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(lean_object* v_attrInstances_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_){
_start:
{
lean_object* v_attrs_4689_; size_t v_sz_4690_; size_t v___x_4691_; lean_object* v___x_4692_; 
v_attrs_4689_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v_sz_4690_ = lean_array_size(v_attrInstances_4685_);
v___x_4691_ = ((size_t)0ULL);
v___x_4692_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_attrInstances_4685_, v_sz_4690_, v___x_4691_, v_attrs_4689_, v___y_4686_, v___y_4687_);
return v___x_4692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___boxed(lean_object* v_attrInstances_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_){
_start:
{
lean_object* v_res_4697_; 
v_res_4697_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v_attrInstances_4693_, v___y_4694_, v___y_4695_);
lean_dec(v___y_4695_);
lean_dec_ref(v___y_4694_);
lean_dec_ref(v_attrInstances_4693_);
return v_res_4697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(lean_object* v_stx_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_){
_start:
{
lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4702_ = lean_unsigned_to_nat(1u);
v___x_4703_ = l_Lean_Syntax_getArg(v_stx_4698_, v___x_4702_);
v___x_4704_ = l_Lean_Syntax_getSepArgs(v___x_4703_);
lean_dec(v___x_4703_);
v___x_4705_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v___x_4704_, v___y_4699_, v___y_4700_);
lean_dec_ref(v___x_4704_);
return v___x_4705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1___boxed(lean_object* v_stx_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v_res_4710_; 
v_res_4710_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_stx_4706_, v___y_4707_, v___y_4708_);
lean_dec(v___y_4708_);
lean_dec_ref(v___y_4707_);
lean_dec(v_stx_4706_);
return v_res_4710_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(lean_object* v_o_4711_, lean_object* v___y_4712_){
_start:
{
lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v_env_4716_; lean_object* v___x_4717_; lean_object* v_toEnvExtension_4718_; lean_object* v_asyncMode_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v_merged_4722_; lean_object* v___x_4724_; uint8_t v_isShared_4725_; uint8_t v_isSharedCheck_4730_; 
v___x_4714_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_4715_ = lean_st_ref_get(v___y_4712_);
v_env_4716_ = lean_ctor_get(v___x_4715_, 0);
lean_inc_ref(v_env_4716_);
lean_dec(v___x_4715_);
v___x_4717_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_4718_ = lean_ctor_get(v___x_4717_, 0);
v_asyncMode_4719_ = lean_ctor_get(v_toEnvExtension_4718_, 2);
v___x_4720_ = lean_box(0);
v___x_4721_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4714_, v___x_4717_, v_env_4716_, v_asyncMode_4719_, v___x_4720_);
v_merged_4722_ = lean_ctor_get(v___x_4721_, 0);
v_isSharedCheck_4730_ = !lean_is_exclusive(v___x_4721_);
if (v_isSharedCheck_4730_ == 0)
{
lean_object* v_unused_4731_; 
v_unused_4731_ = lean_ctor_get(v___x_4721_, 1);
lean_dec(v_unused_4731_);
v___x_4724_ = v___x_4721_;
v_isShared_4725_ = v_isSharedCheck_4730_;
goto v_resetjp_4723_;
}
else
{
lean_inc(v_merged_4722_);
lean_dec(v___x_4721_);
v___x_4724_ = lean_box(0);
v_isShared_4725_ = v_isSharedCheck_4730_;
goto v_resetjp_4723_;
}
v_resetjp_4723_:
{
lean_object* v___x_4727_; 
if (v_isShared_4725_ == 0)
{
lean_ctor_set(v___x_4724_, 1, v_merged_4722_);
lean_ctor_set(v___x_4724_, 0, v_o_4711_);
v___x_4727_ = v___x_4724_;
goto v_reusejp_4726_;
}
else
{
lean_object* v_reuseFailAlloc_4729_; 
v_reuseFailAlloc_4729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4729_, 0, v_o_4711_);
lean_ctor_set(v_reuseFailAlloc_4729_, 1, v_merged_4722_);
v___x_4727_ = v_reuseFailAlloc_4729_;
goto v_reusejp_4726_;
}
v_reusejp_4726_:
{
lean_object* v___x_4728_; 
v___x_4728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4727_);
return v___x_4728_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg___boxed(lean_object* v_o_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_){
_start:
{
lean_object* v_res_4735_; 
v_res_4735_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_4732_, v___y_4733_);
lean_dec(v___y_4733_);
return v_res_4735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(lean_object* v___y_4736_, lean_object* v___y_4737_){
_start:
{
lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v_scopes_4741_; lean_object* v___x_4742_; lean_object* v_opts_4743_; lean_object* v___x_4744_; 
v___x_4739_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4740_ = lean_st_ref_get(v___y_4737_);
v_scopes_4741_ = lean_ctor_get(v___x_4740_, 2);
lean_inc(v_scopes_4741_);
lean_dec(v___x_4740_);
v___x_4742_ = l_List_head_x21___redArg(v___x_4739_, v_scopes_4741_);
lean_dec(v_scopes_4741_);
v_opts_4743_ = lean_ctor_get(v___x_4742_, 1);
lean_inc_ref(v_opts_4743_);
lean_dec(v___x_4742_);
v___x_4744_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_opts_4743_, v___y_4737_);
return v___x_4744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23___boxed(lean_object* v___y_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_){
_start:
{
lean_object* v_res_4748_; 
v_res_4748_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4745_, v___y_4746_);
lean_dec(v___y_4746_);
lean_dec_ref(v___y_4745_);
return v_res_4748_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(lean_object* v_ref_4749_, lean_object* v_msgData_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_){
_start:
{
uint8_t v___x_4754_; uint8_t v___x_4755_; lean_object* v___x_4756_; 
v___x_4754_ = 1;
v___x_4755_ = 0;
v___x_4756_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_4749_, v_msgData_4750_, v___x_4754_, v___x_4755_, v___y_4751_, v___y_4752_);
return v___x_4756_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34___boxed(lean_object* v_ref_4757_, lean_object* v_msgData_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_){
_start:
{
lean_object* v_res_4762_; 
v_res_4762_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_ref_4757_, v_msgData_4758_, v___y_4759_, v___y_4760_);
lean_dec(v___y_4760_);
lean_dec_ref(v___y_4759_);
lean_dec(v_ref_4757_);
return v_res_4762_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1(void){
_start:
{
lean_object* v___x_4764_; lean_object* v___x_4765_; 
v___x_4764_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0));
v___x_4765_ = l_Lean_stringToMessageData(v___x_4764_);
return v___x_4765_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3(void){
_start:
{
lean_object* v___x_4767_; lean_object* v___x_4768_; 
v___x_4767_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2));
v___x_4768_ = l_Lean_stringToMessageData(v___x_4767_);
return v___x_4768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(lean_object* v_linterOption_4769_, lean_object* v_stx_4770_, lean_object* v_msg_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_){
_start:
{
lean_object* v_name_4775_; lean_object* v___x_4777_; uint8_t v_isShared_4778_; uint8_t v_isSharedCheck_4793_; 
v_name_4775_ = lean_ctor_get(v_linterOption_4769_, 0);
v_isSharedCheck_4793_ = !lean_is_exclusive(v_linterOption_4769_);
if (v_isSharedCheck_4793_ == 0)
{
lean_object* v_unused_4794_; 
v_unused_4794_ = lean_ctor_get(v_linterOption_4769_, 1);
lean_dec(v_unused_4794_);
v___x_4777_ = v_linterOption_4769_;
v_isShared_4778_ = v_isSharedCheck_4793_;
goto v_resetjp_4776_;
}
else
{
lean_inc(v_name_4775_);
lean_dec(v_linterOption_4769_);
v___x_4777_ = lean_box(0);
v_isShared_4778_ = v_isSharedCheck_4793_;
goto v_resetjp_4776_;
}
v_resetjp_4776_:
{
lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4782_; 
v___x_4779_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1);
lean_inc(v_name_4775_);
v___x_4780_ = l_Lean_MessageData_ofName(v_name_4775_);
if (v_isShared_4778_ == 0)
{
lean_ctor_set_tag(v___x_4777_, 7);
lean_ctor_set(v___x_4777_, 1, v___x_4780_);
lean_ctor_set(v___x_4777_, 0, v___x_4779_);
v___x_4782_ = v___x_4777_;
goto v_reusejp_4781_;
}
else
{
lean_object* v_reuseFailAlloc_4792_; 
v_reuseFailAlloc_4792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4792_, 0, v___x_4779_);
lean_ctor_set(v_reuseFailAlloc_4792_, 1, v___x_4780_);
v___x_4782_ = v_reuseFailAlloc_4792_;
goto v_reusejp_4781_;
}
v_reusejp_4781_:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v_disable_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; 
v___x_4783_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3);
v___x_4784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4784_, 0, v___x_4782_);
lean_ctor_set(v___x_4784_, 1, v___x_4783_);
v_disable_4785_ = l_Lean_MessageData_note(v___x_4784_);
v___x_4786_ = l_Lean_Linter_linterMessageTag;
v___x_4787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4787_, 0, v_msg_4771_);
lean_ctor_set(v___x_4787_, 1, v_disable_4785_);
v___x_4788_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4786_);
lean_ctor_set(v___x_4788_, 1, v___x_4787_);
v___x_4789_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4789_, 0, v_name_4775_);
lean_ctor_set(v___x_4789_, 1, v___x_4788_);
lean_inc(v_stx_4770_);
v___x_4790_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_4790_, 0, v_stx_4770_);
lean_ctor_set(v___x_4790_, 1, v___x_4789_);
v___x_4791_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_stx_4770_, v___x_4790_, v___y_4772_, v___y_4773_);
lean_dec(v_stx_4770_);
return v___x_4791_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___boxed(lean_object* v_linterOption_4795_, lean_object* v_stx_4796_, lean_object* v_msg_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_){
_start:
{
lean_object* v_res_4801_; 
v_res_4801_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4795_, v_stx_4796_, v_msg_4797_, v___y_4798_, v___y_4799_);
lean_dec(v___y_4799_);
lean_dec_ref(v___y_4798_);
return v_res_4801_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(lean_object* v_linterOption_4802_, lean_object* v_stx_4803_, lean_object* v_msg_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_){
_start:
{
lean_object* v___x_4808_; lean_object* v_a_4809_; lean_object* v___x_4811_; uint8_t v_isShared_4812_; uint8_t v_isSharedCheck_4819_; 
v___x_4808_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4805_, v___y_4806_);
v_a_4809_ = lean_ctor_get(v___x_4808_, 0);
v_isSharedCheck_4819_ = !lean_is_exclusive(v___x_4808_);
if (v_isSharedCheck_4819_ == 0)
{
v___x_4811_ = v___x_4808_;
v_isShared_4812_ = v_isSharedCheck_4819_;
goto v_resetjp_4810_;
}
else
{
lean_inc(v_a_4809_);
lean_dec(v___x_4808_);
v___x_4811_ = lean_box(0);
v_isShared_4812_ = v_isSharedCheck_4819_;
goto v_resetjp_4810_;
}
v_resetjp_4810_:
{
uint8_t v___x_4813_; 
v___x_4813_ = l_Lean_Linter_getLinterValue(v_linterOption_4802_, v_a_4809_);
lean_dec(v_a_4809_);
if (v___x_4813_ == 0)
{
lean_object* v___x_4814_; lean_object* v___x_4816_; 
lean_dec_ref(v_msg_4804_);
lean_dec(v_stx_4803_);
lean_dec_ref(v_linterOption_4802_);
v___x_4814_ = lean_box(0);
if (v_isShared_4812_ == 0)
{
lean_ctor_set(v___x_4811_, 0, v___x_4814_);
v___x_4816_ = v___x_4811_;
goto v_reusejp_4815_;
}
else
{
lean_object* v_reuseFailAlloc_4817_; 
v_reuseFailAlloc_4817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4817_, 0, v___x_4814_);
v___x_4816_ = v_reuseFailAlloc_4817_;
goto v_reusejp_4815_;
}
v_reusejp_4815_:
{
return v___x_4816_;
}
}
else
{
lean_object* v___x_4818_; 
lean_del_object(v___x_4811_);
v___x_4818_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4802_, v_stx_4803_, v_msg_4804_, v___y_4805_, v___y_4806_);
return v___x_4818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6___boxed(lean_object* v_linterOption_4820_, lean_object* v_stx_4821_, lean_object* v_msg_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_){
_start:
{
lean_object* v_res_4826_; 
v_res_4826_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v_linterOption_4820_, v_stx_4821_, v_msg_4822_, v___y_4823_, v___y_4824_);
lean_dec(v___y_4824_);
lean_dec_ref(v___y_4823_);
return v_res_4826_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4828_; lean_object* v___x_4829_; 
v___x_4828_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0));
v___x_4829_ = l_Lean_stringToMessageData(v___x_4828_);
return v___x_4829_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4831_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2));
v___x_4832_ = l_Lean_stringToMessageData(v___x_4831_);
return v___x_4832_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_4846_; lean_object* v___x_4847_; 
v___x_4846_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8));
v___x_4847_ = l_Lean_stringToMessageData(v___x_4846_);
return v___x_4847_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4849_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10));
v___x_4850_ = l_Lean_stringToMessageData(v___x_4849_);
return v___x_4850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(lean_object* v_vis_x3f_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_){
_start:
{
lean_object* v___x_4863_; 
v___x_4863_ = lean_st_ref_get(v___y_4853_);
if (lean_obj_tag(v_vis_x3f_4851_) == 0)
{
uint8_t v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
lean_dec(v___x_4863_);
v___x_4864_ = 0;
v___x_4865_ = lean_box(v___x_4864_);
v___x_4866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4866_, 0, v___x_4865_);
return v___x_4866_;
}
else
{
lean_object* v_env_4867_; lean_object* v_val_4868_; lean_object* v___y_4870_; lean_object* v___y_4871_; lean_object* v___y_4872_; uint8_t v___y_4894_; lean_object* v___x_4895_; uint8_t v___x_4896_; uint8_t v___y_4898_; 
v_env_4867_ = lean_ctor_get(v___x_4863_, 0);
lean_inc_ref(v_env_4867_);
lean_dec(v___x_4863_);
v_val_4868_ = lean_ctor_get(v_vis_x3f_4851_, 0);
lean_inc_n(v_val_4868_, 2);
lean_dec_ref_known(v_vis_x3f_4851_, 1);
v___x_4895_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6));
v___x_4896_ = l_Lean_Syntax_isOfKind(v_val_4868_, v___x_4895_);
if (v___x_4896_ == 0)
{
lean_object* v___x_4902_; uint8_t v___x_4903_; 
v___x_4902_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7));
lean_inc(v_val_4868_);
v___x_4903_ = l_Lean_Syntax_isOfKind(v_val_4868_, v___x_4902_);
if (v___x_4903_ == 0)
{
lean_object* v___x_4904_; lean_object* v___x_4905_; 
lean_dec_ref(v_env_4867_);
v___x_4904_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9);
v___x_4905_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_val_4868_, v___x_4904_, v___y_4852_, v___y_4853_);
lean_dec(v_val_4868_);
return v___x_4905_;
}
else
{
lean_object* v___x_4906_; 
v___x_4906_ = l_Lean_Syntax_getHeadInfo(v_val_4868_);
if (lean_obj_tag(v___x_4906_) == 0)
{
lean_dec_ref_known(v___x_4906_, 4);
v___y_4898_ = v___x_4903_;
goto v___jp_4897_;
}
else
{
lean_dec(v___x_4906_);
if (v___x_4896_ == 0)
{
lean_dec(v_val_4868_);
lean_dec_ref(v_env_4867_);
goto v___jp_4855_;
}
else
{
v___y_4898_ = v___x_4896_;
goto v___jp_4897_;
}
}
}
}
else
{
lean_object* v___x_4907_; 
v___x_4907_ = l_Lean_Syntax_getHeadInfo(v_val_4868_);
if (lean_obj_tag(v___x_4907_) == 0)
{
lean_object* v___x_4908_; uint8_t v_isModule_4909_; 
lean_dec_ref_known(v___x_4907_, 4);
v___x_4908_ = l_Lean_Environment_header(v_env_4867_);
v_isModule_4909_ = lean_ctor_get_uint8(v___x_4908_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4908_);
if (v_isModule_4909_ == 0)
{
lean_dec(v_val_4868_);
lean_dec_ref(v_env_4867_);
goto v___jp_4859_;
}
else
{
uint8_t v_isExporting_4910_; 
v_isExporting_4910_ = lean_ctor_get_uint8(v_env_4867_, sizeof(void*)*8);
lean_dec_ref(v_env_4867_);
if (v_isExporting_4910_ == 0)
{
lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v___x_4913_; 
v___x_4911_ = l_Lean_linter_redundantVisibility;
v___x_4912_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11);
v___x_4913_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___x_4911_, v_val_4868_, v___x_4912_, v___y_4852_, v___y_4853_);
if (lean_obj_tag(v___x_4913_) == 0)
{
lean_dec_ref_known(v___x_4913_, 1);
goto v___jp_4859_;
}
else
{
lean_object* v_a_4914_; lean_object* v___x_4916_; uint8_t v_isShared_4917_; uint8_t v_isSharedCheck_4921_; 
v_a_4914_ = lean_ctor_get(v___x_4913_, 0);
v_isSharedCheck_4921_ = !lean_is_exclusive(v___x_4913_);
if (v_isSharedCheck_4921_ == 0)
{
v___x_4916_ = v___x_4913_;
v_isShared_4917_ = v_isSharedCheck_4921_;
goto v_resetjp_4915_;
}
else
{
lean_inc(v_a_4914_);
lean_dec(v___x_4913_);
v___x_4916_ = lean_box(0);
v_isShared_4917_ = v_isSharedCheck_4921_;
goto v_resetjp_4915_;
}
v_resetjp_4915_:
{
lean_object* v___x_4919_; 
if (v_isShared_4917_ == 0)
{
v___x_4919_ = v___x_4916_;
goto v_reusejp_4918_;
}
else
{
lean_object* v_reuseFailAlloc_4920_; 
v_reuseFailAlloc_4920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4920_, 0, v_a_4914_);
v___x_4919_ = v_reuseFailAlloc_4920_;
goto v_reusejp_4918_;
}
v_reusejp_4918_:
{
return v___x_4919_;
}
}
}
}
else
{
lean_dec(v_val_4868_);
goto v___jp_4859_;
}
}
}
else
{
lean_dec(v___x_4907_);
lean_dec(v_val_4868_);
lean_dec_ref(v_env_4867_);
goto v___jp_4859_;
}
}
v___jp_4869_:
{
lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; 
lean_inc_ref(v___y_4872_);
v___x_4873_ = l_Lean_stringToMessageData(v___y_4872_);
lean_inc_ref(v___y_4871_);
v___x_4874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4874_, 0, v___y_4871_);
lean_ctor_set(v___x_4874_, 1, v___x_4873_);
v___x_4875_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1);
v___x_4876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4876_, 0, v___x_4874_);
lean_ctor_set(v___x_4876_, 1, v___x_4875_);
lean_inc_ref(v___y_4870_);
v___x_4877_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___y_4870_, v_val_4868_, v___x_4876_, v___y_4852_, v___y_4853_);
if (lean_obj_tag(v___x_4877_) == 0)
{
lean_dec_ref_known(v___x_4877_, 1);
goto v___jp_4855_;
}
else
{
lean_object* v_a_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4885_; 
v_a_4878_ = lean_ctor_get(v___x_4877_, 0);
v_isSharedCheck_4885_ = !lean_is_exclusive(v___x_4877_);
if (v_isSharedCheck_4885_ == 0)
{
v___x_4880_ = v___x_4877_;
v_isShared_4881_ = v_isSharedCheck_4885_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_a_4878_);
lean_dec(v___x_4877_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4885_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v___x_4883_; 
if (v_isShared_4881_ == 0)
{
v___x_4883_ = v___x_4880_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4884_; 
v_reuseFailAlloc_4884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4884_, 0, v_a_4878_);
v___x_4883_ = v_reuseFailAlloc_4884_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
return v___x_4883_;
}
}
}
}
v___jp_4886_:
{
lean_object* v___x_4887_; uint8_t v_isModule_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; 
v___x_4887_ = l_Lean_Environment_header(v_env_4867_);
lean_dec_ref(v_env_4867_);
v_isModule_4888_ = lean_ctor_get_uint8(v___x_4887_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4887_);
v___x_4889_ = l_Lean_linter_redundantVisibility;
v___x_4890_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3);
if (v_isModule_4888_ == 0)
{
lean_object* v___x_4891_; 
v___x_4891_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___y_4870_ = v___x_4889_;
v___y_4871_ = v___x_4890_;
v___y_4872_ = v___x_4891_;
goto v___jp_4869_;
}
else
{
lean_object* v___x_4892_; 
v___x_4892_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4));
v___y_4870_ = v___x_4889_;
v___y_4871_ = v___x_4890_;
v___y_4872_ = v___x_4892_;
goto v___jp_4869_;
}
}
v___jp_4893_:
{
if (v___y_4894_ == 0)
{
lean_dec(v_val_4868_);
lean_dec_ref(v_env_4867_);
goto v___jp_4855_;
}
else
{
goto v___jp_4886_;
}
}
v___jp_4897_:
{
uint8_t v_isExporting_4899_; 
v_isExporting_4899_ = lean_ctor_get_uint8(v_env_4867_, sizeof(void*)*8);
if (v_isExporting_4899_ == 0)
{
lean_object* v___x_4900_; uint8_t v_isModule_4901_; 
v___x_4900_ = l_Lean_Environment_header(v_env_4867_);
v_isModule_4901_ = lean_ctor_get_uint8(v___x_4900_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4900_);
if (v_isModule_4901_ == 0)
{
v___y_4894_ = v___y_4898_;
goto v___jp_4893_;
}
else
{
v___y_4894_ = v___x_4896_;
goto v___jp_4893_;
}
}
else
{
goto v___jp_4886_;
}
}
}
v___jp_4855_:
{
uint8_t v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; 
v___x_4856_ = 2;
v___x_4857_ = lean_box(v___x_4856_);
v___x_4858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4858_, 0, v___x_4857_);
return v___x_4858_;
}
v___jp_4859_:
{
uint8_t v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; 
v___x_4860_ = 1;
v___x_4861_ = lean_box(v___x_4860_);
v___x_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4862_, 0, v___x_4861_);
return v___x_4862_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___boxed(lean_object* v_vis_x3f_4922_, lean_object* v___y_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_){
_start:
{
lean_object* v_res_4926_; 
v_res_4926_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v_vis_x3f_4922_, v___y_4923_, v___y_4924_);
lean_dec(v___y_4924_);
lean_dec_ref(v___y_4923_);
return v_res_4926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object* v_stx_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_){
_start:
{
uint8_t v___y_4943_; lean_object* v___y_4944_; uint8_t v___y_4945_; lean_object* v___y_4946_; uint8_t v___y_4947_; uint8_t v___y_4948_; uint8_t v___y_4949_; uint8_t v___y_4953_; lean_object* v___y_4954_; uint8_t v___y_4955_; lean_object* v___y_4956_; uint8_t v___y_4957_; uint8_t v___y_4958_; lean_object* v_attrs_4959_; lean_object* v___x_4963_; lean_object* v_docCommentStx_4964_; lean_object* v___x_4965_; lean_object* v_attrsStx_4966_; uint8_t v___y_4968_; lean_object* v___y_4969_; lean_object* v___y_4970_; uint8_t v___y_4971_; uint8_t v___y_4972_; uint8_t v___y_4973_; lean_object* v___x_4987_; lean_object* v_visibilityStx_4988_; lean_object* v___x_4989_; lean_object* v_protectedStx_4990_; uint8_t v___y_4992_; lean_object* v___y_4993_; lean_object* v___y_4994_; uint8_t v___y_4995_; lean_object* v___y_4996_; uint8_t v___y_5013_; lean_object* v___y_5014_; uint8_t v___y_5015_; lean_object* v___y_5016_; lean_object* v___y_5028_; uint8_t v___y_5029_; uint8_t v___y_5030_; uint8_t v___y_5042_; lean_object* v___x_5055_; lean_object* v___x_5056_; uint8_t v___x_5057_; 
v___x_4963_ = lean_unsigned_to_nat(0u);
v_docCommentStx_4964_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_4963_);
v___x_4965_ = lean_unsigned_to_nat(1u);
v_attrsStx_4966_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_4965_);
v___x_4987_ = lean_unsigned_to_nat(2u);
v_visibilityStx_4988_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_4987_);
v___x_4989_ = lean_unsigned_to_nat(3u);
v_protectedStx_4990_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_4989_);
v___x_5055_ = lean_unsigned_to_nat(4u);
v___x_5056_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_5055_);
v___x_5057_ = l_Lean_Syntax_isNone(v___x_5056_);
if (v___x_5057_ == 0)
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; uint8_t v___x_5061_; 
v___x_5058_ = l_Lean_Syntax_getArg(v___x_5056_, v___x_4963_);
lean_dec(v___x_5056_);
v___x_5059_ = l_Lean_Syntax_getKind(v___x_5058_);
v___x_5060_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2));
v___x_5061_ = lean_name_eq(v___x_5059_, v___x_5060_);
lean_dec(v___x_5059_);
if (v___x_5061_ == 0)
{
uint8_t v___x_5062_; 
v___x_5062_ = 2;
v___y_5042_ = v___x_5062_;
goto v___jp_5041_;
}
else
{
uint8_t v___x_5063_; 
v___x_5063_ = 1;
v___y_5042_ = v___x_5063_;
goto v___jp_5041_;
}
}
else
{
uint8_t v___x_5064_; 
lean_dec(v___x_5056_);
v___x_5064_ = 0;
v___y_5042_ = v___x_5064_;
goto v___jp_5041_;
}
v___jp_4942_:
{
lean_object* v___x_4950_; lean_object* v___x_4951_; 
v___x_4950_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4950_, 0, v_stx_4938_);
lean_ctor_set(v___x_4950_, 1, v___y_4946_);
lean_ctor_set(v___x_4950_, 2, v___y_4944_);
lean_ctor_set_uint8(v___x_4950_, sizeof(void*)*3, v___y_4947_);
lean_ctor_set_uint8(v___x_4950_, sizeof(void*)*3 + 1, v___y_4945_);
lean_ctor_set_uint8(v___x_4950_, sizeof(void*)*3 + 2, v___y_4948_);
lean_ctor_set_uint8(v___x_4950_, sizeof(void*)*3 + 3, v___y_4943_);
lean_ctor_set_uint8(v___x_4950_, sizeof(void*)*3 + 4, v___y_4949_);
v___x_4951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4951_, 0, v___x_4950_);
return v___x_4951_;
}
v___jp_4952_:
{
uint8_t v___x_4960_; 
v___x_4960_ = l_Lean_Syntax_isNone(v___y_4954_);
lean_dec(v___y_4954_);
if (v___x_4960_ == 0)
{
uint8_t v___x_4961_; 
v___x_4961_ = 1;
v___y_4943_ = v___y_4953_;
v___y_4944_ = v_attrs_4959_;
v___y_4945_ = v___y_4955_;
v___y_4946_ = v___y_4956_;
v___y_4947_ = v___y_4957_;
v___y_4948_ = v___y_4958_;
v___y_4949_ = v___x_4961_;
goto v___jp_4942_;
}
else
{
uint8_t v___x_4962_; 
v___x_4962_ = 0;
v___y_4943_ = v___y_4953_;
v___y_4944_ = v_attrs_4959_;
v___y_4945_ = v___y_4955_;
v___y_4946_ = v___y_4956_;
v___y_4947_ = v___y_4957_;
v___y_4948_ = v___y_4958_;
v___y_4949_ = v___x_4962_;
goto v___jp_4942_;
}
}
v___jp_4967_:
{
lean_object* v___x_4974_; 
v___x_4974_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_4966_);
lean_dec(v_attrsStx_4966_);
if (lean_obj_tag(v___x_4974_) == 0)
{
lean_object* v___x_4975_; 
v___x_4975_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v___y_4953_ = v___y_4968_;
v___y_4954_ = v___y_4969_;
v___y_4955_ = v___y_4973_;
v___y_4956_ = v___y_4970_;
v___y_4957_ = v___y_4971_;
v___y_4958_ = v___y_4972_;
v_attrs_4959_ = v___x_4975_;
goto v___jp_4952_;
}
else
{
lean_object* v_val_4976_; lean_object* v___x_4977_; 
v_val_4976_ = lean_ctor_get(v___x_4974_, 0);
lean_inc(v_val_4976_);
lean_dec_ref_known(v___x_4974_, 1);
v___x_4977_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_val_4976_, v___y_4939_, v___y_4940_);
lean_dec(v_val_4976_);
if (lean_obj_tag(v___x_4977_) == 0)
{
lean_object* v_a_4978_; 
v_a_4978_ = lean_ctor_get(v___x_4977_, 0);
lean_inc(v_a_4978_);
lean_dec_ref_known(v___x_4977_, 1);
v___y_4953_ = v___y_4968_;
v___y_4954_ = v___y_4969_;
v___y_4955_ = v___y_4973_;
v___y_4956_ = v___y_4970_;
v___y_4957_ = v___y_4971_;
v___y_4958_ = v___y_4972_;
v_attrs_4959_ = v_a_4978_;
goto v___jp_4952_;
}
else
{
lean_object* v_a_4979_; lean_object* v___x_4981_; uint8_t v_isShared_4982_; uint8_t v_isSharedCheck_4986_; 
lean_dec(v___y_4970_);
lean_dec(v___y_4969_);
lean_dec(v_stx_4938_);
v_a_4979_ = lean_ctor_get(v___x_4977_, 0);
v_isSharedCheck_4986_ = !lean_is_exclusive(v___x_4977_);
if (v_isSharedCheck_4986_ == 0)
{
v___x_4981_ = v___x_4977_;
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
else
{
lean_inc(v_a_4979_);
lean_dec(v___x_4977_);
v___x_4981_ = lean_box(0);
v_isShared_4982_ = v_isSharedCheck_4986_;
goto v_resetjp_4980_;
}
v_resetjp_4980_:
{
lean_object* v___x_4984_; 
if (v_isShared_4982_ == 0)
{
v___x_4984_ = v___x_4981_;
goto v_reusejp_4983_;
}
else
{
lean_object* v_reuseFailAlloc_4985_; 
v_reuseFailAlloc_4985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4985_, 0, v_a_4979_);
v___x_4984_ = v_reuseFailAlloc_4985_;
goto v_reusejp_4983_;
}
v_reusejp_4983_:
{
return v___x_4984_;
}
}
}
}
}
v___jp_4991_:
{
lean_object* v___x_4997_; 
v___x_4997_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v___y_4996_, v___y_4939_, v___y_4940_);
if (lean_obj_tag(v___x_4997_) == 0)
{
lean_object* v_a_4998_; uint8_t v___x_4999_; 
v_a_4998_ = lean_ctor_get(v___x_4997_, 0);
lean_inc(v_a_4998_);
lean_dec_ref_known(v___x_4997_, 1);
v___x_4999_ = l_Lean_Syntax_isNone(v_protectedStx_4990_);
lean_dec(v_protectedStx_4990_);
if (v___x_4999_ == 0)
{
uint8_t v___x_5000_; uint8_t v___x_5001_; 
v___x_5000_ = 1;
v___x_5001_ = lean_unbox(v_a_4998_);
lean_dec(v_a_4998_);
v___y_4968_ = v___y_4992_;
v___y_4969_ = v___y_4993_;
v___y_4970_ = v___y_4994_;
v___y_4971_ = v___x_5001_;
v___y_4972_ = v___y_4995_;
v___y_4973_ = v___x_5000_;
goto v___jp_4967_;
}
else
{
uint8_t v___x_5002_; uint8_t v___x_5003_; 
v___x_5002_ = 0;
v___x_5003_ = lean_unbox(v_a_4998_);
lean_dec(v_a_4998_);
v___y_4968_ = v___y_4992_;
v___y_4969_ = v___y_4993_;
v___y_4970_ = v___y_4994_;
v___y_4971_ = v___x_5003_;
v___y_4972_ = v___y_4995_;
v___y_4973_ = v___x_5002_;
goto v___jp_4967_;
}
}
else
{
lean_object* v_a_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5011_; 
lean_dec(v___y_4994_);
lean_dec(v___y_4993_);
lean_dec(v_protectedStx_4990_);
lean_dec(v_attrsStx_4966_);
lean_dec(v_stx_4938_);
v_a_5004_ = lean_ctor_get(v___x_4997_, 0);
v_isSharedCheck_5011_ = !lean_is_exclusive(v___x_4997_);
if (v_isSharedCheck_5011_ == 0)
{
v___x_5006_ = v___x_4997_;
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_a_5004_);
lean_dec(v___x_4997_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5011_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5009_; 
if (v_isShared_5007_ == 0)
{
v___x_5009_ = v___x_5006_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v_a_5004_);
v___x_5009_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
return v___x_5009_;
}
}
}
}
v___jp_5012_:
{
lean_object* v___x_5017_; 
v___x_5017_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_4988_);
lean_dec(v_visibilityStx_4988_);
if (lean_obj_tag(v___x_5017_) == 0)
{
lean_object* v___x_5018_; 
v___x_5018_ = lean_box(0);
v___y_4992_ = v___y_5013_;
v___y_4993_ = v___y_5014_;
v___y_4994_ = v___y_5016_;
v___y_4995_ = v___y_5015_;
v___y_4996_ = v___x_5018_;
goto v___jp_4991_;
}
else
{
lean_object* v_val_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5026_; 
v_val_5019_ = lean_ctor_get(v___x_5017_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_5017_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5021_ = v___x_5017_;
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_val_5019_);
lean_dec(v___x_5017_);
v___x_5021_ = lean_box(0);
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
v_resetjp_5020_:
{
lean_object* v___x_5024_; 
if (v_isShared_5022_ == 0)
{
v___x_5024_ = v___x_5021_;
goto v_reusejp_5023_;
}
else
{
lean_object* v_reuseFailAlloc_5025_; 
v_reuseFailAlloc_5025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v_val_5019_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
v___y_4992_ = v___y_5013_;
v___y_4993_ = v___y_5014_;
v___y_4994_ = v___y_5016_;
v___y_4995_ = v___y_5015_;
v___y_4996_ = v___x_5024_;
goto v___jp_4991_;
}
}
}
}
v___jp_5027_:
{
lean_object* v___x_5031_; 
v___x_5031_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_4964_);
lean_dec(v_docCommentStx_4964_);
if (lean_obj_tag(v___x_5031_) == 0)
{
lean_object* v___x_5032_; 
v___x_5032_ = lean_box(0);
v___y_5013_ = v___y_5030_;
v___y_5014_ = v___y_5028_;
v___y_5015_ = v___y_5029_;
v___y_5016_ = v___x_5032_;
goto v___jp_5012_;
}
else
{
lean_object* v_val_5033_; lean_object* v___x_5035_; uint8_t v_isShared_5036_; uint8_t v_isSharedCheck_5040_; 
v_val_5033_ = lean_ctor_get(v___x_5031_, 0);
v_isSharedCheck_5040_ = !lean_is_exclusive(v___x_5031_);
if (v_isSharedCheck_5040_ == 0)
{
v___x_5035_ = v___x_5031_;
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
else
{
lean_inc(v_val_5033_);
lean_dec(v___x_5031_);
v___x_5035_ = lean_box(0);
v_isShared_5036_ = v_isSharedCheck_5040_;
goto v_resetjp_5034_;
}
v_resetjp_5034_:
{
lean_object* v___x_5038_; 
if (v_isShared_5036_ == 0)
{
v___x_5038_ = v___x_5035_;
goto v_reusejp_5037_;
}
else
{
lean_object* v_reuseFailAlloc_5039_; 
v_reuseFailAlloc_5039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5039_, 0, v_val_5033_);
v___x_5038_ = v_reuseFailAlloc_5039_;
goto v_reusejp_5037_;
}
v_reusejp_5037_:
{
v___y_5013_ = v___y_5030_;
v___y_5014_ = v___y_5028_;
v___y_5015_ = v___y_5029_;
v___y_5016_ = v___x_5038_;
goto v___jp_5012_;
}
}
}
}
v___jp_5041_:
{
lean_object* v___x_5043_; lean_object* v_unsafeStx_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; uint8_t v___x_5047_; 
v___x_5043_ = lean_unsigned_to_nat(5u);
v_unsafeStx_5044_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_5043_);
v___x_5045_ = lean_unsigned_to_nat(6u);
v___x_5046_ = l_Lean_Syntax_getArg(v_stx_4938_, v___x_5045_);
v___x_5047_ = l_Lean_Syntax_isNone(v___x_5046_);
if (v___x_5047_ == 0)
{
lean_object* v___x_5048_; lean_object* v___x_5049_; lean_object* v___x_5050_; uint8_t v___x_5051_; 
v___x_5048_ = l_Lean_Syntax_getArg(v___x_5046_, v___x_4963_);
lean_dec(v___x_5046_);
v___x_5049_ = l_Lean_Syntax_getKind(v___x_5048_);
v___x_5050_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1));
v___x_5051_ = lean_name_eq(v___x_5049_, v___x_5050_);
lean_dec(v___x_5049_);
if (v___x_5051_ == 0)
{
uint8_t v___x_5052_; 
v___x_5052_ = 1;
v___y_5028_ = v_unsafeStx_5044_;
v___y_5029_ = v___y_5042_;
v___y_5030_ = v___x_5052_;
goto v___jp_5027_;
}
else
{
uint8_t v___x_5053_; 
v___x_5053_ = 0;
v___y_5028_ = v_unsafeStx_5044_;
v___y_5029_ = v___y_5042_;
v___y_5030_ = v___x_5053_;
goto v___jp_5027_;
}
}
else
{
uint8_t v___x_5054_; 
lean_dec(v___x_5046_);
v___x_5054_ = 2;
v___y_5028_ = v_unsafeStx_5044_;
v___y_5029_ = v___y_5042_;
v___y_5030_ = v___x_5054_;
goto v___jp_5027_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_stx_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_){
_start:
{
lean_object* v_res_5069_; 
v_res_5069_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_stx_5065_, v___y_5066_, v___y_5067_);
lean_dec(v___y_5067_);
lean_dec_ref(v___y_5066_);
return v_res_5069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3(lean_object* v_mods_5070_, lean_object* v___x_5071_, lean_object* v_projId_5072_, lean_object* v___x_5073_, lean_object* v___x_5074_, lean_object* v___x_5075_, lean_object* v_params_5076_, lean_object* v___x_5077_, lean_object* v___x_5078_, lean_object* v_optDeriving_5079_, lean_object* v___x_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_){
_start:
{
lean_object* v___x_5084_; 
lean_inc(v_mods_5070_);
v___x_5084_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_mods_5070_, v___y_5081_, v___y_5082_);
if (lean_obj_tag(v___x_5084_) == 0)
{
lean_object* v_a_5085_; lean_object* v___f_5086_; lean_object* v___x_5087_; lean_object* v_env_5088_; uint8_t v___x_5089_; lean_object* v___x_5090_; 
v_a_5085_ = lean_ctor_get(v___x_5084_, 0);
lean_inc_n(v_a_5085_, 2);
lean_dec_ref_known(v___x_5084_, 1);
v___f_5086_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__2___boxed), 15, 12);
lean_closure_set(v___f_5086_, 0, v___x_5071_);
lean_closure_set(v___f_5086_, 1, v_a_5085_);
lean_closure_set(v___f_5086_, 2, v_projId_5072_);
lean_closure_set(v___f_5086_, 3, v___x_5073_);
lean_closure_set(v___f_5086_, 4, v___x_5074_);
lean_closure_set(v___f_5086_, 5, v___x_5075_);
lean_closure_set(v___f_5086_, 6, v_params_5076_);
lean_closure_set(v___f_5086_, 7, v___x_5077_);
lean_closure_set(v___f_5086_, 8, v_mods_5070_);
lean_closure_set(v___f_5086_, 9, v___x_5078_);
lean_closure_set(v___f_5086_, 10, v_optDeriving_5079_);
lean_closure_set(v___f_5086_, 11, v___x_5080_);
v___x_5087_ = lean_st_ref_get(v___y_5082_);
v_env_5088_ = lean_ctor_get(v___x_5087_, 0);
lean_inc_ref(v_env_5088_);
lean_dec(v___x_5087_);
v___x_5089_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_5088_, v_a_5085_);
lean_dec(v_a_5085_);
lean_dec_ref(v_env_5088_);
v___x_5090_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5086_, v___x_5089_, v___y_5081_, v___y_5082_);
return v___x_5090_;
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
lean_dec(v___x_5080_);
lean_dec(v_optDeriving_5079_);
lean_dec(v___x_5078_);
lean_dec(v___x_5077_);
lean_dec_ref(v_params_5076_);
lean_dec_ref(v___x_5075_);
lean_dec_ref(v___x_5074_);
lean_dec_ref(v___x_5073_);
lean_dec(v_projId_5072_);
lean_dec(v___x_5071_);
lean_dec(v_mods_5070_);
v_a_5091_ = lean_ctor_get(v___x_5084_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v___x_5084_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5093_ = v___x_5084_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v___x_5084_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5091_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3___boxed(lean_object* v_mods_5099_, lean_object* v___x_5100_, lean_object* v_projId_5101_, lean_object* v___x_5102_, lean_object* v___x_5103_, lean_object* v___x_5104_, lean_object* v_params_5105_, lean_object* v___x_5106_, lean_object* v___x_5107_, lean_object* v_optDeriving_5108_, lean_object* v___x_5109_, lean_object* v___y_5110_, lean_object* v___y_5111_, lean_object* v___y_5112_){
_start:
{
lean_object* v_res_5113_; 
v_res_5113_ = l_Lean_Elab_Command_elabNewtype___lam__3(v_mods_5099_, v___x_5100_, v_projId_5101_, v___x_5102_, v___x_5103_, v___x_5104_, v_params_5105_, v___x_5106_, v___x_5107_, v_optDeriving_5108_, v___x_5109_, v___y_5110_, v___y_5111_);
lean_dec(v___y_5111_);
lean_dec_ref(v___y_5110_);
return v_res_5113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_stx_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_){
_start:
{
lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v_mods_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v_params_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v_projId_5132_; lean_object* v___x_5133_; lean_object* v_optDeriving_5134_; lean_object* v___f_5135_; lean_object* v___x_5136_; 
v___x_5118_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0));
v___x_5119_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1));
v___x_5120_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5));
v___x_5121_ = lean_box(0);
v___x_5122_ = lean_unsigned_to_nat(0u);
v_mods_5123_ = l_Lean_Syntax_getArg(v_stx_5114_, v___x_5122_);
v___x_5124_ = lean_unsigned_to_nat(2u);
v___x_5125_ = l_Lean_Syntax_getArg(v_stx_5114_, v___x_5124_);
v___x_5126_ = lean_unsigned_to_nat(3u);
v___x_5127_ = l_Lean_Syntax_getArg(v_stx_5114_, v___x_5126_);
v_params_5128_ = l_Lean_Syntax_getArgs(v___x_5127_);
lean_dec(v___x_5127_);
v___x_5129_ = lean_unsigned_to_nat(5u);
v___x_5130_ = l_Lean_Syntax_getArg(v_stx_5114_, v___x_5129_);
v___x_5131_ = lean_unsigned_to_nat(7u);
v_projId_5132_ = l_Lean_Syntax_getArg(v_stx_5114_, v___x_5131_);
v___x_5133_ = lean_unsigned_to_nat(8u);
v_optDeriving_5134_ = l_Lean_Syntax_getArg(v_stx_5114_, v___x_5133_);
v___f_5135_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__3___boxed), 14, 11);
lean_closure_set(v___f_5135_, 0, v_mods_5123_);
lean_closure_set(v___f_5135_, 1, v___x_5125_);
lean_closure_set(v___f_5135_, 2, v_projId_5132_);
lean_closure_set(v___f_5135_, 3, v___x_5118_);
lean_closure_set(v___f_5135_, 4, v___x_5119_);
lean_closure_set(v___f_5135_, 5, v___x_5120_);
lean_closure_set(v___f_5135_, 6, v_params_5128_);
lean_closure_set(v___f_5135_, 7, v___x_5130_);
lean_closure_set(v___f_5135_, 8, v___x_5121_);
lean_closure_set(v___f_5135_, 9, v_optDeriving_5134_);
lean_closure_set(v___f_5135_, 10, v___x_5122_);
v___x_5136_ = l_Lean_Elab_Command_getScope___redArg(v___y_5116_);
if (lean_obj_tag(v___x_5136_) == 0)
{
lean_object* v_a_5137_; uint8_t v_isPublic_5138_; lean_object* v___x_5139_; 
v_a_5137_ = lean_ctor_get(v___x_5136_, 0);
lean_inc(v_a_5137_);
lean_dec_ref_known(v___x_5136_, 1);
v_isPublic_5138_ = lean_ctor_get_uint8(v_a_5137_, sizeof(void*)*10 + 1);
lean_dec(v_a_5137_);
v___x_5139_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5135_, v_isPublic_5138_, v___y_5115_, v___y_5116_);
return v___x_5139_;
}
else
{
lean_object* v_a_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5147_; 
lean_dec_ref(v___f_5135_);
v_a_5140_ = lean_ctor_get(v___x_5136_, 0);
v_isSharedCheck_5147_ = !lean_is_exclusive(v___x_5136_);
if (v_isSharedCheck_5147_ == 0)
{
v___x_5142_ = v___x_5136_;
v_isShared_5143_ = v_isSharedCheck_5147_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_a_5140_);
lean_dec(v___x_5136_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5147_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5145_; 
if (v_isShared_5143_ == 0)
{
v___x_5145_ = v___x_5142_;
goto v_reusejp_5144_;
}
else
{
lean_object* v_reuseFailAlloc_5146_; 
v_reuseFailAlloc_5146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5146_, 0, v_a_5140_);
v___x_5145_ = v_reuseFailAlloc_5146_;
goto v_reusejp_5144_;
}
v_reusejp_5144_:
{
return v___x_5145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_stx_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_){
_start:
{
lean_object* v_res_5152_; 
v_res_5152_ = l_Lean_Elab_Command_elabNewtype(v_stx_5148_, v___y_5149_, v___y_5150_);
lean_dec(v___y_5150_);
lean_dec_ref(v___y_5149_);
lean_dec(v_stx_5148_);
return v_res_5152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(lean_object* v_stx_5153_, lean_object* v___y_5154_, lean_object* v___y_5155_){
_start:
{
lean_object* v___x_5157_; 
v___x_5157_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_5153_, v___y_5154_);
return v___x_5157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___boxed(lean_object* v_stx_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_){
_start:
{
lean_object* v_res_5162_; 
v_res_5162_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(v_stx_5158_, v___y_5159_, v___y_5160_);
lean_dec(v___y_5160_);
lean_dec_ref(v___y_5159_);
lean_dec(v_stx_5158_);
return v_res_5162_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(lean_object* v_declName_5163_, lean_object* v_declRanges_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_){
_start:
{
lean_object* v___x_5168_; 
v___x_5168_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_5163_, v_declRanges_5164_, v___y_5166_);
return v___x_5168_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___boxed(lean_object* v_declName_5169_, lean_object* v_declRanges_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_){
_start:
{
lean_object* v_res_5174_; 
v_res_5174_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(v_declName_5169_, v_declRanges_5170_, v___y_5171_, v___y_5172_);
lean_dec(v___y_5172_);
lean_dec_ref(v___y_5171_);
return v_res_5174_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(lean_object* v_00_u03b1_5175_, lean_object* v_x_5176_, uint8_t v_isExporting_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v___y_5183_){
_start:
{
lean_object* v___x_5185_; 
v___x_5185_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_5176_, v_isExporting_5177_, v___y_5178_, v___y_5179_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
return v___x_5185_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___boxed(lean_object* v_00_u03b1_5186_, lean_object* v_x_5187_, lean_object* v_isExporting_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_){
_start:
{
uint8_t v_isExporting_boxed_5196_; lean_object* v_res_5197_; 
v_isExporting_boxed_5196_ = lean_unbox(v_isExporting_5188_);
v_res_5197_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(v_00_u03b1_5186_, v_x_5187_, v_isExporting_boxed_5196_, v___y_5189_, v___y_5190_, v___y_5191_, v___y_5192_, v___y_5193_, v___y_5194_);
lean_dec(v___y_5194_);
lean_dec_ref(v___y_5193_);
lean_dec(v___y_5192_);
lean_dec_ref(v___y_5191_);
lean_dec(v___y_5190_);
lean_dec_ref(v___y_5189_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_00_u03b1_5198_, lean_object* v_x_5199_, uint8_t v_when_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_){
_start:
{
lean_object* v___x_5208_; 
v___x_5208_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_5199_, v_when_5200_, v___y_5201_, v___y_5202_, v___y_5203_, v___y_5204_, v___y_5205_, v___y_5206_);
return v___x_5208_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_00_u03b1_5209_, lean_object* v_x_5210_, lean_object* v_when_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_){
_start:
{
uint8_t v_when_boxed_5219_; lean_object* v_res_5220_; 
v_when_boxed_5219_ = lean_unbox(v_when_5211_);
v_res_5220_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(v_00_u03b1_5209_, v_x_5210_, v_when_boxed_5219_, v___y_5212_, v___y_5213_, v___y_5214_, v___y_5215_, v___y_5216_, v___y_5217_);
lean_dec(v___y_5217_);
lean_dec_ref(v___y_5216_);
lean_dec(v___y_5215_);
lean_dec_ref(v___y_5214_);
lean_dec(v___y_5213_);
lean_dec_ref(v___y_5212_);
return v_res_5220_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(lean_object* v_declName_5221_, uint8_t v_s_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_){
_start:
{
lean_object* v___x_5226_; 
v___x_5226_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_5221_, v_s_5222_, v___y_5224_);
return v___x_5226_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___boxed(lean_object* v_declName_5227_, lean_object* v_s_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_){
_start:
{
uint8_t v_s_boxed_5232_; lean_object* v_res_5233_; 
v_s_boxed_5232_ = lean_unbox(v_s_5228_);
v_res_5233_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(v_declName_5227_, v_s_boxed_5232_, v___y_5229_, v___y_5230_);
lean_dec(v___y_5230_);
lean_dec_ref(v___y_5229_);
return v_res_5233_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(lean_object* v_as_5234_, lean_object* v_as_x27_5235_, lean_object* v_b_5236_, lean_object* v_a_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_){
_start:
{
lean_object* v___x_5241_; 
v___x_5241_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_5235_, v_b_5236_, v___y_5238_, v___y_5239_);
return v___x_5241_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___boxed(lean_object* v_as_5242_, lean_object* v_as_x27_5243_, lean_object* v_b_5244_, lean_object* v_a_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_){
_start:
{
lean_object* v_res_5249_; 
v_res_5249_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(v_as_5242_, v_as_x27_5243_, v_b_5244_, v_a_5245_, v___y_5246_, v___y_5247_);
lean_dec(v___y_5247_);
lean_dec_ref(v___y_5246_);
lean_dec(v_as_x27_5243_);
lean_dec(v_as_5242_);
return v_res_5249_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(lean_object* v_as_5250_, lean_object* v_as_x27_5251_, lean_object* v_b_5252_, lean_object* v_a_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_){
_start:
{
lean_object* v___x_5257_; 
v___x_5257_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_5251_, v_b_5252_, v___y_5254_, v___y_5255_);
return v___x_5257_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed(lean_object* v_as_5258_, lean_object* v_as_x27_5259_, lean_object* v_b_5260_, lean_object* v_a_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_){
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(v_as_5258_, v_as_x27_5259_, v_b_5260_, v_a_5261_, v___y_5262_, v___y_5263_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec(v_as_x27_5259_);
lean_dec(v_as_5258_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(lean_object* v_t_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_){
_start:
{
lean_object* v___x_5270_; 
v___x_5270_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_5266_, v___y_5268_);
return v___x_5270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___boxed(lean_object* v_t_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_){
_start:
{
lean_object* v_res_5275_; 
v_res_5275_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(v_t_5271_, v___y_5272_, v___y_5273_);
lean_dec(v___y_5273_);
lean_dec_ref(v___y_5272_);
return v_res_5275_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(lean_object* v_00_u03b1_5276_, lean_object* v_constName_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_){
_start:
{
lean_object* v___x_5285_; 
v___x_5285_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_);
return v___x_5285_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___boxed(lean_object* v_00_u03b1_5286_, lean_object* v_constName_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_){
_start:
{
lean_object* v_res_5295_; 
v_res_5295_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(v_00_u03b1_5286_, v_constName_5287_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_, v___y_5292_, v___y_5293_);
lean_dec(v___y_5293_);
lean_dec_ref(v___y_5292_);
lean_dec(v___y_5291_);
lean_dec_ref(v___y_5290_);
lean_dec(v___y_5289_);
lean_dec_ref(v___y_5288_);
return v_res_5295_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_5296_, lean_object* v_ref_5297_, lean_object* v_msg_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_){
_start:
{
lean_object* v___x_5302_; 
v___x_5302_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_5297_, v_msg_5298_, v___y_5299_, v___y_5300_);
return v___x_5302_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5303_, lean_object* v_ref_5304_, lean_object* v_msg_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_){
_start:
{
lean_object* v_res_5309_; 
v_res_5309_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(v_00_u03b1_5303_, v_ref_5304_, v_msg_5305_, v___y_5306_, v___y_5307_);
lean_dec(v___y_5307_);
lean_dec_ref(v___y_5306_);
lean_dec(v_ref_5304_);
return v_res_5309_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(lean_object* v_00_u03b1_5310_, lean_object* v_ref_5311_, lean_object* v_constName_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_){
_start:
{
lean_object* v___x_5320_; 
v___x_5320_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_5311_, v_constName_5312_, v___y_5313_, v___y_5314_, v___y_5315_, v___y_5316_, v___y_5317_, v___y_5318_);
return v___x_5320_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___boxed(lean_object* v_00_u03b1_5321_, lean_object* v_ref_5322_, lean_object* v_constName_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_){
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(v_00_u03b1_5321_, v_ref_5322_, v_constName_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_, v___y_5328_, v___y_5329_);
lean_dec(v___y_5329_);
lean_dec_ref(v___y_5328_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec(v_ref_5322_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(lean_object* v_msgData_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_){
_start:
{
lean_object* v___x_5336_; 
v___x_5336_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_5332_, v___y_5334_);
return v___x_5336_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___boxed(lean_object* v_msgData_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_){
_start:
{
lean_object* v_res_5341_; 
v_res_5341_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(v_msgData_5337_, v___y_5338_, v___y_5339_);
lean_dec(v___y_5339_);
lean_dec_ref(v___y_5338_);
return v_res_5341_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(lean_object* v_00_u03b1_5342_, lean_object* v_msg_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_){
_start:
{
lean_object* v___x_5347_; 
v___x_5347_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_5343_, v___y_5344_, v___y_5345_);
return v___x_5347_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___boxed(lean_object* v_00_u03b1_5348_, lean_object* v_msg_5349_, lean_object* v___y_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(v_00_u03b1_5348_, v_msg_5349_, v___y_5350_, v___y_5351_);
lean_dec(v___y_5351_);
lean_dec_ref(v___y_5350_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(lean_object* v_o_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_){
_start:
{
lean_object* v___x_5358_; 
v___x_5358_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_5354_, v___y_5356_);
return v___x_5358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___boxed(lean_object* v_o_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_, lean_object* v___y_5362_){
_start:
{
lean_object* v_res_5363_; 
v_res_5363_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(v_o_5359_, v___y_5360_, v___y_5361_);
lean_dec(v___y_5361_);
lean_dec_ref(v___y_5360_);
return v_res_5363_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(lean_object* v_00_u03b1_5364_, lean_object* v_constName_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_){
_start:
{
lean_object* v___x_5369_; 
v___x_5369_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_5365_, v___y_5366_, v___y_5367_);
return v___x_5369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___boxed(lean_object* v_00_u03b1_5370_, lean_object* v_constName_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_){
_start:
{
lean_object* v_res_5375_; 
v_res_5375_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(v_00_u03b1_5370_, v_constName_5371_, v___y_5372_, v___y_5373_);
lean_dec(v___y_5373_);
lean_dec_ref(v___y_5372_);
return v_res_5375_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(lean_object* v_00_u03b1_5376_, lean_object* v_ref_5377_, lean_object* v_msg_5378_, lean_object* v_declHint_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_){
_start:
{
lean_object* v___x_5387_; 
v___x_5387_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_5377_, v_msg_5378_, v_declHint_5379_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
return v___x_5387_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___boxed(lean_object* v_00_u03b1_5388_, lean_object* v_ref_5389_, lean_object* v_msg_5390_, lean_object* v_declHint_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_){
_start:
{
lean_object* v_res_5399_; 
v_res_5399_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(v_00_u03b1_5388_, v_ref_5389_, v_msg_5390_, v_declHint_5391_, v___y_5392_, v___y_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_);
lean_dec(v___y_5397_);
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
lean_dec(v___y_5393_);
lean_dec_ref(v___y_5392_);
lean_dec(v_ref_5389_);
return v_res_5399_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(lean_object* v_ref_5400_, lean_object* v_msgData_5401_, uint8_t v_severity_5402_, uint8_t v_isSilent_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_){
_start:
{
lean_object* v___x_5411_; 
v___x_5411_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_5400_, v_msgData_5401_, v_severity_5402_, v_isSilent_5403_, v___y_5406_, v___y_5407_, v___y_5408_, v___y_5409_);
return v___x_5411_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___boxed(lean_object* v_ref_5412_, lean_object* v_msgData_5413_, lean_object* v_severity_5414_, lean_object* v_isSilent_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_){
_start:
{
uint8_t v_severity_boxed_5423_; uint8_t v_isSilent_boxed_5424_; lean_object* v_res_5425_; 
v_severity_boxed_5423_ = lean_unbox(v_severity_5414_);
v_isSilent_boxed_5424_ = lean_unbox(v_isSilent_5415_);
v_res_5425_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(v_ref_5412_, v_msgData_5413_, v_severity_boxed_5423_, v_isSilent_boxed_5424_, v___y_5416_, v___y_5417_, v___y_5418_, v___y_5419_, v___y_5420_, v___y_5421_);
lean_dec(v___y_5421_);
lean_dec_ref(v___y_5420_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec(v___y_5417_);
lean_dec_ref(v___y_5416_);
lean_dec(v_ref_5412_);
return v_res_5425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(lean_object* v_msgData_5426_, lean_object* v_macroStack_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_){
_start:
{
lean_object* v___x_5431_; 
v___x_5431_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_5426_, v_macroStack_5427_, v___y_5429_);
return v___x_5431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___boxed(lean_object* v_msgData_5432_, lean_object* v_macroStack_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_, lean_object* v___y_5436_){
_start:
{
lean_object* v_res_5437_; 
v_res_5437_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(v_msgData_5432_, v_macroStack_5433_, v___y_5434_, v___y_5435_);
lean_dec(v___y_5435_);
lean_dec_ref(v___y_5434_);
return v_res_5437_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(lean_object* v_00_u03b1_5438_, lean_object* v_x_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_){
_start:
{
lean_object* v___x_5442_; 
v___x_5442_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_5439_, v___y_5441_);
return v___x_5442_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___boxed(lean_object* v_00_u03b1_5443_, lean_object* v_x_5444_, lean_object* v___y_5445_, lean_object* v___y_5446_){
_start:
{
lean_object* v_res_5447_; 
v_res_5447_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(v_00_u03b1_5443_, v_x_5444_, v___y_5445_, v___y_5446_);
lean_dec_ref(v___y_5445_);
lean_dec_ref(v_x_5444_);
return v_res_5447_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(lean_object* v_00_u03b1_5448_, lean_object* v_ref_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_){
_start:
{
lean_object* v___x_5453_; 
v___x_5453_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_5449_);
return v___x_5453_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___boxed(lean_object* v_00_u03b1_5454_, lean_object* v_ref_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_){
_start:
{
lean_object* v_res_5459_; 
v_res_5459_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(v_00_u03b1_5454_, v_ref_5455_, v___y_5456_, v___y_5457_);
lean_dec(v___y_5457_);
lean_dec_ref(v___y_5456_);
return v_res_5459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(lean_object* v_00_u03b1_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_){
_start:
{
lean_object* v___x_5464_; 
v___x_5464_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___boxed(lean_object* v_00_u03b1_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_){
_start:
{
lean_object* v_res_5469_; 
v_res_5469_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(v_00_u03b1_5465_, v___y_5466_, v___y_5467_);
lean_dec(v___y_5467_);
lean_dec_ref(v___y_5466_);
return v_res_5469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(lean_object* v_00_u03b1_5470_, lean_object* v_x_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_){
_start:
{
lean_object* v___x_5475_; 
v___x_5475_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_5471_, v___y_5472_, v___y_5473_);
return v___x_5475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___boxed(lean_object* v_00_u03b1_5476_, lean_object* v_x_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_){
_start:
{
lean_object* v_res_5481_; 
v_res_5481_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(v_00_u03b1_5476_, v_x_5477_, v___y_5478_, v___y_5479_);
lean_dec(v___y_5479_);
lean_dec_ref(v___y_5478_);
return v_res_5481_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(lean_object* v_00_u03b1_5482_, lean_object* v_x_5483_, uint8_t v_when_5484_, lean_object* v___y_5485_, lean_object* v___y_5486_){
_start:
{
lean_object* v___x_5488_; 
v___x_5488_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_5483_, v_when_5484_, v___y_5485_, v___y_5486_);
return v___x_5488_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___boxed(lean_object* v_00_u03b1_5489_, lean_object* v_x_5490_, lean_object* v_when_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_){
_start:
{
uint8_t v_when_boxed_5495_; lean_object* v_res_5496_; 
v_when_boxed_5495_ = lean_unbox(v_when_5491_);
v_res_5496_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(v_00_u03b1_5489_, v_x_5490_, v_when_boxed_5495_, v___y_5492_, v___y_5493_);
lean_dec(v___y_5493_);
lean_dec_ref(v___y_5492_);
return v_res_5496_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(lean_object* v_00_u03b1_5497_, lean_object* v_ref_5498_, lean_object* v_constName_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_){
_start:
{
lean_object* v___x_5503_; 
v___x_5503_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_5498_, v_constName_5499_, v___y_5500_, v___y_5501_);
return v___x_5503_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___boxed(lean_object* v_00_u03b1_5504_, lean_object* v_ref_5505_, lean_object* v_constName_5506_, lean_object* v___y_5507_, lean_object* v___y_5508_, lean_object* v___y_5509_){
_start:
{
lean_object* v_res_5510_; 
v_res_5510_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(v_00_u03b1_5504_, v_ref_5505_, v_constName_5506_, v___y_5507_, v___y_5508_);
lean_dec(v___y_5508_);
lean_dec_ref(v___y_5507_);
lean_dec(v_ref_5505_);
return v_res_5510_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(lean_object* v_msg_5511_, lean_object* v_declHint_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_, lean_object* v___y_5517_, lean_object* v___y_5518_){
_start:
{
lean_object* v___x_5520_; 
v___x_5520_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_5511_, v_declHint_5512_, v___y_5518_);
return v___x_5520_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___boxed(lean_object* v_msg_5521_, lean_object* v_declHint_5522_, lean_object* v___y_5523_, lean_object* v___y_5524_, lean_object* v___y_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_, lean_object* v___y_5529_){
_start:
{
lean_object* v_res_5530_; 
v_res_5530_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(v_msg_5521_, v_declHint_5522_, v___y_5523_, v___y_5524_, v___y_5525_, v___y_5526_, v___y_5527_, v___y_5528_);
lean_dec(v___y_5528_);
lean_dec_ref(v___y_5527_);
lean_dec(v___y_5526_);
lean_dec_ref(v___y_5525_);
lean_dec(v___y_5524_);
lean_dec_ref(v___y_5523_);
return v_res_5530_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(lean_object* v_00_u03b1_5531_, lean_object* v_ref_5532_, lean_object* v_msg_5533_, lean_object* v___y_5534_, lean_object* v___y_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_){
_start:
{
lean_object* v___x_5541_; 
v___x_5541_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_5532_, v_msg_5533_, v___y_5534_, v___y_5535_, v___y_5536_, v___y_5537_, v___y_5538_, v___y_5539_);
return v___x_5541_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___boxed(lean_object* v_00_u03b1_5542_, lean_object* v_ref_5543_, lean_object* v_msg_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_){
_start:
{
lean_object* v_res_5552_; 
v_res_5552_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(v_00_u03b1_5542_, v_ref_5543_, v_msg_5544_, v___y_5545_, v___y_5546_, v___y_5547_, v___y_5548_, v___y_5549_, v___y_5550_);
lean_dec(v___y_5550_);
lean_dec_ref(v___y_5549_);
lean_dec(v___y_5548_);
lean_dec_ref(v___y_5547_);
lean_dec(v___y_5546_);
lean_dec_ref(v___y_5545_);
lean_dec(v_ref_5543_);
return v_res_5552_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(lean_object* v_as_5553_, lean_object* v_as_x27_5554_, lean_object* v_b_5555_, lean_object* v_a_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_){
_start:
{
lean_object* v___x_5560_; 
v___x_5560_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_5554_, v_b_5555_, v___y_5557_, v___y_5558_);
return v___x_5560_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___boxed(lean_object* v_as_5561_, lean_object* v_as_x27_5562_, lean_object* v_b_5563_, lean_object* v_a_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_){
_start:
{
lean_object* v_res_5568_; 
v_res_5568_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(v_as_5561_, v_as_x27_5562_, v_b_5563_, v_a_5564_, v___y_5565_, v___y_5566_);
lean_dec(v___y_5566_);
lean_dec_ref(v___y_5565_);
lean_dec(v_as_x27_5562_);
lean_dec(v_as_5561_);
return v_res_5568_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(lean_object* v_00_u03b2_5569_, lean_object* v_m_5570_, lean_object* v_a_5571_){
_start:
{
lean_object* v___x_5572_; 
v___x_5572_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_5570_, v_a_5571_);
return v___x_5572_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___boxed(lean_object* v_00_u03b2_5573_, lean_object* v_m_5574_, lean_object* v_a_5575_){
_start:
{
lean_object* v_res_5576_; 
v_res_5576_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(v_00_u03b2_5573_, v_m_5574_, v_a_5575_);
lean_dec(v_a_5575_);
lean_dec_ref(v_m_5574_);
return v_res_5576_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(lean_object* v_00_u03b1_5577_, lean_object* v_ref_5578_, lean_object* v_msg_5579_, lean_object* v_declHint_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_){
_start:
{
lean_object* v___x_5584_; 
v___x_5584_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_5578_, v_msg_5579_, v_declHint_5580_, v___y_5581_, v___y_5582_);
return v___x_5584_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___boxed(lean_object* v_00_u03b1_5585_, lean_object* v_ref_5586_, lean_object* v_msg_5587_, lean_object* v_declHint_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_){
_start:
{
lean_object* v_res_5592_; 
v_res_5592_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(v_00_u03b1_5585_, v_ref_5586_, v_msg_5587_, v_declHint_5588_, v___y_5589_, v___y_5590_);
lean_dec(v___y_5590_);
lean_dec_ref(v___y_5589_);
lean_dec(v_ref_5586_);
return v_res_5592_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(lean_object* v_00_u03b2_5593_, lean_object* v_x_5594_, lean_object* v_x_5595_){
_start:
{
uint8_t v___x_5596_; 
v___x_5596_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_5594_, v_x_5595_);
return v___x_5596_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___boxed(lean_object* v_00_u03b2_5597_, lean_object* v_x_5598_, lean_object* v_x_5599_){
_start:
{
uint8_t v_res_5600_; lean_object* v_r_5601_; 
v_res_5600_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(v_00_u03b2_5597_, v_x_5598_, v_x_5599_);
lean_dec_ref(v_x_5599_);
lean_dec_ref(v_x_5598_);
v_r_5601_ = lean_box(v_res_5600_);
return v_r_5601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(lean_object* v_00_u03b2_5602_, lean_object* v_a_5603_, lean_object* v_x_5604_){
_start:
{
lean_object* v___x_5605_; 
v___x_5605_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_5603_, v_x_5604_);
return v___x_5605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___boxed(lean_object* v_00_u03b2_5606_, lean_object* v_a_5607_, lean_object* v_x_5608_){
_start:
{
lean_object* v_res_5609_; 
v_res_5609_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(v_00_u03b2_5606_, v_a_5607_, v_x_5608_);
lean_dec(v_x_5608_);
lean_dec(v_a_5607_);
return v_res_5609_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(lean_object* v_msg_5610_, lean_object* v_declHint_5611_, lean_object* v___y_5612_, lean_object* v___y_5613_){
_start:
{
lean_object* v___x_5615_; 
v___x_5615_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_5610_, v_declHint_5611_, v___y_5613_);
return v___x_5615_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___boxed(lean_object* v_msg_5616_, lean_object* v_declHint_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_){
_start:
{
lean_object* v_res_5621_; 
v_res_5621_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(v_msg_5616_, v_declHint_5617_, v___y_5618_, v___y_5619_);
lean_dec(v___y_5619_);
lean_dec_ref(v___y_5618_);
return v_res_5621_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(lean_object* v_00_u03b2_5622_, lean_object* v_x_5623_, size_t v_x_5624_, lean_object* v_x_5625_){
_start:
{
uint8_t v___x_5626_; 
v___x_5626_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_5623_, v_x_5624_, v_x_5625_);
return v___x_5626_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___boxed(lean_object* v_00_u03b2_5627_, lean_object* v_x_5628_, lean_object* v_x_5629_, lean_object* v_x_5630_){
_start:
{
size_t v_x_57501__boxed_5631_; uint8_t v_res_5632_; lean_object* v_r_5633_; 
v_x_57501__boxed_5631_ = lean_unbox_usize(v_x_5629_);
lean_dec(v_x_5629_);
v_res_5632_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(v_00_u03b2_5627_, v_x_5628_, v_x_57501__boxed_5631_, v_x_5630_);
lean_dec_ref(v_x_5630_);
lean_dec_ref(v_x_5628_);
v_r_5633_ = lean_box(v_res_5632_);
return v_r_5633_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(lean_object* v_00_u03b2_5634_, lean_object* v_keys_5635_, lean_object* v_vals_5636_, lean_object* v_heq_5637_, lean_object* v_i_5638_, lean_object* v_k_5639_){
_start:
{
uint8_t v___x_5640_; 
v___x_5640_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_5635_, v_i_5638_, v_k_5639_);
return v___x_5640_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___boxed(lean_object* v_00_u03b2_5641_, lean_object* v_keys_5642_, lean_object* v_vals_5643_, lean_object* v_heq_5644_, lean_object* v_i_5645_, lean_object* v_k_5646_){
_start:
{
uint8_t v_res_5647_; lean_object* v_r_5648_; 
v_res_5647_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(v_00_u03b2_5641_, v_keys_5642_, v_vals_5643_, v_heq_5644_, v_i_5645_, v_k_5646_);
lean_dec_ref(v_k_5646_);
lean_dec_ref(v_vals_5643_);
lean_dec_ref(v_keys_5642_);
v_r_5648_ = lean_box(v_res_5647_);
return v_r_5648_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; 
v___x_5662_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_5663_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1));
v___x_5664_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3));
v___x_5665_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_5666_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5662_, v___x_5663_, v___x_5664_, v___x_5665_);
return v___x_5666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v___y_5667_){
_start:
{
lean_object* v_res_5668_; 
v_res_5668_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_5668_;
}
}
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclModifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Function(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transport(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_NewType(uint8_t builtin) {
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
res = runtime_initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_NewType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclModifiers(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_Meta_VirtualStructure(uint8_t builtin);
lean_object* initialize_Init_Data_Function(uint8_t builtin);
lean_object* initialize_Lean_Elab_Deriving_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transport(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_NewType(uint8_t builtin) {
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
res = initialize_Init_Data_Function(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Deriving_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transport(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_NewType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_NewType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_NewType(builtin);
}
#ifdef __cplusplus
}
#endif
