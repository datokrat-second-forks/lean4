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
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
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
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
uint8_t l_Lean_Environment_hasExposedBody(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t l_Lean_getMaxHeight(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
extern lean_object* l_Lean_LocalContext_empty;
lean_object* l_Lean_registerVirtualStructure(lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getOptDerivingClasses___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_processDefDeriving___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_ConstantInfo_value_x21(lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "self"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 226, 111, 209, 39, 160, 197, 219)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Equiv"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2_value;
static const lean_string_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 253, 123, 237, 128, 91, 245, 83)}};
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(248, 223, 249, 79, 34, 43, 167, 75)}};
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___closed__0 = (const lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__6_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__7 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31_spec__42(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31_spec__42___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception: "};
static const lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__0 = (const lean_object*)&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__0_value;
static lean_once_cell_t l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__11(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1;
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
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "equiv"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(117, 128, 25, 164, 22, 153, 243, 50)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__2_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__3 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__3_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__4_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__5 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__5_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__6 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__6_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__7 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__8 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Command_elabNewtype___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__9;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__10 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__10_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__11 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__11_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__12 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__12_value;
static const lean_string_object l_Lean_Elab_Command_elabNewtype___lam__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__13 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Command_elabNewtype___lam__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___closed__14;
static const lean_ctor_object l_Lean_Elab_Command_elabNewtype___lam__2___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___boxed__const__1 = (const lean_object*)&l_Lean_Elab_Command_elabNewtype___lam__2___boxed__const__1_value;
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
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
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
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(lean_object* v_a_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v___x_294_; 
lean_inc_ref(v_a_286_);
v___x_294_ = l_Lean_Meta_mkEqRefl(v_a_286_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; uint8_t v___x_299_; uint8_t v___x_300_; uint8_t v___x_301_; lean_object* v___x_302_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_295_);
lean_dec_ref_known(v___x_294_, 1);
v___x_296_ = lean_unsigned_to_nat(1u);
v___x_297_ = lean_mk_empty_array_with_capacity(v___x_296_);
v___x_298_ = lean_array_push(v___x_297_, v_a_286_);
v___x_299_ = 0;
v___x_300_ = 1;
v___x_301_ = 1;
v___x_302_ = l_Lean_Meta_mkLambdaFVars(v___x_298_, v_a_295_, v___x_299_, v___x_300_, v___x_299_, v___x_300_, v___x_301_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec_ref(v___x_298_);
return v___x_302_;
}
else
{
lean_dec_ref(v_a_286_);
return v___x_294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0___boxed(lean_object* v_a_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_a_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
lean_dec(v___y_309_);
lean_dec_ref(v___y_308_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(lean_object* v_params_312_, lean_object* v_resultType_313_, lean_object* v_name_314_, lean_object* v_levelParams_315_, uint8_t v___x_316_, lean_object* v_a_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_){
_start:
{
lean_object* v___x_325_; uint8_t v___x_326_; uint8_t v___x_327_; uint8_t v___x_328_; lean_object* v___x_329_; 
lean_inc_ref(v_a_317_);
v___x_325_ = lean_array_push(v_params_312_, v_a_317_);
v___x_326_ = 0;
v___x_327_ = 1;
v___x_328_ = 1;
v___x_329_ = l_Lean_Meta_mkForallFVars(v___x_325_, v_resultType_313_, v___x_326_, v___x_327_, v___x_327_, v___x_328_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_331_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = l_Lean_Meta_mkLambdaFVars(v___x_325_, v_a_317_, v___x_326_, v___x_327_, v___x_326_, v___x_327_, v___x_328_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec_ref(v___x_325_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_333_; lean_object* v_env_334_; uint32_t v___x_335_; uint32_t v___x_336_; uint32_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_351_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc_n(v_a_332_, 2);
lean_dec_ref_known(v___x_331_, 1);
v___x_333_ = lean_st_ref_get(v___y_323_);
v_env_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc_ref(v_env_334_);
lean_dec(v___x_333_);
v___x_335_ = l_Lean_getMaxHeight(v_env_334_, v_a_332_);
v___x_336_ = 1;
v___x_337_ = lean_uint32_add(v___x_335_, v___x_336_);
v___x_338_ = lean_alloc_ctor(2, 0, 4);
lean_ctor_set_uint32(v___x_338_, 0, v___x_337_);
lean_inc(v_name_314_);
v___x_339_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_name_314_, v_levelParams_315_, v_a_330_, v_a_332_, v___x_338_, v___y_323_);
v_a_340_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_351_ == 0)
{
v___x_342_ = v___x_339_;
v_isShared_343_ = v_isSharedCheck_351_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_339_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_351_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
lean_ctor_set_tag(v___x_342_, 1);
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_350_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
lean_object* v___x_346_; 
lean_inc_ref(v___x_345_);
v___x_346_ = l_Lean_addDecl(v___x_345_, v___x_316_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_346_) == 0)
{
uint8_t v___x_347_; lean_object* v___x_348_; 
lean_dec_ref_known(v___x_346_, 1);
v___x_347_ = 4;
v___x_348_ = l_Lean_Meta_setInlineAttribute(v_name_314_, v___x_347_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v___x_349_; 
lean_dec_ref_known(v___x_348_, 1);
v___x_349_ = l_Lean_compileDecl(v___x_345_, v___x_327_, v___y_322_, v___y_323_);
return v___x_349_;
}
else
{
lean_dec_ref(v___x_345_);
return v___x_348_;
}
}
else
{
lean_dec_ref(v___x_345_);
lean_dec(v_name_314_);
return v___x_346_;
}
}
}
}
else
{
lean_object* v_a_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_359_; 
lean_dec(v_a_330_);
lean_dec(v_levelParams_315_);
lean_dec(v_name_314_);
v_a_352_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_359_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_359_ == 0)
{
v___x_354_ = v___x_331_;
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_a_352_);
lean_dec(v___x_331_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_359_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
lean_object* v___x_357_; 
if (v_isShared_355_ == 0)
{
v___x_357_ = v___x_354_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_a_352_);
v___x_357_ = v_reuseFailAlloc_358_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
return v___x_357_;
}
}
}
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec_ref(v___x_325_);
lean_dec_ref(v_a_317_);
lean_dec(v_levelParams_315_);
lean_dec(v_name_314_);
v_a_360_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_329_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_329_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed(lean_object* v_params_368_, lean_object* v_resultType_369_, lean_object* v_name_370_, lean_object* v_levelParams_371_, lean_object* v___x_372_, lean_object* v_a_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
uint8_t v___x_12828__boxed_381_; lean_object* v_res_382_; 
v___x_12828__boxed_381_ = lean_unbox(v___x_372_);
v_res_382_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_368_, v_resultType_369_, v_name_370_, v_levelParams_371_, v___x_12828__boxed_381_, v_a_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(lean_object* v_k_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v_b_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; 
lean_inc(v___y_390_);
lean_inc_ref(v___y_389_);
lean_inc(v___y_388_);
lean_inc_ref(v___y_387_);
lean_inc(v___y_385_);
lean_inc_ref(v___y_384_);
v___x_392_ = lean_apply_8(v_k_383_, v_b_386_, v___y_384_, v___y_385_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, lean_box(0));
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed(lean_object* v_k_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v_b_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0(v_k_393_, v___y_394_, v___y_395_, v_b_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(lean_object* v_name_403_, uint8_t v_bi_404_, lean_object* v_type_405_, lean_object* v_k_406_, uint8_t v_kind_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_){
_start:
{
lean_object* v___f_415_; lean_object* v___x_416_; 
lean_inc(v___y_409_);
lean_inc_ref(v___y_408_);
v___f_415_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_415_, 0, v_k_406_);
lean_closure_set(v___f_415_, 1, v___y_408_);
lean_closure_set(v___f_415_, 2, v___y_409_);
v___x_416_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_403_, v_bi_404_, v_type_405_, v___f_415_, v_kind_407_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
if (lean_obj_tag(v___x_416_) == 0)
{
return v___x_416_;
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg___boxed(lean_object* v_name_425_, lean_object* v_bi_426_, lean_object* v_type_427_, lean_object* v_k_428_, lean_object* v_kind_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
uint8_t v_bi_boxed_437_; uint8_t v_kind_boxed_438_; lean_object* v_res_439_; 
v_bi_boxed_437_ = lean_unbox(v_bi_426_);
v_kind_boxed_438_ = lean_unbox(v_kind_429_);
v_res_439_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_425_, v_bi_boxed_437_, v_type_427_, v_k_428_, v_kind_boxed_438_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(lean_object* v_name_440_, lean_object* v_type_441_, lean_object* v_k_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_){
_start:
{
uint8_t v___x_450_; uint8_t v___x_451_; lean_object* v___x_452_; 
v___x_450_ = 0;
v___x_451_ = 0;
v___x_452_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_440_, v___x_450_, v_type_441_, v_k_442_, v___x_451_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg___boxed(lean_object* v_name_453_, lean_object* v_type_454_, lean_object* v_k_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_453_, v_type_454_, v_k_455_, v___y_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(lean_object* v_params_464_, lean_object* v_levelParams_465_, uint8_t v___x_466_, lean_object* v_name_467_, lean_object* v_argName_468_, lean_object* v_argType_469_, lean_object* v_resultType_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___x_478_; lean_object* v___f_479_; lean_object* v___x_480_; 
v___x_478_ = lean_box(v___x_466_);
v___f_479_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1___boxed), 13, 5);
lean_closure_set(v___f_479_, 0, v_params_464_);
lean_closure_set(v___f_479_, 1, v_resultType_470_);
lean_closure_set(v___f_479_, 2, v_name_467_);
lean_closure_set(v___f_479_, 3, v_levelParams_465_);
lean_closure_set(v___f_479_, 4, v___x_478_);
v___x_480_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_argName_468_, v_argType_469_, v___f_479_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed(lean_object* v_params_481_, lean_object* v_levelParams_482_, lean_object* v___x_483_, lean_object* v_name_484_, lean_object* v_argName_485_, lean_object* v_argType_486_, lean_object* v_resultType_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
uint8_t v___x_13033__boxed_495_; lean_object* v_res_496_; 
v___x_13033__boxed_495_ = lean_unbox(v___x_483_);
v_res_496_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(v_params_481_, v_levelParams_482_, v___x_13033__boxed_495_, v_name_484_, v_argName_485_, v_argType_486_, v_resultType_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(lean_object* v___f_505_, lean_object* v_ctorName_506_, lean_object* v_fieldName_507_, lean_object* v___x_508_, lean_object* v___x_509_, lean_object* v_projName_510_, lean_object* v___x_511_, lean_object* v_params_512_, lean_object* v___f_513_, lean_object* v_equivName_514_, lean_object* v_levelParams_515_, uint8_t v___x_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v___x_524_; 
lean_inc_ref(v___f_505_);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
lean_inc_ref(v___x_509_);
lean_inc_ref(v___x_508_);
lean_inc(v_fieldName_507_);
lean_inc(v_ctorName_506_);
v___x_524_ = lean_apply_11(v___f_505_, v_ctorName_506_, v_fieldName_507_, v___x_508_, v___x_509_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v___x_525_; lean_object* v___x_526_; 
lean_dec_ref_known(v___x_524_, 1);
v___x_525_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__1));
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
lean_inc(v___y_518_);
lean_inc_ref(v___y_517_);
lean_inc_ref(v___x_508_);
lean_inc_ref(v___x_509_);
lean_inc(v_projName_510_);
v___x_526_ = lean_apply_11(v___f_505_, v_projName_510_, v___x_525_, v___x_509_, v___x_508_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_, lean_box(0));
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
lean_dec_ref_known(v___x_526_, 1);
lean_inc(v___x_511_);
v___x_527_ = l_Lean_mkConst(v_ctorName_506_, v___x_511_);
v___x_528_ = l_Lean_mkAppN(v___x_527_, v_params_512_);
v___x_529_ = l_Lean_mkConst(v_projName_510_, v___x_511_);
v___x_530_ = l_Lean_mkAppN(v___x_529_, v_params_512_);
lean_inc_ref(v___f_513_);
v___x_531_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_fieldName_507_, v___x_508_, v___f_513_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_533_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_531_, 1);
v___x_533_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v___x_525_, v___x_509_, v___f_513_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___x_533_, 1);
v___x_535_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___closed__4));
v___x_536_ = lean_unsigned_to_nat(4u);
v___x_537_ = lean_mk_empty_array_with_capacity(v___x_536_);
v___x_538_ = lean_array_push(v___x_537_, v___x_528_);
v___x_539_ = lean_array_push(v___x_538_, v___x_530_);
v___x_540_ = lean_array_push(v___x_539_, v_a_532_);
v___x_541_ = lean_array_push(v___x_540_, v_a_534_);
v___x_542_ = l_Lean_Meta_mkAppM(v___x_535_, v___x_541_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v_a_543_; lean_object* v___x_544_; 
v_a_543_ = lean_ctor_get(v___x_542_, 0);
lean_inc_n(v_a_543_, 2);
lean_dec_ref_known(v___x_542_, 1);
lean_inc(v___y_522_);
lean_inc_ref(v___y_521_);
lean_inc(v___y_520_);
lean_inc_ref(v___y_519_);
v___x_544_ = lean_infer_type(v_a_543_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; uint8_t v___x_546_; uint8_t v___x_547_; uint8_t v___x_548_; lean_object* v___x_549_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = 0;
v___x_547_ = 1;
v___x_548_ = 1;
v___x_549_ = l_Lean_Meta_mkForallFVars(v_params_512_, v_a_545_, v___x_546_, v___x_547_, v___x_547_, v___x_548_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_551_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
lean_inc(v_a_550_);
lean_dec_ref_known(v___x_549_, 1);
v___x_551_ = l_Lean_Meta_mkLambdaFVars(v_params_512_, v_a_543_, v___x_546_, v___x_547_, v___x_546_, v___x_547_, v___x_548_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_570_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
lean_inc(v_a_552_);
lean_dec_ref_known(v___x_551_, 1);
v___x_553_ = lean_box(1);
lean_inc(v_equivName_514_);
v___x_554_ = l_Lean_mkDefinitionValInferringUnsafe___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__3___redArg(v_equivName_514_, v_levelParams_515_, v_a_550_, v_a_552_, v___x_553_, v___y_522_);
v_a_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_570_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_570_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_570_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
lean_ctor_set_tag(v___x_557_, 1);
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_569_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; 
lean_inc_ref(v___x_560_);
v___x_561_ = l_Lean_addDecl(v___x_560_, v___x_516_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_561_) == 0)
{
uint8_t v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; lean_object* v___x_565_; 
lean_dec_ref_known(v___x_561_, 1);
v___x_562_ = 0;
lean_inc_n(v_equivName_514_, 2);
v___x_563_ = l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg(v_equivName_514_, v___x_562_, v___y_520_, v___y_522_);
lean_dec_ref(v___x_563_);
v___x_564_ = 2;
v___x_565_ = l_Lean_Meta_setInlineAttribute(v_equivName_514_, v___x_564_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v___x_566_; 
lean_dec_ref_known(v___x_565_, 1);
v___x_566_ = l_Lean_compileDecl(v___x_560_, v___x_547_, v___y_521_, v___y_522_);
if (lean_obj_tag(v___x_566_) == 0)
{
uint8_t v___x_567_; lean_object* v___x_568_; 
lean_dec_ref_known(v___x_566_, 1);
v___x_567_ = 0;
v___x_568_ = l_Lean_Meta_Transport_addTransportDecl(v_equivName_514_, v___x_567_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
return v___x_568_;
}
else
{
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_equivName_514_);
return v___x_566_;
}
}
else
{
lean_dec_ref(v___x_560_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_equivName_514_);
return v___x_565_;
}
}
else
{
lean_dec_ref(v___x_560_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_equivName_514_);
return v___x_561_;
}
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec(v_a_550_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
v_a_571_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_551_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_551_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec(v_a_543_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
v_a_579_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_549_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_549_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
else
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_594_; 
lean_dec(v_a_543_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
v_a_587_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_594_ == 0)
{
v___x_589_ = v___x_544_;
v_isShared_590_ = v_isSharedCheck_594_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_544_);
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
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
v_a_595_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_542_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_542_);
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
lean_dec(v_a_532_);
lean_dec_ref(v___x_530_);
lean_dec_ref(v___x_528_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
v_a_603_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_533_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_533_);
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
lean_dec_ref(v___x_530_);
lean_dec_ref(v___x_528_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
lean_dec_ref(v___f_513_);
lean_dec_ref(v___x_509_);
v_a_611_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_531_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_531_);
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
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
lean_dec_ref(v___f_513_);
lean_dec(v___x_511_);
lean_dec(v_projName_510_);
lean_dec_ref(v___x_509_);
lean_dec_ref(v___x_508_);
lean_dec(v_fieldName_507_);
lean_dec(v_ctorName_506_);
return v___x_526_;
}
}
else
{
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v_levelParams_515_);
lean_dec(v_equivName_514_);
lean_dec_ref(v___f_513_);
lean_dec(v___x_511_);
lean_dec(v_projName_510_);
lean_dec_ref(v___x_509_);
lean_dec_ref(v___x_508_);
lean_dec(v_fieldName_507_);
lean_dec(v_ctorName_506_);
lean_dec_ref(v___f_505_);
return v___x_524_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed(lean_object** _args){
lean_object* v___f_619_ = _args[0];
lean_object* v_ctorName_620_ = _args[1];
lean_object* v_fieldName_621_ = _args[2];
lean_object* v___x_622_ = _args[3];
lean_object* v___x_623_ = _args[4];
lean_object* v_projName_624_ = _args[5];
lean_object* v___x_625_ = _args[6];
lean_object* v_params_626_ = _args[7];
lean_object* v___f_627_ = _args[8];
lean_object* v_equivName_628_ = _args[9];
lean_object* v_levelParams_629_ = _args[10];
lean_object* v___x_630_ = _args[11];
lean_object* v___y_631_ = _args[12];
lean_object* v___y_632_ = _args[13];
lean_object* v___y_633_ = _args[14];
lean_object* v___y_634_ = _args[15];
lean_object* v___y_635_ = _args[16];
lean_object* v___y_636_ = _args[17];
lean_object* v___y_637_ = _args[18];
_start:
{
uint8_t v___x_13084__boxed_638_; lean_object* v_res_639_; 
v___x_13084__boxed_638_ = lean_unbox(v___x_630_);
v_res_639_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(v___f_619_, v_ctorName_620_, v_fieldName_621_, v___x_622_, v___x_623_, v_projName_624_, v___x_625_, v_params_626_, v___f_627_, v_equivName_628_, v_levelParams_629_, v___x_13084__boxed_638_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
lean_dec_ref(v_params_626_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(lean_object* v_msgData_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_){
_start:
{
lean_object* v___x_646_; lean_object* v_env_647_; lean_object* v___x_648_; lean_object* v_toCold_649_; lean_object* v_mctx_650_; lean_object* v_lctx_651_; lean_object* v_options_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_646_ = lean_st_ref_get(v___y_644_);
v_env_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc_ref(v_env_647_);
lean_dec(v___x_646_);
v___x_648_ = lean_st_ref_get(v___y_642_);
v_toCold_649_ = lean_ctor_get(v___y_643_, 0);
v_mctx_650_ = lean_ctor_get(v___x_648_, 0);
lean_inc_ref(v_mctx_650_);
lean_dec(v___x_648_);
v_lctx_651_ = lean_ctor_get(v___y_641_, 2);
v_options_652_ = lean_ctor_get(v_toCold_649_, 2);
lean_inc_ref(v_options_652_);
lean_inc_ref(v_lctx_651_);
v___x_653_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_653_, 0, v_env_647_);
lean_ctor_set(v___x_653_, 1, v_mctx_650_);
lean_ctor_set(v___x_653_, 2, v_lctx_651_);
lean_ctor_set(v___x_653_, 3, v_options_652_);
v___x_654_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set(v___x_654_, 1, v_msgData_640_);
v___x_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10___boxed(lean_object* v_msgData_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v_res_662_; 
v_res_662_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v_msgData_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
return v_res_662_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(lean_object* v_opts_663_, lean_object* v_opt_664_){
_start:
{
lean_object* v_name_665_; lean_object* v_defValue_666_; lean_object* v_map_667_; lean_object* v___x_668_; 
v_name_665_ = lean_ctor_get(v_opt_664_, 0);
v_defValue_666_ = lean_ctor_get(v_opt_664_, 1);
v_map_667_ = lean_ctor_get(v_opts_663_, 0);
v___x_668_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_667_, v_name_665_);
if (lean_obj_tag(v___x_668_) == 0)
{
uint8_t v___x_669_; 
v___x_669_ = lean_unbox(v_defValue_666_);
return v___x_669_;
}
else
{
lean_object* v_val_670_; 
v_val_670_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_val_670_);
lean_dec_ref_known(v___x_668_, 1);
if (lean_obj_tag(v_val_670_) == 1)
{
uint8_t v_v_671_; 
v_v_671_ = lean_ctor_get_uint8(v_val_670_, 0);
lean_dec_ref_known(v_val_670_, 0);
return v_v_671_;
}
else
{
uint8_t v___x_672_; 
lean_dec(v_val_670_);
v___x_672_ = lean_unbox(v_defValue_666_);
return v___x_672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13___boxed(lean_object* v_opts_673_, lean_object* v_opt_674_){
_start:
{
uint8_t v_res_675_; lean_object* v_r_676_; 
v_res_675_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_673_, v_opt_674_);
lean_dec_ref(v_opt_674_);
lean_dec_ref(v_opts_673_);
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_box(1);
v___x_678_ = l_Lean_MessageData_ofFormat(v___x_677_);
return v___x_678_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__2));
v___x_683_ = l_Lean_MessageData_ofFormat(v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(lean_object* v_x_684_, lean_object* v_x_685_){
_start:
{
if (lean_obj_tag(v_x_685_) == 0)
{
return v_x_684_;
}
else
{
lean_object* v_head_686_; lean_object* v_tail_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_709_; 
v_head_686_ = lean_ctor_get(v_x_685_, 0);
v_tail_687_ = lean_ctor_get(v_x_685_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v_x_685_);
if (v_isSharedCheck_709_ == 0)
{
v___x_689_ = v_x_685_;
v_isShared_690_ = v_isSharedCheck_709_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_tail_687_);
lean_inc(v_head_686_);
lean_dec(v_x_685_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_709_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v_before_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_707_; 
v_before_691_ = lean_ctor_get(v_head_686_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v_head_686_);
if (v_isSharedCheck_707_ == 0)
{
lean_object* v_unused_708_; 
v_unused_708_ = lean_ctor_get(v_head_686_, 1);
lean_dec(v_unused_708_);
v___x_693_ = v_head_686_;
v_isShared_694_ = v_isSharedCheck_707_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_before_691_);
lean_dec(v_head_686_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_707_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_695_; lean_object* v___x_697_; 
v___x_695_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_694_ == 0)
{
lean_ctor_set_tag(v___x_693_, 7);
lean_ctor_set(v___x_693_, 1, v___x_695_);
lean_ctor_set(v___x_693_, 0, v_x_684_);
v___x_697_ = v___x_693_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_x_684_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v___x_695_);
v___x_697_ = v_reuseFailAlloc_706_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_698_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__3);
if (v_isShared_690_ == 0)
{
lean_ctor_set_tag(v___x_689_, 7);
lean_ctor_set(v___x_689_, 1, v___x_698_);
lean_ctor_set(v___x_689_, 0, v___x_697_);
v___x_700_ = v___x_689_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_697_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v___x_698_);
v___x_700_ = v_reuseFailAlloc_705_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_701_ = l_Lean_MessageData_ofSyntax(v_before_691_);
v___x_702_ = l_Lean_indentD(v___x_701_);
v___x_703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_703_, 0, v___x_700_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
v_x_684_ = v___x_703_;
v_x_685_ = v_tail_687_;
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
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__1));
v___x_714_ = l_Lean_MessageData_ofFormat(v___x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(lean_object* v_msgData_715_, lean_object* v_macroStack_716_, lean_object* v___y_717_){
_start:
{
lean_object* v_toCold_719_; lean_object* v_options_720_; lean_object* v___x_721_; uint8_t v___x_722_; 
v_toCold_719_ = lean_ctor_get(v___y_717_, 0);
v_options_720_ = lean_ctor_get(v_toCold_719_, 2);
v___x_721_ = l_Lean_Elab_pp_macroStack;
v___x_722_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_720_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; 
lean_dec(v_macroStack_716_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v_msgData_715_);
return v___x_723_;
}
else
{
if (lean_obj_tag(v_macroStack_716_) == 0)
{
lean_object* v___x_724_; 
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_msgData_715_);
return v___x_724_;
}
else
{
lean_object* v_head_725_; lean_object* v_after_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_741_; 
v_head_725_ = lean_ctor_get(v_macroStack_716_, 0);
lean_inc(v_head_725_);
v_after_726_ = lean_ctor_get(v_head_725_, 1);
v_isSharedCheck_741_ = !lean_is_exclusive(v_head_725_);
if (v_isSharedCheck_741_ == 0)
{
lean_object* v_unused_742_; 
v_unused_742_ = lean_ctor_get(v_head_725_, 0);
lean_dec(v_unused_742_);
v___x_728_ = v_head_725_;
v_isShared_729_ = v_isSharedCheck_741_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_after_726_);
lean_dec(v_head_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_741_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___x_730_; lean_object* v___x_732_; 
v___x_730_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_729_ == 0)
{
lean_ctor_set_tag(v___x_728_, 7);
lean_ctor_set(v___x_728_, 1, v___x_730_);
lean_ctor_set(v___x_728_, 0, v_msgData_715_);
v___x_732_ = v___x_728_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_msgData_715_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v___x_730_);
v___x_732_ = v_reuseFailAlloc_740_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_msgData_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_733_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_734_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_734_, 0, v___x_732_);
lean_ctor_set(v___x_734_, 1, v___x_733_);
v___x_735_ = l_Lean_MessageData_ofSyntax(v_after_726_);
v___x_736_ = l_Lean_indentD(v___x_735_);
v_msgData_737_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_737_, 0, v___x_734_);
lean_ctor_set(v_msgData_737_, 1, v___x_736_);
v___x_738_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_737_, v_macroStack_716_);
v___x_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
return v___x_739_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___boxed(lean_object* v_msgData_743_, lean_object* v_macroStack_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_743_, v_macroStack_744_, v___y_745_);
lean_dec_ref(v___y_745_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(lean_object* v_msg_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v_ref_756_; lean_object* v_macroStack_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_770_; 
v_ref_756_ = lean_ctor_get(v___y_753_, 2);
v_macroStack_757_ = lean_ctor_get(v___y_749_, 1);
v___x_758_ = l_Lean_Elab_getBetterRef(v_ref_756_, v_macroStack_757_);
v___x_759_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v_msg_748_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref(v___x_759_);
lean_inc(v_macroStack_757_);
v___x_761_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_a_760_, v_macroStack_757_, v___y_753_);
v_a_762_ = lean_ctor_get(v___x_761_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_761_);
if (v_isSharedCheck_770_ == 0)
{
v___x_764_ = v___x_761_;
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_761_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_770_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_758_);
lean_ctor_set(v___x_766_, 1, v_a_762_);
if (v_isShared_765_ == 0)
{
lean_ctor_set_tag(v___x_764_, 1);
lean_ctor_set(v___x_764_, 0, v___x_766_);
v___x_768_ = v___x_764_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg___boxed(lean_object* v_msg_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(lean_object* v_as_780_, size_t v_i_781_, size_t v_stop_782_, lean_object* v_b_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_a_789_; uint8_t v___x_793_; 
v___x_793_ = lean_usize_dec_eq(v_i_781_, v_stop_782_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = lean_array_uget_borrowed(v_as_780_, v_i_781_);
v___x_795_ = l_Lean_Expr_fvarId_x21(v___x_794_);
lean_inc(v___x_795_);
v___x_796_ = l_Lean_FVarId_getDecl___redArg(v___x_795_, v___y_784_, v___y_785_, v___y_786_);
if (lean_obj_tag(v___x_796_) == 0)
{
lean_object* v_a_797_; uint8_t v___x_798_; uint8_t v___x_799_; 
v_a_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_a_797_);
lean_dec_ref_known(v___x_796_, 1);
v___x_798_ = l_Lean_LocalDecl_binderInfo(v_a_797_);
lean_dec(v_a_797_);
v___x_799_ = l_Lean_BinderInfo_isExplicit(v___x_798_);
if (v___x_799_ == 0)
{
lean_dec(v___x_795_);
v_a_789_ = v_b_783_;
goto v___jp_788_;
}
else
{
uint8_t v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_800_ = 1;
v___x_801_ = lean_box(v___x_800_);
v___x_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_795_);
lean_ctor_set(v___x_802_, 1, v___x_801_);
v___x_803_ = lean_array_push(v_b_783_, v___x_802_);
v_a_789_ = v___x_803_;
goto v___jp_788_;
}
}
else
{
lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_811_; 
lean_dec(v___x_795_);
lean_dec_ref(v_b_783_);
v_a_804_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_811_ == 0)
{
v___x_806_ = v___x_796_;
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_796_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_811_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v___x_809_; 
if (v_isShared_807_ == 0)
{
v___x_809_ = v___x_806_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_804_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
}
}
else
{
lean_object* v___x_812_; 
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v_b_783_);
return v___x_812_;
}
v___jp_788_:
{
size_t v___x_790_; size_t v___x_791_; 
v___x_790_ = ((size_t)1ULL);
v___x_791_ = lean_usize_add(v_i_781_, v___x_790_);
v_i_781_ = v___x_791_;
v_b_783_ = v_a_789_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg___boxed(lean_object* v_as_813_, lean_object* v_i_814_, lean_object* v_stop_815_, lean_object* v_b_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
size_t v_i_boxed_821_; size_t v_stop_boxed_822_; lean_object* v_res_823_; 
v_i_boxed_821_ = lean_unbox_usize(v_i_814_);
lean_dec(v_i_814_);
v_stop_boxed_822_ = lean_unbox_usize(v_stop_815_);
lean_dec(v_stop_815_);
v_res_823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_813_, v_i_boxed_821_, v_stop_boxed_822_, v_b_816_, v___y_817_, v___y_818_, v___y_819_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec_ref(v_as_813_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(lean_object* v_as_826_, lean_object* v_start_827_, lean_object* v_stop_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_){
_start:
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___closed__0));
v___x_837_ = lean_nat_dec_lt(v_start_827_, v_stop_828_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; 
v___x_838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
return v___x_838_;
}
else
{
lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_839_ = lean_array_get_size(v_as_826_);
v___x_840_ = lean_nat_dec_le(v_stop_828_, v___x_839_);
if (v___x_840_ == 0)
{
uint8_t v___x_841_; 
v___x_841_ = lean_nat_dec_lt(v_start_827_, v___x_839_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
v___x_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_842_, 0, v___x_836_);
return v___x_842_;
}
else
{
size_t v___x_843_; size_t v___x_844_; lean_object* v___x_845_; 
v___x_843_ = lean_usize_of_nat(v_start_827_);
v___x_844_ = lean_usize_of_nat(v___x_839_);
v___x_845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_826_, v___x_843_, v___x_844_, v___x_836_, v___y_831_, v___y_833_, v___y_834_);
return v___x_845_;
}
}
else
{
size_t v___x_846_; size_t v___x_847_; lean_object* v___x_848_; 
v___x_846_ = lean_usize_of_nat(v_start_827_);
v___x_847_ = lean_usize_of_nat(v_stop_828_);
v___x_848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_826_, v___x_846_, v___x_847_, v___x_836_, v___y_831_, v___y_833_, v___y_834_);
return v___x_848_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2___boxed(lean_object* v_as_849_, lean_object* v_start_850_, lean_object* v_stop_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_as_849_, v_start_850_, v_stop_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v_stop_851_);
lean_dec(v_start_850_);
lean_dec_ref(v_as_849_);
return v_res_859_;
}
}
static lean_object* _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__0));
v___x_862_ = l_Lean_stringToMessageData(v___x_861_);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(lean_object* v_value_863_, lean_object* v_declName_864_, lean_object* v___x_865_, lean_object* v_levelParams_866_, lean_object* v_ctorName_867_, lean_object* v_fieldName_868_, lean_object* v_projName_869_, lean_object* v___f_870_, lean_object* v_equivName_871_, lean_object* v_params_872_, lean_object* v_resultType_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
lean_object* v___x_921_; 
lean_inc(v___y_879_);
lean_inc_ref(v___y_878_);
lean_inc(v___y_877_);
lean_inc_ref(v___y_876_);
lean_inc_ref(v_resultType_873_);
v___x_921_ = lean_whnf(v_resultType_873_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; uint8_t v___x_923_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
lean_dec_ref_known(v___x_921_, 1);
v___x_923_ = l_Lean_Expr_isSort(v_a_922_);
lean_dec(v_a_922_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v_a_928_; lean_object* v___x_930_; uint8_t v_isShared_931_; uint8_t v_isSharedCheck_935_; 
lean_dec_ref(v_params_872_);
lean_dec(v_equivName_871_);
lean_dec_ref(v___f_870_);
lean_dec(v_projName_869_);
lean_dec(v_fieldName_868_);
lean_dec(v_ctorName_867_);
lean_dec(v_levelParams_866_);
lean_dec(v___x_865_);
lean_dec(v_declName_864_);
lean_dec_ref(v_value_863_);
v___x_924_ = lean_obj_once(&l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1, &l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1_once, _init_l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___closed__1);
v___x_925_ = l_Lean_indentExpr(v_resultType_873_);
v___x_926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_924_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_926_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
v_a_928_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_935_ == 0)
{
v___x_930_ = v___x_927_;
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
else
{
lean_inc(v_a_928_);
lean_dec(v___x_927_);
v___x_930_ = lean_box(0);
v_isShared_931_ = v_isSharedCheck_935_;
goto v_resetjp_929_;
}
v_resetjp_929_:
{
lean_object* v___x_933_; 
if (v_isShared_931_ == 0)
{
v___x_933_ = v___x_930_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_928_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
}
else
{
lean_dec_ref(v_resultType_873_);
goto v___jp_881_;
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_943_; 
lean_dec_ref(v_resultType_873_);
lean_dec_ref(v_params_872_);
lean_dec(v_equivName_871_);
lean_dec_ref(v___f_870_);
lean_dec(v_projName_869_);
lean_dec(v_fieldName_868_);
lean_dec(v_ctorName_867_);
lean_dec(v_levelParams_866_);
lean_dec(v___x_865_);
lean_dec(v_declName_864_);
lean_dec_ref(v_value_863_);
v_a_936_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_943_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_943_ == 0)
{
v___x_938_ = v___x_921_;
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v___x_921_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_943_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_939_ == 0)
{
v___x_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v_a_936_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
}
v___jp_881_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
lean_inc_ref(v_params_872_);
v___x_882_ = l_Lean_Expr_beta(v_value_863_, v_params_872_);
lean_inc(v___x_865_);
lean_inc(v_declName_864_);
v___x_883_ = l_Lean_mkConst(v_declName_864_, v___x_865_);
v___x_884_ = l_Lean_mkAppN(v___x_883_, v_params_872_);
v___x_885_ = lean_unsigned_to_nat(0u);
v___x_886_ = lean_array_get_size(v_params_872_);
v___x_887_ = l_Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2(v_params_872_, v___x_885_, v___x_886_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_889_; lean_object* v_env_890_; uint8_t v___x_891_; lean_object* v___x_892_; lean_object* v___f_893_; lean_object* v___x_894_; lean_object* v___f_895_; lean_object* v___x_896_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref_known(v___x_887_, 1);
v___x_889_ = lean_st_ref_get(v___y_879_);
v_env_890_ = lean_ctor_get(v___x_889_, 0);
lean_inc_ref(v_env_890_);
lean_dec(v___x_889_);
v___x_891_ = l_Lean_Environment_hasExposedBody(v_env_890_, v_declName_864_);
v___x_892_ = lean_box(v___x_891_);
lean_inc(v_levelParams_866_);
lean_inc_ref(v_params_872_);
v___f_893_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2___boxed), 14, 3);
lean_closure_set(v___f_893_, 0, v_params_872_);
lean_closure_set(v___f_893_, 1, v_levelParams_866_);
lean_closure_set(v___f_893_, 2, v___x_892_);
v___x_894_ = lean_box(v___x_891_);
v___f_895_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3___boxed), 19, 12);
lean_closure_set(v___f_895_, 0, v___f_893_);
lean_closure_set(v___f_895_, 1, v_ctorName_867_);
lean_closure_set(v___f_895_, 2, v_fieldName_868_);
lean_closure_set(v___f_895_, 3, v___x_882_);
lean_closure_set(v___f_895_, 4, v___x_884_);
lean_closure_set(v___f_895_, 5, v_projName_869_);
lean_closure_set(v___f_895_, 6, v___x_865_);
lean_closure_set(v___f_895_, 7, v_params_872_);
lean_closure_set(v___f_895_, 8, v___f_870_);
lean_closure_set(v___f_895_, 9, v_equivName_871_);
lean_closure_set(v___f_895_, 10, v_levelParams_866_);
lean_closure_set(v___f_895_, 11, v___x_894_);
v___x_896_ = l_Lean_Meta_withNewBinderInfos___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__6___redArg(v_a_888_, v___f_895_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v_a_888_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_903_ == 0)
{
lean_object* v_unused_904_; 
v_unused_904_ = lean_ctor_get(v___x_896_, 0);
lean_dec(v_unused_904_);
v___x_898_ = v___x_896_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_dec(v___x_896_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 0, v___x_886_);
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v___x_886_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
else
{
lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_912_; 
v_a_905_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_912_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_912_ == 0)
{
v___x_907_ = v___x_896_;
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_896_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_912_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_910_; 
if (v_isShared_908_ == 0)
{
v___x_910_ = v___x_907_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v_a_905_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
}
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec_ref(v___x_884_);
lean_dec_ref(v___x_882_);
lean_dec_ref(v_params_872_);
lean_dec(v_equivName_871_);
lean_dec_ref(v___f_870_);
lean_dec(v_projName_869_);
lean_dec(v_fieldName_868_);
lean_dec(v_ctorName_867_);
lean_dec(v_levelParams_866_);
lean_dec(v___x_865_);
lean_dec(v_declName_864_);
v_a_913_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_887_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_887_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed(lean_object** _args){
lean_object* v_value_944_ = _args[0];
lean_object* v_declName_945_ = _args[1];
lean_object* v___x_946_ = _args[2];
lean_object* v_levelParams_947_ = _args[3];
lean_object* v_ctorName_948_ = _args[4];
lean_object* v_fieldName_949_ = _args[5];
lean_object* v_projName_950_ = _args[6];
lean_object* v___f_951_ = _args[7];
lean_object* v_equivName_952_ = _args[8];
lean_object* v_params_953_ = _args[9];
lean_object* v_resultType_954_ = _args[10];
lean_object* v___y_955_ = _args[11];
lean_object* v___y_956_ = _args[12];
lean_object* v___y_957_ = _args[13];
lean_object* v___y_958_ = _args[14];
lean_object* v___y_959_ = _args[15];
lean_object* v___y_960_ = _args[16];
lean_object* v___y_961_ = _args[17];
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4(v_value_944_, v_declName_945_, v___x_946_, v_levelParams_947_, v_ctorName_948_, v_fieldName_949_, v_projName_950_, v___f_951_, v_equivName_952_, v_params_953_, v_resultType_954_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v___y_956_);
lean_dec_ref(v___y_955_);
return v_res_962_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = l_instMonadEIO___redArg();
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object* v_msg_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v_toApplicative_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_1071_; 
v___x_978_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0, &l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_once, _init_l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0);
v___x_979_ = l_StateRefT_x27_instMonad___redArg(v___x_978_);
v_toApplicative_980_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1071_ == 0)
{
lean_object* v_unused_1072_; 
v_unused_1072_ = lean_ctor_get(v___x_979_, 1);
lean_dec(v_unused_1072_);
v___x_982_ = v___x_979_;
v_isShared_983_ = v_isSharedCheck_1071_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_toApplicative_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_1071_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v_toFunctor_984_; lean_object* v_toSeq_985_; lean_object* v_toSeqLeft_986_; lean_object* v_toSeqRight_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_1069_; 
v_toFunctor_984_ = lean_ctor_get(v_toApplicative_980_, 0);
v_toSeq_985_ = lean_ctor_get(v_toApplicative_980_, 2);
v_toSeqLeft_986_ = lean_ctor_get(v_toApplicative_980_, 3);
v_toSeqRight_987_ = lean_ctor_get(v_toApplicative_980_, 4);
v_isSharedCheck_1069_ = !lean_is_exclusive(v_toApplicative_980_);
if (v_isSharedCheck_1069_ == 0)
{
lean_object* v_unused_1070_; 
v_unused_1070_ = lean_ctor_get(v_toApplicative_980_, 1);
lean_dec(v_unused_1070_);
v___x_989_ = v_toApplicative_980_;
v_isShared_990_ = v_isSharedCheck_1069_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_toSeqRight_987_);
lean_inc(v_toSeqLeft_986_);
lean_inc(v_toSeq_985_);
lean_inc(v_toFunctor_984_);
lean_dec(v_toApplicative_980_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_1069_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___f_991_; lean_object* v___f_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___x_995_; lean_object* v___f_996_; lean_object* v___f_997_; lean_object* v___f_998_; lean_object* v___x_1000_; 
v___f_991_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1));
v___f_992_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2));
lean_inc_ref(v_toFunctor_984_);
v___f_993_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_993_, 0, v_toFunctor_984_);
v___f_994_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_994_, 0, v_toFunctor_984_);
v___x_995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_995_, 0, v___f_993_);
lean_ctor_set(v___x_995_, 1, v___f_994_);
v___f_996_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_996_, 0, v_toSeqRight_987_);
v___f_997_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_997_, 0, v_toSeqLeft_986_);
v___f_998_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_998_, 0, v_toSeq_985_);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 4, v___f_996_);
lean_ctor_set(v___x_989_, 3, v___f_997_);
lean_ctor_set(v___x_989_, 2, v___f_998_);
lean_ctor_set(v___x_989_, 1, v___f_991_);
lean_ctor_set(v___x_989_, 0, v___x_995_);
v___x_1000_ = v___x_989_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v___x_995_);
lean_ctor_set(v_reuseFailAlloc_1068_, 1, v___f_991_);
lean_ctor_set(v_reuseFailAlloc_1068_, 2, v___f_998_);
lean_ctor_set(v_reuseFailAlloc_1068_, 3, v___f_997_);
lean_ctor_set(v_reuseFailAlloc_1068_, 4, v___f_996_);
v___x_1000_ = v_reuseFailAlloc_1068_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
lean_object* v___x_1002_; 
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 1, v___f_992_);
lean_ctor_set(v___x_982_, 0, v___x_1000_);
v___x_1002_ = v___x_982_;
goto v_reusejp_1001_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1067_, 1, v___f_992_);
v___x_1002_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1001_;
}
v_reusejp_1001_:
{
lean_object* v___x_1003_; lean_object* v_toApplicative_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1065_; 
v___x_1003_ = l_StateRefT_x27_instMonad___redArg(v___x_1002_);
v_toApplicative_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1065_ == 0)
{
lean_object* v_unused_1066_; 
v_unused_1066_ = lean_ctor_get(v___x_1003_, 1);
lean_dec(v_unused_1066_);
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1065_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_toApplicative_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1065_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v_toFunctor_1008_; lean_object* v_toSeq_1009_; lean_object* v_toSeqLeft_1010_; lean_object* v_toSeqRight_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1063_; 
v_toFunctor_1008_ = lean_ctor_get(v_toApplicative_1004_, 0);
v_toSeq_1009_ = lean_ctor_get(v_toApplicative_1004_, 2);
v_toSeqLeft_1010_ = lean_ctor_get(v_toApplicative_1004_, 3);
v_toSeqRight_1011_ = lean_ctor_get(v_toApplicative_1004_, 4);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_toApplicative_1004_);
if (v_isSharedCheck_1063_ == 0)
{
lean_object* v_unused_1064_; 
v_unused_1064_ = lean_ctor_get(v_toApplicative_1004_, 1);
lean_dec(v_unused_1064_);
v___x_1013_ = v_toApplicative_1004_;
v_isShared_1014_ = v_isSharedCheck_1063_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_toSeqRight_1011_);
lean_inc(v_toSeqLeft_1010_);
lean_inc(v_toSeq_1009_);
lean_inc(v_toFunctor_1008_);
lean_dec(v_toApplicative_1004_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1063_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___f_1015_; lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___f_1018_; lean_object* v___x_1019_; lean_object* v___f_1020_; lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___x_1024_; 
v___f_1015_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3));
v___f_1016_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1008_);
v___f_1017_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1017_, 0, v_toFunctor_1008_);
v___f_1018_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1018_, 0, v_toFunctor_1008_);
v___x_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___f_1017_);
lean_ctor_set(v___x_1019_, 1, v___f_1018_);
v___f_1020_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1020_, 0, v_toSeqRight_1011_);
v___f_1021_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1021_, 0, v_toSeqLeft_1010_);
v___f_1022_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1022_, 0, v_toSeq_1009_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 4, v___f_1020_);
lean_ctor_set(v___x_1013_, 3, v___f_1021_);
lean_ctor_set(v___x_1013_, 2, v___f_1022_);
lean_ctor_set(v___x_1013_, 1, v___f_1015_);
lean_ctor_set(v___x_1013_, 0, v___x_1019_);
v___x_1024_ = v___x_1013_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v___f_1015_);
lean_ctor_set(v_reuseFailAlloc_1062_, 2, v___f_1022_);
lean_ctor_set(v_reuseFailAlloc_1062_, 3, v___f_1021_);
lean_ctor_set(v_reuseFailAlloc_1062_, 4, v___f_1020_);
v___x_1024_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1026_; 
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 1, v___f_1016_);
lean_ctor_set(v___x_1006_, 0, v___x_1024_);
v___x_1026_ = v___x_1006_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v___x_1024_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v___f_1016_);
v___x_1026_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1027_; lean_object* v_toApplicative_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1059_; 
v___x_1027_ = l_StateRefT_x27_instMonad___redArg(v___x_1026_);
v_toApplicative_1028_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1059_ == 0)
{
lean_object* v_unused_1060_; 
v_unused_1060_ = lean_ctor_get(v___x_1027_, 1);
lean_dec(v_unused_1060_);
v___x_1030_ = v___x_1027_;
v_isShared_1031_ = v_isSharedCheck_1059_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_toApplicative_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1059_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v_toFunctor_1032_; lean_object* v_toSeq_1033_; lean_object* v_toSeqLeft_1034_; lean_object* v_toSeqRight_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1057_; 
v_toFunctor_1032_ = lean_ctor_get(v_toApplicative_1028_, 0);
v_toSeq_1033_ = lean_ctor_get(v_toApplicative_1028_, 2);
v_toSeqLeft_1034_ = lean_ctor_get(v_toApplicative_1028_, 3);
v_toSeqRight_1035_ = lean_ctor_get(v_toApplicative_1028_, 4);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_toApplicative_1028_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; 
v_unused_1058_ = lean_ctor_get(v_toApplicative_1028_, 1);
lean_dec(v_unused_1058_);
v___x_1037_ = v_toApplicative_1028_;
v_isShared_1038_ = v_isSharedCheck_1057_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_toSeqRight_1035_);
lean_inc(v_toSeqLeft_1034_);
lean_inc(v_toSeq_1033_);
lean_inc(v_toFunctor_1032_);
lean_dec(v_toApplicative_1028_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1057_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___f_1041_; lean_object* v___f_1042_; lean_object* v___x_1043_; lean_object* v___f_1044_; lean_object* v___f_1045_; lean_object* v___f_1046_; lean_object* v___x_1048_; 
v___f_1039_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5));
v___f_1040_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6));
lean_inc_ref(v_toFunctor_1032_);
v___f_1041_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1041_, 0, v_toFunctor_1032_);
v___f_1042_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1042_, 0, v_toFunctor_1032_);
v___x_1043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___f_1041_);
lean_ctor_set(v___x_1043_, 1, v___f_1042_);
v___f_1044_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1044_, 0, v_toSeqRight_1035_);
v___f_1045_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1045_, 0, v_toSeqLeft_1034_);
v___f_1046_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1046_, 0, v_toSeq_1033_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 4, v___f_1044_);
lean_ctor_set(v___x_1037_, 3, v___f_1045_);
lean_ctor_set(v___x_1037_, 2, v___f_1046_);
lean_ctor_set(v___x_1037_, 1, v___f_1039_);
lean_ctor_set(v___x_1037_, 0, v___x_1043_);
v___x_1048_ = v___x_1037_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v___f_1039_);
lean_ctor_set(v_reuseFailAlloc_1056_, 2, v___f_1046_);
lean_ctor_set(v_reuseFailAlloc_1056_, 3, v___f_1045_);
lean_ctor_set(v_reuseFailAlloc_1056_, 4, v___f_1044_);
v___x_1048_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1050_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v___f_1040_);
lean_ctor_set(v___x_1030_, 0, v___x_1048_);
v___x_1050_ = v___x_1030_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v___f_1040_);
v___x_1050_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_9952__overap_1053_; lean_object* v___x_1054_; 
v___x_1051_ = lean_box(0);
v___x_1052_ = l_instInhabitedOfMonad___redArg(v___x_1050_, v___x_1051_);
v___x_9952__overap_1053_ = lean_panic_fn_borrowed(v___x_1052_, v_msg_970_);
lean_dec(v___x_1052_);
lean_inc(v___y_976_);
lean_inc_ref(v___y_975_);
lean_inc(v___y_974_);
lean_inc_ref(v___y_973_);
lean_inc(v___y_972_);
lean_inc_ref(v___y_971_);
v___x_1054_ = lean_apply_7(v___x_9952__overap_1053_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_, lean_box(0));
return v___x_1054_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_res_1081_; 
v_res_1081_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v_msg_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
return v_res_1081_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0));
v___x_1084_ = l_Lean_stringToMessageData(v___x_1083_);
return v___x_1084_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2));
v___x_1087_ = l_Lean_stringToMessageData(v___x_1086_);
return v___x_1087_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1091_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6));
v___x_1092_ = lean_unsigned_to_nat(11u);
v___x_1093_ = lean_unsigned_to_nat(115u);
v___x_1094_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5));
v___x_1095_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4));
v___x_1096_ = l_mkPanicMessageWithDecl(v___x_1095_, v___x_1094_, v___x_1093_, v___x_1092_, v___x_1091_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object* v_constName_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v___x_1113_; lean_object* v_env_1114_; uint8_t v___x_1115_; lean_object* v___x_1116_; 
v___x_1113_ = lean_st_ref_get(v___y_1103_);
v_env_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc_ref(v_env_1114_);
lean_dec(v___x_1113_);
v___x_1115_ = 0;
lean_inc(v_constName_1097_);
v___x_1116_ = l_Lean_Environment_findAsync_x3f(v_env_1114_, v_constName_1097_, v___x_1115_);
if (lean_obj_tag(v___x_1116_) == 1)
{
lean_object* v_val_1117_; uint8_t v_kind_1118_; 
v_val_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_val_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v_kind_1118_ = lean_ctor_get_uint8(v_val_1117_, sizeof(void*)*3);
if (v_kind_1118_ == 0)
{
lean_object* v___x_1119_; 
v___x_1119_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1117_);
if (lean_obj_tag(v___x_1119_) == 1)
{
lean_object* v_val_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec(v_constName_1097_);
v_val_1120_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1119_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_val_1120_);
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
lean_ctor_set_tag(v___x_1122_, 0);
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_val_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
else
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_dec_ref(v___x_1119_);
v___x_1128_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7);
v___x_1129_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v___x_1128_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
if (lean_obj_tag(v___x_1129_) == 0)
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1138_; 
v_a_1130_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1132_ = v___x_1129_;
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1129_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1138_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
if (lean_obj_tag(v_a_1130_) == 0)
{
lean_del_object(v___x_1132_);
goto v___jp_1105_;
}
else
{
lean_object* v_val_1134_; lean_object* v___x_1136_; 
lean_dec(v_constName_1097_);
v_val_1134_ = lean_ctor_get(v_a_1130_, 0);
lean_inc(v_val_1134_);
lean_dec_ref_known(v_a_1130_, 1);
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 0, v_val_1134_);
v___x_1136_ = v___x_1132_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_val_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
else
{
lean_object* v_a_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1146_; 
lean_dec(v_constName_1097_);
v_a_1139_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1141_ = v___x_1129_;
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_a_1139_);
lean_dec(v___x_1129_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1146_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1144_; 
if (v_isShared_1142_ == 0)
{
v___x_1144_ = v___x_1141_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_a_1139_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
}
}
else
{
lean_dec(v_val_1117_);
goto v___jp_1105_;
}
}
else
{
lean_dec(v___x_1116_);
goto v___jp_1105_;
}
v___jp_1105_:
{
lean_object* v___x_1106_; uint8_t v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1106_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1107_ = 0;
v___x_1108_ = l_Lean_MessageData_ofConstName(v_constName_1097_, v___x_1107_);
v___x_1109_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1106_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3);
v___x_1111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_1111_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object* v_constName_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_constName_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec(v___y_1149_);
lean_dec_ref(v___y_1148_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object* v_a_1156_, lean_object* v_a_1157_){
_start:
{
if (lean_obj_tag(v_a_1156_) == 0)
{
lean_object* v___x_1158_; 
v___x_1158_ = l_List_reverse___redArg(v_a_1157_);
return v___x_1158_;
}
else
{
lean_object* v_head_1159_; lean_object* v_tail_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1169_; 
v_head_1159_ = lean_ctor_get(v_a_1156_, 0);
v_tail_1160_ = lean_ctor_get(v_a_1156_, 1);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_a_1156_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1162_ = v_a_1156_;
v_isShared_1163_ = v_isSharedCheck_1169_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_tail_1160_);
lean_inc(v_head_1159_);
lean_dec(v_a_1156_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1169_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1164_ = l_Lean_mkLevelParam(v_head_1159_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 1, v_a_1157_);
lean_ctor_set(v___x_1162_, 0, v___x_1164_);
v___x_1166_ = v___x_1162_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1164_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_a_1157_);
v___x_1166_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
v_a_1156_ = v_tail_1160_;
v_a_1157_ = v___x_1166_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_1171_, lean_object* v_ctorName_1172_, lean_object* v_projName_1173_, lean_object* v_equivName_1174_, lean_object* v_fieldName_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_){
_start:
{
lean_object* v___f_1183_; lean_object* v___x_1184_; 
v___f_1183_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___closed__0));
lean_inc(v_declName_1171_);
v___x_1184_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_1171_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v_toConstantVal_1186_; lean_object* v_value_1187_; lean_object* v_levelParams_1188_; lean_object* v_type_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___f_1192_; uint8_t v___x_1193_; lean_object* v___x_1194_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1185_);
lean_dec_ref_known(v___x_1184_, 1);
v_toConstantVal_1186_ = lean_ctor_get(v_a_1185_, 0);
lean_inc_ref(v_toConstantVal_1186_);
v_value_1187_ = lean_ctor_get(v_a_1185_, 1);
lean_inc_ref(v_value_1187_);
lean_dec(v_a_1185_);
v_levelParams_1188_ = lean_ctor_get(v_toConstantVal_1186_, 1);
lean_inc_n(v_levelParams_1188_, 2);
v_type_1189_ = lean_ctor_get(v_toConstantVal_1186_, 2);
lean_inc_ref(v_type_1189_);
lean_dec_ref(v_toConstantVal_1186_);
v___x_1190_ = lean_box(0);
v___x_1191_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1188_, v___x_1190_);
v___f_1192_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed), 18, 9);
lean_closure_set(v___f_1192_, 0, v_value_1187_);
lean_closure_set(v___f_1192_, 1, v_declName_1171_);
lean_closure_set(v___f_1192_, 2, v___x_1191_);
lean_closure_set(v___f_1192_, 3, v_levelParams_1188_);
lean_closure_set(v___f_1192_, 4, v_ctorName_1172_);
lean_closure_set(v___f_1192_, 5, v_fieldName_1175_);
lean_closure_set(v___f_1192_, 6, v_projName_1173_);
lean_closure_set(v___f_1192_, 7, v___f_1183_);
lean_closure_set(v___f_1192_, 8, v_equivName_1174_);
v___x_1193_ = 0;
v___x_1194_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(v_type_1189_, v___f_1192_, v___x_1193_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_, v_a_1180_, v_a_1181_);
return v___x_1194_;
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
lean_dec(v_fieldName_1175_);
lean_dec(v_equivName_1174_);
lean_dec(v_projName_1173_);
lean_dec(v_ctorName_1172_);
lean_dec(v_declName_1171_);
v_a_1195_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1184_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1184_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_1203_, lean_object* v_ctorName_1204_, lean_object* v_projName_1205_, lean_object* v_equivName_1206_, lean_object* v_fieldName_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_1203_, v_ctorName_1204_, v_projName_1205_, v_equivName_1206_, v_fieldName_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_);
lean_dec(v_a_1213_);
lean_dec_ref(v_a_1212_);
lean_dec(v_a_1211_);
lean_dec_ref(v_a_1210_);
lean_dec(v_a_1209_);
lean_dec_ref(v_a_1208_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object* v_00_u03b1_1216_, lean_object* v_name_1217_, uint8_t v_bi_1218_, lean_object* v_type_1219_, lean_object* v_k_1220_, uint8_t v_kind_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v___x_1229_; 
v___x_1229_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_1217_, v_bi_1218_, v_type_1219_, v_k_1220_, v_kind_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1230_, lean_object* v_name_1231_, lean_object* v_bi_1232_, lean_object* v_type_1233_, lean_object* v_k_1234_, lean_object* v_kind_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
uint8_t v_bi_boxed_1243_; uint8_t v_kind_boxed_1244_; lean_object* v_res_1245_; 
v_bi_boxed_1243_ = lean_unbox(v_bi_1232_);
v_kind_boxed_1244_ = lean_unbox(v_kind_1235_);
v_res_1245_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(v_00_u03b1_1230_, v_name_1231_, v_bi_boxed_1243_, v_type_1233_, v_k_1234_, v_kind_boxed_1244_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object* v_00_u03b1_1246_, lean_object* v_name_1247_, lean_object* v_type_1248_, lean_object* v_k_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_1247_, v_type_1248_, v_k_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object* v_00_u03b1_1258_, lean_object* v_name_1259_, lean_object* v_type_1260_, lean_object* v_k_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(v_00_u03b1_1258_, v_name_1259_, v_type_1260_, v_k_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object* v_00_u03b1_1270_, lean_object* v_msg_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object* v_00_u03b1_1280_, lean_object* v_msg_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(v_00_u03b1_1280_, v_msg_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_);
lean_dec(v___y_1287_);
lean_dec_ref(v___y_1286_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object* v_as_1290_, size_t v_i_1291_, size_t v_stop_1292_, lean_object* v_b_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v___x_1301_; 
v___x_1301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_1290_, v_i_1291_, v_stop_1292_, v_b_1293_, v___y_1296_, v___y_1298_, v___y_1299_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object* v_as_1302_, lean_object* v_i_1303_, lean_object* v_stop_1304_, lean_object* v_b_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
size_t v_i_boxed_1313_; size_t v_stop_boxed_1314_; lean_object* v_res_1315_; 
v_i_boxed_1313_ = lean_unbox_usize(v_i_1303_);
lean_dec(v_i_1303_);
v_stop_boxed_1314_ = lean_unbox_usize(v_stop_1304_);
lean_dec(v_stop_1304_);
v_res_1315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(v_as_1302_, v_i_boxed_1313_, v_stop_boxed_1314_, v_b_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec_ref(v_as_1302_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(lean_object* v_msgData_1316_, lean_object* v_macroStack_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_){
_start:
{
lean_object* v___x_1325_; 
v___x_1325_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_1316_, v_macroStack_1317_, v___y_1322_);
return v___x_1325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___boxed(lean_object* v_msgData_1326_, lean_object* v_macroStack_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(v_msgData_1326_, v_macroStack_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(lean_object* v_e_1336_, lean_object* v_k_1337_, uint8_t v_cleanupAnnotations_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_){
_start:
{
lean_object* v___f_1346_; uint8_t v___x_1347_; uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_inc(v___y_1340_);
lean_inc_ref(v___y_1339_);
v___f_1346_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1346_, 0, v_k_1337_);
lean_closure_set(v___f_1346_, 1, v___y_1339_);
lean_closure_set(v___f_1346_, 2, v___y_1340_);
v___x_1347_ = 1;
v___x_1348_ = 0;
v___x_1349_ = lean_box(0);
v___x_1350_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1336_, v___x_1347_, v___x_1348_, v___x_1347_, v___x_1348_, v___x_1349_, v___f_1346_, v_cleanupAnnotations_1338_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
if (lean_obj_tag(v___x_1350_) == 0)
{
return v___x_1350_;
}
else
{
lean_object* v_a_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1358_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1353_ = v___x_1350_;
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_a_1351_);
lean_dec(v___x_1350_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1358_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1356_; 
if (v_isShared_1354_ == 0)
{
v___x_1356_ = v___x_1353_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1351_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg___boxed(lean_object* v_e_1359_, lean_object* v_k_1360_, lean_object* v_cleanupAnnotations_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1369_; lean_object* v_res_1370_; 
v_cleanupAnnotations_boxed_1369_ = lean_unbox(v_cleanupAnnotations_1361_);
v_res_1370_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_e_1359_, v_k_1360_, v_cleanupAnnotations_boxed_1369_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_);
lean_dec(v___y_1367_);
lean_dec_ref(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
return v_res_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12(lean_object* v_00_u03b1_1371_, lean_object* v_e_1372_, lean_object* v_k_1373_, uint8_t v_cleanupAnnotations_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_){
_start:
{
lean_object* v___x_1382_; 
v___x_1382_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_e_1372_, v_k_1373_, v_cleanupAnnotations_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_, v___y_1379_, v___y_1380_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___boxed(lean_object* v_00_u03b1_1383_, lean_object* v_e_1384_, lean_object* v_k_1385_, lean_object* v_cleanupAnnotations_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1394_; lean_object* v_res_1395_; 
v_cleanupAnnotations_boxed_1394_ = lean_unbox(v_cleanupAnnotations_1386_);
v_res_1395_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12(v_00_u03b1_1383_, v_e_1384_, v_k_1385_, v_cleanupAnnotations_boxed_1394_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_);
lean_dec(v___y_1392_);
lean_dec_ref(v___y_1391_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___lam__0(lean_object* v_x_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; 
lean_inc(v___y_1398_);
lean_inc_ref(v___y_1397_);
v___x_1404_ = lean_apply_7(v_x_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, lean_box(0));
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___lam__0___boxed(lean_object* v_x_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v_res_1413_; 
v_res_1413_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___lam__0(v_x_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(lean_object* v_lctx_1414_, lean_object* v_localInsts_1415_, lean_object* v_x_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v___f_1424_; lean_object* v___x_1425_; 
lean_inc(v___y_1418_);
lean_inc_ref(v___y_1417_);
v___f_1424_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1424_, 0, v_x_1416_);
lean_closure_set(v___f_1424_, 1, v___y_1417_);
lean_closure_set(v___f_1424_, 2, v___y_1418_);
v___x_1425_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1414_, v_localInsts_1415_, v___f_1424_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
if (lean_obj_tag(v___x_1425_) == 0)
{
return v___x_1425_;
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___boxed(lean_object* v_lctx_1434_, lean_object* v_localInsts_1435_, lean_object* v_x_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_lctx_1434_, v_localInsts_1435_, v_x_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1438_);
lean_dec_ref(v___y_1437_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13(lean_object* v_00_u03b1_1445_, lean_object* v_lctx_1446_, lean_object* v_localInsts_1447_, lean_object* v_x_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_lctx_1446_, v_localInsts_1447_, v_x_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed(lean_object* v_00_u03b1_1457_, lean_object* v_lctx_1458_, lean_object* v_localInsts_1459_, lean_object* v_x_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13(v_00_u03b1_1457_, v_lctx_1458_, v_localInsts_1459_, v_x_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_);
lean_dec(v___y_1466_);
lean_dec_ref(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec_ref(v___y_1463_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(lean_object* v___y_1469_){
_start:
{
lean_object* v___x_1471_; lean_object* v_env_1472_; lean_object* v___x_1473_; lean_object* v_mainModule_1474_; lean_object* v___x_1475_; 
v___x_1471_ = lean_st_ref_get(v___y_1469_);
v_env_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc_ref(v_env_1472_);
lean_dec(v___x_1471_);
v___x_1473_ = l_Lean_Environment_header(v_env_1472_);
lean_dec_ref(v_env_1472_);
v_mainModule_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_mainModule_1474_);
lean_dec_ref(v___x_1473_);
v___x_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1475_, 0, v_mainModule_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg___boxed(lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1476_);
lean_dec(v___y_1476_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1480_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___boxed(lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_){
_start:
{
lean_object* v_res_1486_; 
v_res_1486_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(v___y_1483_, v___y_1484_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(lean_object* v___y_1487_, uint8_t v_isExporting_1488_, lean_object* v_a_x3f_1489_){
_start:
{
lean_object* v___x_1491_; lean_object* v_env_1492_; lean_object* v_messages_1493_; lean_object* v_scopes_1494_; lean_object* v_usedQuotCtxts_1495_; lean_object* v_nextMacroScope_1496_; lean_object* v_maxRecDepth_1497_; lean_object* v_ngen_1498_; lean_object* v_auxDeclNGen_1499_; lean_object* v_infoState_1500_; lean_object* v_traceState_1501_; lean_object* v_snapshotTasks_1502_; lean_object* v_prevLinterStates_1503_; lean_object* v_codeQualityEntryTasks_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1515_; 
v___x_1491_ = lean_st_ref_take(v___y_1487_);
v_env_1492_ = lean_ctor_get(v___x_1491_, 0);
v_messages_1493_ = lean_ctor_get(v___x_1491_, 1);
v_scopes_1494_ = lean_ctor_get(v___x_1491_, 2);
v_usedQuotCtxts_1495_ = lean_ctor_get(v___x_1491_, 3);
v_nextMacroScope_1496_ = lean_ctor_get(v___x_1491_, 4);
v_maxRecDepth_1497_ = lean_ctor_get(v___x_1491_, 5);
v_ngen_1498_ = lean_ctor_get(v___x_1491_, 6);
v_auxDeclNGen_1499_ = lean_ctor_get(v___x_1491_, 7);
v_infoState_1500_ = lean_ctor_get(v___x_1491_, 8);
v_traceState_1501_ = lean_ctor_get(v___x_1491_, 9);
v_snapshotTasks_1502_ = lean_ctor_get(v___x_1491_, 10);
v_prevLinterStates_1503_ = lean_ctor_get(v___x_1491_, 11);
v_codeQualityEntryTasks_1504_ = lean_ctor_get(v___x_1491_, 12);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1491_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1506_ = v___x_1491_;
v_isShared_1507_ = v_isSharedCheck_1515_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1504_);
lean_inc(v_prevLinterStates_1503_);
lean_inc(v_snapshotTasks_1502_);
lean_inc(v_traceState_1501_);
lean_inc(v_infoState_1500_);
lean_inc(v_auxDeclNGen_1499_);
lean_inc(v_ngen_1498_);
lean_inc(v_maxRecDepth_1497_);
lean_inc(v_nextMacroScope_1496_);
lean_inc(v_usedQuotCtxts_1495_);
lean_inc(v_scopes_1494_);
lean_inc(v_messages_1493_);
lean_inc(v_env_1492_);
lean_dec(v___x_1491_);
v___x_1506_ = lean_box(0);
v_isShared_1507_ = v_isSharedCheck_1515_;
goto v_resetjp_1505_;
}
v_resetjp_1505_:
{
lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1508_ = lean_box(0);
v___x_1509_ = l_Lean_Environment_setExporting(v_env_1492_, v_isExporting_1488_);
if (v_isShared_1507_ == 0)
{
lean_ctor_set(v___x_1506_, 0, v___x_1509_);
v___x_1511_ = v___x_1506_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v_messages_1493_);
lean_ctor_set(v_reuseFailAlloc_1514_, 2, v_scopes_1494_);
lean_ctor_set(v_reuseFailAlloc_1514_, 3, v_usedQuotCtxts_1495_);
lean_ctor_set(v_reuseFailAlloc_1514_, 4, v_nextMacroScope_1496_);
lean_ctor_set(v_reuseFailAlloc_1514_, 5, v_maxRecDepth_1497_);
lean_ctor_set(v_reuseFailAlloc_1514_, 6, v_ngen_1498_);
lean_ctor_set(v_reuseFailAlloc_1514_, 7, v_auxDeclNGen_1499_);
lean_ctor_set(v_reuseFailAlloc_1514_, 8, v_infoState_1500_);
lean_ctor_set(v_reuseFailAlloc_1514_, 9, v_traceState_1501_);
lean_ctor_set(v_reuseFailAlloc_1514_, 10, v_snapshotTasks_1502_);
lean_ctor_set(v_reuseFailAlloc_1514_, 11, v_prevLinterStates_1503_);
lean_ctor_set(v_reuseFailAlloc_1514_, 12, v_codeQualityEntryTasks_1504_);
v___x_1511_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_st_ref_put(v___y_1487_, v___x_1511_);
v___x_1513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1513_, 0, v___x_1508_);
return v___x_1513_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0___boxed(lean_object* v___y_1516_, lean_object* v_isExporting_1517_, lean_object* v_a_x3f_1518_, lean_object* v___y_1519_){
_start:
{
uint8_t v_isExporting_boxed_1520_; lean_object* v_res_1521_; 
v_isExporting_boxed_1520_ = lean_unbox(v_isExporting_1517_);
v_res_1521_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1516_, v_isExporting_boxed_1520_, v_a_x3f_1518_);
lean_dec(v_a_x3f_1518_);
lean_dec(v___y_1516_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(lean_object* v_x_1522_, uint8_t v_isExporting_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v___x_1527_; lean_object* v_env_1528_; lean_object* v___x_1529_; uint8_t v_isModule_1530_; 
v___x_1527_ = lean_st_ref_get(v___y_1525_);
v_env_1528_ = lean_ctor_get(v___x_1527_, 0);
lean_inc_ref(v_env_1528_);
lean_dec(v___x_1527_);
v___x_1529_ = l_Lean_Environment_header(v_env_1528_);
v_isModule_1530_ = lean_ctor_get_uint8(v___x_1529_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1529_);
if (v_isModule_1530_ == 0)
{
lean_object* v___x_1531_; 
lean_dec_ref(v_env_1528_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
v___x_1531_ = lean_apply_3(v_x_1522_, v___y_1524_, v___y_1525_, lean_box(0));
return v___x_1531_;
}
else
{
uint8_t v_isExporting_1532_; 
v_isExporting_1532_ = lean_ctor_get_uint8(v_env_1528_, sizeof(void*)*8);
lean_dec_ref(v_env_1528_);
if (v_isExporting_1523_ == 0)
{
if (v_isExporting_1532_ == 0)
{
lean_object* v___x_1586_; 
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
v___x_1586_ = lean_apply_3(v_x_1522_, v___y_1524_, v___y_1525_, lean_box(0));
return v___x_1586_;
}
else
{
goto v___jp_1533_;
}
}
else
{
if (v_isExporting_1532_ == 0)
{
goto v___jp_1533_;
}
else
{
lean_object* v___x_1587_; 
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
v___x_1587_ = lean_apply_3(v_x_1522_, v___y_1524_, v___y_1525_, lean_box(0));
return v___x_1587_;
}
}
v___jp_1533_:
{
lean_object* v___x_1534_; lean_object* v_env_1535_; lean_object* v_messages_1536_; lean_object* v_scopes_1537_; lean_object* v_usedQuotCtxts_1538_; lean_object* v_nextMacroScope_1539_; lean_object* v_maxRecDepth_1540_; lean_object* v_ngen_1541_; lean_object* v_auxDeclNGen_1542_; lean_object* v_infoState_1543_; lean_object* v_traceState_1544_; lean_object* v_snapshotTasks_1545_; lean_object* v_prevLinterStates_1546_; lean_object* v_codeQualityEntryTasks_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1585_; 
v___x_1534_ = lean_st_ref_take(v___y_1525_);
v_env_1535_ = lean_ctor_get(v___x_1534_, 0);
v_messages_1536_ = lean_ctor_get(v___x_1534_, 1);
v_scopes_1537_ = lean_ctor_get(v___x_1534_, 2);
v_usedQuotCtxts_1538_ = lean_ctor_get(v___x_1534_, 3);
v_nextMacroScope_1539_ = lean_ctor_get(v___x_1534_, 4);
v_maxRecDepth_1540_ = lean_ctor_get(v___x_1534_, 5);
v_ngen_1541_ = lean_ctor_get(v___x_1534_, 6);
v_auxDeclNGen_1542_ = lean_ctor_get(v___x_1534_, 7);
v_infoState_1543_ = lean_ctor_get(v___x_1534_, 8);
v_traceState_1544_ = lean_ctor_get(v___x_1534_, 9);
v_snapshotTasks_1545_ = lean_ctor_get(v___x_1534_, 10);
v_prevLinterStates_1546_ = lean_ctor_get(v___x_1534_, 11);
v_codeQualityEntryTasks_1547_ = lean_ctor_get(v___x_1534_, 12);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1534_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1549_ = v___x_1534_;
v_isShared_1550_ = v_isSharedCheck_1585_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1547_);
lean_inc(v_prevLinterStates_1546_);
lean_inc(v_snapshotTasks_1545_);
lean_inc(v_traceState_1544_);
lean_inc(v_infoState_1543_);
lean_inc(v_auxDeclNGen_1542_);
lean_inc(v_ngen_1541_);
lean_inc(v_maxRecDepth_1540_);
lean_inc(v_nextMacroScope_1539_);
lean_inc(v_usedQuotCtxts_1538_);
lean_inc(v_scopes_1537_);
lean_inc(v_messages_1536_);
lean_inc(v_env_1535_);
lean_dec(v___x_1534_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1585_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1551_ = l_Lean_Environment_setExporting(v_env_1535_, v_isExporting_1523_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1551_);
v___x_1553_ = v___x_1549_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1551_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_messages_1536_);
lean_ctor_set(v_reuseFailAlloc_1584_, 2, v_scopes_1537_);
lean_ctor_set(v_reuseFailAlloc_1584_, 3, v_usedQuotCtxts_1538_);
lean_ctor_set(v_reuseFailAlloc_1584_, 4, v_nextMacroScope_1539_);
lean_ctor_set(v_reuseFailAlloc_1584_, 5, v_maxRecDepth_1540_);
lean_ctor_set(v_reuseFailAlloc_1584_, 6, v_ngen_1541_);
lean_ctor_set(v_reuseFailAlloc_1584_, 7, v_auxDeclNGen_1542_);
lean_ctor_set(v_reuseFailAlloc_1584_, 8, v_infoState_1543_);
lean_ctor_set(v_reuseFailAlloc_1584_, 9, v_traceState_1544_);
lean_ctor_set(v_reuseFailAlloc_1584_, 10, v_snapshotTasks_1545_);
lean_ctor_set(v_reuseFailAlloc_1584_, 11, v_prevLinterStates_1546_);
lean_ctor_set(v_reuseFailAlloc_1584_, 12, v_codeQualityEntryTasks_1547_);
v___x_1553_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
lean_object* v___x_1554_; lean_object* v_r_1555_; 
v___x_1554_ = lean_st_ref_put(v___y_1525_, v___x_1553_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
v_r_1555_ = lean_apply_3(v_x_1522_, v___y_1524_, v___y_1525_, lean_box(0));
if (lean_obj_tag(v_r_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1572_; 
v_a_1556_ = lean_ctor_get(v_r_1555_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_r_1555_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1558_ = v_r_1555_;
v_isShared_1559_ = v_isSharedCheck_1572_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v_r_1555_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1572_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
lean_inc(v_a_1556_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set_tag(v___x_1558_, 1);
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1556_);
v___x_1561_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
lean_object* v___x_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
v___x_1562_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1525_, v_isExporting_1532_, v___x_1561_);
lean_dec_ref(v___x_1561_);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1569_ == 0)
{
lean_object* v_unused_1570_; 
v_unused_1570_ = lean_ctor_get(v___x_1562_, 0);
lean_dec(v_unused_1570_);
v___x_1564_ = v___x_1562_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_dec(v___x_1562_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v_a_1556_);
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1556_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
v_a_1573_ = lean_ctor_get(v_r_1555_, 0);
lean_inc(v_a_1573_);
lean_dec_ref_known(v_r_1555_, 1);
v___x_1574_ = lean_box(0);
v___x_1575_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1525_, v_isExporting_1532_, v___x_1574_);
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
lean_ctor_set_tag(v___x_1577_, 1);
lean_ctor_set(v___x_1577_, 0, v_a_1573_);
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1573_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___boxed(lean_object* v_x_1588_, lean_object* v_isExporting_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_){
_start:
{
uint8_t v_isExporting_boxed_1593_; lean_object* v_res_1594_; 
v_isExporting_boxed_1593_ = lean_unbox(v_isExporting_1589_);
v_res_1594_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1588_, v_isExporting_boxed_1593_, v___y_1590_, v___y_1591_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
return v_res_1594_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(lean_object* v_00_u03b1_1595_, lean_object* v_x_1596_, uint8_t v_isExporting_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1596_, v_isExporting_1597_, v___y_1598_, v___y_1599_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___boxed(lean_object* v_00_u03b1_1602_, lean_object* v_x_1603_, lean_object* v_isExporting_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
uint8_t v_isExporting_boxed_1608_; lean_object* v_res_1609_; 
v_isExporting_boxed_1608_ = lean_unbox(v_isExporting_1604_);
v_res_1609_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(v_00_u03b1_1602_, v_x_1603_, v_isExporting_boxed_1608_, v___y_1605_, v___y_1606_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
return v_res_1609_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0(uint8_t v_suppressElabErrors_1618_, uint8_t v___y_1619_, lean_object* v_x_1620_){
_start:
{
if (lean_obj_tag(v_x_1620_) == 1)
{
lean_object* v_pre_1621_; 
v_pre_1621_ = lean_ctor_get(v_x_1620_, 0);
switch(lean_obj_tag(v_pre_1621_))
{
case 1:
{
lean_object* v_pre_1622_; 
v_pre_1622_ = lean_ctor_get(v_pre_1621_, 0);
switch(lean_obj_tag(v_pre_1622_))
{
case 0:
{
lean_object* v_str_1623_; lean_object* v_str_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; 
v_str_1623_ = lean_ctor_get(v_x_1620_, 1);
v_str_1624_ = lean_ctor_get(v_pre_1621_, 1);
v___x_1625_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__0));
v___x_1626_ = lean_string_dec_eq(v_str_1624_, v___x_1625_);
if (v___x_1626_ == 0)
{
lean_object* v___x_1627_; uint8_t v___x_1628_; 
v___x_1627_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__1));
v___x_1628_ = lean_string_dec_eq(v_str_1624_, v___x_1627_);
if (v___x_1628_ == 0)
{
return v___x_1628_;
}
else
{
lean_object* v___x_1629_; uint8_t v___x_1630_; 
v___x_1629_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__2));
v___x_1630_ = lean_string_dec_eq(v_str_1623_, v___x_1629_);
if (v___x_1630_ == 0)
{
return v___x_1630_;
}
else
{
return v_suppressElabErrors_1618_;
}
}
}
else
{
lean_object* v___x_1631_; uint8_t v___x_1632_; 
v___x_1631_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__3));
v___x_1632_ = lean_string_dec_eq(v_str_1623_, v___x_1631_);
if (v___x_1632_ == 0)
{
return v___x_1632_;
}
else
{
return v_suppressElabErrors_1618_;
}
}
}
case 1:
{
lean_object* v_pre_1633_; 
v_pre_1633_ = lean_ctor_get(v_pre_1622_, 0);
if (lean_obj_tag(v_pre_1633_) == 0)
{
lean_object* v_str_1634_; lean_object* v_str_1635_; lean_object* v_str_1636_; lean_object* v___x_1637_; uint8_t v___x_1638_; 
v_str_1634_ = lean_ctor_get(v_x_1620_, 1);
v_str_1635_ = lean_ctor_get(v_pre_1621_, 1);
v_str_1636_ = lean_ctor_get(v_pre_1622_, 1);
v___x_1637_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__4));
v___x_1638_ = lean_string_dec_eq(v_str_1636_, v___x_1637_);
if (v___x_1638_ == 0)
{
return v___x_1638_;
}
else
{
lean_object* v___x_1639_; uint8_t v___x_1640_; 
v___x_1639_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__5));
v___x_1640_ = lean_string_dec_eq(v_str_1635_, v___x_1639_);
if (v___x_1640_ == 0)
{
return v___x_1640_;
}
else
{
lean_object* v___x_1641_; uint8_t v___x_1642_; 
v___x_1641_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__6));
v___x_1642_ = lean_string_dec_eq(v_str_1634_, v___x_1641_);
if (v___x_1642_ == 0)
{
return v___x_1642_;
}
else
{
return v_suppressElabErrors_1618_;
}
}
}
}
else
{
return v___y_1619_;
}
}
default: 
{
return v___y_1619_;
}
}
}
case 0:
{
lean_object* v_str_1643_; lean_object* v___x_1644_; uint8_t v___x_1645_; 
v_str_1643_ = lean_ctor_get(v_x_1620_, 1);
v___x_1644_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__7));
v___x_1645_ = lean_string_dec_eq(v_str_1643_, v___x_1644_);
if (v___x_1645_ == 0)
{
return v___x_1645_;
}
else
{
return v_suppressElabErrors_1618_;
}
}
default: 
{
return v___y_1619_;
}
}
}
else
{
return v___y_1619_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1646_, lean_object* v___y_1647_, lean_object* v_x_1648_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1649_; uint8_t v___y_47857__boxed_1650_; uint8_t v_res_1651_; lean_object* v_r_1652_; 
v_suppressElabErrors_boxed_1649_ = lean_unbox(v_suppressElabErrors_1646_);
v___y_47857__boxed_1650_ = lean_unbox(v___y_1647_);
v_res_1651_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0(v_suppressElabErrors_boxed_1649_, v___y_47857__boxed_1650_, v_x_1648_);
lean_dec(v_x_1648_);
v_r_1652_ = lean_box(v_res_1651_);
return v_r_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg(lean_object* v_ref_1654_, lean_object* v_msgData_1655_, uint8_t v_severity_1656_, uint8_t v_isSilent_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; uint8_t v___y_1667_; uint8_t v___y_1668_; lean_object* v___y_1669_; lean_object* v___y_1670_; lean_object* v_currNamespace_1671_; lean_object* v_openDecls_1672_; lean_object* v___y_1673_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v___y_1701_; uint8_t v___y_1702_; lean_object* v___y_1703_; lean_object* v___y_1704_; uint8_t v___y_1705_; uint8_t v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; uint8_t v___y_1731_; lean_object* v___y_1732_; uint8_t v___y_1733_; uint8_t v___y_1734_; lean_object* v___y_1735_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___y_1742_; uint8_t v___y_1743_; lean_object* v___y_1744_; uint8_t v___y_1745_; lean_object* v___y_1746_; uint8_t v___y_1747_; uint8_t v___x_1752_; lean_object* v___y_1754_; lean_object* v___y_1755_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; uint8_t v___y_1760_; uint8_t v___y_1761_; uint8_t v___y_1762_; uint8_t v___y_1764_; uint8_t v___x_1782_; 
v___x_1752_ = 2;
v___x_1782_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1656_, v___x_1752_);
if (v___x_1782_ == 0)
{
v___y_1764_ = v___x_1782_;
goto v___jp_1763_;
}
else
{
uint8_t v___x_1783_; 
lean_inc_ref(v_msgData_1655_);
v___x_1783_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1655_);
v___y_1764_ = v___x_1783_;
goto v___jp_1763_;
}
v___jp_1663_:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v_env_1678_; lean_object* v_nextMacroScope_1679_; lean_object* v_ngen_1680_; lean_object* v_auxDeclNGen_1681_; lean_object* v_traceState_1682_; lean_object* v_cache_1683_; lean_object* v_messages_1684_; lean_object* v_infoState_1685_; lean_object* v_snapshotTasks_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1697_; 
lean_inc(v_openDecls_1672_);
lean_inc(v_currNamespace_1671_);
v___x_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1674_, 0, v_currNamespace_1671_);
lean_ctor_set(v___x_1674_, 1, v_openDecls_1672_);
v___x_1675_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
lean_ctor_set(v___x_1675_, 1, v___y_1670_);
lean_inc_ref(v___y_1669_);
lean_inc_ref(v___y_1665_);
v___x_1676_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1676_, 0, v___y_1665_);
lean_ctor_set(v___x_1676_, 1, v___y_1664_);
lean_ctor_set(v___x_1676_, 2, v___y_1666_);
lean_ctor_set(v___x_1676_, 3, v___y_1669_);
lean_ctor_set(v___x_1676_, 4, v___x_1675_);
lean_ctor_set_uint8(v___x_1676_, sizeof(void*)*5, v___y_1668_);
lean_ctor_set_uint8(v___x_1676_, sizeof(void*)*5 + 1, v___y_1667_);
lean_ctor_set_uint8(v___x_1676_, sizeof(void*)*5 + 2, v_isSilent_1657_);
v___x_1677_ = lean_st_ref_take(v___y_1673_);
v_env_1678_ = lean_ctor_get(v___x_1677_, 0);
v_nextMacroScope_1679_ = lean_ctor_get(v___x_1677_, 1);
v_ngen_1680_ = lean_ctor_get(v___x_1677_, 2);
v_auxDeclNGen_1681_ = lean_ctor_get(v___x_1677_, 3);
v_traceState_1682_ = lean_ctor_get(v___x_1677_, 4);
v_cache_1683_ = lean_ctor_get(v___x_1677_, 5);
v_messages_1684_ = lean_ctor_get(v___x_1677_, 6);
v_infoState_1685_ = lean_ctor_get(v___x_1677_, 7);
v_snapshotTasks_1686_ = lean_ctor_get(v___x_1677_, 8);
v_isSharedCheck_1697_ = !lean_is_exclusive(v___x_1677_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1688_ = v___x_1677_;
v_isShared_1689_ = v_isSharedCheck_1697_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_snapshotTasks_1686_);
lean_inc(v_infoState_1685_);
lean_inc(v_messages_1684_);
lean_inc(v_cache_1683_);
lean_inc(v_traceState_1682_);
lean_inc(v_auxDeclNGen_1681_);
lean_inc(v_ngen_1680_);
lean_inc(v_nextMacroScope_1679_);
lean_inc(v_env_1678_);
lean_dec(v___x_1677_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1697_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1693_; 
v___x_1690_ = lean_box(0);
v___x_1691_ = l_Lean_MessageLog_add(v___x_1676_, v_messages_1684_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 6, v___x_1691_);
v___x_1693_ = v___x_1688_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v_env_1678_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_nextMacroScope_1679_);
lean_ctor_set(v_reuseFailAlloc_1696_, 2, v_ngen_1680_);
lean_ctor_set(v_reuseFailAlloc_1696_, 3, v_auxDeclNGen_1681_);
lean_ctor_set(v_reuseFailAlloc_1696_, 4, v_traceState_1682_);
lean_ctor_set(v_reuseFailAlloc_1696_, 5, v_cache_1683_);
lean_ctor_set(v_reuseFailAlloc_1696_, 6, v___x_1691_);
lean_ctor_set(v_reuseFailAlloc_1696_, 7, v_infoState_1685_);
lean_ctor_set(v_reuseFailAlloc_1696_, 8, v_snapshotTasks_1686_);
v___x_1693_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = lean_st_ref_put(v___y_1673_, v___x_1693_);
v___x_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1690_);
return v___x_1695_;
}
}
}
v___jp_1698_:
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1724_; 
v___x_1709_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1655_);
v___x_1710_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v___x_1709_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_);
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1710_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1713_ = v___x_1710_;
v_isShared_1714_ = v_isSharedCheck_1724_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1710_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1724_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_inc_ref_n(v___y_1707_, 2);
v___x_1715_ = l_Lean_FileMap_toPosition(v___y_1707_, v___y_1704_);
lean_dec(v___y_1704_);
v___x_1716_ = l_Lean_FileMap_toPosition(v___y_1707_, v___y_1708_);
lean_dec(v___y_1708_);
v___x_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
v___x_1718_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0));
if (v___y_1702_ == 0)
{
lean_del_object(v___x_1713_);
lean_dec_ref(v___y_1701_);
v___y_1664_ = v___x_1715_;
v___y_1665_ = v___y_1703_;
v___y_1666_ = v___x_1717_;
v___y_1667_ = v___y_1706_;
v___y_1668_ = v___y_1705_;
v___y_1669_ = v___x_1718_;
v___y_1670_ = v_a_1711_;
v_currNamespace_1671_ = v___y_1699_;
v_openDecls_1672_ = v___y_1700_;
v___y_1673_ = v___y_1661_;
goto v___jp_1663_;
}
else
{
uint8_t v___x_1719_; 
lean_inc(v_a_1711_);
v___x_1719_ = l_Lean_MessageData_hasTag(v___y_1701_, v_a_1711_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; lean_object* v___x_1722_; 
lean_dec_ref_known(v___x_1717_, 1);
lean_dec_ref(v___x_1715_);
lean_dec(v_a_1711_);
v___x_1720_ = lean_box(0);
if (v_isShared_1714_ == 0)
{
lean_ctor_set(v___x_1713_, 0, v___x_1720_);
v___x_1722_ = v___x_1713_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v___x_1720_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
else
{
lean_del_object(v___x_1713_);
v___y_1664_ = v___x_1715_;
v___y_1665_ = v___y_1703_;
v___y_1666_ = v___x_1717_;
v___y_1667_ = v___y_1706_;
v___y_1668_ = v___y_1705_;
v___y_1669_ = v___x_1718_;
v___y_1670_ = v_a_1711_;
v_currNamespace_1671_ = v___y_1699_;
v_openDecls_1672_ = v___y_1700_;
v___y_1673_ = v___y_1661_;
goto v___jp_1663_;
}
}
}
}
v___jp_1725_:
{
lean_object* v___x_1736_; 
v___x_1736_ = l_Lean_Syntax_getTailPos_x3f(v___y_1729_, v___y_1734_);
lean_dec(v___y_1729_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_inc(v___y_1735_);
v___y_1699_ = v___y_1726_;
v___y_1700_ = v___y_1727_;
v___y_1701_ = v___y_1728_;
v___y_1702_ = v___y_1731_;
v___y_1703_ = v___y_1730_;
v___y_1704_ = v___y_1735_;
v___y_1705_ = v___y_1734_;
v___y_1706_ = v___y_1733_;
v___y_1707_ = v___y_1732_;
v___y_1708_ = v___y_1735_;
goto v___jp_1698_;
}
else
{
lean_object* v_val_1737_; 
v_val_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_val_1737_);
lean_dec_ref_known(v___x_1736_, 1);
v___y_1699_ = v___y_1726_;
v___y_1700_ = v___y_1727_;
v___y_1701_ = v___y_1728_;
v___y_1702_ = v___y_1731_;
v___y_1703_ = v___y_1730_;
v___y_1704_ = v___y_1735_;
v___y_1705_ = v___y_1734_;
v___y_1706_ = v___y_1733_;
v___y_1707_ = v___y_1732_;
v___y_1708_ = v_val_1737_;
goto v___jp_1698_;
}
}
v___jp_1738_:
{
lean_object* v_ref_1748_; lean_object* v___x_1749_; 
v_ref_1748_ = l_Lean_replaceRef(v_ref_1654_, v___y_1742_);
v___x_1749_ = l_Lean_Syntax_getPos_x3f(v_ref_1748_, v___y_1745_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_unsigned_to_nat(0u);
v___y_1726_ = v___y_1739_;
v___y_1727_ = v___y_1740_;
v___y_1728_ = v___y_1741_;
v___y_1729_ = v_ref_1748_;
v___y_1730_ = v___y_1744_;
v___y_1731_ = v___y_1743_;
v___y_1732_ = v___y_1746_;
v___y_1733_ = v___y_1747_;
v___y_1734_ = v___y_1745_;
v___y_1735_ = v___x_1750_;
goto v___jp_1725_;
}
else
{
lean_object* v_val_1751_; 
v_val_1751_ = lean_ctor_get(v___x_1749_, 0);
lean_inc(v_val_1751_);
lean_dec_ref_known(v___x_1749_, 1);
v___y_1726_ = v___y_1739_;
v___y_1727_ = v___y_1740_;
v___y_1728_ = v___y_1741_;
v___y_1729_ = v_ref_1748_;
v___y_1730_ = v___y_1744_;
v___y_1731_ = v___y_1743_;
v___y_1732_ = v___y_1746_;
v___y_1733_ = v___y_1747_;
v___y_1734_ = v___y_1745_;
v___y_1735_ = v_val_1751_;
goto v___jp_1725_;
}
}
v___jp_1753_:
{
if (v___y_1762_ == 0)
{
v___y_1739_ = v___y_1754_;
v___y_1740_ = v___y_1755_;
v___y_1741_ = v___y_1758_;
v___y_1742_ = v___y_1759_;
v___y_1743_ = v___y_1760_;
v___y_1744_ = v___y_1756_;
v___y_1745_ = v___y_1761_;
v___y_1746_ = v___y_1757_;
v___y_1747_ = v_severity_1656_;
goto v___jp_1738_;
}
else
{
v___y_1739_ = v___y_1754_;
v___y_1740_ = v___y_1755_;
v___y_1741_ = v___y_1758_;
v___y_1742_ = v___y_1759_;
v___y_1743_ = v___y_1760_;
v___y_1744_ = v___y_1756_;
v___y_1745_ = v___y_1761_;
v___y_1746_ = v___y_1757_;
v___y_1747_ = v___x_1752_;
goto v___jp_1738_;
}
}
v___jp_1763_:
{
if (v___y_1764_ == 0)
{
lean_object* v_toCold_1765_; lean_object* v_ref_1766_; uint8_t v_suppressElabErrors_1767_; lean_object* v_fileName_1768_; lean_object* v_fileMap_1769_; lean_object* v_options_1770_; lean_object* v_currNamespace_1771_; lean_object* v_openDecls_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___f_1775_; uint8_t v___x_1776_; uint8_t v___x_1777_; 
v_toCold_1765_ = lean_ctor_get(v___y_1660_, 0);
v_ref_1766_ = lean_ctor_get(v___y_1660_, 2);
v_suppressElabErrors_1767_ = lean_ctor_get_uint8(v___y_1660_, sizeof(void*)*3 + 1);
v_fileName_1768_ = lean_ctor_get(v_toCold_1765_, 0);
v_fileMap_1769_ = lean_ctor_get(v_toCold_1765_, 1);
v_options_1770_ = lean_ctor_get(v_toCold_1765_, 2);
v_currNamespace_1771_ = lean_ctor_get(v_toCold_1765_, 4);
v_openDecls_1772_ = lean_ctor_get(v_toCold_1765_, 5);
v___x_1773_ = lean_box(v_suppressElabErrors_1767_);
v___x_1774_ = lean_box(v___y_1764_);
v___f_1775_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1775_, 0, v___x_1773_);
lean_closure_set(v___f_1775_, 1, v___x_1774_);
v___x_1776_ = 1;
v___x_1777_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1656_, v___x_1776_);
if (v___x_1777_ == 0)
{
v___y_1754_ = v_currNamespace_1771_;
v___y_1755_ = v_openDecls_1772_;
v___y_1756_ = v_fileName_1768_;
v___y_1757_ = v_fileMap_1769_;
v___y_1758_ = v___f_1775_;
v___y_1759_ = v_ref_1766_;
v___y_1760_ = v_suppressElabErrors_1767_;
v___y_1761_ = v___y_1764_;
v___y_1762_ = v___x_1777_;
goto v___jp_1753_;
}
else
{
lean_object* v___x_1778_; uint8_t v___x_1779_; 
v___x_1778_ = l_Lean_warningAsError;
v___x_1779_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_1770_, v___x_1778_);
v___y_1754_ = v_currNamespace_1771_;
v___y_1755_ = v_openDecls_1772_;
v___y_1756_ = v_fileName_1768_;
v___y_1757_ = v_fileMap_1769_;
v___y_1758_ = v___f_1775_;
v___y_1759_ = v_ref_1766_;
v___y_1760_ = v_suppressElabErrors_1767_;
v___y_1761_ = v___y_1764_;
v___y_1762_ = v___x_1779_;
goto v___jp_1753_;
}
}
else
{
lean_object* v___x_1780_; lean_object* v___x_1781_; 
lean_dec_ref(v_msgData_1655_);
v___x_1780_ = lean_box(0);
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1780_);
return v___x_1781_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___boxed(lean_object* v_ref_1784_, lean_object* v_msgData_1785_, lean_object* v_severity_1786_, lean_object* v_isSilent_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_){
_start:
{
uint8_t v_severity_boxed_1793_; uint8_t v_isSilent_boxed_1794_; lean_object* v_res_1795_; 
v_severity_boxed_1793_ = lean_unbox(v_severity_1786_);
v_isSilent_boxed_1794_ = lean_unbox(v_isSilent_1787_);
v_res_1795_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg(v_ref_1784_, v_msgData_1785_, v_severity_boxed_1793_, v_isSilent_boxed_1794_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_);
lean_dec(v___y_1791_);
lean_dec_ref(v___y_1790_);
lean_dec(v___y_1789_);
lean_dec_ref(v___y_1788_);
lean_dec(v_ref_1784_);
return v_res_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30(lean_object* v_ref_1796_, lean_object* v_msgData_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
uint8_t v___x_1805_; uint8_t v___x_1806_; lean_object* v___x_1807_; 
v___x_1805_ = 2;
v___x_1806_ = 0;
v___x_1807_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg(v_ref_1796_, v_msgData_1797_, v___x_1805_, v___x_1806_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30___boxed(lean_object* v_ref_1808_, lean_object* v_msgData_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30(v_ref_1808_, v_msgData_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
lean_dec(v___y_1813_);
lean_dec_ref(v___y_1812_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec(v_ref_1808_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31_spec__42(lean_object* v_msgData_1818_, uint8_t v_severity_1819_, uint8_t v_isSilent_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_){
_start:
{
lean_object* v_ref_1828_; lean_object* v___x_1829_; 
v_ref_1828_ = lean_ctor_get(v___y_1825_, 2);
v___x_1829_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg(v_ref_1828_, v_msgData_1818_, v_severity_1819_, v_isSilent_1820_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31_spec__42___boxed(lean_object* v_msgData_1830_, lean_object* v_severity_1831_, lean_object* v_isSilent_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_){
_start:
{
uint8_t v_severity_boxed_1840_; uint8_t v_isSilent_boxed_1841_; lean_object* v_res_1842_; 
v_severity_boxed_1840_ = lean_unbox(v_severity_1831_);
v_isSilent_boxed_1841_ = lean_unbox(v_isSilent_1832_);
v_res_1842_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31_spec__42(v_msgData_1830_, v_severity_boxed_1840_, v_isSilent_boxed_1841_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31(lean_object* v_msgData_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
uint8_t v___x_1851_; uint8_t v___x_1852_; lean_object* v___x_1853_; 
v___x_1851_ = 2;
v___x_1852_ = 0;
v___x_1853_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31_spec__42(v_msgData_1843_, v___x_1851_, v___x_1852_, v___y_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31___boxed(lean_object* v_msgData_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31(v_msgData_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
lean_dec(v___y_1856_);
lean_dec_ref(v___y_1855_);
return v_res_1862_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1(void){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1864_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__0));
v___x_1865_ = l_Lean_stringToMessageData(v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19(lean_object* v_ex_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_){
_start:
{
if (lean_obj_tag(v_ex_1866_) == 0)
{
lean_object* v_ref_1874_; lean_object* v_msg_1875_; lean_object* v___x_1876_; 
v_ref_1874_ = lean_ctor_get(v_ex_1866_, 0);
lean_inc(v_ref_1874_);
v_msg_1875_ = lean_ctor_get(v_ex_1866_, 1);
lean_inc_ref(v_msg_1875_);
lean_dec_ref_known(v_ex_1866_, 2);
v___x_1876_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30(v_ref_1874_, v_msg_1875_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_);
lean_dec(v_ref_1874_);
return v___x_1876_;
}
else
{
lean_object* v_id_1877_; uint8_t v___y_1879_; uint8_t v___x_1901_; 
v_id_1877_ = lean_ctor_get(v_ex_1866_, 0);
lean_inc(v_id_1877_);
v___x_1901_ = l_Lean_Elab_isAbortExceptionId(v_id_1877_);
if (v___x_1901_ == 0)
{
uint8_t v___x_1902_; 
v___x_1902_ = l_Lean_Exception_isInterrupt(v_ex_1866_);
lean_dec_ref_known(v_ex_1866_, 2);
v___y_1879_ = v___x_1902_;
goto v___jp_1878_;
}
else
{
lean_dec_ref_known(v_ex_1866_, 2);
v___y_1879_ = v___x_1901_;
goto v___jp_1878_;
}
v___jp_1878_:
{
if (v___y_1879_ == 0)
{
lean_object* v_ref_1880_; lean_object* v___x_1881_; 
v_ref_1880_ = lean_ctor_get(v___y_1871_, 2);
v___x_1881_ = l_Lean_InternalExceptionId_getName(v_id_1877_);
lean_dec(v_id_1877_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1881_, 1);
v___x_1883_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1);
v___x_1884_ = l_Lean_MessageData_ofName(v_a_1882_);
v___x_1885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1883_);
lean_ctor_set(v___x_1885_, 1, v___x_1884_);
v___x_1886_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__31(v___x_1885_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_);
return v___x_1886_;
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1898_; 
v_a_1887_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1889_ = v___x_1881_;
v_isShared_1890_ = v_isSharedCheck_1898_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1881_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1898_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1896_; 
v___x_1891_ = lean_io_error_to_string(v_a_1887_);
v___x_1892_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1892_, 0, v___x_1891_);
v___x_1893_ = l_Lean_MessageData_ofFormat(v___x_1892_);
lean_inc(v_ref_1880_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v_ref_1880_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 0, v___x_1894_);
v___x_1896_ = v___x_1889_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v___x_1894_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
else
{
lean_object* v___x_1899_; lean_object* v___x_1900_; 
lean_dec(v_id_1877_);
v___x_1899_ = lean_box(0);
v___x_1900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1899_);
return v___x_1900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___boxed(lean_object* v_ex_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19(v_ex_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_x_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_){
_start:
{
lean_object* v___x_1920_; 
lean_inc(v___y_1918_);
lean_inc_ref(v___y_1917_);
lean_inc(v___y_1916_);
lean_inc_ref(v___y_1915_);
lean_inc(v___y_1914_);
lean_inc_ref(v___y_1913_);
v___x_1920_ = lean_apply_7(v_x_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, lean_box(0));
if (lean_obj_tag(v___x_1920_) == 0)
{
return v___x_1920_;
}
else
{
lean_object* v_a_1921_; uint8_t v___y_1923_; uint8_t v___x_1925_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
v___x_1925_ = l_Lean_Exception_isInterrupt(v_a_1921_);
if (v___x_1925_ == 0)
{
uint8_t v___x_1926_; 
lean_inc(v_a_1921_);
v___x_1926_ = l_Lean_Exception_isRuntime(v_a_1921_);
v___y_1923_ = v___x_1926_;
goto v___jp_1922_;
}
else
{
v___y_1923_ = v___x_1925_;
goto v___jp_1922_;
}
v___jp_1922_:
{
if (v___y_1923_ == 0)
{
lean_object* v___x_1924_; 
lean_dec_ref_known(v___x_1920_, 1);
v___x_1924_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19(v_a_1921_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_);
return v___x_1924_;
}
else
{
lean_dec(v_a_1921_);
return v___x_1920_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_x_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10(v_x_1927_, v___y_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec(v___y_1929_);
lean_dec_ref(v___y_1928_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__11(lean_object* v___x_1936_, lean_object* v___x_1937_, lean_object* v_as_1938_, size_t v_sz_1939_, size_t v_i_1940_, lean_object* v_b_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_){
_start:
{
uint8_t v___x_1949_; 
v___x_1949_ = lean_usize_dec_lt(v_i_1940_, v_sz_1939_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; 
lean_dec_ref(v___x_1936_);
v___x_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1950_, 0, v_b_1941_);
return v___x_1950_;
}
else
{
lean_object* v_a_1951_; lean_object* v_ref_1952_; lean_object* v_toCold_1953_; lean_object* v_currRecDepth_1954_; lean_object* v_ref_1955_; uint8_t v_diag_1956_; uint8_t v_suppressElabErrors_1957_; lean_object* v___x_1958_; uint8_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v_ref_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; 
v_a_1951_ = lean_array_uget_borrowed(v_as_1938_, v_i_1940_);
v_ref_1952_ = lean_ctor_get(v_a_1951_, 0);
v_toCold_1953_ = lean_ctor_get(v___y_1946_, 0);
v_currRecDepth_1954_ = lean_ctor_get(v___y_1946_, 1);
v_ref_1955_ = lean_ctor_get(v___y_1946_, 2);
v_diag_1956_ = lean_ctor_get_uint8(v___y_1946_, sizeof(void*)*3);
v_suppressElabErrors_1957_ = lean_ctor_get_uint8(v___y_1946_, sizeof(void*)*3 + 1);
v___x_1958_ = lean_unsigned_to_nat(0u);
v___x_1959_ = lean_nat_dec_eq(v___x_1937_, v___x_1958_);
v___x_1960_ = lean_box(0);
v___x_1961_ = lean_box(0);
v___x_1962_ = lean_box(v___x_1959_);
lean_inc_ref(v___x_1936_);
lean_inc(v_a_1951_);
v___x_1963_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_processDefDeriving___boxed), 11, 4);
lean_closure_set(v___x_1963_, 0, v_a_1951_);
lean_closure_set(v___x_1963_, 1, v___x_1936_);
lean_closure_set(v___x_1963_, 2, v___x_1962_);
lean_closure_set(v___x_1963_, 3, v___x_1961_);
v_ref_1964_ = l_Lean_replaceRef(v_ref_1952_, v_ref_1955_);
lean_inc(v_currRecDepth_1954_);
lean_inc_ref(v_toCold_1953_);
v___x_1965_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1965_, 0, v_toCold_1953_);
lean_ctor_set(v___x_1965_, 1, v_currRecDepth_1954_);
lean_ctor_set(v___x_1965_, 2, v_ref_1964_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*3, v_diag_1956_);
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*3 + 1, v_suppressElabErrors_1957_);
v___x_1966_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10(v___x_1963_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___x_1965_, v___y_1947_);
lean_dec_ref_known(v___x_1965_, 3);
if (lean_obj_tag(v___x_1966_) == 0)
{
size_t v___x_1967_; size_t v___x_1968_; 
lean_dec_ref_known(v___x_1966_, 1);
v___x_1967_ = ((size_t)1ULL);
v___x_1968_ = lean_usize_add(v_i_1940_, v___x_1967_);
v_i_1940_ = v___x_1968_;
v_b_1941_ = v___x_1960_;
goto _start;
}
else
{
lean_dec_ref(v___x_1936_);
return v___x_1966_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__11___boxed(lean_object* v___x_1970_, lean_object* v___x_1971_, lean_object* v_as_1972_, lean_object* v_sz_1973_, lean_object* v_i_1974_, lean_object* v_b_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
size_t v_sz_boxed_1983_; size_t v_i_boxed_1984_; lean_object* v_res_1985_; 
v_sz_boxed_1983_ = lean_unbox_usize(v_sz_1973_);
lean_dec(v_sz_1973_);
v_i_boxed_1984_ = lean_unbox_usize(v_i_1974_);
lean_dec(v_i_1974_);
v_res_1985_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__11(v___x_1970_, v___x_1971_, v_as_1972_, v_sz_boxed_1983_, v_i_boxed_1984_, v_b_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
lean_dec_ref(v_as_1972_);
lean_dec(v___x_1971_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v_a_1986_, lean_object* v_declName_1987_, lean_object* v_a_1988_, lean_object* v___x_1989_, size_t v___x_1990_, lean_object* v___x_1991_, lean_object* v_xs_1992_, lean_object* v_x_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; size_t v_sz_2006_; lean_object* v___x_2007_; 
v___x_2001_ = l_Lean_ConstantInfo_levelParams(v_a_1986_);
v___x_2002_ = lean_box(0);
v___x_2003_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v___x_2001_, v___x_2002_);
v___x_2004_ = l_Lean_Expr_const___override(v_declName_1987_, v___x_2003_);
v___x_2005_ = l_Lean_mkAppN(v___x_2004_, v_xs_1992_);
v_sz_2006_ = lean_array_size(v_a_1988_);
v___x_2007_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__11(v___x_2005_, v___x_1989_, v_a_1988_, v_sz_2006_, v___x_1990_, v___x_1991_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2007_);
if (v_isSharedCheck_2014_ == 0)
{
lean_object* v_unused_2015_; 
v_unused_2015_ = lean_ctor_get(v___x_2007_, 0);
lean_dec(v_unused_2015_);
v___x_2009_ = v___x_2007_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_dec(v___x_2007_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set(v___x_2009_, 0, v___x_1991_);
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v___x_1991_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
else
{
return v___x_2007_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v_a_2016_, lean_object* v_declName_2017_, lean_object* v_a_2018_, lean_object* v___x_2019_, lean_object* v___x_2020_, lean_object* v___x_2021_, lean_object* v_xs_2022_, lean_object* v_x_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
size_t v___x_48415__boxed_2031_; lean_object* v_res_2032_; 
v___x_48415__boxed_2031_ = lean_unbox_usize(v___x_2020_);
lean_dec(v___x_2020_);
v_res_2032_ = l_Lean_Elab_Command_elabNewtype___lam__0(v_a_2016_, v_declName_2017_, v_a_2018_, v___x_2019_, v___x_48415__boxed_2031_, v___x_2021_, v_xs_2022_, v_x_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec(v___y_2027_);
lean_dec_ref(v___y_2026_);
lean_dec(v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec_ref(v_x_2023_);
lean_dec_ref(v_xs_2022_);
lean_dec(v___x_2019_);
lean_dec_ref(v_a_2018_);
lean_dec_ref(v_a_2016_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___lam__0(lean_object* v___y_2033_, uint8_t v_isExporting_2034_, lean_object* v___x_2035_, lean_object* v___y_2036_, lean_object* v___x_2037_, lean_object* v_a_x3f_2038_){
_start:
{
lean_object* v___x_2040_; lean_object* v_env_2041_; lean_object* v_nextMacroScope_2042_; lean_object* v_ngen_2043_; lean_object* v_auxDeclNGen_2044_; lean_object* v_traceState_2045_; lean_object* v_messages_2046_; lean_object* v_infoState_2047_; lean_object* v_snapshotTasks_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2073_; 
v___x_2040_ = lean_st_ref_take(v___y_2033_);
v_env_2041_ = lean_ctor_get(v___x_2040_, 0);
v_nextMacroScope_2042_ = lean_ctor_get(v___x_2040_, 1);
v_ngen_2043_ = lean_ctor_get(v___x_2040_, 2);
v_auxDeclNGen_2044_ = lean_ctor_get(v___x_2040_, 3);
v_traceState_2045_ = lean_ctor_get(v___x_2040_, 4);
v_messages_2046_ = lean_ctor_get(v___x_2040_, 6);
v_infoState_2047_ = lean_ctor_get(v___x_2040_, 7);
v_snapshotTasks_2048_ = lean_ctor_get(v___x_2040_, 8);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2073_ == 0)
{
lean_object* v_unused_2074_; 
v_unused_2074_ = lean_ctor_get(v___x_2040_, 5);
lean_dec(v_unused_2074_);
v___x_2050_ = v___x_2040_;
v_isShared_2051_ = v_isSharedCheck_2073_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_snapshotTasks_2048_);
lean_inc(v_infoState_2047_);
lean_inc(v_messages_2046_);
lean_inc(v_traceState_2045_);
lean_inc(v_auxDeclNGen_2044_);
lean_inc(v_ngen_2043_);
lean_inc(v_nextMacroScope_2042_);
lean_inc(v_env_2041_);
lean_dec(v___x_2040_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2073_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; lean_object* v___x_2054_; 
v___x_2052_ = l_Lean_Environment_setExporting(v_env_2041_, v_isExporting_2034_);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 5, v___x_2035_);
lean_ctor_set(v___x_2050_, 0, v___x_2052_);
v___x_2054_ = v___x_2050_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v___x_2052_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v_nextMacroScope_2042_);
lean_ctor_set(v_reuseFailAlloc_2072_, 2, v_ngen_2043_);
lean_ctor_set(v_reuseFailAlloc_2072_, 3, v_auxDeclNGen_2044_);
lean_ctor_set(v_reuseFailAlloc_2072_, 4, v_traceState_2045_);
lean_ctor_set(v_reuseFailAlloc_2072_, 5, v___x_2035_);
lean_ctor_set(v_reuseFailAlloc_2072_, 6, v_messages_2046_);
lean_ctor_set(v_reuseFailAlloc_2072_, 7, v_infoState_2047_);
lean_ctor_set(v_reuseFailAlloc_2072_, 8, v_snapshotTasks_2048_);
v___x_2054_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v_mctx_2057_; lean_object* v_zetaDeltaFVarIds_2058_; lean_object* v_postponed_2059_; lean_object* v_diag_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2070_; 
v___x_2055_ = lean_st_ref_put(v___y_2033_, v___x_2054_);
v___x_2056_ = lean_st_ref_take(v___y_2036_);
v_mctx_2057_ = lean_ctor_get(v___x_2056_, 0);
v_zetaDeltaFVarIds_2058_ = lean_ctor_get(v___x_2056_, 2);
v_postponed_2059_ = lean_ctor_get(v___x_2056_, 3);
v_diag_2060_ = lean_ctor_get(v___x_2056_, 4);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2070_ == 0)
{
lean_object* v_unused_2071_; 
v_unused_2071_ = lean_ctor_get(v___x_2056_, 1);
lean_dec(v_unused_2071_);
v___x_2062_ = v___x_2056_;
v_isShared_2063_ = v_isSharedCheck_2070_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_diag_2060_);
lean_inc(v_postponed_2059_);
lean_inc(v_zetaDeltaFVarIds_2058_);
lean_inc(v_mctx_2057_);
lean_dec(v___x_2056_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2070_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2066_; 
v___x_2064_ = lean_box(0);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 1, v___x_2037_);
v___x_2066_ = v___x_2062_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_mctx_2057_);
lean_ctor_set(v_reuseFailAlloc_2069_, 1, v___x_2037_);
lean_ctor_set(v_reuseFailAlloc_2069_, 2, v_zetaDeltaFVarIds_2058_);
lean_ctor_set(v_reuseFailAlloc_2069_, 3, v_postponed_2059_);
lean_ctor_set(v_reuseFailAlloc_2069_, 4, v_diag_2060_);
v___x_2066_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2067_ = lean_st_ref_put(v___y_2036_, v___x_2066_);
v___x_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2068_, 0, v___x_2064_);
return v___x_2068_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___lam__0___boxed(lean_object* v___y_2075_, lean_object* v_isExporting_2076_, lean_object* v___x_2077_, lean_object* v___y_2078_, lean_object* v___x_2079_, lean_object* v_a_x3f_2080_, lean_object* v___y_2081_){
_start:
{
uint8_t v_isExporting_boxed_2082_; lean_object* v_res_2083_; 
v_isExporting_boxed_2082_ = lean_unbox(v_isExporting_2076_);
v_res_2083_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___lam__0(v___y_2075_, v_isExporting_boxed_2082_, v___x_2077_, v___y_2078_, v___x_2079_, v_a_x3f_2080_);
lean_dec(v_a_x3f_2080_);
lean_dec(v___y_2078_);
lean_dec(v___y_2075_);
return v_res_2083_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg(lean_object* v_x_2084_, uint8_t v_isExporting_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v___x_2093_; lean_object* v_env_2094_; lean_object* v___x_2095_; uint8_t v_isModule_2096_; 
v___x_2093_ = lean_st_ref_get(v___y_2091_);
v_env_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc_ref(v_env_2094_);
lean_dec(v___x_2093_);
v___x_2095_ = l_Lean_Environment_header(v_env_2094_);
v_isModule_2096_ = lean_ctor_get_uint8(v___x_2095_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2095_);
if (v_isModule_2096_ == 0)
{
lean_object* v___x_2097_; 
lean_dec_ref(v_env_2094_);
lean_inc(v___y_2091_);
lean_inc_ref(v___y_2090_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
v___x_2097_ = lean_apply_7(v_x_2084_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, lean_box(0));
return v___x_2097_;
}
else
{
uint8_t v_isExporting_2098_; 
v_isExporting_2098_ = lean_ctor_get_uint8(v_env_2094_, sizeof(void*)*8);
lean_dec_ref(v_env_2094_);
if (v_isExporting_2085_ == 0)
{
if (v_isExporting_2098_ == 0)
{
lean_object* v___x_2164_; 
lean_inc(v___y_2091_);
lean_inc_ref(v___y_2090_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
v___x_2164_ = lean_apply_7(v_x_2084_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, lean_box(0));
return v___x_2164_;
}
else
{
goto v___jp_2099_;
}
}
else
{
if (v_isExporting_2098_ == 0)
{
goto v___jp_2099_;
}
else
{
lean_object* v___x_2165_; 
lean_inc(v___y_2091_);
lean_inc_ref(v___y_2090_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
v___x_2165_ = lean_apply_7(v_x_2084_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, lean_box(0));
return v___x_2165_;
}
}
v___jp_2099_:
{
lean_object* v___x_2100_; lean_object* v_env_2101_; lean_object* v_nextMacroScope_2102_; lean_object* v_ngen_2103_; lean_object* v_auxDeclNGen_2104_; lean_object* v_traceState_2105_; lean_object* v_messages_2106_; lean_object* v_infoState_2107_; lean_object* v_snapshotTasks_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2162_; 
v___x_2100_ = lean_st_ref_take(v___y_2091_);
v_env_2101_ = lean_ctor_get(v___x_2100_, 0);
v_nextMacroScope_2102_ = lean_ctor_get(v___x_2100_, 1);
v_ngen_2103_ = lean_ctor_get(v___x_2100_, 2);
v_auxDeclNGen_2104_ = lean_ctor_get(v___x_2100_, 3);
v_traceState_2105_ = lean_ctor_get(v___x_2100_, 4);
v_messages_2106_ = lean_ctor_get(v___x_2100_, 6);
v_infoState_2107_ = lean_ctor_get(v___x_2100_, 7);
v_snapshotTasks_2108_ = lean_ctor_get(v___x_2100_, 8);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2162_ == 0)
{
lean_object* v_unused_2163_; 
v_unused_2163_ = lean_ctor_get(v___x_2100_, 5);
lean_dec(v_unused_2163_);
v___x_2110_ = v___x_2100_;
v_isShared_2111_ = v_isSharedCheck_2162_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_snapshotTasks_2108_);
lean_inc(v_infoState_2107_);
lean_inc(v_messages_2106_);
lean_inc(v_traceState_2105_);
lean_inc(v_auxDeclNGen_2104_);
lean_inc(v_ngen_2103_);
lean_inc(v_nextMacroScope_2102_);
lean_inc(v_env_2101_);
lean_dec(v___x_2100_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2162_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2112_ = l_Lean_Environment_setExporting(v_env_2101_, v_isExporting_2085_);
v___x_2113_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2);
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 5, v___x_2113_);
lean_ctor_set(v___x_2110_, 0, v___x_2112_);
v___x_2115_ = v___x_2110_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v___x_2112_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v_nextMacroScope_2102_);
lean_ctor_set(v_reuseFailAlloc_2161_, 2, v_ngen_2103_);
lean_ctor_set(v_reuseFailAlloc_2161_, 3, v_auxDeclNGen_2104_);
lean_ctor_set(v_reuseFailAlloc_2161_, 4, v_traceState_2105_);
lean_ctor_set(v_reuseFailAlloc_2161_, 5, v___x_2113_);
lean_ctor_set(v_reuseFailAlloc_2161_, 6, v_messages_2106_);
lean_ctor_set(v_reuseFailAlloc_2161_, 7, v_infoState_2107_);
lean_ctor_set(v_reuseFailAlloc_2161_, 8, v_snapshotTasks_2108_);
v___x_2115_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v_mctx_2118_; lean_object* v_zetaDeltaFVarIds_2119_; lean_object* v_postponed_2120_; lean_object* v_diag_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2159_; 
v___x_2116_ = lean_st_ref_put(v___y_2091_, v___x_2115_);
v___x_2117_ = lean_st_ref_take(v___y_2089_);
v_mctx_2118_ = lean_ctor_get(v___x_2117_, 0);
v_zetaDeltaFVarIds_2119_ = lean_ctor_get(v___x_2117_, 2);
v_postponed_2120_ = lean_ctor_get(v___x_2117_, 3);
v_diag_2121_ = lean_ctor_get(v___x_2117_, 4);
v_isSharedCheck_2159_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2159_ == 0)
{
lean_object* v_unused_2160_; 
v_unused_2160_ = lean_ctor_get(v___x_2117_, 1);
lean_dec(v_unused_2160_);
v___x_2123_ = v___x_2117_;
v_isShared_2124_ = v_isSharedCheck_2159_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_diag_2121_);
lean_inc(v_postponed_2120_);
lean_inc(v_zetaDeltaFVarIds_2119_);
lean_inc(v_mctx_2118_);
lean_dec(v___x_2117_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2159_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; lean_object* v___x_2127_; 
v___x_2125_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3);
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 1, v___x_2125_);
v___x_2127_ = v___x_2123_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v_mctx_2118_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v___x_2125_);
lean_ctor_set(v_reuseFailAlloc_2158_, 2, v_zetaDeltaFVarIds_2119_);
lean_ctor_set(v_reuseFailAlloc_2158_, 3, v_postponed_2120_);
lean_ctor_set(v_reuseFailAlloc_2158_, 4, v_diag_2121_);
v___x_2127_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
lean_object* v___x_2128_; lean_object* v_r_2129_; 
v___x_2128_ = lean_st_ref_put(v___y_2089_, v___x_2127_);
lean_inc(v___y_2091_);
lean_inc_ref(v___y_2090_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
lean_inc(v___y_2087_);
lean_inc_ref(v___y_2086_);
v_r_2129_ = lean_apply_7(v_x_2084_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, lean_box(0));
if (lean_obj_tag(v_r_2129_) == 0)
{
lean_object* v_a_2130_; lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2146_; 
v_a_2130_ = lean_ctor_get(v_r_2129_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_r_2129_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2132_ = v_r_2129_;
v_isShared_2133_ = v_isSharedCheck_2146_;
goto v_resetjp_2131_;
}
else
{
lean_inc(v_a_2130_);
lean_dec(v_r_2129_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2146_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v___x_2135_; 
lean_inc(v_a_2130_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set_tag(v___x_2132_, 1);
v___x_2135_ = v___x_2132_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2130_);
v___x_2135_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
lean_object* v___x_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
v___x_2136_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___lam__0(v___y_2091_, v_isExporting_2098_, v___x_2113_, v___y_2089_, v___x_2125_, v___x_2135_);
lean_dec_ref(v___x_2135_);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2136_);
if (v_isSharedCheck_2143_ == 0)
{
lean_object* v_unused_2144_; 
v_unused_2144_ = lean_ctor_get(v___x_2136_, 0);
lean_dec(v_unused_2144_);
v___x_2138_ = v___x_2136_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_dec(v___x_2136_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 0, v_a_2130_);
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2130_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_a_2147_ = lean_ctor_get(v_r_2129_, 0);
lean_inc(v_a_2147_);
lean_dec_ref_known(v_r_2129_, 1);
v___x_2148_ = lean_box(0);
v___x_2149_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___lam__0(v___y_2091_, v_isExporting_2098_, v___x_2113_, v___y_2089_, v___x_2125_, v___x_2148_);
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
lean_ctor_set_tag(v___x_2151_, 1);
lean_ctor_set(v___x_2151_, 0, v_a_2147_);
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2147_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg___boxed(lean_object* v_x_2166_, lean_object* v_isExporting_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_){
_start:
{
uint8_t v_isExporting_boxed_2175_; lean_object* v_res_2176_; 
v_isExporting_boxed_2175_ = lean_unbox(v_isExporting_2167_);
v_res_2176_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg(v_x_2166_, v_isExporting_boxed_2175_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_, v___y_2173_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec(v___y_2171_);
lean_dec_ref(v___y_2170_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v_x_2177_, uint8_t v_when_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_){
_start:
{
if (v_when_2178_ == 0)
{
lean_object* v___x_2186_; 
lean_inc(v___y_2184_);
lean_inc_ref(v___y_2183_);
lean_inc(v___y_2182_);
lean_inc_ref(v___y_2181_);
lean_inc(v___y_2180_);
lean_inc_ref(v___y_2179_);
v___x_2186_ = lean_apply_7(v_x_2177_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_, lean_box(0));
return v___x_2186_;
}
else
{
uint8_t v___x_2187_; lean_object* v___x_2188_; 
v___x_2187_ = 0;
v___x_2188_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg(v_x_2177_, v___x_2187_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
return v___x_2188_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v_x_2189_, lean_object* v_when_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
uint8_t v_when_boxed_2198_; lean_object* v_res_2199_; 
v_when_boxed_2198_ = lean_unbox(v_when_2190_);
v_res_2199_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_x_2189_, v_when_boxed_2198_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v___x_2200_, uint8_t v___x_2201_, lean_object* v_declName_2202_, lean_object* v_a_2203_, lean_object* v___x_2204_, size_t v___x_2205_, lean_object* v___x_2206_, uint8_t v___x_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_){
_start:
{
lean_object* v___x_2215_; 
v___x_2215_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___x_2200_, v___x_2201_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_);
if (lean_obj_tag(v___x_2215_) == 0)
{
lean_object* v_a_2216_; lean_object* v___x_2217_; lean_object* v___f_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v_a_2216_ = lean_ctor_get(v___x_2215_, 0);
lean_inc_n(v_a_2216_, 2);
lean_dec_ref_known(v___x_2215_, 1);
v___x_2217_ = lean_box_usize(v___x_2205_);
v___f_2218_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 15, 6);
lean_closure_set(v___f_2218_, 0, v_a_2216_);
lean_closure_set(v___f_2218_, 1, v_declName_2202_);
lean_closure_set(v___f_2218_, 2, v_a_2203_);
lean_closure_set(v___f_2218_, 3, v___x_2204_);
lean_closure_set(v___f_2218_, 4, v___x_2217_);
lean_closure_set(v___f_2218_, 5, v___x_2206_);
v___x_2219_ = l_Lean_ConstantInfo_value_x21(v_a_2216_, v___x_2207_);
lean_dec(v_a_2216_);
v___x_2220_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v___x_2219_, v___f_2218_, v___x_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_);
return v___x_2220_;
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
lean_dec(v___x_2204_);
lean_dec_ref(v_a_2203_);
lean_dec(v_declName_2202_);
v_a_2221_ = lean_ctor_get(v___x_2215_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2215_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2215_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2215_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v___x_2229_, lean_object* v___x_2230_, lean_object* v_declName_2231_, lean_object* v_a_2232_, lean_object* v___x_2233_, lean_object* v___x_2234_, lean_object* v___x_2235_, lean_object* v___x_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
uint8_t v___x_48726__boxed_2244_; size_t v___x_48730__boxed_2245_; uint8_t v___x_48732__boxed_2246_; lean_object* v_res_2247_; 
v___x_48726__boxed_2244_ = lean_unbox(v___x_2230_);
v___x_48730__boxed_2245_ = lean_unbox_usize(v___x_2234_);
lean_dec(v___x_2234_);
v___x_48732__boxed_2246_ = lean_unbox(v___x_2236_);
v_res_2247_ = l_Lean_Elab_Command_elabNewtype___lam__1(v___x_2229_, v___x_48726__boxed_2244_, v_declName_2231_, v_a_2232_, v___x_2233_, v___x_48730__boxed_2245_, v___x_2235_, v___x_48732__boxed_2246_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(lean_object* v_t_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v___x_2251_; lean_object* v_infoState_2252_; uint8_t v_enabled_2253_; 
v___x_2251_ = lean_st_ref_get(v___y_2249_);
v_infoState_2252_ = lean_ctor_get(v___x_2251_, 8);
lean_inc_ref(v_infoState_2252_);
lean_dec(v___x_2251_);
v_enabled_2253_ = lean_ctor_get_uint8(v_infoState_2252_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2252_);
if (v_enabled_2253_ == 0)
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
lean_dec_ref(v_t_2248_);
v___x_2254_ = lean_box(0);
v___x_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
return v___x_2255_;
}
else
{
lean_object* v___x_2256_; lean_object* v_infoState_2257_; lean_object* v_env_2258_; lean_object* v_messages_2259_; lean_object* v_scopes_2260_; lean_object* v_usedQuotCtxts_2261_; lean_object* v_nextMacroScope_2262_; lean_object* v_maxRecDepth_2263_; lean_object* v_ngen_2264_; lean_object* v_auxDeclNGen_2265_; lean_object* v_traceState_2266_; lean_object* v_snapshotTasks_2267_; lean_object* v_prevLinterStates_2268_; lean_object* v_codeQualityEntryTasks_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2291_; 
v___x_2256_ = lean_st_ref_take(v___y_2249_);
v_infoState_2257_ = lean_ctor_get(v___x_2256_, 8);
v_env_2258_ = lean_ctor_get(v___x_2256_, 0);
v_messages_2259_ = lean_ctor_get(v___x_2256_, 1);
v_scopes_2260_ = lean_ctor_get(v___x_2256_, 2);
v_usedQuotCtxts_2261_ = lean_ctor_get(v___x_2256_, 3);
v_nextMacroScope_2262_ = lean_ctor_get(v___x_2256_, 4);
v_maxRecDepth_2263_ = lean_ctor_get(v___x_2256_, 5);
v_ngen_2264_ = lean_ctor_get(v___x_2256_, 6);
v_auxDeclNGen_2265_ = lean_ctor_get(v___x_2256_, 7);
v_traceState_2266_ = lean_ctor_get(v___x_2256_, 9);
v_snapshotTasks_2267_ = lean_ctor_get(v___x_2256_, 10);
v_prevLinterStates_2268_ = lean_ctor_get(v___x_2256_, 11);
v_codeQualityEntryTasks_2269_ = lean_ctor_get(v___x_2256_, 12);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2256_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2271_ = v___x_2256_;
v_isShared_2272_ = v_isSharedCheck_2291_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2269_);
lean_inc(v_prevLinterStates_2268_);
lean_inc(v_snapshotTasks_2267_);
lean_inc(v_traceState_2266_);
lean_inc(v_infoState_2257_);
lean_inc(v_auxDeclNGen_2265_);
lean_inc(v_ngen_2264_);
lean_inc(v_maxRecDepth_2263_);
lean_inc(v_nextMacroScope_2262_);
lean_inc(v_usedQuotCtxts_2261_);
lean_inc(v_scopes_2260_);
lean_inc(v_messages_2259_);
lean_inc(v_env_2258_);
lean_dec(v___x_2256_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2291_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
uint8_t v_enabled_2273_; lean_object* v_assignment_2274_; lean_object* v_lazyAssignment_2275_; lean_object* v_trees_2276_; lean_object* v___x_2278_; uint8_t v_isShared_2279_; uint8_t v_isSharedCheck_2290_; 
v_enabled_2273_ = lean_ctor_get_uint8(v_infoState_2257_, sizeof(void*)*3);
v_assignment_2274_ = lean_ctor_get(v_infoState_2257_, 0);
v_lazyAssignment_2275_ = lean_ctor_get(v_infoState_2257_, 1);
v_trees_2276_ = lean_ctor_get(v_infoState_2257_, 2);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_infoState_2257_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2278_ = v_infoState_2257_;
v_isShared_2279_ = v_isSharedCheck_2290_;
goto v_resetjp_2277_;
}
else
{
lean_inc(v_trees_2276_);
lean_inc(v_lazyAssignment_2275_);
lean_inc(v_assignment_2274_);
lean_dec(v_infoState_2257_);
v___x_2278_ = lean_box(0);
v_isShared_2279_ = v_isSharedCheck_2290_;
goto v_resetjp_2277_;
}
v_resetjp_2277_:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2283_; 
v___x_2280_ = lean_box(0);
v___x_2281_ = l_Lean_PersistentArray_push___redArg(v_trees_2276_, v_t_2248_);
if (v_isShared_2279_ == 0)
{
lean_ctor_set(v___x_2278_, 2, v___x_2281_);
v___x_2283_ = v___x_2278_;
goto v_reusejp_2282_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_assignment_2274_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v_lazyAssignment_2275_);
lean_ctor_set(v_reuseFailAlloc_2289_, 2, v___x_2281_);
lean_ctor_set_uint8(v_reuseFailAlloc_2289_, sizeof(void*)*3, v_enabled_2273_);
v___x_2283_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2282_;
}
v_reusejp_2282_:
{
lean_object* v___x_2285_; 
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 8, v___x_2283_);
v___x_2285_ = v___x_2271_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_env_2258_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v_messages_2259_);
lean_ctor_set(v_reuseFailAlloc_2288_, 2, v_scopes_2260_);
lean_ctor_set(v_reuseFailAlloc_2288_, 3, v_usedQuotCtxts_2261_);
lean_ctor_set(v_reuseFailAlloc_2288_, 4, v_nextMacroScope_2262_);
lean_ctor_set(v_reuseFailAlloc_2288_, 5, v_maxRecDepth_2263_);
lean_ctor_set(v_reuseFailAlloc_2288_, 6, v_ngen_2264_);
lean_ctor_set(v_reuseFailAlloc_2288_, 7, v_auxDeclNGen_2265_);
lean_ctor_set(v_reuseFailAlloc_2288_, 8, v___x_2283_);
lean_ctor_set(v_reuseFailAlloc_2288_, 9, v_traceState_2266_);
lean_ctor_set(v_reuseFailAlloc_2288_, 10, v_snapshotTasks_2267_);
lean_ctor_set(v_reuseFailAlloc_2288_, 11, v_prevLinterStates_2268_);
lean_ctor_set(v_reuseFailAlloc_2288_, 12, v_codeQualityEntryTasks_2269_);
v___x_2285_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_st_ref_put(v___y_2249_, v___x_2285_);
v___x_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2280_);
return v___x_2287_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg___boxed(lean_object* v_t_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_2292_, v___y_2293_);
lean_dec(v___y_2293_);
return v_res_2295_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2296_ = lean_unsigned_to_nat(32u);
v___x_2297_ = lean_mk_empty_array_with_capacity(v___x_2296_);
v___x_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
return v___x_2298_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1(void){
_start:
{
size_t v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2299_ = ((size_t)5ULL);
v___x_2300_ = lean_unsigned_to_nat(0u);
v___x_2301_ = lean_unsigned_to_nat(32u);
v___x_2302_ = lean_mk_empty_array_with_capacity(v___x_2301_);
v___x_2303_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0);
v___x_2304_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
lean_ctor_set(v___x_2304_, 1, v___x_2302_);
lean_ctor_set(v___x_2304_, 2, v___x_2300_);
lean_ctor_set(v___x_2304_, 3, v___x_2300_);
lean_ctor_set_usize(v___x_2304_, 4, v___x_2299_);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(lean_object* v_t_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v___x_2309_; lean_object* v_infoState_2310_; uint8_t v_enabled_2311_; 
v___x_2309_ = lean_st_ref_get(v___y_2307_);
v_infoState_2310_ = lean_ctor_get(v___x_2309_, 8);
lean_inc_ref(v_infoState_2310_);
lean_dec(v___x_2309_);
v_enabled_2311_ = lean_ctor_get_uint8(v_infoState_2310_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2310_);
if (v_enabled_2311_ == 0)
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
lean_dec_ref(v_t_2305_);
v___x_2312_ = lean_box(0);
v___x_2313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2312_);
return v___x_2313_;
}
else
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2314_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1);
v___x_2315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2315_, 0, v_t_2305_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v___x_2315_, v___y_2307_);
return v___x_2316_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___boxed(lean_object* v_t_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v_t_2317_, v___y_2318_, v___y_2319_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(lean_object* v_msgData_2322_, lean_object* v_macroStack_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v_scopes_2328_; lean_object* v___x_2329_; lean_object* v_opts_2330_; lean_object* v___x_2331_; uint8_t v___x_2332_; 
v___x_2326_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2327_ = lean_st_ref_get(v___y_2324_);
v_scopes_2328_ = lean_ctor_get(v___x_2327_, 2);
lean_inc(v_scopes_2328_);
lean_dec(v___x_2327_);
v___x_2329_ = l_List_head_x21___redArg(v___x_2326_, v_scopes_2328_);
lean_dec(v_scopes_2328_);
v_opts_2330_ = lean_ctor_get(v___x_2329_, 1);
lean_inc_ref(v_opts_2330_);
lean_dec(v___x_2329_);
v___x_2331_ = l_Lean_Elab_pp_macroStack;
v___x_2332_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_2330_, v___x_2331_);
lean_dec_ref(v_opts_2330_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2333_; 
lean_dec(v_macroStack_2323_);
v___x_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2333_, 0, v_msgData_2322_);
return v___x_2333_;
}
else
{
if (lean_obj_tag(v_macroStack_2323_) == 0)
{
lean_object* v___x_2334_; 
v___x_2334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2334_, 0, v_msgData_2322_);
return v___x_2334_;
}
else
{
lean_object* v_head_2335_; lean_object* v_after_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2351_; 
v_head_2335_ = lean_ctor_get(v_macroStack_2323_, 0);
lean_inc(v_head_2335_);
v_after_2336_ = lean_ctor_get(v_head_2335_, 1);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_head_2335_);
if (v_isSharedCheck_2351_ == 0)
{
lean_object* v_unused_2352_; 
v_unused_2352_ = lean_ctor_get(v_head_2335_, 0);
lean_dec(v_unused_2352_);
v___x_2338_ = v_head_2335_;
v_isShared_2339_ = v_isSharedCheck_2351_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_after_2336_);
lean_dec(v_head_2335_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2351_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2340_; lean_object* v___x_2342_; 
v___x_2340_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_2339_ == 0)
{
lean_ctor_set_tag(v___x_2338_, 7);
lean_ctor_set(v___x_2338_, 1, v___x_2340_);
lean_ctor_set(v___x_2338_, 0, v_msgData_2322_);
v___x_2342_ = v___x_2338_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_msgData_2322_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v___x_2340_);
v___x_2342_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v_msgData_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2343_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_2344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2342_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = l_Lean_MessageData_ofSyntax(v_after_2336_);
v___x_2346_ = l_Lean_indentD(v___x_2345_);
v_msgData_2347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2347_, 0, v___x_2344_);
lean_ctor_set(v_msgData_2347_, 1, v___x_2346_);
v___x_2348_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_2347_, v_macroStack_2323_);
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
return v___x_2349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg___boxed(lean_object* v_msgData_2353_, lean_object* v_macroStack_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v_res_2357_; 
v_res_2357_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_2353_, v_macroStack_2354_, v___y_2355_);
lean_dec(v___y_2355_);
return v_res_2357_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0(void){
_start:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; 
v___x_2358_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2359_, 0, v___x_2358_);
return v___x_2359_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1(void){
_start:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2360_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0);
v___x_2361_ = lean_unsigned_to_nat(0u);
v___x_2362_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
lean_ctor_set(v___x_2362_, 1, v___x_2361_);
lean_ctor_set(v___x_2362_, 2, v___x_2361_);
lean_ctor_set(v___x_2362_, 3, v___x_2361_);
lean_ctor_set(v___x_2362_, 4, v___x_2360_);
lean_ctor_set(v___x_2362_, 5, v___x_2360_);
lean_ctor_set(v___x_2362_, 6, v___x_2360_);
lean_ctor_set(v___x_2362_, 7, v___x_2360_);
lean_ctor_set(v___x_2362_, 8, v___x_2360_);
lean_ctor_set(v___x_2362_, 9, v___x_2360_);
lean_ctor_set(v___x_2362_, 10, v___x_2360_);
return v___x_2362_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2(void){
_start:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; 
v___x_2363_ = lean_unsigned_to_nat(32u);
v___x_2364_ = lean_mk_empty_array_with_capacity(v___x_2363_);
v___x_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
return v___x_2365_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__3(void){
_start:
{
size_t v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2366_ = ((size_t)5ULL);
v___x_2367_ = lean_unsigned_to_nat(0u);
v___x_2368_ = lean_unsigned_to_nat(32u);
v___x_2369_ = lean_mk_empty_array_with_capacity(v___x_2368_);
v___x_2370_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2);
v___x_2371_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2371_, 0, v___x_2370_);
lean_ctor_set(v___x_2371_, 1, v___x_2369_);
lean_ctor_set(v___x_2371_, 2, v___x_2367_);
lean_ctor_set(v___x_2371_, 3, v___x_2367_);
lean_ctor_set_usize(v___x_2371_, 4, v___x_2366_);
return v___x_2371_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4(void){
_start:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2372_ = lean_box(1);
v___x_2373_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__3);
v___x_2374_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__0);
v___x_2375_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2375_, 0, v___x_2374_);
lean_ctor_set(v___x_2375_, 1, v___x_2373_);
lean_ctor_set(v___x_2375_, 2, v___x_2372_);
return v___x_2375_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(lean_object* v_msgData_2376_, lean_object* v___y_2377_){
_start:
{
lean_object* v___x_2379_; lean_object* v_env_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v_scopes_2383_; lean_object* v___x_2384_; lean_object* v_opts_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2379_ = lean_st_ref_get(v___y_2377_);
v_env_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc_ref(v_env_2380_);
lean_dec(v___x_2379_);
v___x_2381_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2382_ = lean_st_ref_get(v___y_2377_);
v_scopes_2383_ = lean_ctor_get(v___x_2382_, 2);
lean_inc(v_scopes_2383_);
lean_dec(v___x_2382_);
v___x_2384_ = l_List_head_x21___redArg(v___x_2381_, v_scopes_2383_);
lean_dec(v_scopes_2383_);
v_opts_2385_ = lean_ctor_get(v___x_2384_, 1);
lean_inc_ref(v_opts_2385_);
lean_dec(v___x_2384_);
v___x_2386_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1);
v___x_2387_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4);
v___x_2388_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2388_, 0, v_env_2380_);
lean_ctor_set(v___x_2388_, 1, v___x_2386_);
lean_ctor_set(v___x_2388_, 2, v___x_2387_);
lean_ctor_set(v___x_2388_, 3, v_opts_2385_);
v___x_2389_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2388_);
lean_ctor_set(v___x_2389_, 1, v_msgData_2376_);
v___x_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2390_, 0, v___x_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___boxed(lean_object* v_msgData_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_2391_, v___y_2392_);
lean_dec(v___y_2392_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(lean_object* v_msg_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = l_Lean_Elab_Command_getRef___redArg(v___y_2396_);
if (lean_obj_tag(v___x_2399_) == 0)
{
lean_object* v_a_2400_; lean_object* v_macroStack_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v_a_2404_; lean_object* v___x_2405_; lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2414_; 
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref_known(v___x_2399_, 1);
v_macroStack_2401_ = lean_ctor_get(v___y_2396_, 4);
v___x_2402_ = l_Lean_Elab_getBetterRef(v_a_2400_, v_macroStack_2401_);
lean_dec(v_a_2400_);
v___x_2403_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_2395_, v___y_2397_);
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2404_);
lean_dec_ref(v___x_2403_);
lean_inc(v_macroStack_2401_);
v___x_2405_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_a_2404_, v_macroStack_2401_, v___y_2397_);
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2408_ = v___x_2405_;
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2405_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2414_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2402_);
lean_ctor_set(v___x_2410_, 1, v_a_2406_);
if (v_isShared_2409_ == 0)
{
lean_ctor_set_tag(v___x_2408_, 1);
lean_ctor_set(v___x_2408_, 0, v___x_2410_);
v___x_2412_ = v___x_2408_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
lean_dec_ref(v_msg_2395_);
v_a_2415_ = lean_ctor_get(v___x_2399_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2399_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2399_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg___boxed(lean_object* v_msg_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2423_, v___y_2424_, v___y_2425_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(lean_object* v_ref_2428_, lean_object* v_msg_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = l_Lean_Elab_Command_getRef___redArg(v___y_2430_);
if (lean_obj_tag(v___x_2433_) == 0)
{
lean_object* v_a_2434_; lean_object* v_fileName_2435_; lean_object* v_fileMap_2436_; lean_object* v_currRecDepth_2437_; lean_object* v_cmdPos_2438_; lean_object* v_macroStack_2439_; lean_object* v_quotContext_x3f_2440_; lean_object* v_currMacroScope_2441_; lean_object* v_snap_x3f_2442_; lean_object* v_cancelTk_x3f_2443_; uint8_t v_suppressElabErrors_2444_; lean_object* v_ref_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v_a_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2433_, 1);
v_fileName_2435_ = lean_ctor_get(v___y_2430_, 0);
v_fileMap_2436_ = lean_ctor_get(v___y_2430_, 1);
v_currRecDepth_2437_ = lean_ctor_get(v___y_2430_, 2);
v_cmdPos_2438_ = lean_ctor_get(v___y_2430_, 3);
v_macroStack_2439_ = lean_ctor_get(v___y_2430_, 4);
v_quotContext_x3f_2440_ = lean_ctor_get(v___y_2430_, 5);
v_currMacroScope_2441_ = lean_ctor_get(v___y_2430_, 6);
v_snap_x3f_2442_ = lean_ctor_get(v___y_2430_, 8);
v_cancelTk_x3f_2443_ = lean_ctor_get(v___y_2430_, 9);
v_suppressElabErrors_2444_ = lean_ctor_get_uint8(v___y_2430_, sizeof(void*)*10);
v_ref_2445_ = l_Lean_replaceRef(v_ref_2428_, v_a_2434_);
lean_dec(v_a_2434_);
lean_inc(v_cancelTk_x3f_2443_);
lean_inc(v_snap_x3f_2442_);
lean_inc(v_currMacroScope_2441_);
lean_inc(v_quotContext_x3f_2440_);
lean_inc(v_macroStack_2439_);
lean_inc(v_cmdPos_2438_);
lean_inc(v_currRecDepth_2437_);
lean_inc_ref(v_fileMap_2436_);
lean_inc_ref(v_fileName_2435_);
v___x_2446_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2446_, 0, v_fileName_2435_);
lean_ctor_set(v___x_2446_, 1, v_fileMap_2436_);
lean_ctor_set(v___x_2446_, 2, v_currRecDepth_2437_);
lean_ctor_set(v___x_2446_, 3, v_cmdPos_2438_);
lean_ctor_set(v___x_2446_, 4, v_macroStack_2439_);
lean_ctor_set(v___x_2446_, 5, v_quotContext_x3f_2440_);
lean_ctor_set(v___x_2446_, 6, v_currMacroScope_2441_);
lean_ctor_set(v___x_2446_, 7, v_ref_2445_);
lean_ctor_set(v___x_2446_, 8, v_snap_x3f_2442_);
lean_ctor_set(v___x_2446_, 9, v_cancelTk_x3f_2443_);
lean_ctor_set_uint8(v___x_2446_, sizeof(void*)*10, v_suppressElabErrors_2444_);
v___x_2447_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2429_, v___x_2446_, v___y_2431_);
lean_dec_ref_known(v___x_2446_, 10);
return v___x_2447_;
}
else
{
lean_object* v_a_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2455_; 
lean_dec_ref(v_msg_2429_);
v_a_2448_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2455_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2450_ = v___x_2433_;
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_a_2448_);
lean_dec(v___x_2433_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2453_; 
if (v_isShared_2451_ == 0)
{
v___x_2453_ = v___x_2450_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v_a_2448_);
v___x_2453_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
return v___x_2453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_ref_2456_, lean_object* v_msg_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2456_, v_msg_2457_, v___y_2458_, v___y_2459_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v_ref_2456_);
return v_res_2461_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1(void){
_start:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2463_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__0));
v___x_2464_ = l_Lean_stringToMessageData(v___x_2463_);
return v___x_2464_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3(void){
_start:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2466_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__2));
v___x_2467_ = l_Lean_stringToMessageData(v___x_2466_);
return v___x_2467_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2469_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__4));
v___x_2470_ = l_Lean_stringToMessageData(v___x_2469_);
return v___x_2470_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7(void){
_start:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2472_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__6));
v___x_2473_ = l_Lean_stringToMessageData(v___x_2472_);
return v___x_2473_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9(void){
_start:
{
lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2475_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__8));
v___x_2476_ = l_Lean_stringToMessageData(v___x_2475_);
return v___x_2476_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2478_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__10));
v___x_2479_ = l_Lean_stringToMessageData(v___x_2478_);
return v___x_2479_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__12));
v___x_2482_ = l_Lean_stringToMessageData(v___x_2481_);
return v___x_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(lean_object* v_msg_2483_, lean_object* v_declHint_2484_, lean_object* v___y_2485_){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v_env_2489_; uint8_t v___x_2490_; 
v___x_2487_ = lean_box(0);
v___x_2488_ = lean_st_ref_get(v___y_2485_);
v_env_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc_ref(v_env_2489_);
lean_dec(v___x_2488_);
v___x_2490_ = l_Lean_Name_isAnonymous(v_declHint_2484_);
if (v___x_2490_ == 0)
{
uint8_t v_isExporting_2491_; 
v_isExporting_2491_ = lean_ctor_get_uint8(v_env_2489_, sizeof(void*)*8);
if (v_isExporting_2491_ == 0)
{
lean_object* v___x_2492_; 
lean_dec_ref(v_env_2489_);
lean_dec(v_declHint_2484_);
v___x_2492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2492_, 0, v_msg_2483_);
return v___x_2492_;
}
else
{
lean_object* v___x_2493_; uint8_t v___x_2494_; 
lean_inc_ref(v_env_2489_);
v___x_2493_ = l_Lean_Environment_setExporting(v_env_2489_, v___x_2490_);
lean_inc(v_declHint_2484_);
lean_inc_ref(v___x_2493_);
v___x_2494_ = l_Lean_Environment_contains(v___x_2493_, v_declHint_2484_, v_isExporting_2491_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; 
lean_dec_ref(v___x_2493_);
lean_dec_ref(v_env_2489_);
lean_dec(v_declHint_2484_);
v___x_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2495_, 0, v_msg_2483_);
return v___x_2495_;
}
else
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v_c_2501_; lean_object* v___x_2502_; 
v___x_2496_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1);
v___x_2497_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4);
v___x_2498_ = l_Lean_Options_empty;
v___x_2499_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2493_);
lean_ctor_set(v___x_2499_, 1, v___x_2496_);
lean_ctor_set(v___x_2499_, 2, v___x_2497_);
lean_ctor_set(v___x_2499_, 3, v___x_2498_);
lean_inc(v_declHint_2484_);
v___x_2500_ = l_Lean_MessageData_ofConstName(v_declHint_2484_, v___x_2490_);
v_c_2501_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2501_, 0, v___x_2499_);
lean_ctor_set(v_c_2501_, 1, v___x_2500_);
v___x_2502_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2489_, v_declHint_2484_);
if (lean_obj_tag(v___x_2502_) == 0)
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
lean_dec_ref(v_env_2489_);
lean_dec(v_declHint_2484_);
v___x_2503_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1);
v___x_2504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
lean_ctor_set(v___x_2504_, 1, v_c_2501_);
v___x_2505_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3);
v___x_2506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2506_, 0, v___x_2504_);
lean_ctor_set(v___x_2506_, 1, v___x_2505_);
v___x_2507_ = l_Lean_MessageData_note(v___x_2506_);
v___x_2508_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2508_, 0, v_msg_2483_);
lean_ctor_set(v___x_2508_, 1, v___x_2507_);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
return v___x_2509_;
}
else
{
lean_object* v_val_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2544_; 
v_val_2510_ = lean_ctor_get(v___x_2502_, 0);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2502_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2512_ = v___x_2502_;
v_isShared_2513_ = v_isSharedCheck_2544_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_val_2510_);
lean_dec(v___x_2502_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2544_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v_mod_2516_; uint8_t v___x_2517_; 
v___x_2514_ = l_Lean_Environment_header(v_env_2489_);
lean_dec_ref(v_env_2489_);
v___x_2515_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2514_);
v_mod_2516_ = lean_array_get(v___x_2487_, v___x_2515_, v_val_2510_);
lean_dec(v_val_2510_);
lean_dec_ref(v___x_2515_);
v___x_2517_ = l_Lean_isPrivateName(v_declHint_2484_);
lean_dec(v_declHint_2484_);
if (v___x_2517_ == 0)
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2529_; 
v___x_2518_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5);
v___x_2519_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2518_);
lean_ctor_set(v___x_2519_, 1, v_c_2501_);
v___x_2520_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7);
v___x_2521_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2519_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = l_Lean_MessageData_ofName(v_mod_2516_);
v___x_2523_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2521_);
lean_ctor_set(v___x_2523_, 1, v___x_2522_);
v___x_2524_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9);
v___x_2525_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2523_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = l_Lean_MessageData_note(v___x_2525_);
v___x_2527_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2527_, 0, v_msg_2483_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set_tag(v___x_2512_, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2527_);
v___x_2529_ = v___x_2512_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v___x_2527_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
else
{
lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2542_; 
v___x_2531_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1);
v___x_2532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2531_);
lean_ctor_set(v___x_2532_, 1, v_c_2501_);
v___x_2533_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11);
v___x_2534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2532_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = l_Lean_MessageData_ofName(v_mod_2516_);
v___x_2536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2534_);
lean_ctor_set(v___x_2536_, 1, v___x_2535_);
v___x_2537_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13);
v___x_2538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2536_);
lean_ctor_set(v___x_2538_, 1, v___x_2537_);
v___x_2539_ = l_Lean_MessageData_note(v___x_2538_);
v___x_2540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2540_, 0, v_msg_2483_);
lean_ctor_set(v___x_2540_, 1, v___x_2539_);
if (v_isShared_2513_ == 0)
{
lean_ctor_set_tag(v___x_2512_, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2540_);
v___x_2542_ = v___x_2512_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2540_);
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
}
}
else
{
lean_object* v___x_2545_; 
lean_dec_ref(v_env_2489_);
lean_dec(v_declHint_2484_);
v___x_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2545_, 0, v_msg_2483_);
return v___x_2545_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___boxed(lean_object* v_msg_2546_, lean_object* v_declHint_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2546_, v_declHint_2547_, v___y_2548_);
lean_dec(v___y_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(lean_object* v_msg_2551_, lean_object* v_declHint_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
lean_object* v___x_2556_; lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2566_; 
v___x_2556_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2551_, v_declHint_2552_, v___y_2554_);
v_a_2557_ = lean_ctor_get(v___x_2556_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2559_ = v___x_2556_;
v_isShared_2560_ = v_isSharedCheck_2566_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2556_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2566_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2564_; 
v___x_2561_ = l_Lean_unknownIdentifierMessageTag;
v___x_2562_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
lean_ctor_set(v___x_2562_, 1, v_a_2557_);
if (v_isShared_2560_ == 0)
{
lean_ctor_set(v___x_2559_, 0, v___x_2562_);
v___x_2564_ = v___x_2559_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v___x_2562_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67___boxed(lean_object* v_msg_2567_, lean_object* v_declHint_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2567_, v_declHint_2568_, v___y_2569_, v___y_2570_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(lean_object* v_ref_2573_, lean_object* v_msg_2574_, lean_object* v_declHint_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_){
_start:
{
lean_object* v___x_2579_; lean_object* v_a_2580_; lean_object* v___x_2581_; 
v___x_2579_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2574_, v_declHint_2575_, v___y_2576_, v___y_2577_);
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_a_2580_);
lean_dec_ref(v___x_2579_);
v___x_2581_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2573_, v_a_2580_, v___y_2576_, v___y_2577_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg___boxed(lean_object* v_ref_2582_, lean_object* v_msg_2583_, lean_object* v_declHint_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2582_, v_msg_2583_, v_declHint_2584_, v___y_2585_, v___y_2586_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v_ref_2582_);
return v_res_2588_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1(void){
_start:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2590_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__0));
v___x_2591_ = l_Lean_stringToMessageData(v___x_2590_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(lean_object* v_ref_2592_, lean_object* v_constName_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v___x_2597_; uint8_t v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; 
v___x_2597_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1);
v___x_2598_ = 0;
lean_inc(v_constName_2593_);
v___x_2599_ = l_Lean_MessageData_ofConstName(v_constName_2593_, v___x_2598_);
v___x_2600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2597_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
v___x_2601_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2600_);
lean_ctor_set(v___x_2602_, 1, v___x_2601_);
v___x_2603_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2592_, v___x_2602_, v_constName_2593_, v___y_2594_, v___y_2595_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___boxed(lean_object* v_ref_2604_, lean_object* v_constName_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_){
_start:
{
lean_object* v_res_2609_; 
v_res_2609_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_2604_, v_constName_2605_, v___y_2606_, v___y_2607_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v_ref_2604_);
return v_res_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(lean_object* v_constName_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
lean_object* v___x_2614_; 
v___x_2614_ = l_Lean_Elab_Command_getRef___redArg(v___y_2611_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v___x_2616_; 
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_a_2615_);
lean_dec_ref_known(v___x_2614_, 1);
v___x_2616_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_a_2615_, v_constName_2610_, v___y_2611_, v___y_2612_);
lean_dec(v_a_2615_);
return v___x_2616_;
}
else
{
lean_object* v_a_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2624_; 
lean_dec(v_constName_2610_);
v_a_2617_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2624_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2624_ == 0)
{
v___x_2619_ = v___x_2614_;
v_isShared_2620_ = v_isSharedCheck_2624_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_a_2617_);
lean_dec(v___x_2614_);
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
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg___boxed(lean_object* v_constName_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2625_, v___y_2626_, v___y_2627_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
return v_res_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(lean_object* v_constName_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v___x_2634_; lean_object* v_env_2635_; uint8_t v___x_2636_; lean_object* v___x_2637_; 
v___x_2634_ = lean_st_ref_get(v___y_2632_);
v_env_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc_ref(v_env_2635_);
lean_dec(v___x_2634_);
v___x_2636_ = 0;
lean_inc(v_constName_2630_);
v___x_2637_ = l_Lean_Environment_findConstVal_x3f(v_env_2635_, v_constName_2630_, v___x_2636_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v___x_2638_; 
v___x_2638_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2630_, v___y_2631_, v___y_2632_);
return v___x_2638_;
}
else
{
lean_object* v_val_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2646_; 
lean_dec(v_constName_2630_);
v_val_2639_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2646_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2641_ = v___x_2637_;
v_isShared_2642_ = v_isSharedCheck_2646_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_val_2639_);
lean_dec(v___x_2637_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2646_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2644_; 
if (v_isShared_2642_ == 0)
{
lean_ctor_set_tag(v___x_2641_, 0);
v___x_2644_ = v___x_2641_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v_val_2639_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16___boxed(lean_object* v_constName_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2647_, v___y_2648_, v___y_2649_);
lean_dec(v___y_2649_);
lean_dec_ref(v___y_2648_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(lean_object* v_constName_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v___x_2656_; 
lean_inc(v_constName_2652_);
v___x_2656_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2652_, v___y_2653_, v___y_2654_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2668_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2656_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2659_ = v___x_2656_;
v_isShared_2660_ = v_isSharedCheck_2668_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_dec(v___x_2656_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2668_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v_levelParams_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2666_; 
v_levelParams_2661_ = lean_ctor_get(v_a_2657_, 1);
lean_inc(v_levelParams_2661_);
lean_dec(v_a_2657_);
v___x_2662_ = lean_box(0);
v___x_2663_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_2661_, v___x_2662_);
v___x_2664_ = l_Lean_mkConst(v_constName_2652_, v___x_2663_);
if (v_isShared_2660_ == 0)
{
lean_ctor_set(v___x_2659_, 0, v___x_2664_);
v___x_2666_ = v___x_2659_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v___x_2664_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
lean_dec(v_constName_2652_);
v_a_2669_ = lean_ctor_get(v___x_2656_, 0);
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2656_);
if (v_isSharedCheck_2676_ == 0)
{
v___x_2671_ = v___x_2656_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_a_2669_);
lean_dec(v___x_2656_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2669_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8___boxed(lean_object* v_constName_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_constName_2677_, v___y_2678_, v___y_2679_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_stx_2682_, lean_object* v_n_2683_, lean_object* v_expectedType_x3f_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_n_2683_, v___y_2685_, v___y_2686_);
if (lean_obj_tag(v___x_2688_) == 0)
{
lean_object* v_a_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; uint8_t v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; 
v_a_2689_ = lean_ctor_get(v___x_2688_, 0);
lean_inc(v_a_2689_);
lean_dec_ref_known(v___x_2688_, 1);
v___x_2690_ = lean_box(0);
v___x_2691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2690_);
lean_ctor_set(v___x_2691_, 1, v_stx_2682_);
v___x_2692_ = l_Lean_LocalContext_empty;
v___x_2693_ = 0;
v___x_2694_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2694_, 0, v___x_2691_);
lean_ctor_set(v___x_2694_, 1, v___x_2692_);
lean_ctor_set(v___x_2694_, 2, v_expectedType_x3f_2684_);
lean_ctor_set(v___x_2694_, 3, v_a_2689_);
lean_ctor_set_uint8(v___x_2694_, sizeof(void*)*4, v___x_2693_);
lean_ctor_set_uint8(v___x_2694_, sizeof(void*)*4 + 1, v___x_2693_);
v___x_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2694_);
v___x_2696_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v___x_2695_, v___y_2685_, v___y_2686_);
return v___x_2696_;
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2704_; 
lean_dec(v_expectedType_x3f_2684_);
lean_dec(v_stx_2682_);
v_a_2697_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2704_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2704_ == 0)
{
v___x_2699_ = v___x_2688_;
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2688_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2704_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
return v___x_2702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_stx_2705_, lean_object* v_n_2706_, lean_object* v_expectedType_x3f_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
lean_object* v_res_2711_; 
v_res_2711_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_stx_2705_, v_n_2706_, v_expectedType_x3f_2707_, v___y_2708_, v___y_2709_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
return v_res_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(lean_object* v_declName_2712_, uint8_t v_s_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2716_; lean_object* v_env_2717_; lean_object* v_messages_2718_; lean_object* v_scopes_2719_; lean_object* v_usedQuotCtxts_2720_; lean_object* v_nextMacroScope_2721_; lean_object* v_maxRecDepth_2722_; lean_object* v_ngen_2723_; lean_object* v_auxDeclNGen_2724_; lean_object* v_infoState_2725_; lean_object* v_traceState_2726_; lean_object* v_snapshotTasks_2727_; lean_object* v_prevLinterStates_2728_; lean_object* v_codeQualityEntryTasks_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2742_; 
v___x_2716_ = lean_st_ref_take(v___y_2714_);
v_env_2717_ = lean_ctor_get(v___x_2716_, 0);
v_messages_2718_ = lean_ctor_get(v___x_2716_, 1);
v_scopes_2719_ = lean_ctor_get(v___x_2716_, 2);
v_usedQuotCtxts_2720_ = lean_ctor_get(v___x_2716_, 3);
v_nextMacroScope_2721_ = lean_ctor_get(v___x_2716_, 4);
v_maxRecDepth_2722_ = lean_ctor_get(v___x_2716_, 5);
v_ngen_2723_ = lean_ctor_get(v___x_2716_, 6);
v_auxDeclNGen_2724_ = lean_ctor_get(v___x_2716_, 7);
v_infoState_2725_ = lean_ctor_get(v___x_2716_, 8);
v_traceState_2726_ = lean_ctor_get(v___x_2716_, 9);
v_snapshotTasks_2727_ = lean_ctor_get(v___x_2716_, 10);
v_prevLinterStates_2728_ = lean_ctor_get(v___x_2716_, 11);
v_codeQualityEntryTasks_2729_ = lean_ctor_get(v___x_2716_, 12);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2731_ = v___x_2716_;
v_isShared_2732_ = v_isSharedCheck_2742_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2729_);
lean_inc(v_prevLinterStates_2728_);
lean_inc(v_snapshotTasks_2727_);
lean_inc(v_traceState_2726_);
lean_inc(v_infoState_2725_);
lean_inc(v_auxDeclNGen_2724_);
lean_inc(v_ngen_2723_);
lean_inc(v_maxRecDepth_2722_);
lean_inc(v_nextMacroScope_2721_);
lean_inc(v_usedQuotCtxts_2720_);
lean_inc(v_scopes_2719_);
lean_inc(v_messages_2718_);
lean_inc(v_env_2717_);
lean_dec(v___x_2716_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2742_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2733_; uint8_t v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2738_; 
v___x_2733_ = lean_box(0);
v___x_2734_ = 0;
v___x_2735_ = lean_box(0);
v___x_2736_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2717_, v_declName_2712_, v_s_2713_, v___x_2734_, v___x_2735_);
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 0, v___x_2736_);
v___x_2738_ = v___x_2731_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v___x_2736_);
lean_ctor_set(v_reuseFailAlloc_2741_, 1, v_messages_2718_);
lean_ctor_set(v_reuseFailAlloc_2741_, 2, v_scopes_2719_);
lean_ctor_set(v_reuseFailAlloc_2741_, 3, v_usedQuotCtxts_2720_);
lean_ctor_set(v_reuseFailAlloc_2741_, 4, v_nextMacroScope_2721_);
lean_ctor_set(v_reuseFailAlloc_2741_, 5, v_maxRecDepth_2722_);
lean_ctor_set(v_reuseFailAlloc_2741_, 6, v_ngen_2723_);
lean_ctor_set(v_reuseFailAlloc_2741_, 7, v_auxDeclNGen_2724_);
lean_ctor_set(v_reuseFailAlloc_2741_, 8, v_infoState_2725_);
lean_ctor_set(v_reuseFailAlloc_2741_, 9, v_traceState_2726_);
lean_ctor_set(v_reuseFailAlloc_2741_, 10, v_snapshotTasks_2727_);
lean_ctor_set(v_reuseFailAlloc_2741_, 11, v_prevLinterStates_2728_);
lean_ctor_set(v_reuseFailAlloc_2741_, 12, v_codeQualityEntryTasks_2729_);
v___x_2738_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2739_ = lean_st_ref_put(v___y_2714_, v___x_2738_);
v___x_2740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2733_);
return v___x_2740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg___boxed(lean_object* v_declName_2743_, lean_object* v_s_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
uint8_t v_s_boxed_2747_; lean_object* v_res_2748_; 
v_s_boxed_2747_ = lean_unbox(v_s_2744_);
v_res_2748_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_declName_2743_, v_s_boxed_2747_, v___y_2745_);
lean_dec(v___y_2745_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_declName_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
uint8_t v___x_2753_; lean_object* v___x_2754_; 
v___x_2753_ = 2;
v___x_2754_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_declName_2749_, v___x_2753_, v___y_2751_);
return v___x_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_declName_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5(v_declName_2755_, v___y_2756_, v___y_2757_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(lean_object* v_as_x27_2760_, lean_object* v_b_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
if (lean_obj_tag(v_as_x27_2760_) == 0)
{
lean_object* v___x_2765_; 
v___x_2765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2765_, 0, v_b_2761_);
return v___x_2765_;
}
else
{
lean_object* v_head_2766_; lean_object* v_tail_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v_head_2766_ = lean_ctor_get(v_as_x27_2760_, 0);
v_tail_2767_ = lean_ctor_get(v_as_x27_2760_, 1);
v___x_2768_ = lean_box(0);
lean_inc(v_head_2766_);
v___x_2769_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5(v_head_2766_, v___y_2762_, v___y_2763_);
lean_dec_ref(v___x_2769_);
v_as_x27_2760_ = v_tail_2767_;
v_b_2761_ = v___x_2768_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg___boxed(lean_object* v_as_x27_2771_, lean_object* v_b_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_as_x27_2771_, v_b_2772_, v___y_2773_, v___y_2774_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
lean_dec(v_as_x27_2771_);
return v_res_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_2777_, size_t v_i_2778_, lean_object* v_bs_2779_){
_start:
{
uint8_t v___x_2780_; 
v___x_2780_ = lean_usize_dec_lt(v_i_2778_, v_sz_2777_);
if (v___x_2780_ == 0)
{
return v_bs_2779_;
}
else
{
lean_object* v_v_2781_; lean_object* v___x_2782_; lean_object* v_bs_x27_2783_; size_t v___x_2784_; size_t v___x_2785_; lean_object* v___x_2786_; 
v_v_2781_ = lean_array_uget(v_bs_2779_, v_i_2778_);
v___x_2782_ = lean_unsigned_to_nat(0u);
v_bs_x27_2783_ = lean_array_uset(v_bs_2779_, v_i_2778_, v___x_2782_);
v___x_2784_ = ((size_t)1ULL);
v___x_2785_ = lean_usize_add(v_i_2778_, v___x_2784_);
v___x_2786_ = lean_array_uset(v_bs_x27_2783_, v_i_2778_, v_v_2781_);
v_i_2778_ = v___x_2785_;
v_bs_2779_ = v___x_2786_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_2788_, lean_object* v_i_2789_, lean_object* v_bs_2790_){
_start:
{
size_t v_sz_boxed_2791_; size_t v_i_boxed_2792_; lean_object* v_res_2793_; 
v_sz_boxed_2791_ = lean_unbox_usize(v_sz_2788_);
lean_dec(v_sz_2788_);
v_i_boxed_2792_ = lean_unbox_usize(v_i_2789_);
lean_dec(v_i_2789_);
v_res_2793_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_2791_, v_i_boxed_2792_, v_bs_2790_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(size_t v_sz_2794_, size_t v_i_2795_, lean_object* v_bs_2796_){
_start:
{
uint8_t v___x_2797_; 
v___x_2797_ = lean_usize_dec_lt(v_i_2795_, v_sz_2794_);
if (v___x_2797_ == 0)
{
return v_bs_2796_;
}
else
{
lean_object* v_v_2798_; lean_object* v___x_2799_; lean_object* v_bs_x27_2800_; size_t v___x_2801_; size_t v___x_2802_; lean_object* v___x_2803_; 
v_v_2798_ = lean_array_uget(v_bs_2796_, v_i_2795_);
v___x_2799_ = lean_unsigned_to_nat(0u);
v_bs_x27_2800_ = lean_array_uset(v_bs_2796_, v_i_2795_, v___x_2799_);
v___x_2801_ = ((size_t)1ULL);
v___x_2802_ = lean_usize_add(v_i_2795_, v___x_2801_);
v___x_2803_ = lean_array_uset(v_bs_x27_2800_, v_i_2795_, v_v_2798_);
v_i_2795_ = v___x_2802_;
v_bs_2796_ = v___x_2803_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_sz_2805_, lean_object* v_i_2806_, lean_object* v_bs_2807_){
_start:
{
size_t v_sz_boxed_2808_; size_t v_i_boxed_2809_; lean_object* v_res_2810_; 
v_sz_boxed_2808_ = lean_unbox_usize(v_sz_2805_);
lean_dec(v_sz_2805_);
v_i_boxed_2809_ = lean_unbox_usize(v_i_2806_);
lean_dec(v_i_2806_);
v_res_2810_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_boxed_2808_, v_i_boxed_2809_, v_bs_2807_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(lean_object* v_declName_2811_, lean_object* v_declRanges_2812_, lean_object* v___y_2813_){
_start:
{
uint8_t v___x_2815_; 
v___x_2815_ = l_Lean_Name_isAnonymous(v_declName_2811_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; lean_object* v_env_2817_; lean_object* v_messages_2818_; lean_object* v_scopes_2819_; lean_object* v_usedQuotCtxts_2820_; lean_object* v_nextMacroScope_2821_; lean_object* v_maxRecDepth_2822_; lean_object* v_ngen_2823_; lean_object* v_auxDeclNGen_2824_; lean_object* v_infoState_2825_; lean_object* v_traceState_2826_; lean_object* v_snapshotTasks_2827_; lean_object* v_prevLinterStates_2828_; lean_object* v_codeQualityEntryTasks_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2841_; 
v___x_2816_ = lean_st_ref_take(v___y_2813_);
v_env_2817_ = lean_ctor_get(v___x_2816_, 0);
v_messages_2818_ = lean_ctor_get(v___x_2816_, 1);
v_scopes_2819_ = lean_ctor_get(v___x_2816_, 2);
v_usedQuotCtxts_2820_ = lean_ctor_get(v___x_2816_, 3);
v_nextMacroScope_2821_ = lean_ctor_get(v___x_2816_, 4);
v_maxRecDepth_2822_ = lean_ctor_get(v___x_2816_, 5);
v_ngen_2823_ = lean_ctor_get(v___x_2816_, 6);
v_auxDeclNGen_2824_ = lean_ctor_get(v___x_2816_, 7);
v_infoState_2825_ = lean_ctor_get(v___x_2816_, 8);
v_traceState_2826_ = lean_ctor_get(v___x_2816_, 9);
v_snapshotTasks_2827_ = lean_ctor_get(v___x_2816_, 10);
v_prevLinterStates_2828_ = lean_ctor_get(v___x_2816_, 11);
v_codeQualityEntryTasks_2829_ = lean_ctor_get(v___x_2816_, 12);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2816_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2831_ = v___x_2816_;
v_isShared_2832_ = v_isSharedCheck_2841_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2829_);
lean_inc(v_prevLinterStates_2828_);
lean_inc(v_snapshotTasks_2827_);
lean_inc(v_traceState_2826_);
lean_inc(v_infoState_2825_);
lean_inc(v_auxDeclNGen_2824_);
lean_inc(v_ngen_2823_);
lean_inc(v_maxRecDepth_2822_);
lean_inc(v_nextMacroScope_2821_);
lean_inc(v_usedQuotCtxts_2820_);
lean_inc(v_scopes_2819_);
lean_inc(v_messages_2818_);
lean_inc(v_env_2817_);
lean_dec(v___x_2816_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2841_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2837_; 
v___x_2833_ = lean_box(0);
v___x_2834_ = l_Lean_declRangeExt;
v___x_2835_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2834_, v_env_2817_, v_declName_2811_, v_declRanges_2812_);
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v___x_2835_);
v___x_2837_ = v___x_2831_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v___x_2835_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v_messages_2818_);
lean_ctor_set(v_reuseFailAlloc_2840_, 2, v_scopes_2819_);
lean_ctor_set(v_reuseFailAlloc_2840_, 3, v_usedQuotCtxts_2820_);
lean_ctor_set(v_reuseFailAlloc_2840_, 4, v_nextMacroScope_2821_);
lean_ctor_set(v_reuseFailAlloc_2840_, 5, v_maxRecDepth_2822_);
lean_ctor_set(v_reuseFailAlloc_2840_, 6, v_ngen_2823_);
lean_ctor_set(v_reuseFailAlloc_2840_, 7, v_auxDeclNGen_2824_);
lean_ctor_set(v_reuseFailAlloc_2840_, 8, v_infoState_2825_);
lean_ctor_set(v_reuseFailAlloc_2840_, 9, v_traceState_2826_);
lean_ctor_set(v_reuseFailAlloc_2840_, 10, v_snapshotTasks_2827_);
lean_ctor_set(v_reuseFailAlloc_2840_, 11, v_prevLinterStates_2828_);
lean_ctor_set(v_reuseFailAlloc_2840_, 12, v_codeQualityEntryTasks_2829_);
v___x_2837_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_st_ref_put(v___y_2813_, v___x_2837_);
v___x_2839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2833_);
return v___x_2839_;
}
}
}
else
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
lean_dec_ref(v_declRanges_2812_);
lean_dec(v_declName_2811_);
v___x_2842_ = lean_box(0);
v___x_2843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2842_);
return v___x_2843_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg___boxed(lean_object* v_declName_2844_, lean_object* v_declRanges_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_){
_start:
{
lean_object* v_res_2848_; 
v_res_2848_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_2844_, v_declRanges_2845_, v___y_2846_);
lean_dec(v___y_2846_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(lean_object* v_stx_2849_, lean_object* v___y_2850_){
_start:
{
uint8_t v___x_2852_; lean_object* v___x_2853_; 
v___x_2852_ = 0;
v___x_2853_ = l_Lean_Syntax_getRange_x3f(v_stx_2849_, v___x_2852_);
if (lean_obj_tag(v___x_2853_) == 1)
{
lean_object* v_val_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2866_; 
v_val_2854_ = lean_ctor_get(v___x_2853_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2853_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2856_ = v___x_2853_;
v_isShared_2857_ = v_isSharedCheck_2866_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_val_2854_);
lean_dec(v___x_2853_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2866_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v_fileMap_2858_; lean_object* v_start_2859_; lean_object* v_stop_2860_; lean_object* v___x_2861_; lean_object* v___x_2863_; 
v_fileMap_2858_ = lean_ctor_get(v___y_2850_, 1);
v_start_2859_ = lean_ctor_get(v_val_2854_, 0);
lean_inc(v_start_2859_);
v_stop_2860_ = lean_ctor_get(v_val_2854_, 1);
lean_inc(v_stop_2860_);
lean_dec(v_val_2854_);
lean_inc_ref(v_fileMap_2858_);
v___x_2861_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_2858_, v_start_2859_, v_stop_2860_);
lean_dec(v_stop_2860_);
lean_dec(v_start_2859_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set(v___x_2856_, 0, v___x_2861_);
v___x_2863_ = v___x_2856_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v___x_2861_);
v___x_2863_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v___x_2864_; 
v___x_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
return v___x_2864_;
}
}
}
else
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
lean_dec(v___x_2853_);
v___x_2867_ = lean_box(0);
v___x_2868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
return v___x_2868_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg___boxed(lean_object* v_stx_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_2869_, v___y_2870_);
lean_dec_ref(v___y_2870_);
lean_dec(v_stx_2869_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(lean_object* v_declName_2873_, lean_object* v_rangeStx_2874_, lean_object* v_selectionRangeStx_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_){
_start:
{
lean_object* v___x_2879_; lean_object* v_a_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2896_; 
v___x_2879_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_rangeStx_2874_, v___y_2876_);
v_a_2880_ = lean_ctor_get(v___x_2879_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2879_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2882_ = v___x_2879_;
v_isShared_2883_ = v_isSharedCheck_2896_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_a_2880_);
lean_dec(v___x_2879_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2896_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
if (lean_obj_tag(v_a_2880_) == 1)
{
lean_object* v_val_2884_; lean_object* v_a_2886_; lean_object* v___x_2889_; lean_object* v_a_2890_; 
lean_del_object(v___x_2882_);
v_val_2884_ = lean_ctor_get(v_a_2880_, 0);
lean_inc(v_val_2884_);
lean_dec_ref_known(v_a_2880_, 1);
v___x_2889_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_selectionRangeStx_2875_, v___y_2876_);
v_a_2890_ = lean_ctor_get(v___x_2889_, 0);
lean_inc(v_a_2890_);
lean_dec_ref(v___x_2889_);
if (lean_obj_tag(v_a_2890_) == 0)
{
lean_inc(v_val_2884_);
v_a_2886_ = v_val_2884_;
goto v___jp_2885_;
}
else
{
lean_object* v_val_2891_; 
v_val_2891_ = lean_ctor_get(v_a_2890_, 0);
lean_inc(v_val_2891_);
lean_dec_ref_known(v_a_2890_, 1);
v_a_2886_ = v_val_2891_;
goto v___jp_2885_;
}
v___jp_2885_:
{
lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2887_, 0, v_val_2884_);
lean_ctor_set(v___x_2887_, 1, v_a_2886_);
v___x_2888_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_2873_, v___x_2887_, v___y_2877_);
return v___x_2888_;
}
}
else
{
lean_object* v___x_2892_; lean_object* v___x_2894_; 
lean_dec(v_a_2880_);
lean_dec(v_declName_2873_);
v___x_2892_ = lean_box(0);
if (v_isShared_2883_ == 0)
{
lean_ctor_set(v___x_2882_, 0, v___x_2892_);
v___x_2894_ = v___x_2882_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2892_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_declName_2897_, lean_object* v_rangeStx_2898_, lean_object* v_selectionRangeStx_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_){
_start:
{
lean_object* v_res_2903_; 
v_res_2903_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v_declName_2897_, v_rangeStx_2898_, v_selectionRangeStx_2899_, v___y_2900_, v___y_2901_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
lean_dec(v_selectionRangeStx_2899_);
lean_dec(v_rangeStx_2898_);
return v_res_2903_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(lean_object* v_as_x27_2904_, lean_object* v_b_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
if (lean_obj_tag(v_as_x27_2904_) == 0)
{
lean_object* v___x_2909_; 
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v_b_2905_);
return v___x_2909_;
}
else
{
lean_object* v_head_2910_; lean_object* v_tail_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; 
v_head_2910_ = lean_ctor_get(v_as_x27_2904_, 0);
v_tail_2911_ = lean_ctor_get(v_as_x27_2904_, 1);
v___x_2912_ = lean_box(0);
lean_inc(v_head_2910_);
v___x_2913_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_2913_, 0, v_head_2910_);
v___x_2914_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_2913_, v___y_2906_, v___y_2907_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_dec_ref_known(v___x_2914_, 1);
v_as_x27_2904_ = v_tail_2911_;
v_b_2905_ = v___x_2912_;
goto _start;
}
else
{
return v___x_2914_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg___boxed(lean_object* v_as_x27_2916_, lean_object* v_b_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v_res_2921_; 
v_res_2921_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_2916_, v_b_2917_, v___y_2918_, v___y_2919_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v_as_x27_2916_);
return v_res_2921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___redArg(lean_object* v_ref_2922_, lean_object* v_msg_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_){
_start:
{
lean_object* v_toCold_2931_; lean_object* v_currRecDepth_2932_; lean_object* v_ref_2933_; uint8_t v_diag_2934_; uint8_t v_suppressElabErrors_2935_; lean_object* v_ref_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; 
v_toCold_2931_ = lean_ctor_get(v___y_2928_, 0);
v_currRecDepth_2932_ = lean_ctor_get(v___y_2928_, 1);
v_ref_2933_ = lean_ctor_get(v___y_2928_, 2);
v_diag_2934_ = lean_ctor_get_uint8(v___y_2928_, sizeof(void*)*3);
v_suppressElabErrors_2935_ = lean_ctor_get_uint8(v___y_2928_, sizeof(void*)*3 + 1);
v_ref_2936_ = l_Lean_replaceRef(v_ref_2922_, v_ref_2933_);
lean_inc(v_currRecDepth_2932_);
lean_inc_ref(v_toCold_2931_);
v___x_2937_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2937_, 0, v_toCold_2931_);
lean_ctor_set(v___x_2937_, 1, v_currRecDepth_2932_);
lean_ctor_set(v___x_2937_, 2, v_ref_2936_);
lean_ctor_set_uint8(v___x_2937_, sizeof(void*)*3, v_diag_2934_);
lean_ctor_set_uint8(v___x_2937_, sizeof(void*)*3 + 1, v_suppressElabErrors_2935_);
v___x_2938_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___x_2937_, v___y_2929_);
lean_dec_ref_known(v___x_2937_, 3);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___redArg___boxed(lean_object* v_ref_2939_, lean_object* v_msg_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
lean_object* v_res_2948_; 
v_res_2948_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___redArg(v_ref_2939_, v_msg_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2945_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec(v___y_2942_);
lean_dec_ref(v___y_2941_);
lean_dec(v_ref_2939_);
return v_res_2948_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___redArg(lean_object* v_msg_2949_, lean_object* v_declHint_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v_env_2955_; uint8_t v___x_2956_; 
v___x_2953_ = lean_box(0);
v___x_2954_ = lean_st_ref_get(v___y_2951_);
v_env_2955_ = lean_ctor_get(v___x_2954_, 0);
lean_inc_ref(v_env_2955_);
lean_dec(v___x_2954_);
v___x_2956_ = l_Lean_Name_isAnonymous(v_declHint_2950_);
if (v___x_2956_ == 0)
{
uint8_t v_isExporting_2957_; 
v_isExporting_2957_ = lean_ctor_get_uint8(v_env_2955_, sizeof(void*)*8);
if (v_isExporting_2957_ == 0)
{
lean_object* v___x_2958_; 
lean_dec_ref(v_env_2955_);
lean_dec(v_declHint_2950_);
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v_msg_2949_);
return v___x_2958_;
}
else
{
lean_object* v___x_2959_; uint8_t v___x_2960_; 
lean_inc_ref(v_env_2955_);
v___x_2959_ = l_Lean_Environment_setExporting(v_env_2955_, v___x_2956_);
lean_inc(v_declHint_2950_);
lean_inc_ref(v___x_2959_);
v___x_2960_ = l_Lean_Environment_contains(v___x_2959_, v_declHint_2950_, v_isExporting_2957_);
if (v___x_2960_ == 0)
{
lean_object* v___x_2961_; 
lean_dec_ref(v___x_2959_);
lean_dec_ref(v_env_2955_);
lean_dec(v_declHint_2950_);
v___x_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2961_, 0, v_msg_2949_);
return v___x_2961_;
}
else
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v_c_2969_; lean_object* v___x_2970_; 
v___x_2962_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__1);
v___x_2963_ = lean_unsigned_to_nat(32u);
v___x_2964_ = lean_mk_empty_array_with_capacity(v___x_2963_);
lean_dec_ref(v___x_2964_);
v___x_2965_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__4);
v___x_2966_ = l_Lean_Options_empty;
v___x_2967_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2967_, 0, v___x_2959_);
lean_ctor_set(v___x_2967_, 1, v___x_2962_);
lean_ctor_set(v___x_2967_, 2, v___x_2965_);
lean_ctor_set(v___x_2967_, 3, v___x_2966_);
lean_inc(v_declHint_2950_);
v___x_2968_ = l_Lean_MessageData_ofConstName(v_declHint_2950_, v___x_2956_);
v_c_2969_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2969_, 0, v___x_2967_);
lean_ctor_set(v_c_2969_, 1, v___x_2968_);
v___x_2970_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2955_, v_declHint_2950_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; 
lean_dec_ref(v_env_2955_);
lean_dec(v_declHint_2950_);
v___x_2971_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1);
v___x_2972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2971_);
lean_ctor_set(v___x_2972_, 1, v_c_2969_);
v___x_2973_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__3);
v___x_2974_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2972_);
lean_ctor_set(v___x_2974_, 1, v___x_2973_);
v___x_2975_ = l_Lean_MessageData_note(v___x_2974_);
v___x_2976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2976_, 0, v_msg_2949_);
lean_ctor_set(v___x_2976_, 1, v___x_2975_);
v___x_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
return v___x_2977_;
}
else
{
lean_object* v_val_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_3012_; 
v_val_2978_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_2980_ = v___x_2970_;
v_isShared_2981_ = v_isSharedCheck_3012_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_val_2978_);
lean_dec(v___x_2970_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_3012_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v_mod_2984_; uint8_t v___x_2985_; 
v___x_2982_ = l_Lean_Environment_header(v_env_2955_);
lean_dec_ref(v_env_2955_);
v___x_2983_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2982_);
v_mod_2984_ = lean_array_get(v___x_2953_, v___x_2983_, v_val_2978_);
lean_dec(v_val_2978_);
lean_dec_ref(v___x_2983_);
v___x_2985_ = l_Lean_isPrivateName(v_declHint_2950_);
lean_dec(v_declHint_2950_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2997_; 
v___x_2986_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__5);
v___x_2987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2987_, 0, v___x_2986_);
lean_ctor_set(v___x_2987_, 1, v_c_2969_);
v___x_2988_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__7);
v___x_2989_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2987_);
lean_ctor_set(v___x_2989_, 1, v___x_2988_);
v___x_2990_ = l_Lean_MessageData_ofName(v_mod_2984_);
v___x_2991_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2989_);
lean_ctor_set(v___x_2991_, 1, v___x_2990_);
v___x_2992_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9);
v___x_2993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2991_);
lean_ctor_set(v___x_2993_, 1, v___x_2992_);
v___x_2994_ = l_Lean_MessageData_note(v___x_2993_);
v___x_2995_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2995_, 0, v_msg_2949_);
lean_ctor_set(v___x_2995_, 1, v___x_2994_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set_tag(v___x_2980_, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2995_);
v___x_2997_ = v___x_2980_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v___x_2995_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
else
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3010_; 
v___x_2999_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__1);
v___x_3000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3000_, 0, v___x_2999_);
lean_ctor_set(v___x_3000_, 1, v_c_2969_);
v___x_3001_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__11);
v___x_3002_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3002_, 0, v___x_3000_);
lean_ctor_set(v___x_3002_, 1, v___x_3001_);
v___x_3003_ = l_Lean_MessageData_ofName(v_mod_2984_);
v___x_3004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3002_);
lean_ctor_set(v___x_3004_, 1, v___x_3003_);
v___x_3005_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__13);
v___x_3006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3004_);
lean_ctor_set(v___x_3006_, 1, v___x_3005_);
v___x_3007_ = l_Lean_MessageData_note(v___x_3006_);
v___x_3008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3008_, 0, v_msg_2949_);
lean_ctor_set(v___x_3008_, 1, v___x_3007_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set_tag(v___x_2980_, 0);
lean_ctor_set(v___x_2980_, 0, v___x_3008_);
v___x_3010_ = v___x_2980_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_3008_);
v___x_3010_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
return v___x_3010_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3013_; 
lean_dec_ref(v_env_2955_);
lean_dec(v_declHint_2950_);
v___x_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3013_, 0, v_msg_2949_);
return v___x_3013_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___redArg___boxed(lean_object* v_msg_3014_, lean_object* v_declHint_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___redArg(v_msg_3014_, v_declHint_3015_, v___y_3016_);
lean_dec(v___y_3016_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49(lean_object* v_msg_3019_, lean_object* v_declHint_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_){
_start:
{
lean_object* v___x_3028_; lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3038_; 
v___x_3028_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___redArg(v_msg_3019_, v_declHint_3020_, v___y_3026_);
v_a_3029_ = lean_ctor_get(v___x_3028_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v___x_3028_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3031_ = v___x_3028_;
v_isShared_3032_ = v_isSharedCheck_3038_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_dec(v___x_3028_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3038_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3036_; 
v___x_3033_ = l_Lean_unknownIdentifierMessageTag;
v___x_3034_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3033_);
lean_ctor_set(v___x_3034_, 1, v_a_3029_);
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 0, v___x_3034_);
v___x_3036_ = v___x_3031_;
goto v_reusejp_3035_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3034_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49___boxed(lean_object* v_msg_3039_, lean_object* v_declHint_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_){
_start:
{
lean_object* v_res_3048_; 
v_res_3048_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49(v_msg_3039_, v_declHint_3040_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec(v___y_3044_);
lean_dec_ref(v___y_3043_);
lean_dec(v___y_3042_);
lean_dec_ref(v___y_3041_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___redArg(lean_object* v_ref_3049_, lean_object* v_msg_3050_, lean_object* v_declHint_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v___x_3059_; lean_object* v_a_3060_; lean_object* v___x_3061_; 
v___x_3059_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49(v_msg_3050_, v_declHint_3051_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_a_3060_);
lean_dec_ref(v___x_3059_);
v___x_3061_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___redArg(v_ref_3049_, v_a_3060_, v___y_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___redArg___boxed(lean_object* v_ref_3062_, lean_object* v_msg_3063_, lean_object* v_declHint_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___redArg(v_ref_3062_, v_msg_3063_, v_declHint_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec(v___y_3066_);
lean_dec_ref(v___y_3065_);
lean_dec(v_ref_3062_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___redArg(lean_object* v_ref_3073_, lean_object* v_constName_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_){
_start:
{
lean_object* v___x_3082_; uint8_t v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3082_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___closed__1);
v___x_3083_ = 0;
lean_inc(v_constName_3074_);
v___x_3084_ = l_Lean_MessageData_ofConstName(v_constName_3074_, v___x_3083_);
v___x_3085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3082_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_3087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3087_, 0, v___x_3085_);
lean_ctor_set(v___x_3087_, 1, v___x_3086_);
v___x_3088_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___redArg(v_ref_3073_, v___x_3087_, v_constName_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
return v___x_3088_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___redArg___boxed(lean_object* v_ref_3089_, lean_object* v_constName_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___redArg(v_ref_3089_, v_constName_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
lean_dec(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec(v_ref_3089_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___redArg(lean_object* v_constName_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_){
_start:
{
lean_object* v_ref_3107_; lean_object* v___x_3108_; 
v_ref_3107_ = lean_ctor_get(v___y_3104_, 2);
v___x_3108_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___redArg(v_ref_3107_, v_constName_3099_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_, v___y_3105_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___redArg___boxed(lean_object* v_constName_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___redArg(v_constName_3109_, v___y_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_, v___y_3115_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec(v___y_3113_);
lean_dec_ref(v___y_3112_);
lean_dec(v___y_3111_);
lean_dec_ref(v___y_3110_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v_constName_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_){
_start:
{
lean_object* v___x_3126_; lean_object* v_env_3127_; uint8_t v___x_3128_; lean_object* v___x_3129_; 
v___x_3126_ = lean_st_ref_get(v___y_3124_);
v_env_3127_ = lean_ctor_get(v___x_3126_, 0);
lean_inc_ref(v_env_3127_);
lean_dec(v___x_3126_);
v___x_3128_ = 0;
lean_inc(v_constName_3118_);
v___x_3129_ = l_Lean_Environment_find_x3f(v_env_3127_, v_constName_3118_, v___x_3128_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v___x_3130_; 
v___x_3130_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___redArg(v_constName_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_);
return v___x_3130_;
}
else
{
lean_object* v_val_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3138_; 
lean_dec(v_constName_3118_);
v_val_3131_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3138_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3138_ == 0)
{
v___x_3133_ = v___x_3129_;
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_val_3131_);
lean_dec(v___x_3129_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3138_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
lean_object* v___x_3136_; 
if (v_isShared_3134_ == 0)
{
lean_ctor_set_tag(v___x_3133_, 0);
v___x_3136_ = v___x_3133_;
goto v_reusejp_3135_;
}
else
{
lean_object* v_reuseFailAlloc_3137_; 
v_reuseFailAlloc_3137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3137_, 0, v_val_3131_);
v___x_3136_ = v_reuseFailAlloc_3137_;
goto v_reusejp_3135_;
}
v_reusejp_3135_:
{
return v___x_3136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v_constName_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v_res_3147_; 
v_res_3147_ = l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8(v_constName_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
return v_res_3147_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__9(void){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Array_mkArray0___redArg();
return v___x_3160_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__14(void){
_start:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; 
v___x_3165_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_3166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
return v___x_3166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2(lean_object* v___x_3169_, lean_object* v_a_3170_, lean_object* v_projId_3171_, lean_object* v___x_3172_, lean_object* v___x_3173_, lean_object* v___x_3174_, lean_object* v_params_3175_, lean_object* v___x_3176_, lean_object* v_mods_3177_, lean_object* v___x_3178_, lean_object* v_optDeriving_3179_, lean_object* v___x_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_){
_start:
{
lean_object* v___x_3184_; 
v___x_3184_ = l_Lean_Elab_Command_getScope___redArg(v___y_3182_);
if (lean_obj_tag(v___x_3184_) == 0)
{
lean_object* v_a_3185_; lean_object* v_currNamespace_3186_; lean_object* v___x_3187_; 
v_a_3185_ = lean_ctor_get(v___x_3184_, 0);
lean_inc(v_a_3185_);
lean_dec_ref_known(v___x_3184_, 1);
v_currNamespace_3186_ = lean_ctor_get(v_a_3185_, 2);
lean_inc(v_currNamespace_3186_);
lean_dec(v_a_3185_);
v___x_3187_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_3182_);
if (lean_obj_tag(v___x_3187_) == 0)
{
lean_object* v_a_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v_a_3188_ = lean_ctor_get(v___x_3187_, 0);
lean_inc(v_a_3188_);
lean_dec_ref_known(v___x_3187_, 1);
lean_inc(v___x_3169_);
v___x_3189_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_3189_, 0, v_currNamespace_3186_);
lean_closure_set(v___x_3189_, 1, v_a_3188_);
lean_closure_set(v___x_3189_, 2, v___x_3169_);
lean_closure_set(v___x_3189_, 3, v_a_3170_);
v___x_3190_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3189_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v_declName_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3345_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___x_3190_, 1);
v_declName_3192_ = lean_ctor_get(v_a_3191_, 1);
v_isSharedCheck_3345_ = !lean_is_exclusive(v_a_3191_);
if (v_isSharedCheck_3345_ == 0)
{
lean_object* v_unused_3346_; lean_object* v_unused_3347_; lean_object* v_unused_3348_; 
v_unused_3346_ = lean_ctor_get(v_a_3191_, 3);
lean_dec(v_unused_3346_);
v_unused_3347_ = lean_ctor_get(v_a_3191_, 2);
lean_dec(v_unused_3347_);
v_unused_3348_ = lean_ctor_get(v_a_3191_, 0);
lean_dec(v_unused_3348_);
v___x_3194_ = v_a_3191_;
v_isShared_3195_ = v_isSharedCheck_3345_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_declName_3192_);
lean_dec(v_a_3191_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3345_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3196_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__0));
lean_inc_n(v_declName_3192_, 3);
v___x_3197_ = l_Lean_Name_append(v_declName_3192_, v___x_3196_);
v___x_3198_ = l_Lean_TSyntax_getId(v_projId_3171_);
lean_inc(v___x_3198_);
v___x_3199_ = l_Lean_Name_append(v_declName_3192_, v___x_3198_);
v___x_3200_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__2));
v___x_3201_ = l_Lean_Name_append(v_declName_3192_, v___x_3200_);
v___x_3202_ = l_Lean_Elab_Command_getRef___redArg(v___y_3181_);
if (lean_obj_tag(v___x_3202_) == 0)
{
lean_object* v_a_3203_; uint8_t v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3326_; 
v_a_3203_ = lean_ctor_get(v___x_3202_, 0);
lean_inc(v_a_3203_);
lean_dec_ref_known(v___x_3202_, 1);
v___x_3204_ = 0;
v___x_3205_ = l_Lean_SourceInfo_fromRef(v_a_3203_, v___x_3204_);
lean_dec(v_a_3203_);
v___x_3326_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3181_);
if (lean_obj_tag(v___x_3326_) == 0)
{
lean_object* v_quotContext_x3f_3327_; 
lean_dec_ref_known(v___x_3326_, 1);
v_quotContext_x3f_3327_ = lean_ctor_get(v___y_3181_, 5);
if (lean_obj_tag(v_quotContext_x3f_3327_) == 0)
{
lean_object* v___x_3328_; 
v___x_3328_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_3182_);
lean_dec_ref(v___x_3328_);
goto v___jp_3206_;
}
else
{
goto v___jp_3206_;
}
}
else
{
lean_object* v_a_3329_; lean_object* v___x_3331_; uint8_t v_isShared_3332_; uint8_t v_isSharedCheck_3336_; 
lean_dec(v___x_3205_);
lean_dec(v___x_3201_);
lean_dec(v___x_3199_);
lean_dec(v___x_3198_);
lean_dec(v___x_3197_);
lean_del_object(v___x_3194_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_mods_3177_);
lean_dec(v___x_3176_);
lean_dec_ref(v_params_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3173_);
lean_dec_ref(v___x_3172_);
lean_dec(v_projId_3171_);
lean_dec(v___x_3169_);
v_a_3329_ = lean_ctor_get(v___x_3326_, 0);
v_isSharedCheck_3336_ = !lean_is_exclusive(v___x_3326_);
if (v_isSharedCheck_3336_ == 0)
{
v___x_3331_ = v___x_3326_;
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
else
{
lean_inc(v_a_3329_);
lean_dec(v___x_3326_);
v___x_3331_ = lean_box(0);
v_isShared_3332_ = v_isSharedCheck_3336_;
goto v_resetjp_3330_;
}
v_resetjp_3330_:
{
lean_object* v___x_3334_; 
if (v_isShared_3332_ == 0)
{
v___x_3334_ = v___x_3331_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_a_3329_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
}
v___jp_3206_:
{
lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; size_t v_sz_3217_; size_t v___x_3218_; lean_object* v___x_3219_; size_t v_sz_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3207_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__3));
lean_inc_ref_n(v___x_3174_, 3);
lean_inc_ref_n(v___x_3173_, 4);
lean_inc_ref_n(v___x_3172_, 4);
v___x_3208_ = l_Lean_Name_mkStr4(v___x_3172_, v___x_3173_, v___x_3174_, v___x_3207_);
v___x_3209_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__4));
v___x_3210_ = l_Lean_Name_mkStr4(v___x_3172_, v___x_3173_, v___x_3174_, v___x_3209_);
v___x_3211_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__5));
lean_inc_n(v___x_3205_, 8);
v___x_3212_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3205_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__6));
v___x_3214_ = l_Lean_Name_mkStr4(v___x_3172_, v___x_3173_, v___x_3174_, v___x_3213_);
v___x_3215_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__8));
v___x_3216_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__9, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__9_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__9);
v_sz_3217_ = lean_array_size(v_params_3175_);
v___x_3218_ = ((size_t)0ULL);
v___x_3219_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_3217_, v___x_3218_, v_params_3175_);
v_sz_3220_ = lean_array_size(v___x_3219_);
v___x_3221_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_3220_, v___x_3218_, v___x_3219_);
v___x_3222_ = l_Array_append___redArg(v___x_3216_, v___x_3221_);
lean_dec_ref(v___x_3221_);
v___x_3223_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3223_, 0, v___x_3205_);
lean_ctor_set(v___x_3223_, 1, v___x_3215_);
lean_ctor_set(v___x_3223_, 2, v___x_3222_);
v___x_3224_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3224_, 0, v___x_3205_);
lean_ctor_set(v___x_3224_, 1, v___x_3215_);
lean_ctor_set(v___x_3224_, 2, v___x_3216_);
lean_inc_ref_n(v___x_3224_, 4);
v___x_3225_ = l_Lean_Syntax_node2(v___x_3205_, v___x_3214_, v___x_3223_, v___x_3224_);
v___x_3226_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__10));
v___x_3227_ = l_Lean_Name_mkStr4(v___x_3172_, v___x_3173_, v___x_3174_, v___x_3226_);
v___x_3228_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__11));
v___x_3229_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___x_3205_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
v___x_3230_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__12));
v___x_3231_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__13));
v___x_3232_ = l_Lean_Name_mkStr4(v___x_3172_, v___x_3173_, v___x_3230_, v___x_3231_);
v___x_3233_ = l_Lean_Syntax_node2(v___x_3205_, v___x_3232_, v___x_3224_, v___x_3224_);
v___x_3234_ = l_Lean_Syntax_node4(v___x_3205_, v___x_3227_, v___x_3229_, v___x_3176_, v___x_3233_, v___x_3224_);
lean_inc(v___x_3169_);
v___x_3235_ = l_Lean_Syntax_node5(v___x_3205_, v___x_3210_, v___x_3212_, v___x_3169_, v___x_3225_, v___x_3234_, v___x_3224_);
v___x_3236_ = l_Lean_Syntax_node2(v___x_3205_, v___x_3208_, v_mods_3177_, v___x_3235_);
v___x_3237_ = l_Lean_Elab_Command_elabCommand(v___x_3236_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
lean_dec_ref_known(v___x_3237_, 1);
lean_inc(v___x_3201_);
lean_inc(v___x_3199_);
lean_inc(v___x_3197_);
lean_inc(v_declName_3192_);
v___x_3238_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 12, 5);
lean_closure_set(v___x_3238_, 0, v_declName_3192_);
lean_closure_set(v___x_3238_, 1, v___x_3197_);
lean_closure_set(v___x_3238_, 2, v___x_3199_);
lean_closure_set(v___x_3238_, 3, v___x_3201_);
lean_closure_set(v___x_3238_, 4, v___x_3198_);
v___x_3239_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3238_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
lean_dec_ref_known(v___x_3239_, 1);
v___x_3241_ = lean_box(0);
lean_inc(v___x_3197_);
v___x_3242_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3197_, v___x_3169_, v___x_3241_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3242_) == 0)
{
lean_object* v___x_3243_; 
lean_dec_ref_known(v___x_3242_, 1);
lean_inc(v___x_3199_);
v___x_3243_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3199_, v_projId_3171_, v___x_3241_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3243_) == 0)
{
lean_object* v___x_3244_; lean_object* v___x_3245_; 
lean_dec_ref_known(v___x_3243_, 1);
v___x_3244_ = lean_box(0);
lean_inc(v___x_3199_);
v___x_3245_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_projId_3171_, v___x_3199_, v___x_3244_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v_env_3252_; lean_object* v_messages_3253_; lean_object* v_scopes_3254_; lean_object* v_usedQuotCtxts_3255_; lean_object* v_nextMacroScope_3256_; lean_object* v_maxRecDepth_3257_; lean_object* v_ngen_3258_; lean_object* v_auxDeclNGen_3259_; lean_object* v_infoState_3260_; lean_object* v_traceState_3261_; lean_object* v_snapshotTasks_3262_; lean_object* v_prevLinterStates_3263_; lean_object* v_codeQualityEntryTasks_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3317_; 
lean_dec_ref_known(v___x_3245_, 1);
lean_inc(v___x_3199_);
v___x_3246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3246_, 0, v___x_3199_);
lean_ctor_set(v___x_3246_, 1, v___x_3178_);
lean_inc(v___x_3197_);
v___x_3247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3197_);
lean_ctor_set(v___x_3247_, 1, v___x_3246_);
lean_inc_ref(v___x_3247_);
lean_inc(v_declName_3192_);
v___x_3248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3248_, 0, v_declName_3192_);
lean_ctor_set(v___x_3248_, 1, v___x_3247_);
v___x_3249_ = lean_box(0);
v___x_3250_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v___x_3248_, v___x_3249_, v___y_3181_, v___y_3182_);
lean_dec_ref_known(v___x_3248_, 2);
lean_dec_ref(v___x_3250_);
v___x_3251_ = lean_st_ref_take(v___y_3182_);
v_env_3252_ = lean_ctor_get(v___x_3251_, 0);
v_messages_3253_ = lean_ctor_get(v___x_3251_, 1);
v_scopes_3254_ = lean_ctor_get(v___x_3251_, 2);
v_usedQuotCtxts_3255_ = lean_ctor_get(v___x_3251_, 3);
v_nextMacroScope_3256_ = lean_ctor_get(v___x_3251_, 4);
v_maxRecDepth_3257_ = lean_ctor_get(v___x_3251_, 5);
v_ngen_3258_ = lean_ctor_get(v___x_3251_, 6);
v_auxDeclNGen_3259_ = lean_ctor_get(v___x_3251_, 7);
v_infoState_3260_ = lean_ctor_get(v___x_3251_, 8);
v_traceState_3261_ = lean_ctor_get(v___x_3251_, 9);
v_snapshotTasks_3262_ = lean_ctor_get(v___x_3251_, 10);
v_prevLinterStates_3263_ = lean_ctor_get(v___x_3251_, 11);
v_codeQualityEntryTasks_3264_ = lean_ctor_get(v___x_3251_, 12);
v_isSharedCheck_3317_ = !lean_is_exclusive(v___x_3251_);
if (v_isSharedCheck_3317_ == 0)
{
v___x_3266_ = v___x_3251_;
v_isShared_3267_ = v_isSharedCheck_3317_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3264_);
lean_inc(v_prevLinterStates_3263_);
lean_inc(v_snapshotTasks_3262_);
lean_inc(v_traceState_3261_);
lean_inc(v_infoState_3260_);
lean_inc(v_auxDeclNGen_3259_);
lean_inc(v_ngen_3258_);
lean_inc(v_maxRecDepth_3257_);
lean_inc(v_nextMacroScope_3256_);
lean_inc(v_usedQuotCtxts_3255_);
lean_inc(v_scopes_3254_);
lean_inc(v_messages_3253_);
lean_inc(v_env_3252_);
lean_dec(v___x_3251_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3317_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
lean_inc(v_declName_3192_);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 3, v_a_3240_);
lean_ctor_set(v___x_3194_, 2, v___x_3199_);
lean_ctor_set(v___x_3194_, 1, v___x_3197_);
lean_ctor_set(v___x_3194_, 0, v_declName_3192_);
v___x_3269_ = v___x_3194_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_declName_3192_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v___x_3197_);
lean_ctor_set(v_reuseFailAlloc_3316_, 2, v___x_3199_);
lean_ctor_set(v_reuseFailAlloc_3316_, 3, v_a_3240_);
v___x_3269_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; lean_object* v___x_3272_; 
v___x_3270_ = l_Lean_registerVirtualStructure(v_env_3252_, v___x_3269_);
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 0, v___x_3270_);
v___x_3272_ = v___x_3266_;
goto v_reusejp_3271_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3270_);
lean_ctor_set(v_reuseFailAlloc_3315_, 1, v_messages_3253_);
lean_ctor_set(v_reuseFailAlloc_3315_, 2, v_scopes_3254_);
lean_ctor_set(v_reuseFailAlloc_3315_, 3, v_usedQuotCtxts_3255_);
lean_ctor_set(v_reuseFailAlloc_3315_, 4, v_nextMacroScope_3256_);
lean_ctor_set(v_reuseFailAlloc_3315_, 5, v_maxRecDepth_3257_);
lean_ctor_set(v_reuseFailAlloc_3315_, 6, v_ngen_3258_);
lean_ctor_set(v_reuseFailAlloc_3315_, 7, v_auxDeclNGen_3259_);
lean_ctor_set(v_reuseFailAlloc_3315_, 8, v_infoState_3260_);
lean_ctor_set(v_reuseFailAlloc_3315_, 9, v_traceState_3261_);
lean_ctor_set(v_reuseFailAlloc_3315_, 10, v_snapshotTasks_3262_);
lean_ctor_set(v_reuseFailAlloc_3315_, 11, v_prevLinterStates_3263_);
lean_ctor_set(v_reuseFailAlloc_3315_, 12, v_codeQualityEntryTasks_3264_);
v___x_3272_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3271_;
}
v_reusejp_3271_:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3273_ = lean_st_ref_put(v___y_3182_, v___x_3272_);
v___x_3274_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v___x_3247_, v___x_3249_, v___y_3181_, v___y_3182_);
lean_dec_ref_known(v___x_3247_, 2);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v___x_3275_; 
lean_dec_ref_known(v___x_3274_, 1);
lean_inc(v___x_3201_);
v___x_3275_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3201_, v___x_3169_, v___x_3241_, v___y_3181_, v___y_3182_);
lean_dec(v___x_3169_);
if (lean_obj_tag(v___x_3275_) == 0)
{
lean_object* v___x_3276_; lean_object* v___x_3277_; 
lean_dec_ref_known(v___x_3275_, 1);
v___x_3276_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_3276_, 0, v___x_3201_);
v___x_3277_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3276_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3277_) == 0)
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
lean_dec_ref_known(v___x_3277_, 1);
v___x_3278_ = lean_alloc_closure((void*)(l_Lean_Elab_getOptDerivingClasses___boxed), 4, 1);
lean_closure_set(v___x_3278_, 0, v_optDeriving_3179_);
v___x_3279_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3278_, v___y_3181_, v___y_3182_);
if (lean_obj_tag(v___x_3279_) == 0)
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3306_; 
v_a_3280_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3306_ == 0)
{
v___x_3282_ = v___x_3279_;
v_isShared_3283_ = v_isSharedCheck_3306_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3279_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3306_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3284_; uint8_t v___x_3285_; 
v___x_3284_ = lean_array_get_size(v_a_3280_);
v___x_3285_ = lean_nat_dec_eq(v___x_3284_, v___x_3180_);
if (v___x_3285_ == 0)
{
uint8_t v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; size_t v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___f_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
lean_del_object(v___x_3282_);
v___x_3286_ = 1;
v___x_3287_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__14, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__14_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__14);
v___x_3288_ = lean_unsigned_to_nat(32u);
v___x_3289_ = lean_mk_empty_array_with_capacity(v___x_3288_);
v___x_3290_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___closed__2);
v___x_3291_ = ((size_t)5ULL);
lean_inc_n(v___x_3180_, 2);
v___x_3292_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3292_, 0, v___x_3290_);
lean_ctor_set(v___x_3292_, 1, v___x_3289_);
lean_ctor_set(v___x_3292_, 2, v___x_3180_);
lean_ctor_set(v___x_3292_, 3, v___x_3180_);
lean_ctor_set_usize(v___x_3292_, 4, v___x_3291_);
v___x_3293_ = lean_box(1);
v___x_3294_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3287_);
lean_ctor_set(v___x_3294_, 1, v___x_3292_);
lean_ctor_set(v___x_3294_, 2, v___x_3293_);
v___x_3295_ = lean_mk_empty_array_with_capacity(v___x_3180_);
lean_dec(v___x_3180_);
lean_inc(v_declName_3192_);
v___x_3296_ = lean_alloc_closure((void*)(l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed), 8, 1);
lean_closure_set(v___x_3296_, 0, v_declName_3192_);
v___x_3297_ = lean_box(v___x_3286_);
v___x_3298_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___boxed__const__1));
v___x_3299_ = lean_box(v___x_3285_);
v___f_3300_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3300_, 0, v___x_3296_);
lean_closure_set(v___f_3300_, 1, v___x_3297_);
lean_closure_set(v___f_3300_, 2, v_declName_3192_);
lean_closure_set(v___f_3300_, 3, v_a_3280_);
lean_closure_set(v___f_3300_, 4, v___x_3284_);
lean_closure_set(v___f_3300_, 5, v___x_3298_);
lean_closure_set(v___f_3300_, 6, v___x_3249_);
lean_closure_set(v___f_3300_, 7, v___x_3299_);
v___x_3301_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed), 11, 4);
lean_closure_set(v___x_3301_, 0, lean_box(0));
lean_closure_set(v___x_3301_, 1, v___x_3294_);
lean_closure_set(v___x_3301_, 2, v___x_3295_);
lean_closure_set(v___x_3301_, 3, v___f_3300_);
v___x_3302_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3301_, v___y_3181_, v___y_3182_);
return v___x_3302_;
}
else
{
lean_object* v___x_3304_; 
lean_dec(v_a_3280_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
if (v_isShared_3283_ == 0)
{
lean_ctor_set(v___x_3282_, 0, v___x_3249_);
v___x_3304_ = v___x_3282_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3305_; 
v_reuseFailAlloc_3305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3305_, 0, v___x_3249_);
v___x_3304_ = v_reuseFailAlloc_3305_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
return v___x_3304_;
}
}
}
}
else
{
lean_object* v_a_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3314_; 
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
v_a_3307_ = lean_ctor_get(v___x_3279_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v___x_3279_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3309_ = v___x_3279_;
v_isShared_3310_ = v_isSharedCheck_3314_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_a_3307_);
lean_dec(v___x_3279_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3314_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3312_; 
if (v_isShared_3310_ == 0)
{
v___x_3312_ = v___x_3309_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_a_3307_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
}
}
else
{
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
return v___x_3277_;
}
}
else
{
lean_dec(v___x_3201_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
return v___x_3275_;
}
}
else
{
lean_dec(v___x_3201_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3169_);
return v___x_3274_;
}
}
}
}
}
else
{
lean_dec(v_a_3240_);
lean_dec(v___x_3201_);
lean_dec(v___x_3199_);
lean_dec(v___x_3197_);
lean_del_object(v___x_3194_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v___x_3169_);
return v___x_3245_;
}
}
else
{
lean_dec(v_a_3240_);
lean_dec(v___x_3201_);
lean_dec(v___x_3199_);
lean_dec(v___x_3197_);
lean_del_object(v___x_3194_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_projId_3171_);
lean_dec(v___x_3169_);
return v___x_3243_;
}
}
else
{
lean_dec(v_a_3240_);
lean_dec(v___x_3201_);
lean_dec(v___x_3199_);
lean_dec(v___x_3197_);
lean_del_object(v___x_3194_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_projId_3171_);
lean_dec(v___x_3169_);
return v___x_3242_;
}
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_dec(v___x_3201_);
lean_dec(v___x_3199_);
lean_dec(v___x_3197_);
lean_del_object(v___x_3194_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_projId_3171_);
lean_dec(v___x_3169_);
v_a_3318_ = lean_ctor_get(v___x_3239_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3239_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3239_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
else
{
lean_dec(v___x_3201_);
lean_dec(v___x_3199_);
lean_dec(v___x_3198_);
lean_dec(v___x_3197_);
lean_del_object(v___x_3194_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_projId_3171_);
lean_dec(v___x_3169_);
return v___x_3237_;
}
}
}
else
{
lean_object* v_a_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3344_; 
lean_dec(v___x_3201_);
lean_dec(v___x_3199_);
lean_dec(v___x_3198_);
lean_dec(v___x_3197_);
lean_del_object(v___x_3194_);
lean_dec(v_declName_3192_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_mods_3177_);
lean_dec(v___x_3176_);
lean_dec_ref(v_params_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3173_);
lean_dec_ref(v___x_3172_);
lean_dec(v_projId_3171_);
lean_dec(v___x_3169_);
v_a_3337_ = lean_ctor_get(v___x_3202_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v___x_3202_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3339_ = v___x_3202_;
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_a_3337_);
lean_dec(v___x_3202_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3344_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3342_; 
if (v_isShared_3340_ == 0)
{
v___x_3342_ = v___x_3339_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_a_3337_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
return v___x_3342_;
}
}
}
}
}
else
{
lean_object* v_a_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3356_; 
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_mods_3177_);
lean_dec(v___x_3176_);
lean_dec_ref(v_params_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3173_);
lean_dec_ref(v___x_3172_);
lean_dec(v_projId_3171_);
lean_dec(v___x_3169_);
v_a_3349_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3351_ = v___x_3190_;
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_a_3349_);
lean_dec(v___x_3190_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3356_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
lean_object* v___x_3354_; 
if (v_isShared_3352_ == 0)
{
v___x_3354_ = v___x_3351_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_a_3349_);
v___x_3354_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
return v___x_3354_;
}
}
}
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
lean_dec(v_currNamespace_3186_);
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_mods_3177_);
lean_dec(v___x_3176_);
lean_dec_ref(v_params_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3173_);
lean_dec_ref(v___x_3172_);
lean_dec(v_projId_3171_);
lean_dec_ref(v_a_3170_);
lean_dec(v___x_3169_);
v_a_3357_ = lean_ctor_get(v___x_3187_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3187_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3187_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3187_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3362_; 
if (v_isShared_3360_ == 0)
{
v___x_3362_ = v___x_3359_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_a_3357_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec(v___x_3180_);
lean_dec(v_optDeriving_3179_);
lean_dec(v___x_3178_);
lean_dec(v_mods_3177_);
lean_dec(v___x_3176_);
lean_dec_ref(v_params_3175_);
lean_dec_ref(v___x_3174_);
lean_dec_ref(v___x_3173_);
lean_dec_ref(v___x_3172_);
lean_dec(v_projId_3171_);
lean_dec_ref(v_a_3170_);
lean_dec(v___x_3169_);
v_a_3365_ = lean_ctor_get(v___x_3184_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3184_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3184_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3184_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___boxed(lean_object* v___x_3373_, lean_object* v_a_3374_, lean_object* v_projId_3375_, lean_object* v___x_3376_, lean_object* v___x_3377_, lean_object* v___x_3378_, lean_object* v_params_3379_, lean_object* v___x_3380_, lean_object* v_mods_3381_, lean_object* v___x_3382_, lean_object* v_optDeriving_3383_, lean_object* v___x_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lean_Elab_Command_elabNewtype___lam__2(v___x_3373_, v_a_3374_, v_projId_3375_, v___x_3376_, v___x_3377_, v___x_3378_, v_params_3379_, v___x_3380_, v_mods_3381_, v___x_3382_, v_optDeriving_3383_, v___x_3384_, v___y_3385_, v___y_3386_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
return v_res_3388_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(uint8_t v_suppressElabErrors_3389_, uint8_t v___y_3390_, lean_object* v_x_3391_){
_start:
{
if (lean_obj_tag(v_x_3391_) == 1)
{
lean_object* v_pre_3392_; 
v_pre_3392_ = lean_ctor_get(v_x_3391_, 0);
if (lean_obj_tag(v_pre_3392_) == 0)
{
lean_object* v_str_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; 
v_str_3393_ = lean_ctor_get(v_x_3391_, 1);
v___x_3394_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___lam__0___closed__7));
v___x_3395_ = lean_string_dec_eq(v_str_3393_, v___x_3394_);
if (v___x_3395_ == 0)
{
return v___x_3395_;
}
else
{
return v_suppressElabErrors_3389_;
}
}
else
{
return v___y_3390_;
}
}
else
{
return v___y_3390_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed(lean_object* v_suppressElabErrors_3396_, lean_object* v___y_3397_, lean_object* v_x_3398_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3399_; uint8_t v___y_50699__boxed_3400_; uint8_t v_res_3401_; lean_object* v_r_3402_; 
v_suppressElabErrors_boxed_3399_ = lean_unbox(v_suppressElabErrors_3396_);
v___y_50699__boxed_3400_ = lean_unbox(v___y_3397_);
v_res_3401_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(v_suppressElabErrors_boxed_3399_, v___y_50699__boxed_3400_, v_x_3398_);
lean_dec(v_x_3398_);
v_r_3402_ = lean_box(v_res_3401_);
return v_r_3402_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(lean_object* v_ref_3403_, lean_object* v_msgData_3404_, uint8_t v_severity_3405_, uint8_t v_isSilent_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_){
_start:
{
uint8_t v___y_3411_; lean_object* v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; uint8_t v___y_3415_; lean_object* v___y_3416_; lean_object* v___y_3417_; lean_object* v___y_3418_; uint8_t v___y_3476_; uint8_t v___y_3477_; lean_object* v___y_3478_; uint8_t v___y_3479_; lean_object* v___y_3480_; uint8_t v___y_3504_; uint8_t v___y_3505_; lean_object* v___y_3506_; uint8_t v___y_3507_; lean_object* v___y_3508_; uint8_t v___y_3512_; uint8_t v___y_3513_; uint8_t v___y_3514_; uint8_t v___x_3529_; uint8_t v___y_3531_; uint8_t v___y_3532_; uint8_t v___y_3533_; uint8_t v___y_3535_; uint8_t v___x_3547_; 
v___x_3529_ = 2;
v___x_3547_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3405_, v___x_3529_);
if (v___x_3547_ == 0)
{
v___y_3535_ = v___x_3547_;
goto v___jp_3534_;
}
else
{
uint8_t v___x_3548_; 
lean_inc_ref(v_msgData_3404_);
v___x_3548_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3404_);
v___y_3535_ = v___x_3548_;
goto v___jp_3534_;
}
v___jp_3410_:
{
lean_object* v___x_3419_; 
v___x_3419_ = l_Lean_Elab_Command_getScope___redArg(v___y_3418_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v_currNamespace_3421_; lean_object* v___x_3422_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc(v_a_3420_);
lean_dec_ref_known(v___x_3419_, 1);
v_currNamespace_3421_ = lean_ctor_get(v_a_3420_, 2);
lean_inc(v_currNamespace_3421_);
lean_dec(v_a_3420_);
v___x_3422_ = l_Lean_Elab_Command_getScope___redArg(v___y_3418_);
if (lean_obj_tag(v___x_3422_) == 0)
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3458_; 
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3458_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3458_ == 0)
{
v___x_3425_ = v___x_3422_;
v_isShared_3426_ = v_isSharedCheck_3458_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3422_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3458_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v_openDecls_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v_env_3432_; lean_object* v_messages_3433_; lean_object* v_scopes_3434_; lean_object* v_usedQuotCtxts_3435_; lean_object* v_nextMacroScope_3436_; lean_object* v_maxRecDepth_3437_; lean_object* v_ngen_3438_; lean_object* v_auxDeclNGen_3439_; lean_object* v_infoState_3440_; lean_object* v_traceState_3441_; lean_object* v_snapshotTasks_3442_; lean_object* v_prevLinterStates_3443_; lean_object* v_codeQualityEntryTasks_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3457_; 
v_openDecls_3427_ = lean_ctor_get(v_a_3423_, 3);
lean_inc(v_openDecls_3427_);
lean_dec(v_a_3423_);
v___x_3428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3428_, 0, v_currNamespace_3421_);
lean_ctor_set(v___x_3428_, 1, v_openDecls_3427_);
v___x_3429_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
lean_ctor_set(v___x_3429_, 1, v___y_3414_);
lean_inc_ref(v___y_3416_);
lean_inc_ref(v___y_3417_);
v___x_3430_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3430_, 0, v___y_3417_);
lean_ctor_set(v___x_3430_, 1, v___y_3413_);
lean_ctor_set(v___x_3430_, 2, v___y_3412_);
lean_ctor_set(v___x_3430_, 3, v___y_3416_);
lean_ctor_set(v___x_3430_, 4, v___x_3429_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*5, v___y_3415_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*5 + 1, v___y_3411_);
lean_ctor_set_uint8(v___x_3430_, sizeof(void*)*5 + 2, v_isSilent_3406_);
v___x_3431_ = lean_st_ref_take(v___y_3418_);
v_env_3432_ = lean_ctor_get(v___x_3431_, 0);
v_messages_3433_ = lean_ctor_get(v___x_3431_, 1);
v_scopes_3434_ = lean_ctor_get(v___x_3431_, 2);
v_usedQuotCtxts_3435_ = lean_ctor_get(v___x_3431_, 3);
v_nextMacroScope_3436_ = lean_ctor_get(v___x_3431_, 4);
v_maxRecDepth_3437_ = lean_ctor_get(v___x_3431_, 5);
v_ngen_3438_ = lean_ctor_get(v___x_3431_, 6);
v_auxDeclNGen_3439_ = lean_ctor_get(v___x_3431_, 7);
v_infoState_3440_ = lean_ctor_get(v___x_3431_, 8);
v_traceState_3441_ = lean_ctor_get(v___x_3431_, 9);
v_snapshotTasks_3442_ = lean_ctor_get(v___x_3431_, 10);
v_prevLinterStates_3443_ = lean_ctor_get(v___x_3431_, 11);
v_codeQualityEntryTasks_3444_ = lean_ctor_get(v___x_3431_, 12);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3446_ = v___x_3431_;
v_isShared_3447_ = v_isSharedCheck_3457_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3444_);
lean_inc(v_prevLinterStates_3443_);
lean_inc(v_snapshotTasks_3442_);
lean_inc(v_traceState_3441_);
lean_inc(v_infoState_3440_);
lean_inc(v_auxDeclNGen_3439_);
lean_inc(v_ngen_3438_);
lean_inc(v_maxRecDepth_3437_);
lean_inc(v_nextMacroScope_3436_);
lean_inc(v_usedQuotCtxts_3435_);
lean_inc(v_scopes_3434_);
lean_inc(v_messages_3433_);
lean_inc(v_env_3432_);
lean_dec(v___x_3431_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3457_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3451_; 
v___x_3448_ = lean_box(0);
v___x_3449_ = l_Lean_MessageLog_add(v___x_3430_, v_messages_3433_);
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 1, v___x_3449_);
v___x_3451_ = v___x_3446_;
goto v_reusejp_3450_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_env_3432_);
lean_ctor_set(v_reuseFailAlloc_3456_, 1, v___x_3449_);
lean_ctor_set(v_reuseFailAlloc_3456_, 2, v_scopes_3434_);
lean_ctor_set(v_reuseFailAlloc_3456_, 3, v_usedQuotCtxts_3435_);
lean_ctor_set(v_reuseFailAlloc_3456_, 4, v_nextMacroScope_3436_);
lean_ctor_set(v_reuseFailAlloc_3456_, 5, v_maxRecDepth_3437_);
lean_ctor_set(v_reuseFailAlloc_3456_, 6, v_ngen_3438_);
lean_ctor_set(v_reuseFailAlloc_3456_, 7, v_auxDeclNGen_3439_);
lean_ctor_set(v_reuseFailAlloc_3456_, 8, v_infoState_3440_);
lean_ctor_set(v_reuseFailAlloc_3456_, 9, v_traceState_3441_);
lean_ctor_set(v_reuseFailAlloc_3456_, 10, v_snapshotTasks_3442_);
lean_ctor_set(v_reuseFailAlloc_3456_, 11, v_prevLinterStates_3443_);
lean_ctor_set(v_reuseFailAlloc_3456_, 12, v_codeQualityEntryTasks_3444_);
v___x_3451_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3450_;
}
v_reusejp_3450_:
{
lean_object* v___x_3452_; lean_object* v___x_3454_; 
v___x_3452_ = lean_st_ref_put(v___y_3418_, v___x_3451_);
if (v_isShared_3426_ == 0)
{
lean_ctor_set(v___x_3425_, 0, v___x_3448_);
v___x_3454_ = v___x_3425_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3448_);
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
else
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3466_; 
lean_dec(v_currNamespace_3421_);
lean_dec_ref(v___y_3414_);
lean_dec_ref(v___y_3413_);
lean_dec(v___y_3412_);
v_a_3459_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3466_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3466_ == 0)
{
v___x_3461_ = v___x_3422_;
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3422_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3466_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3464_; 
if (v_isShared_3462_ == 0)
{
v___x_3464_ = v___x_3461_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v_a_3459_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
}
}
else
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3474_; 
lean_dec_ref(v___y_3414_);
lean_dec_ref(v___y_3413_);
lean_dec(v___y_3412_);
v_a_3467_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3474_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3474_ == 0)
{
v___x_3469_ = v___x_3419_;
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3419_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3474_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3472_; 
if (v_isShared_3470_ == 0)
{
v___x_3472_ = v___x_3469_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_a_3467_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
return v___x_3472_;
}
}
}
}
v___jp_3475_:
{
lean_object* v_fileName_3481_; lean_object* v_fileMap_3482_; uint8_t v_suppressElabErrors_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___f_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v_a_3489_; lean_object* v___x_3491_; uint8_t v_isShared_3492_; uint8_t v_isSharedCheck_3502_; 
v_fileName_3481_ = lean_ctor_get(v___y_3407_, 0);
v_fileMap_3482_ = lean_ctor_get(v___y_3407_, 1);
v_suppressElabErrors_3483_ = lean_ctor_get_uint8(v___y_3407_, sizeof(void*)*10);
v___x_3484_ = lean_box(v_suppressElabErrors_3483_);
v___x_3485_ = lean_box(v___y_3476_);
v___f_3486_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3486_, 0, v___x_3484_);
lean_closure_set(v___f_3486_, 1, v___x_3485_);
v___x_3487_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3404_);
v___x_3488_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v___x_3487_, v___y_3408_);
v_a_3489_ = lean_ctor_get(v___x_3488_, 0);
v_isSharedCheck_3502_ = !lean_is_exclusive(v___x_3488_);
if (v_isSharedCheck_3502_ == 0)
{
v___x_3491_ = v___x_3488_;
v_isShared_3492_ = v_isSharedCheck_3502_;
goto v_resetjp_3490_;
}
else
{
lean_inc(v_a_3489_);
lean_dec(v___x_3488_);
v___x_3491_ = lean_box(0);
v_isShared_3492_ = v_isSharedCheck_3502_;
goto v_resetjp_3490_;
}
v_resetjp_3490_:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; 
lean_inc_ref_n(v_fileMap_3482_, 2);
v___x_3493_ = l_Lean_FileMap_toPosition(v_fileMap_3482_, v___y_3478_);
lean_dec(v___y_3478_);
v___x_3494_ = l_Lean_FileMap_toPosition(v_fileMap_3482_, v___y_3480_);
lean_dec(v___y_3480_);
v___x_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
v___x_3496_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0));
if (v_suppressElabErrors_3483_ == 0)
{
lean_del_object(v___x_3491_);
lean_dec_ref(v___f_3486_);
v___y_3411_ = v___y_3477_;
v___y_3412_ = v___x_3495_;
v___y_3413_ = v___x_3493_;
v___y_3414_ = v_a_3489_;
v___y_3415_ = v___y_3479_;
v___y_3416_ = v___x_3496_;
v___y_3417_ = v_fileName_3481_;
v___y_3418_ = v___y_3408_;
goto v___jp_3410_;
}
else
{
uint8_t v___x_3497_; 
lean_inc(v_a_3489_);
v___x_3497_ = l_Lean_MessageData_hasTag(v___f_3486_, v_a_3489_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; lean_object* v___x_3500_; 
lean_dec_ref_known(v___x_3495_, 1);
lean_dec_ref(v___x_3493_);
lean_dec(v_a_3489_);
v___x_3498_ = lean_box(0);
if (v_isShared_3492_ == 0)
{
lean_ctor_set(v___x_3491_, 0, v___x_3498_);
v___x_3500_ = v___x_3491_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3498_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
else
{
lean_del_object(v___x_3491_);
v___y_3411_ = v___y_3477_;
v___y_3412_ = v___x_3495_;
v___y_3413_ = v___x_3493_;
v___y_3414_ = v_a_3489_;
v___y_3415_ = v___y_3479_;
v___y_3416_ = v___x_3496_;
v___y_3417_ = v_fileName_3481_;
v___y_3418_ = v___y_3408_;
goto v___jp_3410_;
}
}
}
}
v___jp_3503_:
{
lean_object* v___x_3509_; 
v___x_3509_ = l_Lean_Syntax_getTailPos_x3f(v___y_3506_, v___y_3507_);
lean_dec(v___y_3506_);
if (lean_obj_tag(v___x_3509_) == 0)
{
lean_inc(v___y_3508_);
v___y_3476_ = v___y_3504_;
v___y_3477_ = v___y_3505_;
v___y_3478_ = v___y_3508_;
v___y_3479_ = v___y_3507_;
v___y_3480_ = v___y_3508_;
goto v___jp_3475_;
}
else
{
lean_object* v_val_3510_; 
v_val_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc(v_val_3510_);
lean_dec_ref_known(v___x_3509_, 1);
v___y_3476_ = v___y_3504_;
v___y_3477_ = v___y_3505_;
v___y_3478_ = v___y_3508_;
v___y_3479_ = v___y_3507_;
v___y_3480_ = v_val_3510_;
goto v___jp_3475_;
}
}
v___jp_3511_:
{
lean_object* v___x_3515_; 
v___x_3515_ = l_Lean_Elab_Command_getRef___redArg(v___y_3407_);
if (lean_obj_tag(v___x_3515_) == 0)
{
lean_object* v_a_3516_; lean_object* v_ref_3517_; lean_object* v___x_3518_; 
v_a_3516_ = lean_ctor_get(v___x_3515_, 0);
lean_inc(v_a_3516_);
lean_dec_ref_known(v___x_3515_, 1);
v_ref_3517_ = l_Lean_replaceRef(v_ref_3403_, v_a_3516_);
lean_dec(v_a_3516_);
v___x_3518_ = l_Lean_Syntax_getPos_x3f(v_ref_3517_, v___y_3513_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v___x_3519_; 
v___x_3519_ = lean_unsigned_to_nat(0u);
v___y_3504_ = v___y_3512_;
v___y_3505_ = v___y_3514_;
v___y_3506_ = v_ref_3517_;
v___y_3507_ = v___y_3513_;
v___y_3508_ = v___x_3519_;
goto v___jp_3503_;
}
else
{
lean_object* v_val_3520_; 
v_val_3520_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_val_3520_);
lean_dec_ref_known(v___x_3518_, 1);
v___y_3504_ = v___y_3512_;
v___y_3505_ = v___y_3514_;
v___y_3506_ = v_ref_3517_;
v___y_3507_ = v___y_3513_;
v___y_3508_ = v_val_3520_;
goto v___jp_3503_;
}
}
else
{
lean_object* v_a_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3528_; 
lean_dec_ref(v_msgData_3404_);
v_a_3521_ = lean_ctor_get(v___x_3515_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3515_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3523_ = v___x_3515_;
v_isShared_3524_ = v_isSharedCheck_3528_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_a_3521_);
lean_dec(v___x_3515_);
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
v___jp_3530_:
{
if (v___y_3533_ == 0)
{
v___y_3512_ = v___y_3531_;
v___y_3513_ = v___y_3532_;
v___y_3514_ = v_severity_3405_;
goto v___jp_3511_;
}
else
{
v___y_3512_ = v___y_3531_;
v___y_3513_ = v___y_3532_;
v___y_3514_ = v___x_3529_;
goto v___jp_3511_;
}
}
v___jp_3534_:
{
if (v___y_3535_ == 0)
{
lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v_scopes_3538_; lean_object* v___x_3539_; lean_object* v_opts_3540_; uint8_t v___x_3541_; uint8_t v___x_3542_; 
v___x_3536_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3537_ = lean_st_ref_get(v___y_3408_);
v_scopes_3538_ = lean_ctor_get(v___x_3537_, 2);
lean_inc(v_scopes_3538_);
lean_dec(v___x_3537_);
v___x_3539_ = l_List_head_x21___redArg(v___x_3536_, v_scopes_3538_);
lean_dec(v_scopes_3538_);
v_opts_3540_ = lean_ctor_get(v___x_3539_, 1);
lean_inc_ref(v_opts_3540_);
lean_dec(v___x_3539_);
v___x_3541_ = 1;
v___x_3542_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3405_, v___x_3541_);
if (v___x_3542_ == 0)
{
lean_dec_ref(v_opts_3540_);
v___y_3531_ = v___y_3535_;
v___y_3532_ = v___y_3535_;
v___y_3533_ = v___x_3542_;
goto v___jp_3530_;
}
else
{
lean_object* v___x_3543_; uint8_t v___x_3544_; 
v___x_3543_ = l_Lean_warningAsError;
v___x_3544_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_3540_, v___x_3543_);
lean_dec_ref(v_opts_3540_);
v___y_3531_ = v___y_3535_;
v___y_3532_ = v___y_3535_;
v___y_3533_ = v___x_3544_;
goto v___jp_3530_;
}
}
else
{
lean_object* v___x_3545_; lean_object* v___x_3546_; 
lean_dec_ref(v_msgData_3404_);
v___x_3545_ = lean_box(0);
v___x_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
return v___x_3546_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___boxed(lean_object* v_ref_3549_, lean_object* v_msgData_3550_, lean_object* v_severity_3551_, lean_object* v_isSilent_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
uint8_t v_severity_boxed_3556_; uint8_t v_isSilent_boxed_3557_; lean_object* v_res_3558_; 
v_severity_boxed_3556_ = lean_unbox(v_severity_3551_);
v_isSilent_boxed_3557_ = lean_unbox(v_isSilent_3552_);
v_res_3558_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3549_, v_msgData_3550_, v_severity_boxed_3556_, v_isSilent_boxed_3557_, v___y_3553_, v___y_3554_);
lean_dec(v___y_3554_);
lean_dec_ref(v___y_3553_);
lean_dec(v_ref_3549_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(lean_object* v_msgData_3559_, uint8_t v_severity_3560_, uint8_t v_isSilent_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_){
_start:
{
lean_object* v___x_3565_; 
v___x_3565_ = l_Lean_Elab_Command_getRef___redArg(v___y_3562_);
if (lean_obj_tag(v___x_3565_) == 0)
{
lean_object* v_a_3566_; lean_object* v___x_3567_; 
v_a_3566_ = lean_ctor_get(v___x_3565_, 0);
lean_inc(v_a_3566_);
lean_dec_ref_known(v___x_3565_, 1);
v___x_3567_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_a_3566_, v_msgData_3559_, v_severity_3560_, v_isSilent_3561_, v___y_3562_, v___y_3563_);
lean_dec(v_a_3566_);
return v___x_3567_;
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec_ref(v_msgData_3559_);
v_a_3568_ = lean_ctor_get(v___x_3565_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3565_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3565_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3565_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44___boxed(lean_object* v_msgData_3576_, lean_object* v_severity_3577_, lean_object* v_isSilent_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
uint8_t v_severity_boxed_3582_; uint8_t v_isSilent_boxed_3583_; lean_object* v_res_3584_; 
v_severity_boxed_3582_ = lean_unbox(v_severity_3577_);
v_isSilent_boxed_3583_ = lean_unbox(v_isSilent_3578_);
v_res_3584_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3576_, v_severity_boxed_3582_, v_isSilent_boxed_3583_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(lean_object* v_msgData_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_){
_start:
{
uint8_t v___x_3589_; uint8_t v___x_3590_; lean_object* v___x_3591_; 
v___x_3589_ = 2;
v___x_3590_ = 0;
v___x_3591_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3585_, v___x_3589_, v___x_3590_, v___y_3586_, v___y_3587_);
return v___x_3591_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38___boxed(lean_object* v_msgData_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_){
_start:
{
lean_object* v_res_3596_; 
v_res_3596_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v_msgData_3592_, v___y_3593_, v___y_3594_);
lean_dec(v___y_3594_);
lean_dec_ref(v___y_3593_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(lean_object* v_ref_3597_, lean_object* v_msgData_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_){
_start:
{
uint8_t v___x_3602_; uint8_t v___x_3603_; lean_object* v___x_3604_; 
v___x_3602_ = 2;
v___x_3603_ = 0;
v___x_3604_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3597_, v_msgData_3598_, v___x_3602_, v___x_3603_, v___y_3599_, v___y_3600_);
return v___x_3604_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37___boxed(lean_object* v_ref_3605_, lean_object* v_msgData_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_){
_start:
{
lean_object* v_res_3610_; 
v_res_3610_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3605_, v_msgData_3606_, v___y_3607_, v___y_3608_);
lean_dec(v___y_3608_);
lean_dec_ref(v___y_3607_);
lean_dec(v_ref_3605_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(lean_object* v_ex_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
if (lean_obj_tag(v_ex_3611_) == 0)
{
lean_object* v_ref_3615_; lean_object* v_msg_3616_; lean_object* v___x_3617_; 
v_ref_3615_ = lean_ctor_get(v_ex_3611_, 0);
lean_inc(v_ref_3615_);
v_msg_3616_ = lean_ctor_get(v_ex_3611_, 1);
lean_inc_ref(v_msg_3616_);
lean_dec_ref_known(v_ex_3611_, 2);
v___x_3617_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3615_, v_msg_3616_, v___y_3612_, v___y_3613_);
lean_dec(v_ref_3615_);
return v___x_3617_;
}
else
{
lean_object* v_id_3618_; uint8_t v___y_3620_; uint8_t v___x_3642_; 
v_id_3618_ = lean_ctor_get(v_ex_3611_, 0);
lean_inc(v_id_3618_);
v___x_3642_ = l_Lean_Elab_isAbortExceptionId(v_id_3618_);
if (v___x_3642_ == 0)
{
uint8_t v___x_3643_; 
v___x_3643_ = l_Lean_Exception_isInterrupt(v_ex_3611_);
lean_dec_ref_known(v_ex_3611_, 2);
v___y_3620_ = v___x_3643_;
goto v___jp_3619_;
}
else
{
lean_dec_ref_known(v_ex_3611_, 2);
v___y_3620_ = v___x_3642_;
goto v___jp_3619_;
}
v___jp_3619_:
{
if (v___y_3620_ == 0)
{
lean_object* v___x_3621_; 
v___x_3621_ = l_Lean_InternalExceptionId_getName(v_id_3618_);
lean_dec(v_id_3618_);
if (lean_obj_tag(v___x_3621_) == 0)
{
lean_object* v_a_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; 
v_a_3622_ = lean_ctor_get(v___x_3621_, 0);
lean_inc(v_a_3622_);
lean_dec_ref_known(v___x_3621_, 1);
v___x_3623_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19___closed__1);
v___x_3624_ = l_Lean_MessageData_ofName(v_a_3622_);
v___x_3625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3623_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
v___x_3626_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v___x_3625_, v___y_3612_, v___y_3613_);
return v___x_3626_;
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3639_; 
v_a_3627_ = lean_ctor_get(v___x_3621_, 0);
v_isSharedCheck_3639_ = !lean_is_exclusive(v___x_3621_);
if (v_isSharedCheck_3639_ == 0)
{
v___x_3629_ = v___x_3621_;
v_isShared_3630_ = v_isSharedCheck_3639_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3621_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3639_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v_ref_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3637_; 
v_ref_3631_ = lean_ctor_get(v___y_3612_, 7);
v___x_3632_ = lean_io_error_to_string(v_a_3627_);
v___x_3633_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3633_, 0, v___x_3632_);
v___x_3634_ = l_Lean_MessageData_ofFormat(v___x_3633_);
lean_inc(v_ref_3631_);
v___x_3635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3635_, 0, v_ref_3631_);
lean_ctor_set(v___x_3635_, 1, v___x_3634_);
if (v_isShared_3630_ == 0)
{
lean_ctor_set(v___x_3629_, 0, v___x_3635_);
v___x_3637_ = v___x_3629_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3635_);
v___x_3637_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
return v___x_3637_;
}
}
}
}
else
{
lean_object* v___x_3640_; lean_object* v___x_3641_; 
lean_dec(v_id_3618_);
v___x_3640_ = lean_box(0);
v___x_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3640_);
return v___x_3641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27___boxed(lean_object* v_ex_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_ex_3644_, v___y_3645_, v___y_3646_);
lean_dec(v___y_3646_);
lean_dec_ref(v___y_3645_);
return v_res_3648_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(lean_object* v_k_3658_){
_start:
{
lean_object* v___x_3659_; uint8_t v___x_3660_; 
v___x_3659_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4));
v___x_3660_ = lean_name_eq(v_k_3658_, v___x_3659_);
if (v___x_3660_ == 0)
{
uint8_t v___x_3661_; 
v___x_3661_ = 1;
return v___x_3661_;
}
else
{
uint8_t v___x_3662_; 
v___x_3662_ = 0;
return v___x_3662_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___boxed(lean_object* v_k_3663_){
_start:
{
uint8_t v_res_3664_; lean_object* v_r_3665_; 
v_res_3664_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(v_k_3663_);
lean_dec(v_k_3663_);
v_r_3665_ = lean_box(v_res_3664_);
return v_r_3665_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(lean_object* v_keys_3666_, lean_object* v_i_3667_, lean_object* v_k_3668_){
_start:
{
lean_object* v___x_3669_; uint8_t v___x_3670_; 
v___x_3669_ = lean_array_get_size(v_keys_3666_);
v___x_3670_ = lean_nat_dec_lt(v_i_3667_, v___x_3669_);
if (v___x_3670_ == 0)
{
lean_dec(v_i_3667_);
return v___x_3670_;
}
else
{
lean_object* v_k_x27_3671_; uint8_t v___x_3672_; 
v_k_x27_3671_ = lean_array_fget_borrowed(v_keys_3666_, v_i_3667_);
v___x_3672_ = l_Lean_instBEqExtraModUse_beq(v_k_3668_, v_k_x27_3671_);
if (v___x_3672_ == 0)
{
lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3673_ = lean_unsigned_to_nat(1u);
v___x_3674_ = lean_nat_add(v_i_3667_, v___x_3673_);
lean_dec(v_i_3667_);
v_i_3667_ = v___x_3674_;
goto _start;
}
else
{
lean_dec(v_i_3667_);
return v___x_3670_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg___boxed(lean_object* v_keys_3676_, lean_object* v_i_3677_, lean_object* v_k_3678_){
_start:
{
uint8_t v_res_3679_; lean_object* v_r_3680_; 
v_res_3679_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_3676_, v_i_3677_, v_k_3678_);
lean_dec_ref(v_k_3678_);
lean_dec_ref(v_keys_3676_);
v_r_3680_ = lean_box(v_res_3679_);
return v_r_3680_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(lean_object* v_x_3681_, size_t v_x_3682_, lean_object* v_x_3683_){
_start:
{
if (lean_obj_tag(v_x_3681_) == 0)
{
lean_object* v_es_3684_; lean_object* v___x_3685_; size_t v___x_3686_; size_t v___x_3687_; lean_object* v_j_3688_; lean_object* v___x_3689_; 
v_es_3684_ = lean_ctor_get(v_x_3681_, 0);
v___x_3685_ = lean_box(2);
v___x_3686_ = ((size_t)31ULL);
v___x_3687_ = lean_usize_land(v_x_3682_, v___x_3686_);
v_j_3688_ = lean_usize_to_nat(v___x_3687_);
v___x_3689_ = lean_array_get_borrowed(v___x_3685_, v_es_3684_, v_j_3688_);
lean_dec(v_j_3688_);
switch(lean_obj_tag(v___x_3689_))
{
case 0:
{
lean_object* v_key_3690_; uint8_t v___x_3691_; 
v_key_3690_ = lean_ctor_get(v___x_3689_, 0);
v___x_3691_ = l_Lean_instBEqExtraModUse_beq(v_x_3683_, v_key_3690_);
return v___x_3691_;
}
case 1:
{
lean_object* v_node_3692_; size_t v___x_3693_; size_t v___x_3694_; 
v_node_3692_ = lean_ctor_get(v___x_3689_, 0);
v___x_3693_ = ((size_t)5ULL);
v___x_3694_ = lean_usize_shift_right(v_x_3682_, v___x_3693_);
v_x_3681_ = v_node_3692_;
v_x_3682_ = v___x_3694_;
goto _start;
}
default: 
{
uint8_t v___x_3696_; 
v___x_3696_ = 0;
return v___x_3696_;
}
}
}
else
{
lean_object* v_ks_3697_; lean_object* v___x_3698_; uint8_t v___x_3699_; 
v_ks_3697_ = lean_ctor_get(v_x_3681_, 0);
v___x_3698_ = lean_unsigned_to_nat(0u);
v___x_3699_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_ks_3697_, v___x_3698_, v_x_3683_);
return v___x_3699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg___boxed(lean_object* v_x_3700_, lean_object* v_x_3701_, lean_object* v_x_3702_){
_start:
{
size_t v_x_51143__boxed_3703_; uint8_t v_res_3704_; lean_object* v_r_3705_; 
v_x_51143__boxed_3703_ = lean_unbox_usize(v_x_3701_);
lean_dec(v_x_3701_);
v_res_3704_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3700_, v_x_51143__boxed_3703_, v_x_3702_);
lean_dec_ref(v_x_3702_);
lean_dec_ref(v_x_3700_);
v_r_3705_ = lean_box(v_res_3704_);
return v_r_3705_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(lean_object* v_x_3706_, lean_object* v_x_3707_){
_start:
{
uint64_t v___x_3708_; size_t v___x_3709_; uint8_t v___x_3710_; 
v___x_3708_ = l_Lean_instHashableExtraModUse_hash(v_x_3707_);
v___x_3709_ = lean_uint64_to_usize(v___x_3708_);
v___x_3710_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3706_, v___x_3709_, v_x_3707_);
return v___x_3710_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg___boxed(lean_object* v_x_3711_, lean_object* v_x_3712_){
_start:
{
uint8_t v_res_3713_; lean_object* v_r_3714_; 
v_res_3713_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_3711_, v_x_3712_);
lean_dec_ref(v_x_3712_);
lean_dec_ref(v_x_3711_);
v_r_3714_ = lean_box(v_res_3713_);
return v_r_3714_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0(void){
_start:
{
lean_object* v___x_3715_; double v___x_3716_; 
v___x_3715_ = lean_unsigned_to_nat(0u);
v___x_3716_ = lean_float_of_nat(v___x_3715_);
return v___x_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(lean_object* v_cls_3719_, lean_object* v_msg_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_){
_start:
{
lean_object* v___x_3724_; 
v___x_3724_ = l_Lean_Elab_Command_getRef___redArg(v___y_3721_);
if (lean_obj_tag(v___x_3724_) == 0)
{
lean_object* v_a_3725_; lean_object* v___x_3726_; lean_object* v_a_3727_; lean_object* v___x_3729_; uint8_t v_isShared_3730_; uint8_t v_isSharedCheck_3775_; 
v_a_3725_ = lean_ctor_get(v___x_3724_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v___x_3724_, 1);
v___x_3726_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_3720_, v___y_3722_);
v_a_3727_ = lean_ctor_get(v___x_3726_, 0);
v_isSharedCheck_3775_ = !lean_is_exclusive(v___x_3726_);
if (v_isSharedCheck_3775_ == 0)
{
v___x_3729_ = v___x_3726_;
v_isShared_3730_ = v_isSharedCheck_3775_;
goto v_resetjp_3728_;
}
else
{
lean_inc(v_a_3727_);
lean_dec(v___x_3726_);
v___x_3729_ = lean_box(0);
v_isShared_3730_ = v_isSharedCheck_3775_;
goto v_resetjp_3728_;
}
v_resetjp_3728_:
{
lean_object* v___x_3731_; lean_object* v_traceState_3732_; lean_object* v_env_3733_; lean_object* v_messages_3734_; lean_object* v_scopes_3735_; lean_object* v_usedQuotCtxts_3736_; lean_object* v_nextMacroScope_3737_; lean_object* v_maxRecDepth_3738_; lean_object* v_ngen_3739_; lean_object* v_auxDeclNGen_3740_; lean_object* v_infoState_3741_; lean_object* v_snapshotTasks_3742_; lean_object* v_prevLinterStates_3743_; lean_object* v_codeQualityEntryTasks_3744_; lean_object* v___x_3746_; uint8_t v_isShared_3747_; uint8_t v_isSharedCheck_3774_; 
v___x_3731_ = lean_st_ref_take(v___y_3722_);
v_traceState_3732_ = lean_ctor_get(v___x_3731_, 9);
v_env_3733_ = lean_ctor_get(v___x_3731_, 0);
v_messages_3734_ = lean_ctor_get(v___x_3731_, 1);
v_scopes_3735_ = lean_ctor_get(v___x_3731_, 2);
v_usedQuotCtxts_3736_ = lean_ctor_get(v___x_3731_, 3);
v_nextMacroScope_3737_ = lean_ctor_get(v___x_3731_, 4);
v_maxRecDepth_3738_ = lean_ctor_get(v___x_3731_, 5);
v_ngen_3739_ = lean_ctor_get(v___x_3731_, 6);
v_auxDeclNGen_3740_ = lean_ctor_get(v___x_3731_, 7);
v_infoState_3741_ = lean_ctor_get(v___x_3731_, 8);
v_snapshotTasks_3742_ = lean_ctor_get(v___x_3731_, 10);
v_prevLinterStates_3743_ = lean_ctor_get(v___x_3731_, 11);
v_codeQualityEntryTasks_3744_ = lean_ctor_get(v___x_3731_, 12);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3746_ = v___x_3731_;
v_isShared_3747_ = v_isSharedCheck_3774_;
goto v_resetjp_3745_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3744_);
lean_inc(v_prevLinterStates_3743_);
lean_inc(v_snapshotTasks_3742_);
lean_inc(v_traceState_3732_);
lean_inc(v_infoState_3741_);
lean_inc(v_auxDeclNGen_3740_);
lean_inc(v_ngen_3739_);
lean_inc(v_maxRecDepth_3738_);
lean_inc(v_nextMacroScope_3737_);
lean_inc(v_usedQuotCtxts_3736_);
lean_inc(v_scopes_3735_);
lean_inc(v_messages_3734_);
lean_inc(v_env_3733_);
lean_dec(v___x_3731_);
v___x_3746_ = lean_box(0);
v_isShared_3747_ = v_isSharedCheck_3774_;
goto v_resetjp_3745_;
}
v_resetjp_3745_:
{
uint64_t v_tid_3748_; lean_object* v_traces_3749_; lean_object* v___x_3751_; uint8_t v_isShared_3752_; uint8_t v_isSharedCheck_3773_; 
v_tid_3748_ = lean_ctor_get_uint64(v_traceState_3732_, sizeof(void*)*1);
v_traces_3749_ = lean_ctor_get(v_traceState_3732_, 0);
v_isSharedCheck_3773_ = !lean_is_exclusive(v_traceState_3732_);
if (v_isSharedCheck_3773_ == 0)
{
v___x_3751_ = v_traceState_3732_;
v_isShared_3752_ = v_isSharedCheck_3773_;
goto v_resetjp_3750_;
}
else
{
lean_inc(v_traces_3749_);
lean_dec(v_traceState_3732_);
v___x_3751_ = lean_box(0);
v_isShared_3752_ = v_isSharedCheck_3773_;
goto v_resetjp_3750_;
}
v_resetjp_3750_:
{
lean_object* v___x_3753_; lean_object* v___x_3754_; double v___x_3755_; uint8_t v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3764_; 
v___x_3753_ = lean_box(0);
v___x_3754_ = lean_box(0);
v___x_3755_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0);
v___x_3756_ = 0;
v___x_3757_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0));
v___x_3758_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3758_, 0, v_cls_3719_);
lean_ctor_set(v___x_3758_, 1, v___x_3754_);
lean_ctor_set(v___x_3758_, 2, v___x_3757_);
lean_ctor_set_float(v___x_3758_, sizeof(void*)*3, v___x_3755_);
lean_ctor_set_float(v___x_3758_, sizeof(void*)*3 + 8, v___x_3755_);
lean_ctor_set_uint8(v___x_3758_, sizeof(void*)*3 + 16, v___x_3756_);
v___x_3759_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1));
v___x_3760_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3758_);
lean_ctor_set(v___x_3760_, 1, v_a_3727_);
lean_ctor_set(v___x_3760_, 2, v___x_3759_);
v___x_3761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3761_, 0, v_a_3725_);
lean_ctor_set(v___x_3761_, 1, v___x_3760_);
v___x_3762_ = l_Lean_PersistentArray_push___redArg(v_traces_3749_, v___x_3761_);
if (v_isShared_3752_ == 0)
{
lean_ctor_set(v___x_3751_, 0, v___x_3762_);
v___x_3764_ = v___x_3751_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3772_; 
v_reuseFailAlloc_3772_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3772_, 0, v___x_3762_);
lean_ctor_set_uint64(v_reuseFailAlloc_3772_, sizeof(void*)*1, v_tid_3748_);
v___x_3764_ = v_reuseFailAlloc_3772_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
lean_object* v___x_3766_; 
if (v_isShared_3747_ == 0)
{
lean_ctor_set(v___x_3746_, 9, v___x_3764_);
v___x_3766_ = v___x_3746_;
goto v_reusejp_3765_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_env_3733_);
lean_ctor_set(v_reuseFailAlloc_3771_, 1, v_messages_3734_);
lean_ctor_set(v_reuseFailAlloc_3771_, 2, v_scopes_3735_);
lean_ctor_set(v_reuseFailAlloc_3771_, 3, v_usedQuotCtxts_3736_);
lean_ctor_set(v_reuseFailAlloc_3771_, 4, v_nextMacroScope_3737_);
lean_ctor_set(v_reuseFailAlloc_3771_, 5, v_maxRecDepth_3738_);
lean_ctor_set(v_reuseFailAlloc_3771_, 6, v_ngen_3739_);
lean_ctor_set(v_reuseFailAlloc_3771_, 7, v_auxDeclNGen_3740_);
lean_ctor_set(v_reuseFailAlloc_3771_, 8, v_infoState_3741_);
lean_ctor_set(v_reuseFailAlloc_3771_, 9, v___x_3764_);
lean_ctor_set(v_reuseFailAlloc_3771_, 10, v_snapshotTasks_3742_);
lean_ctor_set(v_reuseFailAlloc_3771_, 11, v_prevLinterStates_3743_);
lean_ctor_set(v_reuseFailAlloc_3771_, 12, v_codeQualityEntryTasks_3744_);
v___x_3766_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3765_;
}
v_reusejp_3765_:
{
lean_object* v___x_3767_; lean_object* v___x_3769_; 
v___x_3767_ = lean_st_ref_put(v___y_3722_, v___x_3766_);
if (v_isShared_3730_ == 0)
{
lean_ctor_set(v___x_3729_, 0, v___x_3753_);
v___x_3769_ = v___x_3729_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3753_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3783_; 
lean_dec_ref(v_msg_3720_);
lean_dec(v_cls_3719_);
v_a_3776_ = lean_ctor_get(v___x_3724_, 0);
v_isSharedCheck_3783_ = !lean_is_exclusive(v___x_3724_);
if (v_isSharedCheck_3783_ == 0)
{
v___x_3778_ = v___x_3724_;
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_a_3776_);
lean_dec(v___x_3724_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3783_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3781_; 
if (v_isShared_3779_ == 0)
{
v___x_3781_ = v___x_3778_;
goto v_reusejp_3780_;
}
else
{
lean_object* v_reuseFailAlloc_3782_; 
v_reuseFailAlloc_3782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3782_, 0, v_a_3776_);
v___x_3781_ = v_reuseFailAlloc_3782_;
goto v_reusejp_3780_;
}
v_reusejp_3780_:
{
return v___x_3781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___boxed(lean_object* v_cls_3784_, lean_object* v_msg_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3784_, v_msg_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
return v_res_3789_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0(void){
_start:
{
lean_object* v___x_3790_; 
v___x_3790_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3790_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4(void){
_start:
{
lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3795_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3));
v___x_3796_ = l_Lean_stringToMessageData(v___x_3795_);
return v___x_3796_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6(void){
_start:
{
lean_object* v___x_3798_; lean_object* v___x_3799_; 
v___x_3798_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5));
v___x_3799_ = l_Lean_stringToMessageData(v___x_3798_);
return v___x_3799_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7(void){
_start:
{
lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3800_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0));
v___x_3801_ = l_Lean_stringToMessageData(v___x_3800_);
return v___x_3801_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9(void){
_start:
{
lean_object* v_cls_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; 
v_cls_3804_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3805_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
v___x_3806_ = l_Lean_Name_append(v___x_3805_, v_cls_3804_);
return v___x_3806_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11(void){
_start:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; 
v___x_3808_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10));
v___x_3809_ = l_Lean_stringToMessageData(v___x_3808_);
return v___x_3809_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13(void){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12));
v___x_3812_ = l_Lean_stringToMessageData(v___x_3811_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(lean_object* v_mod_3817_, uint8_t v_isMeta_3818_, lean_object* v_hint_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v_env_3825_; uint8_t v_isExporting_3826_; lean_object* v_entry_3827_; lean_object* v___x_3828_; lean_object* v_env_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___y_3834_; lean_object* v___x_3862_; uint8_t v___x_3863_; 
v___x_3823_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0);
v___x_3824_ = lean_st_ref_get(v___y_3821_);
v_env_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc_ref(v_env_3825_);
lean_dec(v___x_3824_);
v_isExporting_3826_ = lean_ctor_get_uint8(v_env_3825_, sizeof(void*)*8);
lean_dec_ref(v_env_3825_);
lean_inc(v_mod_3817_);
v_entry_3827_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3827_, 0, v_mod_3817_);
lean_ctor_set_uint8(v_entry_3827_, sizeof(void*)*1, v_isExporting_3826_);
lean_ctor_set_uint8(v_entry_3827_, sizeof(void*)*1 + 1, v_isMeta_3818_);
v___x_3828_ = lean_st_ref_get(v___y_3821_);
v_env_3829_ = lean_ctor_get(v___x_3828_, 0);
lean_inc_ref(v_env_3829_);
lean_dec(v___x_3828_);
v___x_3830_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3831_ = lean_box(1);
v___x_3832_ = lean_box(0);
v___x_3862_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3823_, v___x_3830_, v_env_3829_, v___x_3831_, v___x_3832_);
v___x_3863_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v___x_3862_, v_entry_3827_);
lean_dec(v___x_3862_);
if (v___x_3863_ == 0)
{
lean_object* v_cls_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___y_3870_; lean_object* v___y_3871_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v_scopes_3888_; lean_object* v___x_3889_; lean_object* v_opts_3890_; uint8_t v_hasTrace_3891_; 
v_cls_3864_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3865_ = l_Lean_inheritedTraceOptions;
v___x_3866_ = lean_st_ref_get(v___x_3865_);
v___x_3867_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3868_ = lean_st_ref_get(v___y_3821_);
v_scopes_3888_ = lean_ctor_get(v___x_3868_, 2);
lean_inc(v_scopes_3888_);
lean_dec(v___x_3868_);
v___x_3889_ = l_List_head_x21___redArg(v___x_3867_, v_scopes_3888_);
lean_dec(v_scopes_3888_);
v_opts_3890_ = lean_ctor_get(v___x_3889_, 1);
lean_inc_ref(v_opts_3890_);
lean_dec(v___x_3889_);
v_hasTrace_3891_ = lean_ctor_get_uint8(v_opts_3890_, sizeof(void*)*1);
if (v_hasTrace_3891_ == 0)
{
lean_dec_ref(v_opts_3890_);
lean_dec(v___x_3866_);
lean_dec(v_hint_3819_);
lean_dec(v_mod_3817_);
v___y_3834_ = v___y_3821_;
goto v___jp_3833_;
}
else
{
lean_object* v___x_3892_; uint8_t v___x_3893_; 
v___x_3892_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9);
v___x_3893_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3866_, v_opts_3890_, v___x_3892_);
lean_dec_ref(v_opts_3890_);
lean_dec(v___x_3866_);
if (v___x_3893_ == 0)
{
lean_dec(v_hint_3819_);
lean_dec(v_mod_3817_);
v___y_3834_ = v___y_3821_;
goto v___jp_3833_;
}
else
{
lean_object* v___x_3894_; lean_object* v___y_3896_; 
v___x_3894_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11);
if (v_isExporting_3826_ == 0)
{
lean_object* v___x_3903_; 
v___x_3903_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16));
v___y_3896_ = v___x_3903_;
goto v___jp_3895_;
}
else
{
lean_object* v___x_3904_; 
v___x_3904_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17));
v___y_3896_ = v___x_3904_;
goto v___jp_3895_;
}
v___jp_3895_:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; 
lean_inc_ref(v___y_3896_);
v___x_3897_ = l_Lean_stringToMessageData(v___y_3896_);
v___x_3898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3894_);
lean_ctor_set(v___x_3898_, 1, v___x_3897_);
v___x_3899_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13);
v___x_3900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3900_, 0, v___x_3898_);
lean_ctor_set(v___x_3900_, 1, v___x_3899_);
if (v_isMeta_3818_ == 0)
{
lean_object* v___x_3901_; 
v___x_3901_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14));
v___y_3875_ = v___x_3900_;
v___y_3876_ = v___x_3901_;
goto v___jp_3874_;
}
else
{
lean_object* v___x_3902_; 
v___x_3902_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15));
v___y_3875_ = v___x_3900_;
v___y_3876_ = v___x_3902_;
goto v___jp_3874_;
}
}
}
}
v___jp_3869_:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; 
v___x_3872_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3872_, 0, v___y_3870_);
lean_ctor_set(v___x_3872_, 1, v___y_3871_);
v___x_3873_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3864_, v___x_3872_, v___y_3820_, v___y_3821_);
if (lean_obj_tag(v___x_3873_) == 0)
{
lean_dec_ref_known(v___x_3873_, 1);
v___y_3834_ = v___y_3821_;
goto v___jp_3833_;
}
else
{
lean_dec_ref_known(v_entry_3827_, 1);
return v___x_3873_;
}
}
v___jp_3874_:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; uint8_t v___x_3883_; 
lean_inc_ref(v___y_3876_);
v___x_3877_ = l_Lean_stringToMessageData(v___y_3876_);
v___x_3878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3878_, 0, v___y_3875_);
lean_ctor_set(v___x_3878_, 1, v___x_3877_);
v___x_3879_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4);
v___x_3880_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3878_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
v___x_3881_ = l_Lean_MessageData_ofName(v_mod_3817_);
v___x_3882_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3880_);
lean_ctor_set(v___x_3882_, 1, v___x_3881_);
v___x_3883_ = l_Lean_Name_isAnonymous(v_hint_3819_);
if (v___x_3883_ == 0)
{
lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3884_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6);
v___x_3885_ = l_Lean_MessageData_ofName(v_hint_3819_);
v___x_3886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3884_);
lean_ctor_set(v___x_3886_, 1, v___x_3885_);
v___y_3870_ = v___x_3882_;
v___y_3871_ = v___x_3886_;
goto v___jp_3869_;
}
else
{
lean_object* v___x_3887_; 
lean_dec(v_hint_3819_);
v___x_3887_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7);
v___y_3870_ = v___x_3882_;
v___y_3871_ = v___x_3887_;
goto v___jp_3869_;
}
}
}
else
{
lean_object* v___x_3905_; lean_object* v___x_3906_; 
lean_dec_ref_known(v_entry_3827_, 1);
lean_dec(v_hint_3819_);
lean_dec(v_mod_3817_);
v___x_3905_ = lean_box(0);
v___x_3906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3905_);
return v___x_3906_;
}
v___jp_3833_:
{
lean_object* v___x_3835_; lean_object* v_toEnvExtension_3836_; lean_object* v_env_3837_; lean_object* v_messages_3838_; lean_object* v_scopes_3839_; lean_object* v_usedQuotCtxts_3840_; lean_object* v_nextMacroScope_3841_; lean_object* v_maxRecDepth_3842_; lean_object* v_ngen_3843_; lean_object* v_auxDeclNGen_3844_; lean_object* v_infoState_3845_; lean_object* v_traceState_3846_; lean_object* v_snapshotTasks_3847_; lean_object* v_prevLinterStates_3848_; lean_object* v_codeQualityEntryTasks_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3861_; 
v___x_3835_ = lean_st_ref_take(v___y_3834_);
v_toEnvExtension_3836_ = lean_ctor_get(v___x_3830_, 0);
v_env_3837_ = lean_ctor_get(v___x_3835_, 0);
v_messages_3838_ = lean_ctor_get(v___x_3835_, 1);
v_scopes_3839_ = lean_ctor_get(v___x_3835_, 2);
v_usedQuotCtxts_3840_ = lean_ctor_get(v___x_3835_, 3);
v_nextMacroScope_3841_ = lean_ctor_get(v___x_3835_, 4);
v_maxRecDepth_3842_ = lean_ctor_get(v___x_3835_, 5);
v_ngen_3843_ = lean_ctor_get(v___x_3835_, 6);
v_auxDeclNGen_3844_ = lean_ctor_get(v___x_3835_, 7);
v_infoState_3845_ = lean_ctor_get(v___x_3835_, 8);
v_traceState_3846_ = lean_ctor_get(v___x_3835_, 9);
v_snapshotTasks_3847_ = lean_ctor_get(v___x_3835_, 10);
v_prevLinterStates_3848_ = lean_ctor_get(v___x_3835_, 11);
v_codeQualityEntryTasks_3849_ = lean_ctor_get(v___x_3835_, 12);
v_isSharedCheck_3861_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3861_ == 0)
{
v___x_3851_ = v___x_3835_;
v_isShared_3852_ = v_isSharedCheck_3861_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3849_);
lean_inc(v_prevLinterStates_3848_);
lean_inc(v_snapshotTasks_3847_);
lean_inc(v_traceState_3846_);
lean_inc(v_infoState_3845_);
lean_inc(v_auxDeclNGen_3844_);
lean_inc(v_ngen_3843_);
lean_inc(v_maxRecDepth_3842_);
lean_inc(v_nextMacroScope_3841_);
lean_inc(v_usedQuotCtxts_3840_);
lean_inc(v_scopes_3839_);
lean_inc(v_messages_3838_);
lean_inc(v_env_3837_);
lean_dec(v___x_3835_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3861_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v_asyncMode_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3857_; 
v_asyncMode_3853_ = lean_ctor_get(v_toEnvExtension_3836_, 2);
v___x_3854_ = lean_box(0);
v___x_3855_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3830_, v_env_3837_, v_entry_3827_, v_asyncMode_3853_, v___x_3832_);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 0, v___x_3855_);
v___x_3857_ = v___x_3851_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v___x_3855_);
lean_ctor_set(v_reuseFailAlloc_3860_, 1, v_messages_3838_);
lean_ctor_set(v_reuseFailAlloc_3860_, 2, v_scopes_3839_);
lean_ctor_set(v_reuseFailAlloc_3860_, 3, v_usedQuotCtxts_3840_);
lean_ctor_set(v_reuseFailAlloc_3860_, 4, v_nextMacroScope_3841_);
lean_ctor_set(v_reuseFailAlloc_3860_, 5, v_maxRecDepth_3842_);
lean_ctor_set(v_reuseFailAlloc_3860_, 6, v_ngen_3843_);
lean_ctor_set(v_reuseFailAlloc_3860_, 7, v_auxDeclNGen_3844_);
lean_ctor_set(v_reuseFailAlloc_3860_, 8, v_infoState_3845_);
lean_ctor_set(v_reuseFailAlloc_3860_, 9, v_traceState_3846_);
lean_ctor_set(v_reuseFailAlloc_3860_, 10, v_snapshotTasks_3847_);
lean_ctor_set(v_reuseFailAlloc_3860_, 11, v_prevLinterStates_3848_);
lean_ctor_set(v_reuseFailAlloc_3860_, 12, v_codeQualityEntryTasks_3849_);
v___x_3857_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
lean_object* v___x_3858_; lean_object* v___x_3859_; 
v___x_3858_ = lean_st_ref_put(v___y_3834_, v___x_3857_);
v___x_3859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3854_);
return v___x_3859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___boxed(lean_object* v_mod_3907_, lean_object* v_isMeta_3908_, lean_object* v_hint_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_){
_start:
{
uint8_t v_isMeta_boxed_3913_; lean_object* v_res_3914_; 
v_isMeta_boxed_3913_ = lean_unbox(v_isMeta_3908_);
v_res_3914_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_mod_3907_, v_isMeta_boxed_3913_, v_hint_3909_, v___y_3910_, v___y_3911_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
return v_res_3914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(lean_object* v___x_3915_, lean_object* v_declName_3916_, lean_object* v_as_3917_, size_t v_sz_3918_, size_t v_i_3919_, lean_object* v_b_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_){
_start:
{
uint8_t v___x_3924_; 
v___x_3924_ = lean_usize_dec_lt(v_i_3919_, v_sz_3918_);
if (v___x_3924_ == 0)
{
lean_object* v___x_3925_; 
lean_dec(v_declName_3916_);
v___x_3925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3925_, 0, v_b_3920_);
return v___x_3925_;
}
else
{
lean_object* v___x_3926_; lean_object* v_modules_3927_; lean_object* v___x_3928_; lean_object* v_a_3929_; lean_object* v___x_3930_; lean_object* v_toImport_3931_; lean_object* v_module_3932_; lean_object* v___x_3933_; uint8_t v___x_3934_; lean_object* v___x_3935_; 
v___x_3926_ = l_Lean_Environment_header(v___x_3915_);
v_modules_3927_ = lean_ctor_get(v___x_3926_, 3);
lean_inc_ref(v_modules_3927_);
lean_dec_ref(v___x_3926_);
v___x_3928_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3929_ = lean_array_uget_borrowed(v_as_3917_, v_i_3919_);
v___x_3930_ = lean_array_get(v___x_3928_, v_modules_3927_, v_a_3929_);
lean_dec_ref(v_modules_3927_);
v_toImport_3931_ = lean_ctor_get(v___x_3930_, 0);
lean_inc_ref(v_toImport_3931_);
lean_dec(v___x_3930_);
v_module_3932_ = lean_ctor_get(v_toImport_3931_, 0);
lean_inc(v_module_3932_);
lean_dec_ref(v_toImport_3931_);
v___x_3933_ = lean_box(0);
v___x_3934_ = 0;
lean_inc(v_declName_3916_);
v___x_3935_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_3932_, v___x_3934_, v_declName_3916_, v___y_3921_, v___y_3922_);
if (lean_obj_tag(v___x_3935_) == 0)
{
size_t v___x_3936_; size_t v___x_3937_; 
lean_dec_ref_known(v___x_3935_, 1);
v___x_3936_ = ((size_t)1ULL);
v___x_3937_ = lean_usize_add(v_i_3919_, v___x_3936_);
v_i_3919_ = v___x_3937_;
v_b_3920_ = v___x_3933_;
goto _start;
}
else
{
lean_dec(v_declName_3916_);
return v___x_3935_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55___boxed(lean_object* v___x_3939_, lean_object* v_declName_3940_, lean_object* v_as_3941_, lean_object* v_sz_3942_, lean_object* v_i_3943_, lean_object* v_b_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
size_t v_sz_boxed_3948_; size_t v_i_boxed_3949_; lean_object* v_res_3950_; 
v_sz_boxed_3948_ = lean_unbox_usize(v_sz_3942_);
lean_dec(v_sz_3942_);
v_i_boxed_3949_ = lean_unbox_usize(v_i_3943_);
lean_dec(v_i_3943_);
v_res_3950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v___x_3939_, v_declName_3940_, v_as_3941_, v_sz_boxed_3948_, v_i_boxed_3949_, v_b_3944_, v___y_3945_, v___y_3946_);
lean_dec(v___y_3946_);
lean_dec_ref(v___y_3945_);
lean_dec_ref(v_as_3941_);
lean_dec_ref(v___x_3939_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(lean_object* v_a_3951_, lean_object* v_x_3952_){
_start:
{
if (lean_obj_tag(v_x_3952_) == 0)
{
lean_object* v___x_3953_; 
v___x_3953_ = lean_box(0);
return v___x_3953_;
}
else
{
lean_object* v_key_3954_; lean_object* v_value_3955_; lean_object* v_tail_3956_; uint8_t v___x_3957_; 
v_key_3954_ = lean_ctor_get(v_x_3952_, 0);
v_value_3955_ = lean_ctor_get(v_x_3952_, 1);
v_tail_3956_ = lean_ctor_get(v_x_3952_, 2);
v___x_3957_ = lean_name_eq(v_key_3954_, v_a_3951_);
if (v___x_3957_ == 0)
{
v_x_3952_ = v_tail_3956_;
goto _start;
}
else
{
lean_object* v___x_3959_; 
lean_inc(v_value_3955_);
v___x_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3959_, 0, v_value_3955_);
return v___x_3959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg___boxed(lean_object* v_a_3960_, lean_object* v_x_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3960_, v_x_3961_);
lean_dec(v_x_3961_);
lean_dec(v_a_3960_);
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(lean_object* v_m_3963_, lean_object* v_a_3964_){
_start:
{
lean_object* v_buckets_3965_; lean_object* v___x_3966_; uint64_t v___y_3968_; 
v_buckets_3965_ = lean_ctor_get(v_m_3963_, 1);
v___x_3966_ = lean_array_get_size(v_buckets_3965_);
if (lean_obj_tag(v_a_3964_) == 0)
{
uint64_t v___x_3982_; 
v___x_3982_ = 1723ULL;
v___y_3968_ = v___x_3982_;
goto v___jp_3967_;
}
else
{
uint64_t v_hash_3983_; 
v_hash_3983_ = lean_ctor_get_uint64(v_a_3964_, sizeof(void*)*2);
v___y_3968_ = v_hash_3983_;
goto v___jp_3967_;
}
v___jp_3967_:
{
uint64_t v___x_3969_; uint64_t v___x_3970_; uint64_t v_fold_3971_; uint64_t v___x_3972_; uint64_t v___x_3973_; uint64_t v___x_3974_; size_t v___x_3975_; size_t v___x_3976_; size_t v___x_3977_; size_t v___x_3978_; size_t v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
v___x_3969_ = 32ULL;
v___x_3970_ = lean_uint64_shift_right(v___y_3968_, v___x_3969_);
v_fold_3971_ = lean_uint64_xor(v___y_3968_, v___x_3970_);
v___x_3972_ = 16ULL;
v___x_3973_ = lean_uint64_shift_right(v_fold_3971_, v___x_3972_);
v___x_3974_ = lean_uint64_xor(v_fold_3971_, v___x_3973_);
v___x_3975_ = lean_uint64_to_usize(v___x_3974_);
v___x_3976_ = lean_usize_of_nat(v___x_3966_);
v___x_3977_ = ((size_t)1ULL);
v___x_3978_ = lean_usize_sub(v___x_3976_, v___x_3977_);
v___x_3979_ = lean_usize_land(v___x_3975_, v___x_3978_);
v___x_3980_ = lean_array_uget_borrowed(v_buckets_3965_, v___x_3979_);
v___x_3981_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3964_, v___x_3980_);
return v___x_3981_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg___boxed(lean_object* v_m_3984_, lean_object* v_a_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_3984_, v_a_3985_);
lean_dec(v_a_3985_);
lean_dec_ref(v_m_3984_);
return v_res_3986_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0(void){
_start:
{
lean_object* v___x_3987_; 
v___x_3987_ = l_Std_HashMap_instInhabited___redArg();
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(lean_object* v_declName_3990_, uint8_t v_isMeta_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; lean_object* v_env_4000_; lean_object* v___y_4002_; lean_object* v___x_4015_; 
v___x_3995_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0);
v___x_3996_ = lean_st_ref_get(v___y_3993_);
v_env_4000_ = lean_ctor_get(v___x_3996_, 0);
lean_inc_ref(v_env_4000_);
lean_dec(v___x_3996_);
v___x_4015_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4000_, v_declName_3990_);
if (lean_obj_tag(v___x_4015_) == 0)
{
lean_dec_ref(v_env_4000_);
lean_dec(v_declName_3990_);
goto v___jp_3997_;
}
else
{
lean_object* v_val_4016_; lean_object* v___x_4017_; lean_object* v_modules_4018_; lean_object* v___x_4019_; uint8_t v___x_4020_; 
v_val_4016_ = lean_ctor_get(v___x_4015_, 0);
lean_inc(v_val_4016_);
lean_dec_ref_known(v___x_4015_, 1);
v___x_4017_ = l_Lean_Environment_header(v_env_4000_);
v_modules_4018_ = lean_ctor_get(v___x_4017_, 3);
lean_inc_ref(v_modules_4018_);
lean_dec_ref(v___x_4017_);
v___x_4019_ = lean_array_get_size(v_modules_4018_);
v___x_4020_ = lean_nat_dec_lt(v_val_4016_, v___x_4019_);
if (v___x_4020_ == 0)
{
lean_dec_ref(v_modules_4018_);
lean_dec(v_val_4016_);
lean_dec_ref(v_env_4000_);
lean_dec(v_declName_3990_);
goto v___jp_3997_;
}
else
{
lean_object* v___x_4021_; lean_object* v___x_4022_; uint8_t v___y_4024_; 
v___x_4021_ = lean_array_fget(v_modules_4018_, v_val_4016_);
lean_dec(v_val_4016_);
lean_dec_ref(v_modules_4018_);
v___x_4022_ = lean_st_ref_get(v___y_3993_);
if (v_isMeta_3991_ == 0)
{
lean_dec(v___x_4022_);
v___y_4024_ = v_isMeta_3991_;
goto v___jp_4023_;
}
else
{
lean_object* v_env_4035_; uint8_t v___x_4036_; 
v_env_4035_ = lean_ctor_get(v___x_4022_, 0);
lean_inc_ref(v_env_4035_);
lean_dec(v___x_4022_);
lean_inc(v_declName_3990_);
v___x_4036_ = l_Lean_isMarkedMeta(v_env_4035_, v_declName_3990_);
if (v___x_4036_ == 0)
{
v___y_4024_ = v_isMeta_3991_;
goto v___jp_4023_;
}
else
{
uint8_t v___x_4037_; 
v___x_4037_ = 0;
v___y_4024_ = v___x_4037_;
goto v___jp_4023_;
}
}
v___jp_4023_:
{
lean_object* v_toImport_4025_; lean_object* v_module_4026_; lean_object* v___x_4027_; 
v_toImport_4025_ = lean_ctor_get(v___x_4021_, 0);
lean_inc_ref(v_toImport_4025_);
lean_dec(v___x_4021_);
v_module_4026_ = lean_ctor_get(v_toImport_4025_, 0);
lean_inc(v_module_4026_);
lean_dec_ref(v_toImport_4025_);
lean_inc(v_declName_3990_);
v___x_4027_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_4026_, v___y_4024_, v_declName_3990_, v___y_3992_, v___y_3993_);
if (lean_obj_tag(v___x_4027_) == 0)
{
lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
lean_dec_ref_known(v___x_4027_, 1);
v___x_4028_ = l_Lean_indirectModUseExt;
v___x_4029_ = lean_box(1);
v___x_4030_ = lean_box(0);
lean_inc_ref(v_env_4000_);
v___x_4031_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3995_, v___x_4028_, v_env_4000_, v___x_4029_, v___x_4030_);
v___x_4032_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v___x_4031_, v_declName_3990_);
lean_dec(v___x_4031_);
if (lean_obj_tag(v___x_4032_) == 0)
{
lean_object* v___x_4033_; 
v___x_4033_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1));
v___y_4002_ = v___x_4033_;
goto v___jp_4001_;
}
else
{
lean_object* v_val_4034_; 
v_val_4034_ = lean_ctor_get(v___x_4032_, 0);
lean_inc(v_val_4034_);
lean_dec_ref_known(v___x_4032_, 1);
v___y_4002_ = v_val_4034_;
goto v___jp_4001_;
}
}
else
{
lean_dec_ref(v_env_4000_);
lean_dec(v_declName_3990_);
return v___x_4027_;
}
}
}
}
v___jp_3997_:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3998_ = lean_box(0);
v___x_3999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3999_, 0, v___x_3998_);
return v___x_3999_;
}
v___jp_4001_:
{
lean_object* v___x_4003_; size_t v_sz_4004_; size_t v___x_4005_; lean_object* v___x_4006_; 
v___x_4003_ = lean_box(0);
v_sz_4004_ = lean_array_size(v___y_4002_);
v___x_4005_ = ((size_t)0ULL);
v___x_4006_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v_env_4000_, v_declName_3990_, v___y_4002_, v_sz_4004_, v___x_4005_, v___x_4003_, v___y_3992_, v___y_3993_);
lean_dec_ref(v___y_4002_);
lean_dec_ref(v_env_4000_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v___x_4008_; uint8_t v_isShared_4009_; uint8_t v_isSharedCheck_4013_; 
v_isSharedCheck_4013_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4013_ == 0)
{
lean_object* v_unused_4014_; 
v_unused_4014_ = lean_ctor_get(v___x_4006_, 0);
lean_dec(v_unused_4014_);
v___x_4008_ = v___x_4006_;
v_isShared_4009_ = v_isSharedCheck_4013_;
goto v_resetjp_4007_;
}
else
{
lean_dec(v___x_4006_);
v___x_4008_ = lean_box(0);
v_isShared_4009_ = v_isSharedCheck_4013_;
goto v_resetjp_4007_;
}
v_resetjp_4007_:
{
lean_object* v___x_4011_; 
if (v_isShared_4009_ == 0)
{
lean_ctor_set(v___x_4008_, 0, v___x_4003_);
v___x_4011_ = v___x_4008_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4012_; 
v_reuseFailAlloc_4012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4012_, 0, v___x_4003_);
v___x_4011_ = v_reuseFailAlloc_4012_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
return v___x_4011_;
}
}
}
else
{
return v___x_4006_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___boxed(lean_object* v_declName_4038_, lean_object* v_isMeta_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
uint8_t v_isMeta_boxed_4043_; lean_object* v_res_4044_; 
v_isMeta_boxed_4043_ = lean_unbox(v_isMeta_4039_);
v_res_4044_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_declName_4038_, v_isMeta_boxed_4043_, v___y_4040_, v___y_4041_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
return v_res_4044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(lean_object* v_currNamespace_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_){
_start:
{
lean_object* v___x_4048_; 
v___x_4048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4048_, 0, v_currNamespace_4045_);
lean_ctor_set(v___x_4048_, 1, v___y_4047_);
return v___x_4048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed(lean_object* v_currNamespace_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v_res_4052_; 
v_res_4052_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(v_currNamespace_4049_, v___y_4050_, v___y_4051_);
lean_dec_ref(v___y_4050_);
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(lean_object* v_env_4053_, lean_object* v_declName_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_){
_start:
{
uint8_t v___x_4057_; lean_object* v_env_4058_; lean_object* v___x_4059_; uint8_t v___x_4060_; uint8_t v___x_4061_; 
v___x_4057_ = 0;
v_env_4058_ = l_Lean_Environment_setExporting(v_env_4053_, v___x_4057_);
lean_inc(v_declName_4054_);
v___x_4059_ = l_Lean_mkPrivateName(v_env_4058_, v_declName_4054_);
v___x_4060_ = 1;
lean_inc_ref(v_env_4058_);
v___x_4061_ = l_Lean_Environment_contains(v_env_4058_, v___x_4059_, v___x_4060_);
if (v___x_4061_ == 0)
{
lean_object* v___x_4062_; uint8_t v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4062_ = l_Lean_privateToUserName(v_declName_4054_);
v___x_4063_ = l_Lean_Environment_contains(v_env_4058_, v___x_4062_, v___x_4060_);
v___x_4064_ = lean_box(v___x_4063_);
v___x_4065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
lean_ctor_set(v___x_4065_, 1, v___y_4056_);
return v___x_4065_;
}
else
{
lean_object* v___x_4066_; lean_object* v___x_4067_; 
lean_dec_ref(v_env_4058_);
lean_dec(v_declName_4054_);
v___x_4066_ = lean_box(v___x_4061_);
v___x_4067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4067_, 0, v___x_4066_);
lean_ctor_set(v___x_4067_, 1, v___y_4056_);
return v___x_4067_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed(lean_object* v_env_4068_, lean_object* v_declName_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_){
_start:
{
lean_object* v_res_4072_; 
v_res_4072_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(v_env_4068_, v_declName_4069_, v___y_4070_, v___y_4071_);
lean_dec_ref(v___y_4070_);
return v_res_4072_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0(void){
_start:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v___x_4073_ = lean_box(0);
v___x_4074_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4074_);
lean_ctor_set(v___x_4075_, 1, v___x_4073_);
return v___x_4075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg(){
_start:
{
lean_object* v___x_4077_; lean_object* v___x_4078_; 
v___x_4077_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0);
v___x_4078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4078_, 0, v___x_4077_);
return v___x_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___boxed(lean_object* v___y_4079_){
_start:
{
lean_object* v_res_4080_; 
v_res_4080_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v_res_4080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(lean_object* v_env_4081_, lean_object* v_opts_4082_, lean_object* v_currNamespace_4083_, lean_object* v_openDecls_4084_, lean_object* v_n_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v___x_4088_; lean_object* v___x_4089_; 
v___x_4088_ = l_Lean_ResolveName_resolveGlobalName(v_env_4081_, v_opts_4082_, v_currNamespace_4083_, v_openDecls_4084_, v_n_4085_);
v___x_4089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
lean_ctor_set(v___x_4089_, 1, v___y_4087_);
return v___x_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed(lean_object* v_env_4090_, lean_object* v_opts_4091_, lean_object* v_currNamespace_4092_, lean_object* v_openDecls_4093_, lean_object* v_n_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v_res_4097_; 
v_res_4097_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(v_env_4090_, v_opts_4091_, v_currNamespace_4092_, v_openDecls_4093_, v_n_4094_, v___y_4095_, v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec_ref(v_opts_4091_);
return v_res_4097_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(lean_object* v_as_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_){
_start:
{
if (lean_obj_tag(v_as_4098_) == 0)
{
lean_object* v___x_4102_; lean_object* v___x_4103_; 
v___x_4102_ = lean_box(0);
v___x_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4102_);
return v___x_4103_;
}
else
{
lean_object* v_head_4104_; lean_object* v_tail_4105_; lean_object* v_fst_4106_; lean_object* v_snd_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v_scopes_4112_; lean_object* v___x_4113_; lean_object* v_opts_4114_; uint8_t v_hasTrace_4115_; 
v_head_4104_ = lean_ctor_get(v_as_4098_, 0);
lean_inc(v_head_4104_);
v_tail_4105_ = lean_ctor_get(v_as_4098_, 1);
lean_inc(v_tail_4105_);
lean_dec_ref_known(v_as_4098_, 2);
v_fst_4106_ = lean_ctor_get(v_head_4104_, 0);
lean_inc(v_fst_4106_);
v_snd_4107_ = lean_ctor_get(v_head_4104_, 1);
lean_inc(v_snd_4107_);
lean_dec(v_head_4104_);
v___x_4108_ = l_Lean_inheritedTraceOptions;
v___x_4109_ = lean_st_ref_get(v___x_4108_);
v___x_4110_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4111_ = lean_st_ref_get(v___y_4100_);
v_scopes_4112_ = lean_ctor_get(v___x_4111_, 2);
lean_inc(v_scopes_4112_);
lean_dec(v___x_4111_);
v___x_4113_ = l_List_head_x21___redArg(v___x_4110_, v_scopes_4112_);
lean_dec(v_scopes_4112_);
v_opts_4114_ = lean_ctor_get(v___x_4113_, 1);
lean_inc_ref(v_opts_4114_);
lean_dec(v___x_4113_);
v_hasTrace_4115_ = lean_ctor_get_uint8(v_opts_4114_, sizeof(void*)*1);
if (v_hasTrace_4115_ == 0)
{
lean_dec_ref(v_opts_4114_);
lean_dec(v___x_4109_);
lean_dec(v_snd_4107_);
lean_dec(v_fst_4106_);
v_as_4098_ = v_tail_4105_;
goto _start;
}
else
{
lean_object* v___x_4117_; lean_object* v___x_4118_; uint8_t v___x_4119_; 
v___x_4117_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
lean_inc(v_fst_4106_);
v___x_4118_ = l_Lean_Name_append(v___x_4117_, v_fst_4106_);
v___x_4119_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4109_, v_opts_4114_, v___x_4118_);
lean_dec(v___x_4118_);
lean_dec_ref(v_opts_4114_);
lean_dec(v___x_4109_);
if (v___x_4119_ == 0)
{
lean_dec(v_snd_4107_);
lean_dec(v_fst_4106_);
v_as_4098_ = v_tail_4105_;
goto _start;
}
else
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; 
v___x_4121_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4121_, 0, v_snd_4107_);
v___x_4122_ = l_Lean_MessageData_ofFormat(v___x_4121_);
v___x_4123_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_fst_4106_, v___x_4122_, v___y_4099_, v___y_4100_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_dec_ref_known(v___x_4123_, 1);
v_as_4098_ = v_tail_4105_;
goto _start;
}
else
{
lean_dec(v_tail_4105_);
return v___x_4123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50___boxed(lean_object* v_as_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_){
_start:
{
lean_object* v_res_4129_; 
v_res_4129_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v_as_4125_, v___y_4126_, v___y_4127_);
lean_dec(v___y_4127_);
lean_dec_ref(v___y_4126_);
return v_res_4129_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(lean_object* v_x_4130_, lean_object* v___y_4131_){
_start:
{
if (lean_obj_tag(v_x_4130_) == 0)
{
lean_object* v_a_4132_; lean_object* v___x_4133_; 
v_a_4132_ = lean_ctor_get(v_x_4130_, 0);
lean_inc(v_a_4132_);
v___x_4133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4133_, 0, v_a_4132_);
lean_ctor_set(v___x_4133_, 1, v___y_4131_);
return v___x_4133_;
}
else
{
lean_object* v_a_4134_; lean_object* v___x_4135_; 
v_a_4134_ = lean_ctor_get(v_x_4130_, 0);
lean_inc(v_a_4134_);
v___x_4135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4135_, 0, v_a_4134_);
lean_ctor_set(v___x_4135_, 1, v___y_4131_);
return v___x_4135_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg___boxed(lean_object* v_x_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_4136_, v___y_4137_);
lean_dec_ref(v_x_4136_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(lean_object* v_env_4139_, lean_object* v_stx_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_){
_start:
{
lean_object* v___x_4143_; 
v___x_4143_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_4139_, v_stx_4140_, v___y_4141_, v___y_4142_);
if (lean_obj_tag(v___x_4143_) == 0)
{
lean_object* v_a_4144_; 
v_a_4144_ = lean_ctor_get(v___x_4143_, 0);
lean_inc(v_a_4144_);
if (lean_obj_tag(v_a_4144_) == 0)
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4153_; 
v_a_4145_ = lean_ctor_get(v___x_4143_, 1);
v_isSharedCheck_4153_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4153_ == 0)
{
lean_object* v_unused_4154_; 
v_unused_4154_ = lean_ctor_get(v___x_4143_, 0);
lean_dec(v_unused_4154_);
v___x_4147_ = v___x_4143_;
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v___x_4143_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4153_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4149_; lean_object* v___x_4151_; 
v___x_4149_ = lean_box(0);
if (v_isShared_4148_ == 0)
{
lean_ctor_set(v___x_4147_, 0, v___x_4149_);
v___x_4151_ = v___x_4147_;
goto v_reusejp_4150_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v___x_4149_);
lean_ctor_set(v_reuseFailAlloc_4152_, 1, v_a_4145_);
v___x_4151_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4150_;
}
v_reusejp_4150_:
{
return v___x_4151_;
}
}
}
else
{
lean_object* v_val_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4183_; 
v_val_4155_ = lean_ctor_get(v_a_4144_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v_a_4144_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4157_ = v_a_4144_;
v_isShared_4158_ = v_isSharedCheck_4183_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_val_4155_);
lean_dec(v_a_4144_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4183_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v_snd_4159_; 
v_snd_4159_ = lean_ctor_get(v_val_4155_, 1);
lean_inc(v_snd_4159_);
lean_dec(v_val_4155_);
if (lean_obj_tag(v_snd_4159_) == 0)
{
lean_object* v_a_4160_; lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4169_; 
lean_del_object(v___x_4157_);
v_a_4160_ = lean_ctor_get(v___x_4143_, 1);
lean_inc(v_a_4160_);
lean_dec_ref_known(v___x_4143_, 2);
v_a_4161_ = lean_ctor_get(v_snd_4159_, 0);
v_isSharedCheck_4169_ = !lean_is_exclusive(v_snd_4159_);
if (v_isSharedCheck_4169_ == 0)
{
v___x_4163_ = v_snd_4159_;
v_isShared_4164_ = v_isSharedCheck_4169_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v_snd_4159_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4169_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4166_; 
if (v_isShared_4164_ == 0)
{
v___x_4166_ = v___x_4163_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4168_; 
v_reuseFailAlloc_4168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4168_, 0, v_a_4161_);
v___x_4166_ = v_reuseFailAlloc_4168_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
lean_object* v___x_4167_; 
v___x_4167_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4166_, v_a_4160_);
lean_dec_ref(v___x_4166_);
return v___x_4167_;
}
}
}
else
{
lean_object* v_a_4170_; lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4182_; 
v_a_4170_ = lean_ctor_get(v___x_4143_, 1);
lean_inc(v_a_4170_);
lean_dec_ref_known(v___x_4143_, 2);
v_a_4171_ = lean_ctor_get(v_snd_4159_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v_snd_4159_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4173_ = v_snd_4159_;
v_isShared_4174_ = v_isSharedCheck_4182_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v_snd_4159_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4182_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4176_; 
if (v_isShared_4158_ == 0)
{
lean_ctor_set(v___x_4157_, 0, v_a_4171_);
v___x_4176_ = v___x_4157_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4171_);
v___x_4176_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
lean_object* v___x_4178_; 
if (v_isShared_4174_ == 0)
{
lean_ctor_set(v___x_4173_, 0, v___x_4176_);
v___x_4178_ = v___x_4173_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4180_; 
v_reuseFailAlloc_4180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4180_, 0, v___x_4176_);
v___x_4178_ = v_reuseFailAlloc_4180_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
lean_object* v___x_4179_; 
v___x_4179_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4178_, v_a_4170_);
lean_dec_ref(v___x_4178_);
return v___x_4179_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4184_; lean_object* v_a_4185_; lean_object* v___x_4187_; uint8_t v_isShared_4188_; uint8_t v_isSharedCheck_4192_; 
v_a_4184_ = lean_ctor_get(v___x_4143_, 0);
v_a_4185_ = lean_ctor_get(v___x_4143_, 1);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4143_);
if (v_isSharedCheck_4192_ == 0)
{
v___x_4187_ = v___x_4143_;
v_isShared_4188_ = v_isSharedCheck_4192_;
goto v_resetjp_4186_;
}
else
{
lean_inc(v_a_4185_);
lean_inc(v_a_4184_);
lean_dec(v___x_4143_);
v___x_4187_ = lean_box(0);
v_isShared_4188_ = v_isSharedCheck_4192_;
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
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v_a_4184_);
lean_ctor_set(v_reuseFailAlloc_4191_, 1, v_a_4185_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed(lean_object* v_env_4193_, lean_object* v_stx_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(v_env_4193_, v_stx_4194_, v___y_4195_, v___y_4196_);
lean_dec_ref(v___y_4195_);
return v_res_4197_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3(void){
_start:
{
lean_object* v___x_4203_; lean_object* v___x_4204_; 
v___x_4203_ = l_Lean_maxRecDepthErrorMessage;
v___x_4204_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4203_);
return v___x_4204_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4(void){
_start:
{
lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4205_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3);
v___x_4206_ = l_Lean_MessageData_ofFormat(v___x_4205_);
return v___x_4206_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5(void){
_start:
{
lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4207_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4);
v___x_4208_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2));
v___x_4209_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
lean_ctor_set(v___x_4209_, 1, v___x_4207_);
return v___x_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(lean_object* v_ref_4210_){
_start:
{
lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; 
v___x_4212_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5);
v___x_4213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4213_, 0, v_ref_4210_);
lean_ctor_set(v___x_4213_, 1, v___x_4212_);
v___x_4214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4213_);
return v___x_4214_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___boxed(lean_object* v_ref_4215_, lean_object* v___y_4216_){
_start:
{
lean_object* v_res_4217_; 
v_res_4217_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_4215_);
return v_res_4217_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(lean_object* v_as_x27_4218_, lean_object* v_b_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_){
_start:
{
if (lean_obj_tag(v_as_x27_4218_) == 0)
{
lean_object* v___x_4223_; 
v___x_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4223_, 0, v_b_4219_);
return v___x_4223_;
}
else
{
lean_object* v_head_4224_; lean_object* v_tail_4225_; lean_object* v___x_4226_; uint8_t v___x_4227_; lean_object* v___x_4228_; 
v_head_4224_ = lean_ctor_get(v_as_x27_4218_, 0);
v_tail_4225_ = lean_ctor_get(v_as_x27_4218_, 1);
v___x_4226_ = lean_box(0);
v___x_4227_ = 1;
lean_inc(v_head_4224_);
v___x_4228_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_head_4224_, v___x_4227_, v___y_4220_, v___y_4221_);
if (lean_obj_tag(v___x_4228_) == 0)
{
lean_dec_ref_known(v___x_4228_, 1);
v_as_x27_4218_ = v_tail_4225_;
v_b_4219_ = v___x_4226_;
goto _start;
}
else
{
return v___x_4228_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg___boxed(lean_object* v_as_x27_4230_, lean_object* v_b_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v_res_4235_; 
v_res_4235_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_4230_, v_b_4231_, v___y_4232_, v___y_4233_);
lean_dec(v___y_4233_);
lean_dec_ref(v___y_4232_);
lean_dec(v_as_x27_4230_);
return v_res_4235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(lean_object* v_env_4236_, lean_object* v_currNamespace_4237_, lean_object* v_openDecls_4238_, lean_object* v_n_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_){
_start:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4242_ = l_Lean_ResolveName_resolveNamespace(v_env_4236_, v_currNamespace_4237_, v_openDecls_4238_, v_n_4239_);
v___x_4243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
lean_ctor_set(v___x_4243_, 1, v___y_4241_);
return v___x_4243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed(lean_object* v_env_4244_, lean_object* v_currNamespace_4245_, lean_object* v_openDecls_4246_, lean_object* v_n_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v_res_4250_; 
v_res_4250_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(v_env_4244_, v_currNamespace_4245_, v_openDecls_4246_, v_n_4247_, v___y_4248_, v___y_4249_);
lean_dec_ref(v___y_4248_);
return v_res_4250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(lean_object* v_x_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_){
_start:
{
lean_object* v___x_4256_; lean_object* v_env_4257_; lean_object* v___f_4258_; lean_object* v___f_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v_scopes_4262_; lean_object* v___x_4263_; lean_object* v_opts_4264_; lean_object* v___x_4265_; 
v___x_4256_ = lean_st_ref_get(v___y_4254_);
v_env_4257_ = lean_ctor_get(v___x_4256_, 0);
lean_inc_ref_n(v_env_4257_, 3);
lean_dec(v___x_4256_);
v___f_4258_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_4258_, 0, v_env_4257_);
v___f_4259_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_4259_, 0, v_env_4257_);
v___x_4260_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4261_ = lean_st_ref_get(v___y_4254_);
v_scopes_4262_ = lean_ctor_get(v___x_4261_, 2);
lean_inc(v_scopes_4262_);
lean_dec(v___x_4261_);
v___x_4263_ = l_List_head_x21___redArg(v___x_4260_, v_scopes_4262_);
lean_dec(v_scopes_4262_);
v_opts_4264_ = lean_ctor_get(v___x_4263_, 1);
lean_inc_ref(v_opts_4264_);
lean_dec(v___x_4263_);
v___x_4265_ = l_Lean_Elab_Command_getScope___redArg(v___y_4254_);
if (lean_obj_tag(v___x_4265_) == 0)
{
lean_object* v_a_4266_; lean_object* v_currNamespace_4267_; lean_object* v___f_4268_; lean_object* v___x_4269_; 
v_a_4266_ = lean_ctor_get(v___x_4265_, 0);
lean_inc(v_a_4266_);
lean_dec_ref_known(v___x_4265_, 1);
v_currNamespace_4267_ = lean_ctor_get(v_a_4266_, 2);
lean_inc_n(v_currNamespace_4267_, 2);
lean_dec(v_a_4266_);
v___f_4268_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4268_, 0, v_currNamespace_4267_);
v___x_4269_ = l_Lean_Elab_Command_getScope___redArg(v___y_4254_);
if (lean_obj_tag(v___x_4269_) == 0)
{
lean_object* v_a_4270_; lean_object* v_openDecls_4271_; lean_object* v___f_4272_; lean_object* v___f_4273_; lean_object* v_methods_4274_; lean_object* v___x_4275_; 
v_a_4270_ = lean_ctor_get(v___x_4269_, 0);
lean_inc(v_a_4270_);
lean_dec_ref_known(v___x_4269_, 1);
v_openDecls_4271_ = lean_ctor_get(v_a_4270_, 3);
lean_inc_n(v_openDecls_4271_, 2);
lean_dec(v_a_4270_);
lean_inc(v_currNamespace_4267_);
lean_inc_ref(v_env_4257_);
v___f_4272_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_4272_, 0, v_env_4257_);
lean_closure_set(v___f_4272_, 1, v_currNamespace_4267_);
lean_closure_set(v___f_4272_, 2, v_openDecls_4271_);
v___f_4273_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_4273_, 0, v_env_4257_);
lean_closure_set(v___f_4273_, 1, v_opts_4264_);
lean_closure_set(v___f_4273_, 2, v_currNamespace_4267_);
lean_closure_set(v___f_4273_, 3, v_openDecls_4271_);
v_methods_4274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_4274_, 0, v___f_4259_);
lean_ctor_set(v_methods_4274_, 1, v___f_4268_);
lean_ctor_set(v_methods_4274_, 2, v___f_4258_);
lean_ctor_set(v_methods_4274_, 3, v___f_4272_);
lean_ctor_set(v_methods_4274_, 4, v___f_4273_);
v___x_4275_ = l_Lean_Elab_Command_getRef___redArg(v___y_4253_);
if (lean_obj_tag(v___x_4275_) == 0)
{
lean_object* v_a_4276_; lean_object* v___x_4277_; 
v_a_4276_ = lean_ctor_get(v___x_4275_, 0);
lean_inc(v_a_4276_);
lean_dec_ref_known(v___x_4275_, 1);
v___x_4277_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_4253_);
if (lean_obj_tag(v___x_4277_) == 0)
{
lean_object* v_a_4278_; lean_object* v_currRecDepth_4279_; lean_object* v_quotContext_x3f_4280_; lean_object* v_a_4282_; 
v_a_4278_ = lean_ctor_get(v___x_4277_, 0);
lean_inc(v_a_4278_);
lean_dec_ref_known(v___x_4277_, 1);
v_currRecDepth_4279_ = lean_ctor_get(v___y_4253_, 2);
v_quotContext_x3f_4280_ = lean_ctor_get(v___y_4253_, 5);
if (lean_obj_tag(v_quotContext_x3f_4280_) == 0)
{
lean_object* v___x_4356_; lean_object* v_a_4357_; 
v___x_4356_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_4254_);
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_a_4357_);
lean_dec_ref(v___x_4356_);
v_a_4282_ = v_a_4357_;
goto v___jp_4281_;
}
else
{
lean_object* v_val_4358_; 
v_val_4358_ = lean_ctor_get(v_quotContext_x3f_4280_, 0);
lean_inc(v_val_4358_);
v_a_4282_ = v_val_4358_;
goto v___jp_4281_;
}
v___jp_4281_:
{
lean_object* v___x_4283_; lean_object* v_maxRecDepth_4284_; lean_object* v___x_4285_; lean_object* v_nextMacroScope_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; 
v___x_4283_ = lean_st_ref_get(v___y_4254_);
v_maxRecDepth_4284_ = lean_ctor_get(v___x_4283_, 5);
lean_inc(v_maxRecDepth_4284_);
lean_dec(v___x_4283_);
v___x_4285_ = lean_st_ref_get(v___y_4254_);
v_nextMacroScope_4286_ = lean_ctor_get(v___x_4285_, 4);
lean_inc(v_nextMacroScope_4286_);
lean_dec(v___x_4285_);
lean_inc(v_currRecDepth_4279_);
v___x_4287_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4287_, 0, v_methods_4274_);
lean_ctor_set(v___x_4287_, 1, v_a_4282_);
lean_ctor_set(v___x_4287_, 2, v_a_4278_);
lean_ctor_set(v___x_4287_, 3, v_currRecDepth_4279_);
lean_ctor_set(v___x_4287_, 4, v_maxRecDepth_4284_);
lean_ctor_set(v___x_4287_, 5, v_a_4276_);
v___x_4288_ = lean_box(0);
v___x_4289_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4289_, 0, v_nextMacroScope_4286_);
lean_ctor_set(v___x_4289_, 1, v___x_4288_);
lean_ctor_set(v___x_4289_, 2, v___x_4288_);
v___x_4290_ = lean_apply_2(v_x_4252_, v___x_4287_, v___x_4289_);
if (lean_obj_tag(v___x_4290_) == 0)
{
lean_object* v_a_4291_; lean_object* v_a_4292_; lean_object* v_macroScope_4293_; lean_object* v_traceMsgs_4294_; lean_object* v_expandedMacroDecls_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; 
v_a_4291_ = lean_ctor_get(v___x_4290_, 1);
lean_inc(v_a_4291_);
v_a_4292_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_a_4292_);
lean_dec_ref_known(v___x_4290_, 2);
v_macroScope_4293_ = lean_ctor_get(v_a_4291_, 0);
lean_inc(v_macroScope_4293_);
v_traceMsgs_4294_ = lean_ctor_get(v_a_4291_, 1);
lean_inc(v_traceMsgs_4294_);
v_expandedMacroDecls_4295_ = lean_ctor_get(v_a_4291_, 2);
lean_inc(v_expandedMacroDecls_4295_);
lean_dec(v_a_4291_);
v___x_4296_ = lean_box(0);
v___x_4297_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_expandedMacroDecls_4295_, v___x_4296_, v___y_4253_, v___y_4254_);
lean_dec(v_expandedMacroDecls_4295_);
if (lean_obj_tag(v___x_4297_) == 0)
{
lean_object* v___x_4298_; lean_object* v_env_4299_; lean_object* v_messages_4300_; lean_object* v_scopes_4301_; lean_object* v_usedQuotCtxts_4302_; lean_object* v_maxRecDepth_4303_; lean_object* v_ngen_4304_; lean_object* v_auxDeclNGen_4305_; lean_object* v_infoState_4306_; lean_object* v_traceState_4307_; lean_object* v_snapshotTasks_4308_; lean_object* v_prevLinterStates_4309_; lean_object* v_codeQualityEntryTasks_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4336_; 
lean_dec_ref_known(v___x_4297_, 1);
v___x_4298_ = lean_st_ref_take(v___y_4254_);
v_env_4299_ = lean_ctor_get(v___x_4298_, 0);
v_messages_4300_ = lean_ctor_get(v___x_4298_, 1);
v_scopes_4301_ = lean_ctor_get(v___x_4298_, 2);
v_usedQuotCtxts_4302_ = lean_ctor_get(v___x_4298_, 3);
v_maxRecDepth_4303_ = lean_ctor_get(v___x_4298_, 5);
v_ngen_4304_ = lean_ctor_get(v___x_4298_, 6);
v_auxDeclNGen_4305_ = lean_ctor_get(v___x_4298_, 7);
v_infoState_4306_ = lean_ctor_get(v___x_4298_, 8);
v_traceState_4307_ = lean_ctor_get(v___x_4298_, 9);
v_snapshotTasks_4308_ = lean_ctor_get(v___x_4298_, 10);
v_prevLinterStates_4309_ = lean_ctor_get(v___x_4298_, 11);
v_codeQualityEntryTasks_4310_ = lean_ctor_get(v___x_4298_, 12);
v_isSharedCheck_4336_ = !lean_is_exclusive(v___x_4298_);
if (v_isSharedCheck_4336_ == 0)
{
lean_object* v_unused_4337_; 
v_unused_4337_ = lean_ctor_get(v___x_4298_, 4);
lean_dec(v_unused_4337_);
v___x_4312_ = v___x_4298_;
v_isShared_4313_ = v_isSharedCheck_4336_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4310_);
lean_inc(v_prevLinterStates_4309_);
lean_inc(v_snapshotTasks_4308_);
lean_inc(v_traceState_4307_);
lean_inc(v_infoState_4306_);
lean_inc(v_auxDeclNGen_4305_);
lean_inc(v_ngen_4304_);
lean_inc(v_maxRecDepth_4303_);
lean_inc(v_usedQuotCtxts_4302_);
lean_inc(v_scopes_4301_);
lean_inc(v_messages_4300_);
lean_inc(v_env_4299_);
lean_dec(v___x_4298_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4336_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v___x_4315_; 
if (v_isShared_4313_ == 0)
{
lean_ctor_set(v___x_4312_, 4, v_macroScope_4293_);
v___x_4315_ = v___x_4312_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v_env_4299_);
lean_ctor_set(v_reuseFailAlloc_4335_, 1, v_messages_4300_);
lean_ctor_set(v_reuseFailAlloc_4335_, 2, v_scopes_4301_);
lean_ctor_set(v_reuseFailAlloc_4335_, 3, v_usedQuotCtxts_4302_);
lean_ctor_set(v_reuseFailAlloc_4335_, 4, v_macroScope_4293_);
lean_ctor_set(v_reuseFailAlloc_4335_, 5, v_maxRecDepth_4303_);
lean_ctor_set(v_reuseFailAlloc_4335_, 6, v_ngen_4304_);
lean_ctor_set(v_reuseFailAlloc_4335_, 7, v_auxDeclNGen_4305_);
lean_ctor_set(v_reuseFailAlloc_4335_, 8, v_infoState_4306_);
lean_ctor_set(v_reuseFailAlloc_4335_, 9, v_traceState_4307_);
lean_ctor_set(v_reuseFailAlloc_4335_, 10, v_snapshotTasks_4308_);
lean_ctor_set(v_reuseFailAlloc_4335_, 11, v_prevLinterStates_4309_);
lean_ctor_set(v_reuseFailAlloc_4335_, 12, v_codeQualityEntryTasks_4310_);
v___x_4315_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; 
v___x_4316_ = lean_st_ref_put(v___y_4254_, v___x_4315_);
v___x_4317_ = l_List_reverse___redArg(v_traceMsgs_4294_);
v___x_4318_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v___x_4317_, v___y_4253_, v___y_4254_);
if (lean_obj_tag(v___x_4318_) == 0)
{
lean_object* v___x_4320_; uint8_t v_isShared_4321_; uint8_t v_isSharedCheck_4325_; 
v_isSharedCheck_4325_ = !lean_is_exclusive(v___x_4318_);
if (v_isSharedCheck_4325_ == 0)
{
lean_object* v_unused_4326_; 
v_unused_4326_ = lean_ctor_get(v___x_4318_, 0);
lean_dec(v_unused_4326_);
v___x_4320_ = v___x_4318_;
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
else
{
lean_dec(v___x_4318_);
v___x_4320_ = lean_box(0);
v_isShared_4321_ = v_isSharedCheck_4325_;
goto v_resetjp_4319_;
}
v_resetjp_4319_:
{
lean_object* v___x_4323_; 
if (v_isShared_4321_ == 0)
{
lean_ctor_set(v___x_4320_, 0, v_a_4292_);
v___x_4323_ = v___x_4320_;
goto v_reusejp_4322_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v_a_4292_);
v___x_4323_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4322_;
}
v_reusejp_4322_:
{
return v___x_4323_;
}
}
}
else
{
lean_object* v_a_4327_; lean_object* v___x_4329_; uint8_t v_isShared_4330_; uint8_t v_isSharedCheck_4334_; 
lean_dec(v_a_4292_);
v_a_4327_ = lean_ctor_get(v___x_4318_, 0);
v_isSharedCheck_4334_ = !lean_is_exclusive(v___x_4318_);
if (v_isSharedCheck_4334_ == 0)
{
v___x_4329_ = v___x_4318_;
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
else
{
lean_inc(v_a_4327_);
lean_dec(v___x_4318_);
v___x_4329_ = lean_box(0);
v_isShared_4330_ = v_isSharedCheck_4334_;
goto v_resetjp_4328_;
}
v_resetjp_4328_:
{
lean_object* v___x_4332_; 
if (v_isShared_4330_ == 0)
{
v___x_4332_ = v___x_4329_;
goto v_reusejp_4331_;
}
else
{
lean_object* v_reuseFailAlloc_4333_; 
v_reuseFailAlloc_4333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4333_, 0, v_a_4327_);
v___x_4332_ = v_reuseFailAlloc_4333_;
goto v_reusejp_4331_;
}
v_reusejp_4331_:
{
return v___x_4332_;
}
}
}
}
}
}
else
{
lean_object* v_a_4338_; lean_object* v___x_4340_; uint8_t v_isShared_4341_; uint8_t v_isSharedCheck_4345_; 
lean_dec(v_traceMsgs_4294_);
lean_dec(v_macroScope_4293_);
lean_dec(v_a_4292_);
v_a_4338_ = lean_ctor_get(v___x_4297_, 0);
v_isSharedCheck_4345_ = !lean_is_exclusive(v___x_4297_);
if (v_isSharedCheck_4345_ == 0)
{
v___x_4340_ = v___x_4297_;
v_isShared_4341_ = v_isSharedCheck_4345_;
goto v_resetjp_4339_;
}
else
{
lean_inc(v_a_4338_);
lean_dec(v___x_4297_);
v___x_4340_ = lean_box(0);
v_isShared_4341_ = v_isSharedCheck_4345_;
goto v_resetjp_4339_;
}
v_resetjp_4339_:
{
lean_object* v___x_4343_; 
if (v_isShared_4341_ == 0)
{
v___x_4343_ = v___x_4340_;
goto v_reusejp_4342_;
}
else
{
lean_object* v_reuseFailAlloc_4344_; 
v_reuseFailAlloc_4344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4344_, 0, v_a_4338_);
v___x_4343_ = v_reuseFailAlloc_4344_;
goto v_reusejp_4342_;
}
v_reusejp_4342_:
{
return v___x_4343_;
}
}
}
}
else
{
lean_object* v_a_4346_; 
v_a_4346_ = lean_ctor_get(v___x_4290_, 0);
lean_inc(v_a_4346_);
lean_dec_ref_known(v___x_4290_, 2);
if (lean_obj_tag(v_a_4346_) == 0)
{
lean_object* v_a_4347_; lean_object* v_a_4348_; lean_object* v___x_4349_; uint8_t v___x_4350_; 
v_a_4347_ = lean_ctor_get(v_a_4346_, 0);
lean_inc(v_a_4347_);
v_a_4348_ = lean_ctor_get(v_a_4346_, 1);
lean_inc_ref(v_a_4348_);
lean_dec_ref_known(v_a_4346_, 2);
v___x_4349_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0));
v___x_4350_ = lean_string_dec_eq(v_a_4348_, v___x_4349_);
if (v___x_4350_ == 0)
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
v___x_4351_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4351_, 0, v_a_4348_);
v___x_4352_ = l_Lean_MessageData_ofFormat(v___x_4351_);
v___x_4353_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4347_, v___x_4352_, v___y_4253_, v___y_4254_);
lean_dec(v_a_4347_);
return v___x_4353_;
}
else
{
lean_object* v___x_4354_; 
lean_dec_ref(v_a_4348_);
v___x_4354_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_a_4347_);
return v___x_4354_;
}
}
else
{
lean_object* v___x_4355_; 
v___x_4355_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_4355_;
}
}
}
}
else
{
lean_object* v_a_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4366_; 
lean_dec(v_a_4276_);
lean_dec_ref_known(v_methods_4274_, 5);
lean_dec_ref(v_x_4252_);
v_a_4359_ = lean_ctor_get(v___x_4277_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4361_ = v___x_4277_;
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_a_4359_);
lean_dec(v___x_4277_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4364_; 
if (v_isShared_4362_ == 0)
{
v___x_4364_ = v___x_4361_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4359_);
v___x_4364_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
return v___x_4364_;
}
}
}
}
else
{
lean_object* v_a_4367_; lean_object* v___x_4369_; uint8_t v_isShared_4370_; uint8_t v_isSharedCheck_4374_; 
lean_dec_ref_known(v_methods_4274_, 5);
lean_dec_ref(v_x_4252_);
v_a_4367_ = lean_ctor_get(v___x_4275_, 0);
v_isSharedCheck_4374_ = !lean_is_exclusive(v___x_4275_);
if (v_isSharedCheck_4374_ == 0)
{
v___x_4369_ = v___x_4275_;
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
else
{
lean_inc(v_a_4367_);
lean_dec(v___x_4275_);
v___x_4369_ = lean_box(0);
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
v_resetjp_4368_:
{
lean_object* v___x_4372_; 
if (v_isShared_4370_ == 0)
{
v___x_4372_ = v___x_4369_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v_a_4367_);
v___x_4372_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
return v___x_4372_;
}
}
}
}
else
{
lean_object* v_a_4375_; lean_object* v___x_4377_; uint8_t v_isShared_4378_; uint8_t v_isSharedCheck_4382_; 
lean_dec_ref(v___f_4268_);
lean_dec(v_currNamespace_4267_);
lean_dec_ref(v_opts_4264_);
lean_dec_ref(v___f_4259_);
lean_dec_ref(v___f_4258_);
lean_dec_ref(v_env_4257_);
lean_dec_ref(v_x_4252_);
v_a_4375_ = lean_ctor_get(v___x_4269_, 0);
v_isSharedCheck_4382_ = !lean_is_exclusive(v___x_4269_);
if (v_isSharedCheck_4382_ == 0)
{
v___x_4377_ = v___x_4269_;
v_isShared_4378_ = v_isSharedCheck_4382_;
goto v_resetjp_4376_;
}
else
{
lean_inc(v_a_4375_);
lean_dec(v___x_4269_);
v___x_4377_ = lean_box(0);
v_isShared_4378_ = v_isSharedCheck_4382_;
goto v_resetjp_4376_;
}
v_resetjp_4376_:
{
lean_object* v___x_4380_; 
if (v_isShared_4378_ == 0)
{
v___x_4380_ = v___x_4377_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v_a_4375_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
return v___x_4380_;
}
}
}
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_dec_ref(v_opts_4264_);
lean_dec_ref(v___f_4259_);
lean_dec_ref(v___f_4258_);
lean_dec_ref(v_env_4257_);
lean_dec_ref(v_x_4252_);
v_a_4383_ = lean_ctor_get(v___x_4265_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4265_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___x_4265_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4265_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___boxed(lean_object* v_x_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_){
_start:
{
lean_object* v_res_4395_; 
v_res_4395_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_4391_, v___y_4392_, v___y_4393_);
lean_dec(v___y_4393_);
lean_dec_ref(v___y_4392_);
return v_res_4395_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4397_; lean_object* v___x_4398_; 
v___x_4397_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0));
v___x_4398_ = l_Lean_stringToMessageData(v___x_4397_);
return v___x_4398_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4400_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2));
v___x_4401_ = l_Lean_stringToMessageData(v___x_4400_);
return v___x_4401_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5(void){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; 
v___x_4403_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4));
v___x_4404_ = l_Lean_stringToMessageData(v___x_4403_);
return v___x_4404_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7(void){
_start:
{
lean_object* v___x_4406_; lean_object* v___x_4407_; 
v___x_4406_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6));
v___x_4407_ = l_Lean_stringToMessageData(v___x_4406_);
return v___x_4407_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9(void){
_start:
{
lean_object* v___x_4409_; lean_object* v___x_4410_; 
v___x_4409_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8));
v___x_4410_ = l_Lean_stringToMessageData(v___x_4409_);
return v___x_4410_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14(void){
_start:
{
lean_object* v___x_4419_; lean_object* v___x_4420_; 
v___x_4419_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13));
v___x_4420_ = l_Lean_stringToMessageData(v___x_4419_);
return v___x_4420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(lean_object* v___x_4421_, lean_object* v_attrInstance_4422_, lean_object* v___f_4423_, lean_object* v___x_4424_, lean_object* v___x_4425_, lean_object* v___x_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_){
_start:
{
lean_object* v___x_4430_; 
v___x_4430_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4421_, v___y_4427_, v___y_4428_);
if (lean_obj_tag(v___x_4430_) == 0)
{
lean_object* v_a_4431_; lean_object* v___x_4432_; lean_object* v_attr_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; 
v_a_4431_ = lean_ctor_get(v___x_4430_, 0);
lean_inc(v_a_4431_);
lean_dec_ref_known(v___x_4430_, 1);
v___x_4432_ = lean_unsigned_to_nat(1u);
v_attr_4433_ = l_Lean_Syntax_getArg(v_attrInstance_4422_, v___x_4432_);
v___x_4434_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_4434_, 0, v_attr_4433_);
lean_closure_set(v___x_4434_, 1, v___f_4423_);
v___x_4435_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4434_, v___y_4427_, v___y_4428_);
if (lean_obj_tag(v___x_4435_) == 0)
{
lean_object* v_a_4436_; lean_object* v___x_4438_; uint8_t v_isShared_4439_; uint8_t v_isSharedCheck_4541_; 
v_a_4436_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4541_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4541_ == 0)
{
v___x_4438_ = v___x_4435_;
v_isShared_4439_ = v_isSharedCheck_4541_;
goto v_resetjp_4437_;
}
else
{
lean_inc(v_a_4436_);
lean_dec(v___x_4435_);
v___x_4438_ = lean_box(0);
v_isShared_4439_ = v_isSharedCheck_4541_;
goto v_resetjp_4437_;
}
v_resetjp_4437_:
{
lean_object* v___y_4441_; uint8_t v___y_4448_; lean_object* v___y_4449_; lean_object* v___y_4450_; lean_object* v___y_4451_; lean_object* v___y_4452_; lean_object* v_attrName_4463_; lean_object* v___y_4464_; lean_object* v___y_4465_; lean_object* v___x_4522_; lean_object* v___x_4523_; uint8_t v___x_4524_; 
lean_inc(v_a_4436_);
v___x_4522_ = l_Lean_Syntax_getKind(v_a_4436_);
v___x_4523_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12));
v___x_4524_ = lean_name_eq(v___x_4522_, v___x_4523_);
if (v___x_4524_ == 0)
{
if (lean_obj_tag(v___x_4522_) == 1)
{
lean_object* v_str_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; 
v_str_4525_ = lean_ctor_get(v___x_4522_, 1);
lean_inc_ref(v_str_4525_);
lean_dec_ref_known(v___x_4522_, 2);
v___x_4526_ = lean_box(0);
v___x_4527_ = l_Lean_Name_str___override(v___x_4526_, v_str_4525_);
v_attrName_4463_ = v___x_4527_;
v___y_4464_ = v___y_4427_;
v___y_4465_ = v___y_4428_;
goto v___jp_4462_;
}
else
{
lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v_a_4530_; lean_object* v___x_4532_; uint8_t v_isShared_4533_; uint8_t v_isSharedCheck_4537_; 
lean_dec(v___x_4522_);
lean_del_object(v___x_4438_);
lean_dec(v_a_4431_);
lean_dec(v___x_4424_);
v___x_4528_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14);
v___x_4529_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4436_, v___x_4528_, v___y_4427_, v___y_4428_);
lean_dec(v_a_4436_);
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
}
else
{
lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; 
lean_dec(v___x_4522_);
v___x_4538_ = l_Lean_Syntax_getArg(v_a_4436_, v___x_4426_);
v___x_4539_ = l_Lean_Syntax_getId(v___x_4538_);
lean_dec(v___x_4538_);
v___x_4540_ = l_Lean_Name_eraseMacroScopes(v___x_4539_);
lean_dec(v___x_4539_);
v_attrName_4463_ = v___x_4540_;
v___y_4464_ = v___y_4427_;
v___y_4465_ = v___y_4428_;
goto v___jp_4462_;
}
v___jp_4440_:
{
lean_object* v___x_4442_; uint8_t v___x_4443_; lean_object* v___x_4445_; 
v___x_4442_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4442_, 0, v___y_4441_);
lean_ctor_set(v___x_4442_, 1, v_a_4436_);
v___x_4443_ = lean_unbox(v_a_4431_);
lean_dec(v_a_4431_);
lean_ctor_set_uint8(v___x_4442_, sizeof(void*)*2, v___x_4443_);
if (v_isShared_4439_ == 0)
{
lean_ctor_set(v___x_4438_, 0, v___x_4442_);
v___x_4445_ = v___x_4438_;
goto v_reusejp_4444_;
}
else
{
lean_object* v_reuseFailAlloc_4446_; 
v_reuseFailAlloc_4446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4446_, 0, v___x_4442_);
v___x_4445_ = v_reuseFailAlloc_4446_;
goto v_reusejp_4444_;
}
v_reusejp_4444_:
{
return v___x_4445_;
}
}
v___jp_4447_:
{
lean_object* v___x_4453_; 
v___x_4453_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v___y_4449_, v___y_4448_, v___y_4451_, v___y_4452_);
if (lean_obj_tag(v___x_4453_) == 0)
{
lean_dec_ref_known(v___x_4453_, 1);
v___y_4441_ = v___y_4450_;
goto v___jp_4440_;
}
else
{
lean_object* v_a_4454_; lean_object* v___x_4456_; uint8_t v_isShared_4457_; uint8_t v_isSharedCheck_4461_; 
lean_dec(v___y_4450_);
lean_del_object(v___x_4438_);
lean_dec(v_a_4436_);
lean_dec(v_a_4431_);
v_a_4454_ = lean_ctor_get(v___x_4453_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4453_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4456_ = v___x_4453_;
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
else
{
lean_inc(v_a_4454_);
lean_dec(v___x_4453_);
v___x_4456_ = lean_box(0);
v_isShared_4457_ = v_isSharedCheck_4461_;
goto v_resetjp_4455_;
}
v_resetjp_4455_:
{
lean_object* v___x_4459_; 
if (v_isShared_4457_ == 0)
{
v___x_4459_ = v___x_4456_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_a_4454_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
return v___x_4459_;
}
}
}
}
v___jp_4462_:
{
lean_object* v___x_4466_; lean_object* v_env_4467_; lean_object* v___x_4468_; 
v___x_4466_ = lean_st_ref_get(v___y_4465_);
v_env_4467_ = lean_ctor_get(v___x_4466_, 0);
lean_inc_ref(v_env_4467_);
lean_dec(v___x_4466_);
lean_inc(v_attrName_4463_);
v___x_4468_ = l_Lean_getAttributeImpl(v_env_4467_, v_attrName_4463_);
if (lean_obj_tag(v___x_4468_) == 1)
{
lean_object* v___x_4469_; lean_object* v_env_4470_; lean_object* v___x_4471_; 
lean_dec_ref_known(v___x_4468_, 1);
v___x_4469_ = lean_st_ref_get(v___y_4465_);
v_env_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc_ref(v_env_4470_);
lean_dec(v___x_4469_);
lean_inc(v_attrName_4463_);
v___x_4471_ = l_Lean_getAttributeImpl(v_env_4470_, v_attrName_4463_);
if (lean_obj_tag(v___x_4471_) == 1)
{
lean_object* v_a_4472_; lean_object* v___x_4473_; lean_object* v_toAttributeImplCore_4474_; lean_object* v_env_4475_; lean_object* v_ref_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; 
v_a_4472_ = lean_ctor_get(v___x_4471_, 0);
lean_inc(v_a_4472_);
lean_dec_ref_known(v___x_4471_, 1);
v___x_4473_ = lean_st_ref_get(v___y_4465_);
v_toAttributeImplCore_4474_ = lean_ctor_get(v_a_4472_, 0);
lean_inc_ref(v_toAttributeImplCore_4474_);
lean_dec(v_a_4472_);
v_env_4475_ = lean_ctor_get(v___x_4473_, 0);
lean_inc_ref(v_env_4475_);
lean_dec(v___x_4473_);
v_ref_4476_ = lean_ctor_get(v_toAttributeImplCore_4474_, 0);
lean_inc_n(v_ref_4476_, 2);
lean_dec_ref(v_toAttributeImplCore_4474_);
v___x_4477_ = l_Lean_regularInitAttr;
v___x_4478_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_4424_, v___x_4477_, v_env_4475_, v_ref_4476_);
if (lean_obj_tag(v___x_4478_) == 0)
{
lean_dec(v_ref_4476_);
v___y_4441_ = v_attrName_4463_;
goto v___jp_4440_;
}
else
{
uint8_t v___x_4479_; lean_object* v___x_4480_; lean_object* v_env_4481_; lean_object* v___x_4482_; 
lean_dec_ref_known(v___x_4478_, 1);
v___x_4479_ = 1;
v___x_4480_ = lean_st_ref_get(v___y_4465_);
v_env_4481_ = lean_ctor_get(v___x_4480_, 0);
lean_inc_ref(v_env_4481_);
lean_dec(v___x_4480_);
v___x_4482_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4481_, v_ref_4476_);
lean_dec_ref(v_env_4481_);
if (lean_obj_tag(v___x_4482_) == 1)
{
lean_object* v_val_4483_; lean_object* v___x_4484_; lean_object* v_env_4485_; lean_object* v___x_4486_; lean_object* v_modules_4487_; lean_object* v___x_4488_; uint8_t v___x_4489_; 
v_val_4483_ = lean_ctor_get(v___x_4482_, 0);
lean_inc(v_val_4483_);
lean_dec_ref_known(v___x_4482_, 1);
v___x_4484_ = lean_st_ref_get(v___y_4465_);
v_env_4485_ = lean_ctor_get(v___x_4484_, 0);
lean_inc_ref(v_env_4485_);
lean_dec(v___x_4484_);
v___x_4486_ = l_Lean_Environment_header(v_env_4485_);
lean_dec_ref(v_env_4485_);
v_modules_4487_ = lean_ctor_get(v___x_4486_, 3);
lean_inc_ref(v_modules_4487_);
lean_dec_ref(v___x_4486_);
v___x_4488_ = lean_array_get_size(v_modules_4487_);
v___x_4489_ = lean_nat_dec_lt(v_val_4483_, v___x_4488_);
if (v___x_4489_ == 0)
{
lean_dec_ref(v_modules_4487_);
lean_dec(v_val_4483_);
v___y_4448_ = v___x_4479_;
v___y_4449_ = v_ref_4476_;
v___y_4450_ = v_attrName_4463_;
v___y_4451_ = v___y_4464_;
v___y_4452_ = v___y_4465_;
goto v___jp_4447_;
}
else
{
lean_object* v___x_4490_; uint8_t v_hasData_4491_; 
v___x_4490_ = lean_array_fget_borrowed(v_modules_4487_, v_val_4483_);
v_hasData_4491_ = lean_ctor_get_uint8(v___x_4490_, sizeof(void*)*1 + 1);
if (v_hasData_4491_ == 0)
{
lean_object* v___x_4492_; lean_object* v_toImport_4493_; lean_object* v_module_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v_a_4508_; lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4515_; 
lean_dec(v_ref_4476_);
lean_del_object(v___x_4438_);
lean_dec(v_a_4436_);
lean_dec(v_a_4431_);
v___x_4492_ = lean_array_get(v___x_4425_, v_modules_4487_, v_val_4483_);
lean_dec(v_val_4483_);
lean_dec_ref(v_modules_4487_);
v_toImport_4493_ = lean_ctor_get(v___x_4492_, 0);
lean_inc_ref(v_toImport_4493_);
lean_dec(v___x_4492_);
v_module_4494_ = lean_ctor_get(v_toImport_4493_, 0);
lean_inc(v_module_4494_);
lean_dec_ref(v_toImport_4493_);
v___x_4495_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1);
v___x_4496_ = l_Lean_MessageData_ofName(v_attrName_4463_);
v___x_4497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4497_, 0, v___x_4495_);
lean_ctor_set(v___x_4497_, 1, v___x_4496_);
v___x_4498_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3);
v___x_4499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4497_);
lean_ctor_set(v___x_4499_, 1, v___x_4498_);
v___x_4500_ = l_Lean_MessageData_ofName(v_module_4494_);
lean_inc_ref(v___x_4500_);
v___x_4501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4501_, 0, v___x_4499_);
lean_ctor_set(v___x_4501_, 1, v___x_4500_);
v___x_4502_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5);
v___x_4503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4503_, 0, v___x_4501_);
lean_ctor_set(v___x_4503_, 1, v___x_4502_);
v___x_4504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4504_, 0, v___x_4503_);
lean_ctor_set(v___x_4504_, 1, v___x_4500_);
v___x_4505_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___closed__9);
v___x_4506_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4506_, 0, v___x_4504_);
lean_ctor_set(v___x_4506_, 1, v___x_4505_);
v___x_4507_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4506_, v___y_4464_, v___y_4465_);
v_a_4508_ = lean_ctor_get(v___x_4507_, 0);
v_isSharedCheck_4515_ = !lean_is_exclusive(v___x_4507_);
if (v_isSharedCheck_4515_ == 0)
{
v___x_4510_ = v___x_4507_;
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
else
{
lean_inc(v_a_4508_);
lean_dec(v___x_4507_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4513_; 
if (v_isShared_4511_ == 0)
{
v___x_4513_ = v___x_4510_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v_a_4508_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
return v___x_4513_;
}
}
}
else
{
lean_dec_ref(v_modules_4487_);
lean_dec(v_val_4483_);
v___y_4448_ = v___x_4479_;
v___y_4449_ = v_ref_4476_;
v___y_4450_ = v_attrName_4463_;
v___y_4451_ = v___y_4464_;
v___y_4452_ = v___y_4465_;
goto v___jp_4447_;
}
}
}
else
{
lean_dec(v___x_4482_);
v___y_4448_ = v___x_4479_;
v___y_4449_ = v_ref_4476_;
v___y_4450_ = v_attrName_4463_;
v___y_4451_ = v___y_4464_;
v___y_4452_ = v___y_4465_;
goto v___jp_4447_;
}
}
}
else
{
lean_dec_ref(v___x_4471_);
lean_dec(v___x_4424_);
v___y_4441_ = v_attrName_4463_;
goto v___jp_4440_;
}
}
else
{
lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; 
lean_dec_ref(v___x_4468_);
lean_del_object(v___x_4438_);
lean_dec(v_a_4436_);
lean_dec(v_a_4431_);
lean_dec(v___x_4424_);
v___x_4516_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7);
v___x_4517_ = l_Lean_MessageData_ofName(v_attrName_4463_);
v___x_4518_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4516_);
lean_ctor_set(v___x_4518_, 1, v___x_4517_);
v___x_4519_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9);
v___x_4520_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4520_, 0, v___x_4518_);
lean_ctor_set(v___x_4520_, 1, v___x_4519_);
v___x_4521_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4520_, v___y_4464_, v___y_4465_);
return v___x_4521_;
}
}
}
}
else
{
lean_object* v_a_4542_; lean_object* v___x_4544_; uint8_t v_isShared_4545_; uint8_t v_isSharedCheck_4549_; 
lean_dec(v_a_4431_);
lean_dec(v___x_4424_);
v_a_4542_ = lean_ctor_get(v___x_4435_, 0);
v_isSharedCheck_4549_ = !lean_is_exclusive(v___x_4435_);
if (v_isSharedCheck_4549_ == 0)
{
v___x_4544_ = v___x_4435_;
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
else
{
lean_inc(v_a_4542_);
lean_dec(v___x_4435_);
v___x_4544_ = lean_box(0);
v_isShared_4545_ = v_isSharedCheck_4549_;
goto v_resetjp_4543_;
}
v_resetjp_4543_:
{
lean_object* v___x_4547_; 
if (v_isShared_4545_ == 0)
{
v___x_4547_ = v___x_4544_;
goto v_reusejp_4546_;
}
else
{
lean_object* v_reuseFailAlloc_4548_; 
v_reuseFailAlloc_4548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4548_, 0, v_a_4542_);
v___x_4547_ = v_reuseFailAlloc_4548_;
goto v_reusejp_4546_;
}
v_reusejp_4546_:
{
return v___x_4547_;
}
}
}
}
else
{
lean_object* v_a_4550_; lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4557_; 
lean_dec(v___x_4424_);
lean_dec_ref(v___f_4423_);
v_a_4550_ = lean_ctor_get(v___x_4430_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4430_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4552_ = v___x_4430_;
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
else
{
lean_inc(v_a_4550_);
lean_dec(v___x_4430_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
if (v_isShared_4553_ == 0)
{
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_a_4550_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
return v___x_4555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed(lean_object* v___x_4558_, lean_object* v_attrInstance_4559_, lean_object* v___f_4560_, lean_object* v___x_4561_, lean_object* v___x_4562_, lean_object* v___x_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_){
_start:
{
lean_object* v_res_4567_; 
v_res_4567_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(v___x_4558_, v_attrInstance_4559_, v___f_4560_, v___x_4561_, v___x_4562_, v___x_4563_, v___y_4564_, v___y_4565_);
lean_dec(v___y_4565_);
lean_dec_ref(v___y_4564_);
lean_dec(v___x_4563_);
lean_dec_ref(v___x_4562_);
lean_dec(v_attrInstance_4559_);
return v_res_4567_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(lean_object* v_x_4568_, uint8_t v_when_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_){
_start:
{
if (v_when_4569_ == 0)
{
lean_object* v___x_4573_; 
lean_inc(v___y_4571_);
lean_inc_ref(v___y_4570_);
v___x_4573_ = lean_apply_3(v_x_4568_, v___y_4570_, v___y_4571_, lean_box(0));
return v___x_4573_;
}
else
{
uint8_t v___x_4574_; lean_object* v___x_4575_; 
v___x_4574_ = 0;
v___x_4575_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_4568_, v___x_4574_, v___y_4570_, v___y_4571_);
return v___x_4575_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg___boxed(lean_object* v_x_4576_, lean_object* v_when_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_){
_start:
{
uint8_t v_when_boxed_4581_; lean_object* v_res_4582_; 
v_when_boxed_4581_ = lean_unbox(v_when_4577_);
v_res_4582_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_4576_, v_when_boxed_4581_, v___y_4578_, v___y_4579_);
lean_dec(v___y_4579_);
lean_dec_ref(v___y_4578_);
return v_res_4582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(lean_object* v_attrInstance_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
lean_object* v___f_4588_; lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___f_4594_; uint8_t v___x_4595_; lean_object* v___x_4596_; 
v___f_4588_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0));
v___x_4589_ = lean_box(0);
v___x_4590_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_4591_ = lean_unsigned_to_nat(0u);
v___x_4592_ = l_Lean_Syntax_getArg(v_attrInstance_4584_, v___x_4591_);
v___x_4593_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_4593_, 0, v___x_4592_);
v___f_4594_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed), 9, 6);
lean_closure_set(v___f_4594_, 0, v___x_4593_);
lean_closure_set(v___f_4594_, 1, v_attrInstance_4584_);
lean_closure_set(v___f_4594_, 2, v___f_4588_);
lean_closure_set(v___f_4594_, 3, v___x_4589_);
lean_closure_set(v___f_4594_, 4, v___x_4590_);
lean_closure_set(v___f_4594_, 5, v___x_4591_);
v___x_4595_ = 1;
v___x_4596_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v___f_4594_, v___x_4595_, v___y_4585_, v___y_4586_);
return v___x_4596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___boxed(lean_object* v_attrInstance_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_){
_start:
{
lean_object* v_res_4601_; 
v_res_4601_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_attrInstance_4597_, v___y_4598_, v___y_4599_);
lean_dec(v___y_4599_);
lean_dec_ref(v___y_4598_);
return v_res_4601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(lean_object* v_as_4602_, size_t v_sz_4603_, size_t v_i_4604_, lean_object* v_b_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_){
_start:
{
lean_object* v_snd_4610_; lean_object* v_a_4615_; uint8_t v___x_4627_; 
v___x_4627_ = lean_usize_dec_lt(v_i_4604_, v_sz_4603_);
if (v___x_4627_ == 0)
{
lean_object* v___x_4628_; 
v___x_4628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4628_, 0, v_b_4605_);
return v___x_4628_;
}
else
{
lean_object* v_a_4629_; lean_object* v___x_4630_; 
v_a_4629_ = lean_array_uget_borrowed(v_as_4602_, v_i_4604_);
v___x_4630_ = l_Lean_Elab_Command_getRef___redArg(v___y_4606_);
if (lean_obj_tag(v___x_4630_) == 0)
{
lean_object* v_a_4631_; lean_object* v_fileName_4632_; lean_object* v_fileMap_4633_; lean_object* v_currRecDepth_4634_; lean_object* v_cmdPos_4635_; lean_object* v_macroStack_4636_; lean_object* v_quotContext_x3f_4637_; lean_object* v_currMacroScope_4638_; lean_object* v_snap_x3f_4639_; lean_object* v_cancelTk_x3f_4640_; uint8_t v_suppressElabErrors_4641_; lean_object* v_ref_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; 
v_a_4631_ = lean_ctor_get(v___x_4630_, 0);
lean_inc(v_a_4631_);
lean_dec_ref_known(v___x_4630_, 1);
v_fileName_4632_ = lean_ctor_get(v___y_4606_, 0);
v_fileMap_4633_ = lean_ctor_get(v___y_4606_, 1);
v_currRecDepth_4634_ = lean_ctor_get(v___y_4606_, 2);
v_cmdPos_4635_ = lean_ctor_get(v___y_4606_, 3);
v_macroStack_4636_ = lean_ctor_get(v___y_4606_, 4);
v_quotContext_x3f_4637_ = lean_ctor_get(v___y_4606_, 5);
v_currMacroScope_4638_ = lean_ctor_get(v___y_4606_, 6);
v_snap_x3f_4639_ = lean_ctor_get(v___y_4606_, 8);
v_cancelTk_x3f_4640_ = lean_ctor_get(v___y_4606_, 9);
v_suppressElabErrors_4641_ = lean_ctor_get_uint8(v___y_4606_, sizeof(void*)*10);
v_ref_4642_ = l_Lean_replaceRef(v_a_4629_, v_a_4631_);
lean_dec(v_a_4631_);
lean_inc(v_cancelTk_x3f_4640_);
lean_inc(v_snap_x3f_4639_);
lean_inc(v_currMacroScope_4638_);
lean_inc(v_quotContext_x3f_4637_);
lean_inc(v_macroStack_4636_);
lean_inc(v_cmdPos_4635_);
lean_inc(v_currRecDepth_4634_);
lean_inc_ref(v_fileMap_4633_);
lean_inc_ref(v_fileName_4632_);
v___x_4643_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_4643_, 0, v_fileName_4632_);
lean_ctor_set(v___x_4643_, 1, v_fileMap_4633_);
lean_ctor_set(v___x_4643_, 2, v_currRecDepth_4634_);
lean_ctor_set(v___x_4643_, 3, v_cmdPos_4635_);
lean_ctor_set(v___x_4643_, 4, v_macroStack_4636_);
lean_ctor_set(v___x_4643_, 5, v_quotContext_x3f_4637_);
lean_ctor_set(v___x_4643_, 6, v_currMacroScope_4638_);
lean_ctor_set(v___x_4643_, 7, v_ref_4642_);
lean_ctor_set(v___x_4643_, 8, v_snap_x3f_4639_);
lean_ctor_set(v___x_4643_, 9, v_cancelTk_x3f_4640_);
lean_ctor_set_uint8(v___x_4643_, sizeof(void*)*10, v_suppressElabErrors_4641_);
lean_inc(v_a_4629_);
v___x_4644_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_a_4629_, v___x_4643_, v___y_4607_);
lean_dec_ref_known(v___x_4643_, 10);
if (lean_obj_tag(v___x_4644_) == 0)
{
lean_object* v_a_4645_; lean_object* v___x_4646_; 
v_a_4645_ = lean_ctor_get(v___x_4644_, 0);
lean_inc(v_a_4645_);
lean_dec_ref_known(v___x_4644_, 1);
v___x_4646_ = lean_array_push(v_b_4605_, v_a_4645_);
v_snd_4610_ = v___x_4646_;
goto v___jp_4609_;
}
else
{
lean_object* v_a_4647_; 
v_a_4647_ = lean_ctor_get(v___x_4644_, 0);
lean_inc(v_a_4647_);
lean_dec_ref_known(v___x_4644_, 1);
v_a_4615_ = v_a_4647_;
goto v___jp_4614_;
}
}
else
{
lean_object* v_a_4648_; 
v_a_4648_ = lean_ctor_get(v___x_4630_, 0);
lean_inc(v_a_4648_);
lean_dec_ref_known(v___x_4630_, 1);
v_a_4615_ = v_a_4648_;
goto v___jp_4614_;
}
}
v___jp_4609_:
{
size_t v___x_4611_; size_t v___x_4612_; 
v___x_4611_ = ((size_t)1ULL);
v___x_4612_ = lean_usize_add(v_i_4604_, v___x_4611_);
v_i_4604_ = v___x_4612_;
v_b_4605_ = v_snd_4610_;
goto _start;
}
v___jp_4614_:
{
uint8_t v___x_4616_; 
v___x_4616_ = l_Lean_Exception_isInterrupt(v_a_4615_);
if (v___x_4616_ == 0)
{
lean_object* v___x_4617_; 
v___x_4617_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_a_4615_, v___y_4606_, v___y_4607_);
if (lean_obj_tag(v___x_4617_) == 0)
{
lean_dec_ref_known(v___x_4617_, 1);
v_snd_4610_ = v_b_4605_;
goto v___jp_4609_;
}
else
{
lean_object* v_a_4618_; lean_object* v___x_4620_; uint8_t v_isShared_4621_; uint8_t v_isSharedCheck_4625_; 
lean_dec_ref(v_b_4605_);
v_a_4618_ = lean_ctor_get(v___x_4617_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4617_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4620_ = v___x_4617_;
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
else
{
lean_inc(v_a_4618_);
lean_dec(v___x_4617_);
v___x_4620_ = lean_box(0);
v_isShared_4621_ = v_isSharedCheck_4625_;
goto v_resetjp_4619_;
}
v_resetjp_4619_:
{
lean_object* v___x_4623_; 
if (v_isShared_4621_ == 0)
{
v___x_4623_ = v___x_4620_;
goto v_reusejp_4622_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v_a_4618_);
v___x_4623_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4622_;
}
v_reusejp_4622_:
{
return v___x_4623_;
}
}
}
}
else
{
lean_object* v___x_4626_; 
lean_dec_ref(v_b_4605_);
v___x_4626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4626_, 0, v_a_4615_);
return v___x_4626_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29___boxed(lean_object* v_as_4649_, lean_object* v_sz_4650_, lean_object* v_i_4651_, lean_object* v_b_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_){
_start:
{
size_t v_sz_boxed_4656_; size_t v_i_boxed_4657_; lean_object* v_res_4658_; 
v_sz_boxed_4656_ = lean_unbox_usize(v_sz_4650_);
lean_dec(v_sz_4650_);
v_i_boxed_4657_ = lean_unbox_usize(v_i_4651_);
lean_dec(v_i_4651_);
v_res_4658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_as_4649_, v_sz_boxed_4656_, v_i_boxed_4657_, v_b_4652_, v___y_4653_, v___y_4654_);
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
lean_dec_ref(v_as_4649_);
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(lean_object* v_attrInstances_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
lean_object* v_attrs_4665_; size_t v_sz_4666_; size_t v___x_4667_; lean_object* v___x_4668_; 
v_attrs_4665_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v_sz_4666_ = lean_array_size(v_attrInstances_4661_);
v___x_4667_ = ((size_t)0ULL);
v___x_4668_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_attrInstances_4661_, v_sz_4666_, v___x_4667_, v_attrs_4665_, v___y_4662_, v___y_4663_);
return v___x_4668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___boxed(lean_object* v_attrInstances_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_){
_start:
{
lean_object* v_res_4673_; 
v_res_4673_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v_attrInstances_4669_, v___y_4670_, v___y_4671_);
lean_dec(v___y_4671_);
lean_dec_ref(v___y_4670_);
lean_dec_ref(v_attrInstances_4669_);
return v_res_4673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(lean_object* v_stx_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_){
_start:
{
lean_object* v___x_4678_; lean_object* v___x_4679_; lean_object* v___x_4680_; lean_object* v___x_4681_; 
v___x_4678_ = lean_unsigned_to_nat(1u);
v___x_4679_ = l_Lean_Syntax_getArg(v_stx_4674_, v___x_4678_);
v___x_4680_ = l_Lean_Syntax_getSepArgs(v___x_4679_);
lean_dec(v___x_4679_);
v___x_4681_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v___x_4680_, v___y_4675_, v___y_4676_);
lean_dec_ref(v___x_4680_);
return v___x_4681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1___boxed(lean_object* v_stx_4682_, lean_object* v___y_4683_, lean_object* v___y_4684_, lean_object* v___y_4685_){
_start:
{
lean_object* v_res_4686_; 
v_res_4686_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_stx_4682_, v___y_4683_, v___y_4684_);
lean_dec(v___y_4684_);
lean_dec_ref(v___y_4683_);
lean_dec(v_stx_4682_);
return v_res_4686_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(lean_object* v_o_4687_, lean_object* v___y_4688_){
_start:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v_env_4692_; lean_object* v___x_4693_; lean_object* v_toEnvExtension_4694_; lean_object* v_asyncMode_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v_merged_4698_; lean_object* v___x_4700_; uint8_t v_isShared_4701_; uint8_t v_isSharedCheck_4706_; 
v___x_4690_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_4691_ = lean_st_ref_get(v___y_4688_);
v_env_4692_ = lean_ctor_get(v___x_4691_, 0);
lean_inc_ref(v_env_4692_);
lean_dec(v___x_4691_);
v___x_4693_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_4694_ = lean_ctor_get(v___x_4693_, 0);
v_asyncMode_4695_ = lean_ctor_get(v_toEnvExtension_4694_, 2);
v___x_4696_ = lean_box(0);
v___x_4697_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4690_, v___x_4693_, v_env_4692_, v_asyncMode_4695_, v___x_4696_);
v_merged_4698_ = lean_ctor_get(v___x_4697_, 0);
v_isSharedCheck_4706_ = !lean_is_exclusive(v___x_4697_);
if (v_isSharedCheck_4706_ == 0)
{
lean_object* v_unused_4707_; 
v_unused_4707_ = lean_ctor_get(v___x_4697_, 1);
lean_dec(v_unused_4707_);
v___x_4700_ = v___x_4697_;
v_isShared_4701_ = v_isSharedCheck_4706_;
goto v_resetjp_4699_;
}
else
{
lean_inc(v_merged_4698_);
lean_dec(v___x_4697_);
v___x_4700_ = lean_box(0);
v_isShared_4701_ = v_isSharedCheck_4706_;
goto v_resetjp_4699_;
}
v_resetjp_4699_:
{
lean_object* v___x_4703_; 
if (v_isShared_4701_ == 0)
{
lean_ctor_set(v___x_4700_, 1, v_merged_4698_);
lean_ctor_set(v___x_4700_, 0, v_o_4687_);
v___x_4703_ = v___x_4700_;
goto v_reusejp_4702_;
}
else
{
lean_object* v_reuseFailAlloc_4705_; 
v_reuseFailAlloc_4705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4705_, 0, v_o_4687_);
lean_ctor_set(v_reuseFailAlloc_4705_, 1, v_merged_4698_);
v___x_4703_ = v_reuseFailAlloc_4705_;
goto v_reusejp_4702_;
}
v_reusejp_4702_:
{
lean_object* v___x_4704_; 
v___x_4704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4704_, 0, v___x_4703_);
return v___x_4704_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg___boxed(lean_object* v_o_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v_res_4711_; 
v_res_4711_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_4708_, v___y_4709_);
lean_dec(v___y_4709_);
return v_res_4711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(lean_object* v___y_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v_scopes_4717_; lean_object* v___x_4718_; lean_object* v_opts_4719_; lean_object* v___x_4720_; 
v___x_4715_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4716_ = lean_st_ref_get(v___y_4713_);
v_scopes_4717_ = lean_ctor_get(v___x_4716_, 2);
lean_inc(v_scopes_4717_);
lean_dec(v___x_4716_);
v___x_4718_ = l_List_head_x21___redArg(v___x_4715_, v_scopes_4717_);
lean_dec(v_scopes_4717_);
v_opts_4719_ = lean_ctor_get(v___x_4718_, 1);
lean_inc_ref(v_opts_4719_);
lean_dec(v___x_4718_);
v___x_4720_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_opts_4719_, v___y_4713_);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23___boxed(lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_){
_start:
{
lean_object* v_res_4724_; 
v_res_4724_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4721_, v___y_4722_);
lean_dec(v___y_4722_);
lean_dec_ref(v___y_4721_);
return v_res_4724_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(lean_object* v_ref_4725_, lean_object* v_msgData_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_){
_start:
{
uint8_t v___x_4730_; uint8_t v___x_4731_; lean_object* v___x_4732_; 
v___x_4730_ = 1;
v___x_4731_ = 0;
v___x_4732_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_4725_, v_msgData_4726_, v___x_4730_, v___x_4731_, v___y_4727_, v___y_4728_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34___boxed(lean_object* v_ref_4733_, lean_object* v_msgData_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_){
_start:
{
lean_object* v_res_4738_; 
v_res_4738_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_ref_4733_, v_msgData_4734_, v___y_4735_, v___y_4736_);
lean_dec(v___y_4736_);
lean_dec_ref(v___y_4735_);
lean_dec(v_ref_4733_);
return v_res_4738_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1(void){
_start:
{
lean_object* v___x_4740_; lean_object* v___x_4741_; 
v___x_4740_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0));
v___x_4741_ = l_Lean_stringToMessageData(v___x_4740_);
return v___x_4741_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3(void){
_start:
{
lean_object* v___x_4743_; lean_object* v___x_4744_; 
v___x_4743_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2));
v___x_4744_ = l_Lean_stringToMessageData(v___x_4743_);
return v___x_4744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(lean_object* v_linterOption_4745_, lean_object* v_stx_4746_, lean_object* v_msg_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_){
_start:
{
lean_object* v_name_4751_; lean_object* v___x_4753_; uint8_t v_isShared_4754_; uint8_t v_isSharedCheck_4769_; 
v_name_4751_ = lean_ctor_get(v_linterOption_4745_, 0);
v_isSharedCheck_4769_ = !lean_is_exclusive(v_linterOption_4745_);
if (v_isSharedCheck_4769_ == 0)
{
lean_object* v_unused_4770_; 
v_unused_4770_ = lean_ctor_get(v_linterOption_4745_, 1);
lean_dec(v_unused_4770_);
v___x_4753_ = v_linterOption_4745_;
v_isShared_4754_ = v_isSharedCheck_4769_;
goto v_resetjp_4752_;
}
else
{
lean_inc(v_name_4751_);
lean_dec(v_linterOption_4745_);
v___x_4753_ = lean_box(0);
v_isShared_4754_ = v_isSharedCheck_4769_;
goto v_resetjp_4752_;
}
v_resetjp_4752_:
{
lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4758_; 
v___x_4755_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1);
lean_inc(v_name_4751_);
v___x_4756_ = l_Lean_MessageData_ofName(v_name_4751_);
if (v_isShared_4754_ == 0)
{
lean_ctor_set_tag(v___x_4753_, 7);
lean_ctor_set(v___x_4753_, 1, v___x_4756_);
lean_ctor_set(v___x_4753_, 0, v___x_4755_);
v___x_4758_ = v___x_4753_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4768_; 
v_reuseFailAlloc_4768_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4768_, 0, v___x_4755_);
lean_ctor_set(v_reuseFailAlloc_4768_, 1, v___x_4756_);
v___x_4758_ = v_reuseFailAlloc_4768_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v_disable_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; 
v___x_4759_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3);
v___x_4760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4758_);
lean_ctor_set(v___x_4760_, 1, v___x_4759_);
v_disable_4761_ = l_Lean_MessageData_note(v___x_4760_);
v___x_4762_ = l_Lean_Linter_linterMessageTag;
v___x_4763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4763_, 0, v_msg_4747_);
lean_ctor_set(v___x_4763_, 1, v_disable_4761_);
v___x_4764_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4764_, 0, v___x_4762_);
lean_ctor_set(v___x_4764_, 1, v___x_4763_);
v___x_4765_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4765_, 0, v_name_4751_);
lean_ctor_set(v___x_4765_, 1, v___x_4764_);
lean_inc(v_stx_4746_);
v___x_4766_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_4766_, 0, v_stx_4746_);
lean_ctor_set(v___x_4766_, 1, v___x_4765_);
v___x_4767_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_stx_4746_, v___x_4766_, v___y_4748_, v___y_4749_);
lean_dec(v_stx_4746_);
return v___x_4767_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___boxed(lean_object* v_linterOption_4771_, lean_object* v_stx_4772_, lean_object* v_msg_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_){
_start:
{
lean_object* v_res_4777_; 
v_res_4777_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4771_, v_stx_4772_, v_msg_4773_, v___y_4774_, v___y_4775_);
lean_dec(v___y_4775_);
lean_dec_ref(v___y_4774_);
return v_res_4777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(lean_object* v_linterOption_4778_, lean_object* v_stx_4779_, lean_object* v_msg_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_){
_start:
{
lean_object* v___x_4784_; lean_object* v_a_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4795_; 
v___x_4784_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4781_, v___y_4782_);
v_a_4785_ = lean_ctor_get(v___x_4784_, 0);
v_isSharedCheck_4795_ = !lean_is_exclusive(v___x_4784_);
if (v_isSharedCheck_4795_ == 0)
{
v___x_4787_ = v___x_4784_;
v_isShared_4788_ = v_isSharedCheck_4795_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_a_4785_);
lean_dec(v___x_4784_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4795_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
uint8_t v___x_4789_; 
v___x_4789_ = l_Lean_Linter_getLinterValue(v_linterOption_4778_, v_a_4785_);
lean_dec(v_a_4785_);
if (v___x_4789_ == 0)
{
lean_object* v___x_4790_; lean_object* v___x_4792_; 
lean_dec_ref(v_msg_4780_);
lean_dec(v_stx_4779_);
lean_dec_ref(v_linterOption_4778_);
v___x_4790_ = lean_box(0);
if (v_isShared_4788_ == 0)
{
lean_ctor_set(v___x_4787_, 0, v___x_4790_);
v___x_4792_ = v___x_4787_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v___x_4790_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
return v___x_4792_;
}
}
else
{
lean_object* v___x_4794_; 
lean_del_object(v___x_4787_);
v___x_4794_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4778_, v_stx_4779_, v_msg_4780_, v___y_4781_, v___y_4782_);
return v___x_4794_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6___boxed(lean_object* v_linterOption_4796_, lean_object* v_stx_4797_, lean_object* v_msg_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_){
_start:
{
lean_object* v_res_4802_; 
v_res_4802_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v_linterOption_4796_, v_stx_4797_, v_msg_4798_, v___y_4799_, v___y_4800_);
lean_dec(v___y_4800_);
lean_dec_ref(v___y_4799_);
return v_res_4802_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4804_; lean_object* v___x_4805_; 
v___x_4804_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0));
v___x_4805_ = l_Lean_stringToMessageData(v___x_4804_);
return v___x_4805_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4807_; lean_object* v___x_4808_; 
v___x_4807_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2));
v___x_4808_ = l_Lean_stringToMessageData(v___x_4807_);
return v___x_4808_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_4822_; lean_object* v___x_4823_; 
v___x_4822_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8));
v___x_4823_ = l_Lean_stringToMessageData(v___x_4822_);
return v___x_4823_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_4825_; lean_object* v___x_4826_; 
v___x_4825_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10));
v___x_4826_ = l_Lean_stringToMessageData(v___x_4825_);
return v___x_4826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(lean_object* v_vis_x3f_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_){
_start:
{
lean_object* v___x_4839_; 
v___x_4839_ = lean_st_ref_get(v___y_4829_);
if (lean_obj_tag(v_vis_x3f_4827_) == 0)
{
uint8_t v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; 
lean_dec(v___x_4839_);
v___x_4840_ = 0;
v___x_4841_ = lean_box(v___x_4840_);
v___x_4842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4842_, 0, v___x_4841_);
return v___x_4842_;
}
else
{
lean_object* v_env_4843_; lean_object* v_val_4844_; lean_object* v___y_4846_; lean_object* v___y_4847_; lean_object* v___y_4848_; uint8_t v___y_4870_; lean_object* v___x_4871_; uint8_t v___x_4872_; uint8_t v___y_4874_; 
v_env_4843_ = lean_ctor_get(v___x_4839_, 0);
lean_inc_ref(v_env_4843_);
lean_dec(v___x_4839_);
v_val_4844_ = lean_ctor_get(v_vis_x3f_4827_, 0);
lean_inc_n(v_val_4844_, 2);
lean_dec_ref_known(v_vis_x3f_4827_, 1);
v___x_4871_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6));
v___x_4872_ = l_Lean_Syntax_isOfKind(v_val_4844_, v___x_4871_);
if (v___x_4872_ == 0)
{
lean_object* v___x_4878_; uint8_t v___x_4879_; 
v___x_4878_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7));
lean_inc(v_val_4844_);
v___x_4879_ = l_Lean_Syntax_isOfKind(v_val_4844_, v___x_4878_);
if (v___x_4879_ == 0)
{
lean_object* v___x_4880_; lean_object* v___x_4881_; 
lean_dec_ref(v_env_4843_);
v___x_4880_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9);
v___x_4881_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_val_4844_, v___x_4880_, v___y_4828_, v___y_4829_);
lean_dec(v_val_4844_);
return v___x_4881_;
}
else
{
lean_object* v___x_4882_; 
v___x_4882_ = l_Lean_Syntax_getHeadInfo(v_val_4844_);
if (lean_obj_tag(v___x_4882_) == 0)
{
lean_dec_ref_known(v___x_4882_, 4);
v___y_4874_ = v___x_4879_;
goto v___jp_4873_;
}
else
{
lean_dec(v___x_4882_);
if (v___x_4872_ == 0)
{
lean_dec(v_val_4844_);
lean_dec_ref(v_env_4843_);
goto v___jp_4831_;
}
else
{
v___y_4874_ = v___x_4872_;
goto v___jp_4873_;
}
}
}
}
else
{
lean_object* v___x_4883_; 
v___x_4883_ = l_Lean_Syntax_getHeadInfo(v_val_4844_);
if (lean_obj_tag(v___x_4883_) == 0)
{
lean_object* v___x_4884_; uint8_t v_isModule_4885_; 
lean_dec_ref_known(v___x_4883_, 4);
v___x_4884_ = l_Lean_Environment_header(v_env_4843_);
v_isModule_4885_ = lean_ctor_get_uint8(v___x_4884_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4884_);
if (v_isModule_4885_ == 0)
{
lean_dec(v_val_4844_);
lean_dec_ref(v_env_4843_);
goto v___jp_4835_;
}
else
{
uint8_t v_isExporting_4886_; 
v_isExporting_4886_ = lean_ctor_get_uint8(v_env_4843_, sizeof(void*)*8);
lean_dec_ref(v_env_4843_);
if (v_isExporting_4886_ == 0)
{
lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4889_; 
v___x_4887_ = l_Lean_linter_redundantVisibility;
v___x_4888_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11);
v___x_4889_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___x_4887_, v_val_4844_, v___x_4888_, v___y_4828_, v___y_4829_);
if (lean_obj_tag(v___x_4889_) == 0)
{
lean_dec_ref_known(v___x_4889_, 1);
goto v___jp_4835_;
}
else
{
lean_object* v_a_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4897_; 
v_a_4890_ = lean_ctor_get(v___x_4889_, 0);
v_isSharedCheck_4897_ = !lean_is_exclusive(v___x_4889_);
if (v_isSharedCheck_4897_ == 0)
{
v___x_4892_ = v___x_4889_;
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
else
{
lean_inc(v_a_4890_);
lean_dec(v___x_4889_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4895_; 
if (v_isShared_4893_ == 0)
{
v___x_4895_ = v___x_4892_;
goto v_reusejp_4894_;
}
else
{
lean_object* v_reuseFailAlloc_4896_; 
v_reuseFailAlloc_4896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4896_, 0, v_a_4890_);
v___x_4895_ = v_reuseFailAlloc_4896_;
goto v_reusejp_4894_;
}
v_reusejp_4894_:
{
return v___x_4895_;
}
}
}
}
else
{
lean_dec(v_val_4844_);
goto v___jp_4835_;
}
}
}
else
{
lean_dec(v___x_4883_);
lean_dec(v_val_4844_);
lean_dec_ref(v_env_4843_);
goto v___jp_4835_;
}
}
v___jp_4845_:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; 
lean_inc_ref(v___y_4848_);
v___x_4849_ = l_Lean_stringToMessageData(v___y_4848_);
lean_inc_ref(v___y_4846_);
v___x_4850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4850_, 0, v___y_4846_);
lean_ctor_set(v___x_4850_, 1, v___x_4849_);
v___x_4851_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1);
v___x_4852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4852_, 0, v___x_4850_);
lean_ctor_set(v___x_4852_, 1, v___x_4851_);
lean_inc_ref(v___y_4847_);
v___x_4853_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___y_4847_, v_val_4844_, v___x_4852_, v___y_4828_, v___y_4829_);
if (lean_obj_tag(v___x_4853_) == 0)
{
lean_dec_ref_known(v___x_4853_, 1);
goto v___jp_4831_;
}
else
{
lean_object* v_a_4854_; lean_object* v___x_4856_; uint8_t v_isShared_4857_; uint8_t v_isSharedCheck_4861_; 
v_a_4854_ = lean_ctor_get(v___x_4853_, 0);
v_isSharedCheck_4861_ = !lean_is_exclusive(v___x_4853_);
if (v_isSharedCheck_4861_ == 0)
{
v___x_4856_ = v___x_4853_;
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
else
{
lean_inc(v_a_4854_);
lean_dec(v___x_4853_);
v___x_4856_ = lean_box(0);
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
v_resetjp_4855_:
{
lean_object* v___x_4859_; 
if (v_isShared_4857_ == 0)
{
v___x_4859_ = v___x_4856_;
goto v_reusejp_4858_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v_a_4854_);
v___x_4859_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4858_;
}
v_reusejp_4858_:
{
return v___x_4859_;
}
}
}
}
v___jp_4862_:
{
lean_object* v___x_4863_; uint8_t v_isModule_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v___x_4863_ = l_Lean_Environment_header(v_env_4843_);
lean_dec_ref(v_env_4843_);
v_isModule_4864_ = lean_ctor_get_uint8(v___x_4863_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4863_);
v___x_4865_ = l_Lean_linter_redundantVisibility;
v___x_4866_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3);
if (v_isModule_4864_ == 0)
{
lean_object* v___x_4867_; 
v___x_4867_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg___closed__0));
v___y_4846_ = v___x_4866_;
v___y_4847_ = v___x_4865_;
v___y_4848_ = v___x_4867_;
goto v___jp_4845_;
}
else
{
lean_object* v___x_4868_; 
v___x_4868_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4));
v___y_4846_ = v___x_4866_;
v___y_4847_ = v___x_4865_;
v___y_4848_ = v___x_4868_;
goto v___jp_4845_;
}
}
v___jp_4869_:
{
if (v___y_4870_ == 0)
{
lean_dec(v_val_4844_);
lean_dec_ref(v_env_4843_);
goto v___jp_4831_;
}
else
{
goto v___jp_4862_;
}
}
v___jp_4873_:
{
uint8_t v_isExporting_4875_; 
v_isExporting_4875_ = lean_ctor_get_uint8(v_env_4843_, sizeof(void*)*8);
if (v_isExporting_4875_ == 0)
{
lean_object* v___x_4876_; uint8_t v_isModule_4877_; 
v___x_4876_ = l_Lean_Environment_header(v_env_4843_);
v_isModule_4877_ = lean_ctor_get_uint8(v___x_4876_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4876_);
if (v_isModule_4877_ == 0)
{
v___y_4870_ = v___y_4874_;
goto v___jp_4869_;
}
else
{
v___y_4870_ = v___x_4872_;
goto v___jp_4869_;
}
}
else
{
goto v___jp_4862_;
}
}
}
v___jp_4831_:
{
uint8_t v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; 
v___x_4832_ = 2;
v___x_4833_ = lean_box(v___x_4832_);
v___x_4834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4834_, 0, v___x_4833_);
return v___x_4834_;
}
v___jp_4835_:
{
uint8_t v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4836_ = 1;
v___x_4837_ = lean_box(v___x_4836_);
v___x_4838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4838_, 0, v___x_4837_);
return v___x_4838_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___boxed(lean_object* v_vis_x3f_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_){
_start:
{
lean_object* v_res_4902_; 
v_res_4902_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v_vis_x3f_4898_, v___y_4899_, v___y_4900_);
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
return v_res_4902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object* v_stx_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_){
_start:
{
uint8_t v___y_4919_; uint8_t v___y_4920_; uint8_t v___y_4921_; uint8_t v___y_4922_; lean_object* v___y_4923_; lean_object* v___y_4924_; uint8_t v___y_4925_; lean_object* v___y_4929_; uint8_t v___y_4930_; uint8_t v___y_4931_; uint8_t v___y_4932_; uint8_t v___y_4933_; lean_object* v___y_4934_; lean_object* v_attrs_4935_; lean_object* v___x_4939_; lean_object* v_docCommentStx_4940_; lean_object* v___x_4941_; lean_object* v_attrsStx_4942_; uint8_t v___y_4944_; lean_object* v___y_4945_; uint8_t v___y_4946_; uint8_t v___y_4947_; lean_object* v___y_4948_; uint8_t v___y_4949_; lean_object* v___x_4963_; lean_object* v_visibilityStx_4964_; lean_object* v___x_4965_; lean_object* v_protectedStx_4966_; lean_object* v___y_4968_; uint8_t v___y_4969_; uint8_t v___y_4970_; lean_object* v___y_4971_; lean_object* v___y_4972_; uint8_t v___y_4989_; lean_object* v___y_4990_; uint8_t v___y_4991_; lean_object* v___y_4992_; lean_object* v___y_5004_; uint8_t v___y_5005_; uint8_t v___y_5006_; uint8_t v___y_5018_; lean_object* v___x_5031_; lean_object* v___x_5032_; uint8_t v___x_5033_; 
v___x_4939_ = lean_unsigned_to_nat(0u);
v_docCommentStx_4940_ = l_Lean_Syntax_getArg(v_stx_4914_, v___x_4939_);
v___x_4941_ = lean_unsigned_to_nat(1u);
v_attrsStx_4942_ = l_Lean_Syntax_getArg(v_stx_4914_, v___x_4941_);
v___x_4963_ = lean_unsigned_to_nat(2u);
v_visibilityStx_4964_ = l_Lean_Syntax_getArg(v_stx_4914_, v___x_4963_);
v___x_4965_ = lean_unsigned_to_nat(3u);
v_protectedStx_4966_ = l_Lean_Syntax_getArg(v_stx_4914_, v___x_4965_);
v___x_5031_ = lean_unsigned_to_nat(4u);
v___x_5032_ = l_Lean_Syntax_getArg(v_stx_4914_, v___x_5031_);
v___x_5033_ = l_Lean_Syntax_isNone(v___x_5032_);
if (v___x_5033_ == 0)
{
lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; uint8_t v___x_5037_; 
v___x_5034_ = l_Lean_Syntax_getArg(v___x_5032_, v___x_4939_);
lean_dec(v___x_5032_);
v___x_5035_ = l_Lean_Syntax_getKind(v___x_5034_);
v___x_5036_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2));
v___x_5037_ = lean_name_eq(v___x_5035_, v___x_5036_);
lean_dec(v___x_5035_);
if (v___x_5037_ == 0)
{
uint8_t v___x_5038_; 
v___x_5038_ = 2;
v___y_5018_ = v___x_5038_;
goto v___jp_5017_;
}
else
{
uint8_t v___x_5039_; 
v___x_5039_ = 1;
v___y_5018_ = v___x_5039_;
goto v___jp_5017_;
}
}
else
{
uint8_t v___x_5040_; 
lean_dec(v___x_5032_);
v___x_5040_ = 0;
v___y_5018_ = v___x_5040_;
goto v___jp_5017_;
}
v___jp_4918_:
{
lean_object* v___x_4926_; lean_object* v___x_4927_; 
v___x_4926_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4926_, 0, v_stx_4914_);
lean_ctor_set(v___x_4926_, 1, v___y_4924_);
lean_ctor_set(v___x_4926_, 2, v___y_4923_);
lean_ctor_set_uint8(v___x_4926_, sizeof(void*)*3, v___y_4921_);
lean_ctor_set_uint8(v___x_4926_, sizeof(void*)*3 + 1, v___y_4920_);
lean_ctor_set_uint8(v___x_4926_, sizeof(void*)*3 + 2, v___y_4919_);
lean_ctor_set_uint8(v___x_4926_, sizeof(void*)*3 + 3, v___y_4922_);
lean_ctor_set_uint8(v___x_4926_, sizeof(void*)*3 + 4, v___y_4925_);
v___x_4927_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4927_, 0, v___x_4926_);
return v___x_4927_;
}
v___jp_4928_:
{
uint8_t v___x_4936_; 
v___x_4936_ = l_Lean_Syntax_isNone(v___y_4929_);
lean_dec(v___y_4929_);
if (v___x_4936_ == 0)
{
uint8_t v___x_4937_; 
v___x_4937_ = 1;
v___y_4919_ = v___y_4930_;
v___y_4920_ = v___y_4931_;
v___y_4921_ = v___y_4932_;
v___y_4922_ = v___y_4933_;
v___y_4923_ = v_attrs_4935_;
v___y_4924_ = v___y_4934_;
v___y_4925_ = v___x_4937_;
goto v___jp_4918_;
}
else
{
uint8_t v___x_4938_; 
v___x_4938_ = 0;
v___y_4919_ = v___y_4930_;
v___y_4920_ = v___y_4931_;
v___y_4921_ = v___y_4932_;
v___y_4922_ = v___y_4933_;
v___y_4923_ = v_attrs_4935_;
v___y_4924_ = v___y_4934_;
v___y_4925_ = v___x_4938_;
goto v___jp_4918_;
}
}
v___jp_4943_:
{
lean_object* v___x_4950_; 
v___x_4950_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_4942_);
lean_dec(v_attrsStx_4942_);
if (lean_obj_tag(v___x_4950_) == 0)
{
lean_object* v___x_4951_; 
v___x_4951_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v___y_4929_ = v___y_4945_;
v___y_4930_ = v___y_4944_;
v___y_4931_ = v___y_4949_;
v___y_4932_ = v___y_4946_;
v___y_4933_ = v___y_4947_;
v___y_4934_ = v___y_4948_;
v_attrs_4935_ = v___x_4951_;
goto v___jp_4928_;
}
else
{
lean_object* v_val_4952_; lean_object* v___x_4953_; 
v_val_4952_ = lean_ctor_get(v___x_4950_, 0);
lean_inc(v_val_4952_);
lean_dec_ref_known(v___x_4950_, 1);
v___x_4953_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_val_4952_, v___y_4915_, v___y_4916_);
lean_dec(v_val_4952_);
if (lean_obj_tag(v___x_4953_) == 0)
{
lean_object* v_a_4954_; 
v_a_4954_ = lean_ctor_get(v___x_4953_, 0);
lean_inc(v_a_4954_);
lean_dec_ref_known(v___x_4953_, 1);
v___y_4929_ = v___y_4945_;
v___y_4930_ = v___y_4944_;
v___y_4931_ = v___y_4949_;
v___y_4932_ = v___y_4946_;
v___y_4933_ = v___y_4947_;
v___y_4934_ = v___y_4948_;
v_attrs_4935_ = v_a_4954_;
goto v___jp_4928_;
}
else
{
lean_object* v_a_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4962_; 
lean_dec(v___y_4948_);
lean_dec(v___y_4945_);
lean_dec(v_stx_4914_);
v_a_4955_ = lean_ctor_get(v___x_4953_, 0);
v_isSharedCheck_4962_ = !lean_is_exclusive(v___x_4953_);
if (v_isSharedCheck_4962_ == 0)
{
v___x_4957_ = v___x_4953_;
v_isShared_4958_ = v_isSharedCheck_4962_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_a_4955_);
lean_dec(v___x_4953_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4962_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v___x_4960_; 
if (v_isShared_4958_ == 0)
{
v___x_4960_ = v___x_4957_;
goto v_reusejp_4959_;
}
else
{
lean_object* v_reuseFailAlloc_4961_; 
v_reuseFailAlloc_4961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4961_, 0, v_a_4955_);
v___x_4960_ = v_reuseFailAlloc_4961_;
goto v_reusejp_4959_;
}
v_reusejp_4959_:
{
return v___x_4960_;
}
}
}
}
}
v___jp_4967_:
{
lean_object* v___x_4973_; 
v___x_4973_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v___y_4972_, v___y_4915_, v___y_4916_);
if (lean_obj_tag(v___x_4973_) == 0)
{
lean_object* v_a_4974_; uint8_t v___x_4975_; 
v_a_4974_ = lean_ctor_get(v___x_4973_, 0);
lean_inc(v_a_4974_);
lean_dec_ref_known(v___x_4973_, 1);
v___x_4975_ = l_Lean_Syntax_isNone(v_protectedStx_4966_);
lean_dec(v_protectedStx_4966_);
if (v___x_4975_ == 0)
{
uint8_t v___x_4976_; uint8_t v___x_4977_; 
v___x_4976_ = 1;
v___x_4977_ = lean_unbox(v_a_4974_);
lean_dec(v_a_4974_);
v___y_4944_ = v___y_4969_;
v___y_4945_ = v___y_4968_;
v___y_4946_ = v___x_4977_;
v___y_4947_ = v___y_4970_;
v___y_4948_ = v___y_4971_;
v___y_4949_ = v___x_4976_;
goto v___jp_4943_;
}
else
{
uint8_t v___x_4978_; uint8_t v___x_4979_; 
v___x_4978_ = 0;
v___x_4979_ = lean_unbox(v_a_4974_);
lean_dec(v_a_4974_);
v___y_4944_ = v___y_4969_;
v___y_4945_ = v___y_4968_;
v___y_4946_ = v___x_4979_;
v___y_4947_ = v___y_4970_;
v___y_4948_ = v___y_4971_;
v___y_4949_ = v___x_4978_;
goto v___jp_4943_;
}
}
else
{
lean_object* v_a_4980_; lean_object* v___x_4982_; uint8_t v_isShared_4983_; uint8_t v_isSharedCheck_4987_; 
lean_dec(v___y_4971_);
lean_dec(v___y_4968_);
lean_dec(v_protectedStx_4966_);
lean_dec(v_attrsStx_4942_);
lean_dec(v_stx_4914_);
v_a_4980_ = lean_ctor_get(v___x_4973_, 0);
v_isSharedCheck_4987_ = !lean_is_exclusive(v___x_4973_);
if (v_isSharedCheck_4987_ == 0)
{
v___x_4982_ = v___x_4973_;
v_isShared_4983_ = v_isSharedCheck_4987_;
goto v_resetjp_4981_;
}
else
{
lean_inc(v_a_4980_);
lean_dec(v___x_4973_);
v___x_4982_ = lean_box(0);
v_isShared_4983_ = v_isSharedCheck_4987_;
goto v_resetjp_4981_;
}
v_resetjp_4981_:
{
lean_object* v___x_4985_; 
if (v_isShared_4983_ == 0)
{
v___x_4985_ = v___x_4982_;
goto v_reusejp_4984_;
}
else
{
lean_object* v_reuseFailAlloc_4986_; 
v_reuseFailAlloc_4986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4986_, 0, v_a_4980_);
v___x_4985_ = v_reuseFailAlloc_4986_;
goto v_reusejp_4984_;
}
v_reusejp_4984_:
{
return v___x_4985_;
}
}
}
}
v___jp_4988_:
{
lean_object* v___x_4993_; 
v___x_4993_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_4964_);
lean_dec(v_visibilityStx_4964_);
if (lean_obj_tag(v___x_4993_) == 0)
{
lean_object* v___x_4994_; 
v___x_4994_ = lean_box(0);
v___y_4968_ = v___y_4990_;
v___y_4969_ = v___y_4989_;
v___y_4970_ = v___y_4991_;
v___y_4971_ = v___y_4992_;
v___y_4972_ = v___x_4994_;
goto v___jp_4967_;
}
else
{
lean_object* v_val_4995_; lean_object* v___x_4997_; uint8_t v_isShared_4998_; uint8_t v_isSharedCheck_5002_; 
v_val_4995_ = lean_ctor_get(v___x_4993_, 0);
v_isSharedCheck_5002_ = !lean_is_exclusive(v___x_4993_);
if (v_isSharedCheck_5002_ == 0)
{
v___x_4997_ = v___x_4993_;
v_isShared_4998_ = v_isSharedCheck_5002_;
goto v_resetjp_4996_;
}
else
{
lean_inc(v_val_4995_);
lean_dec(v___x_4993_);
v___x_4997_ = lean_box(0);
v_isShared_4998_ = v_isSharedCheck_5002_;
goto v_resetjp_4996_;
}
v_resetjp_4996_:
{
lean_object* v___x_5000_; 
if (v_isShared_4998_ == 0)
{
v___x_5000_ = v___x_4997_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5001_; 
v_reuseFailAlloc_5001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5001_, 0, v_val_4995_);
v___x_5000_ = v_reuseFailAlloc_5001_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
v___y_4968_ = v___y_4990_;
v___y_4969_ = v___y_4989_;
v___y_4970_ = v___y_4991_;
v___y_4971_ = v___y_4992_;
v___y_4972_ = v___x_5000_;
goto v___jp_4967_;
}
}
}
}
v___jp_5003_:
{
lean_object* v___x_5007_; 
v___x_5007_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_4940_);
lean_dec(v_docCommentStx_4940_);
if (lean_obj_tag(v___x_5007_) == 0)
{
lean_object* v___x_5008_; 
v___x_5008_ = lean_box(0);
v___y_4989_ = v___y_5005_;
v___y_4990_ = v___y_5004_;
v___y_4991_ = v___y_5006_;
v___y_4992_ = v___x_5008_;
goto v___jp_4988_;
}
else
{
lean_object* v_val_5009_; lean_object* v___x_5011_; uint8_t v_isShared_5012_; uint8_t v_isSharedCheck_5016_; 
v_val_5009_ = lean_ctor_get(v___x_5007_, 0);
v_isSharedCheck_5016_ = !lean_is_exclusive(v___x_5007_);
if (v_isSharedCheck_5016_ == 0)
{
v___x_5011_ = v___x_5007_;
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
else
{
lean_inc(v_val_5009_);
lean_dec(v___x_5007_);
v___x_5011_ = lean_box(0);
v_isShared_5012_ = v_isSharedCheck_5016_;
goto v_resetjp_5010_;
}
v_resetjp_5010_:
{
lean_object* v___x_5014_; 
if (v_isShared_5012_ == 0)
{
v___x_5014_ = v___x_5011_;
goto v_reusejp_5013_;
}
else
{
lean_object* v_reuseFailAlloc_5015_; 
v_reuseFailAlloc_5015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5015_, 0, v_val_5009_);
v___x_5014_ = v_reuseFailAlloc_5015_;
goto v_reusejp_5013_;
}
v_reusejp_5013_:
{
v___y_4989_ = v___y_5005_;
v___y_4990_ = v___y_5004_;
v___y_4991_ = v___y_5006_;
v___y_4992_ = v___x_5014_;
goto v___jp_4988_;
}
}
}
}
v___jp_5017_:
{
lean_object* v___x_5019_; lean_object* v_unsafeStx_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; uint8_t v___x_5023_; 
v___x_5019_ = lean_unsigned_to_nat(5u);
v_unsafeStx_5020_ = l_Lean_Syntax_getArg(v_stx_4914_, v___x_5019_);
v___x_5021_ = lean_unsigned_to_nat(6u);
v___x_5022_ = l_Lean_Syntax_getArg(v_stx_4914_, v___x_5021_);
v___x_5023_ = l_Lean_Syntax_isNone(v___x_5022_);
if (v___x_5023_ == 0)
{
lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; uint8_t v___x_5027_; 
v___x_5024_ = l_Lean_Syntax_getArg(v___x_5022_, v___x_4939_);
lean_dec(v___x_5022_);
v___x_5025_ = l_Lean_Syntax_getKind(v___x_5024_);
v___x_5026_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1));
v___x_5027_ = lean_name_eq(v___x_5025_, v___x_5026_);
lean_dec(v___x_5025_);
if (v___x_5027_ == 0)
{
uint8_t v___x_5028_; 
v___x_5028_ = 1;
v___y_5004_ = v_unsafeStx_5020_;
v___y_5005_ = v___y_5018_;
v___y_5006_ = v___x_5028_;
goto v___jp_5003_;
}
else
{
uint8_t v___x_5029_; 
v___x_5029_ = 0;
v___y_5004_ = v_unsafeStx_5020_;
v___y_5005_ = v___y_5018_;
v___y_5006_ = v___x_5029_;
goto v___jp_5003_;
}
}
else
{
uint8_t v___x_5030_; 
lean_dec(v___x_5022_);
v___x_5030_ = 2;
v___y_5004_ = v_unsafeStx_5020_;
v___y_5005_ = v___y_5018_;
v___y_5006_ = v___x_5030_;
goto v___jp_5003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_stx_5041_, lean_object* v___y_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_){
_start:
{
lean_object* v_res_5045_; 
v_res_5045_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_stx_5041_, v___y_5042_, v___y_5043_);
lean_dec(v___y_5043_);
lean_dec_ref(v___y_5042_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3(lean_object* v_mods_5046_, lean_object* v___x_5047_, lean_object* v_projId_5048_, lean_object* v___x_5049_, lean_object* v___x_5050_, lean_object* v___x_5051_, lean_object* v_params_5052_, lean_object* v___x_5053_, lean_object* v___x_5054_, lean_object* v_optDeriving_5055_, lean_object* v___x_5056_, lean_object* v___y_5057_, lean_object* v___y_5058_){
_start:
{
lean_object* v___x_5060_; 
lean_inc(v_mods_5046_);
v___x_5060_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_mods_5046_, v___y_5057_, v___y_5058_);
if (lean_obj_tag(v___x_5060_) == 0)
{
lean_object* v_a_5061_; lean_object* v___f_5062_; lean_object* v___x_5063_; lean_object* v_env_5064_; uint8_t v___x_5065_; lean_object* v___x_5066_; 
v_a_5061_ = lean_ctor_get(v___x_5060_, 0);
lean_inc_n(v_a_5061_, 2);
lean_dec_ref_known(v___x_5060_, 1);
v___f_5062_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__2___boxed), 15, 12);
lean_closure_set(v___f_5062_, 0, v___x_5047_);
lean_closure_set(v___f_5062_, 1, v_a_5061_);
lean_closure_set(v___f_5062_, 2, v_projId_5048_);
lean_closure_set(v___f_5062_, 3, v___x_5049_);
lean_closure_set(v___f_5062_, 4, v___x_5050_);
lean_closure_set(v___f_5062_, 5, v___x_5051_);
lean_closure_set(v___f_5062_, 6, v_params_5052_);
lean_closure_set(v___f_5062_, 7, v___x_5053_);
lean_closure_set(v___f_5062_, 8, v_mods_5046_);
lean_closure_set(v___f_5062_, 9, v___x_5054_);
lean_closure_set(v___f_5062_, 10, v_optDeriving_5055_);
lean_closure_set(v___f_5062_, 11, v___x_5056_);
v___x_5063_ = lean_st_ref_get(v___y_5058_);
v_env_5064_ = lean_ctor_get(v___x_5063_, 0);
lean_inc_ref(v_env_5064_);
lean_dec(v___x_5063_);
v___x_5065_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_5064_, v_a_5061_);
lean_dec(v_a_5061_);
lean_dec_ref(v_env_5064_);
v___x_5066_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5062_, v___x_5065_, v___y_5057_, v___y_5058_);
return v___x_5066_;
}
else
{
lean_object* v_a_5067_; lean_object* v___x_5069_; uint8_t v_isShared_5070_; uint8_t v_isSharedCheck_5074_; 
lean_dec(v___x_5056_);
lean_dec(v_optDeriving_5055_);
lean_dec(v___x_5054_);
lean_dec(v___x_5053_);
lean_dec_ref(v_params_5052_);
lean_dec_ref(v___x_5051_);
lean_dec_ref(v___x_5050_);
lean_dec_ref(v___x_5049_);
lean_dec(v_projId_5048_);
lean_dec(v___x_5047_);
lean_dec(v_mods_5046_);
v_a_5067_ = lean_ctor_get(v___x_5060_, 0);
v_isSharedCheck_5074_ = !lean_is_exclusive(v___x_5060_);
if (v_isSharedCheck_5074_ == 0)
{
v___x_5069_ = v___x_5060_;
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
else
{
lean_inc(v_a_5067_);
lean_dec(v___x_5060_);
v___x_5069_ = lean_box(0);
v_isShared_5070_ = v_isSharedCheck_5074_;
goto v_resetjp_5068_;
}
v_resetjp_5068_:
{
lean_object* v___x_5072_; 
if (v_isShared_5070_ == 0)
{
v___x_5072_ = v___x_5069_;
goto v_reusejp_5071_;
}
else
{
lean_object* v_reuseFailAlloc_5073_; 
v_reuseFailAlloc_5073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5073_, 0, v_a_5067_);
v___x_5072_ = v_reuseFailAlloc_5073_;
goto v_reusejp_5071_;
}
v_reusejp_5071_:
{
return v___x_5072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3___boxed(lean_object* v_mods_5075_, lean_object* v___x_5076_, lean_object* v_projId_5077_, lean_object* v___x_5078_, lean_object* v___x_5079_, lean_object* v___x_5080_, lean_object* v_params_5081_, lean_object* v___x_5082_, lean_object* v___x_5083_, lean_object* v_optDeriving_5084_, lean_object* v___x_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_){
_start:
{
lean_object* v_res_5089_; 
v_res_5089_ = l_Lean_Elab_Command_elabNewtype___lam__3(v_mods_5075_, v___x_5076_, v_projId_5077_, v___x_5078_, v___x_5079_, v___x_5080_, v_params_5081_, v___x_5082_, v___x_5083_, v_optDeriving_5084_, v___x_5085_, v___y_5086_, v___y_5087_);
lean_dec(v___y_5087_);
lean_dec_ref(v___y_5086_);
return v_res_5089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_stx_5090_, lean_object* v_a_5091_, lean_object* v_a_5092_){
_start:
{
lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v_mods_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v_params_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; lean_object* v_projId_5108_; lean_object* v___x_5109_; lean_object* v_optDeriving_5110_; lean_object* v___f_5111_; lean_object* v___x_5112_; 
v___x_5094_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0));
v___x_5095_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1));
v___x_5096_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5));
v___x_5097_ = lean_box(0);
v___x_5098_ = lean_unsigned_to_nat(0u);
v_mods_5099_ = l_Lean_Syntax_getArg(v_stx_5090_, v___x_5098_);
v___x_5100_ = lean_unsigned_to_nat(2u);
v___x_5101_ = l_Lean_Syntax_getArg(v_stx_5090_, v___x_5100_);
v___x_5102_ = lean_unsigned_to_nat(3u);
v___x_5103_ = l_Lean_Syntax_getArg(v_stx_5090_, v___x_5102_);
v_params_5104_ = l_Lean_Syntax_getArgs(v___x_5103_);
lean_dec(v___x_5103_);
v___x_5105_ = lean_unsigned_to_nat(5u);
v___x_5106_ = l_Lean_Syntax_getArg(v_stx_5090_, v___x_5105_);
v___x_5107_ = lean_unsigned_to_nat(7u);
v_projId_5108_ = l_Lean_Syntax_getArg(v_stx_5090_, v___x_5107_);
v___x_5109_ = lean_unsigned_to_nat(8u);
v_optDeriving_5110_ = l_Lean_Syntax_getArg(v_stx_5090_, v___x_5109_);
v___f_5111_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__3___boxed), 14, 11);
lean_closure_set(v___f_5111_, 0, v_mods_5099_);
lean_closure_set(v___f_5111_, 1, v___x_5101_);
lean_closure_set(v___f_5111_, 2, v_projId_5108_);
lean_closure_set(v___f_5111_, 3, v___x_5094_);
lean_closure_set(v___f_5111_, 4, v___x_5095_);
lean_closure_set(v___f_5111_, 5, v___x_5096_);
lean_closure_set(v___f_5111_, 6, v_params_5104_);
lean_closure_set(v___f_5111_, 7, v___x_5106_);
lean_closure_set(v___f_5111_, 8, v___x_5097_);
lean_closure_set(v___f_5111_, 9, v_optDeriving_5110_);
lean_closure_set(v___f_5111_, 10, v___x_5098_);
v___x_5112_ = l_Lean_Elab_Command_getScope___redArg(v_a_5092_);
if (lean_obj_tag(v___x_5112_) == 0)
{
lean_object* v_a_5113_; uint8_t v_isPublic_5114_; lean_object* v___x_5115_; 
v_a_5113_ = lean_ctor_get(v___x_5112_, 0);
lean_inc(v_a_5113_);
lean_dec_ref_known(v___x_5112_, 1);
v_isPublic_5114_ = lean_ctor_get_uint8(v_a_5113_, sizeof(void*)*10 + 1);
lean_dec(v_a_5113_);
v___x_5115_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5111_, v_isPublic_5114_, v_a_5091_, v_a_5092_);
return v___x_5115_;
}
else
{
lean_object* v_a_5116_; lean_object* v___x_5118_; uint8_t v_isShared_5119_; uint8_t v_isSharedCheck_5123_; 
lean_dec_ref(v___f_5111_);
v_a_5116_ = lean_ctor_get(v___x_5112_, 0);
v_isSharedCheck_5123_ = !lean_is_exclusive(v___x_5112_);
if (v_isSharedCheck_5123_ == 0)
{
v___x_5118_ = v___x_5112_;
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
else
{
lean_inc(v_a_5116_);
lean_dec(v___x_5112_);
v___x_5118_ = lean_box(0);
v_isShared_5119_ = v_isSharedCheck_5123_;
goto v_resetjp_5117_;
}
v_resetjp_5117_:
{
lean_object* v___x_5121_; 
if (v_isShared_5119_ == 0)
{
v___x_5121_ = v___x_5118_;
goto v_reusejp_5120_;
}
else
{
lean_object* v_reuseFailAlloc_5122_; 
v_reuseFailAlloc_5122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5122_, 0, v_a_5116_);
v___x_5121_ = v_reuseFailAlloc_5122_;
goto v_reusejp_5120_;
}
v_reusejp_5120_:
{
return v___x_5121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_stx_5124_, lean_object* v_a_5125_, lean_object* v_a_5126_, lean_object* v_a_5127_){
_start:
{
lean_object* v_res_5128_; 
v_res_5128_ = l_Lean_Elab_Command_elabNewtype(v_stx_5124_, v_a_5125_, v_a_5126_);
lean_dec(v_a_5126_);
lean_dec_ref(v_a_5125_);
lean_dec(v_stx_5124_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(lean_object* v_stx_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_){
_start:
{
lean_object* v___x_5133_; 
v___x_5133_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_5129_, v___y_5130_);
return v___x_5133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___boxed(lean_object* v_stx_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_){
_start:
{
lean_object* v_res_5138_; 
v_res_5138_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(v_stx_5134_, v___y_5135_, v___y_5136_);
lean_dec(v___y_5136_);
lean_dec_ref(v___y_5135_);
lean_dec(v_stx_5134_);
return v_res_5138_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(lean_object* v_declName_5139_, lean_object* v_declRanges_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_){
_start:
{
lean_object* v___x_5144_; 
v___x_5144_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_5139_, v_declRanges_5140_, v___y_5142_);
return v___x_5144_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___boxed(lean_object* v_declName_5145_, lean_object* v_declRanges_5146_, lean_object* v___y_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_){
_start:
{
lean_object* v_res_5150_; 
v_res_5150_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(v_declName_5145_, v_declRanges_5146_, v___y_5147_, v___y_5148_);
lean_dec(v___y_5148_);
lean_dec_ref(v___y_5147_);
return v_res_5150_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(lean_object* v_declName_5151_, uint8_t v_s_5152_, lean_object* v___y_5153_, lean_object* v___y_5154_){
_start:
{
lean_object* v___x_5156_; 
v___x_5156_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_declName_5151_, v_s_5152_, v___y_5154_);
return v___x_5156_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___boxed(lean_object* v_declName_5157_, lean_object* v_s_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_){
_start:
{
uint8_t v_s_boxed_5162_; lean_object* v_res_5163_; 
v_s_boxed_5162_ = lean_unbox(v_s_5158_);
v_res_5163_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(v_declName_5157_, v_s_boxed_5162_, v___y_5159_, v___y_5160_);
lean_dec(v___y_5160_);
lean_dec_ref(v___y_5159_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_as_5164_, lean_object* v_as_x27_5165_, lean_object* v_b_5166_, lean_object* v_a_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_){
_start:
{
lean_object* v___x_5171_; 
v___x_5171_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_as_x27_5165_, v_b_5166_, v___y_5168_, v___y_5169_);
return v___x_5171_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_as_5172_, lean_object* v_as_x27_5173_, lean_object* v_b_5174_, lean_object* v_a_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_){
_start:
{
lean_object* v_res_5179_; 
v_res_5179_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__6(v_as_5172_, v_as_x27_5173_, v_b_5174_, v_a_5175_, v___y_5176_, v___y_5177_);
lean_dec(v___y_5177_);
lean_dec_ref(v___y_5176_);
lean_dec(v_as_x27_5173_);
lean_dec(v_as_5172_);
return v_res_5179_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_as_5180_, lean_object* v_as_x27_5181_, lean_object* v_b_5182_, lean_object* v_a_5183_, lean_object* v___y_5184_, lean_object* v___y_5185_){
_start:
{
lean_object* v___x_5187_; 
v___x_5187_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___redArg(v_as_x27_5181_, v_b_5182_, v___y_5184_, v___y_5185_);
return v___x_5187_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_as_5188_, lean_object* v_as_x27_5189_, lean_object* v_b_5190_, lean_object* v_a_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_){
_start:
{
lean_object* v_res_5195_; 
v_res_5195_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__7(v_as_5188_, v_as_x27_5189_, v_b_5190_, v_a_5191_, v___y_5192_, v___y_5193_);
lean_dec(v___y_5193_);
lean_dec_ref(v___y_5192_);
lean_dec(v_as_x27_5189_);
lean_dec(v_as_5188_);
return v_res_5195_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17(lean_object* v_00_u03b1_5196_, lean_object* v_x_5197_, uint8_t v_isExporting_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_){
_start:
{
lean_object* v___x_5206_; 
v___x_5206_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___redArg(v_x_5197_, v_isExporting_5198_, v___y_5199_, v___y_5200_, v___y_5201_, v___y_5202_, v___y_5203_, v___y_5204_);
return v___x_5206_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17___boxed(lean_object* v_00_u03b1_5207_, lean_object* v_x_5208_, lean_object* v_isExporting_5209_, lean_object* v___y_5210_, lean_object* v___y_5211_, lean_object* v___y_5212_, lean_object* v___y_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_){
_start:
{
uint8_t v_isExporting_boxed_5217_; lean_object* v_res_5218_; 
v_isExporting_boxed_5217_ = lean_unbox(v_isExporting_5209_);
v_res_5218_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9_spec__17(v_00_u03b1_5207_, v_x_5208_, v_isExporting_boxed_5217_, v___y_5210_, v___y_5211_, v___y_5212_, v___y_5213_, v___y_5214_, v___y_5215_);
lean_dec(v___y_5215_);
lean_dec_ref(v___y_5214_);
lean_dec(v___y_5213_);
lean_dec_ref(v___y_5212_);
lean_dec(v___y_5211_);
lean_dec_ref(v___y_5210_);
return v_res_5218_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v_00_u03b1_5219_, lean_object* v_x_5220_, uint8_t v_when_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_, lean_object* v___y_5226_, lean_object* v___y_5227_){
_start:
{
lean_object* v___x_5229_; 
v___x_5229_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_x_5220_, v_when_5221_, v___y_5222_, v___y_5223_, v___y_5224_, v___y_5225_, v___y_5226_, v___y_5227_);
return v___x_5229_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v_00_u03b1_5230_, lean_object* v_x_5231_, lean_object* v_when_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_){
_start:
{
uint8_t v_when_boxed_5240_; lean_object* v_res_5241_; 
v_when_boxed_5240_ = lean_unbox(v_when_5232_);
v_res_5241_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__9(v_00_u03b1_5230_, v_x_5231_, v_when_boxed_5240_, v___y_5233_, v___y_5234_, v___y_5235_, v___y_5236_, v___y_5237_, v___y_5238_);
lean_dec(v___y_5238_);
lean_dec_ref(v___y_5237_);
lean_dec(v___y_5236_);
lean_dec_ref(v___y_5235_);
lean_dec(v___y_5234_);
lean_dec_ref(v___y_5233_);
return v_res_5241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(lean_object* v_t_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_){
_start:
{
lean_object* v___x_5246_; 
v___x_5246_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_5242_, v___y_5244_);
return v___x_5246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___boxed(lean_object* v_t_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_){
_start:
{
lean_object* v_res_5251_; 
v_res_5251_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(v_t_5247_, v___y_5248_, v___y_5249_);
lean_dec(v___y_5249_);
lean_dec_ref(v___y_5248_);
return v_res_5251_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15(lean_object* v_00_u03b1_5252_, lean_object* v_constName_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_){
_start:
{
lean_object* v___x_5261_; 
v___x_5261_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___redArg(v_constName_5253_, v___y_5254_, v___y_5255_, v___y_5256_, v___y_5257_, v___y_5258_, v___y_5259_);
return v___x_5261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15___boxed(lean_object* v_00_u03b1_5262_, lean_object* v_constName_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_){
_start:
{
lean_object* v_res_5271_; 
v_res_5271_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15(v_00_u03b1_5262_, v_constName_5263_, v___y_5264_, v___y_5265_, v___y_5266_, v___y_5267_, v___y_5268_, v___y_5269_);
lean_dec(v___y_5269_);
lean_dec_ref(v___y_5268_);
lean_dec(v___y_5267_);
lean_dec_ref(v___y_5266_);
lean_dec(v___y_5265_);
lean_dec_ref(v___y_5264_);
return v_res_5271_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_5272_, lean_object* v_ref_5273_, lean_object* v_msg_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_){
_start:
{
lean_object* v___x_5278_; 
v___x_5278_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_5273_, v_msg_5274_, v___y_5275_, v___y_5276_);
return v___x_5278_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5279_, lean_object* v_ref_5280_, lean_object* v_msg_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(v_00_u03b1_5279_, v_ref_5280_, v_msg_5281_, v___y_5282_, v___y_5283_);
lean_dec(v___y_5283_);
lean_dec_ref(v___y_5282_);
lean_dec(v_ref_5280_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25(lean_object* v_00_u03b1_5286_, lean_object* v_ref_5287_, lean_object* v_constName_5288_, lean_object* v___y_5289_, lean_object* v___y_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_){
_start:
{
lean_object* v___x_5296_; 
v___x_5296_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___redArg(v_ref_5287_, v_constName_5288_, v___y_5289_, v___y_5290_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_);
return v___x_5296_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25___boxed(lean_object* v_00_u03b1_5297_, lean_object* v_ref_5298_, lean_object* v_constName_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_){
_start:
{
lean_object* v_res_5307_; 
v_res_5307_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25(v_00_u03b1_5297_, v_ref_5298_, v_constName_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_, v___y_5304_, v___y_5305_);
lean_dec(v___y_5305_);
lean_dec_ref(v___y_5304_);
lean_dec(v___y_5303_);
lean_dec_ref(v___y_5302_);
lean_dec(v___y_5301_);
lean_dec_ref(v___y_5300_);
lean_dec(v_ref_5298_);
return v_res_5307_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(lean_object* v_msgData_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_){
_start:
{
lean_object* v___x_5312_; 
v___x_5312_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_5308_, v___y_5310_);
return v___x_5312_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___boxed(lean_object* v_msgData_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_){
_start:
{
lean_object* v_res_5317_; 
v_res_5317_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(v_msgData_5313_, v___y_5314_, v___y_5315_);
lean_dec(v___y_5315_);
lean_dec_ref(v___y_5314_);
return v_res_5317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(lean_object* v_00_u03b1_5318_, lean_object* v_msg_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_){
_start:
{
lean_object* v___x_5323_; 
v___x_5323_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_5319_, v___y_5320_, v___y_5321_);
return v___x_5323_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___boxed(lean_object* v_00_u03b1_5324_, lean_object* v_msg_5325_, lean_object* v___y_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_){
_start:
{
lean_object* v_res_5329_; 
v_res_5329_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(v_00_u03b1_5324_, v_msg_5325_, v___y_5326_, v___y_5327_);
lean_dec(v___y_5327_);
lean_dec_ref(v___y_5326_);
return v_res_5329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(lean_object* v_o_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_){
_start:
{
lean_object* v___x_5334_; 
v___x_5334_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_5330_, v___y_5332_);
return v___x_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___boxed(lean_object* v_o_5335_, lean_object* v___y_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_){
_start:
{
lean_object* v_res_5339_; 
v_res_5339_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(v_o_5335_, v___y_5336_, v___y_5337_);
lean_dec(v___y_5337_);
lean_dec_ref(v___y_5336_);
return v_res_5339_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(lean_object* v_00_u03b1_5340_, lean_object* v_constName_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_){
_start:
{
lean_object* v___x_5345_; 
v___x_5345_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_5341_, v___y_5342_, v___y_5343_);
return v___x_5345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___boxed(lean_object* v_00_u03b1_5346_, lean_object* v_constName_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_, lean_object* v___y_5350_){
_start:
{
lean_object* v_res_5351_; 
v_res_5351_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(v_00_u03b1_5346_, v_constName_5347_, v___y_5348_, v___y_5349_);
lean_dec(v___y_5349_);
lean_dec_ref(v___y_5348_);
return v_res_5351_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37(lean_object* v_00_u03b1_5352_, lean_object* v_ref_5353_, lean_object* v_msg_5354_, lean_object* v_declHint_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_){
_start:
{
lean_object* v___x_5363_; 
v___x_5363_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___redArg(v_ref_5353_, v_msg_5354_, v_declHint_5355_, v___y_5356_, v___y_5357_, v___y_5358_, v___y_5359_, v___y_5360_, v___y_5361_);
return v___x_5363_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37___boxed(lean_object* v_00_u03b1_5364_, lean_object* v_ref_5365_, lean_object* v_msg_5366_, lean_object* v_declHint_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_){
_start:
{
lean_object* v_res_5375_; 
v_res_5375_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37(v_00_u03b1_5364_, v_ref_5365_, v_msg_5366_, v_declHint_5367_, v___y_5368_, v___y_5369_, v___y_5370_, v___y_5371_, v___y_5372_, v___y_5373_);
lean_dec(v___y_5373_);
lean_dec_ref(v___y_5372_);
lean_dec(v___y_5371_);
lean_dec_ref(v___y_5370_);
lean_dec(v___y_5369_);
lean_dec_ref(v___y_5368_);
lean_dec(v_ref_5365_);
return v_res_5375_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40(lean_object* v_ref_5376_, lean_object* v_msgData_5377_, uint8_t v_severity_5378_, uint8_t v_isSilent_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_){
_start:
{
lean_object* v___x_5387_; 
v___x_5387_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___redArg(v_ref_5376_, v_msgData_5377_, v_severity_5378_, v_isSilent_5379_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
return v___x_5387_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40___boxed(lean_object* v_ref_5388_, lean_object* v_msgData_5389_, lean_object* v_severity_5390_, lean_object* v_isSilent_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_){
_start:
{
uint8_t v_severity_boxed_5399_; uint8_t v_isSilent_boxed_5400_; lean_object* v_res_5401_; 
v_severity_boxed_5399_ = lean_unbox(v_severity_5390_);
v_isSilent_boxed_5400_ = lean_unbox(v_isSilent_5391_);
v_res_5401_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__10_spec__19_spec__30_spec__40(v_ref_5388_, v_msgData_5389_, v_severity_boxed_5399_, v_isSilent_boxed_5400_, v___y_5392_, v___y_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_);
lean_dec(v___y_5397_);
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
lean_dec(v___y_5393_);
lean_dec_ref(v___y_5392_);
lean_dec(v_ref_5388_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(lean_object* v_msgData_5402_, lean_object* v_macroStack_5403_, lean_object* v___y_5404_, lean_object* v___y_5405_){
_start:
{
lean_object* v___x_5407_; 
v___x_5407_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_5402_, v_macroStack_5403_, v___y_5405_);
return v___x_5407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___boxed(lean_object* v_msgData_5408_, lean_object* v_macroStack_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_){
_start:
{
lean_object* v_res_5413_; 
v_res_5413_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(v_msgData_5408_, v_macroStack_5409_, v___y_5410_, v___y_5411_);
lean_dec(v___y_5411_);
lean_dec_ref(v___y_5410_);
return v_res_5413_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(lean_object* v_00_u03b1_5414_, lean_object* v_x_5415_, lean_object* v___y_5416_, lean_object* v___y_5417_){
_start:
{
lean_object* v___x_5418_; 
v___x_5418_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_5415_, v___y_5417_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___boxed(lean_object* v_00_u03b1_5419_, lean_object* v_x_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_){
_start:
{
lean_object* v_res_5423_; 
v_res_5423_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(v_00_u03b1_5419_, v_x_5420_, v___y_5421_, v___y_5422_);
lean_dec_ref(v___y_5421_);
lean_dec_ref(v_x_5420_);
return v_res_5423_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(lean_object* v_00_u03b1_5424_, lean_object* v_ref_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_){
_start:
{
lean_object* v___x_5429_; 
v___x_5429_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_5425_);
return v___x_5429_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___boxed(lean_object* v_00_u03b1_5430_, lean_object* v_ref_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_){
_start:
{
lean_object* v_res_5435_; 
v_res_5435_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(v_00_u03b1_5430_, v_ref_5431_, v___y_5432_, v___y_5433_);
lean_dec(v___y_5433_);
lean_dec_ref(v___y_5432_);
return v_res_5435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(lean_object* v_00_u03b1_5436_, lean_object* v___y_5437_, lean_object* v___y_5438_){
_start:
{
lean_object* v___x_5440_; 
v___x_5440_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_5440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___boxed(lean_object* v_00_u03b1_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_){
_start:
{
lean_object* v_res_5445_; 
v_res_5445_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(v_00_u03b1_5441_, v___y_5442_, v___y_5443_);
lean_dec(v___y_5443_);
lean_dec_ref(v___y_5442_);
return v_res_5445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(lean_object* v_00_u03b1_5446_, lean_object* v_x_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_){
_start:
{
lean_object* v___x_5451_; 
v___x_5451_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_5447_, v___y_5448_, v___y_5449_);
return v___x_5451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___boxed(lean_object* v_00_u03b1_5452_, lean_object* v_x_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_){
_start:
{
lean_object* v_res_5457_; 
v_res_5457_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(v_00_u03b1_5452_, v_x_5453_, v___y_5454_, v___y_5455_);
lean_dec(v___y_5455_);
lean_dec_ref(v___y_5454_);
return v_res_5457_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(lean_object* v_00_u03b1_5458_, lean_object* v_x_5459_, uint8_t v_when_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_){
_start:
{
lean_object* v___x_5464_; 
v___x_5464_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_5459_, v_when_5460_, v___y_5461_, v___y_5462_);
return v___x_5464_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___boxed(lean_object* v_00_u03b1_5465_, lean_object* v_x_5466_, lean_object* v_when_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_){
_start:
{
uint8_t v_when_boxed_5471_; lean_object* v_res_5472_; 
v_when_boxed_5471_ = lean_unbox(v_when_5467_);
v_res_5472_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(v_00_u03b1_5465_, v_x_5466_, v_when_boxed_5471_, v___y_5468_, v___y_5469_);
lean_dec(v___y_5469_);
lean_dec_ref(v___y_5468_);
return v_res_5472_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(lean_object* v_00_u03b1_5473_, lean_object* v_ref_5474_, lean_object* v_constName_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_){
_start:
{
lean_object* v___x_5479_; 
v___x_5479_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_5474_, v_constName_5475_, v___y_5476_, v___y_5477_);
return v___x_5479_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___boxed(lean_object* v_00_u03b1_5480_, lean_object* v_ref_5481_, lean_object* v_constName_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_){
_start:
{
lean_object* v_res_5486_; 
v_res_5486_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(v_00_u03b1_5480_, v_ref_5481_, v_constName_5482_, v___y_5483_, v___y_5484_);
lean_dec(v___y_5484_);
lean_dec_ref(v___y_5483_);
lean_dec(v_ref_5481_);
return v_res_5486_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64(lean_object* v_msg_5487_, lean_object* v_declHint_5488_, lean_object* v___y_5489_, lean_object* v___y_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_){
_start:
{
lean_object* v___x_5496_; 
v___x_5496_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___redArg(v_msg_5487_, v_declHint_5488_, v___y_5494_);
return v___x_5496_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64___boxed(lean_object* v_msg_5497_, lean_object* v_declHint_5498_, lean_object* v___y_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_){
_start:
{
lean_object* v_res_5506_; 
v_res_5506_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__49_spec__64(v_msg_5497_, v_declHint_5498_, v___y_5499_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_);
lean_dec(v___y_5504_);
lean_dec_ref(v___y_5503_);
lean_dec(v___y_5502_);
lean_dec_ref(v___y_5501_);
lean_dec(v___y_5500_);
lean_dec_ref(v___y_5499_);
return v_res_5506_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50(lean_object* v_00_u03b1_5507_, lean_object* v_ref_5508_, lean_object* v_msg_5509_, lean_object* v___y_5510_, lean_object* v___y_5511_, lean_object* v___y_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_){
_start:
{
lean_object* v___x_5517_; 
v___x_5517_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___redArg(v_ref_5508_, v_msg_5509_, v___y_5510_, v___y_5511_, v___y_5512_, v___y_5513_, v___y_5514_, v___y_5515_);
return v___x_5517_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50___boxed(lean_object* v_00_u03b1_5518_, lean_object* v_ref_5519_, lean_object* v_msg_5520_, lean_object* v___y_5521_, lean_object* v___y_5522_, lean_object* v___y_5523_, lean_object* v___y_5524_, lean_object* v___y_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_){
_start:
{
lean_object* v_res_5528_; 
v_res_5528_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__8_spec__15_spec__25_spec__37_spec__50(v_00_u03b1_5518_, v_ref_5519_, v_msg_5520_, v___y_5521_, v___y_5522_, v___y_5523_, v___y_5524_, v___y_5525_, v___y_5526_);
lean_dec(v___y_5526_);
lean_dec_ref(v___y_5525_);
lean_dec(v___y_5524_);
lean_dec_ref(v___y_5523_);
lean_dec(v___y_5522_);
lean_dec_ref(v___y_5521_);
lean_dec(v_ref_5519_);
return v_res_5528_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(lean_object* v_as_5529_, lean_object* v_as_x27_5530_, lean_object* v_b_5531_, lean_object* v_a_5532_, lean_object* v___y_5533_, lean_object* v___y_5534_){
_start:
{
lean_object* v___x_5536_; 
v___x_5536_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_5530_, v_b_5531_, v___y_5533_, v___y_5534_);
return v___x_5536_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___boxed(lean_object* v_as_5537_, lean_object* v_as_x27_5538_, lean_object* v_b_5539_, lean_object* v_a_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_){
_start:
{
lean_object* v_res_5544_; 
v_res_5544_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(v_as_5537_, v_as_x27_5538_, v_b_5539_, v_a_5540_, v___y_5541_, v___y_5542_);
lean_dec(v___y_5542_);
lean_dec_ref(v___y_5541_);
lean_dec(v_as_x27_5538_);
lean_dec(v_as_5537_);
return v_res_5544_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(lean_object* v_00_u03b2_5545_, lean_object* v_m_5546_, lean_object* v_a_5547_){
_start:
{
lean_object* v___x_5548_; 
v___x_5548_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_5546_, v_a_5547_);
return v___x_5548_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___boxed(lean_object* v_00_u03b2_5549_, lean_object* v_m_5550_, lean_object* v_a_5551_){
_start:
{
lean_object* v_res_5552_; 
v_res_5552_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(v_00_u03b2_5549_, v_m_5550_, v_a_5551_);
lean_dec(v_a_5551_);
lean_dec_ref(v_m_5550_);
return v_res_5552_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(lean_object* v_00_u03b1_5553_, lean_object* v_ref_5554_, lean_object* v_msg_5555_, lean_object* v_declHint_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_){
_start:
{
lean_object* v___x_5560_; 
v___x_5560_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_5554_, v_msg_5555_, v_declHint_5556_, v___y_5557_, v___y_5558_);
return v___x_5560_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___boxed(lean_object* v_00_u03b1_5561_, lean_object* v_ref_5562_, lean_object* v_msg_5563_, lean_object* v_declHint_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_){
_start:
{
lean_object* v_res_5568_; 
v_res_5568_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(v_00_u03b1_5561_, v_ref_5562_, v_msg_5563_, v_declHint_5564_, v___y_5565_, v___y_5566_);
lean_dec(v___y_5566_);
lean_dec_ref(v___y_5565_);
lean_dec(v_ref_5562_);
return v_res_5568_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(lean_object* v_00_u03b2_5569_, lean_object* v_x_5570_, lean_object* v_x_5571_){
_start:
{
uint8_t v___x_5572_; 
v___x_5572_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_5570_, v_x_5571_);
return v___x_5572_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___boxed(lean_object* v_00_u03b2_5573_, lean_object* v_x_5574_, lean_object* v_x_5575_){
_start:
{
uint8_t v_res_5576_; lean_object* v_r_5577_; 
v_res_5576_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(v_00_u03b2_5573_, v_x_5574_, v_x_5575_);
lean_dec_ref(v_x_5575_);
lean_dec_ref(v_x_5574_);
v_r_5577_ = lean_box(v_res_5576_);
return v_r_5577_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(lean_object* v_00_u03b2_5578_, lean_object* v_a_5579_, lean_object* v_x_5580_){
_start:
{
lean_object* v___x_5581_; 
v___x_5581_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_5579_, v_x_5580_);
return v___x_5581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___boxed(lean_object* v_00_u03b2_5582_, lean_object* v_a_5583_, lean_object* v_x_5584_){
_start:
{
lean_object* v_res_5585_; 
v_res_5585_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(v_00_u03b2_5582_, v_a_5583_, v_x_5584_);
lean_dec(v_x_5584_);
lean_dec(v_a_5583_);
return v_res_5585_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(lean_object* v_msg_5586_, lean_object* v_declHint_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_){
_start:
{
lean_object* v___x_5591_; 
v___x_5591_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_5586_, v_declHint_5587_, v___y_5589_);
return v___x_5591_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___boxed(lean_object* v_msg_5592_, lean_object* v_declHint_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_, lean_object* v___y_5596_){
_start:
{
lean_object* v_res_5597_; 
v_res_5597_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(v_msg_5592_, v_declHint_5593_, v___y_5594_, v___y_5595_);
lean_dec(v___y_5595_);
lean_dec_ref(v___y_5594_);
return v_res_5597_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(lean_object* v_00_u03b2_5598_, lean_object* v_x_5599_, size_t v_x_5600_, lean_object* v_x_5601_){
_start:
{
uint8_t v___x_5602_; 
v___x_5602_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_5599_, v_x_5600_, v_x_5601_);
return v___x_5602_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___boxed(lean_object* v_00_u03b2_5603_, lean_object* v_x_5604_, lean_object* v_x_5605_, lean_object* v_x_5606_){
_start:
{
size_t v_x_53962__boxed_5607_; uint8_t v_res_5608_; lean_object* v_r_5609_; 
v_x_53962__boxed_5607_ = lean_unbox_usize(v_x_5605_);
lean_dec(v_x_5605_);
v_res_5608_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(v_00_u03b2_5603_, v_x_5604_, v_x_53962__boxed_5607_, v_x_5606_);
lean_dec_ref(v_x_5606_);
lean_dec_ref(v_x_5604_);
v_r_5609_ = lean_box(v_res_5608_);
return v_r_5609_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(lean_object* v_00_u03b2_5610_, lean_object* v_keys_5611_, lean_object* v_vals_5612_, lean_object* v_heq_5613_, lean_object* v_i_5614_, lean_object* v_k_5615_){
_start:
{
uint8_t v___x_5616_; 
v___x_5616_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_5611_, v_i_5614_, v_k_5615_);
return v___x_5616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___boxed(lean_object* v_00_u03b2_5617_, lean_object* v_keys_5618_, lean_object* v_vals_5619_, lean_object* v_heq_5620_, lean_object* v_i_5621_, lean_object* v_k_5622_){
_start:
{
uint8_t v_res_5623_; lean_object* v_r_5624_; 
v_res_5623_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(v_00_u03b2_5617_, v_keys_5618_, v_vals_5619_, v_heq_5620_, v_i_5621_, v_k_5622_);
lean_dec_ref(v_k_5622_);
lean_dec_ref(v_vals_5619_);
lean_dec_ref(v_keys_5618_);
v_r_5624_ = lean_box(v_res_5623_);
return v_r_5624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; 
v___x_5638_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_5639_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1));
v___x_5640_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3));
v___x_5641_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_5642_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5638_, v___x_5639_, v___x_5640_, v___x_5641_);
return v___x_5642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v_a_5643_){
_start:
{
lean_object* v_res_5644_; 
v_res_5644_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_5644_;
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
