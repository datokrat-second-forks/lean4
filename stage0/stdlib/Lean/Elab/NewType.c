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
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__7 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__8 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__9 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__9_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__10 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__10_value;
static const lean_closure_object l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__11 = (const lean_object*)&l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__11_value;
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
uint8_t v___x_13869__boxed_355_; lean_object* v_res_356_; 
v___x_13869__boxed_355_ = lean_unbox(v___x_346_);
v_res_356_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__0(v_params_342_, v_resultType_343_, v_name_344_, v_levelParams_345_, v___x_13869__boxed_355_, v_a_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
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
uint8_t v___x_14074__boxed_469_; lean_object* v_res_470_; 
v___x_14074__boxed_469_ = lean_unbox(v___x_457_);
v_res_470_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__1(v_params_455_, v_levelParams_456_, v___x_14074__boxed_469_, v_name_458_, v_argName_459_, v_argType_460_, v_resultType_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
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
uint8_t v___x_14104__boxed_497_; lean_object* v_res_498_; 
v___x_14104__boxed_497_ = lean_unbox(v___x_488_);
v_res_498_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__2(v___x_14104__boxed_497_, v_a_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
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
uint8_t v___x_14173__boxed_657_; lean_object* v_res_658_; 
v___x_14173__boxed_657_ = lean_unbox(v___x_649_);
v_res_658_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__3(v___f_639_, v_ctorName_640_, v_fieldName_641_, v___x_642_, v___x_643_, v_projName_644_, v___x_645_, v_params_646_, v_equivName_647_, v_levelParams_648_, v___x_14173__boxed_657_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(lean_object* v_msg_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
lean_object* v___f_1000_; lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___f_1003_; lean_object* v___f_1004_; lean_object* v___f_1005_; lean_object* v___f_1006_; lean_object* v___f_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v_toApplicative_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1103_; 
v___f_1000_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__0));
v___f_1001_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__1));
v___f_1002_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__2));
v___f_1003_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__3));
v___f_1004_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__4));
v___f_1005_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1005_, 0, v___f_1004_);
lean_closure_set(v___f_1005_, 1, v___f_1003_);
v___f_1006_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1006_, 0, v___f_1003_);
v___f_1007_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__5));
v___x_1008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1008_, 0, v___f_1000_);
lean_ctor_set(v___x_1008_, 1, v___f_1001_);
v___x_1009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
lean_ctor_set(v___x_1009_, 1, v___f_1002_);
lean_ctor_set(v___x_1009_, 2, v___f_1005_);
lean_ctor_set(v___x_1009_, 3, v___f_1006_);
lean_ctor_set(v___x_1009_, 4, v___f_1007_);
v___x_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
lean_ctor_set(v___x_1010_, 1, v___f_1003_);
v___x_1011_ = l_StateRefT_x27_instMonad___redArg(v___x_1010_);
v_toApplicative_1012_ = lean_ctor_get(v___x_1011_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1103_ == 0)
{
lean_object* v_unused_1104_; 
v_unused_1104_ = lean_ctor_get(v___x_1011_, 1);
lean_dec(v_unused_1104_);
v___x_1014_ = v___x_1011_;
v_isShared_1015_ = v_isSharedCheck_1103_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_toApplicative_1012_);
lean_dec(v___x_1011_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1103_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_toFunctor_1016_; lean_object* v_toSeq_1017_; lean_object* v_toSeqLeft_1018_; lean_object* v_toSeqRight_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1101_; 
v_toFunctor_1016_ = lean_ctor_get(v_toApplicative_1012_, 0);
v_toSeq_1017_ = lean_ctor_get(v_toApplicative_1012_, 2);
v_toSeqLeft_1018_ = lean_ctor_get(v_toApplicative_1012_, 3);
v_toSeqRight_1019_ = lean_ctor_get(v_toApplicative_1012_, 4);
v_isSharedCheck_1101_ = !lean_is_exclusive(v_toApplicative_1012_);
if (v_isSharedCheck_1101_ == 0)
{
lean_object* v_unused_1102_; 
v_unused_1102_ = lean_ctor_get(v_toApplicative_1012_, 1);
lean_dec(v_unused_1102_);
v___x_1021_ = v_toApplicative_1012_;
v_isShared_1022_ = v_isSharedCheck_1101_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_toSeqRight_1019_);
lean_inc(v_toSeqLeft_1018_);
lean_inc(v_toSeq_1017_);
lean_inc(v_toFunctor_1016_);
lean_dec(v_toApplicative_1012_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1101_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___f_1023_; lean_object* v___f_1024_; lean_object* v___f_1025_; lean_object* v___f_1026_; lean_object* v___x_1027_; lean_object* v___f_1028_; lean_object* v___f_1029_; lean_object* v___f_1030_; lean_object* v___x_1032_; 
v___f_1023_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__6));
v___f_1024_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1016_);
v___f_1025_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1025_, 0, v_toFunctor_1016_);
v___f_1026_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1026_, 0, v_toFunctor_1016_);
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v___f_1025_);
lean_ctor_set(v___x_1027_, 1, v___f_1026_);
v___f_1028_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1028_, 0, v_toSeqRight_1019_);
v___f_1029_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1029_, 0, v_toSeqLeft_1018_);
v___f_1030_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1030_, 0, v_toSeq_1017_);
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 4, v___f_1028_);
lean_ctor_set(v___x_1021_, 3, v___f_1029_);
lean_ctor_set(v___x_1021_, 2, v___f_1030_);
lean_ctor_set(v___x_1021_, 1, v___f_1023_);
lean_ctor_set(v___x_1021_, 0, v___x_1027_);
v___x_1032_ = v___x_1021_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1027_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v___f_1023_);
lean_ctor_set(v_reuseFailAlloc_1100_, 2, v___f_1030_);
lean_ctor_set(v_reuseFailAlloc_1100_, 3, v___f_1029_);
lean_ctor_set(v_reuseFailAlloc_1100_, 4, v___f_1028_);
v___x_1032_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1034_; 
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 1, v___f_1024_);
lean_ctor_set(v___x_1014_, 0, v___x_1032_);
v___x_1034_ = v___x_1014_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1099_, 1, v___f_1024_);
v___x_1034_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1035_; lean_object* v_toApplicative_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1097_; 
v___x_1035_ = l_StateRefT_x27_instMonad___redArg(v___x_1034_);
v_toApplicative_1036_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1097_ == 0)
{
lean_object* v_unused_1098_; 
v_unused_1098_ = lean_ctor_get(v___x_1035_, 1);
lean_dec(v_unused_1098_);
v___x_1038_ = v___x_1035_;
v_isShared_1039_ = v_isSharedCheck_1097_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_toApplicative_1036_);
lean_dec(v___x_1035_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1097_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v_toFunctor_1040_; lean_object* v_toSeq_1041_; lean_object* v_toSeqLeft_1042_; lean_object* v_toSeqRight_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1095_; 
v_toFunctor_1040_ = lean_ctor_get(v_toApplicative_1036_, 0);
v_toSeq_1041_ = lean_ctor_get(v_toApplicative_1036_, 2);
v_toSeqLeft_1042_ = lean_ctor_get(v_toApplicative_1036_, 3);
v_toSeqRight_1043_ = lean_ctor_get(v_toApplicative_1036_, 4);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_toApplicative_1036_);
if (v_isSharedCheck_1095_ == 0)
{
lean_object* v_unused_1096_; 
v_unused_1096_ = lean_ctor_get(v_toApplicative_1036_, 1);
lean_dec(v_unused_1096_);
v___x_1045_ = v_toApplicative_1036_;
v_isShared_1046_ = v_isSharedCheck_1095_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_toSeqRight_1043_);
lean_inc(v_toSeqLeft_1042_);
lean_inc(v_toSeq_1041_);
lean_inc(v_toFunctor_1040_);
lean_dec(v_toApplicative_1036_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1095_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v___f_1047_; lean_object* v___f_1048_; lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___x_1051_; lean_object* v___f_1052_; lean_object* v___f_1053_; lean_object* v___f_1054_; lean_object* v___x_1056_; 
v___f_1047_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__8));
v___f_1048_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__9));
lean_inc_ref(v_toFunctor_1040_);
v___f_1049_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1049_, 0, v_toFunctor_1040_);
v___f_1050_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1050_, 0, v_toFunctor_1040_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___f_1049_);
lean_ctor_set(v___x_1051_, 1, v___f_1050_);
v___f_1052_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1052_, 0, v_toSeqRight_1043_);
v___f_1053_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1053_, 0, v_toSeqLeft_1042_);
v___f_1054_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1054_, 0, v_toSeq_1041_);
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 4, v___f_1052_);
lean_ctor_set(v___x_1045_, 3, v___f_1053_);
lean_ctor_set(v___x_1045_, 2, v___f_1054_);
lean_ctor_set(v___x_1045_, 1, v___f_1047_);
lean_ctor_set(v___x_1045_, 0, v___x_1051_);
v___x_1056_ = v___x_1045_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1051_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___f_1047_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v___f_1054_);
lean_ctor_set(v_reuseFailAlloc_1094_, 3, v___f_1053_);
lean_ctor_set(v_reuseFailAlloc_1094_, 4, v___f_1052_);
v___x_1056_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1058_; 
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 1, v___f_1048_);
lean_ctor_set(v___x_1038_, 0, v___x_1056_);
v___x_1058_ = v___x_1038_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1093_, 1, v___f_1048_);
v___x_1058_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
lean_object* v___x_1059_; lean_object* v_toApplicative_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1091_; 
v___x_1059_ = l_StateRefT_x27_instMonad___redArg(v___x_1058_);
v_toApplicative_1060_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1091_ == 0)
{
lean_object* v_unused_1092_; 
v_unused_1092_ = lean_ctor_get(v___x_1059_, 1);
lean_dec(v_unused_1092_);
v___x_1062_ = v___x_1059_;
v_isShared_1063_ = v_isSharedCheck_1091_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_toApplicative_1060_);
lean_dec(v___x_1059_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1091_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v_toFunctor_1064_; lean_object* v_toSeq_1065_; lean_object* v_toSeqLeft_1066_; lean_object* v_toSeqRight_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1089_; 
v_toFunctor_1064_ = lean_ctor_get(v_toApplicative_1060_, 0);
v_toSeq_1065_ = lean_ctor_get(v_toApplicative_1060_, 2);
v_toSeqLeft_1066_ = lean_ctor_get(v_toApplicative_1060_, 3);
v_toSeqRight_1067_ = lean_ctor_get(v_toApplicative_1060_, 4);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_toApplicative_1060_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v_toApplicative_1060_, 1);
lean_dec(v_unused_1090_);
v___x_1069_ = v_toApplicative_1060_;
v_isShared_1070_ = v_isSharedCheck_1089_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_toSeqRight_1067_);
lean_inc(v_toSeqLeft_1066_);
lean_inc(v_toSeq_1065_);
lean_inc(v_toFunctor_1064_);
lean_dec(v_toApplicative_1060_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1089_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___f_1071_; lean_object* v___f_1072_; lean_object* v___f_1073_; lean_object* v___f_1074_; lean_object* v___x_1075_; lean_object* v___f_1076_; lean_object* v___f_1077_; lean_object* v___f_1078_; lean_object* v___x_1080_; 
v___f_1071_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__10));
v___f_1072_ = ((lean_object*)(l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___closed__11));
lean_inc_ref(v_toFunctor_1064_);
v___f_1073_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1073_, 0, v_toFunctor_1064_);
v___f_1074_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1074_, 0, v_toFunctor_1064_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___f_1073_);
lean_ctor_set(v___x_1075_, 1, v___f_1074_);
v___f_1076_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1076_, 0, v_toSeqRight_1067_);
v___f_1077_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1077_, 0, v_toSeqLeft_1066_);
v___f_1078_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1078_, 0, v_toSeq_1065_);
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 4, v___f_1076_);
lean_ctor_set(v___x_1069_, 3, v___f_1077_);
lean_ctor_set(v___x_1069_, 2, v___f_1078_);
lean_ctor_set(v___x_1069_, 1, v___f_1071_);
lean_ctor_set(v___x_1069_, 0, v___x_1075_);
v___x_1080_ = v___x_1069_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v___f_1071_);
lean_ctor_set(v_reuseFailAlloc_1088_, 2, v___f_1078_);
lean_ctor_set(v_reuseFailAlloc_1088_, 3, v___f_1077_);
lean_ctor_set(v_reuseFailAlloc_1088_, 4, v___f_1076_);
v___x_1080_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1082_; 
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 1, v___f_1072_);
lean_ctor_set(v___x_1062_, 0, v___x_1080_);
v___x_1082_ = v___x_1062_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1080_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v___f_1072_);
v___x_1082_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_10972__overap_1085_; lean_object* v___x_1086_; 
v___x_1083_ = lean_box(0);
v___x_1084_ = l_instInhabitedOfMonad___redArg(v___x_1082_, v___x_1083_);
v___x_10972__overap_1085_ = lean_panic_fn_borrowed(v___x_1084_, v_msg_992_);
lean_dec(v___x_1084_);
lean_inc(v___y_998_);
lean_inc_ref(v___y_997_);
lean_inc(v___y_996_);
lean_inc_ref(v___y_995_);
lean_inc(v___y_994_);
lean_inc_ref(v___y_993_);
v___x_1086_ = lean_apply_7(v___x_10972__overap_1085_, v___y_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, lean_box(0));
return v___x_1086_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0___boxed(lean_object* v_msg_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v_msg_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
return v_res_1113_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1115_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__0));
v___x_1116_ = l_Lean_stringToMessageData(v___x_1115_);
return v___x_1116_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__2));
v___x_1119_ = l_Lean_stringToMessageData(v___x_1118_);
return v___x_1119_;
}
}
static lean_object* _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7(void){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
v___x_1123_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__6));
v___x_1124_ = lean_unsigned_to_nat(11u);
v___x_1125_ = lean_unsigned_to_nat(115u);
v___x_1126_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__5));
v___x_1127_ = ((lean_object*)(l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__4));
v___x_1128_ = l_mkPanicMessageWithDecl(v___x_1127_, v___x_1126_, v___x_1125_, v___x_1124_, v___x_1123_);
return v___x_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(lean_object* v_constName_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v___x_1145_; lean_object* v_env_1146_; uint8_t v___x_1147_; lean_object* v___x_1148_; 
v___x_1145_ = lean_st_ref_get(v___y_1135_);
v_env_1146_ = lean_ctor_get(v___x_1145_, 0);
lean_inc_ref(v_env_1146_);
lean_dec(v___x_1145_);
v___x_1147_ = 0;
lean_inc(v_constName_1129_);
v___x_1148_ = l_Lean_Environment_findAsync_x3f(v_env_1146_, v_constName_1129_, v___x_1147_);
if (lean_obj_tag(v___x_1148_) == 1)
{
lean_object* v_val_1149_; uint8_t v_kind_1150_; 
v_val_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_val_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v_kind_1150_ = lean_ctor_get_uint8(v_val_1149_, sizeof(void*)*3);
if (v_kind_1150_ == 0)
{
lean_object* v___x_1151_; 
v___x_1151_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1149_);
if (lean_obj_tag(v___x_1151_) == 1)
{
lean_object* v_val_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
lean_dec(v_constName_1129_);
v_val_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_val_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set_tag(v___x_1154_, 0);
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_val_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
else
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
lean_dec_ref(v___x_1151_);
v___x_1160_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__7);
v___x_1161_ = l_panic___at___00Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0_spec__0(v___x_1160_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1170_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1170_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1170_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
if (lean_obj_tag(v_a_1162_) == 0)
{
lean_del_object(v___x_1164_);
goto v___jp_1137_;
}
else
{
lean_object* v_val_1166_; lean_object* v___x_1168_; 
lean_dec(v_constName_1129_);
v_val_1166_ = lean_ctor_get(v_a_1162_, 0);
lean_inc(v_val_1166_);
lean_dec_ref_known(v_a_1162_, 1);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v_val_1166_);
v___x_1168_ = v___x_1164_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_val_1166_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
lean_dec(v_constName_1129_);
v_a_1171_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1161_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1161_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
else
{
lean_dec(v_val_1149_);
goto v___jp_1137_;
}
}
else
{
lean_dec(v___x_1148_);
goto v___jp_1137_;
}
v___jp_1137_:
{
lean_object* v___x_1138_; uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1138_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_1139_ = 0;
v___x_1140_ = l_Lean_MessageData_ofConstName(v_constName_1129_, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1138_);
lean_ctor_set(v___x_1141_, 1, v___x_1140_);
v___x_1142_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__3);
v___x_1143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v___x_1143_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
return v___x_1144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___boxed(lean_object* v_constName_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_constName_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
if (lean_obj_tag(v_a_1188_) == 0)
{
lean_object* v___x_1190_; 
v___x_1190_ = l_List_reverse___redArg(v_a_1189_);
return v___x_1190_;
}
else
{
lean_object* v_head_1191_; lean_object* v_tail_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1201_; 
v_head_1191_ = lean_ctor_get(v_a_1188_, 0);
v_tail_1192_ = lean_ctor_get(v_a_1188_, 1);
v_isSharedCheck_1201_ = !lean_is_exclusive(v_a_1188_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1194_ = v_a_1188_;
v_isShared_1195_ = v_isSharedCheck_1201_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_tail_1192_);
lean_inc(v_head_1191_);
lean_dec(v_a_1188_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1201_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1196_ = l_Lean_mkLevelParam(v_head_1191_);
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 1, v_a_1189_);
lean_ctor_set(v___x_1194_, 0, v___x_1196_);
v___x_1198_ = v___x_1194_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v_a_1189_);
v___x_1198_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
v_a_1188_ = v_tail_1192_;
v_a_1189_ = v___x_1198_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(lean_object* v_declName_1202_, lean_object* v_ctorName_1203_, lean_object* v_projName_1204_, lean_object* v_equivName_1205_, lean_object* v_fieldName_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v___x_1214_; 
lean_inc(v_declName_1202_);
v___x_1214_ = l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0(v_declName_1202_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v_toConstantVal_1216_; lean_object* v_value_1217_; lean_object* v_levelParams_1218_; lean_object* v_type_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___f_1222_; uint8_t v___x_1223_; lean_object* v___x_1224_; 
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1215_);
lean_dec_ref_known(v___x_1214_, 1);
v_toConstantVal_1216_ = lean_ctor_get(v_a_1215_, 0);
lean_inc_ref(v_toConstantVal_1216_);
v_value_1217_ = lean_ctor_get(v_a_1215_, 1);
lean_inc_ref(v_value_1217_);
lean_dec(v_a_1215_);
v_levelParams_1218_ = lean_ctor_get(v_toConstantVal_1216_, 1);
lean_inc_n(v_levelParams_1218_, 2);
v_type_1219_ = lean_ctor_get(v_toConstantVal_1216_, 2);
lean_inc_ref(v_type_1219_);
lean_dec_ref(v_toConstantVal_1216_);
v___x_1220_ = lean_box(0);
v___x_1221_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_1218_, v___x_1220_);
v___f_1222_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___lam__4___boxed), 17, 8);
lean_closure_set(v___f_1222_, 0, v_value_1217_);
lean_closure_set(v___f_1222_, 1, v_declName_1202_);
lean_closure_set(v___f_1222_, 2, v___x_1221_);
lean_closure_set(v___f_1222_, 3, v_levelParams_1218_);
lean_closure_set(v___f_1222_, 4, v_ctorName_1203_);
lean_closure_set(v___f_1222_, 5, v_fieldName_1206_);
lean_closure_set(v___f_1222_, 6, v_projName_1204_);
lean_closure_set(v___f_1222_, 7, v_equivName_1205_);
v___x_1223_ = 0;
v___x_1224_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg(v_type_1219_, v___f_1222_, v___x_1223_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
return v___x_1224_;
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_fieldName_1206_);
lean_dec(v_equivName_1205_);
lean_dec(v_projName_1204_);
lean_dec(v_ctorName_1203_);
lean_dec(v_declName_1202_);
v_a_1225_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1214_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1214_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed(lean_object* v_declName_1233_, lean_object* v_ctorName_1234_, lean_object* v_projName_1235_, lean_object* v_equivName_1236_, lean_object* v_fieldName_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj(v_declName_1233_, v_ctorName_1234_, v_projName_1235_, v_equivName_1236_, v_fieldName_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(lean_object* v_00_u03b1_1246_, lean_object* v_name_1247_, uint8_t v_bi_1248_, lean_object* v_type_1249_, lean_object* v_k_1250_, uint8_t v_kind_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___redArg(v_name_1247_, v_bi_1248_, v_type_1249_, v_k_1250_, v_kind_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
return v___x_1259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1260_, lean_object* v_name_1261_, lean_object* v_bi_1262_, lean_object* v_type_1263_, lean_object* v_k_1264_, lean_object* v_kind_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
uint8_t v_bi_boxed_1273_; uint8_t v_kind_boxed_1274_; lean_object* v_res_1275_; 
v_bi_boxed_1273_ = lean_unbox(v_bi_1262_);
v_kind_boxed_1274_ = lean_unbox(v_kind_1265_);
v_res_1275_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4_spec__6(v_00_u03b1_1260_, v_name_1261_, v_bi_boxed_1273_, v_type_1263_, v_k_1264_, v_kind_boxed_1274_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(lean_object* v_00_u03b1_1276_, lean_object* v_name_1277_, lean_object* v_type_1278_, lean_object* v_k_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___redArg(v_name_1277_, v_type_1278_, v_k_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4___boxed(lean_object* v_00_u03b1_1288_, lean_object* v_name_1289_, lean_object* v_type_1290_, lean_object* v_k_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__4(v_00_u03b1_1288_, v_name_1289_, v_type_1290_, v_k_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_, v___y_1297_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1295_);
lean_dec_ref(v___y_1294_);
lean_dec(v___y_1293_);
lean_dec_ref(v___y_1292_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(lean_object* v_00_u03b1_1300_, lean_object* v_msg_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___boxed(lean_object* v_00_u03b1_1310_, lean_object* v_msg_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7(v_00_u03b1_1310_, v_msg_1311_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
lean_dec(v___y_1317_);
lean_dec_ref(v___y_1316_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(lean_object* v_as_1320_, size_t v_i_1321_, size_t v_stop_1322_, lean_object* v_b_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_){
_start:
{
lean_object* v___x_1331_; 
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___redArg(v_as_1320_, v_i_1321_, v_stop_1322_, v_b_1323_, v___y_1326_, v___y_1328_, v___y_1329_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3___boxed(lean_object* v_as_1332_, lean_object* v_i_1333_, lean_object* v_stop_1334_, lean_object* v_b_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
size_t v_i_boxed_1343_; size_t v_stop_boxed_1344_; lean_object* v_res_1345_; 
v_i_boxed_1343_ = lean_unbox_usize(v_i_1333_);
lean_dec(v_i_1333_);
v_stop_boxed_1344_ = lean_unbox_usize(v_stop_1334_);
lean_dec(v_stop_1334_);
v_res_1345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__2_spec__3(v_as_1332_, v_i_boxed_1343_, v_stop_boxed_1344_, v_b_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec_ref(v_as_1332_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(lean_object* v_msgData_1346_, lean_object* v_macroStack_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg(v_msgData_1346_, v_macroStack_1347_, v___y_1352_);
return v___x_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___boxed(lean_object* v_msgData_1356_, lean_object* v_macroStack_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11(v_msgData_1356_, v_macroStack_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
lean_dec(v___y_1363_);
lean_dec_ref(v___y_1362_);
lean_dec(v___y_1361_);
lean_dec_ref(v___y_1360_);
lean_dec(v___y_1359_);
lean_dec_ref(v___y_1358_);
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(lean_object* v_e_1366_, lean_object* v_k_1367_, uint8_t v_cleanupAnnotations_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v___f_1376_; uint8_t v___x_1377_; uint8_t v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
lean_inc(v___y_1370_);
lean_inc_ref(v___y_1369_);
v___f_1376_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__8___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1376_, 0, v_k_1367_);
lean_closure_set(v___f_1376_, 1, v___y_1369_);
lean_closure_set(v___f_1376_, 2, v___y_1370_);
v___x_1377_ = 1;
v___x_1378_ = 0;
v___x_1379_ = lean_box(0);
v___x_1380_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1366_, v___x_1377_, v___x_1378_, v___x_1377_, v___x_1378_, v___x_1379_, v___f_1376_, v_cleanupAnnotations_1368_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
if (lean_obj_tag(v___x_1380_) == 0)
{
return v___x_1380_;
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
v_a_1381_ = lean_ctor_get(v___x_1380_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1380_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1380_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1380_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg___boxed(lean_object* v_e_1389_, lean_object* v_k_1390_, lean_object* v_cleanupAnnotations_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1399_; lean_object* v_res_1400_; 
v_cleanupAnnotations_boxed_1399_ = lean_unbox(v_cleanupAnnotations_1391_);
v_res_1400_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1389_, v_k_1390_, v_cleanupAnnotations_boxed_1399_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(lean_object* v_00_u03b1_1401_, lean_object* v_e_1402_, lean_object* v_k_1403_, uint8_t v_cleanupAnnotations_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v_e_1402_, v_k_1403_, v_cleanupAnnotations_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___boxed(lean_object* v_00_u03b1_1413_, lean_object* v_e_1414_, lean_object* v_k_1415_, lean_object* v_cleanupAnnotations_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1424_; lean_object* v_res_1425_; 
v_cleanupAnnotations_boxed_1424_ = lean_unbox(v_cleanupAnnotations_1416_);
v_res_1425_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9(v_00_u03b1_1413_, v_e_1414_, v_k_1415_, v_cleanupAnnotations_boxed_1424_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(lean_object* v_x_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v___x_1434_; 
lean_inc(v___y_1428_);
lean_inc_ref(v___y_1427_);
v___x_1434_ = lean_apply_7(v_x_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, lean_box(0));
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed(lean_object* v_x_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0(v_x_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1437_);
lean_dec_ref(v___y_1436_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(lean_object* v_lctx_1444_, lean_object* v_localInsts_1445_, lean_object* v_x_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___f_1454_; lean_object* v___x_1455_; 
lean_inc(v___y_1448_);
lean_inc_ref(v___y_1447_);
v___f_1454_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1454_, 0, v_x_1446_);
lean_closure_set(v___f_1454_, 1, v___y_1447_);
lean_closure_set(v___f_1454_, 2, v___y_1448_);
v___x_1455_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1444_, v_localInsts_1445_, v___f_1454_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_);
if (lean_obj_tag(v___x_1455_) == 0)
{
return v___x_1455_;
}
else
{
lean_object* v_a_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1463_; 
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v___x_1455_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1458_ = v___x_1455_;
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_a_1456_);
lean_dec(v___x_1455_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1463_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_a_1456_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg___boxed(lean_object* v_lctx_1464_, lean_object* v_localInsts_1465_, lean_object* v_x_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1464_, v_localInsts_1465_, v_x_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(lean_object* v_00_u03b1_1475_, lean_object* v_lctx_1476_, lean_object* v_localInsts_1477_, lean_object* v_x_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v___x_1486_; 
v___x_1486_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___redArg(v_lctx_1476_, v_localInsts_1477_, v_x_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed(lean_object* v_00_u03b1_1487_, lean_object* v_lctx_1488_, lean_object* v_localInsts_1489_, lean_object* v_x_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10(v_00_u03b1_1487_, v_lctx_1488_, v_localInsts_1489_, v_x_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(lean_object* v___y_1499_){
_start:
{
lean_object* v___x_1501_; lean_object* v_env_1502_; lean_object* v___x_1503_; lean_object* v_mainModule_1504_; lean_object* v___x_1505_; 
v___x_1501_ = lean_st_ref_get(v___y_1499_);
v_env_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc_ref(v_env_1502_);
lean_dec(v___x_1501_);
v___x_1503_ = l_Lean_Environment_header(v_env_1502_);
lean_dec_ref(v_env_1502_);
v_mainModule_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_mainModule_1504_);
lean_dec_ref(v___x_1503_);
v___x_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1505_, 0, v_mainModule_1504_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg___boxed(lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v_res_1508_; 
v_res_1508_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1506_);
lean_dec(v___y_1506_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_1510_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___boxed(lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14(v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(lean_object* v___y_1517_, uint8_t v_isExporting_1518_, lean_object* v_a_x3f_1519_){
_start:
{
lean_object* v___x_1521_; lean_object* v_env_1522_; lean_object* v_messages_1523_; lean_object* v_scopes_1524_; lean_object* v_usedQuotCtxts_1525_; lean_object* v_nextMacroScope_1526_; lean_object* v_maxRecDepth_1527_; lean_object* v_ngen_1528_; lean_object* v_auxDeclNGen_1529_; lean_object* v_infoState_1530_; lean_object* v_traceState_1531_; lean_object* v_snapshotTasks_1532_; lean_object* v_prevLinterStates_1533_; lean_object* v_codeQualityEntryTasks_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1545_; 
v___x_1521_ = lean_st_ref_take(v___y_1517_);
v_env_1522_ = lean_ctor_get(v___x_1521_, 0);
v_messages_1523_ = lean_ctor_get(v___x_1521_, 1);
v_scopes_1524_ = lean_ctor_get(v___x_1521_, 2);
v_usedQuotCtxts_1525_ = lean_ctor_get(v___x_1521_, 3);
v_nextMacroScope_1526_ = lean_ctor_get(v___x_1521_, 4);
v_maxRecDepth_1527_ = lean_ctor_get(v___x_1521_, 5);
v_ngen_1528_ = lean_ctor_get(v___x_1521_, 6);
v_auxDeclNGen_1529_ = lean_ctor_get(v___x_1521_, 7);
v_infoState_1530_ = lean_ctor_get(v___x_1521_, 8);
v_traceState_1531_ = lean_ctor_get(v___x_1521_, 9);
v_snapshotTasks_1532_ = lean_ctor_get(v___x_1521_, 10);
v_prevLinterStates_1533_ = lean_ctor_get(v___x_1521_, 11);
v_codeQualityEntryTasks_1534_ = lean_ctor_get(v___x_1521_, 12);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1536_ = v___x_1521_;
v_isShared_1537_ = v_isSharedCheck_1545_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1534_);
lean_inc(v_prevLinterStates_1533_);
lean_inc(v_snapshotTasks_1532_);
lean_inc(v_traceState_1531_);
lean_inc(v_infoState_1530_);
lean_inc(v_auxDeclNGen_1529_);
lean_inc(v_ngen_1528_);
lean_inc(v_maxRecDepth_1527_);
lean_inc(v_nextMacroScope_1526_);
lean_inc(v_usedQuotCtxts_1525_);
lean_inc(v_scopes_1524_);
lean_inc(v_messages_1523_);
lean_inc(v_env_1522_);
lean_dec(v___x_1521_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1545_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1538_ = lean_box(0);
v___x_1539_ = l_Lean_Environment_setExporting(v_env_1522_, v_isExporting_1518_);
if (v_isShared_1537_ == 0)
{
lean_ctor_set(v___x_1536_, 0, v___x_1539_);
v___x_1541_ = v___x_1536_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v___x_1539_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v_messages_1523_);
lean_ctor_set(v_reuseFailAlloc_1544_, 2, v_scopes_1524_);
lean_ctor_set(v_reuseFailAlloc_1544_, 3, v_usedQuotCtxts_1525_);
lean_ctor_set(v_reuseFailAlloc_1544_, 4, v_nextMacroScope_1526_);
lean_ctor_set(v_reuseFailAlloc_1544_, 5, v_maxRecDepth_1527_);
lean_ctor_set(v_reuseFailAlloc_1544_, 6, v_ngen_1528_);
lean_ctor_set(v_reuseFailAlloc_1544_, 7, v_auxDeclNGen_1529_);
lean_ctor_set(v_reuseFailAlloc_1544_, 8, v_infoState_1530_);
lean_ctor_set(v_reuseFailAlloc_1544_, 9, v_traceState_1531_);
lean_ctor_set(v_reuseFailAlloc_1544_, 10, v_snapshotTasks_1532_);
lean_ctor_set(v_reuseFailAlloc_1544_, 11, v_prevLinterStates_1533_);
lean_ctor_set(v_reuseFailAlloc_1544_, 12, v_codeQualityEntryTasks_1534_);
v___x_1541_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = lean_st_ref_put(v___y_1517_, v___x_1541_);
v___x_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1538_);
return v___x_1543_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0___boxed(lean_object* v___y_1546_, lean_object* v_isExporting_1547_, lean_object* v_a_x3f_1548_, lean_object* v___y_1549_){
_start:
{
uint8_t v_isExporting_boxed_1550_; lean_object* v_res_1551_; 
v_isExporting_boxed_1550_ = lean_unbox(v_isExporting_1547_);
v_res_1551_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1546_, v_isExporting_boxed_1550_, v_a_x3f_1548_);
lean_dec(v_a_x3f_1548_);
lean_dec(v___y_1546_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(lean_object* v_x_1552_, uint8_t v_isExporting_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v___x_1557_; lean_object* v_env_1558_; lean_object* v___x_1559_; uint8_t v_isModule_1560_; 
v___x_1557_ = lean_st_ref_get(v___y_1555_);
v_env_1558_ = lean_ctor_get(v___x_1557_, 0);
lean_inc_ref(v_env_1558_);
lean_dec(v___x_1557_);
v___x_1559_ = l_Lean_Environment_header(v_env_1558_);
v_isModule_1560_ = lean_ctor_get_uint8(v___x_1559_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1559_);
if (v_isModule_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_dec_ref(v_env_1558_);
lean_inc(v___y_1555_);
lean_inc_ref(v___y_1554_);
v___x_1561_ = lean_apply_3(v_x_1552_, v___y_1554_, v___y_1555_, lean_box(0));
return v___x_1561_;
}
else
{
uint8_t v_isExporting_1562_; 
v_isExporting_1562_ = lean_ctor_get_uint8(v_env_1558_, sizeof(void*)*8);
lean_dec_ref(v_env_1558_);
if (v_isExporting_1553_ == 0)
{
if (v_isExporting_1562_ == 0)
{
lean_object* v___x_1616_; 
lean_inc(v___y_1555_);
lean_inc_ref(v___y_1554_);
v___x_1616_ = lean_apply_3(v_x_1552_, v___y_1554_, v___y_1555_, lean_box(0));
return v___x_1616_;
}
else
{
goto v___jp_1563_;
}
}
else
{
if (v_isExporting_1562_ == 0)
{
goto v___jp_1563_;
}
else
{
lean_object* v___x_1617_; 
lean_inc(v___y_1555_);
lean_inc_ref(v___y_1554_);
v___x_1617_ = lean_apply_3(v_x_1552_, v___y_1554_, v___y_1555_, lean_box(0));
return v___x_1617_;
}
}
v___jp_1563_:
{
lean_object* v___x_1564_; lean_object* v_env_1565_; lean_object* v_messages_1566_; lean_object* v_scopes_1567_; lean_object* v_usedQuotCtxts_1568_; lean_object* v_nextMacroScope_1569_; lean_object* v_maxRecDepth_1570_; lean_object* v_ngen_1571_; lean_object* v_auxDeclNGen_1572_; lean_object* v_infoState_1573_; lean_object* v_traceState_1574_; lean_object* v_snapshotTasks_1575_; lean_object* v_prevLinterStates_1576_; lean_object* v_codeQualityEntryTasks_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1615_; 
v___x_1564_ = lean_st_ref_take(v___y_1555_);
v_env_1565_ = lean_ctor_get(v___x_1564_, 0);
v_messages_1566_ = lean_ctor_get(v___x_1564_, 1);
v_scopes_1567_ = lean_ctor_get(v___x_1564_, 2);
v_usedQuotCtxts_1568_ = lean_ctor_get(v___x_1564_, 3);
v_nextMacroScope_1569_ = lean_ctor_get(v___x_1564_, 4);
v_maxRecDepth_1570_ = lean_ctor_get(v___x_1564_, 5);
v_ngen_1571_ = lean_ctor_get(v___x_1564_, 6);
v_auxDeclNGen_1572_ = lean_ctor_get(v___x_1564_, 7);
v_infoState_1573_ = lean_ctor_get(v___x_1564_, 8);
v_traceState_1574_ = lean_ctor_get(v___x_1564_, 9);
v_snapshotTasks_1575_ = lean_ctor_get(v___x_1564_, 10);
v_prevLinterStates_1576_ = lean_ctor_get(v___x_1564_, 11);
v_codeQualityEntryTasks_1577_ = lean_ctor_get(v___x_1564_, 12);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1579_ = v___x_1564_;
v_isShared_1580_ = v_isSharedCheck_1615_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_codeQualityEntryTasks_1577_);
lean_inc(v_prevLinterStates_1576_);
lean_inc(v_snapshotTasks_1575_);
lean_inc(v_traceState_1574_);
lean_inc(v_infoState_1573_);
lean_inc(v_auxDeclNGen_1572_);
lean_inc(v_ngen_1571_);
lean_inc(v_maxRecDepth_1570_);
lean_inc(v_nextMacroScope_1569_);
lean_inc(v_usedQuotCtxts_1568_);
lean_inc(v_scopes_1567_);
lean_inc(v_messages_1566_);
lean_inc(v_env_1565_);
lean_dec(v___x_1564_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1615_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1581_ = l_Lean_Environment_setExporting(v_env_1565_, v_isExporting_1553_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v___x_1581_);
v___x_1583_ = v___x_1579_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_messages_1566_);
lean_ctor_set(v_reuseFailAlloc_1614_, 2, v_scopes_1567_);
lean_ctor_set(v_reuseFailAlloc_1614_, 3, v_usedQuotCtxts_1568_);
lean_ctor_set(v_reuseFailAlloc_1614_, 4, v_nextMacroScope_1569_);
lean_ctor_set(v_reuseFailAlloc_1614_, 5, v_maxRecDepth_1570_);
lean_ctor_set(v_reuseFailAlloc_1614_, 6, v_ngen_1571_);
lean_ctor_set(v_reuseFailAlloc_1614_, 7, v_auxDeclNGen_1572_);
lean_ctor_set(v_reuseFailAlloc_1614_, 8, v_infoState_1573_);
lean_ctor_set(v_reuseFailAlloc_1614_, 9, v_traceState_1574_);
lean_ctor_set(v_reuseFailAlloc_1614_, 10, v_snapshotTasks_1575_);
lean_ctor_set(v_reuseFailAlloc_1614_, 11, v_prevLinterStates_1576_);
lean_ctor_set(v_reuseFailAlloc_1614_, 12, v_codeQualityEntryTasks_1577_);
v___x_1583_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_st_ref_put(v___y_1555_, v___x_1583_);
lean_inc(v___y_1555_);
lean_inc_ref(v___y_1554_);
v___x_1585_ = lean_apply_3(v_x_1552_, v___y_1554_, v___y_1555_, lean_box(0));
if (lean_obj_tag(v___x_1585_) == 0)
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1602_; 
v_a_1586_ = lean_ctor_get(v___x_1585_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1588_ = v___x_1585_;
v_isShared_1589_ = v_isSharedCheck_1602_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1585_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1602_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
lean_inc(v_a_1586_);
if (v_isShared_1589_ == 0)
{
lean_ctor_set_tag(v___x_1588_, 1);
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
lean_object* v___x_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v___x_1592_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1555_, v_isExporting_1562_, v___x_1591_);
lean_dec_ref(v___x_1591_);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1599_ == 0)
{
lean_object* v_unused_1600_; 
v_unused_1600_ = lean_ctor_get(v___x_1592_, 0);
lean_dec(v_unused_1600_);
v___x_1594_ = v___x_1592_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_dec(v___x_1592_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
lean_ctor_set(v___x_1594_, 0, v_a_1586_);
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1586_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
else
{
lean_object* v_a_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1612_; 
v_a_1603_ = lean_ctor_get(v___x_1585_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1585_, 1);
v___x_1604_ = lean_box(0);
v___x_1605_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___lam__0(v___y_1555_, v_isExporting_1562_, v___x_1604_);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1612_ == 0)
{
lean_object* v_unused_1613_; 
v_unused_1613_ = lean_ctor_get(v___x_1605_, 0);
lean_dec(v_unused_1613_);
v___x_1607_ = v___x_1605_;
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
else
{
lean_dec(v___x_1605_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1610_; 
if (v_isShared_1608_ == 0)
{
lean_ctor_set_tag(v___x_1607_, 1);
lean_ctor_set(v___x_1607_, 0, v_a_1603_);
v___x_1610_ = v___x_1607_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1603_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg___boxed(lean_object* v_x_1618_, lean_object* v_isExporting_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_){
_start:
{
uint8_t v_isExporting_boxed_1623_; lean_object* v_res_1624_; 
v_isExporting_boxed_1623_ = lean_unbox(v_isExporting_1619_);
v_res_1624_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1618_, v_isExporting_boxed_1623_, v___y_1620_, v___y_1621_);
lean_dec(v___y_1621_);
lean_dec_ref(v___y_1620_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(lean_object* v_00_u03b1_1625_, lean_object* v_x_1626_, uint8_t v_isExporting_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_1626_, v_isExporting_1627_, v___y_1628_, v___y_1629_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___boxed(lean_object* v_00_u03b1_1632_, lean_object* v_x_1633_, lean_object* v_isExporting_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
uint8_t v_isExporting_boxed_1638_; lean_object* v_res_1639_; 
v_isExporting_boxed_1638_ = lean_unbox(v_isExporting_1634_);
v_res_1639_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15(v_00_u03b1_1632_, v_x_1633_, v_isExporting_boxed_1638_, v___y_1635_, v___y_1636_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
return v_res_1639_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(uint8_t v_suppressElabErrors_1648_, uint8_t v___y_1649_, lean_object* v_x_1650_){
_start:
{
if (lean_obj_tag(v_x_1650_) == 1)
{
lean_object* v_pre_1651_; 
v_pre_1651_ = lean_ctor_get(v_x_1650_, 0);
switch(lean_obj_tag(v_pre_1651_))
{
case 1:
{
lean_object* v_pre_1652_; 
v_pre_1652_ = lean_ctor_get(v_pre_1651_, 0);
switch(lean_obj_tag(v_pre_1652_))
{
case 0:
{
lean_object* v_str_1653_; lean_object* v_str_1654_; lean_object* v___x_1655_; uint8_t v___x_1656_; 
v_str_1653_ = lean_ctor_get(v_x_1650_, 1);
v_str_1654_ = lean_ctor_get(v_pre_1651_, 1);
v___x_1655_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__0));
v___x_1656_ = lean_string_dec_eq(v_str_1654_, v___x_1655_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1657_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__1));
v___x_1658_ = lean_string_dec_eq(v_str_1654_, v___x_1657_);
if (v___x_1658_ == 0)
{
return v___x_1658_;
}
else
{
lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1659_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__2));
v___x_1660_ = lean_string_dec_eq(v_str_1653_, v___x_1659_);
if (v___x_1660_ == 0)
{
return v___x_1660_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
}
else
{
lean_object* v___x_1661_; uint8_t v___x_1662_; 
v___x_1661_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__3));
v___x_1662_ = lean_string_dec_eq(v_str_1653_, v___x_1661_);
if (v___x_1662_ == 0)
{
return v___x_1662_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
}
case 1:
{
lean_object* v_pre_1663_; 
v_pre_1663_ = lean_ctor_get(v_pre_1652_, 0);
if (lean_obj_tag(v_pre_1663_) == 0)
{
lean_object* v_str_1664_; lean_object* v_str_1665_; lean_object* v_str_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; 
v_str_1664_ = lean_ctor_get(v_x_1650_, 1);
v_str_1665_ = lean_ctor_get(v_pre_1651_, 1);
v_str_1666_ = lean_ctor_get(v_pre_1652_, 1);
v___x_1667_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__4));
v___x_1668_ = lean_string_dec_eq(v_str_1666_, v___x_1667_);
if (v___x_1668_ == 0)
{
return v___x_1668_;
}
else
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__5));
v___x_1670_ = lean_string_dec_eq(v_str_1665_, v___x_1669_);
if (v___x_1670_ == 0)
{
return v___x_1670_;
}
else
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__6));
v___x_1672_ = lean_string_dec_eq(v_str_1664_, v___x_1671_);
if (v___x_1672_ == 0)
{
return v___x_1672_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
}
}
else
{
return v___y_1649_;
}
}
default: 
{
return v___y_1649_;
}
}
}
case 0:
{
lean_object* v_str_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; 
v_str_1673_ = lean_ctor_get(v_x_1650_, 1);
v___x_1674_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_1675_ = lean_string_dec_eq(v_str_1673_, v___x_1674_);
if (v___x_1675_ == 0)
{
return v___x_1675_;
}
else
{
return v_suppressElabErrors_1648_;
}
}
default: 
{
return v___y_1649_;
}
}
}
else
{
return v___y_1649_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_1676_, lean_object* v___y_1677_, lean_object* v_x_1678_){
_start:
{
uint8_t v_suppressElabErrors_boxed_1679_; uint8_t v___y_50338__boxed_1680_; uint8_t v_res_1681_; lean_object* v_r_1682_; 
v_suppressElabErrors_boxed_1679_ = lean_unbox(v_suppressElabErrors_1676_);
v___y_50338__boxed_1680_ = lean_unbox(v___y_1677_);
v_res_1681_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0(v_suppressElabErrors_boxed_1679_, v___y_50338__boxed_1680_, v_x_1678_);
lean_dec(v_x_1678_);
v_r_1682_ = lean_box(v_res_1681_);
return v_r_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(lean_object* v_ref_1684_, lean_object* v_msgData_1685_, uint8_t v_severity_1686_, uint8_t v_isSilent_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_){
_start:
{
lean_object* v___y_1694_; lean_object* v___y_1695_; uint8_t v___y_1696_; lean_object* v___y_1697_; uint8_t v___y_1698_; lean_object* v___y_1699_; lean_object* v___y_1700_; lean_object* v_currNamespace_1701_; lean_object* v_openDecls_1702_; lean_object* v___y_1703_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; uint8_t v___y_1734_; uint8_t v___y_1735_; uint8_t v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1756_; lean_object* v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; lean_object* v___y_1760_; uint8_t v___y_1761_; uint8_t v___y_1762_; uint8_t v___y_1763_; lean_object* v___y_1764_; lean_object* v___y_1765_; lean_object* v___y_1769_; lean_object* v___y_1770_; lean_object* v___y_1771_; lean_object* v___y_1772_; uint8_t v___y_1773_; lean_object* v___y_1774_; uint8_t v___y_1775_; lean_object* v___y_1776_; uint8_t v___y_1777_; uint8_t v___x_1782_; lean_object* v___y_1784_; lean_object* v___y_1785_; lean_object* v___y_1786_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___y_1789_; uint8_t v___y_1790_; uint8_t v___y_1791_; uint8_t v___y_1792_; uint8_t v___y_1794_; uint8_t v___x_1812_; 
v___x_1782_ = 2;
v___x_1812_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1686_, v___x_1782_);
if (v___x_1812_ == 0)
{
v___y_1794_ = v___x_1812_;
goto v___jp_1793_;
}
else
{
uint8_t v___x_1813_; 
lean_inc_ref(v_msgData_1685_);
v___x_1813_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1685_);
v___y_1794_ = v___x_1813_;
goto v___jp_1793_;
}
v___jp_1693_:
{
lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v_env_1708_; lean_object* v_nextMacroScope_1709_; lean_object* v_ngen_1710_; lean_object* v_auxDeclNGen_1711_; lean_object* v_traceState_1712_; lean_object* v_cache_1713_; lean_object* v_messages_1714_; lean_object* v_infoState_1715_; lean_object* v_snapshotTasks_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1727_; 
lean_inc(v_openDecls_1702_);
lean_inc(v_currNamespace_1701_);
v___x_1704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1704_, 0, v_currNamespace_1701_);
lean_ctor_set(v___x_1704_, 1, v_openDecls_1702_);
v___x_1705_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1704_);
lean_ctor_set(v___x_1705_, 1, v___y_1694_);
lean_inc_ref(v___y_1699_);
lean_inc_ref(v___y_1700_);
v___x_1706_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1706_, 0, v___y_1700_);
lean_ctor_set(v___x_1706_, 1, v___y_1697_);
lean_ctor_set(v___x_1706_, 2, v___y_1695_);
lean_ctor_set(v___x_1706_, 3, v___y_1699_);
lean_ctor_set(v___x_1706_, 4, v___x_1705_);
lean_ctor_set_uint8(v___x_1706_, sizeof(void*)*5, v___y_1698_);
lean_ctor_set_uint8(v___x_1706_, sizeof(void*)*5 + 1, v___y_1696_);
lean_ctor_set_uint8(v___x_1706_, sizeof(void*)*5 + 2, v_isSilent_1687_);
v___x_1707_ = lean_st_ref_take(v___y_1703_);
v_env_1708_ = lean_ctor_get(v___x_1707_, 0);
v_nextMacroScope_1709_ = lean_ctor_get(v___x_1707_, 1);
v_ngen_1710_ = lean_ctor_get(v___x_1707_, 2);
v_auxDeclNGen_1711_ = lean_ctor_get(v___x_1707_, 3);
v_traceState_1712_ = lean_ctor_get(v___x_1707_, 4);
v_cache_1713_ = lean_ctor_get(v___x_1707_, 5);
v_messages_1714_ = lean_ctor_get(v___x_1707_, 6);
v_infoState_1715_ = lean_ctor_get(v___x_1707_, 7);
v_snapshotTasks_1716_ = lean_ctor_get(v___x_1707_, 8);
v_isSharedCheck_1727_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1727_ == 0)
{
v___x_1718_ = v___x_1707_;
v_isShared_1719_ = v_isSharedCheck_1727_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_snapshotTasks_1716_);
lean_inc(v_infoState_1715_);
lean_inc(v_messages_1714_);
lean_inc(v_cache_1713_);
lean_inc(v_traceState_1712_);
lean_inc(v_auxDeclNGen_1711_);
lean_inc(v_ngen_1710_);
lean_inc(v_nextMacroScope_1709_);
lean_inc(v_env_1708_);
lean_dec(v___x_1707_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1727_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1723_; 
v___x_1720_ = lean_box(0);
v___x_1721_ = l_Lean_MessageLog_add(v___x_1706_, v_messages_1714_);
if (v_isShared_1719_ == 0)
{
lean_ctor_set(v___x_1718_, 6, v___x_1721_);
v___x_1723_ = v___x_1718_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1726_; 
v_reuseFailAlloc_1726_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1726_, 0, v_env_1708_);
lean_ctor_set(v_reuseFailAlloc_1726_, 1, v_nextMacroScope_1709_);
lean_ctor_set(v_reuseFailAlloc_1726_, 2, v_ngen_1710_);
lean_ctor_set(v_reuseFailAlloc_1726_, 3, v_auxDeclNGen_1711_);
lean_ctor_set(v_reuseFailAlloc_1726_, 4, v_traceState_1712_);
lean_ctor_set(v_reuseFailAlloc_1726_, 5, v_cache_1713_);
lean_ctor_set(v_reuseFailAlloc_1726_, 6, v___x_1721_);
lean_ctor_set(v_reuseFailAlloc_1726_, 7, v_infoState_1715_);
lean_ctor_set(v_reuseFailAlloc_1726_, 8, v_snapshotTasks_1716_);
v___x_1723_ = v_reuseFailAlloc_1726_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1724_ = lean_st_ref_put(v___y_1703_, v___x_1723_);
v___x_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1720_);
return v___x_1725_;
}
}
}
v___jp_1728_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1754_; 
v___x_1739_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1685_);
v___x_1740_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__10(v___x_1739_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1743_ = v___x_1740_;
v_isShared_1744_ = v_isSharedCheck_1754_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1740_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1754_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
lean_inc_ref_n(v___y_1732_, 2);
v___x_1745_ = l_Lean_FileMap_toPosition(v___y_1732_, v___y_1733_);
lean_dec(v___y_1733_);
v___x_1746_ = l_Lean_FileMap_toPosition(v___y_1732_, v___y_1738_);
lean_dec(v___y_1738_);
v___x_1747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1746_);
v___x_1748_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v___y_1735_ == 0)
{
lean_del_object(v___x_1743_);
lean_dec_ref(v___y_1731_);
v___y_1694_ = v_a_1741_;
v___y_1695_ = v___x_1747_;
v___y_1696_ = v___y_1734_;
v___y_1697_ = v___x_1745_;
v___y_1698_ = v___y_1736_;
v___y_1699_ = v___x_1748_;
v___y_1700_ = v___y_1737_;
v_currNamespace_1701_ = v___y_1730_;
v_openDecls_1702_ = v___y_1729_;
v___y_1703_ = v___y_1691_;
goto v___jp_1693_;
}
else
{
uint8_t v___x_1749_; 
lean_inc(v_a_1741_);
v___x_1749_ = l_Lean_MessageData_hasTag(v___y_1731_, v_a_1741_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
lean_dec_ref_known(v___x_1747_, 1);
lean_dec_ref(v___x_1745_);
lean_dec(v_a_1741_);
v___x_1750_ = lean_box(0);
if (v_isShared_1744_ == 0)
{
lean_ctor_set(v___x_1743_, 0, v___x_1750_);
v___x_1752_ = v___x_1743_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
else
{
lean_del_object(v___x_1743_);
v___y_1694_ = v_a_1741_;
v___y_1695_ = v___x_1747_;
v___y_1696_ = v___y_1734_;
v___y_1697_ = v___x_1745_;
v___y_1698_ = v___y_1736_;
v___y_1699_ = v___x_1748_;
v___y_1700_ = v___y_1737_;
v_currNamespace_1701_ = v___y_1730_;
v_openDecls_1702_ = v___y_1729_;
v___y_1703_ = v___y_1691_;
goto v___jp_1693_;
}
}
}
}
v___jp_1755_:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_Lean_Syntax_getTailPos_x3f(v___y_1760_, v___y_1763_);
lean_dec(v___y_1760_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_inc(v___y_1765_);
v___y_1729_ = v___y_1756_;
v___y_1730_ = v___y_1757_;
v___y_1731_ = v___y_1758_;
v___y_1732_ = v___y_1759_;
v___y_1733_ = v___y_1765_;
v___y_1734_ = v___y_1761_;
v___y_1735_ = v___y_1762_;
v___y_1736_ = v___y_1763_;
v___y_1737_ = v___y_1764_;
v___y_1738_ = v___y_1765_;
goto v___jp_1728_;
}
else
{
lean_object* v_val_1767_; 
v_val_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_val_1767_);
lean_dec_ref_known(v___x_1766_, 1);
v___y_1729_ = v___y_1756_;
v___y_1730_ = v___y_1757_;
v___y_1731_ = v___y_1758_;
v___y_1732_ = v___y_1759_;
v___y_1733_ = v___y_1765_;
v___y_1734_ = v___y_1761_;
v___y_1735_ = v___y_1762_;
v___y_1736_ = v___y_1763_;
v___y_1737_ = v___y_1764_;
v___y_1738_ = v_val_1767_;
goto v___jp_1728_;
}
}
v___jp_1768_:
{
lean_object* v_ref_1778_; lean_object* v___x_1779_; 
v_ref_1778_ = l_Lean_replaceRef(v_ref_1684_, v___y_1774_);
v___x_1779_ = l_Lean_Syntax_getPos_x3f(v_ref_1778_, v___y_1775_);
if (lean_obj_tag(v___x_1779_) == 0)
{
lean_object* v___x_1780_; 
v___x_1780_ = lean_unsigned_to_nat(0u);
v___y_1756_ = v___y_1769_;
v___y_1757_ = v___y_1770_;
v___y_1758_ = v___y_1771_;
v___y_1759_ = v___y_1772_;
v___y_1760_ = v_ref_1778_;
v___y_1761_ = v___y_1777_;
v___y_1762_ = v___y_1773_;
v___y_1763_ = v___y_1775_;
v___y_1764_ = v___y_1776_;
v___y_1765_ = v___x_1780_;
goto v___jp_1755_;
}
else
{
lean_object* v_val_1781_; 
v_val_1781_ = lean_ctor_get(v___x_1779_, 0);
lean_inc(v_val_1781_);
lean_dec_ref_known(v___x_1779_, 1);
v___y_1756_ = v___y_1769_;
v___y_1757_ = v___y_1770_;
v___y_1758_ = v___y_1771_;
v___y_1759_ = v___y_1772_;
v___y_1760_ = v_ref_1778_;
v___y_1761_ = v___y_1777_;
v___y_1762_ = v___y_1773_;
v___y_1763_ = v___y_1775_;
v___y_1764_ = v___y_1776_;
v___y_1765_ = v_val_1781_;
goto v___jp_1755_;
}
}
v___jp_1783_:
{
if (v___y_1792_ == 0)
{
v___y_1769_ = v___y_1785_;
v___y_1770_ = v___y_1786_;
v___y_1771_ = v___y_1787_;
v___y_1772_ = v___y_1784_;
v___y_1773_ = v___y_1790_;
v___y_1774_ = v___y_1789_;
v___y_1775_ = v___y_1791_;
v___y_1776_ = v___y_1788_;
v___y_1777_ = v_severity_1686_;
goto v___jp_1768_;
}
else
{
v___y_1769_ = v___y_1785_;
v___y_1770_ = v___y_1786_;
v___y_1771_ = v___y_1787_;
v___y_1772_ = v___y_1784_;
v___y_1773_ = v___y_1790_;
v___y_1774_ = v___y_1789_;
v___y_1775_ = v___y_1791_;
v___y_1776_ = v___y_1788_;
v___y_1777_ = v___x_1782_;
goto v___jp_1768_;
}
}
v___jp_1793_:
{
if (v___y_1794_ == 0)
{
lean_object* v_toCold_1795_; lean_object* v_ref_1796_; uint8_t v_suppressElabErrors_1797_; lean_object* v_fileName_1798_; lean_object* v_fileMap_1799_; lean_object* v_options_1800_; lean_object* v_currNamespace_1801_; lean_object* v_openDecls_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___f_1805_; uint8_t v___x_1806_; uint8_t v___x_1807_; 
v_toCold_1795_ = lean_ctor_get(v___y_1690_, 0);
v_ref_1796_ = lean_ctor_get(v___y_1690_, 2);
v_suppressElabErrors_1797_ = lean_ctor_get_uint8(v___y_1690_, sizeof(void*)*3 + 1);
v_fileName_1798_ = lean_ctor_get(v_toCold_1795_, 0);
v_fileMap_1799_ = lean_ctor_get(v_toCold_1795_, 1);
v_options_1800_ = lean_ctor_get(v_toCold_1795_, 2);
v_currNamespace_1801_ = lean_ctor_get(v_toCold_1795_, 4);
v_openDecls_1802_ = lean_ctor_get(v_toCold_1795_, 5);
v___x_1803_ = lean_box(v_suppressElabErrors_1797_);
v___x_1804_ = lean_box(v___y_1794_);
v___f_1805_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1805_, 0, v___x_1803_);
lean_closure_set(v___f_1805_, 1, v___x_1804_);
v___x_1806_ = 1;
v___x_1807_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1686_, v___x_1806_);
if (v___x_1807_ == 0)
{
v___y_1784_ = v_fileMap_1799_;
v___y_1785_ = v_openDecls_1802_;
v___y_1786_ = v_currNamespace_1801_;
v___y_1787_ = v___f_1805_;
v___y_1788_ = v_fileName_1798_;
v___y_1789_ = v_ref_1796_;
v___y_1790_ = v_suppressElabErrors_1797_;
v___y_1791_ = v___y_1794_;
v___y_1792_ = v___x_1807_;
goto v___jp_1783_;
}
else
{
lean_object* v___x_1808_; uint8_t v___x_1809_; 
v___x_1808_ = l_Lean_warningAsError;
v___x_1809_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_options_1800_, v___x_1808_);
v___y_1784_ = v_fileMap_1799_;
v___y_1785_ = v_openDecls_1802_;
v___y_1786_ = v_currNamespace_1801_;
v___y_1787_ = v___f_1805_;
v___y_1788_ = v_fileName_1798_;
v___y_1789_ = v_ref_1796_;
v___y_1790_ = v_suppressElabErrors_1797_;
v___y_1791_ = v___y_1794_;
v___y_1792_ = v___x_1809_;
goto v___jp_1783_;
}
}
else
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
lean_dec_ref(v_msgData_1685_);
v___x_1810_ = lean_box(0);
v___x_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
return v___x_1811_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___boxed(lean_object* v_ref_1814_, lean_object* v_msgData_1815_, lean_object* v_severity_1816_, lean_object* v_isSilent_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_){
_start:
{
uint8_t v_severity_boxed_1823_; uint8_t v_isSilent_boxed_1824_; lean_object* v_res_1825_; 
v_severity_boxed_1823_ = lean_unbox(v_severity_1816_);
v_isSilent_boxed_1824_ = lean_unbox(v_isSilent_1817_);
v_res_1825_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1814_, v_msgData_1815_, v_severity_boxed_1823_, v_isSilent_boxed_1824_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec(v___y_1821_);
lean_dec_ref(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v_ref_1814_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(lean_object* v_ref_1826_, lean_object* v_msgData_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
uint8_t v___x_1835_; uint8_t v___x_1836_; lean_object* v___x_1837_; 
v___x_1835_ = 2;
v___x_1836_ = 0;
v___x_1837_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1826_, v_msgData_1827_, v___x_1835_, v___x_1836_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26___boxed(lean_object* v_ref_1838_, lean_object* v_msgData_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_){
_start:
{
lean_object* v_res_1847_; 
v_res_1847_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1838_, v_msgData_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, v___y_1845_);
lean_dec(v___y_1845_);
lean_dec_ref(v___y_1844_);
lean_dec(v___y_1843_);
lean_dec_ref(v___y_1842_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v_ref_1838_);
return v_res_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(lean_object* v_msgData_1848_, uint8_t v_severity_1849_, uint8_t v_isSilent_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_ref_1858_; lean_object* v___x_1859_; 
v_ref_1858_ = lean_ctor_get(v___y_1855_, 2);
v___x_1859_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_1858_, v_msgData_1848_, v_severity_1849_, v_isSilent_1850_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_);
return v___x_1859_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42___boxed(lean_object* v_msgData_1860_, lean_object* v_severity_1861_, lean_object* v_isSilent_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
uint8_t v_severity_boxed_1870_; uint8_t v_isSilent_boxed_1871_; lean_object* v_res_1872_; 
v_severity_boxed_1870_ = lean_unbox(v_severity_1861_);
v_isSilent_boxed_1871_ = lean_unbox(v_isSilent_1862_);
v_res_1872_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1860_, v_severity_boxed_1870_, v_isSilent_boxed_1871_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(lean_object* v_msgData_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
uint8_t v___x_1881_; uint8_t v___x_1882_; lean_object* v___x_1883_; 
v___x_1881_ = 2;
v___x_1882_ = 0;
v___x_1883_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27_spec__42(v_msgData_1873_, v___x_1881_, v___x_1882_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27___boxed(lean_object* v_msgData_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v_msgData_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
return v_res_1892_;
}
}
static lean_object* _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1(void){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1894_ = ((lean_object*)(l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__0));
v___x_1895_ = l_Lean_stringToMessageData(v___x_1894_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(lean_object* v_ex_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
if (lean_obj_tag(v_ex_1896_) == 0)
{
lean_object* v_ref_1904_; lean_object* v_msg_1905_; lean_object* v___x_1906_; 
v_ref_1904_ = lean_ctor_get(v_ex_1896_, 0);
lean_inc(v_ref_1904_);
v_msg_1905_ = lean_ctor_get(v_ex_1896_, 1);
lean_inc_ref(v_msg_1905_);
lean_dec_ref_known(v_ex_1896_, 2);
v___x_1906_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26(v_ref_1904_, v_msg_1905_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
lean_dec(v_ref_1904_);
return v___x_1906_;
}
else
{
lean_object* v_id_1907_; uint8_t v___y_1909_; uint8_t v___x_1931_; 
v_id_1907_ = lean_ctor_get(v_ex_1896_, 0);
lean_inc(v_id_1907_);
v___x_1931_ = l_Lean_Elab_isAbortExceptionId(v_id_1907_);
if (v___x_1931_ == 0)
{
uint8_t v___x_1932_; 
v___x_1932_ = l_Lean_Exception_isInterrupt(v_ex_1896_);
lean_dec_ref_known(v_ex_1896_, 2);
v___y_1909_ = v___x_1932_;
goto v___jp_1908_;
}
else
{
lean_dec_ref_known(v_ex_1896_, 2);
v___y_1909_ = v___x_1931_;
goto v___jp_1908_;
}
v___jp_1908_:
{
if (v___y_1909_ == 0)
{
lean_object* v_ref_1910_; lean_object* v___x_1911_; 
v_ref_1910_ = lean_ctor_get(v___y_1901_, 2);
v___x_1911_ = l_Lean_InternalExceptionId_getName(v_id_1907_);
lean_dec(v_id_1907_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
lean_inc(v_a_1912_);
lean_dec_ref_known(v___x_1911_, 1);
v___x_1913_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_1914_ = l_Lean_MessageData_ofName(v_a_1912_);
v___x_1915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1913_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
v___x_1916_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__27(v___x_1915_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_, v___y_1902_);
return v___x_1916_;
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1928_; 
v_a_1917_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1919_ = v___x_1911_;
v_isShared_1920_ = v_isSharedCheck_1928_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1911_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1928_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1926_; 
v___x_1921_ = lean_io_error_to_string(v_a_1917_);
v___x_1922_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
v___x_1923_ = l_Lean_MessageData_ofFormat(v___x_1922_);
lean_inc(v_ref_1910_);
v___x_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1924_, 0, v_ref_1910_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 0, v___x_1924_);
v___x_1926_ = v___x_1919_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1924_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
else
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
lean_dec(v_id_1907_);
v___x_1929_ = lean_box(0);
v___x_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1930_, 0, v___x_1929_);
return v___x_1930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___boxed(lean_object* v_ex_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_ex_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
lean_dec(v___y_1939_);
lean_dec_ref(v___y_1938_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(lean_object* v_x_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1950_; 
lean_inc(v___y_1948_);
lean_inc_ref(v___y_1947_);
lean_inc(v___y_1946_);
lean_inc_ref(v___y_1945_);
lean_inc(v___y_1944_);
lean_inc_ref(v___y_1943_);
v___x_1950_ = lean_apply_7(v_x_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, lean_box(0));
if (lean_obj_tag(v___x_1950_) == 0)
{
return v___x_1950_;
}
else
{
lean_object* v_a_1951_; uint8_t v___y_1953_; uint8_t v___x_1955_; 
v_a_1951_ = lean_ctor_get(v___x_1950_, 0);
lean_inc(v_a_1951_);
v___x_1955_ = l_Lean_Exception_isInterrupt(v_a_1951_);
if (v___x_1955_ == 0)
{
uint8_t v___x_1956_; 
lean_inc(v_a_1951_);
v___x_1956_ = l_Lean_Exception_isRuntime(v_a_1951_);
v___y_1953_ = v___x_1956_;
goto v___jp_1952_;
}
else
{
v___y_1953_ = v___x_1955_;
goto v___jp_1952_;
}
v___jp_1952_:
{
if (v___y_1953_ == 0)
{
lean_object* v___x_1954_; 
lean_dec_ref_known(v___x_1950_, 1);
v___x_1954_ = l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15(v_a_1951_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
return v___x_1954_;
}
else
{
lean_dec(v_a_1951_);
return v___x_1950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7___boxed(lean_object* v_x_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v_x_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(lean_object* v___x_1966_, lean_object* v___x_1967_, lean_object* v_as_1968_, size_t v_sz_1969_, size_t v_i_1970_, lean_object* v_b_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_){
_start:
{
uint8_t v___x_1979_; 
v___x_1979_ = lean_usize_dec_lt(v_i_1970_, v_sz_1969_);
if (v___x_1979_ == 0)
{
lean_object* v___x_1980_; 
lean_dec_ref(v___x_1966_);
v___x_1980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1980_, 0, v_b_1971_);
return v___x_1980_;
}
else
{
lean_object* v_a_1981_; lean_object* v_ref_1982_; lean_object* v_toCold_1983_; lean_object* v_currRecDepth_1984_; lean_object* v_ref_1985_; uint8_t v_diag_1986_; uint8_t v_suppressElabErrors_1987_; lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v_ref_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v_a_1981_ = lean_array_uget_borrowed(v_as_1968_, v_i_1970_);
v_ref_1982_ = lean_ctor_get(v_a_1981_, 0);
v_toCold_1983_ = lean_ctor_get(v___y_1976_, 0);
v_currRecDepth_1984_ = lean_ctor_get(v___y_1976_, 1);
v_ref_1985_ = lean_ctor_get(v___y_1976_, 2);
v_diag_1986_ = lean_ctor_get_uint8(v___y_1976_, sizeof(void*)*3);
v_suppressElabErrors_1987_ = lean_ctor_get_uint8(v___y_1976_, sizeof(void*)*3 + 1);
v___x_1988_ = lean_unsigned_to_nat(0u);
v___x_1989_ = lean_nat_dec_eq(v___x_1967_, v___x_1988_);
v___x_1990_ = lean_box(0);
v___x_1991_ = lean_box(0);
v___x_1992_ = lean_box(v___x_1989_);
lean_inc_ref(v___x_1966_);
lean_inc(v_a_1981_);
v___x_1993_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_processDefDeriving___boxed), 11, 4);
lean_closure_set(v___x_1993_, 0, v_a_1981_);
lean_closure_set(v___x_1993_, 1, v___x_1966_);
lean_closure_set(v___x_1993_, 2, v___x_1992_);
lean_closure_set(v___x_1993_, 3, v___x_1991_);
v_ref_1994_ = l_Lean_replaceRef(v_ref_1982_, v_ref_1985_);
lean_inc(v_currRecDepth_1984_);
lean_inc_ref(v_toCold_1983_);
v___x_1995_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1995_, 0, v_toCold_1983_);
lean_ctor_set(v___x_1995_, 1, v_currRecDepth_1984_);
lean_ctor_set(v___x_1995_, 2, v_ref_1994_);
lean_ctor_set_uint8(v___x_1995_, sizeof(void*)*3, v_diag_1986_);
lean_ctor_set_uint8(v___x_1995_, sizeof(void*)*3 + 1, v_suppressElabErrors_1987_);
v___x_1996_ = l_Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7(v___x_1993_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___x_1995_, v___y_1977_);
lean_dec_ref_known(v___x_1995_, 3);
if (lean_obj_tag(v___x_1996_) == 0)
{
size_t v___x_1997_; size_t v___x_1998_; 
lean_dec_ref_known(v___x_1996_, 1);
v___x_1997_ = ((size_t)1ULL);
v___x_1998_ = lean_usize_add(v_i_1970_, v___x_1997_);
v_i_1970_ = v___x_1998_;
v_b_1971_ = v___x_1990_;
goto _start;
}
else
{
lean_dec_ref(v___x_1966_);
return v___x_1996_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8___boxed(lean_object* v___x_2000_, lean_object* v___x_2001_, lean_object* v_as_2002_, lean_object* v_sz_2003_, lean_object* v_i_2004_, lean_object* v_b_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
size_t v_sz_boxed_2013_; size_t v_i_boxed_2014_; lean_object* v_res_2015_; 
v_sz_boxed_2013_ = lean_unbox_usize(v_sz_2003_);
lean_dec(v_sz_2003_);
v_i_boxed_2014_ = lean_unbox_usize(v_i_2004_);
lean_dec(v_i_2004_);
v_res_2015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_2000_, v___x_2001_, v_as_2002_, v_sz_boxed_2013_, v_i_boxed_2014_, v_b_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec_ref(v_as_2002_);
lean_dec(v___x_2001_);
return v_res_2015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0(lean_object* v_a_2016_, lean_object* v_declName_2017_, lean_object* v_a_2018_, lean_object* v___x_2019_, size_t v___x_2020_, lean_object* v___x_2021_, lean_object* v_xs_2022_, lean_object* v_x_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; size_t v_sz_2036_; lean_object* v___x_2037_; 
v___x_2031_ = l_Lean_ConstantInfo_levelParams(v_a_2016_);
v___x_2032_ = lean_box(0);
v___x_2033_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v___x_2031_, v___x_2032_);
v___x_2034_ = l_Lean_Expr_const___override(v_declName_2017_, v___x_2033_);
v___x_2035_ = l_Lean_mkAppN(v___x_2034_, v_xs_2022_);
v_sz_2036_ = lean_array_size(v_a_2018_);
v___x_2037_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Command_elabNewtype_spec__8(v___x_2035_, v___x_2019_, v_a_2018_, v_sz_2036_, v___x_2020_, v___x_2021_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2044_ == 0)
{
lean_object* v_unused_2045_; 
v_unused_2045_ = lean_ctor_get(v___x_2037_, 0);
lean_dec(v_unused_2045_);
v___x_2039_ = v___x_2037_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_dec(v___x_2037_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
lean_ctor_set(v___x_2039_, 0, v___x_2021_);
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v___x_2021_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
else
{
return v___x_2037_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__0___boxed(lean_object* v_a_2046_, lean_object* v_declName_2047_, lean_object* v_a_2048_, lean_object* v___x_2049_, lean_object* v___x_2050_, lean_object* v___x_2051_, lean_object* v_xs_2052_, lean_object* v_x_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
size_t v___x_50896__boxed_2061_; lean_object* v_res_2062_; 
v___x_50896__boxed_2061_ = lean_unbox_usize(v___x_2050_);
lean_dec(v___x_2050_);
v_res_2062_ = l_Lean_Elab_Command_elabNewtype___lam__0(v_a_2046_, v_declName_2047_, v_a_2048_, v___x_2049_, v___x_50896__boxed_2061_, v___x_2051_, v_xs_2052_, v_x_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
lean_dec(v___y_2059_);
lean_dec_ref(v___y_2058_);
lean_dec(v___y_2057_);
lean_dec_ref(v___y_2056_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
lean_dec_ref(v_x_2053_);
lean_dec_ref(v_xs_2052_);
lean_dec(v___x_2049_);
lean_dec_ref(v_a_2048_);
lean_dec_ref(v_a_2046_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(lean_object* v___y_2063_, uint8_t v_isExporting_2064_, lean_object* v___x_2065_, lean_object* v___y_2066_, lean_object* v___x_2067_, lean_object* v_a_x3f_2068_){
_start:
{
lean_object* v___x_2070_; lean_object* v_env_2071_; lean_object* v_nextMacroScope_2072_; lean_object* v_ngen_2073_; lean_object* v_auxDeclNGen_2074_; lean_object* v_traceState_2075_; lean_object* v_messages_2076_; lean_object* v_infoState_2077_; lean_object* v_snapshotTasks_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2103_; 
v___x_2070_ = lean_st_ref_take(v___y_2063_);
v_env_2071_ = lean_ctor_get(v___x_2070_, 0);
v_nextMacroScope_2072_ = lean_ctor_get(v___x_2070_, 1);
v_ngen_2073_ = lean_ctor_get(v___x_2070_, 2);
v_auxDeclNGen_2074_ = lean_ctor_get(v___x_2070_, 3);
v_traceState_2075_ = lean_ctor_get(v___x_2070_, 4);
v_messages_2076_ = lean_ctor_get(v___x_2070_, 6);
v_infoState_2077_ = lean_ctor_get(v___x_2070_, 7);
v_snapshotTasks_2078_ = lean_ctor_get(v___x_2070_, 8);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2070_);
if (v_isSharedCheck_2103_ == 0)
{
lean_object* v_unused_2104_; 
v_unused_2104_ = lean_ctor_get(v___x_2070_, 5);
lean_dec(v_unused_2104_);
v___x_2080_ = v___x_2070_;
v_isShared_2081_ = v_isSharedCheck_2103_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_snapshotTasks_2078_);
lean_inc(v_infoState_2077_);
lean_inc(v_messages_2076_);
lean_inc(v_traceState_2075_);
lean_inc(v_auxDeclNGen_2074_);
lean_inc(v_ngen_2073_);
lean_inc(v_nextMacroScope_2072_);
lean_inc(v_env_2071_);
lean_dec(v___x_2070_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2103_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2082_; lean_object* v___x_2084_; 
v___x_2082_ = l_Lean_Environment_setExporting(v_env_2071_, v_isExporting_2064_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 5, v___x_2065_);
lean_ctor_set(v___x_2080_, 0, v___x_2082_);
v___x_2084_ = v___x_2080_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2082_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_nextMacroScope_2072_);
lean_ctor_set(v_reuseFailAlloc_2102_, 2, v_ngen_2073_);
lean_ctor_set(v_reuseFailAlloc_2102_, 3, v_auxDeclNGen_2074_);
lean_ctor_set(v_reuseFailAlloc_2102_, 4, v_traceState_2075_);
lean_ctor_set(v_reuseFailAlloc_2102_, 5, v___x_2065_);
lean_ctor_set(v_reuseFailAlloc_2102_, 6, v_messages_2076_);
lean_ctor_set(v_reuseFailAlloc_2102_, 7, v_infoState_2077_);
lean_ctor_set(v_reuseFailAlloc_2102_, 8, v_snapshotTasks_2078_);
v___x_2084_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v_mctx_2087_; lean_object* v_zetaDeltaFVarIds_2088_; lean_object* v_postponed_2089_; lean_object* v_diag_2090_; lean_object* v___x_2092_; uint8_t v_isShared_2093_; uint8_t v_isSharedCheck_2100_; 
v___x_2085_ = lean_st_ref_put(v___y_2063_, v___x_2084_);
v___x_2086_ = lean_st_ref_take(v___y_2066_);
v_mctx_2087_ = lean_ctor_get(v___x_2086_, 0);
v_zetaDeltaFVarIds_2088_ = lean_ctor_get(v___x_2086_, 2);
v_postponed_2089_ = lean_ctor_get(v___x_2086_, 3);
v_diag_2090_ = lean_ctor_get(v___x_2086_, 4);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2100_ == 0)
{
lean_object* v_unused_2101_; 
v_unused_2101_ = lean_ctor_get(v___x_2086_, 1);
lean_dec(v_unused_2101_);
v___x_2092_ = v___x_2086_;
v_isShared_2093_ = v_isSharedCheck_2100_;
goto v_resetjp_2091_;
}
else
{
lean_inc(v_diag_2090_);
lean_inc(v_postponed_2089_);
lean_inc(v_zetaDeltaFVarIds_2088_);
lean_inc(v_mctx_2087_);
lean_dec(v___x_2086_);
v___x_2092_ = lean_box(0);
v_isShared_2093_ = v_isSharedCheck_2100_;
goto v_resetjp_2091_;
}
v_resetjp_2091_:
{
lean_object* v___x_2094_; lean_object* v___x_2096_; 
v___x_2094_ = lean_box(0);
if (v_isShared_2093_ == 0)
{
lean_ctor_set(v___x_2092_, 1, v___x_2067_);
v___x_2096_ = v___x_2092_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_mctx_2087_);
lean_ctor_set(v_reuseFailAlloc_2099_, 1, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2099_, 2, v_zetaDeltaFVarIds_2088_);
lean_ctor_set(v_reuseFailAlloc_2099_, 3, v_postponed_2089_);
lean_ctor_set(v_reuseFailAlloc_2099_, 4, v_diag_2090_);
v___x_2096_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2097_ = lean_st_ref_put(v___y_2066_, v___x_2096_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2094_);
return v___x_2098_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0___boxed(lean_object* v___y_2105_, lean_object* v_isExporting_2106_, lean_object* v___x_2107_, lean_object* v___y_2108_, lean_object* v___x_2109_, lean_object* v_a_x3f_2110_, lean_object* v___y_2111_){
_start:
{
uint8_t v_isExporting_boxed_2112_; lean_object* v_res_2113_; 
v_isExporting_boxed_2112_ = lean_unbox(v_isExporting_2106_);
v_res_2113_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2105_, v_isExporting_boxed_2112_, v___x_2107_, v___y_2108_, v___x_2109_, v_a_x3f_2110_);
lean_dec(v_a_x3f_2110_);
lean_dec(v___y_2108_);
lean_dec(v___y_2105_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(lean_object* v_x_2114_, uint8_t v_isExporting_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v___x_2123_; lean_object* v_env_2124_; lean_object* v___x_2125_; uint8_t v_isModule_2126_; 
v___x_2123_ = lean_st_ref_get(v___y_2121_);
v_env_2124_ = lean_ctor_get(v___x_2123_, 0);
lean_inc_ref(v_env_2124_);
lean_dec(v___x_2123_);
v___x_2125_ = l_Lean_Environment_header(v_env_2124_);
v_isModule_2126_ = lean_ctor_get_uint8(v___x_2125_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_2125_);
if (v_isModule_2126_ == 0)
{
lean_object* v___x_2127_; 
lean_dec_ref(v_env_2124_);
lean_inc(v___y_2121_);
lean_inc_ref(v___y_2120_);
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
v___x_2127_ = lean_apply_7(v_x_2114_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, lean_box(0));
return v___x_2127_;
}
else
{
uint8_t v_isExporting_2128_; 
v_isExporting_2128_ = lean_ctor_get_uint8(v_env_2124_, sizeof(void*)*8);
lean_dec_ref(v_env_2124_);
if (v_isExporting_2115_ == 0)
{
if (v_isExporting_2128_ == 0)
{
lean_object* v___x_2194_; 
lean_inc(v___y_2121_);
lean_inc_ref(v___y_2120_);
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
v___x_2194_ = lean_apply_7(v_x_2114_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, lean_box(0));
return v___x_2194_;
}
else
{
goto v___jp_2129_;
}
}
else
{
if (v_isExporting_2128_ == 0)
{
goto v___jp_2129_;
}
else
{
lean_object* v___x_2195_; 
lean_inc(v___y_2121_);
lean_inc_ref(v___y_2120_);
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
v___x_2195_ = lean_apply_7(v_x_2114_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, lean_box(0));
return v___x_2195_;
}
}
v___jp_2129_:
{
lean_object* v___x_2130_; lean_object* v_env_2131_; lean_object* v_nextMacroScope_2132_; lean_object* v_ngen_2133_; lean_object* v_auxDeclNGen_2134_; lean_object* v_traceState_2135_; lean_object* v_messages_2136_; lean_object* v_infoState_2137_; lean_object* v_snapshotTasks_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2192_; 
v___x_2130_ = lean_st_ref_take(v___y_2121_);
v_env_2131_ = lean_ctor_get(v___x_2130_, 0);
v_nextMacroScope_2132_ = lean_ctor_get(v___x_2130_, 1);
v_ngen_2133_ = lean_ctor_get(v___x_2130_, 2);
v_auxDeclNGen_2134_ = lean_ctor_get(v___x_2130_, 3);
v_traceState_2135_ = lean_ctor_get(v___x_2130_, 4);
v_messages_2136_ = lean_ctor_get(v___x_2130_, 6);
v_infoState_2137_ = lean_ctor_get(v___x_2130_, 7);
v_snapshotTasks_2138_ = lean_ctor_get(v___x_2130_, 8);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2192_ == 0)
{
lean_object* v_unused_2193_; 
v_unused_2193_ = lean_ctor_get(v___x_2130_, 5);
lean_dec(v_unused_2193_);
v___x_2140_ = v___x_2130_;
v_isShared_2141_ = v_isSharedCheck_2192_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_snapshotTasks_2138_);
lean_inc(v_infoState_2137_);
lean_inc(v_messages_2136_);
lean_inc(v_traceState_2135_);
lean_inc(v_auxDeclNGen_2134_);
lean_inc(v_ngen_2133_);
lean_inc(v_nextMacroScope_2132_);
lean_inc(v_env_2131_);
lean_dec(v___x_2130_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2192_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2145_; 
v___x_2142_ = l_Lean_Environment_setExporting(v_env_2131_, v_isExporting_2115_);
v___x_2143_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__2);
if (v_isShared_2141_ == 0)
{
lean_ctor_set(v___x_2140_, 5, v___x_2143_);
lean_ctor_set(v___x_2140_, 0, v___x_2142_);
v___x_2145_ = v___x_2140_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v___x_2142_);
lean_ctor_set(v_reuseFailAlloc_2191_, 1, v_nextMacroScope_2132_);
lean_ctor_set(v_reuseFailAlloc_2191_, 2, v_ngen_2133_);
lean_ctor_set(v_reuseFailAlloc_2191_, 3, v_auxDeclNGen_2134_);
lean_ctor_set(v_reuseFailAlloc_2191_, 4, v_traceState_2135_);
lean_ctor_set(v_reuseFailAlloc_2191_, 5, v___x_2143_);
lean_ctor_set(v_reuseFailAlloc_2191_, 6, v_messages_2136_);
lean_ctor_set(v_reuseFailAlloc_2191_, 7, v_infoState_2137_);
lean_ctor_set(v_reuseFailAlloc_2191_, 8, v_snapshotTasks_2138_);
v___x_2145_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v_mctx_2148_; lean_object* v_zetaDeltaFVarIds_2149_; lean_object* v_postponed_2150_; lean_object* v_diag_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2189_; 
v___x_2146_ = lean_st_ref_put(v___y_2121_, v___x_2145_);
v___x_2147_ = lean_st_ref_take(v___y_2119_);
v_mctx_2148_ = lean_ctor_get(v___x_2147_, 0);
v_zetaDeltaFVarIds_2149_ = lean_ctor_get(v___x_2147_, 2);
v_postponed_2150_ = lean_ctor_get(v___x_2147_, 3);
v_diag_2151_ = lean_ctor_get(v___x_2147_, 4);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2189_ == 0)
{
lean_object* v_unused_2190_; 
v_unused_2190_ = lean_ctor_get(v___x_2147_, 1);
lean_dec(v_unused_2190_);
v___x_2153_ = v___x_2147_;
v_isShared_2154_ = v_isSharedCheck_2189_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_diag_2151_);
lean_inc(v_postponed_2150_);
lean_inc(v_zetaDeltaFVarIds_2149_);
lean_inc(v_mctx_2148_);
lean_dec(v___x_2147_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2189_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2155_; lean_object* v___x_2157_; 
v___x_2155_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__3);
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 1, v___x_2155_);
v___x_2157_ = v___x_2153_;
goto v_reusejp_2156_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_mctx_2148_);
lean_ctor_set(v_reuseFailAlloc_2188_, 1, v___x_2155_);
lean_ctor_set(v_reuseFailAlloc_2188_, 2, v_zetaDeltaFVarIds_2149_);
lean_ctor_set(v_reuseFailAlloc_2188_, 3, v_postponed_2150_);
lean_ctor_set(v_reuseFailAlloc_2188_, 4, v_diag_2151_);
v___x_2157_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2156_;
}
v_reusejp_2156_:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = lean_st_ref_put(v___y_2119_, v___x_2157_);
lean_inc(v___y_2121_);
lean_inc_ref(v___y_2120_);
lean_inc(v___y_2119_);
lean_inc_ref(v___y_2118_);
lean_inc(v___y_2117_);
lean_inc_ref(v___y_2116_);
v___x_2159_ = lean_apply_7(v_x_2114_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, lean_box(0));
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2176_; 
v_a_2160_ = lean_ctor_get(v___x_2159_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2159_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2162_ = v___x_2159_;
v_isShared_2163_ = v_isSharedCheck_2176_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___x_2159_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2176_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2165_; 
lean_inc(v_a_2160_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set_tag(v___x_2162_, 1);
v___x_2165_ = v___x_2162_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2160_);
v___x_2165_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
lean_object* v___x_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2173_; 
v___x_2166_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2121_, v_isExporting_2128_, v___x_2143_, v___y_2119_, v___x_2155_, v___x_2165_);
lean_dec_ref(v___x_2165_);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2166_);
if (v_isSharedCheck_2173_ == 0)
{
lean_object* v_unused_2174_; 
v_unused_2174_ = lean_ctor_get(v___x_2166_, 0);
lean_dec(v_unused_2174_);
v___x_2168_ = v___x_2166_;
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
else
{
lean_dec(v___x_2166_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2173_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2171_; 
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 0, v_a_2160_);
v___x_2171_ = v___x_2168_;
goto v_reusejp_2170_;
}
else
{
lean_object* v_reuseFailAlloc_2172_; 
v_reuseFailAlloc_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2172_, 0, v_a_2160_);
v___x_2171_ = v_reuseFailAlloc_2172_;
goto v_reusejp_2170_;
}
v_reusejp_2170_:
{
return v___x_2171_;
}
}
}
}
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2186_; 
v_a_2177_ = lean_ctor_get(v___x_2159_, 0);
lean_inc(v_a_2177_);
lean_dec_ref_known(v___x_2159_, 1);
v___x_2178_ = lean_box(0);
v___x_2179_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___lam__0(v___y_2121_, v_isExporting_2128_, v___x_2143_, v___y_2119_, v___x_2155_, v___x_2178_);
v_isSharedCheck_2186_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2186_ == 0)
{
lean_object* v_unused_2187_; 
v_unused_2187_ = lean_ctor_get(v___x_2179_, 0);
lean_dec(v_unused_2187_);
v___x_2181_ = v___x_2179_;
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
else
{
lean_dec(v___x_2179_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2186_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2184_; 
if (v_isShared_2182_ == 0)
{
lean_ctor_set_tag(v___x_2181_, 1);
lean_ctor_set(v___x_2181_, 0, v_a_2177_);
v___x_2184_ = v___x_2181_;
goto v_reusejp_2183_;
}
else
{
lean_object* v_reuseFailAlloc_2185_; 
v_reuseFailAlloc_2185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2185_, 0, v_a_2177_);
v___x_2184_ = v_reuseFailAlloc_2185_;
goto v_reusejp_2183_;
}
v_reusejp_2183_:
{
return v___x_2184_;
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
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg___boxed(lean_object* v_x_2196_, lean_object* v_isExporting_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_){
_start:
{
uint8_t v_isExporting_boxed_2205_; lean_object* v_res_2206_; 
v_isExporting_boxed_2205_ = lean_unbox(v_isExporting_2197_);
v_res_2206_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2196_, v_isExporting_boxed_2205_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_);
lean_dec(v___y_2203_);
lean_dec_ref(v___y_2202_);
lean_dec(v___y_2201_);
lean_dec_ref(v___y_2200_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(lean_object* v_x_2207_, uint8_t v_when_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
if (v_when_2208_ == 0)
{
lean_object* v___x_2216_; 
lean_inc(v___y_2214_);
lean_inc_ref(v___y_2213_);
lean_inc(v___y_2212_);
lean_inc_ref(v___y_2211_);
lean_inc(v___y_2210_);
lean_inc_ref(v___y_2209_);
v___x_2216_ = lean_apply_7(v_x_2207_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, lean_box(0));
return v___x_2216_;
}
else
{
uint8_t v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = 0;
v___x_2218_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_2207_, v___x_2217_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
return v___x_2218_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg___boxed(lean_object* v_x_2219_, lean_object* v_when_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
uint8_t v_when_boxed_2228_; lean_object* v_res_2229_; 
v_when_boxed_2228_ = lean_unbox(v_when_2220_);
v_res_2229_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_2219_, v_when_boxed_2228_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1(lean_object* v___x_2230_, uint8_t v___x_2231_, lean_object* v_declName_2232_, lean_object* v_a_2233_, lean_object* v___x_2234_, size_t v___x_2235_, lean_object* v___x_2236_, uint8_t v___x_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v___x_2230_, v___x_2231_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; lean_object* v___x_2247_; lean_object* v___f_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
lean_inc_n(v_a_2246_, 2);
lean_dec_ref_known(v___x_2245_, 1);
v___x_2247_ = lean_box_usize(v___x_2235_);
v___f_2248_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__0___boxed), 15, 6);
lean_closure_set(v___f_2248_, 0, v_a_2246_);
lean_closure_set(v___f_2248_, 1, v_declName_2232_);
lean_closure_set(v___f_2248_, 2, v_a_2233_);
lean_closure_set(v___f_2248_, 3, v___x_2234_);
lean_closure_set(v___f_2248_, 4, v___x_2247_);
lean_closure_set(v___f_2248_, 5, v___x_2236_);
v___x_2249_ = l_Lean_ConstantInfo_value_x21(v_a_2246_, v___x_2237_);
lean_dec(v_a_2246_);
v___x_2250_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Command_elabNewtype_spec__9___redArg(v___x_2249_, v___f_2248_, v___x_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
return v___x_2250_;
}
else
{
lean_object* v_a_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2258_; 
lean_dec(v___x_2234_);
lean_dec_ref(v_a_2233_);
lean_dec(v_declName_2232_);
v_a_2251_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2253_ = v___x_2245_;
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_a_2251_);
lean_dec(v___x_2245_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2258_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2256_; 
if (v_isShared_2254_ == 0)
{
v___x_2256_ = v___x_2253_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_a_2251_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__1___boxed(lean_object* v___x_2259_, lean_object* v___x_2260_, lean_object* v_declName_2261_, lean_object* v_a_2262_, lean_object* v___x_2263_, lean_object* v___x_2264_, lean_object* v___x_2265_, lean_object* v___x_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
uint8_t v___x_51209__boxed_2274_; size_t v___x_51213__boxed_2275_; uint8_t v___x_51215__boxed_2276_; lean_object* v_res_2277_; 
v___x_51209__boxed_2274_ = lean_unbox(v___x_2260_);
v___x_51213__boxed_2275_ = lean_unbox_usize(v___x_2264_);
lean_dec(v___x_2264_);
v___x_51215__boxed_2276_ = lean_unbox(v___x_2266_);
v_res_2277_ = l_Lean_Elab_Command_elabNewtype___lam__1(v___x_2259_, v___x_51209__boxed_2274_, v_declName_2261_, v_a_2262_, v___x_2263_, v___x_51213__boxed_2275_, v___x_2265_, v___x_51215__boxed_2276_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(lean_object* v_ref_2278_, lean_object* v_msg_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_){
_start:
{
lean_object* v_toCold_2287_; lean_object* v_currRecDepth_2288_; lean_object* v_ref_2289_; uint8_t v_diag_2290_; uint8_t v_suppressElabErrors_2291_; lean_object* v_ref_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; 
v_toCold_2287_ = lean_ctor_get(v___y_2284_, 0);
v_currRecDepth_2288_ = lean_ctor_get(v___y_2284_, 1);
v_ref_2289_ = lean_ctor_get(v___y_2284_, 2);
v_diag_2290_ = lean_ctor_get_uint8(v___y_2284_, sizeof(void*)*3);
v_suppressElabErrors_2291_ = lean_ctor_get_uint8(v___y_2284_, sizeof(void*)*3 + 1);
v_ref_2292_ = l_Lean_replaceRef(v_ref_2278_, v_ref_2289_);
lean_inc(v_currRecDepth_2288_);
lean_inc_ref(v_toCold_2287_);
v___x_2293_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2293_, 0, v_toCold_2287_);
lean_ctor_set(v___x_2293_, 1, v_currRecDepth_2288_);
lean_ctor_set(v___x_2293_, 2, v_ref_2292_);
lean_ctor_set_uint8(v___x_2293_, sizeof(void*)*3, v_diag_2290_);
lean_ctor_set_uint8(v___x_2293_, sizeof(void*)*3 + 1, v_suppressElabErrors_2291_);
v___x_2294_ = l_Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7___redArg(v_msg_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___x_2293_, v___y_2285_);
lean_dec_ref_known(v___x_2293_, 3);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg___boxed(lean_object* v_ref_2295_, lean_object* v_msg_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2295_, v_msg_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v_ref_2295_);
return v_res_2304_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0(void){
_start:
{
lean_object* v___x_2305_; lean_object* v___x_2306_; 
v___x_2305_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_2306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2305_);
return v___x_2306_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1(void){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v___x_2307_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2308_ = lean_unsigned_to_nat(0u);
v___x_2309_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2309_, 0, v___x_2308_);
lean_ctor_set(v___x_2309_, 1, v___x_2308_);
lean_ctor_set(v___x_2309_, 2, v___x_2308_);
lean_ctor_set(v___x_2309_, 3, v___x_2308_);
lean_ctor_set(v___x_2309_, 4, v___x_2307_);
lean_ctor_set(v___x_2309_, 5, v___x_2307_);
lean_ctor_set(v___x_2309_, 6, v___x_2307_);
lean_ctor_set(v___x_2309_, 7, v___x_2307_);
lean_ctor_set(v___x_2309_, 8, v___x_2307_);
lean_ctor_set(v___x_2309_, 9, v___x_2307_);
lean_ctor_set(v___x_2309_, 10, v___x_2307_);
return v___x_2309_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2310_ = lean_unsigned_to_nat(32u);
v___x_2311_ = lean_mk_empty_array_with_capacity(v___x_2310_);
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
return v___x_2312_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3(void){
_start:
{
size_t v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2313_ = ((size_t)5ULL);
v___x_2314_ = lean_unsigned_to_nat(0u);
v___x_2315_ = lean_unsigned_to_nat(32u);
v___x_2316_ = lean_mk_empty_array_with_capacity(v___x_2315_);
v___x_2317_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_2318_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2318_, 0, v___x_2317_);
lean_ctor_set(v___x_2318_, 1, v___x_2316_);
lean_ctor_set(v___x_2318_, 2, v___x_2314_);
lean_ctor_set(v___x_2318_, 3, v___x_2314_);
lean_ctor_set_usize(v___x_2318_, 4, v___x_2313_);
return v___x_2318_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v___x_2319_ = lean_box(1);
v___x_2320_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__3);
v___x_2321_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__0);
v___x_2322_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2322_, 0, v___x_2321_);
lean_ctor_set(v___x_2322_, 1, v___x_2320_);
lean_ctor_set(v___x_2322_, 2, v___x_2319_);
return v___x_2322_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6(void){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
v___x_2324_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__5));
v___x_2325_ = l_Lean_stringToMessageData(v___x_2324_);
return v___x_2325_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__7));
v___x_2328_ = l_Lean_stringToMessageData(v___x_2327_);
return v___x_2328_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2330_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__9));
v___x_2331_ = l_Lean_stringToMessageData(v___x_2330_);
return v___x_2331_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12(void){
_start:
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__11));
v___x_2334_ = l_Lean_stringToMessageData(v___x_2333_);
return v___x_2334_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14(void){
_start:
{
lean_object* v___x_2336_; lean_object* v___x_2337_; 
v___x_2336_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__13));
v___x_2337_ = l_Lean_stringToMessageData(v___x_2336_);
return v___x_2337_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__15));
v___x_2340_ = l_Lean_stringToMessageData(v___x_2339_);
return v___x_2340_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18(void){
_start:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; 
v___x_2342_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__17));
v___x_2343_ = l_Lean_stringToMessageData(v___x_2342_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(lean_object* v_msg_2344_, lean_object* v_declHint_2345_, lean_object* v___y_2346_){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v_env_2350_; uint8_t v___x_2351_; 
v___x_2348_ = lean_box(0);
v___x_2349_ = lean_st_ref_get(v___y_2346_);
v_env_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc_ref(v_env_2350_);
lean_dec(v___x_2349_);
v___x_2351_ = l_Lean_Name_isAnonymous(v_declHint_2345_);
if (v___x_2351_ == 0)
{
uint8_t v_isExporting_2352_; 
v_isExporting_2352_ = lean_ctor_get_uint8(v_env_2350_, sizeof(void*)*8);
if (v_isExporting_2352_ == 0)
{
lean_object* v___x_2353_; 
lean_dec_ref(v_env_2350_);
lean_dec(v_declHint_2345_);
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v_msg_2344_);
return v___x_2353_;
}
else
{
lean_object* v___x_2354_; uint8_t v___x_2355_; 
lean_inc_ref(v_env_2350_);
v___x_2354_ = l_Lean_Environment_setExporting(v_env_2350_, v___x_2351_);
lean_inc(v_declHint_2345_);
lean_inc_ref(v___x_2354_);
v___x_2355_ = l_Lean_Environment_contains(v___x_2354_, v_declHint_2345_, v_isExporting_2352_);
if (v___x_2355_ == 0)
{
lean_object* v___x_2356_; 
lean_dec_ref(v___x_2354_);
lean_dec_ref(v_env_2350_);
lean_dec(v_declHint_2345_);
v___x_2356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2356_, 0, v_msg_2344_);
return v___x_2356_;
}
else
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v_c_2362_; lean_object* v___x_2363_; 
v___x_2357_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2358_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2359_ = l_Lean_Options_empty;
v___x_2360_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2360_, 0, v___x_2354_);
lean_ctor_set(v___x_2360_, 1, v___x_2357_);
lean_ctor_set(v___x_2360_, 2, v___x_2358_);
lean_ctor_set(v___x_2360_, 3, v___x_2359_);
lean_inc(v_declHint_2345_);
v___x_2361_ = l_Lean_MessageData_ofConstName(v_declHint_2345_, v___x_2351_);
v_c_2362_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2362_, 0, v___x_2360_);
lean_ctor_set(v_c_2362_, 1, v___x_2361_);
v___x_2363_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2350_, v_declHint_2345_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
lean_dec_ref(v_env_2350_);
lean_dec(v_declHint_2345_);
v___x_2364_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2365_, 0, v___x_2364_);
lean_ctor_set(v___x_2365_, 1, v_c_2362_);
v___x_2366_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2365_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = l_Lean_MessageData_note(v___x_2367_);
v___x_2369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2369_, 0, v_msg_2344_);
lean_ctor_set(v___x_2369_, 1, v___x_2368_);
v___x_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2369_);
return v___x_2370_;
}
else
{
lean_object* v_val_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2405_; 
v_val_2371_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2373_ = v___x_2363_;
v_isShared_2374_ = v_isSharedCheck_2405_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_val_2371_);
lean_dec(v___x_2363_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2405_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v_mod_2377_; uint8_t v___x_2378_; 
v___x_2375_ = l_Lean_Environment_header(v_env_2350_);
lean_dec_ref(v_env_2350_);
v___x_2376_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2375_);
v_mod_2377_ = lean_array_get(v___x_2348_, v___x_2376_, v_val_2371_);
lean_dec(v_val_2371_);
lean_dec_ref(v___x_2376_);
v___x_2378_ = l_Lean_isPrivateName(v_declHint_2345_);
lean_dec(v_declHint_2345_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2390_; 
v___x_2379_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2379_);
lean_ctor_set(v___x_2380_, 1, v_c_2362_);
v___x_2381_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2382_, 0, v___x_2380_);
lean_ctor_set(v___x_2382_, 1, v___x_2381_);
v___x_2383_ = l_Lean_MessageData_ofName(v_mod_2377_);
v___x_2384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2382_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2384_);
lean_ctor_set(v___x_2386_, 1, v___x_2385_);
v___x_2387_ = l_Lean_MessageData_note(v___x_2386_);
v___x_2388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2388_, 0, v_msg_2344_);
lean_ctor_set(v___x_2388_, 1, v___x_2387_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set_tag(v___x_2373_, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2388_);
v___x_2390_ = v___x_2373_;
goto v_reusejp_2389_;
}
else
{
lean_object* v_reuseFailAlloc_2391_; 
v_reuseFailAlloc_2391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2391_, 0, v___x_2388_);
v___x_2390_ = v_reuseFailAlloc_2391_;
goto v_reusejp_2389_;
}
v_reusejp_2389_:
{
return v___x_2390_;
}
}
else
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2403_; 
v___x_2392_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2393_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2393_, 0, v___x_2392_);
lean_ctor_set(v___x_2393_, 1, v_c_2362_);
v___x_2394_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2395_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2395_, 0, v___x_2393_);
lean_ctor_set(v___x_2395_, 1, v___x_2394_);
v___x_2396_ = l_Lean_MessageData_ofName(v_mod_2377_);
v___x_2397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2395_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2397_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
v___x_2400_ = l_Lean_MessageData_note(v___x_2399_);
v___x_2401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2401_, 0, v_msg_2344_);
lean_ctor_set(v___x_2401_, 1, v___x_2400_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set_tag(v___x_2373_, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2401_);
v___x_2403_ = v___x_2373_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2401_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2406_; 
lean_dec_ref(v_env_2350_);
lean_dec(v_declHint_2345_);
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v_msg_2344_);
return v___x_2406_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___boxed(lean_object* v_msg_2407_, lean_object* v_declHint_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2407_, v_declHint_2408_, v___y_2409_);
lean_dec(v___y_2409_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(lean_object* v_msg_2412_, lean_object* v_declHint_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v___x_2421_; lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2431_; 
v___x_2421_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_2412_, v_declHint_2413_, v___y_2419_);
v_a_2422_ = lean_ctor_get(v___x_2421_, 0);
v_isSharedCheck_2431_ = !lean_is_exclusive(v___x_2421_);
if (v_isSharedCheck_2431_ == 0)
{
v___x_2424_ = v___x_2421_;
v_isShared_2425_ = v_isSharedCheck_2431_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2421_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2431_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2429_; 
v___x_2426_ = l_Lean_unknownIdentifierMessageTag;
v___x_2427_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2427_, 0, v___x_2426_);
lean_ctor_set(v___x_2427_, 1, v_a_2422_);
if (v_isShared_2425_ == 0)
{
lean_ctor_set(v___x_2424_, 0, v___x_2427_);
v___x_2429_ = v___x_2424_;
goto v_reusejp_2428_;
}
else
{
lean_object* v_reuseFailAlloc_2430_; 
v_reuseFailAlloc_2430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2430_, 0, v___x_2427_);
v___x_2429_ = v_reuseFailAlloc_2430_;
goto v_reusejp_2428_;
}
v_reusejp_2428_:
{
return v___x_2429_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49___boxed(lean_object* v_msg_2432_, lean_object* v_declHint_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2432_, v_declHint_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v___y_2435_);
lean_dec_ref(v___y_2434_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(lean_object* v_ref_2442_, lean_object* v_msg_2443_, lean_object* v_declHint_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v___x_2452_; lean_object* v_a_2453_; lean_object* v___x_2454_; 
v___x_2452_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49(v_msg_2443_, v_declHint_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref(v___x_2452_);
v___x_2454_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_2442_, v_a_2453_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
return v___x_2454_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg___boxed(lean_object* v_ref_2455_, lean_object* v_msg_2456_, lean_object* v_declHint_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2455_, v_msg_2456_, v_declHint_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_);
lean_dec(v___y_2463_);
lean_dec_ref(v___y_2462_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v_ref_2455_);
return v_res_2465_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1(void){
_start:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__0));
v___x_2468_ = l_Lean_stringToMessageData(v___x_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(lean_object* v_ref_2469_, lean_object* v_constName_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v___x_2478_; uint8_t v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v___x_2478_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2479_ = 0;
lean_inc(v_constName_2470_);
v___x_2480_ = l_Lean_MessageData_ofConstName(v_constName_2470_, v___x_2479_);
v___x_2481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2478_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
v___x_2482_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2483_, 0, v___x_2481_);
lean_ctor_set(v___x_2483_, 1, v___x_2482_);
v___x_2484_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_2469_, v___x_2483_, v_constName_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_);
return v___x_2484_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___boxed(lean_object* v_ref_2485_, lean_object* v_constName_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2485_, v_constName_2486_, v___y_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_);
lean_dec(v___y_2492_);
lean_dec_ref(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec_ref(v___y_2489_);
lean_dec(v___y_2488_);
lean_dec_ref(v___y_2487_);
lean_dec(v_ref_2485_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(lean_object* v_constName_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v_ref_2503_; lean_object* v___x_2504_; 
v_ref_2503_ = lean_ctor_get(v___y_2500_, 2);
v___x_2504_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_2503_, v_constName_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg___boxed(lean_object* v_constName_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(lean_object* v_constName_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_){
_start:
{
lean_object* v___x_2522_; lean_object* v_env_2523_; uint8_t v___x_2524_; lean_object* v___x_2525_; 
v___x_2522_ = lean_st_ref_get(v___y_2520_);
v_env_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc_ref(v_env_2523_);
lean_dec(v___x_2522_);
v___x_2524_ = 0;
lean_inc(v_constName_2514_);
v___x_2525_ = l_Lean_Environment_find_x3f(v_env_2523_, v_constName_2514_, v___x_2524_);
if (lean_obj_tag(v___x_2525_) == 0)
{
lean_object* v___x_2526_; 
v___x_2526_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_);
return v___x_2526_;
}
else
{
lean_object* v_val_2527_; lean_object* v___x_2529_; uint8_t v_isShared_2530_; uint8_t v_isSharedCheck_2534_; 
lean_dec(v_constName_2514_);
v_val_2527_ = lean_ctor_get(v___x_2525_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2525_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2529_ = v___x_2525_;
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
else
{
lean_inc(v_val_2527_);
lean_dec(v___x_2525_);
v___x_2529_ = lean_box(0);
v_isShared_2530_ = v_isSharedCheck_2534_;
goto v_resetjp_2528_;
}
v_resetjp_2528_:
{
lean_object* v___x_2532_; 
if (v_isShared_2530_ == 0)
{
lean_ctor_set_tag(v___x_2529_, 0);
v___x_2532_ = v___x_2529_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_val_2527_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed(lean_object* v_constName_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5(v_constName_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_);
lean_dec(v___y_2541_);
lean_dec_ref(v___y_2540_);
lean_dec(v___y_2539_);
lean_dec_ref(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(lean_object* v_t_2544_, lean_object* v___y_2545_){
_start:
{
lean_object* v___x_2547_; lean_object* v_infoState_2548_; uint8_t v_enabled_2549_; 
v___x_2547_ = lean_st_ref_get(v___y_2545_);
v_infoState_2548_ = lean_ctor_get(v___x_2547_, 8);
lean_inc_ref(v_infoState_2548_);
lean_dec(v___x_2547_);
v_enabled_2549_ = lean_ctor_get_uint8(v_infoState_2548_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2548_);
if (v_enabled_2549_ == 0)
{
lean_object* v___x_2550_; lean_object* v___x_2551_; 
lean_dec_ref(v_t_2544_);
v___x_2550_ = lean_box(0);
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2550_);
return v___x_2551_;
}
else
{
lean_object* v___x_2552_; lean_object* v_infoState_2553_; lean_object* v_env_2554_; lean_object* v_messages_2555_; lean_object* v_scopes_2556_; lean_object* v_usedQuotCtxts_2557_; lean_object* v_nextMacroScope_2558_; lean_object* v_maxRecDepth_2559_; lean_object* v_ngen_2560_; lean_object* v_auxDeclNGen_2561_; lean_object* v_traceState_2562_; lean_object* v_snapshotTasks_2563_; lean_object* v_prevLinterStates_2564_; lean_object* v_codeQualityEntryTasks_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2587_; 
v___x_2552_ = lean_st_ref_take(v___y_2545_);
v_infoState_2553_ = lean_ctor_get(v___x_2552_, 8);
v_env_2554_ = lean_ctor_get(v___x_2552_, 0);
v_messages_2555_ = lean_ctor_get(v___x_2552_, 1);
v_scopes_2556_ = lean_ctor_get(v___x_2552_, 2);
v_usedQuotCtxts_2557_ = lean_ctor_get(v___x_2552_, 3);
v_nextMacroScope_2558_ = lean_ctor_get(v___x_2552_, 4);
v_maxRecDepth_2559_ = lean_ctor_get(v___x_2552_, 5);
v_ngen_2560_ = lean_ctor_get(v___x_2552_, 6);
v_auxDeclNGen_2561_ = lean_ctor_get(v___x_2552_, 7);
v_traceState_2562_ = lean_ctor_get(v___x_2552_, 9);
v_snapshotTasks_2563_ = lean_ctor_get(v___x_2552_, 10);
v_prevLinterStates_2564_ = lean_ctor_get(v___x_2552_, 11);
v_codeQualityEntryTasks_2565_ = lean_ctor_get(v___x_2552_, 12);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2567_ = v___x_2552_;
v_isShared_2568_ = v_isSharedCheck_2587_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_codeQualityEntryTasks_2565_);
lean_inc(v_prevLinterStates_2564_);
lean_inc(v_snapshotTasks_2563_);
lean_inc(v_traceState_2562_);
lean_inc(v_infoState_2553_);
lean_inc(v_auxDeclNGen_2561_);
lean_inc(v_ngen_2560_);
lean_inc(v_maxRecDepth_2559_);
lean_inc(v_nextMacroScope_2558_);
lean_inc(v_usedQuotCtxts_2557_);
lean_inc(v_scopes_2556_);
lean_inc(v_messages_2555_);
lean_inc(v_env_2554_);
lean_dec(v___x_2552_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2587_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
uint8_t v_enabled_2569_; lean_object* v_assignment_2570_; lean_object* v_lazyAssignment_2571_; lean_object* v_trees_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2586_; 
v_enabled_2569_ = lean_ctor_get_uint8(v_infoState_2553_, sizeof(void*)*3);
v_assignment_2570_ = lean_ctor_get(v_infoState_2553_, 0);
v_lazyAssignment_2571_ = lean_ctor_get(v_infoState_2553_, 1);
v_trees_2572_ = lean_ctor_get(v_infoState_2553_, 2);
v_isSharedCheck_2586_ = !lean_is_exclusive(v_infoState_2553_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2574_ = v_infoState_2553_;
v_isShared_2575_ = v_isSharedCheck_2586_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_trees_2572_);
lean_inc(v_lazyAssignment_2571_);
lean_inc(v_assignment_2570_);
lean_dec(v_infoState_2553_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2586_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2579_; 
v___x_2576_ = lean_box(0);
v___x_2577_ = l_Lean_PersistentArray_push___redArg(v_trees_2572_, v_t_2544_);
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 2, v___x_2577_);
v___x_2579_ = v___x_2574_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_assignment_2570_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v_lazyAssignment_2571_);
lean_ctor_set(v_reuseFailAlloc_2585_, 2, v___x_2577_);
lean_ctor_set_uint8(v_reuseFailAlloc_2585_, sizeof(void*)*3, v_enabled_2569_);
v___x_2579_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
lean_object* v___x_2581_; 
if (v_isShared_2568_ == 0)
{
lean_ctor_set(v___x_2567_, 8, v___x_2579_);
v___x_2581_ = v___x_2567_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_env_2554_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_messages_2555_);
lean_ctor_set(v_reuseFailAlloc_2584_, 2, v_scopes_2556_);
lean_ctor_set(v_reuseFailAlloc_2584_, 3, v_usedQuotCtxts_2557_);
lean_ctor_set(v_reuseFailAlloc_2584_, 4, v_nextMacroScope_2558_);
lean_ctor_set(v_reuseFailAlloc_2584_, 5, v_maxRecDepth_2559_);
lean_ctor_set(v_reuseFailAlloc_2584_, 6, v_ngen_2560_);
lean_ctor_set(v_reuseFailAlloc_2584_, 7, v_auxDeclNGen_2561_);
lean_ctor_set(v_reuseFailAlloc_2584_, 8, v___x_2579_);
lean_ctor_set(v_reuseFailAlloc_2584_, 9, v_traceState_2562_);
lean_ctor_set(v_reuseFailAlloc_2584_, 10, v_snapshotTasks_2563_);
lean_ctor_set(v_reuseFailAlloc_2584_, 11, v_prevLinterStates_2564_);
lean_ctor_set(v_reuseFailAlloc_2584_, 12, v_codeQualityEntryTasks_2565_);
v___x_2581_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2582_ = lean_st_ref_put(v___y_2545_, v___x_2581_);
v___x_2583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2576_);
return v___x_2583_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg___boxed(lean_object* v_t_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_2588_, v___y_2589_);
lean_dec(v___y_2589_);
return v_res_2591_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; 
v___x_2592_ = lean_unsigned_to_nat(32u);
v___x_2593_ = lean_mk_empty_array_with_capacity(v___x_2592_);
v___x_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2593_);
return v___x_2594_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1(void){
_start:
{
size_t v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2595_ = ((size_t)5ULL);
v___x_2596_ = lean_unsigned_to_nat(0u);
v___x_2597_ = lean_unsigned_to_nat(32u);
v___x_2598_ = lean_mk_empty_array_with_capacity(v___x_2597_);
v___x_2599_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__0);
v___x_2600_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
lean_ctor_set(v___x_2600_, 1, v___x_2598_);
lean_ctor_set(v___x_2600_, 2, v___x_2596_);
lean_ctor_set(v___x_2600_, 3, v___x_2596_);
lean_ctor_set_usize(v___x_2600_, 4, v___x_2595_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(lean_object* v_t_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; lean_object* v_infoState_2606_; uint8_t v_enabled_2607_; 
v___x_2605_ = lean_st_ref_get(v___y_2603_);
v_infoState_2606_ = lean_ctor_get(v___x_2605_, 8);
lean_inc_ref(v_infoState_2606_);
lean_dec(v___x_2605_);
v_enabled_2607_ = lean_ctor_get_uint8(v_infoState_2606_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2606_);
if (v_enabled_2607_ == 0)
{
lean_object* v___x_2608_; lean_object* v___x_2609_; 
lean_dec_ref(v_t_2601_);
v___x_2608_ = lean_box(0);
v___x_2609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2608_);
return v___x_2609_;
}
else
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___closed__1);
v___x_2611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2611_, 0, v_t_2601_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
v___x_2612_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v___x_2611_, v___y_2603_);
return v___x_2612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9___boxed(lean_object* v_t_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v_t_2613_, v___y_2614_, v___y_2615_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(lean_object* v_msgData_2618_, lean_object* v_macroStack_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v_scopes_2624_; lean_object* v___x_2625_; lean_object* v_opts_2626_; lean_object* v___x_2627_; uint8_t v___x_2628_; 
v___x_2622_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2623_ = lean_st_ref_get(v___y_2620_);
v_scopes_2624_ = lean_ctor_get(v___x_2623_, 2);
lean_inc(v_scopes_2624_);
lean_dec(v___x_2623_);
v___x_2625_ = l_List_head_x21___redArg(v___x_2622_, v_scopes_2624_);
lean_dec(v_scopes_2624_);
v_opts_2626_ = lean_ctor_get(v___x_2625_, 1);
lean_inc_ref(v_opts_2626_);
lean_dec(v___x_2625_);
v___x_2627_ = l_Lean_Elab_pp_macroStack;
v___x_2628_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_2626_, v___x_2627_);
lean_dec_ref(v_opts_2626_);
if (v___x_2628_ == 0)
{
lean_object* v___x_2629_; 
lean_dec(v_macroStack_2619_);
v___x_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2629_, 0, v_msgData_2618_);
return v___x_2629_;
}
else
{
if (lean_obj_tag(v_macroStack_2619_) == 0)
{
lean_object* v___x_2630_; 
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v_msgData_2618_);
return v___x_2630_;
}
else
{
lean_object* v_head_2631_; lean_object* v_after_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2647_; 
v_head_2631_ = lean_ctor_get(v_macroStack_2619_, 0);
lean_inc(v_head_2631_);
v_after_2632_ = lean_ctor_get(v_head_2631_, 1);
v_isSharedCheck_2647_ = !lean_is_exclusive(v_head_2631_);
if (v_isSharedCheck_2647_ == 0)
{
lean_object* v_unused_2648_; 
v_unused_2648_ = lean_ctor_get(v_head_2631_, 0);
lean_dec(v_unused_2648_);
v___x_2634_ = v_head_2631_;
v_isShared_2635_ = v_isSharedCheck_2647_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_after_2632_);
lean_dec(v_head_2631_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2647_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2636_; lean_object* v___x_2638_; 
v___x_2636_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14___closed__0);
if (v_isShared_2635_ == 0)
{
lean_ctor_set_tag(v___x_2634_, 7);
lean_ctor_set(v___x_2634_, 1, v___x_2636_);
lean_ctor_set(v___x_2634_, 0, v_msgData_2618_);
v___x_2638_ = v___x_2634_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_msgData_2618_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v___x_2636_);
v___x_2638_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v_msgData_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2639_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11___redArg___closed__2);
v___x_2640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
lean_ctor_set(v___x_2640_, 1, v___x_2639_);
v___x_2641_ = l_Lean_MessageData_ofSyntax(v_after_2632_);
v___x_2642_ = l_Lean_indentD(v___x_2641_);
v_msgData_2643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2643_, 0, v___x_2640_);
lean_ctor_set(v_msgData_2643_, 1, v___x_2642_);
v___x_2644_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__14(v_msgData_2643_, v_macroStack_2619_);
v___x_2645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2644_);
return v___x_2645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg___boxed(lean_object* v_msgData_2649_, lean_object* v_macroStack_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_){
_start:
{
lean_object* v_res_2653_; 
v_res_2653_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_2649_, v_macroStack_2650_, v___y_2651_);
lean_dec(v___y_2651_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(lean_object* v_msgData_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v___x_2657_; lean_object* v_env_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v_scopes_2661_; lean_object* v___x_2662_; lean_object* v_opts_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2657_ = lean_st_ref_get(v___y_2655_);
v_env_2658_ = lean_ctor_get(v___x_2657_, 0);
lean_inc_ref(v_env_2658_);
lean_dec(v___x_2657_);
v___x_2659_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2660_ = lean_st_ref_get(v___y_2655_);
v_scopes_2661_ = lean_ctor_get(v___x_2660_, 2);
lean_inc(v_scopes_2661_);
lean_dec(v___x_2660_);
v___x_2662_ = l_List_head_x21___redArg(v___x_2659_, v_scopes_2661_);
lean_dec(v_scopes_2661_);
v_opts_2663_ = lean_ctor_get(v___x_2662_, 1);
lean_inc_ref(v_opts_2663_);
lean_dec(v___x_2662_);
v___x_2664_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2665_ = lean_unsigned_to_nat(32u);
v___x_2666_ = lean_mk_empty_array_with_capacity(v___x_2665_);
lean_dec_ref(v___x_2666_);
v___x_2667_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2668_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2668_, 0, v_env_2658_);
lean_ctor_set(v___x_2668_, 1, v___x_2664_);
lean_ctor_set(v___x_2668_, 2, v___x_2667_);
lean_ctor_set(v___x_2668_, 3, v_opts_2663_);
v___x_2669_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2668_);
lean_ctor_set(v___x_2669_, 1, v_msgData_2654_);
v___x_2670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg___boxed(lean_object* v_msgData_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v_res_2674_; 
v_res_2674_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_2671_, v___y_2672_);
lean_dec(v___y_2672_);
return v_res_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(lean_object* v_msg_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_){
_start:
{
lean_object* v___x_2679_; 
v___x_2679_ = l_Lean_Elab_Command_getRef___redArg(v___y_2676_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v_macroStack_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v_a_2684_; lean_object* v___x_2685_; lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2694_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref_known(v___x_2679_, 1);
v_macroStack_2681_ = lean_ctor_get(v___y_2676_, 4);
v___x_2682_ = l_Lean_Elab_getBetterRef(v_a_2680_, v_macroStack_2681_);
lean_dec(v_a_2680_);
v___x_2683_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_2675_, v___y_2677_);
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref(v___x_2683_);
lean_inc(v_macroStack_2681_);
v___x_2685_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_a_2684_, v_macroStack_2681_, v___y_2677_);
v_a_2686_ = lean_ctor_get(v___x_2685_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2685_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2688_ = v___x_2685_;
v_isShared_2689_ = v_isSharedCheck_2694_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2685_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2694_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2690_; lean_object* v___x_2692_; 
v___x_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2682_);
lean_ctor_set(v___x_2690_, 1, v_a_2686_);
if (v_isShared_2689_ == 0)
{
lean_ctor_set_tag(v___x_2688_, 1);
lean_ctor_set(v___x_2688_, 0, v___x_2690_);
v___x_2692_ = v___x_2688_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v___x_2690_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec_ref(v_msg_2675_);
v_a_2695_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2679_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2679_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg___boxed(lean_object* v_msg_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2703_, v___y_2704_, v___y_2705_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(lean_object* v_ref_2708_, lean_object* v_msg_2709_, lean_object* v___y_2710_, lean_object* v___y_2711_){
_start:
{
lean_object* v___x_2713_; 
v___x_2713_ = l_Lean_Elab_Command_getRef___redArg(v___y_2710_);
if (lean_obj_tag(v___x_2713_) == 0)
{
lean_object* v_a_2714_; lean_object* v_fileName_2715_; lean_object* v_fileMap_2716_; lean_object* v_currRecDepth_2717_; lean_object* v_cmdPos_2718_; lean_object* v_macroStack_2719_; lean_object* v_quotContext_x3f_2720_; lean_object* v_currMacroScope_2721_; lean_object* v_snap_x3f_2722_; lean_object* v_cancelTk_x3f_2723_; uint8_t v_suppressElabErrors_2724_; lean_object* v_ref_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v_a_2714_ = lean_ctor_get(v___x_2713_, 0);
lean_inc(v_a_2714_);
lean_dec_ref_known(v___x_2713_, 1);
v_fileName_2715_ = lean_ctor_get(v___y_2710_, 0);
v_fileMap_2716_ = lean_ctor_get(v___y_2710_, 1);
v_currRecDepth_2717_ = lean_ctor_get(v___y_2710_, 2);
v_cmdPos_2718_ = lean_ctor_get(v___y_2710_, 3);
v_macroStack_2719_ = lean_ctor_get(v___y_2710_, 4);
v_quotContext_x3f_2720_ = lean_ctor_get(v___y_2710_, 5);
v_currMacroScope_2721_ = lean_ctor_get(v___y_2710_, 6);
v_snap_x3f_2722_ = lean_ctor_get(v___y_2710_, 8);
v_cancelTk_x3f_2723_ = lean_ctor_get(v___y_2710_, 9);
v_suppressElabErrors_2724_ = lean_ctor_get_uint8(v___y_2710_, sizeof(void*)*10);
v_ref_2725_ = l_Lean_replaceRef(v_ref_2708_, v_a_2714_);
lean_dec(v_a_2714_);
lean_inc(v_cancelTk_x3f_2723_);
lean_inc(v_snap_x3f_2722_);
lean_inc(v_currMacroScope_2721_);
lean_inc(v_quotContext_x3f_2720_);
lean_inc(v_macroStack_2719_);
lean_inc(v_cmdPos_2718_);
lean_inc(v_currRecDepth_2717_);
lean_inc_ref(v_fileMap_2716_);
lean_inc_ref(v_fileName_2715_);
v___x_2726_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_2726_, 0, v_fileName_2715_);
lean_ctor_set(v___x_2726_, 1, v_fileMap_2716_);
lean_ctor_set(v___x_2726_, 2, v_currRecDepth_2717_);
lean_ctor_set(v___x_2726_, 3, v_cmdPos_2718_);
lean_ctor_set(v___x_2726_, 4, v_macroStack_2719_);
lean_ctor_set(v___x_2726_, 5, v_quotContext_x3f_2720_);
lean_ctor_set(v___x_2726_, 6, v_currMacroScope_2721_);
lean_ctor_set(v___x_2726_, 7, v_ref_2725_);
lean_ctor_set(v___x_2726_, 8, v_snap_x3f_2722_);
lean_ctor_set(v___x_2726_, 9, v_cancelTk_x3f_2723_);
lean_ctor_set_uint8(v___x_2726_, sizeof(void*)*10, v_suppressElabErrors_2724_);
v___x_2727_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_2709_, v___x_2726_, v___y_2711_);
lean_dec_ref_known(v___x_2726_, 10);
return v___x_2727_;
}
else
{
lean_object* v_a_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2735_; 
lean_dec_ref(v_msg_2709_);
v_a_2728_ = lean_ctor_get(v___x_2713_, 0);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2730_ = v___x_2713_;
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_a_2728_);
lean_dec(v___x_2713_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2735_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2733_; 
if (v_isShared_2731_ == 0)
{
v___x_2733_ = v___x_2730_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_a_2728_);
v___x_2733_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
return v___x_2733_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_ref_2736_, lean_object* v_msg_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_){
_start:
{
lean_object* v_res_2741_; 
v_res_2741_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2736_, v_msg_2737_, v___y_2738_, v___y_2739_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
lean_dec(v_ref_2736_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(lean_object* v_msg_2742_, lean_object* v_declHint_2743_, lean_object* v___y_2744_){
_start:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v_env_2748_; uint8_t v___x_2749_; 
v___x_2746_ = lean_box(0);
v___x_2747_ = lean_st_ref_get(v___y_2744_);
v_env_2748_ = lean_ctor_get(v___x_2747_, 0);
lean_inc_ref(v_env_2748_);
lean_dec(v___x_2747_);
v___x_2749_ = l_Lean_Name_isAnonymous(v_declHint_2743_);
if (v___x_2749_ == 0)
{
uint8_t v_isExporting_2750_; 
v_isExporting_2750_ = lean_ctor_get_uint8(v_env_2748_, sizeof(void*)*8);
if (v_isExporting_2750_ == 0)
{
lean_object* v___x_2751_; 
lean_dec_ref(v_env_2748_);
lean_dec(v_declHint_2743_);
v___x_2751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2751_, 0, v_msg_2742_);
return v___x_2751_;
}
else
{
lean_object* v___x_2752_; uint8_t v___x_2753_; 
lean_inc_ref(v_env_2748_);
v___x_2752_ = l_Lean_Environment_setExporting(v_env_2748_, v___x_2749_);
lean_inc(v_declHint_2743_);
lean_inc_ref(v___x_2752_);
v___x_2753_ = l_Lean_Environment_contains(v___x_2752_, v_declHint_2743_, v_isExporting_2750_);
if (v___x_2753_ == 0)
{
lean_object* v___x_2754_; 
lean_dec_ref(v___x_2752_);
lean_dec_ref(v_env_2748_);
lean_dec(v_declHint_2743_);
v___x_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2754_, 0, v_msg_2742_);
return v___x_2754_;
}
else
{
lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v_c_2762_; lean_object* v___x_2763_; 
v___x_2755_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__1);
v___x_2756_ = lean_unsigned_to_nat(32u);
v___x_2757_ = lean_mk_empty_array_with_capacity(v___x_2756_);
lean_dec_ref(v___x_2757_);
v___x_2758_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__4);
v___x_2759_ = l_Lean_Options_empty;
v___x_2760_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2752_);
lean_ctor_set(v___x_2760_, 1, v___x_2755_);
lean_ctor_set(v___x_2760_, 2, v___x_2758_);
lean_ctor_set(v___x_2760_, 3, v___x_2759_);
lean_inc(v_declHint_2743_);
v___x_2761_ = l_Lean_MessageData_ofConstName(v_declHint_2743_, v___x_2749_);
v_c_2762_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2762_, 0, v___x_2760_);
lean_ctor_set(v_c_2762_, 1, v___x_2761_);
v___x_2763_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2748_, v_declHint_2743_);
if (lean_obj_tag(v___x_2763_) == 0)
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
lean_dec_ref(v_env_2748_);
lean_dec(v_declHint_2743_);
v___x_2764_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2765_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2764_);
lean_ctor_set(v___x_2765_, 1, v_c_2762_);
v___x_2766_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__8);
v___x_2767_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2765_);
lean_ctor_set(v___x_2767_, 1, v___x_2766_);
v___x_2768_ = l_Lean_MessageData_note(v___x_2767_);
v___x_2769_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2769_, 0, v_msg_2742_);
lean_ctor_set(v___x_2769_, 1, v___x_2768_);
v___x_2770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2769_);
return v___x_2770_;
}
else
{
lean_object* v_val_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2805_; 
v_val_2771_ = lean_ctor_get(v___x_2763_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___x_2763_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2773_ = v___x_2763_;
v_isShared_2774_ = v_isSharedCheck_2805_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_val_2771_);
lean_dec(v___x_2763_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2805_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v_mod_2777_; uint8_t v___x_2778_; 
v___x_2775_ = l_Lean_Environment_header(v_env_2748_);
lean_dec_ref(v_env_2748_);
v___x_2776_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2775_);
v_mod_2777_ = lean_array_get(v___x_2746_, v___x_2776_, v_val_2771_);
lean_dec(v_val_2771_);
lean_dec_ref(v___x_2776_);
v___x_2778_ = l_Lean_isPrivateName(v_declHint_2743_);
lean_dec(v_declHint_2743_);
if (v___x_2778_ == 0)
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2790_; 
v___x_2779_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__10);
v___x_2780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2779_);
lean_ctor_set(v___x_2780_, 1, v_c_2762_);
v___x_2781_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__12);
v___x_2782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = l_Lean_MessageData_ofName(v_mod_2777_);
v___x_2784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2782_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
v___x_2785_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_2786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2784_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v___x_2787_ = l_Lean_MessageData_note(v___x_2786_);
v___x_2788_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2788_, 0, v_msg_2742_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set_tag(v___x_2773_, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2788_);
v___x_2790_ = v___x_2773_;
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
else
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2803_; 
v___x_2792_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__6);
v___x_2793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2792_);
lean_ctor_set(v___x_2793_, 1, v_c_2762_);
v___x_2794_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__16);
v___x_2795_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2793_);
lean_ctor_set(v___x_2795_, 1, v___x_2794_);
v___x_2796_ = l_Lean_MessageData_ofName(v_mod_2777_);
v___x_2797_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2797_, 0, v___x_2795_);
lean_ctor_set(v___x_2797_, 1, v___x_2796_);
v___x_2798_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__18);
v___x_2799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2797_);
lean_ctor_set(v___x_2799_, 1, v___x_2798_);
v___x_2800_ = l_Lean_MessageData_note(v___x_2799_);
v___x_2801_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2801_, 0, v_msg_2742_);
lean_ctor_set(v___x_2801_, 1, v___x_2800_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set_tag(v___x_2773_, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2801_);
v___x_2803_ = v___x_2773_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2806_; 
lean_dec_ref(v_env_2748_);
lean_dec(v_declHint_2743_);
v___x_2806_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2806_, 0, v_msg_2742_);
return v___x_2806_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg___boxed(lean_object* v_msg_2807_, lean_object* v_declHint_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2807_, v_declHint_2808_, v___y_2809_);
lean_dec(v___y_2809_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(lean_object* v_msg_2812_, lean_object* v_declHint_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v___x_2817_; lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2827_; 
v___x_2817_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_2812_, v_declHint_2813_, v___y_2815_);
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2820_ = v___x_2817_;
v_isShared_2821_ = v_isSharedCheck_2827_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v___x_2817_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2827_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2825_; 
v___x_2822_ = l_Lean_unknownIdentifierMessageTag;
v___x_2823_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2822_);
lean_ctor_set(v___x_2823_, 1, v_a_2818_);
if (v_isShared_2821_ == 0)
{
lean_ctor_set(v___x_2820_, 0, v___x_2823_);
v___x_2825_ = v___x_2820_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v___x_2823_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67___boxed(lean_object* v_msg_2828_, lean_object* v_declHint_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
lean_object* v_res_2833_; 
v_res_2833_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2828_, v_declHint_2829_, v___y_2830_, v___y_2831_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
return v_res_2833_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(lean_object* v_ref_2834_, lean_object* v_msg_2835_, lean_object* v_declHint_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v___x_2840_; lean_object* v_a_2841_; lean_object* v___x_2842_; 
v___x_2840_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67(v_msg_2835_, v_declHint_2836_, v___y_2837_, v___y_2838_);
v_a_2841_ = lean_ctor_get(v___x_2840_, 0);
lean_inc(v_a_2841_);
lean_dec_ref(v___x_2840_);
v___x_2842_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_2834_, v_a_2841_, v___y_2837_, v___y_2838_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg___boxed(lean_object* v_ref_2843_, lean_object* v_msg_2844_, lean_object* v_declHint_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2843_, v_msg_2844_, v_declHint_2845_, v___y_2846_, v___y_2847_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v_ref_2843_);
return v_res_2849_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(lean_object* v_ref_2850_, lean_object* v_constName_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_){
_start:
{
lean_object* v___x_2855_; uint8_t v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2855_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg___closed__1);
v___x_2856_ = 0;
lean_inc(v_constName_2851_);
v___x_2857_ = l_Lean_MessageData_ofConstName(v_constName_2851_, v___x_2856_);
v___x_2858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2855_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
v___x_2859_ = lean_obj_once(&l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1, &l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1_once, _init_l_Lean_getConstInfoDefn___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__0___closed__1);
v___x_2860_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2860_, 0, v___x_2858_);
lean_ctor_set(v___x_2860_, 1, v___x_2859_);
v___x_2861_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_2850_, v___x_2860_, v_constName_2851_, v___y_2852_, v___y_2853_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg___boxed(lean_object* v_ref_2862_, lean_object* v_constName_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_2862_, v_constName_2863_, v___y_2864_, v___y_2865_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v_ref_2862_);
return v_res_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(lean_object* v_constName_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v___x_2872_; 
v___x_2872_ = l_Lean_Elab_Command_getRef___redArg(v___y_2869_);
if (lean_obj_tag(v___x_2872_) == 0)
{
lean_object* v_a_2873_; lean_object* v___x_2874_; 
v_a_2873_ = lean_ctor_get(v___x_2872_, 0);
lean_inc(v_a_2873_);
lean_dec_ref_known(v___x_2872_, 1);
v___x_2874_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_a_2873_, v_constName_2868_, v___y_2869_, v___y_2870_);
lean_dec(v_a_2873_);
return v___x_2874_;
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec(v_constName_2868_);
v_a_2875_ = lean_ctor_get(v___x_2872_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2872_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2872_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2872_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg___boxed(lean_object* v_constName_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_){
_start:
{
lean_object* v_res_2887_; 
v_res_2887_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2883_, v___y_2884_, v___y_2885_);
lean_dec(v___y_2885_);
lean_dec_ref(v___y_2884_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(lean_object* v_constName_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_){
_start:
{
lean_object* v___x_2892_; lean_object* v_env_2893_; uint8_t v___x_2894_; lean_object* v___x_2895_; 
v___x_2892_ = lean_st_ref_get(v___y_2890_);
v_env_2893_ = lean_ctor_get(v___x_2892_, 0);
lean_inc_ref(v_env_2893_);
lean_dec(v___x_2892_);
v___x_2894_ = 0;
lean_inc(v_constName_2888_);
v___x_2895_ = l_Lean_Environment_findConstVal_x3f(v_env_2893_, v_constName_2888_, v___x_2894_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v___x_2896_; 
v___x_2896_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_2888_, v___y_2889_, v___y_2890_);
return v___x_2896_;
}
else
{
lean_object* v_val_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec(v_constName_2888_);
v_val_2897_ = lean_ctor_get(v___x_2895_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2895_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2895_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_val_2897_);
lean_dec(v___x_2895_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
lean_ctor_set_tag(v___x_2899_, 0);
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_val_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16___boxed(lean_object* v_constName_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_){
_start:
{
lean_object* v_res_2909_; 
v_res_2909_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2905_, v___y_2906_, v___y_2907_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
return v_res_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(lean_object* v_constName_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v___x_2914_; 
lean_inc(v_constName_2910_);
v___x_2914_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16(v_constName_2910_, v___y_2911_, v___y_2912_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2926_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2917_ = v___x_2914_;
v_isShared_2918_ = v_isSharedCheck_2926_;
goto v_resetjp_2916_;
}
else
{
lean_inc(v_a_2915_);
lean_dec(v___x_2914_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2926_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v_levelParams_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2924_; 
v_levelParams_2919_ = lean_ctor_get(v_a_2915_, 1);
lean_inc(v_levelParams_2919_);
lean_dec(v_a_2915_);
v___x_2920_ = lean_box(0);
v___x_2921_ = l_List_mapTR_loop___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__1(v_levelParams_2919_, v___x_2920_);
v___x_2922_ = l_Lean_mkConst(v_constName_2910_, v___x_2921_);
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 0, v___x_2922_);
v___x_2924_ = v___x_2917_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec(v_constName_2910_);
v_a_2927_ = lean_ctor_get(v___x_2914_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2914_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2914_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2914_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8___boxed(lean_object* v_constName_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v_res_2939_; 
v_res_2939_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_constName_2935_, v___y_2936_, v___y_2937_);
lean_dec(v___y_2937_);
lean_dec_ref(v___y_2936_);
return v_res_2939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(lean_object* v_stx_2940_, lean_object* v_n_2941_, lean_object* v_expectedType_x3f_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v___x_2946_; 
v___x_2946_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8(v_n_2941_, v___y_2943_, v___y_2944_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; uint8_t v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___x_2946_, 1);
v___x_2948_ = lean_box(0);
v___x_2949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2949_, 0, v___x_2948_);
lean_ctor_set(v___x_2949_, 1, v_stx_2940_);
v___x_2950_ = l_Lean_LocalContext_empty;
v___x_2951_ = 0;
v___x_2952_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2952_, 0, v___x_2949_);
lean_ctor_set(v___x_2952_, 1, v___x_2950_);
lean_ctor_set(v___x_2952_, 2, v_expectedType_x3f_2942_);
lean_ctor_set(v___x_2952_, 3, v_a_2947_);
lean_ctor_set_uint8(v___x_2952_, sizeof(void*)*4, v___x_2951_);
lean_ctor_set_uint8(v___x_2952_, sizeof(void*)*4 + 1, v___x_2951_);
v___x_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2953_, 0, v___x_2952_);
v___x_2954_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9(v___x_2953_, v___y_2943_, v___y_2944_);
return v___x_2954_;
}
else
{
lean_object* v_a_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_2962_; 
lean_dec(v_expectedType_x3f_2942_);
lean_dec(v_stx_2940_);
v_a_2955_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2957_ = v___x_2946_;
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_a_2955_);
lean_dec(v___x_2946_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_2962_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v___x_2960_; 
if (v_isShared_2958_ == 0)
{
v___x_2960_ = v___x_2957_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v_a_2955_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
return v___x_2960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4___boxed(lean_object* v_stx_2963_, lean_object* v_n_2964_, lean_object* v_expectedType_x3f_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_stx_2963_, v_n_2964_, v_expectedType_x3f_2965_, v___y_2966_, v___y_2967_);
lean_dec(v___y_2967_);
lean_dec_ref(v___y_2966_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(lean_object* v_as_x27_2970_, lean_object* v_b_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
if (lean_obj_tag(v_as_x27_2970_) == 0)
{
lean_object* v___x_2975_; 
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v_b_2971_);
return v___x_2975_;
}
else
{
lean_object* v_head_2976_; lean_object* v_tail_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v_head_2976_ = lean_ctor_get(v_as_x27_2970_, 0);
v_tail_2977_ = lean_ctor_get(v_as_x27_2970_, 1);
v___x_2978_ = lean_box(0);
lean_inc(v_head_2976_);
v___x_2979_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_2979_, 0, v_head_2976_);
v___x_2980_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_2979_, v___y_2972_, v___y_2973_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_dec_ref_known(v___x_2980_, 1);
v_as_x27_2970_ = v_tail_2977_;
v_b_2971_ = v___x_2978_;
goto _start;
}
else
{
return v___x_2980_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg___boxed(lean_object* v_as_x27_2982_, lean_object* v_b_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_2982_, v_b_2983_, v___y_2984_, v___y_2985_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
lean_dec(v_as_x27_2982_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(lean_object* v_declName_2988_, uint8_t v_s_2989_, lean_object* v___y_2990_){
_start:
{
lean_object* v___x_2992_; lean_object* v_env_2993_; lean_object* v_messages_2994_; lean_object* v_scopes_2995_; lean_object* v_usedQuotCtxts_2996_; lean_object* v_nextMacroScope_2997_; lean_object* v_maxRecDepth_2998_; lean_object* v_ngen_2999_; lean_object* v_auxDeclNGen_3000_; lean_object* v_infoState_3001_; lean_object* v_traceState_3002_; lean_object* v_snapshotTasks_3003_; lean_object* v_prevLinterStates_3004_; lean_object* v_codeQualityEntryTasks_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3018_; 
v___x_2992_ = lean_st_ref_take(v___y_2990_);
v_env_2993_ = lean_ctor_get(v___x_2992_, 0);
v_messages_2994_ = lean_ctor_get(v___x_2992_, 1);
v_scopes_2995_ = lean_ctor_get(v___x_2992_, 2);
v_usedQuotCtxts_2996_ = lean_ctor_get(v___x_2992_, 3);
v_nextMacroScope_2997_ = lean_ctor_get(v___x_2992_, 4);
v_maxRecDepth_2998_ = lean_ctor_get(v___x_2992_, 5);
v_ngen_2999_ = lean_ctor_get(v___x_2992_, 6);
v_auxDeclNGen_3000_ = lean_ctor_get(v___x_2992_, 7);
v_infoState_3001_ = lean_ctor_get(v___x_2992_, 8);
v_traceState_3002_ = lean_ctor_get(v___x_2992_, 9);
v_snapshotTasks_3003_ = lean_ctor_get(v___x_2992_, 10);
v_prevLinterStates_3004_ = lean_ctor_get(v___x_2992_, 11);
v_codeQualityEntryTasks_3005_ = lean_ctor_get(v___x_2992_, 12);
v_isSharedCheck_3018_ = !lean_is_exclusive(v___x_2992_);
if (v_isSharedCheck_3018_ == 0)
{
v___x_3007_ = v___x_2992_;
v_isShared_3008_ = v_isSharedCheck_3018_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3005_);
lean_inc(v_prevLinterStates_3004_);
lean_inc(v_snapshotTasks_3003_);
lean_inc(v_traceState_3002_);
lean_inc(v_infoState_3001_);
lean_inc(v_auxDeclNGen_3000_);
lean_inc(v_ngen_2999_);
lean_inc(v_maxRecDepth_2998_);
lean_inc(v_nextMacroScope_2997_);
lean_inc(v_usedQuotCtxts_2996_);
lean_inc(v_scopes_2995_);
lean_inc(v_messages_2994_);
lean_inc(v_env_2993_);
lean_dec(v___x_2992_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3018_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3009_; uint8_t v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3014_; 
v___x_3009_ = lean_box(0);
v___x_3010_ = 0;
v___x_3011_ = lean_box(0);
v___x_3012_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2993_, v_declName_2988_, v_s_2989_, v___x_3010_, v___x_3011_);
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 0, v___x_3012_);
v___x_3014_ = v___x_3007_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v___x_3012_);
lean_ctor_set(v_reuseFailAlloc_3017_, 1, v_messages_2994_);
lean_ctor_set(v_reuseFailAlloc_3017_, 2, v_scopes_2995_);
lean_ctor_set(v_reuseFailAlloc_3017_, 3, v_usedQuotCtxts_2996_);
lean_ctor_set(v_reuseFailAlloc_3017_, 4, v_nextMacroScope_2997_);
lean_ctor_set(v_reuseFailAlloc_3017_, 5, v_maxRecDepth_2998_);
lean_ctor_set(v_reuseFailAlloc_3017_, 6, v_ngen_2999_);
lean_ctor_set(v_reuseFailAlloc_3017_, 7, v_auxDeclNGen_3000_);
lean_ctor_set(v_reuseFailAlloc_3017_, 8, v_infoState_3001_);
lean_ctor_set(v_reuseFailAlloc_3017_, 9, v_traceState_3002_);
lean_ctor_set(v_reuseFailAlloc_3017_, 10, v_snapshotTasks_3003_);
lean_ctor_set(v_reuseFailAlloc_3017_, 11, v_prevLinterStates_3004_);
lean_ctor_set(v_reuseFailAlloc_3017_, 12, v_codeQualityEntryTasks_3005_);
v___x_3014_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
v___x_3015_ = lean_st_ref_put(v___y_2990_, v___x_3014_);
v___x_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3009_);
return v___x_3016_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg___boxed(lean_object* v_declName_3019_, lean_object* v_s_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
uint8_t v_s_boxed_3023_; lean_object* v_res_3024_; 
v_s_boxed_3023_ = lean_unbox(v_s_3020_);
v_res_3024_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3019_, v_s_boxed_3023_, v___y_3021_);
lean_dec(v___y_3021_);
return v_res_3024_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(lean_object* v_declName_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_){
_start:
{
uint8_t v___x_3029_; lean_object* v___x_3030_; 
v___x_3029_ = 2;
v___x_3030_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_3025_, v___x_3029_, v___y_3027_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11___boxed(lean_object* v_declName_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_declName_3031_, v___y_3032_, v___y_3033_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(lean_object* v_as_x27_3036_, lean_object* v_b_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_){
_start:
{
if (lean_obj_tag(v_as_x27_3036_) == 0)
{
lean_object* v___x_3041_; 
v___x_3041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3041_, 0, v_b_3037_);
return v___x_3041_;
}
else
{
lean_object* v_head_3042_; lean_object* v_tail_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v_head_3042_ = lean_ctor_get(v_as_x27_3036_, 0);
v_tail_3043_ = lean_ctor_get(v_as_x27_3036_, 1);
v___x_3044_ = lean_box(0);
lean_inc(v_head_3042_);
v___x_3045_ = l_Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11(v_head_3042_, v___y_3038_, v___y_3039_);
lean_dec_ref(v___x_3045_);
v_as_x27_3036_ = v_tail_3043_;
v_b_3037_ = v___x_3044_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg___boxed(lean_object* v_as_x27_3047_, lean_object* v_b_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_3047_, v_b_3048_, v___y_3049_, v___y_3050_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v_as_x27_3047_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(size_t v_sz_3053_, size_t v_i_3054_, lean_object* v_bs_3055_){
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2___boxed(lean_object* v_sz_3064_, lean_object* v_i_3065_, lean_object* v_bs_3066_){
_start:
{
size_t v_sz_boxed_3067_; size_t v_i_boxed_3068_; lean_object* v_res_3069_; 
v_sz_boxed_3067_ = lean_unbox_usize(v_sz_3064_);
lean_dec(v_sz_3064_);
v_i_boxed_3068_ = lean_unbox_usize(v_i_3065_);
lean_dec(v_i_3065_);
v_res_3069_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_boxed_3067_, v_i_boxed_3068_, v_bs_3066_);
return v_res_3069_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(size_t v_sz_3070_, size_t v_i_3071_, lean_object* v_bs_3072_){
_start:
{
uint8_t v___x_3073_; 
v___x_3073_ = lean_usize_dec_lt(v_i_3071_, v_sz_3070_);
if (v___x_3073_ == 0)
{
return v_bs_3072_;
}
else
{
lean_object* v_v_3074_; lean_object* v___x_3075_; lean_object* v_bs_x27_3076_; size_t v___x_3077_; size_t v___x_3078_; lean_object* v___x_3079_; 
v_v_3074_ = lean_array_uget(v_bs_3072_, v_i_3071_);
v___x_3075_ = lean_unsigned_to_nat(0u);
v_bs_x27_3076_ = lean_array_uset(v_bs_3072_, v_i_3071_, v___x_3075_);
v___x_3077_ = ((size_t)1ULL);
v___x_3078_ = lean_usize_add(v_i_3071_, v___x_3077_);
v___x_3079_ = lean_array_uset(v_bs_x27_3076_, v_i_3071_, v_v_3074_);
v_i_3071_ = v___x_3078_;
v_bs_3072_ = v___x_3079_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1___boxed(lean_object* v_sz_3081_, lean_object* v_i_3082_, lean_object* v_bs_3083_){
_start:
{
size_t v_sz_boxed_3084_; size_t v_i_boxed_3085_; lean_object* v_res_3086_; 
v_sz_boxed_3084_ = lean_unbox_usize(v_sz_3081_);
lean_dec(v_sz_3081_);
v_i_boxed_3085_ = lean_unbox_usize(v_i_3082_);
lean_dec(v_i_3082_);
v_res_3086_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_boxed_3084_, v_i_boxed_3085_, v_bs_3083_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(lean_object* v_declName_3087_, lean_object* v_declRanges_3088_, lean_object* v___y_3089_){
_start:
{
uint8_t v___x_3091_; 
v___x_3091_ = l_Lean_Name_isAnonymous(v_declName_3087_);
if (v___x_3091_ == 0)
{
lean_object* v___x_3092_; lean_object* v_env_3093_; lean_object* v_messages_3094_; lean_object* v_scopes_3095_; lean_object* v_usedQuotCtxts_3096_; lean_object* v_nextMacroScope_3097_; lean_object* v_maxRecDepth_3098_; lean_object* v_ngen_3099_; lean_object* v_auxDeclNGen_3100_; lean_object* v_infoState_3101_; lean_object* v_traceState_3102_; lean_object* v_snapshotTasks_3103_; lean_object* v_prevLinterStates_3104_; lean_object* v_codeQualityEntryTasks_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3117_; 
v___x_3092_ = lean_st_ref_take(v___y_3089_);
v_env_3093_ = lean_ctor_get(v___x_3092_, 0);
v_messages_3094_ = lean_ctor_get(v___x_3092_, 1);
v_scopes_3095_ = lean_ctor_get(v___x_3092_, 2);
v_usedQuotCtxts_3096_ = lean_ctor_get(v___x_3092_, 3);
v_nextMacroScope_3097_ = lean_ctor_get(v___x_3092_, 4);
v_maxRecDepth_3098_ = lean_ctor_get(v___x_3092_, 5);
v_ngen_3099_ = lean_ctor_get(v___x_3092_, 6);
v_auxDeclNGen_3100_ = lean_ctor_get(v___x_3092_, 7);
v_infoState_3101_ = lean_ctor_get(v___x_3092_, 8);
v_traceState_3102_ = lean_ctor_get(v___x_3092_, 9);
v_snapshotTasks_3103_ = lean_ctor_get(v___x_3092_, 10);
v_prevLinterStates_3104_ = lean_ctor_get(v___x_3092_, 11);
v_codeQualityEntryTasks_3105_ = lean_ctor_get(v___x_3092_, 12);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3107_ = v___x_3092_;
v_isShared_3108_ = v_isSharedCheck_3117_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3105_);
lean_inc(v_prevLinterStates_3104_);
lean_inc(v_snapshotTasks_3103_);
lean_inc(v_traceState_3102_);
lean_inc(v_infoState_3101_);
lean_inc(v_auxDeclNGen_3100_);
lean_inc(v_ngen_3099_);
lean_inc(v_maxRecDepth_3098_);
lean_inc(v_nextMacroScope_3097_);
lean_inc(v_usedQuotCtxts_3096_);
lean_inc(v_scopes_3095_);
lean_inc(v_messages_3094_);
lean_inc(v_env_3093_);
lean_dec(v___x_3092_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3117_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3113_; 
v___x_3109_ = lean_box(0);
v___x_3110_ = l_Lean_declRangeExt;
v___x_3111_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_3110_, v_env_3093_, v_declName_3087_, v_declRanges_3088_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 0, v___x_3111_);
v___x_3113_ = v___x_3107_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v___x_3111_);
lean_ctor_set(v_reuseFailAlloc_3116_, 1, v_messages_3094_);
lean_ctor_set(v_reuseFailAlloc_3116_, 2, v_scopes_3095_);
lean_ctor_set(v_reuseFailAlloc_3116_, 3, v_usedQuotCtxts_3096_);
lean_ctor_set(v_reuseFailAlloc_3116_, 4, v_nextMacroScope_3097_);
lean_ctor_set(v_reuseFailAlloc_3116_, 5, v_maxRecDepth_3098_);
lean_ctor_set(v_reuseFailAlloc_3116_, 6, v_ngen_3099_);
lean_ctor_set(v_reuseFailAlloc_3116_, 7, v_auxDeclNGen_3100_);
lean_ctor_set(v_reuseFailAlloc_3116_, 8, v_infoState_3101_);
lean_ctor_set(v_reuseFailAlloc_3116_, 9, v_traceState_3102_);
lean_ctor_set(v_reuseFailAlloc_3116_, 10, v_snapshotTasks_3103_);
lean_ctor_set(v_reuseFailAlloc_3116_, 11, v_prevLinterStates_3104_);
lean_ctor_set(v_reuseFailAlloc_3116_, 12, v_codeQualityEntryTasks_3105_);
v___x_3113_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
v___x_3114_ = lean_st_ref_put(v___y_3089_, v___x_3113_);
v___x_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3109_);
return v___x_3115_;
}
}
}
else
{
lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_dec_ref(v_declRanges_3088_);
lean_dec(v_declName_3087_);
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v___x_3118_);
return v___x_3119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg___boxed(lean_object* v_declName_3120_, lean_object* v_declRanges_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3120_, v_declRanges_3121_, v___y_3122_);
lean_dec(v___y_3122_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(lean_object* v_stx_3125_, lean_object* v___y_3126_){
_start:
{
uint8_t v___x_3128_; lean_object* v___x_3129_; 
v___x_3128_ = 0;
v___x_3129_ = l_Lean_Syntax_getRange_x3f(v_stx_3125_, v___x_3128_);
if (lean_obj_tag(v___x_3129_) == 1)
{
lean_object* v_val_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3142_; 
v_val_3130_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3132_ = v___x_3129_;
v_isShared_3133_ = v_isSharedCheck_3142_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_val_3130_);
lean_dec(v___x_3129_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3142_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v_fileMap_3134_; lean_object* v_start_3135_; lean_object* v_stop_3136_; lean_object* v___x_3137_; lean_object* v___x_3139_; 
v_fileMap_3134_ = lean_ctor_get(v___y_3126_, 1);
v_start_3135_ = lean_ctor_get(v_val_3130_, 0);
lean_inc(v_start_3135_);
v_stop_3136_ = lean_ctor_get(v_val_3130_, 1);
lean_inc(v_stop_3136_);
lean_dec(v_val_3130_);
lean_inc_ref(v_fileMap_3134_);
v___x_3137_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_3134_, v_start_3135_, v_stop_3136_);
lean_dec(v_stop_3136_);
lean_dec(v_start_3135_);
if (v_isShared_3133_ == 0)
{
lean_ctor_set(v___x_3132_, 0, v___x_3137_);
v___x_3139_ = v___x_3132_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v___x_3137_);
v___x_3139_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
lean_object* v___x_3140_; 
v___x_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
return v___x_3140_;
}
}
}
else
{
lean_object* v___x_3143_; lean_object* v___x_3144_; 
lean_dec(v___x_3129_);
v___x_3143_ = lean_box(0);
v___x_3144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
return v___x_3144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg___boxed(lean_object* v_stx_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_3145_, v___y_3146_);
lean_dec_ref(v___y_3146_);
lean_dec(v_stx_3145_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(lean_object* v_declName_3149_, lean_object* v_rangeStx_3150_, lean_object* v_selectionRangeStx_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
lean_object* v___x_3155_; lean_object* v_a_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3172_; 
v___x_3155_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_rangeStx_3150_, v___y_3152_);
v_a_3156_ = lean_ctor_get(v___x_3155_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3155_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3158_ = v___x_3155_;
v_isShared_3159_ = v_isSharedCheck_3172_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_a_3156_);
lean_dec(v___x_3155_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3172_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
if (lean_obj_tag(v_a_3156_) == 1)
{
lean_object* v_val_3160_; lean_object* v_a_3162_; lean_object* v___x_3165_; lean_object* v_a_3166_; 
lean_del_object(v___x_3158_);
v_val_3160_ = lean_ctor_get(v_a_3156_, 0);
lean_inc(v_val_3160_);
lean_dec_ref_known(v_a_3156_, 1);
v___x_3165_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_selectionRangeStx_3151_, v___y_3152_);
v_a_3166_ = lean_ctor_get(v___x_3165_, 0);
lean_inc(v_a_3166_);
lean_dec_ref(v___x_3165_);
if (lean_obj_tag(v_a_3166_) == 0)
{
lean_inc(v_val_3160_);
v_a_3162_ = v_val_3160_;
goto v___jp_3161_;
}
else
{
lean_object* v_val_3167_; 
v_val_3167_ = lean_ctor_get(v_a_3166_, 0);
lean_inc(v_val_3167_);
lean_dec_ref_known(v_a_3166_, 1);
v_a_3162_ = v_val_3167_;
goto v___jp_3161_;
}
v___jp_3161_:
{
lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3163_, 0, v_val_3160_);
lean_ctor_set(v___x_3163_, 1, v_a_3162_);
v___x_3164_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_3149_, v___x_3163_, v___y_3153_);
return v___x_3164_;
}
}
else
{
lean_object* v___x_3168_; lean_object* v___x_3170_; 
lean_dec(v_a_3156_);
lean_dec(v_declName_3149_);
v___x_3168_ = lean_box(0);
if (v_isShared_3159_ == 0)
{
lean_ctor_set(v___x_3158_, 0, v___x_3168_);
v___x_3170_ = v___x_3158_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v___x_3168_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3___boxed(lean_object* v_declName_3173_, lean_object* v_rangeStx_3174_, lean_object* v_selectionRangeStx_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v_res_3179_; 
v_res_3179_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v_declName_3173_, v_rangeStx_3174_, v_selectionRangeStx_3175_, v___y_3176_, v___y_3177_);
lean_dec(v___y_3177_);
lean_dec_ref(v___y_3176_);
lean_dec(v_selectionRangeStx_3175_);
lean_dec(v_rangeStx_3174_);
return v_res_3179_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0(void){
_start:
{
lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3180_ = lean_obj_once(&l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0, &l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0_once, _init_l_Lean_setReducibilityStatus___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__5___redArg___closed__0);
v___x_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3180_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3194_; 
v___x_3194_ = l_Array_mkArray0___redArg();
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2(lean_object* v___x_3199_, lean_object* v_a_3200_, lean_object* v_projId_3201_, lean_object* v___x_3202_, lean_object* v___x_3203_, lean_object* v___x_3204_, lean_object* v_params_3205_, lean_object* v___x_3206_, lean_object* v_mods_3207_, lean_object* v___x_3208_, lean_object* v_optDeriving_3209_, lean_object* v___x_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = l_Lean_Elab_Command_getScope___redArg(v___y_3212_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; lean_object* v_currNamespace_3216_; lean_object* v___x_3217_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_a_3215_);
lean_dec_ref_known(v___x_3214_, 1);
v_currNamespace_3216_ = lean_ctor_get(v_a_3215_, 2);
lean_inc(v_currNamespace_3216_);
lean_dec(v_a_3215_);
v___x_3217_ = l_Lean_Elab_Command_getLevelNames___redArg(v___y_3212_);
if (lean_obj_tag(v___x_3217_) == 0)
{
lean_object* v_a_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; 
v_a_3218_ = lean_ctor_get(v___x_3217_, 0);
lean_inc(v_a_3218_);
lean_dec_ref_known(v___x_3217_, 1);
lean_inc(v___x_3199_);
v___x_3219_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandDeclId___boxed), 11, 4);
lean_closure_set(v___x_3219_, 0, v_currNamespace_3216_);
lean_closure_set(v___x_3219_, 1, v_a_3218_);
lean_closure_set(v___x_3219_, 2, v___x_3199_);
lean_closure_set(v___x_3219_, 3, v_a_3200_);
v___x_3220_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3219_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3220_) == 0)
{
lean_object* v_a_3221_; lean_object* v_declName_3222_; lean_object* v___x_3224_; uint8_t v_isShared_3225_; uint8_t v_isSharedCheck_3384_; 
v_a_3221_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_a_3221_);
lean_dec_ref_known(v___x_3220_, 1);
v_declName_3222_ = lean_ctor_get(v_a_3221_, 1);
v_isSharedCheck_3384_ = !lean_is_exclusive(v_a_3221_);
if (v_isSharedCheck_3384_ == 0)
{
lean_object* v_unused_3385_; lean_object* v_unused_3386_; lean_object* v_unused_3387_; 
v_unused_3385_ = lean_ctor_get(v_a_3221_, 3);
lean_dec(v_unused_3385_);
v_unused_3386_ = lean_ctor_get(v_a_3221_, 2);
lean_dec(v_unused_3386_);
v_unused_3387_ = lean_ctor_get(v_a_3221_, 0);
lean_dec(v_unused_3387_);
v___x_3224_ = v_a_3221_;
v_isShared_3225_ = v_isSharedCheck_3384_;
goto v_resetjp_3223_;
}
else
{
lean_inc(v_declName_3222_);
lean_dec(v_a_3221_);
v___x_3224_ = lean_box(0);
v_isShared_3225_ = v_isSharedCheck_3384_;
goto v_resetjp_3223_;
}
v_resetjp_3223_:
{
size_t v___y_3227_; lean_object* v___y_3228_; lean_object* v___y_3229_; lean_object* v___y_3230_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3268_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__1));
lean_inc_n(v_declName_3222_, 3);
v___x_3269_ = l_Lean_Name_append(v_declName_3222_, v___x_3268_);
v___x_3270_ = l_Lean_TSyntax_getId(v_projId_3201_);
lean_inc(v___x_3270_);
v___x_3271_ = l_Lean_Name_append(v_declName_3222_, v___x_3270_);
v___x_3272_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__3));
v___x_3273_ = l_Lean_Name_append(v_declName_3222_, v___x_3272_);
v___x_3274_ = l_Lean_Elab_Command_getRef___redArg(v___y_3211_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v_a_3275_; uint8_t v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3365_; 
v_a_3275_ = lean_ctor_get(v___x_3274_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3274_, 1);
v___x_3276_ = 0;
v___x_3277_ = l_Lean_SourceInfo_fromRef(v_a_3275_, v___x_3276_);
lean_dec(v_a_3275_);
v___x_3365_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_3211_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_quotContext_x3f_3366_; 
lean_dec_ref_known(v___x_3365_, 1);
v_quotContext_x3f_3366_ = lean_ctor_get(v___y_3211_, 5);
if (lean_obj_tag(v_quotContext_x3f_3366_) == 0)
{
lean_object* v___x_3367_; 
v___x_3367_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_3212_);
lean_dec_ref(v___x_3367_);
goto v___jp_3278_;
}
else
{
goto v___jp_3278_;
}
}
else
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
lean_dec(v___x_3277_);
lean_dec(v___x_3273_);
lean_dec(v___x_3271_);
lean_dec(v___x_3270_);
lean_dec(v___x_3269_);
lean_del_object(v___x_3224_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_mods_3207_);
lean_dec(v___x_3206_);
lean_dec_ref(v_params_3205_);
lean_dec_ref(v___x_3204_);
lean_dec_ref(v___x_3203_);
lean_dec_ref(v___x_3202_);
lean_dec(v_projId_3201_);
lean_dec(v___x_3199_);
v_a_3368_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3365_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3365_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
v___jp_3278_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; size_t v_sz_3289_; size_t v___x_3290_; lean_object* v___x_3291_; size_t v_sz_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3279_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__4));
lean_inc_ref_n(v___x_3204_, 3);
lean_inc_ref_n(v___x_3203_, 4);
lean_inc_ref_n(v___x_3202_, 4);
v___x_3280_ = l_Lean_Name_mkStr4(v___x_3202_, v___x_3203_, v___x_3204_, v___x_3279_);
v___x_3281_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__5));
v___x_3282_ = l_Lean_Name_mkStr4(v___x_3202_, v___x_3203_, v___x_3204_, v___x_3281_);
v___x_3283_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__6));
lean_inc_n(v___x_3277_, 8);
v___x_3284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3277_);
lean_ctor_set(v___x_3284_, 1, v___x_3283_);
v___x_3285_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__7));
v___x_3286_ = l_Lean_Name_mkStr4(v___x_3202_, v___x_3203_, v___x_3204_, v___x_3285_);
v___x_3287_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__9));
v___x_3288_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__10, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__10_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__10);
v_sz_3289_ = lean_array_size(v_params_3205_);
v___x_3290_ = ((size_t)0ULL);
v___x_3291_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__1(v_sz_3289_, v___x_3290_, v_params_3205_);
v_sz_3292_ = lean_array_size(v___x_3291_);
v___x_3293_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Command_elabNewtype_spec__2(v_sz_3292_, v___x_3290_, v___x_3291_);
v___x_3294_ = l_Array_append___redArg(v___x_3288_, v___x_3293_);
lean_dec_ref(v___x_3293_);
v___x_3295_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3277_);
lean_ctor_set(v___x_3295_, 1, v___x_3287_);
lean_ctor_set(v___x_3295_, 2, v___x_3294_);
v___x_3296_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3296_, 0, v___x_3277_);
lean_ctor_set(v___x_3296_, 1, v___x_3287_);
lean_ctor_set(v___x_3296_, 2, v___x_3288_);
lean_inc_ref_n(v___x_3296_, 4);
v___x_3297_ = l_Lean_Syntax_node2(v___x_3277_, v___x_3286_, v___x_3295_, v___x_3296_);
v___x_3298_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__11));
v___x_3299_ = l_Lean_Name_mkStr4(v___x_3202_, v___x_3203_, v___x_3204_, v___x_3298_);
v___x_3300_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__12));
v___x_3301_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3301_, 0, v___x_3277_);
lean_ctor_set(v___x_3301_, 1, v___x_3300_);
v___x_3302_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__13));
v___x_3303_ = ((lean_object*)(l_Lean_Elab_Command_elabNewtype___lam__2___closed__14));
v___x_3304_ = l_Lean_Name_mkStr4(v___x_3202_, v___x_3203_, v___x_3302_, v___x_3303_);
v___x_3305_ = l_Lean_Syntax_node2(v___x_3277_, v___x_3304_, v___x_3296_, v___x_3296_);
v___x_3306_ = l_Lean_Syntax_node4(v___x_3277_, v___x_3299_, v___x_3301_, v___x_3206_, v___x_3305_, v___x_3296_);
lean_inc(v___x_3199_);
v___x_3307_ = l_Lean_Syntax_node5(v___x_3277_, v___x_3282_, v___x_3284_, v___x_3199_, v___x_3297_, v___x_3306_, v___x_3296_);
v___x_3308_ = l_Lean_Syntax_node2(v___x_3277_, v___x_3280_, v_mods_3207_, v___x_3307_);
v___x_3309_ = l_Lean_Elab_Command_elabCommand(v___x_3308_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_object* v___x_3310_; lean_object* v___x_3311_; 
lean_dec_ref_known(v___x_3309_, 1);
lean_inc(v___x_3273_);
lean_inc(v___x_3271_);
lean_inc(v___x_3269_);
lean_inc(v_declName_3222_);
v___x_3310_ = lean_alloc_closure((void*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj___boxed), 12, 5);
lean_closure_set(v___x_3310_, 0, v_declName_3222_);
lean_closure_set(v___x_3310_, 1, v___x_3269_);
lean_closure_set(v___x_3310_, 2, v___x_3271_);
lean_closure_set(v___x_3310_, 3, v___x_3273_);
lean_closure_set(v___x_3310_, 4, v___x_3270_);
v___x_3311_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3310_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3312_);
lean_dec_ref_known(v___x_3311_, 1);
v___x_3313_ = lean_box(0);
lean_inc(v___x_3269_);
v___x_3314_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3269_, v___x_3199_, v___x_3313_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v___x_3315_; 
lean_dec_ref_known(v___x_3314_, 1);
lean_inc(v___x_3271_);
v___x_3315_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3271_, v_projId_3201_, v___x_3313_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3315_) == 0)
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
lean_dec_ref_known(v___x_3315_, 1);
v___x_3316_ = lean_box(0);
lean_inc(v___x_3271_);
v___x_3317_ = l_Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4(v_projId_3201_, v___x_3271_, v___x_3316_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v_env_3324_; lean_object* v_messages_3325_; lean_object* v_scopes_3326_; lean_object* v_usedQuotCtxts_3327_; lean_object* v_nextMacroScope_3328_; lean_object* v_maxRecDepth_3329_; lean_object* v_ngen_3330_; lean_object* v_auxDeclNGen_3331_; lean_object* v_infoState_3332_; lean_object* v_traceState_3333_; lean_object* v_snapshotTasks_3334_; lean_object* v_prevLinterStates_3335_; lean_object* v_codeQualityEntryTasks_3336_; lean_object* v___x_3338_; uint8_t v_isShared_3339_; uint8_t v_isSharedCheck_3356_; 
lean_dec_ref_known(v___x_3317_, 1);
lean_inc(v___x_3271_);
v___x_3318_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3271_);
lean_ctor_set(v___x_3318_, 1, v___x_3208_);
lean_inc(v___x_3269_);
v___x_3319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3319_, 0, v___x_3269_);
lean_ctor_set(v___x_3319_, 1, v___x_3318_);
lean_inc_ref(v___x_3319_);
lean_inc(v_declName_3222_);
v___x_3320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3320_, 0, v_declName_3222_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = lean_box(0);
v___x_3322_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v___x_3320_, v___x_3321_, v___y_3211_, v___y_3212_);
lean_dec_ref_known(v___x_3320_, 2);
lean_dec_ref(v___x_3322_);
v___x_3323_ = lean_st_ref_take(v___y_3212_);
v_env_3324_ = lean_ctor_get(v___x_3323_, 0);
v_messages_3325_ = lean_ctor_get(v___x_3323_, 1);
v_scopes_3326_ = lean_ctor_get(v___x_3323_, 2);
v_usedQuotCtxts_3327_ = lean_ctor_get(v___x_3323_, 3);
v_nextMacroScope_3328_ = lean_ctor_get(v___x_3323_, 4);
v_maxRecDepth_3329_ = lean_ctor_get(v___x_3323_, 5);
v_ngen_3330_ = lean_ctor_get(v___x_3323_, 6);
v_auxDeclNGen_3331_ = lean_ctor_get(v___x_3323_, 7);
v_infoState_3332_ = lean_ctor_get(v___x_3323_, 8);
v_traceState_3333_ = lean_ctor_get(v___x_3323_, 9);
v_snapshotTasks_3334_ = lean_ctor_get(v___x_3323_, 10);
v_prevLinterStates_3335_ = lean_ctor_get(v___x_3323_, 11);
v_codeQualityEntryTasks_3336_ = lean_ctor_get(v___x_3323_, 12);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3323_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3338_ = v___x_3323_;
v_isShared_3339_ = v_isSharedCheck_3356_;
goto v_resetjp_3337_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3336_);
lean_inc(v_prevLinterStates_3335_);
lean_inc(v_snapshotTasks_3334_);
lean_inc(v_traceState_3333_);
lean_inc(v_infoState_3332_);
lean_inc(v_auxDeclNGen_3331_);
lean_inc(v_ngen_3330_);
lean_inc(v_maxRecDepth_3329_);
lean_inc(v_nextMacroScope_3328_);
lean_inc(v_usedQuotCtxts_3327_);
lean_inc(v_scopes_3326_);
lean_inc(v_messages_3325_);
lean_inc(v_env_3324_);
lean_dec(v___x_3323_);
v___x_3338_ = lean_box(0);
v_isShared_3339_ = v_isSharedCheck_3356_;
goto v_resetjp_3337_;
}
v_resetjp_3337_:
{
lean_object* v___x_3341_; 
lean_inc(v_declName_3222_);
if (v_isShared_3225_ == 0)
{
lean_ctor_set(v___x_3224_, 3, v_a_3312_);
lean_ctor_set(v___x_3224_, 2, v___x_3271_);
lean_ctor_set(v___x_3224_, 1, v___x_3269_);
lean_ctor_set(v___x_3224_, 0, v_declName_3222_);
v___x_3341_ = v___x_3224_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_declName_3222_);
lean_ctor_set(v_reuseFailAlloc_3355_, 1, v___x_3269_);
lean_ctor_set(v_reuseFailAlloc_3355_, 2, v___x_3271_);
lean_ctor_set(v_reuseFailAlloc_3355_, 3, v_a_3312_);
v___x_3341_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
lean_object* v___x_3342_; lean_object* v___x_3344_; 
v___x_3342_ = l_Lean_registerVirtualStructure(v_env_3324_, v___x_3341_);
if (v_isShared_3339_ == 0)
{
lean_ctor_set(v___x_3338_, 0, v___x_3342_);
v___x_3344_ = v___x_3338_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3342_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v_messages_3325_);
lean_ctor_set(v_reuseFailAlloc_3354_, 2, v_scopes_3326_);
lean_ctor_set(v_reuseFailAlloc_3354_, 3, v_usedQuotCtxts_3327_);
lean_ctor_set(v_reuseFailAlloc_3354_, 4, v_nextMacroScope_3328_);
lean_ctor_set(v_reuseFailAlloc_3354_, 5, v_maxRecDepth_3329_);
lean_ctor_set(v_reuseFailAlloc_3354_, 6, v_ngen_3330_);
lean_ctor_set(v_reuseFailAlloc_3354_, 7, v_auxDeclNGen_3331_);
lean_ctor_set(v_reuseFailAlloc_3354_, 8, v_infoState_3332_);
lean_ctor_set(v_reuseFailAlloc_3354_, 9, v_traceState_3333_);
lean_ctor_set(v_reuseFailAlloc_3354_, 10, v_snapshotTasks_3334_);
lean_ctor_set(v_reuseFailAlloc_3354_, 11, v_prevLinterStates_3335_);
lean_ctor_set(v_reuseFailAlloc_3354_, 12, v_codeQualityEntryTasks_3336_);
v___x_3344_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3345_ = lean_st_ref_put(v___y_3212_, v___x_3344_);
v___x_3346_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v___x_3319_, v___x_3321_, v___y_3211_, v___y_3212_);
lean_dec_ref_known(v___x_3319_, 2);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v___x_3347_; lean_object* v_env_3348_; uint8_t v___x_3349_; uint8_t v___x_3350_; 
lean_dec_ref_known(v___x_3346_, 1);
v___x_3347_ = lean_st_ref_get(v___y_3212_);
v_env_3348_ = lean_ctor_get(v___x_3347_, 0);
lean_inc_ref(v_env_3348_);
lean_dec(v___x_3347_);
v___x_3349_ = 1;
lean_inc(v___x_3273_);
v___x_3350_ = l_Lean_Environment_contains(v_env_3348_, v___x_3273_, v___x_3349_);
if (v___x_3350_ == 0)
{
lean_dec(v___x_3273_);
lean_dec(v___x_3199_);
v___y_3227_ = v___x_3290_;
v___y_3228_ = v___x_3321_;
v___y_3229_ = v___y_3211_;
v___y_3230_ = v___y_3212_;
goto v___jp_3226_;
}
else
{
lean_object* v___x_3351_; 
lean_inc(v___x_3273_);
v___x_3351_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3(v___x_3273_, v___x_3199_, v___x_3313_, v___y_3211_, v___y_3212_);
lean_dec(v___x_3199_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v___x_3352_; lean_object* v___x_3353_; 
lean_dec_ref_known(v___x_3351_, 1);
v___x_3352_ = lean_alloc_closure((void*)(l_Lean_enableRealizationsForConst___boxed), 4, 1);
lean_closure_set(v___x_3352_, 0, v___x_3273_);
v___x_3353_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3352_, v___y_3211_, v___y_3212_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_dec_ref_known(v___x_3353_, 1);
v___y_3227_ = v___x_3290_;
v___y_3228_ = v___x_3321_;
v___y_3229_ = v___y_3211_;
v___y_3230_ = v___y_3212_;
goto v___jp_3226_;
}
else
{
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
return v___x_3353_;
}
}
else
{
lean_dec(v___x_3273_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
return v___x_3351_;
}
}
}
else
{
lean_dec(v___x_3273_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3199_);
return v___x_3346_;
}
}
}
}
}
else
{
lean_dec(v_a_3312_);
lean_dec(v___x_3273_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_del_object(v___x_3224_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v___x_3199_);
return v___x_3317_;
}
}
else
{
lean_dec(v_a_3312_);
lean_dec(v___x_3273_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_del_object(v___x_3224_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_projId_3201_);
lean_dec(v___x_3199_);
return v___x_3315_;
}
}
else
{
lean_dec(v_a_3312_);
lean_dec(v___x_3273_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_del_object(v___x_3224_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_projId_3201_);
lean_dec(v___x_3199_);
return v___x_3314_;
}
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
lean_dec(v___x_3273_);
lean_dec(v___x_3271_);
lean_dec(v___x_3269_);
lean_del_object(v___x_3224_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_projId_3201_);
lean_dec(v___x_3199_);
v_a_3357_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3311_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3311_);
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
lean_dec(v___x_3273_);
lean_dec(v___x_3271_);
lean_dec(v___x_3270_);
lean_dec(v___x_3269_);
lean_del_object(v___x_3224_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_projId_3201_);
lean_dec(v___x_3199_);
return v___x_3309_;
}
}
}
else
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3383_; 
lean_dec(v___x_3273_);
lean_dec(v___x_3271_);
lean_dec(v___x_3270_);
lean_dec(v___x_3269_);
lean_del_object(v___x_3224_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_mods_3207_);
lean_dec(v___x_3206_);
lean_dec_ref(v_params_3205_);
lean_dec_ref(v___x_3204_);
lean_dec_ref(v___x_3203_);
lean_dec_ref(v___x_3202_);
lean_dec(v_projId_3201_);
lean_dec(v___x_3199_);
v_a_3376_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3383_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3383_ == 0)
{
v___x_3378_ = v___x_3274_;
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v___x_3274_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3383_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3382_; 
v_reuseFailAlloc_3382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3382_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3382_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
return v___x_3381_;
}
}
}
v___jp_3226_:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3231_ = lean_alloc_closure((void*)(l_Lean_Elab_getOptDerivingClasses___boxed), 4, 1);
lean_closure_set(v___x_3231_, 0, v_optDeriving_3209_);
v___x_3232_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_3231_, v___y_3229_, v___y_3230_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; lean_object* v___x_3235_; uint8_t v_isShared_3236_; uint8_t v_isSharedCheck_3259_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3235_ = v___x_3232_;
v_isShared_3236_ = v_isSharedCheck_3259_;
goto v_resetjp_3234_;
}
else
{
lean_inc(v_a_3233_);
lean_dec(v___x_3232_);
v___x_3235_ = lean_box(0);
v_isShared_3236_ = v_isSharedCheck_3259_;
goto v_resetjp_3234_;
}
v_resetjp_3234_:
{
lean_object* v___x_3237_; uint8_t v___x_3238_; 
v___x_3237_ = lean_array_get_size(v_a_3233_);
v___x_3238_ = lean_nat_dec_eq(v___x_3237_, v___x_3210_);
if (v___x_3238_ == 0)
{
uint8_t v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; size_t v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___f_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; 
lean_del_object(v___x_3235_);
v___x_3239_ = 1;
v___x_3240_ = lean_obj_once(&l_Lean_Elab_Command_elabNewtype___lam__2___closed__0, &l_Lean_Elab_Command_elabNewtype___lam__2___closed__0_once, _init_l_Lean_Elab_Command_elabNewtype___lam__2___closed__0);
v___x_3241_ = lean_unsigned_to_nat(32u);
v___x_3242_ = lean_mk_empty_array_with_capacity(v___x_3241_);
v___x_3243_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__2);
v___x_3244_ = ((size_t)5ULL);
lean_inc_n(v___x_3210_, 2);
v___x_3245_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3245_, 0, v___x_3243_);
lean_ctor_set(v___x_3245_, 1, v___x_3242_);
lean_ctor_set(v___x_3245_, 2, v___x_3210_);
lean_ctor_set(v___x_3245_, 3, v___x_3210_);
lean_ctor_set_usize(v___x_3245_, 4, v___x_3244_);
v___x_3246_ = lean_box(1);
v___x_3247_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3240_);
lean_ctor_set(v___x_3247_, 1, v___x_3245_);
lean_ctor_set(v___x_3247_, 2, v___x_3246_);
v___x_3248_ = lean_mk_empty_array_with_capacity(v___x_3210_);
lean_dec(v___x_3210_);
lean_inc(v_declName_3222_);
v___x_3249_ = lean_alloc_closure((void*)(l_Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5___boxed), 8, 1);
lean_closure_set(v___x_3249_, 0, v_declName_3222_);
v___x_3250_ = lean_box(v___x_3239_);
v___x_3251_ = lean_box_usize(v___y_3227_);
v___x_3252_ = lean_box(v___x_3238_);
v___f_3253_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3253_, 0, v___x_3249_);
lean_closure_set(v___f_3253_, 1, v___x_3250_);
lean_closure_set(v___f_3253_, 2, v_declName_3222_);
lean_closure_set(v___f_3253_, 3, v_a_3233_);
lean_closure_set(v___f_3253_, 4, v___x_3237_);
lean_closure_set(v___f_3253_, 5, v___x_3251_);
lean_closure_set(v___f_3253_, 6, v___y_3228_);
lean_closure_set(v___f_3253_, 7, v___x_3252_);
v___x_3254_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Elab_Command_elabNewtype_spec__10___boxed), 11, 4);
lean_closure_set(v___x_3254_, 0, lean_box(0));
lean_closure_set(v___x_3254_, 1, v___x_3247_);
lean_closure_set(v___x_3254_, 2, v___x_3248_);
lean_closure_set(v___x_3254_, 3, v___f_3253_);
v___x_3255_ = l_Lean_Elab_Command_liftTermElabM___redArg(v___x_3254_, v___y_3229_, v___y_3230_);
return v___x_3255_;
}
else
{
lean_object* v___x_3257_; 
lean_dec(v_a_3233_);
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
if (v_isShared_3236_ == 0)
{
lean_ctor_set(v___x_3235_, 0, v___y_3228_);
v___x_3257_ = v___x_3235_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v___y_3228_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
else
{
lean_object* v_a_3260_; lean_object* v___x_3262_; uint8_t v_isShared_3263_; uint8_t v_isSharedCheck_3267_; 
lean_dec(v_declName_3222_);
lean_dec(v___x_3210_);
v_a_3260_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3267_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3267_ == 0)
{
v___x_3262_ = v___x_3232_;
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
else
{
lean_inc(v_a_3260_);
lean_dec(v___x_3232_);
v___x_3262_ = lean_box(0);
v_isShared_3263_ = v_isSharedCheck_3267_;
goto v_resetjp_3261_;
}
v_resetjp_3261_:
{
lean_object* v___x_3265_; 
if (v_isShared_3263_ == 0)
{
v___x_3265_ = v___x_3262_;
goto v_reusejp_3264_;
}
else
{
lean_object* v_reuseFailAlloc_3266_; 
v_reuseFailAlloc_3266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3266_, 0, v_a_3260_);
v___x_3265_ = v_reuseFailAlloc_3266_;
goto v_reusejp_3264_;
}
v_reusejp_3264_:
{
return v___x_3265_;
}
}
}
}
}
}
else
{
lean_object* v_a_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3395_; 
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_mods_3207_);
lean_dec(v___x_3206_);
lean_dec_ref(v_params_3205_);
lean_dec_ref(v___x_3204_);
lean_dec_ref(v___x_3203_);
lean_dec_ref(v___x_3202_);
lean_dec(v_projId_3201_);
lean_dec(v___x_3199_);
v_a_3388_ = lean_ctor_get(v___x_3220_, 0);
v_isSharedCheck_3395_ = !lean_is_exclusive(v___x_3220_);
if (v_isSharedCheck_3395_ == 0)
{
v___x_3390_ = v___x_3220_;
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_a_3388_);
lean_dec(v___x_3220_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3395_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v___x_3393_; 
if (v_isShared_3391_ == 0)
{
v___x_3393_ = v___x_3390_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3394_; 
v_reuseFailAlloc_3394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3394_, 0, v_a_3388_);
v___x_3393_ = v_reuseFailAlloc_3394_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
return v___x_3393_;
}
}
}
}
else
{
lean_object* v_a_3396_; lean_object* v___x_3398_; uint8_t v_isShared_3399_; uint8_t v_isSharedCheck_3403_; 
lean_dec(v_currNamespace_3216_);
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_mods_3207_);
lean_dec(v___x_3206_);
lean_dec_ref(v_params_3205_);
lean_dec_ref(v___x_3204_);
lean_dec_ref(v___x_3203_);
lean_dec_ref(v___x_3202_);
lean_dec(v_projId_3201_);
lean_dec_ref(v_a_3200_);
lean_dec(v___x_3199_);
v_a_3396_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3398_ = v___x_3217_;
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
else
{
lean_inc(v_a_3396_);
lean_dec(v___x_3217_);
v___x_3398_ = lean_box(0);
v_isShared_3399_ = v_isSharedCheck_3403_;
goto v_resetjp_3397_;
}
v_resetjp_3397_:
{
lean_object* v___x_3401_; 
if (v_isShared_3399_ == 0)
{
v___x_3401_ = v___x_3398_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v_a_3396_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
return v___x_3401_;
}
}
}
}
else
{
lean_object* v_a_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3411_; 
lean_dec(v___x_3210_);
lean_dec(v_optDeriving_3209_);
lean_dec(v___x_3208_);
lean_dec(v_mods_3207_);
lean_dec(v___x_3206_);
lean_dec_ref(v_params_3205_);
lean_dec_ref(v___x_3204_);
lean_dec_ref(v___x_3203_);
lean_dec_ref(v___x_3202_);
lean_dec(v_projId_3201_);
lean_dec_ref(v_a_3200_);
lean_dec(v___x_3199_);
v_a_3404_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3411_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3411_ == 0)
{
v___x_3406_ = v___x_3214_;
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_a_3404_);
lean_dec(v___x_3214_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3411_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3409_; 
if (v_isShared_3407_ == 0)
{
v___x_3409_ = v___x_3406_;
goto v_reusejp_3408_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v_a_3404_);
v___x_3409_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3408_;
}
v_reusejp_3408_:
{
return v___x_3409_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__2___boxed(lean_object* v___x_3412_, lean_object* v_a_3413_, lean_object* v_projId_3414_, lean_object* v___x_3415_, lean_object* v___x_3416_, lean_object* v___x_3417_, lean_object* v_params_3418_, lean_object* v___x_3419_, lean_object* v_mods_3420_, lean_object* v___x_3421_, lean_object* v_optDeriving_3422_, lean_object* v___x_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Lean_Elab_Command_elabNewtype___lam__2(v___x_3412_, v_a_3413_, v_projId_3414_, v___x_3415_, v___x_3416_, v___x_3417_, v_params_3418_, v___x_3419_, v_mods_3420_, v___x_3421_, v_optDeriving_3422_, v___x_3423_, v___y_3424_, v___y_3425_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
return v_res_3427_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(uint8_t v_suppressElabErrors_3428_, uint8_t v___y_3429_, lean_object* v_x_3430_){
_start:
{
if (lean_obj_tag(v_x_3430_) == 1)
{
lean_object* v_pre_3431_; 
v_pre_3431_ = lean_ctor_get(v_x_3430_, 0);
if (lean_obj_tag(v_pre_3431_) == 0)
{
lean_object* v_str_3432_; lean_object* v___x_3433_; uint8_t v___x_3434_; 
v_str_3432_ = lean_ctor_get(v_x_3430_, 1);
v___x_3433_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___lam__0___closed__7));
v___x_3434_ = lean_string_dec_eq(v_str_3432_, v___x_3433_);
if (v___x_3434_ == 0)
{
return v___x_3434_;
}
else
{
return v_suppressElabErrors_3428_;
}
}
else
{
return v___y_3429_;
}
}
else
{
return v___y_3429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed(lean_object* v_suppressElabErrors_3435_, lean_object* v___y_3436_, lean_object* v_x_3437_){
_start:
{
uint8_t v_suppressElabErrors_boxed_3438_; uint8_t v___y_53207__boxed_3439_; uint8_t v_res_3440_; lean_object* v_r_3441_; 
v_suppressElabErrors_boxed_3438_ = lean_unbox(v_suppressElabErrors_3435_);
v___y_53207__boxed_3439_ = lean_unbox(v___y_3436_);
v_res_3440_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0(v_suppressElabErrors_boxed_3438_, v___y_53207__boxed_3439_, v_x_3437_);
lean_dec(v_x_3437_);
v_r_3441_ = lean_box(v_res_3440_);
return v_r_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(lean_object* v_ref_3442_, lean_object* v_msgData_3443_, uint8_t v_severity_3444_, uint8_t v_isSilent_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_){
_start:
{
uint8_t v___y_3450_; lean_object* v___y_3451_; lean_object* v___y_3452_; lean_object* v___y_3453_; uint8_t v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; uint8_t v___y_3515_; lean_object* v___y_3516_; uint8_t v___y_3517_; uint8_t v___y_3518_; lean_object* v___y_3519_; uint8_t v___y_3543_; uint8_t v___y_3544_; lean_object* v___y_3545_; uint8_t v___y_3546_; lean_object* v___y_3547_; uint8_t v___y_3551_; uint8_t v___y_3552_; uint8_t v___y_3553_; uint8_t v___x_3568_; uint8_t v___y_3570_; uint8_t v___y_3571_; uint8_t v___y_3572_; uint8_t v___y_3574_; uint8_t v___x_3586_; 
v___x_3568_ = 2;
v___x_3586_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3444_, v___x_3568_);
if (v___x_3586_ == 0)
{
v___y_3574_ = v___x_3586_;
goto v___jp_3573_;
}
else
{
uint8_t v___x_3587_; 
lean_inc_ref(v_msgData_3443_);
v___x_3587_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3443_);
v___y_3574_ = v___x_3587_;
goto v___jp_3573_;
}
v___jp_3449_:
{
lean_object* v___x_3458_; 
v___x_3458_ = l_Lean_Elab_Command_getScope___redArg(v___y_3457_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_a_3459_; lean_object* v_currNamespace_3460_; lean_object* v___x_3461_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3459_);
lean_dec_ref_known(v___x_3458_, 1);
v_currNamespace_3460_ = lean_ctor_get(v_a_3459_, 2);
lean_inc(v_currNamespace_3460_);
lean_dec(v_a_3459_);
v___x_3461_ = l_Lean_Elab_Command_getScope___redArg(v___y_3457_);
if (lean_obj_tag(v___x_3461_) == 0)
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3497_; 
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3464_ = v___x_3461_;
v_isShared_3465_ = v_isSharedCheck_3497_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3461_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3497_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v_openDecls_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v_env_3471_; lean_object* v_messages_3472_; lean_object* v_scopes_3473_; lean_object* v_usedQuotCtxts_3474_; lean_object* v_nextMacroScope_3475_; lean_object* v_maxRecDepth_3476_; lean_object* v_ngen_3477_; lean_object* v_auxDeclNGen_3478_; lean_object* v_infoState_3479_; lean_object* v_traceState_3480_; lean_object* v_snapshotTasks_3481_; lean_object* v_prevLinterStates_3482_; lean_object* v_codeQualityEntryTasks_3483_; lean_object* v___x_3485_; uint8_t v_isShared_3486_; uint8_t v_isSharedCheck_3496_; 
v_openDecls_3466_ = lean_ctor_get(v_a_3462_, 3);
lean_inc(v_openDecls_3466_);
lean_dec(v_a_3462_);
v___x_3467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3467_, 0, v_currNamespace_3460_);
lean_ctor_set(v___x_3467_, 1, v_openDecls_3466_);
v___x_3468_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3467_);
lean_ctor_set(v___x_3468_, 1, v___y_3456_);
lean_inc_ref(v___y_3451_);
lean_inc_ref(v___y_3452_);
v___x_3469_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3469_, 0, v___y_3452_);
lean_ctor_set(v___x_3469_, 1, v___y_3453_);
lean_ctor_set(v___x_3469_, 2, v___y_3455_);
lean_ctor_set(v___x_3469_, 3, v___y_3451_);
lean_ctor_set(v___x_3469_, 4, v___x_3468_);
lean_ctor_set_uint8(v___x_3469_, sizeof(void*)*5, v___y_3454_);
lean_ctor_set_uint8(v___x_3469_, sizeof(void*)*5 + 1, v___y_3450_);
lean_ctor_set_uint8(v___x_3469_, sizeof(void*)*5 + 2, v_isSilent_3445_);
v___x_3470_ = lean_st_ref_take(v___y_3457_);
v_env_3471_ = lean_ctor_get(v___x_3470_, 0);
v_messages_3472_ = lean_ctor_get(v___x_3470_, 1);
v_scopes_3473_ = lean_ctor_get(v___x_3470_, 2);
v_usedQuotCtxts_3474_ = lean_ctor_get(v___x_3470_, 3);
v_nextMacroScope_3475_ = lean_ctor_get(v___x_3470_, 4);
v_maxRecDepth_3476_ = lean_ctor_get(v___x_3470_, 5);
v_ngen_3477_ = lean_ctor_get(v___x_3470_, 6);
v_auxDeclNGen_3478_ = lean_ctor_get(v___x_3470_, 7);
v_infoState_3479_ = lean_ctor_get(v___x_3470_, 8);
v_traceState_3480_ = lean_ctor_get(v___x_3470_, 9);
v_snapshotTasks_3481_ = lean_ctor_get(v___x_3470_, 10);
v_prevLinterStates_3482_ = lean_ctor_get(v___x_3470_, 11);
v_codeQualityEntryTasks_3483_ = lean_ctor_get(v___x_3470_, 12);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3470_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3485_ = v___x_3470_;
v_isShared_3486_ = v_isSharedCheck_3496_;
goto v_resetjp_3484_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3483_);
lean_inc(v_prevLinterStates_3482_);
lean_inc(v_snapshotTasks_3481_);
lean_inc(v_traceState_3480_);
lean_inc(v_infoState_3479_);
lean_inc(v_auxDeclNGen_3478_);
lean_inc(v_ngen_3477_);
lean_inc(v_maxRecDepth_3476_);
lean_inc(v_nextMacroScope_3475_);
lean_inc(v_usedQuotCtxts_3474_);
lean_inc(v_scopes_3473_);
lean_inc(v_messages_3472_);
lean_inc(v_env_3471_);
lean_dec(v___x_3470_);
v___x_3485_ = lean_box(0);
v_isShared_3486_ = v_isSharedCheck_3496_;
goto v_resetjp_3484_;
}
v_resetjp_3484_:
{
lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3490_; 
v___x_3487_ = lean_box(0);
v___x_3488_ = l_Lean_MessageLog_add(v___x_3469_, v_messages_3472_);
if (v_isShared_3486_ == 0)
{
lean_ctor_set(v___x_3485_, 1, v___x_3488_);
v___x_3490_ = v___x_3485_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v_env_3471_);
lean_ctor_set(v_reuseFailAlloc_3495_, 1, v___x_3488_);
lean_ctor_set(v_reuseFailAlloc_3495_, 2, v_scopes_3473_);
lean_ctor_set(v_reuseFailAlloc_3495_, 3, v_usedQuotCtxts_3474_);
lean_ctor_set(v_reuseFailAlloc_3495_, 4, v_nextMacroScope_3475_);
lean_ctor_set(v_reuseFailAlloc_3495_, 5, v_maxRecDepth_3476_);
lean_ctor_set(v_reuseFailAlloc_3495_, 6, v_ngen_3477_);
lean_ctor_set(v_reuseFailAlloc_3495_, 7, v_auxDeclNGen_3478_);
lean_ctor_set(v_reuseFailAlloc_3495_, 8, v_infoState_3479_);
lean_ctor_set(v_reuseFailAlloc_3495_, 9, v_traceState_3480_);
lean_ctor_set(v_reuseFailAlloc_3495_, 10, v_snapshotTasks_3481_);
lean_ctor_set(v_reuseFailAlloc_3495_, 11, v_prevLinterStates_3482_);
lean_ctor_set(v_reuseFailAlloc_3495_, 12, v_codeQualityEntryTasks_3483_);
v___x_3490_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
lean_object* v___x_3491_; lean_object* v___x_3493_; 
v___x_3491_ = lean_st_ref_put(v___y_3457_, v___x_3490_);
if (v_isShared_3465_ == 0)
{
lean_ctor_set(v___x_3464_, 0, v___x_3487_);
v___x_3493_ = v___x_3464_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v___x_3487_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
return v___x_3493_;
}
}
}
}
}
else
{
lean_object* v_a_3498_; lean_object* v___x_3500_; uint8_t v_isShared_3501_; uint8_t v_isSharedCheck_3505_; 
lean_dec(v_currNamespace_3460_);
lean_dec_ref(v___y_3456_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3453_);
v_a_3498_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3505_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3505_ == 0)
{
v___x_3500_ = v___x_3461_;
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
else
{
lean_inc(v_a_3498_);
lean_dec(v___x_3461_);
v___x_3500_ = lean_box(0);
v_isShared_3501_ = v_isSharedCheck_3505_;
goto v_resetjp_3499_;
}
v_resetjp_3499_:
{
lean_object* v___x_3503_; 
if (v_isShared_3501_ == 0)
{
v___x_3503_ = v___x_3500_;
goto v_reusejp_3502_;
}
else
{
lean_object* v_reuseFailAlloc_3504_; 
v_reuseFailAlloc_3504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3504_, 0, v_a_3498_);
v___x_3503_ = v_reuseFailAlloc_3504_;
goto v_reusejp_3502_;
}
v_reusejp_3502_:
{
return v___x_3503_;
}
}
}
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec_ref(v___y_3456_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3453_);
v_a_3506_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3458_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3458_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
v___jp_3514_:
{
lean_object* v_fileName_3520_; lean_object* v_fileMap_3521_; uint8_t v_suppressElabErrors_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___f_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3541_; 
v_fileName_3520_ = lean_ctor_get(v___y_3446_, 0);
v_fileMap_3521_ = lean_ctor_get(v___y_3446_, 1);
v_suppressElabErrors_3522_ = lean_ctor_get_uint8(v___y_3446_, sizeof(void*)*10);
v___x_3523_ = lean_box(v_suppressElabErrors_3522_);
v___x_3524_ = lean_box(v___y_3515_);
v___f_3525_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3525_, 0, v___x_3523_);
lean_closure_set(v___f_3525_, 1, v___x_3524_);
v___x_3526_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3443_);
v___x_3527_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v___x_3526_, v___y_3447_);
v_a_3528_ = lean_ctor_get(v___x_3527_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3527_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3530_ = v___x_3527_;
v_isShared_3531_ = v_isSharedCheck_3541_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3527_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3541_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; 
lean_inc_ref_n(v_fileMap_3521_, 2);
v___x_3532_ = l_Lean_FileMap_toPosition(v_fileMap_3521_, v___y_3516_);
lean_dec(v___y_3516_);
v___x_3533_ = l_Lean_FileMap_toPosition(v_fileMap_3521_, v___y_3519_);
lean_dec(v___y_3519_);
v___x_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
v___x_3535_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
if (v_suppressElabErrors_3522_ == 0)
{
lean_del_object(v___x_3530_);
lean_dec_ref(v___f_3525_);
v___y_3450_ = v___y_3517_;
v___y_3451_ = v___x_3535_;
v___y_3452_ = v_fileName_3520_;
v___y_3453_ = v___x_3532_;
v___y_3454_ = v___y_3518_;
v___y_3455_ = v___x_3534_;
v___y_3456_ = v_a_3528_;
v___y_3457_ = v___y_3447_;
goto v___jp_3449_;
}
else
{
uint8_t v___x_3536_; 
lean_inc(v_a_3528_);
v___x_3536_ = l_Lean_MessageData_hasTag(v___f_3525_, v_a_3528_);
if (v___x_3536_ == 0)
{
lean_object* v___x_3537_; lean_object* v___x_3539_; 
lean_dec_ref_known(v___x_3534_, 1);
lean_dec_ref(v___x_3532_);
lean_dec(v_a_3528_);
v___x_3537_ = lean_box(0);
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v___x_3537_);
v___x_3539_ = v___x_3530_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v___x_3537_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
else
{
lean_del_object(v___x_3530_);
v___y_3450_ = v___y_3517_;
v___y_3451_ = v___x_3535_;
v___y_3452_ = v_fileName_3520_;
v___y_3453_ = v___x_3532_;
v___y_3454_ = v___y_3518_;
v___y_3455_ = v___x_3534_;
v___y_3456_ = v_a_3528_;
v___y_3457_ = v___y_3447_;
goto v___jp_3449_;
}
}
}
}
v___jp_3542_:
{
lean_object* v___x_3548_; 
v___x_3548_ = l_Lean_Syntax_getTailPos_x3f(v___y_3545_, v___y_3546_);
lean_dec(v___y_3545_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_inc(v___y_3547_);
v___y_3515_ = v___y_3543_;
v___y_3516_ = v___y_3547_;
v___y_3517_ = v___y_3544_;
v___y_3518_ = v___y_3546_;
v___y_3519_ = v___y_3547_;
goto v___jp_3514_;
}
else
{
lean_object* v_val_3549_; 
v_val_3549_ = lean_ctor_get(v___x_3548_, 0);
lean_inc(v_val_3549_);
lean_dec_ref_known(v___x_3548_, 1);
v___y_3515_ = v___y_3543_;
v___y_3516_ = v___y_3547_;
v___y_3517_ = v___y_3544_;
v___y_3518_ = v___y_3546_;
v___y_3519_ = v_val_3549_;
goto v___jp_3514_;
}
}
v___jp_3550_:
{
lean_object* v___x_3554_; 
v___x_3554_ = l_Lean_Elab_Command_getRef___redArg(v___y_3446_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v_a_3555_; lean_object* v_ref_3556_; lean_object* v___x_3557_; 
v_a_3555_ = lean_ctor_get(v___x_3554_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3554_, 1);
v_ref_3556_ = l_Lean_replaceRef(v_ref_3442_, v_a_3555_);
lean_dec(v_a_3555_);
v___x_3557_ = l_Lean_Syntax_getPos_x3f(v_ref_3556_, v___y_3552_);
if (lean_obj_tag(v___x_3557_) == 0)
{
lean_object* v___x_3558_; 
v___x_3558_ = lean_unsigned_to_nat(0u);
v___y_3543_ = v___y_3551_;
v___y_3544_ = v___y_3553_;
v___y_3545_ = v_ref_3556_;
v___y_3546_ = v___y_3552_;
v___y_3547_ = v___x_3558_;
goto v___jp_3542_;
}
else
{
lean_object* v_val_3559_; 
v_val_3559_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_val_3559_);
lean_dec_ref_known(v___x_3557_, 1);
v___y_3543_ = v___y_3551_;
v___y_3544_ = v___y_3553_;
v___y_3545_ = v_ref_3556_;
v___y_3546_ = v___y_3552_;
v___y_3547_ = v_val_3559_;
goto v___jp_3542_;
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
lean_dec_ref(v_msgData_3443_);
v_a_3560_ = lean_ctor_get(v___x_3554_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3554_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3554_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3554_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
v___jp_3569_:
{
if (v___y_3572_ == 0)
{
v___y_3551_ = v___y_3570_;
v___y_3552_ = v___y_3571_;
v___y_3553_ = v_severity_3444_;
goto v___jp_3550_;
}
else
{
v___y_3551_ = v___y_3570_;
v___y_3552_ = v___y_3571_;
v___y_3553_ = v___x_3568_;
goto v___jp_3550_;
}
}
v___jp_3573_:
{
if (v___y_3574_ == 0)
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v_scopes_3577_; lean_object* v___x_3578_; lean_object* v_opts_3579_; uint8_t v___x_3580_; uint8_t v___x_3581_; 
v___x_3575_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3576_ = lean_st_ref_get(v___y_3447_);
v_scopes_3577_ = lean_ctor_get(v___x_3576_, 2);
lean_inc(v_scopes_3577_);
lean_dec(v___x_3576_);
v___x_3578_ = l_List_head_x21___redArg(v___x_3575_, v_scopes_3577_);
lean_dec(v_scopes_3577_);
v_opts_3579_ = lean_ctor_get(v___x_3578_, 1);
lean_inc_ref(v_opts_3579_);
lean_dec(v___x_3578_);
v___x_3580_ = 1;
v___x_3581_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3444_, v___x_3580_);
if (v___x_3581_ == 0)
{
lean_dec_ref(v_opts_3579_);
v___y_3570_ = v___y_3574_;
v___y_3571_ = v___y_3574_;
v___y_3572_ = v___x_3581_;
goto v___jp_3569_;
}
else
{
lean_object* v___x_3582_; uint8_t v___x_3583_; 
v___x_3582_ = l_Lean_warningAsError;
v___x_3583_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_NewType_0__Lean_Elab_Command_addNewtypeCtorProj_spec__7_spec__11_spec__13(v_opts_3579_, v___x_3582_);
lean_dec_ref(v_opts_3579_);
v___y_3570_ = v___y_3574_;
v___y_3571_ = v___y_3574_;
v___y_3572_ = v___x_3583_;
goto v___jp_3569_;
}
}
else
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
lean_dec_ref(v_msgData_3443_);
v___x_3584_ = lean_box(0);
v___x_3585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3585_, 0, v___x_3584_);
return v___x_3585_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40___boxed(lean_object* v_ref_3588_, lean_object* v_msgData_3589_, lean_object* v_severity_3590_, lean_object* v_isSilent_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
uint8_t v_severity_boxed_3595_; uint8_t v_isSilent_boxed_3596_; lean_object* v_res_3597_; 
v_severity_boxed_3595_ = lean_unbox(v_severity_3590_);
v_isSilent_boxed_3596_ = lean_unbox(v_isSilent_3591_);
v_res_3597_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3588_, v_msgData_3589_, v_severity_boxed_3595_, v_isSilent_boxed_3596_, v___y_3592_, v___y_3593_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec(v_ref_3588_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(lean_object* v_msgData_3598_, uint8_t v_severity_3599_, uint8_t v_isSilent_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_){
_start:
{
lean_object* v___x_3604_; 
v___x_3604_ = l_Lean_Elab_Command_getRef___redArg(v___y_3601_);
if (lean_obj_tag(v___x_3604_) == 0)
{
lean_object* v_a_3605_; lean_object* v___x_3606_; 
v_a_3605_ = lean_ctor_get(v___x_3604_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v___x_3604_, 1);
v___x_3606_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_a_3605_, v_msgData_3598_, v_severity_3599_, v_isSilent_3600_, v___y_3601_, v___y_3602_);
lean_dec(v_a_3605_);
return v___x_3606_;
}
else
{
lean_object* v_a_3607_; lean_object* v___x_3609_; uint8_t v_isShared_3610_; uint8_t v_isSharedCheck_3614_; 
lean_dec_ref(v_msgData_3598_);
v_a_3607_ = lean_ctor_get(v___x_3604_, 0);
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3604_);
if (v_isSharedCheck_3614_ == 0)
{
v___x_3609_ = v___x_3604_;
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
else
{
lean_inc(v_a_3607_);
lean_dec(v___x_3604_);
v___x_3609_ = lean_box(0);
v_isShared_3610_ = v_isSharedCheck_3614_;
goto v_resetjp_3608_;
}
v_resetjp_3608_:
{
lean_object* v___x_3612_; 
if (v_isShared_3610_ == 0)
{
v___x_3612_ = v___x_3609_;
goto v_reusejp_3611_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_a_3607_);
v___x_3612_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3611_;
}
v_reusejp_3611_:
{
return v___x_3612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44___boxed(lean_object* v_msgData_3615_, lean_object* v_severity_3616_, lean_object* v_isSilent_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_){
_start:
{
uint8_t v_severity_boxed_3621_; uint8_t v_isSilent_boxed_3622_; lean_object* v_res_3623_; 
v_severity_boxed_3621_ = lean_unbox(v_severity_3616_);
v_isSilent_boxed_3622_ = lean_unbox(v_isSilent_3617_);
v_res_3623_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3615_, v_severity_boxed_3621_, v_isSilent_boxed_3622_, v___y_3618_, v___y_3619_);
lean_dec(v___y_3619_);
lean_dec_ref(v___y_3618_);
return v_res_3623_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(lean_object* v_msgData_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_){
_start:
{
uint8_t v___x_3628_; uint8_t v___x_3629_; lean_object* v___x_3630_; 
v___x_3628_ = 2;
v___x_3629_ = 0;
v___x_3630_ = l_Lean_log___at___00Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38_spec__44(v_msgData_3624_, v___x_3628_, v___x_3629_, v___y_3625_, v___y_3626_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38___boxed(lean_object* v_msgData_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_){
_start:
{
lean_object* v_res_3635_; 
v_res_3635_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v_msgData_3631_, v___y_3632_, v___y_3633_);
lean_dec(v___y_3633_);
lean_dec_ref(v___y_3632_);
return v_res_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(lean_object* v_ref_3636_, lean_object* v_msgData_3637_, lean_object* v___y_3638_, lean_object* v___y_3639_){
_start:
{
uint8_t v___x_3641_; uint8_t v___x_3642_; lean_object* v___x_3643_; 
v___x_3641_ = 2;
v___x_3642_ = 0;
v___x_3643_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_3636_, v_msgData_3637_, v___x_3641_, v___x_3642_, v___y_3638_, v___y_3639_);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37___boxed(lean_object* v_ref_3644_, lean_object* v_msgData_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_){
_start:
{
lean_object* v_res_3649_; 
v_res_3649_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3644_, v_msgData_3645_, v___y_3646_, v___y_3647_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec(v_ref_3644_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(lean_object* v_ex_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
if (lean_obj_tag(v_ex_3650_) == 0)
{
lean_object* v_ref_3654_; lean_object* v_msg_3655_; lean_object* v___x_3656_; 
v_ref_3654_ = lean_ctor_get(v_ex_3650_, 0);
lean_inc(v_ref_3654_);
v_msg_3655_ = lean_ctor_get(v_ex_3650_, 1);
lean_inc_ref(v_msg_3655_);
lean_dec_ref_known(v_ex_3650_, 2);
v___x_3656_ = l_Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__37(v_ref_3654_, v_msg_3655_, v___y_3651_, v___y_3652_);
lean_dec(v_ref_3654_);
return v___x_3656_;
}
else
{
lean_object* v_id_3657_; uint8_t v___y_3659_; uint8_t v___x_3681_; 
v_id_3657_ = lean_ctor_get(v_ex_3650_, 0);
lean_inc(v_id_3657_);
v___x_3681_ = l_Lean_Elab_isAbortExceptionId(v_id_3657_);
if (v___x_3681_ == 0)
{
uint8_t v___x_3682_; 
v___x_3682_ = l_Lean_Exception_isInterrupt(v_ex_3650_);
lean_dec_ref_known(v_ex_3650_, 2);
v___y_3659_ = v___x_3682_;
goto v___jp_3658_;
}
else
{
lean_dec_ref_known(v_ex_3650_, 2);
v___y_3659_ = v___x_3681_;
goto v___jp_3658_;
}
v___jp_3658_:
{
if (v___y_3659_ == 0)
{
lean_object* v___x_3660_; 
v___x_3660_ = l_Lean_InternalExceptionId_getName(v_id_3657_);
lean_dec(v_id_3657_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref_known(v___x_3660_, 1);
v___x_3662_ = lean_obj_once(&l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1, &l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1_once, _init_l_Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15___closed__1);
v___x_3663_ = l_Lean_MessageData_ofName(v_a_3661_);
v___x_3664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3664_, 0, v___x_3662_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
v___x_3665_ = l_Lean_logError___at___00Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27_spec__38(v___x_3664_, v___y_3651_, v___y_3652_);
return v___x_3665_;
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3678_; 
v_a_3666_ = lean_ctor_get(v___x_3660_, 0);
v_isSharedCheck_3678_ = !lean_is_exclusive(v___x_3660_);
if (v_isSharedCheck_3678_ == 0)
{
v___x_3668_ = v___x_3660_;
v_isShared_3669_ = v_isSharedCheck_3678_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3660_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3678_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v_ref_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3676_; 
v_ref_3670_ = lean_ctor_get(v___y_3651_, 7);
v___x_3671_ = lean_io_error_to_string(v_a_3666_);
v___x_3672_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3672_, 0, v___x_3671_);
v___x_3673_ = l_Lean_MessageData_ofFormat(v___x_3672_);
lean_inc(v_ref_3670_);
v___x_3674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3674_, 0, v_ref_3670_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
if (v_isShared_3669_ == 0)
{
lean_ctor_set(v___x_3668_, 0, v___x_3674_);
v___x_3676_ = v___x_3668_;
goto v_reusejp_3675_;
}
else
{
lean_object* v_reuseFailAlloc_3677_; 
v_reuseFailAlloc_3677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3677_, 0, v___x_3674_);
v___x_3676_ = v_reuseFailAlloc_3677_;
goto v_reusejp_3675_;
}
v_reusejp_3675_:
{
return v___x_3676_;
}
}
}
}
else
{
lean_object* v___x_3679_; lean_object* v___x_3680_; 
lean_dec(v_id_3657_);
v___x_3679_ = lean_box(0);
v___x_3680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3680_, 0, v___x_3679_);
return v___x_3680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27___boxed(lean_object* v_ex_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_ex_3683_, v___y_3684_, v___y_3685_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
return v_res_3687_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(lean_object* v_k_3697_){
_start:
{
lean_object* v___x_3698_; uint8_t v___x_3699_; 
v___x_3698_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__4));
v___x_3699_ = lean_name_eq(v_k_3697_, v___x_3698_);
if (v___x_3699_ == 0)
{
uint8_t v___x_3700_; 
v___x_3700_ = 1;
return v___x_3700_;
}
else
{
uint8_t v___x_3701_; 
v___x_3701_ = 0;
return v___x_3701_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___boxed(lean_object* v_k_3702_){
_start:
{
uint8_t v_res_3703_; lean_object* v_r_3704_; 
v_res_3703_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0(v_k_3702_);
lean_dec(v_k_3702_);
v_r_3704_ = lean_box(v_res_3703_);
return v_r_3704_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(lean_object* v_keys_3705_, lean_object* v_i_3706_, lean_object* v_k_3707_){
_start:
{
lean_object* v___x_3708_; uint8_t v___x_3709_; 
v___x_3708_ = lean_array_get_size(v_keys_3705_);
v___x_3709_ = lean_nat_dec_lt(v_i_3706_, v___x_3708_);
if (v___x_3709_ == 0)
{
lean_dec(v_i_3706_);
return v___x_3709_;
}
else
{
lean_object* v_k_x27_3710_; uint8_t v___x_3711_; 
v_k_x27_3710_ = lean_array_fget_borrowed(v_keys_3705_, v_i_3706_);
v___x_3711_ = l_Lean_instBEqExtraModUse_beq(v_k_3707_, v_k_x27_3710_);
if (v___x_3711_ == 0)
{
lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3712_ = lean_unsigned_to_nat(1u);
v___x_3713_ = lean_nat_add(v_i_3706_, v___x_3712_);
lean_dec(v_i_3706_);
v_i_3706_ = v___x_3713_;
goto _start;
}
else
{
lean_dec(v_i_3706_);
return v___x_3709_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg___boxed(lean_object* v_keys_3715_, lean_object* v_i_3716_, lean_object* v_k_3717_){
_start:
{
uint8_t v_res_3718_; lean_object* v_r_3719_; 
v_res_3718_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_3715_, v_i_3716_, v_k_3717_);
lean_dec_ref(v_k_3717_);
lean_dec_ref(v_keys_3715_);
v_r_3719_ = lean_box(v_res_3718_);
return v_r_3719_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(lean_object* v_x_3720_, size_t v_x_3721_, lean_object* v_x_3722_){
_start:
{
if (lean_obj_tag(v_x_3720_) == 0)
{
lean_object* v_es_3723_; lean_object* v___x_3724_; size_t v___x_3725_; size_t v___x_3726_; lean_object* v_j_3727_; lean_object* v___x_3728_; 
v_es_3723_ = lean_ctor_get(v_x_3720_, 0);
v___x_3724_ = lean_box(2);
v___x_3725_ = ((size_t)31ULL);
v___x_3726_ = lean_usize_land(v_x_3721_, v___x_3725_);
v_j_3727_ = lean_usize_to_nat(v___x_3726_);
v___x_3728_ = lean_array_get_borrowed(v___x_3724_, v_es_3723_, v_j_3727_);
lean_dec(v_j_3727_);
switch(lean_obj_tag(v___x_3728_))
{
case 0:
{
lean_object* v_key_3729_; uint8_t v___x_3730_; 
v_key_3729_ = lean_ctor_get(v___x_3728_, 0);
v___x_3730_ = l_Lean_instBEqExtraModUse_beq(v_x_3722_, v_key_3729_);
return v___x_3730_;
}
case 1:
{
lean_object* v_node_3731_; size_t v___x_3732_; size_t v___x_3733_; 
v_node_3731_ = lean_ctor_get(v___x_3728_, 0);
v___x_3732_ = ((size_t)5ULL);
v___x_3733_ = lean_usize_shift_right(v_x_3721_, v___x_3732_);
v_x_3720_ = v_node_3731_;
v_x_3721_ = v___x_3733_;
goto _start;
}
default: 
{
uint8_t v___x_3735_; 
v___x_3735_ = 0;
return v___x_3735_;
}
}
}
else
{
lean_object* v_ks_3736_; lean_object* v___x_3737_; uint8_t v___x_3738_; 
v_ks_3736_ = lean_ctor_get(v_x_3720_, 0);
v___x_3737_ = lean_unsigned_to_nat(0u);
v___x_3738_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_ks_3736_, v___x_3737_, v_x_3722_);
return v___x_3738_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg___boxed(lean_object* v_x_3739_, lean_object* v_x_3740_, lean_object* v_x_3741_){
_start:
{
size_t v_x_53651__boxed_3742_; uint8_t v_res_3743_; lean_object* v_r_3744_; 
v_x_53651__boxed_3742_ = lean_unbox_usize(v_x_3740_);
lean_dec(v_x_3740_);
v_res_3743_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3739_, v_x_53651__boxed_3742_, v_x_3741_);
lean_dec_ref(v_x_3741_);
lean_dec_ref(v_x_3739_);
v_r_3744_ = lean_box(v_res_3743_);
return v_r_3744_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(lean_object* v_x_3745_, lean_object* v_x_3746_){
_start:
{
uint64_t v___x_3747_; size_t v___x_3748_; uint8_t v___x_3749_; 
v___x_3747_ = l_Lean_instHashableExtraModUse_hash(v_x_3746_);
v___x_3748_ = lean_uint64_to_usize(v___x_3747_);
v___x_3749_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_3745_, v___x_3748_, v_x_3746_);
return v___x_3749_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg___boxed(lean_object* v_x_3750_, lean_object* v_x_3751_){
_start:
{
uint8_t v_res_3752_; lean_object* v_r_3753_; 
v_res_3752_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_3750_, v_x_3751_);
lean_dec_ref(v_x_3751_);
lean_dec_ref(v_x_3750_);
v_r_3753_ = lean_box(v_res_3752_);
return v_r_3753_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0(void){
_start:
{
lean_object* v___x_3754_; double v___x_3755_; 
v___x_3754_ = lean_unsigned_to_nat(0u);
v___x_3755_ = lean_float_of_nat(v___x_3754_);
return v___x_3755_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(lean_object* v_cls_3758_, lean_object* v_msg_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
lean_object* v___x_3763_; 
v___x_3763_ = l_Lean_Elab_Command_getRef___redArg(v___y_3760_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; lean_object* v___x_3765_; lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3814_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
lean_inc(v_a_3764_);
lean_dec_ref_known(v___x_3763_, 1);
v___x_3765_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msg_3759_, v___y_3761_);
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3768_ = v___x_3765_;
v_isShared_3769_ = v_isSharedCheck_3814_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3765_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3814_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3770_; lean_object* v_traceState_3771_; lean_object* v_env_3772_; lean_object* v_messages_3773_; lean_object* v_scopes_3774_; lean_object* v_usedQuotCtxts_3775_; lean_object* v_nextMacroScope_3776_; lean_object* v_maxRecDepth_3777_; lean_object* v_ngen_3778_; lean_object* v_auxDeclNGen_3779_; lean_object* v_infoState_3780_; lean_object* v_snapshotTasks_3781_; lean_object* v_prevLinterStates_3782_; lean_object* v_codeQualityEntryTasks_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3813_; 
v___x_3770_ = lean_st_ref_take(v___y_3761_);
v_traceState_3771_ = lean_ctor_get(v___x_3770_, 9);
v_env_3772_ = lean_ctor_get(v___x_3770_, 0);
v_messages_3773_ = lean_ctor_get(v___x_3770_, 1);
v_scopes_3774_ = lean_ctor_get(v___x_3770_, 2);
v_usedQuotCtxts_3775_ = lean_ctor_get(v___x_3770_, 3);
v_nextMacroScope_3776_ = lean_ctor_get(v___x_3770_, 4);
v_maxRecDepth_3777_ = lean_ctor_get(v___x_3770_, 5);
v_ngen_3778_ = lean_ctor_get(v___x_3770_, 6);
v_auxDeclNGen_3779_ = lean_ctor_get(v___x_3770_, 7);
v_infoState_3780_ = lean_ctor_get(v___x_3770_, 8);
v_snapshotTasks_3781_ = lean_ctor_get(v___x_3770_, 10);
v_prevLinterStates_3782_ = lean_ctor_get(v___x_3770_, 11);
v_codeQualityEntryTasks_3783_ = lean_ctor_get(v___x_3770_, 12);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3770_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3785_ = v___x_3770_;
v_isShared_3786_ = v_isSharedCheck_3813_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3783_);
lean_inc(v_prevLinterStates_3782_);
lean_inc(v_snapshotTasks_3781_);
lean_inc(v_traceState_3771_);
lean_inc(v_infoState_3780_);
lean_inc(v_auxDeclNGen_3779_);
lean_inc(v_ngen_3778_);
lean_inc(v_maxRecDepth_3777_);
lean_inc(v_nextMacroScope_3776_);
lean_inc(v_usedQuotCtxts_3775_);
lean_inc(v_scopes_3774_);
lean_inc(v_messages_3773_);
lean_inc(v_env_3772_);
lean_dec(v___x_3770_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3813_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
uint64_t v_tid_3787_; lean_object* v_traces_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3812_; 
v_tid_3787_ = lean_ctor_get_uint64(v_traceState_3771_, sizeof(void*)*1);
v_traces_3788_ = lean_ctor_get(v_traceState_3771_, 0);
v_isSharedCheck_3812_ = !lean_is_exclusive(v_traceState_3771_);
if (v_isSharedCheck_3812_ == 0)
{
v___x_3790_ = v_traceState_3771_;
v_isShared_3791_ = v_isSharedCheck_3812_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_traces_3788_);
lean_dec(v_traceState_3771_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3812_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v___x_3793_; double v___x_3794_; uint8_t v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3803_; 
v___x_3792_ = lean_box(0);
v___x_3793_ = lean_box(0);
v___x_3794_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__0);
v___x_3795_ = 0;
v___x_3796_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3797_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3797_, 0, v_cls_3758_);
lean_ctor_set(v___x_3797_, 1, v___x_3793_);
lean_ctor_set(v___x_3797_, 2, v___x_3796_);
lean_ctor_set_float(v___x_3797_, sizeof(void*)*3, v___x_3794_);
lean_ctor_set_float(v___x_3797_, sizeof(void*)*3 + 8, v___x_3794_);
lean_ctor_set_uint8(v___x_3797_, sizeof(void*)*3 + 16, v___x_3795_);
v___x_3798_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___closed__1));
v___x_3799_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3797_);
lean_ctor_set(v___x_3799_, 1, v_a_3766_);
lean_ctor_set(v___x_3799_, 2, v___x_3798_);
v___x_3800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3800_, 0, v_a_3764_);
lean_ctor_set(v___x_3800_, 1, v___x_3799_);
v___x_3801_ = l_Lean_PersistentArray_push___redArg(v_traces_3788_, v___x_3800_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3801_);
v___x_3803_ = v___x_3790_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3811_; 
v_reuseFailAlloc_3811_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3811_, 0, v___x_3801_);
lean_ctor_set_uint64(v_reuseFailAlloc_3811_, sizeof(void*)*1, v_tid_3787_);
v___x_3803_ = v_reuseFailAlloc_3811_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
lean_object* v___x_3805_; 
if (v_isShared_3786_ == 0)
{
lean_ctor_set(v___x_3785_, 9, v___x_3803_);
v___x_3805_ = v___x_3785_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3810_; 
v_reuseFailAlloc_3810_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3810_, 0, v_env_3772_);
lean_ctor_set(v_reuseFailAlloc_3810_, 1, v_messages_3773_);
lean_ctor_set(v_reuseFailAlloc_3810_, 2, v_scopes_3774_);
lean_ctor_set(v_reuseFailAlloc_3810_, 3, v_usedQuotCtxts_3775_);
lean_ctor_set(v_reuseFailAlloc_3810_, 4, v_nextMacroScope_3776_);
lean_ctor_set(v_reuseFailAlloc_3810_, 5, v_maxRecDepth_3777_);
lean_ctor_set(v_reuseFailAlloc_3810_, 6, v_ngen_3778_);
lean_ctor_set(v_reuseFailAlloc_3810_, 7, v_auxDeclNGen_3779_);
lean_ctor_set(v_reuseFailAlloc_3810_, 8, v_infoState_3780_);
lean_ctor_set(v_reuseFailAlloc_3810_, 9, v___x_3803_);
lean_ctor_set(v_reuseFailAlloc_3810_, 10, v_snapshotTasks_3781_);
lean_ctor_set(v_reuseFailAlloc_3810_, 11, v_prevLinterStates_3782_);
lean_ctor_set(v_reuseFailAlloc_3810_, 12, v_codeQualityEntryTasks_3783_);
v___x_3805_ = v_reuseFailAlloc_3810_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
lean_object* v___x_3806_; lean_object* v___x_3808_; 
v___x_3806_ = lean_st_ref_put(v___y_3761_, v___x_3805_);
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 0, v___x_3792_);
v___x_3808_ = v___x_3768_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v___x_3792_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3815_; lean_object* v___x_3817_; uint8_t v_isShared_3818_; uint8_t v_isSharedCheck_3822_; 
lean_dec_ref(v_msg_3759_);
lean_dec(v_cls_3758_);
v_a_3815_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3822_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3822_ == 0)
{
v___x_3817_ = v___x_3763_;
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
else
{
lean_inc(v_a_3815_);
lean_dec(v___x_3763_);
v___x_3817_ = lean_box(0);
v_isShared_3818_ = v_isSharedCheck_3822_;
goto v_resetjp_3816_;
}
v_resetjp_3816_:
{
lean_object* v___x_3820_; 
if (v_isShared_3818_ == 0)
{
v___x_3820_ = v___x_3817_;
goto v_reusejp_3819_;
}
else
{
lean_object* v_reuseFailAlloc_3821_; 
v_reuseFailAlloc_3821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3821_, 0, v_a_3815_);
v___x_3820_ = v_reuseFailAlloc_3821_;
goto v_reusejp_3819_;
}
v_reusejp_3819_:
{
return v___x_3820_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47___boxed(lean_object* v_cls_3823_, lean_object* v_msg_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_){
_start:
{
lean_object* v_res_3828_; 
v_res_3828_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3823_, v_msg_3824_, v___y_3825_, v___y_3826_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
return v_res_3828_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0(void){
_start:
{
lean_object* v___x_3829_; 
v___x_3829_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_3829_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4(void){
_start:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3834_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__3));
v___x_3835_ = l_Lean_stringToMessageData(v___x_3834_);
return v___x_3835_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6(void){
_start:
{
lean_object* v___x_3837_; lean_object* v___x_3838_; 
v___x_3837_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__5));
v___x_3838_ = l_Lean_stringToMessageData(v___x_3837_);
return v___x_3838_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7(void){
_start:
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___x_3840_ = l_Lean_stringToMessageData(v___x_3839_);
return v___x_3840_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9(void){
_start:
{
lean_object* v_cls_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; 
v_cls_3843_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3844_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
v___x_3845_ = l_Lean_Name_append(v___x_3844_, v_cls_3843_);
return v___x_3845_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11(void){
_start:
{
lean_object* v___x_3847_; lean_object* v___x_3848_; 
v___x_3847_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__10));
v___x_3848_ = l_Lean_stringToMessageData(v___x_3847_);
return v___x_3848_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13(void){
_start:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; 
v___x_3850_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__12));
v___x_3851_ = l_Lean_stringToMessageData(v___x_3850_);
return v___x_3851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(lean_object* v_mod_3856_, uint8_t v_isMeta_3857_, lean_object* v_hint_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_){
_start:
{
lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v_env_3864_; uint8_t v_isExporting_3865_; lean_object* v_entry_3866_; lean_object* v___x_3867_; lean_object* v_env_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___y_3873_; lean_object* v___x_3901_; uint8_t v___x_3902_; 
v___x_3862_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__0);
v___x_3863_ = lean_st_ref_get(v___y_3860_);
v_env_3864_ = lean_ctor_get(v___x_3863_, 0);
lean_inc_ref(v_env_3864_);
lean_dec(v___x_3863_);
v_isExporting_3865_ = lean_ctor_get_uint8(v_env_3864_, sizeof(void*)*8);
lean_dec_ref(v_env_3864_);
lean_inc(v_mod_3856_);
v_entry_3866_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3866_, 0, v_mod_3856_);
lean_ctor_set_uint8(v_entry_3866_, sizeof(void*)*1, v_isExporting_3865_);
lean_ctor_set_uint8(v_entry_3866_, sizeof(void*)*1 + 1, v_isMeta_3857_);
v___x_3867_ = lean_st_ref_get(v___y_3860_);
v_env_3868_ = lean_ctor_get(v___x_3867_, 0);
lean_inc_ref(v_env_3868_);
lean_dec(v___x_3867_);
v___x_3869_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3870_ = lean_box(1);
v___x_3871_ = lean_box(0);
v___x_3901_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3862_, v___x_3869_, v_env_3868_, v___x_3870_, v___x_3871_);
v___x_3902_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v___x_3901_, v_entry_3866_);
lean_dec(v___x_3901_);
if (v___x_3902_ == 0)
{
lean_object* v_cls_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3914_; lean_object* v___y_3915_; lean_object* v_scopes_3927_; lean_object* v___x_3928_; lean_object* v_opts_3929_; uint8_t v_hasTrace_3930_; 
v_cls_3903_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__2));
v___x_3904_ = l_Lean_inheritedTraceOptions;
v___x_3905_ = lean_st_ref_get(v___x_3904_);
v___x_3906_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3907_ = lean_st_ref_get(v___y_3860_);
v_scopes_3927_ = lean_ctor_get(v___x_3907_, 2);
lean_inc(v_scopes_3927_);
lean_dec(v___x_3907_);
v___x_3928_ = l_List_head_x21___redArg(v___x_3906_, v_scopes_3927_);
lean_dec(v_scopes_3927_);
v_opts_3929_ = lean_ctor_get(v___x_3928_, 1);
lean_inc_ref(v_opts_3929_);
lean_dec(v___x_3928_);
v_hasTrace_3930_ = lean_ctor_get_uint8(v_opts_3929_, sizeof(void*)*1);
if (v_hasTrace_3930_ == 0)
{
lean_dec_ref(v_opts_3929_);
lean_dec(v___x_3905_);
lean_dec(v_hint_3858_);
lean_dec(v_mod_3856_);
v___y_3873_ = v___y_3860_;
goto v___jp_3872_;
}
else
{
lean_object* v___x_3931_; uint8_t v___x_3932_; 
v___x_3931_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__9);
v___x_3932_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3905_, v_opts_3929_, v___x_3931_);
lean_dec_ref(v_opts_3929_);
lean_dec(v___x_3905_);
if (v___x_3932_ == 0)
{
lean_dec(v_hint_3858_);
lean_dec(v_mod_3856_);
v___y_3873_ = v___y_3860_;
goto v___jp_3872_;
}
else
{
lean_object* v___x_3933_; lean_object* v___y_3935_; 
v___x_3933_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__11);
if (v_isExporting_3865_ == 0)
{
lean_object* v___x_3942_; 
v___x_3942_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__16));
v___y_3935_ = v___x_3942_;
goto v___jp_3934_;
}
else
{
lean_object* v___x_3943_; 
v___x_3943_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__17));
v___y_3935_ = v___x_3943_;
goto v___jp_3934_;
}
v___jp_3934_:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; 
lean_inc_ref(v___y_3935_);
v___x_3936_ = l_Lean_stringToMessageData(v___y_3935_);
v___x_3937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3933_);
lean_ctor_set(v___x_3937_, 1, v___x_3936_);
v___x_3938_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__13);
v___x_3939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3939_, 0, v___x_3937_);
lean_ctor_set(v___x_3939_, 1, v___x_3938_);
if (v_isMeta_3857_ == 0)
{
lean_object* v___x_3940_; 
v___x_3940_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__14));
v___y_3914_ = v___x_3939_;
v___y_3915_ = v___x_3940_;
goto v___jp_3913_;
}
else
{
lean_object* v___x_3941_; 
v___x_3941_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__15));
v___y_3914_ = v___x_3939_;
v___y_3915_ = v___x_3941_;
goto v___jp_3913_;
}
}
}
}
v___jp_3908_:
{
lean_object* v___x_3911_; lean_object* v___x_3912_; 
v___x_3911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3911_, 0, v___y_3909_);
lean_ctor_set(v___x_3911_, 1, v___y_3910_);
v___x_3912_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_cls_3903_, v___x_3911_, v___y_3859_, v___y_3860_);
if (lean_obj_tag(v___x_3912_) == 0)
{
lean_dec_ref_known(v___x_3912_, 1);
v___y_3873_ = v___y_3860_;
goto v___jp_3872_;
}
else
{
lean_dec_ref_known(v_entry_3866_, 1);
return v___x_3912_;
}
}
v___jp_3913_:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; uint8_t v___x_3922_; 
lean_inc_ref(v___y_3915_);
v___x_3916_ = l_Lean_stringToMessageData(v___y_3915_);
v___x_3917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3917_, 0, v___y_3914_);
lean_ctor_set(v___x_3917_, 1, v___x_3916_);
v___x_3918_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__4);
v___x_3919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3917_);
lean_ctor_set(v___x_3919_, 1, v___x_3918_);
v___x_3920_ = l_Lean_MessageData_ofName(v_mod_3856_);
v___x_3921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3919_);
lean_ctor_set(v___x_3921_, 1, v___x_3920_);
v___x_3922_ = l_Lean_Name_isAnonymous(v_hint_3858_);
if (v___x_3922_ == 0)
{
lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3923_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__6);
v___x_3924_ = l_Lean_MessageData_ofName(v_hint_3858_);
v___x_3925_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3923_);
lean_ctor_set(v___x_3925_, 1, v___x_3924_);
v___y_3909_ = v___x_3921_;
v___y_3910_ = v___x_3925_;
goto v___jp_3908_;
}
else
{
lean_object* v___x_3926_; 
lean_dec(v_hint_3858_);
v___x_3926_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__7);
v___y_3909_ = v___x_3921_;
v___y_3910_ = v___x_3926_;
goto v___jp_3908_;
}
}
}
else
{
lean_object* v___x_3944_; lean_object* v___x_3945_; 
lean_dec_ref_known(v_entry_3866_, 1);
lean_dec(v_hint_3858_);
lean_dec(v_mod_3856_);
v___x_3944_ = lean_box(0);
v___x_3945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
return v___x_3945_;
}
v___jp_3872_:
{
lean_object* v___x_3874_; lean_object* v_toEnvExtension_3875_; lean_object* v_env_3876_; lean_object* v_messages_3877_; lean_object* v_scopes_3878_; lean_object* v_usedQuotCtxts_3879_; lean_object* v_nextMacroScope_3880_; lean_object* v_maxRecDepth_3881_; lean_object* v_ngen_3882_; lean_object* v_auxDeclNGen_3883_; lean_object* v_infoState_3884_; lean_object* v_traceState_3885_; lean_object* v_snapshotTasks_3886_; lean_object* v_prevLinterStates_3887_; lean_object* v_codeQualityEntryTasks_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3900_; 
v___x_3874_ = lean_st_ref_take(v___y_3873_);
v_toEnvExtension_3875_ = lean_ctor_get(v___x_3869_, 0);
v_env_3876_ = lean_ctor_get(v___x_3874_, 0);
v_messages_3877_ = lean_ctor_get(v___x_3874_, 1);
v_scopes_3878_ = lean_ctor_get(v___x_3874_, 2);
v_usedQuotCtxts_3879_ = lean_ctor_get(v___x_3874_, 3);
v_nextMacroScope_3880_ = lean_ctor_get(v___x_3874_, 4);
v_maxRecDepth_3881_ = lean_ctor_get(v___x_3874_, 5);
v_ngen_3882_ = lean_ctor_get(v___x_3874_, 6);
v_auxDeclNGen_3883_ = lean_ctor_get(v___x_3874_, 7);
v_infoState_3884_ = lean_ctor_get(v___x_3874_, 8);
v_traceState_3885_ = lean_ctor_get(v___x_3874_, 9);
v_snapshotTasks_3886_ = lean_ctor_get(v___x_3874_, 10);
v_prevLinterStates_3887_ = lean_ctor_get(v___x_3874_, 11);
v_codeQualityEntryTasks_3888_ = lean_ctor_get(v___x_3874_, 12);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3890_ = v___x_3874_;
v_isShared_3891_ = v_isSharedCheck_3900_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_codeQualityEntryTasks_3888_);
lean_inc(v_prevLinterStates_3887_);
lean_inc(v_snapshotTasks_3886_);
lean_inc(v_traceState_3885_);
lean_inc(v_infoState_3884_);
lean_inc(v_auxDeclNGen_3883_);
lean_inc(v_ngen_3882_);
lean_inc(v_maxRecDepth_3881_);
lean_inc(v_nextMacroScope_3880_);
lean_inc(v_usedQuotCtxts_3879_);
lean_inc(v_scopes_3878_);
lean_inc(v_messages_3877_);
lean_inc(v_env_3876_);
lean_dec(v___x_3874_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3900_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v_asyncMode_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3896_; 
v_asyncMode_3892_ = lean_ctor_get(v_toEnvExtension_3875_, 2);
v___x_3893_ = lean_box(0);
v___x_3894_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3869_, v_env_3876_, v_entry_3866_, v_asyncMode_3892_, v___x_3871_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 0, v___x_3894_);
v___x_3896_ = v___x_3890_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v___x_3894_);
lean_ctor_set(v_reuseFailAlloc_3899_, 1, v_messages_3877_);
lean_ctor_set(v_reuseFailAlloc_3899_, 2, v_scopes_3878_);
lean_ctor_set(v_reuseFailAlloc_3899_, 3, v_usedQuotCtxts_3879_);
lean_ctor_set(v_reuseFailAlloc_3899_, 4, v_nextMacroScope_3880_);
lean_ctor_set(v_reuseFailAlloc_3899_, 5, v_maxRecDepth_3881_);
lean_ctor_set(v_reuseFailAlloc_3899_, 6, v_ngen_3882_);
lean_ctor_set(v_reuseFailAlloc_3899_, 7, v_auxDeclNGen_3883_);
lean_ctor_set(v_reuseFailAlloc_3899_, 8, v_infoState_3884_);
lean_ctor_set(v_reuseFailAlloc_3899_, 9, v_traceState_3885_);
lean_ctor_set(v_reuseFailAlloc_3899_, 10, v_snapshotTasks_3886_);
lean_ctor_set(v_reuseFailAlloc_3899_, 11, v_prevLinterStates_3887_);
lean_ctor_set(v_reuseFailAlloc_3899_, 12, v_codeQualityEntryTasks_3888_);
v___x_3896_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = lean_st_ref_put(v___y_3873_, v___x_3896_);
v___x_3898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3893_);
return v___x_3898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___boxed(lean_object* v_mod_3946_, lean_object* v_isMeta_3947_, lean_object* v_hint_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_){
_start:
{
uint8_t v_isMeta_boxed_3952_; lean_object* v_res_3953_; 
v_isMeta_boxed_3952_ = lean_unbox(v_isMeta_3947_);
v_res_3953_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_mod_3946_, v_isMeta_boxed_3952_, v_hint_3948_, v___y_3949_, v___y_3950_);
lean_dec(v___y_3950_);
lean_dec_ref(v___y_3949_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(lean_object* v___x_3954_, lean_object* v_declName_3955_, lean_object* v_as_3956_, size_t v_sz_3957_, size_t v_i_3958_, lean_object* v_b_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_){
_start:
{
uint8_t v___x_3963_; 
v___x_3963_ = lean_usize_dec_lt(v_i_3958_, v_sz_3957_);
if (v___x_3963_ == 0)
{
lean_object* v___x_3964_; 
lean_dec(v_declName_3955_);
v___x_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3964_, 0, v_b_3959_);
return v___x_3964_;
}
else
{
lean_object* v___x_3965_; lean_object* v_modules_3966_; lean_object* v___x_3967_; lean_object* v_a_3968_; lean_object* v___x_3969_; lean_object* v_toImport_3970_; lean_object* v_module_3971_; lean_object* v___x_3972_; uint8_t v___x_3973_; lean_object* v___x_3974_; 
v___x_3965_ = l_Lean_Environment_header(v___x_3954_);
v_modules_3966_ = lean_ctor_get(v___x_3965_, 3);
lean_inc_ref(v_modules_3966_);
lean_dec_ref(v___x_3965_);
v___x_3967_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3968_ = lean_array_uget_borrowed(v_as_3956_, v_i_3958_);
v___x_3969_ = lean_array_get(v___x_3967_, v_modules_3966_, v_a_3968_);
lean_dec_ref(v_modules_3966_);
v_toImport_3970_ = lean_ctor_get(v___x_3969_, 0);
lean_inc_ref(v_toImport_3970_);
lean_dec(v___x_3969_);
v_module_3971_ = lean_ctor_get(v_toImport_3970_, 0);
lean_inc(v_module_3971_);
lean_dec_ref(v_toImport_3970_);
v___x_3972_ = lean_box(0);
v___x_3973_ = 0;
lean_inc(v_declName_3955_);
v___x_3974_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_3971_, v___x_3973_, v_declName_3955_, v___y_3960_, v___y_3961_);
if (lean_obj_tag(v___x_3974_) == 0)
{
size_t v___x_3975_; size_t v___x_3976_; 
lean_dec_ref_known(v___x_3974_, 1);
v___x_3975_ = ((size_t)1ULL);
v___x_3976_ = lean_usize_add(v_i_3958_, v___x_3975_);
v_i_3958_ = v___x_3976_;
v_b_3959_ = v___x_3972_;
goto _start;
}
else
{
lean_dec(v_declName_3955_);
return v___x_3974_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55___boxed(lean_object* v___x_3978_, lean_object* v_declName_3979_, lean_object* v_as_3980_, lean_object* v_sz_3981_, lean_object* v_i_3982_, lean_object* v_b_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
size_t v_sz_boxed_3987_; size_t v_i_boxed_3988_; lean_object* v_res_3989_; 
v_sz_boxed_3987_ = lean_unbox_usize(v_sz_3981_);
lean_dec(v_sz_3981_);
v_i_boxed_3988_ = lean_unbox_usize(v_i_3982_);
lean_dec(v_i_3982_);
v_res_3989_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v___x_3978_, v_declName_3979_, v_as_3980_, v_sz_boxed_3987_, v_i_boxed_3988_, v_b_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec_ref(v_as_3980_);
lean_dec_ref(v___x_3978_);
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(lean_object* v_a_3990_, lean_object* v_x_3991_){
_start:
{
if (lean_obj_tag(v_x_3991_) == 0)
{
lean_object* v___x_3992_; 
v___x_3992_ = lean_box(0);
return v___x_3992_;
}
else
{
lean_object* v_key_3993_; lean_object* v_value_3994_; lean_object* v_tail_3995_; uint8_t v___x_3996_; 
v_key_3993_ = lean_ctor_get(v_x_3991_, 0);
v_value_3994_ = lean_ctor_get(v_x_3991_, 1);
v_tail_3995_ = lean_ctor_get(v_x_3991_, 2);
v___x_3996_ = lean_name_eq(v_key_3993_, v_a_3990_);
if (v___x_3996_ == 0)
{
v_x_3991_ = v_tail_3995_;
goto _start;
}
else
{
lean_object* v___x_3998_; 
lean_inc(v_value_3994_);
v___x_3998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3998_, 0, v_value_3994_);
return v___x_3998_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg___boxed(lean_object* v_a_3999_, lean_object* v_x_4000_){
_start:
{
lean_object* v_res_4001_; 
v_res_4001_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_3999_, v_x_4000_);
lean_dec(v_x_4000_);
lean_dec(v_a_3999_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(lean_object* v_m_4002_, lean_object* v_a_4003_){
_start:
{
lean_object* v_buckets_4004_; lean_object* v___x_4005_; uint64_t v___y_4007_; 
v_buckets_4004_ = lean_ctor_get(v_m_4002_, 1);
v___x_4005_ = lean_array_get_size(v_buckets_4004_);
if (lean_obj_tag(v_a_4003_) == 0)
{
uint64_t v___x_4021_; 
v___x_4021_ = 1723ULL;
v___y_4007_ = v___x_4021_;
goto v___jp_4006_;
}
else
{
uint64_t v_hash_4022_; 
v_hash_4022_ = lean_ctor_get_uint64(v_a_4003_, sizeof(void*)*2);
v___y_4007_ = v_hash_4022_;
goto v___jp_4006_;
}
v___jp_4006_:
{
uint64_t v___x_4008_; uint64_t v___x_4009_; uint64_t v_fold_4010_; uint64_t v___x_4011_; uint64_t v___x_4012_; uint64_t v___x_4013_; size_t v___x_4014_; size_t v___x_4015_; size_t v___x_4016_; size_t v___x_4017_; size_t v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; 
v___x_4008_ = 32ULL;
v___x_4009_ = lean_uint64_shift_right(v___y_4007_, v___x_4008_);
v_fold_4010_ = lean_uint64_xor(v___y_4007_, v___x_4009_);
v___x_4011_ = 16ULL;
v___x_4012_ = lean_uint64_shift_right(v_fold_4010_, v___x_4011_);
v___x_4013_ = lean_uint64_xor(v_fold_4010_, v___x_4012_);
v___x_4014_ = lean_uint64_to_usize(v___x_4013_);
v___x_4015_ = lean_usize_of_nat(v___x_4005_);
v___x_4016_ = ((size_t)1ULL);
v___x_4017_ = lean_usize_sub(v___x_4015_, v___x_4016_);
v___x_4018_ = lean_usize_land(v___x_4014_, v___x_4017_);
v___x_4019_ = lean_array_uget_borrowed(v_buckets_4004_, v___x_4018_);
v___x_4020_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_4003_, v___x_4019_);
return v___x_4020_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg___boxed(lean_object* v_m_4023_, lean_object* v_a_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_4023_, v_a_4024_);
lean_dec(v_a_4024_);
lean_dec_ref(v_m_4023_);
return v_res_4025_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0(void){
_start:
{
lean_object* v___x_4026_; 
v___x_4026_ = l_Std_HashMap_instInhabited___redArg();
return v___x_4026_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(lean_object* v_declName_4029_, uint8_t v_isMeta_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_){
_start:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v_env_4039_; lean_object* v___y_4041_; lean_object* v___x_4054_; 
v___x_4034_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__0);
v___x_4035_ = lean_st_ref_get(v___y_4032_);
v_env_4039_ = lean_ctor_get(v___x_4035_, 0);
lean_inc_ref(v_env_4039_);
lean_dec(v___x_4035_);
v___x_4054_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4039_, v_declName_4029_);
if (lean_obj_tag(v___x_4054_) == 0)
{
lean_dec_ref(v_env_4039_);
lean_dec(v_declName_4029_);
goto v___jp_4036_;
}
else
{
lean_object* v_val_4055_; lean_object* v___x_4056_; lean_object* v_modules_4057_; lean_object* v___x_4058_; uint8_t v___x_4059_; 
v_val_4055_ = lean_ctor_get(v___x_4054_, 0);
lean_inc(v_val_4055_);
lean_dec_ref_known(v___x_4054_, 1);
v___x_4056_ = l_Lean_Environment_header(v_env_4039_);
v_modules_4057_ = lean_ctor_get(v___x_4056_, 3);
lean_inc_ref(v_modules_4057_);
lean_dec_ref(v___x_4056_);
v___x_4058_ = lean_array_get_size(v_modules_4057_);
v___x_4059_ = lean_nat_dec_lt(v_val_4055_, v___x_4058_);
if (v___x_4059_ == 0)
{
lean_dec_ref(v_modules_4057_);
lean_dec(v_val_4055_);
lean_dec_ref(v_env_4039_);
lean_dec(v_declName_4029_);
goto v___jp_4036_;
}
else
{
lean_object* v___x_4060_; lean_object* v___x_4061_; uint8_t v___y_4063_; 
v___x_4060_ = lean_array_fget(v_modules_4057_, v_val_4055_);
lean_dec(v_val_4055_);
lean_dec_ref(v_modules_4057_);
v___x_4061_ = lean_st_ref_get(v___y_4032_);
if (v_isMeta_4030_ == 0)
{
lean_dec(v___x_4061_);
v___y_4063_ = v_isMeta_4030_;
goto v___jp_4062_;
}
else
{
lean_object* v_env_4074_; uint8_t v___x_4075_; 
v_env_4074_ = lean_ctor_get(v___x_4061_, 0);
lean_inc_ref(v_env_4074_);
lean_dec(v___x_4061_);
lean_inc(v_declName_4029_);
v___x_4075_ = l_Lean_isMarkedMeta(v_env_4074_, v_declName_4029_);
if (v___x_4075_ == 0)
{
v___y_4063_ = v_isMeta_4030_;
goto v___jp_4062_;
}
else
{
uint8_t v___x_4076_; 
v___x_4076_ = 0;
v___y_4063_ = v___x_4076_;
goto v___jp_4062_;
}
}
v___jp_4062_:
{
lean_object* v_toImport_4064_; lean_object* v_module_4065_; lean_object* v___x_4066_; 
v_toImport_4064_ = lean_ctor_get(v___x_4060_, 0);
lean_inc_ref(v_toImport_4064_);
lean_dec(v___x_4060_);
v_module_4065_ = lean_ctor_get(v_toImport_4064_, 0);
lean_inc(v_module_4065_);
lean_dec_ref(v_toImport_4064_);
lean_inc(v_declName_4029_);
v___x_4066_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54(v_module_4065_, v___y_4063_, v_declName_4029_, v___y_4031_, v___y_4032_);
if (lean_obj_tag(v___x_4066_) == 0)
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; 
lean_dec_ref_known(v___x_4066_, 1);
v___x_4067_ = l_Lean_indirectModUseExt;
v___x_4068_ = lean_box(1);
v___x_4069_ = lean_box(0);
lean_inc_ref(v_env_4039_);
v___x_4070_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_4034_, v___x_4067_, v_env_4039_, v___x_4068_, v___x_4069_);
v___x_4071_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v___x_4070_, v_declName_4029_);
lean_dec(v___x_4070_);
if (lean_obj_tag(v___x_4071_) == 0)
{
lean_object* v___x_4072_; 
v___x_4072_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___closed__1));
v___y_4041_ = v___x_4072_;
goto v___jp_4040_;
}
else
{
lean_object* v_val_4073_; 
v_val_4073_ = lean_ctor_get(v___x_4071_, 0);
lean_inc(v_val_4073_);
lean_dec_ref_known(v___x_4071_, 1);
v___y_4041_ = v_val_4073_;
goto v___jp_4040_;
}
}
else
{
lean_dec_ref(v_env_4039_);
lean_dec(v_declName_4029_);
return v___x_4066_;
}
}
}
}
v___jp_4036_:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = lean_box(0);
v___x_4038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4037_);
return v___x_4038_;
}
v___jp_4040_:
{
lean_object* v___x_4042_; size_t v_sz_4043_; size_t v___x_4044_; lean_object* v___x_4045_; 
v___x_4042_ = lean_box(0);
v_sz_4043_ = lean_array_size(v___y_4041_);
v___x_4044_ = ((size_t)0ULL);
v___x_4045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__55(v_env_4039_, v_declName_4029_, v___y_4041_, v_sz_4043_, v___x_4044_, v___x_4042_, v___y_4031_, v___y_4032_);
lean_dec_ref(v___y_4041_);
lean_dec_ref(v_env_4039_);
if (lean_obj_tag(v___x_4045_) == 0)
{
lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4052_; 
v_isSharedCheck_4052_ = !lean_is_exclusive(v___x_4045_);
if (v_isSharedCheck_4052_ == 0)
{
lean_object* v_unused_4053_; 
v_unused_4053_ = lean_ctor_get(v___x_4045_, 0);
lean_dec(v_unused_4053_);
v___x_4047_ = v___x_4045_;
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
else
{
lean_dec(v___x_4045_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4052_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v___x_4050_; 
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 0, v___x_4042_);
v___x_4050_ = v___x_4047_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4042_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
}
else
{
return v___x_4045_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41___boxed(lean_object* v_declName_4077_, lean_object* v_isMeta_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
uint8_t v_isMeta_boxed_4082_; lean_object* v_res_4083_; 
v_isMeta_boxed_4082_ = lean_unbox(v_isMeta_4078_);
v_res_4083_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_declName_4077_, v_isMeta_boxed_4082_, v___y_4079_, v___y_4080_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(lean_object* v_currNamespace_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_){
_start:
{
lean_object* v___x_4087_; 
v___x_4087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4087_, 0, v_currNamespace_4084_);
lean_ctor_set(v___x_4087_, 1, v___y_4086_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed(lean_object* v_currNamespace_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_){
_start:
{
lean_object* v_res_4091_; 
v_res_4091_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2(v_currNamespace_4088_, v___y_4089_, v___y_4090_);
lean_dec_ref(v___y_4089_);
return v_res_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(lean_object* v_env_4092_, lean_object* v_declName_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
uint8_t v___x_4096_; lean_object* v_env_4097_; lean_object* v___x_4098_; uint8_t v___x_4099_; uint8_t v___x_4100_; 
v___x_4096_ = 0;
v_env_4097_ = l_Lean_Environment_setExporting(v_env_4092_, v___x_4096_);
lean_inc(v_declName_4093_);
v___x_4098_ = l_Lean_mkPrivateName(v_env_4097_, v_declName_4093_);
v___x_4099_ = 1;
lean_inc_ref(v_env_4097_);
v___x_4100_ = l_Lean_Environment_contains(v_env_4097_, v___x_4098_, v___x_4099_);
if (v___x_4100_ == 0)
{
lean_object* v___x_4101_; uint8_t v___x_4102_; lean_object* v___x_4103_; lean_object* v___x_4104_; 
v___x_4101_ = l_Lean_privateToUserName(v_declName_4093_);
v___x_4102_ = l_Lean_Environment_contains(v_env_4097_, v___x_4101_, v___x_4099_);
v___x_4103_ = lean_box(v___x_4102_);
v___x_4104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4104_, 0, v___x_4103_);
lean_ctor_set(v___x_4104_, 1, v___y_4095_);
return v___x_4104_;
}
else
{
lean_object* v___x_4105_; lean_object* v___x_4106_; 
lean_dec_ref(v_env_4097_);
lean_dec(v_declName_4093_);
v___x_4105_ = lean_box(v___x_4100_);
v___x_4106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
lean_ctor_set(v___x_4106_, 1, v___y_4095_);
return v___x_4106_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed(lean_object* v_env_4107_, lean_object* v_declName_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_){
_start:
{
lean_object* v_res_4111_; 
v_res_4111_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0(v_env_4107_, v_declName_4108_, v___y_4109_, v___y_4110_);
lean_dec_ref(v___y_4109_);
return v_res_4111_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0(void){
_start:
{
lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; 
v___x_4112_ = lean_box(0);
v___x_4113_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_4114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4114_, 0, v___x_4113_);
lean_ctor_set(v___x_4114_, 1, v___x_4112_);
return v___x_4114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg(){
_start:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; 
v___x_4116_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___closed__0);
v___x_4117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4116_);
return v___x_4117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg___boxed(lean_object* v___y_4118_){
_start:
{
lean_object* v_res_4119_; 
v_res_4119_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v_res_4119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(lean_object* v_env_4120_, lean_object* v_opts_4121_, lean_object* v_currNamespace_4122_, lean_object* v_openDecls_4123_, lean_object* v_n_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_){
_start:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; 
v___x_4127_ = l_Lean_ResolveName_resolveGlobalName(v_env_4120_, v_opts_4121_, v_currNamespace_4122_, v_openDecls_4123_, v_n_4124_);
v___x_4128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4128_, 0, v___x_4127_);
lean_ctor_set(v___x_4128_, 1, v___y_4126_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed(lean_object* v_env_4129_, lean_object* v_opts_4130_, lean_object* v_currNamespace_4131_, lean_object* v_openDecls_4132_, lean_object* v_n_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_){
_start:
{
lean_object* v_res_4136_; 
v_res_4136_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4(v_env_4129_, v_opts_4130_, v_currNamespace_4131_, v_openDecls_4132_, v_n_4133_, v___y_4134_, v___y_4135_);
lean_dec_ref(v___y_4134_);
lean_dec_ref(v_opts_4130_);
return v_res_4136_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(lean_object* v_as_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_){
_start:
{
if (lean_obj_tag(v_as_4137_) == 0)
{
lean_object* v___x_4141_; lean_object* v___x_4142_; 
v___x_4141_ = lean_box(0);
v___x_4142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4142_, 0, v___x_4141_);
return v___x_4142_;
}
else
{
lean_object* v_head_4143_; lean_object* v_tail_4144_; lean_object* v_fst_4145_; lean_object* v_snd_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v_scopes_4151_; lean_object* v___x_4152_; lean_object* v_opts_4153_; uint8_t v_hasTrace_4154_; 
v_head_4143_ = lean_ctor_get(v_as_4137_, 0);
lean_inc(v_head_4143_);
v_tail_4144_ = lean_ctor_get(v_as_4137_, 1);
lean_inc(v_tail_4144_);
lean_dec_ref_known(v_as_4137_, 2);
v_fst_4145_ = lean_ctor_get(v_head_4143_, 0);
lean_inc(v_fst_4145_);
v_snd_4146_ = lean_ctor_get(v_head_4143_, 1);
lean_inc(v_snd_4146_);
lean_dec(v_head_4143_);
v___x_4147_ = l_Lean_inheritedTraceOptions;
v___x_4148_ = lean_st_ref_get(v___x_4147_);
v___x_4149_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4150_ = lean_st_ref_get(v___y_4139_);
v_scopes_4151_ = lean_ctor_get(v___x_4150_, 2);
lean_inc(v_scopes_4151_);
lean_dec(v___x_4150_);
v___x_4152_ = l_List_head_x21___redArg(v___x_4149_, v_scopes_4151_);
lean_dec(v_scopes_4151_);
v_opts_4153_ = lean_ctor_get(v___x_4152_, 1);
lean_inc_ref(v_opts_4153_);
lean_dec(v___x_4152_);
v_hasTrace_4154_ = lean_ctor_get_uint8(v_opts_4153_, sizeof(void*)*1);
if (v_hasTrace_4154_ == 0)
{
lean_dec_ref(v_opts_4153_);
lean_dec(v___x_4148_);
lean_dec(v_snd_4146_);
lean_dec(v_fst_4145_);
v_as_4137_ = v_tail_4144_;
goto _start;
}
else
{
lean_object* v___x_4156_; lean_object* v___x_4157_; uint8_t v___x_4158_; 
v___x_4156_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54___closed__8));
lean_inc(v_fst_4145_);
v___x_4157_ = l_Lean_Name_append(v___x_4156_, v_fst_4145_);
v___x_4158_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_4148_, v_opts_4153_, v___x_4157_);
lean_dec(v___x_4157_);
lean_dec_ref(v_opts_4153_);
lean_dec(v___x_4148_);
if (v___x_4158_ == 0)
{
lean_dec(v_snd_4146_);
lean_dec(v_fst_4145_);
v_as_4137_ = v_tail_4144_;
goto _start;
}
else
{
lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; 
v___x_4160_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4160_, 0, v_snd_4146_);
v___x_4161_ = l_Lean_MessageData_ofFormat(v___x_4160_);
v___x_4162_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__47(v_fst_4145_, v___x_4161_, v___y_4138_, v___y_4139_);
if (lean_obj_tag(v___x_4162_) == 0)
{
lean_dec_ref_known(v___x_4162_, 1);
v_as_4137_ = v_tail_4144_;
goto _start;
}
else
{
lean_dec(v_tail_4144_);
return v___x_4162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50___boxed(lean_object* v_as_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v_res_4168_; 
v_res_4168_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v_as_4164_, v___y_4165_, v___y_4166_);
lean_dec(v___y_4166_);
lean_dec_ref(v___y_4165_);
return v_res_4168_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(lean_object* v_x_4169_, lean_object* v___y_4170_){
_start:
{
if (lean_obj_tag(v_x_4169_) == 0)
{
lean_object* v_a_4171_; lean_object* v___x_4172_; 
v_a_4171_ = lean_ctor_get(v_x_4169_, 0);
lean_inc(v_a_4171_);
v___x_4172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4172_, 0, v_a_4171_);
lean_ctor_set(v___x_4172_, 1, v___y_4170_);
return v___x_4172_;
}
else
{
lean_object* v_a_4173_; lean_object* v___x_4174_; 
v_a_4173_ = lean_ctor_get(v_x_4169_, 0);
lean_inc(v_a_4173_);
v___x_4174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4174_, 0, v_a_4173_);
lean_ctor_set(v___x_4174_, 1, v___y_4170_);
return v___x_4174_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg___boxed(lean_object* v_x_4175_, lean_object* v___y_4176_){
_start:
{
lean_object* v_res_4177_; 
v_res_4177_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_4175_, v___y_4176_);
lean_dec_ref(v_x_4175_);
return v_res_4177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(lean_object* v_env_4178_, lean_object* v_stx_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_){
_start:
{
lean_object* v___x_4182_; 
v___x_4182_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_4178_, v_stx_4179_, v___y_4180_, v___y_4181_);
if (lean_obj_tag(v___x_4182_) == 0)
{
lean_object* v_a_4183_; 
v_a_4183_ = lean_ctor_get(v___x_4182_, 0);
lean_inc(v_a_4183_);
if (lean_obj_tag(v_a_4183_) == 0)
{
lean_object* v_a_4184_; lean_object* v___x_4186_; uint8_t v_isShared_4187_; uint8_t v_isSharedCheck_4192_; 
v_a_4184_ = lean_ctor_get(v___x_4182_, 1);
v_isSharedCheck_4192_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4192_ == 0)
{
lean_object* v_unused_4193_; 
v_unused_4193_ = lean_ctor_get(v___x_4182_, 0);
lean_dec(v_unused_4193_);
v___x_4186_ = v___x_4182_;
v_isShared_4187_ = v_isSharedCheck_4192_;
goto v_resetjp_4185_;
}
else
{
lean_inc(v_a_4184_);
lean_dec(v___x_4182_);
v___x_4186_ = lean_box(0);
v_isShared_4187_ = v_isSharedCheck_4192_;
goto v_resetjp_4185_;
}
v_resetjp_4185_:
{
lean_object* v___x_4188_; lean_object* v___x_4190_; 
v___x_4188_ = lean_box(0);
if (v_isShared_4187_ == 0)
{
lean_ctor_set(v___x_4186_, 0, v___x_4188_);
v___x_4190_ = v___x_4186_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v___x_4188_);
lean_ctor_set(v_reuseFailAlloc_4191_, 1, v_a_4184_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
}
else
{
lean_object* v_val_4194_; lean_object* v___x_4196_; uint8_t v_isShared_4197_; uint8_t v_isSharedCheck_4222_; 
v_val_4194_ = lean_ctor_get(v_a_4183_, 0);
v_isSharedCheck_4222_ = !lean_is_exclusive(v_a_4183_);
if (v_isSharedCheck_4222_ == 0)
{
v___x_4196_ = v_a_4183_;
v_isShared_4197_ = v_isSharedCheck_4222_;
goto v_resetjp_4195_;
}
else
{
lean_inc(v_val_4194_);
lean_dec(v_a_4183_);
v___x_4196_ = lean_box(0);
v_isShared_4197_ = v_isSharedCheck_4222_;
goto v_resetjp_4195_;
}
v_resetjp_4195_:
{
lean_object* v_snd_4198_; 
v_snd_4198_ = lean_ctor_get(v_val_4194_, 1);
lean_inc(v_snd_4198_);
lean_dec(v_val_4194_);
if (lean_obj_tag(v_snd_4198_) == 0)
{
lean_object* v_a_4199_; lean_object* v_a_4200_; lean_object* v___x_4202_; uint8_t v_isShared_4203_; uint8_t v_isSharedCheck_4208_; 
lean_del_object(v___x_4196_);
v_a_4199_ = lean_ctor_get(v___x_4182_, 1);
lean_inc(v_a_4199_);
lean_dec_ref_known(v___x_4182_, 2);
v_a_4200_ = lean_ctor_get(v_snd_4198_, 0);
v_isSharedCheck_4208_ = !lean_is_exclusive(v_snd_4198_);
if (v_isSharedCheck_4208_ == 0)
{
v___x_4202_ = v_snd_4198_;
v_isShared_4203_ = v_isSharedCheck_4208_;
goto v_resetjp_4201_;
}
else
{
lean_inc(v_a_4200_);
lean_dec(v_snd_4198_);
v___x_4202_ = lean_box(0);
v_isShared_4203_ = v_isSharedCheck_4208_;
goto v_resetjp_4201_;
}
v_resetjp_4201_:
{
lean_object* v___x_4205_; 
if (v_isShared_4203_ == 0)
{
v___x_4205_ = v___x_4202_;
goto v_reusejp_4204_;
}
else
{
lean_object* v_reuseFailAlloc_4207_; 
v_reuseFailAlloc_4207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4207_, 0, v_a_4200_);
v___x_4205_ = v_reuseFailAlloc_4207_;
goto v_reusejp_4204_;
}
v_reusejp_4204_:
{
lean_object* v___x_4206_; 
v___x_4206_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4205_, v_a_4199_);
lean_dec_ref(v___x_4205_);
return v___x_4206_;
}
}
}
else
{
lean_object* v_a_4209_; lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4221_; 
v_a_4209_ = lean_ctor_get(v___x_4182_, 1);
lean_inc(v_a_4209_);
lean_dec_ref_known(v___x_4182_, 2);
v_a_4210_ = lean_ctor_get(v_snd_4198_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v_snd_4198_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4212_ = v_snd_4198_;
v_isShared_4213_ = v_isSharedCheck_4221_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v_snd_4198_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4221_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4215_; 
if (v_isShared_4197_ == 0)
{
lean_ctor_set(v___x_4196_, 0, v_a_4210_);
v___x_4215_ = v___x_4196_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_a_4210_);
v___x_4215_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
lean_object* v___x_4217_; 
if (v_isShared_4213_ == 0)
{
lean_ctor_set(v___x_4212_, 0, v___x_4215_);
v___x_4217_ = v___x_4212_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4219_; 
v_reuseFailAlloc_4219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4219_, 0, v___x_4215_);
v___x_4217_ = v_reuseFailAlloc_4219_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
lean_object* v___x_4218_; 
v___x_4218_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v___x_4217_, v_a_4209_);
lean_dec_ref(v___x_4217_);
return v___x_4218_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4223_; lean_object* v_a_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4231_; 
v_a_4223_ = lean_ctor_get(v___x_4182_, 0);
v_a_4224_ = lean_ctor_get(v___x_4182_, 1);
v_isSharedCheck_4231_ = !lean_is_exclusive(v___x_4182_);
if (v_isSharedCheck_4231_ == 0)
{
v___x_4226_ = v___x_4182_;
v_isShared_4227_ = v_isSharedCheck_4231_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_a_4224_);
lean_inc(v_a_4223_);
lean_dec(v___x_4182_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4231_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v___x_4229_; 
if (v_isShared_4227_ == 0)
{
v___x_4229_ = v___x_4226_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v_a_4223_);
lean_ctor_set(v_reuseFailAlloc_4230_, 1, v_a_4224_);
v___x_4229_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
return v___x_4229_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed(lean_object* v_env_4232_, lean_object* v_stx_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_){
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1(v_env_4232_, v_stx_4233_, v___y_4234_, v___y_4235_);
lean_dec_ref(v___y_4234_);
return v_res_4236_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3(void){
_start:
{
lean_object* v___x_4242_; lean_object* v___x_4243_; 
v___x_4242_ = l_Lean_maxRecDepthErrorMessage;
v___x_4243_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4243_, 0, v___x_4242_);
return v___x_4243_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4(void){
_start:
{
lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4244_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__3);
v___x_4245_ = l_Lean_MessageData_ofFormat(v___x_4244_);
return v___x_4245_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5(void){
_start:
{
lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v___x_4246_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__4);
v___x_4247_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__2));
v___x_4248_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4248_, 0, v___x_4247_);
lean_ctor_set(v___x_4248_, 1, v___x_4246_);
return v___x_4248_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(lean_object* v_ref_4249_){
_start:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; lean_object* v___x_4253_; 
v___x_4251_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___closed__5);
v___x_4252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4252_, 0, v_ref_4249_);
lean_ctor_set(v___x_4252_, 1, v___x_4251_);
v___x_4253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4253_, 0, v___x_4252_);
return v___x_4253_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg___boxed(lean_object* v_ref_4254_, lean_object* v___y_4255_){
_start:
{
lean_object* v_res_4256_; 
v_res_4256_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_4254_);
return v_res_4256_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(lean_object* v_as_x27_4257_, lean_object* v_b_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_){
_start:
{
if (lean_obj_tag(v_as_x27_4257_) == 0)
{
lean_object* v___x_4262_; 
v___x_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4262_, 0, v_b_4258_);
return v___x_4262_;
}
else
{
lean_object* v_head_4263_; lean_object* v_tail_4264_; lean_object* v___x_4265_; uint8_t v___x_4266_; lean_object* v___x_4267_; 
v_head_4263_ = lean_ctor_get(v_as_x27_4257_, 0);
v_tail_4264_ = lean_ctor_get(v_as_x27_4257_, 1);
v___x_4265_ = lean_box(0);
v___x_4266_ = 1;
lean_inc(v_head_4263_);
v___x_4267_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v_head_4263_, v___x_4266_, v___y_4259_, v___y_4260_);
if (lean_obj_tag(v___x_4267_) == 0)
{
lean_dec_ref_known(v___x_4267_, 1);
v_as_x27_4257_ = v_tail_4264_;
v_b_4258_ = v___x_4265_;
goto _start;
}
else
{
return v___x_4267_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg___boxed(lean_object* v_as_x27_4269_, lean_object* v_b_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_, lean_object* v___y_4273_){
_start:
{
lean_object* v_res_4274_; 
v_res_4274_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_4269_, v_b_4270_, v___y_4271_, v___y_4272_);
lean_dec(v___y_4272_);
lean_dec_ref(v___y_4271_);
lean_dec(v_as_x27_4269_);
return v_res_4274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(lean_object* v_env_4275_, lean_object* v_currNamespace_4276_, lean_object* v_openDecls_4277_, lean_object* v_n_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_){
_start:
{
lean_object* v___x_4281_; lean_object* v___x_4282_; 
v___x_4281_ = l_Lean_ResolveName_resolveNamespace(v_env_4275_, v_currNamespace_4276_, v_openDecls_4277_, v_n_4278_);
v___x_4282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4281_);
lean_ctor_set(v___x_4282_, 1, v___y_4280_);
return v___x_4282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed(lean_object* v_env_4283_, lean_object* v_currNamespace_4284_, lean_object* v_openDecls_4285_, lean_object* v_n_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3(v_env_4283_, v_currNamespace_4284_, v_openDecls_4285_, v_n_4286_, v___y_4287_, v___y_4288_);
lean_dec_ref(v___y_4287_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(lean_object* v_x_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
lean_object* v___x_4295_; lean_object* v_env_4296_; lean_object* v___f_4297_; lean_object* v___f_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v_scopes_4301_; lean_object* v___x_4302_; lean_object* v_opts_4303_; lean_object* v___x_4304_; 
v___x_4295_ = lean_st_ref_get(v___y_4293_);
v_env_4296_ = lean_ctor_get(v___x_4295_, 0);
lean_inc_ref_n(v_env_4296_, 3);
lean_dec(v___x_4295_);
v___f_4297_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_4297_, 0, v_env_4296_);
v___f_4298_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_4298_, 0, v_env_4296_);
v___x_4299_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4300_ = lean_st_ref_get(v___y_4293_);
v_scopes_4301_ = lean_ctor_get(v___x_4300_, 2);
lean_inc(v_scopes_4301_);
lean_dec(v___x_4300_);
v___x_4302_ = l_List_head_x21___redArg(v___x_4299_, v_scopes_4301_);
lean_dec(v_scopes_4301_);
v_opts_4303_ = lean_ctor_get(v___x_4302_, 1);
lean_inc_ref(v_opts_4303_);
lean_dec(v___x_4302_);
v___x_4304_ = l_Lean_Elab_Command_getScope___redArg(v___y_4293_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v_currNamespace_4306_; lean_object* v___f_4307_; lean_object* v___x_4308_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
lean_inc(v_a_4305_);
lean_dec_ref_known(v___x_4304_, 1);
v_currNamespace_4306_ = lean_ctor_get(v_a_4305_, 2);
lean_inc_n(v_currNamespace_4306_, 2);
lean_dec(v_a_4305_);
v___f_4307_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4307_, 0, v_currNamespace_4306_);
v___x_4308_ = l_Lean_Elab_Command_getScope___redArg(v___y_4293_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_object* v_a_4309_; lean_object* v_openDecls_4310_; lean_object* v___f_4311_; lean_object* v___f_4312_; lean_object* v_methods_4313_; lean_object* v___x_4314_; 
v_a_4309_ = lean_ctor_get(v___x_4308_, 0);
lean_inc(v_a_4309_);
lean_dec_ref_known(v___x_4308_, 1);
v_openDecls_4310_ = lean_ctor_get(v_a_4309_, 3);
lean_inc_n(v_openDecls_4310_, 2);
lean_dec(v_a_4309_);
lean_inc(v_currNamespace_4306_);
lean_inc_ref(v_env_4296_);
v___f_4311_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__3___boxed), 6, 3);
lean_closure_set(v___f_4311_, 0, v_env_4296_);
lean_closure_set(v___f_4311_, 1, v_currNamespace_4306_);
lean_closure_set(v___f_4311_, 2, v_openDecls_4310_);
v___f_4312_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_4312_, 0, v_env_4296_);
lean_closure_set(v___f_4312_, 1, v_opts_4303_);
lean_closure_set(v___f_4312_, 2, v_currNamespace_4306_);
lean_closure_set(v___f_4312_, 3, v_openDecls_4310_);
v_methods_4313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_4313_, 0, v___f_4298_);
lean_ctor_set(v_methods_4313_, 1, v___f_4307_);
lean_ctor_set(v_methods_4313_, 2, v___f_4297_);
lean_ctor_set(v_methods_4313_, 3, v___f_4311_);
lean_ctor_set(v_methods_4313_, 4, v___f_4312_);
v___x_4314_ = l_Lean_Elab_Command_getRef___redArg(v___y_4292_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v___x_4316_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref_known(v___x_4314_, 1);
v___x_4316_ = l_Lean_Elab_Command_getCurrMacroScope___redArg(v___y_4292_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v_a_4317_; lean_object* v_currRecDepth_4318_; lean_object* v_quotContext_x3f_4319_; lean_object* v_a_4321_; 
v_a_4317_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_a_4317_);
lean_dec_ref_known(v___x_4316_, 1);
v_currRecDepth_4318_ = lean_ctor_get(v___y_4292_, 2);
v_quotContext_x3f_4319_ = lean_ctor_get(v___y_4292_, 5);
if (lean_obj_tag(v_quotContext_x3f_4319_) == 0)
{
lean_object* v___x_4395_; lean_object* v_a_4396_; 
v___x_4395_ = l_Lean_getMainModule___at___00Lean_Elab_Command_elabNewtype_spec__14___redArg(v___y_4293_);
v_a_4396_ = lean_ctor_get(v___x_4395_, 0);
lean_inc(v_a_4396_);
lean_dec_ref(v___x_4395_);
v_a_4321_ = v_a_4396_;
goto v___jp_4320_;
}
else
{
lean_object* v_val_4397_; 
v_val_4397_ = lean_ctor_get(v_quotContext_x3f_4319_, 0);
lean_inc(v_val_4397_);
v_a_4321_ = v_val_4397_;
goto v___jp_4320_;
}
v___jp_4320_:
{
lean_object* v___x_4322_; lean_object* v_maxRecDepth_4323_; lean_object* v___x_4324_; lean_object* v_nextMacroScope_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; 
v___x_4322_ = lean_st_ref_get(v___y_4293_);
v_maxRecDepth_4323_ = lean_ctor_get(v___x_4322_, 5);
lean_inc(v_maxRecDepth_4323_);
lean_dec(v___x_4322_);
v___x_4324_ = lean_st_ref_get(v___y_4293_);
v_nextMacroScope_4325_ = lean_ctor_get(v___x_4324_, 4);
lean_inc(v_nextMacroScope_4325_);
lean_dec(v___x_4324_);
lean_inc(v_currRecDepth_4318_);
v___x_4326_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4326_, 0, v_methods_4313_);
lean_ctor_set(v___x_4326_, 1, v_a_4321_);
lean_ctor_set(v___x_4326_, 2, v_a_4317_);
lean_ctor_set(v___x_4326_, 3, v_currRecDepth_4318_);
lean_ctor_set(v___x_4326_, 4, v_maxRecDepth_4323_);
lean_ctor_set(v___x_4326_, 5, v_a_4315_);
v___x_4327_ = lean_box(0);
v___x_4328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4328_, 0, v_nextMacroScope_4325_);
lean_ctor_set(v___x_4328_, 1, v___x_4327_);
lean_ctor_set(v___x_4328_, 2, v___x_4327_);
v___x_4329_ = lean_apply_2(v_x_4291_, v___x_4326_, v___x_4328_);
if (lean_obj_tag(v___x_4329_) == 0)
{
lean_object* v_a_4330_; lean_object* v_a_4331_; lean_object* v_macroScope_4332_; lean_object* v_traceMsgs_4333_; lean_object* v_expandedMacroDecls_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; 
v_a_4330_ = lean_ctor_get(v___x_4329_, 1);
lean_inc(v_a_4330_);
v_a_4331_ = lean_ctor_get(v___x_4329_, 0);
lean_inc(v_a_4331_);
lean_dec_ref_known(v___x_4329_, 2);
v_macroScope_4332_ = lean_ctor_get(v_a_4330_, 0);
lean_inc(v_macroScope_4332_);
v_traceMsgs_4333_ = lean_ctor_get(v_a_4330_, 1);
lean_inc(v_traceMsgs_4333_);
v_expandedMacroDecls_4334_ = lean_ctor_get(v_a_4330_, 2);
lean_inc(v_expandedMacroDecls_4334_);
lean_dec(v_a_4330_);
v___x_4335_ = lean_box(0);
v___x_4336_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_expandedMacroDecls_4334_, v___x_4335_, v___y_4292_, v___y_4293_);
lean_dec(v_expandedMacroDecls_4334_);
if (lean_obj_tag(v___x_4336_) == 0)
{
lean_object* v___x_4337_; lean_object* v_env_4338_; lean_object* v_messages_4339_; lean_object* v_scopes_4340_; lean_object* v_usedQuotCtxts_4341_; lean_object* v_maxRecDepth_4342_; lean_object* v_ngen_4343_; lean_object* v_auxDeclNGen_4344_; lean_object* v_infoState_4345_; lean_object* v_traceState_4346_; lean_object* v_snapshotTasks_4347_; lean_object* v_prevLinterStates_4348_; lean_object* v_codeQualityEntryTasks_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4375_; 
lean_dec_ref_known(v___x_4336_, 1);
v___x_4337_ = lean_st_ref_take(v___y_4293_);
v_env_4338_ = lean_ctor_get(v___x_4337_, 0);
v_messages_4339_ = lean_ctor_get(v___x_4337_, 1);
v_scopes_4340_ = lean_ctor_get(v___x_4337_, 2);
v_usedQuotCtxts_4341_ = lean_ctor_get(v___x_4337_, 3);
v_maxRecDepth_4342_ = lean_ctor_get(v___x_4337_, 5);
v_ngen_4343_ = lean_ctor_get(v___x_4337_, 6);
v_auxDeclNGen_4344_ = lean_ctor_get(v___x_4337_, 7);
v_infoState_4345_ = lean_ctor_get(v___x_4337_, 8);
v_traceState_4346_ = lean_ctor_get(v___x_4337_, 9);
v_snapshotTasks_4347_ = lean_ctor_get(v___x_4337_, 10);
v_prevLinterStates_4348_ = lean_ctor_get(v___x_4337_, 11);
v_codeQualityEntryTasks_4349_ = lean_ctor_get(v___x_4337_, 12);
v_isSharedCheck_4375_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4375_ == 0)
{
lean_object* v_unused_4376_; 
v_unused_4376_ = lean_ctor_get(v___x_4337_, 4);
lean_dec(v_unused_4376_);
v___x_4351_ = v___x_4337_;
v_isShared_4352_ = v_isSharedCheck_4375_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_codeQualityEntryTasks_4349_);
lean_inc(v_prevLinterStates_4348_);
lean_inc(v_snapshotTasks_4347_);
lean_inc(v_traceState_4346_);
lean_inc(v_infoState_4345_);
lean_inc(v_auxDeclNGen_4344_);
lean_inc(v_ngen_4343_);
lean_inc(v_maxRecDepth_4342_);
lean_inc(v_usedQuotCtxts_4341_);
lean_inc(v_scopes_4340_);
lean_inc(v_messages_4339_);
lean_inc(v_env_4338_);
lean_dec(v___x_4337_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4375_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___x_4354_; 
if (v_isShared_4352_ == 0)
{
lean_ctor_set(v___x_4351_, 4, v_macroScope_4332_);
v___x_4354_ = v___x_4351_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4374_; 
v_reuseFailAlloc_4374_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_4374_, 0, v_env_4338_);
lean_ctor_set(v_reuseFailAlloc_4374_, 1, v_messages_4339_);
lean_ctor_set(v_reuseFailAlloc_4374_, 2, v_scopes_4340_);
lean_ctor_set(v_reuseFailAlloc_4374_, 3, v_usedQuotCtxts_4341_);
lean_ctor_set(v_reuseFailAlloc_4374_, 4, v_macroScope_4332_);
lean_ctor_set(v_reuseFailAlloc_4374_, 5, v_maxRecDepth_4342_);
lean_ctor_set(v_reuseFailAlloc_4374_, 6, v_ngen_4343_);
lean_ctor_set(v_reuseFailAlloc_4374_, 7, v_auxDeclNGen_4344_);
lean_ctor_set(v_reuseFailAlloc_4374_, 8, v_infoState_4345_);
lean_ctor_set(v_reuseFailAlloc_4374_, 9, v_traceState_4346_);
lean_ctor_set(v_reuseFailAlloc_4374_, 10, v_snapshotTasks_4347_);
lean_ctor_set(v_reuseFailAlloc_4374_, 11, v_prevLinterStates_4348_);
lean_ctor_set(v_reuseFailAlloc_4374_, 12, v_codeQualityEntryTasks_4349_);
v___x_4354_ = v_reuseFailAlloc_4374_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v___x_4355_ = lean_st_ref_put(v___y_4293_, v___x_4354_);
v___x_4356_ = l_List_reverse___redArg(v_traceMsgs_4333_);
v___x_4357_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__50(v___x_4356_, v___y_4292_, v___y_4293_);
if (lean_obj_tag(v___x_4357_) == 0)
{
lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4364_; 
v_isSharedCheck_4364_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4364_ == 0)
{
lean_object* v_unused_4365_; 
v_unused_4365_ = lean_ctor_get(v___x_4357_, 0);
lean_dec(v_unused_4365_);
v___x_4359_ = v___x_4357_;
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
else
{
lean_dec(v___x_4357_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4364_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4362_; 
if (v_isShared_4360_ == 0)
{
lean_ctor_set(v___x_4359_, 0, v_a_4331_);
v___x_4362_ = v___x_4359_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4363_; 
v_reuseFailAlloc_4363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4363_, 0, v_a_4331_);
v___x_4362_ = v_reuseFailAlloc_4363_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
return v___x_4362_;
}
}
}
else
{
lean_object* v_a_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4373_; 
lean_dec(v_a_4331_);
v_a_4366_ = lean_ctor_get(v___x_4357_, 0);
v_isSharedCheck_4373_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4373_ == 0)
{
v___x_4368_ = v___x_4357_;
v_isShared_4369_ = v_isSharedCheck_4373_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_a_4366_);
lean_dec(v___x_4357_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4373_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v___x_4371_; 
if (v_isShared_4369_ == 0)
{
v___x_4371_ = v___x_4368_;
goto v_reusejp_4370_;
}
else
{
lean_object* v_reuseFailAlloc_4372_; 
v_reuseFailAlloc_4372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4372_, 0, v_a_4366_);
v___x_4371_ = v_reuseFailAlloc_4372_;
goto v_reusejp_4370_;
}
v_reusejp_4370_:
{
return v___x_4371_;
}
}
}
}
}
}
else
{
lean_object* v_a_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4384_; 
lean_dec(v_traceMsgs_4333_);
lean_dec(v_macroScope_4332_);
lean_dec(v_a_4331_);
v_a_4377_ = lean_ctor_get(v___x_4336_, 0);
v_isSharedCheck_4384_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4384_ == 0)
{
v___x_4379_ = v___x_4336_;
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_a_4377_);
lean_dec(v___x_4336_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4384_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v___x_4382_; 
if (v_isShared_4380_ == 0)
{
v___x_4382_ = v___x_4379_;
goto v_reusejp_4381_;
}
else
{
lean_object* v_reuseFailAlloc_4383_; 
v_reuseFailAlloc_4383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4383_, 0, v_a_4377_);
v___x_4382_ = v_reuseFailAlloc_4383_;
goto v_reusejp_4381_;
}
v_reusejp_4381_:
{
return v___x_4382_;
}
}
}
}
else
{
lean_object* v_a_4385_; 
v_a_4385_ = lean_ctor_get(v___x_4329_, 0);
lean_inc(v_a_4385_);
lean_dec_ref_known(v___x_4329_, 2);
if (lean_obj_tag(v_a_4385_) == 0)
{
lean_object* v_a_4386_; lean_object* v_a_4387_; lean_object* v___x_4388_; uint8_t v___x_4389_; 
v_a_4386_ = lean_ctor_get(v_a_4385_, 0);
lean_inc(v_a_4386_);
v_a_4387_ = lean_ctor_get(v_a_4385_, 1);
lean_inc_ref(v_a_4387_);
lean_dec_ref_known(v_a_4385_, 2);
v___x_4388_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___closed__0));
v___x_4389_ = lean_string_dec_eq(v_a_4387_, v___x_4388_);
if (v___x_4389_ == 0)
{
lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4390_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4390_, 0, v_a_4387_);
v___x_4391_ = l_Lean_MessageData_ofFormat(v___x_4390_);
v___x_4392_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4386_, v___x_4391_, v___y_4292_, v___y_4293_);
lean_dec(v_a_4386_);
return v___x_4392_;
}
else
{
lean_object* v___x_4393_; 
lean_dec_ref(v_a_4387_);
v___x_4393_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_a_4386_);
return v___x_4393_;
}
}
else
{
lean_object* v___x_4394_; 
v___x_4394_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_4394_;
}
}
}
}
else
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4405_; 
lean_dec(v_a_4315_);
lean_dec_ref_known(v_methods_4313_, 5);
lean_dec_ref(v_x_4291_);
v_a_4398_ = lean_ctor_get(v___x_4316_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4316_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4400_ = v___x_4316_;
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4316_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
else
{
lean_object* v_a_4406_; lean_object* v___x_4408_; uint8_t v_isShared_4409_; uint8_t v_isSharedCheck_4413_; 
lean_dec_ref_known(v_methods_4313_, 5);
lean_dec_ref(v_x_4291_);
v_a_4406_ = lean_ctor_get(v___x_4314_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v___x_4314_);
if (v_isSharedCheck_4413_ == 0)
{
v___x_4408_ = v___x_4314_;
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
else
{
lean_inc(v_a_4406_);
lean_dec(v___x_4314_);
v___x_4408_ = lean_box(0);
v_isShared_4409_ = v_isSharedCheck_4413_;
goto v_resetjp_4407_;
}
v_resetjp_4407_:
{
lean_object* v___x_4411_; 
if (v_isShared_4409_ == 0)
{
v___x_4411_ = v___x_4408_;
goto v_reusejp_4410_;
}
else
{
lean_object* v_reuseFailAlloc_4412_; 
v_reuseFailAlloc_4412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4412_, 0, v_a_4406_);
v___x_4411_ = v_reuseFailAlloc_4412_;
goto v_reusejp_4410_;
}
v_reusejp_4410_:
{
return v___x_4411_;
}
}
}
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_dec_ref(v___f_4307_);
lean_dec(v_currNamespace_4306_);
lean_dec_ref(v_opts_4303_);
lean_dec_ref(v___f_4298_);
lean_dec_ref(v___f_4297_);
lean_dec_ref(v_env_4296_);
lean_dec_ref(v_x_4291_);
v_a_4414_ = lean_ctor_get(v___x_4308_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4308_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4308_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4308_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
}
else
{
lean_object* v_a_4422_; lean_object* v___x_4424_; uint8_t v_isShared_4425_; uint8_t v_isSharedCheck_4429_; 
lean_dec_ref(v_opts_4303_);
lean_dec_ref(v___f_4298_);
lean_dec_ref(v___f_4297_);
lean_dec_ref(v_env_4296_);
lean_dec_ref(v_x_4291_);
v_a_4422_ = lean_ctor_get(v___x_4304_, 0);
v_isSharedCheck_4429_ = !lean_is_exclusive(v___x_4304_);
if (v_isSharedCheck_4429_ == 0)
{
v___x_4424_ = v___x_4304_;
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
else
{
lean_inc(v_a_4422_);
lean_dec(v___x_4304_);
v___x_4424_ = lean_box(0);
v_isShared_4425_ = v_isSharedCheck_4429_;
goto v_resetjp_4423_;
}
v_resetjp_4423_:
{
lean_object* v___x_4427_; 
if (v_isShared_4425_ == 0)
{
v___x_4427_ = v___x_4424_;
goto v_reusejp_4426_;
}
else
{
lean_object* v_reuseFailAlloc_4428_; 
v_reuseFailAlloc_4428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4428_, 0, v_a_4422_);
v___x_4427_ = v_reuseFailAlloc_4428_;
goto v_reusejp_4426_;
}
v_reusejp_4426_:
{
return v___x_4427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg___boxed(lean_object* v_x_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_){
_start:
{
lean_object* v_res_4434_; 
v_res_4434_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_4430_, v___y_4431_, v___y_4432_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
return v_res_4434_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; 
v___x_4436_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__0));
v___x_4437_ = l_Lean_stringToMessageData(v___x_4436_);
return v___x_4437_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; 
v___x_4439_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__2));
v___x_4440_ = l_Lean_stringToMessageData(v___x_4439_);
return v___x_4440_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5(void){
_start:
{
lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4442_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__4));
v___x_4443_ = l_Lean_stringToMessageData(v___x_4442_);
return v___x_4443_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7(void){
_start:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; 
v___x_4445_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__6));
v___x_4446_ = l_Lean_stringToMessageData(v___x_4445_);
return v___x_4446_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9(void){
_start:
{
lean_object* v___x_4448_; lean_object* v___x_4449_; 
v___x_4448_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__8));
v___x_4449_ = l_Lean_stringToMessageData(v___x_4448_);
return v___x_4449_;
}
}
static lean_object* _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14(void){
_start:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; 
v___x_4458_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__13));
v___x_4459_ = l_Lean_stringToMessageData(v___x_4458_);
return v___x_4459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(lean_object* v___x_4460_, lean_object* v_attrInstance_4461_, lean_object* v___f_4462_, lean_object* v___x_4463_, lean_object* v___x_4464_, lean_object* v___x_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
lean_object* v___x_4469_; 
v___x_4469_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4460_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4469_) == 0)
{
lean_object* v_a_4470_; lean_object* v___x_4471_; lean_object* v_attr_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; 
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4470_);
lean_dec_ref_known(v___x_4469_, 1);
v___x_4471_ = lean_unsigned_to_nat(1u);
v_attr_4472_ = l_Lean_Syntax_getArg(v_attrInstance_4461_, v___x_4471_);
v___x_4473_ = lean_alloc_closure((void*)(l_Lean_expandMacros), 4, 2);
lean_closure_set(v___x_4473_, 0, v_attr_4472_);
lean_closure_set(v___x_4473_, 1, v___f_4462_);
v___x_4474_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v___x_4473_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4474_) == 0)
{
lean_object* v_a_4475_; lean_object* v___x_4477_; uint8_t v_isShared_4478_; uint8_t v_isSharedCheck_4580_; 
v_a_4475_ = lean_ctor_get(v___x_4474_, 0);
v_isSharedCheck_4580_ = !lean_is_exclusive(v___x_4474_);
if (v_isSharedCheck_4580_ == 0)
{
v___x_4477_ = v___x_4474_;
v_isShared_4478_ = v_isSharedCheck_4580_;
goto v_resetjp_4476_;
}
else
{
lean_inc(v_a_4475_);
lean_dec(v___x_4474_);
v___x_4477_ = lean_box(0);
v_isShared_4478_ = v_isSharedCheck_4580_;
goto v_resetjp_4476_;
}
v_resetjp_4476_:
{
lean_object* v___y_4480_; uint8_t v___y_4487_; lean_object* v___y_4488_; lean_object* v___y_4489_; lean_object* v___y_4490_; lean_object* v___y_4491_; lean_object* v_attrName_4502_; lean_object* v___y_4503_; lean_object* v___y_4504_; lean_object* v___x_4561_; lean_object* v___x_4562_; uint8_t v___x_4563_; 
lean_inc(v_a_4475_);
v___x_4561_ = l_Lean_Syntax_getKind(v_a_4475_);
v___x_4562_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__12));
v___x_4563_ = lean_name_eq(v___x_4561_, v___x_4562_);
if (v___x_4563_ == 0)
{
if (lean_obj_tag(v___x_4561_) == 1)
{
lean_object* v_str_4564_; lean_object* v___x_4565_; lean_object* v___x_4566_; 
v_str_4564_ = lean_ctor_get(v___x_4561_, 1);
lean_inc_ref(v_str_4564_);
lean_dec_ref_known(v___x_4561_, 2);
v___x_4565_ = lean_box(0);
v___x_4566_ = l_Lean_Name_str___override(v___x_4565_, v_str_4564_);
v_attrName_4502_ = v___x_4566_;
v___y_4503_ = v___y_4466_;
v___y_4504_ = v___y_4467_;
goto v___jp_4501_;
}
else
{
lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v_a_4569_; lean_object* v___x_4571_; uint8_t v_isShared_4572_; uint8_t v_isSharedCheck_4576_; 
lean_dec(v___x_4561_);
lean_del_object(v___x_4477_);
lean_dec(v_a_4470_);
lean_dec(v___x_4463_);
v___x_4567_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__14);
v___x_4568_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_a_4475_, v___x_4567_, v___y_4466_, v___y_4467_);
lean_dec(v_a_4475_);
v_a_4569_ = lean_ctor_get(v___x_4568_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4568_);
if (v_isSharedCheck_4576_ == 0)
{
v___x_4571_ = v___x_4568_;
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
else
{
lean_inc(v_a_4569_);
lean_dec(v___x_4568_);
v___x_4571_ = lean_box(0);
v_isShared_4572_ = v_isSharedCheck_4576_;
goto v_resetjp_4570_;
}
v_resetjp_4570_:
{
lean_object* v___x_4574_; 
if (v_isShared_4572_ == 0)
{
v___x_4574_ = v___x_4571_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4575_; 
v_reuseFailAlloc_4575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4575_, 0, v_a_4569_);
v___x_4574_ = v_reuseFailAlloc_4575_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
return v___x_4574_;
}
}
}
}
else
{
lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
lean_dec(v___x_4561_);
v___x_4577_ = l_Lean_Syntax_getArg(v_a_4475_, v___x_4465_);
v___x_4578_ = l_Lean_Syntax_getId(v___x_4577_);
lean_dec(v___x_4577_);
v___x_4579_ = l_Lean_Name_eraseMacroScopes(v___x_4578_);
lean_dec(v___x_4578_);
v_attrName_4502_ = v___x_4579_;
v___y_4503_ = v___y_4466_;
v___y_4504_ = v___y_4467_;
goto v___jp_4501_;
}
v___jp_4479_:
{
lean_object* v___x_4481_; uint8_t v___x_4482_; lean_object* v___x_4484_; 
v___x_4481_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4481_, 0, v___y_4480_);
lean_ctor_set(v___x_4481_, 1, v_a_4475_);
v___x_4482_ = lean_unbox(v_a_4470_);
lean_dec(v_a_4470_);
lean_ctor_set_uint8(v___x_4481_, sizeof(void*)*2, v___x_4482_);
if (v_isShared_4478_ == 0)
{
lean_ctor_set(v___x_4477_, 0, v___x_4481_);
v___x_4484_ = v___x_4477_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v___x_4481_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
v___jp_4486_:
{
lean_object* v___x_4492_; 
v___x_4492_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41(v___y_4489_, v___y_4487_, v___y_4490_, v___y_4491_);
if (lean_obj_tag(v___x_4492_) == 0)
{
lean_dec_ref_known(v___x_4492_, 1);
v___y_4480_ = v___y_4488_;
goto v___jp_4479_;
}
else
{
lean_object* v_a_4493_; lean_object* v___x_4495_; uint8_t v_isShared_4496_; uint8_t v_isSharedCheck_4500_; 
lean_dec(v___y_4488_);
lean_del_object(v___x_4477_);
lean_dec(v_a_4475_);
lean_dec(v_a_4470_);
v_a_4493_ = lean_ctor_get(v___x_4492_, 0);
v_isSharedCheck_4500_ = !lean_is_exclusive(v___x_4492_);
if (v_isSharedCheck_4500_ == 0)
{
v___x_4495_ = v___x_4492_;
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
else
{
lean_inc(v_a_4493_);
lean_dec(v___x_4492_);
v___x_4495_ = lean_box(0);
v_isShared_4496_ = v_isSharedCheck_4500_;
goto v_resetjp_4494_;
}
v_resetjp_4494_:
{
lean_object* v___x_4498_; 
if (v_isShared_4496_ == 0)
{
v___x_4498_ = v___x_4495_;
goto v_reusejp_4497_;
}
else
{
lean_object* v_reuseFailAlloc_4499_; 
v_reuseFailAlloc_4499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4499_, 0, v_a_4493_);
v___x_4498_ = v_reuseFailAlloc_4499_;
goto v_reusejp_4497_;
}
v_reusejp_4497_:
{
return v___x_4498_;
}
}
}
}
v___jp_4501_:
{
lean_object* v___x_4505_; lean_object* v_env_4506_; lean_object* v___x_4507_; 
v___x_4505_ = lean_st_ref_get(v___y_4504_);
v_env_4506_ = lean_ctor_get(v___x_4505_, 0);
lean_inc_ref(v_env_4506_);
lean_dec(v___x_4505_);
lean_inc(v_attrName_4502_);
v___x_4507_ = l_Lean_getAttributeImpl(v_env_4506_, v_attrName_4502_);
if (lean_obj_tag(v___x_4507_) == 1)
{
lean_object* v___x_4508_; lean_object* v_env_4509_; lean_object* v___x_4510_; 
lean_dec_ref_known(v___x_4507_, 1);
v___x_4508_ = lean_st_ref_get(v___y_4504_);
v_env_4509_ = lean_ctor_get(v___x_4508_, 0);
lean_inc_ref(v_env_4509_);
lean_dec(v___x_4508_);
lean_inc(v_attrName_4502_);
v___x_4510_ = l_Lean_getAttributeImpl(v_env_4509_, v_attrName_4502_);
if (lean_obj_tag(v___x_4510_) == 1)
{
lean_object* v_a_4511_; lean_object* v___x_4512_; lean_object* v_toAttributeImplCore_4513_; lean_object* v_env_4514_; lean_object* v_ref_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; 
v_a_4511_ = lean_ctor_get(v___x_4510_, 0);
lean_inc(v_a_4511_);
lean_dec_ref_known(v___x_4510_, 1);
v___x_4512_ = lean_st_ref_get(v___y_4504_);
v_toAttributeImplCore_4513_ = lean_ctor_get(v_a_4511_, 0);
lean_inc_ref(v_toAttributeImplCore_4513_);
lean_dec(v_a_4511_);
v_env_4514_ = lean_ctor_get(v___x_4512_, 0);
lean_inc_ref(v_env_4514_);
lean_dec(v___x_4512_);
v_ref_4515_ = lean_ctor_get(v_toAttributeImplCore_4513_, 0);
lean_inc_n(v_ref_4515_, 2);
lean_dec_ref(v_toAttributeImplCore_4513_);
v___x_4516_ = l_Lean_regularInitAttr;
v___x_4517_ = l_Lean_ParametricAttribute_getParam_x3f___redArg(v___x_4463_, v___x_4516_, v_env_4514_, v_ref_4515_);
if (lean_obj_tag(v___x_4517_) == 0)
{
lean_dec(v_ref_4515_);
v___y_4480_ = v_attrName_4502_;
goto v___jp_4479_;
}
else
{
uint8_t v___x_4518_; lean_object* v___x_4519_; lean_object* v_env_4520_; lean_object* v___x_4521_; 
lean_dec_ref_known(v___x_4517_, 1);
v___x_4518_ = 1;
v___x_4519_ = lean_st_ref_get(v___y_4504_);
v_env_4520_ = lean_ctor_get(v___x_4519_, 0);
lean_inc_ref(v_env_4520_);
lean_dec(v___x_4519_);
v___x_4521_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_4520_, v_ref_4515_);
lean_dec_ref(v_env_4520_);
if (lean_obj_tag(v___x_4521_) == 1)
{
lean_object* v_val_4522_; lean_object* v___x_4523_; lean_object* v_env_4524_; lean_object* v___x_4525_; lean_object* v_modules_4526_; lean_object* v___x_4527_; uint8_t v___x_4528_; 
v_val_4522_ = lean_ctor_get(v___x_4521_, 0);
lean_inc(v_val_4522_);
lean_dec_ref_known(v___x_4521_, 1);
v___x_4523_ = lean_st_ref_get(v___y_4504_);
v_env_4524_ = lean_ctor_get(v___x_4523_, 0);
lean_inc_ref(v_env_4524_);
lean_dec(v___x_4523_);
v___x_4525_ = l_Lean_Environment_header(v_env_4524_);
lean_dec_ref(v_env_4524_);
v_modules_4526_ = lean_ctor_get(v___x_4525_, 3);
lean_inc_ref(v_modules_4526_);
lean_dec_ref(v___x_4525_);
v___x_4527_ = lean_array_get_size(v_modules_4526_);
v___x_4528_ = lean_nat_dec_lt(v_val_4522_, v___x_4527_);
if (v___x_4528_ == 0)
{
lean_dec_ref(v_modules_4526_);
lean_dec(v_val_4522_);
v___y_4487_ = v___x_4518_;
v___y_4488_ = v_attrName_4502_;
v___y_4489_ = v_ref_4515_;
v___y_4490_ = v___y_4503_;
v___y_4491_ = v___y_4504_;
goto v___jp_4486_;
}
else
{
lean_object* v___x_4529_; uint8_t v_hasData_4530_; 
v___x_4529_ = lean_array_fget_borrowed(v_modules_4526_, v_val_4522_);
v_hasData_4530_ = lean_ctor_get_uint8(v___x_4529_, sizeof(void*)*1 + 1);
if (v_hasData_4530_ == 0)
{
lean_object* v___x_4531_; lean_object* v_toImport_4532_; lean_object* v_module_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v_a_4547_; lean_object* v___x_4549_; uint8_t v_isShared_4550_; uint8_t v_isSharedCheck_4554_; 
lean_dec(v_ref_4515_);
lean_del_object(v___x_4477_);
lean_dec(v_a_4475_);
lean_dec(v_a_4470_);
v___x_4531_ = lean_array_get(v___x_4464_, v_modules_4526_, v_val_4522_);
lean_dec(v_val_4522_);
lean_dec_ref(v_modules_4526_);
v_toImport_4532_ = lean_ctor_get(v___x_4531_, 0);
lean_inc_ref(v_toImport_4532_);
lean_dec(v___x_4531_);
v_module_4533_ = lean_ctor_get(v_toImport_4532_, 0);
lean_inc(v_module_4533_);
lean_dec_ref(v_toImport_4532_);
v___x_4534_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__1);
v___x_4535_ = l_Lean_MessageData_ofName(v_attrName_4502_);
v___x_4536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4536_, 0, v___x_4534_);
lean_ctor_set(v___x_4536_, 1, v___x_4535_);
v___x_4537_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__3);
v___x_4538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4536_);
lean_ctor_set(v___x_4538_, 1, v___x_4537_);
v___x_4539_ = l_Lean_MessageData_ofName(v_module_4533_);
lean_inc_ref(v___x_4539_);
v___x_4540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4540_, 0, v___x_4538_);
lean_ctor_set(v___x_4540_, 1, v___x_4539_);
v___x_4541_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__5);
v___x_4542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4540_);
lean_ctor_set(v___x_4542_, 1, v___x_4541_);
v___x_4543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4543_, 0, v___x_4542_);
lean_ctor_set(v___x_4543_, 1, v___x_4539_);
v___x_4544_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg___closed__14);
v___x_4545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4543_);
lean_ctor_set(v___x_4545_, 1, v___x_4544_);
v___x_4546_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4545_, v___y_4503_, v___y_4504_);
v_a_4547_ = lean_ctor_get(v___x_4546_, 0);
v_isSharedCheck_4554_ = !lean_is_exclusive(v___x_4546_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_4549_ = v___x_4546_;
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
else
{
lean_inc(v_a_4547_);
lean_dec(v___x_4546_);
v___x_4549_ = lean_box(0);
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
v_resetjp_4548_:
{
lean_object* v___x_4552_; 
if (v_isShared_4550_ == 0)
{
v___x_4552_ = v___x_4549_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_a_4547_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
return v___x_4552_;
}
}
}
else
{
lean_dec_ref(v_modules_4526_);
lean_dec(v_val_4522_);
v___y_4487_ = v___x_4518_;
v___y_4488_ = v_attrName_4502_;
v___y_4489_ = v_ref_4515_;
v___y_4490_ = v___y_4503_;
v___y_4491_ = v___y_4504_;
goto v___jp_4486_;
}
}
}
else
{
lean_dec(v___x_4521_);
v___y_4487_ = v___x_4518_;
v___y_4488_ = v_attrName_4502_;
v___y_4489_ = v_ref_4515_;
v___y_4490_ = v___y_4503_;
v___y_4491_ = v___y_4504_;
goto v___jp_4486_;
}
}
}
else
{
lean_dec_ref(v___x_4510_);
lean_dec(v___x_4463_);
v___y_4480_ = v_attrName_4502_;
goto v___jp_4479_;
}
}
else
{
lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4560_; 
lean_dec_ref(v___x_4507_);
lean_del_object(v___x_4477_);
lean_dec(v_a_4475_);
lean_dec(v_a_4470_);
lean_dec(v___x_4463_);
v___x_4555_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__7);
v___x_4556_ = l_Lean_MessageData_ofName(v_attrName_4502_);
v___x_4557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4555_);
lean_ctor_set(v___x_4557_, 1, v___x_4556_);
v___x_4558_ = lean_obj_once(&l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9, &l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9_once, _init_l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___closed__9);
v___x_4559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4559_, 0, v___x_4557_);
lean_ctor_set(v___x_4559_, 1, v___x_4558_);
v___x_4560_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v___x_4559_, v___y_4503_, v___y_4504_);
return v___x_4560_;
}
}
}
}
else
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4588_; 
lean_dec(v_a_4470_);
lean_dec(v___x_4463_);
v_a_4581_ = lean_ctor_get(v___x_4474_, 0);
v_isSharedCheck_4588_ = !lean_is_exclusive(v___x_4474_);
if (v_isSharedCheck_4588_ == 0)
{
v___x_4583_ = v___x_4474_;
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4474_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4588_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v___x_4586_; 
if (v_isShared_4584_ == 0)
{
v___x_4586_ = v___x_4583_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v_a_4581_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
}
else
{
lean_object* v_a_4589_; lean_object* v___x_4591_; uint8_t v_isShared_4592_; uint8_t v_isSharedCheck_4596_; 
lean_dec(v___x_4463_);
lean_dec_ref(v___f_4462_);
v_a_4589_ = lean_ctor_get(v___x_4469_, 0);
v_isSharedCheck_4596_ = !lean_is_exclusive(v___x_4469_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4591_ = v___x_4469_;
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
else
{
lean_inc(v_a_4589_);
lean_dec(v___x_4469_);
v___x_4591_ = lean_box(0);
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
v_resetjp_4590_:
{
lean_object* v___x_4594_; 
if (v_isShared_4592_ == 0)
{
v___x_4594_ = v___x_4591_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_a_4589_);
v___x_4594_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
return v___x_4594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed(lean_object* v___x_4597_, lean_object* v_attrInstance_4598_, lean_object* v___f_4599_, lean_object* v___x_4600_, lean_object* v___x_4601_, lean_object* v___x_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_){
_start:
{
lean_object* v_res_4606_; 
v_res_4606_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1(v___x_4597_, v_attrInstance_4598_, v___f_4599_, v___x_4600_, v___x_4601_, v___x_4602_, v___y_4603_, v___y_4604_);
lean_dec(v___y_4604_);
lean_dec_ref(v___y_4603_);
lean_dec(v___x_4602_);
lean_dec_ref(v___x_4601_);
lean_dec(v_attrInstance_4598_);
return v_res_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(lean_object* v_x_4607_, uint8_t v_when_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
if (v_when_4608_ == 0)
{
lean_object* v___x_4612_; 
lean_inc(v___y_4610_);
lean_inc_ref(v___y_4609_);
v___x_4612_ = lean_apply_3(v_x_4607_, v___y_4609_, v___y_4610_, lean_box(0));
return v___x_4612_;
}
else
{
uint8_t v___x_4613_; lean_object* v___x_4614_; 
v___x_4613_ = 0;
v___x_4614_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v_x_4607_, v___x_4613_, v___y_4609_, v___y_4610_);
return v___x_4614_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg___boxed(lean_object* v_x_4615_, lean_object* v_when_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_){
_start:
{
uint8_t v_when_boxed_4620_; lean_object* v_res_4621_; 
v_when_boxed_4620_ = lean_unbox(v_when_4616_);
v_res_4621_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_4615_, v_when_boxed_4620_, v___y_4617_, v___y_4618_);
lean_dec(v___y_4618_);
lean_dec_ref(v___y_4617_);
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(lean_object* v_attrInstance_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_){
_start:
{
lean_object* v___f_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___f_4633_; uint8_t v___x_4634_; lean_object* v___x_4635_; 
v___f_4627_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___closed__0));
v___x_4628_ = lean_box(0);
v___x_4629_ = l_Lean_instInhabitedEffectiveImport_default;
v___x_4630_ = lean_unsigned_to_nat(0u);
v___x_4631_ = l_Lean_Syntax_getArg(v_attrInstance_4623_, v___x_4630_);
v___x_4632_ = lean_alloc_closure((void*)(l_Lean_Elab_toAttributeKind___boxed), 3, 1);
lean_closure_set(v___x_4632_, 0, v___x_4631_);
v___f_4633_ = lean_alloc_closure((void*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__1___boxed), 9, 6);
lean_closure_set(v___f_4633_, 0, v___x_4632_);
lean_closure_set(v___f_4633_, 1, v_attrInstance_4623_);
lean_closure_set(v___f_4633_, 2, v___f_4627_);
lean_closure_set(v___f_4633_, 3, v___x_4628_);
lean_closure_set(v___f_4633_, 4, v___x_4629_);
lean_closure_set(v___f_4633_, 5, v___x_4630_);
v___x_4634_ = 1;
v___x_4635_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v___f_4633_, v___x_4634_, v___y_4624_, v___y_4625_);
return v___x_4635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___boxed(lean_object* v_attrInstance_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_){
_start:
{
lean_object* v_res_4640_; 
v_res_4640_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_attrInstance_4636_, v___y_4637_, v___y_4638_);
lean_dec(v___y_4638_);
lean_dec_ref(v___y_4637_);
return v_res_4640_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(lean_object* v_as_4641_, size_t v_sz_4642_, size_t v_i_4643_, lean_object* v_b_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_){
_start:
{
lean_object* v_snd_4649_; lean_object* v_a_4654_; uint8_t v___x_4666_; 
v___x_4666_ = lean_usize_dec_lt(v_i_4643_, v_sz_4642_);
if (v___x_4666_ == 0)
{
lean_object* v___x_4667_; 
v___x_4667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4667_, 0, v_b_4644_);
return v___x_4667_;
}
else
{
lean_object* v_a_4668_; lean_object* v___x_4669_; 
v_a_4668_ = lean_array_uget_borrowed(v_as_4641_, v_i_4643_);
v___x_4669_ = l_Lean_Elab_Command_getRef___redArg(v___y_4645_);
if (lean_obj_tag(v___x_4669_) == 0)
{
lean_object* v_a_4670_; lean_object* v_fileName_4671_; lean_object* v_fileMap_4672_; lean_object* v_currRecDepth_4673_; lean_object* v_cmdPos_4674_; lean_object* v_macroStack_4675_; lean_object* v_quotContext_x3f_4676_; lean_object* v_currMacroScope_4677_; lean_object* v_snap_x3f_4678_; lean_object* v_cancelTk_x3f_4679_; uint8_t v_suppressElabErrors_4680_; lean_object* v_ref_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; 
v_a_4670_ = lean_ctor_get(v___x_4669_, 0);
lean_inc(v_a_4670_);
lean_dec_ref_known(v___x_4669_, 1);
v_fileName_4671_ = lean_ctor_get(v___y_4645_, 0);
v_fileMap_4672_ = lean_ctor_get(v___y_4645_, 1);
v_currRecDepth_4673_ = lean_ctor_get(v___y_4645_, 2);
v_cmdPos_4674_ = lean_ctor_get(v___y_4645_, 3);
v_macroStack_4675_ = lean_ctor_get(v___y_4645_, 4);
v_quotContext_x3f_4676_ = lean_ctor_get(v___y_4645_, 5);
v_currMacroScope_4677_ = lean_ctor_get(v___y_4645_, 6);
v_snap_x3f_4678_ = lean_ctor_get(v___y_4645_, 8);
v_cancelTk_x3f_4679_ = lean_ctor_get(v___y_4645_, 9);
v_suppressElabErrors_4680_ = lean_ctor_get_uint8(v___y_4645_, sizeof(void*)*10);
v_ref_4681_ = l_Lean_replaceRef(v_a_4668_, v_a_4670_);
lean_dec(v_a_4670_);
lean_inc(v_cancelTk_x3f_4679_);
lean_inc(v_snap_x3f_4678_);
lean_inc(v_currMacroScope_4677_);
lean_inc(v_quotContext_x3f_4676_);
lean_inc(v_macroStack_4675_);
lean_inc(v_cmdPos_4674_);
lean_inc(v_currRecDepth_4673_);
lean_inc_ref(v_fileMap_4672_);
lean_inc_ref(v_fileName_4671_);
v___x_4682_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v___x_4682_, 0, v_fileName_4671_);
lean_ctor_set(v___x_4682_, 1, v_fileMap_4672_);
lean_ctor_set(v___x_4682_, 2, v_currRecDepth_4673_);
lean_ctor_set(v___x_4682_, 3, v_cmdPos_4674_);
lean_ctor_set(v___x_4682_, 4, v_macroStack_4675_);
lean_ctor_set(v___x_4682_, 5, v_quotContext_x3f_4676_);
lean_ctor_set(v___x_4682_, 6, v_currMacroScope_4677_);
lean_ctor_set(v___x_4682_, 7, v_ref_4681_);
lean_ctor_set(v___x_4682_, 8, v_snap_x3f_4678_);
lean_ctor_set(v___x_4682_, 9, v_cancelTk_x3f_4679_);
lean_ctor_set_uint8(v___x_4682_, sizeof(void*)*10, v_suppressElabErrors_4680_);
lean_inc(v_a_4668_);
v___x_4683_ = l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28(v_a_4668_, v___x_4682_, v___y_4646_);
lean_dec_ref_known(v___x_4682_, 10);
if (lean_obj_tag(v___x_4683_) == 0)
{
lean_object* v_a_4684_; lean_object* v___x_4685_; 
v_a_4684_ = lean_ctor_get(v___x_4683_, 0);
lean_inc(v_a_4684_);
lean_dec_ref_known(v___x_4683_, 1);
v___x_4685_ = lean_array_push(v_b_4644_, v_a_4684_);
v_snd_4649_ = v___x_4685_;
goto v___jp_4648_;
}
else
{
lean_object* v_a_4686_; 
v_a_4686_ = lean_ctor_get(v___x_4683_, 0);
lean_inc(v_a_4686_);
lean_dec_ref_known(v___x_4683_, 1);
v_a_4654_ = v_a_4686_;
goto v___jp_4653_;
}
}
else
{
lean_object* v_a_4687_; 
v_a_4687_ = lean_ctor_get(v___x_4669_, 0);
lean_inc(v_a_4687_);
lean_dec_ref_known(v___x_4669_, 1);
v_a_4654_ = v_a_4687_;
goto v___jp_4653_;
}
}
v___jp_4648_:
{
size_t v___x_4650_; size_t v___x_4651_; 
v___x_4650_ = ((size_t)1ULL);
v___x_4651_ = lean_usize_add(v_i_4643_, v___x_4650_);
v_i_4643_ = v___x_4651_;
v_b_4644_ = v_snd_4649_;
goto _start;
}
v___jp_4653_:
{
uint8_t v___x_4655_; 
v___x_4655_ = l_Lean_Exception_isInterrupt(v_a_4654_);
if (v___x_4655_ == 0)
{
lean_object* v___x_4656_; 
v___x_4656_ = l_Lean_Elab_logException___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__27(v_a_4654_, v___y_4645_, v___y_4646_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_dec_ref_known(v___x_4656_, 1);
v_snd_4649_ = v_b_4644_;
goto v___jp_4648_;
}
else
{
lean_object* v_a_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4664_; 
lean_dec_ref(v_b_4644_);
v_a_4657_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4664_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4664_ == 0)
{
v___x_4659_ = v___x_4656_;
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_a_4657_);
lean_dec(v___x_4656_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4664_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v___x_4662_; 
if (v_isShared_4660_ == 0)
{
v___x_4662_ = v___x_4659_;
goto v_reusejp_4661_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_a_4657_);
v___x_4662_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4661_;
}
v_reusejp_4661_:
{
return v___x_4662_;
}
}
}
}
else
{
lean_object* v___x_4665_; 
lean_dec_ref(v_b_4644_);
v___x_4665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4665_, 0, v_a_4654_);
return v___x_4665_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29___boxed(lean_object* v_as_4688_, lean_object* v_sz_4689_, lean_object* v_i_4690_, lean_object* v_b_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_){
_start:
{
size_t v_sz_boxed_4695_; size_t v_i_boxed_4696_; lean_object* v_res_4697_; 
v_sz_boxed_4695_ = lean_unbox_usize(v_sz_4689_);
lean_dec(v_sz_4689_);
v_i_boxed_4696_ = lean_unbox_usize(v_i_4690_);
lean_dec(v_i_4690_);
v_res_4697_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_as_4688_, v_sz_boxed_4695_, v_i_boxed_4696_, v_b_4691_, v___y_4692_, v___y_4693_);
lean_dec(v___y_4693_);
lean_dec_ref(v___y_4692_);
lean_dec_ref(v_as_4688_);
return v_res_4697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(lean_object* v_attrInstances_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_){
_start:
{
lean_object* v_attrs_4704_; size_t v_sz_4705_; size_t v___x_4706_; lean_object* v___x_4707_; 
v_attrs_4704_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v_sz_4705_ = lean_array_size(v_attrInstances_4700_);
v___x_4706_ = ((size_t)0ULL);
v___x_4707_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__29(v_attrInstances_4700_, v_sz_4705_, v___x_4706_, v_attrs_4704_, v___y_4701_, v___y_4702_);
return v___x_4707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___boxed(lean_object* v_attrInstances_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_){
_start:
{
lean_object* v_res_4712_; 
v_res_4712_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v_attrInstances_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___y_4710_);
lean_dec_ref(v___y_4709_);
lean_dec_ref(v_attrInstances_4708_);
return v_res_4712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(lean_object* v_stx_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_){
_start:
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; 
v___x_4717_ = lean_unsigned_to_nat(1u);
v___x_4718_ = l_Lean_Syntax_getArg(v_stx_4713_, v___x_4717_);
v___x_4719_ = l_Lean_Syntax_getSepArgs(v___x_4718_);
lean_dec(v___x_4718_);
v___x_4720_ = l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8(v___x_4719_, v___y_4714_, v___y_4715_);
lean_dec_ref(v___x_4719_);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1___boxed(lean_object* v_stx_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
lean_object* v_res_4725_; 
v_res_4725_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_stx_4721_, v___y_4722_, v___y_4723_);
lean_dec(v___y_4723_);
lean_dec_ref(v___y_4722_);
lean_dec(v_stx_4721_);
return v_res_4725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(lean_object* v_o_4726_, lean_object* v___y_4727_){
_start:
{
lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v_env_4731_; lean_object* v___x_4732_; lean_object* v_toEnvExtension_4733_; lean_object* v_asyncMode_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v_merged_4737_; lean_object* v___x_4739_; uint8_t v_isShared_4740_; uint8_t v_isSharedCheck_4745_; 
v___x_4729_ = l_Lean_Linter_instInhabitedLinterSetsState_default;
v___x_4730_ = lean_st_ref_get(v___y_4727_);
v_env_4731_ = lean_ctor_get(v___x_4730_, 0);
lean_inc_ref(v_env_4731_);
lean_dec(v___x_4730_);
v___x_4732_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_4733_ = lean_ctor_get(v___x_4732_, 0);
v_asyncMode_4734_ = lean_ctor_get(v_toEnvExtension_4733_, 2);
v___x_4735_ = lean_box(0);
v___x_4736_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_4729_, v___x_4732_, v_env_4731_, v_asyncMode_4734_, v___x_4735_);
v_merged_4737_ = lean_ctor_get(v___x_4736_, 0);
v_isSharedCheck_4745_ = !lean_is_exclusive(v___x_4736_);
if (v_isSharedCheck_4745_ == 0)
{
lean_object* v_unused_4746_; 
v_unused_4746_ = lean_ctor_get(v___x_4736_, 1);
lean_dec(v_unused_4746_);
v___x_4739_ = v___x_4736_;
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
else
{
lean_inc(v_merged_4737_);
lean_dec(v___x_4736_);
v___x_4739_ = lean_box(0);
v_isShared_4740_ = v_isSharedCheck_4745_;
goto v_resetjp_4738_;
}
v_resetjp_4738_:
{
lean_object* v___x_4742_; 
if (v_isShared_4740_ == 0)
{
lean_ctor_set(v___x_4739_, 1, v_merged_4737_);
lean_ctor_set(v___x_4739_, 0, v_o_4726_);
v___x_4742_ = v___x_4739_;
goto v_reusejp_4741_;
}
else
{
lean_object* v_reuseFailAlloc_4744_; 
v_reuseFailAlloc_4744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4744_, 0, v_o_4726_);
lean_ctor_set(v_reuseFailAlloc_4744_, 1, v_merged_4737_);
v___x_4742_ = v_reuseFailAlloc_4744_;
goto v_reusejp_4741_;
}
v_reusejp_4741_:
{
lean_object* v___x_4743_; 
v___x_4743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4743_, 0, v___x_4742_);
return v___x_4743_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg___boxed(lean_object* v_o_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_4747_, v___y_4748_);
lean_dec(v___y_4748_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(lean_object* v___y_4751_, lean_object* v___y_4752_){
_start:
{
lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v_scopes_4756_; lean_object* v___x_4757_; lean_object* v_opts_4758_; lean_object* v___x_4759_; 
v___x_4754_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_4755_ = lean_st_ref_get(v___y_4752_);
v_scopes_4756_ = lean_ctor_get(v___x_4755_, 2);
lean_inc(v_scopes_4756_);
lean_dec(v___x_4755_);
v___x_4757_ = l_List_head_x21___redArg(v___x_4754_, v_scopes_4756_);
lean_dec(v_scopes_4756_);
v_opts_4758_ = lean_ctor_get(v___x_4757_, 1);
lean_inc_ref(v_opts_4758_);
lean_dec(v___x_4757_);
v___x_4759_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_opts_4758_, v___y_4752_);
return v___x_4759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23___boxed(lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_){
_start:
{
lean_object* v_res_4763_; 
v_res_4763_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4760_, v___y_4761_);
lean_dec(v___y_4761_);
lean_dec_ref(v___y_4760_);
return v_res_4763_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(lean_object* v_ref_4764_, lean_object* v_msgData_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_){
_start:
{
uint8_t v___x_4769_; uint8_t v___x_4770_; lean_object* v___x_4771_; 
v___x_4769_ = 1;
v___x_4770_ = 0;
v___x_4771_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34_spec__40(v_ref_4764_, v_msgData_4765_, v___x_4769_, v___x_4770_, v___y_4766_, v___y_4767_);
return v___x_4771_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34___boxed(lean_object* v_ref_4772_, lean_object* v_msgData_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_){
_start:
{
lean_object* v_res_4777_; 
v_res_4777_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_ref_4772_, v_msgData_4773_, v___y_4774_, v___y_4775_);
lean_dec(v___y_4775_);
lean_dec_ref(v___y_4774_);
lean_dec(v_ref_4772_);
return v_res_4777_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1(void){
_start:
{
lean_object* v___x_4779_; lean_object* v___x_4780_; 
v___x_4779_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__0));
v___x_4780_ = l_Lean_stringToMessageData(v___x_4779_);
return v___x_4780_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3(void){
_start:
{
lean_object* v___x_4782_; lean_object* v___x_4783_; 
v___x_4782_ = ((lean_object*)(l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__2));
v___x_4783_ = l_Lean_stringToMessageData(v___x_4782_);
return v___x_4783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(lean_object* v_linterOption_4784_, lean_object* v_stx_4785_, lean_object* v_msg_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_){
_start:
{
lean_object* v_name_4790_; lean_object* v___x_4792_; uint8_t v_isShared_4793_; uint8_t v_isSharedCheck_4808_; 
v_name_4790_ = lean_ctor_get(v_linterOption_4784_, 0);
v_isSharedCheck_4808_ = !lean_is_exclusive(v_linterOption_4784_);
if (v_isSharedCheck_4808_ == 0)
{
lean_object* v_unused_4809_; 
v_unused_4809_ = lean_ctor_get(v_linterOption_4784_, 1);
lean_dec(v_unused_4809_);
v___x_4792_ = v_linterOption_4784_;
v_isShared_4793_ = v_isSharedCheck_4808_;
goto v_resetjp_4791_;
}
else
{
lean_inc(v_name_4790_);
lean_dec(v_linterOption_4784_);
v___x_4792_ = lean_box(0);
v_isShared_4793_ = v_isSharedCheck_4808_;
goto v_resetjp_4791_;
}
v_resetjp_4791_:
{
lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4797_; 
v___x_4794_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__1);
lean_inc(v_name_4790_);
v___x_4795_ = l_Lean_MessageData_ofName(v_name_4790_);
if (v_isShared_4793_ == 0)
{
lean_ctor_set_tag(v___x_4792_, 7);
lean_ctor_set(v___x_4792_, 1, v___x_4795_);
lean_ctor_set(v___x_4792_, 0, v___x_4794_);
v___x_4797_ = v___x_4792_;
goto v_reusejp_4796_;
}
else
{
lean_object* v_reuseFailAlloc_4807_; 
v_reuseFailAlloc_4807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4807_, 0, v___x_4794_);
lean_ctor_set(v_reuseFailAlloc_4807_, 1, v___x_4795_);
v___x_4797_ = v_reuseFailAlloc_4807_;
goto v_reusejp_4796_;
}
v_reusejp_4796_:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v_disable_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; 
v___x_4798_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3, &l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___closed__3);
v___x_4799_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4797_);
lean_ctor_set(v___x_4799_, 1, v___x_4798_);
v_disable_4800_ = l_Lean_MessageData_note(v___x_4799_);
v___x_4801_ = l_Lean_Linter_linterMessageTag;
v___x_4802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4802_, 0, v_msg_4786_);
lean_ctor_set(v___x_4802_, 1, v_disable_4800_);
v___x_4803_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4803_, 0, v___x_4801_);
lean_ctor_set(v___x_4803_, 1, v___x_4802_);
v___x_4804_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_4804_, 0, v_name_4790_);
lean_ctor_set(v___x_4804_, 1, v___x_4803_);
lean_inc(v_stx_4785_);
v___x_4805_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v___x_4805_, 0, v_stx_4785_);
lean_ctor_set(v___x_4805_, 1, v___x_4804_);
v___x_4806_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24_spec__34(v_stx_4785_, v___x_4805_, v___y_4787_, v___y_4788_);
lean_dec(v_stx_4785_);
return v___x_4806_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24___boxed(lean_object* v_linterOption_4810_, lean_object* v_stx_4811_, lean_object* v_msg_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_){
_start:
{
lean_object* v_res_4816_; 
v_res_4816_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4810_, v_stx_4811_, v_msg_4812_, v___y_4813_, v___y_4814_);
lean_dec(v___y_4814_);
lean_dec_ref(v___y_4813_);
return v_res_4816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(lean_object* v_linterOption_4817_, lean_object* v_stx_4818_, lean_object* v_msg_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_){
_start:
{
lean_object* v___x_4823_; lean_object* v_a_4824_; lean_object* v___x_4826_; uint8_t v_isShared_4827_; uint8_t v_isSharedCheck_4834_; 
v___x_4823_ = l_Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23(v___y_4820_, v___y_4821_);
v_a_4824_ = lean_ctor_get(v___x_4823_, 0);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4823_);
if (v_isSharedCheck_4834_ == 0)
{
v___x_4826_ = v___x_4823_;
v_isShared_4827_ = v_isSharedCheck_4834_;
goto v_resetjp_4825_;
}
else
{
lean_inc(v_a_4824_);
lean_dec(v___x_4823_);
v___x_4826_ = lean_box(0);
v_isShared_4827_ = v_isSharedCheck_4834_;
goto v_resetjp_4825_;
}
v_resetjp_4825_:
{
uint8_t v___x_4828_; 
v___x_4828_ = l_Lean_Linter_getLinterValue(v_linterOption_4817_, v_a_4824_);
lean_dec(v_a_4824_);
if (v___x_4828_ == 0)
{
lean_object* v___x_4829_; lean_object* v___x_4831_; 
lean_dec_ref(v_msg_4819_);
lean_dec(v_stx_4818_);
lean_dec_ref(v_linterOption_4817_);
v___x_4829_ = lean_box(0);
if (v_isShared_4827_ == 0)
{
lean_ctor_set(v___x_4826_, 0, v___x_4829_);
v___x_4831_ = v___x_4826_;
goto v_reusejp_4830_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v___x_4829_);
v___x_4831_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4830_;
}
v_reusejp_4830_:
{
return v___x_4831_;
}
}
else
{
lean_object* v___x_4833_; 
lean_del_object(v___x_4826_);
v___x_4833_ = l_Lean_Linter_logLint___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__24(v_linterOption_4817_, v_stx_4818_, v_msg_4819_, v___y_4820_, v___y_4821_);
return v___x_4833_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6___boxed(lean_object* v_linterOption_4835_, lean_object* v_stx_4836_, lean_object* v_msg_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_){
_start:
{
lean_object* v_res_4841_; 
v_res_4841_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v_linterOption_4835_, v_stx_4836_, v_msg_4837_, v___y_4838_, v___y_4839_);
lean_dec(v___y_4839_);
lean_dec_ref(v___y_4838_);
return v_res_4841_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; 
v___x_4843_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__0));
v___x_4844_ = l_Lean_stringToMessageData(v___x_4843_);
return v___x_4844_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_4846_; lean_object* v___x_4847_; 
v___x_4846_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__2));
v___x_4847_ = l_Lean_stringToMessageData(v___x_4846_);
return v___x_4847_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_4861_; lean_object* v___x_4862_; 
v___x_4861_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__8));
v___x_4862_ = l_Lean_stringToMessageData(v___x_4861_);
return v___x_4862_;
}
}
static lean_object* _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_4864_; lean_object* v___x_4865_; 
v___x_4864_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__10));
v___x_4865_ = l_Lean_stringToMessageData(v___x_4864_);
return v___x_4865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(lean_object* v_vis_x3f_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_){
_start:
{
lean_object* v___x_4878_; 
v___x_4878_ = lean_st_ref_get(v___y_4868_);
if (lean_obj_tag(v_vis_x3f_4866_) == 0)
{
uint8_t v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; 
lean_dec(v___x_4878_);
v___x_4879_ = 0;
v___x_4880_ = lean_box(v___x_4879_);
v___x_4881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4881_, 0, v___x_4880_);
return v___x_4881_;
}
else
{
lean_object* v_env_4882_; lean_object* v_val_4883_; lean_object* v___y_4885_; lean_object* v___y_4886_; lean_object* v___y_4887_; uint8_t v___y_4909_; lean_object* v___x_4910_; uint8_t v___x_4911_; uint8_t v___y_4913_; 
v_env_4882_ = lean_ctor_get(v___x_4878_, 0);
lean_inc_ref(v_env_4882_);
lean_dec(v___x_4878_);
v_val_4883_ = lean_ctor_get(v_vis_x3f_4866_, 0);
lean_inc_n(v_val_4883_, 2);
lean_dec_ref_known(v_vis_x3f_4866_, 1);
v___x_4910_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__6));
v___x_4911_ = l_Lean_Syntax_isOfKind(v_val_4883_, v___x_4910_);
if (v___x_4911_ == 0)
{
lean_object* v___x_4917_; uint8_t v___x_4918_; 
v___x_4917_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__7));
lean_inc(v_val_4883_);
v___x_4918_ = l_Lean_Syntax_isOfKind(v_val_4883_, v___x_4917_);
if (v___x_4918_ == 0)
{
lean_object* v___x_4919_; lean_object* v___x_4920_; 
lean_dec_ref(v_env_4882_);
v___x_4919_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__9);
v___x_4920_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_val_4883_, v___x_4919_, v___y_4867_, v___y_4868_);
lean_dec(v_val_4883_);
return v___x_4920_;
}
else
{
lean_object* v___x_4921_; 
v___x_4921_ = l_Lean_Syntax_getHeadInfo(v_val_4883_);
if (lean_obj_tag(v___x_4921_) == 0)
{
lean_dec_ref_known(v___x_4921_, 4);
v___y_4913_ = v___x_4918_;
goto v___jp_4912_;
}
else
{
lean_dec(v___x_4921_);
if (v___x_4911_ == 0)
{
lean_dec(v_val_4883_);
lean_dec_ref(v_env_4882_);
goto v___jp_4870_;
}
else
{
v___y_4913_ = v___x_4911_;
goto v___jp_4912_;
}
}
}
}
else
{
lean_object* v___x_4922_; 
v___x_4922_ = l_Lean_Syntax_getHeadInfo(v_val_4883_);
if (lean_obj_tag(v___x_4922_) == 0)
{
lean_object* v___x_4923_; uint8_t v_isModule_4924_; 
lean_dec_ref_known(v___x_4922_, 4);
v___x_4923_ = l_Lean_Environment_header(v_env_4882_);
v_isModule_4924_ = lean_ctor_get_uint8(v___x_4923_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4923_);
if (v_isModule_4924_ == 0)
{
lean_dec(v_val_4883_);
lean_dec_ref(v_env_4882_);
goto v___jp_4874_;
}
else
{
uint8_t v_isExporting_4925_; 
v_isExporting_4925_ = lean_ctor_get_uint8(v_env_4882_, sizeof(void*)*8);
lean_dec_ref(v_env_4882_);
if (v_isExporting_4925_ == 0)
{
lean_object* v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v___x_4926_ = l_Lean_linter_redundantVisibility;
v___x_4927_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__11);
v___x_4928_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___x_4926_, v_val_4883_, v___x_4927_, v___y_4867_, v___y_4868_);
if (lean_obj_tag(v___x_4928_) == 0)
{
lean_dec_ref_known(v___x_4928_, 1);
goto v___jp_4874_;
}
else
{
lean_object* v_a_4929_; lean_object* v___x_4931_; uint8_t v_isShared_4932_; uint8_t v_isSharedCheck_4936_; 
v_a_4929_ = lean_ctor_get(v___x_4928_, 0);
v_isSharedCheck_4936_ = !lean_is_exclusive(v___x_4928_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4931_ = v___x_4928_;
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
else
{
lean_inc(v_a_4929_);
lean_dec(v___x_4928_);
v___x_4931_ = lean_box(0);
v_isShared_4932_ = v_isSharedCheck_4936_;
goto v_resetjp_4930_;
}
v_resetjp_4930_:
{
lean_object* v___x_4934_; 
if (v_isShared_4932_ == 0)
{
v___x_4934_ = v___x_4931_;
goto v_reusejp_4933_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v_a_4929_);
v___x_4934_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4933_;
}
v_reusejp_4933_:
{
return v___x_4934_;
}
}
}
}
else
{
lean_dec(v_val_4883_);
goto v___jp_4874_;
}
}
}
else
{
lean_dec(v___x_4922_);
lean_dec(v_val_4883_);
lean_dec_ref(v_env_4882_);
goto v___jp_4874_;
}
}
v___jp_4884_:
{
lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
lean_inc_ref(v___y_4887_);
v___x_4888_ = l_Lean_stringToMessageData(v___y_4887_);
lean_inc_ref(v___y_4885_);
v___x_4889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4889_, 0, v___y_4885_);
lean_ctor_set(v___x_4889_, 1, v___x_4888_);
v___x_4890_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__1);
v___x_4891_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4891_, 0, v___x_4889_);
lean_ctor_set(v___x_4891_, 1, v___x_4890_);
lean_inc_ref(v___y_4886_);
v___x_4892_ = l_Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6(v___y_4886_, v_val_4883_, v___x_4891_, v___y_4867_, v___y_4868_);
if (lean_obj_tag(v___x_4892_) == 0)
{
lean_dec_ref_known(v___x_4892_, 1);
goto v___jp_4870_;
}
else
{
lean_object* v_a_4893_; lean_object* v___x_4895_; uint8_t v_isShared_4896_; uint8_t v_isSharedCheck_4900_; 
v_a_4893_ = lean_ctor_get(v___x_4892_, 0);
v_isSharedCheck_4900_ = !lean_is_exclusive(v___x_4892_);
if (v_isSharedCheck_4900_ == 0)
{
v___x_4895_ = v___x_4892_;
v_isShared_4896_ = v_isSharedCheck_4900_;
goto v_resetjp_4894_;
}
else
{
lean_inc(v_a_4893_);
lean_dec(v___x_4892_);
v___x_4895_ = lean_box(0);
v_isShared_4896_ = v_isSharedCheck_4900_;
goto v_resetjp_4894_;
}
v_resetjp_4894_:
{
lean_object* v___x_4898_; 
if (v_isShared_4896_ == 0)
{
v___x_4898_ = v___x_4895_;
goto v_reusejp_4897_;
}
else
{
lean_object* v_reuseFailAlloc_4899_; 
v_reuseFailAlloc_4899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4899_, 0, v_a_4893_);
v___x_4898_ = v_reuseFailAlloc_4899_;
goto v_reusejp_4897_;
}
v_reusejp_4897_:
{
return v___x_4898_;
}
}
}
}
v___jp_4901_:
{
lean_object* v___x_4902_; uint8_t v_isModule_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4902_ = l_Lean_Environment_header(v_env_4882_);
lean_dec_ref(v_env_4882_);
v_isModule_4903_ = lean_ctor_get_uint8(v___x_4902_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4902_);
v___x_4904_ = l_Lean_linter_redundantVisibility;
v___x_4905_ = lean_obj_once(&l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3, &l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3_once, _init_l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__3);
if (v_isModule_4903_ == 0)
{
lean_object* v___x_4906_; 
v___x_4906_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg___closed__0));
v___y_4885_ = v___x_4905_;
v___y_4886_ = v___x_4904_;
v___y_4887_ = v___x_4906_;
goto v___jp_4884_;
}
else
{
lean_object* v___x_4907_; 
v___x_4907_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__4));
v___y_4885_ = v___x_4905_;
v___y_4886_ = v___x_4904_;
v___y_4887_ = v___x_4907_;
goto v___jp_4884_;
}
}
v___jp_4908_:
{
if (v___y_4909_ == 0)
{
lean_dec(v_val_4883_);
lean_dec_ref(v_env_4882_);
goto v___jp_4870_;
}
else
{
goto v___jp_4901_;
}
}
v___jp_4912_:
{
uint8_t v_isExporting_4914_; 
v_isExporting_4914_ = lean_ctor_get_uint8(v_env_4882_, sizeof(void*)*8);
if (v_isExporting_4914_ == 0)
{
lean_object* v___x_4915_; uint8_t v_isModule_4916_; 
v___x_4915_ = l_Lean_Environment_header(v_env_4882_);
v_isModule_4916_ = lean_ctor_get_uint8(v___x_4915_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_4915_);
if (v_isModule_4916_ == 0)
{
v___y_4909_ = v___y_4913_;
goto v___jp_4908_;
}
else
{
v___y_4909_ = v___x_4911_;
goto v___jp_4908_;
}
}
else
{
goto v___jp_4901_;
}
}
}
v___jp_4870_:
{
uint8_t v___x_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; 
v___x_4871_ = 2;
v___x_4872_ = lean_box(v___x_4871_);
v___x_4873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4873_, 0, v___x_4872_);
return v___x_4873_;
}
v___jp_4874_:
{
uint8_t v___x_4875_; lean_object* v___x_4876_; lean_object* v___x_4877_; 
v___x_4875_ = 1;
v___x_4876_ = lean_box(v___x_4875_);
v___x_4877_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4877_, 0, v___x_4876_);
return v___x_4877_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___boxed(lean_object* v_vis_x3f_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_){
_start:
{
lean_object* v_res_4941_; 
v_res_4941_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v_vis_x3f_4937_, v___y_4938_, v___y_4939_);
lean_dec(v___y_4939_);
lean_dec_ref(v___y_4938_);
return v_res_4941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(lean_object* v_stx_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_){
_start:
{
uint8_t v___y_4958_; uint8_t v___y_4959_; uint8_t v___y_4960_; uint8_t v___y_4961_; lean_object* v___y_4962_; lean_object* v___y_4963_; uint8_t v___y_4964_; uint8_t v___y_4968_; uint8_t v___y_4969_; uint8_t v___y_4970_; lean_object* v___y_4971_; uint8_t v___y_4972_; lean_object* v___y_4973_; lean_object* v_attrs_4974_; lean_object* v___x_4978_; lean_object* v_docCommentStx_4979_; lean_object* v___x_4980_; lean_object* v_attrsStx_4981_; uint8_t v___y_4983_; uint8_t v___y_4984_; lean_object* v___y_4985_; uint8_t v___y_4986_; lean_object* v___y_4987_; uint8_t v___y_4988_; lean_object* v___x_5002_; lean_object* v_visibilityStx_5003_; lean_object* v___x_5004_; lean_object* v_protectedStx_5005_; uint8_t v___y_5007_; lean_object* v___y_5008_; uint8_t v___y_5009_; lean_object* v___y_5010_; lean_object* v___y_5011_; uint8_t v___y_5028_; lean_object* v___y_5029_; uint8_t v___y_5030_; lean_object* v___y_5031_; lean_object* v___y_5043_; uint8_t v___y_5044_; uint8_t v___y_5045_; uint8_t v___y_5057_; lean_object* v___x_5070_; lean_object* v___x_5071_; uint8_t v___x_5072_; 
v___x_4978_ = lean_unsigned_to_nat(0u);
v_docCommentStx_4979_ = l_Lean_Syntax_getArg(v_stx_4953_, v___x_4978_);
v___x_4980_ = lean_unsigned_to_nat(1u);
v_attrsStx_4981_ = l_Lean_Syntax_getArg(v_stx_4953_, v___x_4980_);
v___x_5002_ = lean_unsigned_to_nat(2u);
v_visibilityStx_5003_ = l_Lean_Syntax_getArg(v_stx_4953_, v___x_5002_);
v___x_5004_ = lean_unsigned_to_nat(3u);
v_protectedStx_5005_ = l_Lean_Syntax_getArg(v_stx_4953_, v___x_5004_);
v___x_5070_ = lean_unsigned_to_nat(4u);
v___x_5071_ = l_Lean_Syntax_getArg(v_stx_4953_, v___x_5070_);
v___x_5072_ = l_Lean_Syntax_isNone(v___x_5071_);
if (v___x_5072_ == 0)
{
lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; uint8_t v___x_5076_; 
v___x_5073_ = l_Lean_Syntax_getArg(v___x_5071_, v___x_4978_);
lean_dec(v___x_5071_);
v___x_5074_ = l_Lean_Syntax_getKind(v___x_5073_);
v___x_5075_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__2));
v___x_5076_ = lean_name_eq(v___x_5074_, v___x_5075_);
lean_dec(v___x_5074_);
if (v___x_5076_ == 0)
{
uint8_t v___x_5077_; 
v___x_5077_ = 2;
v___y_5057_ = v___x_5077_;
goto v___jp_5056_;
}
else
{
uint8_t v___x_5078_; 
v___x_5078_ = 1;
v___y_5057_ = v___x_5078_;
goto v___jp_5056_;
}
}
else
{
uint8_t v___x_5079_; 
lean_dec(v___x_5071_);
v___x_5079_ = 0;
v___y_5057_ = v___x_5079_;
goto v___jp_5056_;
}
v___jp_4957_:
{
lean_object* v___x_4965_; lean_object* v___x_4966_; 
v___x_4965_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_4965_, 0, v_stx_4953_);
lean_ctor_set(v___x_4965_, 1, v___y_4963_);
lean_ctor_set(v___x_4965_, 2, v___y_4962_);
lean_ctor_set_uint8(v___x_4965_, sizeof(void*)*3, v___y_4959_);
lean_ctor_set_uint8(v___x_4965_, sizeof(void*)*3 + 1, v___y_4958_);
lean_ctor_set_uint8(v___x_4965_, sizeof(void*)*3 + 2, v___y_4961_);
lean_ctor_set_uint8(v___x_4965_, sizeof(void*)*3 + 3, v___y_4960_);
lean_ctor_set_uint8(v___x_4965_, sizeof(void*)*3 + 4, v___y_4964_);
v___x_4966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4966_, 0, v___x_4965_);
return v___x_4966_;
}
v___jp_4967_:
{
uint8_t v___x_4975_; 
v___x_4975_ = l_Lean_Syntax_isNone(v___y_4971_);
lean_dec(v___y_4971_);
if (v___x_4975_ == 0)
{
uint8_t v___x_4976_; 
v___x_4976_ = 1;
v___y_4958_ = v___y_4969_;
v___y_4959_ = v___y_4968_;
v___y_4960_ = v___y_4970_;
v___y_4961_ = v___y_4972_;
v___y_4962_ = v_attrs_4974_;
v___y_4963_ = v___y_4973_;
v___y_4964_ = v___x_4976_;
goto v___jp_4957_;
}
else
{
uint8_t v___x_4977_; 
v___x_4977_ = 0;
v___y_4958_ = v___y_4969_;
v___y_4959_ = v___y_4968_;
v___y_4960_ = v___y_4970_;
v___y_4961_ = v___y_4972_;
v___y_4962_ = v_attrs_4974_;
v___y_4963_ = v___y_4973_;
v___y_4964_ = v___x_4977_;
goto v___jp_4957_;
}
}
v___jp_4982_:
{
lean_object* v___x_4989_; 
v___x_4989_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_4981_);
lean_dec(v_attrsStx_4981_);
if (lean_obj_tag(v___x_4989_) == 0)
{
lean_object* v___x_4990_; 
v___x_4990_ = ((lean_object*)(l_Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8___closed__0));
v___y_4968_ = v___y_4983_;
v___y_4969_ = v___y_4988_;
v___y_4970_ = v___y_4984_;
v___y_4971_ = v___y_4985_;
v___y_4972_ = v___y_4986_;
v___y_4973_ = v___y_4987_;
v_attrs_4974_ = v___x_4990_;
goto v___jp_4967_;
}
else
{
lean_object* v_val_4991_; lean_object* v___x_4992_; 
v_val_4991_ = lean_ctor_get(v___x_4989_, 0);
lean_inc(v_val_4991_);
lean_dec_ref_known(v___x_4989_, 1);
v___x_4992_ = l_Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1(v_val_4991_, v___y_4954_, v___y_4955_);
lean_dec(v_val_4991_);
if (lean_obj_tag(v___x_4992_) == 0)
{
lean_object* v_a_4993_; 
v_a_4993_ = lean_ctor_get(v___x_4992_, 0);
lean_inc(v_a_4993_);
lean_dec_ref_known(v___x_4992_, 1);
v___y_4968_ = v___y_4983_;
v___y_4969_ = v___y_4988_;
v___y_4970_ = v___y_4984_;
v___y_4971_ = v___y_4985_;
v___y_4972_ = v___y_4986_;
v___y_4973_ = v___y_4987_;
v_attrs_4974_ = v_a_4993_;
goto v___jp_4967_;
}
else
{
lean_object* v_a_4994_; lean_object* v___x_4996_; uint8_t v_isShared_4997_; uint8_t v_isSharedCheck_5001_; 
lean_dec(v___y_4987_);
lean_dec(v___y_4985_);
lean_dec(v_stx_4953_);
v_a_4994_ = lean_ctor_get(v___x_4992_, 0);
v_isSharedCheck_5001_ = !lean_is_exclusive(v___x_4992_);
if (v_isSharedCheck_5001_ == 0)
{
v___x_4996_ = v___x_4992_;
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
else
{
lean_inc(v_a_4994_);
lean_dec(v___x_4992_);
v___x_4996_ = lean_box(0);
v_isShared_4997_ = v_isSharedCheck_5001_;
goto v_resetjp_4995_;
}
v_resetjp_4995_:
{
lean_object* v___x_4999_; 
if (v_isShared_4997_ == 0)
{
v___x_4999_ = v___x_4996_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5000_; 
v_reuseFailAlloc_5000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5000_, 0, v_a_4994_);
v___x_4999_ = v_reuseFailAlloc_5000_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
return v___x_4999_;
}
}
}
}
}
v___jp_5006_:
{
lean_object* v___x_5012_; 
v___x_5012_ = l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0(v___y_5011_, v___y_4954_, v___y_4955_);
if (lean_obj_tag(v___x_5012_) == 0)
{
lean_object* v_a_5013_; uint8_t v___x_5014_; 
v_a_5013_ = lean_ctor_get(v___x_5012_, 0);
lean_inc(v_a_5013_);
lean_dec_ref_known(v___x_5012_, 1);
v___x_5014_ = l_Lean_Syntax_isNone(v_protectedStx_5005_);
lean_dec(v_protectedStx_5005_);
if (v___x_5014_ == 0)
{
uint8_t v___x_5015_; uint8_t v___x_5016_; 
v___x_5015_ = 1;
v___x_5016_ = lean_unbox(v_a_5013_);
lean_dec(v_a_5013_);
v___y_4983_ = v___x_5016_;
v___y_4984_ = v___y_5007_;
v___y_4985_ = v___y_5008_;
v___y_4986_ = v___y_5009_;
v___y_4987_ = v___y_5010_;
v___y_4988_ = v___x_5015_;
goto v___jp_4982_;
}
else
{
uint8_t v___x_5017_; uint8_t v___x_5018_; 
v___x_5017_ = 0;
v___x_5018_ = lean_unbox(v_a_5013_);
lean_dec(v_a_5013_);
v___y_4983_ = v___x_5018_;
v___y_4984_ = v___y_5007_;
v___y_4985_ = v___y_5008_;
v___y_4986_ = v___y_5009_;
v___y_4987_ = v___y_5010_;
v___y_4988_ = v___x_5017_;
goto v___jp_4982_;
}
}
else
{
lean_object* v_a_5019_; lean_object* v___x_5021_; uint8_t v_isShared_5022_; uint8_t v_isSharedCheck_5026_; 
lean_dec(v___y_5010_);
lean_dec(v___y_5008_);
lean_dec(v_protectedStx_5005_);
lean_dec(v_attrsStx_4981_);
lean_dec(v_stx_4953_);
v_a_5019_ = lean_ctor_get(v___x_5012_, 0);
v_isSharedCheck_5026_ = !lean_is_exclusive(v___x_5012_);
if (v_isSharedCheck_5026_ == 0)
{
v___x_5021_ = v___x_5012_;
v_isShared_5022_ = v_isSharedCheck_5026_;
goto v_resetjp_5020_;
}
else
{
lean_inc(v_a_5019_);
lean_dec(v___x_5012_);
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
lean_ctor_set(v_reuseFailAlloc_5025_, 0, v_a_5019_);
v___x_5024_ = v_reuseFailAlloc_5025_;
goto v_reusejp_5023_;
}
v_reusejp_5023_:
{
return v___x_5024_;
}
}
}
}
v___jp_5027_:
{
lean_object* v___x_5032_; 
v___x_5032_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_5003_);
lean_dec(v_visibilityStx_5003_);
if (lean_obj_tag(v___x_5032_) == 0)
{
lean_object* v___x_5033_; 
v___x_5033_ = lean_box(0);
v___y_5007_ = v___y_5028_;
v___y_5008_ = v___y_5029_;
v___y_5009_ = v___y_5030_;
v___y_5010_ = v___y_5031_;
v___y_5011_ = v___x_5033_;
goto v___jp_5006_;
}
else
{
lean_object* v_val_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5041_; 
v_val_5034_ = lean_ctor_get(v___x_5032_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v___x_5032_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5036_ = v___x_5032_;
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_val_5034_);
lean_dec(v___x_5032_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v___x_5039_; 
if (v_isShared_5037_ == 0)
{
v___x_5039_ = v___x_5036_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_val_5034_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
v___y_5007_ = v___y_5028_;
v___y_5008_ = v___y_5029_;
v___y_5009_ = v___y_5030_;
v___y_5010_ = v___y_5031_;
v___y_5011_ = v___x_5039_;
goto v___jp_5006_;
}
}
}
}
v___jp_5042_:
{
lean_object* v___x_5046_; 
v___x_5046_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_4979_);
lean_dec(v_docCommentStx_4979_);
if (lean_obj_tag(v___x_5046_) == 0)
{
lean_object* v___x_5047_; 
v___x_5047_ = lean_box(0);
v___y_5028_ = v___y_5045_;
v___y_5029_ = v___y_5043_;
v___y_5030_ = v___y_5044_;
v___y_5031_ = v___x_5047_;
goto v___jp_5027_;
}
else
{
lean_object* v_val_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5055_; 
v_val_5048_ = lean_ctor_get(v___x_5046_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5046_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5050_ = v___x_5046_;
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_val_5048_);
lean_dec(v___x_5046_);
v___x_5050_ = lean_box(0);
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
v_resetjp_5049_:
{
lean_object* v___x_5053_; 
if (v_isShared_5051_ == 0)
{
v___x_5053_ = v___x_5050_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_val_5048_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
v___y_5028_ = v___y_5045_;
v___y_5029_ = v___y_5043_;
v___y_5030_ = v___y_5044_;
v___y_5031_ = v___x_5053_;
goto v___jp_5027_;
}
}
}
}
v___jp_5056_:
{
lean_object* v___x_5058_; lean_object* v_unsafeStx_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; uint8_t v___x_5062_; 
v___x_5058_ = lean_unsigned_to_nat(5u);
v_unsafeStx_5059_ = l_Lean_Syntax_getArg(v_stx_4953_, v___x_5058_);
v___x_5060_ = lean_unsigned_to_nat(6u);
v___x_5061_ = l_Lean_Syntax_getArg(v_stx_4953_, v___x_5060_);
v___x_5062_ = l_Lean_Syntax_isNone(v___x_5061_);
if (v___x_5062_ == 0)
{
lean_object* v___x_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; uint8_t v___x_5066_; 
v___x_5063_ = l_Lean_Syntax_getArg(v___x_5061_, v___x_4978_);
lean_dec(v___x_5061_);
v___x_5064_ = l_Lean_Syntax_getKind(v___x_5063_);
v___x_5065_ = ((lean_object*)(l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___closed__1));
v___x_5066_ = lean_name_eq(v___x_5064_, v___x_5065_);
lean_dec(v___x_5064_);
if (v___x_5066_ == 0)
{
uint8_t v___x_5067_; 
v___x_5067_ = 1;
v___y_5043_ = v_unsafeStx_5059_;
v___y_5044_ = v___y_5057_;
v___y_5045_ = v___x_5067_;
goto v___jp_5042_;
}
else
{
uint8_t v___x_5068_; 
v___x_5068_ = 0;
v___y_5043_ = v_unsafeStx_5059_;
v___y_5044_ = v___y_5057_;
v___y_5045_ = v___x_5068_;
goto v___jp_5042_;
}
}
else
{
uint8_t v___x_5069_; 
lean_dec(v___x_5061_);
v___x_5069_ = 2;
v___y_5043_ = v_unsafeStx_5059_;
v___y_5044_ = v___y_5057_;
v___y_5045_ = v___x_5069_;
goto v___jp_5042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0___boxed(lean_object* v_stx_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_){
_start:
{
lean_object* v_res_5084_; 
v_res_5084_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_stx_5080_, v___y_5081_, v___y_5082_);
lean_dec(v___y_5082_);
lean_dec_ref(v___y_5081_);
return v_res_5084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3(lean_object* v_mods_5085_, lean_object* v___x_5086_, lean_object* v_projId_5087_, lean_object* v___x_5088_, lean_object* v___x_5089_, lean_object* v___x_5090_, lean_object* v_params_5091_, lean_object* v___x_5092_, lean_object* v___x_5093_, lean_object* v_optDeriving_5094_, lean_object* v___x_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_){
_start:
{
lean_object* v___x_5099_; 
lean_inc(v_mods_5085_);
v___x_5099_ = l_Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0(v_mods_5085_, v___y_5096_, v___y_5097_);
if (lean_obj_tag(v___x_5099_) == 0)
{
lean_object* v_a_5100_; lean_object* v___f_5101_; lean_object* v___x_5102_; lean_object* v_env_5103_; uint8_t v___x_5104_; lean_object* v___x_5105_; 
v_a_5100_ = lean_ctor_get(v___x_5099_, 0);
lean_inc_n(v_a_5100_, 2);
lean_dec_ref_known(v___x_5099_, 1);
v___f_5101_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__2___boxed), 15, 12);
lean_closure_set(v___f_5101_, 0, v___x_5086_);
lean_closure_set(v___f_5101_, 1, v_a_5100_);
lean_closure_set(v___f_5101_, 2, v_projId_5087_);
lean_closure_set(v___f_5101_, 3, v___x_5088_);
lean_closure_set(v___f_5101_, 4, v___x_5089_);
lean_closure_set(v___f_5101_, 5, v___x_5090_);
lean_closure_set(v___f_5101_, 6, v_params_5091_);
lean_closure_set(v___f_5101_, 7, v___x_5092_);
lean_closure_set(v___f_5101_, 8, v_mods_5085_);
lean_closure_set(v___f_5101_, 9, v___x_5093_);
lean_closure_set(v___f_5101_, 10, v_optDeriving_5094_);
lean_closure_set(v___f_5101_, 11, v___x_5095_);
v___x_5102_ = lean_st_ref_get(v___y_5097_);
v_env_5103_ = lean_ctor_get(v___x_5102_, 0);
lean_inc_ref(v_env_5103_);
lean_dec(v___x_5102_);
v___x_5104_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_5103_, v_a_5100_);
lean_dec(v_a_5100_);
lean_dec_ref(v_env_5103_);
v___x_5105_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5101_, v___x_5104_, v___y_5096_, v___y_5097_);
return v___x_5105_;
}
else
{
lean_object* v_a_5106_; lean_object* v___x_5108_; uint8_t v_isShared_5109_; uint8_t v_isSharedCheck_5113_; 
lean_dec(v___x_5095_);
lean_dec(v_optDeriving_5094_);
lean_dec(v___x_5093_);
lean_dec(v___x_5092_);
lean_dec_ref(v_params_5091_);
lean_dec_ref(v___x_5090_);
lean_dec_ref(v___x_5089_);
lean_dec_ref(v___x_5088_);
lean_dec(v_projId_5087_);
lean_dec(v___x_5086_);
lean_dec(v_mods_5085_);
v_a_5106_ = lean_ctor_get(v___x_5099_, 0);
v_isSharedCheck_5113_ = !lean_is_exclusive(v___x_5099_);
if (v_isSharedCheck_5113_ == 0)
{
v___x_5108_ = v___x_5099_;
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
else
{
lean_inc(v_a_5106_);
lean_dec(v___x_5099_);
v___x_5108_ = lean_box(0);
v_isShared_5109_ = v_isSharedCheck_5113_;
goto v_resetjp_5107_;
}
v_resetjp_5107_:
{
lean_object* v___x_5111_; 
if (v_isShared_5109_ == 0)
{
v___x_5111_ = v___x_5108_;
goto v_reusejp_5110_;
}
else
{
lean_object* v_reuseFailAlloc_5112_; 
v_reuseFailAlloc_5112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5112_, 0, v_a_5106_);
v___x_5111_ = v_reuseFailAlloc_5112_;
goto v_reusejp_5110_;
}
v_reusejp_5110_:
{
return v___x_5111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___lam__3___boxed(lean_object* v_mods_5114_, lean_object* v___x_5115_, lean_object* v_projId_5116_, lean_object* v___x_5117_, lean_object* v___x_5118_, lean_object* v___x_5119_, lean_object* v_params_5120_, lean_object* v___x_5121_, lean_object* v___x_5122_, lean_object* v_optDeriving_5123_, lean_object* v___x_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_){
_start:
{
lean_object* v_res_5128_; 
v_res_5128_ = l_Lean_Elab_Command_elabNewtype___lam__3(v_mods_5114_, v___x_5115_, v_projId_5116_, v___x_5117_, v___x_5118_, v___x_5119_, v_params_5120_, v___x_5121_, v___x_5122_, v_optDeriving_5123_, v___x_5124_, v___y_5125_, v___y_5126_);
lean_dec(v___y_5126_);
lean_dec_ref(v___y_5125_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype(lean_object* v_stx_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_){
_start:
{
lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v_mods_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v___x_5142_; lean_object* v_params_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; lean_object* v___x_5146_; lean_object* v_projId_5147_; lean_object* v___x_5148_; lean_object* v_optDeriving_5149_; lean_object* v___f_5150_; lean_object* v___x_5151_; 
v___x_5133_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__0));
v___x_5134_ = ((lean_object*)(l_Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28___lam__0___closed__1));
v___x_5135_ = ((lean_object*)(l_Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0___closed__5));
v___x_5136_ = lean_box(0);
v___x_5137_ = lean_unsigned_to_nat(0u);
v_mods_5138_ = l_Lean_Syntax_getArg(v_stx_5129_, v___x_5137_);
v___x_5139_ = lean_unsigned_to_nat(2u);
v___x_5140_ = l_Lean_Syntax_getArg(v_stx_5129_, v___x_5139_);
v___x_5141_ = lean_unsigned_to_nat(3u);
v___x_5142_ = l_Lean_Syntax_getArg(v_stx_5129_, v___x_5141_);
v_params_5143_ = l_Lean_Syntax_getArgs(v___x_5142_);
lean_dec(v___x_5142_);
v___x_5144_ = lean_unsigned_to_nat(5u);
v___x_5145_ = l_Lean_Syntax_getArg(v_stx_5129_, v___x_5144_);
v___x_5146_ = lean_unsigned_to_nat(7u);
v_projId_5147_ = l_Lean_Syntax_getArg(v_stx_5129_, v___x_5146_);
v___x_5148_ = lean_unsigned_to_nat(8u);
v_optDeriving_5149_ = l_Lean_Syntax_getArg(v_stx_5129_, v___x_5148_);
v___f_5150_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___lam__3___boxed), 14, 11);
lean_closure_set(v___f_5150_, 0, v_mods_5138_);
lean_closure_set(v___f_5150_, 1, v___x_5140_);
lean_closure_set(v___f_5150_, 2, v_projId_5147_);
lean_closure_set(v___f_5150_, 3, v___x_5133_);
lean_closure_set(v___f_5150_, 4, v___x_5134_);
lean_closure_set(v___f_5150_, 5, v___x_5135_);
lean_closure_set(v___f_5150_, 6, v_params_5143_);
lean_closure_set(v___f_5150_, 7, v___x_5145_);
lean_closure_set(v___f_5150_, 8, v___x_5136_);
lean_closure_set(v___f_5150_, 9, v_optDeriving_5149_);
lean_closure_set(v___f_5150_, 10, v___x_5137_);
v___x_5151_ = l_Lean_Elab_Command_getScope___redArg(v___y_5131_);
if (lean_obj_tag(v___x_5151_) == 0)
{
lean_object* v_a_5152_; uint8_t v_isPublic_5153_; lean_object* v___x_5154_; 
v_a_5152_ = lean_ctor_get(v___x_5151_, 0);
lean_inc(v_a_5152_);
lean_dec_ref_known(v___x_5151_, 1);
v_isPublic_5153_ = lean_ctor_get_uint8(v_a_5152_, sizeof(void*)*10 + 1);
lean_dec(v_a_5152_);
v___x_5154_ = l_Lean_withExporting___at___00Lean_Elab_Command_elabNewtype_spec__15___redArg(v___f_5150_, v_isPublic_5153_, v___y_5130_, v___y_5131_);
return v___x_5154_;
}
else
{
lean_object* v_a_5155_; lean_object* v___x_5157_; uint8_t v_isShared_5158_; uint8_t v_isSharedCheck_5162_; 
lean_dec_ref(v___f_5150_);
v_a_5155_ = lean_ctor_get(v___x_5151_, 0);
v_isSharedCheck_5162_ = !lean_is_exclusive(v___x_5151_);
if (v_isSharedCheck_5162_ == 0)
{
v___x_5157_ = v___x_5151_;
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
else
{
lean_inc(v_a_5155_);
lean_dec(v___x_5151_);
v___x_5157_ = lean_box(0);
v_isShared_5158_ = v_isSharedCheck_5162_;
goto v_resetjp_5156_;
}
v_resetjp_5156_:
{
lean_object* v___x_5160_; 
if (v_isShared_5158_ == 0)
{
v___x_5160_ = v___x_5157_;
goto v_reusejp_5159_;
}
else
{
lean_object* v_reuseFailAlloc_5161_; 
v_reuseFailAlloc_5161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5161_, 0, v_a_5155_);
v___x_5160_ = v_reuseFailAlloc_5161_;
goto v_reusejp_5159_;
}
v_reusejp_5159_:
{
return v___x_5160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Command_elabNewtype___boxed(lean_object* v_stx_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_){
_start:
{
lean_object* v_res_5167_; 
v_res_5167_ = l_Lean_Elab_Command_elabNewtype(v_stx_5163_, v___y_5164_, v___y_5165_);
lean_dec(v___y_5165_);
lean_dec_ref(v___y_5164_);
lean_dec(v_stx_5163_);
return v_res_5167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(lean_object* v_stx_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_){
_start:
{
lean_object* v___x_5172_; 
v___x_5172_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___redArg(v_stx_5168_, v___y_5169_);
return v___x_5172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5___boxed(lean_object* v_stx_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_){
_start:
{
lean_object* v_res_5177_; 
v_res_5177_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__5(v_stx_5173_, v___y_5174_, v___y_5175_);
lean_dec(v___y_5175_);
lean_dec_ref(v___y_5174_);
lean_dec(v_stx_5173_);
return v_res_5177_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(lean_object* v_declName_5178_, lean_object* v_declRanges_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_){
_start:
{
lean_object* v___x_5183_; 
v___x_5183_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___redArg(v_declName_5178_, v_declRanges_5179_, v___y_5181_);
return v___x_5183_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6___boxed(lean_object* v_declName_5184_, lean_object* v_declRanges_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_){
_start:
{
lean_object* v_res_5189_; 
v_res_5189_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Elab_Command_elabNewtype_spec__3_spec__6(v_declName_5184_, v_declRanges_5185_, v___y_5186_, v___y_5187_);
lean_dec(v___y_5187_);
lean_dec_ref(v___y_5186_);
return v_res_5189_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(lean_object* v_00_u03b1_5190_, lean_object* v_x_5191_, uint8_t v_isExporting_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_){
_start:
{
lean_object* v___x_5200_; 
v___x_5200_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___redArg(v_x_5191_, v_isExporting_5192_, v___y_5193_, v___y_5194_, v___y_5195_, v___y_5196_, v___y_5197_, v___y_5198_);
return v___x_5200_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13___boxed(lean_object* v_00_u03b1_5201_, lean_object* v_x_5202_, lean_object* v_isExporting_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_){
_start:
{
uint8_t v_isExporting_boxed_5211_; lean_object* v_res_5212_; 
v_isExporting_boxed_5211_ = lean_unbox(v_isExporting_5203_);
v_res_5212_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6_spec__13(v_00_u03b1_5201_, v_x_5202_, v_isExporting_boxed_5211_, v___y_5204_, v___y_5205_, v___y_5206_, v___y_5207_, v___y_5208_, v___y_5209_);
lean_dec(v___y_5209_);
lean_dec_ref(v___y_5208_);
lean_dec(v___y_5207_);
lean_dec_ref(v___y_5206_);
lean_dec(v___y_5205_);
lean_dec_ref(v___y_5204_);
return v_res_5212_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(lean_object* v_00_u03b1_5213_, lean_object* v_x_5214_, uint8_t v_when_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_){
_start:
{
lean_object* v___x_5223_; 
v___x_5223_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___redArg(v_x_5214_, v_when_5215_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_);
return v___x_5223_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6___boxed(lean_object* v_00_u03b1_5224_, lean_object* v_x_5225_, lean_object* v_when_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_){
_start:
{
uint8_t v_when_boxed_5234_; lean_object* v_res_5235_; 
v_when_boxed_5234_ = lean_unbox(v_when_5226_);
v_res_5235_ = l_Lean_withoutExporting___at___00Lean_Elab_Command_elabNewtype_spec__6(v_00_u03b1_5224_, v_x_5225_, v_when_boxed_5234_, v___y_5227_, v___y_5228_, v___y_5229_, v___y_5230_, v___y_5231_, v___y_5232_);
lean_dec(v___y_5232_);
lean_dec_ref(v___y_5231_);
lean_dec(v___y_5230_);
lean_dec_ref(v___y_5229_);
lean_dec(v___y_5228_);
lean_dec_ref(v___y_5227_);
return v_res_5235_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(lean_object* v_declName_5236_, uint8_t v_s_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_){
_start:
{
lean_object* v___x_5241_; 
v___x_5241_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___redArg(v_declName_5236_, v_s_5237_, v___y_5239_);
return v___x_5241_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20___boxed(lean_object* v_declName_5242_, lean_object* v_s_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_){
_start:
{
uint8_t v_s_boxed_5247_; lean_object* v_res_5248_; 
v_s_boxed_5247_ = lean_unbox(v_s_5243_);
v_res_5248_ = l_Lean_setReducibilityStatus___at___00Lean_setIrreducibleAttribute___at___00Lean_Elab_Command_elabNewtype_spec__11_spec__20(v_declName_5242_, v_s_boxed_5247_, v___y_5244_, v___y_5245_);
lean_dec(v___y_5245_);
lean_dec_ref(v___y_5244_);
return v_res_5248_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(lean_object* v_as_5249_, lean_object* v_as_x27_5250_, lean_object* v_b_5251_, lean_object* v_a_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_){
_start:
{
lean_object* v___x_5256_; 
v___x_5256_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___redArg(v_as_x27_5250_, v_b_5251_, v___y_5253_, v___y_5254_);
return v___x_5256_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12___boxed(lean_object* v_as_5257_, lean_object* v_as_x27_5258_, lean_object* v_b_5259_, lean_object* v_a_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_){
_start:
{
lean_object* v_res_5264_; 
v_res_5264_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__12(v_as_5257_, v_as_x27_5258_, v_b_5259_, v_a_5260_, v___y_5261_, v___y_5262_);
lean_dec(v___y_5262_);
lean_dec_ref(v___y_5261_);
lean_dec(v_as_x27_5258_);
lean_dec(v_as_5257_);
return v_res_5264_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(lean_object* v_as_5265_, lean_object* v_as_x27_5266_, lean_object* v_b_5267_, lean_object* v_a_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_){
_start:
{
lean_object* v___x_5272_; 
v___x_5272_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___redArg(v_as_x27_5266_, v_b_5267_, v___y_5269_, v___y_5270_);
return v___x_5272_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13___boxed(lean_object* v_as_5273_, lean_object* v_as_x27_5274_, lean_object* v_b_5275_, lean_object* v_a_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_){
_start:
{
lean_object* v_res_5280_; 
v_res_5280_ = l_List_forIn_x27_loop___at___00Lean_Elab_Command_elabNewtype_spec__13(v_as_5273_, v_as_x27_5274_, v_b_5275_, v_a_5276_, v___y_5277_, v___y_5278_);
lean_dec(v___y_5278_);
lean_dec_ref(v___y_5277_);
lean_dec(v_as_x27_5274_);
lean_dec(v_as_5273_);
return v_res_5280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(lean_object* v_t_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_){
_start:
{
lean_object* v___x_5285_; 
v___x_5285_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___redArg(v_t_5281_, v___y_5283_);
return v___x_5285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18___boxed(lean_object* v_t_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_, lean_object* v___y_5289_){
_start:
{
lean_object* v_res_5290_; 
v_res_5290_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__9_spec__18(v_t_5286_, v___y_5287_, v___y_5288_);
lean_dec(v___y_5288_);
lean_dec_ref(v___y_5287_);
return v_res_5290_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(lean_object* v_00_u03b1_5291_, lean_object* v_constName_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_){
_start:
{
lean_object* v___x_5300_; 
v___x_5300_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___redArg(v_constName_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_);
return v___x_5300_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11___boxed(lean_object* v_00_u03b1_5301_, lean_object* v_constName_5302_, lean_object* v___y_5303_, lean_object* v___y_5304_, lean_object* v___y_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_){
_start:
{
lean_object* v_res_5310_; 
v_res_5310_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11(v_00_u03b1_5301_, v_constName_5302_, v___y_5303_, v___y_5304_, v___y_5305_, v___y_5306_, v___y_5307_, v___y_5308_);
lean_dec(v___y_5308_);
lean_dec_ref(v___y_5307_);
lean_dec(v___y_5306_);
lean_dec_ref(v___y_5305_);
lean_dec(v___y_5304_);
lean_dec_ref(v___y_5303_);
return v_res_5310_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_5311_, lean_object* v_ref_5312_, lean_object* v_msg_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_){
_start:
{
lean_object* v___x_5317_; 
v___x_5317_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___redArg(v_ref_5312_, v_msg_5313_, v___y_5314_, v___y_5315_);
return v___x_5317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_5318_, lean_object* v_ref_5319_, lean_object* v_msg_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_){
_start:
{
lean_object* v_res_5324_; 
v_res_5324_ = l_Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5(v_00_u03b1_5318_, v_ref_5319_, v_msg_5320_, v___y_5321_, v___y_5322_);
lean_dec(v___y_5322_);
lean_dec_ref(v___y_5321_);
lean_dec(v_ref_5319_);
return v_res_5324_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(lean_object* v_00_u03b1_5325_, lean_object* v_ref_5326_, lean_object* v_constName_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_){
_start:
{
lean_object* v___x_5335_; 
v___x_5335_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___redArg(v_ref_5326_, v_constName_5327_, v___y_5328_, v___y_5329_, v___y_5330_, v___y_5331_, v___y_5332_, v___y_5333_);
return v___x_5335_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21___boxed(lean_object* v_00_u03b1_5336_, lean_object* v_ref_5337_, lean_object* v_constName_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_){
_start:
{
lean_object* v_res_5346_; 
v_res_5346_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21(v_00_u03b1_5336_, v_ref_5337_, v_constName_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_, v___y_5343_, v___y_5344_);
lean_dec(v___y_5344_);
lean_dec_ref(v___y_5343_);
lean_dec(v___y_5342_);
lean_dec_ref(v___y_5341_);
lean_dec(v___y_5340_);
lean_dec_ref(v___y_5339_);
lean_dec(v_ref_5337_);
return v_res_5346_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(lean_object* v_msgData_5347_, lean_object* v___y_5348_, lean_object* v___y_5349_){
_start:
{
lean_object* v___x_5351_; 
v___x_5351_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___redArg(v_msgData_5347_, v___y_5349_);
return v___x_5351_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28___boxed(lean_object* v_msgData_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_){
_start:
{
lean_object* v_res_5356_; 
v_res_5356_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__28(v_msgData_5352_, v___y_5353_, v___y_5354_);
lean_dec(v___y_5354_);
lean_dec_ref(v___y_5353_);
return v_res_5356_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(lean_object* v_00_u03b1_5357_, lean_object* v_msg_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_){
_start:
{
lean_object* v___x_5362_; 
v___x_5362_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___redArg(v_msg_5358_, v___y_5359_, v___y_5360_);
return v___x_5362_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21___boxed(lean_object* v_00_u03b1_5363_, lean_object* v_msg_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_){
_start:
{
lean_object* v_res_5368_; 
v_res_5368_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21(v_00_u03b1_5363_, v_msg_5364_, v___y_5365_, v___y_5366_);
lean_dec(v___y_5366_);
lean_dec_ref(v___y_5365_);
return v_res_5368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(lean_object* v_o_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_){
_start:
{
lean_object* v___x_5373_; 
v___x_5373_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___redArg(v_o_5369_, v___y_5371_);
return v___x_5373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32___boxed(lean_object* v_o_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_){
_start:
{
lean_object* v_res_5378_; 
v_res_5378_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Linter_logLintIf___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__6_spec__23_spec__32(v_o_5374_, v___y_5375_, v___y_5376_);
lean_dec(v___y_5376_);
lean_dec_ref(v___y_5375_);
return v_res_5378_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(lean_object* v_00_u03b1_5379_, lean_object* v_constName_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_){
_start:
{
lean_object* v___x_5384_; 
v___x_5384_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___redArg(v_constName_5380_, v___y_5381_, v___y_5382_);
return v___x_5384_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32___boxed(lean_object* v_00_u03b1_5385_, lean_object* v_constName_5386_, lean_object* v___y_5387_, lean_object* v___y_5388_, lean_object* v___y_5389_){
_start:
{
lean_object* v_res_5390_; 
v_res_5390_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32(v_00_u03b1_5385_, v_constName_5386_, v___y_5387_, v___y_5388_);
lean_dec(v___y_5388_);
lean_dec_ref(v___y_5387_);
return v_res_5390_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(lean_object* v_00_u03b1_5391_, lean_object* v_ref_5392_, lean_object* v_msg_5393_, lean_object* v_declHint_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_){
_start:
{
lean_object* v___x_5402_; 
v___x_5402_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___redArg(v_ref_5392_, v_msg_5393_, v_declHint_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_, v___y_5399_, v___y_5400_);
return v___x_5402_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37___boxed(lean_object* v_00_u03b1_5403_, lean_object* v_ref_5404_, lean_object* v_msg_5405_, lean_object* v_declHint_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_, lean_object* v___y_5412_, lean_object* v___y_5413_){
_start:
{
lean_object* v_res_5414_; 
v_res_5414_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37(v_00_u03b1_5403_, v_ref_5404_, v_msg_5405_, v_declHint_5406_, v___y_5407_, v___y_5408_, v___y_5409_, v___y_5410_, v___y_5411_, v___y_5412_);
lean_dec(v___y_5412_);
lean_dec_ref(v___y_5411_);
lean_dec(v___y_5410_);
lean_dec_ref(v___y_5409_);
lean_dec(v___y_5408_);
lean_dec_ref(v___y_5407_);
lean_dec(v_ref_5404_);
return v_res_5414_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(lean_object* v_ref_5415_, lean_object* v_msgData_5416_, uint8_t v_severity_5417_, uint8_t v_isSilent_5418_, lean_object* v___y_5419_, lean_object* v___y_5420_, lean_object* v___y_5421_, lean_object* v___y_5422_, lean_object* v___y_5423_, lean_object* v___y_5424_){
_start:
{
lean_object* v___x_5426_; 
v___x_5426_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___redArg(v_ref_5415_, v_msgData_5416_, v_severity_5417_, v_isSilent_5418_, v___y_5421_, v___y_5422_, v___y_5423_, v___y_5424_);
return v___x_5426_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40___boxed(lean_object* v_ref_5427_, lean_object* v_msgData_5428_, lean_object* v_severity_5429_, lean_object* v_isSilent_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_, lean_object* v___y_5436_, lean_object* v___y_5437_){
_start:
{
uint8_t v_severity_boxed_5438_; uint8_t v_isSilent_boxed_5439_; lean_object* v_res_5440_; 
v_severity_boxed_5438_ = lean_unbox(v_severity_5429_);
v_isSilent_boxed_5439_ = lean_unbox(v_isSilent_5430_);
v_res_5440_ = l_Lean_logAt___at___00Lean_logErrorAt___at___00Lean_Elab_logException___at___00Lean_Elab_withLogging___at___00Lean_Elab_Command_elabNewtype_spec__7_spec__15_spec__26_spec__40(v_ref_5427_, v_msgData_5428_, v_severity_boxed_5438_, v_isSilent_boxed_5439_, v___y_5431_, v___y_5432_, v___y_5433_, v___y_5434_, v___y_5435_, v___y_5436_);
lean_dec(v___y_5436_);
lean_dec_ref(v___y_5435_);
lean_dec(v___y_5434_);
lean_dec_ref(v___y_5433_);
lean_dec(v___y_5432_);
lean_dec_ref(v___y_5431_);
lean_dec(v_ref_5427_);
return v_res_5440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(lean_object* v_msgData_5441_, lean_object* v_macroStack_5442_, lean_object* v___y_5443_, lean_object* v___y_5444_){
_start:
{
lean_object* v___x_5446_; 
v___x_5446_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___redArg(v_msgData_5441_, v_macroStack_5442_, v___y_5444_);
return v___x_5446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29___boxed(lean_object* v_msgData_5447_, lean_object* v_macroStack_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_){
_start:
{
lean_object* v_res_5452_; 
v_res_5452_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_elabVisibility___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__0_spec__5_spec__21_spec__29(v_msgData_5447_, v_macroStack_5448_, v___y_5449_, v___y_5450_);
lean_dec(v___y_5450_);
lean_dec_ref(v___y_5449_);
return v_res_5452_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(lean_object* v_00_u03b1_5453_, lean_object* v_x_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_){
_start:
{
lean_object* v___x_5457_; 
v___x_5457_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___redArg(v_x_5454_, v___y_5456_);
return v___x_5457_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48___boxed(lean_object* v_00_u03b1_5458_, lean_object* v_x_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_){
_start:
{
lean_object* v_res_5462_; 
v_res_5462_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__48(v_00_u03b1_5458_, v_x_5459_, v___y_5460_, v___y_5461_);
lean_dec_ref(v___y_5460_);
lean_dec_ref(v_x_5459_);
return v_res_5462_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(lean_object* v_00_u03b1_5463_, lean_object* v_ref_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v___x_5468_; 
v___x_5468_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___redArg(v_ref_5464_);
return v___x_5468_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51___boxed(lean_object* v_00_u03b1_5469_, lean_object* v_ref_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_){
_start:
{
lean_object* v_res_5474_; 
v_res_5474_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__51(v_00_u03b1_5469_, v_ref_5470_, v___y_5471_, v___y_5472_);
lean_dec(v___y_5472_);
lean_dec_ref(v___y_5471_);
return v_res_5474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(lean_object* v_00_u03b1_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_){
_start:
{
lean_object* v___x_5479_; 
v___x_5479_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___redArg();
return v___x_5479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52___boxed(lean_object* v_00_u03b1_5480_, lean_object* v___y_5481_, lean_object* v___y_5482_, lean_object* v___y_5483_){
_start:
{
lean_object* v_res_5484_; 
v_res_5484_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__52(v_00_u03b1_5480_, v___y_5481_, v___y_5482_);
lean_dec(v___y_5482_);
lean_dec_ref(v___y_5481_);
return v_res_5484_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(lean_object* v_00_u03b1_5485_, lean_object* v_x_5486_, lean_object* v___y_5487_, lean_object* v___y_5488_){
_start:
{
lean_object* v___x_5490_; 
v___x_5490_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___redArg(v_x_5486_, v___y_5487_, v___y_5488_);
return v___x_5490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40___boxed(lean_object* v_00_u03b1_5491_, lean_object* v_x_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_){
_start:
{
lean_object* v_res_5496_; 
v_res_5496_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40(v_00_u03b1_5491_, v_x_5492_, v___y_5493_, v___y_5494_);
lean_dec(v___y_5494_);
lean_dec_ref(v___y_5493_);
return v_res_5496_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(lean_object* v_00_u03b1_5497_, lean_object* v_x_5498_, uint8_t v_when_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_){
_start:
{
lean_object* v___x_5503_; 
v___x_5503_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___redArg(v_x_5498_, v_when_5499_, v___y_5500_, v___y_5501_);
return v___x_5503_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42___boxed(lean_object* v_00_u03b1_5504_, lean_object* v_x_5505_, lean_object* v_when_5506_, lean_object* v___y_5507_, lean_object* v___y_5508_, lean_object* v___y_5509_){
_start:
{
uint8_t v_when_boxed_5510_; lean_object* v_res_5511_; 
v_when_boxed_5510_ = lean_unbox(v_when_5506_);
v_res_5511_ = l_Lean_withoutExporting___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__42(v_00_u03b1_5504_, v_x_5505_, v_when_boxed_5510_, v___y_5507_, v___y_5508_);
lean_dec(v___y_5508_);
lean_dec_ref(v___y_5507_);
return v_res_5511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(lean_object* v_00_u03b1_5512_, lean_object* v_ref_5513_, lean_object* v_constName_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_){
_start:
{
lean_object* v___x_5518_; 
v___x_5518_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___redArg(v_ref_5513_, v_constName_5514_, v___y_5515_, v___y_5516_);
return v___x_5518_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46___boxed(lean_object* v_00_u03b1_5519_, lean_object* v_ref_5520_, lean_object* v_constName_5521_, lean_object* v___y_5522_, lean_object* v___y_5523_, lean_object* v___y_5524_){
_start:
{
lean_object* v_res_5525_; 
v_res_5525_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46(v_00_u03b1_5519_, v_ref_5520_, v_constName_5521_, v___y_5522_, v___y_5523_);
lean_dec(v___y_5523_);
lean_dec_ref(v___y_5522_);
lean_dec(v_ref_5520_);
return v_res_5525_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(lean_object* v_msg_5526_, lean_object* v_declHint_5527_, lean_object* v___y_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_){
_start:
{
lean_object* v___x_5535_; 
v___x_5535_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___redArg(v_msg_5526_, v_declHint_5527_, v___y_5533_);
return v___x_5535_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64___boxed(lean_object* v_msg_5536_, lean_object* v_declHint_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_){
_start:
{
lean_object* v_res_5545_; 
v_res_5545_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__49_spec__64(v_msg_5536_, v_declHint_5537_, v___y_5538_, v___y_5539_, v___y_5540_, v___y_5541_, v___y_5542_, v___y_5543_);
lean_dec(v___y_5543_);
lean_dec_ref(v___y_5542_);
lean_dec(v___y_5541_);
lean_dec_ref(v___y_5540_);
lean_dec(v___y_5539_);
lean_dec_ref(v___y_5538_);
return v_res_5545_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(lean_object* v_00_u03b1_5546_, lean_object* v_ref_5547_, lean_object* v_msg_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_){
_start:
{
lean_object* v___x_5556_; 
v___x_5556_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___redArg(v_ref_5547_, v_msg_5548_, v___y_5549_, v___y_5550_, v___y_5551_, v___y_5552_, v___y_5553_, v___y_5554_);
return v___x_5556_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50___boxed(lean_object* v_00_u03b1_5557_, lean_object* v_ref_5558_, lean_object* v_msg_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_){
_start:
{
lean_object* v_res_5567_; 
v_res_5567_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__5_spec__11_spec__21_spec__37_spec__50(v_00_u03b1_5557_, v_ref_5558_, v_msg_5559_, v___y_5560_, v___y_5561_, v___y_5562_, v___y_5563_, v___y_5564_, v___y_5565_);
lean_dec(v___y_5565_);
lean_dec_ref(v___y_5564_);
lean_dec(v___y_5563_);
lean_dec_ref(v___y_5562_);
lean_dec(v___y_5561_);
lean_dec_ref(v___y_5560_);
lean_dec(v_ref_5558_);
return v_res_5567_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(lean_object* v_as_5568_, lean_object* v_as_x27_5569_, lean_object* v_b_5570_, lean_object* v_a_5571_, lean_object* v___y_5572_, lean_object* v___y_5573_){
_start:
{
lean_object* v___x_5575_; 
v___x_5575_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___redArg(v_as_x27_5569_, v_b_5570_, v___y_5572_, v___y_5573_);
return v___x_5575_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49___boxed(lean_object* v_as_5576_, lean_object* v_as_x27_5577_, lean_object* v_b_5578_, lean_object* v_a_5579_, lean_object* v___y_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_){
_start:
{
lean_object* v_res_5583_; 
v_res_5583_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__40_spec__49(v_as_5576_, v_as_x27_5577_, v_b_5578_, v_a_5579_, v___y_5580_, v___y_5581_);
lean_dec(v___y_5581_);
lean_dec_ref(v___y_5580_);
lean_dec(v_as_x27_5577_);
lean_dec(v_as_5576_);
return v_res_5583_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(lean_object* v_00_u03b2_5584_, lean_object* v_m_5585_, lean_object* v_a_5586_){
_start:
{
lean_object* v___x_5587_; 
v___x_5587_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___redArg(v_m_5585_, v_a_5586_);
return v___x_5587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56___boxed(lean_object* v_00_u03b2_5588_, lean_object* v_m_5589_, lean_object* v_a_5590_){
_start:
{
lean_object* v_res_5591_; 
v_res_5591_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56(v_00_u03b2_5588_, v_m_5589_, v_a_5590_);
lean_dec(v_a_5590_);
lean_dec_ref(v_m_5589_);
return v_res_5591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(lean_object* v_00_u03b1_5592_, lean_object* v_ref_5593_, lean_object* v_msg_5594_, lean_object* v_declHint_5595_, lean_object* v___y_5596_, lean_object* v___y_5597_){
_start:
{
lean_object* v___x_5599_; 
v___x_5599_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___redArg(v_ref_5593_, v_msg_5594_, v_declHint_5595_, v___y_5596_, v___y_5597_);
return v___x_5599_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61___boxed(lean_object* v_00_u03b1_5600_, lean_object* v_ref_5601_, lean_object* v_msg_5602_, lean_object* v_declHint_5603_, lean_object* v___y_5604_, lean_object* v___y_5605_, lean_object* v___y_5606_){
_start:
{
lean_object* v_res_5607_; 
v_res_5607_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61(v_00_u03b1_5600_, v_ref_5601_, v_msg_5602_, v_declHint_5603_, v___y_5604_, v___y_5605_);
lean_dec(v___y_5605_);
lean_dec_ref(v___y_5604_);
lean_dec(v_ref_5601_);
return v_res_5607_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(lean_object* v_00_u03b2_5608_, lean_object* v_x_5609_, lean_object* v_x_5610_){
_start:
{
uint8_t v___x_5611_; 
v___x_5611_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___redArg(v_x_5609_, v_x_5610_);
return v___x_5611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60___boxed(lean_object* v_00_u03b2_5612_, lean_object* v_x_5613_, lean_object* v_x_5614_){
_start:
{
uint8_t v_res_5615_; lean_object* v_r_5616_; 
v_res_5615_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60(v_00_u03b2_5612_, v_x_5613_, v_x_5614_);
lean_dec_ref(v_x_5614_);
lean_dec_ref(v_x_5613_);
v_r_5616_ = lean_box(v_res_5615_);
return v_r_5616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(lean_object* v_00_u03b2_5617_, lean_object* v_a_5618_, lean_object* v_x_5619_){
_start:
{
lean_object* v___x_5620_; 
v___x_5620_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___redArg(v_a_5618_, v_x_5619_);
return v___x_5620_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63___boxed(lean_object* v_00_u03b2_5621_, lean_object* v_a_5622_, lean_object* v_x_5623_){
_start:
{
lean_object* v_res_5624_; 
v_res_5624_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__56_spec__63(v_00_u03b2_5621_, v_a_5622_, v_x_5623_);
lean_dec(v_x_5623_);
lean_dec(v_a_5622_);
return v_res_5624_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(lean_object* v_msg_5625_, lean_object* v_declHint_5626_, lean_object* v___y_5627_, lean_object* v___y_5628_){
_start:
{
lean_object* v___x_5630_; 
v___x_5630_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___redArg(v_msg_5625_, v_declHint_5626_, v___y_5628_);
return v___x_5630_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72___boxed(lean_object* v_msg_5631_, lean_object* v_declHint_5632_, lean_object* v___y_5633_, lean_object* v___y_5634_, lean_object* v___y_5635_){
_start:
{
lean_object* v_res_5636_; 
v_res_5636_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_addConstInfo___at___00Lean_Elab_Command_elabNewtype_spec__4_spec__8_spec__16_spec__32_spec__46_spec__61_spec__67_spec__72(v_msg_5631_, v_declHint_5632_, v___y_5633_, v___y_5634_);
lean_dec(v___y_5634_);
lean_dec_ref(v___y_5633_);
return v_res_5636_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(lean_object* v_00_u03b2_5637_, lean_object* v_x_5638_, size_t v_x_5639_, lean_object* v_x_5640_){
_start:
{
uint8_t v___x_5641_; 
v___x_5641_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___redArg(v_x_5638_, v_x_5639_, v_x_5640_);
return v___x_5641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66___boxed(lean_object* v_00_u03b2_5642_, lean_object* v_x_5643_, lean_object* v_x_5644_, lean_object* v_x_5645_){
_start:
{
size_t v_x_56476__boxed_5646_; uint8_t v_res_5647_; lean_object* v_r_5648_; 
v_x_56476__boxed_5646_ = lean_unbox_usize(v_x_5644_);
lean_dec(v_x_5644_);
v_res_5647_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66(v_00_u03b2_5642_, v_x_5643_, v_x_56476__boxed_5646_, v_x_5645_);
lean_dec_ref(v_x_5645_);
lean_dec_ref(v_x_5643_);
v_r_5648_ = lean_box(v_res_5647_);
return v_r_5648_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(lean_object* v_00_u03b2_5649_, lean_object* v_keys_5650_, lean_object* v_vals_5651_, lean_object* v_heq_5652_, lean_object* v_i_5653_, lean_object* v_k_5654_){
_start:
{
uint8_t v___x_5655_; 
v___x_5655_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___redArg(v_keys_5650_, v_i_5653_, v_k_5654_);
return v___x_5655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70___boxed(lean_object* v_00_u03b2_5656_, lean_object* v_keys_5657_, lean_object* v_vals_5658_, lean_object* v_heq_5659_, lean_object* v_i_5660_, lean_object* v_k_5661_){
_start:
{
uint8_t v_res_5662_; lean_object* v_r_5663_; 
v_res_5662_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_elabAttr___at___00Lean_Elab_elabAttrs___at___00Lean_Elab_elabDeclAttrs___at___00Lean_Elab_elabModifiers___at___00Lean_Elab_Command_elabNewtype_spec__0_spec__1_spec__8_spec__28_spec__41_spec__54_spec__60_spec__66_spec__70(v_00_u03b2_5656_, v_keys_5657_, v_vals_5658_, v_heq_5659_, v_i_5660_, v_k_5661_);
lean_dec_ref(v_k_5661_);
lean_dec_ref(v_vals_5658_);
lean_dec_ref(v_keys_5657_);
v_r_5663_ = lean_box(v_res_5662_);
return v_r_5663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1(){
_start:
{
lean_object* v___x_5677_; lean_object* v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; 
v___x_5677_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_5678_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__1));
v___x_5679_ = ((lean_object*)(l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___closed__3));
v___x_5680_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabNewtype___boxed), 4, 0);
v___x_5681_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5677_, v___x_5678_, v___x_5679_, v___x_5680_);
return v___x_5681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1___boxed(lean_object* v___y_5682_){
_start:
{
lean_object* v_res_5683_; 
v_res_5683_ = l___private_Lean_Elab_NewType_0__Lean_Elab_Command_elabNewtype___regBuiltin_Lean_Elab_Command_elabNewtype__1();
return v_res_5683_;
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
