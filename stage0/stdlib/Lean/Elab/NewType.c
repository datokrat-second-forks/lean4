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
uint8_t v___x_13555__boxed_355_; lean_object* v_res_356_; 
v___x_13555__boxed_355_ = lean_unbox(v___x_346_);
v_res_356_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_params_342_, v_resultType_343_, v_name_344_, v_levelParams_345_, v___x_13555__boxed_355_, v_a_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
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
uint8_t v___x_13760__boxed_469_; lean_object* v_res_470_; 
v___x_13760__boxed_469_ = lean_unbox(v___x_457_);
v_res_470_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_455_, v_levelParams_456_, v___x_13760__boxed_469_, v_name_458_, v_argName_459_, v_argType_460_, v_resultType_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
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
uint8_t v___x_13790__boxed_497_; lean_object* v_res_498_; 
v___x_13790__boxed_497_ = lean_unbox(v___x_488_);
v_res_498_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(v___x_13790__boxed_497_, v_a_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
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
lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_635_; 
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_635_ == 0)
{
lean_object* v_unused_636_; 
v_unused_636_ = lean_ctor_get(v___x_532_, 0);
lean_dec(v_unused_636_);
v___x_534_ = v___x_532_;
v_isShared_535_ = v_isSharedCheck_635_;
goto v_resetjp_533_;
}
else
{
lean_dec(v___x_532_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_635_;
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
lean_object* v_a_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_586_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_569_, 1);
v___x_571_ = lean_box(1);
lean_inc(v_equivName_520_);
v___x_572_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_equivName_520_, v_levelParams_521_, v_a_568_, v_a_570_, v___x_571_, v___y_528_);
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_586_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_586_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_586_;
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
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_585_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; 
lean_inc_ref(v___x_578_);
v___x_579_ = l_Lean_addDecl(v___x_578_, v___x_522_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_579_) == 0)
{
uint8_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
lean_dec_ref_known(v___x_579_, 1);
v___x_580_ = 0;
lean_inc(v_equivName_520_);
v___x_581_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_equivName_520_, v___x_580_, v___y_526_, v___y_528_);
lean_dec_ref(v___x_581_);
v___x_582_ = l_Lean_compileDecl(v___x_578_, v___x_539_, v___y_527_, v___y_528_);
if (lean_obj_tag(v___x_582_) == 0)
{
uint8_t v___x_583_; lean_object* v___x_584_; 
lean_dec_ref_known(v___x_582_, 1);
v___x_583_ = 0;
v___x_584_ = l_Lean_Meta_Transport_addTransportDecl(v_equivName_520_, v___x_583_, v___y_525_, v___y_526_, v___y_527_, v___y_528_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
return v___x_584_;
}
else
{
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_equivName_520_);
return v___x_582_;
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
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec(v_a_568_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_587_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_569_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_569_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_592_; 
if (v_isShared_590_ == 0)
{
v___x_592_ = v___x_589_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v_a_587_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
return v___x_592_;
}
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
lean_dec(v_a_562_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_595_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_567_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_567_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
lean_dec(v_a_562_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_603_ = lean_ctor_get(v___x_563_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_563_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_563_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_563_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_611_ = lean_ctor_get(v___x_561_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_561_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_561_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_561_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_dec(v_a_551_);
lean_dec_ref(v___x_549_);
lean_dec_ref(v___x_547_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
lean_dec(v___y_526_);
lean_dec_ref(v___y_525_);
lean_dec(v_levelParams_521_);
lean_dec(v_equivName_520_);
v_a_619_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_552_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_552_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
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
v_a_627_ = lean_ctor_get(v___x_550_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_550_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_550_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_550_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
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
lean_object* v___f_637_ = _args[0];
lean_object* v_ctorName_638_ = _args[1];
lean_object* v_fieldName_639_ = _args[2];
lean_object* v___x_640_ = _args[3];
lean_object* v___x_641_ = _args[4];
lean_object* v_projName_642_ = _args[5];
lean_object* v___x_643_ = _args[6];
lean_object* v_params_644_ = _args[7];
lean_object* v_equivName_645_ = _args[8];
lean_object* v_levelParams_646_ = _args[9];
lean_object* v___x_647_ = _args[10];
lean_object* v___y_648_ = _args[11];
lean_object* v___y_649_ = _args[12];
lean_object* v___y_650_ = _args[13];
lean_object* v___y_651_ = _args[14];
lean_object* v___y_652_ = _args[15];
lean_object* v___y_653_ = _args[16];
lean_object* v___y_654_ = _args[17];
_start:
{
uint8_t v___x_13859__boxed_655_; lean_object* v_res_656_; 
v___x_13859__boxed_655_ = lean_unbox(v___x_647_);
v_res_656_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(v___f_637_, v_ctorName_638_, v_fieldName_639_, v___x_640_, v___x_641_, v_projName_642_, v___x_643_, v_params_644_, v_equivName_645_, v_levelParams_646_, v___x_13859__boxed_655_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec_ref(v_params_644_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(lean_object* v_msgData_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v___x_663_; lean_object* v_env_664_; lean_object* v___x_665_; lean_object* v_toCold_666_; lean_object* v_mctx_667_; lean_object* v_lctx_668_; lean_object* v_options_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_663_ = lean_st_ref_get(v___y_661_);
v_env_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc_ref(v_env_664_);
lean_dec(v___x_663_);
v___x_665_ = lean_st_ref_get(v___y_659_);
v_toCold_666_ = lean_ctor_get(v___y_660_, 0);
v_mctx_667_ = lean_ctor_get(v___x_665_, 0);
lean_inc_ref(v_mctx_667_);
lean_dec(v___x_665_);
v_lctx_668_ = lean_ctor_get(v___y_658_, 2);
v_options_669_ = lean_ctor_get(v_toCold_666_, 2);
lean_inc_ref(v_options_669_);
lean_inc_ref(v_lctx_668_);
v___x_670_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_670_, 0, v_env_664_);
lean_ctor_set(v___x_670_, 1, v_mctx_667_);
lean_ctor_set(v___x_670_, 2, v_lctx_668_);
lean_ctor_set(v___x_670_, 3, v_options_669_);
v___x_671_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
lean_ctor_set(v___x_671_, 1, v_msgData_657_);
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v___x_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10___boxed(lean_object* v_msgData_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v_msgData_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
lean_dec(v___y_677_);
lean_dec_ref(v___y_676_);
lean_dec(v___y_675_);
lean_dec_ref(v___y_674_);
return v_res_679_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(lean_object* v_opts_680_, lean_object* v_opt_681_){
_start:
{
lean_object* v_name_682_; lean_object* v_defValue_683_; lean_object* v_map_684_; lean_object* v___x_685_; 
v_name_682_ = lean_ctor_get(v_opt_681_, 0);
v_defValue_683_ = lean_ctor_get(v_opt_681_, 1);
v_map_684_ = lean_ctor_get(v_opts_680_, 0);
v___x_685_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_684_, v_name_682_);
if (lean_obj_tag(v___x_685_) == 0)
{
uint8_t v___x_686_; 
v___x_686_ = lean_unbox(v_defValue_683_);
return v___x_686_;
}
else
{
lean_object* v_val_687_; 
v_val_687_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_val_687_);
lean_dec_ref_known(v___x_685_, 1);
if (lean_obj_tag(v_val_687_) == 1)
{
uint8_t v_v_688_; 
v_v_688_ = lean_ctor_get_uint8(v_val_687_, 0);
lean_dec_ref_known(v_val_687_, 0);
return v_v_688_;
}
else
{
uint8_t v___x_689_; 
lean_dec(v_val_687_);
v___x_689_ = lean_unbox(v_defValue_683_);
return v___x_689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13___boxed(lean_object* v_opts_690_, lean_object* v_opt_691_){
_start:
{
uint8_t v_res_692_; lean_object* v_r_693_; 
v_res_692_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_690_, v_opt_691_);
lean_dec_ref(v_opt_691_);
lean_dec_ref(v_opts_690_);
v_r_693_ = lean_box(v_res_692_);
return v_r_693_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_box(1);
v___x_695_ = l_Lean_MessageData_ofFormat(v___x_694_);
return v___x_695_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3(void){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__2));
v___x_700_ = l_Lean_MessageData_ofFormat(v___x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(lean_object* v_x_701_, lean_object* v_x_702_){
_start:
{
if (lean_obj_tag(v_x_702_) == 0)
{
return v_x_701_;
}
else
{
lean_object* v_head_703_; lean_object* v_tail_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_726_; 
v_head_703_ = lean_ctor_get(v_x_702_, 0);
v_tail_704_ = lean_ctor_get(v_x_702_, 1);
v_isSharedCheck_726_ = !lean_is_exclusive(v_x_702_);
if (v_isSharedCheck_726_ == 0)
{
v___x_706_ = v_x_702_;
v_isShared_707_ = v_isSharedCheck_726_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_tail_704_);
lean_inc(v_head_703_);
lean_dec(v_x_702_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_726_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v_before_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_724_; 
v_before_708_ = lean_ctor_get(v_head_703_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v_head_703_);
if (v_isSharedCheck_724_ == 0)
{
lean_object* v_unused_725_; 
v_unused_725_ = lean_ctor_get(v_head_703_, 1);
lean_dec(v_unused_725_);
v___x_710_ = v_head_703_;
v_isShared_711_ = v_isSharedCheck_724_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_before_708_);
lean_dec(v_head_703_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_724_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v___x_714_; 
v___x_712_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_711_ == 0)
{
lean_ctor_set_tag(v___x_710_, 7);
lean_ctor_set(v___x_710_, 1, v___x_712_);
lean_ctor_set(v___x_710_, 0, v_x_701_);
v___x_714_ = v___x_710_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_x_701_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v___x_712_);
v___x_714_ = v_reuseFailAlloc_723_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
lean_object* v___x_715_; lean_object* v___x_717_; 
v___x_715_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3);
if (v_isShared_707_ == 0)
{
lean_ctor_set_tag(v___x_706_, 7);
lean_ctor_set(v___x_706_, 1, v___x_715_);
lean_ctor_set(v___x_706_, 0, v___x_714_);
v___x_717_ = v___x_706_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_722_, 1, v___x_715_);
v___x_717_ = v_reuseFailAlloc_722_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_718_ = l_Lean_MessageData_ofSyntax(v_before_708_);
v___x_719_ = l_Lean_indentD(v___x_718_);
v___x_720_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_720_, 0, v___x_717_);
lean_ctor_set(v___x_720_, 1, v___x_719_);
v_x_701_ = v___x_720_;
v_x_702_ = v_tail_704_;
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
lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_730_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__1));
v___x_731_ = l_Lean_MessageData_ofFormat(v___x_730_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(lean_object* v_msgData_732_, lean_object* v_macroStack_733_, lean_object* v___y_734_){
_start:
{
lean_object* v_toCold_736_; lean_object* v_options_737_; lean_object* v___x_738_; uint8_t v___x_739_; 
v_toCold_736_ = lean_ctor_get(v___y_734_, 0);
v_options_737_ = lean_ctor_get(v_toCold_736_, 2);
v___x_738_ = l_Lean_Elab_pp_macroStack;
v___x_739_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_737_, v___x_738_);
if (v___x_739_ == 0)
{
lean_object* v___x_740_; 
lean_dec(v_macroStack_733_);
v___x_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_740_, 0, v_msgData_732_);
return v___x_740_;
}
else
{
if (lean_obj_tag(v_macroStack_733_) == 0)
{
lean_object* v___x_741_; 
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v_msgData_732_);
return v___x_741_;
}
else
{
lean_object* v_head_742_; lean_object* v_after_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_758_; 
v_head_742_ = lean_ctor_get(v_macroStack_733_, 0);
lean_inc(v_head_742_);
v_after_743_ = lean_ctor_get(v_head_742_, 1);
v_isSharedCheck_758_ = !lean_is_exclusive(v_head_742_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; 
v_unused_759_ = lean_ctor_get(v_head_742_, 0);
lean_dec(v_unused_759_);
v___x_745_ = v_head_742_;
v_isShared_746_ = v_isSharedCheck_758_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_after_743_);
lean_dec(v_head_742_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_758_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_747_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_746_ == 0)
{
lean_ctor_set_tag(v___x_745_, 7);
lean_ctor_set(v___x_745_, 1, v___x_747_);
lean_ctor_set(v___x_745_, 0, v_msgData_732_);
v___x_749_ = v___x_745_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_msgData_732_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v___x_747_);
v___x_749_ = v_reuseFailAlloc_757_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v_msgData_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_750_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_751_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_751_, 0, v___x_749_);
lean_ctor_set(v___x_751_, 1, v___x_750_);
v___x_752_ = l_Lean_MessageData_ofSyntax(v_after_743_);
v___x_753_ = l_Lean_indentD(v___x_752_);
v_msgData_754_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_754_, 0, v___x_751_);
lean_ctor_set(v_msgData_754_, 1, v___x_753_);
v___x_755_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_754_, v_macroStack_733_);
v___x_756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_756_, 0, v___x_755_);
return v___x_756_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___boxed(lean_object* v_msgData_760_, lean_object* v_macroStack_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_760_, v_macroStack_761_, v___y_762_);
lean_dec_ref(v___y_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(lean_object* v_msg_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v_ref_773_; lean_object* v_macroStack_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v_a_777_; lean_object* v___x_778_; lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_787_; 
v_ref_773_ = lean_ctor_get(v___y_770_, 2);
v_macroStack_774_ = lean_ctor_get(v___y_766_, 1);
v___x_775_ = l_Lean_Elab_getBetterRef(v_ref_773_, v_macroStack_774_);
v___x_776_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v_msg_765_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref(v___x_776_);
lean_inc(v_macroStack_774_);
v___x_778_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_a_777_, v_macroStack_774_, v___y_770_);
v_a_779_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_787_ == 0)
{
v___x_781_ = v___x_778_;
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_787_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v___x_775_);
lean_ctor_set(v___x_783_, 1, v_a_779_);
if (v_isShared_782_ == 0)
{
lean_ctor_set_tag(v___x_781_, 1);
lean_ctor_set(v___x_781_, 0, v___x_783_);
v___x_785_ = v___x_781_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v___x_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___boxed(lean_object* v_msg_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(lean_object* v_as_797_, size_t v_i_798_, size_t v_stop_799_, lean_object* v_b_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_a_806_; uint8_t v___x_810_; 
v___x_810_ = lean_usize_dec_eq(v_i_798_, v_stop_799_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = lean_array_uget_borrowed(v_as_797_, v_i_798_);
v___x_812_ = l_Lean_Expr_fvarId_x21(v___x_811_);
lean_inc(v___x_812_);
v___x_813_ = l_Lean_FVarId_getDecl___redArg(v___x_812_, v___y_801_, v___y_802_, v___y_803_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v_a_814_; uint8_t v___x_815_; uint8_t v___x_816_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v___x_815_ = l_Lean_LocalDecl_binderInfo(v_a_814_);
lean_dec(v_a_814_);
v___x_816_ = l_Lean_BinderInfo_isExplicit(v___x_815_);
if (v___x_816_ == 0)
{
lean_dec(v___x_812_);
v_a_806_ = v_b_800_;
goto v___jp_805_;
}
else
{
uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_817_ = 1;
v___x_818_ = lean_box(v___x_817_);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_812_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
v___x_820_ = lean_array_push(v_b_800_, v___x_819_);
v_a_806_ = v___x_820_;
goto v___jp_805_;
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec(v___x_812_);
lean_dec_ref(v_b_800_);
v_a_821_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_813_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_813_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
else
{
lean_object* v___x_829_; 
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_b_800_);
return v___x_829_;
}
v___jp_805_:
{
size_t v___x_807_; size_t v___x_808_; 
v___x_807_ = ((size_t)1ULL);
v___x_808_ = lean_usize_add(v_i_798_, v___x_807_);
v_i_798_ = v___x_808_;
v_b_800_ = v_a_806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg___boxed(lean_object* v_as_830_, lean_object* v_i_831_, lean_object* v_stop_832_, lean_object* v_b_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_){
_start:
{
size_t v_i_boxed_838_; size_t v_stop_boxed_839_; lean_object* v_res_840_; 
v_i_boxed_838_ = lean_unbox_usize(v_i_831_);
lean_dec(v_i_831_);
v_stop_boxed_839_ = lean_unbox_usize(v_stop_832_);
lean_dec(v_stop_832_);
v_res_840_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_830_, v_i_boxed_838_, v_stop_boxed_839_, v_b_833_, v___y_834_, v___y_835_, v___y_836_);
lean_dec(v___y_836_);
lean_dec_ref(v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec_ref(v_as_830_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(lean_object* v_as_843_, lean_object* v_start_844_, lean_object* v_stop_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_){
_start:
{
lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_853_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0));
v___x_854_ = lean_nat_dec_lt(v_start_844_, v_stop_845_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; 
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_853_);
return v___x_855_;
}
else
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = lean_array_get_size(v_as_843_);
v___x_857_ = lean_nat_dec_le(v_stop_845_, v___x_856_);
if (v___x_857_ == 0)
{
uint8_t v___x_858_; 
v___x_858_ = lean_nat_dec_lt(v_start_844_, v___x_856_);
if (v___x_858_ == 0)
{
lean_object* v___x_859_; 
v___x_859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_859_, 0, v___x_853_);
return v___x_859_;
}
else
{
size_t v___x_860_; size_t v___x_861_; lean_object* v___x_862_; 
v___x_860_ = lean_usize_of_nat(v_start_844_);
v___x_861_ = lean_usize_of_nat(v___x_856_);
v___x_862_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_843_, v___x_860_, v___x_861_, v___x_853_, v___y_848_, v___y_850_, v___y_851_);
return v___x_862_;
}
}
else
{
size_t v___x_863_; size_t v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_usize_of_nat(v_start_844_);
v___x_864_ = lean_usize_of_nat(v_stop_845_);
v___x_865_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_843_, v___x_863_, v___x_864_, v___x_853_, v___y_848_, v___y_850_, v___y_851_);
return v___x_865_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___boxed(lean_object* v_as_866_, lean_object* v_start_867_, lean_object* v_stop_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_as_866_, v_start_867_, v_stop_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_);
lean_dec(v___y_874_);
lean_dec_ref(v___y_873_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
lean_dec(v_stop_868_);
lean_dec(v_start_867_);
lean_dec_ref(v_as_866_);
return v_res_876_;
}
}
static lean_object* _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__0));
v___x_879_ = l_Lean_stringToMessageData(v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(lean_object* v_value_880_, lean_object* v_declName_881_, lean_object* v___x_882_, lean_object* v_levelParams_883_, lean_object* v_ctorName_884_, lean_object* v_fieldName_885_, lean_object* v_projName_886_, lean_object* v_equivName_887_, lean_object* v_params_888_, lean_object* v_resultType_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
lean_object* v___x_937_; 
lean_inc(v___y_895_);
lean_inc_ref(v___y_894_);
lean_inc(v___y_893_);
lean_inc_ref(v___y_892_);
lean_inc_ref(v_resultType_889_);
v___x_937_ = lean_whnf(v_resultType_889_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; uint8_t v___x_939_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___x_939_ = l_Lean_Expr_isSort(v_a_938_);
lean_dec(v_a_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec_ref(v_params_888_);
lean_dec(v_equivName_887_);
lean_dec(v_projName_886_);
lean_dec(v_fieldName_885_);
lean_dec(v_ctorName_884_);
lean_dec(v_levelParams_883_);
lean_dec(v___x_882_);
lean_dec(v_declName_881_);
lean_dec_ref(v_value_880_);
v___x_940_ = lean_obj_once(&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1, &l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1_once, _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1);
v___x_941_ = l_Lean_indentExpr(v_resultType_889_);
v___x_942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_942_, 0, v___x_940_);
lean_ctor_set(v___x_942_, 1, v___x_941_);
v___x_943_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_942_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
else
{
lean_dec_ref(v_resultType_889_);
goto v___jp_897_;
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_dec_ref(v_resultType_889_);
lean_dec_ref(v_params_888_);
lean_dec(v_equivName_887_);
lean_dec(v_projName_886_);
lean_dec(v_fieldName_885_);
lean_dec(v_ctorName_884_);
lean_dec(v_levelParams_883_);
lean_dec(v___x_882_);
lean_dec(v_declName_881_);
lean_dec_ref(v_value_880_);
v_a_952_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_937_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_937_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
v___jp_897_:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
lean_inc_ref(v_params_888_);
v___x_898_ = l_Lean_Expr_beta(v_value_880_, v_params_888_);
lean_inc(v___x_882_);
lean_inc(v_declName_881_);
v___x_899_ = l_Lean_mkConst(v_declName_881_, v___x_882_);
v___x_900_ = l_Lean_mkAppN(v___x_899_, v_params_888_);
v___x_901_ = lean_unsigned_to_nat(0u);
v___x_902_ = lean_array_get_size(v_params_888_);
v___x_903_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_params_888_, v___x_901_, v___x_902_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_905_; lean_object* v_env_906_; uint8_t v___x_907_; lean_object* v___x_908_; lean_object* v___f_909_; lean_object* v___x_910_; lean_object* v___f_911_; lean_object* v___x_912_; 
v_a_904_ = lean_ctor_get(v___x_903_, 0);
lean_inc(v_a_904_);
lean_dec_ref_known(v___x_903_, 1);
v___x_905_ = lean_st_ref_get(v___y_895_);
v_env_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc_ref(v_env_906_);
lean_dec(v___x_905_);
v___x_907_ = l_Lean_Environment_hasExposedBody(v_env_906_, v_declName_881_);
v___x_908_ = lean_box(v___x_907_);
lean_inc(v_levelParams_883_);
lean_inc_ref(v_params_888_);
v___f_909_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed), 14, 3);
lean_closure_set(v___f_909_, 0, v_params_888_);
lean_closure_set(v___f_909_, 1, v_levelParams_883_);
lean_closure_set(v___f_909_, 2, v___x_908_);
v___x_910_ = lean_box(v___x_907_);
v___f_911_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed), 18, 11);
lean_closure_set(v___f_911_, 0, v___f_909_);
lean_closure_set(v___f_911_, 1, v_ctorName_884_);
lean_closure_set(v___f_911_, 2, v_fieldName_885_);
lean_closure_set(v___f_911_, 3, v___x_898_);
lean_closure_set(v___f_911_, 4, v___x_900_);
lean_closure_set(v___f_911_, 5, v_projName_886_);
lean_closure_set(v___f_911_, 6, v___x_882_);
lean_closure_set(v___f_911_, 7, v_params_888_);
lean_closure_set(v___f_911_, 8, v_equivName_887_);
lean_closure_set(v___f_911_, 9, v_levelParams_883_);
lean_closure_set(v___f_911_, 10, v___x_910_);
v___x_912_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_a_904_, v___f_911_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v_a_904_);
if (lean_obj_tag(v___x_912_) == 0)
{
lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_919_ == 0)
{
lean_object* v_unused_920_; 
v_unused_920_ = lean_ctor_get(v___x_912_, 0);
lean_dec(v_unused_920_);
v___x_914_ = v___x_912_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_dec(v___x_912_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v___x_902_);
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_902_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
v_a_921_ = lean_ctor_get(v___x_912_, 0);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_912_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_912_);
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
lean_dec_ref(v___x_900_);
lean_dec_ref(v___x_898_);
lean_dec_ref(v_params_888_);
lean_dec(v_equivName_887_);
lean_dec(v_projName_886_);
lean_dec(v_fieldName_885_);
lean_dec(v_ctorName_884_);
lean_dec(v_levelParams_883_);
lean_dec(v___x_882_);
lean_dec(v_declName_881_);
v_a_929_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_936_ == 0)
{
v___x_931_ = v___x_903_;
v_isShared_932_ = v_isSharedCheck_936_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_a_929_);
lean_dec(v___x_903_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed(lean_object** _args){
lean_object* v_value_960_ = _args[0];
lean_object* v_declName_961_ = _args[1];
lean_object* v___x_962_ = _args[2];
lean_object* v_levelParams_963_ = _args[3];
lean_object* v_ctorName_964_ = _args[4];
lean_object* v_fieldName_965_ = _args[5];
lean_object* v_projName_966_ = _args[6];
lean_object* v_equivName_967_ = _args[7];
lean_object* v_params_968_ = _args[8];
lean_object* v_resultType_969_ = _args[9];
lean_object* v___y_970_ = _args[10];
lean_object* v___y_971_ = _args[11];
lean_object* v___y_972_ = _args[12];
lean_object* v___y_973_ = _args[13];
lean_object* v___y_974_ = _args[14];
lean_object* v___y_975_ = _args[15];
lean_object* v___y_976_ = _args[16];
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(v_value_960_, v_declName_961_, v___x_962_, v_levelParams_963_, v_ctorName_964_, v_fieldName_965_, v_projName_966_, v_equivName_967_, v_params_968_, v_resultType_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
return v_res_977_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_instMonadEIO___redArg();
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object* v_msg_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v_toApplicative_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1086_; 
v___x_993_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0);
v___x_994_ = l_StateRefT_x27_instMonad___redArg(v___x_993_);
v_toApplicative_995_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1086_ == 0)
{
lean_object* v_unused_1087_; 
v_unused_1087_ = lean_ctor_get(v___x_994_, 1);
lean_dec(v_unused_1087_);
v___x_997_ = v___x_994_;
v_isShared_998_ = v_isSharedCheck_1086_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_toApplicative_995_);
lean_dec(v___x_994_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1086_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v_toFunctor_999_; lean_object* v_toSeq_1000_; lean_object* v_toSeqLeft_1001_; lean_object* v_toSeqRight_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1084_; 
v_toFunctor_999_ = lean_ctor_get(v_toApplicative_995_, 0);
v_toSeq_1000_ = lean_ctor_get(v_toApplicative_995_, 2);
v_toSeqLeft_1001_ = lean_ctor_get(v_toApplicative_995_, 3);
v_toSeqRight_1002_ = lean_ctor_get(v_toApplicative_995_, 4);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_toApplicative_995_);
if (v_isSharedCheck_1084_ == 0)
{
lean_object* v_unused_1085_; 
v_unused_1085_ = lean_ctor_get(v_toApplicative_995_, 1);
lean_dec(v_unused_1085_);
v___x_1004_ = v_toApplicative_995_;
v_isShared_1005_ = v_isSharedCheck_1084_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_toSeqRight_1002_);
lean_inc(v_toSeqLeft_1001_);
lean_inc(v_toSeq_1000_);
lean_inc(v_toFunctor_999_);
lean_dec(v_toApplicative_995_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1084_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___f_1006_; lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___f_1009_; lean_object* v___x_1010_; lean_object* v___f_1011_; lean_object* v___f_1012_; lean_object* v___f_1013_; lean_object* v___x_1015_; 
v___f_1006_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1));
v___f_1007_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_999_);
v___f_1008_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1008_, 0, v_toFunctor_999_);
v___f_1009_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1009_, 0, v_toFunctor_999_);
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___f_1008_);
lean_ctor_set(v___x_1010_, 1, v___f_1009_);
v___f_1011_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1011_, 0, v_toSeqRight_1002_);
v___f_1012_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1012_, 0, v_toSeqLeft_1001_);
v___f_1013_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1013_, 0, v_toSeq_1000_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 4, v___f_1011_);
lean_ctor_set(v___x_1004_, 3, v___f_1012_);
lean_ctor_set(v___x_1004_, 2, v___f_1013_);
lean_ctor_set(v___x_1004_, 1, v___f_1006_);
lean_ctor_set(v___x_1004_, 0, v___x_1010_);
v___x_1015_ = v___x_1004_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v___f_1006_);
lean_ctor_set(v_reuseFailAlloc_1083_, 2, v___f_1013_);
lean_ctor_set(v_reuseFailAlloc_1083_, 3, v___f_1012_);
lean_ctor_set(v_reuseFailAlloc_1083_, 4, v___f_1011_);
v___x_1015_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
lean_object* v___x_1017_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___f_1007_);
lean_ctor_set(v___x_997_, 0, v___x_1015_);
v___x_1017_ = v___x_997_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1015_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v___f_1007_);
v___x_1017_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
lean_object* v___x_1018_; lean_object* v_toApplicative_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1080_; 
v___x_1018_ = l_StateRefT_x27_instMonad___redArg(v___x_1017_);
v_toApplicative_1019_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1080_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1080_ == 0)
{
lean_object* v_unused_1081_; 
v_unused_1081_ = lean_ctor_get(v___x_1018_, 1);
lean_dec(v_unused_1081_);
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1080_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_toApplicative_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1080_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v_toFunctor_1023_; lean_object* v_toSeq_1024_; lean_object* v_toSeqLeft_1025_; lean_object* v_toSeqRight_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1078_; 
v_toFunctor_1023_ = lean_ctor_get(v_toApplicative_1019_, 0);
v_toSeq_1024_ = lean_ctor_get(v_toApplicative_1019_, 2);
v_toSeqLeft_1025_ = lean_ctor_get(v_toApplicative_1019_, 3);
v_toSeqRight_1026_ = lean_ctor_get(v_toApplicative_1019_, 4);
v_isSharedCheck_1078_ = !lean_is_exclusive(v_toApplicative_1019_);
if (v_isSharedCheck_1078_ == 0)
{
lean_object* v_unused_1079_; 
v_unused_1079_ = lean_ctor_get(v_toApplicative_1019_, 1);
lean_dec(v_unused_1079_);
v___x_1028_ = v_toApplicative_1019_;
v_isShared_1029_ = v_isSharedCheck_1078_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_toSeqRight_1026_);
lean_inc(v_toSeqLeft_1025_);
lean_inc(v_toSeq_1024_);
lean_inc(v_toFunctor_1023_);
lean_dec(v_toApplicative_1019_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1078_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___f_1030_; lean_object* v___f_1031_; lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___x_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___x_1039_; 
v___f_1030_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3));
v___f_1031_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1023_);
v___f_1032_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1032_, 0, v_toFunctor_1023_);
v___f_1033_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1033_, 0, v_toFunctor_1023_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___f_1032_);
lean_ctor_set(v___x_1034_, 1, v___f_1033_);
v___f_1035_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1035_, 0, v_toSeqRight_1026_);
v___f_1036_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1036_, 0, v_toSeqLeft_1025_);
v___f_1037_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1037_, 0, v_toSeq_1024_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 4, v___f_1035_);
lean_ctor_set(v___x_1028_, 3, v___f_1036_);
lean_ctor_set(v___x_1028_, 2, v___f_1037_);
lean_ctor_set(v___x_1028_, 1, v___f_1030_);
lean_ctor_set(v___x_1028_, 0, v___x_1034_);
v___x_1039_ = v___x_1028_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v___f_1030_);
lean_ctor_set(v_reuseFailAlloc_1077_, 2, v___f_1037_);
lean_ctor_set(v_reuseFailAlloc_1077_, 3, v___f_1036_);
lean_ctor_set(v_reuseFailAlloc_1077_, 4, v___f_1035_);
v___x_1039_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1041_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 1, v___f_1031_);
lean_ctor_set(v___x_1021_, 0, v___x_1039_);
v___x_1041_ = v___x_1021_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1076_, 1, v___f_1031_);
v___x_1041_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1042_; lean_object* v_toApplicative_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1074_; 
v___x_1042_ = l_StateRefT_x27_instMonad___redArg(v___x_1041_);
v_toApplicative_1043_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1074_ == 0)
{
lean_object* v_unused_1075_; 
v_unused_1075_ = lean_ctor_get(v___x_1042_, 1);
lean_dec(v_unused_1075_);
v___x_1045_ = v___x_1042_;
v_isShared_1046_ = v_isSharedCheck_1074_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_toApplicative_1043_);
lean_dec(v___x_1042_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1074_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v_toFunctor_1047_; lean_object* v_toSeq_1048_; lean_object* v_toSeqLeft_1049_; lean_object* v_toSeqRight_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1072_; 
v_toFunctor_1047_ = lean_ctor_get(v_toApplicative_1043_, 0);
v_toSeq_1048_ = lean_ctor_get(v_toApplicative_1043_, 2);
v_toSeqLeft_1049_ = lean_ctor_get(v_toApplicative_1043_, 3);
v_toSeqRight_1050_ = lean_ctor_get(v_toApplicative_1043_, 4);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_toApplicative_1043_);
if (v_isSharedCheck_1072_ == 0)
{
lean_object* v_unused_1073_; 
v_unused_1073_ = lean_ctor_get(v_toApplicative_1043_, 1);
lean_dec(v_unused_1073_);
v___x_1052_ = v_toApplicative_1043_;
v_isShared_1053_ = v_isSharedCheck_1072_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_toSeqRight_1050_);
lean_inc(v_toSeqLeft_1049_);
lean_inc(v_toSeq_1048_);
lean_inc(v_toFunctor_1047_);
lean_dec(v_toApplicative_1043_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1072_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___f_1054_; lean_object* v___f_1055_; lean_object* v___f_1056_; lean_object* v___f_1057_; lean_object* v___x_1058_; lean_object* v___f_1059_; lean_object* v___f_1060_; lean_object* v___f_1061_; lean_object* v___x_1063_; 
v___f_1054_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5));
v___f_1055_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6));
lean_inc_ref(v_toFunctor_1047_);
v___f_1056_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1056_, 0, v_toFunctor_1047_);
v___f_1057_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1057_, 0, v_toFunctor_1047_);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___f_1056_);
lean_ctor_set(v___x_1058_, 1, v___f_1057_);
v___f_1059_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1059_, 0, v_toSeqRight_1050_);
v___f_1060_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1060_, 0, v_toSeqLeft_1049_);
v___f_1061_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1061_, 0, v_toSeq_1048_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 4, v___f_1059_);
lean_ctor_set(v___x_1052_, 3, v___f_1060_);
lean_ctor_set(v___x_1052_, 2, v___f_1061_);
lean_ctor_set(v___x_1052_, 1, v___f_1054_);
lean_ctor_set(v___x_1052_, 0, v___x_1058_);
v___x_1063_ = v___x_1052_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v___f_1054_);
lean_ctor_set(v_reuseFailAlloc_1071_, 2, v___f_1061_);
lean_ctor_set(v_reuseFailAlloc_1071_, 3, v___f_1060_);
lean_ctor_set(v_reuseFailAlloc_1071_, 4, v___f_1059_);
v___x_1063_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_object* v___x_1065_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v___f_1055_);
lean_ctor_set(v___x_1045_, 0, v___x_1063_);
v___x_1065_ = v___x_1045_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1070_, 1, v___f_1055_);
v___x_1065_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_10674__overap_1068_; lean_object* v___x_1069_; 
v___x_1066_ = lean_box(0);
v___x_1067_ = l_instInhabitedOfMonad___redArg(v___x_1065_, v___x_1066_);
v___x_10674__overap_1068_ = lean_panic_fn_borrowed(v___x_1067_, v_msg_985_);
lean_dec(v___x_1067_);
lean_inc(v___y_991_);
lean_inc_ref(v___y_990_);
lean_inc(v___y_989_);
lean_inc_ref(v___y_988_);
lean_inc(v___y_987_);
lean_inc_ref(v___y_986_);
v___x_1069_ = lean_apply_7(v___x_10674__overap_1068_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, lean_box(0));
return v___x_1069_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v_msg_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec(v___y_1092_);
lean_dec_ref(v___y_1091_);
lean_dec(v___y_1090_);
lean_dec_ref(v___y_1089_);
return v_res_1096_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0));
v___x_1099_ = l_Lean_stringToMessageData(v___x_1098_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2));
v___x_1102_ = l_Lean_stringToMessageData(v___x_1101_);
return v___x_1102_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1106_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6));
v___x_1107_ = lean_unsigned_to_nat(11u);
v___x_1108_ = lean_unsigned_to_nat(115u);
v___x_1109_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5));
v___x_1110_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4));
v___x_1111_ = l_mkPanicMessageWithDecl(v___x_1110_, v___x_1109_, v___x_1108_, v___x_1107_, v___x_1106_);
return v___x_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object* v_constName_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_){
_start:
{
lean_object* v___x_1128_; lean_object* v_env_1129_; uint8_t v___x_1130_; lean_object* v___x_1131_; 
v___x_1128_ = lean_st_ref_get(v___y_1118_);
v_env_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc_ref(v_env_1129_);
lean_dec(v___x_1128_);
v___x_1130_ = 0;
lean_inc(v_constName_1112_);
v___x_1131_ = l_Lean_Environment_findAsync_x3f(v_env_1129_, v_constName_1112_, v___x_1130_);
if (lean_obj_tag(v___x_1131_) == 1)
{
lean_object* v_val_1132_; uint8_t v_kind_1133_; 
v_val_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_val_1132_);
lean_dec_ref_known(v___x_1131_, 1);
v_kind_1133_ = lean_ctor_get_uint8(v_val_1132_, sizeof(void*)*3);
if (v_kind_1133_ == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1132_);
if (lean_obj_tag(v___x_1134_) == 1)
{
lean_object* v_val_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec(v_constName_1112_);
v_val_1135_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1134_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_val_1135_);
lean_dec(v___x_1134_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
lean_ctor_set_tag(v___x_1137_, 0);
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_val_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
else
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
lean_dec_ref(v___x_1134_);
v___x_1143_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7);
v___x_1144_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v___x_1143_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1153_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1147_ = v___x_1144_;
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1144_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1153_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
if (lean_obj_tag(v_a_1145_) == 0)
{
lean_del_object(v___x_1147_);
goto v___jp_1120_;
}
else
{
lean_object* v_val_1149_; lean_object* v___x_1151_; 
lean_dec(v_constName_1112_);
v_val_1149_ = lean_ctor_get(v_a_1145_, 0);
lean_inc(v_val_1149_);
lean_dec_ref_known(v_a_1145_, 1);
if (v_isShared_1148_ == 0)
{
lean_ctor_set(v___x_1147_, 0, v_val_1149_);
v___x_1151_ = v___x_1147_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_val_1149_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v_constName_1112_);
v_a_1154_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1144_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1144_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
}
else
{
lean_dec(v_val_1132_);
goto v___jp_1120_;
}
}
else
{
lean_dec(v___x_1131_);
goto v___jp_1120_;
}
v___jp_1120_:
{
lean_object* v___x_1121_; uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1121_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1122_ = 0;
v___x_1123_ = l_Lean_MessageData_ofConstName(v_constName_1112_, v___x_1122_);
v___x_1124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1121_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3);
v___x_1126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1124_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_1126_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
return v___x_1127_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object* v_constName_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_res_1170_; 
v_res_1170_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_constName_1162_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec(v___y_1164_);
lean_dec_ref(v___y_1163_);
return v_res_1170_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object* v_a_1171_, lean_object* v_a_1172_){
_start:
{
if (lean_obj_tag(v_a_1171_) == 0)
{
lean_object* v___x_1173_; 
v___x_1173_ = l_List_reverse___redArg(v_a_1172_);
return v___x_1173_;
}
else
{
lean_object* v_head_1174_; lean_object* v_tail_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1184_; 
v_head_1174_ = lean_ctor_get(v_a_1171_, 0);
v_tail_1175_ = lean_ctor_get(v_a_1171_, 1);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_a_1171_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1177_ = v_a_1171_;
v_isShared_1178_ = v_isSharedCheck_1184_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_tail_1175_);
lean_inc(v_head_1174_);
lean_dec(v_a_1171_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1184_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1179_; lean_object* v___x_1181_; 
v___x_1179_ = l_Lean_mkLevelParam(v_head_1174_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 1, v_a_1172_);
lean_ctor_set(v___x_1177_, 0, v___x_1179_);
v___x_1181_ = v___x_1177_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1179_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v_a_1172_);
v___x_1181_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
v_a_1171_ = v_tail_1175_;
v_a_1172_ = v___x_1181_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_1185_, lean_object* v_ctorName_1186_, lean_object* v_projName_1187_, lean_object* v_equivName_1188_, lean_object* v_fieldName_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v___x_1197_; 
lean_inc(v_declName_1185_);
v___x_1197_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_1185_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v_toConstantVal_1199_; lean_object* v_value_1200_; lean_object* v_levelParams_1201_; lean_object* v_type_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___f_1205_; uint8_t v___x_1206_; lean_object* v___x_1207_; 
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1198_);
lean_dec_ref_known(v___x_1197_, 1);
v_toConstantVal_1199_ = lean_ctor_get(v_a_1198_, 0);
lean_inc_ref(v_toConstantVal_1199_);
v_value_1200_ = lean_ctor_get(v_a_1198_, 1);
lean_inc_ref(v_value_1200_);
lean_dec(v_a_1198_);
v_levelParams_1201_ = lean_ctor_get(v_toConstantVal_1199_, 1);
lean_inc_n(v_levelParams_1201_, 2);
v_type_1202_ = lean_ctor_get(v_toConstantVal_1199_, 2);
lean_inc_ref(v_type_1202_);
lean_dec_ref(v_toConstantVal_1199_);
v___x_1203_ = lean_box(0);
v___x_1204_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1201_, v___x_1203_);
v___f_1205_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed), 17, 8);
lean_closure_set(v___f_1205_, 0, v_value_1200_);
lean_closure_set(v___f_1205_, 1, v_declName_1185_);
lean_closure_set(v___f_1205_, 2, v___x_1204_);
lean_closure_set(v___f_1205_, 3, v_levelParams_1201_);
lean_closure_set(v___f_1205_, 4, v_ctorName_1186_);
lean_closure_set(v___f_1205_, 5, v_fieldName_1189_);
lean_closure_set(v___f_1205_, 6, v_projName_1187_);
lean_closure_set(v___f_1205_, 7, v_equivName_1188_);
v___x_1206_ = 0;
v___x_1207_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(v_type_1202_, v___f_1205_, v___x_1206_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_, v___y_1195_);
return v___x_1207_;
}
else
{
lean_object* v_a_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1215_; 
lean_dec(v_fieldName_1189_);
lean_dec(v_equivName_1188_);
lean_dec(v_projName_1187_);
lean_dec(v_ctorName_1186_);
lean_dec(v_declName_1185_);
v_a_1208_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1215_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1210_ = v___x_1197_;
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_a_1208_);
lean_dec(v___x_1197_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1215_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1213_; 
if (v_isShared_1211_ == 0)
{
v___x_1213_ = v___x_1210_;
goto v_reusejp_1212_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_a_1208_);
v___x_1213_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1212_;
}
v_reusejp_1212_:
{
return v___x_1213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_1216_, lean_object* v_ctorName_1217_, lean_object* v_projName_1218_, lean_object* v_equivName_1219_, lean_object* v_fieldName_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_1216_, v_ctorName_1217_, v_projName_1218_, v_equivName_1219_, v_fieldName_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_);
lean_dec(v___y_1226_);
lean_dec_ref(v___y_1225_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object* v_00_u03b1_1229_, lean_object* v_name_1230_, uint8_t v_bi_1231_, lean_object* v_type_1232_, lean_object* v_k_1233_, uint8_t v_kind_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_1230_, v_bi_1231_, v_type_1232_, v_k_1233_, v_kind_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1243_, lean_object* v_name_1244_, lean_object* v_bi_1245_, lean_object* v_type_1246_, lean_object* v_k_1247_, lean_object* v_kind_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
uint8_t v_bi_boxed_1256_; uint8_t v_kind_boxed_1257_; lean_object* v_res_1258_; 
v_bi_boxed_1256_ = lean_unbox(v_bi_1245_);
v_kind_boxed_1257_ = lean_unbox(v_kind_1248_);
v_res_1258_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(v_00_u03b1_1243_, v_name_1244_, v_bi_boxed_1256_, v_type_1246_, v_k_1247_, v_kind_boxed_1257_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object* v_00_u03b1_1259_, lean_object* v_name_1260_, lean_object* v_type_1261_, lean_object* v_k_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v___x_1270_; 
v___x_1270_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_1260_, v_type_1261_, v_k_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object* v_00_u03b1_1271_, lean_object* v_name_1272_, lean_object* v_type_1273_, lean_object* v_k_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_res_1282_; 
v_res_1282_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(v_00_u03b1_1271_, v_name_1272_, v_type_1273_, v_k_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_, v___y_1280_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object* v_00_u03b1_1283_, lean_object* v_msg_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object* v_00_u03b1_1293_, lean_object* v_msg_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(v_00_u03b1_1293_, v_msg_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object* v_as_1303_, size_t v_i_1304_, size_t v_stop_1305_, lean_object* v_b_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v___x_1314_; 
v___x_1314_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_1303_, v_i_1304_, v_stop_1305_, v_b_1306_, v___y_1309_, v___y_1311_, v___y_1312_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object* v_as_1315_, lean_object* v_i_1316_, lean_object* v_stop_1317_, lean_object* v_b_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
size_t v_i_boxed_1326_; size_t v_stop_boxed_1327_; lean_object* v_res_1328_; 
v_i_boxed_1326_ = lean_unbox_usize(v_i_1316_);
lean_dec(v_i_1316_);
v_stop_boxed_1327_ = lean_unbox_usize(v_stop_1317_);
lean_dec(v_stop_1317_);
v_res_1328_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(v_as_1315_, v_i_boxed_1326_, v_stop_boxed_1327_, v_b_1318_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
lean_dec(v___y_1320_);
lean_dec_ref(v___y_1319_);
lean_dec_ref(v_as_1315_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(lean_object* v_msgData_1329_, lean_object* v_macroStack_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_1329_, v_macroStack_1330_, v___y_1335_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___boxed(lean_object* v_msgData_1339_, lean_object* v_macroStack_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(v_msgData_1339_, v_macroStack_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_);
lean_dec(v___y_1346_);
lean_dec_ref(v___y_1345_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v_e_1349_, lean_object* v_k_1350_, uint8_t v_cleanupAnnotations_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v___f_1359_; uint8_t v___x_1360_; uint8_t v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_inc(v___y_1353_);
lean_inc_ref(v___y_1352_);
v___f_1359_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1359_, 0, v_k_1350_);
lean_closure_set(v___f_1359_, 1, v___y_1352_);
lean_closure_set(v___f_1359_, 2, v___y_1353_);
v___x_1360_ = 1;
v___x_1361_ = 0;
v___x_1362_ = lean_box(0);
v___x_1363_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1349_, v___x_1360_, v___x_1361_, v___x_1360_, v___x_1361_, v___x_1362_, v___f_1359_, v_cleanupAnnotations_1351_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
if (lean_obj_tag(v___x_1363_) == 0)
{
return v___x_1363_;
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1363_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1363_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v_e_1372_, lean_object* v_k_1373_, lean_object* v_cleanupAnnotations_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1382_; lean_object* v_res_1383_; 
v_cleanupAnnotations_boxed_1382_ = lean_unbox(v_cleanupAnnotations_1374_);
v_res_1383_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1372_, v_k_1373_, v_cleanupAnnotations_boxed_1382_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v_00_u03b1_1384_, lean_object* v_e_1385_, lean_object* v_k_1386_, uint8_t v_cleanupAnnotations_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1385_, v_k_1386_, v_cleanupAnnotations_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, v___y_1393_);
return v___x_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v_00_u03b1_1396_, lean_object* v_e_1397_, lean_object* v_k_1398_, lean_object* v_cleanupAnnotations_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1407_; lean_object* v_res_1408_; 
v_cleanupAnnotations_boxed_1407_ = lean_unbox(v_cleanupAnnotations_1399_);
v_res_1408_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(v_00_u03b1_1396_, v_e_1397_, v_k_1398_, v_cleanupAnnotations_boxed_1407_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object* v_x_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v___x_1417_; 
lean_inc(v___y_1411_);
lean_inc_ref(v___y_1410_);
v___x_1417_ = lean_apply_7(v_x_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, lean_box(0));
return v___x_1417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object* v_x_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v_x_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
return v_res_1426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object* v_lctx_1427_, lean_object* v_localInsts_1428_, lean_object* v_x_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v___f_1437_; lean_object* v___x_1438_; 
lean_inc(v___y_1431_);
lean_inc_ref(v___y_1430_);
v___f_1437_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1437_, 0, v_x_1429_);
lean_closure_set(v___f_1437_, 1, v___y_1430_);
lean_closure_set(v___f_1437_, 2, v___y_1431_);
v___x_1438_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1427_, v_localInsts_1428_, v___f_1437_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1438_) == 0)
{
return v___x_1438_;
}
else
{
lean_object* v_a_1439_; lean_object* v___x_1441_; uint8_t v_isShared_1442_; uint8_t v_isSharedCheck_1446_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1438_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1441_ = v___x_1438_;
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
else
{
lean_inc(v_a_1439_);
lean_dec(v___x_1438_);
v___x_1441_ = lean_box(0);
v_isShared_1442_ = v_isSharedCheck_1446_;
goto v_resetjp_1440_;
}
v_resetjp_1440_:
{
lean_object* v___x_1444_; 
if (v_isShared_1442_ == 0)
{
v___x_1444_ = v___x_1441_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v_a_1439_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object* v_lctx_1447_, lean_object* v_localInsts_1448_, lean_object* v_x_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1447_, v_localInsts_1448_, v_x_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_00_u03b1_1458_, lean_object* v_lctx_1459_, lean_object* v_localInsts_1460_, lean_object* v_x_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v___x_1469_; 
v___x_1469_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1459_, v_localInsts_1460_, v_x_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_00_u03b1_1470_, lean_object* v_lctx_1471_, lean_object* v_localInsts_1472_, lean_object* v_x_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(v_00_u03b1_1470_, v_lctx_1471_, v_localInsts_1472_, v_x_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1475_);
lean_dec_ref(v___y_1474_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(lean_object* v___y_1482_){
_start:
{
lean_object* v___x_1484_; lean_object* v_env_1485_; lean_object* v___x_1486_; lean_object* v_mainModule_1487_; lean_object* v___x_1488_; 
v___x_1484_ = lean_st_ref_get(v___y_1482_);
v_env_1485_ = lean_ctor_get(v___x_1484_, 0);
lean_inc_ref(v_env_1485_);
lean_dec(v___x_1484_);
v___x_1486_ = l_Lean_Environment_header(v_env_1485_);
lean_dec_ref(v_env_1485_);
v_mainModule_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_mainModule_1487_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1488_, 0, v_mainModule_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg___boxed(lean_object* v___y_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1489_);
lean_dec(v___y_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1493_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___boxed(lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
lean_object* v_res_1499_; 
v_res_1499_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(lean_object* v___y_1500_, uint8_t v_isExporting_1501_, lean_object* v_a_x3f_1502_){
_start:
{
lean_object* v___x_1504_; lean_object* v_env_1505_; lean_object* v_messages_1506_; lean_object* v_scopes_1507_; lean_object* v_usedQuotCtxts_1508_; lean_object* v_nextMacroScope_1509_; lean_object* v_maxRecDepth_1510_; lean_object* v_ngen_1511_; lean_object* v_auxDeclNGen_1512_; lean_object* v_infoState_1513_; lean_object* v_traceState_1514_; lean_object* v_snapshotTasks_1515_; lean_object* v_prevLinterStates_1516_; lean_object* v_codeQualityEntryTasks_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1528_; 
v___x_1504_ = lean_st_ref_take(v___y_1500_);
v_env_1505_ = lean_ctor_get(v___x_1504_, 0);
v_messages_1506_ = lean_ctor_get(v___x_1504_, 1);
v_scopes_1507_ = lean_ctor_get(v___x_1504_, 2);
v_usedQuotCtxts_1508_ = lean_ctor_get(v___x_1504_, 3);
v_nextMacroScope_1509_ = lean_ctor_get(v___x_1504_, 4);
v_maxRecDepth_1510_ = lean_ctor_get(v___x_1504_, 5);
v_ngen_1511_ = lean_ctor_get(v___x_1504_, 6);
v_auxDeclNGen_1512_ = lean_ctor_get(v___x_1504_, 7);
v_infoState_1513_ = lean_ctor_get(v___x_1504_, 8);
v_traceState_1514_ = lean_ctor_get(v___x_1504_, 9);
v_snapshotTasks_1515_ = lean_ctor_get(v___x_1504_, 10);
v_prevLinterStates_1516_ = lean_ctor_get(v___x_1504_, 11);
v_codeQualityEntryTasks_1517_ = lean_ctor_get(v___x_1504_, 12);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1519_ = v___x_1504_;
v_isShared_1520_ = v_isSharedCheck_1528_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1517_);
lean_inc(v_prevLinterStates_1516_);
lean_inc(v_snapshotTasks_1515_);
lean_inc(v_traceState_1514_);
lean_inc(v_infoState_1513_);
lean_inc(v_auxDeclNGen_1512_);
lean_inc(v_ngen_1511_);
lean_inc(v_maxRecDepth_1510_);
lean_inc(v_nextMacroScope_1509_);
lean_inc(v_usedQuotCtxts_1508_);
lean_inc(v_scopes_1507_);
lean_inc(v_messages_1506_);
lean_inc(v_env_1505_);
lean_dec(v___x_1504_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1528_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1524_; 
v___x_1521_ = lean_box(0);
v___x_1522_ = l_Lean_Environment_setExporting(v_env_1505_, v_isExporting_1501_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 0, v___x_1522_);
v___x_1524_ = v___x_1519_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1522_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v_messages_1506_);
lean_ctor_set(v_reuseFailAlloc_1527_, 2, v_scopes_1507_);
lean_ctor_set(v_reuseFailAlloc_1527_, 3, v_usedQuotCtxts_1508_);
lean_ctor_set(v_reuseFailAlloc_1527_, 4, v_nextMacroScope_1509_);
lean_ctor_set(v_reuseFailAlloc_1527_, 5, v_maxRecDepth_1510_);
lean_ctor_set(v_reuseFailAlloc_1527_, 6, v_ngen_1511_);
lean_ctor_set(v_reuseFailAlloc_1527_, 7, v_auxDeclNGen_1512_);
lean_ctor_set(v_reuseFailAlloc_1527_, 8, v_infoState_1513_);
lean_ctor_set(v_reuseFailAlloc_1527_, 9, v_traceState_1514_);
lean_ctor_set(v_reuseFailAlloc_1527_, 10, v_snapshotTasks_1515_);
lean_ctor_set(v_reuseFailAlloc_1527_, 11, v_prevLinterStates_1516_);
lean_ctor_set(v_reuseFailAlloc_1527_, 12, v_codeQualityEntryTasks_1517_);
v___x_1524_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1525_ = lean_st_ref_put(v___y_1500_, v___x_1524_);
v___x_1526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1521_);
return v___x_1526_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0___boxed(lean_object* v___y_1529_, lean_object* v_isExporting_1530_, lean_object* v_a_x3f_1531_, lean_object* v___y_1532_){
_start:
{
uint8_t v_isExporting_boxed_1533_; lean_object* v_res_1534_; 
v_isExporting_boxed_1533_ = lean_unbox(v_isExporting_1530_);
v_res_1534_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1529_, v_isExporting_boxed_1533_, v_a_x3f_1531_);
lean_dec(v_a_x3f_1531_);
lean_dec(v___y_1529_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(lean_object* v_x_1535_, uint8_t v_isExporting_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v___x_1540_; lean_object* v_env_1541_; lean_object* v___x_1542_; uint8_t v_isModule_1543_; 
v___x_1540_ = lean_st_ref_get(v___y_1538_);
v_env_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc_ref(v_env_1541_);
lean_dec(v___x_1540_);
v___x_1542_ = l_Lean_Environment_header(v_env_1541_);
v_isModule_1543_ = lean_ctor_get_uint8(v___x_1542_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1542_);
if (v_isModule_1543_ == 0)
{
lean_object* v___x_1544_; 
lean_dec_ref(v_env_1541_);
lean_inc(v___y_1538_);
lean_inc_ref(v___y_1537_);
v___x_1544_ = lean_apply_3(v_x_1535_, v___y_1537_, v___y_1538_, lean_box(0));
return v___x_1544_;
}
else
{
uint8_t v_isExporting_1545_; 
v_isExporting_1545_ = lean_ctor_get_uint8(v_env_1541_, sizeof(void*)*8);
lean_dec_ref(v_env_1541_);
if (v_isExporting_1536_ == 0)
{
if (v_isExporting_1545_ == 0)
{
lean_object* v___x_1599_; 
lean_inc(v___y_1538_);
lean_inc_ref(v___y_1537_);
v___x_1599_ = lean_apply_3(v_x_1535_, v___y_1537_, v___y_1538_, lean_box(0));
return v___x_1599_;
}
else
{
goto v___jp_1546_;
}
}
else
{
if (v_isExporting_1545_ == 0)
{
goto v___jp_1546_;
}
else
{
lean_object* v___x_1600_; 
lean_inc(v___y_1538_);
lean_inc_ref(v___y_1537_);
v___x_1600_ = lean_apply_3(v_x_1535_, v___y_1537_, v___y_1538_, lean_box(0));
return v___x_1600_;
}
}
v___jp_1546_:
{
lean_object* v___x_1547_; lean_object* v_env_1548_; lean_object* v_messages_1549_; lean_object* v_scopes_1550_; lean_object* v_usedQuotCtxts_1551_; lean_object* v_nextMacroScope_1552_; lean_object* v_maxRecDepth_1553_; lean_object* v_ngen_1554_; lean_object* v_auxDeclNGen_1555_; lean_object* v_infoState_1556_; lean_object* v_traceState_1557_; lean_object* v_snapshotTasks_1558_; lean_object* v_prevLinterStates_1559_; lean_object* v_codeQualityEntryTasks_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1598_; 
v___x_1547_ = lean_st_ref_take(v___y_1538_);
v_env_1548_ = lean_ctor_get(v___x_1547_, 0);
v_messages_1549_ = lean_ctor_get(v___x_1547_, 1);
v_scopes_1550_ = lean_ctor_get(v___x_1547_, 2);
v_usedQuotCtxts_1551_ = lean_ctor_get(v___x_1547_, 3);
v_nextMacroScope_1552_ = lean_ctor_get(v___x_1547_, 4);
v_maxRecDepth_1553_ = lean_ctor_get(v___x_1547_, 5);
v_ngen_1554_ = lean_ctor_get(v___x_1547_, 6);
v_auxDeclNGen_1555_ = lean_ctor_get(v___x_1547_, 7);
v_infoState_1556_ = lean_ctor_get(v___x_1547_, 8);
v_traceState_1557_ = lean_ctor_get(v___x_1547_, 9);
v_snapshotTasks_1558_ = lean_ctor_get(v___x_1547_, 10);
v_prevLinterStates_1559_ = lean_ctor_get(v___x_1547_, 11);
v_codeQualityEntryTasks_1560_ = lean_ctor_get(v___x_1547_, 12);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1562_ = v___x_1547_;
v_isShared_1563_ = v_isSharedCheck_1598_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1560_);
lean_inc(v_prevLinterStates_1559_);
lean_inc(v_snapshotTasks_1558_);
lean_inc(v_traceState_1557_);
lean_inc(v_infoState_1556_);
lean_inc(v_auxDeclNGen_1555_);
lean_inc(v_ngen_1554_);
lean_inc(v_maxRecDepth_1553_);
lean_inc(v_nextMacroScope_1552_);
lean_inc(v_usedQuotCtxts_1551_);
lean_inc(v_scopes_1550_);
lean_inc(v_messages_1549_);
lean_inc(v_env_1548_);
lean_dec(v___x_1547_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1598_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1564_ = l_Lean_Environment_setExporting(v_env_1548_, v_isExporting_1536_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v___x_1564_);
v___x_1566_ = v___x_1562_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v___x_1564_);
lean_ctor_set(v_reuseFailAlloc_1597_, 1, v_messages_1549_);
lean_ctor_set(v_reuseFailAlloc_1597_, 2, v_scopes_1550_);
lean_ctor_set(v_reuseFailAlloc_1597_, 3, v_usedQuotCtxts_1551_);
lean_ctor_set(v_reuseFailAlloc_1597_, 4, v_nextMacroScope_1552_);
lean_ctor_set(v_reuseFailAlloc_1597_, 5, v_maxRecDepth_1553_);
lean_ctor_set(v_reuseFailAlloc_1597_, 6, v_ngen_1554_);
lean_ctor_set(v_reuseFailAlloc_1597_, 7, v_auxDeclNGen_1555_);
lean_ctor_set(v_reuseFailAlloc_1597_, 8, v_infoState_1556_);
lean_ctor_set(v_reuseFailAlloc_1597_, 9, v_traceState_1557_);
lean_ctor_set(v_reuseFailAlloc_1597_, 10, v_snapshotTasks_1558_);
lean_ctor_set(v_reuseFailAlloc_1597_, 11, v_prevLinterStates_1559_);
lean_ctor_set(v_reuseFailAlloc_1597_, 12, v_codeQualityEntryTasks_1560_);
v___x_1566_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
lean_object* v___x_1567_; lean_object* v_r_1568_; 
v___x_1567_ = lean_st_ref_put(v___y_1538_, v___x_1566_);
lean_inc(v___y_1538_);
lean_inc_ref(v___y_1537_);
v_r_1568_ = lean_apply_3(v_x_1535_, v___y_1537_, v___y_1538_, lean_box(0));
if (lean_obj_tag(v_r_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1585_; 
v_a_1569_ = lean_ctor_get(v_r_1568_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_r_1568_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1571_ = v_r_1568_;
v_isShared_1572_ = v_isSharedCheck_1585_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v_r_1568_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1585_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
lean_inc(v_a_1569_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set_tag(v___x_1571_, 1);
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
v___x_1575_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1538_, v_isExporting_1545_, v___x_1574_);
lean_dec_ref(v___x_1574_);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1575_);
if (v_isSharedCheck_1582_ == 0)
{
lean_object* v_unused_1583_; 
v_unused_1583_ = lean_ctor_get(v___x_1575_, 0);
lean_dec(v_unused_1583_);
v___x_1577_ = v___x_1575_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_dec(v___x_1575_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v_a_1569_);
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1569_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1595_; 
v_a_1586_ = lean_ctor_get(v_r_1568_, 0);
lean_inc(v_a_1586_);
lean_dec_ref_known(v_r_1568_, 1);
v___x_1587_ = lean_box(0);
v___x_1588_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1538_, v_isExporting_1545_, v___x_1587_);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1588_);
if (v_isSharedCheck_1595_ == 0)
{
lean_object* v_unused_1596_; 
v_unused_1596_ = lean_ctor_get(v___x_1588_, 0);
lean_dec(v_unused_1596_);
v___x_1590_ = v___x_1588_;
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
else
{
lean_dec(v___x_1588_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
lean_ctor_set_tag(v___x_1590_, 1);
lean_ctor_set(v___x_1590_, 0, v_a_1586_);
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_a_1586_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___boxed(lean_object* v_x_1601_, lean_object* v_isExporting_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
uint8_t v_isExporting_boxed_1606_; lean_object* v_res_1607_; 
v_isExporting_boxed_1606_ = lean_unbox(v_isExporting_1602_);
v_res_1607_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1601_, v_isExporting_boxed_1606_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(lean_object* v_00_u03b1_1608_, lean_object* v_x_1609_, uint8_t v_isExporting_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1609_, v_isExporting_1610_, v___y_1611_, v___y_1612_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___boxed(lean_object* v_00_u03b1_1615_, lean_object* v_x_1616_, lean_object* v_isExporting_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
uint8_t v_isExporting_boxed_1621_; lean_object* v_res_1622_; 
v_isExporting_boxed_1621_ = lean_unbox(v_isExporting_1617_);
v_res_1622_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(v_00_u03b1_1615_, v_x_1616_, v_isExporting_boxed_1621_, v___y_1618_, v___y_1619_);
lean_dec(v___y_1619_);
lean_dec_ref(v___y_1618_);
return v_res_1622_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(uint8_t v_suppressElabErrors_1631_, uint8_t v___y_1632_, lean_object* v_x_1633_){
_start:
{
if (lean_obj_tag(v_x_1633_) == 1)
{
lean_object* v_pre_1634_; 
v_pre_1634_ = lean_ctor_get(v_x_1633_, 0);
switch(lean_obj_tag(v_pre_1634_))
{
case 1:
{
lean_object* v_pre_1635_; 
v_pre_1635_ = lean_ctor_get(v_pre_1634_, 0);
switch(lean_obj_tag(v_pre_1635_))
{
case 0:
{
lean_object* v_str_1636_; lean_object* v_str_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; 
v_str_1636_ = lean_ctor_get(v_x_1633_, 1);
v_str_1637_ = lean_ctor_get(v_pre_1634_, 1);
v___x_1638_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0));
v___x_1639_ = lean_string_dec_eq(v_str_1637_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_object* v___x_1640_; uint8_t v___x_1641_; 
v___x_1640_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__1));
v___x_1641_ = lean_string_dec_eq(v_str_1637_, v___x_1640_);
if (v___x_1641_ == 0)
{
return v___x_1641_;
}
else
{
lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1642_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__2));
v___x_1643_ = lean_string_dec_eq(v_str_1636_, v___x_1642_);
if (v___x_1643_ == 0)
{
return v___x_1643_;
}
else
{
return v_suppressElabErrors_1631_;
}
}
}
else
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1644_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__3));
v___x_1645_ = lean_string_dec_eq(v_str_1636_, v___x_1644_);
if (v___x_1645_ == 0)
{
return v___x_1645_;
}
else
{
return v_suppressElabErrors_1631_;
}
}
}
case 1:
{
lean_object* v_pre_1646_; 
v_pre_1646_ = lean_ctor_get(v_pre_1635_, 0);
if (lean_obj_tag(v_pre_1646_) == 0)
{
lean_object* v_str_1647_; lean_object* v_str_1648_; lean_object* v_str_1649_; lean_object* v___x_1650_; uint8_t v___x_1651_; 
v_str_1647_ = lean_ctor_get(v_x_1633_, 1);
v_str_1648_ = lean_ctor_get(v_pre_1634_, 1);
v_str_1649_ = lean_ctor_get(v_pre_1635_, 1);
v___x_1650_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__4));
v___x_1651_ = lean_string_dec_eq(v_str_1649_, v___x_1650_);
if (v___x_1651_ == 0)
{
return v___x_1651_;
}
else
{
lean_object* v___x_1652_; uint8_t v___x_1653_; 
v___x_1652_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__5));
v___x_1653_ = lean_string_dec_eq(v_str_1648_, v___x_1652_);
if (v___x_1653_ == 0)
{
return v___x_1653_;
}
else
{
lean_object* v___x_1654_; uint8_t v___x_1655_; 
v___x_1654_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__6));
v___x_1655_ = lean_string_dec_eq(v_str_1647_, v___x_1654_);
if (v___x_1655_ == 0)
{
return v___x_1655_;
}
else
{
return v_suppressElabErrors_1631_;
}
}
}
}
else
{
return v___y_1632_;
}
}
default: 
{
return v___y_1632_;
}
}
}
case 0:
{
lean_object* v_str_1656_; lean_object* v___x_1657_; uint8_t v___x_1658_; 
v_str_1656_ = lean_ctor_get(v_x_1633_, 1);
v___x_1657_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_1658_ = lean_string_dec_eq(v_str_1656_, v___x_1657_);
if (v___x_1658_ == 0)
{
return v___x_1658_;
}
else
{
return v_suppressElabErrors_1631_;
}
}
default: 
{
return v___y_1632_;
}
}
}
else
{
return v___y_1632_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1659_, lean_object* v___y_1660_, lean_object* v_x_1661_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1662_; uint8_t v___y_49301__boxed_1663_; uint8_t v_res_1664_; lean_object* v_r_1665_; 
v_suppressElabErrors_boxed_1662_ = lean_unbox(v_suppressElabErrors_1659_);
v___y_49301__boxed_1663_ = lean_unbox(v___y_1660_);
v_res_1664_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(v_suppressElabErrors_boxed_1662_, v___y_49301__boxed_1663_, v_x_1661_);
lean_dec(v_x_1661_);
v_r_1665_ = lean_box(v_res_1664_);
return v_r_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(lean_object* v_ref_1667_, lean_object* v_msgData_1668_, uint8_t v_severity_1669_, uint8_t v_isSilent_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_){
_start:
{
lean_object* v___y_1677_; uint8_t v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; uint8_t v___y_1683_; lean_object* v_currNamespace_1684_; lean_object* v_openDecls_1685_; lean_object* v___y_1686_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; uint8_t v___y_1717_; uint8_t v___y_1718_; uint8_t v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; uint8_t v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; uint8_t v___y_1745_; uint8_t v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___y_1754_; lean_object* v___y_1755_; uint8_t v___y_1756_; lean_object* v___y_1757_; uint8_t v___y_1758_; lean_object* v___y_1759_; uint8_t v___y_1760_; uint8_t v___x_1765_; lean_object* v___y_1767_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; uint8_t v___y_1772_; lean_object* v___y_1773_; uint8_t v___y_1774_; uint8_t v___y_1775_; uint8_t v___y_1777_; uint8_t v___x_1795_; 
v___x_1765_ = 2;
v___x_1795_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1669_, v___x_1765_);
if (v___x_1795_ == 0)
{
v___y_1777_ = v___x_1795_;
goto v___jp_1776_;
}
else
{
uint8_t v___x_1796_; 
lean_inc_ref(v_msgData_1668_);
v___x_1796_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1668_);
v___y_1777_ = v___x_1796_;
goto v___jp_1776_;
}
v___jp_1676_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v_env_1691_; lean_object* v_nextMacroScope_1692_; lean_object* v_ngen_1693_; lean_object* v_auxDeclNGen_1694_; lean_object* v_traceState_1695_; lean_object* v_cache_1696_; lean_object* v_messages_1697_; lean_object* v_infoState_1698_; lean_object* v_snapshotTasks_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1710_; 
lean_inc(v_openDecls_1685_);
lean_inc(v_currNamespace_1684_);
v___x_1687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1687_, 0, v_currNamespace_1684_);
lean_ctor_set(v___x_1687_, 1, v_openDecls_1685_);
v___x_1688_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
lean_ctor_set(v___x_1688_, 1, v___y_1682_);
lean_inc_ref(v___y_1680_);
lean_inc_ref(v___y_1679_);
v___x_1689_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1689_, 0, v___y_1679_);
lean_ctor_set(v___x_1689_, 1, v___y_1681_);
lean_ctor_set(v___x_1689_, 2, v___y_1677_);
lean_ctor_set(v___x_1689_, 3, v___y_1680_);
lean_ctor_set(v___x_1689_, 4, v___x_1688_);
lean_ctor_set_uint8(v___x_1689_, sizeof(void*)*5, v___y_1678_);
lean_ctor_set_uint8(v___x_1689_, sizeof(void*)*5 + 1, v___y_1683_);
lean_ctor_set_uint8(v___x_1689_, sizeof(void*)*5 + 2, v_isSilent_1670_);
v___x_1690_ = lean_st_ref_take(v___y_1686_);
v_env_1691_ = lean_ctor_get(v___x_1690_, 0);
v_nextMacroScope_1692_ = lean_ctor_get(v___x_1690_, 1);
v_ngen_1693_ = lean_ctor_get(v___x_1690_, 2);
v_auxDeclNGen_1694_ = lean_ctor_get(v___x_1690_, 3);
v_traceState_1695_ = lean_ctor_get(v___x_1690_, 4);
v_cache_1696_ = lean_ctor_get(v___x_1690_, 5);
v_messages_1697_ = lean_ctor_get(v___x_1690_, 6);
v_infoState_1698_ = lean_ctor_get(v___x_1690_, 7);
v_snapshotTasks_1699_ = lean_ctor_get(v___x_1690_, 8);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1701_ = v___x_1690_;
v_isShared_1702_ = v_isSharedCheck_1710_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_snapshotTasks_1699_);
lean_inc(v_infoState_1698_);
lean_inc(v_messages_1697_);
lean_inc(v_cache_1696_);
lean_inc(v_traceState_1695_);
lean_inc(v_auxDeclNGen_1694_);
lean_inc(v_ngen_1693_);
lean_inc(v_nextMacroScope_1692_);
lean_inc(v_env_1691_);
lean_dec(v___x_1690_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1710_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1706_; 
v___x_1703_ = lean_box(0);
v___x_1704_ = l_Lean_MessageLog_add(v___x_1689_, v_messages_1697_);
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 6, v___x_1704_);
v___x_1706_ = v___x_1701_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_env_1691_);
lean_ctor_set(v_reuseFailAlloc_1709_, 1, v_nextMacroScope_1692_);
lean_ctor_set(v_reuseFailAlloc_1709_, 2, v_ngen_1693_);
lean_ctor_set(v_reuseFailAlloc_1709_, 3, v_auxDeclNGen_1694_);
lean_ctor_set(v_reuseFailAlloc_1709_, 4, v_traceState_1695_);
lean_ctor_set(v_reuseFailAlloc_1709_, 5, v_cache_1696_);
lean_ctor_set(v_reuseFailAlloc_1709_, 6, v___x_1704_);
lean_ctor_set(v_reuseFailAlloc_1709_, 7, v_infoState_1698_);
lean_ctor_set(v_reuseFailAlloc_1709_, 8, v_snapshotTasks_1699_);
v___x_1706_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1707_ = lean_st_ref_put(v___y_1686_, v___x_1706_);
v___x_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1703_);
return v___x_1708_;
}
}
}
v___jp_1711_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v_a_1724_; lean_object* v___x_1726_; uint8_t v_isShared_1727_; uint8_t v_isSharedCheck_1737_; 
v___x_1722_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1668_);
v___x_1723_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v___x_1722_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_);
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1726_ = v___x_1723_;
v_isShared_1727_ = v_isSharedCheck_1737_;
goto v_resetjp_1725_;
}
else
{
lean_inc(v_a_1724_);
lean_dec(v___x_1723_);
v___x_1726_ = lean_box(0);
v_isShared_1727_ = v_isSharedCheck_1737_;
goto v_resetjp_1725_;
}
v_resetjp_1725_:
{
lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_inc_ref_n(v___y_1720_, 2);
v___x_1728_ = l_Lean_FileMap_toPosition(v___y_1720_, v___y_1715_);
lean_dec(v___y_1715_);
v___x_1729_ = l_Lean_FileMap_toPosition(v___y_1720_, v___y_1721_);
lean_dec(v___y_1721_);
v___x_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1729_);
v___x_1731_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v___y_1718_ == 0)
{
lean_del_object(v___x_1726_);
lean_dec_ref(v___y_1714_);
v___y_1677_ = v___x_1730_;
v___y_1678_ = v___y_1717_;
v___y_1679_ = v___y_1716_;
v___y_1680_ = v___x_1731_;
v___y_1681_ = v___x_1728_;
v___y_1682_ = v_a_1724_;
v___y_1683_ = v___y_1719_;
v_currNamespace_1684_ = v___y_1713_;
v_openDecls_1685_ = v___y_1712_;
v___y_1686_ = v___y_1674_;
goto v___jp_1676_;
}
else
{
uint8_t v___x_1732_; 
lean_inc(v_a_1724_);
v___x_1732_ = l_Lean_MessageData_hasTag(v___y_1714_, v_a_1724_);
if (v___x_1732_ == 0)
{
lean_object* v___x_1733_; lean_object* v___x_1735_; 
lean_dec_ref_known(v___x_1730_, 1);
lean_dec_ref(v___x_1728_);
lean_dec(v_a_1724_);
v___x_1733_ = lean_box(0);
if (v_isShared_1727_ == 0)
{
lean_ctor_set(v___x_1726_, 0, v___x_1733_);
v___x_1735_ = v___x_1726_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1733_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
else
{
lean_del_object(v___x_1726_);
v___y_1677_ = v___x_1730_;
v___y_1678_ = v___y_1717_;
v___y_1679_ = v___y_1716_;
v___y_1680_ = v___x_1731_;
v___y_1681_ = v___x_1728_;
v___y_1682_ = v_a_1724_;
v___y_1683_ = v___y_1719_;
v_currNamespace_1684_ = v___y_1713_;
v_openDecls_1685_ = v___y_1712_;
v___y_1686_ = v___y_1674_;
goto v___jp_1676_;
}
}
}
}
v___jp_1738_:
{
lean_object* v___x_1749_; 
v___x_1749_ = l_Lean_Syntax_getTailPos_x3f(v___y_1744_, v___y_1742_);
lean_dec(v___y_1744_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_inc(v___y_1748_);
v___y_1712_ = v___y_1740_;
v___y_1713_ = v___y_1739_;
v___y_1714_ = v___y_1741_;
v___y_1715_ = v___y_1748_;
v___y_1716_ = v___y_1743_;
v___y_1717_ = v___y_1742_;
v___y_1718_ = v___y_1745_;
v___y_1719_ = v___y_1746_;
v___y_1720_ = v___y_1747_;
v___y_1721_ = v___y_1748_;
goto v___jp_1711_;
}
else
{
lean_object* v_val_1750_; 
v_val_1750_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_val_1750_);
lean_dec_ref_known(v___x_1749_, 1);
v___y_1712_ = v___y_1740_;
v___y_1713_ = v___y_1739_;
v___y_1714_ = v___y_1741_;
v___y_1715_ = v___y_1748_;
v___y_1716_ = v___y_1743_;
v___y_1717_ = v___y_1742_;
v___y_1718_ = v___y_1745_;
v___y_1719_ = v___y_1746_;
v___y_1720_ = v___y_1747_;
v___y_1721_ = v_val_1750_;
goto v___jp_1711_;
}
}
v___jp_1751_:
{
lean_object* v_ref_1761_; lean_object* v___x_1762_; 
v_ref_1761_ = l_Lean_replaceRef(v_ref_1667_, v___y_1757_);
v___x_1762_ = l_Lean_Syntax_getPos_x3f(v_ref_1761_, v___y_1756_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v___x_1763_; 
v___x_1763_ = lean_unsigned_to_nat(0u);
v___y_1739_ = v___y_1753_;
v___y_1740_ = v___y_1752_;
v___y_1741_ = v___y_1754_;
v___y_1742_ = v___y_1756_;
v___y_1743_ = v___y_1755_;
v___y_1744_ = v_ref_1761_;
v___y_1745_ = v___y_1758_;
v___y_1746_ = v___y_1760_;
v___y_1747_ = v___y_1759_;
v___y_1748_ = v___x_1763_;
goto v___jp_1738_;
}
else
{
lean_object* v_val_1764_; 
v_val_1764_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_val_1764_);
lean_dec_ref_known(v___x_1762_, 1);
v___y_1739_ = v___y_1753_;
v___y_1740_ = v___y_1752_;
v___y_1741_ = v___y_1754_;
v___y_1742_ = v___y_1756_;
v___y_1743_ = v___y_1755_;
v___y_1744_ = v_ref_1761_;
v___y_1745_ = v___y_1758_;
v___y_1746_ = v___y_1760_;
v___y_1747_ = v___y_1759_;
v___y_1748_ = v_val_1764_;
goto v___jp_1738_;
}
}
v___jp_1766_:
{
if (v___y_1775_ == 0)
{
v___y_1752_ = v___y_1769_;
v___y_1753_ = v___y_1768_;
v___y_1754_ = v___y_1771_;
v___y_1755_ = v___y_1767_;
v___y_1756_ = v___y_1772_;
v___y_1757_ = v___y_1773_;
v___y_1758_ = v___y_1774_;
v___y_1759_ = v___y_1770_;
v___y_1760_ = v_severity_1669_;
goto v___jp_1751_;
}
else
{
v___y_1752_ = v___y_1769_;
v___y_1753_ = v___y_1768_;
v___y_1754_ = v___y_1771_;
v___y_1755_ = v___y_1767_;
v___y_1756_ = v___y_1772_;
v___y_1757_ = v___y_1773_;
v___y_1758_ = v___y_1774_;
v___y_1759_ = v___y_1770_;
v___y_1760_ = v___x_1765_;
goto v___jp_1751_;
}
}
v___jp_1776_:
{
if (v___y_1777_ == 0)
{
lean_object* v_toCold_1778_; lean_object* v_ref_1779_; uint8_t v_suppressElabErrors_1780_; lean_object* v_fileName_1781_; lean_object* v_fileMap_1782_; lean_object* v_options_1783_; lean_object* v_currNamespace_1784_; lean_object* v_openDecls_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___f_1788_; uint8_t v___x_1789_; uint8_t v___x_1790_; 
v_toCold_1778_ = lean_ctor_get(v___y_1673_, 0);
v_ref_1779_ = lean_ctor_get(v___y_1673_, 2);
v_suppressElabErrors_1780_ = lean_ctor_get_uint8(v___y_1673_, sizeof(void*)*3 + 1);
v_fileName_1781_ = lean_ctor_get(v_toCold_1778_, 0);
v_fileMap_1782_ = lean_ctor_get(v_toCold_1778_, 1);
v_options_1783_ = lean_ctor_get(v_toCold_1778_, 2);
v_currNamespace_1784_ = lean_ctor_get(v_toCold_1778_, 4);
v_openDecls_1785_ = lean_ctor_get(v_toCold_1778_, 5);
v___x_1786_ = lean_box(v_suppressElabErrors_1780_);
v___x_1787_ = lean_box(v___y_1777_);
v___f_1788_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1788_, 0, v___x_1786_);
lean_closure_set(v___f_1788_, 1, v___x_1787_);
v___x_1789_ = 1;
v___x_1790_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1669_, v___x_1789_);
if (v___x_1790_ == 0)
{
v___y_1767_ = v_fileName_1781_;
v___y_1768_ = v_currNamespace_1784_;
v___y_1769_ = v_openDecls_1785_;
v___y_1770_ = v_fileMap_1782_;
v___y_1771_ = v___f_1788_;
v___y_1772_ = v___y_1777_;
v___y_1773_ = v_ref_1779_;
v___y_1774_ = v_suppressElabErrors_1780_;
v___y_1775_ = v___x_1790_;
goto v___jp_1766_;
}
else
{
lean_object* v___x_1791_; uint8_t v___x_1792_; 
v___x_1791_ = l_Lean_warningAsError;
v___x_1792_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_1783_, v___x_1791_);
v___y_1767_ = v_fileName_1781_;
v___y_1768_ = v_currNamespace_1784_;
v___y_1769_ = v_openDecls_1785_;
v___y_1770_ = v_fileMap_1782_;
v___y_1771_ = v___f_1788_;
v___y_1772_ = v___y_1777_;
v___y_1773_ = v_ref_1779_;
v___y_1774_ = v_suppressElabErrors_1780_;
v___y_1775_ = v___x_1792_;
goto v___jp_1766_;
}
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
lean_dec_ref(v_msgData_1668_);
v___x_1793_ = lean_box(0);
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
return v___x_1794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___boxed(lean_object* v_ref_1797_, lean_object* v_msgData_1798_, lean_object* v_severity_1799_, lean_object* v_isSilent_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
uint8_t v_severity_boxed_1806_; uint8_t v_isSilent_boxed_1807_; lean_object* v_res_1808_; 
v_severity_boxed_1806_ = lean_unbox(v_severity_1799_);
v_isSilent_boxed_1807_ = lean_unbox(v_isSilent_1800_);
v_res_1808_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1797_, v_msgData_1798_, v_severity_boxed_1806_, v_isSilent_boxed_1807_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v_ref_1797_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(lean_object* v_ref_1809_, lean_object* v_msgData_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
uint8_t v___x_1818_; uint8_t v___x_1819_; lean_object* v___x_1820_; 
v___x_1818_ = 2;
v___x_1819_ = 0;
v___x_1820_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1809_, v_msgData_1810_, v___x_1818_, v___x_1819_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26___boxed(lean_object* v_ref_1821_, lean_object* v_msgData_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1821_, v_msgData_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v_ref_1821_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(lean_object* v_msgData_1831_, uint8_t v_severity_1832_, uint8_t v_isSilent_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
lean_object* v_ref_1841_; lean_object* v___x_1842_; 
v_ref_1841_ = lean_ctor_get(v___y_1838_, 2);
v___x_1842_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1841_, v_msgData_1831_, v_severity_1832_, v_isSilent_1833_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_);
return v___x_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42___boxed(lean_object* v_msgData_1843_, lean_object* v_severity_1844_, lean_object* v_isSilent_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
uint8_t v_severity_boxed_1853_; uint8_t v_isSilent_boxed_1854_; lean_object* v_res_1855_; 
v_severity_boxed_1853_ = lean_unbox(v_severity_1844_);
v_isSilent_boxed_1854_ = lean_unbox(v_isSilent_1845_);
v_res_1855_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1843_, v_severity_boxed_1853_, v_isSilent_boxed_1854_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_);
lean_dec(v___y_1851_);
lean_dec_ref(v___y_1850_);
lean_dec(v___y_1849_);
lean_dec_ref(v___y_1848_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
return v_res_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(lean_object* v_msgData_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
uint8_t v___x_1864_; uint8_t v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = 2;
v___x_1865_ = 0;
v___x_1866_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1856_, v___x_1864_, v___x_1865_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27___boxed(lean_object* v_msgData_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v_msgData_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
return v_res_1875_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1(void){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; 
v___x_1877_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__0));
v___x_1878_ = l_Lean_stringToMessageData(v___x_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(lean_object* v_ex_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
if (lean_obj_tag(v_ex_1879_) == 0)
{
lean_object* v_ref_1887_; lean_object* v_msg_1888_; lean_object* v___x_1889_; 
v_ref_1887_ = lean_ctor_get(v_ex_1879_, 0);
lean_inc(v_ref_1887_);
v_msg_1888_ = lean_ctor_get(v_ex_1879_, 1);
lean_inc_ref(v_msg_1888_);
lean_dec_ref_known(v_ex_1879_, 2);
v___x_1889_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1887_, v_msg_1888_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
lean_dec(v_ref_1887_);
return v___x_1889_;
}
else
{
lean_object* v_id_1890_; uint8_t v___y_1892_; uint8_t v___x_1914_; 
v_id_1890_ = lean_ctor_get(v_ex_1879_, 0);
lean_inc(v_id_1890_);
v___x_1914_ = l_Lean_Elab_isAbortExceptionId(v_id_1890_);
if (v___x_1914_ == 0)
{
uint8_t v___x_1915_; 
v___x_1915_ = l_Lean_Exception_isInterrupt(v_ex_1879_);
lean_dec_ref_known(v_ex_1879_, 2);
v___y_1892_ = v___x_1915_;
goto v___jp_1891_;
}
else
{
lean_dec_ref_known(v_ex_1879_, 2);
v___y_1892_ = v___x_1914_;
goto v___jp_1891_;
}
v___jp_1891_:
{
if (v___y_1892_ == 0)
{
lean_object* v_ref_1893_; lean_object* v___x_1894_; 
v_ref_1893_ = lean_ctor_get(v___y_1884_, 2);
v___x_1894_ = l_Lean_InternalExceptionId_getName(v_id_1890_);
lean_dec(v_id_1890_);
if (lean_obj_tag(v___x_1894_) == 0)
{
lean_object* v_a_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v_a_1895_ = lean_ctor_get(v___x_1894_, 0);
lean_inc(v_a_1895_);
lean_dec_ref_known(v___x_1894_, 1);
v___x_1896_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_1897_ = l_Lean_MessageData_ofName(v_a_1895_);
v___x_1898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1896_);
lean_ctor_set(v___x_1898_, 1, v___x_1897_);
v___x_1899_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v___x_1898_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
return v___x_1899_;
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1911_; 
v_a_1900_ = lean_ctor_get(v___x_1894_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1894_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1902_ = v___x_1894_;
v_isShared_1903_ = v_isSharedCheck_1911_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1894_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1911_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1909_; 
v___x_1904_ = lean_io_error_to_string(v_a_1900_);
v___x_1905_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
v___x_1906_ = l_Lean_MessageData_ofFormat(v___x_1905_);
lean_inc(v_ref_1893_);
v___x_1907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1907_, 0, v_ref_1893_);
lean_ctor_set(v___x_1907_, 1, v___x_1906_);
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 0, v___x_1907_);
v___x_1909_ = v___x_1902_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v___x_1907_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
else
{
lean_object* v___x_1912_; lean_object* v___x_1913_; 
lean_dec(v_id_1890_);
v___x_1912_ = lean_box(0);
v___x_1913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
return v___x_1913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___boxed(lean_object* v_ex_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_ex_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_x_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v___x_1933_; 
lean_inc(v___y_1931_);
lean_inc_ref(v___y_1930_);
lean_inc(v___y_1929_);
lean_inc_ref(v___y_1928_);
lean_inc(v___y_1927_);
lean_inc_ref(v___y_1926_);
v___x_1933_ = lean_apply_7(v_x_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, lean_box(0));
if (lean_obj_tag(v___x_1933_) == 0)
{
return v___x_1933_;
}
else
{
lean_object* v_a_1934_; uint8_t v___y_1936_; uint8_t v___x_1938_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
v___x_1938_ = l_Lean_Exception_isInterrupt(v_a_1934_);
if (v___x_1938_ == 0)
{
uint8_t v___x_1939_; 
lean_inc(v_a_1934_);
v___x_1939_ = l_Lean_Exception_isRuntime(v_a_1934_);
v___y_1936_ = v___x_1939_;
goto v___jp_1935_;
}
else
{
v___y_1936_ = v___x_1938_;
goto v___jp_1935_;
}
v___jp_1935_:
{
if (v___y_1936_ == 0)
{
lean_object* v___x_1937_; 
lean_dec_ref_known(v___x_1933_, 1);
v___x_1937_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_a_1934_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_);
return v___x_1937_;
}
else
{
lean_dec(v_a_1934_);
return v___x_1933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_x_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
lean_object* v_res_1948_; 
v_res_1948_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v_x_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v___x_1949_, lean_object* v___x_1950_, lean_object* v_as_1951_, size_t v_sz_1952_, size_t v_i_1953_, lean_object* v_b_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
uint8_t v___x_1962_; 
v___x_1962_ = lean_usize_dec_lt(v_i_1953_, v_sz_1952_);
if (v___x_1962_ == 0)
{
lean_object* v___x_1963_; 
lean_dec_ref(v___x_1949_);
v___x_1963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1963_, 0, v_b_1954_);
return v___x_1963_;
}
else
{
lean_object* v_a_1964_; lean_object* v_ref_1965_; lean_object* v_toCold_1966_; lean_object* v_currRecDepth_1967_; lean_object* v_ref_1968_; uint8_t v_diag_1969_; uint8_t v_suppressElabErrors_1970_; lean_object* v___x_1971_; uint8_t v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v_ref_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v_a_1964_ = lean_array_uget_borrowed(v_as_1951_, v_i_1953_);
v_ref_1965_ = lean_ctor_get(v_a_1964_, 0);
v_toCold_1966_ = lean_ctor_get(v___y_1959_, 0);
v_currRecDepth_1967_ = lean_ctor_get(v___y_1959_, 1);
v_ref_1968_ = lean_ctor_get(v___y_1959_, 2);
v_diag_1969_ = lean_ctor_get_uint8(v___y_1959_, sizeof(void*)*3);
v_suppressElabErrors_1970_ = lean_ctor_get_uint8(v___y_1959_, sizeof(void*)*3 + 1);
v___x_1971_ = lean_unsigned_to_nat(0u);
v___x_1972_ = lean_nat_dec_eq(v___x_1950_, v___x_1971_);
v___x_1973_ = lean_box(0);
v___x_1974_ = lean_box(0);
v___x_1975_ = lean_box(v___x_1972_);
lean_inc_ref(v___x_1949_);
lean_inc(v_a_1964_);
v___x_1976_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_processDefDeriving___boxed), 11, 4);
lean_closure_set(v___x_1976_, 0, v_a_1964_);
lean_closure_set(v___x_1976_, 1, v___x_1949_);
lean_closure_set(v___x_1976_, 2, v___x_1975_);
lean_closure_set(v___x_1976_, 3, v___x_1974_);
v_ref_1977_ = l_Lean_replaceRef(v_ref_1965_, v_ref_1968_);
lean_inc(v_currRecDepth_1967_);
lean_inc_ref(v_toCold_1966_);
v___x_1978_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1978_, 0, v_toCold_1966_);
lean_ctor_set(v___x_1978_, 1, v_currRecDepth_1967_);
lean_ctor_set(v___x_1978_, 2, v_ref_1977_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*3, v_diag_1969_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*3 + 1, v_suppressElabErrors_1970_);
v___x_1979_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v___x_1976_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___x_1978_, v___y_1960_);
lean_dec_ref_known(v___x_1978_, 3);
if (lean_obj_tag(v___x_1979_) == 0)
{
size_t v___x_1980_; size_t v___x_1981_; 
lean_dec_ref_known(v___x_1979_, 1);
v___x_1980_ = ((size_t)1ULL);
v___x_1981_ = lean_usize_add(v_i_1953_, v___x_1980_);
v_i_1953_ = v___x_1981_;
v_b_1954_ = v___x_1973_;
goto _start;
}
else
{
lean_dec_ref(v___x_1949_);
return v___x_1979_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v___x_1983_, lean_object* v___x_1984_, lean_object* v_as_1985_, lean_object* v_sz_1986_, lean_object* v_i_1987_, lean_object* v_b_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
size_t v_sz_boxed_1996_; size_t v_i_boxed_1997_; lean_object* v_res_1998_; 
v_sz_boxed_1996_ = lean_unbox_usize(v_sz_1986_);
lean_dec(v_sz_1986_);
v_i_boxed_1997_ = lean_unbox_usize(v_i_1987_);
lean_dec(v_i_1987_);
v_res_1998_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_1983_, v___x_1984_, v_as_1985_, v_sz_boxed_1996_, v_i_boxed_1997_, v_b_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_);
lean_dec(v___y_1994_);
lean_dec_ref(v___y_1993_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec_ref(v_as_1985_);
lean_dec(v___x_1984_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v_a_1999_, lean_object* v_declName_2000_, lean_object* v_a_2001_, lean_object* v___x_2002_, size_t v___x_2003_, lean_object* v___x_2004_, lean_object* v_xs_2005_, lean_object* v_x_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; size_t v_sz_2019_; lean_object* v___x_2020_; 
v___x_2014_ = l_Lean_ConstantInfo_levelParams(v_a_1999_);
v___x_2015_ = lean_box(0);
v___x_2016_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v___x_2014_, v___x_2015_);
v___x_2017_ = l_Lean_Expr_const___override(v_declName_2000_, v___x_2016_);
v___x_2018_ = l_Lean_mkAppN(v___x_2017_, v_xs_2005_);
v_sz_2019_ = lean_array_size(v_a_2001_);
v___x_2020_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_2018_, v___x_2002_, v_a_2001_, v_sz_2019_, v___x_2003_, v___x_2004_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2027_ == 0)
{
lean_object* v_unused_2028_; 
v_unused_2028_ = lean_ctor_get(v___x_2020_, 0);
lean_dec(v_unused_2028_);
v___x_2022_ = v___x_2020_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_dec(v___x_2020_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v___x_2004_);
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2004_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
else
{
return v___x_2020_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v_a_2029_, lean_object* v_declName_2030_, lean_object* v_a_2031_, lean_object* v___x_2032_, lean_object* v___x_2033_, lean_object* v___x_2034_, lean_object* v_xs_2035_, lean_object* v_x_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
size_t v___x_49859__boxed_2044_; lean_object* v_res_2045_; 
v___x_49859__boxed_2044_ = lean_unbox_usize(v___x_2033_);
lean_dec(v___x_2033_);
v_res_2045_ = l_Lean_Elab_Command_elabNewtype___lam__0(v_a_2029_, v_declName_2030_, v_a_2031_, v___x_2032_, v___x_49859__boxed_2044_, v___x_2034_, v_xs_2035_, v_x_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_);
lean_dec(v___y_2042_);
lean_dec_ref(v___y_2041_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec_ref(v_x_2036_);
lean_dec_ref(v_xs_2035_);
lean_dec(v___x_2032_);
lean_dec_ref(v_a_2031_);
lean_dec_ref(v_a_2029_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(lean_object* v___y_2046_, uint8_t v_isExporting_2047_, lean_object* v___x_2048_, lean_object* v___y_2049_, lean_object* v___x_2050_, lean_object* v_a_x3f_2051_){
_start:
{
lean_object* v___x_2053_; lean_object* v_env_2054_; lean_object* v_nextMacroScope_2055_; lean_object* v_ngen_2056_; lean_object* v_auxDeclNGen_2057_; lean_object* v_traceState_2058_; lean_object* v_messages_2059_; lean_object* v_infoState_2060_; lean_object* v_snapshotTasks_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2086_; 
v___x_2053_ = lean_st_ref_take(v___y_2046_);
v_env_2054_ = lean_ctor_get(v___x_2053_, 0);
v_nextMacroScope_2055_ = lean_ctor_get(v___x_2053_, 1);
v_ngen_2056_ = lean_ctor_get(v___x_2053_, 2);
v_auxDeclNGen_2057_ = lean_ctor_get(v___x_2053_, 3);
v_traceState_2058_ = lean_ctor_get(v___x_2053_, 4);
v_messages_2059_ = lean_ctor_get(v___x_2053_, 6);
v_infoState_2060_ = lean_ctor_get(v___x_2053_, 7);
v_snapshotTasks_2061_ = lean_ctor_get(v___x_2053_, 8);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2086_ == 0)
{
lean_object* v_unused_2087_; 
v_unused_2087_ = lean_ctor_get(v___x_2053_, 5);
lean_dec(v_unused_2087_);
v___x_2063_ = v___x_2053_;
v_isShared_2064_ = v_isSharedCheck_2086_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_snapshotTasks_2061_);
lean_inc(v_infoState_2060_);
lean_inc(v_messages_2059_);
lean_inc(v_traceState_2058_);
lean_inc(v_auxDeclNGen_2057_);
lean_inc(v_ngen_2056_);
lean_inc(v_nextMacroScope_2055_);
lean_inc(v_env_2054_);
lean_dec(v___x_2053_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2086_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2065_; lean_object* v___x_2067_; 
v___x_2065_ = l_Lean_Environment_setExporting(v_env_2054_, v_isExporting_2047_);
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 5, v___x_2048_);
lean_ctor_set(v___x_2063_, 0, v___x_2065_);
v___x_2067_ = v___x_2063_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2085_, 1, v_nextMacroScope_2055_);
lean_ctor_set(v_reuseFailAlloc_2085_, 2, v_ngen_2056_);
lean_ctor_set(v_reuseFailAlloc_2085_, 3, v_auxDeclNGen_2057_);
lean_ctor_set(v_reuseFailAlloc_2085_, 4, v_traceState_2058_);
lean_ctor_set(v_reuseFailAlloc_2085_, 5, v___x_2048_);
lean_ctor_set(v_reuseFailAlloc_2085_, 6, v_messages_2059_);
lean_ctor_set(v_reuseFailAlloc_2085_, 7, v_infoState_2060_);
lean_ctor_set(v_reuseFailAlloc_2085_, 8, v_snapshotTasks_2061_);
v___x_2067_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v_mctx_2070_; lean_object* v_zetaDeltaFVarIds_2071_; lean_object* v_postponed_2072_; lean_object* v_diag_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2083_; 
v___x_2068_ = lean_st_ref_put(v___y_2046_, v___x_2067_);
v___x_2069_ = lean_st_ref_take(v___y_2049_);
v_mctx_2070_ = lean_ctor_get(v___x_2069_, 0);
v_zetaDeltaFVarIds_2071_ = lean_ctor_get(v___x_2069_, 2);
v_postponed_2072_ = lean_ctor_get(v___x_2069_, 3);
v_diag_2073_ = lean_ctor_get(v___x_2069_, 4);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2083_ == 0)
{
lean_object* v_unused_2084_; 
v_unused_2084_ = lean_ctor_get(v___x_2069_, 1);
lean_dec(v_unused_2084_);
v___x_2075_ = v___x_2069_;
v_isShared_2076_ = v_isSharedCheck_2083_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_diag_2073_);
lean_inc(v_postponed_2072_);
lean_inc(v_zetaDeltaFVarIds_2071_);
lean_inc(v_mctx_2070_);
lean_dec(v___x_2069_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2083_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2077_; lean_object* v___x_2079_; 
v___x_2077_ = lean_box(0);
if (v_isShared_2076_ == 0)
{
lean_ctor_set(v___x_2075_, 1, v___x_2050_);
v___x_2079_ = v___x_2075_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_mctx_2070_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v___x_2050_);
lean_ctor_set(v_reuseFailAlloc_2082_, 2, v_zetaDeltaFVarIds_2071_);
lean_ctor_set(v_reuseFailAlloc_2082_, 3, v_postponed_2072_);
lean_ctor_set(v_reuseFailAlloc_2082_, 4, v_diag_2073_);
v___x_2079_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2080_ = lean_st_ref_put(v___y_2049_, v___x_2079_);
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2077_);
return v___x_2081_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0___boxed(lean_object* v___y_2088_, lean_object* v_isExporting_2089_, lean_object* v___x_2090_, lean_object* v___y_2091_, lean_object* v___x_2092_, lean_object* v_a_x3f_2093_, lean_object* v___y_2094_){
_start:
{
uint8_t v_isExporting_boxed_2095_; lean_object* v_res_2096_; 
v_isExporting_boxed_2095_ = lean_unbox(v_isExporting_2089_);
v_res_2096_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2088_, v_isExporting_boxed_2095_, v___x_2090_, v___y_2091_, v___x_2092_, v_a_x3f_2093_);
lean_dec(v_a_x3f_2093_);
lean_dec(v___y_2091_);
lean_dec(v___y_2088_);
return v_res_2096_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(lean_object* v_x_2097_, uint8_t v_isExporting_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v___x_2106_; lean_object* v_env_2107_; lean_object* v___x_2108_; uint8_t v_isModule_2109_; 
v___x_2106_ = lean_st_ref_get(v___y_2104_);
v_env_2107_ = lean_ctor_get(v___x_2106_, 0);
lean_inc_ref(v_env_2107_);
lean_dec(v___x_2106_);
v___x_2108_ = l_Lean_Environment_header(v_env_2107_);
v_isModule_2109_ = lean_ctor_get_uint8(v___x_2108_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2108_);
if (v_isModule_2109_ == 0)
{
lean_object* v___x_2110_; 
lean_dec_ref(v_env_2107_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
lean_inc(v___y_2100_);
lean_inc_ref(v___y_2099_);
v___x_2110_ = lean_apply_7(v_x_2097_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, lean_box(0));
return v___x_2110_;
}
else
{
uint8_t v_isExporting_2111_; 
v_isExporting_2111_ = lean_ctor_get_uint8(v_env_2107_, sizeof(void*)*8);
lean_dec_ref(v_env_2107_);
if (v_isExporting_2098_ == 0)
{
if (v_isExporting_2111_ == 0)
{
lean_object* v___x_2177_; 
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
lean_inc(v___y_2100_);
lean_inc_ref(v___y_2099_);
v___x_2177_ = lean_apply_7(v_x_2097_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, lean_box(0));
return v___x_2177_;
}
else
{
goto v___jp_2112_;
}
}
else
{
if (v_isExporting_2111_ == 0)
{
goto v___jp_2112_;
}
else
{
lean_object* v___x_2178_; 
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
lean_inc(v___y_2100_);
lean_inc_ref(v___y_2099_);
v___x_2178_ = lean_apply_7(v_x_2097_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, lean_box(0));
return v___x_2178_;
}
}
v___jp_2112_:
{
lean_object* v___x_2113_; lean_object* v_env_2114_; lean_object* v_nextMacroScope_2115_; lean_object* v_ngen_2116_; lean_object* v_auxDeclNGen_2117_; lean_object* v_traceState_2118_; lean_object* v_messages_2119_; lean_object* v_infoState_2120_; lean_object* v_snapshotTasks_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2175_; 
v___x_2113_ = lean_st_ref_take(v___y_2104_);
v_env_2114_ = lean_ctor_get(v___x_2113_, 0);
v_nextMacroScope_2115_ = lean_ctor_get(v___x_2113_, 1);
v_ngen_2116_ = lean_ctor_get(v___x_2113_, 2);
v_auxDeclNGen_2117_ = lean_ctor_get(v___x_2113_, 3);
v_traceState_2118_ = lean_ctor_get(v___x_2113_, 4);
v_messages_2119_ = lean_ctor_get(v___x_2113_, 6);
v_infoState_2120_ = lean_ctor_get(v___x_2113_, 7);
v_snapshotTasks_2121_ = lean_ctor_get(v___x_2113_, 8);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2175_ == 0)
{
lean_object* v_unused_2176_; 
v_unused_2176_ = lean_ctor_get(v___x_2113_, 5);
lean_dec(v_unused_2176_);
v___x_2123_ = v___x_2113_;
v_isShared_2124_ = v_isSharedCheck_2175_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_snapshotTasks_2121_);
lean_inc(v_infoState_2120_);
lean_inc(v_messages_2119_);
lean_inc(v_traceState_2118_);
lean_inc(v_auxDeclNGen_2117_);
lean_inc(v_ngen_2116_);
lean_inc(v_nextMacroScope_2115_);
lean_inc(v_env_2114_);
lean_dec(v___x_2113_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2175_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2125_ = l_Lean_Environment_setExporting(v_env_2114_, v_isExporting_2098_);
v___x_2126_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2);
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 5, v___x_2126_);
lean_ctor_set(v___x_2123_, 0, v___x_2125_);
v___x_2128_ = v___x_2123_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v___x_2125_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_nextMacroScope_2115_);
lean_ctor_set(v_reuseFailAlloc_2174_, 2, v_ngen_2116_);
lean_ctor_set(v_reuseFailAlloc_2174_, 3, v_auxDeclNGen_2117_);
lean_ctor_set(v_reuseFailAlloc_2174_, 4, v_traceState_2118_);
lean_ctor_set(v_reuseFailAlloc_2174_, 5, v___x_2126_);
lean_ctor_set(v_reuseFailAlloc_2174_, 6, v_messages_2119_);
lean_ctor_set(v_reuseFailAlloc_2174_, 7, v_infoState_2120_);
lean_ctor_set(v_reuseFailAlloc_2174_, 8, v_snapshotTasks_2121_);
v___x_2128_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v_mctx_2131_; lean_object* v_zetaDeltaFVarIds_2132_; lean_object* v_postponed_2133_; lean_object* v_diag_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2172_; 
v___x_2129_ = lean_st_ref_put(v___y_2104_, v___x_2128_);
v___x_2130_ = lean_st_ref_take(v___y_2102_);
v_mctx_2131_ = lean_ctor_get(v___x_2130_, 0);
v_zetaDeltaFVarIds_2132_ = lean_ctor_get(v___x_2130_, 2);
v_postponed_2133_ = lean_ctor_get(v___x_2130_, 3);
v_diag_2134_ = lean_ctor_get(v___x_2130_, 4);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2172_ == 0)
{
lean_object* v_unused_2173_; 
v_unused_2173_ = lean_ctor_get(v___x_2130_, 1);
lean_dec(v_unused_2173_);
v___x_2136_ = v___x_2130_;
v_isShared_2137_ = v_isSharedCheck_2172_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_diag_2134_);
lean_inc(v_postponed_2133_);
lean_inc(v_zetaDeltaFVarIds_2132_);
lean_inc(v_mctx_2131_);
lean_dec(v___x_2130_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2172_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v___x_2140_; 
v___x_2138_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 1, v___x_2138_);
v___x_2140_ = v___x_2136_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_mctx_2131_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v___x_2138_);
lean_ctor_set(v_reuseFailAlloc_2171_, 2, v_zetaDeltaFVarIds_2132_);
lean_ctor_set(v_reuseFailAlloc_2171_, 3, v_postponed_2133_);
lean_ctor_set(v_reuseFailAlloc_2171_, 4, v_diag_2134_);
v___x_2140_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
lean_object* v___x_2141_; lean_object* v_r_2142_; 
v___x_2141_ = lean_st_ref_put(v___y_2102_, v___x_2140_);
lean_inc(v___y_2104_);
lean_inc_ref(v___y_2103_);
lean_inc(v___y_2102_);
lean_inc_ref(v___y_2101_);
lean_inc(v___y_2100_);
lean_inc_ref(v___y_2099_);
v_r_2142_ = lean_apply_7(v_x_2097_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_, lean_box(0));
if (lean_obj_tag(v_r_2142_) == 0)
{
lean_object* v_a_2143_; lean_object* v___x_2145_; uint8_t v_isShared_2146_; uint8_t v_isSharedCheck_2159_; 
v_a_2143_ = lean_ctor_get(v_r_2142_, 0);
v_isSharedCheck_2159_ = !lean_is_exclusive(v_r_2142_);
if (v_isSharedCheck_2159_ == 0)
{
v___x_2145_ = v_r_2142_;
v_isShared_2146_ = v_isSharedCheck_2159_;
goto v_resetjp_2144_;
}
else
{
lean_inc(v_a_2143_);
lean_dec(v_r_2142_);
v___x_2145_ = lean_box(0);
v_isShared_2146_ = v_isSharedCheck_2159_;
goto v_resetjp_2144_;
}
v_resetjp_2144_:
{
lean_object* v___x_2148_; 
lean_inc(v_a_2143_);
if (v_isShared_2146_ == 0)
{
lean_ctor_set_tag(v___x_2145_, 1);
v___x_2148_ = v___x_2145_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_a_2143_);
v___x_2148_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
lean_object* v___x_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v___x_2149_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2104_, v_isExporting_2111_, v___x_2126_, v___y_2102_, v___x_2138_, v___x_2148_);
lean_dec_ref(v___x_2148_);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2149_);
if (v_isSharedCheck_2156_ == 0)
{
lean_object* v_unused_2157_; 
v_unused_2157_ = lean_ctor_get(v___x_2149_, 0);
lean_dec(v_unused_2157_);
v___x_2151_ = v___x_2149_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_dec(v___x_2149_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v_a_2143_);
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2143_);
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
else
{
lean_object* v_a_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2160_ = lean_ctor_get(v_r_2142_, 0);
lean_inc(v_a_2160_);
lean_dec_ref_known(v_r_2142_, 1);
v___x_2161_ = lean_box(0);
v___x_2162_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2104_, v_isExporting_2111_, v___x_2126_, v___y_2102_, v___x_2138_, v___x_2161_);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2169_ == 0)
{
lean_object* v_unused_2170_; 
v_unused_2170_ = lean_ctor_get(v___x_2162_, 0);
lean_dec(v_unused_2170_);
v___x_2164_ = v___x_2162_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_dec(v___x_2162_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
lean_ctor_set_tag(v___x_2164_, 1);
lean_ctor_set(v___x_2164_, 0, v_a_2160_);
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2160_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___boxed(lean_object* v_x_2179_, lean_object* v_isExporting_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
uint8_t v_isExporting_boxed_2188_; lean_object* v_res_2189_; 
v_isExporting_boxed_2188_ = lean_unbox(v_isExporting_2180_);
v_res_2189_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2179_, v_isExporting_boxed_2188_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
lean_dec_ref(v___y_2181_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(lean_object* v_x_2190_, uint8_t v_when_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
if (v_when_2191_ == 0)
{
lean_object* v___x_2199_; 
lean_inc(v___y_2197_);
lean_inc_ref(v___y_2196_);
lean_inc(v___y_2195_);
lean_inc_ref(v___y_2194_);
lean_inc(v___y_2193_);
lean_inc_ref(v___y_2192_);
v___x_2199_ = lean_apply_7(v_x_2190_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, lean_box(0));
return v___x_2199_;
}
else
{
uint8_t v___x_2200_; lean_object* v___x_2201_; 
v___x_2200_ = 0;
v___x_2201_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2190_, v___x_2200_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_);
return v___x_2201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg___boxed(lean_object* v_x_2202_, lean_object* v_when_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
uint8_t v_when_boxed_2211_; lean_object* v_res_2212_; 
v_when_boxed_2211_ = lean_unbox(v_when_2203_);
v_res_2212_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_2202_, v_when_boxed_2211_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_);
lean_dec(v___y_2209_);
lean_dec_ref(v___y_2208_);
lean_dec(v___y_2207_);
lean_dec_ref(v___y_2206_);
lean_dec(v___y_2205_);
lean_dec_ref(v___y_2204_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v___x_2213_, uint8_t v___x_2214_, lean_object* v_declName_2215_, lean_object* v_a_2216_, lean_object* v___x_2217_, size_t v___x_2218_, lean_object* v___x_2219_, uint8_t v___x_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
lean_object* v___x_2228_; 
v___x_2228_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v___x_2213_, v___x_2214_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; lean_object* v___x_2230_; lean_object* v___f_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc_n(v_a_2229_, 2);
lean_dec_ref_known(v___x_2228_, 1);
v___x_2230_ = lean_box_usize(v___x_2218_);
v___f_2231_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 15, 6);
lean_closure_set(v___f_2231_, 0, v_a_2229_);
lean_closure_set(v___f_2231_, 1, v_declName_2215_);
lean_closure_set(v___f_2231_, 2, v_a_2216_);
lean_closure_set(v___f_2231_, 3, v___x_2217_);
lean_closure_set(v___f_2231_, 4, v___x_2230_);
lean_closure_set(v___f_2231_, 5, v___x_2219_);
v___x_2232_ = l_Lean_ConstantInfo_value_x21(v_a_2229_, v___x_2220_);
lean_dec(v_a_2229_);
v___x_2233_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___x_2232_, v___f_2231_, v___x_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
return v___x_2233_;
}
else
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_dec(v___x_2217_);
lean_dec_ref(v_a_2216_);
lean_dec(v_declName_2215_);
v_a_2234_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2228_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2228_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v___x_2242_, lean_object* v___x_2243_, lean_object* v_declName_2244_, lean_object* v_a_2245_, lean_object* v___x_2246_, lean_object* v___x_2247_, lean_object* v___x_2248_, lean_object* v___x_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
uint8_t v___x_50170__boxed_2257_; size_t v___x_50174__boxed_2258_; uint8_t v___x_50176__boxed_2259_; lean_object* v_res_2260_; 
v___x_50170__boxed_2257_ = lean_unbox(v___x_2243_);
v___x_50174__boxed_2258_ = lean_unbox_usize(v___x_2247_);
lean_dec(v___x_2247_);
v___x_50176__boxed_2259_ = lean_unbox(v___x_2249_);
v_res_2260_ = l_Lean_Elab_Command_elabNewtype___lam__1(v___x_2242_, v___x_50170__boxed_2257_, v_declName_2244_, v_a_2245_, v___x_2246_, v___x_50174__boxed_2258_, v___x_2248_, v___x_50176__boxed_2259_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(lean_object* v_ref_2261_, lean_object* v_msg_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_toCold_2270_; lean_object* v_currRecDepth_2271_; lean_object* v_ref_2272_; uint8_t v_diag_2273_; uint8_t v_suppressElabErrors_2274_; lean_object* v_ref_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v_toCold_2270_ = lean_ctor_get(v___y_2267_, 0);
v_currRecDepth_2271_ = lean_ctor_get(v___y_2267_, 1);
v_ref_2272_ = lean_ctor_get(v___y_2267_, 2);
v_diag_2273_ = lean_ctor_get_uint8(v___y_2267_, sizeof(void*)*3);
v_suppressElabErrors_2274_ = lean_ctor_get_uint8(v___y_2267_, sizeof(void*)*3 + 1);
v_ref_2275_ = l_Lean_replaceRef(v_ref_2261_, v_ref_2272_);
lean_inc(v_currRecDepth_2271_);
lean_inc_ref(v_toCold_2270_);
v___x_2276_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2276_, 0, v_toCold_2270_);
lean_ctor_set(v___x_2276_, 1, v_currRecDepth_2271_);
lean_ctor_set(v___x_2276_, 2, v_ref_2275_);
lean_ctor_set_uint8(v___x_2276_, sizeof(void*)*3, v_diag_2273_);
lean_ctor_set_uint8(v___x_2276_, sizeof(void*)*3 + 1, v_suppressElabErrors_2274_);
v___x_2277_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___x_2276_, v___y_2268_);
lean_dec_ref_known(v___x_2276_, 3);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg___boxed(lean_object* v_ref_2278_, lean_object* v_msg_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2278_, v_msg_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v_ref_2278_);
return v_res_2287_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0(void){
_start:
{
lean_object* v___x_2288_; lean_object* v___x_2289_; 
v___x_2288_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2288_);
return v___x_2289_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1(void){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v___x_2290_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2291_ = lean_unsigned_to_nat(0u);
v___x_2292_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2291_);
lean_ctor_set(v___x_2292_, 1, v___x_2291_);
lean_ctor_set(v___x_2292_, 2, v___x_2291_);
lean_ctor_set(v___x_2292_, 3, v___x_2291_);
lean_ctor_set(v___x_2292_, 4, v___x_2290_);
lean_ctor_set(v___x_2292_, 5, v___x_2290_);
lean_ctor_set(v___x_2292_, 6, v___x_2290_);
lean_ctor_set(v___x_2292_, 7, v___x_2290_);
lean_ctor_set(v___x_2292_, 8, v___x_2290_);
lean_ctor_set(v___x_2292_, 9, v___x_2290_);
lean_ctor_set(v___x_2292_, 10, v___x_2290_);
return v___x_2292_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2(void){
_start:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2293_ = lean_unsigned_to_nat(32u);
v___x_2294_ = lean_mk_empty_array_with_capacity(v___x_2293_);
v___x_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
return v___x_2295_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3(void){
_start:
{
size_t v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2296_ = ((size_t)5ULL);
v___x_2297_ = lean_unsigned_to_nat(0u);
v___x_2298_ = lean_unsigned_to_nat(32u);
v___x_2299_ = lean_mk_empty_array_with_capacity(v___x_2298_);
v___x_2300_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_2301_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
lean_ctor_set(v___x_2301_, 1, v___x_2299_);
lean_ctor_set(v___x_2301_, 2, v___x_2297_);
lean_ctor_set(v___x_2301_, 3, v___x_2297_);
lean_ctor_set_usize(v___x_2301_, 4, v___x_2296_);
return v___x_2301_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4(void){
_start:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2302_ = lean_box(1);
v___x_2303_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3);
v___x_2304_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2305_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2304_);
lean_ctor_set(v___x_2305_, 1, v___x_2303_);
lean_ctor_set(v___x_2305_, 2, v___x_2302_);
return v___x_2305_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6(void){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2307_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__5));
v___x_2308_ = l_Lean_stringToMessageData(v___x_2307_);
return v___x_2308_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2310_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__7));
v___x_2311_ = l_Lean_stringToMessageData(v___x_2310_);
return v___x_2311_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10(void){
_start:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__9));
v___x_2314_ = l_Lean_stringToMessageData(v___x_2313_);
return v___x_2314_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12(void){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__11));
v___x_2317_ = l_Lean_stringToMessageData(v___x_2316_);
return v___x_2317_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__13));
v___x_2320_ = l_Lean_stringToMessageData(v___x_2319_);
return v___x_2320_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16(void){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2322_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__15));
v___x_2323_ = l_Lean_stringToMessageData(v___x_2322_);
return v___x_2323_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__17));
v___x_2326_ = l_Lean_stringToMessageData(v___x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(lean_object* v_msg_2327_, lean_object* v_declHint_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v_env_2333_; uint8_t v___x_2334_; 
v___x_2331_ = lean_box(0);
v___x_2332_ = lean_st_ref_get(v___y_2329_);
v_env_2333_ = lean_ctor_get(v___x_2332_, 0);
lean_inc_ref(v_env_2333_);
lean_dec(v___x_2332_);
v___x_2334_ = l_Lean_Name_isAnonymous(v_declHint_2328_);
if (v___x_2334_ == 0)
{
uint8_t v_isExporting_2335_; 
v_isExporting_2335_ = lean_ctor_get_uint8(v_env_2333_, sizeof(void*)*8);
if (v_isExporting_2335_ == 0)
{
lean_object* v___x_2336_; 
lean_dec_ref(v_env_2333_);
lean_dec(v_declHint_2328_);
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v_msg_2327_);
return v___x_2336_;
}
else
{
lean_object* v___x_2337_; uint8_t v___x_2338_; 
lean_inc_ref(v_env_2333_);
v___x_2337_ = l_Lean_Environment_setExporting(v_env_2333_, v___x_2334_);
lean_inc(v_declHint_2328_);
lean_inc_ref(v___x_2337_);
v___x_2338_ = l_Lean_Environment_contains(v___x_2337_, v_declHint_2328_, v_isExporting_2335_);
if (v___x_2338_ == 0)
{
lean_object* v___x_2339_; 
lean_dec_ref(v___x_2337_);
lean_dec_ref(v_env_2333_);
lean_dec(v_declHint_2328_);
v___x_2339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2339_, 0, v_msg_2327_);
return v___x_2339_;
}
else
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v_c_2345_; lean_object* v___x_2346_; 
v___x_2340_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2341_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2342_ = l_Lean_Options_empty;
v___x_2343_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2337_);
lean_ctor_set(v___x_2343_, 1, v___x_2340_);
lean_ctor_set(v___x_2343_, 2, v___x_2341_);
lean_ctor_set(v___x_2343_, 3, v___x_2342_);
lean_inc(v_declHint_2328_);
v___x_2344_ = l_Lean_MessageData_ofConstName(v_declHint_2328_, v___x_2334_);
v_c_2345_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2345_, 0, v___x_2343_);
lean_ctor_set(v_c_2345_, 1, v___x_2344_);
v___x_2346_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2333_, v_declHint_2328_);
if (lean_obj_tag(v___x_2346_) == 0)
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; 
lean_dec_ref(v_env_2333_);
lean_dec(v_declHint_2328_);
v___x_2347_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
lean_ctor_set(v___x_2348_, 1, v_c_2345_);
v___x_2349_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2350_, 0, v___x_2348_);
lean_ctor_set(v___x_2350_, 1, v___x_2349_);
v___x_2351_ = l_Lean_MessageData_note(v___x_2350_);
v___x_2352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2352_, 0, v_msg_2327_);
lean_ctor_set(v___x_2352_, 1, v___x_2351_);
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
return v___x_2353_;
}
else
{
lean_object* v_val_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2388_; 
v_val_2354_ = lean_ctor_get(v___x_2346_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2346_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2356_ = v___x_2346_;
v_isShared_2357_ = v_isSharedCheck_2388_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_val_2354_);
lean_dec(v___x_2346_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2388_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v_mod_2360_; uint8_t v___x_2361_; 
v___x_2358_ = l_Lean_Environment_header(v_env_2333_);
lean_dec_ref(v_env_2333_);
v___x_2359_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2358_);
v_mod_2360_ = lean_array_get(v___x_2331_, v___x_2359_, v_val_2354_);
lean_dec(v_val_2354_);
lean_dec_ref(v___x_2359_);
v___x_2361_ = l_Lean_isPrivateName(v_declHint_2328_);
lean_dec(v_declHint_2328_);
if (v___x_2361_ == 0)
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
v___x_2362_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
lean_ctor_set(v___x_2363_, 1, v_c_2345_);
v___x_2364_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2363_);
lean_ctor_set(v___x_2365_, 1, v___x_2364_);
v___x_2366_ = l_Lean_MessageData_ofName(v_mod_2360_);
v___x_2367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2365_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2367_);
lean_ctor_set(v___x_2369_, 1, v___x_2368_);
v___x_2370_ = l_Lean_MessageData_note(v___x_2369_);
v___x_2371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2371_, 0, v_msg_2327_);
lean_ctor_set(v___x_2371_, 1, v___x_2370_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2371_);
v___x_2373_ = v___x_2356_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
else
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2386_; 
v___x_2375_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
lean_ctor_set(v___x_2376_, 1, v_c_2345_);
v___x_2377_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2376_);
lean_ctor_set(v___x_2378_, 1, v___x_2377_);
v___x_2379_ = l_Lean_MessageData_ofName(v_mod_2360_);
v___x_2380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2378_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2382_, 0, v___x_2380_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
v___x_2383_ = l_Lean_MessageData_note(v___x_2382_);
v___x_2384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2384_, 0, v_msg_2327_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2384_);
v___x_2386_ = v___x_2356_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v___x_2384_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2389_; 
lean_dec_ref(v_env_2333_);
lean_dec(v_declHint_2328_);
v___x_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2389_, 0, v_msg_2327_);
return v___x_2389_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___boxed(lean_object* v_msg_2390_, lean_object* v_declHint_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2390_, v_declHint_2391_, v___y_2392_);
lean_dec(v___y_2392_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(lean_object* v_msg_2395_, lean_object* v_declHint_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_){
_start:
{
lean_object* v___x_2404_; lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2414_; 
v___x_2404_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2395_, v_declHint_2396_, v___y_2402_);
v_a_2405_ = lean_ctor_get(v___x_2404_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2404_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2407_ = v___x_2404_;
v_isShared_2408_ = v_isSharedCheck_2414_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2404_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2414_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2409_ = l_Lean_unknownIdentifierMessageTag;
v___x_2410_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
lean_ctor_set(v___x_2410_, 1, v_a_2405_);
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 0, v___x_2410_);
v___x_2412_ = v___x_2407_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v___x_2410_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49___boxed(lean_object* v_msg_2415_, lean_object* v_declHint_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2415_, v_declHint_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec_ref(v___y_2419_);
lean_dec(v___y_2418_);
lean_dec_ref(v___y_2417_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(lean_object* v_ref_2425_, lean_object* v_msg_2426_, lean_object* v_declHint_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v___x_2435_; lean_object* v_a_2436_; lean_object* v___x_2437_; 
v___x_2435_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2426_, v_declHint_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
v_a_2436_ = lean_ctor_get(v___x_2435_, 0);
lean_inc(v_a_2436_);
lean_dec_ref(v___x_2435_);
v___x_2437_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2425_, v_a_2436_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg___boxed(lean_object* v_ref_2438_, lean_object* v_msg_2439_, lean_object* v_declHint_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2438_, v_msg_2439_, v_declHint_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
lean_dec(v___y_2446_);
lean_dec_ref(v___y_2445_);
lean_dec(v___y_2444_);
lean_dec_ref(v___y_2443_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v_ref_2438_);
return v_res_2448_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1(void){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__0));
v___x_2451_ = l_Lean_stringToMessageData(v___x_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(lean_object* v_ref_2452_, lean_object* v_constName_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v___x_2461_; uint8_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2461_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2462_ = 0;
lean_inc(v_constName_2453_);
v___x_2463_ = l_Lean_MessageData_ofConstName(v_constName_2453_, v___x_2462_);
v___x_2464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2461_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2464_);
lean_ctor_set(v___x_2466_, 1, v___x_2465_);
v___x_2467_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2452_, v___x_2466_, v_constName_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
return v___x_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___boxed(lean_object* v_ref_2468_, lean_object* v_constName_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2468_, v_constName_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v_ref_2468_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(lean_object* v_constName_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_){
_start:
{
lean_object* v_ref_2486_; lean_object* v___x_2487_; 
v_ref_2486_ = lean_ctor_get(v___y_2483_, 2);
v___x_2487_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2486_, v_constName_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_);
return v___x_2487_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg___boxed(lean_object* v_constName_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
lean_dec(v___y_2494_);
lean_dec_ref(v___y_2493_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_constName_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_){
_start:
{
lean_object* v___x_2505_; lean_object* v_env_2506_; uint8_t v___x_2507_; lean_object* v___x_2508_; 
v___x_2505_ = lean_st_ref_get(v___y_2503_);
v_env_2506_ = lean_ctor_get(v___x_2505_, 0);
lean_inc_ref(v_env_2506_);
lean_dec(v___x_2505_);
v___x_2507_ = 0;
lean_inc(v_constName_2497_);
v___x_2508_ = l_Lean_Environment_find_x3f(v_env_2506_, v_constName_2497_, v___x_2507_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v___x_2509_; 
v___x_2509_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
return v___x_2509_;
}
else
{
lean_object* v_val_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
lean_dec(v_constName_2497_);
v_val_2510_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v___x_2508_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_val_2510_);
lean_dec(v___x_2508_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
lean_ctor_set_tag(v___x_2512_, 0);
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_val_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_constName_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_){
_start:
{
lean_object* v_res_2526_; 
v_res_2526_ = l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_constName_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
return v_res_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(lean_object* v_t_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v___x_2530_; lean_object* v_infoState_2531_; uint8_t v_enabled_2532_; 
v___x_2530_ = lean_st_ref_get(v___y_2528_);
v_infoState_2531_ = lean_ctor_get(v___x_2530_, 8);
lean_inc_ref(v_infoState_2531_);
lean_dec(v___x_2530_);
v_enabled_2532_ = lean_ctor_get_uint8(v_infoState_2531_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2531_);
if (v_enabled_2532_ == 0)
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_dec_ref(v_t_2527_);
v___x_2533_ = lean_box(0);
v___x_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
return v___x_2534_;
}
else
{
lean_object* v___x_2535_; lean_object* v_infoState_2536_; lean_object* v_env_2537_; lean_object* v_messages_2538_; lean_object* v_scopes_2539_; lean_object* v_usedQuotCtxts_2540_; lean_object* v_nextMacroScope_2541_; lean_object* v_maxRecDepth_2542_; lean_object* v_ngen_2543_; lean_object* v_auxDeclNGen_2544_; lean_object* v_traceState_2545_; lean_object* v_snapshotTasks_2546_; lean_object* v_prevLinterStates_2547_; lean_object* v_codeQualityEntryTasks_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2570_; 
v___x_2535_ = lean_st_ref_take(v___y_2528_);
v_infoState_2536_ = lean_ctor_get(v___x_2535_, 8);
v_env_2537_ = lean_ctor_get(v___x_2535_, 0);
v_messages_2538_ = lean_ctor_get(v___x_2535_, 1);
v_scopes_2539_ = lean_ctor_get(v___x_2535_, 2);
v_usedQuotCtxts_2540_ = lean_ctor_get(v___x_2535_, 3);
v_nextMacroScope_2541_ = lean_ctor_get(v___x_2535_, 4);
v_maxRecDepth_2542_ = lean_ctor_get(v___x_2535_, 5);
v_ngen_2543_ = lean_ctor_get(v___x_2535_, 6);
v_auxDeclNGen_2544_ = lean_ctor_get(v___x_2535_, 7);
v_traceState_2545_ = lean_ctor_get(v___x_2535_, 9);
v_snapshotTasks_2546_ = lean_ctor_get(v___x_2535_, 10);
v_prevLinterStates_2547_ = lean_ctor_get(v___x_2535_, 11);
v_codeQualityEntryTasks_2548_ = lean_ctor_get(v___x_2535_, 12);
v_isSharedCheck_2570_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2570_ == 0)
{
v___x_2550_ = v___x_2535_;
v_isShared_2551_ = v_isSharedCheck_2570_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2548_);
lean_inc(v_prevLinterStates_2547_);
lean_inc(v_snapshotTasks_2546_);
lean_inc(v_traceState_2545_);
lean_inc(v_infoState_2536_);
lean_inc(v_auxDeclNGen_2544_);
lean_inc(v_ngen_2543_);
lean_inc(v_maxRecDepth_2542_);
lean_inc(v_nextMacroScope_2541_);
lean_inc(v_usedQuotCtxts_2540_);
lean_inc(v_scopes_2539_);
lean_inc(v_messages_2538_);
lean_inc(v_env_2537_);
lean_dec(v___x_2535_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2570_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
uint8_t v_enabled_2552_; lean_object* v_assignment_2553_; lean_object* v_lazyAssignment_2554_; lean_object* v_trees_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2569_; 
v_enabled_2552_ = lean_ctor_get_uint8(v_infoState_2536_, sizeof(void*)*3);
v_assignment_2553_ = lean_ctor_get(v_infoState_2536_, 0);
v_lazyAssignment_2554_ = lean_ctor_get(v_infoState_2536_, 1);
v_trees_2555_ = lean_ctor_get(v_infoState_2536_, 2);
v_isSharedCheck_2569_ = !lean_is_exclusive(v_infoState_2536_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2557_ = v_infoState_2536_;
v_isShared_2558_ = v_isSharedCheck_2569_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_trees_2555_);
lean_inc(v_lazyAssignment_2554_);
lean_inc(v_assignment_2553_);
lean_dec(v_infoState_2536_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2569_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2562_; 
v___x_2559_ = lean_box(0);
v___x_2560_ = l_Lean_PersistentArray_push___redArg(v_trees_2555_, v_t_2527_);
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 2, v___x_2560_);
v___x_2562_ = v___x_2557_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_assignment_2553_);
lean_ctor_set(v_reuseFailAlloc_2568_, 1, v_lazyAssignment_2554_);
lean_ctor_set(v_reuseFailAlloc_2568_, 2, v___x_2560_);
lean_ctor_set_uint8(v_reuseFailAlloc_2568_, sizeof(void*)*3, v_enabled_2552_);
v___x_2562_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
lean_object* v___x_2564_; 
if (v_isShared_2551_ == 0)
{
lean_ctor_set(v___x_2550_, 8, v___x_2562_);
v___x_2564_ = v___x_2550_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v_env_2537_);
lean_ctor_set(v_reuseFailAlloc_2567_, 1, v_messages_2538_);
lean_ctor_set(v_reuseFailAlloc_2567_, 2, v_scopes_2539_);
lean_ctor_set(v_reuseFailAlloc_2567_, 3, v_usedQuotCtxts_2540_);
lean_ctor_set(v_reuseFailAlloc_2567_, 4, v_nextMacroScope_2541_);
lean_ctor_set(v_reuseFailAlloc_2567_, 5, v_maxRecDepth_2542_);
lean_ctor_set(v_reuseFailAlloc_2567_, 6, v_ngen_2543_);
lean_ctor_set(v_reuseFailAlloc_2567_, 7, v_auxDeclNGen_2544_);
lean_ctor_set(v_reuseFailAlloc_2567_, 8, v___x_2562_);
lean_ctor_set(v_reuseFailAlloc_2567_, 9, v_traceState_2545_);
lean_ctor_set(v_reuseFailAlloc_2567_, 10, v_snapshotTasks_2546_);
lean_ctor_set(v_reuseFailAlloc_2567_, 11, v_prevLinterStates_2547_);
lean_ctor_set(v_reuseFailAlloc_2567_, 12, v_codeQualityEntryTasks_2548_);
v___x_2564_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2563_;
}
v_reusejp_2563_:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = lean_st_ref_put(v___y_2528_, v___x_2564_);
v___x_2566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2566_, 0, v___x_2559_);
return v___x_2566_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg___boxed(lean_object* v_t_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_){
_start:
{
lean_object* v_res_2574_; 
v_res_2574_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_2571_, v___y_2572_);
lean_dec(v___y_2572_);
return v_res_2574_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2575_ = lean_unsigned_to_nat(32u);
v___x_2576_ = lean_mk_empty_array_with_capacity(v___x_2575_);
v___x_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2576_);
return v___x_2577_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1(void){
_start:
{
size_t v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2578_ = ((size_t)5ULL);
v___x_2579_ = lean_unsigned_to_nat(0u);
v___x_2580_ = lean_unsigned_to_nat(32u);
v___x_2581_ = lean_mk_empty_array_with_capacity(v___x_2580_);
v___x_2582_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0);
v___x_2583_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2583_, 0, v___x_2582_);
lean_ctor_set(v___x_2583_, 1, v___x_2581_);
lean_ctor_set(v___x_2583_, 2, v___x_2579_);
lean_ctor_set(v___x_2583_, 3, v___x_2579_);
lean_ctor_set_usize(v___x_2583_, 4, v___x_2578_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(lean_object* v_t_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
lean_object* v___x_2588_; lean_object* v_infoState_2589_; uint8_t v_enabled_2590_; 
v___x_2588_ = lean_st_ref_get(v___y_2586_);
v_infoState_2589_ = lean_ctor_get(v___x_2588_, 8);
lean_inc_ref(v_infoState_2589_);
lean_dec(v___x_2588_);
v_enabled_2590_ = lean_ctor_get_uint8(v_infoState_2589_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2589_);
if (v_enabled_2590_ == 0)
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
lean_dec_ref(v_t_2584_);
v___x_2591_ = lean_box(0);
v___x_2592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
return v___x_2592_;
}
else
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2593_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1);
v___x_2594_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2594_, 0, v_t_2584_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
v___x_2595_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v___x_2594_, v___y_2586_);
return v___x_2595_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___boxed(lean_object* v_t_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v_t_2596_, v___y_2597_, v___y_2598_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(lean_object* v_msgData_2601_, lean_object* v_macroStack_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v_scopes_2607_; lean_object* v___x_2608_; lean_object* v_opts_2609_; lean_object* v___x_2610_; uint8_t v___x_2611_; 
v___x_2605_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2606_ = lean_st_ref_get(v___y_2603_);
v_scopes_2607_ = lean_ctor_get(v___x_2606_, 2);
lean_inc(v_scopes_2607_);
lean_dec(v___x_2606_);
v___x_2608_ = l_List_head_x21___redArg(v___x_2605_, v_scopes_2607_);
lean_dec(v_scopes_2607_);
v_opts_2609_ = lean_ctor_get(v___x_2608_, 1);
lean_inc_ref(v_opts_2609_);
lean_dec(v___x_2608_);
v___x_2610_ = l_Lean_Elab_pp_macroStack;
v___x_2611_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_2609_, v___x_2610_);
lean_dec_ref(v_opts_2609_);
if (v___x_2611_ == 0)
{
lean_object* v___x_2612_; 
lean_dec(v_macroStack_2602_);
v___x_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2612_, 0, v_msgData_2601_);
return v___x_2612_;
}
else
{
if (lean_obj_tag(v_macroStack_2602_) == 0)
{
lean_object* v___x_2613_; 
v___x_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2613_, 0, v_msgData_2601_);
return v___x_2613_;
}
else
{
lean_object* v_head_2614_; lean_object* v_after_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2630_; 
v_head_2614_ = lean_ctor_get(v_macroStack_2602_, 0);
lean_inc(v_head_2614_);
v_after_2615_ = lean_ctor_get(v_head_2614_, 1);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_head_2614_);
if (v_isSharedCheck_2630_ == 0)
{
lean_object* v_unused_2631_; 
v_unused_2631_ = lean_ctor_get(v_head_2614_, 0);
lean_dec(v_unused_2631_);
v___x_2617_ = v_head_2614_;
v_isShared_2618_ = v_isSharedCheck_2630_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_after_2615_);
lean_dec(v_head_2614_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2630_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2619_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_2618_ == 0)
{
lean_ctor_set_tag(v___x_2617_, 7);
lean_ctor_set(v___x_2617_, 1, v___x_2619_);
lean_ctor_set(v___x_2617_, 0, v_msgData_2601_);
v___x_2621_ = v___x_2617_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_msgData_2601_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v_msgData_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2622_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_2623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2621_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = l_Lean_MessageData_ofSyntax(v_after_2615_);
v___x_2625_ = l_Lean_indentD(v___x_2624_);
v_msgData_2626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2626_, 0, v___x_2623_);
lean_ctor_set(v_msgData_2626_, 1, v___x_2625_);
v___x_2627_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_2626_, v_macroStack_2602_);
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2627_);
return v___x_2628_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg___boxed(lean_object* v_msgData_2632_, lean_object* v_macroStack_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_2632_, v_macroStack_2633_, v___y_2634_);
lean_dec(v___y_2634_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(lean_object* v_msgData_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v___x_2640_; lean_object* v_env_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v_scopes_2644_; lean_object* v___x_2645_; lean_object* v_opts_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v___x_2640_ = lean_st_ref_get(v___y_2638_);
v_env_2641_ = lean_ctor_get(v___x_2640_, 0);
lean_inc_ref(v_env_2641_);
lean_dec(v___x_2640_);
v___x_2642_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2643_ = lean_st_ref_get(v___y_2638_);
v_scopes_2644_ = lean_ctor_get(v___x_2643_, 2);
lean_inc(v_scopes_2644_);
lean_dec(v___x_2643_);
v___x_2645_ = l_List_head_x21___redArg(v___x_2642_, v_scopes_2644_);
lean_dec(v_scopes_2644_);
v_opts_2646_ = lean_ctor_get(v___x_2645_, 1);
lean_inc_ref(v_opts_2646_);
lean_dec(v___x_2645_);
v___x_2647_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2648_ = lean_unsigned_to_nat(32u);
v___x_2649_ = lean_mk_empty_array_with_capacity(v___x_2648_);
lean_dec_ref(v___x_2649_);
v___x_2650_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2651_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2651_, 0, v_env_2641_);
lean_ctor_set(v___x_2651_, 1, v___x_2647_);
lean_ctor_set(v___x_2651_, 2, v___x_2650_);
lean_ctor_set(v___x_2651_, 3, v_opts_2646_);
v___x_2652_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2651_);
lean_ctor_set(v___x_2652_, 1, v_msgData_2637_);
v___x_2653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___boxed(lean_object* v_msgData_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_2654_, v___y_2655_);
lean_dec(v___y_2655_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(lean_object* v_msg_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Lean_Elab_Command_getRef___redArg(v___y_2659_);
if (lean_obj_tag(v___x_2662_) == 0)
{
lean_object* v_a_2663_; lean_object* v_macroStack_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v_a_2667_; lean_object* v___x_2668_; lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2677_; 
v_a_2663_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_a_2663_);
lean_dec_ref_known(v___x_2662_, 1);
v_macroStack_2664_ = lean_ctor_get(v___y_2659_, 4);
v___x_2665_ = l_Lean_Elab_getBetterRef(v_a_2663_, v_macroStack_2664_);
lean_dec(v_a_2663_);
v___x_2666_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_2658_, v___y_2660_);
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_a_2667_);
lean_dec_ref(v___x_2666_);
lean_inc(v_macroStack_2664_);
v___x_2668_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_a_2667_, v_macroStack_2664_, v___y_2660_);
v_a_2669_ = lean_ctor_get(v___x_2668_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2668_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2671_ = v___x_2668_;
v_isShared_2672_ = v_isSharedCheck_2677_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2668_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2677_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2673_; lean_object* v___x_2675_; 
v___x_2673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2673_, 0, v___x_2665_);
lean_ctor_set(v___x_2673_, 1, v_a_2669_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set_tag(v___x_2671_, 1);
lean_ctor_set(v___x_2671_, 0, v___x_2673_);
v___x_2675_ = v___x_2671_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v___x_2673_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
else
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2685_; 
lean_dec_ref(v_msg_2658_);
v_a_2678_ = lean_ctor_get(v___x_2662_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2662_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2680_ = v___x_2662_;
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___x_2662_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2683_; 
if (v_isShared_2681_ == 0)
{
v___x_2683_ = v___x_2680_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_a_2678_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg___boxed(lean_object* v_msg_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2686_, v___y_2687_, v___y_2688_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
return v_res_2690_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(lean_object* v_ref_2691_, lean_object* v_msg_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v___x_2696_; 
v___x_2696_ = l_Lean_Elab_Command_getRef___redArg(v___y_2693_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v_fileName_2698_; lean_object* v_fileMap_2699_; lean_object* v_currRecDepth_2700_; lean_object* v_cmdPos_2701_; lean_object* v_macroStack_2702_; lean_object* v_quotContext_x3f_2703_; lean_object* v_currMacroScope_2704_; lean_object* v_snap_x3f_2705_; lean_object* v_cancelTk_x3f_2706_; uint8_t v_suppressElabErrors_2707_; lean_object* v_ref_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; 
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___x_2696_, 1);
v_fileName_2698_ = lean_ctor_get(v___y_2693_, 0);
v_fileMap_2699_ = lean_ctor_get(v___y_2693_, 1);
v_currRecDepth_2700_ = lean_ctor_get(v___y_2693_, 2);
v_cmdPos_2701_ = lean_ctor_get(v___y_2693_, 3);
v_macroStack_2702_ = lean_ctor_get(v___y_2693_, 4);
v_quotContext_x3f_2703_ = lean_ctor_get(v___y_2693_, 5);
v_currMacroScope_2704_ = lean_ctor_get(v___y_2693_, 6);
v_snap_x3f_2705_ = lean_ctor_get(v___y_2693_, 8);
v_cancelTk_x3f_2706_ = lean_ctor_get(v___y_2693_, 9);
v_suppressElabErrors_2707_ = lean_ctor_get_uint8(v___y_2693_, sizeof(void*)*10);
v_ref_2708_ = l_Lean_replaceRef(v_ref_2691_, v_a_2697_);
lean_dec(v_a_2697_);
lean_inc(v_cancelTk_x3f_2706_);
lean_inc(v_snap_x3f_2705_);
lean_inc(v_currMacroScope_2704_);
lean_inc(v_quotContext_x3f_2703_);
lean_inc(v_macroStack_2702_);
lean_inc(v_cmdPos_2701_);
lean_inc(v_currRecDepth_2700_);
lean_inc_ref(v_fileMap_2699_);
lean_inc_ref(v_fileName_2698_);
v___x_2709_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2709_, 0, v_fileName_2698_);
lean_ctor_set(v___x_2709_, 1, v_fileMap_2699_);
lean_ctor_set(v___x_2709_, 2, v_currRecDepth_2700_);
lean_ctor_set(v___x_2709_, 3, v_cmdPos_2701_);
lean_ctor_set(v___x_2709_, 4, v_macroStack_2702_);
lean_ctor_set(v___x_2709_, 5, v_quotContext_x3f_2703_);
lean_ctor_set(v___x_2709_, 6, v_currMacroScope_2704_);
lean_ctor_set(v___x_2709_, 7, v_ref_2708_);
lean_ctor_set(v___x_2709_, 8, v_snap_x3f_2705_);
lean_ctor_set(v___x_2709_, 9, v_cancelTk_x3f_2706_);
lean_ctor_set_uint8(v___x_2709_, sizeof(void*)*10, v_suppressElabErrors_2707_);
v___x_2710_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2692_, v___x_2709_, v___y_2694_);
lean_dec_ref_known(v___x_2709_, 10);
return v___x_2710_;
}
else
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
lean_dec_ref(v_msg_2692_);
v_a_2711_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2696_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2696_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_ref_2719_, lean_object* v_msg_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2719_, v_msg_2720_, v___y_2721_, v___y_2722_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
lean_dec(v_ref_2719_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(lean_object* v_msg_2725_, lean_object* v_declHint_2726_, lean_object* v___y_2727_){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v_env_2731_; uint8_t v___x_2732_; 
v___x_2729_ = lean_box(0);
v___x_2730_ = lean_st_ref_get(v___y_2727_);
v_env_2731_ = lean_ctor_get(v___x_2730_, 0);
lean_inc_ref(v_env_2731_);
lean_dec(v___x_2730_);
v___x_2732_ = l_Lean_Name_isAnonymous(v_declHint_2726_);
if (v___x_2732_ == 0)
{
uint8_t v_isExporting_2733_; 
v_isExporting_2733_ = lean_ctor_get_uint8(v_env_2731_, sizeof(void*)*8);
if (v_isExporting_2733_ == 0)
{
lean_object* v___x_2734_; 
lean_dec_ref(v_env_2731_);
lean_dec(v_declHint_2726_);
v___x_2734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2734_, 0, v_msg_2725_);
return v___x_2734_;
}
else
{
lean_object* v___x_2735_; uint8_t v___x_2736_; 
lean_inc_ref(v_env_2731_);
v___x_2735_ = l_Lean_Environment_setExporting(v_env_2731_, v___x_2732_);
lean_inc(v_declHint_2726_);
lean_inc_ref(v___x_2735_);
v___x_2736_ = l_Lean_Environment_contains(v___x_2735_, v_declHint_2726_, v_isExporting_2733_);
if (v___x_2736_ == 0)
{
lean_object* v___x_2737_; 
lean_dec_ref(v___x_2735_);
lean_dec_ref(v_env_2731_);
lean_dec(v_declHint_2726_);
v___x_2737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2737_, 0, v_msg_2725_);
return v___x_2737_;
}
else
{
lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v_c_2745_; lean_object* v___x_2746_; 
v___x_2738_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2739_ = lean_unsigned_to_nat(32u);
v___x_2740_ = lean_mk_empty_array_with_capacity(v___x_2739_);
lean_dec_ref(v___x_2740_);
v___x_2741_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2742_ = l_Lean_Options_empty;
v___x_2743_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2735_);
lean_ctor_set(v___x_2743_, 1, v___x_2738_);
lean_ctor_set(v___x_2743_, 2, v___x_2741_);
lean_ctor_set(v___x_2743_, 3, v___x_2742_);
lean_inc(v_declHint_2726_);
v___x_2744_ = l_Lean_MessageData_ofConstName(v_declHint_2726_, v___x_2732_);
v_c_2745_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2745_, 0, v___x_2743_);
lean_ctor_set(v_c_2745_, 1, v___x_2744_);
v___x_2746_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2731_, v_declHint_2726_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
lean_dec_ref(v_env_2731_);
lean_dec(v_declHint_2726_);
v___x_2747_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
lean_ctor_set(v___x_2748_, 1, v_c_2745_);
v___x_2749_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2750_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2748_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = l_Lean_MessageData_note(v___x_2750_);
v___x_2752_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2752_, 0, v_msg_2725_);
lean_ctor_set(v___x_2752_, 1, v___x_2751_);
v___x_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2753_, 0, v___x_2752_);
return v___x_2753_;
}
else
{
lean_object* v_val_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2788_; 
v_val_2754_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2756_ = v___x_2746_;
v_isShared_2757_ = v_isSharedCheck_2788_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_val_2754_);
lean_dec(v___x_2746_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2788_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v_mod_2760_; uint8_t v___x_2761_; 
v___x_2758_ = l_Lean_Environment_header(v_env_2731_);
lean_dec_ref(v_env_2731_);
v___x_2759_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2758_);
v_mod_2760_ = lean_array_get(v___x_2729_, v___x_2759_, v_val_2754_);
lean_dec(v_val_2754_);
lean_dec_ref(v___x_2759_);
v___x_2761_ = l_Lean_isPrivateName(v_declHint_2726_);
lean_dec(v_declHint_2726_);
if (v___x_2761_ == 0)
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2773_; 
v___x_2762_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2762_);
lean_ctor_set(v___x_2763_, 1, v_c_2745_);
v___x_2764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2763_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = l_Lean_MessageData_ofName(v_mod_2760_);
v___x_2767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2767_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = l_Lean_MessageData_note(v___x_2769_);
v___x_2771_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2771_, 0, v_msg_2725_);
lean_ctor_set(v___x_2771_, 1, v___x_2770_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set_tag(v___x_2756_, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2771_);
v___x_2773_ = v___x_2756_;
goto v_reusejp_2772_;
}
else
{
lean_object* v_reuseFailAlloc_2774_; 
v_reuseFailAlloc_2774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2774_, 0, v___x_2771_);
v___x_2773_ = v_reuseFailAlloc_2774_;
goto v_reusejp_2772_;
}
v_reusejp_2772_:
{
return v___x_2773_;
}
}
else
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2786_; 
v___x_2775_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2775_);
lean_ctor_set(v___x_2776_, 1, v_c_2745_);
v___x_2777_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2778_, 0, v___x_2776_);
lean_ctor_set(v___x_2778_, 1, v___x_2777_);
v___x_2779_ = l_Lean_MessageData_ofName(v_mod_2760_);
v___x_2780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2778_);
lean_ctor_set(v___x_2780_, 1, v___x_2779_);
v___x_2781_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = l_Lean_MessageData_note(v___x_2782_);
v___x_2784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2784_, 0, v_msg_2725_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
if (v_isShared_2757_ == 0)
{
lean_ctor_set_tag(v___x_2756_, 0);
lean_ctor_set(v___x_2756_, 0, v___x_2784_);
v___x_2786_ = v___x_2756_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v___x_2784_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2789_; 
lean_dec_ref(v_env_2731_);
lean_dec(v_declHint_2726_);
v___x_2789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2789_, 0, v_msg_2725_);
return v___x_2789_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___boxed(lean_object* v_msg_2790_, lean_object* v_declHint_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_){
_start:
{
lean_object* v_res_2794_; 
v_res_2794_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2790_, v_declHint_2791_, v___y_2792_);
lean_dec(v___y_2792_);
return v_res_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(lean_object* v_msg_2795_, lean_object* v_declHint_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v___x_2800_; lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2810_; 
v___x_2800_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2795_, v_declHint_2796_, v___y_2798_);
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2803_ = v___x_2800_;
v_isShared_2804_ = v_isSharedCheck_2810_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2800_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2810_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2808_; 
v___x_2805_ = l_Lean_unknownIdentifierMessageTag;
v___x_2806_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
lean_ctor_set(v___x_2806_, 1, v_a_2801_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 0, v___x_2806_);
v___x_2808_ = v___x_2803_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2806_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67___boxed(lean_object* v_msg_2811_, lean_object* v_declHint_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2811_, v_declHint_2812_, v___y_2813_, v___y_2814_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(lean_object* v_ref_2817_, lean_object* v_msg_2818_, lean_object* v_declHint_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_){
_start:
{
lean_object* v___x_2823_; lean_object* v_a_2824_; lean_object* v___x_2825_; 
v___x_2823_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2818_, v_declHint_2819_, v___y_2820_, v___y_2821_);
v_a_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc(v_a_2824_);
lean_dec_ref(v___x_2823_);
v___x_2825_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2817_, v_a_2824_, v___y_2820_, v___y_2821_);
return v___x_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg___boxed(lean_object* v_ref_2826_, lean_object* v_msg_2827_, lean_object* v_declHint_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
lean_object* v_res_2832_; 
v_res_2832_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2826_, v_msg_2827_, v_declHint_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v_ref_2826_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(lean_object* v_ref_2833_, lean_object* v_constName_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v___x_2838_; uint8_t v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; 
v___x_2838_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2839_ = 0;
lean_inc(v_constName_2834_);
v___x_2840_ = l_Lean_MessageData_ofConstName(v_constName_2834_, v___x_2839_);
v___x_2841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2838_);
lean_ctor_set(v___x_2841_, 1, v___x_2840_);
v___x_2842_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2841_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2833_, v___x_2843_, v_constName_2834_, v___y_2835_, v___y_2836_);
return v___x_2844_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___boxed(lean_object* v_ref_2845_, lean_object* v_constName_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_2845_, v_constName_2846_, v___y_2847_, v___y_2848_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
lean_dec(v_ref_2845_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(lean_object* v_constName_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v___x_2855_; 
v___x_2855_ = l_Lean_Elab_Command_getRef___redArg(v___y_2852_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_object* v_a_2856_; lean_object* v___x_2857_; 
v_a_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_a_2856_);
lean_dec_ref_known(v___x_2855_, 1);
v___x_2857_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_a_2856_, v_constName_2851_, v___y_2852_, v___y_2853_);
lean_dec(v_a_2856_);
return v___x_2857_;
}
else
{
lean_object* v_a_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2865_; 
lean_dec(v_constName_2851_);
v_a_2858_ = lean_ctor_get(v___x_2855_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2855_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2860_ = v___x_2855_;
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_a_2858_);
lean_dec(v___x_2855_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2865_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v___x_2863_; 
if (v_isShared_2861_ == 0)
{
v___x_2863_ = v___x_2860_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v_a_2858_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg___boxed(lean_object* v_constName_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec_ref(v___y_2867_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(lean_object* v_constName_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v___x_2875_; lean_object* v_env_2876_; uint8_t v___x_2877_; lean_object* v___x_2878_; 
v___x_2875_ = lean_st_ref_get(v___y_2873_);
v_env_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc_ref(v_env_2876_);
lean_dec(v___x_2875_);
v___x_2877_ = 0;
lean_inc(v_constName_2871_);
v___x_2878_ = l_Lean_Environment_findConstVal_x3f(v_env_2876_, v_constName_2871_, v___x_2877_);
if (lean_obj_tag(v___x_2878_) == 0)
{
lean_object* v___x_2879_; 
v___x_2879_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2871_, v___y_2872_, v___y_2873_);
return v___x_2879_;
}
else
{
lean_object* v_val_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2887_; 
lean_dec(v_constName_2871_);
v_val_2880_ = lean_ctor_get(v___x_2878_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2882_ = v___x_2878_;
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_val_2880_);
lean_dec(v___x_2878_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2885_; 
if (v_isShared_2883_ == 0)
{
lean_ctor_set_tag(v___x_2882_, 0);
v___x_2885_ = v___x_2882_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_val_2880_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16___boxed(lean_object* v_constName_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2888_, v___y_2889_, v___y_2890_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(lean_object* v_constName_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_){
_start:
{
lean_object* v___x_2897_; 
lean_inc(v_constName_2893_);
v___x_2897_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2893_, v___y_2894_, v___y_2895_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2900_; uint8_t v_isShared_2901_; uint8_t v_isSharedCheck_2909_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2900_ = v___x_2897_;
v_isShared_2901_ = v_isSharedCheck_2909_;
goto v_resetjp_2899_;
}
else
{
lean_inc(v_a_2898_);
lean_dec(v___x_2897_);
v___x_2900_ = lean_box(0);
v_isShared_2901_ = v_isSharedCheck_2909_;
goto v_resetjp_2899_;
}
v_resetjp_2899_:
{
lean_object* v_levelParams_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2907_; 
v_levelParams_2902_ = lean_ctor_get(v_a_2898_, 1);
lean_inc(v_levelParams_2902_);
lean_dec(v_a_2898_);
v___x_2903_ = lean_box(0);
v___x_2904_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_2902_, v___x_2903_);
v___x_2905_ = l_Lean_mkConst(v_constName_2893_, v___x_2904_);
if (v_isShared_2901_ == 0)
{
lean_ctor_set(v___x_2900_, 0, v___x_2905_);
v___x_2907_ = v___x_2900_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2905_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
else
{
lean_object* v_a_2910_; lean_object* v___x_2912_; uint8_t v_isShared_2913_; uint8_t v_isSharedCheck_2917_; 
lean_dec(v_constName_2893_);
v_a_2910_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2912_ = v___x_2897_;
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
else
{
lean_inc(v_a_2910_);
lean_dec(v___x_2897_);
v___x_2912_ = lean_box(0);
v_isShared_2913_ = v_isSharedCheck_2917_;
goto v_resetjp_2911_;
}
v_resetjp_2911_:
{
lean_object* v___x_2915_; 
if (v_isShared_2913_ == 0)
{
v___x_2915_ = v___x_2912_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_a_2910_);
v___x_2915_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
return v___x_2915_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8___boxed(lean_object* v_constName_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_constName_2918_, v___y_2919_, v___y_2920_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_stx_2923_, lean_object* v_n_2924_, lean_object* v_expectedType_x3f_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v___x_2929_; 
v___x_2929_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_n_2924_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; uint8_t v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
lean_inc(v_a_2930_);
lean_dec_ref_known(v___x_2929_, 1);
v___x_2931_ = lean_box(0);
v___x_2932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2931_);
lean_ctor_set(v___x_2932_, 1, v_stx_2923_);
v___x_2933_ = l_Lean_LocalContext_empty;
v___x_2934_ = 0;
v___x_2935_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2935_, 0, v___x_2932_);
lean_ctor_set(v___x_2935_, 1, v___x_2933_);
lean_ctor_set(v___x_2935_, 2, v_expectedType_x3f_2925_);
lean_ctor_set(v___x_2935_, 3, v_a_2930_);
lean_ctor_set_uint8(v___x_2935_, sizeof(void*)*4, v___x_2934_);
lean_ctor_set_uint8(v___x_2935_, sizeof(void*)*4 + 1, v___x_2934_);
v___x_2936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2935_);
v___x_2937_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v___x_2936_, v___y_2926_, v___y_2927_);
return v___x_2937_;
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2945_; 
lean_dec(v_expectedType_x3f_2925_);
lean_dec(v_stx_2923_);
v_a_2938_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2940_ = v___x_2929_;
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v___x_2929_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_stx_2946_, lean_object* v_n_2947_, lean_object* v_expectedType_x3f_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v_res_2952_; 
v_res_2952_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_stx_2946_, v_n_2947_, v_expectedType_x3f_2948_, v___y_2949_, v___y_2950_);
lean_dec(v___y_2950_);
lean_dec_ref(v___y_2949_);
return v_res_2952_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(lean_object* v_as_x27_2953_, lean_object* v_b_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
if (lean_obj_tag(v_as_x27_2953_) == 0)
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v_b_2954_);
return v___x_2958_;
}
else
{
lean_object* v_head_2959_; lean_object* v_tail_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; 
v_head_2959_ = lean_ctor_get(v_as_x27_2953_, 0);
v_tail_2960_ = lean_ctor_get(v_as_x27_2953_, 1);
v___x_2961_ = lean_box(0);
lean_inc(v_head_2959_);
v___x_2962_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_2962_, 0, v_head_2959_);
v___x_2963_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_2962_, v___y_2955_, v___y_2956_);
if (lean_obj_tag(v___x_2963_) == 0)
{
lean_dec_ref_known(v___x_2963_, 1);
v_as_x27_2953_ = v_tail_2960_;
v_b_2954_ = v___x_2961_;
goto _start;
}
else
{
return v___x_2963_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___boxed(lean_object* v_as_x27_2965_, lean_object* v_b_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v_res_2970_; 
v_res_2970_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_2965_, v_b_2966_, v___y_2967_, v___y_2968_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v_as_x27_2965_);
return v_res_2970_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(lean_object* v_declName_2971_, uint8_t v_s_2972_, lean_object* v___y_2973_){
_start:
{
lean_object* v___x_2975_; lean_object* v_env_2976_; lean_object* v_messages_2977_; lean_object* v_scopes_2978_; lean_object* v_usedQuotCtxts_2979_; lean_object* v_nextMacroScope_2980_; lean_object* v_maxRecDepth_2981_; lean_object* v_ngen_2982_; lean_object* v_auxDeclNGen_2983_; lean_object* v_infoState_2984_; lean_object* v_traceState_2985_; lean_object* v_snapshotTasks_2986_; lean_object* v_prevLinterStates_2987_; lean_object* v_codeQualityEntryTasks_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_3001_; 
v___x_2975_ = lean_st_ref_take(v___y_2973_);
v_env_2976_ = lean_ctor_get(v___x_2975_, 0);
v_messages_2977_ = lean_ctor_get(v___x_2975_, 1);
v_scopes_2978_ = lean_ctor_get(v___x_2975_, 2);
v_usedQuotCtxts_2979_ = lean_ctor_get(v___x_2975_, 3);
v_nextMacroScope_2980_ = lean_ctor_get(v___x_2975_, 4);
v_maxRecDepth_2981_ = lean_ctor_get(v___x_2975_, 5);
v_ngen_2982_ = lean_ctor_get(v___x_2975_, 6);
v_auxDeclNGen_2983_ = lean_ctor_get(v___x_2975_, 7);
v_infoState_2984_ = lean_ctor_get(v___x_2975_, 8);
v_traceState_2985_ = lean_ctor_get(v___x_2975_, 9);
v_snapshotTasks_2986_ = lean_ctor_get(v___x_2975_, 10);
v_prevLinterStates_2987_ = lean_ctor_get(v___x_2975_, 11);
v_codeQualityEntryTasks_2988_ = lean_ctor_get(v___x_2975_, 12);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2990_ = v___x_2975_;
v_isShared_2991_ = v_isSharedCheck_3001_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2988_);
lean_inc(v_prevLinterStates_2987_);
lean_inc(v_snapshotTasks_2986_);
lean_inc(v_traceState_2985_);
lean_inc(v_infoState_2984_);
lean_inc(v_auxDeclNGen_2983_);
lean_inc(v_ngen_2982_);
lean_inc(v_maxRecDepth_2981_);
lean_inc(v_nextMacroScope_2980_);
lean_inc(v_usedQuotCtxts_2979_);
lean_inc(v_scopes_2978_);
lean_inc(v_messages_2977_);
lean_inc(v_env_2976_);
lean_dec(v___x_2975_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_3001_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2992_; uint8_t v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2997_; 
v___x_2992_ = lean_box(0);
v___x_2993_ = 0;
v___x_2994_ = lean_box(0);
v___x_2995_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2976_, v_declName_2971_, v_s_2972_, v___x_2993_, v___x_2994_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 0, v___x_2995_);
v___x_2997_ = v___x_2990_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v___x_2995_);
lean_ctor_set(v_reuseFailAlloc_3000_, 1, v_messages_2977_);
lean_ctor_set(v_reuseFailAlloc_3000_, 2, v_scopes_2978_);
lean_ctor_set(v_reuseFailAlloc_3000_, 3, v_usedQuotCtxts_2979_);
lean_ctor_set(v_reuseFailAlloc_3000_, 4, v_nextMacroScope_2980_);
lean_ctor_set(v_reuseFailAlloc_3000_, 5, v_maxRecDepth_2981_);
lean_ctor_set(v_reuseFailAlloc_3000_, 6, v_ngen_2982_);
lean_ctor_set(v_reuseFailAlloc_3000_, 7, v_auxDeclNGen_2983_);
lean_ctor_set(v_reuseFailAlloc_3000_, 8, v_infoState_2984_);
lean_ctor_set(v_reuseFailAlloc_3000_, 9, v_traceState_2985_);
lean_ctor_set(v_reuseFailAlloc_3000_, 10, v_snapshotTasks_2986_);
lean_ctor_set(v_reuseFailAlloc_3000_, 11, v_prevLinterStates_2987_);
lean_ctor_set(v_reuseFailAlloc_3000_, 12, v_codeQualityEntryTasks_2988_);
v___x_2997_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = lean_st_ref_put(v___y_2973_, v___x_2997_);
v___x_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2992_);
return v___x_2999_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg___boxed(lean_object* v_declName_3002_, lean_object* v_s_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
uint8_t v_s_boxed_3006_; lean_object* v_res_3007_; 
v_s_boxed_3006_ = lean_unbox(v_s_3003_);
v_res_3007_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3002_, v_s_boxed_3006_, v___y_3004_);
lean_dec(v___y_3004_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(lean_object* v_declName_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
uint8_t v___x_3012_; lean_object* v___x_3013_; 
v___x_3012_ = 2;
v___x_3013_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3008_, v___x_3012_, v___y_3010_);
return v___x_3013_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11___boxed(lean_object* v_declName_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_declName_3014_, v___y_3015_, v___y_3016_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(lean_object* v_as_x27_3019_, lean_object* v_b_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
if (lean_obj_tag(v_as_x27_3019_) == 0)
{
lean_object* v___x_3024_; 
v___x_3024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3024_, 0, v_b_3020_);
return v___x_3024_;
}
else
{
lean_object* v_head_3025_; lean_object* v_tail_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v_head_3025_ = lean_ctor_get(v_as_x27_3019_, 0);
v_tail_3026_ = lean_ctor_get(v_as_x27_3019_, 1);
v___x_3027_ = lean_box(0);
lean_inc(v_head_3025_);
v___x_3028_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_head_3025_, v___y_3021_, v___y_3022_);
lean_dec_ref(v___x_3028_);
v_as_x27_3019_ = v_tail_3026_;
v_b_3020_ = v___x_3027_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg___boxed(lean_object* v_as_x27_3030_, lean_object* v_b_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_3030_, v_b_3031_, v___y_3032_, v___y_3033_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec(v_as_x27_3030_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_3036_, size_t v_i_3037_, lean_object* v_bs_3038_){
_start:
{
uint8_t v___x_3039_; 
v___x_3039_ = lean_usize_dec_lt(v_i_3037_, v_sz_3036_);
if (v___x_3039_ == 0)
{
return v_bs_3038_;
}
else
{
lean_object* v_v_3040_; lean_object* v___x_3041_; lean_object* v_bs_x27_3042_; size_t v___x_3043_; size_t v___x_3044_; lean_object* v___x_3045_; 
v_v_3040_ = lean_array_uget(v_bs_3038_, v_i_3037_);
v___x_3041_ = lean_unsigned_to_nat(0u);
v_bs_x27_3042_ = lean_array_uset(v_bs_3038_, v_i_3037_, v___x_3041_);
v___x_3043_ = ((size_t)1ULL);
v___x_3044_ = lean_usize_add(v_i_3037_, v___x_3043_);
v___x_3045_ = lean_array_uset(v_bs_x27_3042_, v_i_3037_, v_v_3040_);
v_i_3037_ = v___x_3044_;
v_bs_3038_ = v___x_3045_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_3047_, lean_object* v_i_3048_, lean_object* v_bs_3049_){
_start:
{
size_t v_sz_boxed_3050_; size_t v_i_boxed_3051_; lean_object* v_res_3052_; 
v_sz_boxed_3050_ = lean_unbox_usize(v_sz_3047_);
lean_dec(v_sz_3047_);
v_i_boxed_3051_ = lean_unbox_usize(v_i_3048_);
lean_dec(v_i_3048_);
v_res_3052_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_3050_, v_i_boxed_3051_, v_bs_3049_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(size_t v_sz_3053_, size_t v_i_3054_, lean_object* v_bs_3055_){
_start:
{
uint8_t v___x_3056_; 
v___x_3056_ = lean_usize_dec_lt(v_i_3054_, v_sz_3053_);
if (v___x_3056_ == 0)
{
return v_bs_3055_;
}
else
{
lean_object* v_v_3057_; lean_object* v___x_3058_; lean_object* v_bs_x27_3059_; size_t v___x_3060_; size_t v___x_3061_; lean_object* v___x_3062_; 
v_v_3057_ = lean_array_uget(v_bs_3055_, v_i_3054_);
v___x_3058_ = lean_unsigned_to_nat(0u);
v_bs_x27_3059_ = lean_array_uset(v_bs_3055_, v_i_3054_, v___x_3058_);
v___x_3060_ = ((size_t)1ULL);
v___x_3061_ = lean_usize_add(v_i_3054_, v___x_3060_);
v___x_3062_ = lean_array_uset(v_bs_x27_3059_, v_i_3054_, v_v_3057_);
v_i_3054_ = v___x_3061_;
v_bs_3055_ = v___x_3062_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_sz_3064_, lean_object* v_i_3065_, lean_object* v_bs_3066_){
_start:
{
size_t v_sz_boxed_3067_; size_t v_i_boxed_3068_; lean_object* v_res_3069_; 
v_sz_boxed_3067_ = lean_unbox_usize(v_sz_3064_);
lean_dec(v_sz_3064_);
v_i_boxed_3068_ = lean_unbox_usize(v_i_3065_);
lean_dec(v_i_3065_);
v_res_3069_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_boxed_3067_, v_i_boxed_3068_, v_bs_3066_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(lean_object* v_declName_3070_, lean_object* v_declRanges_3071_, lean_object* v___y_3072_){
_start:
{
uint8_t v___x_3074_; 
v___x_3074_ = l_Lean_Name_isAnonymous(v_declName_3070_);
if (v___x_3074_ == 0)
{
lean_object* v___x_3075_; lean_object* v_env_3076_; lean_object* v_messages_3077_; lean_object* v_scopes_3078_; lean_object* v_usedQuotCtxts_3079_; lean_object* v_nextMacroScope_3080_; lean_object* v_maxRecDepth_3081_; lean_object* v_ngen_3082_; lean_object* v_auxDeclNGen_3083_; lean_object* v_infoState_3084_; lean_object* v_traceState_3085_; lean_object* v_snapshotTasks_3086_; lean_object* v_prevLinterStates_3087_; lean_object* v_codeQualityEntryTasks_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3100_; 
v___x_3075_ = lean_st_ref_take(v___y_3072_);
v_env_3076_ = lean_ctor_get(v___x_3075_, 0);
v_messages_3077_ = lean_ctor_get(v___x_3075_, 1);
v_scopes_3078_ = lean_ctor_get(v___x_3075_, 2);
v_usedQuotCtxts_3079_ = lean_ctor_get(v___x_3075_, 3);
v_nextMacroScope_3080_ = lean_ctor_get(v___x_3075_, 4);
v_maxRecDepth_3081_ = lean_ctor_get(v___x_3075_, 5);
v_ngen_3082_ = lean_ctor_get(v___x_3075_, 6);
v_auxDeclNGen_3083_ = lean_ctor_get(v___x_3075_, 7);
v_infoState_3084_ = lean_ctor_get(v___x_3075_, 8);
v_traceState_3085_ = lean_ctor_get(v___x_3075_, 9);
v_snapshotTasks_3086_ = lean_ctor_get(v___x_3075_, 10);
v_prevLinterStates_3087_ = lean_ctor_get(v___x_3075_, 11);
v_codeQualityEntryTasks_3088_ = lean_ctor_get(v___x_3075_, 12);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3090_ = v___x_3075_;
v_isShared_3091_ = v_isSharedCheck_3100_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3088_);
lean_inc(v_prevLinterStates_3087_);
lean_inc(v_snapshotTasks_3086_);
lean_inc(v_traceState_3085_);
lean_inc(v_infoState_3084_);
lean_inc(v_auxDeclNGen_3083_);
lean_inc(v_ngen_3082_);
lean_inc(v_maxRecDepth_3081_);
lean_inc(v_nextMacroScope_3080_);
lean_inc(v_usedQuotCtxts_3079_);
lean_inc(v_scopes_3078_);
lean_inc(v_messages_3077_);
lean_inc(v_env_3076_);
lean_dec(v___x_3075_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3100_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3096_; 
v___x_3092_ = lean_box(0);
v___x_3093_ = l_Lean_declRangeExt;
v___x_3094_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3093_, v_env_3076_, v_declName_3070_, v_declRanges_3071_);
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 0, v___x_3094_);
v___x_3096_ = v___x_3090_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3094_);
lean_ctor_set(v_reuseFailAlloc_3099_, 1, v_messages_3077_);
lean_ctor_set(v_reuseFailAlloc_3099_, 2, v_scopes_3078_);
lean_ctor_set(v_reuseFailAlloc_3099_, 3, v_usedQuotCtxts_3079_);
lean_ctor_set(v_reuseFailAlloc_3099_, 4, v_nextMacroScope_3080_);
lean_ctor_set(v_reuseFailAlloc_3099_, 5, v_maxRecDepth_3081_);
lean_ctor_set(v_reuseFailAlloc_3099_, 6, v_ngen_3082_);
lean_ctor_set(v_reuseFailAlloc_3099_, 7, v_auxDeclNGen_3083_);
lean_ctor_set(v_reuseFailAlloc_3099_, 8, v_infoState_3084_);
lean_ctor_set(v_reuseFailAlloc_3099_, 9, v_traceState_3085_);
lean_ctor_set(v_reuseFailAlloc_3099_, 10, v_snapshotTasks_3086_);
lean_ctor_set(v_reuseFailAlloc_3099_, 11, v_prevLinterStates_3087_);
lean_ctor_set(v_reuseFailAlloc_3099_, 12, v_codeQualityEntryTasks_3088_);
v___x_3096_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
lean_object* v___x_3097_; lean_object* v___x_3098_; 
v___x_3097_ = lean_st_ref_put(v___y_3072_, v___x_3096_);
v___x_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3092_);
return v___x_3098_;
}
}
}
else
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
lean_dec_ref(v_declRanges_3071_);
lean_dec(v_declName_3070_);
v___x_3101_ = lean_box(0);
v___x_3102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
return v___x_3102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg___boxed(lean_object* v_declName_3103_, lean_object* v_declRanges_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_){
_start:
{
lean_object* v_res_3107_; 
v_res_3107_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3103_, v_declRanges_3104_, v___y_3105_);
lean_dec(v___y_3105_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(lean_object* v_stx_3108_, lean_object* v___y_3109_){
_start:
{
uint8_t v___x_3111_; lean_object* v___x_3112_; 
v___x_3111_ = 0;
v___x_3112_ = l_Lean_Syntax_getRange_x3f(v_stx_3108_, v___x_3111_);
if (lean_obj_tag(v___x_3112_) == 1)
{
lean_object* v_val_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3125_; 
v_val_3113_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3115_ = v___x_3112_;
v_isShared_3116_ = v_isSharedCheck_3125_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_val_3113_);
lean_dec(v___x_3112_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3125_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v_fileMap_3117_; lean_object* v_start_3118_; lean_object* v_stop_3119_; lean_object* v___x_3120_; lean_object* v___x_3122_; 
v_fileMap_3117_ = lean_ctor_get(v___y_3109_, 1);
v_start_3118_ = lean_ctor_get(v_val_3113_, 0);
lean_inc(v_start_3118_);
v_stop_3119_ = lean_ctor_get(v_val_3113_, 1);
lean_inc(v_stop_3119_);
lean_dec(v_val_3113_);
lean_inc_ref(v_fileMap_3117_);
v___x_3120_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_3117_, v_start_3118_, v_stop_3119_);
lean_dec(v_stop_3119_);
lean_dec(v_start_3118_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 0, v___x_3120_);
v___x_3122_ = v___x_3115_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3120_);
v___x_3122_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
lean_object* v___x_3123_; 
v___x_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
return v___x_3123_;
}
}
}
else
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
lean_dec(v___x_3112_);
v___x_3126_ = lean_box(0);
v___x_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
return v___x_3127_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg___boxed(lean_object* v_stx_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_){
_start:
{
lean_object* v_res_3131_; 
v_res_3131_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_3128_, v___y_3129_);
lean_dec_ref(v___y_3129_);
lean_dec(v_stx_3128_);
return v_res_3131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(lean_object* v_declName_3132_, lean_object* v_rangeStx_3133_, lean_object* v_selectionRangeStx_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
lean_object* v___x_3138_; lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3155_; 
v___x_3138_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_rangeStx_3133_, v___y_3135_);
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3141_ = v___x_3138_;
v_isShared_3142_ = v_isSharedCheck_3155_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3138_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3155_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
if (lean_obj_tag(v_a_3139_) == 1)
{
lean_object* v_val_3143_; lean_object* v_a_3145_; lean_object* v___x_3148_; lean_object* v_a_3149_; 
lean_del_object(v___x_3141_);
v_val_3143_ = lean_ctor_get(v_a_3139_, 0);
lean_inc(v_val_3143_);
lean_dec_ref_known(v_a_3139_, 1);
v___x_3148_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_selectionRangeStx_3134_, v___y_3135_);
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3149_);
lean_dec_ref(v___x_3148_);
if (lean_obj_tag(v_a_3149_) == 0)
{
lean_inc(v_val_3143_);
v_a_3145_ = v_val_3143_;
goto v___jp_3144_;
}
else
{
lean_object* v_val_3150_; 
v_val_3150_ = lean_ctor_get(v_a_3149_, 0);
lean_inc(v_val_3150_);
lean_dec_ref_known(v_a_3149_, 1);
v_a_3145_ = v_val_3150_;
goto v___jp_3144_;
}
v___jp_3144_:
{
lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3146_, 0, v_val_3143_);
lean_ctor_set(v___x_3146_, 1, v_a_3145_);
v___x_3147_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3132_, v___x_3146_, v___y_3136_);
return v___x_3147_;
}
}
else
{
lean_object* v___x_3151_; lean_object* v___x_3153_; 
lean_dec(v_a_3139_);
lean_dec(v_declName_3132_);
v___x_3151_ = lean_box(0);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3151_);
v___x_3153_ = v___x_3141_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v___x_3151_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_declName_3156_, lean_object* v_rangeStx_3157_, lean_object* v_selectionRangeStx_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_){
_start:
{
lean_object* v_res_3162_; 
v_res_3162_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v_declName_3156_, v_rangeStx_3157_, v_selectionRangeStx_3158_, v___y_3159_, v___y_3160_);
lean_dec(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec(v_selectionRangeStx_3158_);
lean_dec(v_rangeStx_3157_);
return v_res_3162_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0(void){
_start:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
return v___x_3164_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3177_; 
v___x_3177_ = l_Array_mkArray0___redArg();
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2(lean_object* v___x_3182_, lean_object* v_a_3183_, lean_object* v_projId_3184_, lean_object* v___x_3185_, lean_object* v___x_3186_, lean_object* v___x_3187_, lean_object* v_params_3188_, lean_object* v___x_3189_, lean_object* v_mods_3190_, lean_object* v___x_3191_, lean_object* v_optDeriving_3192_, lean_object* v___x_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_){
_start:
{
lean_object* v___x_3197_; 
v___x_3197_ = l_Lean_Elab_Command_getScope___redArg(v___y_3195_);
if (lean_obj_tag(v___x_3197_) == 0)
{
lean_object* v_a_3198_; lean_object* v_currNamespace_3199_; lean_object* v___x_3200_; 
v_a_3198_ = lean_ctor_get(v___x_3197_, 0);
lean_inc(v_a_3198_);
lean_dec_ref_known(v___x_3197_, 1);
v_currNamespace_3199_ = lean_ctor_get(v_a_3198_, 2);
lean_inc(v_currNamespace_3199_);
lean_dec(v_a_3198_);
v___x_3200_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_3195_);
if (lean_obj_tag(v___x_3200_) == 0)
{
lean_object* v_a_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v_a_3201_ = lean_ctor_get(v___x_3200_, 0);
lean_inc(v_a_3201_);
lean_dec_ref_known(v___x_3200_, 1);
lean_inc(v___x_3182_);
v___x_3202_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_3202_, 0, v_currNamespace_3199_);
lean_closure_set(v___x_3202_, 1, v_a_3201_);
lean_closure_set(v___x_3202_, 2, v___x_3182_);
lean_closure_set(v___x_3202_, 3, v_a_3183_);
v___x_3203_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3202_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3204_; lean_object* v_declName_3205_; lean_object* v___x_3207_; uint8_t v_isShared_3208_; uint8_t v_isSharedCheck_3367_; 
v_a_3204_ = lean_ctor_get(v___x_3203_, 0);
lean_inc(v_a_3204_);
lean_dec_ref_known(v___x_3203_, 1);
v_declName_3205_ = lean_ctor_get(v_a_3204_, 1);
v_isSharedCheck_3367_ = !lean_is_exclusive(v_a_3204_);
if (v_isSharedCheck_3367_ == 0)
{
lean_object* v_unused_3368_; lean_object* v_unused_3369_; lean_object* v_unused_3370_; 
v_unused_3368_ = lean_ctor_get(v_a_3204_, 3);
lean_dec(v_unused_3368_);
v_unused_3369_ = lean_ctor_get(v_a_3204_, 2);
lean_dec(v_unused_3369_);
v_unused_3370_ = lean_ctor_get(v_a_3204_, 0);
lean_dec(v_unused_3370_);
v___x_3207_ = v_a_3204_;
v_isShared_3208_ = v_isSharedCheck_3367_;
goto v_resetjp_3206_;
}
else
{
lean_inc(v_declName_3205_);
lean_dec(v_a_3204_);
v___x_3207_ = lean_box(0);
v_isShared_3208_ = v_isSharedCheck_3367_;
goto v_resetjp_3206_;
}
v_resetjp_3206_:
{
size_t v___y_3210_; lean_object* v___y_3211_; lean_object* v___y_3212_; lean_object* v___y_3213_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3251_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__1));
lean_inc_n(v_declName_3205_, 3);
v___x_3252_ = l_Lean_Name_append(v_declName_3205_, v___x_3251_);
v___x_3253_ = l_Lean_TSyntax_getId(v_projId_3184_);
lean_inc(v___x_3253_);
v___x_3254_ = l_Lean_Name_append(v_declName_3205_, v___x_3253_);
v___x_3255_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__3));
v___x_3256_ = l_Lean_Name_append(v_declName_3205_, v___x_3255_);
v___x_3257_ = l_Lean_Elab_Command_getRef___redArg(v___y_3194_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_object* v_a_3258_; uint8_t v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3348_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
lean_dec_ref_known(v___x_3257_, 1);
v___x_3259_ = 0;
v___x_3260_ = l_Lean_SourceInfo_fromRef(v_a_3258_, v___x_3259_);
lean_dec(v_a_3258_);
v___x_3348_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3194_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_quotContext_x3f_3349_; 
lean_dec_ref_known(v___x_3348_, 1);
v_quotContext_x3f_3349_ = lean_ctor_get(v___y_3194_, 5);
if (lean_obj_tag(v_quotContext_x3f_3349_) == 0)
{
lean_object* v___x_3350_; 
v___x_3350_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_3195_);
lean_dec_ref(v___x_3350_);
goto v___jp_3261_;
}
else
{
goto v___jp_3261_;
}
}
else
{
lean_object* v_a_3351_; lean_object* v___x_3353_; uint8_t v_isShared_3354_; uint8_t v_isSharedCheck_3358_; 
lean_dec(v___x_3260_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_dec(v___x_3253_);
lean_dec(v___x_3252_);
lean_del_object(v___x_3207_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_mods_3190_);
lean_dec(v___x_3189_);
lean_dec_ref(v_params_3188_);
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v_projId_3184_);
lean_dec(v___x_3182_);
v_a_3351_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3358_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3358_ == 0)
{
v___x_3353_ = v___x_3348_;
v_isShared_3354_ = v_isSharedCheck_3358_;
goto v_resetjp_3352_;
}
else
{
lean_inc(v_a_3351_);
lean_dec(v___x_3348_);
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
v___jp_3261_:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; size_t v_sz_3272_; size_t v___x_3273_; lean_object* v___x_3274_; size_t v_sz_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3262_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__4));
lean_inc_ref_n(v___x_3187_, 3);
lean_inc_ref_n(v___x_3186_, 4);
lean_inc_ref_n(v___x_3185_, 4);
v___x_3263_ = l_Lean_Name_mkStr4(v___x_3185_, v___x_3186_, v___x_3187_, v___x_3262_);
v___x_3264_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__5));
v___x_3265_ = l_Lean_Name_mkStr4(v___x_3185_, v___x_3186_, v___x_3187_, v___x_3264_);
v___x_3266_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__6));
lean_inc_n(v___x_3260_, 8);
v___x_3267_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3260_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
v___x_3268_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__7));
v___x_3269_ = l_Lean_Name_mkStr4(v___x_3185_, v___x_3186_, v___x_3187_, v___x_3268_);
v___x_3270_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__9));
v___x_3271_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__10, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__10_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10);
v_sz_3272_ = lean_array_size(v_params_3188_);
v___x_3273_ = ((size_t)0ULL);
v___x_3274_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_3272_, v___x_3273_, v_params_3188_);
v_sz_3275_ = lean_array_size(v___x_3274_);
v___x_3276_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_3275_, v___x_3273_, v___x_3274_);
v___x_3277_ = l_Array_append___redArg(v___x_3271_, v___x_3276_);
lean_dec_ref(v___x_3276_);
v___x_3278_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3278_, 0, v___x_3260_);
lean_ctor_set(v___x_3278_, 1, v___x_3270_);
lean_ctor_set(v___x_3278_, 2, v___x_3277_);
v___x_3279_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3260_);
lean_ctor_set(v___x_3279_, 1, v___x_3270_);
lean_ctor_set(v___x_3279_, 2, v___x_3271_);
lean_inc_ref_n(v___x_3279_, 4);
v___x_3280_ = l_Lean_Syntax_node2(v___x_3260_, v___x_3269_, v___x_3278_, v___x_3279_);
v___x_3281_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__11));
v___x_3282_ = l_Lean_Name_mkStr4(v___x_3185_, v___x_3186_, v___x_3187_, v___x_3281_);
v___x_3283_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__12));
v___x_3284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3260_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__13));
v___x_3286_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__14));
v___x_3287_ = l_Lean_Name_mkStr4(v___x_3185_, v___x_3186_, v___x_3285_, v___x_3286_);
v___x_3288_ = l_Lean_Syntax_node2(v___x_3260_, v___x_3287_, v___x_3279_, v___x_3279_);
v___x_3289_ = l_Lean_Syntax_node4(v___x_3260_, v___x_3282_, v___x_3284_, v___x_3189_, v___x_3288_, v___x_3279_);
lean_inc(v___x_3182_);
v___x_3290_ = l_Lean_Syntax_node5(v___x_3260_, v___x_3265_, v___x_3267_, v___x_3182_, v___x_3280_, v___x_3289_, v___x_3279_);
v___x_3291_ = l_Lean_Syntax_node2(v___x_3260_, v___x_3263_, v_mods_3190_, v___x_3290_);
v___x_3292_ = l_Lean_Elab_Command_elabCommand(v___x_3291_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3292_) == 0)
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
lean_dec_ref_known(v___x_3292_, 1);
lean_inc(v___x_3256_);
lean_inc(v___x_3254_);
lean_inc(v___x_3252_);
lean_inc(v_declName_3205_);
v___x_3293_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 12, 5);
lean_closure_set(v___x_3293_, 0, v_declName_3205_);
lean_closure_set(v___x_3293_, 1, v___x_3252_);
lean_closure_set(v___x_3293_, 2, v___x_3254_);
lean_closure_set(v___x_3293_, 3, v___x_3256_);
lean_closure_set(v___x_3293_, 4, v___x_3253_);
v___x_3294_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3293_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
lean_inc(v_a_3295_);
lean_dec_ref_known(v___x_3294_, 1);
v___x_3296_ = lean_box(0);
lean_inc(v___x_3252_);
v___x_3297_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3252_, v___x_3182_, v___x_3296_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3297_) == 0)
{
lean_object* v___x_3298_; 
lean_dec_ref_known(v___x_3297_, 1);
lean_inc(v___x_3254_);
v___x_3298_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3254_, v_projId_3184_, v___x_3296_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v___x_3299_; lean_object* v___x_3300_; 
lean_dec_ref_known(v___x_3298_, 1);
v___x_3299_ = lean_box(0);
lean_inc(v___x_3254_);
v___x_3300_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_projId_3184_, v___x_3254_, v___x_3299_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v_env_3307_; lean_object* v_messages_3308_; lean_object* v_scopes_3309_; lean_object* v_usedQuotCtxts_3310_; lean_object* v_nextMacroScope_3311_; lean_object* v_maxRecDepth_3312_; lean_object* v_ngen_3313_; lean_object* v_auxDeclNGen_3314_; lean_object* v_infoState_3315_; lean_object* v_traceState_3316_; lean_object* v_snapshotTasks_3317_; lean_object* v_prevLinterStates_3318_; lean_object* v_codeQualityEntryTasks_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3339_; 
lean_dec_ref_known(v___x_3300_, 1);
lean_inc(v___x_3254_);
v___x_3301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3254_);
lean_ctor_set(v___x_3301_, 1, v___x_3191_);
lean_inc(v___x_3252_);
v___x_3302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3252_);
lean_ctor_set(v___x_3302_, 1, v___x_3301_);
lean_inc_ref(v___x_3302_);
lean_inc(v_declName_3205_);
v___x_3303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3303_, 0, v_declName_3205_);
lean_ctor_set(v___x_3303_, 1, v___x_3302_);
v___x_3304_ = lean_box(0);
v___x_3305_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v___x_3303_, v___x_3304_, v___y_3194_, v___y_3195_);
lean_dec_ref_known(v___x_3303_, 2);
lean_dec_ref(v___x_3305_);
v___x_3306_ = lean_st_ref_take(v___y_3195_);
v_env_3307_ = lean_ctor_get(v___x_3306_, 0);
v_messages_3308_ = lean_ctor_get(v___x_3306_, 1);
v_scopes_3309_ = lean_ctor_get(v___x_3306_, 2);
v_usedQuotCtxts_3310_ = lean_ctor_get(v___x_3306_, 3);
v_nextMacroScope_3311_ = lean_ctor_get(v___x_3306_, 4);
v_maxRecDepth_3312_ = lean_ctor_get(v___x_3306_, 5);
v_ngen_3313_ = lean_ctor_get(v___x_3306_, 6);
v_auxDeclNGen_3314_ = lean_ctor_get(v___x_3306_, 7);
v_infoState_3315_ = lean_ctor_get(v___x_3306_, 8);
v_traceState_3316_ = lean_ctor_get(v___x_3306_, 9);
v_snapshotTasks_3317_ = lean_ctor_get(v___x_3306_, 10);
v_prevLinterStates_3318_ = lean_ctor_get(v___x_3306_, 11);
v_codeQualityEntryTasks_3319_ = lean_ctor_get(v___x_3306_, 12);
v_isSharedCheck_3339_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3339_ == 0)
{
v___x_3321_ = v___x_3306_;
v_isShared_3322_ = v_isSharedCheck_3339_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3319_);
lean_inc(v_prevLinterStates_3318_);
lean_inc(v_snapshotTasks_3317_);
lean_inc(v_traceState_3316_);
lean_inc(v_infoState_3315_);
lean_inc(v_auxDeclNGen_3314_);
lean_inc(v_ngen_3313_);
lean_inc(v_maxRecDepth_3312_);
lean_inc(v_nextMacroScope_3311_);
lean_inc(v_usedQuotCtxts_3310_);
lean_inc(v_scopes_3309_);
lean_inc(v_messages_3308_);
lean_inc(v_env_3307_);
lean_dec(v___x_3306_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3339_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
lean_object* v___x_3324_; 
lean_inc(v_declName_3205_);
if (v_isShared_3208_ == 0)
{
lean_ctor_set(v___x_3207_, 3, v_a_3295_);
lean_ctor_set(v___x_3207_, 2, v___x_3254_);
lean_ctor_set(v___x_3207_, 1, v___x_3252_);
lean_ctor_set(v___x_3207_, 0, v_declName_3205_);
v___x_3324_ = v___x_3207_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v_declName_3205_);
lean_ctor_set(v_reuseFailAlloc_3338_, 1, v___x_3252_);
lean_ctor_set(v_reuseFailAlloc_3338_, 2, v___x_3254_);
lean_ctor_set(v_reuseFailAlloc_3338_, 3, v_a_3295_);
v___x_3324_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
lean_object* v___x_3325_; lean_object* v___x_3327_; 
v___x_3325_ = l_Lean_registerVirtualStructure(v_env_3307_, v___x_3324_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 0, v___x_3325_);
v___x_3327_ = v___x_3321_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v___x_3325_);
lean_ctor_set(v_reuseFailAlloc_3337_, 1, v_messages_3308_);
lean_ctor_set(v_reuseFailAlloc_3337_, 2, v_scopes_3309_);
lean_ctor_set(v_reuseFailAlloc_3337_, 3, v_usedQuotCtxts_3310_);
lean_ctor_set(v_reuseFailAlloc_3337_, 4, v_nextMacroScope_3311_);
lean_ctor_set(v_reuseFailAlloc_3337_, 5, v_maxRecDepth_3312_);
lean_ctor_set(v_reuseFailAlloc_3337_, 6, v_ngen_3313_);
lean_ctor_set(v_reuseFailAlloc_3337_, 7, v_auxDeclNGen_3314_);
lean_ctor_set(v_reuseFailAlloc_3337_, 8, v_infoState_3315_);
lean_ctor_set(v_reuseFailAlloc_3337_, 9, v_traceState_3316_);
lean_ctor_set(v_reuseFailAlloc_3337_, 10, v_snapshotTasks_3317_);
lean_ctor_set(v_reuseFailAlloc_3337_, 11, v_prevLinterStates_3318_);
lean_ctor_set(v_reuseFailAlloc_3337_, 12, v_codeQualityEntryTasks_3319_);
v___x_3327_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3328_ = lean_st_ref_put(v___y_3195_, v___x_3327_);
v___x_3329_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v___x_3302_, v___x_3304_, v___y_3194_, v___y_3195_);
lean_dec_ref_known(v___x_3302_, 2);
if (lean_obj_tag(v___x_3329_) == 0)
{
lean_object* v___x_3330_; lean_object* v_env_3331_; uint8_t v___x_3332_; uint8_t v___x_3333_; 
lean_dec_ref_known(v___x_3329_, 1);
v___x_3330_ = lean_st_ref_get(v___y_3195_);
v_env_3331_ = lean_ctor_get(v___x_3330_, 0);
lean_inc_ref(v_env_3331_);
lean_dec(v___x_3330_);
v___x_3332_ = 1;
lean_inc(v___x_3256_);
v___x_3333_ = l_Lean_Environment_contains(v_env_3331_, v___x_3256_, v___x_3332_);
if (v___x_3333_ == 0)
{
lean_dec(v___x_3256_);
lean_dec(v___x_3182_);
v___y_3210_ = v___x_3273_;
v___y_3211_ = v___x_3304_;
v___y_3212_ = v___y_3194_;
v___y_3213_ = v___y_3195_;
goto v___jp_3209_;
}
else
{
lean_object* v___x_3334_; 
lean_inc(v___x_3256_);
v___x_3334_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3256_, v___x_3182_, v___x_3296_, v___y_3194_, v___y_3195_);
lean_dec(v___x_3182_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v___x_3335_; lean_object* v___x_3336_; 
lean_dec_ref_known(v___x_3334_, 1);
v___x_3335_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_3335_, 0, v___x_3256_);
v___x_3336_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3335_, v___y_3194_, v___y_3195_);
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_dec_ref_known(v___x_3336_, 1);
v___y_3210_ = v___x_3273_;
v___y_3211_ = v___x_3304_;
v___y_3212_ = v___y_3194_;
v___y_3213_ = v___y_3195_;
goto v___jp_3209_;
}
else
{
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
return v___x_3336_;
}
}
else
{
lean_dec(v___x_3256_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
return v___x_3334_;
}
}
}
else
{
lean_dec(v___x_3256_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3182_);
return v___x_3329_;
}
}
}
}
}
else
{
lean_dec(v_a_3295_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_dec(v___x_3252_);
lean_del_object(v___x_3207_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v___x_3182_);
return v___x_3300_;
}
}
else
{
lean_dec(v_a_3295_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_dec(v___x_3252_);
lean_del_object(v___x_3207_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_projId_3184_);
lean_dec(v___x_3182_);
return v___x_3298_;
}
}
else
{
lean_dec(v_a_3295_);
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_dec(v___x_3252_);
lean_del_object(v___x_3207_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_projId_3184_);
lean_dec(v___x_3182_);
return v___x_3297_;
}
}
else
{
lean_object* v_a_3340_; lean_object* v___x_3342_; uint8_t v_isShared_3343_; uint8_t v_isSharedCheck_3347_; 
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_dec(v___x_3252_);
lean_del_object(v___x_3207_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_projId_3184_);
lean_dec(v___x_3182_);
v_a_3340_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3342_ = v___x_3294_;
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
else
{
lean_inc(v_a_3340_);
lean_dec(v___x_3294_);
v___x_3342_ = lean_box(0);
v_isShared_3343_ = v_isSharedCheck_3347_;
goto v_resetjp_3341_;
}
v_resetjp_3341_:
{
lean_object* v___x_3345_; 
if (v_isShared_3343_ == 0)
{
v___x_3345_ = v___x_3342_;
goto v_reusejp_3344_;
}
else
{
lean_object* v_reuseFailAlloc_3346_; 
v_reuseFailAlloc_3346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3346_, 0, v_a_3340_);
v___x_3345_ = v_reuseFailAlloc_3346_;
goto v_reusejp_3344_;
}
v_reusejp_3344_:
{
return v___x_3345_;
}
}
}
}
else
{
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_dec(v___x_3253_);
lean_dec(v___x_3252_);
lean_del_object(v___x_3207_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_projId_3184_);
lean_dec(v___x_3182_);
return v___x_3292_;
}
}
}
else
{
lean_object* v_a_3359_; lean_object* v___x_3361_; uint8_t v_isShared_3362_; uint8_t v_isSharedCheck_3366_; 
lean_dec(v___x_3256_);
lean_dec(v___x_3254_);
lean_dec(v___x_3253_);
lean_dec(v___x_3252_);
lean_del_object(v___x_3207_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_mods_3190_);
lean_dec(v___x_3189_);
lean_dec_ref(v_params_3188_);
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v_projId_3184_);
lean_dec(v___x_3182_);
v_a_3359_ = lean_ctor_get(v___x_3257_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v___x_3257_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3361_ = v___x_3257_;
v_isShared_3362_ = v_isSharedCheck_3366_;
goto v_resetjp_3360_;
}
else
{
lean_inc(v_a_3359_);
lean_dec(v___x_3257_);
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
v___jp_3209_:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
v___x_3214_ = lean_alloc_closure((void*)(l_Lean_Elab_getOptDerivingClasses___boxed), 4, 1);
lean_closure_set(v___x_3214_, 0, v_optDeriving_3192_);
v___x_3215_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3214_, v___y_3212_, v___y_3213_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3242_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3242_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3242_ == 0)
{
v___x_3218_ = v___x_3215_;
v_isShared_3219_ = v_isSharedCheck_3242_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3215_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3242_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3220_; uint8_t v___x_3221_; 
v___x_3220_ = lean_array_get_size(v_a_3216_);
v___x_3221_ = lean_nat_dec_eq(v___x_3220_, v___x_3193_);
if (v___x_3221_ == 0)
{
uint8_t v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; size_t v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___f_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
lean_del_object(v___x_3218_);
v___x_3222_ = 1;
v___x_3223_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__0, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__0_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0);
v___x_3224_ = lean_unsigned_to_nat(32u);
v___x_3225_ = lean_mk_empty_array_with_capacity(v___x_3224_);
v___x_3226_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_3227_ = ((size_t)5ULL);
lean_inc_n(v___x_3193_, 2);
v___x_3228_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3228_, 0, v___x_3226_);
lean_ctor_set(v___x_3228_, 1, v___x_3225_);
lean_ctor_set(v___x_3228_, 2, v___x_3193_);
lean_ctor_set(v___x_3228_, 3, v___x_3193_);
lean_ctor_set_usize(v___x_3228_, 4, v___x_3227_);
v___x_3229_ = lean_box(1);
v___x_3230_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3223_);
lean_ctor_set(v___x_3230_, 1, v___x_3228_);
lean_ctor_set(v___x_3230_, 2, v___x_3229_);
v___x_3231_ = lean_mk_empty_array_with_capacity(v___x_3193_);
lean_dec(v___x_3193_);
lean_inc(v_declName_3205_);
v___x_3232_ = lean_alloc_closure((void*)(l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed), 8, 1);
lean_closure_set(v___x_3232_, 0, v_declName_3205_);
v___x_3233_ = lean_box(v___x_3222_);
v___x_3234_ = lean_box_usize(v___y_3210_);
v___x_3235_ = lean_box(v___x_3221_);
v___f_3236_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3236_, 0, v___x_3232_);
lean_closure_set(v___f_3236_, 1, v___x_3233_);
lean_closure_set(v___f_3236_, 2, v_declName_3205_);
lean_closure_set(v___f_3236_, 3, v_a_3216_);
lean_closure_set(v___f_3236_, 4, v___x_3220_);
lean_closure_set(v___f_3236_, 5, v___x_3234_);
lean_closure_set(v___f_3236_, 6, v___y_3211_);
lean_closure_set(v___f_3236_, 7, v___x_3235_);
v___x_3237_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed), 11, 4);
lean_closure_set(v___x_3237_, 0, lean_box(0));
lean_closure_set(v___x_3237_, 1, v___x_3230_);
lean_closure_set(v___x_3237_, 2, v___x_3231_);
lean_closure_set(v___x_3237_, 3, v___f_3236_);
v___x_3238_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3237_, v___y_3212_, v___y_3213_);
return v___x_3238_;
}
else
{
lean_object* v___x_3240_; 
lean_dec(v_a_3216_);
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 0, v___y_3211_);
v___x_3240_ = v___x_3218_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v___y_3211_);
v___x_3240_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
return v___x_3240_;
}
}
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3245_; uint8_t v_isShared_3246_; uint8_t v_isSharedCheck_3250_; 
lean_dec(v_declName_3205_);
lean_dec(v___x_3193_);
v_a_3243_ = lean_ctor_get(v___x_3215_, 0);
v_isSharedCheck_3250_ = !lean_is_exclusive(v___x_3215_);
if (v_isSharedCheck_3250_ == 0)
{
v___x_3245_ = v___x_3215_;
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
else
{
lean_inc(v_a_3243_);
lean_dec(v___x_3215_);
v___x_3245_ = lean_box(0);
v_isShared_3246_ = v_isSharedCheck_3250_;
goto v_resetjp_3244_;
}
v_resetjp_3244_:
{
lean_object* v___x_3248_; 
if (v_isShared_3246_ == 0)
{
v___x_3248_ = v___x_3245_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v_a_3243_);
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
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_mods_3190_);
lean_dec(v___x_3189_);
lean_dec_ref(v_params_3188_);
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v_projId_3184_);
lean_dec(v___x_3182_);
v_a_3371_ = lean_ctor_get(v___x_3203_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3203_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3203_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3203_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
lean_dec(v_currNamespace_3199_);
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_mods_3190_);
lean_dec(v___x_3189_);
lean_dec_ref(v_params_3188_);
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v_projId_3184_);
lean_dec_ref(v_a_3183_);
lean_dec(v___x_3182_);
v_a_3379_ = lean_ctor_get(v___x_3200_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3200_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v___x_3200_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3200_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
return v___x_3384_;
}
}
}
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
lean_dec(v___x_3193_);
lean_dec(v_optDeriving_3192_);
lean_dec(v___x_3191_);
lean_dec(v_mods_3190_);
lean_dec(v___x_3189_);
lean_dec_ref(v_params_3188_);
lean_dec_ref(v___x_3187_);
lean_dec_ref(v___x_3186_);
lean_dec_ref(v___x_3185_);
lean_dec(v_projId_3184_);
lean_dec_ref(v_a_3183_);
lean_dec(v___x_3182_);
v_a_3387_ = lean_ctor_get(v___x_3197_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3197_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v___x_3197_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3197_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___boxed(lean_object* v___x_3395_, lean_object* v_a_3396_, lean_object* v_projId_3397_, lean_object* v___x_3398_, lean_object* v___x_3399_, lean_object* v___x_3400_, lean_object* v_params_3401_, lean_object* v___x_3402_, lean_object* v_mods_3403_, lean_object* v___x_3404_, lean_object* v_optDeriving_3405_, lean_object* v___x_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lean_Elab_Command_elabNewtype___lam__2(v___x_3395_, v_a_3396_, v_projId_3397_, v___x_3398_, v___x_3399_, v___x_3400_, v_params_3401_, v___x_3402_, v_mods_3403_, v___x_3404_, v_optDeriving_3405_, v___x_3406_, v___y_3407_, v___y_3408_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
return v_res_3410_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(uint8_t v_suppressElabErrors_3411_, uint8_t v___y_3412_, lean_object* v_x_3413_){
_start:
{
if (lean_obj_tag(v_x_3413_) == 1)
{
lean_object* v_pre_3414_; 
v_pre_3414_ = lean_ctor_get(v_x_3413_, 0);
if (lean_obj_tag(v_pre_3414_) == 0)
{
lean_object* v_str_3415_; lean_object* v___x_3416_; uint8_t v___x_3417_; 
v_str_3415_ = lean_ctor_get(v_x_3413_, 1);
v___x_3416_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_3417_ = lean_string_dec_eq(v_str_3415_, v___x_3416_);
if (v___x_3417_ == 0)
{
return v___x_3417_;
}
else
{
return v_suppressElabErrors_3411_;
}
}
else
{
return v___y_3412_;
}
}
else
{
return v___y_3412_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed(lean_object* v_suppressElabErrors_3418_, lean_object* v___y_3419_, lean_object* v_x_3420_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3421_; uint8_t v___y_52168__boxed_3422_; uint8_t v_res_3423_; lean_object* v_r_3424_; 
v_suppressElabErrors_boxed_3421_ = lean_unbox(v_suppressElabErrors_3418_);
v___y_52168__boxed_3422_ = lean_unbox(v___y_3419_);
v_res_3423_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(v_suppressElabErrors_boxed_3421_, v___y_52168__boxed_3422_, v_x_3420_);
lean_dec(v_x_3420_);
v_r_3424_ = lean_box(v_res_3423_);
return v_r_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(lean_object* v_ref_3425_, lean_object* v_msgData_3426_, uint8_t v_severity_3427_, uint8_t v_isSilent_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_){
_start:
{
lean_object* v___y_3433_; lean_object* v___y_3434_; lean_object* v___y_3435_; uint8_t v___y_3436_; uint8_t v___y_3437_; lean_object* v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; uint8_t v___y_3498_; lean_object* v___y_3499_; uint8_t v___y_3500_; uint8_t v___y_3501_; lean_object* v___y_3502_; uint8_t v___y_3526_; lean_object* v___y_3527_; uint8_t v___y_3528_; uint8_t v___y_3529_; lean_object* v___y_3530_; uint8_t v___y_3534_; uint8_t v___y_3535_; uint8_t v___y_3536_; uint8_t v___x_3551_; uint8_t v___y_3553_; uint8_t v___y_3554_; uint8_t v___y_3555_; uint8_t v___y_3557_; uint8_t v___x_3569_; 
v___x_3551_ = 2;
v___x_3569_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3427_, v___x_3551_);
if (v___x_3569_ == 0)
{
v___y_3557_ = v___x_3569_;
goto v___jp_3556_;
}
else
{
uint8_t v___x_3570_; 
lean_inc_ref(v_msgData_3426_);
v___x_3570_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3426_);
v___y_3557_ = v___x_3570_;
goto v___jp_3556_;
}
v___jp_3432_:
{
lean_object* v___x_3441_; 
v___x_3441_ = l_Lean_Elab_Command_getScope___redArg(v___y_3440_);
if (lean_obj_tag(v___x_3441_) == 0)
{
lean_object* v_a_3442_; lean_object* v_currNamespace_3443_; lean_object* v___x_3444_; 
v_a_3442_ = lean_ctor_get(v___x_3441_, 0);
lean_inc(v_a_3442_);
lean_dec_ref_known(v___x_3441_, 1);
v_currNamespace_3443_ = lean_ctor_get(v_a_3442_, 2);
lean_inc(v_currNamespace_3443_);
lean_dec(v_a_3442_);
v___x_3444_ = l_Lean_Elab_Command_getScope___redArg(v___y_3440_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3480_; 
v_a_3445_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3447_ = v___x_3444_;
v_isShared_3448_ = v_isSharedCheck_3480_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3444_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3480_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v_openDecls_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v_env_3454_; lean_object* v_messages_3455_; lean_object* v_scopes_3456_; lean_object* v_usedQuotCtxts_3457_; lean_object* v_nextMacroScope_3458_; lean_object* v_maxRecDepth_3459_; lean_object* v_ngen_3460_; lean_object* v_auxDeclNGen_3461_; lean_object* v_infoState_3462_; lean_object* v_traceState_3463_; lean_object* v_snapshotTasks_3464_; lean_object* v_prevLinterStates_3465_; lean_object* v_codeQualityEntryTasks_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3479_; 
v_openDecls_3449_ = lean_ctor_get(v_a_3445_, 3);
lean_inc(v_openDecls_3449_);
lean_dec(v_a_3445_);
v___x_3450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3450_, 0, v_currNamespace_3443_);
lean_ctor_set(v___x_3450_, 1, v_openDecls_3449_);
v___x_3451_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3450_);
lean_ctor_set(v___x_3451_, 1, v___y_3435_);
lean_inc_ref(v___y_3439_);
lean_inc_ref(v___y_3434_);
v___x_3452_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3452_, 0, v___y_3434_);
lean_ctor_set(v___x_3452_, 1, v___y_3433_);
lean_ctor_set(v___x_3452_, 2, v___y_3438_);
lean_ctor_set(v___x_3452_, 3, v___y_3439_);
lean_ctor_set(v___x_3452_, 4, v___x_3451_);
lean_ctor_set_uint8(v___x_3452_, sizeof(void*)*5, v___y_3437_);
lean_ctor_set_uint8(v___x_3452_, sizeof(void*)*5 + 1, v___y_3436_);
lean_ctor_set_uint8(v___x_3452_, sizeof(void*)*5 + 2, v_isSilent_3428_);
v___x_3453_ = lean_st_ref_take(v___y_3440_);
v_env_3454_ = lean_ctor_get(v___x_3453_, 0);
v_messages_3455_ = lean_ctor_get(v___x_3453_, 1);
v_scopes_3456_ = lean_ctor_get(v___x_3453_, 2);
v_usedQuotCtxts_3457_ = lean_ctor_get(v___x_3453_, 3);
v_nextMacroScope_3458_ = lean_ctor_get(v___x_3453_, 4);
v_maxRecDepth_3459_ = lean_ctor_get(v___x_3453_, 5);
v_ngen_3460_ = lean_ctor_get(v___x_3453_, 6);
v_auxDeclNGen_3461_ = lean_ctor_get(v___x_3453_, 7);
v_infoState_3462_ = lean_ctor_get(v___x_3453_, 8);
v_traceState_3463_ = lean_ctor_get(v___x_3453_, 9);
v_snapshotTasks_3464_ = lean_ctor_get(v___x_3453_, 10);
v_prevLinterStates_3465_ = lean_ctor_get(v___x_3453_, 11);
v_codeQualityEntryTasks_3466_ = lean_ctor_get(v___x_3453_, 12);
v_isSharedCheck_3479_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3468_ = v___x_3453_;
v_isShared_3469_ = v_isSharedCheck_3479_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3466_);
lean_inc(v_prevLinterStates_3465_);
lean_inc(v_snapshotTasks_3464_);
lean_inc(v_traceState_3463_);
lean_inc(v_infoState_3462_);
lean_inc(v_auxDeclNGen_3461_);
lean_inc(v_ngen_3460_);
lean_inc(v_maxRecDepth_3459_);
lean_inc(v_nextMacroScope_3458_);
lean_inc(v_usedQuotCtxts_3457_);
lean_inc(v_scopes_3456_);
lean_inc(v_messages_3455_);
lean_inc(v_env_3454_);
lean_dec(v___x_3453_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3479_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3473_; 
v___x_3470_ = lean_box(0);
v___x_3471_ = l_Lean_MessageLog_add(v___x_3452_, v_messages_3455_);
if (v_isShared_3469_ == 0)
{
lean_ctor_set(v___x_3468_, 1, v___x_3471_);
v___x_3473_ = v___x_3468_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_env_3454_);
lean_ctor_set(v_reuseFailAlloc_3478_, 1, v___x_3471_);
lean_ctor_set(v_reuseFailAlloc_3478_, 2, v_scopes_3456_);
lean_ctor_set(v_reuseFailAlloc_3478_, 3, v_usedQuotCtxts_3457_);
lean_ctor_set(v_reuseFailAlloc_3478_, 4, v_nextMacroScope_3458_);
lean_ctor_set(v_reuseFailAlloc_3478_, 5, v_maxRecDepth_3459_);
lean_ctor_set(v_reuseFailAlloc_3478_, 6, v_ngen_3460_);
lean_ctor_set(v_reuseFailAlloc_3478_, 7, v_auxDeclNGen_3461_);
lean_ctor_set(v_reuseFailAlloc_3478_, 8, v_infoState_3462_);
lean_ctor_set(v_reuseFailAlloc_3478_, 9, v_traceState_3463_);
lean_ctor_set(v_reuseFailAlloc_3478_, 10, v_snapshotTasks_3464_);
lean_ctor_set(v_reuseFailAlloc_3478_, 11, v_prevLinterStates_3465_);
lean_ctor_set(v_reuseFailAlloc_3478_, 12, v_codeQualityEntryTasks_3466_);
v___x_3473_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
lean_object* v___x_3474_; lean_object* v___x_3476_; 
v___x_3474_ = lean_st_ref_put(v___y_3440_, v___x_3473_);
if (v_isShared_3448_ == 0)
{
lean_ctor_set(v___x_3447_, 0, v___x_3470_);
v___x_3476_ = v___x_3447_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v___x_3470_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
}
}
else
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3488_; 
lean_dec(v_currNamespace_3443_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3435_);
lean_dec_ref(v___y_3433_);
v_a_3481_ = lean_ctor_get(v___x_3444_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v___x_3444_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3483_ = v___x_3444_;
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3444_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3481_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
}
}
else
{
lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3496_; 
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3435_);
lean_dec_ref(v___y_3433_);
v_a_3489_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3491_ = v___x_3441_;
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v___x_3441_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3496_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3494_; 
if (v_isShared_3492_ == 0)
{
v___x_3494_ = v___x_3491_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_a_3489_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
v___jp_3497_:
{
lean_object* v_fileName_3503_; lean_object* v_fileMap_3504_; uint8_t v_suppressElabErrors_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___f_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3524_; 
v_fileName_3503_ = lean_ctor_get(v___y_3429_, 0);
v_fileMap_3504_ = lean_ctor_get(v___y_3429_, 1);
v_suppressElabErrors_3505_ = lean_ctor_get_uint8(v___y_3429_, sizeof(void*)*10);
v___x_3506_ = lean_box(v_suppressElabErrors_3505_);
v___x_3507_ = lean_box(v___y_3498_);
v___f_3508_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3508_, 0, v___x_3506_);
lean_closure_set(v___f_3508_, 1, v___x_3507_);
v___x_3509_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3426_);
v___x_3510_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v___x_3509_, v___y_3430_);
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3524_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3524_ == 0)
{
v___x_3513_ = v___x_3510_;
v_isShared_3514_ = v_isSharedCheck_3524_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3510_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3524_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
lean_inc_ref_n(v_fileMap_3504_, 2);
v___x_3515_ = l_Lean_FileMap_toPosition(v_fileMap_3504_, v___y_3499_);
lean_dec(v___y_3499_);
v___x_3516_ = l_Lean_FileMap_toPosition(v_fileMap_3504_, v___y_3502_);
lean_dec(v___y_3502_);
v___x_3517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3516_);
v___x_3518_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v_suppressElabErrors_3505_ == 0)
{
lean_del_object(v___x_3513_);
lean_dec_ref(v___f_3508_);
v___y_3433_ = v___x_3515_;
v___y_3434_ = v_fileName_3503_;
v___y_3435_ = v_a_3511_;
v___y_3436_ = v___y_3500_;
v___y_3437_ = v___y_3501_;
v___y_3438_ = v___x_3517_;
v___y_3439_ = v___x_3518_;
v___y_3440_ = v___y_3430_;
goto v___jp_3432_;
}
else
{
uint8_t v___x_3519_; 
lean_inc(v_a_3511_);
v___x_3519_ = l_Lean_MessageData_hasTag(v___f_3508_, v_a_3511_);
if (v___x_3519_ == 0)
{
lean_object* v___x_3520_; lean_object* v___x_3522_; 
lean_dec_ref_known(v___x_3517_, 1);
lean_dec_ref(v___x_3515_);
lean_dec(v_a_3511_);
v___x_3520_ = lean_box(0);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 0, v___x_3520_);
v___x_3522_ = v___x_3513_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v___x_3520_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
else
{
lean_del_object(v___x_3513_);
v___y_3433_ = v___x_3515_;
v___y_3434_ = v_fileName_3503_;
v___y_3435_ = v_a_3511_;
v___y_3436_ = v___y_3500_;
v___y_3437_ = v___y_3501_;
v___y_3438_ = v___x_3517_;
v___y_3439_ = v___x_3518_;
v___y_3440_ = v___y_3430_;
goto v___jp_3432_;
}
}
}
}
v___jp_3525_:
{
lean_object* v___x_3531_; 
v___x_3531_ = l_Lean_Syntax_getTailPos_x3f(v___y_3527_, v___y_3529_);
lean_dec(v___y_3527_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_inc(v___y_3530_);
v___y_3498_ = v___y_3526_;
v___y_3499_ = v___y_3530_;
v___y_3500_ = v___y_3528_;
v___y_3501_ = v___y_3529_;
v___y_3502_ = v___y_3530_;
goto v___jp_3497_;
}
else
{
lean_object* v_val_3532_; 
v_val_3532_ = lean_ctor_get(v___x_3531_, 0);
lean_inc(v_val_3532_);
lean_dec_ref_known(v___x_3531_, 1);
v___y_3498_ = v___y_3526_;
v___y_3499_ = v___y_3530_;
v___y_3500_ = v___y_3528_;
v___y_3501_ = v___y_3529_;
v___y_3502_ = v_val_3532_;
goto v___jp_3497_;
}
}
v___jp_3533_:
{
lean_object* v___x_3537_; 
v___x_3537_ = l_Lean_Elab_Command_getRef___redArg(v___y_3429_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v_a_3538_; lean_object* v_ref_3539_; lean_object* v___x_3540_; 
v_a_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3538_);
lean_dec_ref_known(v___x_3537_, 1);
v_ref_3539_ = l_Lean_replaceRef(v_ref_3425_, v_a_3538_);
lean_dec(v_a_3538_);
v___x_3540_ = l_Lean_Syntax_getPos_x3f(v_ref_3539_, v___y_3535_);
if (lean_obj_tag(v___x_3540_) == 0)
{
lean_object* v___x_3541_; 
v___x_3541_ = lean_unsigned_to_nat(0u);
v___y_3526_ = v___y_3534_;
v___y_3527_ = v_ref_3539_;
v___y_3528_ = v___y_3536_;
v___y_3529_ = v___y_3535_;
v___y_3530_ = v___x_3541_;
goto v___jp_3525_;
}
else
{
lean_object* v_val_3542_; 
v_val_3542_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_val_3542_);
lean_dec_ref_known(v___x_3540_, 1);
v___y_3526_ = v___y_3534_;
v___y_3527_ = v_ref_3539_;
v___y_3528_ = v___y_3536_;
v___y_3529_ = v___y_3535_;
v___y_3530_ = v_val_3542_;
goto v___jp_3525_;
}
}
else
{
lean_object* v_a_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3550_; 
lean_dec_ref(v_msgData_3426_);
v_a_3543_ = lean_ctor_get(v___x_3537_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3537_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3545_ = v___x_3537_;
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
else
{
lean_inc(v_a_3543_);
lean_dec(v___x_3537_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3550_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
lean_object* v___x_3548_; 
if (v_isShared_3546_ == 0)
{
v___x_3548_ = v___x_3545_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_a_3543_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
v___jp_3552_:
{
if (v___y_3555_ == 0)
{
v___y_3534_ = v___y_3553_;
v___y_3535_ = v___y_3554_;
v___y_3536_ = v_severity_3427_;
goto v___jp_3533_;
}
else
{
v___y_3534_ = v___y_3553_;
v___y_3535_ = v___y_3554_;
v___y_3536_ = v___x_3551_;
goto v___jp_3533_;
}
}
v___jp_3556_:
{
if (v___y_3557_ == 0)
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v_scopes_3560_; lean_object* v___x_3561_; lean_object* v_opts_3562_; uint8_t v___x_3563_; uint8_t v___x_3564_; 
v___x_3558_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3559_ = lean_st_ref_get(v___y_3430_);
v_scopes_3560_ = lean_ctor_get(v___x_3559_, 2);
lean_inc(v_scopes_3560_);
lean_dec(v___x_3559_);
v___x_3561_ = l_List_head_x21___redArg(v___x_3558_, v_scopes_3560_);
lean_dec(v_scopes_3560_);
v_opts_3562_ = lean_ctor_get(v___x_3561_, 1);
lean_inc_ref(v_opts_3562_);
lean_dec(v___x_3561_);
v___x_3563_ = 1;
v___x_3564_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3427_, v___x_3563_);
if (v___x_3564_ == 0)
{
lean_dec_ref(v_opts_3562_);
v___y_3553_ = v___y_3557_;
v___y_3554_ = v___y_3557_;
v___y_3555_ = v___x_3564_;
goto v___jp_3552_;
}
else
{
lean_object* v___x_3565_; uint8_t v___x_3566_; 
v___x_3565_ = l_Lean_warningAsError;
v___x_3566_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_3562_, v___x_3565_);
lean_dec_ref(v_opts_3562_);
v___y_3553_ = v___y_3557_;
v___y_3554_ = v___y_3557_;
v___y_3555_ = v___x_3566_;
goto v___jp_3552_;
}
}
else
{
lean_object* v___x_3567_; lean_object* v___x_3568_; 
lean_dec_ref(v_msgData_3426_);
v___x_3567_ = lean_box(0);
v___x_3568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3567_);
return v___x_3568_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___boxed(lean_object* v_ref_3571_, lean_object* v_msgData_3572_, lean_object* v_severity_3573_, lean_object* v_isSilent_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_){
_start:
{
uint8_t v_severity_boxed_3578_; uint8_t v_isSilent_boxed_3579_; lean_object* v_res_3580_; 
v_severity_boxed_3578_ = lean_unbox(v_severity_3573_);
v_isSilent_boxed_3579_ = lean_unbox(v_isSilent_3574_);
v_res_3580_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3571_, v_msgData_3572_, v_severity_boxed_3578_, v_isSilent_boxed_3579_, v___y_3575_, v___y_3576_);
lean_dec(v___y_3576_);
lean_dec_ref(v___y_3575_);
lean_dec(v_ref_3571_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(lean_object* v_msgData_3581_, uint8_t v_severity_3582_, uint8_t v_isSilent_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_){
_start:
{
lean_object* v___x_3587_; 
v___x_3587_ = l_Lean_Elab_Command_getRef___redArg(v___y_3584_);
if (lean_obj_tag(v___x_3587_) == 0)
{
lean_object* v_a_3588_; lean_object* v___x_3589_; 
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
lean_inc(v_a_3588_);
lean_dec_ref_known(v___x_3587_, 1);
v___x_3589_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_a_3588_, v_msgData_3581_, v_severity_3582_, v_isSilent_3583_, v___y_3584_, v___y_3585_);
lean_dec(v_a_3588_);
return v___x_3589_;
}
else
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3597_; 
lean_dec_ref(v_msgData_3581_);
v_a_3590_ = lean_ctor_get(v___x_3587_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3592_ = v___x_3587_;
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3587_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44___boxed(lean_object* v_msgData_3598_, lean_object* v_severity_3599_, lean_object* v_isSilent_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_){
_start:
{
uint8_t v_severity_boxed_3604_; uint8_t v_isSilent_boxed_3605_; lean_object* v_res_3606_; 
v_severity_boxed_3604_ = lean_unbox(v_severity_3599_);
v_isSilent_boxed_3605_ = lean_unbox(v_isSilent_3600_);
v_res_3606_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3598_, v_severity_boxed_3604_, v_isSilent_boxed_3605_, v___y_3601_, v___y_3602_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(lean_object* v_msgData_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_){
_start:
{
uint8_t v___x_3611_; uint8_t v___x_3612_; lean_object* v___x_3613_; 
v___x_3611_ = 2;
v___x_3612_ = 0;
v___x_3613_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3607_, v___x_3611_, v___x_3612_, v___y_3608_, v___y_3609_);
return v___x_3613_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38___boxed(lean_object* v_msgData_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v_msgData_3614_, v___y_3615_, v___y_3616_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
return v_res_3618_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(lean_object* v_ref_3619_, lean_object* v_msgData_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_){
_start:
{
uint8_t v___x_3624_; uint8_t v___x_3625_; lean_object* v___x_3626_; 
v___x_3624_ = 2;
v___x_3625_ = 0;
v___x_3626_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3619_, v_msgData_3620_, v___x_3624_, v___x_3625_, v___y_3621_, v___y_3622_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37___boxed(lean_object* v_ref_3627_, lean_object* v_msgData_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_){
_start:
{
lean_object* v_res_3632_; 
v_res_3632_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3627_, v_msgData_3628_, v___y_3629_, v___y_3630_);
lean_dec(v___y_3630_);
lean_dec_ref(v___y_3629_);
lean_dec(v_ref_3627_);
return v_res_3632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(lean_object* v_ex_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
if (lean_obj_tag(v_ex_3633_) == 0)
{
lean_object* v_ref_3637_; lean_object* v_msg_3638_; lean_object* v___x_3639_; 
v_ref_3637_ = lean_ctor_get(v_ex_3633_, 0);
lean_inc(v_ref_3637_);
v_msg_3638_ = lean_ctor_get(v_ex_3633_, 1);
lean_inc_ref(v_msg_3638_);
lean_dec_ref_known(v_ex_3633_, 2);
v___x_3639_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3637_, v_msg_3638_, v___y_3634_, v___y_3635_);
lean_dec(v_ref_3637_);
return v___x_3639_;
}
else
{
lean_object* v_id_3640_; uint8_t v___y_3642_; uint8_t v___x_3664_; 
v_id_3640_ = lean_ctor_get(v_ex_3633_, 0);
lean_inc(v_id_3640_);
v___x_3664_ = l_Lean_Elab_isAbortExceptionId(v_id_3640_);
if (v___x_3664_ == 0)
{
uint8_t v___x_3665_; 
v___x_3665_ = l_Lean_Exception_isInterrupt(v_ex_3633_);
lean_dec_ref_known(v_ex_3633_, 2);
v___y_3642_ = v___x_3665_;
goto v___jp_3641_;
}
else
{
lean_dec_ref_known(v_ex_3633_, 2);
v___y_3642_ = v___x_3664_;
goto v___jp_3641_;
}
v___jp_3641_:
{
if (v___y_3642_ == 0)
{
lean_object* v___x_3643_; 
v___x_3643_ = l_Lean_InternalExceptionId_getName(v_id_3640_);
lean_dec(v_id_3640_);
if (lean_obj_tag(v___x_3643_) == 0)
{
lean_object* v_a_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; 
v_a_3644_ = lean_ctor_get(v___x_3643_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3643_, 1);
v___x_3645_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_3646_ = l_Lean_MessageData_ofName(v_a_3644_);
v___x_3647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3647_, 0, v___x_3645_);
lean_ctor_set(v___x_3647_, 1, v___x_3646_);
v___x_3648_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v___x_3647_, v___y_3634_, v___y_3635_);
return v___x_3648_;
}
else
{
lean_object* v_a_3649_; lean_object* v___x_3651_; uint8_t v_isShared_3652_; uint8_t v_isSharedCheck_3661_; 
v_a_3649_ = lean_ctor_get(v___x_3643_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3643_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3651_ = v___x_3643_;
v_isShared_3652_ = v_isSharedCheck_3661_;
goto v_resetjp_3650_;
}
else
{
lean_inc(v_a_3649_);
lean_dec(v___x_3643_);
v___x_3651_ = lean_box(0);
v_isShared_3652_ = v_isSharedCheck_3661_;
goto v_resetjp_3650_;
}
v_resetjp_3650_:
{
lean_object* v_ref_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3659_; 
v_ref_3653_ = lean_ctor_get(v___y_3634_, 7);
v___x_3654_ = lean_io_error_to_string(v_a_3649_);
v___x_3655_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3654_);
v___x_3656_ = l_Lean_MessageData_ofFormat(v___x_3655_);
lean_inc(v_ref_3653_);
v___x_3657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3657_, 0, v_ref_3653_);
lean_ctor_set(v___x_3657_, 1, v___x_3656_);
if (v_isShared_3652_ == 0)
{
lean_ctor_set(v___x_3651_, 0, v___x_3657_);
v___x_3659_ = v___x_3651_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v___x_3657_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
else
{
lean_object* v___x_3662_; lean_object* v___x_3663_; 
lean_dec(v_id_3640_);
v___x_3662_ = lean_box(0);
v___x_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3663_, 0, v___x_3662_);
return v___x_3663_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27___boxed(lean_object* v_ex_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_){
_start:
{
lean_object* v_res_3670_; 
v_res_3670_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_ex_3666_, v___y_3667_, v___y_3668_);
lean_dec(v___y_3668_);
lean_dec_ref(v___y_3667_);
return v_res_3670_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(lean_object* v_k_3680_){
_start:
{
lean_object* v___x_3681_; uint8_t v___x_3682_; 
v___x_3681_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4));
v___x_3682_ = lean_name_eq(v_k_3680_, v___x_3681_);
if (v___x_3682_ == 0)
{
uint8_t v___x_3683_; 
v___x_3683_ = 1;
return v___x_3683_;
}
else
{
uint8_t v___x_3684_; 
v___x_3684_ = 0;
return v___x_3684_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___boxed(lean_object* v_k_3685_){
_start:
{
uint8_t v_res_3686_; lean_object* v_r_3687_; 
v_res_3686_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(v_k_3685_);
lean_dec(v_k_3685_);
v_r_3687_ = lean_box(v_res_3686_);
return v_r_3687_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(lean_object* v_keys_3688_, lean_object* v_i_3689_, lean_object* v_k_3690_){
_start:
{
lean_object* v___x_3691_; uint8_t v___x_3692_; 
v___x_3691_ = lean_array_get_size(v_keys_3688_);
v___x_3692_ = lean_nat_dec_lt(v_i_3689_, v___x_3691_);
if (v___x_3692_ == 0)
{
lean_dec(v_i_3689_);
return v___x_3692_;
}
else
{
lean_object* v_k_x27_3693_; uint8_t v___x_3694_; 
v_k_x27_3693_ = lean_array_fget_borrowed(v_keys_3688_, v_i_3689_);
v___x_3694_ = l_Lean_instBEqExtraModUse_beq(v_k_3690_, v_k_x27_3693_);
if (v___x_3694_ == 0)
{
lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3695_ = lean_unsigned_to_nat(1u);
v___x_3696_ = lean_nat_add(v_i_3689_, v___x_3695_);
lean_dec(v_i_3689_);
v_i_3689_ = v___x_3696_;
goto _start;
}
else
{
lean_dec(v_i_3689_);
return v___x_3692_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg___boxed(lean_object* v_keys_3698_, lean_object* v_i_3699_, lean_object* v_k_3700_){
_start:
{
uint8_t v_res_3701_; lean_object* v_r_3702_; 
v_res_3701_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_3698_, v_i_3699_, v_k_3700_);
lean_dec_ref(v_k_3700_);
lean_dec_ref(v_keys_3698_);
v_r_3702_ = lean_box(v_res_3701_);
return v_r_3702_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(lean_object* v_x_3703_, size_t v_x_3704_, lean_object* v_x_3705_){
_start:
{
if (lean_obj_tag(v_x_3703_) == 0)
{
lean_object* v_es_3706_; lean_object* v___x_3707_; size_t v___x_3708_; size_t v___x_3709_; lean_object* v_j_3710_; lean_object* v___x_3711_; 
v_es_3706_ = lean_ctor_get(v_x_3703_, 0);
v___x_3707_ = lean_box(2);
v___x_3708_ = ((size_t)31ULL);
v___x_3709_ = lean_usize_land(v_x_3704_, v___x_3708_);
v_j_3710_ = lean_usize_to_nat(v___x_3709_);
v___x_3711_ = lean_array_get_borrowed(v___x_3707_, v_es_3706_, v_j_3710_);
lean_dec(v_j_3710_);
switch(lean_obj_tag(v___x_3711_))
{
case 0:
{
lean_object* v_key_3712_; uint8_t v___x_3713_; 
v_key_3712_ = lean_ctor_get(v___x_3711_, 0);
v___x_3713_ = l_Lean_instBEqExtraModUse_beq(v_x_3705_, v_key_3712_);
return v___x_3713_;
}
case 1:
{
lean_object* v_node_3714_; size_t v___x_3715_; size_t v___x_3716_; 
v_node_3714_ = lean_ctor_get(v___x_3711_, 0);
v___x_3715_ = ((size_t)5ULL);
v___x_3716_ = lean_usize_shift_right(v_x_3704_, v___x_3715_);
v_x_3703_ = v_node_3714_;
v_x_3704_ = v___x_3716_;
goto _start;
}
default: 
{
uint8_t v___x_3718_; 
v___x_3718_ = 0;
return v___x_3718_;
}
}
}
else
{
lean_object* v_ks_3719_; lean_object* v___x_3720_; uint8_t v___x_3721_; 
v_ks_3719_ = lean_ctor_get(v_x_3703_, 0);
v___x_3720_ = lean_unsigned_to_nat(0u);
v___x_3721_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_ks_3719_, v___x_3720_, v_x_3705_);
return v___x_3721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg___boxed(lean_object* v_x_3722_, lean_object* v_x_3723_, lean_object* v_x_3724_){
_start:
{
size_t v_x_52612__boxed_3725_; uint8_t v_res_3726_; lean_object* v_r_3727_; 
v_x_52612__boxed_3725_ = lean_unbox_usize(v_x_3723_);
lean_dec(v_x_3723_);
v_res_3726_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3722_, v_x_52612__boxed_3725_, v_x_3724_);
lean_dec_ref(v_x_3724_);
lean_dec_ref(v_x_3722_);
v_r_3727_ = lean_box(v_res_3726_);
return v_r_3727_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(lean_object* v_x_3728_, lean_object* v_x_3729_){
_start:
{
uint64_t v___x_3730_; size_t v___x_3731_; uint8_t v___x_3732_; 
v___x_3730_ = l_Lean_instHashableExtraModUse_hash(v_x_3729_);
v___x_3731_ = lean_uint64_to_usize(v___x_3730_);
v___x_3732_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3728_, v___x_3731_, v_x_3729_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg___boxed(lean_object* v_x_3733_, lean_object* v_x_3734_){
_start:
{
uint8_t v_res_3735_; lean_object* v_r_3736_; 
v_res_3735_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_3733_, v_x_3734_);
lean_dec_ref(v_x_3734_);
lean_dec_ref(v_x_3733_);
v_r_3736_ = lean_box(v_res_3735_);
return v_r_3736_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0(void){
_start:
{
lean_object* v___x_3737_; double v___x_3738_; 
v___x_3737_ = lean_unsigned_to_nat(0u);
v___x_3738_ = lean_float_of_nat(v___x_3737_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(lean_object* v_cls_3741_, lean_object* v_msg_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v___x_3746_; 
v___x_3746_ = l_Lean_Elab_Command_getRef___redArg(v___y_3743_);
if (lean_obj_tag(v___x_3746_) == 0)
{
lean_object* v_a_3747_; lean_object* v___x_3748_; lean_object* v_a_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3797_; 
v_a_3747_ = lean_ctor_get(v___x_3746_, 0);
lean_inc(v_a_3747_);
lean_dec_ref_known(v___x_3746_, 1);
v___x_3748_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_3742_, v___y_3744_);
v_a_3749_ = lean_ctor_get(v___x_3748_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3748_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3751_ = v___x_3748_;
v_isShared_3752_ = v_isSharedCheck_3797_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_a_3749_);
lean_dec(v___x_3748_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3797_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3753_; lean_object* v_traceState_3754_; lean_object* v_env_3755_; lean_object* v_messages_3756_; lean_object* v_scopes_3757_; lean_object* v_usedQuotCtxts_3758_; lean_object* v_nextMacroScope_3759_; lean_object* v_maxRecDepth_3760_; lean_object* v_ngen_3761_; lean_object* v_auxDeclNGen_3762_; lean_object* v_infoState_3763_; lean_object* v_snapshotTasks_3764_; lean_object* v_prevLinterStates_3765_; lean_object* v_codeQualityEntryTasks_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3796_; 
v___x_3753_ = lean_st_ref_take(v___y_3744_);
v_traceState_3754_ = lean_ctor_get(v___x_3753_, 9);
v_env_3755_ = lean_ctor_get(v___x_3753_, 0);
v_messages_3756_ = lean_ctor_get(v___x_3753_, 1);
v_scopes_3757_ = lean_ctor_get(v___x_3753_, 2);
v_usedQuotCtxts_3758_ = lean_ctor_get(v___x_3753_, 3);
v_nextMacroScope_3759_ = lean_ctor_get(v___x_3753_, 4);
v_maxRecDepth_3760_ = lean_ctor_get(v___x_3753_, 5);
v_ngen_3761_ = lean_ctor_get(v___x_3753_, 6);
v_auxDeclNGen_3762_ = lean_ctor_get(v___x_3753_, 7);
v_infoState_3763_ = lean_ctor_get(v___x_3753_, 8);
v_snapshotTasks_3764_ = lean_ctor_get(v___x_3753_, 10);
v_prevLinterStates_3765_ = lean_ctor_get(v___x_3753_, 11);
v_codeQualityEntryTasks_3766_ = lean_ctor_get(v___x_3753_, 12);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3753_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3768_ = v___x_3753_;
v_isShared_3769_ = v_isSharedCheck_3796_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3766_);
lean_inc(v_prevLinterStates_3765_);
lean_inc(v_snapshotTasks_3764_);
lean_inc(v_traceState_3754_);
lean_inc(v_infoState_3763_);
lean_inc(v_auxDeclNGen_3762_);
lean_inc(v_ngen_3761_);
lean_inc(v_maxRecDepth_3760_);
lean_inc(v_nextMacroScope_3759_);
lean_inc(v_usedQuotCtxts_3758_);
lean_inc(v_scopes_3757_);
lean_inc(v_messages_3756_);
lean_inc(v_env_3755_);
lean_dec(v___x_3753_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3796_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
uint64_t v_tid_3770_; lean_object* v_traces_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3795_; 
v_tid_3770_ = lean_ctor_get_uint64(v_traceState_3754_, sizeof(void*)*1);
v_traces_3771_ = lean_ctor_get(v_traceState_3754_, 0);
v_isSharedCheck_3795_ = !lean_is_exclusive(v_traceState_3754_);
if (v_isSharedCheck_3795_ == 0)
{
v___x_3773_ = v_traceState_3754_;
v_isShared_3774_ = v_isSharedCheck_3795_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_traces_3771_);
lean_dec(v_traceState_3754_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3795_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; double v___x_3777_; uint8_t v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3786_; 
v___x_3775_ = lean_box(0);
v___x_3776_ = lean_box(0);
v___x_3777_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0);
v___x_3778_ = 0;
v___x_3779_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3780_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3780_, 0, v_cls_3741_);
lean_ctor_set(v___x_3780_, 1, v___x_3776_);
lean_ctor_set(v___x_3780_, 2, v___x_3779_);
lean_ctor_set_float(v___x_3780_, sizeof(void*)*3, v___x_3777_);
lean_ctor_set_float(v___x_3780_, sizeof(void*)*3 + 8, v___x_3777_);
lean_ctor_set_uint8(v___x_3780_, sizeof(void*)*3 + 16, v___x_3778_);
v___x_3781_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1));
v___x_3782_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3780_);
lean_ctor_set(v___x_3782_, 1, v_a_3749_);
lean_ctor_set(v___x_3782_, 2, v___x_3781_);
v___x_3783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3783_, 0, v_a_3747_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = l_Lean_PersistentArray_push___redArg(v_traces_3771_, v___x_3783_);
if (v_isShared_3774_ == 0)
{
lean_ctor_set(v___x_3773_, 0, v___x_3784_);
v___x_3786_ = v___x_3773_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v___x_3784_);
lean_ctor_set_uint64(v_reuseFailAlloc_3794_, sizeof(void*)*1, v_tid_3770_);
v___x_3786_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
lean_object* v___x_3788_; 
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 9, v___x_3786_);
v___x_3788_ = v___x_3768_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_env_3755_);
lean_ctor_set(v_reuseFailAlloc_3793_, 1, v_messages_3756_);
lean_ctor_set(v_reuseFailAlloc_3793_, 2, v_scopes_3757_);
lean_ctor_set(v_reuseFailAlloc_3793_, 3, v_usedQuotCtxts_3758_);
lean_ctor_set(v_reuseFailAlloc_3793_, 4, v_nextMacroScope_3759_);
lean_ctor_set(v_reuseFailAlloc_3793_, 5, v_maxRecDepth_3760_);
lean_ctor_set(v_reuseFailAlloc_3793_, 6, v_ngen_3761_);
lean_ctor_set(v_reuseFailAlloc_3793_, 7, v_auxDeclNGen_3762_);
lean_ctor_set(v_reuseFailAlloc_3793_, 8, v_infoState_3763_);
lean_ctor_set(v_reuseFailAlloc_3793_, 9, v___x_3786_);
lean_ctor_set(v_reuseFailAlloc_3793_, 10, v_snapshotTasks_3764_);
lean_ctor_set(v_reuseFailAlloc_3793_, 11, v_prevLinterStates_3765_);
lean_ctor_set(v_reuseFailAlloc_3793_, 12, v_codeQualityEntryTasks_3766_);
v___x_3788_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
lean_object* v___x_3789_; lean_object* v___x_3791_; 
v___x_3789_ = lean_st_ref_put(v___y_3744_, v___x_3788_);
if (v_isShared_3752_ == 0)
{
lean_ctor_set(v___x_3751_, 0, v___x_3775_);
v___x_3791_ = v___x_3751_;
goto v_reusejp_3790_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v___x_3775_);
v___x_3791_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3790_;
}
v_reusejp_3790_:
{
return v___x_3791_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
lean_dec_ref(v_msg_3742_);
lean_dec(v_cls_3741_);
v_a_3798_ = lean_ctor_get(v___x_3746_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3746_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3746_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3746_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___boxed(lean_object* v_cls_3806_, lean_object* v_msg_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3806_, v_msg_3807_, v___y_3808_, v___y_3809_);
lean_dec(v___y_3809_);
lean_dec_ref(v___y_3808_);
return v_res_3811_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0(void){
_start:
{
lean_object* v___x_3812_; 
v___x_3812_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3812_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4(void){
_start:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3817_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3));
v___x_3818_ = l_Lean_stringToMessageData(v___x_3817_);
return v___x_3818_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6(void){
_start:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3820_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5));
v___x_3821_ = l_Lean_stringToMessageData(v___x_3820_);
return v___x_3821_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7(void){
_start:
{
lean_object* v___x_3822_; lean_object* v___x_3823_; 
v___x_3822_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3823_ = l_Lean_stringToMessageData(v___x_3822_);
return v___x_3823_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9(void){
_start:
{
lean_object* v_cls_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; 
v_cls_3826_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3827_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
v___x_3828_ = l_Lean_Name_append(v___x_3827_, v_cls_3826_);
return v___x_3828_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11(void){
_start:
{
lean_object* v___x_3830_; lean_object* v___x_3831_; 
v___x_3830_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10));
v___x_3831_ = l_Lean_stringToMessageData(v___x_3830_);
return v___x_3831_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13(void){
_start:
{
lean_object* v___x_3833_; lean_object* v___x_3834_; 
v___x_3833_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12));
v___x_3834_ = l_Lean_stringToMessageData(v___x_3833_);
return v___x_3834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(lean_object* v_mod_3839_, uint8_t v_isMeta_3840_, lean_object* v_hint_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_){
_start:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v_env_3847_; uint8_t v_isExporting_3848_; lean_object* v_entry_3849_; lean_object* v___x_3850_; lean_object* v_env_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___y_3856_; lean_object* v___x_3884_; uint8_t v___x_3885_; 
v___x_3845_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0);
v___x_3846_ = lean_st_ref_get(v___y_3843_);
v_env_3847_ = lean_ctor_get(v___x_3846_, 0);
lean_inc_ref(v_env_3847_);
lean_dec(v___x_3846_);
v_isExporting_3848_ = lean_ctor_get_uint8(v_env_3847_, sizeof(void*)*8);
lean_dec_ref(v_env_3847_);
lean_inc(v_mod_3839_);
v_entry_3849_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3849_, 0, v_mod_3839_);
lean_ctor_set_uint8(v_entry_3849_, sizeof(void*)*1, v_isExporting_3848_);
lean_ctor_set_uint8(v_entry_3849_, sizeof(void*)*1 + 1, v_isMeta_3840_);
v___x_3850_ = lean_st_ref_get(v___y_3843_);
v_env_3851_ = lean_ctor_get(v___x_3850_, 0);
lean_inc_ref(v_env_3851_);
lean_dec(v___x_3850_);
v___x_3852_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3853_ = lean_box(1);
v___x_3854_ = lean_box(0);
v___x_3884_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3845_, v___x_3852_, v_env_3851_, v___x_3853_, v___x_3854_);
v___x_3885_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v___x_3884_, v_entry_3849_);
lean_dec(v___x_3884_);
if (v___x_3885_ == 0)
{
lean_object* v_cls_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___y_3892_; lean_object* v___y_3893_; lean_object* v___y_3897_; lean_object* v___y_3898_; lean_object* v_scopes_3910_; lean_object* v___x_3911_; lean_object* v_opts_3912_; uint8_t v_hasTrace_3913_; 
v_cls_3886_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3887_ = l_Lean_inheritedTraceOptions;
v___x_3888_ = lean_st_ref_get(v___x_3887_);
v___x_3889_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3890_ = lean_st_ref_get(v___y_3843_);
v_scopes_3910_ = lean_ctor_get(v___x_3890_, 2);
lean_inc(v_scopes_3910_);
lean_dec(v___x_3890_);
v___x_3911_ = l_List_head_x21___redArg(v___x_3889_, v_scopes_3910_);
lean_dec(v_scopes_3910_);
v_opts_3912_ = lean_ctor_get(v___x_3911_, 1);
lean_inc_ref(v_opts_3912_);
lean_dec(v___x_3911_);
v_hasTrace_3913_ = lean_ctor_get_uint8(v_opts_3912_, sizeof(void*)*1);
if (v_hasTrace_3913_ == 0)
{
lean_dec_ref(v_opts_3912_);
lean_dec(v___x_3888_);
lean_dec(v_hint_3841_);
lean_dec(v_mod_3839_);
v___y_3856_ = v___y_3843_;
goto v___jp_3855_;
}
else
{
lean_object* v___x_3914_; uint8_t v___x_3915_; 
v___x_3914_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9);
v___x_3915_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3888_, v_opts_3912_, v___x_3914_);
lean_dec_ref(v_opts_3912_);
lean_dec(v___x_3888_);
if (v___x_3915_ == 0)
{
lean_dec(v_hint_3841_);
lean_dec(v_mod_3839_);
v___y_3856_ = v___y_3843_;
goto v___jp_3855_;
}
else
{
lean_object* v___x_3916_; lean_object* v___y_3918_; 
v___x_3916_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11);
if (v_isExporting_3848_ == 0)
{
lean_object* v___x_3925_; 
v___x_3925_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16));
v___y_3918_ = v___x_3925_;
goto v___jp_3917_;
}
else
{
lean_object* v___x_3926_; 
v___x_3926_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17));
v___y_3918_ = v___x_3926_;
goto v___jp_3917_;
}
v___jp_3917_:
{
lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; 
lean_inc_ref(v___y_3918_);
v___x_3919_ = l_Lean_stringToMessageData(v___y_3918_);
v___x_3920_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3916_);
lean_ctor_set(v___x_3920_, 1, v___x_3919_);
v___x_3921_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13);
v___x_3922_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3922_, 0, v___x_3920_);
lean_ctor_set(v___x_3922_, 1, v___x_3921_);
if (v_isMeta_3840_ == 0)
{
lean_object* v___x_3923_; 
v___x_3923_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14));
v___y_3897_ = v___x_3922_;
v___y_3898_ = v___x_3923_;
goto v___jp_3896_;
}
else
{
lean_object* v___x_3924_; 
v___x_3924_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15));
v___y_3897_ = v___x_3922_;
v___y_3898_ = v___x_3924_;
goto v___jp_3896_;
}
}
}
}
v___jp_3891_:
{
lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3894_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___y_3892_);
lean_ctor_set(v___x_3894_, 1, v___y_3893_);
v___x_3895_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3886_, v___x_3894_, v___y_3842_, v___y_3843_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_dec_ref_known(v___x_3895_, 1);
v___y_3856_ = v___y_3843_;
goto v___jp_3855_;
}
else
{
lean_dec_ref_known(v_entry_3849_, 1);
return v___x_3895_;
}
}
v___jp_3896_:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; uint8_t v___x_3905_; 
lean_inc_ref(v___y_3898_);
v___x_3899_ = l_Lean_stringToMessageData(v___y_3898_);
v___x_3900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3900_, 0, v___y_3897_);
lean_ctor_set(v___x_3900_, 1, v___x_3899_);
v___x_3901_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4);
v___x_3902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3902_, 0, v___x_3900_);
lean_ctor_set(v___x_3902_, 1, v___x_3901_);
v___x_3903_ = l_Lean_MessageData_ofName(v_mod_3839_);
v___x_3904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3902_);
lean_ctor_set(v___x_3904_, 1, v___x_3903_);
v___x_3905_ = l_Lean_Name_isAnonymous(v_hint_3841_);
if (v___x_3905_ == 0)
{
lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v___x_3906_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6);
v___x_3907_ = l_Lean_MessageData_ofName(v_hint_3841_);
v___x_3908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3908_, 0, v___x_3906_);
lean_ctor_set(v___x_3908_, 1, v___x_3907_);
v___y_3892_ = v___x_3904_;
v___y_3893_ = v___x_3908_;
goto v___jp_3891_;
}
else
{
lean_object* v___x_3909_; 
lean_dec(v_hint_3841_);
v___x_3909_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7);
v___y_3892_ = v___x_3904_;
v___y_3893_ = v___x_3909_;
goto v___jp_3891_;
}
}
}
else
{
lean_object* v___x_3927_; lean_object* v___x_3928_; 
lean_dec_ref_known(v_entry_3849_, 1);
lean_dec(v_hint_3841_);
lean_dec(v_mod_3839_);
v___x_3927_ = lean_box(0);
v___x_3928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3927_);
return v___x_3928_;
}
v___jp_3855_:
{
lean_object* v___x_3857_; lean_object* v_toEnvExtension_3858_; lean_object* v_env_3859_; lean_object* v_messages_3860_; lean_object* v_scopes_3861_; lean_object* v_usedQuotCtxts_3862_; lean_object* v_nextMacroScope_3863_; lean_object* v_maxRecDepth_3864_; lean_object* v_ngen_3865_; lean_object* v_auxDeclNGen_3866_; lean_object* v_infoState_3867_; lean_object* v_traceState_3868_; lean_object* v_snapshotTasks_3869_; lean_object* v_prevLinterStates_3870_; lean_object* v_codeQualityEntryTasks_3871_; lean_object* v___x_3873_; uint8_t v_isShared_3874_; uint8_t v_isSharedCheck_3883_; 
v___x_3857_ = lean_st_ref_take(v___y_3856_);
v_toEnvExtension_3858_ = lean_ctor_get(v___x_3852_, 0);
v_env_3859_ = lean_ctor_get(v___x_3857_, 0);
v_messages_3860_ = lean_ctor_get(v___x_3857_, 1);
v_scopes_3861_ = lean_ctor_get(v___x_3857_, 2);
v_usedQuotCtxts_3862_ = lean_ctor_get(v___x_3857_, 3);
v_nextMacroScope_3863_ = lean_ctor_get(v___x_3857_, 4);
v_maxRecDepth_3864_ = lean_ctor_get(v___x_3857_, 5);
v_ngen_3865_ = lean_ctor_get(v___x_3857_, 6);
v_auxDeclNGen_3866_ = lean_ctor_get(v___x_3857_, 7);
v_infoState_3867_ = lean_ctor_get(v___x_3857_, 8);
v_traceState_3868_ = lean_ctor_get(v___x_3857_, 9);
v_snapshotTasks_3869_ = lean_ctor_get(v___x_3857_, 10);
v_prevLinterStates_3870_ = lean_ctor_get(v___x_3857_, 11);
v_codeQualityEntryTasks_3871_ = lean_ctor_get(v___x_3857_, 12);
v_isSharedCheck_3883_ = !lean_is_exclusive(v___x_3857_);
if (v_isSharedCheck_3883_ == 0)
{
v___x_3873_ = v___x_3857_;
v_isShared_3874_ = v_isSharedCheck_3883_;
goto v_resetjp_3872_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3871_);
lean_inc(v_prevLinterStates_3870_);
lean_inc(v_snapshotTasks_3869_);
lean_inc(v_traceState_3868_);
lean_inc(v_infoState_3867_);
lean_inc(v_auxDeclNGen_3866_);
lean_inc(v_ngen_3865_);
lean_inc(v_maxRecDepth_3864_);
lean_inc(v_nextMacroScope_3863_);
lean_inc(v_usedQuotCtxts_3862_);
lean_inc(v_scopes_3861_);
lean_inc(v_messages_3860_);
lean_inc(v_env_3859_);
lean_dec(v___x_3857_);
v___x_3873_ = lean_box(0);
v_isShared_3874_ = v_isSharedCheck_3883_;
goto v_resetjp_3872_;
}
v_resetjp_3872_:
{
lean_object* v_asyncMode_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3879_; 
v_asyncMode_3875_ = lean_ctor_get(v_toEnvExtension_3858_, 2);
v___x_3876_ = lean_box(0);
v___x_3877_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3852_, v_env_3859_, v_entry_3849_, v_asyncMode_3875_, v___x_3854_);
if (v_isShared_3874_ == 0)
{
lean_ctor_set(v___x_3873_, 0, v___x_3877_);
v___x_3879_ = v___x_3873_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v___x_3877_);
lean_ctor_set(v_reuseFailAlloc_3882_, 1, v_messages_3860_);
lean_ctor_set(v_reuseFailAlloc_3882_, 2, v_scopes_3861_);
lean_ctor_set(v_reuseFailAlloc_3882_, 3, v_usedQuotCtxts_3862_);
lean_ctor_set(v_reuseFailAlloc_3882_, 4, v_nextMacroScope_3863_);
lean_ctor_set(v_reuseFailAlloc_3882_, 5, v_maxRecDepth_3864_);
lean_ctor_set(v_reuseFailAlloc_3882_, 6, v_ngen_3865_);
lean_ctor_set(v_reuseFailAlloc_3882_, 7, v_auxDeclNGen_3866_);
lean_ctor_set(v_reuseFailAlloc_3882_, 8, v_infoState_3867_);
lean_ctor_set(v_reuseFailAlloc_3882_, 9, v_traceState_3868_);
lean_ctor_set(v_reuseFailAlloc_3882_, 10, v_snapshotTasks_3869_);
lean_ctor_set(v_reuseFailAlloc_3882_, 11, v_prevLinterStates_3870_);
lean_ctor_set(v_reuseFailAlloc_3882_, 12, v_codeQualityEntryTasks_3871_);
v___x_3879_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; 
v___x_3880_ = lean_st_ref_put(v___y_3856_, v___x_3879_);
v___x_3881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3881_, 0, v___x_3876_);
return v___x_3881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___boxed(lean_object* v_mod_3929_, lean_object* v_isMeta_3930_, lean_object* v_hint_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_){
_start:
{
uint8_t v_isMeta_boxed_3935_; lean_object* v_res_3936_; 
v_isMeta_boxed_3935_ = lean_unbox(v_isMeta_3930_);
v_res_3936_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_mod_3929_, v_isMeta_boxed_3935_, v_hint_3931_, v___y_3932_, v___y_3933_);
lean_dec(v___y_3933_);
lean_dec_ref(v___y_3932_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(lean_object* v___x_3937_, lean_object* v_declName_3938_, lean_object* v_as_3939_, size_t v_sz_3940_, size_t v_i_3941_, lean_object* v_b_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_){
_start:
{
uint8_t v___x_3946_; 
v___x_3946_ = lean_usize_dec_lt(v_i_3941_, v_sz_3940_);
if (v___x_3946_ == 0)
{
lean_object* v___x_3947_; 
lean_dec(v_declName_3938_);
v___x_3947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3947_, 0, v_b_3942_);
return v___x_3947_;
}
else
{
lean_object* v___x_3948_; lean_object* v_modules_3949_; lean_object* v___x_3950_; lean_object* v_a_3951_; lean_object* v___x_3952_; lean_object* v_toImport_3953_; lean_object* v_module_3954_; lean_object* v___x_3955_; uint8_t v___x_3956_; lean_object* v___x_3957_; 
v___x_3948_ = l_Lean_Environment_header(v___x_3937_);
v_modules_3949_ = lean_ctor_get(v___x_3948_, 3);
lean_inc_ref(v_modules_3949_);
lean_dec_ref(v___x_3948_);
v___x_3950_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3951_ = lean_array_uget_borrowed(v_as_3939_, v_i_3941_);
v___x_3952_ = lean_array_get(v___x_3950_, v_modules_3949_, v_a_3951_);
lean_dec_ref(v_modules_3949_);
v_toImport_3953_ = lean_ctor_get(v___x_3952_, 0);
lean_inc_ref(v_toImport_3953_);
lean_dec(v___x_3952_);
v_module_3954_ = lean_ctor_get(v_toImport_3953_, 0);
lean_inc(v_module_3954_);
lean_dec_ref(v_toImport_3953_);
v___x_3955_ = lean_box(0);
v___x_3956_ = 0;
lean_inc(v_declName_3938_);
v___x_3957_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_3954_, v___x_3956_, v_declName_3938_, v___y_3943_, v___y_3944_);
if (lean_obj_tag(v___x_3957_) == 0)
{
size_t v___x_3958_; size_t v___x_3959_; 
lean_dec_ref_known(v___x_3957_, 1);
v___x_3958_ = ((size_t)1ULL);
v___x_3959_ = lean_usize_add(v_i_3941_, v___x_3958_);
v_i_3941_ = v___x_3959_;
v_b_3942_ = v___x_3955_;
goto _start;
}
else
{
lean_dec(v_declName_3938_);
return v___x_3957_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55___boxed(lean_object* v___x_3961_, lean_object* v_declName_3962_, lean_object* v_as_3963_, lean_object* v_sz_3964_, lean_object* v_i_3965_, lean_object* v_b_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_){
_start:
{
size_t v_sz_boxed_3970_; size_t v_i_boxed_3971_; lean_object* v_res_3972_; 
v_sz_boxed_3970_ = lean_unbox_usize(v_sz_3964_);
lean_dec(v_sz_3964_);
v_i_boxed_3971_ = lean_unbox_usize(v_i_3965_);
lean_dec(v_i_3965_);
v_res_3972_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v___x_3961_, v_declName_3962_, v_as_3963_, v_sz_boxed_3970_, v_i_boxed_3971_, v_b_3966_, v___y_3967_, v___y_3968_);
lean_dec(v___y_3968_);
lean_dec_ref(v___y_3967_);
lean_dec_ref(v_as_3963_);
lean_dec_ref(v___x_3961_);
return v_res_3972_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(lean_object* v_a_3973_, lean_object* v_x_3974_){
_start:
{
if (lean_obj_tag(v_x_3974_) == 0)
{
lean_object* v___x_3975_; 
v___x_3975_ = lean_box(0);
return v___x_3975_;
}
else
{
lean_object* v_key_3976_; lean_object* v_value_3977_; lean_object* v_tail_3978_; uint8_t v___x_3979_; 
v_key_3976_ = lean_ctor_get(v_x_3974_, 0);
v_value_3977_ = lean_ctor_get(v_x_3974_, 1);
v_tail_3978_ = lean_ctor_get(v_x_3974_, 2);
v___x_3979_ = lean_name_eq(v_key_3976_, v_a_3973_);
if (v___x_3979_ == 0)
{
v_x_3974_ = v_tail_3978_;
goto _start;
}
else
{
lean_object* v___x_3981_; 
lean_inc(v_value_3977_);
v___x_3981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3981_, 0, v_value_3977_);
return v___x_3981_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg___boxed(lean_object* v_a_3982_, lean_object* v_x_3983_){
_start:
{
lean_object* v_res_3984_; 
v_res_3984_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3982_, v_x_3983_);
lean_dec(v_x_3983_);
lean_dec(v_a_3982_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(lean_object* v_m_3985_, lean_object* v_a_3986_){
_start:
{
lean_object* v_buckets_3987_; lean_object* v___x_3988_; uint64_t v___y_3990_; 
v_buckets_3987_ = lean_ctor_get(v_m_3985_, 1);
v___x_3988_ = lean_array_get_size(v_buckets_3987_);
if (lean_obj_tag(v_a_3986_) == 0)
{
uint64_t v___x_4004_; 
v___x_4004_ = 1723ULL;
v___y_3990_ = v___x_4004_;
goto v___jp_3989_;
}
else
{
uint64_t v_hash_4005_; 
v_hash_4005_ = lean_ctor_get_uint64(v_a_3986_, sizeof(void*)*2);
v___y_3990_ = v_hash_4005_;
goto v___jp_3989_;
}
v___jp_3989_:
{
uint64_t v___x_3991_; uint64_t v___x_3992_; uint64_t v_fold_3993_; uint64_t v___x_3994_; uint64_t v___x_3995_; uint64_t v___x_3996_; size_t v___x_3997_; size_t v___x_3998_; size_t v___x_3999_; size_t v___x_4000_; size_t v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; 
v___x_3991_ = 32ULL;
v___x_3992_ = lean_uint64_shift_right(v___y_3990_, v___x_3991_);
v_fold_3993_ = lean_uint64_xor(v___y_3990_, v___x_3992_);
v___x_3994_ = 16ULL;
v___x_3995_ = lean_uint64_shift_right(v_fold_3993_, v___x_3994_);
v___x_3996_ = lean_uint64_xor(v_fold_3993_, v___x_3995_);
v___x_3997_ = lean_uint64_to_usize(v___x_3996_);
v___x_3998_ = lean_usize_of_nat(v___x_3988_);
v___x_3999_ = ((size_t)1ULL);
v___x_4000_ = lean_usize_sub(v___x_3998_, v___x_3999_);
v___x_4001_ = lean_usize_land(v___x_3997_, v___x_4000_);
v___x_4002_ = lean_array_uget_borrowed(v_buckets_3987_, v___x_4001_);
v___x_4003_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3986_, v___x_4002_);
return v___x_4003_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg___boxed(lean_object* v_m_4006_, lean_object* v_a_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_4006_, v_a_4007_);
lean_dec(v_a_4007_);
lean_dec_ref(v_m_4006_);
return v_res_4008_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0(void){
_start:
{
lean_object* v___x_4009_; 
v___x_4009_ = l_Std_HashMap_instInhabited___redArg();
return v___x_4009_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(lean_object* v_declName_4012_, uint8_t v_isMeta_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_){
_start:
{
lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v_env_4022_; lean_object* v___y_4024_; lean_object* v___x_4037_; 
v___x_4017_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0);
v___x_4018_ = lean_st_ref_get(v___y_4015_);
v_env_4022_ = lean_ctor_get(v___x_4018_, 0);
lean_inc_ref(v_env_4022_);
lean_dec(v___x_4018_);
v___x_4037_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4022_, v_declName_4012_);
if (lean_obj_tag(v___x_4037_) == 0)
{
lean_dec_ref(v_env_4022_);
lean_dec(v_declName_4012_);
goto v___jp_4019_;
}
else
{
lean_object* v_val_4038_; lean_object* v___x_4039_; lean_object* v_modules_4040_; lean_object* v___x_4041_; uint8_t v___x_4042_; 
v_val_4038_ = lean_ctor_get(v___x_4037_, 0);
lean_inc(v_val_4038_);
lean_dec_ref_known(v___x_4037_, 1);
v___x_4039_ = l_Lean_Environment_header(v_env_4022_);
v_modules_4040_ = lean_ctor_get(v___x_4039_, 3);
lean_inc_ref(v_modules_4040_);
lean_dec_ref(v___x_4039_);
v___x_4041_ = lean_array_get_size(v_modules_4040_);
v___x_4042_ = lean_nat_dec_lt(v_val_4038_, v___x_4041_);
if (v___x_4042_ == 0)
{
lean_dec_ref(v_modules_4040_);
lean_dec(v_val_4038_);
lean_dec_ref(v_env_4022_);
lean_dec(v_declName_4012_);
goto v___jp_4019_;
}
else
{
lean_object* v___x_4043_; lean_object* v___x_4044_; uint8_t v___y_4046_; 
v___x_4043_ = lean_array_fget(v_modules_4040_, v_val_4038_);
lean_dec(v_val_4038_);
lean_dec_ref(v_modules_4040_);
v___x_4044_ = lean_st_ref_get(v___y_4015_);
if (v_isMeta_4013_ == 0)
{
lean_dec(v___x_4044_);
v___y_4046_ = v_isMeta_4013_;
goto v___jp_4045_;
}
else
{
lean_object* v_env_4057_; uint8_t v___x_4058_; 
v_env_4057_ = lean_ctor_get(v___x_4044_, 0);
lean_inc_ref(v_env_4057_);
lean_dec(v___x_4044_);
lean_inc(v_declName_4012_);
v___x_4058_ = l_Lean_isMarkedMeta(v_env_4057_, v_declName_4012_);
if (v___x_4058_ == 0)
{
v___y_4046_ = v_isMeta_4013_;
goto v___jp_4045_;
}
else
{
uint8_t v___x_4059_; 
v___x_4059_ = 0;
v___y_4046_ = v___x_4059_;
goto v___jp_4045_;
}
}
v___jp_4045_:
{
lean_object* v_toImport_4047_; lean_object* v_module_4048_; lean_object* v___x_4049_; 
v_toImport_4047_ = lean_ctor_get(v___x_4043_, 0);
lean_inc_ref(v_toImport_4047_);
lean_dec(v___x_4043_);
v_module_4048_ = lean_ctor_get(v_toImport_4047_, 0);
lean_inc(v_module_4048_);
lean_dec_ref(v_toImport_4047_);
lean_inc(v_declName_4012_);
v___x_4049_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_4048_, v___y_4046_, v_declName_4012_, v___y_4014_, v___y_4015_);
if (lean_obj_tag(v___x_4049_) == 0)
{
lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
lean_dec_ref_known(v___x_4049_, 1);
v___x_4050_ = l_Lean_indirectModUseExt;
v___x_4051_ = lean_box(1);
v___x_4052_ = lean_box(0);
lean_inc_ref(v_env_4022_);
v___x_4053_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4017_, v___x_4050_, v_env_4022_, v___x_4051_, v___x_4052_);
v___x_4054_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v___x_4053_, v_declName_4012_);
lean_dec(v___x_4053_);
if (lean_obj_tag(v___x_4054_) == 0)
{
lean_object* v___x_4055_; 
v___x_4055_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1));
v___y_4024_ = v___x_4055_;
goto v___jp_4023_;
}
else
{
lean_object* v_val_4056_; 
v_val_4056_ = lean_ctor_get(v___x_4054_, 0);
lean_inc(v_val_4056_);
lean_dec_ref_known(v___x_4054_, 1);
v___y_4024_ = v_val_4056_;
goto v___jp_4023_;
}
}
else
{
lean_dec_ref(v_env_4022_);
lean_dec(v_declName_4012_);
return v___x_4049_;
}
}
}
}
v___jp_4019_:
{
lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4020_ = lean_box(0);
v___x_4021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4021_, 0, v___x_4020_);
return v___x_4021_;
}
v___jp_4023_:
{
lean_object* v___x_4025_; size_t v_sz_4026_; size_t v___x_4027_; lean_object* v___x_4028_; 
v___x_4025_ = lean_box(0);
v_sz_4026_ = lean_array_size(v___y_4024_);
v___x_4027_ = ((size_t)0ULL);
v___x_4028_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v_env_4022_, v_declName_4012_, v___y_4024_, v_sz_4026_, v___x_4027_, v___x_4025_, v___y_4014_, v___y_4015_);
lean_dec_ref(v___y_4024_);
lean_dec_ref(v_env_4022_);
if (lean_obj_tag(v___x_4028_) == 0)
{
lean_object* v___x_4030_; uint8_t v_isShared_4031_; uint8_t v_isSharedCheck_4035_; 
v_isSharedCheck_4035_ = !lean_is_exclusive(v___x_4028_);
if (v_isSharedCheck_4035_ == 0)
{
lean_object* v_unused_4036_; 
v_unused_4036_ = lean_ctor_get(v___x_4028_, 0);
lean_dec(v_unused_4036_);
v___x_4030_ = v___x_4028_;
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
else
{
lean_dec(v___x_4028_);
v___x_4030_ = lean_box(0);
v_isShared_4031_ = v_isSharedCheck_4035_;
goto v_resetjp_4029_;
}
v_resetjp_4029_:
{
lean_object* v___x_4033_; 
if (v_isShared_4031_ == 0)
{
lean_ctor_set(v___x_4030_, 0, v___x_4025_);
v___x_4033_ = v___x_4030_;
goto v_reusejp_4032_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v___x_4025_);
v___x_4033_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4032_;
}
v_reusejp_4032_:
{
return v___x_4033_;
}
}
}
else
{
return v___x_4028_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___boxed(lean_object* v_declName_4060_, lean_object* v_isMeta_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_){
_start:
{
uint8_t v_isMeta_boxed_4065_; lean_object* v_res_4066_; 
v_isMeta_boxed_4065_ = lean_unbox(v_isMeta_4061_);
v_res_4066_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_declName_4060_, v_isMeta_boxed_4065_, v___y_4062_, v___y_4063_);
lean_dec(v___y_4063_);
lean_dec_ref(v___y_4062_);
return v_res_4066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(lean_object* v_currNamespace_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_){
_start:
{
lean_object* v___x_4070_; 
v___x_4070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4070_, 0, v_currNamespace_4067_);
lean_ctor_set(v___x_4070_, 1, v___y_4069_);
return v___x_4070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed(lean_object* v_currNamespace_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_){
_start:
{
lean_object* v_res_4074_; 
v_res_4074_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(v_currNamespace_4071_, v___y_4072_, v___y_4073_);
lean_dec_ref(v___y_4072_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(lean_object* v_env_4075_, lean_object* v_declName_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_){
_start:
{
uint8_t v___x_4079_; lean_object* v_env_4080_; lean_object* v___x_4081_; uint8_t v___x_4082_; uint8_t v___x_4083_; 
v___x_4079_ = 0;
v_env_4080_ = l_Lean_Environment_setExporting(v_env_4075_, v___x_4079_);
lean_inc(v_declName_4076_);
v___x_4081_ = l_Lean_mkPrivateName(v_env_4080_, v_declName_4076_);
v___x_4082_ = 1;
lean_inc_ref(v_env_4080_);
v___x_4083_ = l_Lean_Environment_contains(v_env_4080_, v___x_4081_, v___x_4082_);
if (v___x_4083_ == 0)
{
lean_object* v___x_4084_; uint8_t v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v___x_4084_ = l_Lean_privateToUserName(v_declName_4076_);
v___x_4085_ = l_Lean_Environment_contains(v_env_4080_, v___x_4084_, v___x_4082_);
v___x_4086_ = lean_box(v___x_4085_);
v___x_4087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4087_, 0, v___x_4086_);
lean_ctor_set(v___x_4087_, 1, v___y_4078_);
return v___x_4087_;
}
else
{
lean_object* v___x_4088_; lean_object* v___x_4089_; 
lean_dec_ref(v_env_4080_);
lean_dec(v_declName_4076_);
v___x_4088_ = lean_box(v___x_4083_);
v___x_4089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
lean_ctor_set(v___x_4089_, 1, v___y_4078_);
return v___x_4089_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed(lean_object* v_env_4090_, lean_object* v_declName_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_){
_start:
{
lean_object* v_res_4094_; 
v_res_4094_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(v_env_4090_, v_declName_4091_, v___y_4092_, v___y_4093_);
lean_dec_ref(v___y_4092_);
return v_res_4094_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0(void){
_start:
{
lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; 
v___x_4095_ = lean_box(0);
v___x_4096_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4097_, 0, v___x_4096_);
lean_ctor_set(v___x_4097_, 1, v___x_4095_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg(){
_start:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; 
v___x_4099_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0);
v___x_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4100_, 0, v___x_4099_);
return v___x_4100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___boxed(lean_object* v___y_4101_){
_start:
{
lean_object* v_res_4102_; 
v_res_4102_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v_res_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(lean_object* v_env_4103_, lean_object* v_opts_4104_, lean_object* v_currNamespace_4105_, lean_object* v_openDecls_4106_, lean_object* v_n_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4110_ = l_Lean_ResolveName_resolveGlobalName(v_env_4103_, v_opts_4104_, v_currNamespace_4105_, v_openDecls_4106_, v_n_4107_);
v___x_4111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4111_, 0, v___x_4110_);
lean_ctor_set(v___x_4111_, 1, v___y_4109_);
return v___x_4111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed(lean_object* v_env_4112_, lean_object* v_opts_4113_, lean_object* v_currNamespace_4114_, lean_object* v_openDecls_4115_, lean_object* v_n_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_){
_start:
{
lean_object* v_res_4119_; 
v_res_4119_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(v_env_4112_, v_opts_4113_, v_currNamespace_4114_, v_openDecls_4115_, v_n_4116_, v___y_4117_, v___y_4118_);
lean_dec_ref(v___y_4117_);
lean_dec_ref(v_opts_4113_);
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(lean_object* v_as_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_){
_start:
{
if (lean_obj_tag(v_as_4120_) == 0)
{
lean_object* v___x_4124_; lean_object* v___x_4125_; 
v___x_4124_ = lean_box(0);
v___x_4125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4125_, 0, v___x_4124_);
return v___x_4125_;
}
else
{
lean_object* v_head_4126_; lean_object* v_tail_4127_; lean_object* v_fst_4128_; lean_object* v_snd_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v_scopes_4134_; lean_object* v___x_4135_; lean_object* v_opts_4136_; uint8_t v_hasTrace_4137_; 
v_head_4126_ = lean_ctor_get(v_as_4120_, 0);
lean_inc(v_head_4126_);
v_tail_4127_ = lean_ctor_get(v_as_4120_, 1);
lean_inc(v_tail_4127_);
lean_dec_ref_known(v_as_4120_, 2);
v_fst_4128_ = lean_ctor_get(v_head_4126_, 0);
lean_inc(v_fst_4128_);
v_snd_4129_ = lean_ctor_get(v_head_4126_, 1);
lean_inc(v_snd_4129_);
lean_dec(v_head_4126_);
v___x_4130_ = l_Lean_inheritedTraceOptions;
v___x_4131_ = lean_st_ref_get(v___x_4130_);
v___x_4132_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4133_ = lean_st_ref_get(v___y_4122_);
v_scopes_4134_ = lean_ctor_get(v___x_4133_, 2);
lean_inc(v_scopes_4134_);
lean_dec(v___x_4133_);
v___x_4135_ = l_List_head_x21___redArg(v___x_4132_, v_scopes_4134_);
lean_dec(v_scopes_4134_);
v_opts_4136_ = lean_ctor_get(v___x_4135_, 1);
lean_inc_ref(v_opts_4136_);
lean_dec(v___x_4135_);
v_hasTrace_4137_ = lean_ctor_get_uint8(v_opts_4136_, sizeof(void*)*1);
if (v_hasTrace_4137_ == 0)
{
lean_dec_ref(v_opts_4136_);
lean_dec(v___x_4131_);
lean_dec(v_snd_4129_);
lean_dec(v_fst_4128_);
v_as_4120_ = v_tail_4127_;
goto _start;
}
else
{
lean_object* v___x_4139_; lean_object* v___x_4140_; uint8_t v___x_4141_; 
v___x_4139_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
lean_inc(v_fst_4128_);
v___x_4140_ = l_Lean_Name_append(v___x_4139_, v_fst_4128_);
v___x_4141_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4131_, v_opts_4136_, v___x_4140_);
lean_dec(v___x_4140_);
lean_dec_ref(v_opts_4136_);
lean_dec(v___x_4131_);
if (v___x_4141_ == 0)
{
lean_dec(v_snd_4129_);
lean_dec(v_fst_4128_);
v_as_4120_ = v_tail_4127_;
goto _start;
}
else
{
lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4143_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4143_, 0, v_snd_4129_);
v___x_4144_ = l_Lean_MessageData_ofFormat(v___x_4143_);
v___x_4145_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_fst_4128_, v___x_4144_, v___y_4121_, v___y_4122_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_dec_ref_known(v___x_4145_, 1);
v_as_4120_ = v_tail_4127_;
goto _start;
}
else
{
lean_dec(v_tail_4127_);
return v___x_4145_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50___boxed(lean_object* v_as_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v_as_4147_, v___y_4148_, v___y_4149_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(lean_object* v_x_4152_, lean_object* v___y_4153_){
_start:
{
if (lean_obj_tag(v_x_4152_) == 0)
{
lean_object* v_a_4154_; lean_object* v___x_4155_; 
v_a_4154_ = lean_ctor_get(v_x_4152_, 0);
lean_inc(v_a_4154_);
v___x_4155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4155_, 0, v_a_4154_);
lean_ctor_set(v___x_4155_, 1, v___y_4153_);
return v___x_4155_;
}
else
{
lean_object* v_a_4156_; lean_object* v___x_4157_; 
v_a_4156_ = lean_ctor_get(v_x_4152_, 0);
lean_inc(v_a_4156_);
v___x_4157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4157_, 0, v_a_4156_);
lean_ctor_set(v___x_4157_, 1, v___y_4153_);
return v___x_4157_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg___boxed(lean_object* v_x_4158_, lean_object* v___y_4159_){
_start:
{
lean_object* v_res_4160_; 
v_res_4160_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_4158_, v___y_4159_);
lean_dec_ref(v_x_4158_);
return v_res_4160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(lean_object* v_env_4161_, lean_object* v_stx_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_4161_, v_stx_4162_, v___y_4163_, v___y_4164_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_a_4166_; 
v_a_4166_ = lean_ctor_get(v___x_4165_, 0);
lean_inc(v_a_4166_);
if (lean_obj_tag(v_a_4166_) == 0)
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4175_; 
v_a_4167_ = lean_ctor_get(v___x_4165_, 1);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4175_ == 0)
{
lean_object* v_unused_4176_; 
v_unused_4176_ = lean_ctor_get(v___x_4165_, 0);
lean_dec(v_unused_4176_);
v___x_4169_ = v___x_4165_;
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4165_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4175_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4171_; lean_object* v___x_4173_; 
v___x_4171_ = lean_box(0);
if (v_isShared_4170_ == 0)
{
lean_ctor_set(v___x_4169_, 0, v___x_4171_);
v___x_4173_ = v___x_4169_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v___x_4171_);
lean_ctor_set(v_reuseFailAlloc_4174_, 1, v_a_4167_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
else
{
lean_object* v_val_4177_; lean_object* v___x_4179_; uint8_t v_isShared_4180_; uint8_t v_isSharedCheck_4205_; 
v_val_4177_ = lean_ctor_get(v_a_4166_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v_a_4166_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4179_ = v_a_4166_;
v_isShared_4180_ = v_isSharedCheck_4205_;
goto v_resetjp_4178_;
}
else
{
lean_inc(v_val_4177_);
lean_dec(v_a_4166_);
v___x_4179_ = lean_box(0);
v_isShared_4180_ = v_isSharedCheck_4205_;
goto v_resetjp_4178_;
}
v_resetjp_4178_:
{
lean_object* v_snd_4181_; 
v_snd_4181_ = lean_ctor_get(v_val_4177_, 1);
lean_inc(v_snd_4181_);
lean_dec(v_val_4177_);
if (lean_obj_tag(v_snd_4181_) == 0)
{
lean_object* v_a_4182_; lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4191_; 
lean_del_object(v___x_4179_);
v_a_4182_ = lean_ctor_get(v___x_4165_, 1);
lean_inc(v_a_4182_);
lean_dec_ref_known(v___x_4165_, 2);
v_a_4183_ = lean_ctor_get(v_snd_4181_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v_snd_4181_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4185_ = v_snd_4181_;
v_isShared_4186_ = v_isSharedCheck_4191_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v_snd_4181_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4191_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4188_; 
if (v_isShared_4186_ == 0)
{
v___x_4188_ = v___x_4185_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v_a_4183_);
v___x_4188_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
lean_object* v___x_4189_; 
v___x_4189_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4188_, v_a_4182_);
lean_dec_ref(v___x_4188_);
return v___x_4189_;
}
}
}
else
{
lean_object* v_a_4192_; lean_object* v_a_4193_; lean_object* v___x_4195_; uint8_t v_isShared_4196_; uint8_t v_isSharedCheck_4204_; 
v_a_4192_ = lean_ctor_get(v___x_4165_, 1);
lean_inc(v_a_4192_);
lean_dec_ref_known(v___x_4165_, 2);
v_a_4193_ = lean_ctor_get(v_snd_4181_, 0);
v_isSharedCheck_4204_ = !lean_is_exclusive(v_snd_4181_);
if (v_isSharedCheck_4204_ == 0)
{
v___x_4195_ = v_snd_4181_;
v_isShared_4196_ = v_isSharedCheck_4204_;
goto v_resetjp_4194_;
}
else
{
lean_inc(v_a_4193_);
lean_dec(v_snd_4181_);
v___x_4195_ = lean_box(0);
v_isShared_4196_ = v_isSharedCheck_4204_;
goto v_resetjp_4194_;
}
v_resetjp_4194_:
{
lean_object* v___x_4198_; 
if (v_isShared_4180_ == 0)
{
lean_ctor_set(v___x_4179_, 0, v_a_4193_);
v___x_4198_ = v___x_4179_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4203_; 
v_reuseFailAlloc_4203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4203_, 0, v_a_4193_);
v___x_4198_ = v_reuseFailAlloc_4203_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
lean_object* v___x_4200_; 
if (v_isShared_4196_ == 0)
{
lean_ctor_set(v___x_4195_, 0, v___x_4198_);
v___x_4200_ = v___x_4195_;
goto v_reusejp_4199_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v___x_4198_);
v___x_4200_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4199_;
}
v_reusejp_4199_:
{
lean_object* v___x_4201_; 
v___x_4201_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4200_, v_a_4192_);
lean_dec_ref(v___x_4200_);
return v___x_4201_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v_a_4207_; lean_object* v___x_4209_; uint8_t v_isShared_4210_; uint8_t v_isSharedCheck_4214_; 
v_a_4206_ = lean_ctor_get(v___x_4165_, 0);
v_a_4207_ = lean_ctor_get(v___x_4165_, 1);
v_isSharedCheck_4214_ = !lean_is_exclusive(v___x_4165_);
if (v_isSharedCheck_4214_ == 0)
{
v___x_4209_ = v___x_4165_;
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
else
{
lean_inc(v_a_4207_);
lean_inc(v_a_4206_);
lean_dec(v___x_4165_);
v___x_4209_ = lean_box(0);
v_isShared_4210_ = v_isSharedCheck_4214_;
goto v_resetjp_4208_;
}
v_resetjp_4208_:
{
lean_object* v___x_4212_; 
if (v_isShared_4210_ == 0)
{
v___x_4212_ = v___x_4209_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4206_);
lean_ctor_set(v_reuseFailAlloc_4213_, 1, v_a_4207_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
return v___x_4212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed(lean_object* v_env_4215_, lean_object* v_stx_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_){
_start:
{
lean_object* v_res_4219_; 
v_res_4219_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(v_env_4215_, v_stx_4216_, v___y_4217_, v___y_4218_);
lean_dec_ref(v___y_4217_);
return v_res_4219_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3(void){
_start:
{
lean_object* v___x_4225_; lean_object* v___x_4226_; 
v___x_4225_ = l_Lean_maxRecDepthErrorMessage;
v___x_4226_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4225_);
return v___x_4226_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4(void){
_start:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4227_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3);
v___x_4228_ = l_Lean_MessageData_ofFormat(v___x_4227_);
return v___x_4228_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5(void){
_start:
{
lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; 
v___x_4229_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4);
v___x_4230_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2));
v___x_4231_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4231_, 0, v___x_4230_);
lean_ctor_set(v___x_4231_, 1, v___x_4229_);
return v___x_4231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(lean_object* v_ref_4232_){
_start:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4234_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5);
v___x_4235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4235_, 0, v_ref_4232_);
lean_ctor_set(v___x_4235_, 1, v___x_4234_);
v___x_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4236_, 0, v___x_4235_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___boxed(lean_object* v_ref_4237_, lean_object* v___y_4238_){
_start:
{
lean_object* v_res_4239_; 
v_res_4239_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_4237_);
return v_res_4239_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(lean_object* v_as_x27_4240_, lean_object* v_b_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_){
_start:
{
if (lean_obj_tag(v_as_x27_4240_) == 0)
{
lean_object* v___x_4245_; 
v___x_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4245_, 0, v_b_4241_);
return v___x_4245_;
}
else
{
lean_object* v_head_4246_; lean_object* v_tail_4247_; lean_object* v___x_4248_; uint8_t v___x_4249_; lean_object* v___x_4250_; 
v_head_4246_ = lean_ctor_get(v_as_x27_4240_, 0);
v_tail_4247_ = lean_ctor_get(v_as_x27_4240_, 1);
v___x_4248_ = lean_box(0);
v___x_4249_ = 1;
lean_inc(v_head_4246_);
v___x_4250_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_head_4246_, v___x_4249_, v___y_4242_, v___y_4243_);
if (lean_obj_tag(v___x_4250_) == 0)
{
lean_dec_ref_known(v___x_4250_, 1);
v_as_x27_4240_ = v_tail_4247_;
v_b_4241_ = v___x_4248_;
goto _start;
}
else
{
return v___x_4250_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg___boxed(lean_object* v_as_x27_4252_, lean_object* v_b_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_){
_start:
{
lean_object* v_res_4257_; 
v_res_4257_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_4252_, v_b_4253_, v___y_4254_, v___y_4255_);
lean_dec(v___y_4255_);
lean_dec_ref(v___y_4254_);
lean_dec(v_as_x27_4252_);
return v_res_4257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(lean_object* v_env_4258_, lean_object* v_currNamespace_4259_, lean_object* v_openDecls_4260_, lean_object* v_n_4261_, lean_object* v___y_4262_, lean_object* v___y_4263_){
_start:
{
lean_object* v___x_4264_; lean_object* v___x_4265_; 
v___x_4264_ = l_Lean_ResolveName_resolveNamespace(v_env_4258_, v_currNamespace_4259_, v_openDecls_4260_, v_n_4261_);
v___x_4265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4265_, 0, v___x_4264_);
lean_ctor_set(v___x_4265_, 1, v___y_4263_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed(lean_object* v_env_4266_, lean_object* v_currNamespace_4267_, lean_object* v_openDecls_4268_, lean_object* v_n_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(v_env_4266_, v_currNamespace_4267_, v_openDecls_4268_, v_n_4269_, v___y_4270_, v___y_4271_);
lean_dec_ref(v___y_4270_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(lean_object* v_x_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
lean_object* v___x_4278_; lean_object* v_env_4279_; lean_object* v___f_4280_; lean_object* v___f_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v_scopes_4284_; lean_object* v___x_4285_; lean_object* v_opts_4286_; lean_object* v___x_4287_; 
v___x_4278_ = lean_st_ref_get(v___y_4276_);
v_env_4279_ = lean_ctor_get(v___x_4278_, 0);
lean_inc_ref_n(v_env_4279_, 3);
lean_dec(v___x_4278_);
v___f_4280_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_4280_, 0, v_env_4279_);
v___f_4281_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_4281_, 0, v_env_4279_);
v___x_4282_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4283_ = lean_st_ref_get(v___y_4276_);
v_scopes_4284_ = lean_ctor_get(v___x_4283_, 2);
lean_inc(v_scopes_4284_);
lean_dec(v___x_4283_);
v___x_4285_ = l_List_head_x21___redArg(v___x_4282_, v_scopes_4284_);
lean_dec(v_scopes_4284_);
v_opts_4286_ = lean_ctor_get(v___x_4285_, 1);
lean_inc_ref(v_opts_4286_);
lean_dec(v___x_4285_);
v___x_4287_ = l_Lean_Elab_Command_getScope___redArg(v___y_4276_);
if (lean_obj_tag(v___x_4287_) == 0)
{
lean_object* v_a_4288_; lean_object* v_currNamespace_4289_; lean_object* v___f_4290_; lean_object* v___x_4291_; 
v_a_4288_ = lean_ctor_get(v___x_4287_, 0);
lean_inc(v_a_4288_);
lean_dec_ref_known(v___x_4287_, 1);
v_currNamespace_4289_ = lean_ctor_get(v_a_4288_, 2);
lean_inc_n(v_currNamespace_4289_, 2);
lean_dec(v_a_4288_);
v___f_4290_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4290_, 0, v_currNamespace_4289_);
v___x_4291_ = l_Lean_Elab_Command_getScope___redArg(v___y_4276_);
if (lean_obj_tag(v___x_4291_) == 0)
{
lean_object* v_a_4292_; lean_object* v_openDecls_4293_; lean_object* v___f_4294_; lean_object* v___f_4295_; lean_object* v_methods_4296_; lean_object* v___x_4297_; 
v_a_4292_ = lean_ctor_get(v___x_4291_, 0);
lean_inc(v_a_4292_);
lean_dec_ref_known(v___x_4291_, 1);
v_openDecls_4293_ = lean_ctor_get(v_a_4292_, 3);
lean_inc_n(v_openDecls_4293_, 2);
lean_dec(v_a_4292_);
lean_inc(v_currNamespace_4289_);
lean_inc_ref(v_env_4279_);
v___f_4294_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_4294_, 0, v_env_4279_);
lean_closure_set(v___f_4294_, 1, v_currNamespace_4289_);
lean_closure_set(v___f_4294_, 2, v_openDecls_4293_);
v___f_4295_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_4295_, 0, v_env_4279_);
lean_closure_set(v___f_4295_, 1, v_opts_4286_);
lean_closure_set(v___f_4295_, 2, v_currNamespace_4289_);
lean_closure_set(v___f_4295_, 3, v_openDecls_4293_);
v_methods_4296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_4296_, 0, v___f_4281_);
lean_ctor_set(v_methods_4296_, 1, v___f_4290_);
lean_ctor_set(v_methods_4296_, 2, v___f_4280_);
lean_ctor_set(v_methods_4296_, 3, v___f_4294_);
lean_ctor_set(v_methods_4296_, 4, v___f_4295_);
v___x_4297_ = l_Lean_Elab_Command_getRef___redArg(v___y_4275_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v_a_4298_; lean_object* v___x_4299_; 
v_a_4298_ = lean_ctor_get(v___x_4297_, 0);
lean_inc(v_a_4298_);
lean_dec_ref_known(v___x_4297_, 1);
v___x_4299_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_4275_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_a_4300_; lean_object* v_currRecDepth_4301_; lean_object* v_quotContext_x3f_4302_; lean_object* v_a_4304_; 
v_a_4300_ = lean_ctor_get(v___x_4299_, 0);
lean_inc(v_a_4300_);
lean_dec_ref_known(v___x_4299_, 1);
v_currRecDepth_4301_ = lean_ctor_get(v___y_4275_, 2);
v_quotContext_x3f_4302_ = lean_ctor_get(v___y_4275_, 5);
if (lean_obj_tag(v_quotContext_x3f_4302_) == 0)
{
lean_object* v___x_4378_; lean_object* v_a_4379_; 
v___x_4378_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_4276_);
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
lean_dec_ref(v___x_4378_);
v_a_4304_ = v_a_4379_;
goto v___jp_4303_;
}
else
{
lean_object* v_val_4380_; 
v_val_4380_ = lean_ctor_get(v_quotContext_x3f_4302_, 0);
lean_inc(v_val_4380_);
v_a_4304_ = v_val_4380_;
goto v___jp_4303_;
}
v___jp_4303_:
{
lean_object* v___x_4305_; lean_object* v_maxRecDepth_4306_; lean_object* v___x_4307_; lean_object* v_nextMacroScope_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; 
v___x_4305_ = lean_st_ref_get(v___y_4276_);
v_maxRecDepth_4306_ = lean_ctor_get(v___x_4305_, 5);
lean_inc(v_maxRecDepth_4306_);
lean_dec(v___x_4305_);
v___x_4307_ = lean_st_ref_get(v___y_4276_);
v_nextMacroScope_4308_ = lean_ctor_get(v___x_4307_, 4);
lean_inc(v_nextMacroScope_4308_);
lean_dec(v___x_4307_);
lean_inc(v_currRecDepth_4301_);
v___x_4309_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4309_, 0, v_methods_4296_);
lean_ctor_set(v___x_4309_, 1, v_a_4304_);
lean_ctor_set(v___x_4309_, 2, v_a_4300_);
lean_ctor_set(v___x_4309_, 3, v_currRecDepth_4301_);
lean_ctor_set(v___x_4309_, 4, v_maxRecDepth_4306_);
lean_ctor_set(v___x_4309_, 5, v_a_4298_);
v___x_4310_ = lean_box(0);
v___x_4311_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4311_, 0, v_nextMacroScope_4308_);
lean_ctor_set(v___x_4311_, 1, v___x_4310_);
lean_ctor_set(v___x_4311_, 2, v___x_4310_);
v___x_4312_ = lean_apply_2(v_x_4274_, v___x_4309_, v___x_4311_);
if (lean_obj_tag(v___x_4312_) == 0)
{
lean_object* v_a_4313_; lean_object* v_a_4314_; lean_object* v_macroScope_4315_; lean_object* v_traceMsgs_4316_; lean_object* v_expandedMacroDecls_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; 
v_a_4313_ = lean_ctor_get(v___x_4312_, 1);
lean_inc(v_a_4313_);
v_a_4314_ = lean_ctor_get(v___x_4312_, 0);
lean_inc(v_a_4314_);
lean_dec_ref_known(v___x_4312_, 2);
v_macroScope_4315_ = lean_ctor_get(v_a_4313_, 0);
lean_inc(v_macroScope_4315_);
v_traceMsgs_4316_ = lean_ctor_get(v_a_4313_, 1);
lean_inc(v_traceMsgs_4316_);
v_expandedMacroDecls_4317_ = lean_ctor_get(v_a_4313_, 2);
lean_inc(v_expandedMacroDecls_4317_);
lean_dec(v_a_4313_);
v___x_4318_ = lean_box(0);
v___x_4319_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_expandedMacroDecls_4317_, v___x_4318_, v___y_4275_, v___y_4276_);
lean_dec(v_expandedMacroDecls_4317_);
if (lean_obj_tag(v___x_4319_) == 0)
{
lean_object* v___x_4320_; lean_object* v_env_4321_; lean_object* v_messages_4322_; lean_object* v_scopes_4323_; lean_object* v_usedQuotCtxts_4324_; lean_object* v_maxRecDepth_4325_; lean_object* v_ngen_4326_; lean_object* v_auxDeclNGen_4327_; lean_object* v_infoState_4328_; lean_object* v_traceState_4329_; lean_object* v_snapshotTasks_4330_; lean_object* v_prevLinterStates_4331_; lean_object* v_codeQualityEntryTasks_4332_; lean_object* v___x_4334_; uint8_t v_isShared_4335_; uint8_t v_isSharedCheck_4358_; 
lean_dec_ref_known(v___x_4319_, 1);
v___x_4320_ = lean_st_ref_take(v___y_4276_);
v_env_4321_ = lean_ctor_get(v___x_4320_, 0);
v_messages_4322_ = lean_ctor_get(v___x_4320_, 1);
v_scopes_4323_ = lean_ctor_get(v___x_4320_, 2);
v_usedQuotCtxts_4324_ = lean_ctor_get(v___x_4320_, 3);
v_maxRecDepth_4325_ = lean_ctor_get(v___x_4320_, 5);
v_ngen_4326_ = lean_ctor_get(v___x_4320_, 6);
v_auxDeclNGen_4327_ = lean_ctor_get(v___x_4320_, 7);
v_infoState_4328_ = lean_ctor_get(v___x_4320_, 8);
v_traceState_4329_ = lean_ctor_get(v___x_4320_, 9);
v_snapshotTasks_4330_ = lean_ctor_get(v___x_4320_, 10);
v_prevLinterStates_4331_ = lean_ctor_get(v___x_4320_, 11);
v_codeQualityEntryTasks_4332_ = lean_ctor_get(v___x_4320_, 12);
v_isSharedCheck_4358_ = !lean_is_exclusive(v___x_4320_);
if (v_isSharedCheck_4358_ == 0)
{
lean_object* v_unused_4359_; 
v_unused_4359_ = lean_ctor_get(v___x_4320_, 4);
lean_dec(v_unused_4359_);
v___x_4334_ = v___x_4320_;
v_isShared_4335_ = v_isSharedCheck_4358_;
goto v_resetjp_4333_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4332_);
lean_inc(v_prevLinterStates_4331_);
lean_inc(v_snapshotTasks_4330_);
lean_inc(v_traceState_4329_);
lean_inc(v_infoState_4328_);
lean_inc(v_auxDeclNGen_4327_);
lean_inc(v_ngen_4326_);
lean_inc(v_maxRecDepth_4325_);
lean_inc(v_usedQuotCtxts_4324_);
lean_inc(v_scopes_4323_);
lean_inc(v_messages_4322_);
lean_inc(v_env_4321_);
lean_dec(v___x_4320_);
v___x_4334_ = lean_box(0);
v_isShared_4335_ = v_isSharedCheck_4358_;
goto v_resetjp_4333_;
}
v_resetjp_4333_:
{
lean_object* v___x_4337_; 
if (v_isShared_4335_ == 0)
{
lean_ctor_set(v___x_4334_, 4, v_macroScope_4315_);
v___x_4337_ = v___x_4334_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v_env_4321_);
lean_ctor_set(v_reuseFailAlloc_4357_, 1, v_messages_4322_);
lean_ctor_set(v_reuseFailAlloc_4357_, 2, v_scopes_4323_);
lean_ctor_set(v_reuseFailAlloc_4357_, 3, v_usedQuotCtxts_4324_);
lean_ctor_set(v_reuseFailAlloc_4357_, 4, v_macroScope_4315_);
lean_ctor_set(v_reuseFailAlloc_4357_, 5, v_maxRecDepth_4325_);
lean_ctor_set(v_reuseFailAlloc_4357_, 6, v_ngen_4326_);
lean_ctor_set(v_reuseFailAlloc_4357_, 7, v_auxDeclNGen_4327_);
lean_ctor_set(v_reuseFailAlloc_4357_, 8, v_infoState_4328_);
lean_ctor_set(v_reuseFailAlloc_4357_, 9, v_traceState_4329_);
lean_ctor_set(v_reuseFailAlloc_4357_, 10, v_snapshotTasks_4330_);
lean_ctor_set(v_reuseFailAlloc_4357_, 11, v_prevLinterStates_4331_);
lean_ctor_set(v_reuseFailAlloc_4357_, 12, v_codeQualityEntryTasks_4332_);
v___x_4337_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4338_ = lean_st_ref_put(v___y_4276_, v___x_4337_);
v___x_4339_ = l_List_reverse___redArg(v_traceMsgs_4316_);
v___x_4340_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v___x_4339_, v___y_4275_, v___y_4276_);
if (lean_obj_tag(v___x_4340_) == 0)
{
lean_object* v___x_4342_; uint8_t v_isShared_4343_; uint8_t v_isSharedCheck_4347_; 
v_isSharedCheck_4347_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4347_ == 0)
{
lean_object* v_unused_4348_; 
v_unused_4348_ = lean_ctor_get(v___x_4340_, 0);
lean_dec(v_unused_4348_);
v___x_4342_ = v___x_4340_;
v_isShared_4343_ = v_isSharedCheck_4347_;
goto v_resetjp_4341_;
}
else
{
lean_dec(v___x_4340_);
v___x_4342_ = lean_box(0);
v_isShared_4343_ = v_isSharedCheck_4347_;
goto v_resetjp_4341_;
}
v_resetjp_4341_:
{
lean_object* v___x_4345_; 
if (v_isShared_4343_ == 0)
{
lean_ctor_set(v___x_4342_, 0, v_a_4314_);
v___x_4345_ = v___x_4342_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v_a_4314_);
v___x_4345_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
return v___x_4345_;
}
}
}
else
{
lean_object* v_a_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4356_; 
lean_dec(v_a_4314_);
v_a_4349_ = lean_ctor_get(v___x_4340_, 0);
v_isSharedCheck_4356_ = !lean_is_exclusive(v___x_4340_);
if (v_isSharedCheck_4356_ == 0)
{
v___x_4351_ = v___x_4340_;
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_a_4349_);
lean_dec(v___x_4340_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4356_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v_a_4349_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
}
}
}
else
{
lean_object* v_a_4360_; lean_object* v___x_4362_; uint8_t v_isShared_4363_; uint8_t v_isSharedCheck_4367_; 
lean_dec(v_traceMsgs_4316_);
lean_dec(v_macroScope_4315_);
lean_dec(v_a_4314_);
v_a_4360_ = lean_ctor_get(v___x_4319_, 0);
v_isSharedCheck_4367_ = !lean_is_exclusive(v___x_4319_);
if (v_isSharedCheck_4367_ == 0)
{
v___x_4362_ = v___x_4319_;
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
else
{
lean_inc(v_a_4360_);
lean_dec(v___x_4319_);
v___x_4362_ = lean_box(0);
v_isShared_4363_ = v_isSharedCheck_4367_;
goto v_resetjp_4361_;
}
v_resetjp_4361_:
{
lean_object* v___x_4365_; 
if (v_isShared_4363_ == 0)
{
v___x_4365_ = v___x_4362_;
goto v_reusejp_4364_;
}
else
{
lean_object* v_reuseFailAlloc_4366_; 
v_reuseFailAlloc_4366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4366_, 0, v_a_4360_);
v___x_4365_ = v_reuseFailAlloc_4366_;
goto v_reusejp_4364_;
}
v_reusejp_4364_:
{
return v___x_4365_;
}
}
}
}
else
{
lean_object* v_a_4368_; 
v_a_4368_ = lean_ctor_get(v___x_4312_, 0);
lean_inc(v_a_4368_);
lean_dec_ref_known(v___x_4312_, 2);
if (lean_obj_tag(v_a_4368_) == 0)
{
lean_object* v_a_4369_; lean_object* v_a_4370_; lean_object* v___x_4371_; uint8_t v___x_4372_; 
v_a_4369_ = lean_ctor_get(v_a_4368_, 0);
lean_inc(v_a_4369_);
v_a_4370_ = lean_ctor_get(v_a_4368_, 1);
lean_inc_ref(v_a_4370_);
lean_dec_ref_known(v_a_4368_, 2);
v___x_4371_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0));
v___x_4372_ = lean_string_dec_eq(v_a_4370_, v___x_4371_);
if (v___x_4372_ == 0)
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; 
v___x_4373_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4373_, 0, v_a_4370_);
v___x_4374_ = l_Lean_MessageData_ofFormat(v___x_4373_);
v___x_4375_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4369_, v___x_4374_, v___y_4275_, v___y_4276_);
lean_dec(v_a_4369_);
return v___x_4375_;
}
else
{
lean_object* v___x_4376_; 
lean_dec_ref(v_a_4370_);
v___x_4376_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_a_4369_);
return v___x_4376_;
}
}
else
{
lean_object* v___x_4377_; 
v___x_4377_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_4377_;
}
}
}
}
else
{
lean_object* v_a_4381_; lean_object* v___x_4383_; uint8_t v_isShared_4384_; uint8_t v_isSharedCheck_4388_; 
lean_dec(v_a_4298_);
lean_dec_ref_known(v_methods_4296_, 5);
lean_dec_ref(v_x_4274_);
v_a_4381_ = lean_ctor_get(v___x_4299_, 0);
v_isSharedCheck_4388_ = !lean_is_exclusive(v___x_4299_);
if (v_isSharedCheck_4388_ == 0)
{
v___x_4383_ = v___x_4299_;
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
else
{
lean_inc(v_a_4381_);
lean_dec(v___x_4299_);
v___x_4383_ = lean_box(0);
v_isShared_4384_ = v_isSharedCheck_4388_;
goto v_resetjp_4382_;
}
v_resetjp_4382_:
{
lean_object* v___x_4386_; 
if (v_isShared_4384_ == 0)
{
v___x_4386_ = v___x_4383_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4387_; 
v_reuseFailAlloc_4387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4387_, 0, v_a_4381_);
v___x_4386_ = v_reuseFailAlloc_4387_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
return v___x_4386_;
}
}
}
}
else
{
lean_object* v_a_4389_; lean_object* v___x_4391_; uint8_t v_isShared_4392_; uint8_t v_isSharedCheck_4396_; 
lean_dec_ref_known(v_methods_4296_, 5);
lean_dec_ref(v_x_4274_);
v_a_4389_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4396_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4396_ == 0)
{
v___x_4391_ = v___x_4297_;
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
else
{
lean_inc(v_a_4389_);
lean_dec(v___x_4297_);
v___x_4391_ = lean_box(0);
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
v_resetjp_4390_:
{
lean_object* v___x_4394_; 
if (v_isShared_4392_ == 0)
{
v___x_4394_ = v___x_4391_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_a_4389_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
}
else
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4404_; 
lean_dec_ref(v___f_4290_);
lean_dec(v_currNamespace_4289_);
lean_dec_ref(v_opts_4286_);
lean_dec_ref(v___f_4281_);
lean_dec_ref(v___f_4280_);
lean_dec_ref(v_env_4279_);
lean_dec_ref(v_x_4274_);
v_a_4397_ = lean_ctor_get(v___x_4291_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v___x_4291_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4399_ = v___x_4291_;
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v___x_4291_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4402_; 
if (v_isShared_4400_ == 0)
{
v___x_4402_ = v___x_4399_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_a_4397_);
v___x_4402_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
return v___x_4402_;
}
}
}
}
else
{
lean_object* v_a_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4412_; 
lean_dec_ref(v_opts_4286_);
lean_dec_ref(v___f_4281_);
lean_dec_ref(v___f_4280_);
lean_dec_ref(v_env_4279_);
lean_dec_ref(v_x_4274_);
v_a_4405_ = lean_ctor_get(v___x_4287_, 0);
v_isSharedCheck_4412_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4407_ = v___x_4287_;
v_isShared_4408_ = v_isSharedCheck_4412_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_a_4405_);
lean_dec(v___x_4287_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4412_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v___x_4410_; 
if (v_isShared_4408_ == 0)
{
v___x_4410_ = v___x_4407_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v_a_4405_);
v___x_4410_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
return v___x_4410_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___boxed(lean_object* v_x_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
lean_object* v_res_4417_; 
v_res_4417_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_4413_, v___y_4414_, v___y_4415_);
lean_dec(v___y_4415_);
lean_dec_ref(v___y_4414_);
return v_res_4417_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; 
v___x_4419_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0));
v___x_4420_ = l_Lean_stringToMessageData(v___x_4419_);
return v___x_4420_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; 
v___x_4422_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2));
v___x_4423_ = l_Lean_stringToMessageData(v___x_4422_);
return v___x_4423_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5(void){
_start:
{
lean_object* v___x_4425_; lean_object* v___x_4426_; 
v___x_4425_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4));
v___x_4426_ = l_Lean_stringToMessageData(v___x_4425_);
return v___x_4426_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7(void){
_start:
{
lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4428_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6));
v___x_4429_ = l_Lean_stringToMessageData(v___x_4428_);
return v___x_4429_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9(void){
_start:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4431_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8));
v___x_4432_ = l_Lean_stringToMessageData(v___x_4431_);
return v___x_4432_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14(void){
_start:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; 
v___x_4441_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13));
v___x_4442_ = l_Lean_stringToMessageData(v___x_4441_);
return v___x_4442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(lean_object* v___x_4443_, lean_object* v_attrInstance_4444_, lean_object* v___f_4445_, lean_object* v___x_4446_, lean_object* v___x_4447_, lean_object* v___x_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_){
_start:
{
lean_object* v___x_4452_; 
v___x_4452_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4443_, v___y_4449_, v___y_4450_);
if (lean_obj_tag(v___x_4452_) == 0)
{
lean_object* v_a_4453_; lean_object* v___x_4454_; lean_object* v_attr_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; 
v_a_4453_ = lean_ctor_get(v___x_4452_, 0);
lean_inc(v_a_4453_);
lean_dec_ref_known(v___x_4452_, 1);
v___x_4454_ = lean_unsigned_to_nat(1u);
v_attr_4455_ = l_Lean_Syntax_getArg(v_attrInstance_4444_, v___x_4454_);
v___x_4456_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_4456_, 0, v_attr_4455_);
lean_closure_set(v___x_4456_, 1, v___f_4445_);
v___x_4457_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4456_, v___y_4449_, v___y_4450_);
if (lean_obj_tag(v___x_4457_) == 0)
{
lean_object* v_a_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4563_; 
v_a_4458_ = lean_ctor_get(v___x_4457_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4457_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4460_ = v___x_4457_;
v_isShared_4461_ = v_isSharedCheck_4563_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_a_4458_);
lean_dec(v___x_4457_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4563_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v___y_4463_; uint8_t v___y_4470_; lean_object* v___y_4471_; lean_object* v___y_4472_; lean_object* v___y_4473_; lean_object* v___y_4474_; lean_object* v_attrName_4485_; lean_object* v___y_4486_; lean_object* v___y_4487_; lean_object* v___x_4544_; lean_object* v___x_4545_; uint8_t v___x_4546_; 
lean_inc(v_a_4458_);
v___x_4544_ = l_Lean_Syntax_getKind(v_a_4458_);
v___x_4545_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12));
v___x_4546_ = lean_name_eq(v___x_4544_, v___x_4545_);
if (v___x_4546_ == 0)
{
if (lean_obj_tag(v___x_4544_) == 1)
{
lean_object* v_str_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; 
v_str_4547_ = lean_ctor_get(v___x_4544_, 1);
lean_inc_ref(v_str_4547_);
lean_dec_ref_known(v___x_4544_, 2);
v___x_4548_ = lean_box(0);
v___x_4549_ = l_Lean_Name_str___override(v___x_4548_, v_str_4547_);
v_attrName_4485_ = v___x_4549_;
v___y_4486_ = v___y_4449_;
v___y_4487_ = v___y_4450_;
goto v___jp_4484_;
}
else
{
lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v_a_4552_; lean_object* v___x_4554_; uint8_t v_isShared_4555_; uint8_t v_isSharedCheck_4559_; 
lean_dec(v___x_4544_);
lean_del_object(v___x_4460_);
lean_dec(v_a_4453_);
lean_dec(v___x_4446_);
v___x_4550_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14);
v___x_4551_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4458_, v___x_4550_, v___y_4449_, v___y_4450_);
lean_dec(v_a_4458_);
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4559_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4559_ == 0)
{
v___x_4554_ = v___x_4551_;
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
else
{
lean_inc(v_a_4552_);
lean_dec(v___x_4551_);
v___x_4554_ = lean_box(0);
v_isShared_4555_ = v_isSharedCheck_4559_;
goto v_resetjp_4553_;
}
v_resetjp_4553_:
{
lean_object* v___x_4557_; 
if (v_isShared_4555_ == 0)
{
v___x_4557_ = v___x_4554_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v_a_4552_);
v___x_4557_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
return v___x_4557_;
}
}
}
}
else
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; 
lean_dec(v___x_4544_);
v___x_4560_ = l_Lean_Syntax_getArg(v_a_4458_, v___x_4448_);
v___x_4561_ = l_Lean_Syntax_getId(v___x_4560_);
lean_dec(v___x_4560_);
v___x_4562_ = l_Lean_Name_eraseMacroScopes(v___x_4561_);
lean_dec(v___x_4561_);
v_attrName_4485_ = v___x_4562_;
v___y_4486_ = v___y_4449_;
v___y_4487_ = v___y_4450_;
goto v___jp_4484_;
}
v___jp_4462_:
{
lean_object* v___x_4464_; uint8_t v___x_4465_; lean_object* v___x_4467_; 
v___x_4464_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4464_, 0, v___y_4463_);
lean_ctor_set(v___x_4464_, 1, v_a_4458_);
v___x_4465_ = lean_unbox(v_a_4453_);
lean_dec(v_a_4453_);
lean_ctor_set_uint8(v___x_4464_, sizeof(void*)*2, v___x_4465_);
if (v_isShared_4461_ == 0)
{
lean_ctor_set(v___x_4460_, 0, v___x_4464_);
v___x_4467_ = v___x_4460_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v___x_4464_);
v___x_4467_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
return v___x_4467_;
}
}
v___jp_4469_:
{
lean_object* v___x_4475_; 
v___x_4475_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v___y_4471_, v___y_4470_, v___y_4473_, v___y_4474_);
if (lean_obj_tag(v___x_4475_) == 0)
{
lean_dec_ref_known(v___x_4475_, 1);
v___y_4463_ = v___y_4472_;
goto v___jp_4462_;
}
else
{
lean_object* v_a_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4483_; 
lean_dec(v___y_4472_);
lean_del_object(v___x_4460_);
lean_dec(v_a_4458_);
lean_dec(v_a_4453_);
v_a_4476_ = lean_ctor_get(v___x_4475_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v___x_4475_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4478_ = v___x_4475_;
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_a_4476_);
lean_dec(v___x_4475_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
if (v_isShared_4479_ == 0)
{
v___x_4481_ = v___x_4478_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4476_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
return v___x_4481_;
}
}
}
}
v___jp_4484_:
{
lean_object* v___x_4488_; lean_object* v_env_4489_; lean_object* v___x_4490_; 
v___x_4488_ = lean_st_ref_get(v___y_4487_);
v_env_4489_ = lean_ctor_get(v___x_4488_, 0);
lean_inc_ref(v_env_4489_);
lean_dec(v___x_4488_);
lean_inc(v_attrName_4485_);
v___x_4490_ = l_Lean_getAttributeImpl(v_env_4489_, v_attrName_4485_);
if (lean_obj_tag(v___x_4490_) == 1)
{
lean_object* v___x_4491_; lean_object* v_env_4492_; lean_object* v___x_4493_; 
lean_dec_ref_known(v___x_4490_, 1);
v___x_4491_ = lean_st_ref_get(v___y_4487_);
v_env_4492_ = lean_ctor_get(v___x_4491_, 0);
lean_inc_ref(v_env_4492_);
lean_dec(v___x_4491_);
lean_inc(v_attrName_4485_);
v___x_4493_ = l_Lean_getAttributeImpl(v_env_4492_, v_attrName_4485_);
if (lean_obj_tag(v___x_4493_) == 1)
{
lean_object* v_a_4494_; lean_object* v___x_4495_; lean_object* v_toAttributeImplCore_4496_; lean_object* v_env_4497_; lean_object* v_ref_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; 
v_a_4494_ = lean_ctor_get(v___x_4493_, 0);
lean_inc(v_a_4494_);
lean_dec_ref_known(v___x_4493_, 1);
v___x_4495_ = lean_st_ref_get(v___y_4487_);
v_toAttributeImplCore_4496_ = lean_ctor_get(v_a_4494_, 0);
lean_inc_ref(v_toAttributeImplCore_4496_);
lean_dec(v_a_4494_);
v_env_4497_ = lean_ctor_get(v___x_4495_, 0);
lean_inc_ref(v_env_4497_);
lean_dec(v___x_4495_);
v_ref_4498_ = lean_ctor_get(v_toAttributeImplCore_4496_, 0);
lean_inc_n(v_ref_4498_, 2);
lean_dec_ref(v_toAttributeImplCore_4496_);
v___x_4499_ = l_Lean_regularInitAttr;
v___x_4500_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_4446_, v___x_4499_, v_env_4497_, v_ref_4498_);
if (lean_obj_tag(v___x_4500_) == 0)
{
lean_dec(v_ref_4498_);
v___y_4463_ = v_attrName_4485_;
goto v___jp_4462_;
}
else
{
uint8_t v___x_4501_; lean_object* v___x_4502_; lean_object* v_env_4503_; lean_object* v___x_4504_; 
lean_dec_ref_known(v___x_4500_, 1);
v___x_4501_ = 1;
v___x_4502_ = lean_st_ref_get(v___y_4487_);
v_env_4503_ = lean_ctor_get(v___x_4502_, 0);
lean_inc_ref(v_env_4503_);
lean_dec(v___x_4502_);
v___x_4504_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4503_, v_ref_4498_);
lean_dec_ref(v_env_4503_);
if (lean_obj_tag(v___x_4504_) == 1)
{
lean_object* v_val_4505_; lean_object* v___x_4506_; lean_object* v_env_4507_; lean_object* v___x_4508_; lean_object* v_modules_4509_; lean_object* v___x_4510_; uint8_t v___x_4511_; 
v_val_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_val_4505_);
lean_dec_ref_known(v___x_4504_, 1);
v___x_4506_ = lean_st_ref_get(v___y_4487_);
v_env_4507_ = lean_ctor_get(v___x_4506_, 0);
lean_inc_ref(v_env_4507_);
lean_dec(v___x_4506_);
v___x_4508_ = l_Lean_Environment_header(v_env_4507_);
lean_dec_ref(v_env_4507_);
v_modules_4509_ = lean_ctor_get(v___x_4508_, 3);
lean_inc_ref(v_modules_4509_);
lean_dec_ref(v___x_4508_);
v___x_4510_ = lean_array_get_size(v_modules_4509_);
v___x_4511_ = lean_nat_dec_lt(v_val_4505_, v___x_4510_);
if (v___x_4511_ == 0)
{
lean_dec_ref(v_modules_4509_);
lean_dec(v_val_4505_);
v___y_4470_ = v___x_4501_;
v___y_4471_ = v_ref_4498_;
v___y_4472_ = v_attrName_4485_;
v___y_4473_ = v___y_4486_;
v___y_4474_ = v___y_4487_;
goto v___jp_4469_;
}
else
{
lean_object* v___x_4512_; uint8_t v_hasData_4513_; 
v___x_4512_ = lean_array_fget_borrowed(v_modules_4509_, v_val_4505_);
v_hasData_4513_ = lean_ctor_get_uint8(v___x_4512_, sizeof(void*)*1 + 1);
if (v_hasData_4513_ == 0)
{
lean_object* v___x_4514_; lean_object* v_toImport_4515_; lean_object* v_module_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v_a_4530_; lean_object* v___x_4532_; uint8_t v_isShared_4533_; uint8_t v_isSharedCheck_4537_; 
lean_dec(v_ref_4498_);
lean_del_object(v___x_4460_);
lean_dec(v_a_4458_);
lean_dec(v_a_4453_);
v___x_4514_ = lean_array_get(v___x_4447_, v_modules_4509_, v_val_4505_);
lean_dec(v_val_4505_);
lean_dec_ref(v_modules_4509_);
v_toImport_4515_ = lean_ctor_get(v___x_4514_, 0);
lean_inc_ref(v_toImport_4515_);
lean_dec(v___x_4514_);
v_module_4516_ = lean_ctor_get(v_toImport_4515_, 0);
lean_inc(v_module_4516_);
lean_dec_ref(v_toImport_4515_);
v___x_4517_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1);
v___x_4518_ = l_Lean_MessageData_ofName(v_attrName_4485_);
v___x_4519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4519_, 0, v___x_4517_);
lean_ctor_set(v___x_4519_, 1, v___x_4518_);
v___x_4520_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3);
v___x_4521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4519_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
v___x_4522_ = l_Lean_MessageData_ofName(v_module_4516_);
lean_inc_ref(v___x_4522_);
v___x_4523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4523_, 0, v___x_4521_);
lean_ctor_set(v___x_4523_, 1, v___x_4522_);
v___x_4524_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5);
v___x_4525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4525_, 0, v___x_4523_);
lean_ctor_set(v___x_4525_, 1, v___x_4524_);
v___x_4526_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4526_, 0, v___x_4525_);
lean_ctor_set(v___x_4526_, 1, v___x_4522_);
v___x_4527_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_4528_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4526_);
lean_ctor_set(v___x_4528_, 1, v___x_4527_);
v___x_4529_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4528_, v___y_4486_, v___y_4487_);
v_a_4530_ = lean_ctor_get(v___x_4529_, 0);
v_isSharedCheck_4537_ = !lean_is_exclusive(v___x_4529_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4532_ = v___x_4529_;
v_isShared_4533_ = v_isSharedCheck_4537_;
goto v_resetjp_4531_;
}
else
{
lean_inc(v_a_4530_);
lean_dec(v___x_4529_);
v___x_4532_ = lean_box(0);
v_isShared_4533_ = v_isSharedCheck_4537_;
goto v_resetjp_4531_;
}
v_resetjp_4531_:
{
lean_object* v___x_4535_; 
if (v_isShared_4533_ == 0)
{
v___x_4535_ = v___x_4532_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v_a_4530_);
v___x_4535_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
return v___x_4535_;
}
}
}
else
{
lean_dec_ref(v_modules_4509_);
lean_dec(v_val_4505_);
v___y_4470_ = v___x_4501_;
v___y_4471_ = v_ref_4498_;
v___y_4472_ = v_attrName_4485_;
v___y_4473_ = v___y_4486_;
v___y_4474_ = v___y_4487_;
goto v___jp_4469_;
}
}
}
else
{
lean_dec(v___x_4504_);
v___y_4470_ = v___x_4501_;
v___y_4471_ = v_ref_4498_;
v___y_4472_ = v_attrName_4485_;
v___y_4473_ = v___y_4486_;
v___y_4474_ = v___y_4487_;
goto v___jp_4469_;
}
}
}
else
{
lean_dec_ref(v___x_4493_);
lean_dec(v___x_4446_);
v___y_4463_ = v_attrName_4485_;
goto v___jp_4462_;
}
}
else
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; 
lean_dec_ref(v___x_4490_);
lean_del_object(v___x_4460_);
lean_dec(v_a_4458_);
lean_dec(v_a_4453_);
lean_dec(v___x_4446_);
v___x_4538_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7);
v___x_4539_ = l_Lean_MessageData_ofName(v_attrName_4485_);
v___x_4540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4540_, 0, v___x_4538_);
lean_ctor_set(v___x_4540_, 1, v___x_4539_);
v___x_4541_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9);
v___x_4542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4540_);
lean_ctor_set(v___x_4542_, 1, v___x_4541_);
v___x_4543_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4542_, v___y_4486_, v___y_4487_);
return v___x_4543_;
}
}
}
}
else
{
lean_object* v_a_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4571_; 
lean_dec(v_a_4453_);
lean_dec(v___x_4446_);
v_a_4564_ = lean_ctor_get(v___x_4457_, 0);
v_isSharedCheck_4571_ = !lean_is_exclusive(v___x_4457_);
if (v_isSharedCheck_4571_ == 0)
{
v___x_4566_ = v___x_4457_;
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_a_4564_);
lean_dec(v___x_4457_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4571_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v___x_4569_; 
if (v_isShared_4567_ == 0)
{
v___x_4569_ = v___x_4566_;
goto v_reusejp_4568_;
}
else
{
lean_object* v_reuseFailAlloc_4570_; 
v_reuseFailAlloc_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4570_, 0, v_a_4564_);
v___x_4569_ = v_reuseFailAlloc_4570_;
goto v_reusejp_4568_;
}
v_reusejp_4568_:
{
return v___x_4569_;
}
}
}
}
else
{
lean_object* v_a_4572_; lean_object* v___x_4574_; uint8_t v_isShared_4575_; uint8_t v_isSharedCheck_4579_; 
lean_dec(v___x_4446_);
lean_dec_ref(v___f_4445_);
v_a_4572_ = lean_ctor_get(v___x_4452_, 0);
v_isSharedCheck_4579_ = !lean_is_exclusive(v___x_4452_);
if (v_isSharedCheck_4579_ == 0)
{
v___x_4574_ = v___x_4452_;
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
else
{
lean_inc(v_a_4572_);
lean_dec(v___x_4452_);
v___x_4574_ = lean_box(0);
v_isShared_4575_ = v_isSharedCheck_4579_;
goto v_resetjp_4573_;
}
v_resetjp_4573_:
{
lean_object* v___x_4577_; 
if (v_isShared_4575_ == 0)
{
v___x_4577_ = v___x_4574_;
goto v_reusejp_4576_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v_a_4572_);
v___x_4577_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4576_;
}
v_reusejp_4576_:
{
return v___x_4577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed(lean_object* v___x_4580_, lean_object* v_attrInstance_4581_, lean_object* v___f_4582_, lean_object* v___x_4583_, lean_object* v___x_4584_, lean_object* v___x_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_){
_start:
{
lean_object* v_res_4589_; 
v_res_4589_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(v___x_4580_, v_attrInstance_4581_, v___f_4582_, v___x_4583_, v___x_4584_, v___x_4585_, v___y_4586_, v___y_4587_);
lean_dec(v___y_4587_);
lean_dec_ref(v___y_4586_);
lean_dec(v___x_4585_);
lean_dec_ref(v___x_4584_);
lean_dec(v_attrInstance_4581_);
return v_res_4589_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(lean_object* v_x_4590_, uint8_t v_when_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_){
_start:
{
if (v_when_4591_ == 0)
{
lean_object* v___x_4595_; 
lean_inc(v___y_4593_);
lean_inc_ref(v___y_4592_);
v___x_4595_ = lean_apply_3(v_x_4590_, v___y_4592_, v___y_4593_, lean_box(0));
return v___x_4595_;
}
else
{
uint8_t v___x_4596_; lean_object* v___x_4597_; 
v___x_4596_ = 0;
v___x_4597_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_4590_, v___x_4596_, v___y_4592_, v___y_4593_);
return v___x_4597_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg___boxed(lean_object* v_x_4598_, lean_object* v_when_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_){
_start:
{
uint8_t v_when_boxed_4603_; lean_object* v_res_4604_; 
v_when_boxed_4603_ = lean_unbox(v_when_4599_);
v_res_4604_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_4598_, v_when_boxed_4603_, v___y_4600_, v___y_4601_);
lean_dec(v___y_4601_);
lean_dec_ref(v___y_4600_);
return v_res_4604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(lean_object* v_attrInstance_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_){
_start:
{
lean_object* v___f_4610_; lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___f_4616_; uint8_t v___x_4617_; lean_object* v___x_4618_; 
v___f_4610_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0));
v___x_4611_ = lean_box(0);
v___x_4612_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_4613_ = lean_unsigned_to_nat(0u);
v___x_4614_ = l_Lean_Syntax_getArg(v_attrInstance_4606_, v___x_4613_);
v___x_4615_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_4615_, 0, v___x_4614_);
v___f_4616_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed), 9, 6);
lean_closure_set(v___f_4616_, 0, v___x_4615_);
lean_closure_set(v___f_4616_, 1, v_attrInstance_4606_);
lean_closure_set(v___f_4616_, 2, v___f_4610_);
lean_closure_set(v___f_4616_, 3, v___x_4611_);
lean_closure_set(v___f_4616_, 4, v___x_4612_);
lean_closure_set(v___f_4616_, 5, v___x_4613_);
v___x_4617_ = 1;
v___x_4618_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v___f_4616_, v___x_4617_, v___y_4607_, v___y_4608_);
return v___x_4618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___boxed(lean_object* v_attrInstance_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_){
_start:
{
lean_object* v_res_4623_; 
v_res_4623_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_attrInstance_4619_, v___y_4620_, v___y_4621_);
lean_dec(v___y_4621_);
lean_dec_ref(v___y_4620_);
return v_res_4623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(lean_object* v_as_4624_, size_t v_sz_4625_, size_t v_i_4626_, lean_object* v_b_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_){
_start:
{
lean_object* v_snd_4632_; lean_object* v_a_4637_; uint8_t v___x_4649_; 
v___x_4649_ = lean_usize_dec_lt(v_i_4626_, v_sz_4625_);
if (v___x_4649_ == 0)
{
lean_object* v___x_4650_; 
v___x_4650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4650_, 0, v_b_4627_);
return v___x_4650_;
}
else
{
lean_object* v_a_4651_; lean_object* v___x_4652_; 
v_a_4651_ = lean_array_uget_borrowed(v_as_4624_, v_i_4626_);
v___x_4652_ = l_Lean_Elab_Command_getRef___redArg(v___y_4628_);
if (lean_obj_tag(v___x_4652_) == 0)
{
lean_object* v_a_4653_; lean_object* v_fileName_4654_; lean_object* v_fileMap_4655_; lean_object* v_currRecDepth_4656_; lean_object* v_cmdPos_4657_; lean_object* v_macroStack_4658_; lean_object* v_quotContext_x3f_4659_; lean_object* v_currMacroScope_4660_; lean_object* v_snap_x3f_4661_; lean_object* v_cancelTk_x3f_4662_; uint8_t v_suppressElabErrors_4663_; lean_object* v_ref_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; 
v_a_4653_ = lean_ctor_get(v___x_4652_, 0);
lean_inc(v_a_4653_);
lean_dec_ref_known(v___x_4652_, 1);
v_fileName_4654_ = lean_ctor_get(v___y_4628_, 0);
v_fileMap_4655_ = lean_ctor_get(v___y_4628_, 1);
v_currRecDepth_4656_ = lean_ctor_get(v___y_4628_, 2);
v_cmdPos_4657_ = lean_ctor_get(v___y_4628_, 3);
v_macroStack_4658_ = lean_ctor_get(v___y_4628_, 4);
v_quotContext_x3f_4659_ = lean_ctor_get(v___y_4628_, 5);
v_currMacroScope_4660_ = lean_ctor_get(v___y_4628_, 6);
v_snap_x3f_4661_ = lean_ctor_get(v___y_4628_, 8);
v_cancelTk_x3f_4662_ = lean_ctor_get(v___y_4628_, 9);
v_suppressElabErrors_4663_ = lean_ctor_get_uint8(v___y_4628_, sizeof(void*)*10);
v_ref_4664_ = l_Lean_replaceRef(v_a_4651_, v_a_4653_);
lean_dec(v_a_4653_);
lean_inc(v_cancelTk_x3f_4662_);
lean_inc(v_snap_x3f_4661_);
lean_inc(v_currMacroScope_4660_);
lean_inc(v_quotContext_x3f_4659_);
lean_inc(v_macroStack_4658_);
lean_inc(v_cmdPos_4657_);
lean_inc(v_currRecDepth_4656_);
lean_inc_ref(v_fileMap_4655_);
lean_inc_ref(v_fileName_4654_);
v___x_4665_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_4665_, 0, v_fileName_4654_);
lean_ctor_set(v___x_4665_, 1, v_fileMap_4655_);
lean_ctor_set(v___x_4665_, 2, v_currRecDepth_4656_);
lean_ctor_set(v___x_4665_, 3, v_cmdPos_4657_);
lean_ctor_set(v___x_4665_, 4, v_macroStack_4658_);
lean_ctor_set(v___x_4665_, 5, v_quotContext_x3f_4659_);
lean_ctor_set(v___x_4665_, 6, v_currMacroScope_4660_);
lean_ctor_set(v___x_4665_, 7, v_ref_4664_);
lean_ctor_set(v___x_4665_, 8, v_snap_x3f_4661_);
lean_ctor_set(v___x_4665_, 9, v_cancelTk_x3f_4662_);
lean_ctor_set_uint8(v___x_4665_, sizeof(void*)*10, v_suppressElabErrors_4663_);
lean_inc(v_a_4651_);
v___x_4666_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_a_4651_, v___x_4665_, v___y_4629_);
lean_dec_ref_known(v___x_4665_, 10);
if (lean_obj_tag(v___x_4666_) == 0)
{
lean_object* v_a_4667_; lean_object* v___x_4668_; 
v_a_4667_ = lean_ctor_get(v___x_4666_, 0);
lean_inc(v_a_4667_);
lean_dec_ref_known(v___x_4666_, 1);
v___x_4668_ = lean_array_push(v_b_4627_, v_a_4667_);
v_snd_4632_ = v___x_4668_;
goto v___jp_4631_;
}
else
{
lean_object* v_a_4669_; 
v_a_4669_ = lean_ctor_get(v___x_4666_, 0);
lean_inc(v_a_4669_);
lean_dec_ref_known(v___x_4666_, 1);
v_a_4637_ = v_a_4669_;
goto v___jp_4636_;
}
}
else
{
lean_object* v_a_4670_; 
v_a_4670_ = lean_ctor_get(v___x_4652_, 0);
lean_inc(v_a_4670_);
lean_dec_ref_known(v___x_4652_, 1);
v_a_4637_ = v_a_4670_;
goto v___jp_4636_;
}
}
v___jp_4631_:
{
size_t v___x_4633_; size_t v___x_4634_; 
v___x_4633_ = ((size_t)1ULL);
v___x_4634_ = lean_usize_add(v_i_4626_, v___x_4633_);
v_i_4626_ = v___x_4634_;
v_b_4627_ = v_snd_4632_;
goto _start;
}
v___jp_4636_:
{
uint8_t v___x_4638_; 
v___x_4638_ = l_Lean_Exception_isInterrupt(v_a_4637_);
if (v___x_4638_ == 0)
{
lean_object* v___x_4639_; 
v___x_4639_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_a_4637_, v___y_4628_, v___y_4629_);
if (lean_obj_tag(v___x_4639_) == 0)
{
lean_dec_ref_known(v___x_4639_, 1);
v_snd_4632_ = v_b_4627_;
goto v___jp_4631_;
}
else
{
lean_object* v_a_4640_; lean_object* v___x_4642_; uint8_t v_isShared_4643_; uint8_t v_isSharedCheck_4647_; 
lean_dec_ref(v_b_4627_);
v_a_4640_ = lean_ctor_get(v___x_4639_, 0);
v_isSharedCheck_4647_ = !lean_is_exclusive(v___x_4639_);
if (v_isSharedCheck_4647_ == 0)
{
v___x_4642_ = v___x_4639_;
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
else
{
lean_inc(v_a_4640_);
lean_dec(v___x_4639_);
v___x_4642_ = lean_box(0);
v_isShared_4643_ = v_isSharedCheck_4647_;
goto v_resetjp_4641_;
}
v_resetjp_4641_:
{
lean_object* v___x_4645_; 
if (v_isShared_4643_ == 0)
{
v___x_4645_ = v___x_4642_;
goto v_reusejp_4644_;
}
else
{
lean_object* v_reuseFailAlloc_4646_; 
v_reuseFailAlloc_4646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4646_, 0, v_a_4640_);
v___x_4645_ = v_reuseFailAlloc_4646_;
goto v_reusejp_4644_;
}
v_reusejp_4644_:
{
return v___x_4645_;
}
}
}
}
else
{
lean_object* v___x_4648_; 
lean_dec_ref(v_b_4627_);
v___x_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4648_, 0, v_a_4637_);
return v___x_4648_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29___boxed(lean_object* v_as_4671_, lean_object* v_sz_4672_, lean_object* v_i_4673_, lean_object* v_b_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
size_t v_sz_boxed_4678_; size_t v_i_boxed_4679_; lean_object* v_res_4680_; 
v_sz_boxed_4678_ = lean_unbox_usize(v_sz_4672_);
lean_dec(v_sz_4672_);
v_i_boxed_4679_ = lean_unbox_usize(v_i_4673_);
lean_dec(v_i_4673_);
v_res_4680_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_as_4671_, v_sz_boxed_4678_, v_i_boxed_4679_, v_b_4674_, v___y_4675_, v___y_4676_);
lean_dec(v___y_4676_);
lean_dec_ref(v___y_4675_);
lean_dec_ref(v_as_4671_);
return v_res_4680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(lean_object* v_attrInstances_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_){
_start:
{
lean_object* v_attrs_4687_; size_t v_sz_4688_; size_t v___x_4689_; lean_object* v___x_4690_; 
v_attrs_4687_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v_sz_4688_ = lean_array_size(v_attrInstances_4683_);
v___x_4689_ = ((size_t)0ULL);
v___x_4690_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_attrInstances_4683_, v_sz_4688_, v___x_4689_, v_attrs_4687_, v___y_4684_, v___y_4685_);
return v___x_4690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___boxed(lean_object* v_attrInstances_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_){
_start:
{
lean_object* v_res_4695_; 
v_res_4695_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v_attrInstances_4691_, v___y_4692_, v___y_4693_);
lean_dec(v___y_4693_);
lean_dec_ref(v___y_4692_);
lean_dec_ref(v_attrInstances_4691_);
return v_res_4695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(lean_object* v_stx_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_){
_start:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4700_ = lean_unsigned_to_nat(1u);
v___x_4701_ = l_Lean_Syntax_getArg(v_stx_4696_, v___x_4700_);
v___x_4702_ = l_Lean_Syntax_getSepArgs(v___x_4701_);
lean_dec(v___x_4701_);
v___x_4703_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v___x_4702_, v___y_4697_, v___y_4698_);
lean_dec_ref(v___x_4702_);
return v___x_4703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1___boxed(lean_object* v_stx_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_){
_start:
{
lean_object* v_res_4708_; 
v_res_4708_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_stx_4704_, v___y_4705_, v___y_4706_);
lean_dec(v___y_4706_);
lean_dec_ref(v___y_4705_);
lean_dec(v_stx_4704_);
return v_res_4708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(lean_object* v_o_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v_env_4714_; lean_object* v___x_4715_; lean_object* v_toEnvExtension_4716_; lean_object* v_asyncMode_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v_merged_4720_; lean_object* v___x_4722_; uint8_t v_isShared_4723_; uint8_t v_isSharedCheck_4728_; 
v___x_4712_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_4713_ = lean_st_ref_get(v___y_4710_);
v_env_4714_ = lean_ctor_get(v___x_4713_, 0);
lean_inc_ref(v_env_4714_);
lean_dec(v___x_4713_);
v___x_4715_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_4716_ = lean_ctor_get(v___x_4715_, 0);
v_asyncMode_4717_ = lean_ctor_get(v_toEnvExtension_4716_, 2);
v___x_4718_ = lean_box(0);
v___x_4719_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4712_, v___x_4715_, v_env_4714_, v_asyncMode_4717_, v___x_4718_);
v_merged_4720_ = lean_ctor_get(v___x_4719_, 0);
v_isSharedCheck_4728_ = !lean_is_exclusive(v___x_4719_);
if (v_isSharedCheck_4728_ == 0)
{
lean_object* v_unused_4729_; 
v_unused_4729_ = lean_ctor_get(v___x_4719_, 1);
lean_dec(v_unused_4729_);
v___x_4722_ = v___x_4719_;
v_isShared_4723_ = v_isSharedCheck_4728_;
goto v_resetjp_4721_;
}
else
{
lean_inc(v_merged_4720_);
lean_dec(v___x_4719_);
v___x_4722_ = lean_box(0);
v_isShared_4723_ = v_isSharedCheck_4728_;
goto v_resetjp_4721_;
}
v_resetjp_4721_:
{
lean_object* v___x_4725_; 
if (v_isShared_4723_ == 0)
{
lean_ctor_set(v___x_4722_, 1, v_merged_4720_);
lean_ctor_set(v___x_4722_, 0, v_o_4709_);
v___x_4725_ = v___x_4722_;
goto v_reusejp_4724_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v_o_4709_);
lean_ctor_set(v_reuseFailAlloc_4727_, 1, v_merged_4720_);
v___x_4725_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4724_;
}
v_reusejp_4724_:
{
lean_object* v___x_4726_; 
v___x_4726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4725_);
return v___x_4726_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg___boxed(lean_object* v_o_4730_, lean_object* v___y_4731_, lean_object* v___y_4732_){
_start:
{
lean_object* v_res_4733_; 
v_res_4733_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_4730_, v___y_4731_);
lean_dec(v___y_4731_);
return v_res_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(lean_object* v___y_4734_, lean_object* v___y_4735_){
_start:
{
lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v_scopes_4739_; lean_object* v___x_4740_; lean_object* v_opts_4741_; lean_object* v___x_4742_; 
v___x_4737_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4738_ = lean_st_ref_get(v___y_4735_);
v_scopes_4739_ = lean_ctor_get(v___x_4738_, 2);
lean_inc(v_scopes_4739_);
lean_dec(v___x_4738_);
v___x_4740_ = l_List_head_x21___redArg(v___x_4737_, v_scopes_4739_);
lean_dec(v_scopes_4739_);
v_opts_4741_ = lean_ctor_get(v___x_4740_, 1);
lean_inc_ref(v_opts_4741_);
lean_dec(v___x_4740_);
v___x_4742_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_opts_4741_, v___y_4735_);
return v___x_4742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23___boxed(lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_){
_start:
{
lean_object* v_res_4746_; 
v_res_4746_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4743_, v___y_4744_);
lean_dec(v___y_4744_);
lean_dec_ref(v___y_4743_);
return v_res_4746_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(lean_object* v_ref_4747_, lean_object* v_msgData_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
uint8_t v___x_4752_; uint8_t v___x_4753_; lean_object* v___x_4754_; 
v___x_4752_ = 1;
v___x_4753_ = 0;
v___x_4754_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_4747_, v_msgData_4748_, v___x_4752_, v___x_4753_, v___y_4749_, v___y_4750_);
return v___x_4754_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34___boxed(lean_object* v_ref_4755_, lean_object* v_msgData_4756_, lean_object* v___y_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_){
_start:
{
lean_object* v_res_4760_; 
v_res_4760_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_ref_4755_, v_msgData_4756_, v___y_4757_, v___y_4758_);
lean_dec(v___y_4758_);
lean_dec_ref(v___y_4757_);
lean_dec(v_ref_4755_);
return v_res_4760_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1(void){
_start:
{
lean_object* v___x_4762_; lean_object* v___x_4763_; 
v___x_4762_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0));
v___x_4763_ = l_Lean_stringToMessageData(v___x_4762_);
return v___x_4763_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3(void){
_start:
{
lean_object* v___x_4765_; lean_object* v___x_4766_; 
v___x_4765_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2));
v___x_4766_ = l_Lean_stringToMessageData(v___x_4765_);
return v___x_4766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(lean_object* v_linterOption_4767_, lean_object* v_stx_4768_, lean_object* v_msg_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_){
_start:
{
lean_object* v_name_4773_; lean_object* v___x_4775_; uint8_t v_isShared_4776_; uint8_t v_isSharedCheck_4791_; 
v_name_4773_ = lean_ctor_get(v_linterOption_4767_, 0);
v_isSharedCheck_4791_ = !lean_is_exclusive(v_linterOption_4767_);
if (v_isSharedCheck_4791_ == 0)
{
lean_object* v_unused_4792_; 
v_unused_4792_ = lean_ctor_get(v_linterOption_4767_, 1);
lean_dec(v_unused_4792_);
v___x_4775_ = v_linterOption_4767_;
v_isShared_4776_ = v_isSharedCheck_4791_;
goto v_resetjp_4774_;
}
else
{
lean_inc(v_name_4773_);
lean_dec(v_linterOption_4767_);
v___x_4775_ = lean_box(0);
v_isShared_4776_ = v_isSharedCheck_4791_;
goto v_resetjp_4774_;
}
v_resetjp_4774_:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4780_; 
v___x_4777_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1);
lean_inc(v_name_4773_);
v___x_4778_ = l_Lean_MessageData_ofName(v_name_4773_);
if (v_isShared_4776_ == 0)
{
lean_ctor_set_tag(v___x_4775_, 7);
lean_ctor_set(v___x_4775_, 1, v___x_4778_);
lean_ctor_set(v___x_4775_, 0, v___x_4777_);
v___x_4780_ = v___x_4775_;
goto v_reusejp_4779_;
}
else
{
lean_object* v_reuseFailAlloc_4790_; 
v_reuseFailAlloc_4790_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4790_, 0, v___x_4777_);
lean_ctor_set(v_reuseFailAlloc_4790_, 1, v___x_4778_);
v___x_4780_ = v_reuseFailAlloc_4790_;
goto v_reusejp_4779_;
}
v_reusejp_4779_:
{
lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v_disable_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4781_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3);
v___x_4782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4782_, 0, v___x_4780_);
lean_ctor_set(v___x_4782_, 1, v___x_4781_);
v_disable_4783_ = l_Lean_MessageData_note(v___x_4782_);
v___x_4784_ = l_Lean_Linter_linterMessageTag;
v___x_4785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4785_, 0, v_msg_4769_);
lean_ctor_set(v___x_4785_, 1, v_disable_4783_);
v___x_4786_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4786_, 0, v___x_4784_);
lean_ctor_set(v___x_4786_, 1, v___x_4785_);
v___x_4787_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4787_, 0, v_name_4773_);
lean_ctor_set(v___x_4787_, 1, v___x_4786_);
lean_inc(v_stx_4768_);
v___x_4788_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_4788_, 0, v_stx_4768_);
lean_ctor_set(v___x_4788_, 1, v___x_4787_);
v___x_4789_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_stx_4768_, v___x_4788_, v___y_4770_, v___y_4771_);
lean_dec(v_stx_4768_);
return v___x_4789_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___boxed(lean_object* v_linterOption_4793_, lean_object* v_stx_4794_, lean_object* v_msg_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_){
_start:
{
lean_object* v_res_4799_; 
v_res_4799_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4793_, v_stx_4794_, v_msg_4795_, v___y_4796_, v___y_4797_);
lean_dec(v___y_4797_);
lean_dec_ref(v___y_4796_);
return v_res_4799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(lean_object* v_linterOption_4800_, lean_object* v_stx_4801_, lean_object* v_msg_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_){
_start:
{
lean_object* v___x_4806_; lean_object* v_a_4807_; lean_object* v___x_4809_; uint8_t v_isShared_4810_; uint8_t v_isSharedCheck_4817_; 
v___x_4806_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4803_, v___y_4804_);
v_a_4807_ = lean_ctor_get(v___x_4806_, 0);
v_isSharedCheck_4817_ = !lean_is_exclusive(v___x_4806_);
if (v_isSharedCheck_4817_ == 0)
{
v___x_4809_ = v___x_4806_;
v_isShared_4810_ = v_isSharedCheck_4817_;
goto v_resetjp_4808_;
}
else
{
lean_inc(v_a_4807_);
lean_dec(v___x_4806_);
v___x_4809_ = lean_box(0);
v_isShared_4810_ = v_isSharedCheck_4817_;
goto v_resetjp_4808_;
}
v_resetjp_4808_:
{
uint8_t v___x_4811_; 
v___x_4811_ = l_Lean_Linter_getLinterValue(v_linterOption_4800_, v_a_4807_);
lean_dec(v_a_4807_);
if (v___x_4811_ == 0)
{
lean_object* v___x_4812_; lean_object* v___x_4814_; 
lean_dec_ref(v_msg_4802_);
lean_dec(v_stx_4801_);
lean_dec_ref(v_linterOption_4800_);
v___x_4812_ = lean_box(0);
if (v_isShared_4810_ == 0)
{
lean_ctor_set(v___x_4809_, 0, v___x_4812_);
v___x_4814_ = v___x_4809_;
goto v_reusejp_4813_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v___x_4812_);
v___x_4814_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4813_;
}
v_reusejp_4813_:
{
return v___x_4814_;
}
}
else
{
lean_object* v___x_4816_; 
lean_del_object(v___x_4809_);
v___x_4816_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4800_, v_stx_4801_, v_msg_4802_, v___y_4803_, v___y_4804_);
return v___x_4816_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6___boxed(lean_object* v_linterOption_4818_, lean_object* v_stx_4819_, lean_object* v_msg_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_){
_start:
{
lean_object* v_res_4824_; 
v_res_4824_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v_linterOption_4818_, v_stx_4819_, v_msg_4820_, v___y_4821_, v___y_4822_);
lean_dec(v___y_4822_);
lean_dec_ref(v___y_4821_);
return v_res_4824_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4826_; lean_object* v___x_4827_; 
v___x_4826_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0));
v___x_4827_ = l_Lean_stringToMessageData(v___x_4826_);
return v___x_4827_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4829_; lean_object* v___x_4830_; 
v___x_4829_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2));
v___x_4830_ = l_Lean_stringToMessageData(v___x_4829_);
return v___x_4830_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; 
v___x_4844_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8));
v___x_4845_ = l_Lean_stringToMessageData(v___x_4844_);
return v___x_4845_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4847_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10));
v___x_4848_ = l_Lean_stringToMessageData(v___x_4847_);
return v___x_4848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(lean_object* v_vis_x3f_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_){
_start:
{
lean_object* v___x_4861_; 
v___x_4861_ = lean_st_ref_get(v___y_4851_);
if (lean_obj_tag(v_vis_x3f_4849_) == 0)
{
uint8_t v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; 
lean_dec(v___x_4861_);
v___x_4862_ = 0;
v___x_4863_ = lean_box(v___x_4862_);
v___x_4864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4864_, 0, v___x_4863_);
return v___x_4864_;
}
else
{
lean_object* v_env_4865_; lean_object* v_val_4866_; lean_object* v___y_4868_; lean_object* v___y_4869_; lean_object* v___y_4870_; uint8_t v___y_4892_; lean_object* v___x_4893_; uint8_t v___x_4894_; uint8_t v___y_4896_; 
v_env_4865_ = lean_ctor_get(v___x_4861_, 0);
lean_inc_ref(v_env_4865_);
lean_dec(v___x_4861_);
v_val_4866_ = lean_ctor_get(v_vis_x3f_4849_, 0);
lean_inc_n(v_val_4866_, 2);
lean_dec_ref_known(v_vis_x3f_4849_, 1);
v___x_4893_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6));
v___x_4894_ = l_Lean_Syntax_isOfKind(v_val_4866_, v___x_4893_);
if (v___x_4894_ == 0)
{
lean_object* v___x_4900_; uint8_t v___x_4901_; 
v___x_4900_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7));
lean_inc(v_val_4866_);
v___x_4901_ = l_Lean_Syntax_isOfKind(v_val_4866_, v___x_4900_);
if (v___x_4901_ == 0)
{
lean_object* v___x_4902_; lean_object* v___x_4903_; 
lean_dec_ref(v_env_4865_);
v___x_4902_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9);
v___x_4903_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_val_4866_, v___x_4902_, v___y_4850_, v___y_4851_);
lean_dec(v_val_4866_);
return v___x_4903_;
}
else
{
lean_object* v___x_4904_; 
v___x_4904_ = l_Lean_Syntax_getHeadInfo(v_val_4866_);
if (lean_obj_tag(v___x_4904_) == 0)
{
lean_dec_ref_known(v___x_4904_, 4);
v___y_4896_ = v___x_4901_;
goto v___jp_4895_;
}
else
{
lean_dec(v___x_4904_);
if (v___x_4894_ == 0)
{
lean_dec(v_val_4866_);
lean_dec_ref(v_env_4865_);
goto v___jp_4853_;
}
else
{
v___y_4896_ = v___x_4894_;
goto v___jp_4895_;
}
}
}
}
else
{
lean_object* v___x_4905_; 
v___x_4905_ = l_Lean_Syntax_getHeadInfo(v_val_4866_);
if (lean_obj_tag(v___x_4905_) == 0)
{
lean_object* v___x_4906_; uint8_t v_isModule_4907_; 
lean_dec_ref_known(v___x_4905_, 4);
v___x_4906_ = l_Lean_Environment_header(v_env_4865_);
v_isModule_4907_ = lean_ctor_get_uint8(v___x_4906_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4906_);
if (v_isModule_4907_ == 0)
{
lean_dec(v_val_4866_);
lean_dec_ref(v_env_4865_);
goto v___jp_4857_;
}
else
{
uint8_t v_isExporting_4908_; 
v_isExporting_4908_ = lean_ctor_get_uint8(v_env_4865_, sizeof(void*)*8);
lean_dec_ref(v_env_4865_);
if (v_isExporting_4908_ == 0)
{
lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4909_ = l_Lean_linter_redundantVisibility;
v___x_4910_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11);
v___x_4911_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___x_4909_, v_val_4866_, v___x_4910_, v___y_4850_, v___y_4851_);
if (lean_obj_tag(v___x_4911_) == 0)
{
lean_dec_ref_known(v___x_4911_, 1);
goto v___jp_4857_;
}
else
{
lean_object* v_a_4912_; lean_object* v___x_4914_; uint8_t v_isShared_4915_; uint8_t v_isSharedCheck_4919_; 
v_a_4912_ = lean_ctor_get(v___x_4911_, 0);
v_isSharedCheck_4919_ = !lean_is_exclusive(v___x_4911_);
if (v_isSharedCheck_4919_ == 0)
{
v___x_4914_ = v___x_4911_;
v_isShared_4915_ = v_isSharedCheck_4919_;
goto v_resetjp_4913_;
}
else
{
lean_inc(v_a_4912_);
lean_dec(v___x_4911_);
v___x_4914_ = lean_box(0);
v_isShared_4915_ = v_isSharedCheck_4919_;
goto v_resetjp_4913_;
}
v_resetjp_4913_:
{
lean_object* v___x_4917_; 
if (v_isShared_4915_ == 0)
{
v___x_4917_ = v___x_4914_;
goto v_reusejp_4916_;
}
else
{
lean_object* v_reuseFailAlloc_4918_; 
v_reuseFailAlloc_4918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4918_, 0, v_a_4912_);
v___x_4917_ = v_reuseFailAlloc_4918_;
goto v_reusejp_4916_;
}
v_reusejp_4916_:
{
return v___x_4917_;
}
}
}
}
else
{
lean_dec(v_val_4866_);
goto v___jp_4857_;
}
}
}
else
{
lean_dec(v___x_4905_);
lean_dec(v_val_4866_);
lean_dec_ref(v_env_4865_);
goto v___jp_4857_;
}
}
v___jp_4867_:
{
lean_object* v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; 
lean_inc_ref(v___y_4870_);
v___x_4871_ = l_Lean_stringToMessageData(v___y_4870_);
lean_inc_ref(v___y_4868_);
v___x_4872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4872_, 0, v___y_4868_);
lean_ctor_set(v___x_4872_, 1, v___x_4871_);
v___x_4873_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1);
v___x_4874_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4874_, 0, v___x_4872_);
lean_ctor_set(v___x_4874_, 1, v___x_4873_);
lean_inc_ref(v___y_4869_);
v___x_4875_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___y_4869_, v_val_4866_, v___x_4874_, v___y_4850_, v___y_4851_);
if (lean_obj_tag(v___x_4875_) == 0)
{
lean_dec_ref_known(v___x_4875_, 1);
goto v___jp_4853_;
}
else
{
lean_object* v_a_4876_; lean_object* v___x_4878_; uint8_t v_isShared_4879_; uint8_t v_isSharedCheck_4883_; 
v_a_4876_ = lean_ctor_get(v___x_4875_, 0);
v_isSharedCheck_4883_ = !lean_is_exclusive(v___x_4875_);
if (v_isSharedCheck_4883_ == 0)
{
v___x_4878_ = v___x_4875_;
v_isShared_4879_ = v_isSharedCheck_4883_;
goto v_resetjp_4877_;
}
else
{
lean_inc(v_a_4876_);
lean_dec(v___x_4875_);
v___x_4878_ = lean_box(0);
v_isShared_4879_ = v_isSharedCheck_4883_;
goto v_resetjp_4877_;
}
v_resetjp_4877_:
{
lean_object* v___x_4881_; 
if (v_isShared_4879_ == 0)
{
v___x_4881_ = v___x_4878_;
goto v_reusejp_4880_;
}
else
{
lean_object* v_reuseFailAlloc_4882_; 
v_reuseFailAlloc_4882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4882_, 0, v_a_4876_);
v___x_4881_ = v_reuseFailAlloc_4882_;
goto v_reusejp_4880_;
}
v_reusejp_4880_:
{
return v___x_4881_;
}
}
}
}
v___jp_4884_:
{
lean_object* v___x_4885_; uint8_t v_isModule_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v___x_4885_ = l_Lean_Environment_header(v_env_4865_);
lean_dec_ref(v_env_4865_);
v_isModule_4886_ = lean_ctor_get_uint8(v___x_4885_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4885_);
v___x_4887_ = l_Lean_linter_redundantVisibility;
v___x_4888_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3);
if (v_isModule_4886_ == 0)
{
lean_object* v___x_4889_; 
v___x_4889_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___y_4868_ = v___x_4888_;
v___y_4869_ = v___x_4887_;
v___y_4870_ = v___x_4889_;
goto v___jp_4867_;
}
else
{
lean_object* v___x_4890_; 
v___x_4890_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4));
v___y_4868_ = v___x_4888_;
v___y_4869_ = v___x_4887_;
v___y_4870_ = v___x_4890_;
goto v___jp_4867_;
}
}
v___jp_4891_:
{
if (v___y_4892_ == 0)
{
lean_dec(v_val_4866_);
lean_dec_ref(v_env_4865_);
goto v___jp_4853_;
}
else
{
goto v___jp_4884_;
}
}
v___jp_4895_:
{
uint8_t v_isExporting_4897_; 
v_isExporting_4897_ = lean_ctor_get_uint8(v_env_4865_, sizeof(void*)*8);
if (v_isExporting_4897_ == 0)
{
lean_object* v___x_4898_; uint8_t v_isModule_4899_; 
v___x_4898_ = l_Lean_Environment_header(v_env_4865_);
v_isModule_4899_ = lean_ctor_get_uint8(v___x_4898_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4898_);
if (v_isModule_4899_ == 0)
{
v___y_4892_ = v___y_4896_;
goto v___jp_4891_;
}
else
{
v___y_4892_ = v___x_4894_;
goto v___jp_4891_;
}
}
else
{
goto v___jp_4884_;
}
}
}
v___jp_4853_:
{
uint8_t v___x_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; 
v___x_4854_ = 2;
v___x_4855_ = lean_box(v___x_4854_);
v___x_4856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4856_, 0, v___x_4855_);
return v___x_4856_;
}
v___jp_4857_:
{
uint8_t v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; 
v___x_4858_ = 1;
v___x_4859_ = lean_box(v___x_4858_);
v___x_4860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4860_, 0, v___x_4859_);
return v___x_4860_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___boxed(lean_object* v_vis_x3f_4920_, lean_object* v___y_4921_, lean_object* v___y_4922_, lean_object* v___y_4923_){
_start:
{
lean_object* v_res_4924_; 
v_res_4924_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v_vis_x3f_4920_, v___y_4921_, v___y_4922_);
lean_dec(v___y_4922_);
lean_dec_ref(v___y_4921_);
return v_res_4924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object* v_stx_4936_, lean_object* v___y_4937_, lean_object* v___y_4938_){
_start:
{
uint8_t v___y_4941_; lean_object* v___y_4942_; uint8_t v___y_4943_; lean_object* v___y_4944_; uint8_t v___y_4945_; uint8_t v___y_4946_; uint8_t v___y_4947_; uint8_t v___y_4951_; uint8_t v___y_4952_; lean_object* v___y_4953_; uint8_t v___y_4954_; uint8_t v___y_4955_; lean_object* v___y_4956_; lean_object* v_attrs_4957_; lean_object* v___x_4961_; lean_object* v_docCommentStx_4962_; lean_object* v___x_4963_; lean_object* v_attrsStx_4964_; uint8_t v___y_4966_; uint8_t v___y_4967_; lean_object* v___y_4968_; uint8_t v___y_4969_; lean_object* v___y_4970_; uint8_t v___y_4971_; lean_object* v___x_4985_; lean_object* v_visibilityStx_4986_; lean_object* v___x_4987_; lean_object* v_protectedStx_4988_; uint8_t v___y_4990_; lean_object* v___y_4991_; uint8_t v___y_4992_; lean_object* v___y_4993_; lean_object* v___y_4994_; uint8_t v___y_5011_; uint8_t v___y_5012_; lean_object* v___y_5013_; lean_object* v___y_5014_; uint8_t v___y_5026_; lean_object* v___y_5027_; uint8_t v___y_5028_; uint8_t v___y_5040_; lean_object* v___x_5053_; lean_object* v___x_5054_; uint8_t v___x_5055_; 
v___x_4961_ = lean_unsigned_to_nat(0u);
v_docCommentStx_4962_ = l_Lean_Syntax_getArg(v_stx_4936_, v___x_4961_);
v___x_4963_ = lean_unsigned_to_nat(1u);
v_attrsStx_4964_ = l_Lean_Syntax_getArg(v_stx_4936_, v___x_4963_);
v___x_4985_ = lean_unsigned_to_nat(2u);
v_visibilityStx_4986_ = l_Lean_Syntax_getArg(v_stx_4936_, v___x_4985_);
v___x_4987_ = lean_unsigned_to_nat(3u);
v_protectedStx_4988_ = l_Lean_Syntax_getArg(v_stx_4936_, v___x_4987_);
v___x_5053_ = lean_unsigned_to_nat(4u);
v___x_5054_ = l_Lean_Syntax_getArg(v_stx_4936_, v___x_5053_);
v___x_5055_ = l_Lean_Syntax_isNone(v___x_5054_);
if (v___x_5055_ == 0)
{
lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; uint8_t v___x_5059_; 
v___x_5056_ = l_Lean_Syntax_getArg(v___x_5054_, v___x_4961_);
lean_dec(v___x_5054_);
v___x_5057_ = l_Lean_Syntax_getKind(v___x_5056_);
v___x_5058_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2));
v___x_5059_ = lean_name_eq(v___x_5057_, v___x_5058_);
lean_dec(v___x_5057_);
if (v___x_5059_ == 0)
{
uint8_t v___x_5060_; 
v___x_5060_ = 2;
v___y_5040_ = v___x_5060_;
goto v___jp_5039_;
}
else
{
uint8_t v___x_5061_; 
v___x_5061_ = 1;
v___y_5040_ = v___x_5061_;
goto v___jp_5039_;
}
}
else
{
uint8_t v___x_5062_; 
lean_dec(v___x_5054_);
v___x_5062_ = 0;
v___y_5040_ = v___x_5062_;
goto v___jp_5039_;
}
v___jp_4940_:
{
lean_object* v___x_4948_; lean_object* v___x_4949_; 
v___x_4948_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4948_, 0, v_stx_4936_);
lean_ctor_set(v___x_4948_, 1, v___y_4944_);
lean_ctor_set(v___x_4948_, 2, v___y_4942_);
lean_ctor_set_uint8(v___x_4948_, sizeof(void*)*3, v___y_4943_);
lean_ctor_set_uint8(v___x_4948_, sizeof(void*)*3 + 1, v___y_4945_);
lean_ctor_set_uint8(v___x_4948_, sizeof(void*)*3 + 2, v___y_4941_);
lean_ctor_set_uint8(v___x_4948_, sizeof(void*)*3 + 3, v___y_4946_);
lean_ctor_set_uint8(v___x_4948_, sizeof(void*)*3 + 4, v___y_4947_);
v___x_4949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4948_);
return v___x_4949_;
}
v___jp_4950_:
{
uint8_t v___x_4958_; 
v___x_4958_ = l_Lean_Syntax_isNone(v___y_4956_);
lean_dec(v___y_4956_);
if (v___x_4958_ == 0)
{
uint8_t v___x_4959_; 
v___x_4959_ = 1;
v___y_4941_ = v___y_4951_;
v___y_4942_ = v_attrs_4957_;
v___y_4943_ = v___y_4952_;
v___y_4944_ = v___y_4953_;
v___y_4945_ = v___y_4954_;
v___y_4946_ = v___y_4955_;
v___y_4947_ = v___x_4959_;
goto v___jp_4940_;
}
else
{
uint8_t v___x_4960_; 
v___x_4960_ = 0;
v___y_4941_ = v___y_4951_;
v___y_4942_ = v_attrs_4957_;
v___y_4943_ = v___y_4952_;
v___y_4944_ = v___y_4953_;
v___y_4945_ = v___y_4954_;
v___y_4946_ = v___y_4955_;
v___y_4947_ = v___x_4960_;
goto v___jp_4940_;
}
}
v___jp_4965_:
{
lean_object* v___x_4972_; 
v___x_4972_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_4964_);
lean_dec(v_attrsStx_4964_);
if (lean_obj_tag(v___x_4972_) == 0)
{
lean_object* v___x_4973_; 
v___x_4973_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v___y_4951_ = v___y_4966_;
v___y_4952_ = v___y_4967_;
v___y_4953_ = v___y_4968_;
v___y_4954_ = v___y_4971_;
v___y_4955_ = v___y_4969_;
v___y_4956_ = v___y_4970_;
v_attrs_4957_ = v___x_4973_;
goto v___jp_4950_;
}
else
{
lean_object* v_val_4974_; lean_object* v___x_4975_; 
v_val_4974_ = lean_ctor_get(v___x_4972_, 0);
lean_inc(v_val_4974_);
lean_dec_ref_known(v___x_4972_, 1);
v___x_4975_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_val_4974_, v___y_4937_, v___y_4938_);
lean_dec(v_val_4974_);
if (lean_obj_tag(v___x_4975_) == 0)
{
lean_object* v_a_4976_; 
v_a_4976_ = lean_ctor_get(v___x_4975_, 0);
lean_inc(v_a_4976_);
lean_dec_ref_known(v___x_4975_, 1);
v___y_4951_ = v___y_4966_;
v___y_4952_ = v___y_4967_;
v___y_4953_ = v___y_4968_;
v___y_4954_ = v___y_4971_;
v___y_4955_ = v___y_4969_;
v___y_4956_ = v___y_4970_;
v_attrs_4957_ = v_a_4976_;
goto v___jp_4950_;
}
else
{
lean_object* v_a_4977_; lean_object* v___x_4979_; uint8_t v_isShared_4980_; uint8_t v_isSharedCheck_4984_; 
lean_dec(v___y_4970_);
lean_dec(v___y_4968_);
lean_dec(v_stx_4936_);
v_a_4977_ = lean_ctor_get(v___x_4975_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4975_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4979_ = v___x_4975_;
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
else
{
lean_inc(v_a_4977_);
lean_dec(v___x_4975_);
v___x_4979_ = lean_box(0);
v_isShared_4980_ = v_isSharedCheck_4984_;
goto v_resetjp_4978_;
}
v_resetjp_4978_:
{
lean_object* v___x_4982_; 
if (v_isShared_4980_ == 0)
{
v___x_4982_ = v___x_4979_;
goto v_reusejp_4981_;
}
else
{
lean_object* v_reuseFailAlloc_4983_; 
v_reuseFailAlloc_4983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4983_, 0, v_a_4977_);
v___x_4982_ = v_reuseFailAlloc_4983_;
goto v_reusejp_4981_;
}
v_reusejp_4981_:
{
return v___x_4982_;
}
}
}
}
}
v___jp_4989_:
{
lean_object* v___x_4995_; 
v___x_4995_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v___y_4994_, v___y_4937_, v___y_4938_);
if (lean_obj_tag(v___x_4995_) == 0)
{
lean_object* v_a_4996_; uint8_t v___x_4997_; 
v_a_4996_ = lean_ctor_get(v___x_4995_, 0);
lean_inc(v_a_4996_);
lean_dec_ref_known(v___x_4995_, 1);
v___x_4997_ = l_Lean_Syntax_isNone(v_protectedStx_4988_);
lean_dec(v_protectedStx_4988_);
if (v___x_4997_ == 0)
{
uint8_t v___x_4998_; uint8_t v___x_4999_; 
v___x_4998_ = 1;
v___x_4999_ = lean_unbox(v_a_4996_);
lean_dec(v_a_4996_);
v___y_4966_ = v___y_4990_;
v___y_4967_ = v___x_4999_;
v___y_4968_ = v___y_4991_;
v___y_4969_ = v___y_4992_;
v___y_4970_ = v___y_4993_;
v___y_4971_ = v___x_4998_;
goto v___jp_4965_;
}
else
{
uint8_t v___x_5000_; uint8_t v___x_5001_; 
v___x_5000_ = 0;
v___x_5001_ = lean_unbox(v_a_4996_);
lean_dec(v_a_4996_);
v___y_4966_ = v___y_4990_;
v___y_4967_ = v___x_5001_;
v___y_4968_ = v___y_4991_;
v___y_4969_ = v___y_4992_;
v___y_4970_ = v___y_4993_;
v___y_4971_ = v___x_5000_;
goto v___jp_4965_;
}
}
else
{
lean_object* v_a_5002_; lean_object* v___x_5004_; uint8_t v_isShared_5005_; uint8_t v_isSharedCheck_5009_; 
lean_dec(v___y_4993_);
lean_dec(v___y_4991_);
lean_dec(v_protectedStx_4988_);
lean_dec(v_attrsStx_4964_);
lean_dec(v_stx_4936_);
v_a_5002_ = lean_ctor_get(v___x_4995_, 0);
v_isSharedCheck_5009_ = !lean_is_exclusive(v___x_4995_);
if (v_isSharedCheck_5009_ == 0)
{
v___x_5004_ = v___x_4995_;
v_isShared_5005_ = v_isSharedCheck_5009_;
goto v_resetjp_5003_;
}
else
{
lean_inc(v_a_5002_);
lean_dec(v___x_4995_);
v___x_5004_ = lean_box(0);
v_isShared_5005_ = v_isSharedCheck_5009_;
goto v_resetjp_5003_;
}
v_resetjp_5003_:
{
lean_object* v___x_5007_; 
if (v_isShared_5005_ == 0)
{
v___x_5007_ = v___x_5004_;
goto v_reusejp_5006_;
}
else
{
lean_object* v_reuseFailAlloc_5008_; 
v_reuseFailAlloc_5008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5008_, 0, v_a_5002_);
v___x_5007_ = v_reuseFailAlloc_5008_;
goto v_reusejp_5006_;
}
v_reusejp_5006_:
{
return v___x_5007_;
}
}
}
}
v___jp_5010_:
{
lean_object* v___x_5015_; 
v___x_5015_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_4986_);
lean_dec(v_visibilityStx_4986_);
if (lean_obj_tag(v___x_5015_) == 0)
{
lean_object* v___x_5016_; 
v___x_5016_ = lean_box(0);
v___y_4990_ = v___y_5011_;
v___y_4991_ = v___y_5014_;
v___y_4992_ = v___y_5012_;
v___y_4993_ = v___y_5013_;
v___y_4994_ = v___x_5016_;
goto v___jp_4989_;
}
else
{
lean_object* v_val_5017_; lean_object* v___x_5019_; uint8_t v_isShared_5020_; uint8_t v_isSharedCheck_5024_; 
v_val_5017_ = lean_ctor_get(v___x_5015_, 0);
v_isSharedCheck_5024_ = !lean_is_exclusive(v___x_5015_);
if (v_isSharedCheck_5024_ == 0)
{
v___x_5019_ = v___x_5015_;
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
else
{
lean_inc(v_val_5017_);
lean_dec(v___x_5015_);
v___x_5019_ = lean_box(0);
v_isShared_5020_ = v_isSharedCheck_5024_;
goto v_resetjp_5018_;
}
v_resetjp_5018_:
{
lean_object* v___x_5022_; 
if (v_isShared_5020_ == 0)
{
v___x_5022_ = v___x_5019_;
goto v_reusejp_5021_;
}
else
{
lean_object* v_reuseFailAlloc_5023_; 
v_reuseFailAlloc_5023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5023_, 0, v_val_5017_);
v___x_5022_ = v_reuseFailAlloc_5023_;
goto v_reusejp_5021_;
}
v_reusejp_5021_:
{
v___y_4990_ = v___y_5011_;
v___y_4991_ = v___y_5014_;
v___y_4992_ = v___y_5012_;
v___y_4993_ = v___y_5013_;
v___y_4994_ = v___x_5022_;
goto v___jp_4989_;
}
}
}
}
v___jp_5025_:
{
lean_object* v___x_5029_; 
v___x_5029_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_4962_);
lean_dec(v_docCommentStx_4962_);
if (lean_obj_tag(v___x_5029_) == 0)
{
lean_object* v___x_5030_; 
v___x_5030_ = lean_box(0);
v___y_5011_ = v___y_5026_;
v___y_5012_ = v___y_5028_;
v___y_5013_ = v___y_5027_;
v___y_5014_ = v___x_5030_;
goto v___jp_5010_;
}
else
{
lean_object* v_val_5031_; lean_object* v___x_5033_; uint8_t v_isShared_5034_; uint8_t v_isSharedCheck_5038_; 
v_val_5031_ = lean_ctor_get(v___x_5029_, 0);
v_isSharedCheck_5038_ = !lean_is_exclusive(v___x_5029_);
if (v_isSharedCheck_5038_ == 0)
{
v___x_5033_ = v___x_5029_;
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
else
{
lean_inc(v_val_5031_);
lean_dec(v___x_5029_);
v___x_5033_ = lean_box(0);
v_isShared_5034_ = v_isSharedCheck_5038_;
goto v_resetjp_5032_;
}
v_resetjp_5032_:
{
lean_object* v___x_5036_; 
if (v_isShared_5034_ == 0)
{
v___x_5036_ = v___x_5033_;
goto v_reusejp_5035_;
}
else
{
lean_object* v_reuseFailAlloc_5037_; 
v_reuseFailAlloc_5037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5037_, 0, v_val_5031_);
v___x_5036_ = v_reuseFailAlloc_5037_;
goto v_reusejp_5035_;
}
v_reusejp_5035_:
{
v___y_5011_ = v___y_5026_;
v___y_5012_ = v___y_5028_;
v___y_5013_ = v___y_5027_;
v___y_5014_ = v___x_5036_;
goto v___jp_5010_;
}
}
}
}
v___jp_5039_:
{
lean_object* v___x_5041_; lean_object* v_unsafeStx_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; uint8_t v___x_5045_; 
v___x_5041_ = lean_unsigned_to_nat(5u);
v_unsafeStx_5042_ = l_Lean_Syntax_getArg(v_stx_4936_, v___x_5041_);
v___x_5043_ = lean_unsigned_to_nat(6u);
v___x_5044_ = l_Lean_Syntax_getArg(v_stx_4936_, v___x_5043_);
v___x_5045_ = l_Lean_Syntax_isNone(v___x_5044_);
if (v___x_5045_ == 0)
{
lean_object* v___x_5046_; lean_object* v___x_5047_; lean_object* v___x_5048_; uint8_t v___x_5049_; 
v___x_5046_ = l_Lean_Syntax_getArg(v___x_5044_, v___x_4961_);
lean_dec(v___x_5044_);
v___x_5047_ = l_Lean_Syntax_getKind(v___x_5046_);
v___x_5048_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1));
v___x_5049_ = lean_name_eq(v___x_5047_, v___x_5048_);
lean_dec(v___x_5047_);
if (v___x_5049_ == 0)
{
uint8_t v___x_5050_; 
v___x_5050_ = 1;
v___y_5026_ = v___y_5040_;
v___y_5027_ = v_unsafeStx_5042_;
v___y_5028_ = v___x_5050_;
goto v___jp_5025_;
}
else
{
uint8_t v___x_5051_; 
v___x_5051_ = 0;
v___y_5026_ = v___y_5040_;
v___y_5027_ = v_unsafeStx_5042_;
v___y_5028_ = v___x_5051_;
goto v___jp_5025_;
}
}
else
{
uint8_t v___x_5052_; 
lean_dec(v___x_5044_);
v___x_5052_ = 2;
v___y_5026_ = v___y_5040_;
v___y_5027_ = v_unsafeStx_5042_;
v___y_5028_ = v___x_5052_;
goto v___jp_5025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_stx_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_){
_start:
{
lean_object* v_res_5067_; 
v_res_5067_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_stx_5063_, v___y_5064_, v___y_5065_);
lean_dec(v___y_5065_);
lean_dec_ref(v___y_5064_);
return v_res_5067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3(lean_object* v_mods_5068_, lean_object* v___x_5069_, lean_object* v_projId_5070_, lean_object* v___x_5071_, lean_object* v___x_5072_, lean_object* v___x_5073_, lean_object* v_params_5074_, lean_object* v___x_5075_, lean_object* v___x_5076_, lean_object* v_optDeriving_5077_, lean_object* v___x_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_){
_start:
{
lean_object* v___x_5082_; 
lean_inc(v_mods_5068_);
v___x_5082_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_mods_5068_, v___y_5079_, v___y_5080_);
if (lean_obj_tag(v___x_5082_) == 0)
{
lean_object* v_a_5083_; lean_object* v___f_5084_; lean_object* v___x_5085_; lean_object* v_env_5086_; uint8_t v___x_5087_; lean_object* v___x_5088_; 
v_a_5083_ = lean_ctor_get(v___x_5082_, 0);
lean_inc_n(v_a_5083_, 2);
lean_dec_ref_known(v___x_5082_, 1);
v___f_5084_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__2___boxed), 15, 12);
lean_closure_set(v___f_5084_, 0, v___x_5069_);
lean_closure_set(v___f_5084_, 1, v_a_5083_);
lean_closure_set(v___f_5084_, 2, v_projId_5070_);
lean_closure_set(v___f_5084_, 3, v___x_5071_);
lean_closure_set(v___f_5084_, 4, v___x_5072_);
lean_closure_set(v___f_5084_, 5, v___x_5073_);
lean_closure_set(v___f_5084_, 6, v_params_5074_);
lean_closure_set(v___f_5084_, 7, v___x_5075_);
lean_closure_set(v___f_5084_, 8, v_mods_5068_);
lean_closure_set(v___f_5084_, 9, v___x_5076_);
lean_closure_set(v___f_5084_, 10, v_optDeriving_5077_);
lean_closure_set(v___f_5084_, 11, v___x_5078_);
v___x_5085_ = lean_st_ref_get(v___y_5080_);
v_env_5086_ = lean_ctor_get(v___x_5085_, 0);
lean_inc_ref(v_env_5086_);
lean_dec(v___x_5085_);
v___x_5087_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_5086_, v_a_5083_);
lean_dec(v_a_5083_);
lean_dec_ref(v_env_5086_);
v___x_5088_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5084_, v___x_5087_, v___y_5079_, v___y_5080_);
return v___x_5088_;
}
else
{
lean_object* v_a_5089_; lean_object* v___x_5091_; uint8_t v_isShared_5092_; uint8_t v_isSharedCheck_5096_; 
lean_dec(v___x_5078_);
lean_dec(v_optDeriving_5077_);
lean_dec(v___x_5076_);
lean_dec(v___x_5075_);
lean_dec_ref(v_params_5074_);
lean_dec_ref(v___x_5073_);
lean_dec_ref(v___x_5072_);
lean_dec_ref(v___x_5071_);
lean_dec(v_projId_5070_);
lean_dec(v___x_5069_);
lean_dec(v_mods_5068_);
v_a_5089_ = lean_ctor_get(v___x_5082_, 0);
v_isSharedCheck_5096_ = !lean_is_exclusive(v___x_5082_);
if (v_isSharedCheck_5096_ == 0)
{
v___x_5091_ = v___x_5082_;
v_isShared_5092_ = v_isSharedCheck_5096_;
goto v_resetjp_5090_;
}
else
{
lean_inc(v_a_5089_);
lean_dec(v___x_5082_);
v___x_5091_ = lean_box(0);
v_isShared_5092_ = v_isSharedCheck_5096_;
goto v_resetjp_5090_;
}
v_resetjp_5090_:
{
lean_object* v___x_5094_; 
if (v_isShared_5092_ == 0)
{
v___x_5094_ = v___x_5091_;
goto v_reusejp_5093_;
}
else
{
lean_object* v_reuseFailAlloc_5095_; 
v_reuseFailAlloc_5095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5095_, 0, v_a_5089_);
v___x_5094_ = v_reuseFailAlloc_5095_;
goto v_reusejp_5093_;
}
v_reusejp_5093_:
{
return v___x_5094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3___boxed(lean_object* v_mods_5097_, lean_object* v___x_5098_, lean_object* v_projId_5099_, lean_object* v___x_5100_, lean_object* v___x_5101_, lean_object* v___x_5102_, lean_object* v_params_5103_, lean_object* v___x_5104_, lean_object* v___x_5105_, lean_object* v_optDeriving_5106_, lean_object* v___x_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_, lean_object* v___y_5110_){
_start:
{
lean_object* v_res_5111_; 
v_res_5111_ = l_Lean_Elab_Command_elabNewtype___lam__3(v_mods_5097_, v___x_5098_, v_projId_5099_, v___x_5100_, v___x_5101_, v___x_5102_, v_params_5103_, v___x_5104_, v___x_5105_, v_optDeriving_5106_, v___x_5107_, v___y_5108_, v___y_5109_);
lean_dec(v___y_5109_);
lean_dec_ref(v___y_5108_);
return v_res_5111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_stx_5112_, lean_object* v___y_5113_, lean_object* v___y_5114_){
_start:
{
lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; lean_object* v___x_5120_; lean_object* v_mods_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v_params_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v_projId_5130_; lean_object* v___x_5131_; lean_object* v_optDeriving_5132_; lean_object* v___f_5133_; lean_object* v___x_5134_; 
v___x_5116_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0));
v___x_5117_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1));
v___x_5118_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5));
v___x_5119_ = lean_box(0);
v___x_5120_ = lean_unsigned_to_nat(0u);
v_mods_5121_ = l_Lean_Syntax_getArg(v_stx_5112_, v___x_5120_);
v___x_5122_ = lean_unsigned_to_nat(2u);
v___x_5123_ = l_Lean_Syntax_getArg(v_stx_5112_, v___x_5122_);
v___x_5124_ = lean_unsigned_to_nat(3u);
v___x_5125_ = l_Lean_Syntax_getArg(v_stx_5112_, v___x_5124_);
v_params_5126_ = l_Lean_Syntax_getArgs(v___x_5125_);
lean_dec(v___x_5125_);
v___x_5127_ = lean_unsigned_to_nat(5u);
v___x_5128_ = l_Lean_Syntax_getArg(v_stx_5112_, v___x_5127_);
v___x_5129_ = lean_unsigned_to_nat(7u);
v_projId_5130_ = l_Lean_Syntax_getArg(v_stx_5112_, v___x_5129_);
v___x_5131_ = lean_unsigned_to_nat(8u);
v_optDeriving_5132_ = l_Lean_Syntax_getArg(v_stx_5112_, v___x_5131_);
v___f_5133_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__3___boxed), 14, 11);
lean_closure_set(v___f_5133_, 0, v_mods_5121_);
lean_closure_set(v___f_5133_, 1, v___x_5123_);
lean_closure_set(v___f_5133_, 2, v_projId_5130_);
lean_closure_set(v___f_5133_, 3, v___x_5116_);
lean_closure_set(v___f_5133_, 4, v___x_5117_);
lean_closure_set(v___f_5133_, 5, v___x_5118_);
lean_closure_set(v___f_5133_, 6, v_params_5126_);
lean_closure_set(v___f_5133_, 7, v___x_5128_);
lean_closure_set(v___f_5133_, 8, v___x_5119_);
lean_closure_set(v___f_5133_, 9, v_optDeriving_5132_);
lean_closure_set(v___f_5133_, 10, v___x_5120_);
v___x_5134_ = l_Lean_Elab_Command_getScope___redArg(v___y_5114_);
if (lean_obj_tag(v___x_5134_) == 0)
{
lean_object* v_a_5135_; uint8_t v_isPublic_5136_; lean_object* v___x_5137_; 
v_a_5135_ = lean_ctor_get(v___x_5134_, 0);
lean_inc(v_a_5135_);
lean_dec_ref_known(v___x_5134_, 1);
v_isPublic_5136_ = lean_ctor_get_uint8(v_a_5135_, sizeof(void*)*10 + 1);
lean_dec(v_a_5135_);
v___x_5137_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5133_, v_isPublic_5136_, v___y_5113_, v___y_5114_);
return v___x_5137_;
}
else
{
lean_object* v_a_5138_; lean_object* v___x_5140_; uint8_t v_isShared_5141_; uint8_t v_isSharedCheck_5145_; 
lean_dec_ref(v___f_5133_);
v_a_5138_ = lean_ctor_get(v___x_5134_, 0);
v_isSharedCheck_5145_ = !lean_is_exclusive(v___x_5134_);
if (v_isSharedCheck_5145_ == 0)
{
v___x_5140_ = v___x_5134_;
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
else
{
lean_inc(v_a_5138_);
lean_dec(v___x_5134_);
v___x_5140_ = lean_box(0);
v_isShared_5141_ = v_isSharedCheck_5145_;
goto v_resetjp_5139_;
}
v_resetjp_5139_:
{
lean_object* v___x_5143_; 
if (v_isShared_5141_ == 0)
{
v___x_5143_ = v___x_5140_;
goto v_reusejp_5142_;
}
else
{
lean_object* v_reuseFailAlloc_5144_; 
v_reuseFailAlloc_5144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5144_, 0, v_a_5138_);
v___x_5143_ = v_reuseFailAlloc_5144_;
goto v_reusejp_5142_;
}
v_reusejp_5142_:
{
return v___x_5143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_stx_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_){
_start:
{
lean_object* v_res_5150_; 
v_res_5150_ = l_Lean_Elab_Command_elabNewtype(v_stx_5146_, v___y_5147_, v___y_5148_);
lean_dec(v___y_5148_);
lean_dec_ref(v___y_5147_);
lean_dec(v_stx_5146_);
return v_res_5150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(lean_object* v_stx_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_){
_start:
{
lean_object* v___x_5155_; 
v___x_5155_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_5151_, v___y_5152_);
return v___x_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___boxed(lean_object* v_stx_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_){
_start:
{
lean_object* v_res_5160_; 
v_res_5160_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(v_stx_5156_, v___y_5157_, v___y_5158_);
lean_dec(v___y_5158_);
lean_dec_ref(v___y_5157_);
lean_dec(v_stx_5156_);
return v_res_5160_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(lean_object* v_declName_5161_, lean_object* v_declRanges_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_){
_start:
{
lean_object* v___x_5166_; 
v___x_5166_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_5161_, v_declRanges_5162_, v___y_5164_);
return v___x_5166_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___boxed(lean_object* v_declName_5167_, lean_object* v_declRanges_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_){
_start:
{
lean_object* v_res_5172_; 
v_res_5172_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(v_declName_5167_, v_declRanges_5168_, v___y_5169_, v___y_5170_);
lean_dec(v___y_5170_);
lean_dec_ref(v___y_5169_);
return v_res_5172_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(lean_object* v_00_u03b1_5173_, lean_object* v_x_5174_, uint8_t v_isExporting_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_){
_start:
{
lean_object* v___x_5183_; 
v___x_5183_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_5174_, v_isExporting_5175_, v___y_5176_, v___y_5177_, v___y_5178_, v___y_5179_, v___y_5180_, v___y_5181_);
return v___x_5183_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___boxed(lean_object* v_00_u03b1_5184_, lean_object* v_x_5185_, lean_object* v_isExporting_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_, lean_object* v___y_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_){
_start:
{
uint8_t v_isExporting_boxed_5194_; lean_object* v_res_5195_; 
v_isExporting_boxed_5194_ = lean_unbox(v_isExporting_5186_);
v_res_5195_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(v_00_u03b1_5184_, v_x_5185_, v_isExporting_boxed_5194_, v___y_5187_, v___y_5188_, v___y_5189_, v___y_5190_, v___y_5191_, v___y_5192_);
lean_dec(v___y_5192_);
lean_dec_ref(v___y_5191_);
lean_dec(v___y_5190_);
lean_dec_ref(v___y_5189_);
lean_dec(v___y_5188_);
lean_dec_ref(v___y_5187_);
return v_res_5195_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_00_u03b1_5196_, lean_object* v_x_5197_, uint8_t v_when_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_){
_start:
{
lean_object* v___x_5206_; 
v___x_5206_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_5197_, v_when_5198_, v___y_5199_, v___y_5200_, v___y_5201_, v___y_5202_, v___y_5203_, v___y_5204_);
return v___x_5206_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_00_u03b1_5207_, lean_object* v_x_5208_, lean_object* v_when_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_){
_start:
{
uint8_t v_when_boxed_5217_; lean_object* v_res_5218_; 
v_when_boxed_5217_ = lean_unbox(v_when_5209_);
v_res_5218_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(v_00_u03b1_5207_, v_x_5208_, v_when_boxed_5217_, v___y_5210_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_, v___y_5215_);
lean_dec(v___y_5215_);
lean_dec_ref(v___y_5214_);
lean_dec(v___y_5213_);
lean_dec_ref(v___y_5212_);
lean_dec(v___y_5211_);
lean_dec_ref(v___y_5210_);
return v_res_5218_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(lean_object* v_declName_5219_, uint8_t v_s_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_){
_start:
{
lean_object* v___x_5224_; 
v___x_5224_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_5219_, v_s_5220_, v___y_5222_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___boxed(lean_object* v_declName_5225_, lean_object* v_s_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_){
_start:
{
uint8_t v_s_boxed_5230_; lean_object* v_res_5231_; 
v_s_boxed_5230_ = lean_unbox(v_s_5226_);
v_res_5231_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(v_declName_5225_, v_s_boxed_5230_, v___y_5227_, v___y_5228_);
lean_dec(v___y_5228_);
lean_dec_ref(v___y_5227_);
return v_res_5231_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(lean_object* v_as_5232_, lean_object* v_as_x27_5233_, lean_object* v_b_5234_, lean_object* v_a_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_){
_start:
{
lean_object* v___x_5239_; 
v___x_5239_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_5233_, v_b_5234_, v___y_5236_, v___y_5237_);
return v___x_5239_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___boxed(lean_object* v_as_5240_, lean_object* v_as_x27_5241_, lean_object* v_b_5242_, lean_object* v_a_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_){
_start:
{
lean_object* v_res_5247_; 
v_res_5247_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(v_as_5240_, v_as_x27_5241_, v_b_5242_, v_a_5243_, v___y_5244_, v___y_5245_);
lean_dec(v___y_5245_);
lean_dec_ref(v___y_5244_);
lean_dec(v_as_x27_5241_);
lean_dec(v_as_5240_);
return v_res_5247_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(lean_object* v_as_5248_, lean_object* v_as_x27_5249_, lean_object* v_b_5250_, lean_object* v_a_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_){
_start:
{
lean_object* v___x_5255_; 
v___x_5255_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_5249_, v_b_5250_, v___y_5252_, v___y_5253_);
return v___x_5255_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed(lean_object* v_as_5256_, lean_object* v_as_x27_5257_, lean_object* v_b_5258_, lean_object* v_a_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_){
_start:
{
lean_object* v_res_5263_; 
v_res_5263_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(v_as_5256_, v_as_x27_5257_, v_b_5258_, v_a_5259_, v___y_5260_, v___y_5261_);
lean_dec(v___y_5261_);
lean_dec_ref(v___y_5260_);
lean_dec(v_as_x27_5257_);
lean_dec(v_as_5256_);
return v_res_5263_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(lean_object* v_t_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_){
_start:
{
lean_object* v___x_5268_; 
v___x_5268_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_5264_, v___y_5266_);
return v___x_5268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___boxed(lean_object* v_t_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_, lean_object* v___y_5272_){
_start:
{
lean_object* v_res_5273_; 
v_res_5273_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(v_t_5269_, v___y_5270_, v___y_5271_);
lean_dec(v___y_5271_);
lean_dec_ref(v___y_5270_);
return v_res_5273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(lean_object* v_00_u03b1_5274_, lean_object* v_constName_5275_, lean_object* v___y_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_){
_start:
{
lean_object* v___x_5283_; 
v___x_5283_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_5275_, v___y_5276_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_, v___y_5281_);
return v___x_5283_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___boxed(lean_object* v_00_u03b1_5284_, lean_object* v_constName_5285_, lean_object* v___y_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_){
_start:
{
lean_object* v_res_5293_; 
v_res_5293_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(v_00_u03b1_5284_, v_constName_5285_, v___y_5286_, v___y_5287_, v___y_5288_, v___y_5289_, v___y_5290_, v___y_5291_);
lean_dec(v___y_5291_);
lean_dec_ref(v___y_5290_);
lean_dec(v___y_5289_);
lean_dec_ref(v___y_5288_);
lean_dec(v___y_5287_);
lean_dec_ref(v___y_5286_);
return v_res_5293_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_5294_, lean_object* v_ref_5295_, lean_object* v_msg_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_){
_start:
{
lean_object* v___x_5300_; 
v___x_5300_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_5295_, v_msg_5296_, v___y_5297_, v___y_5298_);
return v___x_5300_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5301_, lean_object* v_ref_5302_, lean_object* v_msg_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_){
_start:
{
lean_object* v_res_5307_; 
v_res_5307_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(v_00_u03b1_5301_, v_ref_5302_, v_msg_5303_, v___y_5304_, v___y_5305_);
lean_dec(v___y_5305_);
lean_dec_ref(v___y_5304_);
lean_dec(v_ref_5302_);
return v_res_5307_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(lean_object* v_00_u03b1_5308_, lean_object* v_ref_5309_, lean_object* v_constName_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_){
_start:
{
lean_object* v___x_5318_; 
v___x_5318_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_5309_, v_constName_5310_, v___y_5311_, v___y_5312_, v___y_5313_, v___y_5314_, v___y_5315_, v___y_5316_);
return v___x_5318_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___boxed(lean_object* v_00_u03b1_5319_, lean_object* v_ref_5320_, lean_object* v_constName_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_){
_start:
{
lean_object* v_res_5329_; 
v_res_5329_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(v_00_u03b1_5319_, v_ref_5320_, v_constName_5321_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_, v___y_5326_, v___y_5327_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec(v___y_5323_);
lean_dec_ref(v___y_5322_);
lean_dec(v_ref_5320_);
return v_res_5329_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(lean_object* v_msgData_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_){
_start:
{
lean_object* v___x_5334_; 
v___x_5334_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_5330_, v___y_5332_);
return v___x_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___boxed(lean_object* v_msgData_5335_, lean_object* v___y_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_){
_start:
{
lean_object* v_res_5339_; 
v_res_5339_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(v_msgData_5335_, v___y_5336_, v___y_5337_);
lean_dec(v___y_5337_);
lean_dec_ref(v___y_5336_);
return v_res_5339_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(lean_object* v_00_u03b1_5340_, lean_object* v_msg_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_){
_start:
{
lean_object* v___x_5345_; 
v___x_5345_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_5341_, v___y_5342_, v___y_5343_);
return v___x_5345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___boxed(lean_object* v_00_u03b1_5346_, lean_object* v_msg_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_){
_start:
{
lean_object* v_res_5351_; 
v_res_5351_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(v_00_u03b1_5346_, v_msg_5347_, v___y_5348_, v___y_5349_);
lean_dec(v___y_5349_);
lean_dec_ref(v___y_5348_);
return v_res_5351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(lean_object* v_o_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_){
_start:
{
lean_object* v___x_5356_; 
v___x_5356_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_5352_, v___y_5354_);
return v___x_5356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___boxed(lean_object* v_o_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_){
_start:
{
lean_object* v_res_5361_; 
v_res_5361_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(v_o_5357_, v___y_5358_, v___y_5359_);
lean_dec(v___y_5359_);
lean_dec_ref(v___y_5358_);
return v_res_5361_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(lean_object* v_00_u03b1_5362_, lean_object* v_constName_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_){
_start:
{
lean_object* v___x_5367_; 
v___x_5367_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_5363_, v___y_5364_, v___y_5365_);
return v___x_5367_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___boxed(lean_object* v_00_u03b1_5368_, lean_object* v_constName_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_, lean_object* v___y_5372_){
_start:
{
lean_object* v_res_5373_; 
v_res_5373_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(v_00_u03b1_5368_, v_constName_5369_, v___y_5370_, v___y_5371_);
lean_dec(v___y_5371_);
lean_dec_ref(v___y_5370_);
return v_res_5373_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(lean_object* v_00_u03b1_5374_, lean_object* v_ref_5375_, lean_object* v_msg_5376_, lean_object* v_declHint_5377_, lean_object* v___y_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_){
_start:
{
lean_object* v___x_5385_; 
v___x_5385_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_5375_, v_msg_5376_, v_declHint_5377_, v___y_5378_, v___y_5379_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_);
return v___x_5385_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___boxed(lean_object* v_00_u03b1_5386_, lean_object* v_ref_5387_, lean_object* v_msg_5388_, lean_object* v_declHint_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_){
_start:
{
lean_object* v_res_5397_; 
v_res_5397_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(v_00_u03b1_5386_, v_ref_5387_, v_msg_5388_, v_declHint_5389_, v___y_5390_, v___y_5391_, v___y_5392_, v___y_5393_, v___y_5394_, v___y_5395_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
lean_dec(v___y_5393_);
lean_dec_ref(v___y_5392_);
lean_dec(v___y_5391_);
lean_dec_ref(v___y_5390_);
lean_dec(v_ref_5387_);
return v_res_5397_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(lean_object* v_ref_5398_, lean_object* v_msgData_5399_, uint8_t v_severity_5400_, uint8_t v_isSilent_5401_, lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_){
_start:
{
lean_object* v___x_5409_; 
v___x_5409_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_5398_, v_msgData_5399_, v_severity_5400_, v_isSilent_5401_, v___y_5404_, v___y_5405_, v___y_5406_, v___y_5407_);
return v___x_5409_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___boxed(lean_object* v_ref_5410_, lean_object* v_msgData_5411_, lean_object* v_severity_5412_, lean_object* v_isSilent_5413_, lean_object* v___y_5414_, lean_object* v___y_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_, lean_object* v___y_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_){
_start:
{
uint8_t v_severity_boxed_5421_; uint8_t v_isSilent_boxed_5422_; lean_object* v_res_5423_; 
v_severity_boxed_5421_ = lean_unbox(v_severity_5412_);
v_isSilent_boxed_5422_ = lean_unbox(v_isSilent_5413_);
v_res_5423_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(v_ref_5410_, v_msgData_5411_, v_severity_boxed_5421_, v_isSilent_boxed_5422_, v___y_5414_, v___y_5415_, v___y_5416_, v___y_5417_, v___y_5418_, v___y_5419_);
lean_dec(v___y_5419_);
lean_dec_ref(v___y_5418_);
lean_dec(v___y_5417_);
lean_dec_ref(v___y_5416_);
lean_dec(v___y_5415_);
lean_dec_ref(v___y_5414_);
lean_dec(v_ref_5410_);
return v_res_5423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(lean_object* v_msgData_5424_, lean_object* v_macroStack_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_){
_start:
{
lean_object* v___x_5429_; 
v___x_5429_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_5424_, v_macroStack_5425_, v___y_5427_);
return v___x_5429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___boxed(lean_object* v_msgData_5430_, lean_object* v_macroStack_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_){
_start:
{
lean_object* v_res_5435_; 
v_res_5435_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(v_msgData_5430_, v_macroStack_5431_, v___y_5432_, v___y_5433_);
lean_dec(v___y_5433_);
lean_dec_ref(v___y_5432_);
return v_res_5435_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(lean_object* v_00_u03b1_5436_, lean_object* v_x_5437_, lean_object* v___y_5438_, lean_object* v___y_5439_){
_start:
{
lean_object* v___x_5440_; 
v___x_5440_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_5437_, v___y_5439_);
return v___x_5440_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___boxed(lean_object* v_00_u03b1_5441_, lean_object* v_x_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_){
_start:
{
lean_object* v_res_5445_; 
v_res_5445_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(v_00_u03b1_5441_, v_x_5442_, v___y_5443_, v___y_5444_);
lean_dec_ref(v___y_5443_);
lean_dec_ref(v_x_5442_);
return v_res_5445_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(lean_object* v_00_u03b1_5446_, lean_object* v_ref_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_){
_start:
{
lean_object* v___x_5451_; 
v___x_5451_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_5447_);
return v___x_5451_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___boxed(lean_object* v_00_u03b1_5452_, lean_object* v_ref_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_){
_start:
{
lean_object* v_res_5457_; 
v_res_5457_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(v_00_u03b1_5452_, v_ref_5453_, v___y_5454_, v___y_5455_);
lean_dec(v___y_5455_);
lean_dec_ref(v___y_5454_);
return v_res_5457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(lean_object* v_00_u03b1_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_){
_start:
{
lean_object* v___x_5462_; 
v___x_5462_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_5462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___boxed(lean_object* v_00_u03b1_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v_res_5467_; 
v_res_5467_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(v_00_u03b1_5463_, v___y_5464_, v___y_5465_);
lean_dec(v___y_5465_);
lean_dec_ref(v___y_5464_);
return v_res_5467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(lean_object* v_00_u03b1_5468_, lean_object* v_x_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_){
_start:
{
lean_object* v___x_5473_; 
v___x_5473_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_5469_, v___y_5470_, v___y_5471_);
return v___x_5473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___boxed(lean_object* v_00_u03b1_5474_, lean_object* v_x_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_){
_start:
{
lean_object* v_res_5479_; 
v_res_5479_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(v_00_u03b1_5474_, v_x_5475_, v___y_5476_, v___y_5477_);
lean_dec(v___y_5477_);
lean_dec_ref(v___y_5476_);
return v_res_5479_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(lean_object* v_00_u03b1_5480_, lean_object* v_x_5481_, uint8_t v_when_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_){
_start:
{
lean_object* v___x_5486_; 
v___x_5486_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_5481_, v_when_5482_, v___y_5483_, v___y_5484_);
return v___x_5486_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___boxed(lean_object* v_00_u03b1_5487_, lean_object* v_x_5488_, lean_object* v_when_5489_, lean_object* v___y_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_){
_start:
{
uint8_t v_when_boxed_5493_; lean_object* v_res_5494_; 
v_when_boxed_5493_ = lean_unbox(v_when_5489_);
v_res_5494_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(v_00_u03b1_5487_, v_x_5488_, v_when_boxed_5493_, v___y_5490_, v___y_5491_);
lean_dec(v___y_5491_);
lean_dec_ref(v___y_5490_);
return v_res_5494_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(lean_object* v_00_u03b1_5495_, lean_object* v_ref_5496_, lean_object* v_constName_5497_, lean_object* v___y_5498_, lean_object* v___y_5499_){
_start:
{
lean_object* v___x_5501_; 
v___x_5501_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_5496_, v_constName_5497_, v___y_5498_, v___y_5499_);
return v___x_5501_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___boxed(lean_object* v_00_u03b1_5502_, lean_object* v_ref_5503_, lean_object* v_constName_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_, lean_object* v___y_5507_){
_start:
{
lean_object* v_res_5508_; 
v_res_5508_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(v_00_u03b1_5502_, v_ref_5503_, v_constName_5504_, v___y_5505_, v___y_5506_);
lean_dec(v___y_5506_);
lean_dec_ref(v___y_5505_);
lean_dec(v_ref_5503_);
return v_res_5508_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(lean_object* v_msg_5509_, lean_object* v_declHint_5510_, lean_object* v___y_5511_, lean_object* v___y_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_){
_start:
{
lean_object* v___x_5518_; 
v___x_5518_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_5509_, v_declHint_5510_, v___y_5516_);
return v___x_5518_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___boxed(lean_object* v_msg_5519_, lean_object* v_declHint_5520_, lean_object* v___y_5521_, lean_object* v___y_5522_, lean_object* v___y_5523_, lean_object* v___y_5524_, lean_object* v___y_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_){
_start:
{
lean_object* v_res_5528_; 
v_res_5528_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(v_msg_5519_, v_declHint_5520_, v___y_5521_, v___y_5522_, v___y_5523_, v___y_5524_, v___y_5525_, v___y_5526_);
lean_dec(v___y_5526_);
lean_dec_ref(v___y_5525_);
lean_dec(v___y_5524_);
lean_dec_ref(v___y_5523_);
lean_dec(v___y_5522_);
lean_dec_ref(v___y_5521_);
return v_res_5528_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(lean_object* v_00_u03b1_5529_, lean_object* v_ref_5530_, lean_object* v_msg_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_, lean_object* v___y_5534_, lean_object* v___y_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_){
_start:
{
lean_object* v___x_5539_; 
v___x_5539_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_5530_, v_msg_5531_, v___y_5532_, v___y_5533_, v___y_5534_, v___y_5535_, v___y_5536_, v___y_5537_);
return v___x_5539_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___boxed(lean_object* v_00_u03b1_5540_, lean_object* v_ref_5541_, lean_object* v_msg_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_){
_start:
{
lean_object* v_res_5550_; 
v_res_5550_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(v_00_u03b1_5540_, v_ref_5541_, v_msg_5542_, v___y_5543_, v___y_5544_, v___y_5545_, v___y_5546_, v___y_5547_, v___y_5548_);
lean_dec(v___y_5548_);
lean_dec_ref(v___y_5547_);
lean_dec(v___y_5546_);
lean_dec_ref(v___y_5545_);
lean_dec(v___y_5544_);
lean_dec_ref(v___y_5543_);
lean_dec(v_ref_5541_);
return v_res_5550_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(lean_object* v_as_5551_, lean_object* v_as_x27_5552_, lean_object* v_b_5553_, lean_object* v_a_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_){
_start:
{
lean_object* v___x_5558_; 
v___x_5558_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_5552_, v_b_5553_, v___y_5555_, v___y_5556_);
return v___x_5558_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___boxed(lean_object* v_as_5559_, lean_object* v_as_x27_5560_, lean_object* v_b_5561_, lean_object* v_a_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_){
_start:
{
lean_object* v_res_5566_; 
v_res_5566_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(v_as_5559_, v_as_x27_5560_, v_b_5561_, v_a_5562_, v___y_5563_, v___y_5564_);
lean_dec(v___y_5564_);
lean_dec_ref(v___y_5563_);
lean_dec(v_as_x27_5560_);
lean_dec(v_as_5559_);
return v_res_5566_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(lean_object* v_00_u03b2_5567_, lean_object* v_m_5568_, lean_object* v_a_5569_){
_start:
{
lean_object* v___x_5570_; 
v___x_5570_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_5568_, v_a_5569_);
return v___x_5570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___boxed(lean_object* v_00_u03b2_5571_, lean_object* v_m_5572_, lean_object* v_a_5573_){
_start:
{
lean_object* v_res_5574_; 
v_res_5574_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(v_00_u03b2_5571_, v_m_5572_, v_a_5573_);
lean_dec(v_a_5573_);
lean_dec_ref(v_m_5572_);
return v_res_5574_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(lean_object* v_00_u03b1_5575_, lean_object* v_ref_5576_, lean_object* v_msg_5577_, lean_object* v_declHint_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_){
_start:
{
lean_object* v___x_5582_; 
v___x_5582_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_5576_, v_msg_5577_, v_declHint_5578_, v___y_5579_, v___y_5580_);
return v___x_5582_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___boxed(lean_object* v_00_u03b1_5583_, lean_object* v_ref_5584_, lean_object* v_msg_5585_, lean_object* v_declHint_5586_, lean_object* v___y_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_){
_start:
{
lean_object* v_res_5590_; 
v_res_5590_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(v_00_u03b1_5583_, v_ref_5584_, v_msg_5585_, v_declHint_5586_, v___y_5587_, v___y_5588_);
lean_dec(v___y_5588_);
lean_dec_ref(v___y_5587_);
lean_dec(v_ref_5584_);
return v_res_5590_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(lean_object* v_00_u03b2_5591_, lean_object* v_x_5592_, lean_object* v_x_5593_){
_start:
{
uint8_t v___x_5594_; 
v___x_5594_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_5592_, v_x_5593_);
return v___x_5594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___boxed(lean_object* v_00_u03b2_5595_, lean_object* v_x_5596_, lean_object* v_x_5597_){
_start:
{
uint8_t v_res_5598_; lean_object* v_r_5599_; 
v_res_5598_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(v_00_u03b2_5595_, v_x_5596_, v_x_5597_);
lean_dec_ref(v_x_5597_);
lean_dec_ref(v_x_5596_);
v_r_5599_ = lean_box(v_res_5598_);
return v_r_5599_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(lean_object* v_00_u03b2_5600_, lean_object* v_a_5601_, lean_object* v_x_5602_){
_start:
{
lean_object* v___x_5603_; 
v___x_5603_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_5601_, v_x_5602_);
return v___x_5603_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___boxed(lean_object* v_00_u03b2_5604_, lean_object* v_a_5605_, lean_object* v_x_5606_){
_start:
{
lean_object* v_res_5607_; 
v_res_5607_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(v_00_u03b2_5604_, v_a_5605_, v_x_5606_);
lean_dec(v_x_5606_);
lean_dec(v_a_5605_);
return v_res_5607_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(lean_object* v_msg_5608_, lean_object* v_declHint_5609_, lean_object* v___y_5610_, lean_object* v___y_5611_){
_start:
{
lean_object* v___x_5613_; 
v___x_5613_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_5608_, v_declHint_5609_, v___y_5611_);
return v___x_5613_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___boxed(lean_object* v_msg_5614_, lean_object* v_declHint_5615_, lean_object* v___y_5616_, lean_object* v___y_5617_, lean_object* v___y_5618_){
_start:
{
lean_object* v_res_5619_; 
v_res_5619_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(v_msg_5614_, v_declHint_5615_, v___y_5616_, v___y_5617_);
lean_dec(v___y_5617_);
lean_dec_ref(v___y_5616_);
return v_res_5619_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(lean_object* v_00_u03b2_5620_, lean_object* v_x_5621_, size_t v_x_5622_, lean_object* v_x_5623_){
_start:
{
uint8_t v___x_5624_; 
v___x_5624_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_5621_, v_x_5622_, v_x_5623_);
return v___x_5624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___boxed(lean_object* v_00_u03b2_5625_, lean_object* v_x_5626_, lean_object* v_x_5627_, lean_object* v_x_5628_){
_start:
{
size_t v_x_55437__boxed_5629_; uint8_t v_res_5630_; lean_object* v_r_5631_; 
v_x_55437__boxed_5629_ = lean_unbox_usize(v_x_5627_);
lean_dec(v_x_5627_);
v_res_5630_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(v_00_u03b2_5625_, v_x_5626_, v_x_55437__boxed_5629_, v_x_5628_);
lean_dec_ref(v_x_5628_);
lean_dec_ref(v_x_5626_);
v_r_5631_ = lean_box(v_res_5630_);
return v_r_5631_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(lean_object* v_00_u03b2_5632_, lean_object* v_keys_5633_, lean_object* v_vals_5634_, lean_object* v_heq_5635_, lean_object* v_i_5636_, lean_object* v_k_5637_){
_start:
{
uint8_t v___x_5638_; 
v___x_5638_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_5633_, v_i_5636_, v_k_5637_);
return v___x_5638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___boxed(lean_object* v_00_u03b2_5639_, lean_object* v_keys_5640_, lean_object* v_vals_5641_, lean_object* v_heq_5642_, lean_object* v_i_5643_, lean_object* v_k_5644_){
_start:
{
uint8_t v_res_5645_; lean_object* v_r_5646_; 
v_res_5645_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(v_00_u03b2_5639_, v_keys_5640_, v_vals_5641_, v_heq_5642_, v_i_5643_, v_k_5644_);
lean_dec_ref(v_k_5644_);
lean_dec_ref(v_vals_5641_);
lean_dec_ref(v_keys_5640_);
v_r_5646_ = lean_box(v_res_5645_);
return v_r_5646_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_5660_; lean_object* v___x_5661_; lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; 
v___x_5660_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_5661_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1));
v___x_5662_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3));
v___x_5663_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_5664_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5660_, v___x_5661_, v___x_5662_, v___x_5663_);
return v___x_5664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v___y_5665_){
_start:
{
lean_object* v_res_5666_; 
v_res_5666_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_5666_;
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
